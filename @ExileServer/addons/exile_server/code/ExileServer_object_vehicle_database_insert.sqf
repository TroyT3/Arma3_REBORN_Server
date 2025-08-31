/**
 * ExileServer_object_vehicle_database_insert
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_vehicleObject", "_position", "_vectorDirection", "_vectorUp", "_data", "_extDB2Message", "_vehicleID"];
_vehicleObject = _this;
_position = getPosATL _vehicleObject;
_vectorDirection = vectorDir _vehicleObject;
_vectorUp = vectorUp _vehicleObject;

_vehicleName = VehicleNameMap getOrDefault [typeOf _vehicleObject, "Name Not Available"]; // HashMap created in 'BSF_Server\init\fn_preInit.sqf

_data =
[
	typeOf _vehicleObject,
	_vehicleObject getVariable ["ExileOwnerUID", ""],
	locked _vehicleObject,
	_position select 0,
	_position select 1,
	_position select 2,
	_vectorDirection select 0, 
	_vectorDirection select 1,
	_vectorDirection select 2,
	_vectorUp select 0,
	_vectorUp select 1,
	_vectorUp select 2,
	_vehicleObject getVariable ["ExileAccessCode",""],
	_vehicleName
];
_extDB2Message = ["insertVehicle", _data] call ExileServer_util_extDB2_createMessage;
_vehicleID = _extDB2Message call ExileServer_system_database_query_insertSingle;
_vehicleObject setVariable["ExileDatabaseID", _vehicleID,true]; // BSF Edit
// _vehicleObject setVariable["ExileDatabaseID", _vehicleID];
_vehicleObject setVariable["ExileIsPersistent", true];

////// BEGIN AssetManagement
_vehicleObject setVariable ["BSF_MarkerOn", 0, true];
_vehicleOwnerUID = _vehicleObject getVariable ['ExileOwnerUID',''];
// diag_log format["################ ExileServer_object_vehicle_database_insert _vehicleOwnerUID: %1 - %2",_vehicleOwnerUID, typeName _vehicleOwnerUID];
_vehicleOwnerObj = objNull;
{
	_playerUID = getPlayerUID _x;
	// diag_log format["################ ExileServer_object_vehicle_database_insert _playerUID: %1 - %2",_playerUID, typeName _playerUID];
	if (_vehicleOwnerUID == _playerUID) then {_vehicleOwnerObj = _x}; 
} forEach allPlayers;

// diag_log format["################ ExileServer_object_vehicle_database_insert _vehicleOwnerObj: %1 - %2",_vehicleOwnerObj, typeName _vehicleOwnerObj];
_xData = [];
[_vehicleOwnerObj, 'PlayerVehiclesUpdateResponse', [['add', _vehicleID, '', _vehicleObject, _xData]]] call ExileServer_system_network_send_to;
////// End AssetManagement

///// BSF Vehicle purchase DB logging	
// _playerName = _vehicleOwnerObj getVariable ["ExileName",""];
// _vehicleClass = typeOf _vehicleObject;
// _vehicleName = VehicleNameMap getOrDefault [_vehicleClass, "Name Not Available"]; // HashMap created in 'BSF_Server\init\fn_preInit.sqf
// _pinCode = _vehicleObject getVariable ["ExileAccessCode",""],
// format["BSFVehiclePurchaseLog:%1:%2:%3:%4:%5:%6",_vehicleID, _vehicleClass, _vehicleOwnerUID, _playerName, _pinCode, _vehicleName] call ExileServer_system_database_query_fireAndForget;

_vehicleID