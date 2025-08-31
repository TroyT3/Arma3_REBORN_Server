// BSF_Client_StudyCorpse.sqf

private ["_target","_name","_enableRespect", "_enableMission", "_quote", "_roll", "_intelChance", "_missionChance", "_eventInfo", "_eventPos", "_eventSiteGrid", "_eventLable", "_addRespect"];

_target = _this select 0;

if !(alive _target) then 
{
	if (_target isKindOf "Exile_Unit_Player") then
	{
		_name = _target getVariable ["ExileName", -1];
	}
	else
	{
		_name = ["random"] call BSF_Client_GetRandomName; 
	};
	
	player playActionNow "Medic";
	deleteVehicle _target;

	_enableRespect = (getNumber(missionConfigFile >> 'StudyCorpse' >> 'enableRespect'));
	_enableMission = (getNumber(missionConfigFile >> 'StudyCorpse' >> 'enableMission'));
	_intelChance = (getNumber(missionConfigFile >> 'StudyCorpse' >> 'intelChance'));
	_missionChance = (getNumber(missionConfigFile >> 'StudyCorpse' >> 'missionChance'));
	
	_quote = call BSF_Client_GetRandomQuote;
	_roll = random 1;
	_createMarker = false;
	sleep 5;	

	if (_enableMission isEqualTo 1) then {
		_eventInfo = [] call BSF_Client_GetEventLocations;
		_eventPos = _eventInfo select 0;
		_eventLable = _eventInfo select 1;
		_eventSiteGrid = mapGridPosition _eventPos;
		format["BSF_Client_StudyCorpse Event: %1 : %2", _eventLable, _eventPos] call BSF_Client_Util_Debug;
	}
	else
	{
		_eventSiteGrid = -1;
	};

	if (_roll >= _intelChance) then
	{
		_addRespect = floor random [50,125,200];

		 if (_roll >= _missionChance) then 
		 {
			if !(_eventSiteGrid isEqualTo -1) then
			{
				if (_enableRespect isEqualTo 1) then 
				{
					["InfoTitleAndText",
						[
						format ["<t size='27'>Information found</t>"],
							format ["<t size='23'>His name was %1. You found a note: <t color='#00FF00'>%2 at %3</t><br/>%4 respect gained.</t>",_name, _eventLable, _eventSiteGrid, _addRespect]
						]
					] call ExileClient_gui_toaster_addTemplateToast;
					_addRespect = _addRespect + (floor random [50,75,100]);
					_createMarker = true;
				}
				else
				{
					["InfoTitleAndText",
						[
						format ["<t size='27'>Information found</t>"],
							format ["<t size='23'>His name was %1. You found a note: <t color='#00FF00'>%2 at %3</t>",_name, _eventLable, _eventSiteGrid]
						]
					] call ExileClient_gui_toaster_addTemplateToast;
					_createMarker = true;
				};
			}
			else
			{	
				if (_enableRespect isEqualTo 1) then 
				{
					["InfoTitleAndText",
						[
						format ["<t size='27'>Information found</t>"],
							format ["<t size='23'>His name was %1. <br/>You found a scribbled note:<br/> <t color='#f7ec72'>%2</t><br/> %3 respect gained.</t>",_name,_quote,_addRespect]
						]
					] call ExileClient_gui_toaster_addTemplateToast;
				}
				else 
				{
					["InfoTitleAndText",
						[
						format ["<t size='27'>Information found</t>"],
							format ["<t size='23'>His name was %1. <br/>You found a scribbled note:<br/> <t color='#f7ec72'>%2</t>",_name,_quote]
						]
					] call ExileClient_gui_toaster_addTemplateToast;
				};
			};
		}
		else 
		{
			if (_enableRespect isEqualTo 1) then 
			{
				["InfoTitleAndText",
					[
					format ["<t size='27'>Information found</t>"],
						format ["<t size='23'>His name was %1. <br/>You found a scribbled note:<br/> <t color='#f7ec72'>%2</t><br/> %3 respect gained.</t>",_name,_quote,_addRespect]
					]
				] call ExileClient_gui_toaster_addTemplateToast;
			}
			else 
			{
				["InfoTitleAndText",
					[
					format ["<t size='27'>Information found</t>"],
						format ["<t size='23'>His name was %1. <br/>You found a scribbled note:<br/> <t color='#f7ec72'>%2</t>",_name,_quote]
					]
				] call ExileClient_gui_toaster_addTemplateToast;
			};
		};
	}
	else
	{
		["ErrorTitleAndText",
			[
		        format ["<t size='27'>No information found</t>"],
	            format ["<t size='23'>They had no ID or information on them</t>", _name]
		    ]
	    ] call ExileClient_gui_toaster_addTemplateToast;
	};

	if (_createMarker isEqualTo true) then {
		_marker = createMarkerLocal [_eventLable, _eventPos];
		_marker setMarkerTextLocal _eventLable;
		_marker setMarkerTypeLocal "mil_dot";
		_marker setMarkerColorLocal "ColorGreen";
		format["Marker Created: %1 : %2", _eventLable, _eventPos] call BSF_Client_Util_Debug;
	};
};

