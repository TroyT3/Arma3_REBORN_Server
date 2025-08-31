/*
* BSF_Client_GetVehicleWheels.sqf
* 
* BS-Free Game Servers
* www.bs-free.com
* © 2023 Troy - BS-Free
*
* This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
* To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
*/

/*
    private _wheels = [_vehicle] call BSF_Client_GetVehicleWheels;
*/

params ["_vehicle"];

// simple cache (class -> wheel hitpoint names)
if (isNil "BSF_WheelHP_Cache") then { BSF_WheelHP_Cache = createHashMap; };
private _class  = typeOf _vehicle;
private _cached = BSF_WheelHP_Cache getOrDefault [_class, []];
if !(_cached isEqualTo []) exitWith { _cached };

// Get wheel hitpoints from config (include spares)
if (isNil "BSF_Client_getWheelHitpoints_Cfg") then {
    BSF_Client_getWheelHitpoints_Cfg = {
        params ["_vehOrClass"];
        private _className = if (_vehOrClass isEqualType objNull) then { typeOf _vehOrClass } else { _vehOrClass };
        private _hpCfgs = configProperties [configFile >> "CfgVehicles" >> _className >> "HitPoints", "isClass _x", true];
        private _hpNames = _hpCfgs apply { configName _x };
        _hpNames = _hpNames select { _x find "Wheel" >= 0 }; // include everything that looks like a wheel, spares included
        _hpNames arrayIntersect _hpNames  // dedupe just in case
    };
};

private _wheels = [_vehicle] call BSF_Client_getWheelHitpoints_Cfg;

// runtime fallback if config path was empty
if (_wheels isEqualTo []) then {
    private _hpInfo = getAllHitPointsDamage _vehicle;   // [names, selections, damages]
    _wheels = (_hpInfo select 0) select { _x find "Wheel" >= 0 };
    _wheels = _wheels arrayIntersect _wheels;           // dedupe
};

// last-resort default
if (_wheels isEqualTo []) then {
    _wheels = ["HitLF2Wheel","HitLFWheel","HitRFWheel","HitRF2Wheel"];
};

// add to cache & return
BSF_WheelHP_Cache set [_class, _wheels];
_wheels
