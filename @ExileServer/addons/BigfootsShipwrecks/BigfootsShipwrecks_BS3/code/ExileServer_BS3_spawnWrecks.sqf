// ExileServer_BS3_spawnWrecks.sqf

if (!isServer) exitWith {};

private["_crate", "_crateClass", "_crateCountPoptabsSeed", "_cratePosition", "_isDebugFillLogEnabled", "_marker", "_minDistance", "_maxDistance", "_positioning", "_spawnCenter", "_wreckage", "_wreckageClass", "_wreckCount", "_wreckId", "_wreckagePosition"];

"Starting shipwreck spawns..." call ExileServer_BS3_util_log;

_wreckCount = _this select 0;;

_positioning = _this select 1;
_spawnCenter = _positioning select 0;
_minDistance = _positioning select 1;
_maxDistance = _positioning select 2;

_crateClass = _this select 2;
_crateCountPoptabsSeed = _this select 3;
_isDebugFillLogEnabled = _this select 4;

for "_i" from 1 to _wreckCount do
{   
    // Find location
    _wreckagePosition = [_spawnCenter, _minDistance, _maxDistance, 1, 2, 800, 0] call BIS_fnc_findSafePos; 

    format["Found position at [%1] for wreck.", _wreckagePosition] call ExileServer_BS3_util_log;

    // Create ID for this wreck
    _wreckId = _i call ExileServer_BS3_getWreckId;

    // Create a marker
    [_wreckId, _wreckagePosition, "Shipwreck"] call ExileServer_BS3_createMarkers;
    
    format["Spawning wreck and crate near [%1] with id [%2].", _wreckagePosition, _wreckId] call ExileServer_BS3_util_log;
    
    // Create wreck
    _wreckageType = selectRandom [
        ["Land_RowBoat_V1_F",10],   // Wreck class, distance from wreck
        ["Land_RowBoat_V2_F",10],
        ["Land_RowBoat_V3_F",10],
        ["Land_Boat_04_wreck_F",10],
        ["Land_Boat_05_wreck_F",10],
        ["Land_UWreck_FishingBoat_F",10],
        ["Land_Boat_06_wreck_F",10],
        ["Land_Wreck_Traw2_F",20],
        ["Land_Wreck_Traw_F",25],

        ["Land_HistoricalPlaneWreck_02_rear_F",8],
        ["Land_Mi8_wreck_F",15],
        ["Land_UWreck_MV22_F",15],
        ["Land_HistoricalPlaneWreck_03_F",15],
        ["Land_HistoricalPlaneWreck_02_front_F",20],
        ["Land_Wreck_Plane_Transport_01_F",35]
    ];

    _wreckage = _wreckageType select 0 createVehicle _wreckagePosition;

    // Create crate nearby
    _cratePosition = _wreckage getRelPos [_wreckageType select 1, 0];
    _crate = _crateClass createVehicle _cratePosition;    
    _crate call ExileServer_BS3_setupCrate;

    // Put cargo in crate
    [_wreckId, _crate, _isDebugFillLogEnabled] call ExileServer_BS3_loadCrate;

    // Put money in crate
    [_wreckId, _crate, _crateCountPoptabsSeed, _isDebugFillLogEnabled] call ExileServer_BS3_tabsToCrate;
};

"Finished shipwreck spawns." call ExileServer_BS3_util_log;   