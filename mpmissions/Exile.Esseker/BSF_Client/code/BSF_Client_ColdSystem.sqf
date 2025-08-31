/*
    BSF_Client_ColdSystem.sqf
    A lightweight, tunable cold/temperature model for Arma 3/Exile.

    WHAT IT DOES
    - Computes gear insulation (uniform, vest, backpack, headgear, facewear).
    - Tracks wetness (rain, swimming, water contact) and drying.
    - Accounts for wind chill, rain, altitude lapse, sun factor, shelter, vehicle enclosure.
    - Integrates toward a body temperature and exposes a "coldness score" and risk bands.

    HOW TO USE
    - Call BSF_fnc_coldInit once on client.
    - Read vars off the player:
        player getVariable ["BSF_BodyTempC", 37];
        player getVariable ["BSF_ColdScore", 0]; // 0..100
        player getVariable ["BSF_ColdTier", "OK"]; // "OK","Chilly","Cold","VeryCold","Hypothermia"
        player getVariable ["BSF_GearInsulation", 0]; // 0..1
        player getVariable ["BSF_Wetness", 0]; // 0..1
*/

if (isNil "BSF_fnc_coldInit") then {

    // ==============================
    // TUNING CONSTANTS
    // ==============================
    BSF_Cold_Conf = [
        // Physics-ish
        ["baseComfortC", 24],           // comfy ambient when dry/still
        ["lapseRateCperM", -0.0065],    // temp change per meter altitude (approx)
        ["windChillK", 10],             // how strong wind affects chill (0..∞)
        ["rainChillK", 8],              // how strong rain increases chill
        ["sunBonusK", 6],               // sun warmth
        ["shelterBonusK", 6],           // indoors/leeward benefit
        ["vehicleBonusK", 4],           // enclosed vehicle benefit

        // Wetness
        ["wetGainSwim", 0.15],          // add per tick when swimming
        ["wetGainRainK", 0.02],         // rain * this per tick
        ["wetDryK", 0.03],              // base drying per tick
        ["wetDryWindK", 0.015],         // extra drying per tick per windStr
        ["wetDryWarmK", 0.02],          // extra drying per tick if (bodyTemp > env)

        // Insulation
        ["insulUniformBase", 0.05],
        ["insulVestBase", 0.07],
        ["insulBackpackBase", 0.03],
        ["insulHeadBase", 0.02],
        ["insulFaceBase", 0.01],
        // multipliers for known warm sets
        ["insulMild", 0.10],
        ["insulWarm", 0.34],
        ["insulHeadMild", 0.07],
        ["insulHeadWarm", 0.15],

        // Metabolism/Activity
        ["activityHeatK", 4],           // adds warmth when moving (speed/stance)
        ["injuryColdK", 10],            // colder if injured (damage 0..1)

        // Body model
        ["startBodyC", 37],
        ["minBodyC", 30],
        ["maxBodyC", 41],
        ["relaxK", 0.06],               // how fast body temp moves toward target each tick (0..1)
        ["tickSeconds", 10],            // update period

        // Scoring thresholds (Celsius)
        ["tierChilly", 36.0],
        ["tierCold", 35.0],
        ["tierVeryCold", 34.0],
        ["tierHypo", 33.0]
    ];

    // Helper to fetch constant
    BSF_fnc_coldCfg = {
        params ["_key"];
        private _m = BSF_Cold_Conf findIf { (_x select 0) isEqualTo _key };
        if (_m < 0) exitWith {0};
        (BSF_Cold_Conf select _m) select 1
    };

    // Your curated lists (trimmed to essentials you shared; keep using your full arrays)
    BSF_Cold_veryWarmClothing = [
        "U_B_GhillieSuit","U_O_GhillieSuit","U_I_GhillieSuit",
        "U_B_FullGhillie_lsh","U_B_FullGhillie_sard","U_B_FullGhillie_ard",
        "U_O_FullGhillie_lsh","U_I_FullGhillie_ard","U_I_FullGhillie_lsh",
        "U_O_FullGhillie_sard","U_C_WorkerCoveralls","Exile_Uniform_BambiOverall",
        "U_B_T_FullGhillie_tna_F","U_O_T_FullGhillie_tna_F"
    ];
    BSF_Cold_mildClothing = [
        "Exile_Uniform_Woodland","U_O_SpecopsUniform_ocamo","U_O_SpecopsUniform_blk",
        "U_B_SpecopsUniform_sgg","U_O_OfficerUniform_ocamo","U_O_CombatUniform_oucamo",
        "U_O_CombatUniform_ocamo","U_I_OfficerUniform","U_I_CombatUniform",
        "U_B_CTRG_3","U_B_CTRG_1","U_B_CombatUniform_mcam","U_B_CombatUniform_wdl",
        "U_B_CombatUniform_sgg","U_B_CTRG_Soldier_urb_1_F"
    ];
    BSF_Cold_veryWarmHead = [
        "H_ShemagOpen_tan","H_ShemagOpen_khk","H_Shemag_tan",
        "H_Shemag_olive_hs","H_Shemag_olive","H_Shemag_khk"
    ];
    BSF_Cold_mildHead = [
        "H_Watchcap_blk","H_Watchcap_camo","H_Watchcap_khk","H_Watchcap_sgg",
        "H_Bandanna_khk","H_Bandanna_cbr","H_Bandanna_sgg","H_Bandanna_mcamo"
    ];

    // Heuristic: if classname hints at warmth (so you don’t have to whitelist everything)
    BSF_fnc_warmHint = {
        params ["_cls"];
        private _lc = toLower _cls;
        // adjust/expand as you like
        if (_lc find "ghillie" >= 0) exitWith {2};       // very warm
        if (_lc find "coverall" >= 0) exitWith {2};
        if (_lc find "sniper" >= 0) exitWith {2};
        if (_lc find "wetsuit" >= 0) exitWith {0};       // cold when out of water
        if (_lc find "pilot" >= 0) exitWith {1};
        if (_lc find "ctrg" >= 0) exitWith {1};
        if (_lc find "wdl" >= 0) exitWith {1};           // woodland
        0
    };

    // Returns 0..1 insulation from gear
    BSF_fnc_getGearInsulation = {
        params ["_unit"];
        private _ins = 0;

        private _insulUniformBase = ["insulUniformBase"] call BSF_fnc_coldCfg;
        private _insulVestBase = ["insulVestBase"] call BSF_fnc_coldCfg;
        private _insulBackpackBase = ["insulBackpackBase"] call BSF_fnc_coldCfg;
        private _insulHeadBase = ["insulHeadBase"] call BSF_fnc_coldCfg;
        private _insulFaceBase = ["insulFaceBase"] call BSF_fnc_coldCfg;
        private _insulMild = ["insulMild"] call BSF_fnc_coldCfg;
        private _insulWarm = ["insulWarm"] call BSF_fnc_coldCfg;
        private _insulHeadMild = ["insulHeadMild"] call BSF_fnc_coldCfg;
        private _insulHeadWarm = ["insulHeadWarm"] call BSF_fnc_coldCfg;

        // UNIFORM
        private _u = uniform _unit;
        if !(_u isEqualTo "") then {
            _ins = _ins + _insulUniformBase;
            if (_u in BSF_Cold_mildClothing) then { _ins = _ins + _insulMild; }
            else {
                if (_u in BSF_Cold_veryWarmClothing) then { _ins = _ins + _insulWarm; }
                else {
                    switch (_u call BSF_fnc_warmHint) do {
                        case 1: { _ins = _ins + 0.12; };
                        case 2: { _ins = _ins + 0.30; };
                        default {};
                    };
                };
            };
        };

        // VEST
        if !(vest _unit isEqualTo "") then { _ins = _ins_
