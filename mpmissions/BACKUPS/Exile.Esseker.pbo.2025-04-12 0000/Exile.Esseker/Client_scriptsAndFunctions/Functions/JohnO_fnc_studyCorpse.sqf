// JohnO_fnc_studyCorpse.sqf
private["_target","_name","_level","_baseChance","_actualChance","_eventSiteGrid"];

_target = _this select 0;

//_level = [ExileClientPlayerScore] call JohnO_fnc_getRespectTier;	// Returns a number between 0 and 5
//_actualChance = _baseChance + (_level / 10); // Increase the base chance by a decimal factor of your respect level

if !(alive _target) then 
{
	if (_target isKindOf "Exile_Unit_Player") then
	{
		_name = _target getVariable ["ExileName", -1];
	}
	else
	{
		_name = ["random"] call BSF_fnc_GetRandomName; 
	};
	
	player playActionNow "Medic";

	sleep 5;	

	deleteVehicle _target;

	_quote = call BSF_fnc_GetRandomQuote;
	_roll = random 1;
	_intelChance = 0.3;
	_missionChance = 0.5;

	if (_roll >= _intelChance) then
	{
		_addRespect = floor random [50,125,200];
	    if (_roll >= _missionChance) then
	    {
	    	_eventSiteGrid = [] call JohnO_fnc_getEventLocations;
			
			if !(_eventSiteGrid isEqualTo -1) then
			{
				["InfoTitleAndText",
					[
		            format ["<t size='27'>Information found</t>"],
			            format ["<t size='23'>His name was %1. You found a note with grid location: <t color='#00FF00'>%2</t><br/>%3 respect gained.</t>",_name,_eventSiteGrid, _addRespect]
				    ]
		    	] call ExileClient_gui_toaster_addTemplateToast;
				_addRespect = _addRespect + (floor random [50,75,100]);
			}
			else
			{	

			    ["InfoTitleAndText",
					[
		            format ["<t size='27'>Information found</t>"],
			            format ["<t size='23'>His name was %1. <br/>You found a scribbled note:<br/> <t color='#f7ec72'>%2</t><br/> %3 respect gained.</t>",_name,_quote,_addRespect]
				    ]
			    ] call ExileClient_gui_toaster_addTemplateToast;
			};
		[_addRespect,0,true] call JohnO_fnc_updateRespectAndTabs;
		}
		else
		{
			["InfoTitleAndText",
				[
		            format ["<t size='27'>Information found</t>"],
			            format ["<t size='23'>His name was %1. <br/>You found a scribbled note:<br/> <t color='#f7ec72'>%2</t><br/> %3 respect gained.</t>",_name,_quote,_addRespect]
			    ]
		    ] call ExileClient_gui_toaster_addTemplateToast;
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
};

