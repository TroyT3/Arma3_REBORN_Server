/*
* BSF_Client_Update_Reborn_Stats.sqf
* 
* BS-Free Game Servers
* www.bs-free.com
* © 2025 Troy - BS-Free
*
* This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
* To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
*/

[] spawn {
	waitUntil {
		sleep 0.1;
		BSF_UpdatingRebornStats isEqualTo true
	};

	private _EVRresistance = player getVariable ["BSF_Reborn_EVRresistance",false];
	private _WoundsTreated = player getVariable ["BSF_Reborn_WoundsTreated",false];
	private _WoundsTreatedValue = if (_WoundsTreated) then {1} else {0};
	private _Infected = player getVariable ["BSF_Reborn_Infected",false];
	private _InfectedValue = if (_Infected) then {1} else {0};
	private _InfectionAmount = player getVariable ["BSF_Reborn_InfectionAmount",0];
	private _player = getPlayerUID player;

	[format["BSF_UpdatingRebornStats = %1, %2, %3, %4", _EVRresistance, _WoundsTreatedValue, _InfectedValue, _InfectionAmount]] call BSF_Client_Util_Debug;

	["UpdateRebornStatsRequest",[
		[
		str(_EVRresistance),
		_WoundsTreatedValue,
		_InfectedValue, 
		str(_InfectionAmount),
		_player
		]
	]] call ExileClient_system_network_send;

	BSF_UpdatingRebornStats = false;
};