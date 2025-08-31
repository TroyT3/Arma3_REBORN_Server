// ExileServer_BS1_initialize.sqf

if (!isServer) exitWith {};

"Starting initialization..." call ExileServer_BS1_util_log;

// Spawns shipwrecks with loot crates at server start
[
    BS1_count_shipwrecks, // Wreck count
    [ // Positioning (center, min, max)
        BS1_locations_center,
        BS1_locations_distance_min,
        BS1_locations_distance_max
    ], 
    BS1_class_crate, // Crate class
    BS1_loot_count_poptabs_seed, // Crate poptabs seed (generated random poptab amount)
    BS1_debug_logCrateFill // Enable logging of items added to crate (true/false)
] call ExileServer_BS1_spawnWrecks;

// Handles marker cleanup and player detection
uiSleep 5; // TODO: is this needed?
[
    10, 
    ExileServer_BS1_maintainWrecks, 
    [
        BS1_count_shipwrecks, 
        BS1_player_showCrateClaimMessageRadius,
        BS1_player_showCrateClaimMessage
    ], 
    true
] call ExileServer_system_thread_addTask;

"Finished initialization." call ExileServer_BS1_util_log;

["systemChatRequest", ["Bigfoot's Shipwrecks BS1 Initialized"]] call ExileServer_system_network_send_broadcast;

true;