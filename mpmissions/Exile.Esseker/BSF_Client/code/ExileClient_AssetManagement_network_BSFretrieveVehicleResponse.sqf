/*
* ExileClient_AssetManagement_network_BSFretrieveVehicleResponse.sqf
* \BSF_Client\code\
*
* BS-Free Game Servers
* www.bs-free.com
* © 2023 Troy - BS-Free
*
* This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
* To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
*/

params ["_response", "_info"];
if (_response) then 
{
	["SuccessTitleAndText", ["Vehicle Retrieval", "Your vehicle has been rematerialized"]] call ExileClient_gui_toaster_addTemplateToast;
};
ExileClientIsWaitingForServerTradeResponse = false;