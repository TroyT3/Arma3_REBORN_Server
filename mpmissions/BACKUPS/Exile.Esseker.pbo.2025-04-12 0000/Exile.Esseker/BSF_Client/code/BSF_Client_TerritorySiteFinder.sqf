/*
* BSF_Client_TerritorySiteFinder
* BSF_Client\code\BSF_Client_TerritorySiteFinder.sqf
*
* BS-Free Game Servers
* www.bs-free.com
* © 2023 Troy - BS-Free
*
* This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
* To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
*/

/////////////////// Collect and filter map markers

MapMarkers = createHashMap;
_index = 0;
{
	_markerName = str _index;
	_markertype = getMarkerType _x;
	_markerPos = getMarkerPos _x;
	_size = (getMarkerSize _x) select 0;
	_typeToInclude = ["ExileNonConstructionZone", "ExileSpawnZone", "ExileTraderZone"];

	if (_markertype in _typeToInclude) then {
		_markerColor = "ColorBlack";
		switch _markertype do {
			case "ExileNonConstructionZone" : {_markerColor = "ColorBlue";};
			case "ExileSpawnZone" : {_markerColor = "ColorYellow";};
			case "ExileTraderZone" : {_markerColor = "ColorRed";};
			default {_markerColor = "ColorOrange";};
			};

		_marker = createMarkerLocal [_markerName, _markerPos];
		_marker setMarkerShapeLocal "ELLIPSE";
		_marker setMarkerColorLocal _markerColor;
		_marker setMarkerSizeLocal [_size, _size];
		_marker setMarkerAlphaLocal 0.5;
		_marker setMarkerBrushLocal "SolidFull";

		MapMarkers set [_markerName,_markerPos];

		_index = _index + 1;
	};
} forEach allMapMarkers;

/////////////////// Collect player flag markers

_minimumDistanceToTraderZones = getNumber (missionConfigFile >> "CfgTerritories" >> "minimumDistanceToTraderZones");
_minimumDistanceToSpawnZones = getNumber (missionConfigFile >> "CfgTerritories" >> "minimumDistanceToSpawnZones");
_minimumDistanceToOtherTerritories = getNumber (missionConfigFile >> "CfgTerritories" >> "minimumDistanceToOtherTerritories");
_maximumTerritoryRadius = getNumber (missionConfigFile >> "CfgTerritories" >> "maximumRadius");
_center = getNumber (missionConfigFile >> "CfgMap" >> "LandMassCenter");
_radius = getNumber (missionConfigFile >> "CfgMap" >> "LandMassRadius");
_maximumTerritoryRadius = getNumber (missionConfigFile >> "CfgTerritories" >> "maximumRadius");


PlayerFlags = createHashMap;
PlayerFlags = _center nearObjects ["Exile_Construction_Flag_Static", _radius];

PlayerFlagsHash = createHashMap;
_index = 0;
{
	_pos = _x;
	PlayerFlagsHash set [str _index,_pos];
	_index = _index + 1;
} forEach _PlayerFlags;

FlagMarkers = createHashMap;
_index = 0;
{
		_markerName = format["PlayerFlag_%1",str _index];
		_markerPos = PlayerFlagsHash get _x;
		_markerColor = "ColorRed";
		_marker = createMarkerLocal [_markerName, _markerPos];
		_marker setMarkerShapeLocal "ELLIPSE";
		_marker setMarkerColorLocal _markerColor;
		_marker setMarkerSizeLocal [_maximumTerritoryRadius, _maximumTerritoryRadius];
		_marker setMarkerAlphaLocal 0.5;
		_marker setMarkerBrushLocal "SolidFull";
		_index = _index + 1;

		FlagMarkers set [_markerName,_markerPos];

} forEach PlayerFlags;

/////////////////// Delete markers
{
	_markerName = _x;
	deleteMarkerLocal _markerName;
} forEach MapMarkers;

{
	_markerName = _x;
	deleteMarkerLocal _markerName;
} forEach FlagMarkers;

// copyToClipboard str FlagMarkers;

PlayerFlags = createHashMap;
PlayerFlags = _center nearObjects ["Exile_Construction_Flag_Static", _radius];
PlayerFlags = [[11221.5,7678.64,0.0262604],[11459.5,9180.47,0.0369034],[16410.4,9740.25,-2.01998],[8051.32,10280.9,0.00714493],[10770.9,10767.3,0],[6600.24,10854,0.0410137],[6317.25,11196,-1.9621],[20184.6,11314.1,-0.00554657],[11448.9,11466.9,-0.00600624],[14121,11566.2,0.137371],[18641.8,11877.9,-3.4814],[11561.2,11969.8,-0.000490189],[13578,12200.4,0.63451],[19317.1,12778.4,0.165039],[12554.9,12951.9,-0.171261],[20344.9,13433.5,0.100887],[16757.1,13679.8,-0.00795841],[17434.2,13688.2,-0.00572777],[17874,13806,0.0369186],[17530.9,14484.1,0.00143814],[13374.2,14546.6,-0.319357],[11818.9,14649,0.00518799],[17215.5,14674,0.0778894],[19933.1,14767.7,0.00216675],[6039.69,14857,0.0226402],[13922.6,15094.3,0.116708],[11943.9,15134.1,-0.903442],[13257.3,15226.2,0.0525951],[12732,15383.6,-0.469585],[13561.7,15363.2,0.0245972],[17184.1,15522.7,0.00791359],[19414.9,15606.8,-0.0273895],[11019.3,15675.8,-0.186005],[8686.08,15787.2,0.00106049],[7220.03,15812.4,-3.73985],[15941.9,15861.6,-0.00956106],[16620.2,15844.2,0]];


[["2",[16410.4,9740.25,-2.01998]],["18",[17874,13806,0.0369186]],["3",[8051.32,10280.9,0.00714493]],["4",[10770.9,10767.3,0]],["28",[12732,15383.6,-0.469585]],["31",[19414.9,15606.8,-0.0273895]],["5",[6600.24,10854,0.0410137]],["26",[11943.9,15134.1,-0.903442]],["29",[13561.7,15363.2,0.0245972]],["30",[17184.1,15522.7,0.00791359]],["6",[6317.25,11196,-1.9621]],["13",[19317.1,12778.4,0.165039]],["27",[13257.3,15226.2,0.0525951]],["33",[8686.08,15787.2,0.00106049]],["7",[20184.6,11314.1,-0.00554657]],["12",[13578,12200.4,0.63451]],["24",[6039.69,14857,0.0226402]],["32",[11019.3,15675.8,-0.186005]],["8",[11448.9,11466.9,-0.00600624]],["11",[11561.2,11969.8,-0.000490189]],["25",[13922.6,15094.3,0.116708]],["35",[15941.9,15861.6,-0.00956106]],["9",[14121,11566.2,0.137371]],["10",[18641.8,11877.9,-3.4814]],["22",[17215.5,14674,0.0778894]],["34",[7220.03,15812.4,-3.73985]],["17",[17434.2,13688.2,-0.00572777]],["23",[19933.1,14767.7,0.00216675]],["16",[16757.1,13679.8,-0.00795841]],["20",[13374.2,14546.6,-0.319357]],["36",[16620.2,15844.2,0]],["15",[20344.9,13433.5,0.100887]],["21",[11818.9,14649,0.00518799]],["14",[12554.9,12951.9,-0.171261]],["0",[11221.5,7678.64,0.0262604]],["1",[11459.5,9180.47,0.0369034]],["19",[17530.9,14484.1,0.00143814]]]