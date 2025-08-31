/*
* ExileServer_AssetManagement_network_GiveVehicleAwayRequest.sqf
* \BSF_Server\code
*
* BS-Free Game Servers
* www.bs-free.com
* © 2023 Troy - BS-Free
*
* This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
* To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
*/
params ["_sessionID", "_data"];
_data params ["_playerNetID", "_vehObject", "_newOwnerNetID"];

try
{
	_playerObj = objectFromNetID _playerNetID;
	_newOwnerObj = objectFromNetID _newOwnerNetID;
	_ownerUID = _newOwnerObj getVariable ["ExileOwnerUID",""];

	_vehID = _vehObject getVariable ["ExileDatabaseID",-1];
	_vehObject setVariable ["ExileOwnerUID", _ownerUID, true];
	_vehObject setVariable ["ExileIsLocked",0, true];
	_vehObject setVariable ["ExileAccessCode", "0000", true];

	[_sessionID, "PlayerVehiclesUpdateResponse", [["delete", _vehID, "", "", ""]]] call ExileServer_system_network_send_to;
	[_newOwnerObj, "PlayerVehiclesUpdateResponse", [["add", _vehID, "", _vehObject, ""]]] call ExileServer_system_network_send_to;

	["BSF_AssetManagement_Dialog"] remoteExecCall ["createDialog", _playerObj];
}
catch
{
	[_sessionID, "toastRequest", ["ErrorTitleAndText", ["Give vehicle failed!", _exception]]] call ExileServer_system_network_send_to;
	_exception call ExileServer_util_log;	
};

true