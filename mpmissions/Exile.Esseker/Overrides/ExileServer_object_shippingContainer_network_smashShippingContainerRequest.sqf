/**
 * ExileServer_object_shippingContainer_network_smashShippingContainerRequest
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 * Edited by: williamv1999
 */
 
private["_sessionId","_parameters","_shippingContainer","_player","_shippingContainerVolume","_damagePerHit","_newDamage","_shippingContainerPosition","_numberOfItems","_weaponHolder"];
_sessionId = _this select 0;
_parameters = _this select 1;
_shippingContainer = _parameters select 0;

///////////////////////////////////
//////Farm Metal Into Vehicles/////
///////////////////////////////////
_metalText = "Junk Metal dropped in your Area,No Vehicle found in 15 meters!";
_metalVehicleFullText = "Junk Metal dropped in your Area! Vehicle is Full!";
///////////////////////////////////

try 
{
	if (isNull _shippingContainer) then 
	{
		throw format ["Cannot smash unknown shipping container!"];
	};
	if !(alive _shippingContainer) then 
	{
		throw "Cannot smash destroyed shipping container!";
	};
	if !([_shippingContainer, "ShippingContainerSource"] call ExileClient_util_model_isInteraction) then 
	{
		throw "Can only smash shipping containers!";
	};
	_player = _sessionId call ExileServer_system_session_getPlayerObject;
	if (isNull _player) then 
	{
		throw "Unknown players cannot smash shipping containers!";
	};
	if !(alive _player) then 
	{
		throw "The dead cannot smash shipping containers!";
	};
	if ((_player distance _shippingContainer) > 30) then 
	{
		throw "No long distance shipping container smashing! Nope!";
	};
	_shippingContainerVolume = _shippingContainer call ExileClient_util_model_getBoundingBoxVolume;
	if (_shippingContainerVolume < 1) then 
	{
		_shippingContainerVolume = 1;
	};
	_damagePerHit = (1 / (_shippingContainerVolume * 0.5)) min 0.2; 
	_damageContainer = 0;
	_index = -1;
												   
							  
	{
		if (netid _shippingContainer == _x select 0) exitWith
		{
			_damageContainer = _x select 1;
			_index = _forEachIndex;
		};
	}
	forEach ExileShippingContainers;
	_newDamage = (_damageContainer + _damagePerHit) min 1;
	if (_newDamage >= 1) then
	{
///////////////////////////////////
//////Farm Metal Into Vehicles/////
///////////////////////////////////

    	_BSF_Harvest_Vehicles = BSF_Harvest_Vehicles;
		_nearestTruck = (getPosATL _shippingContainer) nearEntities[_BSF_Harvest_Vehicles, 15];

		_weaponHolder = objNull;
	
		if ((count _nearestTruck > 0)) then
		{
            _truck = _nearestTruck select 0;
			if (_truck canAdd "Exile_Item_JunkMetal") then
			{
				_shippingContainerPosition = getPosATL _shippingContainer;
				_shippingContainerPosition set [2, 0];
				hideObjectGlobal _shippingContainer;
				ExileShippingContainers deleteAt _index;
				_numberOfItems = (ceil (_shippingContainerVolume / 10)) max 1;
				format ["Spawning %1 junk metal at %2", _numberOfItems, _truck] call ExileServer_util_log;//Server RPT logging
				_truck addMagazineCargoGlobal ["Exile_Item_JunkMetal", _numberOfItems];
				//_shippingContainer setDamage [999,false];
				
				[_sessionID, "toastRequest", ["SuccessTitleOnly", [format ["%1 Junk metal was put inside your Vehicle!", _numberOfItems]]]] call ExileServer_system_network_send_to;
			}						
	
			else 
			{
				_shippingContainerPosition = getPosATL _shippingContainer;
				_shippingContainerPosition set [2, 0];
				hideObjectGlobal _shippingContainer;
				ExileShippingContainers deleteAt _index;
				_numberOfItems = (ceil (_shippingContainerVolume / 10)) max 1;
				format ["Spawning %1 junk metal at %2", _numberOfItems, _shippingContainerPosition] call ExileServer_util_log;
				_weaponHolder = createVehicle ["GroundWeaponHolder", _shippingContainerPosition, [], 0, "CAN_COLLIDE"];
				_weaponHolder setPosATL _shippingContainerPosition;
				_weaponHolder addMagazineCargoGlobal ["Exile_Item_JunkMetal", _numberOfItems];
				
	  
				[_sessionID, "toastRequest", ["SuccessTitleOnly", [_metalVehicleFullText]]] call ExileServer_system_network_send_to;
			};
		}
		else
		{	
	
			_shippingContainerPosition = getPosATL _shippingContainer;
			_shippingContainerPosition set [2, 0];
			hideObjectGlobal _shippingContainer;
			ExileShippingContainers deleteAt _index;
			_numberOfItems = (ceil (_shippingContainerVolume / 10)) max 1;
			format ["Spawning %1 junk metal at %2", _numberOfItems, _shippingContainerPosition] call ExileServer_util_log;
			_weaponHolder = createVehicle ["GroundWeaponHolder", _shippingContainerPosition, [], 0, "CAN_COLLIDE"];
			_weaponHolder setPosATL _shippingContainerPosition;
			_weaponHolder addMagazineCargoGlobal ["Exile_Item_JunkMetal", _numberOfItems];
										  
	

			[_sessionID, "toastRequest", ["SuccessTitleOnly", [format ["%1 %2",_numberOfItems,_metalText]]]] call ExileServer_system_network_send_to;
		};	
			
		
	}
	else 
	{
		if (_index isEqualTo -1) then
		{
			ExileShippingContainers pushBack [netid _shippingContainer,_newDamage];
		}
		else
		{
			ExileShippingContainers set [_index, [netid _shippingContainer,_newDamage]];
		};
	};
}
catch 
{
	_exception call ExileServer_util_log;
};
true
