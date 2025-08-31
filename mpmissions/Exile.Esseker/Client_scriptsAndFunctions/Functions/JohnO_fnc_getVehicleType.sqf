// JohnO_fnc_getVehicleType.sqf
// Not used anymore -  Moved better version to BSF_Client_GetVehicleWheels

private ["_vehicle","_eightWheels","_sixWheels","_wheels"];

_vehicle = _this select 0;

_eightWheels =
[
	"Exile_Car_HEMMT",
	"B_Truck_01_Repair_F"
];

_sixWheels =
[
	"Exile_Car_Ural_Covered_Blue",
	"Exile_Car_Ural_Covered_Yellow",
	"Exile_Car_Ural_Covered_Worker",
	"Exile_Car_Ural_Covered_Military",
	"Exile_Car_V3S_Open",
	"Exile_Car_V3S_Covered",
	"Exile_Car_Tempest",
	"Exile_Car_Zamak",
	"I_Truck_02_box_F"
];

if (typeOf _vehicle in _eightWheels) then
{
	_wheels = ["HitLF2Wheel","HitLFWheel","HitRFWheel","HitRF2Wheel","HitRMWheel","HitLMWheel","HitLBWheel","HitRBWheel"];
}
else
{
	if (typeOf _vehicle in _sixWheels) then
	{
		_wheels = ["HitLF2Wheel","HitLFWheel","HitRFWheel","HitRF2Wheel","HitRMWheel","HitLMWheel"];
	}
	else
	{
		_wheels = ["HitLF2Wheel","HitLFWheel","HitRFWheel","HitRF2Wheel"];
	};	
};	
_wheels




// JohnO_fnc_getVehicleWheelHitpoints.sqf
params ["_vehicle"];

// Try config first; fall back to runtime if needed
private _wheels = [_vehicle] call JohnO_fnc_getWheelHitpoints_Cfg;
if (_wheels isEqualTo []) then {
    _wheels = [_vehicle] call JohnO_fnc_getWheelHitpoints_Runtime;
};

// As a safety: if still empty, default to common 4x
if (_wheels isEqualTo []) then {
    _wheels = ["HitLF2Wheel","HitLFWheel","HitRFWheel","HitRF2Wheel"];
};

_wheels

