/*
* BSF_Client_DualArms_StorePrimary
*
* BS-Free Game Servers
* www.bs-free.com
* © 2025 Troy - BS-Free
*
* This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
* To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
*/
if (!hasInterface) exitWith {};

private _player = player;
if (isNull _player) exitWith {};
if (vehicle _player != _player) exitWith { systemChat "Cannot sling while in vehicle."; };

private _ld = getUnitLoadout _player;
private _primary = _ld select 0; // primary weapon array or []

// Ensure there is a primary weapon to sling
if (_primary isEqualType [] && {(count _primary) > 0}) then {
    // Do not allow slinging if already have a stored secondary
    private _sec = _player getVariable ["BSF_DA_secondary", []];
    if (!(_sec isEqualTo [])) exitWith { systemChat "Already slinging a weapon."; };

    // Save current primary as secondary
    _player setVariable ["BSF_DA_secondary", _primary, true];

    // Remove primary from loadout
    _ld set [0, []];
    _player setUnitLoadout _ld;

    systemChat "Primary slung on back.";
    // update visual proxy
    if (isNil {missionNamespace getVariable 'BSF_Client_DualArms_UpdateProxy'}) then {
        missionNamespace setVariable ['BSF_Client_DualArms_UpdateProxy', compileFinal (preprocessFileLineNumbers 'BSF_Client\\code\\BSF_Client_DualArms_UpdateProxy.sqf')];
    };
    [] call BSF_Client_DualArms_UpdateProxy;
} else {
    systemChat "No primary weapon to sling.";
};

true
