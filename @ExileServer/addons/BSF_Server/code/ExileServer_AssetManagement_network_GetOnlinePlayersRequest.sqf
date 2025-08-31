/*
* ExileServer_AssetManagement_network_GetOnlinePlayersRequest.sqf
* \BSF_Server\code
*
* BS-Free Game Servers
* www.bs-free.com
* © 2023 Troy - BS-Free
*
* This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
* To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
*/
params ["_sessionID"];

diag_log format["GetOnlinePlayersRequest _this: %1",_this];

try
{
	_players = [];
	{
		_name = _x getVariable ["ExileName", -1];
		_uid = _x getVariable ["ExileOwnerUID", -1];
		_netID = netID _x;
		_players pushBack [_name, _uid, _netID];
	} forEach playableUnits;

	[_sessionID, "GetOnlinePlayersResponse", [_players]] call ExileServer_system_network_send_to;

}
catch
{
	[_sessionID, "toastRequest", ["ErrorTitleAndText", ["Retrieve online players failed!", _exception]]] call ExileServer_system_network_send_to;
	_exception call ExileServer_util_log;	
};

true


