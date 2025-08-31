/*
* ExileServer_AssetManagement_network_BSFretrieveVehicleRequest
* \BSF_Server\code\server\
*
* BS-Free Game Servers
* www.bs-free.com
* © 2023 Troy - BS-Free
*
* This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
* To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
*/
params ["_sessionID","_data"];
_vehicleID = _data select 0;

// _nickname = _parameters select 0;
diag_log format["ExileServer_AssetManagement_network_BSFretrieveVehicleRequest _this: %1",_this, typeName _this];
diag_log format["ExileServer_AssetManagement_network_BSFretrieveVehicleRequest _data: %1",_data, typeName _data];
diag_log format["ExileServer_AssetManagement_network_BSFretrieveVehicleRequest _vehicleID: %1",_vehicleID, typeName _vehicleID];

try
{
	_playerObject = _sessionID call ExileServer_system_session_getPlayerObject;
	if (isNull _playerObject) then 
	{
		throw "Player is null";
	};
	if (_playerObject getVariable ["ExileMutex",false]) then
	{
		throw "Player is Mutex";
	};
	_playerObject setVariable ["ExileMutex", true];
	_flagObject = _playerObject call ExileClient_util_world_getTerritoryAtPosition;
	if (isNull _flagObject) then 
	{
		throw "Invalid Flag";
	};
	if (_flagObject getVariable [format["Exile%1Mutex", toLower(_nickname)], false]) then 
	{
		throw "Vehicle is being processed by another player.";
	};
	_flagObject setVariable [format["Exile%1Mutex", toLower(_nickname)], true];
	
	// _territoryID = _flagObject getVariable ["ExileDatabaseID", -1];
	// _vehicleInfo = format["confirmVehicleOwnership:%1:%2", _nickname,_territoryID] call ExileServer_system_database_query_selectSingle;
	// 	if !((_vehicleInfo select 1) isEqualTo _territoryID) then 
	// {
	// 	throw "Vehicle does not belong to this territory!";
	// };

	_buildRights = _flagObject getVariable ["ExileTerritoryBuildRights", []];
	if !((getPlayerUID _playerObject) in _buildRights) then 
	{
		throw "You do not have rights to access this Virtual Garage";
	};

	// _storedVehicles = _flagObject getVariable ["ExileTerritoryStoredVehicles", []];
	// _index = -1;
	// {
	// 	if (toLower(_x select 1) isEqualTo toLower(_nickname)) exitWith 
	// 	{
	// 		_index = _forEachIndex;	
	// 	};
	// }
	// forEach _storedVehicles;
	// if (_index isEqualTo -1) then 
	// {
	// 	throw "Unable to find vehicle in stored vehicles";
	// };
	// _storedVehicles deleteAt _index;
	// _flagObject setVariable ["ExileTerritoryStoredVehicles", _storedVehicles, true];

	format["retrieveVehicle:%1", _vehicleID] call ExileServer_system_database_query_fireAndForget;
	_vehicleID call ExileServer_object_vehicle_database_load;
	// [_vehicleID, 1] call ExileServer_object_vehicle_database_load;	// VG Integration put on hold due to questions about including clan vehicles

	[_sessionID, "BSFretrieveVehicleResponse", [true]] call ExileServer_system_network_send_to;

}
catch
{
	[_sessionID, "BSFretrieveVehicleResponse", [false]] call ExileServer_system_network_send_to;
	[_sessionID, "toastRequest", ["ErrorTitleAndText", ["Retrieve Vehicle Failed!", _exception]]] call ExileServer_system_network_send_to;
	_exception call ExileServer_util_log;	
};

_playerObject setVariable ["ExileMutex", false];
true