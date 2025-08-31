/*
* ExileClient_gui_xm8_slide_SpawnBambiVehicle_onOpen
* BSF_Client\code\
*
* BS-Free Game Servers
* www.bs-free.com
* © 2023 Troy - BS-Free
*
* This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
* To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
*/
 
// [30] call ExileClient_object_player_bambiStateBegin; // Debug

private["_display", "_textCtrl", "_text"];

disableSerialization;
_display = uiNameSpace getVariable ["RscExileXM8", displayNull];

if !(ExileClientPlayerIsBambi) then {
	{(_display displayCtrl _x) ctrlEnable false;} forEach [51002,51004,51006];
}
else
{
	{(_display displayCtrl _x) ctrlEnable true;} forEach [51002,51004,51006];
};

_textCtrl = _display displayCtrl 51007;
_text = "
You may spawn one of these vehicles while you are in a Bambi state.  As soon as it has spawned, your Bambi state will expire.
<br/>
<br/>
Please don't abandon these vehicles.  There is a 'Delete' option on the vehicle's scroll wheel menu, put litter in its place!
<br/>
<br/>
These are non-persistent vehicles.
";

_textCtrl ctrlSetStructuredText (parseText _text);
// [_textCtrl] call BIS_fnc_ctrlTextHeight;

missionNamespace setVariable ["BSF_fn_deploy", {
	params ["_type"];

	private _quadList = ["B_Quadbike_01_F", "B_G_Quadbike_01_F", "O_G_Quadbike_01_F", "O_Quadbike_01_F", "I_Quadbike_01_F", "I_G_Quadbike_01_F", "C_Quadbike_01_F"];
	private _gnatList = ["BSF_Gnat_01"];
	private _kayakList = ["rhsgref_hidf_canoe", "rhsgref_civ_canoe"];
	private _vehicleClass = "";

	switch (_type) do { 
		case "quad": { _vehicleClass = selectRandom _quadList };
		case "gnat": { _vehicleClass = selectRandom _gnatList };
		case "kayak": { _vehicleClass = selectRandom _kayakList };
		default { _vehicleClass = "" };
	};

	if (_vehicleClass isEqualTo "") exitWith {
		format["BSF_fn_deploy - Invalid vehicle type: %1", _type] call BSF_Client_Util_Debug;
	};

	["BambiVehicleDeployRequest", [_vehicleClass]] call ExileClient_system_network_send;
	call ExileClient_object_player_bambiStateEnd;
	closeDialog 1;
}];

