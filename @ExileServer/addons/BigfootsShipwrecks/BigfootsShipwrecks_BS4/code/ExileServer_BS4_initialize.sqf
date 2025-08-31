// ExileServer_BS4_initialize.sqf

if (!isServer) exitWith {};

"Starting BS4 initialization..." call ExileServer_BS4_util_log;

// Spawns shipwrecks with loot crates at server start
[
    BS4_count_shipwrecks, // Wreck count
    [ // Positioning (center, min, max)
        BS4_locations_center,
        BS4_locations_distance_min,
        BS4_locations_distance_max
    ], 
    BS4_class_crate, // Crate class
    BS4_loot_count_poptabs_seed, // Crate poptabs seed (generated random poptab amount)
    BS4_debug_logCrateFill // Enable logging of items added to crate (true/false)
] call ExileServer_BS4_spawnWrecks;

// Handles marker cleanup and player detection
uiSleep 5; // TODO: is this needed?
[
    10, 
    ExileServer_BS4_maintainWrecks, 
    [
        BS4_count_shipwrecks, 
        BS4_player_showCrateClaimMessageRadius,
        BS4_player_showCrateClaimMessage
    ], 
    true
] call ExileServer_system_thread_addTask;

"Finished BS4 initialization." call ExileServer_BS4_util_log;

["systemChatRequest", ["BSF Shipwrecks 4 Initialized"]] call ExileServer_system_network_send_broadcast;

true;