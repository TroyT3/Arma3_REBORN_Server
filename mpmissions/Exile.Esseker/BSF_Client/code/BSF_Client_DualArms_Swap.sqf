/*
* BSF_Client_DualArms_Swap
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
if (vehicle _player != _player) exitWith { systemChat "Cannot swap while in vehicle."; };

private _sec = _player getVariable ["BSF_DA_secondary", []];
if (_sec isEqualTo []) exitWith { systemChat "No slung weapon to swap."; };

private _ld = getUnitLoadout _player;
private _currentPrimary = _ld select 0; // [] if empty

// Swap
_ld set [0, _sec];
_player setVariable ["BSF_DA_secondary", _currentPrimary, true];
_player setUnitLoadout _ld;

systemChat "Swapped primary and slung weapon.";

// update visual proxy
if (isNil {missionNamespace getVariable 'BSF_Client_DualArms_UpdateProxy'}) then {
    missionNamespace setVariable ['BSF_Client_DualArms_UpdateProxy', compileFinal (preprocessFileLineNumbers 'BSF_Client\\code\\BSF_Client_DualArms_UpdateProxy.sqf')];
};
[] call BSF_Client_DualArms_UpdateProxy;

true
