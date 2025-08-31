
private ["_minimumDistanceToTraderZones","_minimumDistanceToSpawnZones","_minimumDistanceToOtherTerritories","_canbuild","_position"];

_position = _this select 0;
_minimumDistanceToTraderZones = getNumber (missionConfigFile >> "CfgTerritories" >> "minimumDistanceToTraderZones");
_minimumDistanceToSpawnZones = getNumber (missionConfigFile >> "CfgTerritories" >> "minimumDistanceToSpawnZones");
_minimumDistanceToOtherTerritories = getNumber (missionConfigFile >> "CfgTerritories" >> "minimumDistanceToOtherTerritories");

_canbuild = true;

if ([_position, _minimumDistanceToTraderZones] call ExileClient_util_world_isTraderZoneInRange) then
{
["ErrorTitleAndText", ["Cannot build here!", "You are too close to a TRADER zone."]] call ExileClient_gui_toaster_addTemplateToast;
	_canbuild = false;
};
if ([_position, _minimumDistanceToSpawnZones] call ExileClient_util_world_isSpawnZoneInRange) then
{	
["ErrorTitleAndText", ["Cannot build here!", "You are too close to a SPAWN zone."]] call ExileClient_gui_toaster_addTemplateToast;
	_canbuild = false;
};
if ([_position, _minimumDistanceToOtherTerritories] call ExileClient_util_world_isTerritoryInRange) then
{
["ErrorTitleAndText", ["Cannot build here!", "You are too close to a another territory."]] call ExileClient_gui_toaster_addTemplateToast;
	_canbuild = false;
};

if (_canbuild) then {
["SuccessTitleAndText", ["You can build here!", "Plant that flag and get to work! Make sure that you follow the rules!"]] call ExileClient_gui_toaster_addTemplateToast;
};