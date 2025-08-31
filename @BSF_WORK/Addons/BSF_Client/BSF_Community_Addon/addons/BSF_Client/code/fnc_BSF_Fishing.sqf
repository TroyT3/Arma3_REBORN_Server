/*
	fnc_BSF_Fishing.sqf
	Basic fishing script for exile by JackFrost, modify by Serveratze [Fishing Boat]
*/
[] spawn {
diag_log format['A Player starting fishing'];
params ["_timeFishing","_completed","_fishingChance","_catch"];

if (player getVariable ['BSFplayerFishing',false] isEqualTo true) exitWith {
	["ErrorTitleAndText",["Fishing Info", "You're already fishing"]] call ExileClient_gui_toaster_addTemplateToast;
};

player setVariable ['BSFplayerFishing',true,false];

_timeFishing = 10;

if (ExileClientPlayerIsInCombat) exitWith
{
	[
	    "ErrorTitleAndText", 
	    ["Fishing Info", "You are in combat!"]
	] call ExileClient_gui_toaster_addTemplateToast;
	player setVariable ['BSFplayerFishing',false,false];
};
if (ExilePlayerInSafezone) exitWith
{
 	[
	    "ErrorTitleAndText", 
	    ["Fishing Info", "Please leave the safezone first!"]
	] call ExileClient_gui_toaster_addTemplateToast;
	player setVariable ['BSFplayerFishing',false,false];
};
if (speed vehicle player >= 5) exitwith
{ 
    [
	    "ErrorTitleAndText",
	    ["Fishing Info", "You are moving too fast to throw your net!"]
	] call ExileClient_gui_toaster_addTemplateToast;
	player setVariable ['BSFplayerFishing',false,false];
};
if (speed vehicle player <= -5) exitwith
{ 
    [
	    "ErrorTitleAndText",
		["Fishing Info", "You are moving too fast to throw your net!"]
	] call ExileClient_gui_toaster_addTemplateToast;
	player setVariable ['BSFplayerFishing',false,false];
};
if !("BSF_Fishing_Net" in magazines player) exitwith
{ 
    [
	    "ErrorTitleAndText",
		["Fishing Info", "You need a fishing net to be able to fish!"]
    ] call ExileClient_gui_toaster_addTemplateToast;
	player setVariable ['BSFplayerFishing',false,false];
};
if (isNull objectParent player) exitwith
{ 
    [
	    "ErrorTitleAndText",
	    ["Fishing Info", "You must be in a boat to fish!"]
	] call ExileClient_gui_toaster_addTemplateToast;
	player setVariable ['BSFplayerFishing',false,false];
};
if !(vehicle player isKindOf "Ship") exitwith
{ 
    [
	    "ErrorTitleAndText",
	    ["Fishing Info", "You must be in a boat to fish!"]
	] call ExileClient_gui_toaster_addTemplateToast;
	player setVariable ['BSFplayerFishing',false,false];
};
if (abs (getTerrainHeightASL getPos player) <= 10) exitwith 
{ 
    [
        "ErrorTitleAndText", 
        [ "No fish here!", "You will have to go to deeper waters to find fish!" ]
    ] call ExileClient_gui_toaster_addTemplateToast;
	player setVariable ['BSFplayerFishing',false,false];
}; 
if ("BSF_Fishing_Net" in magazines player) then {
  
		["You throw your net..."] spawn ExileClient_gui_baguette_show;
  
	while
		{	
			_timeFishing > 0 && speed vehicle player <= 5 && speed vehicle player >= -5
		}
		do
			{
				_timeFishing = (_timeFishing - 1);
				sleep 1;
			
				if (_timeFishing <= 0 )then
					{
						_completed = true;
					}
				else
					{
						_completed = false};
					};
		
	if (_completed isEqualTo true) then
		{	
			_fishingChance = random 1;
				
			if (_fishingChance < 0.75) then
				{
					_catch = selectRandom [
	                    "Exile_Item_Catsharkfilet_Raw",
	                    "Exile_Item_MackerelFilet_Raw",
	                    "Exile_Item_MackerelFilet_Raw",
	                    "Exile_Item_MackerelFilet_Raw",
	                    "Exile_Item_MulletFilet_Raw",
	                    "Exile_Item_MulletFilet_Raw",
	                    "Exile_Item_MulletFilet_Raw",
	                    "Exile_Item_OrnateFilet_Raw",
	                    "Exile_Item_OrnateFilet_Raw",
	                    "Exile_Item_OrnateFilet_Raw",
	                    "Exile_Item_TunaFilet_Raw",
	                    "Exile_Item_SalemaFilet_Raw",
	                    "Exile_Item_SalemaFilet_Raw",
	                    "Exile_Item_SalemaFilet_Raw",
	                    "Exile_Item_TurtleFilet_Raw"
						];
					["You've got something!"] spawn ExileClient_gui_baguette_show;
						sleep 5;
					["Cleaning and filleting..."] spawn ExileClient_gui_baguette_show;
						sleep 5;
					["Done! Enjoy your dinner!"] spawn ExileClient_gui_baguette_show;
						sleep 5;
						player addItem _catch;
					
				}
			else			
				{
					["You didn't catch anything"] spawn ExileClient_gui_baguette_show;
				};
			
			if (random 1 > 0.92) then
				{
					player removeItem "BSF_Fishing_Net";
					["You've lost the net!"] spawn ExileClient_gui_baguette_show;
					player setVariable ['BSFplayerFishing',false,false];
				};
		}
		else
		{
		    ["ErrorTitleAndText",["Fishing Info", "You cannot move while fishing"]] call ExileClient_gui_toaster_addTemplateToast;
			player setVariable ['BSFplayerFishing',false,false];
		}
};
uiSleep 8;
player setVariable ['BSFplayerFishing',false,false];

};