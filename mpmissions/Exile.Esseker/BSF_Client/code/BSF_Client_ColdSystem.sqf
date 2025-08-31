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
        if !(vest _unit isEqualTo "") then { _ins = _ins + _insulVestBase; };

        // BACKPACK
        if !(backpack _unit isEqualTo "") then { _ins = _ins + _insulBackpackBase; };

        // HEADGEAR
        private _h = headgear _unit;
        if !(_h isEqualTo "") then {
            _ins = _ins + _insulHeadBase;
            if (_h in BSF_Cold_mildHead) then { _ins = _ins + _insulHeadMild; }
            else {
                if (_h in BSF_Cold_veryWarmHead) then { _ins = _ins + _insulHeadWarm; }
                else {
                    switch (_h call BSF_fnc_warmHint) do {
                        case 1: { _ins = _ins + 0.05; };
                        case 2: { _ins = _ins + 0.10; };
                        default {};
                    };
                };
            };
        };

        // FACEWEAR (scarves, balaclavas)
        private _f = goggles _unit;
        if !(_f isEqualTo "") then { _ins = _ins + _insulFaceBase; };

        // clamp 0..1
        _ins = _ins max 0 min 1;
        _ins
    };

    // Track & update wetness (0..1)
    BSF_fnc_updateWetness = {
        params ["_unit", "_dt"];
        private _wet = _unit getVariable ["BSF_Wetness", 0];

        private _rain = rain; // 0..1
        private _wind = windStr; // 0..1+
        private _gainSwim = ["wetGainSwim"] call BSF_fnc_coldCfg;
        private _gainRainK = ["wetGainRainK"] call BSF_fnc_coldCfg;
        private _dryK = ["wetDryK"] call BSF_fnc_coldCfg;
        private _dryWindK = ["wetDryWindK"] call BSF_fnc_coldCfg;
        private _dryWarmK = ["wetDryWarmK"] call BSF_fnc_coldCfg;

        // Gain
        if (surfaceIsWater (getPosASL _unit) || underwater _unit) then {
            _wet = _wet + _gainSwim * (_dt/10);
        } else {
            // add from rain if not under roof
            private _covered = lineIntersectsSurfaces [eyePos _unit, eyePos _unit vectorAdd [0,0,30], _unit, objNull, true, 1, "FIRE","VIEW"] isNotEqualTo [];
            if (!_covered) then {
                _wet = _wet + (_rain * _gainRainK) * (_dt/10);
            };
        };

        // Drying (faster with wind, and if body is warmer than env)
        private _bodyC = _unit getVariable ["BSF_BodyTempC", 37];
        private _envC = missionNamespace getVariable ["BSF_LastEnvC", 20];
        private _warmAdv = (_bodyC > _envC) ? 1 : 0;

        private _dry = (_dryK + _wind * _dryWindK + _warmAdv * _dryWarmK) * (_dt/10);
        _wet = _wet - _dry;

        _wet = _wet max 0 min 1;
        _unit setVariable ["BSF_Wetness", _wet, true];
        _wet
    };

    // Environment: returns effective ambient temperature near player (Celsius)
    BSF_fnc_effectiveEnvTempC = {
        params ["_unit"];

        // Base world temp proxy (you can replace with your map/season model if you have one)
        // Approximate from time of day: colder at night, warmer midday; then add overcast/rain
        private _hour = dayTime; // 0..24
        private _baseComfort = ["baseComfortC"] call BSF_fnc_coldCfg;
        private _daily = (_hour - 12); // peak around noon
        private _daySwing = 10;        // +/- day amplitude
        private _sky = overcast;       // 0..1
        private _rain = rain;          // 0..1

        private _approxC = _baseComfort - (_sky * 4) - (_rain * 3) - (abs _daily * 0.7);

        // Altitude lapse
        private _alt = (getPosASL _unit) select 2;
        private _lapse = ["lapseRateCperM"] call BSF_fnc_coldCfg;
        _approxC = _approxC + (_alt * _lapse);

        // Wind chill & rain chill
        private _wind = windStr; // 0..1+
        private _windK = ["windChillK"] call BSF_fnc_coldCfg;
        private _rainK = ["rainChillK"] call BSF_fnc_coldCfg;
        _approxC = _approxC - (_wind * _windK) - (_rain * _rainK);

        // Sun factor (if daytime & low overcast)
        private _sunK = ["sunBonusK"] call BSF_fnc_coldCfg;
        private _sun = (1 - _sky) * (1 - (abs _daily) / 12 max 0 min 1);
        _approxC = _approxC + (_sun * _sunK);

        // Shelter/vehicle bonuses
        private _shelterK = ["shelterBonusK"] call BSF_fnc_coldCfg;
        private _vehK = ["vehicleBonusK"] call BSF_fnc_coldCfg;
        private _inVeh = vehicle _unit != _unit;
        private _inside = isTouchingGround _unit && { (lineIntersectsSurfaces [eyePos _unit, eyePos _unit vectorAdd [0,0,50], _unit, objNull, true, 1, "FIRE","VIEW"]) isNotEqualTo [] };

        if (_inside) then { _approxC = _approxC + _shelterK; };
        if (_inVeh) then { _approxC = _approxC + _vehK; };

        missionNamespace setVariable ["BSF_LastEnvC", _approxC];
        _approxC
    };

    // Compute target skin temp from env, gear, wetness, movement, injury
    BSF_fnc_targetSkinTempC = {
        params ["_unit", "_envC"];

        private _ins = _unit getVariable ["BSF_GearInsulation", 0];
        private _wet = _unit getVariable ["BSF_Wetness", 0];
        private _actK = ["activityHeatK"] call BSF_fnc_coldCfg;
        private _injK = ["injuryColdK"] call BSF_fnc_coldCfg;

        // Movement factor (0..1): speed + stance (standing/sprinting warmest)
        private _spd = speed _unit; // m/s
        private _move = (_spd min 6) / 6; // 0..1
        private _stance = switch (stance _unit) do {
            case "PRONE": {0.0};
            case "CROUCH": {0.4};
            default {0.7};
        };
        private _activity = (_move * 0.7 + _stance * 0.3) min 1;

        private _damage = damage _unit; // 0..1

        // Effective chill offset: wetness cancels insulation; activity adds warmth
        private _insEff = _ins * (1 - _wet * 0.8);
        private _activityHeat = _activity * _actK;
        private _injuryCold = _damage * _injK;

        // Target skin temp leans toward env, pulled up by insulation & activity
        private _target = _envC + (12 * _insEff) + _activityHeat - _injuryCold;

        // Clamp plausible skin surface range
        _target = _target max -10 min 45;
        _target
    };

    // Advance body temp toward target; produce cold score and tier
    BSF_fnc_updateBodyTemp = {
        params ["_unit", "_dt"];

        private _body = _unit getVariable ["BSF_BodyTempC", ["startBodyC"] call BSF_fnc_coldCfg];
        private _envC = [_unit] call BSF_fnc_effectiveEnvTempC;
        private _ins = [_unit] call BSF_fnc_getGearInsulation;
        _unit setVariable ["BSF_GearInsulation", _ins, true];

        // update wetness first (depends on env/body)
        [_unit, _dt] call BSF_fnc_updateWetness;

        private _targetSkin = [_unit, _envC] call BSF_fnc_targetSkinTempC;
        private _relax = ["relaxK"] call BSF_fnc_coldCfg;

        // Move body temp toward (skin/env)—insulation reduces coupling; wetness increases it
        private _wet = _unit getVariable ["BSF_Wetness", 0];
        private _couple = (0.25 + (1 - _ins) * 0.55 + _wet * 0.35) min 1; // 0.25..1
        private _drive = (_targetSkin - _body) * _couple * _relax * (_dt / (["tickSeconds"] call BSF_fnc_coldCfg));

        _body = _body + _drive;
        _body = _body max (["minBodyC"] call BSF_fnc_coldCfg) min (["maxBodyC"] call BSF_fnc_coldCfg);
        _unit setVariable ["BSF_BodyTempC", _body, true];

        // Score & tier
        private _chilly = ["tierChilly"] call BSF_fnc_coldCfg;
        private _cold = ["tierCold"] call BSF_fnc_coldCfg;
        private _very = ["tierVeryCold"] call BSF_fnc_coldCfg;
        private _hypo = ["tierHypo"] call BSF_fnc_coldCfg;

        private _score = 0;
        if (_body <= _chilly) then { _score = 25; };
        if (_body <= _cold) then { _score = 50; };
        if (_body <= _very) then { _score = 75; };
        if (_body <= _hypo) then { _score = 95; };
        if (_body <= (_hypo - 1)) then { _score = 100; };

        private _tier = "OK";
        if (_score >= 25) then {_tier = "Chilly"};
        if (_score >= 50) then {_tier = "Cold"};
        if (_score >= 75) then {_tier = "VeryCold"};
        if (_score >= 95) then {_tier = "Hypothermia"};

        _unit setVariable ["BSF_ColdScore", _score, true];
        _unit setVariable ["BSF_ColdTier", _tier, true];

        // Return a compact struct
        [_body, _score, _tier, _ins, (_unit getVariable ["BSF_Wetness",0]), _envC, _targetSkin]
    };

    // Public: initialize PFH loop on client
    BSF_fnc_coldInit = {
        if (!hasInterface) exitWith {};
        private _tick = ["tickSeconds"] call BSF_fnc_coldCfg;

        player setVariable ["BSF_BodyTempC", ["startBodyC"] call BSF_fnc_coldCfg, true];
        player setVariable ["BSF_Wetness", 0, true];
        player setVariable ["BSF_GearInsulation", 0, true];
        player setVariable ["BSF_ColdScore", 0, true];
        player setVariable ["BSF_ColdTier", "OK", true];

        [] spawn {
            private _last = diag_tickTime;
            while {true} do {
                private _now = diag_tickTime;
                private _dt = _now - _last;
                _last = _now;

                // throttle to configured tick
                private _acc = missionNamespace getVariable ["BSF_Cold_acc",0] + _dt;
                private _step = ["tickSeconds"] call BSF_fnc_coldCfg;

                if (_acc >= _step) then {
                    missionNamespace setVariable ["BSF_Cold_acc", 0];
                    [player, _acc] call BSF_fnc_updateBodyTemp;
                } else {
                    missionNamespace setVariable ["BSF_Cold_acc", _acc];
                };

                uiSleep 0.2; // cheap loop, batches updates to ~tickSeconds
            };
        };
    };
};

// OPTIONAL: call this from your client init
// [] call BSF_fnc_coldInit;

/* DEBUG (toggle as needed)
[] spawn {
    waitUntil {sleep 1; !isNull player};
    [] call BSF_fnc_coldInit;
    while {true} do {
        private _bt = player getVariable ["BSF_BodyTempC",0];
        private _cs = player getVariable ["BSF_ColdScore",0];
        private _ti = player getVariable ["BSF_ColdTier","?"];
        private _in = player getVariable ["BSF_GearInsulation",0];
        private _wt = player getVariable ["BSF_Wetness",0];
        private _ec = missionNamespace getVariable ["BSF_LastEnvC",0];
        hintSilent format [
            "Body: %1°C\nCold: %2 (%3)\nInsul: %4\nWet: %5\nEnv: %6°C",
            _bt toFixed 2, _cs, _ti, _in toFixed 2, _wt toFixed 2, _ec toFixed 1
        ];
        sleep 2;
    };
};
*/
