// BSF_script_hackCommsTower.sqf

private ["_position","_radius","_towers","_listOfCrashSites","_crashGridPos","_crashPos","_found","_timer","_limit"];


_position = _this select 0;
_radius = _this select 1;

_towers = nearestObjects [position player, ["Land_telek1","Land_TTowerBig_1_F","Land_TTowerBig_2_F","Land_Radar_F","Land_Radar_Small_F","Land_Radar","land_Objects28","land_Objects96","Land_Vysilac_FM","rhs_prv13","rhs_p37","76n6ClamShell","CDF_WarfareBAntiAirRadar","GUE_WarfareBAntiAirRadar","INS_WarfareBAntiAirRadar","RU_WarfareBAntiAirRadar","USMC_WarfareBAntiAirRadar","CDF_WarfareBArtilleryRadar","Gue_WarfareBArtilleryRadar","Ins_WarfareBArtilleryRadar","RU_WarfareBArtilleryRadar","USMC_WarfareBArtilleryRadar","rhs_2P3_1","rhs_2P3_2","rhs_v2","rhs_v3","Land_Antenna","Land_SatelliteAntenna_01_F"], _radius];

if (isNil "BSF_Event_Positions") then
{
	BSF_Event_Positions = [];
};	

_listOfCrashSites = [];

{
	_listOfCrashSites pushBack (_x select 0);

} forEach BSF_Event_Positions;

_found = false;

if !((count _towers) == 0) then
{
	if ("Exile_Item_Laptop" in (magazines player)) then
	{	
		if (time - lastCommsHack_coolDown >= lastCommsHack) then
		{	
			lastCommsHack = time;

			player playActionNow "Medic";

			_dir = direction player + 10;
			_pos = getPos player;  
			_dist = 1.5; 
			 
			_pos = (_pos getPos [_dist, _dir] select [0, 2]) + ([[],[_pos select 2]] select (count _pos > 2)); 
			 
			_lapTop = createVehicle ["Land_Laptop_unfolded_F",[(_pos select 0),(_pos select 1),(getPosATL player select 2)+ 0.2],[], 0, "CAN_COLLIDE"];  
			_lapTop setDir _dir - 160;

			sleep 3;

			playSound "code1";

			disableSerialization;
			("ExileActionProgressLayer" call BIS_fnc_rscLayer) cutRsc ["RscExileActionProgress", "PLAIN", 1, false];

			_startTime = diag_tickTime;
			_duration = 30;
			_sleepDuration = _duration / 100;
			_progress = 0;

			_display = uiNamespace getVariable "RscExileActionProgress";   
			_label = _display displayCtrl 4002;
			_label ctrlSetText "0%";
			_progressBarBackground = _display displayCtrl 4001;  
			_progressBarMaxSize = ctrlPosition _progressBarBackground;
			_progressBar = _display displayCtrl 4000;  
			_progressBar ctrlSetPosition [_progressBarMaxSize select 0, _progressBarMaxSize select 1, 0, _progressBarMaxSize select 3];
			_progressBar ctrlSetBackgroundColor [0, 0.78, 0.93, 1];
			_progressBar ctrlCommit 0;
			_progressBar ctrlSetPosition _progressBarMaxSize; 
			_progressBar ctrlCommit _duration;

			while {_progress < 1} do
			{	
				_label ctrlSetText format["%1%2", round (_progress * 100), "%"];
				uiSleep _sleepDuration; 

				_progress = ((diag_tickTime - _startTime) / _duration) min 1;

				//hint str _progress;

				if (_progress >= 0.2 && _progress < 0.21) then {playSound "code2";};
				if (_progress >= 0.5 && _progress < 0.51) then {playSound "code3";};
			};

			_progressBarColor = [0.7, 0.93, 0, 1];
			_progressBar ctrlSetBackgroundColor _progressBarColor;

			_progressBar ctrlSetPosition _progressBarMaxSize;
			_progressBar ctrlCommit 0;

			("ExileActionProgressLayer" call BIS_fnc_rscLayer) cutFadeOut 2; 

			if !(alive player) exitWith {};

			sleep 2;

			titleText ["Scan complete - Triangulating positions","PLAIN DOWN"];

			sleep 2;

			if !(_listOfCrashSites isEqualTo []) then
			{	
				_crashPos = selectRandom _listOfCrashSites;	
				_crashGridPos = mapGridPosition _crashPos;
				_found = true;
			};	
			if (_found) then
			{	

				_addRespect = (floor random [100,125,250]);

				["InfoTitleAndText",
					[
		            format ["<t size='27'>Distress recording</t>"],
			            format ["<t size='23'>I found a distress call coming from grid: <t color='#00FF00'>%1</t><t size='23'><br/>Someone may have heard me, I should be careful.<br/>%2 respect gained.</t>",_crashGridPos, _addRespect]
				    ]
		    	] call ExileClient_gui_toaster_addTemplateToast;

				[_addRespect,0,true] call BSF_Client_UpdateRespectAndTabs;

			    if (random 1 > 0.5) then
			    {
			    	["spawnHuntersOnTarget", [player]] call ExileClient_system_network_send;
			    };
			    
			}
			else
			{
				["ErrorTitleAndText",
					[
			            format ["<t size='27'>Found no data</t>"],
			            format ["<t size='23'>I found no data at this tower</t>"]
				    ]
			    ] call ExileClient_gui_toaster_addTemplateToast;
			};

			deleteVehicle _lapTop;	    
		}
		else
		{
			["ErrorTitleAndText",
				[
		            format ["<t size='27'>Not yet..</t>"],
		            format ["<t size='23'>I cannot hack the data for another: %1 seconds</t>",lastCommsHack_coolDown - round (time - lastCommsHack)]
			    ]
	    	] call ExileClient_gui_toaster_addTemplateToast;
		}; 
	}
	else
	{
		["ErrorTitleAndText",
			[
	            format ["<t size='27'>Insufficient equipment</t>"],
	            format ["<t size='23'>I need a laptop to hack data from this tower</t>"]
		    ]
    	] call ExileClient_gui_toaster_addTemplateToast;
	};	
}
else
{
	["ErrorTitleAndText",
		[
            format ["<t size='27'>No comms</t>"],
            format ["<t size='23'>I need to be closer to a comms tower to do this</t>"]
	    ]
    ] call ExileClient_gui_toaster_addTemplateToast;
};	