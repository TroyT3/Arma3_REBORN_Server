/*
* BSF_Client_AssetManagement_LoadVehicles
* BSF_Client\code\
*
* BS-Free Game Servers
* www.bs-free.com
* © 2023 Troy - BS-Free
*
* This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
* To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
*/
private ["_display", "_ctrlVehiclesContainer", "_vehicles", "_vehIndex", "_thisVehicle", "_gridPos", "_vehIcon", "_vg", "_vgColor", "_health", "_damageColor", "_healthSTR", "_lockPic", "_marked", "_markedColor"];

disableSerialization;
format["############## 4 BSF_Client_AssetManagement_LoadVehicles ##############"] call BSF_Client_Util_Debug;

_display = uiNamespace getVariable ["BSF_AssetManagement_Dialog",displayNull];
_ctrlVehiclesContainer = (_display displayCtrl 30201);

_vehicles = BSF_PlayerVehicles;
_vehIndex = 0;
{
	_thisVehicle = _vehicles get _x;
	_thisVehicle params ["_vehID","_ownerUID","_vehClass","_vehName","_territoryID","_territoryName","_isLocked","_fuel","_damage","_pin_code","_position_x","_position_y","_position_z","_cargo_items","_cargo_magazines","_cargo_weapons","_cargo_container","_money","_hitPoints","_clanID","_clanName","_ownerName","_vehObject"];
	_gridPos = mapGridPosition [_position_x, _position_y];

	if (typeName _pin_code == "Scalar") then {_pin_code = str _pin_code;};
	_vehIcon = getText(configFile >> "CfgVehicles" >> _vehClass >> "picture");
	_gridColor = [1, 1, 1, 1]; 
	_vg = "VG";
	_vgColor = [];
	_totalDamage = 0;
	_hitPointCount = 0;
	_averageDamage = 0;

	switch true do {
		case (typeName _territoryID isEqualTo "SCALAR") : { // Stored in territory VG
			_vgColor = [15 / 255, 207 / 255, 15 / 255, 1]; // Green
			{
				_hitPointName = _x select 0;
				_damage = _x select 1;
				_totalDamage = _totalDamage + _damage;
				_hitPointCount = _hitPointCount +1;
			} forEach _hitPoints;
		};

		case (_territoryID isEqualTo "") : {	// Not in VG
			_vgColor = [207 / 255, 23 / 255, 10 / 255, 1]; // Red
			_isLocked = _vehObject getVariable ["ExileIsLocked",0];
			_fuel = fuel _vehObject;
			_damage = damage _vehObject;
			_pin_code = _vehObject getVariable ["ExileAccessCode","00000"];
			_gridPos = mapGridPosition (position _vehObject);
			_cargo_items = itemCargo _vehObject;
			_cargo_magazines = magazineCargo _vehObject;
			_cargo_weapons = weaponCargo _vehObject;
			_cargo_container =backpackCargo _vehObject;
			_money = _vehObject getVariable ["ExileMoney",0];

			_hitPointsDamage = getAllHitPointsDamage _vehObject;
			_hitPointsNamesArray = _hitPointsDamage select 0;
			_selectionsNamesArray = _hitPointsDamage select 1;
			_damageValuesArray = _hitPointsDamage select 2;
			_totalDamage = 0;
			_hitPointCount = 0;
			{
				_hitPoint = _x;
				if!(_hitPoint isEqualTo '')then
				{
					_hitPoint = _hitPoint select [3, count _hitPoint];
					_selection = _hitPointsNamesArray select _forEachIndex;
					if!(_selection isEqualTo '')then
					{
						_damage = _damageValuesArray select _forEachIndex;
						_totalDamage = _totalDamage + _damage;
						_hitPointCount = _hitPointCount +1;
					};
				};
			} forEach _hitPointsNamesArray;
		};

		case (_territoryID isEqualTo "SM") : {	// In SM VG
			_gridPos = "STORED";
			// _gridPos = "000000";
			_vgColor = [3 / 255, 11 / 255, 252 / 255, 1]; // Blue
			_gridColor = [129 / 255, 129 / 255, 129 / 255, 1];
			{
				_hitPointName = _x select 0;
				_damage = _x select 1;
				_totalDamage = _totalDamage + _damage;
				_hitPointCount = _hitPointCount +1;
			} forEach _hitPoints;
		}; 

		default {_vgColor = [129 / 255, 129 / 255, 129 / 255, 1];}; // Gray
	};

	_averageDamage = _totalDamage / _hitPointCount;

	_health = round((1 - _averageDamage) * 100);
	_damageColor = [0,0,0,1];
	_damageColor = _health call {
		if (_this < 5)  exitWith {[1,0.25,0,1]};
		if (_this < 15) exitWith {[1,0.45,0,1]};
		if (_this < 25) exitWith {[1,0.55,0,1]};
		if (_this < 35) exitWith {[1,0.65,0,1]};
		if (_this < 45) exitWith {[1,0.75,0,1]};
		if (_this < 55) exitWith {[1,0.85,0,1]};
		if (_this < 65) exitWith {[1,0.85,0,1]};
		if (_this < 75) exitWith {[0.9,0.85,0,1]};
		if (_this < 85) exitWith {[0.8,0.95,0,1]};
		if (_this < 95) exitWith {[0.6,0.95,0,1]};
		[0,1,0,1]
	};
	_healthSTR = format["%1%2",_health,"%"];

	switch (_isLocked) do { 
		case -1 : { _lockPic = "BSF_Client\images\BSF_icon_Locked.paa"; }; 
		case 0  : { _lockPic = "BSF_Client\images\BSF_icon_UnLocked.paa";}; 
		case 1  : { _lockPic = "BSF_Client\images\BSF_icon_UnLocked.paa"; }; 
		default {  /*...code...*/ }; 
	};

	{_lockPic = "BSF_Client\images\BSF_icon_UnLocked.paa";}; 

	_ctrlVehiclesContainer lnbAddRow [_vehName, _gridPos , _pin_code, _healthSTR, _vg];
	_ctrlVehiclesContainer lnbSetPicture [[_vehIndex, 0], _vehIcon];
	_ctrlVehiclesContainer lnbSetPictureColor  [[_vehIndex, 0], [0.8,0.8,0.8,1]];
	_ctrlVehiclesContainer lnbSetPictureRight [[_vehIndex, 0], _lockPic];
	_ctrlVehiclesContainer lnbSetData [[_vehIndex,0],str _vehID];
	_ctrlVehiclesContainer lnbSetData [[_vehIndex,1],_vehClass];
	_ctrlVehiclesContainer lnbSetColor [[_vehIndex, 1], _gridColor];
	_ctrlVehiclesContainer lnbSetColor [[_vehIndex, 3], _damageColor];
	_ctrlVehiclesContainer lnbSetColor [[_vehIndex, 4], _vgColor];

	_vehIndex = _vehIndex + 1;

format["AssetManagement_LoadVehicles: _vehID %1 %2",_vehID ,_vehClass] call BSF_Client_Util_Debug;

} forEach _vehicles;

["Inventory"] call BSF_Client_AssetManagement_GUI_Load;

_ctrlVehiclesContainer lnbSetCurSelRow 0;
format["############## 4 BSF_Client_AssetManagement_LoadVehicles END ##############"] call BSF_Client_Util_Debug;
