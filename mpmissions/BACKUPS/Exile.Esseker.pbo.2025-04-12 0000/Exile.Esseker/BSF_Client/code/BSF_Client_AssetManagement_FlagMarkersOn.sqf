/*
* BSF_Client_AssetManagement_FlagMarkersOn.sqf
* BSF_Client\code\
*
* BS-Free Game Servers
* www.bs-free.com
* © 2023 Troy - BS-Free
*
* This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
* To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
*/
private ["_size", "_marker1Name", "_marker", "_marker2Name", "_marker2", "_marker3Name", "_marker3", "_totalDamage"];
diag_log "BSF_Client_AssetManagement_FlagMarkersOn: START";

if (isNil "ThisPlayersFlags") exitWith {};

ThisPlayersFlagMarkers = [];

{
		_id = ThisPlayersFlags get _x select 0;
		_pos = ThisPlayersFlags get _x select 1;
		_size = ThisPlayersFlags get _x select 2;
		_name = ThisPlayersFlags get _x select 5;
		_marker1Name = format["Flag_%1",str _id];
		_marker = createMarkerLocal [_marker1Name, _pos];
		_marker setMarkerTextLocal _name;
		_marker setMarkerTypeLocal "BSF_Marker_mil_flag";
		_marker setMarkerColorLocal "ColorBlue";

		_marker2Name = format["%1Radius",_name];
		_marker2 = createMarkerLocal [_marker2Name, _pos];
		_marker2 setMarkerTextLocal _marker2Name;
		_marker2 setMarkerShapeLocal "ELLIPSE";
		_marker2 setMarkerColorLocal "ColorBlue";
		_marker2 setMarkerSizeLocal [_size,_size];
		_marker2 setMarkerColorLocal "ColorRed";
		_marker2 setMarkerBrushLocal "Border";
		_marker2 setMarkerAlphaLocal 1;

		_marker3Name = format["%1Radius2",_name];
		_marker3 = createMarkerLocal [_marker3Name, _pos];
		_marker3 setMarkerTextLocal _marker3Name;
		_marker3 setMarkerShapeLocal "ELLIPSE";
		_marker3 setMarkerColorLocal "ColorBlue";
		_marker3 setMarkerSizeLocal [_size - 1 ,_size - 1];
		_marker3 setMarkerColorLocal "ColorRed";
		_marker3 setMarkerBrushLocal "Border";
		_marker3 setMarkerAlphaLocal 1;

		ThisPlayersFlagMarkers pushBack _marker1Name;
		ThisPlayersFlagMarkers pushBack _marker2Name;
		ThisPlayersFlagMarkers pushBack _marker3Name;
		["SuccessTitleOnly",format["<t size='23' font='PuristaLight'>Marker toggled on for:<br/>%1<br/>Radius: %2</t>", _name, _size]] call ExileClient_gui_toaster_addTemplateToast;

} forEach ThisPlayersFlags;

["BSF_Client_AssetManagement_FlagMarkersOn: END"] call BSF_Client_Util_Debug;
