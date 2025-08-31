/*
 * This file is subject to the terms and conditions defined in
 * file 'APL-SA LICENSE.txt', which is part of this source code package.
 */

BS4_debug_logCrateFill = false; // True to log items spawned in crates to server .RPT, usually right after [Display #24]

BS4_player_showCrateClaimMessage = true; // True to show toast and chat notification with coordinates to all players when any players are close to crate
BS4_player_showCrateClaimMessageRadius = 20; // Players must be this close (in meters) to trigger serverwide chat/toast notification

BS4_class_crate = "Exile_Container_SupplyBox"; // Class of loot crate.

BS4_count_shipwrecks = 2; // Total wrecks

BS4_show_markers = false;
BS4_Wrecks_To_BSF_Events = true;
BS4_locations_center = [7982,7482,0];	// ALTIS BS4
BS4_locations_distance_min = 10;		// ALTIS BS4
BS4_locations_distance_max = 8425;		// ALTIS BS4

BS4_loot_enablePoptabs = true; // True to spawn random number of poptabs in crates, otherwise false.
BS4_loot_count_poptabs_seed = [3000, 6000, 15000]; // min/mid/max, so will spawn around 5k most of the time with small chance to be much closer to 18k and small chance to be closer to 3k

publicVariable "BS4_debug_logCrateFill";
publicVariable "BS4_player_showCrateClaimMessage";
publicVariable "BS4_player_showCrateClaimMessageRadius";
publicVariable "BS4_class_crate";
publicVariable "BS4_count_shipwrecks";
publicVariable "BS4_locations_center";
publicVariable "BS4_locations_distance_min";
publicVariable "BS4_locations_distance_max";
publicVariable "BS4_loot_enablePoptabs";
publicVariable "BS4_loot_count_poptabs_seed";