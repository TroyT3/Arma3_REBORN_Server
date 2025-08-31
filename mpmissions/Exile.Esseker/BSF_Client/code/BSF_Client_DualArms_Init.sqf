/*
* BSF_Client_DualArms_Init
*
* BS-Free Game Servers
* www.bs-free.com
* © 2025 Troy - BS-Free
*
* This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
* To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
*/

if (!hasInterface) exitWith {};

// Ensure variable exists
player setVariable ["BSF_DA_secondary", player getVariable ["BSF_DA_secondary", []], false];

// Re-run init after respawn
if (isNil {missionNamespace getVariable "BSF_DA_respawnEH"}) then
{
    missionNamespace setVariable [
        "BSF_DA_respawnEH",
        addMissionEventHandler ["PlayerRespawn", { [] spawn BSF_Client_DualArms_Init; }]
    ];
};

// Prevent duplicate addActions on same player entity
if (player getVariable ["BSF_DA_actionsAdded", false]) exitWith { true };

// Add scroll actions once, using conditions to control visibility
// Sling primary
player addAction [
    "Sling Primary (Dual Arms)",
    { [] call BSF_Client_DualArms_StorePrimary; },
    [], 1.5, false, true, "",
    "(primaryWeapon player) != '' && ((player getVariable ['BSF_DA_secondary', []]) isEqualTo []) && (vehicle player == player)"
];

// Swap primary <-> secondary
player addAction [
    "Swap Primary/Secondary (Dual Arms)",
    { [] call BSF_Client_DualArms_Swap; },
    [], 1.5, false, true, "",
    "!((player getVariable ['BSF_DA_secondary', []]) isEqualTo []) && (vehicle player == player)"
];

// Drop slung weapon
player addAction [
    "Drop Slung Weapon (Dual Arms)",
    { [] call BSF_Client_DualArms_RemoveSecondary; },
    [], 1.5, false, true, "",
    "!((player getVariable ['BSF_DA_secondary', []]) isEqualTo [])"
];

// On death, drop slung weapon to avoid dupes
player addEventHandler [
    "Killed",
    {
        params ["_unit"]; 
        private _sec = _unit getVariable ["BSF_DA_secondary", []];
        if (!(_sec isEqualTo [])) then {
            private _wepClass = if (_sec isEqualType [] && {(count _sec) > 0}) then { _sec select 0 } else { "" };
            if (_wepClass isEqualType "" && {_wepClass != ""}) then {
                private _holder = "GroundWeaponHolder" createVehicle (getPosATL _unit);
                _holder addWeaponCargoGlobal [_wepClass, 1];
            };
            _unit setVariable ["BSF_DA_secondary", [], true];
        };
        // remove proxy if present
        private _px = _unit getVariable ["BSF_DA_proxy", objNull];
        if (!isNull _px) then { deleteVehicle _px; _unit setVariable ["BSF_DA_proxy", objNull, false]; };
    }
];

// ensure visual matches state on init
if (isNil {missionNamespace getVariable 'BSF_Client_DualArms_UpdateProxy'}) then {
    missionNamespace setVariable ['BSF_Client_DualArms_UpdateProxy', compileFinal (preprocessFileLineNumbers 'BSF_Client\\code\\BSF_Client_DualArms_UpdateProxy.sqf')];
};
[] call BSF_Client_DualArms_UpdateProxy;

// Add vehicle visibility handlers once
if (isNil {player getVariable "BSF_DA_ehIn"}) then {
    private _ehIn = player addEventHandler [
        "GetInMan",
        { params ["_unit"]; private _px = _unit getVariable ["BSF_DA_proxy", objNull]; if (!isNull _px) then { _px hideObject true; } }
    ];
    player setVariable ["BSF_DA_ehIn", _ehIn, false];
};
if (isNil {player getVariable "BSF_DA_ehOut"}) then {
    private _ehOut = player addEventHandler [
        "GetOutMan",
        { params ["_unit"]; private _px = _unit getVariable ["BSF_DA_proxy", objNull]; if (!isNull _px) then { _px hideObject false; } }
    ];
    player setVariable ["BSF_DA_ehOut", _ehOut, false];
};

player setVariable ["BSF_DA_actionsAdded", true, false];

true
