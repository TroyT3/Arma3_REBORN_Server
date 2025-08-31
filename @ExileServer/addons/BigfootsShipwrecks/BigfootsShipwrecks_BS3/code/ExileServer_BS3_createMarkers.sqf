// ExileServer_BS3_createMarkers.sqf

private ["_marker", "_markerId", "_markerPosition", "_markerText"];

_markerId = _this select 0;
_markerPosition = _this select 1;
_markerText = _this select 2;

_marker = createMarker [_markerId, _markerPosition];
_marker setMarkerShape "ICON";
_marker setMarkerType "loc_Tree";
_marker setMarkerColor "ColorGreen";
_marker setMarkerText _markerText;
_marker setMarkerSize [(1), (1)];

if (BS3_show_markers isEqualTo false) then {
	_marker setMarkerAlpha 0;
};

if (BS3_Wrecks_To_BSF_Events isEqualTo true) then {
	BSF_Event_Positions set [_marker,[_markerPosition, time + 14400, "Shipwreck"]];
	publicVariable "BSF_Event_Positions";
};