// ExileServer_BS3_initialize.sqf

if (!isServer) exitWith {};

"Starting BS3 initialization..." call ExileServer_BS3_util_log;

// Spawns shipwrecks with loot crates at server start
[
    BS3_count_shipwrecks, // Wreck count
    [ // Positioning (center, min, max)
        BS3_locations_center,
        BS3_locations_distance_min,
        BS3_locations_distance_max
    ], 
    BS3_class_crate, // Crate class
    BS3_loot_count_poptabs_seed, // Crate poptabs seed (generated random poptab amount)
    BS3_debug_logCrateFill // Enable logging of items added to crate (true/false)
] call ExileServer_BS3_spawnWrecks;

// Handles marker cleanup and player detection
uiSleep 5; // TODO: is this needed?
[
    10, 
    ExileServer_BS3_maintainWrecks, 
    [
        BS3_count_shipwrecks, 
        BS3_player_showCrateClaimMessageRadius,
        BS3_player_showCrateClaimMessage
    ], 
    true
] call ExileServer_system_thread_addTask;

"Finished BS3 initialization." call ExileServer_BS3_util_log;

["systemChatRequest", ["BSF Shipwrecks 3 Initialized"]] call ExileServer_system_network_send_broadcast;

true;