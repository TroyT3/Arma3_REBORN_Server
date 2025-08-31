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
    "rhs_acc_dtk4short",
    "rhs_acc_dtk4long",
    "rhs_acc_dtk4screws",
    "rhs_acc_dtk3",
    "rhs_acc_dtk",
    "rhs_acc_dtkakm",
    "rhs_acc_dtk1983",
    "rhs_acc_dtk1",
    "rhs_acc_dtk1l",
    "rhs_acc_dtk1p",
    "rhs_acc_dtk2",
    "rhs_acc_dtkrpk",
    "rhsusf_acc_grip1",
    "rhsusf_acc_grip2",
    "rhsusf_acc_grip2_tan",
    "rhsusf_acc_grip2_wd",
    "rhsusf_acc_grip3",
    "rhsusf_acc_grip3_tan",
    "rhsusf_acc_grip4",
    "rhsusf_acc_grip4_bipod",
    "rhsusf_acc_grip_m203_blk",
    "rhsusf_acc_grip_m203_d",
    "rhsusf_acc_grip_m203_wd",
    "rhs_acc_grip_rk2",
    "rhs_acc_grip_rk6",
    "rhs_acc_grip_ffg2",
    "rhs_acc_uuk",
    "rhs_acc_pgs64",
    "rhs_acc_pgs64_74u",
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