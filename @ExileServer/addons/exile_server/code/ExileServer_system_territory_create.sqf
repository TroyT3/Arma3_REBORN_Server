/**
 * ExileServer_system_territory_create
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_flagObject", "_territoryName", "_flagTexture", "_territorySize", "_owner", "_currentTimestamp"];
_flagObject = _this select 0;
_territoryName = _this select 1;
_flagTexture = _this select 2;
_territorySize = ((getArray(missionConfigFile >> "CfgTerritories" >> "prices")) select 0) select 1;
_flagObject setFlagTexture _flagTexture;
ExileLocations pushBack _flagObject;
publicVariable "ExileLocations";
BSFFlagPositions pushBack (position _flagObject);
publicVariable "BSFFlagPositions";

_owner = _flagObject getVariable ["ExileOwnerUID", ""];

_donorData = format ["BSFdonorCheck:%1", _owner] call ExileServer_system_database_query_selectSingle;
_BSFdonorStatus = _donorData select 0;
_flagExemptStatus = "";
switch _BSFdonorStatus do {
			case 0 : {_flagExemptStatus = "No"};
			case 1 : {_flagExemptStatus = "Yes"};
			default {_flagExemptStatus = "No"};
		};
_flagObject setVariable ["ExileFlagDonorExempt",_flagExemptStatus, true]; //BSF Edit

_flagObject setVariable ["ExileOwnerUID",_owner, true];
_flagObject setVariable ["ExileTerritorySize", _territorySize, true];
_flagObject setVariable ["ExileTerritoryBuildRights", [_owner], true];
_flagObject setVariable ["ExileTerritoryModerators", [_owner], true];
_flagObject setVariable ["ExileTerritoryLevel", 1, true];
_flagObject setVariable ["ExileTerritoryName", _territoryName, true];
_flagObject setVariable ["ExileRadiusShown", false, true];
_flagObject setVariable ["ExileFlagStolen", 0, true];
_currentTimestamp = call ExileServer_util_time_currentTime;
_flagObject setVariable ["ExileTerritoryLastPayed", _currentTimestamp];
_flagObject call ExileServer_system_territory_maintenance_recalculateDueDate;
["announceTerritoryRequest", [netId _flagObject]] call ExileServer_system_network_send_broadcast;
