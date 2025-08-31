scriptName "config.sqf";
/*--------------------------------------------------------------------
// ******************************************************************************************
// * This script is licensed under the GNU Lesser GPL v3.
// ******************************************************************************************
	file: config.sqf
	======
	Author: Bill Springer <Apoc@MayhemServers.com>
	Description: XM8 App config for ExAd APOC Airdrop Port
--------------------------------------------------------------------*/
#include "functions.sqf"; //Dialog functions for the client

/* ************************************ */

APOC_AA_AdvancedBanking = false;		// Advanced Banking support. Change false to true if you run Advanced Banking on your server.  Not sure of 0.9.8 compatability.
APOC_AA_UseExileLockerFunds = false;	//Removes funds from player's locker stash instead of their hand
APOC_AA_DamageOnWhenLanded = false;		//Turn object allowDamage back on when object is on ground, instead of when in 'chute

APOC_AA_coolDownTime = 60; //Expressed in sec

APOC_AA_Drops =[
/*
	["Category Name",
		[
			["Text displayed to player",	"Name of vehicle or drop box",	cost, "vehicle or supply (use nothing but these two!)", respectThreshold]  //This is an array, use commas between, DUH!
		] //If something breaks with your list of drops, you've likely messed up the nested arrays.
	]
		Level1 = 0;		//White 
		Level2 = 7500;		//Green
		Level3 = 15000;		//Blue
		Level4 = 25000;		//Purple
		Level5 = 50000;		//Gold
		Level6 = 100000;	//Pink
	*/

//Also, presently, these are NON-Persistant vehicles.  Meaning that they will not last over a restart.  Keep that in mind with prices.  Later updates I'll set that up, with pin code entry.
	["Vehicles - NOT PERSISTENT",
		[
//			["DISPLAY", 		"CLASSNAME", 						COST, 	"TYPE  2", RESPECT],
			["Mountain Bike", 	"Exile_Bike_MountainBike", 						500, 	"vehicle", 100],
			["Quadbike", 		"Exile_Bike_QuadBike_Black", 					3000, 	"vehicle", 3000],
			["Water Scooter", 	"Exile_Boat_WaterScooter",						2500, 	"vehicle", 10000],
			["Offroad", 		"Exile_Car_Offroad_Red",						15000, 	"vehicle", 10000],
			["Strider", 		"Exile_Car_Strider", 							30000, 	"vehicle", 50000]
		]
	],

	["Weapons",
		[
			["Assault Rifles", 		"airdrop_Rifles", 							18000, 	"supply", 50000],
			["LMGs", 				"airdrop_LMGs", 							20000, 	"supply", 50000],
			["Sniper Rifles", 		"airdrop_Snipers", 							22000, 	"supply", 50000]
		]
	],

	["Supplies",
		[
			["Food (small)",		"airdrop_FoodSmall",						2000, 	"supply", 10000],
			["Food (large)",		"airdrop_FoodLarge",						7000, 	"supply", 15000],
			["First Aid (Small)",	"airdrop_FirstAidSmall",					6000, 	"supply", 25000],
			["First Aid (Large)",	"airdrop_FirstAidLarge",					12000, 	"supply", 50000],
			["Combat Medic",		"airdropMedic",								15000, 	"supply", 100000]
		]
	],

	["Vehicle Repair",
		[
			["Land Vehicle Repair - Minor)",	"airdrop_RepairLandMinor",		24000,	"supply", 25000],
			["Land Vehicle Repair - Major",		"airdrop_RepairLandMajor",		32000,	"supply", 50000],
			["Air Vehicle Repair - Minor",		"airdrop_RepairAirMinor",		26000, 	"supply", 25000],
			["Air Vehicle Repair - Major",		"airdrop_RepairAirMajor",		36000,	"supply", 50000]
		]
	],	
	
	["Base in a Box",
		[
			["Wood Base)",						"airdrop_WoodBaseKit",			75000, 	"supply", 25000],
			["Concrete Base",					"airdrop_ConcreteBaseKit",		125000, "supply", 50000]
		]
	]		
];

APOC_AA_Drop_Contents =[
	["airdrop_Snipers",  //Name of the drop
		[
		// Item type, Item class(es), # of items, # of magazines per weapon
		// Valid item types: wep, itm, or bac.
			["wep", ["srifle_DMR_06_olive_F"],	1, 5],	//MK14
			["wep", ["srifle_LRR_camo_F"],		1, 5],	//M320
			["wep", ["srifle_DMR_05_blk_F"],	1, 5],	//Cyrus
			["wep", ["srifle_GM6_camo_F"],		1, 5],	//GM6 Lynx
			["itm", ["optic_ams"], 1],
			["itm", ["optic_LRPS"], 1],
			["itm", ["optic_SOS"], 1],
			["itm", ["optic_DMS"], 1],
			["itm", ["muzzle_snds_B_khk_F"], 2],
			["itm", ["bipod_01_F_blk"], 1],
			["itm", ["muzzle_snds_93mmg"], 1],
			["itm", ["Exile_Item_InstaDoc"], 2]

//			["itm", ["XXX"], 1],

		]
	],
	
	["airdrop_LMGs",
		[
			["wep", ["MMG_02_black_F", "MMG_02_camo_F","MMG_01_hex_F","MMG_01_tan_F"], 2,4],
			["wep", ["rhs_weap_m249", "rhs_weap_m249_pip_L_vfg1","rhs_weap_m249_pip_S","rhs_weap_m249_pip","rhs_weap_m249_pip_L_vfg2"], 2,4],
			["wep", ["LMG_Mk200_F","MMG_02_sand_F"], 1,4],
			["itm", ["V_PlateCarrierIAGL_dgtl", "V_PlateCarrierGL_mtp", "V_PlateCarrierGL_blk"], 2],
			["bac", ["B_Carryall_mcamo", "B_Kitbag_mcamo"], 2],
			["itm", ["bipod_01_F_blk", "bipod_02_F_hex"], 2],
			["itm", ["optic_DMS","optic_AMS","optic_KHS_blk"], 2],
			["itm", ["muzzle_snds_338_black", "muzzle_snds_338_sand", "muzzle_snds_93mmg"], 2],
			["itm", ["Exile_Item_InstaDoc"], 2]
		]
	],

	["airdrop_Rifles",
		[
			["wep", ["arifle_MX_F","arifle_MX_Black_F","arifle_MX_khk_F"],			2, 4],
			["wep", ["arifle_MXC_F","arifle_MXC_Black_F","arifle_MXC_khk_F"],		2, 4],
			["wep", ["arifle_MX_SW_F","arifle_MX_SW_Black_F","arifle_MX_GL_khk_F"],	2, 4],
			["wep", ["rhs_weap_hk416d10","rhs_weap_hk416d10_m320","rhs_weap_hk416d10_LMT"],	1, 4],
			["wep", ["rhs_weap_m4","rhs_weap_m4_mstock","rhs_weap_m4_m203"],		1, 4],
			["wep", ["rhs_weap_m4a1","rhs_weap_m4a1_d","rhs_weap_m4a1_wd"],			1, 4],
			["wep", ["rhs_weap_m4a1_m203","rhs_weap_m4a1_m203s_d","rhs_weap_m4a1_m203s_wd","rhs_weap_m4a1_m203s_sa"],	1, 4],

			// ["ItemType",[Array of items/weps to choose from randomly], number of items]
			// If using wep, you need also number of mags to be included.
			["itm", ["V_PlateCarrierIAGL_dgtl", "V_TacVest_camo", "V_PlateCarrierGL_rgr"], 2],
			["itm", ["bipod_01_F_blk", "bipod_02_F_hex"], 3],
			["itm", ["optic_DMS","optic_AMS","optic_KHS_blk"], 2],
			["itm", ["muzzle_snds_h", "muzzle_snds_h_khk_F", "muzzle_snds_h_snd_F"], 4],
			["itm", ["rhsusf_acc_rotex5_grey", "rhsusf_acc_nt4_tan","rhsusf_acc_nt4_black", "rhsusf_acc_nt4_tan"], 2],
			["bac", ["B_Carryall_mcamo", "B_Kitbag_mcamo"], 2],
			["itm", ["Exile_Item_InstaDoc"], 2]

		]
	],
	
	["airdrop_FoodSmall",
		[
			["itm", ["Exile_Item_EMRE","Exile_Item_GloriousKnakworst","Exile_Item_Surstromming"], 5],
			["itm", ["Exile_Item_EMRE","Exile_Item_ChristmasTinner_Cooked","Exile_Item_BBQSandwich_Cooked"], 5],
			["itm", ["Exile_Item_PlasticBottleCoffee","Exile_Item_PlasticBottleFreshWater","Exile_Item_MountainDupe"], 5],
			["itm", ["Exile_Item_PlasticBottleCoffee","Exile_Item_PlasticBottleFreshWater","Exile_Item_MountainDupe"], 5]
		]
	],

	["airdrop_FoodLarge",
		[
			["itm", ["Exile_Item_CanOpener"], 1],
			["itm", ["Exile_Item_EMRE","Exile_Item_GloriousKnakworst","Exile_Item_Surstromming"], 10],
			["itm", ["Exile_Item_EMRE","Exile_Item_ChristmasTinner_Cooked","Exile_Item_BBQSandwich_Cooked"], 10],
			["itm", ["Exile_Item_EMRE","Exile_Item_SausageGravy_Cooked","Exile_Item_MacasCheese_Cooked"], 10],
			["itm", ["Exile_Item_PlasticBottleCoffee","Exile_Item_PlasticBottleFreshWater","Exile_Item_MountainDupe"], 10],
			["itm", ["Exile_Item_PlasticBottleCoffee","Exile_Item_PlasticBottleFreshWater","Exile_Item_MountainDupe"], 10]
		]
	],
	
	["airdrop_FirstAidSmall",
		[
			["itm", ["Exile_Item_InstaDoc"], 	4],
			["itm", ["Exile_Item_Bandage"], 	4],
			["itm", ["Exile_Item_Heatpack"], 	4],
			["itm", ["Exile_Item_Vishpirin"], 	4],
			["itm", ["Exile_Item_PlasticBottleFreshWater"], 4],
			["itm", ["Exile_Item_PlasticBottleCoffee"], 2]
		]
	],
	
	["airdrop_FirstAidLarge",
		[
			["itm", ["Exile_Item_InstaDoc"], 	10],
			["itm", ["Exile_Item_Bandage"], 	10],
			["itm", ["Exile_Item_Heatpack"], 	10],
			["itm", ["Exile_Item_Vishpirin"], 	10],
			["itm", ["Exile_Item_PlasticBottleFreshWater"], 10],
			["itm", ["Exile_Item_PlasticBottleCoffee"], 6]			
		]
	],

	["airdropMedic",
		[
			["itm", ["Exile_Item_Defibrillator"], 1],
			["itm", ["Exile_Item_InstaDoc"], 	10],
			["itm", ["Exile_Item_Bandage"], 	10],
			["itm", ["Exile_Item_Heatpack"], 	10],
			["itm", ["Exile_Item_Vishpirin"], 	10],
			["itm", ["Exile_Item_PlasticBottleFreshWater"], 10],
			["itm", ["Exile_Item_PlasticBottleCoffee"], 6]			
		]
	],
	
	["airdrop_RepairLandMinor",
		[
			["itm", ["Exile_Item_Wrench","Exile_Item_Foolbox"], 1],
			["itm", ["Exile_Item_FuelCanisterFull"], 1],
			["itm", ["Exile_Item_DuctTape","Exile_Item_JunkMetal"], 2]
		]
	],

	["airdrop_RepairLandMajor",
		[
			["itm", ["Exile_Item_Wrench","Exile_Item_Foolbox"], 1],
			["itm", ["Exile_Item_FuelCanisterFull"], 4],
			["itm", ["Exile_Item_CarWheel"], 4],
			["itm", ["Exile_Item_DuctTape","Exile_Item_JunkMetal"], 10]
		]
	],

	["airdrop_RepairAirMinor",
		[
			["itm", ["Exile_Item_Wrench","Exile_Item_Foolbox","Exile_Item_OilCanister"], 1],
			["itm", ["Exile_Item_FuelCanisterFull"], 1],
			["itm", ["Exile_Item_DuctTape","Exile_Item_JunkMetal","Exile_Item_FuelCanisterFull"], 2],
			["itm", ["Exile_Item_MetalPole","Exile_Item_MetalScrews","Exile_Item_MetalWire"], 1]
		]
	],

	["airdrop_RepairAirMajor",
		[
			["itm", ["Exile_Item_Wrench","Exile_Item_Foolbox","Exile_Item_OilCanister"], 1],
			["itm", ["Exile_Item_FuelCanisterFull"], 4],
			["itm", ["Exile_Item_DuctTape","Exile_Item_JunkMetal","Exile_Item_FuelCanisterFull"], 10],
			["itm", ["Exile_Item_MetalPole","Exile_Item_MetalScrews","Exile_Item_MetalWire"], 10]
		]
	],

	["airdrop_WoodBaseKit",
		[
//			["itm", ["Exile_Item_CodeLock"], 1],
			["itm", ["Exile_Item_WoodFloorKit","Exile_Item_WoodWallKit"], 8],
			["itm", ["Exile_Item_WoodFloorKit","Exile_Item_WoodWallKit"], 8],
			["itm", ["Exile_Item_WoodWallKit","Exile_Item_WoodWallHalfKit"], 8],
			["itm", ["Exile_Item_WoodDoorKit"], 1],
			["itm", ["Exile_Item_WoodWindowKit"], 4],
			["itm", ["Exile_Item_WoodStairsKit","Exile_Item_WoodFloorPortKit"], 6],
			["itm", ["Exile_Item_WoodLadderKit","Exile_Item_WoodGateKit","Exile_Item_WoodDrawBridgeKit","Exile_Item_WoodFloorPortSmallKit"], 3]
		]
	],

	["airdrop_ConcreteBaseKit",
		[
//			["itm", ["Exile_Item_CodeLock"], 1],
			["itm", ["Exile_Item_ConcreteFloorKit","Exile_Item_ConcreteWallKit"], 8],
			["itm", ["Exile_Item_ConcreteFloorKit","Exile_Item_ConcreteWallKit"], 8],
			["itm", ["Exile_Item_ConcreteWallKit","Exile_Item_WoodWallHalfKit"], 8],
			["itm", ["Exile_Item_ConcreteDoorKit"], 1],
			["itm", ["Exile_Item_ConcreteWindowKit"], 4],
			["itm", ["Exile_Item_ConcreteStairsKit","Exile_Item_ConcreteFloorPortKit"], 6],
			["itm", ["Exile_Item_WoodLadderKit","Exile_Item_ConcreteGateKit","Exile_Item_WoodDrawBridgeKit","Exile_Item_WoodFloorPortSmallKit"], 3]
		]
	]

/*
	["airdrop_XXX",
		[
			["itm", ["XXX","XXX","XXX"], 1],
			["itm", ["XXX","XXX","XXX"], 1],
			["itm", ["XXX","XXX","XXX"], 1],
			["itm", ["XXX","XXX","XXX"], 1],
			["itm", ["XXX","XXX","XXX"], 10]
		]
	]
*/	

	
	
];
