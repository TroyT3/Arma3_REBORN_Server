// deleteMapMarkers_HeliCrash.sqf

// Delete the map marker on a loot crate when a player gets in range

for "_i" from 1 to SC_numberofHeliCrashes do
{
	_markerName = format ["SC_helicrash_marker_%1", _i];
	_pos = getMarkerPos _markerName;
	
	if(!isNil "_pos") then
	{
		if([_pos, 5] call ExileClient_util_world_isAlivePlayerInRange) then
		{ 
			deleteMarker _markerName; 
			_logDetail =  format ["[OCCUPATION:HeliCrash]:: marker %1 removed at %2",_markerName,time];
			[_logDetail] call SC_fnc_log;

			BSF_Event_Positions deleteAt _markerName;
			_logDetail =  format ["[OCCUPATION:HeliCrash]:: BSF Event %1 removed",_markerName];
			[_logDetail] call SC_fnc_log;
		};
	};
};						
