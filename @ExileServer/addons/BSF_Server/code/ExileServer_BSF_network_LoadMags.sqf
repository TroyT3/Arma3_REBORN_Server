/*
* ExileServer_BSF_network_LoadMags
* BSF_Server\code\ExileServer_BSF_network_LoadMags.sqf
* 
* BS-Free Game Servers
* www.bs-free.com
* © 2023 Troy - BS-Free
*
* This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
* To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
*/

params ["_sessionID", "_parameters","_mags"];
private ["_playerUID", "_type", "_message", "_playerObject"];

_playerUID = _parameters select 0;
_type = _parameters select 1;

_message = "3:54";
["toastRequest", ["InfoTitleOnly", [format["FNC <br/>%1",_message]]]] call ExileServer_system_network_send_broadcast;			// DEBUG

_playerObject = _sessionID call ExileServer_system_session_getPlayerObject;

switch (_type) do {

	case "uniform": {
			_mags = format["BSF_uniform_mags:%1", _playerUID] call ExileServer_system_database_query_selectSingle;
			_playerObject setVariable ["BSF_Mags", _mags, true];
		_name = _playerObject getVariable ["ExileName",""];
		["toastRequest", ["InfoTitleOnly", [format["UNIFORM <br/>%1<br/>%2",_type,_name]]]] call ExileServer_system_network_send_broadcast;			// DEBUG
	};

	case "vest": {
			_mags = format["BSF_vest_mags:%1", _playerUID] call ExileServer_system_database_query_selectSingle;
			_playerObject setVariable ["BSF_Mags", _mags, true];
		_name = _playerObject getVariable ["ExileName",""];
		["toastRequest", ["InfoTitleOnly", [format["VEST <br/>%1<br/>%2",_type,_name]]]] call ExileServer_system_network_send_broadcast;			// DEBUG
	};

	case "backpack": {
			_mags = format["BSF_backpack_mags:%1", _playerUID] call ExileServer_system_database_query_selectSingle;
			_playerObject setVariable ["BSF_Mags", _mags, true];
		_name = _playerObject getVariable ["ExileName",""];
		["toastRequest", ["InfoTitleOnly", [format["BACKPACK <br/>%1<br/>%2",_type,_name]]]] call ExileServer_system_network_send_broadcast;			// DEBUG
	};
};

_mags