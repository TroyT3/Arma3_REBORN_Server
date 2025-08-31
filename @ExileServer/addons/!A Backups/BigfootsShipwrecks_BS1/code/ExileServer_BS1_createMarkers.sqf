// ExileServer_BS1_createMarkers.sqf

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