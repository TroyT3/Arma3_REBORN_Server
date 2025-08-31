class CfgExileCustomCode
{
	//Bambi Loadout
	ExileServer_object_player_network_createPlayerRequest = "Overrides\CustomLoadout\ExileServer_object_player_network_createPlayerRequest.sqf";
//	ExileServer_object_player_createBambi = "Overrides\CustomLoadout\ExileServer_object_player_createBambi.sqf"; // In xsSpawn now

	//Sell From Crates
	ExileClient_gui_wasteDumpDialog_show = "Overrides\ExileClient_gui_wasteDumpDialog_show.sqf";
	ExileClient_gui_traderDialog_updateInventoryDropdown = "Overrides\ExileClient_gui_traderDialog_updateInventoryDropdown.sqf";
	ExileServer_system_trading_network_wasteDumpRequest = "Overrides\ExileServer_system_trading_network_wasteDumpRequest.sqf";	

	// EBM
	exileclient_system_lootmanager_thread_spawn = "EBM\exileclient_system_lootmanager_thread_spawn.sqf";
	
	ExileClient_object_player_stats_update = "Overrides\ExileClient_object_player_stats_update.sqf";

	//Igiload & R3F
	ExileClient_object_player_event_onEnterSafezone = "Overrides\ExileClient_object_player_event_onEnterSafezone.sqf";
	ExileServer_object_vehicle_database_load = "Overrides\ExileServer_object_vehicle_database_load.sqf";						//Prevent towing of locked vehicles
	ExileServer_object_lock_network_lockToggle = "Overrides\ExileServer_object_lock_network_lockToggle.sqf";					//Prevent towing of locked vehicles
	ExileServer_object_lock_network_hotwireLockRequest = "Overrides\ExileServer_object_lock_network_hotwireLockRequest.sqf";	//Prevent towing of locked vehicles

	// Enigma Revive
	ExileClient_object_player_death_startBleedingOut = "BSF\EnigmaRevive\ExileClient_object_player_death_startBleedingOut.sqf"; //Happys Revive
// ADDED BELOW	ExileClient_object_player_event_onInventoryOpened = "BSF\EnigmaRevive\ExileClient_object_player_event_onInventoryOpened.sqf"; //Happys Revive AntiDupe ---NEW with v0.65

	// Increase durration of "Toast"
	ExileClient_gui_toaster_addToast = "Overrides\ExileClient_gui_toaster_addToast.sqf";

	// Make it snow based off altitude
	ExileClient_system_snow_thread_update = "Overrides\ExileClient_system_snow_thread_update.sqf";

	// Bleed when hit
	ExileClient_object_player_event_onHandleDamage = "Overrides\ExileClient_object_player_event_onHandleDamage.sqf";

	//SneakVehicleCustoms
	ExileClient_gui_vehicleCustomsDialog_event_onPurchaseButtonClick = "BSF\SneakVehicleCustoms\ExileClient_gui_vehicleCustomsDialog_event_onPurchaseButtonClick.sqf";
	ExileClient_gui_vehicleCustomsDialog_event_onSkinListBoxSelectionChanged = "BSF\SneakVehicleCustoms\ExileClient_gui_vehicleCustomsDialog_event_onSkinListBoxSelectionChanged.sqf";
	ExileClient_gui_vehicleCustomsDialog_event_onVehicleDropDownSelectionChanged = "BSF\SneakVehicleCustoms\ExileClient_gui_vehicleCustomsDialog_event_onVehicleDropDownSelectionChanged.sqf";
	ExileClient_gui_vehicleCustomsDialog_show = "BSF\SneakVehicleCustoms\ExileClient_gui_vehicleCustomsDialog_show.sqf";
	ExileClient_gui_vehicleCustomsDialog_updateVehicle = "BSF\SneakVehicleCustoms\ExileClient_gui_vehicleCustomsDialog_updateVehicle.sqf";

	//ExAd XM8
    ExileClient_gui_xm8_slide = "ExAdClient\XM8\CustomCode\ExileClient_gui_xm8_slide.sqf";
    ExileClient_gui_xm8_show = "ExAdClient\XM8\CustomCode\ExileClient_gui_xm8_show.sqf";
//    ExileServer_system_territory_database_load = "ExAdClient\VirtualGarage\CustomCode\ExileServer_system_territory_database_load.sqf";

    // fix temp
    ExileClient_object_player_stats_updateTemperature = "Overrides\ExileClient_object_player_stats_updateTemperature.sqf";

    // Add to inventory event handler 
    ExileClient_object_player_event_onInventoryOpened = "Overrides\ExileClient_object_player_event_onInventoryOpened.sqf";

    // Change health scanner
    ExileClient_gui_xm8_slide_healthScanner_onOpen = "Overrides\ExileClient_gui_xm8_slide_healthScanner_onOpen.sqf";

    // Stats panel
    ExileClient_gui_hud_renderStatsPanel = "Overrides\ExileClient_gui_hud_renderStatsPanel.sqf";

    // Disable territory announcment
    ExileClient_util_world_getNearestLocationName = "Overrides\ExileClient_util_world_getNearestLocationName.sqf";
 
	// Implement bush kits -- Why hasnt exile done this? Probably broken, lets find out..
    ExileClient_object_bush_attachGreenBush = "Overrides\ExileClient_object_bush_attachGreenBush.sqf";

    // Custom sound on hit
    //ExileClient_object_player_event_onHit = "Overrides\ExileClient_object_player_event_onHit.sqf";

	//Spawn Selection by bambam
	ExileClient_gui_selectSpawnLocation_event_onSpawnButtonClick = "xs\spawn\Overwrites\ExileClient_gui_selectSpawnLocation_event_onSpawnButtonClick.sqf";
	ExileClient_gui_selectSpawnLocation_show = "xs\spawn\Overwrites\ExileClient_gui_selectSpawnLocation_show.sqf";
	ExileClient_gui_selectSpawnLocation_zoomToMarker = "xs\spawn\Overwrites\ExileClient_gui_selectSpawnLocation_zoomToMarker.sqf";
	ExileClient_gui_selectSpawnLocation_event_onListBoxSelectionChanged = "xs\spawn\Overwrites\ExileClient_gui_selectSpawnLocation_event_onListBoxSelectionChanged.sqf";
	ExileServer_object_player_createBambi = "xs\spawn\Overwrites\ExileServer_object_player_createBambi.sqf";

    /** Server Overrides **/

    // manipulate garbage collection
    ExileServer_system_garbageCollector_unscheduled_deleteAllDead = "Overrides\ExileServer_system_garbageCollector_unscheduled_deleteAllDead.sqf";

    // Allow server to check season for key frames
    ExileServer_system_weather_thread_weatherSimulation = "Overrides\ExileServer_system_weather_thread_weatherSimulation.sqf";

    // MP killed
    ExileServer_object_player_event_onMpKilled = "Overrides\ExileServer_object_player_event_onMpKilled.sqf";

    // Make sticks n leaves spawn when cutting trees
    ExileServer_object_tree_network_chopTreeRequest = "Overrides\ExileServer_object_tree_network_chopTreeRequest.sqf";

    // Stop earthquakes destroying buildings near Reborn safe zones
    ExileServer_system_event_earthQuake_start = "Overrides\ExileServer_system_event_earthQuake_start.sqf";

    // more room for larger vehicles to spawn
    ExileServer_system_trading_network_purchaseVehicleRequest = "Overrides\ExileServer_system_trading_network_purchaseVehicleRequest.sqf";

	// Custom keys
//	ExileClient_gui_hud_event_onKeyDown = "Overrides\ExileClient_gui_hud_event_onKeyDown.sqf";  //ADDED BELOW

	// SM_VectorBuilding - Stokes Magee
    ExileClient_gui_constructionMode_update = "SM\Vector\SM_gui_constructionMode_update.sqf";
//	ExileClient_gui_hud_event_onKeyUp = "SM\Vector\SM_gui_hud_event_onKeyUp.sqf";
	ExileClient_construction_thread = "SM\Vector\SM_construction_thread.sqf";	

	// SM_DynamicMenu - Stokes Magee
	ExileClient_gui_interactionMenu_hook = "SM\DynamicMenu\overrides\ExileClient_gui_interactionMenu_hook.sqf";
	ExileClient_gui_hud_event_onKeyDown = "SM\DynamicMenu\overrides\ExileClient_gui_hud_event_onKeyDown.sqf";	// Also used for Instadoc hotkey "8"
	ExileClient_gui_hud_event_onKeyUp = "SM\DynamicMenu\overrides\ExileClient_gui_hud_event_onKeyUp.sqf";		//Also used in SM_VectorBuilding (modified)
	ExileClient_gui_interactionMenu_unhook = "SM\DynamicMenu\overrides\ExileClient_gui_interactionMenu_unhook.sqf";
	ExileClient_action_event_onKeyDown = "SM\DynamicMenu\overrides\ExileClient_action_event_onKeyDown.sqf";
		
	// SM_TraderPlus - Stokes Magee
	ExileClient_gui_traderDialog_show = "SM\TraderPlus\overrides\ExileClient_gui_traderDialog_show.sqf";
	ExileClient_gui_traderDialog_updateItemStats = "SM\TraderPlus\overrides\ExileClient_gui_traderDialog_updateItemStats.sqf";
	ExileClient_gui_vehicleTraderDialog_show = "SM\TraderPlus\overrides\ExileClient_gui_vehicleTraderDialog_show.sqf";
	ExileClient_gui_traderDialog_event_onStoreDropDownSelectionChanged = "SM\TraderPlus\overrides\ExileClient_gui_traderDialog_event_onStoreDropDownSelectionChanged.sqf";
	ExileClient_gui_vehicleTraderDialog_updateVehicleListBox = "SM\TraderPlus\overrides\ExileClient_gui_vehicleTraderDialog_updateVehicleListBox.sqf";
	ExileClient_gui_traderDialog_updateStoreListBox = "SM\TraderPlus\overrides\ExileClient_gui_traderDialog_updateStoreListBox.sqf";
	ExileClient_gui_traderDialog_event_onStoreListBoxSelectionChanged = "SM\TraderPlus\overrides\ExileClient_gui_traderDialog_event_onStoreListBoxSelectionChanged.sqf";
	ExileClient_gui_traderDialog_event_onPurchaseButtonClick = "SM\TraderPlus\overrides\ExileClient_gui_traderDialog_event_onPurchaseButtonClick.sqf";
	ExileClient_gui_traderDialog_event_onUnload = "SM\TraderPlus\overrides\ExileClient_gui_traderDialog_event_onUnload.sqf";
	ExileClient_gui_traderDialog_event_onFilterCheckboxStateChanged = "SM\TraderPlus\overrides\ExileClient_gui_traderDialog_event_onFilterCheckboxStateChanged.sqf";
	ExileClient_system_trading_network_purchaseItemResponse = "SM\TraderPlus\overrides\ExileClient_system_trading_network_purchaseItemResponse.sqf";
	ExileClient_gui_traderDialog_updateInventoryListBox = "SM\TraderPlus\overrides\ExileClient_gui_traderDialog_updateInventoryListBox.sqf";	
			
};
