/**
 * Author; StokesMagee
 * Website; www.stokesmagee.net
 * Copyright; © 2017 StokesMagee
 *
 * This work is property of StokesMagee. You do not have permissions to use/edit/distribute any of this content
 * without written permission from StokesMagee.
 */

params ["_player","_type"];
private _zone = -2;
private _zombiesToSpawn = 0;
private _minDistance = 0;
private _maxDistance = 0;
private _zombieMinDistance = 0;
private _zombieMaxDistance = 0;
private _zombieClasses = [];
private _maxZombies = 0;
private _spawnDelay = 0;

switch (toLower _type) do
{
	case "zombie":
	{

		private _inTown = _player call SM_IsPlayerInTown;
		private _inZone = false;
		if (SM_ZombieZonesEnabled) then
		{
			{
				if ((_player distance2D (_x select 0)) <= (_x select 1)) exitWith
				{
					_inZone = true;
					_zone = _forEachIndex;
				};
			} forEach SM_ZombieZones;
		};

		switch (true) do
		{
			case (_inZone):
			{
				private _zoneData = SM_ZombieZones select _zone;
				_zombiesToSpawn = _zoneData select 2;
				_minDistance = _zoneData select 3;
				_maxDistance = _zoneData select 4;
				_zombieMinDistance = _zoneData select 5;
				_zombieMaxDistance = _zoneData select 6;
				_maxZombies = _zoneData select 16;
				_spawnDelay = _zoneData select 17;
				_zombieClasses = _zoneData select 18;
				if (_zombieClasses isEqualTo [] || _zombieClasses isEqualTo [[],[]]) then
				{
					_zombieClasses = SM_ZombieClasses;
				};
			};
			case (_inTown && {((!_inZone && {SM_ZombiesCanSpawnRandomly}) || {!SM_ZombieZonesEnabled})}):
			{
				_minDistance = SM_ZombieMinDistanceTown;
				_maxDistance = SM_ZombieMaxDistanceTown;
				_zombieMinDistance = SM_ZombieSpawnMaxDistanceFromPositionTown;
				_zombieMaxDistance = SM_ZombieSpawnMinDistanceFromPositionTown;
				_zombiesToSpawn = SM_ZombiesPerWaveTown;
				_maxZombies = SM_ZombiesPerPlayerInTown;
				_zombieClasses = SM_ZombieClassesTown;
				_spawnDelay = SM_RespawnDelayForPlayerTown;

				if (_zombieClasses isEqualTo [] || _zombieClasses isEqualTo [[],[]]) then
				{
					_zombieClasses = SM_ZombieClasses;
				};
			};
			case (!_inTown && {((!_inZone && {SM_ZombiesCanSpawnRandomly}) || {!SM_ZombieZonesEnabled})} && {!SM_TownsOnly}):
			{
				_minDistance = SM_ZombieMinDistance;
				_maxDistance = SM_ZombieMaxDistance;
				_zombieMinDistance = SM_ZombieSpawnMinDistanceFromPosition;
				_zombieMaxDistance = SM_ZombieSpawnMaxDistanceFromPosition;
				_zombiesToSpawn = SM_ZombiesPerWave;
				_maxZombies = SM_ZombiesPerPlayer;
				_zombieClasses = SM_ZombieClasses;
				_spawnDelay = SM_RespawnDelayForPlayer;			
			};
		};
	};
	case "horde":
	{
		private _inTown = _player call SM_IsPlayerInTown;
		private _inZone = false;
		if (SM_HordeZonesEnabled) then
		{
			if (SM_HordeUseZombieZones) then
			{
				{
					if ((_player distance2D (_x select 0)) <= (_x select 1)) exitWith
					{
						_inZone = true;
						_zone = _forEachIndex;
					};
				} forEach SM_ZombieZones;
			}
			else
			{
				{
					if ((_player distance2D (_x select 0)) <= (_x select 1)) exitWith
					{
						_inZone = true;
						_zone = _forEachIndex;
					};
				} forEach SM_HordeZones;
			};
		};

		switch (true) do
		{
			case (_inZone):
			{
				if (SM_HordeUseZombieZones) then
				{
					private _zoneData = SM_ZombieZones select _zone;
					_zombiesToSpawn = _zoneData select 2;
					_minDistance = _zoneData select 3;
					_maxDistance = _zoneData select 4;
					_zombieMinDistance = _zoneData select 5;
					_zombieMaxDistance = _zoneData select 6;
					_maxZombies = _zoneData select 16;
					_spawnDelay = _zoneData select 17;
					_zombieClasses = _zoneData select 18;
					if (_zombieClasses isEqualTo [] || _zombieClasses isEqualTo [[],[]]) then
					{
						_zombieClasses = SM_HordeClasses;
					};
				}
				else
				{
					_zoneData = SM_ZombieZones select _zone;
					_zombiesToSpawn = _zoneData select 6;
					_minDistance = _zoneData select 2;
					_maxDistance = _zoneData select 3;
					_zombieMinDistance = _zoneData select 4;
					_zombieMaxDistance = _zoneData select 5;
					_maxZombies = _zoneData select 7;
					_zombieClasses = _zoneData select 17;
					if (_zombieClasses isEqualTo [] || _zombieClasses isEqualTo [[],[]]) then
					{
						_zombieClasses = SM_HordeClasses;
					};
				};
			};
			case (_inTown && {((!_inZone && {SM_ZombiesCanSpawnRandomly}) || {!SM_HordeZonesEnabled})}):
			{
				_minDistance = SM_HordeMinDistanceTown;
				_maxDistance = SM_HordeMaxDistanceTown;
				_zombieMinDistance = SM_HordeSpawnMinDistanceFromPositionTown;
				_zombieMaxDistance = SM_HordeSpawnMaxDistanceFromPositionTown;
				_zombiesToSpawn = (round (random SM_MaxZombiesInHordeTown)) max SM_MinZombiesInHordeTown;
				
				_zombieClasses = SM_HordeClassesTown;
				if (_zombieClasses isEqualTo [] || _zombieClasses isEqualTo [[],[]]) then
				{
					_zombieClasses = SM_HordeClassesTown;
				};
			};
			case (!_inTown && {((!_inZone && {SM_ZombiesCanSpawnRandomly}) || {!SM_HordeZonesEnabled})}):
			{
				_minDistance = SM_HordeMinDistance;
				_maxDistance = SM_HordeMaxDistance;
				_zombieMinDistance = SM_HordeSpawnMinDistanceFromPosition;
				_zombieMaxDistance = SM_HordeSpawnMaxDistanceFromPosition;
				_zombiesToSpawn = (round (random SM_MaxZombiesInHorde)) max SM_MinZombiesInHorde;
				
				_zombieClasses = SM_HordeClasses;
				if (_zombieClasses isEqualTo [] || _zombieClasses isEqualTo [[],[]]) then
				{
					_zombieClasses = SM_HordeClasses;
				};		
			};
		};
	};
};

[_zombiesToSpawn, _minDistance, _maxDistance, _zombieMinDistance, _zombieMaxDistance, _zombieClasses, _maxZombies, _spawnDelay, _zone]