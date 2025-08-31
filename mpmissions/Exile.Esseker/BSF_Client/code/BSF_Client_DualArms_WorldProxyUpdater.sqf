/*
* BSF_Client_DualArms_WorldProxyUpdater
*
* BS-Free Game Servers
* www.bs-free.com
* © 2025 Troy - BS-Free
*
* This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
* To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
*/

if (!hasInterface) exitWith {};

private _attachProxy = {
    params ["_unit", "_class"];
    private _model = getText (configFile >> "CfgWeapons" >> _class >> "model");
    if (_model isEqualTo "") exitWith { objNull };
    private _proxy = createSimpleObject [_model, [0,0,0]];
    if (isNull _proxy) exitWith { objNull };
    _proxy attachTo [_unit, [-0.08, -0.12, 0.20], "Spine3"];
    _proxy setVectorDirAndUp [[0.0, -0.98, -0.20], [0.0, 0.20, 0.98]];
    _proxy setObjectScale 1;
    _proxy
};

while {true} do
{
    {
        private _u = _x;
        if (isNull _u) then { continue };
        if (!alive _u) then {
            private _pxDead = _u getVariable ["BSF_DA_proxy_remote", objNull];
            if (!isNull _pxDead) then { deleteVehicle _pxDead; _u setVariable ["BSF_DA_proxy_remote", objNull, false]; _u setVariable ["BSF_DA_proxy_remote_class", "", false]; };
            continue;
        };
        if (_u isEqualTo player) then { continue };

        private _sec = _u getVariable ["BSF_DA_secondary", []];
        private _wantClass = if (_sec isEqualType [] && {(count _sec) > 0}) then { _sec select 0 } else { "" };
        private _px = _u getVariable ["BSF_DA_proxy_remote", objNull];
        private _curClass = _u getVariable ["BSF_DA_proxy_remote_class", ""];

        if (_wantClass isEqualTo "") then {
            if (!isNull _px) then { deleteVehicle _px; _u setVariable ["BSF_DA_proxy_remote", objNull, false]; _u setVariable ["BSF_DA_proxy_remote_class", "", false]; };
        } else {
            if (isNull _px || { _curClass != _wantClass }) then {
                if (!isNull _px) then { deleteVehicle _px; };
                private _newPx = [_u, _wantClass] call _attachProxy;
                if (!isNull _newPx) then {
                    _u setVariable ["BSF_DA_proxy_remote", _newPx, false];
                    _u setVariable ["BSF_DA_proxy_remote_class", _wantClass, false];
                };
            };
            // visibility per vehicle state
            private _px2 = _u getVariable ["BSF_DA_proxy_remote", objNull];
            if (!isNull _px2) then {
                if (vehicle _u != _u) then { _px2 hideObject true; } else { _px2 hideObject false; };
            };
        };
    } forEach allPlayers;

    uiSleep 1;
};

true

