/*
* ExileServer_BSF_network_DeleteFlagRequest
* BSF_Server\code\ExileServer_BSF_network_DeleteFlagRequest.sqf
* 
* ['DeleteFlagRequest', [_flagID, _flagObject]] call ExileClient_system_network_send;
*
* BS-Free Game Servers
* www.bs-free.com
* © 2023 Troy - BS-Free
*
* This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
* To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
*/

params ["_sessionID"];
private ["_flagID", "_flagObject"];

_flagID = (_this select 1) select 0;
_flagObject = (_this select 1) select 1;

// diag_log format["ExileServer_BSF_network_DeleteFlagRequest: _this %1",_this];
// diag_log format["ExileServer_BSF_network_DeleteFlagRequest: _flagID %1",_flagID];
// diag_log format["ExileServer_BSF_network_DeleteFlagRequest: _flagObject %1",_flagObject];

try {
	[_sessionID, "toastRequest", ["SuccessTitleOnly", ["Territory Deleted!"]]] call ExileServer_system_network_send_to;
	format['deleteTerritory:%1', _flagID] call ExileServer_system_database_query_fireAndForget;
	deleteVehicle _flagObject;
}
catch 
{
	[_sessionID, "toastRequest", ["ErrorTitleAndText", ["Well, hell", _exception]]] call ExileServer_system_network_send_to;
};
