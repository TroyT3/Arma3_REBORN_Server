/*
* ExileServer_BSF_network_ChangeTerritoryRequest
* BSF_Server\code\ExileServer_BSF_network_ChangeTerritoryRequest.sqf
* 
*
* BS-Free Game Servers
* www.bs-free.com
* © 2023 Troy - BS-Free
*
* This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
* To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
*/

params ["_sessionID","_parameters"];
private ["_flagID", "_newTerritoryName", "_newFlagTexture", "_flagObject", "_flagTexture"];

_flagID = _parameters select 0;
_newTerritoryName = _parameters select 1;
_newFlagTexture = _parameters select 2;
_flagObject = _parameters select 3;

// diag_log format["ExileServer_BSF_network_ChangeTerritoryNameRequest: _this %1",_this];
// diag_log format["ExileServer_BSF_network_ChangeTerritoryNameRequest: _flagID %1",_flagID];
// diag_log format["ExileServer_BSF_network_ChangeTerritoryNameRequest: _newTerritoryName %1",_newTerritoryName];
// diag_log format["ExileServer_BSF_network_ChangeTerritoryNameRequest: _flagObject %1",_flagObject];

try {

	if(isNull _flagObject || _newTerritoryName isEqualTo "") exitWith {};

	_flagID = _flagObject getVariable ["ExileDatabaseID", -1];
	if(_flagID isEqualTo -1) exitWith {};

	_flagObject setVariable ["ExileTerritoryName", _newTerritoryName, true];
	_flagObject call ExileClient_system_territory_createLocationForTerritory;

	format["setTerritoryName:%1:%2",_newTerritoryName,_flagID] call ExileServer_system_database_query_fireAndForget;

	if(_newFlagTexture isEqualTo "") exitWith {};

	_flagTexture = flagTexture _flagObject;
	if(_flagTexture isEqualTo _newFlagTexture) exitWith {};
	format["setTerritoryFlagTexture:%1:%2",_newFlagTexture,_flagID] call ExileServer_system_database_query_fireAndForget;
	[[_flagObject,_newFlagTexture],{(_this select 0) setFlagTexture (_this select 1);}] remoteExecCall ["call",0,false];
}
catch 
{
	[_sessionID, "toastRequest", ["ErrorTitleAndText", ["Well, hell", _exception]]] call ExileServer_system_network_send_to;
};

