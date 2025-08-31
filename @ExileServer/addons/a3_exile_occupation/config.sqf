////////////////////////////////////////////////////////////////////////
//
//		Exile Occupation by second_coming
//		http://www.exilemod.com/profile/60-second_coming/
//
//      For support, visit:
//      http://www.exilemod.com/topic/12517-release-exile-occupation-roaming-ai-more/
//
//		This script uses the fantastic DMS by Defent and eraser1:
//		http://www.exilemod.com/topic/61-dms-defents-mission-system/
//
////////////////////////////////////////////////////////////////////////

// Shared Config for each occupation monitor

SC_debug						= false;					// set to true to turn on debug features (not recommended for live servers)
SC_extendedLogging          	= false;                	// set to true for additional 
SC_infiSTAR_log					= false;					// true Use infiSTAR logging, false logs to server rpt

SC_useApexClasses           	= false;                 	// true if you want to use the Apex class list over rides, false to use vanilla Arma gear
SC_useMapOverrides          	= true;                 	// set to true to enable over riding options per map (see the bottom of this file for examples)

SC_maxAIcount					= 150;						// the maximum amount of AI, if the AI count is above this then additional AI won't spawn
SC_mapMarkers					= false;                	// Place map markers at the occupied areas (occupyPlaces and occupyMilitary only) true/false
SC_minFPS						= 5;				    	// any lower than minFPS on the server and additional AI won't spawn
SC_scaleAI						= 10;						// any more than _scaleAI players on the server and _maxAIcount is reduced for each extra player

SC_minDistanceToSpawnZones  	= 750;                  	// Minimum distance in metres to the nearest spawn zone
SC_minDistanceToTraders     	= 750;                  	// Minimum distance in metres to the nearest trader zone
SC_minDistanceToTerritory   	= 350;                  	// Minimum distance in metres to the nearest player territory
SC_minDistanceToPlayer      	= 250;                  	// Minimum distance in metres to the nearest player
SC_useWaypoints					= true;                 	// When spawning AI create waypoints to make them enter buildings (can affect performance when the AI is spawned and the waypoints are calculated)


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//	Turn Modules On or Off (can be overridden in the map overrides section)
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

SC_processReporter				= false;                 	// log the a list of active server processes every 60 seconds (useful for debugging server problems)
SC_fastNights               	= false;					// true if you want night time to go faster than daytime
SC_occupyPlaces 				= true;						// true if you want villages,towns,cities patrolled by bandits
SC_occupyTraders            	= false;					// true if you want to create trader camps at positions specified in SC_occupyTraderDetails
SC_occupyStatic	 		    	= false;		    		// true if you want to add AI in specific locations
SC_occupyTransport 	        	= false;					// true if you want pubic transport (travels between traders)
SC_occupyLootCrates		    	= true;						// true if you want to have random loot crates with guards
SC_LootCratesToBSFevents 		= true;						// true if you want loot events logged in "BSF_Event_Positions"
SC_occupyRandomSpawn        	= true;               	 	// (WORK IN PROGRESS) true if you want random spawning AI that hunt for nearby players
SC_occupyMilitary 		    	= true;			    		// true if you want military buildings patrolled
SC_occupyVehicle				= false;					// true if you want to have roaming AI land vehicles
SC_occupySky					= false;					// true if you want to have roaming AI helis
SC_occupySea					= true;						// true if you want to have roaming AI boats
SC_occupyHeliCrashes			= true;						// true if you want to have Dayz style helicrashes
SC_HeliCrashesToBSFevents 		= true;						// true if you want Heli Crashed logged in "BSF_Event_Positions"

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//	Fast nights Setup
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

SC_fastNightsStarts         	= 18;                   	// Start fast nights at this hour (24 hour clock) eg. 18 for 6pm
SC_fastNightsMultiplierNight	= 24;                   	// the time multiplier to use at night (12 = 12x speed)
SC_fastNightsEnds           	= 6;                    	// End fast nights at this hour (24 hour clock) eg. 6 for 6am
SC_fastNightsMultiplierDay  	= 4;                    	// the time multiplier to use during daylight hours (4 = 4x speed)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//	Random Spawn Setup (Work in progress)
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

SC_randomSpawnMinPlayers    	= 1;                    	// Minimum number of players to be online before random spawning AI can spawn
SC_randomSpawnMaxGroups        	= 8;                    	// Maximum amount of random AI groups allowed at any time
SC_randomSpawnMinGroupSize      = 3;                    	// Minimum amount of random AI groups allowed per group
SC_randomSpawnMaxGroupSize      = 5;                    	// Maximum amount of random AI groups allowed per group
SC_randomSpawnChance			= 15;						// Percentage chance of spawning if suitable player found
SC_randomSpawnIgnoreCount		= true;						// true if you want spawn random AI groups regardless of overall AI count (they still count towards the total though)
SC_randomSpawnFrequency			= 2700;						// time in seconds between the possibility of random AI hunting the same player (1800 for 30 minutes)
SC_randomSpawnNearBases			= true;						// true if you want to allow random spawns in range of territories
SC_randomSpawnNearSpawns		= true;						// true if you want to allow random spawns in range of spawn zones
SC_randomSpawnTargetBambis		= false;					// true if you want to allow random spawns to target bambis
SC_randomSpawnAnnounce			= true;						// true if you want a warning toast issued to all players when AI spawns
SC_randomSpawnNameTarget		= true;						// true if you want to name the targeted player

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//	Occupy Places Setup
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

SC_occupyPlacesSurvivors		= true;						// true if you want a chance to spawn survivor AI as well as bandits (SC_occupyPlaces must be true to use this option)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//	Trader Base Setup
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

SC_occupyTraderDetails      	= [
									//["mapname", "Name", [x,y,z], "filename", true, trader name, location, safezone true/false, safezone radius]
									//["Tanoa", "Lifou Traders", [7317,7217,0], "trader1.sqf", true, 175],
									//["Tanoa", "Lijnhaven Traders", [11580,2051,0], "trader1.sqf", true, 175],
									//["Napf", "Hafen Traders", [9286,17606,0], "trader1.sqf", true, 175],
									//["Chernarus", "Cherno Test Traders", [7317,7217,0], "trader1.sqf", true, 250]
								  ];
        	
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//	Occupy Static Setup
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////	

SC_staticIgnoreNearbyPlayers	= false;		// Spawn even if players are nearby
SC_staticIgnoreAICount			= false;		// Ignore the AI count for Static AI Spawns
SC_staticBandits            	= [				//[[pos],ai count,radius,search buildings]	
    
								  ];     
SC_staticSurvivors          	= [				//[[pos],ai count,radius,search buildings]
												//[[3770,8791,0],8,250,true]	
								  ];      

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//	Public Transport Setup
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////							  
							  
SC_colourTransport          	= true;                 // true if you want the public transport coloured
SC_secureTransport          	= true;                	// true if you want the public transport and pilot to be indestructible
SC_occupyTransportClass 		= ["Exile_Chopper_Orca_BlackCustom"]; // to always use the same vehicle, specify one option only

SC_occupyTransportStartPos  	= [];                   // if empty defaults to map centre

SC_TransportAirFixed        	= false;                // true if you want to use fixed waypoints for air transport, false to autodetect where trader zones are
SC_TransportAirWaypoints    	= [
                                    [1000,1000,0],
                                    [2000,2000,0],
                                    [3000,3000,0],
                                    [4000,4000,0]
                                ];
SC_TransportLandFixed       	= false;                // true if you want to use fixed waypoints for land transport, false to autodetect where trader zones are
SC_TransportLandWaypoints   	= [
                                    [1000,1000,0],
                                    [2000,2000,0],
                                    [3000,3000,0],
                                    [4000,4000,0]
                                ];

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//	Loot Crate Setup
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////								


SC_occupyLootCratesStatic   	= false;			    	// true if you want to have random loot crates spawn in pre-defined locations set in SC_occupyLootCratesLocations
SC_occupyLootCratesLocations	= [
                                    [1000,1000,0],
                                    [2000,2000,0]
                                ];
SC_SpawnLootCrateGuards			= true;						// true if you want to enable AI guards
SC_numberofLootCrates       	= 6;                    	// if SC_occupyLootCrates = true spawn this many loot crates (overrided below for Namalsk)
SC_LootCrateGuards          	= 5;                    	// number of AI to spawn at each crate
SC_LootCrateGuardsRandomize 	= true;                 	// Use a random number of guards up to a maximum = SC_LootCrateGuards (so between 1 and SC_LootCrateGuards)
SC_occupyLootCratesMarkers		= false;						// true if you want to have markers on the loot crate spawns
SC_HeliCrashMarkers				= false;						// true if you want to have markers on the heli crash spaw
SC_ropeAttach               	= true;                		// Allow lootcrates to be airlifted (for SC_occupyLootCrates and SC_occupyHeliCrashes)

// Array of possible common items to go in loot crates ["classname",fixed amount,random amount]
// ["Exile_Item_Matches",1,2] this example would add between 1 and 3 Exile_Item_Matches to the crate (1 + 0 to 2 more)
// to add a fixed amount make the second number 0
SC_LootCrateItems           	= [
                                    ["BSF_Paint_Bucket_Green",0,1],
                                    ["Exile_Melee_Axe",1,0],
                                    ["Exile_Item_GloriousKnakworst",1,2],
                                    ["Exile_Item_PlasticBottleFreshWater",1,2],
                                    ["Exile_Item_Beer",5,1],
                                    ["Exile_Item_InstaDoc",1,1],
                                    ["Exile_Item_Matches",1,0],
                                    ["Exile_Item_CookingPot",1,0],                      
                                    ["Exile_Item_MetalPole",1,0],
                                    ["Exile_Item_LightBulb",1,0],
                                    ["Exile_Item_FuelCanisterEmpty",1,0],
                                    ["Exile_Item_WoodPlank",0,8],
                                    ["Exile_Item_woodFloorKit",0,2],
                                    ["Exile_Item_WoodWindowKit",0,1],
                                    ["Exile_Item_WoodDoorwayKit",0,1],
                                    ["Exile_Item_WoodFloorPortKit",0,2],   
                                    ["Exile_Item_CodeLock",0,1],
									["Exile_Item_Cement",2,10],
									["Exile_Item_Sand",2,10],
									["Exile_Item_MetalWire",1,5],
									["Exile_Item_WaterCanisterEmpty",0,2],
									["Exile_Item_Shovel",0,1],
									["Exile_Item_Rope",0,1],
									["Exile_Item_MetalScrews",0,5],
                                    ["Exile_Item_CanOpener",1,0],
                                    ["Exile_Item_Handsaw",0,1],
                                    ["Exile_Item_ToiletPaper",1,5],
                                    ["Exile_Item_Vishpirin",1,2],
                                    ["Exile_Item_Bandage",1,3],
                                    ["Exile_Item_Heatpack",1,2],
                                    ["rzinfection_antivirus_pills",0,2],
                                    ["rzinfection_antivirus_injector",0,1],
                                    ["Exile_Item_SheepSteak_Cooked",0,1],
                                    ["Exile_Item_CatSharkFilet_Cooked",0,1],
                                    ["Exile_Item_TurtleFilet_Cooked",0,1],
                                    ["Exile_Item_MulletFilet_Raw",0,1],
                                    ["Exile_Item_SalemaFilet_Raw",0,1],
                                    ["Exile_Item_SnakeFilet_Raw",0,1],
                                    ["Exile_Item_PlasticBottleCoffee",0,2],
                                    ["Exile_Item_EnergyDrink",0,2] 
                            ];

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//	Blacklisted Zones
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////							
							
SC_blackListedAreas         	=   [
							//		[[3810,8887,0],     500,    "Chernarus"],	// Vybor Occupation DMS Static Mission
							//		[[12571,14337,0],   500,    "Altis"],		// Neochori Occupation DMS Static Mission
							//		[[3926,7523,0],     500,    "Namalsk"],		// Norinsk Occupation DMS Static Mission  
							//		[[3926,7523,0],     500,    "Napf"],		// Lenzburg Occupation DMS Static Mission   

									[[7228,6986,0],		250,	"Tanoa"],		// Tanoa Airport
									[[2265,8595,0],		250,	"Tanoa"],		// Ferry
									[[2165,13430,0],	250,	"Tanoa"],		// PVP Trader
									[[7990,12410,0],	250,	"Tanoa"],		// Roadhouse Trader
									[[12190,8165,0],	250,	"Tanoa"],		// Plantation Trader
									[[11675,4105,0],	250,	"Tanoa"],		// SE Island Trader
									
									[[14450,16335,0],	500,	"Altis"],		// Terminal
									[[22400,14500,0],	500,	"Altis"],		// East Trader
									[[23334,24189,0],	400,	"Altis"],		// Sideras Trader
									[[5086,10821,0],	400,	"Altis"],		// Panochori Trader
									[[3000,18175,0],	400,	"Altis"],		// West Trader

									[[5133,2240,0],		400,	"IslaDuala"],
									[[6857,6253,0],		400,	"IslaDuala"],
									[[8335,4535,0],		400,	"IslaDuala"],
									[[832,9104,0],		400,	"IslaDuala"],
									
									[[12095,1500],		400,	"Lythium"],
									[[11487,16972],		400,	"Lythium"],
									[[3750,12184],		400,	"Lythium"],
									[[4142,826],		400,	"Lythium"],
									[[16949,9567],		400,	"Lythium"],

 									[[8081,10467,0],	700,	"Malden"],		// Airport Trader
  									[[1565,4629,0],		700,	"Malden"],		// Arette Trader
 									[[3790,7460,0],		700,	"Malden"],		// Central Trader
 									[[5767,2450,0],		700,	"Malden"],		// Harbor Trader
 									[[9310,3830,0],		700,	"Malden"],		// Island Trader
  									[[7130,10820,0],	700,	"Malden"]		// Northern bottleneck

									];

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//	Heli Crash Setup
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////								

SC_occupyHeliCrashesStatic   	= false;			    	// true if you want to have random Heli Crash spawn in pre-defined locations set in SC_occupyHeliCrashesLocations
SC_occupyHeliCrashesLocations	= [
                                    [1000,1000,0],
                                    [2000,2000,0],
                                    [3000,3000,0],
                                    [4000,4000,0]
                                ];
SC_HeliCrashesOnFire			= true;                 	// true if you want the crash on fire, false if you just want smoke
SC_SpawnHeliCrashGuards			= true;						// true if you want to enable AI guards
SC_numberofHeliCrashes      	= 4;						// if SC_occupyHeliCrashes = true spawn this many Heli Crashes
SC_HeliCrashGuards          	= 2;                    	// number of AI to spawn at each crate
SC_HeliCrashGuardsRandomize 	= true;                 	// Use a random number of guards up to a maximum = SC_HeliCrashGuards (so between 1 and SC_HeliCrashGuards)
SC_HeliCrashMarkers				= false;						// true if you want to have markers on the Heli Crashes

// Array of possible common items to go in heli crash crates ["classname",fixed amount,random amount] NOT INCLUDING WEAPONS
// ["HandGrenade",0,2] this example would add between 0 and 2 HandGrenade to the crate (fixed 0 plus 0-2 random)
// to add a fixed amount make the second number 0

SC_HeliCrashItems           	=   [
                                    ["BSF_Paint_Bucket_Green",0,1],
                                    ["B_Parachute",1,1],
                                    ["H_CrewHelmetHeli_B",1,1],
                                    ["ItemGPS",0,1],
                                    ["Exile_Item_InstaDoc",1,1],
                                    ["Exile_Item_PlasticBottleFreshWater",2,2],
                                    ["Exile_Item_EMRE",2,2],
									["Exile_Item_ToiletPaper",0,3], 									
									["Exile_Item_PlasticBottleCoffee",0,2], 	
									["Exile_Item_DuctTape",0,2], 	
									["Exile_Item_Rope",0,1],
									["Exile_Item_MetalBoard",0,1],
									["Exile_Item_MetalPole",0,1],
									["Exile_Item_LightBulb",0,2],
									["Exile_Item_JunkMetal",0,2],
									["Exile_Item_MetalScrews",1,4],
									["Exile_Item_JunkMetal",1,4],
									["Exile_Item_MetalWire",1,4],
									["Exile_Item_CanOpener",0,1],
									["Exile_Item_Matches",1,1],
	                                ["Exile_Melee_Axe",1,0],
                                    ["Exile_Item_FuelCanisterFull",1,0],
									["Exile_Item_MetalWire",1,5],
									["Exile_Item_WaterCanisterEmpty",0,2],
									["Exile_Item_Shovel",0,1],
									["Exile_Item_Rope",0,1],
									["Exile_Item_MetalScrews",0,5],
                                    ["Exile_Item_CanOpener",1,0],
                                    ["Exile_Item_Wrench",1,0],
                                    ["Exile_Item_SleepingMat",0,1],
                                    ["Exile_Item_Vishpirin",1,2],
                                    ["Exile_Item_Bandage",1,3],
                                    ["Exile_Item_Heatpack",1,2],
                                    ["rzinfection_antivirus_pills",0,2],
                                    ["rzinfection_antivirus_injector",0,1],
                                    ["Exile_Item_PlasticBottleCoffee",0,2]
								];

SC_HeliCrashRareItems       	=   [
                                    ["Exile_Item_Laptop",0,1],
                                    ["HandGrenade",0,2]              
                                ];
SC_HeliCrashRareItemChance  	= 10;                   // percentage chance to spawn each SC_HeliCrashRareItems
                                
// Array of possible weapons to place in the crate                            
SC_HeliCrashWeapons         	=   [
                                    "srifle_DMR_02_camo_F",
                                    "srifle_DMR_03_woodland_F",
                                    "srifle_DMR_04_F",
                                    "srifle_DMR_05_hex_F"
                                ];
                                
SC_HeliCrashWeaponsAmount   	= [1,3]; 	// [fixed amount to add, random amount to add]
SC_HeliCrashMagazinesAmount 	= [2,2]; 	// [fixed amount to add, random amount to add]

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//	Roaming Vehicle Setup - (applies to ground, air and sea vehicles)
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

SC_minimumCrewAmount        	= 2;     	// Minimum amount of AI allowed in a vehicle
SC_maximumCrewAmount        	= 10;     	// Maximum amount of AI allowed in a vehicle
											// (essential crew like drivers and gunners will always spawn regardless of these settings)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//	Roaming Land Vehicle Setup
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

SC_maxNumberofVehicles 	    	= 12;		// How many roaming vehicles to spawn	
SC_occupyLandVehicleIgnoreCount	= false;	// true if you want spawn vehicles regardless of overall AI count
SC_occupyVehiclesLocked			= false;	// true if AI vehicles to stay locked until all the linked AI are dead		
SC_occupyVehicleSurvivors		= false;	// true if you want a chance to spawn survivor AI as well as bandits (SC_occupyVehicle must be true to use this option)

SC_occupyVehicleUseFixedPos		= false;	// True if you want to specify the patrol positions and radius of the area to patrol / false for random

											// if you set SC_maxNumberofVehicles higher than the number of static positions, the remainder will be random
											// they will also ignore any blacklisted areas
SC_occupyVehicleFixedPositions	= [
                                    [[4434,2892,0],2000,"Tanoa"],	// [[x,y,z],radius,"mapname"] leave no spaces between 
                                    [[2238,6717,0],2000,"Tanoa"],
                                    [[8197,9081,0],3000,"Tanoa"],
                                    [[13074,11817,0],3000,"Tanoa"]  
								  ];

// Array of arrays of ground vehicles which can be used by AI patrols (the number next to next vehicle is the maximum amount of that class allowed, 0 for no limit)				
SC_VehicleClassToUse 			=   [	
									["Exile_Car_LandRover_Green",0],
                                    ["Exile_Bike_QuadBike_Black",2],
                                    ["Exile_Car_UAZ_Open_Green",2] 
                                ];
SC_VehicleClassToUseRare		=   [	
                                    ["Exile_Car_Hunter",1],
                                    ["Exile_Car_HEMMT",1],
                                    ["Exile_Car_Zamak",1],
                                    ["Exile_Car_Offroad_Armed_Guerilla12",1],
                                    ["Exile_Car_Offroad_Armed_Guerilla03",1],
                                    ["Exile_Car_Tempest",1] 
                                ];
								
// Array of arrays of ground vehicles which can be used by Survivor AI patrols (the number next to next vehicle is the maximum amount of that class allowed, 0 for no limit)									
SC_SurvivorVehicleClassToUse 			=   [	
									["Exile_Car_LandRover_Green",0],
                                    ["Exile_Bike_QuadBike_Black",2],
                                    ["Exile_Car_UAZ_Open_Green",2] 
                                ];
SC_SurvivorVehicleClassToUseRare		=   [	
                                    ["Exile_Car_Hunter",1],
                                    ["Exile_Car_HEMMT",1],
                                    ["Exile_Car_Zamak",1],
                                    ["Exile_Car_Offroad_Armed_Guerilla12",1],
                                    ["Exile_Car_Offroad_Armed_Guerilla03",1],
                                    ["Exile_Car_Tempest",1] 
                                ];

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//	Roaming Aircraft Setup
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////								
																					
// Settings for roaming airborne AI (non armed helis will just fly around)
SC_maxNumberofHelis		    	= 2;
SC_occupySkyVehicleIgnoreCount	= false;	// true if you want spawn vehicles regardless of overall AI count

// Array of aircraft which can be used by AI patrols (the number next to next vehicle is the maximum amount of that class allowed, 0 for no limit)
SC_HeliClassToUse 		    			=   [ 
								//	["B_mas_CH_47F",1],							//Chinook - A3XAI
								//	["B_mas_UH60M",1],							//Black Hawk - A3XAI
								//	["RHS_UH60M_d",1],							//Black Hawk  - A3XAI
								//	["B_Heli_Attack_01_dynamicLoadout_F",1],	//RAH-66 Comanche - A3XAI
								//	["B_CTRG_Heli_Transport_01_tropic_F",1],	//Ghost Hawk - VEMFr
								//	["B_CTRG_Heli_Transport_01_sand_F",1],		//Ghost Hawk - VEMFr
								//	["B_Heli_Transport_01_F",1],				//Ghost Hawk - VEMFr
								//	["B_Heli_Transport_01_camo_F",1],			//Ghost Hawk - VEMFr
								//	["B_Heli_Transport_03_F",1],				//Huron - VEMFr
								//	["B_Heli_Transport_03_black_F",1],			//Huron - VEMFr
									["rhs_uh1h_hidf",1]							//Huey UH1- Occupation
								];

SC_occupyHeliUseFixedPos		= false;		// True if you want to specify the patrol positions and radius of the area to patrol / false for random

											// if you set SC_maxNumberofHelis higher than the number of static positions, the remainder will be random
											// they will also ignore any blacklisted areas
SC_occupyHeliFixedPositions		= [
                                    [[4434,2892,400],2000,"Tanoa"],	// [[x,y,z],radius,"mapname"] leave no spaces between 
                                    [[2238,6717,400],2000,"Tanoa"],
                                    [[8197,9081,400],3000,"Tanoa"],
                                    [[13074,11817,400],3000,"Tanoa"]  
								];
								
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//	Roaming Boats Setup
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Settings for roaming seaborne AI (non armed boats will just sail around)
SC_maxNumberofBoats		    = 0;
SC_occupySeaVehicleIgnoreCount		= false;	// true if you want spawn vehicles regardless of overall AI count

// Array of boats which can be used by AI patrols (the number next to next vehicle is the maximum amount of that class allowed, 0 for no limit)
SC_BoatClassToUse 		    =   [	
                                    ["B_Boat_Armed_01_minigun_F",1],
                                    ["I_Boat_Armed_01_minigun_F",1],
                                    ["I_C_Boat_Transport_02_F",0],
                                    ["rhsusf_mkvsoc",1]									
                                ];
								
SC_occupyBoatUseFixedPos		= false;	// True if you want to specify the patrol positions and radius of the area to patrol / false for random

											// if you set SC_maxNumberofBoats higher than the number of static positions, the remainder will be random
											// they will also ignore any blacklisted areas
SC_occupyBoatFixedPositions		= [
                                    [[200,200,0],2000,"Tanoa"],	// [[x,y,z],radius,"mapname"] leave no spaces between 
                                    [[400,400,0],2000,"Tanoa"],
                                    [[14000,5000,0],3000,"Tanoa"],
                                    [[16000,16000,0],3000,"Tanoa"]  
								];

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//	Occupy Military Setup
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Array of buildings to add military patrols to
SC_buildings                	= [	"Land_TentHangar_V1_F","Land_Hangar_F","Land_Airport_Tower_F","Land_Cargo_House_V1_F",
                                    "Land_Cargo_House_V3_F","Land_Cargo_HQ_V1_F","Land_Cargo_HQ_V2_F","Land_Cargo_HQ_V3_F",
                                    "Land_u_Barracks_V2_F","Land_i_Barracks_V2_F","Land_i_Barracks_V1_F","Land_Cargo_Patrol_V1_F",
                                    "Land_Cargo_Patrol_V2_F","Land_Cargo_Tower_V1_F","Land_Cargo_Tower_V1_No1_F","Land_Cargo_Tower_V1_No2_F",
                                    "Land_Cargo_Tower_V1_No3_F","Land_Cargo_Tower_V1_No4_F","Land_Cargo_Tower_V1_No5_F","Land_Cargo_Tower_V1_No6_F",
                                    "Land_Cargo_Tower_V1_No7_F","Land_Cargo_Tower_V2_F","Land_Cargo_Tower_V3_F","Land_MilOffices_V1_F",
                                    "Land_Radar_F","Land_budova4_winter","land_hlaska","Land_Vysilac_FM","land_st_vez","Land_ns_Jbad_Mil_Barracks",
                                    "Land_ns_Jbad_Mil_ControlTower","Land_ns_Jbad_Mil_House","land_pozorovatelna","Land_vys_budova_p1",
                                    "Land_Vez","Land_Mil_Barracks_i","Land_Mil_Barracks_L","Land_Mil_Barracks",
                                    "Land_Hlidac_budka","Land_Ss_hangar","Land_Mil_ControlTower","Land_a_stationhouse",
                                    "Land_Farm_WTower","Land_Mil_Guardhouse","Land_A_statue01","Land_A_Castle_Gate",
                                    "Land_A_Castle_Donjon","Land_A_Castle_Wall2_30","Land_A_Castle_Stairs_A",
                                    "Land_i_Barracks_V1_dam_F","Land_Cargo_Patrol_V3_F","Land_Radar_Small_F","Land_Dome_Big_F",
                                    "Land_Dome_Small_F","Land_Army_hut3_long_int","Land_Army_hut_int","Land_Army_hut2_int",
                                    // Additional Buildings
                                    "Land_Barracks_01_camo_F","Land_Barracks_01_grey_F","land_AII_last_floor","land_AII_middle_floor",
                                    "land_AII_upper_part","Land_Ind_IlluminantTower","Land_Misc_deerstand","Land_ns_Jbad_A_Stationhouse",
                                    "Land_Airport_01_controlTower_F","Land_Airport_01_terminal_F","Land_Airport_02_controlTower_F",
                                    "Land_Airport_02_terminal_F","Land_Cargo_House_V4_F","Land_Cargo_HQ_V4_F","Land_Cargo_Patrol_V4_F",
                                    "Land_Cargo_Tower_V4_F"
                                ]; 

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//	AI Setup (used in multiple modules)
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////		
		
SC_useRealNames         		= true;
        
// Arrays of names used to generate names for AI
SC_SurvivorFirstNames   		= ["John","Dave","Steve","Rob","Richard","Bob","Andrew","Nick","Adrian","Mark","Adam","Will","Graham"]; 
SC_SurvivorLastNames    		= ["Smith","Jones","Davids","Johnson","Jobs","Andrews","White","Brown","Taylor","Walker","Williams","Clarke","Jackson","Woods"]; 
SC_BanditFirstNames     		= ["Alex","Nikita","George","Daniel","Adam","Alexander","Sasha","Sergey","Dmitry","Anton","Jakub","Vlad","Maxim","Oleg","Denis","Wojtek"]; 
SC_BanditLastNames      		= ["Dimitrov","Petrov","Horvat","Novak","Dvorak","Vesely","Horak","Hansen","Larsen","Tamm","Ivanov","Pavlov","Virtanen"];
		
SC_SurvivorsChance          	= 20;						// chance in % to spawn survivors instead of bandits (for places and land vehicles)


SC_SurvivorsFriendly        	= true;                 	// true if you want survivors to be friendly to players (until they are attacked by players)
															// false if you want survivors to be aggressive to players

// Possible equipment for survivor AI to spawn with 
// spawning survivors without vests or backpacks will result in them having no ammunition                                                   
SC_SurvivorUniforms         	= ["Exile_Uniform_BambiOverall"]; 
SC_SurvivorVests            	= ["V_BandollierB_blk","V_BandollierB_cbr","V_BandollierB_khk","V_BandollierB_oli"];  
SC_SurvivorHeadgear         	= []; 
SC_SurvivorWeapon           	= ["arifle_MXC_F","arifle_TRG20_F"];
SC_SurvivorWeaponAttachments	= [];
SC_SurvivorMagazines        	= ["Exile_Item_Vishpirin","Exile_Item_Bandage"];
SC_SurvivorPistol           	= ["hgun_Rook40_F"];
SC_SurvivorPistolAttachments	= [];
SC_SurvivorAssignedItems    	= ["ItemMap","ItemCompass","ItemRadio","ItemWatch","Exile_Item_XM8"]; // all these items will be added
SC_SurvivorLauncher         	= [];
SC_SurvivorBackpack         	= [];

// Possible equipment for bandit AI to spawn with 
// spawning bandits without vests or backpacks will result in them having no ammunition                                                    
SC_BanditUniforms           	= ["U_IG_Guerilla1_1","U_IG_Guerilla2_1","U_IG_Guerilla2_2","U_IG_Guerilla2_3","U_IG_Guerilla3_1","U_BG_Guerilla2_1","U_IG_Guerilla3_2","U_BG_Guerrilla_6_1","U_BG_Guerilla1_1","U_BG_Guerilla2_2","U_BG_Guerilla2_3","U_BG_Guerilla3_1"]; 
SC_BanditVests              	= ["V_PlateCarrier1_rgr","V_PlateCarrier2_rgr","V_PlateCarrier2_blk","V_PlateCarrier3_rgr"]; 
//SC_BanditVests              	= ["V_BandollierB_blk","V_BandollierB_cbr","V_BandollierB_khk","V_BandollierB_oli"]; 
SC_BanditHeadgear           	= ["rhs_8point_marpatd","H_Cap_usblack","H_Cap_blk_CMMG","H_Shemag_olive","H_Shemag_olive_hs","H_ShemagOpen_khk","H_ShemagOpen_tan","H_Cap_tan","H_Cap_red","H_Cap_blu","H_Cap_brn_SPECOPS","H_Cap_blk_Raven"];
//SC_BanditHeadgear           	= ["H_Shemag_khk","H_Shemag_olive","H_Shemag_olive_hs","H_Shemag_tan","H_ShemagOpen_khk","H_ShemagOpen_tan"];
SC_BanditWeapon             	= ["LMG_Zafir_F","arifle_Katiba_C_F","arifle_Katiba_F","arifle_Katiba_GL_F","arifle_MXC_Black_F","arifle_MXC_F","arifle_TRG20_F","arifle_TRG21_F","arifle_TRG21_GL_F"];
SC_BanditWeaponAttachments  	= [];
SC_BanditMagazines          	= ["Exile_Item_InstaDoc","Exile_Item_Vishpirin","Exile_Item_Bandage","Exile_Item_DuctTape","Exile_Item_PlasticBottleFreshWater","Exile_Item_Energydrink","Exile_Item_EMRE","Exile_Item_Cheathas","Exile_Item_Noodles","Exile_Item_BBQSandwich","Exile_Item_Catfood"];
SC_BanditPistol             	= ["hgun_ACPC2_F","hgun_P07_F","hgun_Pistol_heavy_01_F","hgun_Pistol_heavy_02_F","hgun_Rook40_F"];
SC_BanditPistolAttachments  	= [];
SC_BanditAssignedItems      	= ["ItemMap","ItemCompass","ItemRadio","ItemWatch"]; // all these items will be added
SC_BanditLauncher           	= [];
SC_BanditBackpack           	= ["B_TacticalPack_mcamo","B_TacticalPack_ocamo","B_TacticalPack_oli","B_TacticalPack_rgr"];  								
//SC_BanditBackpack           	= ["B_HuntingBackpack","B_Kitbag_cbr","B_Kitbag_mcamo","B_Kitbag_sgg","B_OutdoorPack_blk","B_OutdoorPack_blu","B_OutdoorPack_tan","B_TacticalPack_blk","B_TacticalPack_mcamo","B_TacticalPack_ocamo","B_TacticalPack_oli","B_TacticalPack_rgr"];  								
// Possible equipment for random ai to spawn with 
// spawning random ai without vests or backpacks will result in them having no ammunition                                                    
SC_RandomUniforms           	= ["U_B_GEN_Soldier_F"]; 
SC_RandomVests              	= ["V_TacVest_gen_F"]; 
SC_RandomHeadgear           	= ["H_Cap_police"];
SC_RandomWeapon             	= ["SMG_05_F"];
SC_RandomWeaponAttachments  	= ["muzzle_snds_L"];
SC_RandomMagazines          	= ["Exile_Item_InstaDoc","Exile_Item_Vishpirin","Exile_Item_Bandage","Exile_Item_DuctTape","Exile_Item_PlasticBottleFreshWater","Exile_Item_Energydrink","Exile_Item_EMRE","Exile_Item_Cheathas","Exile_Item_Noodles","Exile_Item_BBQSandwich","Exile_Item_Catfood"];
SC_RandomPistol             	= ["hgun_Rook40_F"];
SC_RandomPistolAttachments  	= ["muzzle_snds_L"];
SC_RandomAssignedItems      	= ["ItemMap","ItemCompass","ItemRadio","ItemWatch"]; // all these items will be added
SC_RandomLauncher           	= [];
SC_RandomBackpack           	= ["B_AssaultPack_blk"];
								
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//	Map Specific Overrides  
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////								
			
if (SC_useMapOverrides) then {

	switch (toLower worldName) do {

	    case "altis": {
			SC_maxAIcount					= 120;
			SC_mapMarkers					= false;
			SC_occupyPlaces 				= false;
			SC_occupyTransport 	        	= false;
			SC_occupyMilitary 		    	= false;
			SC_occupyRandomSpawn        	= true;
				SC_randomSpawnMaxGroups		= 8;
				SC_randomSpawnMinGroupSize	= 2;
				SC_randomSpawnMaxGroupSize	= 10;
			SC_occupyVehicle				= false;
				SC_minimumCrewAmount        = 2;
				SC_maximumCrewAmount        = 10;
				SC_maxNumberofVehicles 	    = 12;
			SC_occupyLootCrates		    	= true;
				SC_numberofLootCrates       = 6;
				SC_LootCrateGuards          = 5;
				SC_LootCrateGuardsRandomize = false;
				SC_occupyLootCratesMarkers	= false;
				SC_LootCratesToBSFevents	= true;	
			SC_occupyHeliCrashes			= true;
				SC_numberofHeliCrashes      = 6;
				SC_HeliCrashGuards          = 6;
				SC_HeliCrashGuardsRandomize = true; 
				SC_HeliCrashMarkers	 		= false;
				SC_HeliCrashesToBSFevents 	= true;	
			SC_occupySky					= true;
				SC_maxNumberofHelis		    = 0;
			SC_occupySea					= true;
				SC_maxNumberofBoats		    = 6;
			};

	    case "malden": {
			SC_maxAIcount					= 120;
			SC_mapMarkers					= false;
			SC_occupyPlaces 				= false;
			SC_occupyTransport 	        	= false;
			SC_occupyMilitary 		    	= true;
			SC_occupyRandomSpawn        	= true;
				SC_randomSpawnMaxGroups		= 8;
				SC_randomSpawnMinGroupSize	= 2;
				SC_randomSpawnMaxGroupSize	= 10;
			SC_occupyVehicle				= false;
				SC_minimumCrewAmount        = 2;
				SC_maximumCrewAmount        = 10;
				SC_maxNumberofVehicles 	    = 12;
			SC_occupyLootCrates		    	= true;
				SC_numberofLootCrates       = 6;
				SC_LootCrateGuards          = 5;
				SC_LootCrateGuardsRandomize = false;
				SC_occupyLootCratesMarkers	= false;
				SC_LootCratesToBSFevents	= true;	
			SC_occupyHeliCrashes			= true;
				SC_numberofHeliCrashes      = 6;
				SC_HeliCrashGuards          = 6;
				SC_HeliCrashGuardsRandomize = true; 
				SC_HeliCrashMarkers	 		= false;
				SC_HeliCrashesToBSFevents 	= true;	
			SC_occupySky					= true;
				SC_maxNumberofHelis		    = 0;
			SC_occupySea					= true;
				SC_maxNumberofBoats		    = 6;
			};

	    case "tanoa": {
			SC_maxAIcount					= 120;
			SC_mapMarkers					= false;
			SC_occupyPlaces 				= false;
			SC_occupyTransport 	        	= false;
			SC_occupyMilitary 		    	= true;
			SC_occupyRandomSpawn        	= true;
				SC_randomSpawnMaxGroups		= 8;
				SC_randomSpawnMinGroupSize	= 2;
				SC_randomSpawnMaxGroupSize	= 10;
			SC_occupyVehicle				= false;
				SC_minimumCrewAmount        = 2;
				SC_maximumCrewAmount        = 10;
				SC_maxNumberofVehicles 	    = 12;
			SC_occupyLootCrates		    	= true;
				SC_numberofLootCrates       = 6;
				SC_LootCrateGuards          = 5;
				SC_LootCrateGuardsRandomize = false;
				SC_occupyLootCratesMarkers	= false;
				SC_LootCratesToBSFevents	= true;	
			SC_occupyHeliCrashes			= true;
				SC_numberofHeliCrashes      = 6;
				SC_HeliCrashGuards          = 6;
				SC_HeliCrashGuardsRandomize = true; 
				SC_HeliCrashMarkers	 		= false;
				SC_HeliCrashesToBSFevents 	= true;	
			SC_occupySky					= true;
				SC_maxNumberofHelis		    = 0;
			SC_occupySea					= true;
				SC_maxNumberofBoats		    = 6;
			};

	    case "esseker": {
			SC_maxAIcount					= 150;
			SC_mapMarkers					= false;
			SC_occupyPlaces 				= false;
			SC_occupyTransport 	        	= false;
			SC_occupyMilitary 		    	= false;
			SC_occupyRandomSpawn        	= true;
				SC_randomSpawnMaxGroups		= 6;
				SC_randomSpawnMinGroupSize	= 2;
				SC_randomSpawnMaxGroupSize	= 8;
			SC_occupyVehicle				= false;
				SC_minimumCrewAmount        = 2;
				SC_maximumCrewAmount        = 10;
				SC_maxNumberofVehicles 	    = 12;
			SC_occupyLootCrates		    	= true;
				SC_numberofLootCrates       = 6;
				SC_LootCrateGuards          = 5;
				SC_LootCrateGuardsRandomize = true;
				SC_occupyLootCratesMarkers	= false;
				SC_LootCratesToBSFevents	= true;	
			SC_occupyHeliCrashes			= true;
				SC_numberofHeliCrashes      = 6;
				SC_HeliCrashGuards          = 5;
				SC_HeliCrashGuardsRandomize = true; 
				SC_HeliCrashMarkers	 		= false;
				SC_HeliCrashesToBSFevents 	= true;	
			SC_occupySky					= true;
				SC_maxNumberofHelis		    = 0;
			SC_occupySea					= false;
				SC_maxNumberofBoats		    = 6;
			};

	    case "enoch": {
			SC_maxAIcount					= 150;
			SC_mapMarkers					= false;
			SC_occupyPlaces 				= false;
			SC_occupyTransport 	        	= false;
			SC_occupyMilitary 		    	= false;
			SC_occupyRandomSpawn        	= true;
				SC_randomSpawnMaxGroups		= 6;
				SC_randomSpawnMinGroupSize	= 2;
				SC_randomSpawnMaxGroupSize	= 8;
			SC_occupyVehicle				= false;
				SC_minimumCrewAmount        = 2;
				SC_maximumCrewAmount        = 10;
				SC_maxNumberofVehicles 	    = 12;
			SC_occupyLootCrates		    	= true;
				SC_numberofLootCrates       = 6;
				SC_LootCrateGuards          = 5;
				SC_LootCrateGuardsRandomize = true;
				SC_occupyLootCratesMarkers	= false; // CHABNGEME
				SC_LootCratesToBSFevents	= true;	
			SC_occupyHeliCrashes			= true;
				SC_numberofHeliCrashes      = 6;
				SC_HeliCrashGuards          = 5;
				SC_HeliCrashGuardsRandomize = true; 
				SC_HeliCrashMarkers	 		= false;
				SC_HeliCrashesToBSFevents 	= true;	
			SC_occupySky					= true;
				SC_maxNumberofHelis		    = 0;
			SC_occupySea					= false;
				SC_maxNumberofBoats		    = 6;
			};

	    case "lythium": {
			SC_maxAIcount					= 120;
			SC_mapMarkers					= false;
			SC_occupyPlaces 				= false;
			SC_occupyTransport 	        	= false;
			SC_occupyMilitary 		    	= true;
			SC_occupyRandomSpawn        	= true;
				SC_randomSpawnMaxGroups		= 8;
				SC_randomSpawnMinGroupSize	= 2;
				SC_randomSpawnMaxGroupSize	= 10;
			SC_occupyVehicle				= false;
				SC_minimumCrewAmount        = 2;
				SC_maximumCrewAmount        = 10;
				SC_maxNumberofVehicles 	    = 12;
			SC_occupyLootCrates		    	= true;
				SC_numberofLootCrates       = 6;
				SC_LootCrateGuards          = 5;
				SC_LootCrateGuardsRandomize = false;
				SC_occupyLootCratesMarkers	= false;
				SC_LootCratesToBSFevents	= true;	
			SC_occupyHeliCrashes			= true;
				SC_numberofHeliCrashes      = 6;
				SC_HeliCrashGuards          = 6;
				SC_HeliCrashGuardsRandomize = true; 
				SC_HeliCrashMarkers	 		= false;
				SC_HeliCrashesToBSFevents 	= true;	
			SC_occupySky					= true;
				SC_maxNumberofHelis		    = 0;
			SC_occupySea					= false;
				SC_maxNumberofBoats		    = 6;
			};

	    case "chernarusredux": {
			SC_maxAIcount					= 120;
			SC_mapMarkers					= false;
			SC_occupyPlaces 				= false;
			SC_occupyTransport 	        	= false;
			SC_occupyMilitary 		    	= true;
			SC_occupyRandomSpawn        	= true;
				SC_randomSpawnMaxGroups		= 8;
				SC_randomSpawnMinGroupSize	= 2;
				SC_randomSpawnMaxGroupSize	= 10;
			SC_occupyVehicle				= false;
				SC_minimumCrewAmount        = 2;
				SC_maximumCrewAmount        = 10;
				SC_maxNumberofVehicles 	    = 12;
			SC_occupyLootCrates		    	= true;
				SC_numberofLootCrates       = 6;
				SC_LootCrateGuards          = 5;
				SC_LootCrateGuardsRandomize = false;
				SC_occupyLootCratesMarkers	= false;
			SC_occupyHeliCrashes			= true;
				SC_numberofHeliCrashes      = 6;
				SC_HeliCrashGuards          = 6;
				SC_HeliCrashGuardsRandomize = true; 
				SC_HeliCrashMarkers	 		= false;
				SC_HeliCrashesToBSFevents 	= true;	
			SC_occupySky					= true;
				SC_maxNumberofHelis		    = 2;
			SC_occupySea					= true;
				SC_maxNumberofBoats		    = 3;
			};

	    case "isladuala": {
			SC_maxAIcount					= 120;
			SC_mapMarkers					= false;
			SC_occupyPlaces 				= false;
			SC_occupyTransport 	        	= false;
			SC_occupyMilitary 		    	= true;
			SC_occupyRandomSpawn        	= true;
				SC_randomSpawnMaxGroups		= 8;
				SC_randomSpawnMinGroupSize	= 2;
				SC_randomSpawnMaxGroupSize	= 10;
			SC_occupyVehicle				= false;
				SC_minimumCrewAmount        = 2;
				SC_maximumCrewAmount        = 10;
				SC_maxNumberofVehicles 	    = 12;
			SC_occupyLootCrates		    	= true;
				SC_numberofLootCrates       = 6;
				SC_LootCrateGuards          = 5;
				SC_LootCrateGuardsRandomize = false;
				SC_occupyLootCratesMarkers	= false;
			SC_occupyHeliCrashes			= true;
				SC_numberofHeliCrashes      = 6;
				SC_HeliCrashGuards          = 6;
				SC_HeliCrashGuardsRandomize = true; 
				SC_HeliCrashMarkers	 		= false;
				SC_HeliCrashesToBSFevents 	= true;	
			SC_occupySky					= true;
				SC_maxNumberofHelis		    = 0;
			SC_occupySea					= false;
				SC_maxNumberofBoats		    = 6;
			};
		
	    case "weferlingen": {
			SC_maxAIcount					= 120;
			SC_mapMarkers					= false;
			SC_occupyPlaces 				= false;
			SC_occupyTransport 	        	= false;
			SC_occupyMilitary 		    	= true;
			SC_occupyRandomSpawn        	= true;
				SC_randomSpawnMaxGroups		= 8;
				SC_randomSpawnMinGroupSize	= 3;
				SC_randomSpawnMaxGroupSize	= 10;
			SC_occupyVehicle				= false;
				SC_minimumCrewAmount        = 2;
				SC_maximumCrewAmount        = 10;
				SC_maxNumberofVehicles 	    = 12;
			SC_occupyLootCrates		    	= true;
				SC_numberofLootCrates       = 6;
				SC_LootCrateGuards          = 5;
				SC_LootCrateGuardsRandomize = false;
				SC_occupyLootCratesMarkers	= false;
				SC_LootCratesToBSFevents	= true;	
			SC_occupyHeliCrashes			= true;
				SC_numberofHeliCrashes      = 6;
				SC_HeliCrashGuards          = 6;
				SC_HeliCrashGuardsRandomize = true; 
				SC_HeliCrashMarkers	 		= false;
				SC_HeliCrashesToBSFevents 	= true;	
			SC_occupySky					= true;
				SC_maxNumberofHelis		    = 0;
			SC_occupySea					= false;
				SC_maxNumberofBoats		    = 6;
			};

	    case "fapovo": {
			SC_maxAIcount					= 120;
			SC_mapMarkers					= false;
			SC_occupyPlaces 				= false;
			SC_occupyTransport 	        	= false;
			SC_occupyMilitary 		    	= true;
			SC_occupyRandomSpawn        	= true;
				SC_randomSpawnMaxGroups		= 8;
				SC_randomSpawnMinGroupSize	= 3;
				SC_randomSpawnMaxGroupSize	= 10;
			SC_occupyVehicle				= True;
				SC_minimumCrewAmount        = 2;
				SC_maximumCrewAmount        = 10;
				SC_maxNumberofVehicles 	    = 12;
			SC_occupyLootCrates		    	= true;
				SC_numberofLootCrates       = 6;
				SC_LootCrateGuards          = 5;
				SC_LootCrateGuardsRandomize = false;
				SC_occupyLootCratesMarkers	= false;
				SC_LootCratesToBSFevents	= true;	
			SC_occupyHeliCrashes			= true;
				SC_numberofHeliCrashes      = 6;
				SC_HeliCrashGuards          = 6;
				SC_HeliCrashGuardsRandomize = true; 
				SC_HeliCrashMarkers	 		= false;
				SC_HeliCrashesToBSFevents 	= true;	
			SC_occupySky					= true;
				SC_maxNumberofHelis		    = 2;
			SC_occupySea					= false;
				SC_maxNumberofBoats		    = 6;
			};
	
	};
};

/*
if (worldName == 'Altis' AND SC_useMapOverrides) then 
{ 
//Modules
	SC_maxAIcount					= 120;
	SC_mapMarkers					= false;
	SC_occupyPlaces 				= false;
	SC_occupyTransport 	        	= false;
	SC_occupyMilitary 		    	= false;
	SC_occupyRandomSpawn        	= true;
		SC_randomSpawnMaxGroups		= 8;
		SC_randomSpawnMinGroupSize	= 2;
		SC_randomSpawnMaxGroupSize	= 10;
	SC_occupyVehicle				= false;
		SC_minimumCrewAmount        = 2;
		SC_maximumCrewAmount        = 10;
		SC_maxNumberofVehicles 	    = 12;
	SC_occupyLootCrates		    	= true;
		SC_numberofLootCrates       = 6;
		SC_LootCrateGuards          = 5;
		SC_LootCrateGuardsRandomize = false;
		SC_occupyLootCratesMarkers	= false;
	SC_occupyHeliCrashes			= true;
		SC_numberofHeliCrashes      = 6;
		SC_HeliCrashGuards          = 6;
		SC_HeliCrashGuardsRandomize = true; 
		SC_HeliCrashMarkers	 		= false;
				SC_HeliCrashesToBSFevents 	= true;	
	SC_occupySky					= true;
		SC_maxNumberofHelis		    = 0;
	SC_occupySea					= true;
		SC_maxNumberofBoats		    = 6;
};

if (worldName == 'Malden' AND SC_useMapOverrides) then 
{ 
//Modules
	SC_maxAIcount					= 120;
	SC_mapMarkers					= false;
	SC_occupyPlaces 				= false;
	SC_occupyTransport 	        	= false;
	SC_occupyMilitary 		    	= true;
	SC_occupyRandomSpawn        	= true;
		SC_randomSpawnMaxGroups		= 8;
		SC_randomSpawnMinGroupSize	= 2;
		SC_randomSpawnMaxGroupSize	= 10;
	SC_occupyVehicle				= false;
		SC_minimumCrewAmount        = 2;
		SC_maximumCrewAmount        = 10;
		SC_maxNumberofVehicles 	    = 12;
	SC_occupyLootCrates		    	= true;
		SC_numberofLootCrates       = 6;
		SC_LootCrateGuards          = 5;
		SC_LootCrateGuardsRandomize = false;
		SC_occupyLootCratesMarkers	= false;
	SC_occupyHeliCrashes			= true;
		SC_numberofHeliCrashes      = 6;
		SC_HeliCrashGuards          = 6;
		SC_HeliCrashGuardsRandomize = true; 
		SC_HeliCrashMarkers	 		= false;
				SC_HeliCrashesToBSFevents 	= true;	
	SC_occupySky					= true;
		SC_maxNumberofHelis		    = 0;
	SC_occupySea					= true;
		SC_maxNumberofBoats		    = 6;
};

if (worldName == 'Tanoa' AND SC_useMapOverrides) then 
{ 
//Modules
	SC_maxAIcount					= 120;
	SC_mapMarkers					= false;
	SC_occupyPlaces 				= false;
	SC_occupyTransport 	        	= false;
	SC_occupyMilitary 		    	= true;
	SC_occupyRandomSpawn        	= true;
		SC_randomSpawnMaxGroups		= 8;
		SC_randomSpawnMinGroupSize	= 2;
		SC_randomSpawnMaxGroupSize	= 10;
	SC_occupyVehicle				= false;
		SC_minimumCrewAmount        = 2;
		SC_maximumCrewAmount        = 10;
		SC_maxNumberofVehicles 	    = 12;
	SC_occupyLootCrates		    	= true;
		SC_numberofLootCrates       = 6;
		SC_LootCrateGuards          = 5;
		SC_LootCrateGuardsRandomize = false;
		SC_occupyLootCratesMarkers	= false;
	SC_occupyHeliCrashes			= true;
		SC_numberofHeliCrashes      = 6;
		SC_HeliCrashGuards          = 6;
		SC_HeliCrashGuardsRandomize = true; 
		SC_HeliCrashMarkers	 		= false;
				SC_HeliCrashesToBSFevents 	= true;	
	SC_occupySky					= true;
		SC_maxNumberofHelis		    = 0;
	SC_occupySea					= true;
		SC_maxNumberofBoats		    = 6;
};

if (worldName == 'Esseker' AND SC_useMapOverrides) then 
{ 
//Modules
	SC_maxAIcount					= 150;
	SC_mapMarkers					= false;
	SC_occupyPlaces 				= false;
	SC_occupyTransport 	        	= false;
	SC_occupyMilitary 		    	= false;
	SC_occupyRandomSpawn        	= true;
		SC_randomSpawnMaxGroups		= 6;
		SC_randomSpawnMinGroupSize	= 2;
		SC_randomSpawnMaxGroupSize	= 8;
	SC_occupyVehicle				= false;
		SC_minimumCrewAmount        = 2;
		SC_maximumCrewAmount        = 10;
		SC_maxNumberofVehicles 	    = 12;
	SC_occupyLootCrates		    	= true;
		SC_numberofLootCrates       = 6;
		SC_LootCrateGuards          = 5;
		SC_LootCrateGuardsRandomize = true;
		SC_occupyLootCratesMarkers	= false;
		SC_LootCratesToBSFevents	= true;	
	SC_occupyHeliCrashes			= true;
		SC_numberofHeliCrashes      = 6;
		SC_HeliCrashGuards          = 5;
		SC_HeliCrashGuardsRandomize = true; 
		SC_HeliCrashMarkers	 		= false;
				SC_HeliCrashesToBSFevents 	= true;	
	SC_occupySky					= true;
		SC_maxNumberofHelis		    = 0;
	SC_occupySea					= false;
		SC_maxNumberofBoats		    = 6;
};

if (worldName == 'Lythium' AND SC_useMapOverrides) then 
{ 
//Modules
	SC_maxAIcount					= 120;
	SC_mapMarkers					= false;
	SC_occupyPlaces 				= false;
	SC_occupyTransport 	        	= false;
	SC_occupyMilitary 		    	= true;
	SC_occupyRandomSpawn        	= true;
		SC_randomSpawnMaxGroups		= 8;
		SC_randomSpawnMinGroupSize	= 2;
		SC_randomSpawnMaxGroupSize	= 10;
	SC_occupyVehicle				= false;
		SC_minimumCrewAmount        = 2;
		SC_maximumCrewAmount        = 10;
		SC_maxNumberofVehicles 	    = 12;
	SC_occupyLootCrates		    	= true;
		SC_numberofLootCrates       = 6;
		SC_LootCrateGuards          = 5;
		SC_LootCrateGuardsRandomize = false;
		SC_occupyLootCratesMarkers	= false;
		SC_LootCratesToBSFevents	= true;	
	SC_occupyHeliCrashes			= true;
		SC_numberofHeliCrashes      = 6;
		SC_HeliCrashGuards          = 6;
		SC_HeliCrashGuardsRandomize = true; 
		SC_HeliCrashMarkers	 		= false;
				SC_HeliCrashesToBSFevents 	= true;	
	SC_occupySky					= true;
		SC_maxNumberofHelis		    = 0;
	SC_occupySea					= false;
		SC_maxNumberofBoats		    = 6;
};

if (worldName == 'ChernarusRedux' AND SC_useMapOverrides) then 
{ 
//Modules
	SC_maxAIcount					= 120;
	SC_mapMarkers					= false;
	SC_occupyPlaces 				= false;
	SC_occupyTransport 	        	= false;
	SC_occupyMilitary 		    	= true;
	SC_occupyRandomSpawn        	= true;
		SC_randomSpawnMaxGroups		= 8;
		SC_randomSpawnMinGroupSize	= 2;
		SC_randomSpawnMaxGroupSize	= 10;
	SC_occupyVehicle				= false;
		SC_minimumCrewAmount        = 2;
		SC_maximumCrewAmount        = 10;
		SC_maxNumberofVehicles 	    = 12;
	SC_occupyLootCrates		    	= true;
		SC_numberofLootCrates       = 6;
		SC_LootCrateGuards          = 5;
		SC_LootCrateGuardsRandomize = false;
		SC_occupyLootCratesMarkers	= false;
	SC_occupyHeliCrashes			= true;
		SC_numberofHeliCrashes      = 6;
		SC_HeliCrashGuards          = 6;
		SC_HeliCrashGuardsRandomize = true; 
		SC_HeliCrashMarkers	 		= false;
				SC_HeliCrashesToBSFevents 	= true;	
	SC_occupySky					= true;
		SC_maxNumberofHelis		    = 2;
	SC_occupySea					= true;
		SC_maxNumberofBoats		    = 3;
};

if (worldName == 'IslaDuala' AND SC_useMapOverrides) then 
{ 
//Modules
	SC_maxAIcount					= 120;
	SC_mapMarkers					= false;
	SC_occupyPlaces 				= false;
	SC_occupyTransport 	        	= false;
	SC_occupyMilitary 		    	= true;
	SC_occupyRandomSpawn        	= true;
		SC_randomSpawnMaxGroups		= 8;
		SC_randomSpawnMinGroupSize	= 2;
		SC_randomSpawnMaxGroupSize	= 10;
	SC_occupyVehicle				= false;
		SC_minimumCrewAmount        = 2;
		SC_maximumCrewAmount        = 10;
		SC_maxNumberofVehicles 	    = 12;
	SC_occupyLootCrates		    	= true;
		SC_numberofLootCrates       = 6;
		SC_LootCrateGuards          = 5;
		SC_LootCrateGuardsRandomize = false;
		SC_occupyLootCratesMarkers	= false;
	SC_occupyHeliCrashes			= true;
		SC_numberofHeliCrashes      = 6;
		SC_HeliCrashGuards          = 6;
		SC_HeliCrashGuardsRandomize = true; 
		SC_HeliCrashMarkers	 		= false;
				SC_HeliCrashesToBSFevents 	= true;	
	SC_occupySky					= true;
		SC_maxNumberofHelis		    = 0;
	SC_occupySea					= false;
		SC_maxNumberofBoats		    = 6;
};

if (worldName == 'Weferlingen' AND SC_useMapOverrides) then 
{ 
//Modules
	SC_maxAIcount					= 120;
	SC_mapMarkers					= false;
	SC_occupyPlaces 				= false;
	SC_occupyTransport 	        	= false;
	SC_occupyMilitary 		    	= true;
	SC_occupyRandomSpawn        	= true;
		SC_randomSpawnMaxGroups		= 8;
		SC_randomSpawnMinGroupSize	= 3;
		SC_randomSpawnMaxGroupSize	= 10;
	SC_occupyVehicle				= false;
		SC_minimumCrewAmount        = 2;
		SC_maximumCrewAmount        = 10;
		SC_maxNumberofVehicles 	    = 12;
	SC_occupyLootCrates		    	= true;
		SC_numberofLootCrates       = 6;
		SC_LootCrateGuards          = 5;
		SC_LootCrateGuardsRandomize = false;
		SC_occupyLootCratesMarkers	= false;
		SC_LootCratesToBSFevents	= true;	
	SC_occupyHeliCrashes			= true;
		SC_numberofHeliCrashes      = 6;
		SC_HeliCrashGuards          = 6;
		SC_HeliCrashGuardsRandomize = true; 
		SC_HeliCrashMarkers	 		= false;
				SC_HeliCrashesToBSFevents 	= true;	
	SC_occupySky					= true;
		SC_maxNumberofHelis		    = 0;
	SC_occupySea					= false;
		SC_maxNumberofBoats		    = 6;
};

if (worldName == 'Fapovo' AND SC_useMapOverrides) then 
{ 
//Modules
	SC_maxAIcount					= 120;
	SC_mapMarkers					= false;
	SC_occupyPlaces 				= false;
	SC_occupyTransport 	        	= false;
	SC_occupyMilitary 		    	= true;
	SC_occupyRandomSpawn        	= true;
		SC_randomSpawnMaxGroups		= 8;
		SC_randomSpawnMinGroupSize	= 3;
		SC_randomSpawnMaxGroupSize	= 10;
	SC_occupyVehicle				= True;
		SC_minimumCrewAmount        = 2;
		SC_maximumCrewAmount        = 10;
		SC_maxNumberofVehicles 	    = 12;
	SC_occupyLootCrates		    	= true;
		SC_numberofLootCrates       = 6;
		SC_LootCrateGuards          = 5;
		SC_LootCrateGuardsRandomize = false;
		SC_occupyLootCratesMarkers	= false;
		SC_LootCratesToBSFevents	= true;	
	SC_occupyHeliCrashes			= true;
		SC_numberofHeliCrashes      = 6;
		SC_HeliCrashGuards          = 6;
		SC_HeliCrashGuardsRandomize = true; 
		SC_HeliCrashMarkers	 		= false;
				SC_HeliCrashesToBSFevents 	= true;	
	SC_occupySky					= true;
		SC_maxNumberofHelis		    = 2;
	SC_occupySea					= false;
		SC_maxNumberofBoats		    = 6;
};
*/
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//	Apex Specific Settings (only used if SC_useApexClasses = true)
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

if(SC_useApexClasses) then 
{
	SC_BanditWeapon 			=	[];
	SC_BanditUniforms			=	[];
	SC_VehicleClassToUse 		=   [];
    SC_VehicleClassToUseRare	=   [];
};

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//	Debug Settings (only used if SC_debug = true)
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

if (SC_debug) then
{
    SC_extendedLogging       	= true;
    SC_processReporter      	= true;
    SC_mapMarkers			    = true;
    SC_occupyPlaces 			= false;
    SC_occupyVehicle			= true;
    SC_occupyMilitary 			= false;
	SC_occupyRandomSpawn        = true;
    SC_occupyStatic				= false;
    SC_occupySky				= false;
    SC_occupySea				= false;
	SC_occupyTraders            = false;	
    SC_occupyTransport			= true;
    SC_occupyLootCrates			= false;
    SC_occupyHeliCrashes		= false;
	SC_maxAIcount				= 150;	
    SC_maxNumberofVehicles		= 10;
    SC_maxNumberofBoats			= 5;
    SC_maxNumberofHelis			= 1; 
	SC_randomSpawnChance		= 100;
	SC_randomSpawnIgnoreCount	= true;
	SC_randomSpawnFrequency		= 120;
};

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Don't alter anything below this point, unless you want your server to explode :)
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

if(!SC_SurvivorsFriendly) then 
{ 
	CIVILIAN setFriend[RESISTANCE,0]; 
};
CIVILIAN    	setFriend [EAST,0]; 
CIVILIAN    	setFriend [WEST,0]; 
EAST        	setFriend [CIVILIAN,0]; 
WEST        	setFriend [CIVILIAN,0]; 
EAST        	setFriend [WEST,0]; 
WEST        	setFriend [EAST,0]; 

   
SC_SurvivorSide         		= CIVILIAN;
SC_BanditSide           		= EAST;
SC_liveVehicles 				= 0;
SC_liveVehiclesArray    		= [];
SC_liveHelis	 				= 0;
SC_liveHelisArray       		= [];
SC_liveBoats	 				= 0;
SC_liveBoatsArray       		= [];
SC_liveStaticGroups				= [];
SC_liveRandomGroups				= [];
SC_transportArray       		= [];

// Remove spawn locations for roaming vehicles that aren't for this map
_occupyVehicleFixedPositions = [];
{
	_currentWorld = _x select 2;
	if(worldName == _currentWorld) then 
	{ 
		_occupyVehicleFixedPositions pushback _x; 
	};
}forEach SC_occupyVehicleFixedPositions;
SC_occupyVehicleFixedPositions = _occupyVehicleFixedPositions;

publicVariable "SC_liveVehicles";
publicVariable "SC_liveVehiclesArray";
publicVariable "SC_liveHelis";
publicVariable "SC_liveHelisArray";
publicVariable "SC_liveBoats";
publicVariable "SC_liveBoatsArray";
publicVariable "SC_liveStaticGroups";
publicVariable "SC_liveRandomGroups";
publicVariable "SC_numberofLootCrates";
publicVariable "SC_transportArray";
publicVariable "SC_SurvivorSide";
publicVariable "SC_BanditSide";

SC_CompiledOkay				= true;
