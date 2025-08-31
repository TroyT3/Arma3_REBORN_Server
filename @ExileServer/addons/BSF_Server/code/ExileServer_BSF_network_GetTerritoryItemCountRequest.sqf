/*
* ExileServer_BSF_network_GetTerritoryItemCountRequest
* BSF_Server\code\ExileServer_BSF_network_GetTerritoryItemCount.sqf
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

params ["_sessionID", "_parameters"];
private ["_owner", "_page", "_pageSize", "_constructionIDs", "_constructionCount", "_containerIDs", "_containerCount", "_response"];
_thisFile = "GetTerritoryItemCount.sqf";
systemChat format ["ItemCountRequest BSF_Debug = %1",BSF_Debug];

_id = _parameters select 0;
_owner = _parameters select 1;
_page = 0;
_pageSize = 100;
TerritoryItemCount = nil;
_owner publicVariableClient "TerritoryItemCount";

format["%1 - Start", _thisFile] call BSF_Server_Util_Debug;
format["%1 - _this %2",_thisFile, _this] call BSF_Server_Util_Debug;
format["%1 - _parameters %2",_thisFile, _parameters] call BSF_Server_Util_Debug;
format["%1 - _id %2",_thisFile, _id] call BSF_Server_Util_Debug;
format["%1 - _owner %2",_thisFile, _owner] call BSF_Server_Util_Debug;

try 
{
	_constructionIDs = format ["BSF_CountTerritoryConstructions:%1:%2:%3",_id, _page * _pageSize, _pageSize] call ExileServer_system_database_query_selectFull;
	_constructionCount = count _constructionIDs;

	_containerIDs = format ["BSF_CountTerritoryContainers:%1:%2:%3",_id, _page * _pageSize, _pageSize] call ExileServer_system_database_query_selectFull;
	_containerCount = count _containerIDs;

	_response = _constructionCount + _containerCount;
	[_sessionID, "GetTerritoryItemCountResponse",[_response]] call ExileServer_system_network_send_to;

	TerritoryItemCount = _response;
	_owner publicVariableClient "TerritoryItemCount";
}
catch 
{
	[_sessionID, "toastRequest", ["ErrorTitleAndText", ["Well, hell", _exception]]] call ExileServer_system_network_send_to;
};