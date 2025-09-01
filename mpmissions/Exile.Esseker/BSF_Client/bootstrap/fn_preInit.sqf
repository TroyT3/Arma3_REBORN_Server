/*
 * BSF_Client\bootstrap\fn_preInit.sqf
 * BS-Free Game Servers
 * www.bs-free.com
 * © 2023 Troy - BS-Free
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */

private ['_code', '_function', '_file'];

{
	_code = '';
	_function = _x select 0;
	_file = _x select 1;
	_code = compileFinal (preprocessFileLineNumbers _file);					
	missionNamespace setVariable [_function, _code];
}
forEach 
[
	['BSF_Client_DualCarry_Init','BSF_Client\code\BSF_Client_DualCarry_Init.sqf'],
	['BSF_Client_DualCarry_StorePrimary','BSF_Client\code\BSF_Client_DualCarry_StorePrimary.sqf'],
	['BSF_Client_DualCarry_Swap','BSF_Client\code\BSF_Client_DualCarry_Swap.sqf'],
	['BSF_Client_DualCarry_RemoveSecondary','BSF_Client\code\BSF_Client_DualCarry_RemoveSecondary.sqf'],
	['BSF_Client_DualCarry_UpdateProxy','BSF_Client\code\BSF_Client_DualCarry_UpdateProxy.sqf'],
	['BSF_Client_DualCarry_WorldProxyUpdater','BSF_Client\code\BSF_Client_DualCarry_WorldProxyUpdater.sqf'],

	['BSF_Client_GetVehicleWheels','BSF_Client\code\BSF_Client_GetVehicleWheels.sqf'],
	['BSF_Client_Update_Reborn_Stats','BSF_Client\code\BSF_Client_Update_Reborn_Stats.sqf'],
	['BSF_Client_Changelog_Show','BSF_Client\code\BSF_Client_Changelog_Show.sqf'],
	['BSF_Client_ShowChangeLog','BSF_Client\code\BSF_Client_ShowChangeLog.sqf'],
	['ExileClient_BSF_network_CreateBambiVehicleMarkerResponse','BSF_Client\code\ExileClient_BSF_network_CreateBambiVehicleMarkerResponse.sqf'],
	['ExileClient_gui_xm8_slide_SpawnBambiVehicle_onOpen','BSF_Client\code\ExileClient_gui_xm8_slide_SpawnBambiVehicle_onOpen.sqf'],
	['ExileClient_gui_xm8_slide_donate_onOpen','BSF_Client\code\ExileClient_gui_xm8_slide_donate_onOpen.sqf'],
	// ['BSF_Keybind_AM','BSF_Client\code\BSF_Keybind_AM.sqf'],
	['BSF_Client_AssetManagement_FlagMarkersOn','BSF_Client\code\BSF_Client_AssetManagement_FlagMarkersOn.sqf'],
	['BSF_Client_AssetManagement_GetVehicleInventory','BSF_Client\code\BSF_Client_AssetManagement_GetVehicleInventory.sqf'],
	['BSF_Client_AssetManagement_GUI_Load','BSF_Client\code\BSF_Client_AssetManagement_GUI_Load.sqf'],
	['BSF_Client_AssetManagement_init','BSF_Client\code\BSF_Client_AssetManagement_init.sqf'],
	['BSF_Client_AssetManagement_inventory_event_DoubleClick','BSF_Client\code\BSF_Client_AssetManagement_inventory_event_DoubleClick.sqf'],
	['BSF_Client_AssetManagement_LoadVehicles','BSF_Client\code\BSF_Client_AssetManagement_LoadVehicles.sqf'],
	['ExileClient_AssetManagement_network_AddFlagToArray','BSF_Client\code\ExileClient_AssetManagement_network_AddFlagToArray.sqf'],
	['ExileClient_AssetManagement_network_GetTerritoryItemCountResponse','BSF_Client\code\ExileClient_AssetManagement_network_GetTerritoryItemCountResponse.sqf'],
	['ExileClient_AssetManagement_network_PlayerVehiclesCreateResponse','BSF_Client\code\ExileClient_AssetManagement_network_PlayerVehiclesCreateResponse.sqf'],
	['ExileClient_AssetManagement_network_PlayerVehiclesUpdateResponse','BSF_Client\code\ExileClient_AssetManagement_network_PlayerVehiclesUpdateResponse.sqf'],
	// ['ExileClient_AssetManagement_network_BSFretrieveVehicleResponse','BSF_Client\code\ExileClient_LoJack_network_BSFretrieveVehicleResponse.sqf'],
  
	['BSF_Client_TerritoryDueDateAnnouncment','BSF_Client\code\BSF_Client_TerritoryDueDateAnnouncment.sqf'],

	['BSF_Client_AmmoCraft_RefreshRequirements','BSF_Client\code\BSF_Client_AmmoCraft_RefreshRequirements.sqf'],
	['BSF_Client_AmmoCraft_GiveRepackedInventory','BSF_Client\code\BSF_Client_AmmoCraft_GiveRepackedInventory.sqf'],
	['BSF_Client_AmmoCraft_CanCraftMag','BSF_Client\code\BSF_Client_AmmoCraft_CanCraftMag.sqf'],
	['BSF_Client_AmmoCraft_GetPlayerCraftingInventory','BSF_Client\code\BSF_Client_AmmoCraft_GetPlayerCraftingInventory.sqf'],
	['BSF_Client_AmmoCraft_inventory_event_DoubleClick','BSF_Client\code\BSF_Client_AmmoCraft_inventory_event_DoubleClick.sqf'],
	['BSF_Client_AmmoCraft_GUI_Load','BSF_Client\code\BSF_Client_AmmoCraft_GUI_Load.sqf'],

	['BSF_Client_RemoteTest','BSF_Client\code\BSF_Client_RemoteTest.sqf'],
	['BSF_Client_ClaimVehicle','BSF_Client\code\BSF_Client_ClaimVehicle.sqf'],
	['BSF_Client_NumberToCommaSeparatedString','BSF_Client\code\BSF_Client_NumberToCommaSeparatedString.sqf'],
	['BSF_Client_UpdateRespectAndTabs','BSF_Client\code\BSF_Client_UpdateRespectAndTabs.sqf'],
	['BSF_Client_StudyCorpse','BSF_Client\code\BSF_Client_StudyCorpse.sqf'],
	['BSF_Client_GetEventLocations','BSF_Client\code\BSF_Client_GetEventLocations.sqf'],
	['BSF_Client_GetRandomName','BSF_Client\code\BSF_Client_GetRandomName.sqf'],
	['BSF_Client_GetRandomQuote','BSF_Client\code\BSF_Client_GetRandomQuote.sqf'],
	['BSF_Client_ShipSpawnSmoke','BSF_Client\code\BSF_Client_ShipSpawnSmoke.sqf'],
	['BSF_Client_Util_Debug','BSF_Client\code\BSF_Client_Util_Debug.sqf'],
	['BSF_Client_Util_Log','BSF_Client\code\BSF_Client_Util_Log.sqf'],
	['ExileClient_BSF_network_BSFtestResponse','BSF_Client\code\ExileClient_BSF_network_BSFtestResponse.sqf']
];

call compile preprocessFileLineNumbers "BSF_Client\BSF_Client_Config.sqf";

execVM "BSF_Client\code\BSF_Client_AmmoCraft_Create_AmmoMap.sqf";
execVM "BSF_Client\code\BSF_Client_Create_Harvest_Vehicles_Map.sqf";

true
