/*
 * This file is subject to the terms and conditions defined in
 * file 'APL-SA LICENSE.txt', which is part of this source code package.
 */

BS3_debug_logCrateFill = false; // True to log items spawned in crates to server .RPT, usually right after [Display #24]

BS3_player_showCrateClaimMessage = true; // True to show toast and chat notification with coordinates to all players when any players are close to crate
BS3_player_showCrateClaimMessageRadius = 20; // Players must be this close (in meters) to trigger serverwide chat/toast notification

BS3_class_crate = "Exile_Container_SupplyBox"; // Class of loot crate.

BS3_count_shipwrecks = 2; // Total wrecks

BS3_show_markers = false;
BS3_Wrecks_To_BSF_Events = true;
BS3_locations_center = [24185,7920,0];	// ALTIS BS3
BS3_locations_distance_min = 10;		// ALTIS BS3
BS3_locations_distance_max = 7800;		// ALTIS BS3

BS3_loot_enablePoptabs = true; // True to spawn random number of poptabs in crates, otherwise false.
BS3_loot_count_poptabs_seed = [3000, 6000, 15000]; // min/mid/max, so will spawn around 5k most of the time with small chance to be much closer to 18k and small chance to be closer to 3k

publicVariable "BS3_debug_logCrateFill";
publicVariable "BS3_player_showCrateClaimMessage";
publicVariable "BS3_player_showCrateClaimMessageRadius";
publicVariable "BS3_class_crate";
publicVariable "BS3_count_shipwrecks";
publicVariable "BS3_locations_center";
publicVariable "BS3_locations_distance_min";
publicVariable "BS3_locations_distance_max";
publicVariable "BS3_loot_enablePoptabs";
publicVariable "BS3_loot_count_poptabs_seed";