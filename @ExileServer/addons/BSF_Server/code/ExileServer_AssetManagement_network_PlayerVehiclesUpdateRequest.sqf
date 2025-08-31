/*
* ExileServer_AssetManagement_network_PlayerVehiclesUpdateRequest.sqf
* \BSF_Server\code\server\
*
* BS-Free Game Servers
* www.bs-free.com
* © 2023 Troy - BS-Free
*
* This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
* To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
*/

diag_log format["ExileServer_AssetManagement_network_PlayerVehiclesUpdateRequest START ########################"];

params ["_sessionID","_data"];
_data params ["_option", "_vehID", "_territoryID","_vehObject"];

_ownerUID = _vehObject getVariable ['ExileOwnerUID',''];
_playerObj = objNull;
{
_playerUID = getPlayerUID _x;
diag_log format["################ PlayerVehiclesUpdateRequest _playerUID: %1 - %2",_playerUID, typeName _playerUID];
	if (_ownerUID == _playerUID) then {_playerObj = _x}; 
} forEach allPlayers;
_xData = [];
[_playerObj, 'PlayerVehiclesUpdateResponse', [['delete', 0, '', _vehObject, _xData]]] call ExileServer_system_network_send_to;


