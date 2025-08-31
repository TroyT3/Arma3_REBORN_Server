// BSF_Client_GetEventLocations

private["_markerName","_position","_label","_event","_EventGridPos","_eventLable","_eventSites","_eventInfo"];

_eventSites = [];
_eventInfo = [];
{
	_markerName = _x;
	_position = _y select 0;
	_label = _y select 2;
	_eventSites pushBack [_position, _label];
} forEach BSF_Event_Positions;

if !(_eventSites isEqualTo []) then
	{
		_event = selectRandom _eventSites;
		// _eventGridPos = mapGridPosition (_event select 0);
		_eventPos = _event select 0;
		_eventLable = _event select 1;
		_eventInfo = [_eventPos,_eventLable];
		// _eventInfo = [_eventGridPos,_eventLable];
	}
else
	{
		_eventInfo = [-1,""];
	};

_eventInfo;
