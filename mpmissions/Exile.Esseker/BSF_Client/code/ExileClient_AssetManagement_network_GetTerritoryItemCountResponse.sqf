/*
* ExileClient_BSF_network_GetTerritoryItemCountResponse
* \BSF_Client\code\ExileClient_BSF_network_GetTerritoryItemCountResponse.sqf
* 
* BS-Free Game Servers
* www.bs-free.com
* © 2023 Troy - BS-Free
*
* This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
* To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
*/

params ["_itemCount"];

diag_log format["GetTerritoryItemCountResponse: _this %1",_this];

["SuccessTitleOnly",format["GetTerritoryItemCountResponse %1", _itemCount]] call ExileClient_gui_toaster_addTemplateToast;
