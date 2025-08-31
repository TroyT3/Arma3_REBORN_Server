// JohnO_fnc_handleCustomEffects.sqf

private ["_coughArray","_hunger","_thirst","_currentBodyTemperature","_idealTemp","_difference","_adjustment"];

_coughArray = ["cough1","cough2","cough3","cough4","cough5","cough6"];
_hunger = ExileClientPlayerAttributes select 2;
_thirst = ExileClientPlayerAttributes select 3;
_currentBodyTemperature = ExileClientPlayerAttributes select 5;

_BSF_Reborn_EVRresistance = player getVariable ["BSF_Reborn_EVRresistance",0];
_BSF_Reborn_WoundsTreated = player getVariable ["BSF_Reborn_WoundsTreated",false];
_BSF_Reborn_Infected = player getVariable ["BSF_Reborn_Infected",false];
_BSF_Reborn_InfectionAmount = player getVariable ["BSF_Reborn_InfectionAmount",0];
_player_injured = false;

if (damage player > 0.05) then {_player_injured = true;};

// Adjust chance for infection if your core temp is lower than ideal:
_idealTemp = 36.7;
_difference = 0;
_adjustment = 0;
if (_currentBodyTemperature < _idealTemp) then {
	_difference = _idealTemp - _currentBodyTemperature;
	_adjustment = ((_difference max 0) * 10) + 10;
	_adjustment = _adjustment min 40;	// cap
} else {
	_adjustment = 0;	// no bonus if warm/normal
};

// Reset stats on death
if !(alive player) exitWith {
	player setVariable ["BSF_Reborn_WoundsTreated", false];
	player setVariable ["BSF_Reborn_Infected", false];
	player setVariable ["BSF_Reborn_InfectionAmount", 0];
	player enableStamina false;
	player allowSprint true;
	ExileRebornClient_soundIsPlaying = false;
};

// Check status of wounds and infection:
if ((time - ExileReborn_woundCheckInterval) >= ExileReborn_lastWoundUpdate) then
{	
	// If player has > 5% damage, isn't currently infected, and hasn't treated wounds: roll the dice for new infection
	if (!(_BSF_Reborn_Infected) && (_player_injured) && !(_BSF_Reborn_WoundsTreated)) then
	{
		systemChat "I am wounded.. I should clean my wounds..";
		if ((ExileReborn_chanceForInfection + _adjustment) >= random 100) then
		{
			player setVariable ["BSF_Reborn_Infected", true];
			_BSF_Reborn_Infected = true;
		};
	};

	if (_BSF_Reborn_Infected) then
	{	
		if (_BSF_Reborn_WoundsTreated) then 																				
		{
			_BSF_Reborn_InfectionAmount = (_BSF_Reborn_InfectionAmount - 1) max 0;
			player setVariable ["BSF_Reborn_InfectionAmount", _BSF_Reborn_InfectionAmount];
			systemChat "My infection should clear up soon... my wounds are clean...";

			if (_BSF_Reborn_InfectionAmount <= 0.01) then
			{
				player setVariable ["BSF_Reborn_Infected", false];
				_BSF_Reborn_Infected = false;
				player enableStamina false;
				player allowSprint true;
				systemChat "My infection has been cured";
			};	
		}
		else
		{
			_BSF_Reborn_InfectionAmount = _BSF_Reborn_InfectionAmount + 1;
			player setVariable ["BSF_Reborn_InfectionAmount", _BSF_Reborn_InfectionAmount, true];
		};	
	};

private _stage = 0;
if ((_BSF_Reborn_InfectionAmount >= ExileReborn_stageOneInfection) && (_BSF_Reborn_InfectionAmount < ExileReborn_stageTwoInfection)) then 
	{ 
		_stage = 1; 
	}
	else 
	{
		if ((_BSF_Reborn_InfectionAmount >= ExileReborn_stageTwoInfection) && (_BSF_Reborn_InfectionAmount < ExileReborn_stageThreeInfection)) then 
			{
				_stage = 2;
			}
			else
			{
				if (_BSF_Reborn_InfectionAmount >= ExileReborn_stageThreeInfection) then { _stage = 3;};
			};
	};

switch (_stage) do
{
	case 0: {
		if !(_BSF_Reborn_WoundsTreated) then {
			systemChat "I have a minor infection...";
		};
	};
	case 1: {
		playSound (selectRandom _coughArray);
		player setDamage (damage player) + 0.01;
		if !(_BSF_Reborn_WoundsTreated) then {
			systemChat "My wounds are looking slightly infected...";
		};
	};
	case 2: {
		playSound (selectRandom _coughArray);
		player setDamage (damage player) + 0.02;
		if !(_BSF_Reborn_WoundsTreated) then {
			systemChat "My wounds are infected.. I need treatment...";
		};
		enableCamShake true;
		addCamShake [5, 2, 30];
	};
	case 3: {
		playSound (selectRandom _coughArray);
		player setDamage (damage player) + 0.03;
		if !(_BSF_Reborn_WoundsTreated) then {
			systemChat "My wounds are badly infected...";
		};
		enableCamShake true;
		addCamShake [5, 2, 30];
		[60] call BIS_fnc_bloodEffect;
		player enableStamina true;
		player allowSprint false;
	};
};

	ExileReborn_lastWoundUpdate = time;
};

// Heartbeat when low health
if (((damage player) >= 0.85) && (time - ExileReborn_heartBeatInterval >= ExileReborn_lastHeartBeat) && (alive player)) then
{
	playSound ["SndExileHeartbeatFast", true]; 
	ExileReborn_lastHeartBeat = time;
};	

if ((time - ExileReborn_StatsUpdateInterval) >= ExileReborn_lastWoundUpdate) then
{	
	["handleCustomEffects Updating"] call BSF_Client_Util_Debug;
	BSF_UpdatingRebornStats = true;
	[] call BSF_Client_Update_Reborn_Stats;
};


