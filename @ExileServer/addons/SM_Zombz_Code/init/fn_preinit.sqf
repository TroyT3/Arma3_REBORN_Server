/**
 * Author; StokesMagee
 * Website; www.stokesmagee.net
 * Copyright; © 2017 StokesMagee
 *
 * This work is property of StokesMagee. You do not have permissions to use/edit/distribute any of this content
 * without written permission from StokesMagee.
 */

private["_version"];
_version = getText(configFile >> "CfgPatches" >> "SM_Zombz_code" >> "version");
diag_log format["SM_Zombz %1: Starting preInit!", _version];

if !(isMultiplayer) exitWith {};

_debug = (getNumber(configFile >> "SM_Zombz" >> "SM_Debug")) == 1;
{
	_x params[["_function", ""],["_file", ""]];
	private _code = if(_debug)then{compile preprocessFileLineNumbers _file}else{compileFinal preprocessFileLineNumbers _file};
	missionNamespace setVariable[_function, _code];
} 
forEach 
[
	["SM_SpawnZombies","SM_Zombz_Code\code\server\SM_SpawnZombies.sqf"],
	["SM_Cleanup","SM_Zombz_Code\code\server\SM_Cleanup.sqf"],
	["SM_ZombieLocality","SM_Zombz_Code\code\server\SM_ZombieLocality.sqf"],
	["SM_FindPosition","SM_Zombz_Code\code\server\SM_FindPosition.sqf"],
	["SM_SpawnHorde","SM_Zombz_Code\code\server\SM_SpawnHorde.sqf"],
	["SM_SpawnCheck","SM_Zombz_Code\code\server\SM_SpawnCheck.sqf"],
	["SM_PlayerZombieCount","SM_Zombz_Code\code\server\SM_PlayerZombieCount.sqf"],
	["SM_LootItemGetType","SM_Zombz_Code\code\server\SM_LootItemGetType.sqf"],
	["SM_MPKilled","SM_Zombz_Code\code\server\SM_MPKilled.sqf"],
	["SM_IsPlayerInTown","SM_Zombz_Code\code\server\SM_IsPlayerInTown.sqf"],
	["SM_GetSpawnData","SM_Zombz_Code\code\server\SM_GetSpawnData.sqf"],
	["SM_Network_UpdateLocality","SM_Zombz_Code\code\server\SM_Network_UpdateLocality.sqf"],
	["SM_Network_KillZombie","SM_Zombz_Code\code\server\SM_Network_KillZombie.sqf"],
	["SM_Network_AddGuts","SM_Zombz_Code\code\server\SM_Network_AddGuts.sqf"],
	["SM_Network_HandleDamage","SM_Zombz_Code\code\server\SM_Network_HandleDamage.sqf"],
	["SM_Network_Gut","SM_Zombz_Code\code\server\SM_Network_Gut.sqf"],
	["SM_Network_GutVariable","SM_Zombz_Code\code\server\SM_Network_GutVariable.sqf"],
	["SM_CleanupZombieGuts","SM_Zombz_Code\code\server\SM_CleanupZombieGuts.sqf"],
	["SM_OnZombieDeleted","SM_Zombz_Code\code\server\SM_OnZombieDeleted.sqf"],
	["SM_TransferLocality","SM_Zombz_Code\code\server\SM_TransferLocality.sqf"],
	["SM_GetRandomizationArray","SM_Zombz_Code\code\shared\SM_GetRandomizationArray.sqf"],
	["SM_GetZombieOwner","SM_Zombz_Code\code\server\SM_GetZombieOwner.sqf"]
];

{
	_x params[["_function", ""],["_file", ""]];
	private _code = if(_debug)then{compile preprocessFileLineNumbers _file}else{compileFinal preprocessFileLineNumbers _file};
	missionNamespace setVariable[_function, _code, true];
} forEach 
[
	["SM_ZombieDoMove","SM_Zombz_Code\code\client\SM_ZombieDoMove.sqf"],
	["SM_SetVelocity","SM_Zombz_Code\code\client\SM_SetVelocity.sqf"],
	["SM_SetBlur","SM_Zombz_Code\code\client\SM_SetBlur.sqf"],
	["SM_ZombieFindTarget","SM_Zombz_Code\code\client\SM_ZombieFindTarget.sqf"],
	["SM_ZombieStartAttack","SM_Zombz_Code\code\client\SM_ZombieStartAttack.sqf"],
	["SM_InfectionThread","SM_Zombz_Code\code\client\SM_InfectionThread.sqf"],
	["SM_FetchVehicleSize","SM_Zombz_Code\code\client\SM_FetchVehicleSize.sqf"],
	["SM_ZombieAttackTarget","SM_Zombz_Code\code\client\SM_ZombieAttackTarget.sqf"],
	["SM_ZombieFindPositionTarget","SM_Zombz_Code\code\client\SM_ZombieFindPositionTarget.sqf"],
	["SM_ZombieFindPositionWander","SM_Zombz_Code\code\client\SM_ZombieFindPositionWander.sqf"],
	["SM_ZombieCalculateSpeed","SM_Zombz_Code\code\client\SM_ZombieCalculateSpeed.sqf"],
	["SM_FiredNear","SM_Zombz_Code\code\client\SM_FiredNear.sqf"],
	["SM_Say3D","SM_Zombz_Code\code\client\SM_Say3D.sqf"],
	["SM_BloodEffect","SM_Zombz_Code\code\client\SM_BloodEffect.sqf"],
	["SM_HandleDamage","SM_Zombz_Code\code\client\SM_HandleDamage.sqf"],
	["SM_GutZombie","SM_Zombz_Code\code\client\SM_GutZombie.sqf"],
	["SM_ScreenAddBlood","SM_Zombz_Code\code\client\SM_ScreenAddBlood.sqf"],
	["SM_ScreenRemoveBlood","SM_Zombz_Code\code\client\SM_ScreenRemoveBlood.sqf"],
	["SM_HideBody","SM_Zombz_Code\code\client\SM_HideBody.sqf"],
	["SM_IsInfrontOf","SM_Zombz_Code\code\client\SM_IsInfrontOf.sqf"],
	["SM_ZombieFindFiredNear","SM_Zombz_Code\code\client\SM_ZombieFindFiredNear.sqf"],
	["SM_Network_ExplodeHead","SM_Zombz_Code\code\client\SM_Network_ExplodeHead.sqf"],
	["SM_Network_Notification","SM_Zombz_Code\code\client\SM_Network_Notification.sqf"],
	["SM_Network_RemoveGuts","SM_Zombz_Code\code\client\SM_Network_RemoveGuts.sqf"],
	["SM_Action_UseHeart","SM_Zombz_Code\code\client\SM_Action_UseHeart.sqf"],
	["SM_Action_useImmunity","SM_Zombz_Code\code\client\SM_Action_useImmunity.sqf"],
	["SM_Action_UseCure","SM_Zombz_Code\code\client\SM_Action_UseCure.sqf"],
	["SM_ConfigFetch","SM_Zombz_Code\code\shared\SM_ConfigFetch.sqf"],
	["SM_Util_Log","SM_Zombz_Code\code\shared\SM_Util_Log.sqf"],
	["SM_SetZombieVariables","SM_Zombz_Code\code\shared\SM_SetZombieVariables.sqf"],
	["SM_IsSafezoneNear","SM_Zombz_Code\code\shared\SM_IsSafezoneNear.sqf"],
	["SM_BaseAreaCheck","SM_Zombz_Code\code\shared\SM_BaseAreaCheck.sqf"],
	["SM_ArrayShuffle","SM_Zombz_Code\code\shared\SM_ArrayShuffle.sqf"],
	["SM_DisableAI","SM_Zombz_Code\code\shared\SM_DisableAI.sqf"],
	["SM_System_AddTask","SM_Zombz_Code\code\system\SM_System_AddTask.sqf"],
	["SM_HandleZombieSpawns","SM_Zombz_Code\code\shared\SM_HandleZombieSpawns.sqf"],
	["SM_SelectRandom","SM_Zombz_Code\code\shared\SM_SelectRandom.sqf"],
	["SM_LocalityChange","SM_Zombz_Code\code\shared\SM_LocalityChange.sqf"],
	["SM_Network_SendMessage","SM_Zombz_Code\code\shared\SM_Network_SendMessage.sqf"],
	["SM_Network_HandleMessage","SM_Zombz_Code\code\shared\SM_Network_HandleMessage.sqf"]
];

SM_Debug =  ["SM_Debug", false] call SM_ConfigFetch;
SM_ExileEnabled = isClass (configFile >> "CfgPatches" >> "exile_client");
publicVariable "SM_Debug";
publicVariable "SM_ExileEnabled";
SM_IdleFSMIsStarting = false;
publicVariable "SM_IdleFSMIsStarting";

{
	_x params ["_variable","_defaultValue"];
	_value = _x call SM_ConfigFetch;
	missionNamespace setVariable [_variable, _value];
} forEach
[
	["SM_ZombieCleanupDeath", 150],
	["SM_ZombieWaveCount", 5],
	["SM_ZombieItemCount", 5],
	["SM_ZombieSpawnDelay", 60],
	["SM_ZombieMaxDistance", 150],
	["SM_ZombieMinDistance", 25],
	["SM_ZombieCleanup", 60],
	["SM_ZombieCleanupDistance", 300],
	["SM_MaxZombies", 200],
	["SM_ZombiesPerPlayer", 10],
	["SM_ZombieHealth", 0.7],
	["SM_GiveZombiePoptabs", true],
	["SM_MaxPoptabs", 50],
	["SM_PopTabsChance", 65],
	["SM_GivePlayerRespect", true],
	["SM_MaxRespect", 50],
	["SM_ChanceOfLoot", 25],
	["SM_MaxItemDrop", 3],
	["SM_ZombieClasses", []],
	["SM_Zombie_GlowingFace", true],
	["SM_ExplodingHeadEnabled", false],
	["SM_MaxZombiesInHorde", 69],
	["SM_SpawnHordeChance", 2.5],
	["SM_HordesEnabled", true],
	["SM_HordeSpawnDelay", 120],
	["SM_HordeMarkerCleanup", 120],
	["SM_MinZombiesInHorde", 10],
	["SM_ZombieSpawnMaxDistanceFromPosition", 15],
	["SM_HordeSpawnMaxDistanceFromPosition", 35],
	["SM_ZombieSpawnMaxDistanceFromPositionTown", 10],
	["SM_ZombieSpawnMinDistanceFromPositionTown", 5],
	["SM_ZombieMinDistanceTown", 25],
	["SM_ZombieMaxDistanceTown", 100],
	["SM_ZombiesPerWave", 5],
	["SM_HordeMarkerEnabled", true],
	["SM_HordeNotificationEnabled", true],
	["SM_DespawnZombieOrKill", true],
	["SM_HordeNotificationText", ""],
	["SM_HordeMarkerType", 1],
	["SM_HordeMarkerCleanupEnabled", true],
	["SM_HordeMarkerText", ""],
	["SM_HordeMarkerStyle", ""],
	["SM_HordeMarkerColor", ""],
	["SM_ZombiesPerWaveTown", 7],
	["SM_ZombiesPerPlayerInTown", 15],
	["SM_SearchForTownRadius", 1000],
	["SM_TownSearchTypes", []],
	["SM_MaxCrypto", 50],
	["SM_GiveCrypto", true],
	["SM_UserSafezoneCheckMarkerObjects", ""],
	["SM_UserSafezoneCheck", false],
	["SM_UserSafezoneCheckType", 1],
	["SM_UserSafezoneCheckDistance", 50],
	["SM_UserBaseCheck", false],
	["SM_UserBaseCheckMarkerObjects", ""],
	["SM_UserBaseCheckType", 1],
	["SM_UserBaseCheckDistance", 50],
	["SM_NotificationEnabled", true],
	["SM_ZombieGutsLength", 300],
	["SM_FacesArray", []],
	["SM_FaceFemaleArray", []],
	["SM_ZombieZones", []],
	["SM_ZombieZonesEnabled", false],
	["SM_ZombiesCanSpawnRandomly", false],
	["SM_RespawnDelayForPlayerEnabled", true],
	["SM_RespawnDelayForPlayer", 300],
	["SM_ZombieSpawnMinDistanceFromPosition", 5],
	["SM_HordeSpawnMinDistanceFromPosition", 5],
	["SM_RespawnDelayForPlayerTown", 420],
	["SM_ZombieClassesTown", []],
	["SM_TownSearchEnabled", false],
	["SM_DisableZombieSpawnsUntilInNewZoneEnabled", false],
	["SM_HordeZonesEnabled", false],
	["SM_HordeUseZombieZones", false],
	["SM_HordeZones", []],
	["SM_HordeCanSpawnRandomly", false],
	["SM_HordeMinDistanceTown", 5],
	["SM_HordeMaxDistanceTown", 100],
	["SM_HordeSpawnMinDistanceFromPositionTown", 5],
	["SM_HordeSpawnMaxDistanceFromPositionTown", 100],
	["SM_MaxZombiesInHordeTown", 50],
	["SM_MinZombiesInHordeTown", 5],
	["SM_HordeClassesTown", []],
	["SM_HordeClasses", []],
	["SM_HordeMinDistance", 10],
	["SM_HordeMaxDistance", 150],
	["SM_TownsOnly", false],
	["SM_ExileSearchForBaseMaxRange", false]
];
SM_LootArray = call 
{
	if (SM_ExileEnabled) exitWith { ["SM_LootItemsExile", []] call SM_ConfigFetch };
	["SM_LootItems", []] call SM_ConfigFetch
};

SM_LootArray = SM_LootArray call SM_GetRandomizationArray;
SM_ZombieClasses = SM_ZombieClasses call SM_GetRandomizationArray;
SM_ZombieClassesTown = SM_ZombieClassesTown call SM_GetRandomizationArray;
SM_HordeClassesTown = SM_HordeClassesTown call SM_GetRandomizationArray;
SM_HordeClasses = SM_HordeClasses call SM_GetRandomizationArray;
SM_FacesArray = SM_FacesArray call SM_GetRandomizationArray;
SM_FaceFemaleArray = SM_FaceFemaleArray call SM_GetRandomizationArray;

SM_CurrentZombiesSpawned = [];
DeadZombieBodys = [];
SM_CurrentZombieCount = 0;

ZombieCleanupThreadID = [SM_ZombieCleanup, SM_Cleanup, [], true, "Zombie Cleanup"] call SM_System_AddTask;
ZombieLocalityThreadID = [SM_ZombieCleanup, SM_ZombieLocality, [], true, "Zombie Locality"] call SM_System_AddTask;
ZombieSpawnThreadID = [SM_ZombieSpawnDelay, SM_SpawnZombies, [], true, "Zombie Spawn"] call SM_System_AddTask;

if (SM_HordesEnabled) then
{
	ZombieHordeThreadID = [SM_HordeSpawnDelay, SM_SpawnHorde, [], true, "Zombie Horde Spawn"] call SM_System_AddTask;
};


if (SM_ZombieZonesEnabled) then
{
	{
		if ((_x select 9) isEqualTo 1) then
		{
			private _markerName = format["SM_ZombieZone_%1",random 10000 + diag_tickTime];
			private _marker = createMarker [_markerName,(_x select 0)];
			_marker setMarkerBrush (_x select 14);
			_marker setMarkerAlpha (_x select 13);
			_marker setMarkerColor (_x select 12);
			_marker setMarkerShape (_x select 10);
			_marker setMarkerSize [(_x select 1),(_x select 1)];
		};

		if ((_x select 8) isEqualTo 1) then
		{
			private _markerName = format["SM_ZombieZone_%1",random 10000 + diag_tickTime];
			private _marker = createMarker [_markerName,(_x select 0)];
			_marker setMarkerText (_x select 11);
			_marker setMarkerType (_x select 7);
			_marker setMarkerAlpha (_x select 15);
		};
	} forEach SM_ZombieZones;
};

if (SM_HordeZonesEnabled) then
{
	{
		if ((_x select 10) isEqualTo 1) then
		{
			private _markerName = format["SM_ZombieZone_%1",random 10000 + diag_tickTime];
			private _marker = createMarker [_markerName,(_x select 0)];
			_marker setMarkerBrush (_x select 15);
			_marker setMarkerAlpha (_x select 14);
			_marker setMarkerColor (_x select 13);
			_marker setMarkerShape (_x select 11);
			_marker setMarkerSize [(_x select 1),(_x select 1)];
		};

		if ((_x select 9) isEqualTo 1) then
		{
			private _markerName = format["SM_ZombieZone_%1",random 10000 + diag_tickTime];
			private _marker = createMarker [_markerName,(_x select 0)];
			_marker setMarkerText (_x select 12);
			_marker setMarkerType (_x select 8);
			_marker setMarkerAlpha (_x select 16);
		};
	} forEach SM_HordeZones;
};

{
	_x params ["_variable","_defaultValue",["_random", false]];
	_value = _x call SM_ConfigFetch;
	if (_random) then
	{
		_value = _value call SM_GetRandomizationArray;
	};
	missionNamespace setVariable [_variable, _value, true];
} forEach
[
	["SM_SoundDistance", 30],
	["SM_ZombieDamagePlayer", 0.15],
	["SM_ZombieDamagePlayerStrength", 1],
	["SM_ZombieDamageCarStrength", 1.5],
	["SM_ZombieDamageCar",0.02],
	["SM_PoptabChanceHigh", 100],
	["SM_MaxRespect", 50],
	["SM_SoundVolume", 1],
	["SM_AttackSpeed", 0.8],
	["SM_BleedingEnabled", true],
	["SM_BleedTime", 20],
	["SM_BleedChance", 25],
	["SM_ZombieTargetPosMemory", 7.5],
	["SM_ZombieSoundDelayAggressive", 3],
	["SM_ZombieSoundDelayMoan", 15],
	["SM_ZombieFindTargetDelay", 1],
	["SM_ZombieEat", 30],
	["SM_InfectionIncrease", 0.25],
	["SM_Infection", true],
	["SM_InfectionChance", 25],
	["SM_InfectionDamage", 0.01],
	["SM_InfectionDelay", 2],
	["SM_ZombieEatSoundDelay", 7],
	["SM_ZombieSpeedMultiplyer", 2.5],
	["SM_ZombieSpeedDistance", 35],
	["SM_ZombieSpeedIncreaseEnabled", true],
	["SM_ZombiesFastClose", false],
	["SM_MultiplierDistanceFromTarget", 1.5],
	["SM_Zombie_SpawnInGround", true],
	["SM_AttackArray", [], true],
	["SM_AggressiveArray", [], true],
	["SM_EatingArray", [], true],
	["SM_MoanArray", [], true],
	["SM_ScreamArray", [], true],
	["SM_VehicleHitArray", [], true],
	["SM_ZombieBiteArray", []],
	["SM_ZombieInBuildingSpeedDevidor", 3],
	["SM_FiredNearEVHEnabled", true],
	["SM_UserSafezoneCheckMarkerObjects", ""],
	["SM_UserSafezoneCheck", false],
	["SM_UserSafezoneCheckType", 1],
	["SM_UserSafezoneCheckDistance", 50],
	["SM_UserBaseCheck", false],
	["SM_UserBaseCheckMarkerObjects", ""],
	["SM_UserBaseCheckType", 1],
	["SM_UserBaseCheckDistance", 50],
	["SM_NotificatonType", 1],
	["SM_ZombieGutsLength", 300],
	["SM_ScreenEffects", [], true],
	["SM_ExplodingHeadEnabled", true],
	["SM_CustomScreenEffects", false],
	["SM_SetVelocityOnHit", false],
	["SM_ZombieIdleDelay", 3],
	["SM_ImmunityLength", 420],
	["SM_FSM_BrainPath", ""],
	["SM_FSM_ManagerPath", ""],
	["SM_ExileSearchForBaseMaxRange", false],
	["SM_ExplodeHeadArray", [], true]
];

[[],{
	SM_IdleZombies = [];
	if (SM_Infection) then
	{
		SM_InfectionThreadID = [SM_InfectionDelay,SM_InfectionThread,[],true,"Infection thread, deals the damage"] call SM_System_AddTask;
	};
}] remoteExecCall ["call", -2, true];

diag_log format["SM_Zombz %1: Finished preInit!", _version];

true
