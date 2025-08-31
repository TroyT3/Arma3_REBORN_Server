// JohnO_fnc_handleCrashSmoke.sqf
_position = [];
{
	_position = _y select 0;
	_time = _y select 1;

	if (_time >= time) then
	{	
		_smoke = createVehicle ["SmokeShell",_position,[], 0, "can_collide"];
	}
	else
	{
		BSF_Event_Positions deleteAt _forEachIndex;
		publicVariable "BSF_Event_Positions";
	};	
} forEach BSF_Event_Positions;	
