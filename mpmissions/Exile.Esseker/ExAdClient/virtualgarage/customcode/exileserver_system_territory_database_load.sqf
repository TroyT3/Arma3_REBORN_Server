/**
 * ExileServer_system_territory_database_load
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_donorData","_BSFdonorStatus","_flagExemptStatus","_territoryID","_data","_id","_owner","_position","_radius","_level","_flagTexture","_flagStolen","_flagStolenBy","_lastPayed","_buildRights","_moderators","_flagObject"];
_territoryID = _this;

_data = format ["loadTerritory:%1", _territoryID] call ExileServer_system_database_query_selectSingle;
_id = _data select 0;
_owner = _data select 1;
_name = _data select 2;
_position = 
[
	_data select 3,
	_data select 4,
	_data select 5
];
_radius = _data select 6;
_level = _data select 7;
_flagTexture = _data select 8;
_flagStolen = _data select 9;
_flagStolenBy = _data select 10;
_lastPayed = _data select 11;
_buildRights = _data select 12;
_moderators = _data select 13;
_flagObject = createVehicle ["Exile_Construction_Flag_Static",_position, [], 0, "CAN_COLLIDE"];
if (_flagStolen isEqualTo 0) then 
{
	_flagObject setFlagTexture _flagTexture;
};
ExileLocations pushBack _flagObject;
publicVariable "ExileLocations";




_flagObject setVariable ["ExileTerritoryName", _name, true];
_flagObject setVariable ["ExileDatabaseID", _id, true];
_flagObject setVariable ["ExileOwnerUID", _owner, true];
_flagObject setVariable ["ExileTerritorySize", _radius, true];
_flagObject setVariable ["ExileTerritoryBuildRights", _buildRights, true];
_flagObject setVariable ["ExileTerritoryModerators", _moderators, true];
_flagObject setVariable ["ExileTerritoryLevel", _level, true];
_flagObject setVariable ["ExileTerritoryLastPayed", _lastPayed];
_flagObject call ExileServer_system_territory_maintenance_recalculateDueDate;
_flagObject setVariable ["ExileTerritoryNumberOfConstructions", _data select 15, true];
_flagObject setVariable ["ExileRadiusShown", false, true];
_flagObject setVariable ["ExileFlagStolen",_flagStolen,true];
_flagObject setVariable ["ExileFlagTexture",_flagTexture, true];


////////////// For map markers
BSFFlagPositions pushBack _position;
publicVariable "BSFFlagPositions";

////////////// BEGIN CHECK DONOR STATUS
_BSFdonorStatus = format ["BSFdonorCheck:%1", _owner] call ExileServer_system_database_query_selectSingle;
_flagExemptStatus = "";

switch (_BSFdonorStatus select 0) do {
	case 0 : {_flagExemptStatus = "No";	};
	case 1 : {_flagExemptStatus = "Yes";};
	default {_flagExemptStatus = "No";};
};

_flagObject setVariable ["ExileFlagDonorExempt",_flagExemptStatus, true]; //BSF Edit

format ["updateExemptionTerritory:%1:%2",_flagExemptStatus, _id ] call ExileServer_system_database_query_fireAndForget;	//BSF
////////////// END CHECK DONOR STATUS

////////////////////////
/////  ExAd START  /////
////////////////////////
// _vehicles = format ["loadTerritoryVehicles:%1", _territoryID] call ExileServer_system_database_query_selectFull;
// _flagObject setVariable ["ExAdVGVeh", _vehicles, true];
////////////////////////
/////   ExAd END    /////
////////////////////////

/////////// Exile VG:
if (getNumber(missionConfigFile >> "CfgVirtualGarage" >> "enableVirtualGarage") isEqualTo 1) then 
{
	_data = format["loadTerritoryVirtualGarage:%1", _territoryID] call ExileServer_system_database_query_selectFull;
	_flagObject setVariable ["ExileTerritoryStoredVehicles", _data, true];
};
///////////

///// Begin BSF Clean up DB
format["BSF_markDeletedOrphanVehicles"] call ExileServer_system_database_query_fireAndForget;
format["BSF_markDeletedOrphanContainers"] call ExileServer_system_database_query_fireAndForget;
format["BSF_markDeletedOrphanConstructions"] call ExileServer_system_database_query_fireAndForget;
format["BSF_Clean_infiStar_Logs"] call ExileServer_system_database_query_fireAndForget;
format["BSF_CleanVehicleSaleLog"] call ExileServer_system_database_query_fireAndForget;
//format["BSF_CleanVehiclePurchaseLog"] call ExileServer_system_database_query_fireAndForget;
///// End BSF Clean up DB


true
