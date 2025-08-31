
/*
* BSF_Deploy_Bodyguard.sqf
* 
* BS-Free Game Servers
* www.bs-free.com
* © 2025 Troy - BS-Free
*
* This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
* To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
*/

private _unitList = [
    "I_G_resistanceLeader_F",
    "B_G_Story_Guerilla_01_F",
    "B_CTRG_soldier_M_medic_F",
    "B_Story_Pilot_F",
    "B_CTRG_soldier_engineer_exp_F"
];

private _rifles = [
    "arifle_Katiba_F",
    "arifle_Mk20C_F",
    "arifle_MX_F",
    "arifle_MX_Black_F",
    "arifle_MXM_Black_F",
    "arifle_TRG21_F",
    "arifle_ARX_blk_F",
    "srifle_EBR_F",
    "srifle_DMR_02_F",
    "srifle_DMR_05_blk_F"
];

private _handguns = [
    "hgun_Pistol_heavy_01_F",
    "hgun_ACPC2_F",
    "hgun_Rook40_F",
    "hgun_P07_blk_F"
];

private _quotes = [
    "Now stop whining about being lonely.",
    "Congratulations. You've unlocked meat shield mode.",
    "He may not be smart, but he shoots at the right team. Usually.",
    "Your new best friend has no life goals. Perfect match.",
    "This one doesn’t talk back. You’re welcome.",
    "If he dies, you can always blame lag.",
    "He follows orders… unlike Dave from your last squad.",
    "Your emotional support rifleman has arrived.",
    "Try not to get him killed in the first five minutes.",
    "This guy's loyalty is coded in, unlike your last squadmate.",
    "He doesn’t eat, sleep, or question your terrible decisions.",
    "Warning: Will not protect you from your own stupidity.",
    "You finally have someone to blame for friendly fire.",
    "He has no family. Lucky you.",
    "One respawnable companion coming right up.",
    "He’s here to help… unless helping gets him shot.",
    "AI stands for 'Almost Intelligent'. Good luck.",
    "He’s not much, but he’s all you’ve got."
];

if (ExilePlayerInSafezone) exitWith {
    ["ErrorTitleAndText", [
        format ["<t size='27'>Deployment Failed!</t>"],
        format ["<t size='23'>You can't deploy a soldier in a trader zone!</t>"]
        ]] call ExileClient_gui_toaster_addTemplateToast;
};

if (!("Exile_Item_BeefParts" in (magazines player))) exitWith {
    ["ErrorTitleAndText", [
        format ["<t size='27'>Missing Item</t>"],
        format ["<t size='23'>You need Beef Parts to recruit a soldier.</t>"]
        ]] call ExileClient_gui_toaster_addTemplateToast;
};

player removeItem "Exile_Item_BeefParts";
player playActionNow "Medic";

[_quotes, _unitList, _rifles, _handguns] spawn {
    params ["_quotes", "_unitList", "_rifles", "_handguns"];
    uisleep 5;

    private _spawnPos = player modelToWorld [0,2,0];
    private _isValidSurface = !(surfaceIsWater _spawnPos);

    if (!_isValidSurface) exitWith {
        player addItem "Exile_Item_BeefParts";
        ["ErrorTitleAndText", [
            format ["<t size='27'>AI Spawn Failed</t>"],
            format ["<t size='23'>Try standing on open, dry ground.</t>"]
        ]] call ExileClient_gui_toaster_addTemplateToast;
    };

    private _unitClass = selectRandom _unitList;
    private _unit = (group player) createUnit [_unitClass, _spawnPos, [], 0, "FORM"];

    if (isNull _unit) exitWith {
        player addItem "Exile_Item_BeefParts";
        format["[BSF] ERROR: Failed to spawn unit at %1 with classname %2", _spawnPos, _unitClass] call BSF_Client_Util_Debug;
        ["ErrorTitleAndText", [
            format ["<t size='27'>AI Spawn Failed</t>"],
            format ["<t size='23'>Something went wrong. Try again.</t>"]
        ]] call ExileClient_gui_toaster_addTemplateToast;
    };

    if (!(player isEqualTo (leader group player))) then {
        group player selectLeader player;
    };

    removeAllWeapons _unit;
    removeAllItems _unit;
    removeAllAssignedItems _unit;
    if !(isNull uniformContainer _unit) then { clearItemCargoGlobal uniformContainer _unit; };
    if !(isNull vestContainer _unit) then { clearItemCargoGlobal vestContainer _unit; };
    if !(isNull backpackContainer _unit) then { clearItemCargoGlobal backpackContainer _unit; };

    _unit addItem "Exile_Item_InstaDoc";

    private _rifle = selectRandom _rifles;
    private _handgun = selectRandom _handguns;
    _unit addWeapon _rifle;
    _unit addWeapon _handgun;

    private _magR = getArray (configFile >> "CfgWeapons" >> _rifle >> "magazines") select 0;
    private _magP = getArray (configFile >> "CfgWeapons" >> _handgun >> "magazines") select 0;

    for "_i" from 1 to (3 + floor random 3) do {
        _unit addMagazine _magR;
    };
    _unit addMagazine _magP;

    _unit setSkill ["aimingAccuracy", 0.9];
    _unit setSkill ["aimingShake", 0.9];
    _unit setSkill ["aimingSpeed", 0.9];
    _unit setSkill ["spotDistance", 0.9];
    _unit setSkill ["spotTime", 0.9];
    _unit setSkill ["courage", 1.0];
    _unit setSkill ["reloadSpeed", 1.0];
    _unit setSkill ["commanding", 1.0];
    _unit setSkill ["general", 0.9];
    _unit setCombatMode "RED";
    _unit allowFleeing 0;

    doStop _unit;
    _unit doFollow player;
    group player setFormation "DIAMOND";
    _unit setFormation "DIAMOND";
    _unit setBehaviour "AWARE";
    _unit setSpeedMode "NORMAL";

    private _msg = selectRandom _quotes;
    ["SuccessTitleAndText", [
        format ["<t size='27'>Bodyguard Deployed</t>"],
        format ["<t size='23'>%1</t>", _msg]
    ]] call ExileClient_gui_toaster_addTemplateToast;
};
