/*
 * This file is subject to the terms and conditions defined in
 * file 'APL-SA LICENSE.txt', which is part of this source code package.
 */

BS2_debug_logCrateFill = false; // True to log items spawned in crates to server .RPT, usually right after [Display #24]

BS2_player_showCrateClaimMessage = true; // True to show toast and chat notification with coordinates to all players when any players are close to crate
BS2_player_showCrateClaimMessageRadius = 20; // Players must be this close (in meters) to trigger serverwide chat/toast notification

BS2_class_crate = "Exile_Container_SupplyBox"; // Class of loot crate.

BS2_count_shipwrecks = 2; // Total wrecks

BS2_show_markers = false;
BS2_Wrecks_To_BSF_Events = true;
BS2_locations_center = [22057,23208,0];	// ALTIS BS2
BS2_locations_distance_min = 10;		// ALTIS BS2
BS2_locations_distance_max = 8600;		// ALTIS BS2

BS2_loot_enablePoptabs = true; // True to spawn random number of poptabs in crates, otherwise false.
BS2_loot_count_poptabs_seed = [3000, 6000, 15000]; // min/mid/max, so will spawn around 5k most of the time with small chance to be much closer to 18k and small chance to be closer to 3k

publicVariable "BS2_debug_logCrateFill";
publicVariable "BS2_player_showCrateClaimMessage";
publicVariable "BS2_player_showCrateClaimMessageRadius";
publicVariable "BS2_class_crate";
publicVariable "BS2_count_shipwrecks";
publicVariable "BS2_locations_center";
publicVariable "BS2_locations_distance_min";
publicVariable "BS2_locations_distance_max";
publicVariable "BS2_loot_enablePoptabs";
publicVariable "BS2_loot_count_poptabs_seed";