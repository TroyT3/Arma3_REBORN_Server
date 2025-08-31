// events_config.sqf
ExileRebornVersion = "BS-Free Edition";
//ExileRebornVersion = "0.8.2";
publicVariable "ExileRebornVersion";

Event_DEBUG_Location = [0,0,0];
Persistent_UID = "Reborn_Persistent";			// !!! Need to add this UID it ACCOUNT table in DB !!!
MaxPersistentVehicles = 45;
Event_extraDebugLogging = true;

Event_world_size = 0;

EventAirPatrolToBSFevents = true;
EventSupplyDropToBSFevents = true;
EventHeliCrashToBSFevents = true;
EventTownInvasionToBSFevents = true;

switch (toLower worldName) do
{
	case "altis":
	{
		EventAirPatrolToBSFevents = true;
		EventSupplyDropToBSFevents = true;
		EventHeliCrashToBSFevents = true;
		EventTownInvasionToBSFevents = true;
		Event_DEBUG_Location = [14482.4,5879.49,0];
		Event_world_size = 30000;
		// Event_world_centerPosition = getArray(configFile >> "CfgWorlds" >> worldName >> "centerPosition");
		Event_world_centerPosition = getArray (missionConfigFile >> "CfgMap" >> "MapCenter") select [0,2];
		Event_world_blackListWEST = [[[8318.59,26057],[28606.6,1865.55]]];
		Event_world_blackListEAST = [[[1022.59,29321],[21470.6,2857.55]]];
		Event_world_ARMA_fuckYourWierdnessPosition = [10800.6,10604.9,0.00151062];

		Event_RadAI_SpawnLocations = 
		[
			// Ghost hotel
			[22150.9,21125,0],[21793,20884.1,0],[21781.4,21084.1,0],[22055.8,20882.1,0],
			// Cap strigla
			[28336.5,25675,0],[28271.4,25748.3,0],[28150.5,25658,0],[28332.1,25802.2,0]
		];
		ExileReborn_allMapBuildings = [0,0,0] nearObjects ["House", 100000];
		{
			_x setDamage 0.9;
		} forEach ExileReborn_allMapBuildings;	

	};
	case "esseker":
    {
	EventAirPatrolToBSFevents = true;
	EventSupplyDropToBSFevents = true;
	EventHeliCrashToBSFevents = true;
	EventTownInvasionToBSFevents = true;
        Event_DEBUG_Location = [300,300,0];
        Event_world_size = 6000;		// Radius?
        Event_world_centerPosition = [6100,6100,0];
        Event_world_blackListWEST = [[[0,12288],[6300,0]]];
        Event_world_blackListEAST = [[[12288,12288],[6300,0]]];

        Event_RadAI_SpawnLocations = 
        [
            // Novi Grad
            [11854.8,7837.71,0],[11928.2,7939.78,0],[11813.9,8023.99,0]
        ];
    };
	case "chernarusredux":
    {
	EventAirPatrolToBSFevents = true;
	EventSupplyDropToBSFevents = true;
	EventHeliCrashToBSFevents = true;
	EventTownInvasionToBSFevents = true;
        Event_DEBUG_Location = [12500,0,0];
        Event_world_size = 16300;
        Event_world_centerPosition = [8150,8150,0];
        Event_world_blackListWEST = [[[0,16300],[8150,0]]];
        Event_world_blackListEAST = [[[16300,16300],[8150,0]]];

        Event_RadAI_SpawnLocations =	
		[
			[0,0,0],[2,0,0],[4,0,0]	// testing
		];
	};
	case "tanoa":
	{
		EventAirPatrolToBSFevents = true;
		EventSupplyDropToBSFevents = true;
		EventHeliCrashToBSFevents = true;
		EventTownInvasionToBSFevents = true;
		Event_DEBUG_Location = [6709.97,6098.13,0];
		Event_world_size = 30000;
		// Event_world_centerPosition = getArray(configFile >> "CfgWorlds" >> worldName >> "centerPosition");
		Event_world_centerPosition = getArray (missionConfigFile >> "CfgMap" >> "MapCenter") select [0,2];
		Event_RadAI_SpawnLocations = 
		[
			[1858.75,11872.9,0],[1759.41,12091,0],[1847.33,12126.4,0],[2020.88,11825,0],
			[3082.74,11145.6,0],[3046,11278.4,0],[3031.87,11119.4,0],
			[2321.05,13168.1,0],[2496.01,12909.5,0],[2687.29,12310.9,0]
		];
		ExileReborn_allMapBuildings = [0,0,0] nearObjects ["House", 100000];
		{
			_x setDamage 0.9;
		} forEach ExileReborn_allMapBuildings;	
	};
	case "namalsk":
	{
		EventAirPatrolToBSFevents = true;
		EventSupplyDropToBSFevents = true;
		EventHeliCrashToBSFevents = true;
		EventTownInvasionToBSFevents = true;
		Event_DEBUG_Location = [0,0,0];
		Event_world_size = 15000;
		// Event_world_centerPosition = getArray(configFile >> "CfgWorlds" >> worldName >> "centerPosition");
		Event_world_centerPosition = getArray (missionConfigFile >> "CfgMap" >> "MapCenter") select [0,2];

		Event_RadAI_SpawnLocations = 
		[
			//To do
		];
	};
};

/** Animal Stuff **/

Event_animalWarth_Duration = 900;
Event_warmAnimals = [];

/** Storm stuff**/

Event_lightningSpawnInterval = 2400;

/** Air Patrol Settings **/

Event_AirPatrol_Duration = 600;														// Time it takes for the aircraft to self terminate if not shot down
Event_AirPatrol_InterceptorDuration = 360;											// If using interceptor, interceptor has this amount of time to hunt the jet down and kill it
Event_AirPatrol_MinScriptDelay = 600; 												
Event_AirPatrol_MaxScriptDelay = 2400;
Event_AirPatrol_ChanceForEvent = .2; 												// Chance for the event to occur - Only one of these events happens per server session 		.2										
Event_AirPatrol_MaxAmountOfWeapons = 6;
Event_AirPatrol_MaxAmountOfItems = 10; 													
Event_AirPatrol_EnableDebug = false; 												

/** Air Patrol safe pos settings **/

Event_AirPatrol_Min = 5; 															// Minimum distance from center position in meters
Event_AirPatrol_MaxDist = Event_world_size; 										// Maximum position from center position in meters	
Event_AirPatrol_MinDist = 10; 														// Minimum distance from objects		
Event_AirPatrol_WaterMode = 0; 														// 1 - Pos will be on water 0 - Pos will be on land
Event_AirPatrol_ShoreMode = 0; 														// 1 - Pos will be on a shoreline 0 - Pos will not be on a shoreline 

Event_AirPatrol_PatrolAirCraft = "B_Plane_CAS_01_F"; 								// Patrol aircraft that will be destroyed 
Event_AirPatrol_InterceptorAirCraft = "I_Plane_Fighter_03_AA_F"; 					// Interceptor aircraft that will hunt the patrol
Event_AirPatrol_RescueChopper = "RHS_CH_47F_light"; 					// Rescue chopper that will fly to the crash site

Event_AirPatrol_MarkerType = "ExileMissionEasyIcon"; 								// Marker type for the crash site
Event_AirPatrol_MarkerText = "NATO Crash Site"; 									// Marker text for the crash site -- Markers are disabled in EXILE REBORN

/** Supply Drop settings **/

Event_SupplyDrop_MinLootAmount = 1; 												// Minimum amount of loot in the vehicle drop
Event_SupplyDrop_MaxLootAmount = 5;                                                 // Maximum amount of loot = Min + random max
Event_SupplyDrop_DebugEvent = false; 												// Debug event for testing

Event_SupplyDrop_PotentialSupplyVehicles = ["rhsgref_un_Mi8amt"];
Event_SupplyDrop_PotentialSupplyDropVehicles = 
[
	"Exile_Car_Ifrit",
	"Exile_Car_Hunter",
	"Exile_Car_HEMMT",
	"Exile_Car_Strider"
];

Event_SupplyDrop_maxPersistentArmoured = 2; 										// The server will only para drop new persistent armoured vehicles upto this amount each - 2

/** Supply drop Safe Pos settings **/

Event_SupplyDrop_Min = 5; 															// Minimum distance from center position in meters
Event_SupplyDrop_MaxDist = Event_world_size;										// Maximum position from center position in meters	
Event_SupplyDrop_MinDist = 10; 														// Minimum distance from objects		
Event_SupplyDrop_WaterMode = 0; 													// 1 - Pos will be on water 0 - Pos will be on land
Event_SupplyDrop_ShoreMode = 0; 													// 1 - Pos will be on a shoreline 0 - Pos will not be on a shoreline 
Event_SupplyDrop_Height = 150; 														// Height of the supply drop

Event_SupplyDrop_MarkerType = "ExileMissionModerateIcon"; 							// Marker type at the vehicle drop location
Event_SupplyDrop_MarkerText = "Vehicle Drop";										// Marker text at the vehicle drop location
Event_SupplyDrop_MarkerDuration = 1800; 											// Time the marker will be visible at the drop location

/** Helicrash settings **/

Event_HeliCrash_MaxEvents = 8;
Event_HeliCrash_Count = 0;
Event_HeliCrash_AmountOfLoot = 7; 													// Amount of loot piles in the crate
Event_HeliCrash_DebugEvent = false; 												// Debug for testing purposes
// BSF_Event_Positions = [];		// Moved to BSF_Server

/** HeliCrash safe pos settings **/

Event_HeliCrash_Min = 5; 															// Minimum distance from center position in meters
Event_HeliCrash_MaxDist = Event_world_size;											// Maximum position from center position in meters	
Event_HeliCrash_MinDist = 10; 														// Minimum distance from objects		
Event_HeliCrash_WaterMode = 0; 														// 1 - Pos will be on water 0 - Pos will be on land
Event_HeliCrash_ShoreMode = 0; 														// 1 - Pos will be on a shoreline 0 - Pos will not be on a shoreline 

Event_HeliCrash_MarkerType = "ExileMissionHardcoreIcon"; 							// Marker type at crash site
Event_HeliCrash_MarkerText = "Crash Site";											// Marker text at crash site
Event_HeliCrash_MarkerDuration = 1800; 											    // Time the event will last
Event_HeliCrash_timeStamp = diag_tickTime;

/** AI stuff **/

Event_RadAI_MaxAllowedAI = 30;
Event_RadAI_GroupAmountMin = 2;
Event_RadAI_GroupAmountMax = 5;
Event_RadAI_DebugEvent = false;

/** Survivor AI **/

ExileReborn_survivor_lootCoolDown = 20;												// How often the AI will loot if in range of a loot pile
ExileReborn_survivor_antiStick_check = 300;											// How often the AI's position is checked, if it is within 2m of eacher within this time frame anti Stuck occurs

/** Head hunter AI **/

Event_HeadHunterAI_Interval_Base = 1080;
Event_HeadHunterAI_Interval_Actual = Event_HeadHunterAI_Interval_Base;
Event_HeadHunterAI_GroupAmountMin = 1;
Event_HeadHunterAI_GroupAmountMax = 5;
Event_HeadHunterAI_playerLimit = 25;

/** Roaming AI **/

// CenterLogicLocation = getArray(configFile >> "CfgWorlds" >> worldName >> "centerPosition"); 
CenterLogicLocation = getArray (missionConfigFile >> "CfgMap" >> "MapCenter") select [0,2];
 
_logic = "logic" createVehicleLocal CenterLogicLocation;
allTownLocations = nearestLocations [_logic, ["NameVillage","NameCity","NameCityCapital"], 30000];

Event_RoamingAI_SpawnLocations = [];																// Towns

Event_RoamingAI_MaxAllowedAI = 30;	// BSFCHANGEME
Event_RoamingAI_GroupAmountMin = 1;
Event_RoamingAI_GroupAmountMax = 3;
Event_RoamingAI_TownMin = 1;
Event_RoamingAI_TownMax = 5;
Event_RoamingAI_DebugEvent = false;
Event_RoamingAI_lastTarget = [];
Event_RoamingAI_lastTown = [];
Event_RoamingAI_despawnTime = 1080;

Event_TownInvasion_AmountOfLoot = 4;
Event_TownInvasion_DespawnTime = 2100;

Event_RoamingAI_MoneyMin = 25;
Event_RoamingAI_MoneyMax = 150;

//Event_RadAI_deadGroup = createGroup EAST;
Resistance setFriend [East, 0];
East setFriend [Resistance, 0];
Resistance setFriend [West, 0];
West setFriend [Resistance, 0];


{
	_index = _forEachIndex;
	_positionIndex = allTownLocations select _index;
	_position = position _positionIndex;
	Event_RoamingAI_SpawnLocations pushBack _position;
} forEach allTownLocations;


if (Event_RoamingAI_DebugEvent) then
{
	{
		_index = _forEachIndex;
		_posIdex = allTownLocations select _index;
		_pos = position _posIdex;
		_marker = createMarker [ format["HeliCrash%1", diag_tickTime],_pos];
		_marker setMarkerType "mil_warning";
		_marker setMarkerText "AI SPAWN POINT";
		sleep 0.01;
	} forEach allTownLocations;
};

/** Player wages **/

Event_Wages_AmountEarned = 200;
Event_Wages_Interval = 900;

/** SIMULATION MANAGER **/

Event_SimulationManager_Interval = 15;
Event_SimulationManager_SimulateRange = 800;
Event_ALLAI_SimulatedUnits = [];
Event_SimulationManager_DebugEvent = false;

/*
	Usage:
	Event_Cleanup_objectArray pusback [Object,deletion time, is marker (boolean)];
*/

Event_Cleanup_objectArray = [];

/*

	Compile required functions and execute the scripts

*/

Event_HeliCrash_monitorCount = 2;
Event_AirPatrol_monitorCount = 2;
Event_Convoy_monitorCount = 1;
Event_SupplyDrop_monitorCount = 2;
Event_RadAI_CurrentAlive = 2;

uiSleep 20;

[] execVM "JohnOs_events\addons\Events\airPatrol\airPatrol.sqf";
//[] execVM "JohnOs_events\addons\Events\Adjust_Server_DateAndTime.sqf";
[] execVM "JohnOs_events\addons\Events\Persistent_vehicles\spawn_vehicles.sqf";
[] execVM "JohnOs_events\addons\Events\spawnAnimals\ExileClient_object_animal_spawn.sqf";
//[] spawn JohnO_fnc_generateMapGarbageAndWrecks;

	
[360, JohnO_fnc_eventMonitor, [], true] call ExileServer_system_thread_addtask;
[Event_Wages_Interval, JohnO_fnc_wages, [], true] call ExileServer_system_thread_addtask;
	
[700, JohnO_fnc_spawnRoamingAI, [], true] call ExileServer_system_thread_addtask;
[1000, JohnO_fnc_spawnDynamicAI, [], true] call ExileServer_system_thread_addtask;

[660, JohnO_fnc_heliCrash_BSF, [], true] call ExileServer_system_thread_addtask;
// [60, JohnO_fnc_handleCrashSmoke, [], true] call ExileServer_system_thread_addtask;

[900, JohnO_fnc_supplyDrop_spawnEvent, [], true] call ExileServer_system_thread_addtask;
[Event_HeadHunterAI_Interval_Actual, JohnO_fnc_spawnHeadHunters, [], true] call ExileServer_system_thread_addtask;

[Event_lightningSpawnInterval, JohnO_fnc_spawnStormEvent, [], true] call ExileServer_system_thread_addtask;

[15, JohnO_fnc_simulationManager, [], true] call ExileServer_system_thread_addtask;
	

_fuelStations = nearestObjects [[0,0,0], ['Land_fs_feed_F','Land_FuelStation_Feed_F'], 2000000];
//_fuelStations = nearestObjects [[0,0,0], ['Item_U_Tank_green_F','Land_Tank_rust_F','Land_wagon_tanker','Land_Ind_TankSmall','Land_Ind_TankSmall2','Land_Ind_TankSmall2_EP1','Land_RailwayCar_01_tank_F','Land_FuelStation_Feed_F','Land_FuelStation_01_pump_malevil_F','Land_FuelStation_01_pump_F','Land_FuelStation_02_pump_F','Land_fs_feed_F','Land_FuelStation_Feed_PMC','Land_Ind_FuelStation_Feed_EP1','Land_A_FuelStation_Feed'], 2000000];
{
	_x enableSimulationGlobal false;
} forEach _fuelStations;


// Make the map look damaged


