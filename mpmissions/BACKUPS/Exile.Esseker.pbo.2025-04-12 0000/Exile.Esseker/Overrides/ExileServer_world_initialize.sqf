/**
 * ExileServer_world_initialize
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 * 64Bit Conversion File Header (Extdb3) - Validatior
 */
enableDynamicSimulationSystem true;
"Initializing game world..." call ExileServer_util_log;

BSF_Blacklisted_Container_Objects = [
    "rhs_acc_dtk",
    "rhs_acc_dtkakm",
    "rhs_acc_dtk1983",
    "rhs_acc_dtkrpk",
    "rhsusf_acc_saw_bipod",
    "rhsusf_acc_grip1",
    "rhsusf_acc_grip2",
    "rhs_acc_uuk",
    "rhs_acc_pgs64",
    "rhs_acc_pgs64_74un"
];
publicVariable "BSF_Blacklisted_Container_Objects";

call ExileServer_World_loadAllClans;
call ExileServer_World_loadAllTerritories;
call ExileServer_world_loadAllDatabaseConstructions;
call ExileServer_world_loadAllDatabaseVehicles;
call ExileServer_world_loadAllDatabaseContainers;
call ExileServer_system_xm8_sendProtectionMoneyDue;
call ExileServer_world_spawnSpawnZoneVehicles;
call ExileServer_world_spawnVehicles;
"Game world initialized! Let the fun begin!" call ExileServer_util_log;
true