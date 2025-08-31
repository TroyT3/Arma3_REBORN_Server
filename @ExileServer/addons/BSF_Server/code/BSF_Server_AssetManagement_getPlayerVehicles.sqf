/*
* BSF_Server_AssetManagement_getPlayerVehicles.sqf
* BSF_Server\code\
* 
* BS-Free Game Servers
* www.bs-free.com
* © 2023 Troy - BS-Free
*
* This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
* To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
*/


params ["_playerUID","_clanID"];
private [];

_clanMembers = [];
if ((typeName _clanID) isEqualTo "SCALAR") then {
_clanMembers = format ["getClanMembers:%1",_clanID] call ExileServer_system_database_query_selectFull;
};

_page = 0;
_pageSize = 100;
_vehicleIDs = format ["BSF_GetPlayerVehicleIDArray:%1:%2:%3", _playerUID, _page * _pageSize, _pageSize] call ExileServer_system_database_query_selectFull;
_numberOfVehicles = count _vehicleIDs;
format["%1 - REQUEST: _vehicleIDs for _playerUID: %2",_thisFile, _playerUID] call BSF_Server_Util_Debug;
format["%1 - REQUEST: _numberOfVehicles: %2",_thisFile, _numberOfVehicles] call BSF_Server_Util_Debug;

_playerVehicles = createHashmap;
{
	format["%1 - REQUEST: _x: %2",_vehicleIDs, _x] call BSF_Server_Util_Debug;

	_curVehID = _x select 0;
	_territoryID = _x select 1;
	_vehObject = objNull;
	format["%1 - REQUEST: _territoryID: %2, %3",_thisFile, _territoryID, typeName _territoryID] call BSF_Server_Util_Debug;

	if (typeName _territoryID isEqualTo "STRING") then {
		format["%1 - _territoryID TRUE: %2, %3",_thisFile, _territoryID, typeName _territoryID] call BSF_Server_Util_Debug;
		{
			_vehIDtoCheck = _x getVariable ["ExileDatabaseID", 0];
			if (_curVehID isEqualTo _vehIDtoCheck) exitWith
			{
				_vehObject = _x;
				format["%1 - REQUEST PASSED: _vehIDtoCheck: %2",_thisFile, _vehIDtoCheck] call BSF_Server_Util_Debug;
				format["%1 - REQUEST PASSED: _curVehID: %2",_thisFile, _curVehID] call BSF_Server_Util_Debug;
				format["%1 - REQUEST PASSED: _territoryID: %2",_thisFile, _territoryID] call BSF_Server_Util_Debug;
				format["%1 - REQUEST PASSED: _vehObject: %2",_thisFile, _vehObject] call BSF_Server_Util_Debug;
			};
		} forEach vehicles;
	}
	else 
	{
		diag_log format["_territoryID FALSE %1, %2",_territoryID, typeName _territoryID];
	};

	_thisVehicle = format ["BSF_GetPlayerVehicle:%1", _x select 0] call ExileServer_system_database_query_selectFull;
	(_thisVehicle select 0) pushBack _vehObject;
	_playerVehicles set [_thisVehicle select 0 select 0,_thisVehicle select 0];
} forEach _vehicleIDs;

_SMvehicleData = format ["SM_VirtualGarageRetrieveVehicle:%1", _playerUID] call ExileServer_system_database_query_selectFull;
diag_log format["REQUEST: _SMvehicleData: %1 - %2",_SMvehicleData, typeName _SMvehicleData];

if !(_SMvehicleData isEqualTo []) then {
	_SMvehicle = _SMvehicleData select 0;
	_SMvehicle params ["_vehClass", "_textures", "_fuel", "_hitPoints", "_damage", "_pin_code", "_money", "_ownerUID", "_cargo_items", "_cargo_magazines", "_cargo_weapons", "_cargo_container", "_ammo"];

	_vehID = 9999;
	_vehName = VehicleNameMap getOrDefault [_vehClass, "Name Not Available"]; // HashMap created in 'BSF_Server\init\fn_preInit.sqf
	_territoryID = "SM";
	_territoryName = "SM";
	_isLocked = 0;
	_position_x = 0;
	_position_y = 0;
	_position_z = 0;
	_clanName = "";
	_ownerName = "";
	_vehObject = objNull;
	_playerVehicles set [_vehID,[_vehID,_ownerUID,_vehClass,_vehName,_territoryID,_territoryName,_isLocked,_fuel,_damage,_pin_code,_position_x,_position_y,_position_z,_cargo_items,_cargo_magazines,_cargo_weapons,_cargo_container,_money,_hitPoints,_clanID,_clanName,_ownerName,_vehObject]];
};

_playerVehicles;
