/*
	spawn_vehicles.sqf
	_vehicleArray = ["Vehicle Class Name",amount to spawn,[array of potential spawn locations]]

*/

"ExileServer - Cleaning up persistent vehicles" call ExileServer_util_log;
_uid = Persistent_UID;
_age = 5; // How long can an unclaimed vehicle stay on map
format ["markDeleteRebornVehicles:%1:%2", _age, _uid] call ExileServer_system_database_query_fireAndForget;
uiSleep 20;

"ExileServer - Spawning world persistent vehicles" call ExileServer_util_log;
private ["_count","_uid","_debugForSP","_vehicle","_vehicleArray","_count","_vehicleClass","_position","_positionCount","_pinCode","_vehicleObject","_nearVehicles","_nearVechicleCount","_marker","_cancelSpawn","_isRandomRoadPos","_road","_scriptComplete"];

_scriptComplete = false;
_debugForSP = false;

LastPosition = [];


_vehicleArray = 
[
	// Quads
	["Exile_Bike_QuadBike_Black",2,[],true],
	["Exile_Bike_QuadBike_Csat",2,[],true],
	// Vans
	["Exile_Car_Van_Box_Black",1,[],true],
	["Exile_Car_Van_Fuel_Red",1,[],true],
	["Exile_Car_Van_Box_White",1,[],true],
	["I_G_Van_02_vehicle_F",3,[],true],
	["I_C_Van_02_vehicle_F",3,[],true],
	["C_IDAP_Van_02_vehicle_F",3,[],true],
	["C_IDAP_Van_02_medevac_F",3,[],true],
	["C_Van_02_medevac_F",1,[],true],
	["C_Van_02_vehicle_F",1,[],true],
	["C_IDAP_Van_02_vehicle_F",2,[],true],
	["C_IDAP_Truck_02_transport_F",2,[],true],
	["C_IDAP_Truck_02_F",2,[],true],
	// Offroads
	["Exile_Car_Offroad_White",2,[],true], 
	["Exile_Car_Offroad_Rusty1",2,[],true], 
	["Exile_Car_Offroad_Armed_Guerilla01",1,[],true],
	["C_IDAP_Offroad_02_unarmed_F",2,[],true],
	["C_IDAP_Offroad_01_F",2,[],true],
	// Hatchbacks
	["Exile_Car_Hatchback_Green",2,[],true],
	["Exile_Car_Hatchback_Grey",2,[],true],
	// Hatchback sports
	["Exile_Car_Hatchback_Sport_White",1,[],true],
	["Exile_Car_Hatchback_Sport_Blue",1,[],true],
	["Exile_Car_Hatchback_Sport_Orange",1,[],true],
	// SUV
	["Exile_Car_SUV_Rusty1",1,[],true],
	["Exile_Car_SUV_Black",1,[],true],
	["Exile_Car_SUV_Grey",1,[],true],
	["Exile_Car_SUV_Orange",1,[],true],
	// Volha
	["Exile_Car_Volha_Blue",1,[],true],
	["Exile_Car_Volha_White",1,[],true],
	["Exile_Car_Volha_Black",1,[],true],
	// Bus
	["Ikarus_Govnodav_02",1,[],true],
	// Zamak
	["Exile_Car_Zamak",1,[],true],
	// Urals
	["Exile_Car_Ural_Covered_Blue",1,[],true],
	["Exile_Car_Ural_Covered_Yellow",1,[],true],
	["Exile_Car_Ural_Covered_Worker",1,[],true],
	["Exile_Car_Ural_Covered_Military",1,[],true],
	// Land rovers
	["Exile_Car_LandRover_Red",1,[],true],
	["Exile_Car_LandRover_Urban",1,[],true],
	["Exile_Car_LandRover_Green",1,[],true],
	["Exile_Car_LandRover_Sand",1,[],true],
	["Exile_Car_LandRover_Desert",1,[],true],
	// Apex stuff
	["Exile_Car_ProwlerUnarmed",2,[],true],
	["Exile_Car_QilinUnarmed",2,[],true],
	["Exile_Car_MB4WD",2,[],true],
	["Exile_Car_MB4WDOpen",2,[],true],
	// Choppers	
	["Exile_Chopper_Hellcat_Green",1,[[23483.9,21144.8,0],[25240.1,21828.6,0]],true],		
	["Exile_Chopper_Hummingbird_Green",1,[[12834.2,16735.8,0],[23079.8,7299.1,0]],true],
	["Exile_Chopper_Mohawk_FIA",1,[[17550.5,13240.5,0],[26783.6,24673,0]],true],						
	["Exile_Chopper_Orca_CSAT",1,[[3732.07,12976.3,20]],true],											// Kavala hospital
	// Heavy Trucks
	["rhs_typhoon_vdv",1,[],true],
	["rhsusf_M1078A1P2_B_D_fmtv_usarmy",2,[],true],
	["rhsusf_M1078A1P2_B_D_flatbed_fmtv_usarmy",2,[],true],
	["rhsusf_M1078A1P2_B_D_open_fmtv_usarmy",2,[],true],
	["rhsusf_M1083A1P2_B_D_fmtv_usarmy",2,[],true],
	["rhsusf_M1083A1P2_B_D_flatbed_fmtv_usarmy",2,[],true],
	["rhsusf_M1083A1P2_B_D_open_fmtv_usarmy",2,[],true],
	["rhsusf_M977A4_BKIT_usarmy_d",2,[],true],

	["rhsusf_M978A4_usarmy_d",2,[],true],
	["rhsusf_m1025_d_s",2,[],true],
	["rhsusf_m998_d_s_2dr_halftop",2,[],true],
	["rhsusf_m998_d_s_2dr",2,[],true],
	["rhsusf_m998_d_s_2dr_fulltop",2,[],true],
	["rhsusf_mrzr4_d",3,[],true],
	["rhs_tigr_m_vv",1,[],true],
	["rhs_tigr_m_3camo_vv",1,[],true]
	
];
{
	for "_i" from 0 to (_x select 1) do
	{	
		_cancelSpawn = false;
		_obj = _x select 0;
		_count = count allMissionObjects _obj;
		_positionCount = (count (_x select 2));
		_isRandomRoadPos = _x select 3;

		if !(_count >= _x select 1) then
		{
			_vehicleClass = _x select 0;
			_position = selectRandom (_x select 2);

			if !(_isRandomRoadPos) then
			{
				_foundSafePos = false;
				_failSafe = 15;
				_checks = 0;
				waitUntil 
				{ 
					_position = selectRandom (_x select 2);
					_nearVehicles = nearestObjects [_position, ["car","air"], 10];
					_nearVechicleCount = count _nearVehicles;
					if (!(_position isEqualTo LastPosition) && (_nearVechicleCount == 0)) then
					{
						_foundSafePos = true;
					};
					_checks = _checks + 1;
					if (_checks >= _failSafe) then {_cancelSpawn = true; _foundSafePos = true;};
					_foundSafePos
				};		
			}
			else
			{
				_foundSafePos = false;
				waitUntil //Loop the script until _foundRoad = true;
				{
					_spawnCenter = Event_world_centerPosition; 
					_min = 15; // minimum distance from the center position (Number) in meters
					_max = 30000; // maximum distance from the center position (Number) in meters
					_mindist = 5; // minimum distance from the nearest object (Number) in meters, ie. spawn at least this distance away from anything within x meters..
					_water = 0; // water mode 0: cannot be in water , 1: can either be in water or not , 2: must be in water
					_shoremode = 0; // 0: does not have to be at a shore , 1: must be at a shore
					_blackList = [[[0, 0],[0,0]]]; 

					_startPosRoad = [_spawnCenter,_min,_max,_mindist,_water,10,_shoremode,_blackList] call BIS_fnc_findSafePos; //Find random spot on the map
					_onRoadCheck = _startPosRoad nearRoads 100; //Find road objects 100m from spot
					_countPossibleRoads = count _onRoadCheck; // count road objects

					if (_countPossibleRoads == 0) then 
					{
					}
					else
					{
						_road = _onRoadCheck select 0;
//						_position = getPosATL _road findEmptyPosition [0,5];
						_position = getPos _road;
						_foundSafePos = true;
					};
					uiSleep 0.1;
					_foundSafePos
				};
			};	
			if !(_cancelSpawn) then
			{	
				if !(_debugForSP) then
				{
					_pinCode = format ["%1%2%3%4",round (random 8 +1),round (random 8 +1),round (random 8 +1),round (random 8 +1)];
					_vehicleObject = [_vehicleClass, _position, (random 360), true,_pinCode] call ExileServer_object_vehicle_createPersistentVehicle;

					_vehicleObject setDamage 0.8;
					_vehicleObject setFuel 0;

					if !((_x select 0) isKindOf "AIR") then
					{
						_wheels = ["HitLF2Wheel","HitLFWheel","HitRFWheel","HitRF2Wheel"];
						{
							if (random 1 > 0.5) then
							{	
								_vehicleObject setHitPointDamage [_x,1];
							};	
						} forEach _wheels;
					};	
					_vehicleObject addItemCargoGlobal ["BSF_Item_PinkSlip", 1];	// BSF
					_vehicleObject setVariable ["ExileOwnerUID", _uid,true];
					_vehicleObject setVariable ["ExileIsLocked",0,true];
					_vehicleObject setVariable ["BSF_MarkerOn", 0, true];
					_vehicleObject setVariable ["BSF_TerritoryID", 0,true];

					_vehicleObject lock 0;
					_vehicleObject call ExileServer_object_vehicle_database_insert;
					_vehicleObject call ExileServer_object_vehicle_database_update;

					if (random 1 > 0.5) then
					{
						for "_i" from 0 to 2 + floor (random 5) do
						{	
							_item = [6] call JohnO_fnc_getRandomItems_new;
					
							[_vehicleObject, _item] call ExileClient_util_containerCargo_add;
						};
					};	

					format ["[REBORN EVENT: Persistent Spawns] -- Spawned a %1 at location: %2 -- Max allowed: %3",_x select 0,_position, _x select 1] call ExileServer_util_log;
				}
				else
				{
					_vehicleObject = createVehicle [_vehicleClass,_position,[], 0, "NONE"];

					if !((_x select 0) isKindOf "AIR") then
					{
						_wheels = ["HitLF2Wheel","HitLFWheel","HitRFWheel","HitRF2Wheel"];
						{
							_vehicleObject setHitPointDamage [_x,1];
						} forEach _wheels;
					};

					_marker = createMarker [format["HeliCrash%1", diag_tickTime], _position];
					_marker setMarkerType "mil_dot";
					_marker setMarkerText "Vehicle";
				};
			}
			else
			{
				if !(_debugForSP) then
				{			
					format ["[REBORN EVENT: Persistent Spawns] -- Could not find valid spawn position for %1 at position %2 -- exiting try for this vehicle",_x select 0,_position] call ExileServer_util_log;
				}
				else
				{
					hint format["[REBORN EVENT: Persistent Spawns] -- Could not find valid spawn position for %1 at position %2 -- exiting try for this vehicle",_x select 0,_position];
				};	
			};		
		};
	};		
	
} forEach _vehicleArray;

_scriptComplete = true;

waitUntil 
{
	"ExileServer - Finished spawning world vehicles" call ExileServer_util_log;
	_scriptComplete
};