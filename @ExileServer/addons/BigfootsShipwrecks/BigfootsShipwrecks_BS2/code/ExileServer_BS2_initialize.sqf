// ExileServer_BS2_initialize.sqf

if (!isServer) exitWith {};

"Starting BS2 initialization..." call ExileServer_BS2_util_log;

// Spawns shipwrecks with loot crates at server start
[
    BS2_count_shipwrecks, // Wreck count
    [ // Positioning (center, min, max)
        BS2_locations_center,
        BS2_locations_distance_min,
        BS2_locations_distance_max
    ], 
    BS2_class_crate, // Crate class
    BS2_loot_count_poptabs_seed, // Crate poptabs seed (generated random poptab amount)
    BS2_debug_logCrateFill // Enable logging of items added to crate (true/false)
] call ExileServer_BS2_spawnWrecks;

// Handles marker cleanup and player detection
uiSleep 5; // TODO: is this needed?
[
    10, 
    ExileServer_BS2_maintainWrecks, 
    [
        BS2_count_shipwrecks, 
        BS2_player_showCrateClaimMessageRadius,
        BS2_player_showCrateClaimMessage
    ], 
    true
] call ExileServer_system_thread_addTask;

"Finished BS2 initialization." call ExileServer_BS2_util_log;

["systemChatRequest", ["BSF Shipwrecks 2 Initialized"]] call ExileServer_system_network_send_broadcast;

true;