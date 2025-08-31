// JohnO_fnc_getEventLocations
private ["_listOfCrashSites","_crashPos","_crashGridPos"];

if (isNil "BSF_Event_Positions") then
{
	BSF_Event_Positions = [];
};	

_listOfCrashSites = [];

{
	_listOfCrashSites pushBack (_x select 0);

} forEach BSF_Event_Positions;

if !(_listOfCrashSites isEqualTo []) then
{	
	_crashPos = selectRandom _listOfCrashSites;	
	_crashGridPos = mapGridPosition _crashPos;
}
else
{
	_crashGridPos = -1;
};	

_crashGridPos