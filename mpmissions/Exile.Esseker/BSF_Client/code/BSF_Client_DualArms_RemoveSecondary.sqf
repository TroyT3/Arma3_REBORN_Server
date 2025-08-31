/*
* BSF_Client_DualArms_RemoveSecondary
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

private _sec = _player getVariable ["BSF_DA_secondary", []];
if (_sec isEqualTo []) exitWith { systemChat "No slung weapon to drop."; };

private _wepClass = "";
if (_sec isEqualType [] && {(count _sec) > 0}) then {
    _wepClass = _sec select 0; // weapon class name
};

if (_wepClass isEqualType "" && {_wepClass != ""}) then {
    private _pos = getPosATL _player;
    private _holder = "GroundWeaponHolder" createVehicle _pos;
    _holder addWeaponCargoGlobal [_wepClass, 1];
};

_player setVariable ["BSF_DA_secondary", [], true];
systemChat "Dropped slung weapon.";

// update visual proxy
if (isNil {missionNamespace getVariable 'BSF_Client_DualArms_UpdateProxy'}) then {
    missionNamespace setVariable ['BSF_Client_DualArms_UpdateProxy', compileFinal (preprocessFileLineNumbers 'BSF_Client\\code\\BSF_Client_DualArms_UpdateProxy.sqf')];
};
[] call BSF_Client_DualArms_UpdateProxy;

true
