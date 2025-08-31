/*
* ExileServer_BSF_network_BSFupdateGreetingRequest
* BSF_Server\code\ExileServer_BSF_network_BSFupdateGreetingRequest.sqf
* 
* format['BSF_Update_Greeting:%1', _playerUID] call ExileServer_system_database_query_fireAndForget;
*
* BS-Free Game Servers
* www.bs-free.com
* © 2023 Troy - BS-Free
*
* This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
* To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
*/

params ["_sessionID","_data"];
_playerUID = _data select 0;

format['BSF_Update_Greeting:%1',_playerUID] call ExileServer_system_database_query_fireAndForget;
format ["BSFupdateGreetingRequest: _playerUID: %1", _playerUID] call BSF_Server_Util_Debug;