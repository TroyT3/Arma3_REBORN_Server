/*
* BSF_Client_DualArms_UpdateProxy
*
* BS-Free Game Servers
* www.bs-free.com
* © 2025 Troy - BS-Free
*
* This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
* To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
*/

if (!hasInterface) exitWith {};

private _p = player;
if (isNull _p) exitWith {};

// Remove any existing proxy
private _existing = _p getVariable ["BSF_DA_proxy", objNull];
if (!isNull _existing) then {
    deleteVehicle _existing;
    _p setVariable ["BSF_DA_proxy", objNull, false];
};

// If there is a slung weapon, create and attach its model as a proxy
private _sec = _p getVariable ["BSF_DA_secondary", []];
if (_sec isEqualTo []) exitWith { true };

private _class = if (_sec isEqualType [] && {(count _sec) > 0}) then { _sec select 0 } else { "" };
if !(_class isEqualType "") exitWith { true };
if (_class isEqualTo "") exitWith { true };

private _model = getText (configFile >> "CfgWeapons" >> _class >> "model");
if (_model isEqualTo "") exitWith { true };

private _proxy = createSimpleObject [_model, [0,0,0]];
if (isNull _proxy) exitWith { true };

// Attach to spine; adjust offset/orientation for a reasonable on-back look
_proxy attachTo [_p, [-0.08, -0.12, 0.20], "Spine3"];
_proxy setVectorDirAndUp [[0.0, -0.98, -0.20], [0.0, 0.20, 0.98]];
_proxy setObjectScale 1;

// Store handle for later cleanup
_p setVariable ["BSF_DA_proxy", _proxy, false];

// Hide when in vehicle
true
