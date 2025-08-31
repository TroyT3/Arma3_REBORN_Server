/*
* BSF_Server_AI_Monitor
* BSF_Server\code\BSF_Server_AI_Monitor.sqf
* 
* BS-Free Game Servers
* www.bs-free.com
* © 2023 Troy - BS-Free
*
* This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
* To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
*/

private ["_BSF_A3XAIcount", "_BSF_AIcount", "_BSF_OccupationCount", "_BSF_VEMFrCount", "_BSF_DMS_Count", "_BSF_RebornCount", "_BSF_RyanZombieCount", "_BSF_SMZombzCount", "_BSF_TraderCount", "_BSF_SpawnedBy"];

_BSF_A3XAIcount = 0;
_BSF_AIcount = 0;
_BSF_OccupationCount = 0;
_BSF_VEMFrCount = 0;
_BSF_DMS_Count = 0;
_BSF_RebornCount = 0;
_BSF_RyanZombieCount = 0;
_BSF_SMZombzCount = 0;
_BSF_TraderCount = 0;

{
	_BSF_SpawnedBy = _x getVariable ['BSF_SpawnedBy', ''];
	switch	(_BSF_SpawnedBy) do {
		case "A3XAI": 		{_BSF_A3XAIcount = _BSF_A3XAIcount + 1;};
		case "BSF": 		{_BSF_AIcount = _BSF_AIcount + 1;};
		case "Occupation": 	{_BSF_OccupationCount = _BSF_OccupationCount + 1;};
		case "DMS": 		{_BSF_DMS_Count = _BSF_DMS_Count + 1;};
		case "VEMFr": 		{_BSF_VEMFrCount = _BSF_VEMFrCount + 1;};
		case "Reborn": 		{_BSF_RebornCount = _BSF_RebornCount + 1;};
		case "RyanZombie": 	{_BSF_RyanZombieCount = _BSF_RyanZombieCount + 1;};
		case "SMZombz": 	{_BSF_SMZombzCount = _BSF_SMZombzCount + 1;};
		};
} foreach allUnits;

{
	_BSF_SpawnedBy = _x getVariable ['BSF_SpawnedBy', ''];
	switch	(_BSF_SpawnedBy) do {
		case "A3XAI": 		{_BSF_A3XAIcount = _BSF_A3XAIcount + 1;};
		case "BSF": 		{_BSF_AIcount = _BSF_AIcount + 1;};
		case "Occupation": 	{_BSF_OccupationCount = _BSF_OccupationCount + 1;};
		case "DMS": 		{_BSF_DMS_Count = _BSF_DMS_Count + 1;};
		case "VEMFr": 		{_BSF_VEMFrCount = _BSF_VEMFrCount + 1;};
		case "Reborn": 		{_BSF_RebornCount = _BSF_RebornCount + 1;};
		case "RyanZombie": 	{_BSF_RyanZombieCount = _BSF_RyanZombieCount + 1;};
		case "SMZombz": 	{_BSF_SMZombzCount = _BSF_SMZombzCount + 1;};
		};
} foreach agents;

diag_log format["BSF_Server_AI_Monitor - A3XAI:%1 -- BSF:%2 -- Occupation:%3 -- DMS:%4 -- VEMFr:%5 -- REBORN:%6 -- RyanZombie:%7 -- SMZombs:%8",_BSF_A3XAIcount,_BSF_AIcount,_BSF_OccupationCount,_BSF_DMS_Count,_BSF_VEMFrCount,_BSF_RebornCount,_BSF_RyanZombieCount,_BSF_SMZombzCount];



