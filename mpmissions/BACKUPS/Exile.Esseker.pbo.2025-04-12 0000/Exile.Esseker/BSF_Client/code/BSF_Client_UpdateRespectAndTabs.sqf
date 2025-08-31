/*
* BSF_Client_UpdateRespectAndTabs.sqf
* BSF_Client\code\
* 
* (findDisplay 46) createDisplay "BSF_AssetManagement_Dialog";
*
* BS-Free Game Servers
* www.bs-free.com
* © 2023 Troy - BS-Free
*
* This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
* To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
*/
private ["_respectChange","_popTabsChange","_isIncrease"];

_respectChange = _this select 0;
_popTabsChange = _this select 1;
_isIncrease = _this select 2;

if (_isIncrease) then
{	
	ExileClientPlayerScore = ExileClientPlayerScore + _respectChange;
}
else
{
	ExileClientPlayerScore = ExileClientPlayerScore - _respectChange;
};	

["updateRespectAndTabs", [_respectChange,_popTabsChange,_isIncrease]] call ExileClient_system_network_send;
[] call ExileClient_object_player_save;