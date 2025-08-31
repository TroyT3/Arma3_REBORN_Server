/*
* ExileClient_BSF_network_CreateBambiVehicleMarkerResponse.sqf
* BSF_Client\code\
*
* BS-Free Game Servers
* www.bs-free.com
* © 2025 Troy - BS-Free
*
* This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
* To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
*/

params ["_data"];
_pos = _data select 0;
_text = _data select 1;
format[_data] call BSF_Client_Util_Debug;

private _markerName = format ["BSF_Deployed_%1", round (random 99999)];

private _marker = createMarkerLocal [_markerName, _pos];
_marker setMarkerTypeLocal "hd_join";
_marker setMarkerColorLocal "ColorBlue";
_marker setMarkerTextLocal _text;

[_markerName] spawn {
    params ["_markerName"];
    sleep 120;
    deleteMarkerLocal _markerName;
};
