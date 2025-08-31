/*
* ExileServer_BSF_network_UpdateRebornStatsRequest
* BSF_Server\code\ExileServer_BSF_network_UpdateRebornStatsRequest.sqf
* 
* BS-Free Game Servers
* www.bs-free.com
* © 2023 Troy - BS-Free
*
* This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
* To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
*/

params ["_sessionID", "_data"];
_parameters = _data select 0;
_parameters params ["_EVRresistance", "_WoundsTreated", "_Infected", "_InfectionAmount", "_playerID"];
 
try {
	format["BSF_updateREBORN_Stats:%1:%2:%3:%4:%5",_EVRresistance, _WoundsTreated, _Infected, _InfectionAmount, _playerID] call ExileServer_system_database_query_fireAndForget;
}
catch 
{
	[_sessionID, "toastRequest", ["ErrorTitleAndText", ["Well, hell", _exception]]] call ExileServer_system_network_send_to;
};

