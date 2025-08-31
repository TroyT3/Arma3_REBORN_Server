/*
 * This file is subject to the terms and conditions defined in
 * file 'APL-SA LICENSE.txt', which is part of this source code package.
 */

BS1_debug_logCrateFill = false; // True to log items spawned in crates to server .RPT, usually right after [Display #24]

BS1_player_showCrateClaimMessage = true; // True to show toast and chat notification with coordinates to all players when any players are close to crate
BS1_player_showCrateClaimMessageRadius = 20; // Players must be this close (in meters) to trigger serverwide chat/toast notification

BS1_class_crate = "Exile_Container_SupplyBox"; // Class of loot crate.

BS1_count_shipwrecks = 1; // Total wrecks

BS1_locations_center = [5979,5554,0];	//Esseker river canyon
BS1_locations_distance_min = 1;
BS1_locations_distance_max = 20;

BS1_loot_enablePoptabs = true; // True to spawn random number of poptabs in crates, otherwise false.
BS1_loot_count_poptabs_seed = [2000, 3000, 9000]; // min/mid/max, so will spawn around 5k most of the time with small chance to be much closer to 18k and small chance to be closer to 3k

publicVariable "BS1_debug_logCrateFill";
publicVariable "BS1_player_showCrateClaimMessage";
publicVariable "BS1_player_showCrateClaimMessageRadius";
publicVariable "BS1_class_crate";
publicVariable "BS1_count_shipwrecks";
publicVariable "BS1_locations_center";
publicVariable "BS1_locations_distance_min";
publicVariable "BS1_locations_distance_max";
publicVariable "BS1_loot_enablePoptabs";
publicVariable "BS1_loot_count_poptabs_seed";