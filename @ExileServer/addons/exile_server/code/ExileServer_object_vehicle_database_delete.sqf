/**
 * ExileServer_object_vehicle_database_delete
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_vehicleObject", "_vehicleID"];
diag_log format['################ ExileServer_object_vehicle_database_delete START'];

_vehicleObject = _this;
_vehicleID = _vehicleObject getVariable ["ExileDatabaseID", -1];

_SM_VG_Store = _vehicleObject getVariable ["BSF_SM_VG_Store", false];
diag_log format['################  _SM_VG_Store: %1 - %2',_SM_VG_Store, typeName _SM_VG_Store];

/////////////////////
if !(_SM_VG_Store) then {
diag_log format['################  _vehicleObject: %1 - %2',_vehicleObject, typeName _vehicleObject];
_ownerUID = _vehicleObject getVariable ['ExileOwnerUID',''];
diag_log format['################  _ownerUID: %1 - %2',_ownerUID, typeName _ownerUID];
_ownerObj = objNull;
{
_playerUID = getPlayerUID _x;
diag_log format['################  _playerUID: %1 - %2',_playerUID, typeName _playerUID];
if (_ownerUID == _playerUID) then {_ownerObj = _x}; 
} forEach allPlayers;
_xData = [];
[_ownerObj, 'PlayerVehiclesUpdateResponse', [['delete', _vehicleID, '', _vehicleObject, _xData]]] call ExileServer_system_network_send_to;
diag_log format['################ ExileServer_object_vehicle_database_delete END'];
};
/////////////////////


if (_vehicleID > -1) then
{
	format ["deleteVehicle:%1", _vehicleID] call ExileServer_system_database_query_fireAndForget;
};
true