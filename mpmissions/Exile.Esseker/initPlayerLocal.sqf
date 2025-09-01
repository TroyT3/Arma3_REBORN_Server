missionNamespace setVariable ["ExileClientXM8IsPowerOn",true];

// BSF DualCarry trying to get player initialization working

// [] spawn BSF_Client_DualCarry_WorldProxyUpdater;
// [] spawn BSF_Client_DualCarry_Init;

[] spawn { 
    waitUntil { !isNull player && {player == player} && {time > 0} }; 
    [] call BSF_Client_DualCarry_Init; 
};

// [] execVM "BSF_Client\code\BSF_Client_DualCarry_Init.sqf";
[] execVM "BSF_Client\code\BSF_Client_DualCarry_WorldProxyUpdater.sqf";

// END BSF DualCarry trying to get player initialization working



[] execVM "MarXet\MarXet_Init.sqf";

GADD_SalvageVehicle = compileFinal preprocessFileLineNumbers "BSF\VehicleSalvage\VehicleSalvage.sqf";
execVM "BSF\VehicleSalvage\Customize.sqf";
//esSpawn w/ Base Spawn
eXpochClientPlayerLastBaseSpawn = diag_tickTime;    		// Do not change this
eXpochBaseRespawnTimeLimit = 150;				            	// How long before the players can respawn at their base since the last death or joining server  - default: 900
eXpochBaseSpawnLevelRequired = 5; 				        	// Required Level of Base for Allowing Spawn - default: 4
eXpochBaseSpawnAllowedType = "ExileTerritoryBuildRights";   // If only owners can spawn change this to "ExileOwnerUID" - default: "ExileTerritoryBuildRights"

if (!hasInterface || isServer) exitWith {};

_bul = [] execVM "addons\blowout\module\blowout_client.sqf";

private _npcs = [
	["Exile_Trader_Equipment", ["HubSittingChairA_idle1","HubSittingChairA_idle2"], "Exile_Trader_Equipment", "GreekHead_A3_08", [["arifle_AK107","","acc_pointer_IR","optic_Arco",["30Rnd_545x39_AK",30],[],""],[],[],["U_BG_Guerrilla_6_1",[["30Rnd_545x39_AK",30,1]]],["V_I_G_resistanceLeader_F",[["30Rnd_545x39_AK",30,2]]],[],"H_Booniehat_oli","G_Tactical_Clear",[],["","","","","",""]], [8071.92, 6415.11, 116.19], [0.999974, -0.00725673, 0], [0, 0, 1]],
	["Exile_Guard_01", ["InBaseMoves_patrolling1","InBaseMoves_patrolling2"], "", "WhiteHead_05", [["arifle_CTARS_hex_F","muzzle_snds_58_blk_F","acc_flashlight","optic_AMS",[],[],""],[],["Exile_Weapon_Makarov","","","",["Exile_Magazine_8Rnd_9x18",8],[],""],["U_BG_Guerilla2_1",[["Exile_Magazine_8Rnd_9x18",8,3]]],["V_PlateCarrier1_blk",[]],[],"H_ShemagOpen_khk","G_Tactical_Black",[],["","","","","",""]], [8091.43, 6434.16, 119.946], [0, 1, 0], [0, 0, 1]],

	["Exile_Trader_Armory", ["HubStanding_idle1","HubStanding_idle2","HubStanding_idle3"], "Exile_Trader_Armory", "WhiteHead_03", [["srifle_DMR_06_olive_F","","","",[],[],""],[],[],["U_Rangemaster",[]],["V_Rangemaster_belt",[]],[],"H_Beret_02","G_Shades_Black",[],["","","","","",""]], [2752.78, 11263.2, 136.92], [0.0317422, -0.999496, 0], [0, 0, 1]],
	["Exile_Guard_01", ["InBaseMoves_patrolling1","InBaseMoves_patrolling2"], "", "WhiteHead_03", [["Exile_Weapon_AKM","","acc_pointer_IR","optic_Holosight",["Exile_Magazine_30Rnd_762x39_AK",30],[],""],[],[],["U_I_C_Soldier_Camo_F",[["Exile_Magazine_30Rnd_762x39_AK",30,1]]],["V_TacVest_camo",[]],[],"H_Cap_blk","G_Tactical_Clear",[],["","","","","",""]], [2728.18, 11283.9, 134.825], [0, 1, 0], [0, 0, 1]],
	["Exile_Guard_02", ["HubSittingChairA_idle1","HubSittingChairA_idle2"], "", "GreekHead_A3_07", [["Exile_Weapon_AKM","","acc_pointer_IR","optic_Holosight",["Exile_Magazine_30Rnd_762x39_AK",30],[],""],[],[],["U_I_C_Soldier_Camo_F",[["Exile_Magazine_30Rnd_762x39_AK",30,1]]],["V_TacVest_oli",[]],[],"H_Cap_oli_hs","G_Bandanna_oli",[],["","","","","",""]], [2730.34, 11281.3, 135.021], [-0.902702, -0.430266, 0], [0, 0, 1]],

	["Exile_Trader_Hardware", ["InBaseMoves_sitHighUp1"], "Exile_Trader_Hardware", "WhiteHead_14", [[],[],[],["U_BG_Guerilla2_1",[]],[],[],"H_Bandanna_gry","",[],["","","","","",""]], [3977.57, 9286.04, 150.587], [-0.801588, -0.597876, 0], [0, 0, 1]],
	["Exile_Guard_01", ["InBaseMoves_patrolling1"], "", "GreekHead_A3_09", [["arifle_CTAR_GL_ghex_F","muzzle_snds_58_wdm_F","acc_pointer_IR","optic_AMS",["30Rnd_580x42_Mag_F",30],[],""],[],[],["U_B_CTRG_Soldier_3_F",[["30Rnd_580x42_Mag_F",30,3]]],["V_PlateCarrier1_rgr",[]],[],"H_Bandanna_gry","G_Bandanna_sport",[],["","","","","",""]], [3969.2, 9284.63, 154.613], [-0.588731, -0.808329, 0], [0, 0, 1]],
	["Exile_Guard_02", ["InBaseMoves_patrolling2"], "", "AfricanHead_01", [["arifle_MX_GL_F","muzzle_snds_H_khk_F","acc_pointer_IR","optic_AMS",["30Rnd_65x39_caseless_mag",30],[],""],[],[],["U_I_OfficerUniform",[["30Rnd_65x39_caseless_mag",30,3]]],["V_PlateCarrier2_blk",[]],[],"H_Beret_gen_F","G_Bandanna_shades",[],["","","","","",""]], [3972.96, 9292.2, 154.25], [0, 1, 0], [0, 0, 1]],

	["Exile_Trader_WasteDump", ["InBaseMoves_SittingRifle1"], "Exile_Trader_WasteDump", "WhiteHead_02", [["Exile_Weapon_LeeEnfield","","","",["Exile_Magazine_10Rnd_303",10],[],""],[],[],["U_I_G_Story_Protagonist_F",[["Exile_Magazine_10Rnd_303",10,3]]],["V_Rangemaster_belt",[]],[],"H_MilCap_ocamo","G_Tactical_Clear",[],["","","","","",""]], [11166.3, 9103.02, 65.0034], [-0.999056, 0.0434448, 0], [0, 0, 1]],
	["Exile_Guard_02", ["InBaseMoves_patrolling2"], "", "WhiteHead_02", [["LMG_Mk200_F","","","",["200Rnd_65x39_cased_Box",200],[],""],[],[],["U_BG_Guerilla2_1",[]],["V_PlateCarrierH_CTRG",[["200Rnd_65x39_cased_Box",200,1]]],[],"H_Cap_usblack","G_Tactical_Clear",[],["","","","","",""]], [11191.1, 9101.75, 70.8194], [-0.966007, -0.258515, 0], [0, 0, 1]],

	["Exile_Trader_SpecialOperations", ["c4coming2cDf_genericstani1","c4coming2cDf_genericstani2","c4coming2cDf_genericstani3"], "Exile_Trader_SpecialOperations", "WhiteHead_12", [["arifle_MX_Black_F","","","",[],[],""],[],[],["U_O_V_Soldier_Viper_hex_F",[]],["V_PlateCarrierGL_mtp",[]],["B_ViperHarness_hex_F",[]],"H_HelmetB_light_grass","G_Bandanna_khk",[],["","","","","","NVGoggles"]], [6646.45, 3711.54, 238.682], [-0.0765177, -0.997068, 0], [0, 0, 1]],
	["Exile_Guard_01", ["InBaseMoves_patrolling1"], "", "WhiteHead_19", [["Exile_Weapon_DMR","","","",["Exile_Magazine_20Rnd_762x51_DMR",20],[],""],[],[],["U_I_G_Story_Protagonist_F",[["Exile_Magazine_20Rnd_762x51_DMR",20,1]]],["V_TacVest_oli",[]],[],"H_HelmetB","G_Tactical_Black",[],["","","","","","O_NVGoggles_ghex_F"]], [6648.05, 3710.19, 241.204], [0.999939, 0.0110826, 0], [0, 0, 1]],

	["Exile_Trader_Vehicle", ["InBaseMoves_table1"], "Exile_Trader_Vehicle", "WhiteHead_09", [[],[],[],["U_C_Driver_3",[]],[],[],"H_Watchcap_blk","G_Shades_Black",[],["","","","","",""]], [3108.8, 4488.93, 113.988], [0.973802, 0.227399, 0], [0, 0, 1]],
	["Exile_Trader_VehicleCustoms", ["AidlPercMstpSnonWnonDnon_G01","AidlPercMstpSnonWnonDnon_G02","AidlPercMstpSnonWnonDnon_G03","AidlPercMstpSnonWnonDnon_G04","AidlPercMstpSnonWnonDnon_G05","AidlPercMstpSnonWnonDnon_G06"], "", "WhiteHead_09", [[],[],[],["U_C_WorkerCoveralls",[]],[],[],"","G_Shades_Red",[],["","","","","",""]], [3111.35, 4492.2, 113.812], [-0.773508, -0.633786, 0], [0, 0, 1]],
	["Exile_Guard_01", ["InBaseMoves_patrolling2"], "", "WhiteHead_07", [["LMG_Mk200_F","muzzle_snds_H_MG_khk_F","","optic_Arco_blk_F",[],[],"bipod_02_F_hex"],[],[],["U_I_G_Story_Protagonist_F",[]],[],[],"H_Cap_brn_SPECOPS","G_Balaclava_TI_tna_F",[],["","","","","",""]], [3139.29, 4504.25, 116.994], [0, 1, 0], [0, 0, 1]],
	["Exile_Guard_02", ["InBaseMoves_patrolling1"], "", "GreekHead_A3_06", [["LMG_Mk200_F","muzzle_snds_H_MG_khk_F","","optic_Arco_blk_F",[],[],"bipod_02_F_hex"],[],[],["U_I_G_Story_Protagonist_F",[]],[],[],"H_Booniehat_oli","G_Bandanna_sport",[],["","","","","",""]], [3132.43, 4472.07, 116.994], [-0.87165, -0.490128, 0], [0, 0, 1]],

	["Exile_Trader_Aircraft", ["LHD_krajPaluby"], "Exile_Trader_Aircraft", "AfricanHead_02", [[],[],[],["U_I_pilotCoveralls",[]],[],[],"H_Cap_grn_BI","G_Shades_Green",[],["","","","","",""]], [10046, 4847.35, 17.0699], [0, 1, 0], [0, 0, 1]],
	["Exile_Trader_AircraftCustoms", ["InBaseMoves_sitHighUp1"], "Exile_Trader_AircraftCustoms", "GreekHead_A3_08", [["arifle_AK47","","","",["30Rnd_762x39_AK47_M",30],[],""],[],[],["Exile_Uniform_ExileCustoms",[["30Rnd_762x39_AK47_M",30,1]]],[],[],"H_Cap_blk_CMMG","G_Tactical_Clear",[],["","","","","",""]], [10043.2, 4845.17, 16.8701], [0.835136, -0.550044, 0], [0, 0, 1]],["Exile_Guard_01", ["InBaseMoves_patrolling2"], "", "WhiteHead_20", [["arifle_ARX_ghex_F","muzzle_snds_65_TI_hex_F","acc_flashlight","optic_Arco",["30Rnd_65x39_caseless_green",30],[],"bipod_02_F_hex"],[],[],["U_B_CombatUniform_mcam_tshirt",[["30Rnd_65x39_caseless_green",30,3]]],["V_PlateCarrier2_blk",[]],[],"H_Booniehat_tan","G_Tactical_Clear",[],["","","","","",""]], [10043.8, 4845.19, 20.9099], [0, 1, 0], [0, 0, 1]],
	["Exile_Guard_02", ["InBaseMoves_patrolling1"], "", "WhiteHead_01", [["arifle_ARX_blk_F","muzzle_snds_65_TI_hex_F","acc_flashlight","optic_Arco",["30Rnd_65x39_caseless_green",30],[],"bipod_02_F_hex"],[],[],["U_I_G_resistanceLeader_F",[["30Rnd_65x39_caseless_green",30,3]]],["V_PlateCarrier2_rgr",[]],[],"H_Watchcap_blk","G_Tactical_Clear",[],["","","","","",""]], [10039.2, 4847.72, 17.0777], [0, 1, 0], [0, 0, 1]],

	["Exile_Trader_Office", ["HubSittingAtTableU_idle1","HubSittingAtTableU_idle2","HubSittingAtTableU_idle3"], "Exile_Trader_Office", "WhiteHead_05", [[],[],[],["U_I_G_resistanceLeader_F",[]],["V_Rangemaster_belt",[]],[],"H_Hat_brown","",[],["","","","","",""]], [7579.91, 4538.88, 117.07], [0, 1, 0], [0, 0, 1]],
	["Exile_Trader_Boat", ["HubStandingUA_idle1","HubStandingUA_idle2","HubStandingUA_idle3"], "Exile_Trader_Boat", "AfricanHead_03", [[],[],[],["U_OrestesBody",[]],[],[],"H_Cap_surfer","G_Tactical_Clear",[],["","","","","",""]], [5736.68, 5447.53, 1.24214], [-0.680515, -0.732734, 0], [0, 0, 1]],
	["Exile_Trader_BoatCustoms", ["Acts_CivilListening_2"], "Exile_Trader_BoatCustoms", "WhiteHead_07", [[],[],[],["U_C_Man_casual_6_F",[]],[],[],"","G_Sport_Blackyellow",[],["","","","","",""]], [5729.82, 5437.14, 1.26416], [-0.682624, -0.73077, 0], [0, 0, 1]],
	["Exile_Trader_Diving", ["HubSittingChairB_idle1","HubSittingChairB_idle2","HubSittingChairB_idle3","HubSittingChairB_move1"], "Exile_Trader_Diving", "WhiteHead_14", [["arifle_SDAR_F","","","",[],[],""],[],[],["U_I_Wetsuit",[]],["V_RebreatherIA",[]],[],"","G_I_Diving",[],["","","","","",""]], [5762.67, 5456.62, 0.424396], [0.650111, 0.759839, 0], [0, 0, 1]],

	["Exile_Trader_WasteDump", ["c5efe_MichalLoop"], "Exile_Trader_WasteDump", "WhiteHead_02", [[],[],[],["U_C_Mechanic_01_F",[]],["V_Rangemaster_belt",[]],[],"H_HeadBandage_bloody_F","G_Aviator",[],["","","","","",""]], [4291.84, 3042.65, 211.269], [-0.861326, -0.508053, 0], [0, 0, 1]],				//South Waste Dump
	["Exile_Guard_01", ["c4coming2cDf_genericstani1"], "", "GreekHead_A3_07", [["srifle_DMR_03_F","","","",[],[],""],[],[],["U_BG_Guerrilla_6_1",[]],["V_TacVest_khk",[]],[],"H_ShemagOpen_tan","G_Tactical_Black",[],["","","","","",""]], [4288.86, 3037.66, 210.487], [0.915137, 0.403144, 0], [0, 0, 1]],	//South Waste Dump
	["Exile_Guard_02", ["c4coming2cDf_genericstani2"], "", "WhiteHead_11", [["arifle_Mk20_GL_F","","","",[],[],""],[],[],["U_BG_Guerilla1_1",[]],["V_PlateCarrierIA2_dgtl",[]],[],"H_ShemagOpen_khk","G_Combat",[],["","","","","",""]], [4288.78, 3055.88, 211.531], [0.996899, -0.0786909, 0], [0, 0, 1]],	//South Waste Dump
	["Exile_Trader_CommunityCustoms", ["HubBriefing_loop"], "Exile_Trader_CommunityCustoms", "WhiteHead_06", [[],[],[],["U_C_ConstructionCoverall_Vrana_F",[]],[],[],"H_Construction_earprot_black_F","",[],["","","","","",""]], [4273.74, 3029.52, 211.092], [0.650973, -0.759101, 0], [0, 0, 1]],  			//South Waste Dump
	["Exile_Trader_CommunityCustoms", ["c5efe_MichalLoop"], "Exile_Trader_CommunityCustoms", "WhiteHead_15", [[],[],[],["U_C_Mechanic_01_F",[]],[],[],"H_Watchcap_cbr","G_Tactical_Clear",[],["","","","","",""]], [11151.4, 9102.2, 65.0737], [-0.968749, -0.248041, 0], [0, 0, 1]], 							//Northeast Waste dump
	["Exile_Trader_CommunityCustoms", ["Acts_passenger_flatground_leanright"], "Exile_Trader_CommunityCustoms", "WhiteHead_10", [[],[],[],["U_BG_Guerilla1_2_F",[]],[],[],"","G_Tactical_Clear",[],["","","","","",""]], [3110.91, 4488.16, 113.815], [-0.202966, 0.979186, 0], [0, 0, 1]],						// At vehicle trader
	["Exile_Trader_WasteDump", ["HubStandingUB_move1"], "Exile_Trader_WasteDump", "WhiteHead_17", [[],[],[],["U_I_G_Story_Protagonist_F",[]],["V_Rangemaster_belt",[]],[],"H_MilCap_gry","rhs_googles_yellow",[],["","","","","",""]], [3921.56, 9237.5, 149.347], [0, 1, 0], [0, 0, 1]],						// ES Petrol
	["Exile_Trader_WasteDump", ["HubBriefing_loop"], "Exile_Trader_WasteDump", "WhiteHead_02", [["Exile_Weapon_AK107","","","",["Exile_Magazine_30Rnd_545x39_AK",30],[],""],[],[],["U_C_Mechanic_01_F",[["Exile_Magazine_30Rnd_545x39_AK",1,30]]],["V_Rangemaster_belt",[["Exile_Magazine_30Rnd_545x39_AK",2,30]]],[],"H_MilCap_gry","rhs_googles_orange",[],["","","","","",""]], [3104.35, 4488.04, 113.764], [-0.974812, 0.223029, 0], [0, 0, 1]]  //Vehicle Trader
];

{
	private _logic = "Logic" createVehicleLocal [0, 0, 0];
	private _trader = (_x select 0) createVehicleLocal [0, 0, 0];
	private _animations = _x select 1;

	_logic setPosWorld (_x select 5);
	_logic setVectorDirAndUp [_x select 6, _x select 7];

	_trader setVariable ["BIS_enableRandomization", false];
	_trader setVariable ["BIS_fnc_animalBehaviour_disable", true];
	_trader setVariable ["ExileAnimations", _animations];
	_trader setVariable ["ExileTraderType", _x select 2];
	_trader disableAI "ANIM";
	_trader disableAI "MOVE";
	_trader disableAI "FSM";
	_trader disableAI "AUTOTARGET";
	_trader disableAI "TARGET";
	_trader disableAI "CHECKVISIBLE";
	_trader allowDamage false;
	_trader setFace (_x select 3);
	_trader setUnitLoadOut (_x select 4);
	_trader setPosWorld (_x select 5);
	_trader setVectorDirAndUp [_x select 6, _x select 7];
	_trader reveal _logic;
	_trader attachTo [_logic, [0, 0, 0]];
	_trader switchMove (_animations select 0);
	_trader addEventHandler ["AnimDone", {_this call 
	ExileClient_object_trader_event_onAnimationDone}];
}
forEach _npcs;
