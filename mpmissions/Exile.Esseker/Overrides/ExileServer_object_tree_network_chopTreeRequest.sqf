/**
 * ExileServer_object_tree_network_chopTreeRequest
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_sessionId", "_parameters", "_treeNetId", "_tree", "_isTree", "_player", "_treeHeight", "_newDamage", "_treePosition", "_spawnRadius", "_weaponHolders", "_weaponHolder", "_weaponHolderPosition"];
_sessionId = _this select 0;
_parameters = _this select 1;
_treeNetId = _parameters select 0;
	
///////////////////////////////////
//////Chop Trees Into Vehicles/////
///////////////////////////////////
_woodText = "Wood dropped in your Area!";
_woodVehicleText = "Wood was put inside your Vehicle!";
_woodVehicleFullText = "Wood dropped in your Area! Vehicle is Full!";
///////////////////////////////////

try 
{
	_tree = objectFromNetId _treeNetId;
	if (isNull _tree) then 
	{
		throw format ["Cannot chop unknown tree! %1", _treeNetId];
	};
	if !(alive _tree) then 
	{
		throw "Cannot chop already chopped tree!";
	};
	_isTree = [_tree, "WoodSource"] call ExileClient_util_model_isInteraction;
	if !(_isTree) then 
	{
		throw "Can only chop down trees, dumb ass!";
	};
	_player = _sessionId call ExileServer_system_session_getPlayerObject;
	if (isNull _player) then 
	{
		throw "Unknown players cannot chop trees!";
	};
	if !(alive _player) then 
	{
		throw "The dead cannot chop down trees!";
	};
	if ((_player distance _tree) > 30) then 
	{
		throw "No long distance tree chopping! Nope!";
	};
	_treeHeight = _tree call ExileClient_util_model_getHeight;
	_treeHeight = _treeHeight max 1; 
	_newDamage = ((damage _tree) + (1 / (floor _treeHeight) )) min 1;
	_tree setDamage _newDamage; 
	if (_newDamage isEqualTo 1) then
	{
		_tree setDamage 999; 
	};
	
///////////////////////////////////
//////Chop Trees Into Vehicles/////
///////////////////////////////////

    		_BSF_Harvest_Vehicles = BSF_Harvest_Vehicles;
            _nearestTruck = (getPosATL _tree) nearEntities[_BSF_Harvest_Vehicles, 50];
						
            _weaponHolder = objNull;
            if ((count _nearestTruck > 0)) then
            {
                _truck = _nearestTruck select 0;
                if (_truck canAdd "Exile_Item_WoodLog") then
                    {
                    _truck addMagazineCargoGlobal ["Exile_Item_WoodLog", 1];
						[_sessionID, "toastRequest", ["SuccessTitleOnly", [_woodVehicleText]]] call ExileServer_system_network_send_to;
                    }
                    else
                    {
                        _treePosition = getPosATL _tree;
                        _treePosition set[2, 0];
                        _spawnRadius = 3;
                        _weaponHolders = nearestObjects[_treePosition, ["GroundWeaponHolder"], _spawnRadius];
                        _weaponHolder = objNull;
                        if (_weaponHolders isEqualTo []) then
                        {
                            _weaponHolderPosition = [_treePosition, _spawnRadius] call ExileClient_util_math_getRandomPositionInCircle;
                            _weaponHolderPosition set [2, 0];
                            _weaponHolder = createVehicle ["GroundWeaponHolder", _weaponHolderPosition, [], 0, "CAN_COLLIDE"];
                            _weaponHolder setPosATL _weaponHolderPosition;
                        }
                        else
                        {
                            _weaponHolder = _weaponHolders select 0;
                        };
                        _weaponHolder addMagazineCargoGlobal ["Exile_Item_WoodLog", 1];
						[_sessionID, "toastRequest", ["SuccessTitleOnly", [_woodVehicleFullText]]] call ExileServer_system_network_send_to;
                    };
            }
            else
            {
			
///////////////////////////////////


	_treePosition = getPosATL _tree;
	_treePosition set[2, 0];
	_spawnRadius = 3;
	_weaponHolders = nearestObjects[_treePosition, ["GroundWeaponHolder"], _spawnRadius];
	_weaponHolder = objNull;
	if (_weaponHolders isEqualTo []) then
	{
		_weaponHolderPosition = [_treePosition, _spawnRadius] call ExileClient_util_math_getRandomPositionInCircle;
		_weaponHolderPosition set [2, 0];
		_weaponHolder = createVehicle ["GroundWeaponHolder", _weaponHolderPosition, [], 0, "CAN_COLLIDE"];
		_weaponHolder setPosATL _weaponHolderPosition;
	}
	else 
	{
		_weaponHolder = _weaponHolders select 0;
	};
	_weaponHolder addMagazineCargoGlobal ["Exile_Item_WoodLog", 1];
	
///////////////////////////////////
//////Chop Trees Into Vehicles/////
///////////////////////////////////
			[_sessionID, "toastRequest", ["SuccessTitleOnly", [_woodText]]] call ExileServer_system_network_send_to;
			};			
///////////////////////////////////

}
catch 
{
	_exception call ExileServer_util_log;
};
true
