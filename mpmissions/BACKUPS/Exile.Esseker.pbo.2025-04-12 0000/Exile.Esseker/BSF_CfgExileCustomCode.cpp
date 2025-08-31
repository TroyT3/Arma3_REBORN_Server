class CfgExileCustomCode
{

	// EXTDB3
	ExileServer_world_initialize = "Overrides\ExileServer_world_initialize.sqf";
	ExileServer_util_time_uptime = "Overrides\ExileServer_util_time_uptime.sqf";
	ExileServer_util_time_addTime = "Overrides\ExileServer_util_time_addTime.sqf";
	ExileServer_util_time_currentTime = "Overrides\ExileServer_util_time_currentTime.sqf";
	ExileServer_system_database_connect = "Overrides\ExileServer_system_database_connect.sqf";					//also used in Statusbar
	ExileServer_system_database_handleBig = "Overrides\ExileServer_system_database_handleBig.sqf";
	ExileServer_system_process_noobFilter = "Overrides\ExileServer_system_process_noobFilter.sqf";
	// ExileServer_object_player_createBambi = "Overrides\ExileServer_object_player_createBambi.sqf";				// Now in xsSpawn
	// ExileServer_object_player_database_load = "Overrides\ExileServer_object_player_database_load.sqf";
	// ExileServer_object_vehicle_database_load = "Overrides\ExileServer_object_vehicle_database_load.sqf";		//also used in R3F
	// ExileServer_object_player_event_onMpKilled = "Overrides\ExileServer_object_player_event_onMpKilled.sqf";
	ExileServer_object_container_database_load = "Overrides\ExileServer_object_container_database_load.sqf";
	ExileServer_object_container_database_insert = "Overrides\ExileServer_object_container_database_insert.sqf";
	// ExileServer_system_territory_database_insert = "Overrides\ExileServer_system_territory_database_insert.sqf";
	ExileServer_object_container_database_update = "Overrides\ExileServer_object_container_database_update.sqf";
	ExileServer_object_container_createContainer = "Overrides\ExileServer_object_container_createContainer.sqf";
	ExileServer_system_database_query_selectFull = "Overrides\ExileServer_system_database_query_selectFull.sqf";
	ExileServer_object_construction_database_load = "Overrides\ExileServer_object_construction_database_load.sqf";
	ExileServer_system_database_query_insertSingle = "Overrides\ExileServer_system_database_query_insertSingle.sqf";
	ExileServer_system_database_query_selectSingle = "Overrides\ExileServer_system_database_query_selectSingle.sqf";
	ExileServer_object_construction_database_insert = "Overrides\ExileServer_object_construction_database_insert.sqf";
	ExileServer_system_simulationMonitor_initialize = "Overrides\ExileServer_system_simulationMonitor_initialize.sqf";
	ExileServer_system_database_query_fireAndForget = "Overrides\ExileServer_system_database_query_fireAndForget.sqf";
	ExileServer_object_vehicle_createPersistentVehicle = "Overrides\ExileServer_object_vehicle_createPersistentVehicle.sqf";
	ExileServer_system_trading_network_sellItemRequest = "Overrides\ExileServer_system_trading_network_sellItemRequest.sqf";
	ExileServer_system_database_query_selectSingleField = "Overrides\ExileServer_system_database_query_selectSingleField.sqf";
	ExileServer_system_trading_network_wasteDumpRequest = "Overrides\ExileServer_system_trading_network_wasteDumpRequest.sqf";
	ExileServer_object_vehicle_createNonPersistentVehicle = "Overrides\ExileServer_object_vehicle_createNonPersistentVehicle.sqf";
	ExileServer_system_territory_network_purchaseTerritory = "Overrides\ExileServer_system_territory_network_purchaseTerritory.sqf";
	ExileServer_system_territory_network_flagStolenRequest = "Overrides\ExileServer_system_territory_network_flagStolenRequest.sqf";
	ExileServer_system_trading_network_purchaseItemRequest = "Overrides\ExileServer_system_trading_network_purchaseItemRequest.sqf";
	ExileServer_system_territory_network_restoreFlagRequest = "Overrides\ExileServer_system_territory_network_restoreFlagRequest.sqf";
	// ExileServer_system_trading_network_purchaseVehicleRequest = "Overrides\ExileServer_system_trading_network_purchaseVehicleRequest.sqf";
	ExileServer_system_territory_network_payFlagRansomRequest = "Overrides\ExileServer_system_territory_network_payFlagRansomRequest.sqf";
	// ExileServer_object_vehicle_network_retrieveVehicleRequest = "Overrides\ExileServer_object_vehicle_network_retrieveVehicleRequest.sqf";
	ExileServer_system_territory_maintenance_recalculateDueDate = "Overrides\ExileServer_system_territory_maintenance_recalculateDueDate.sqf";
	ExileServer_system_territory_network_territoryUpgradeRequest = "Overrides\ExileServer_system_territory_network_territoryUpgradeRequest.sqf";
	ExileServer_system_trading_network_purchaseVehicleSkinRequest = "Overrides\ExileServer_system_trading_network_purchaseVehicleSkinRequest.sqf";
	ExileServer_system_territory_network_payTerritoryProtectionMoneyRequest = "Overrides\ExileServer_system_territory_network_payTerritoryProtectionMoneyRequest.sqf";

	// Strip Blacklisted Items - Dupes
	ExileServer_util_fill_fillItems = "Overrides\ExileServer_util_fill_fillItems.sqf";

	// Asset Management
	ExileServer_object_player_database_load = "Overrides\ExileServer_object_player_database_load.sqf";
	ExileServer_object_vehicle_database_load = "Overrides\ExileServer_object_vehicle_database_load.sqf";		//also used in R3F
	ExileServer_system_territory_database_insert = "Overrides\ExileServer_system_territory_database_insert.sqf";
	ExileServer_object_vehicle_network_retrieveVehicleRequest = "Overrides\ExileServer_object_vehicle_network_retrieveVehicleRequest.sqf";
	ExileServer_object_vehicle_network_storeVehicleRequest = "Overrides\ExileServer_object_vehicle_network_storeVehicleRequest.sqf";
	ExileServer_system_trading_network_purchaseVehicleRequest = "Overrides\ExileServer_system_trading_network_purchaseVehicleRequest.sqf";
	ExileServer_object_player_network_loadPlayerRequest = "Overrides\ExileServer_object_player_network_loadPlayerRequest.sqf";
	
	ExileServer_object_player_event_onMpKilled = "Overrides\ExileServer_object_player_event_onMpKilled.sqf";	// Also used in RZI

	// Change XM8 Territory Slide to reflect donor due date
	ExileClient_gui_xm8_slide_territory_event_onTerritoryDropdownSelectionChanged = "Overrides\ExileClient_gui_xm8_slide_territory_event_onTerritoryDropdownSelectionChanged.sqf";

	// Better response codes
	ExileClient_system_trading_network_purchaseVehicleResponse = "Overrides\ExileClient_system_trading_network_purchaseVehicleResponse.sqf";

	// Check for donor status when constructing
	ExileClient_object_item_craft = "Overrides\ExileClient_object_item_craft.sqf";

	// SM Loot and Garbage Collector
	// ExileServer_system_garbageCollector_start = "SM_LGC\overrides\ExileServer_system_garbageCollector_start.sqf";
	// ExileServer_system_lootManager_dropItem = "SM_LGC\overrides\ExileServer_system_lootManager_dropItem.sqf";
	// ExileServer_system_lootManager_network_spawnLootRequest = "SM_LGC\overrides\ExileServer_system_lootManager_network_spawnLootRequest.sqf";

	//LightFix
	ExileServer_object_floodLight_network_toggleFloodLightRequest = "Overrides\Lights\ExileServer_object_floodLight_network_toggleFloodLightRequest.sqf";
	ExileClient_object_floodLight_network_toggleFloodLightRequest = "Overrides\Lights\ExileClient_object_floodLight_network_toggleFloodLightRequest.sqf";
	ExileClient_object_portableGenerator_switchOn = "Overrides\Lights\ExileClient_object_portableGenerator_switchOn.sqf";
	ExileClient_object_portableGenerator_switchOff = "Overrides\Lights\ExileClient_object_portableGenerator_switchOff.sqf";

	//Territory Info
	ExileClient_gui_xm8_slide_territory_onOpen = "Overrides\ExileClient_gui_xm8_slide_territory_onOpen.sqf";

	//Loot Vehicles
	ExileClient_object_container_pack = "Overrides\ExileClient_object_container_pack.sqf";
	ExileServer_object_container_packContainer = "Overrides\ExileServer_object_container_packContainer.sqf";

//	//RZ Infection
//	ExileClient_object_item_consume = "Overrides\ExileClient_object_item_consume.sqf";
//	ExileServer_object_player_database_update = "Overrides\ExileServer_object_player_database_update.sqf";
//	ExileServer_system_network_event_onPlayerConnected = "Overrides\ExileServer_system_network_event_onPlayerConnected.sqf";

	//Sell From Crates
	ExileClient_gui_wasteDumpDialog_show = "Overrides\ExileClient_gui_wasteDumpDialog_show.sqf";
	ExileClient_gui_traderDialog_updateInventoryDropdown = "Overrides\ExileClient_gui_traderDialog_updateInventoryDropdown.sqf";

	// EBM
	exileclient_system_lootmanager_thread_spawn = "EBM\exileclient_system_lootmanager_thread_spawn.sqf";

	//Igiload & R3F
	ExileClient_object_player_event_onEnterSafezone = "Overrides\ExileClient_object_player_event_onEnterSafezone.sqf";
	ExileServer_object_lock_network_lockToggle = "Overrides\ExileServer_object_lock_network_lockToggle.sqf";				//Prevent towing of locked vehicles
	ExileServer_object_lock_network_hotwireLockRequest = "Overrides\ExileServer_object_lock_network_hotwireLockRequest.sqf";	//Prevent towing of locked vehicles

	// Enigma Revive and Server Rules button on inventory dialog
	ExileClient_object_player_death_startBleedingOut = "BSF\EnigmaRevive\ExileClient_object_player_death_startBleedingOut.sqf"; //Happys Revive
	//ExileClient_object_player_event_onInventoryOpened = "BSF\EnigmaRevive\ExileClient_object_player_event_onInventoryOpened.sqf"; //Happys Revive AntiDupe ---NEW with v0.65
	
	// Increase duration of "Toast"
	ExileClient_gui_toaster_addToast = "Overrides\ExileClient_gui_toaster_addToast.sqf";

	//SneakVehicleCustoms
	ExileClient_gui_vehicleCustomsDialog_event_onPurchaseButtonClick = "BSF\SneakVehicleCustoms\ExileClient_gui_vehicleCustomsDialog_event_onPurchaseButtonClick.sqf";
	ExileClient_gui_vehicleCustomsDialog_event_onSkinListBoxSelectionChanged = "BSF\SneakVehicleCustoms\ExileClient_gui_vehicleCustomsDialog_event_onSkinListBoxSelectionChanged.sqf";
	ExileClient_gui_vehicleCustomsDialog_event_onVehicleDropDownSelectionChanged = "BSF\SneakVehicleCustoms\ExileClient_gui_vehicleCustomsDialog_event_onVehicleDropDownSelectionChanged.sqf";
	ExileClient_gui_vehicleCustomsDialog_show = "BSF\SneakVehicleCustoms\ExileClient_gui_vehicleCustomsDialog_show.sqf";
	ExileClient_gui_vehicleCustomsDialog_updateVehicle = "BSF\SneakVehicleCustoms\ExileClient_gui_vehicleCustomsDialog_updateVehicle.sqf";

	//ExAd XM8
	ExileClient_gui_xm8_slide = "ExAdClient\XM8\CustomCode\ExileClient_gui_xm8_slide.sqf";
	ExileClient_gui_xm8_show = "ExAdClient\XM8\CustomCode\ExileClient_gui_xm8_show.sqf";
	ExileServer_system_territory_database_load = "ExAdClient\VirtualGarage\CustomCode\ExileServer_system_territory_database_load.sqf";
	
	//Bambi Loadout
	ExileServer_object_player_network_createPlayerRequest = "Overrides\ExileServer_object_player_network_createPlayerRequest.sqf";

	//Spawn Selection by bambam
	ExileClient_gui_selectSpawnLocation_event_onSpawnButtonClick = "xs\spawn\Overwrites\ExileClient_gui_selectSpawnLocation_event_onSpawnButtonClick.sqf";
	ExileClient_gui_selectSpawnLocation_show = "xs\spawn\Overwrites\ExileClient_gui_selectSpawnLocation_show.sqf";
	ExileClient_gui_selectSpawnLocation_zoomToMarker = "xs\spawn\Overwrites\ExileClient_gui_selectSpawnLocation_zoomToMarker.sqf";
	ExileClient_gui_selectSpawnLocation_event_onListBoxSelectionChanged = "xs\spawn\Overwrites\ExileClient_gui_selectSpawnLocation_event_onListBoxSelectionChanged.sqf";
	ExileServer_object_player_createBambi = "xs\spawn\Overwrites\ExileServer_object_player_createBambi.sqf";
	
	// SM_VectorBuilding - Stokes Magee
	ExileClient_gui_constructionMode_update = "SM\Vector\SM_gui_constructionMode_update.sqf";
	// ExileClient_gui_hud_event_onKeyUp = "Overrides\ExileClient_gui_hud_event_onKeyUp.sqf"; // In SM_DynamicMenu
	ExileClient_construction_thread = "SM\Vector\SM_construction_thread.sqf";

	// SM PlayerNames
	ExileClient_gui_hud_renderPartyESP = "SM\PlayerNames\ExileClient_gui_hud_renderPartyESP.sqf";

	// SM_DynamicMenu - Stokes Magee
	ExileClient_gui_hud_event_onKeyDown = "Overrides\ExileClient_gui_hud_event_onKeyDown.sqf";
	ExileClient_gui_hud_event_onKeyUp = "Overrides\ExileClient_gui_hud_event_onKeyUp.sqf";		//Also used in SM_VectorBuilding
	ExileClient_gui_interactionMenu_hook = "SM\DynamicMenu\overrides\ExileClient_gui_interactionMenu_hook.sqf";
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


	ExileClient_object_player_stats_update = "Overrides\ExileClient_object_player_stats_update.sqf";
	
	// Make it snow based off altitude
	ExileClient_system_snow_thread_update = "Overrides\ExileClient_system_snow_thread_update.sqf";

	// Bleed when hit
	ExileClient_object_player_event_onHandleDamage = "Overrides\ExileClient_object_player_event_onHandleDamage.sqf";

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


    // manipulate garbage collection
//    ExileServer_system_garbageCollector_unscheduled_deleteAllDead = "Overrides\ExileServer_system_garbageCollector_unscheduled_deleteAllDead.sqf";

    // Allow server to check season for key frames
    ExileServer_system_weather_thread_weatherSimulation = "Overrides\ExileServer_system_weather_thread_weatherSimulation.sqf";

    // MP killed
//	ExileServer_object_player_event_onMpKilled = "Overrides\ExileServer_object_player_event_onMpKilled.sqf"; //Defined in ExtDB3

    // Stop earthquakes destroying buildings near Reborn safe zones
    ExileServer_system_event_earthQuake_start = "Overrides\ExileServer_system_event_earthQuake_start.sqf";

};
