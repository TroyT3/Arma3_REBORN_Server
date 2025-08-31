/*
* BSF_Client_AssetManagement_GetVehicleInventory
* \BSF_Client\code\BSF_Client_AssetManagement_GetVehicleInventory.sqf
* 
* BS-Free Game Servers
* www.bs-free.com
* © 2023 Troy - BS-Free
*
* This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
* To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
*/

params ["_vehicleID"];
private ["_cargo_itemsCount", "_cargo_itemsIndex", "_item", "_itemCount", "_curItemCount", "_cargo_magazinesCount", "_cargo_magazinesIndex", "_cargo_WeaponCount", "_cargo_Weapon", "_cargo_WeaponIndex", "_cargo_containerCount", "_cargo_containerIndex"];

["BSF_Client_AssetManagement_GetVehicleInventory START"] call BSF_Client_Util_Debug;

_thisVehicle = BSF_PlayerVehicles get _vehicleID;
_thisVehicle params ["_vehID","_ownerUID","_vehClass","_vehName","_territoryID","_territoryName","_isLocked","_fuel","_damage","_pin_code","_position_x","_position_y","_position_z","_cargo_items","_cargo_magazines","_cargo_weapons","_cargo_container","_money","_hitPoints","_clanID","_clanName","_ownerName","_vehObject"];
// _thisVehicle params ["_vehID","_ownerUID","_vehClass","_vehName","_territoryID","_territoryName","_isLocked","_fuel","_damage","_pin_code","_position_x","_position_y","_position_z","_cargo_items","_cargo_magazines","_cargo_weapons","_cargo_container","_money","_clanID","_clanName","_ownerName","_vehObject"];
// _thisVehicle params ["_vehID","_ownerUID","_vehClass","_vehName","_territoryID","_isLocked","_fuel","_damage","_pin_code","_position_x","_position_y","_position_z","_cargo_items","_cargo_magazines","_cargo_weapons","_cargo_container","_money","_vehObject"];

if (typeName _territoryID isEqualTo "STRING") then {
		_cargo_items = getItemCargo _vehObject;

		_cargo_magazines = [];
			{
				_thisItem = _x;
				_cargo_magazines pushBack [_thisItem,1];
			} forEach magazineCargo _vehObject;
		// diag_log format["_cargo_magazines: %1",_cargo_magazines];

		_cargo_weapons = [];
			{
				_thisItem = _x;
				_cargo_weapons pushBack [_thisItem,1];
			} forEach weaponCargo _vehObject;
		// diag_log format["_cargo_weapons: %1",_cargo_weapons];

		_cargo_container = [];
			{
				_thisItem = _x;
				_cargo_container pushBack [_thisItem,1];
			} forEach BackpackCargo _vehObject;
		// diag_log format["_cargo_container: %1",_cargo_container];

		_money = _vehObject getVariable ["ExileMoney",0];
	};

VehicleInventory = createHashMap;
VehicleTabs = _money;

	// diag_log format["BSF_Client_AssetManagement_GetVehicleInventory: START ####################"];
	// diag_log format["BSF_Client_AssetManagement_GetVehicleInventory: _vehID %1, %2",_vehID, typeName _vehID];
	// diag_log format["BSF_Client_AssetManagement_GetVehicleInventory: _ownerUID %1, %2",_ownerUID, typeName _ownerUID];
	// diag_log format["BSF_Client_AssetManagement_GetVehicleInventory: _vehClass %1, %2",_vehClass, typeName _vehClass];
	// diag_log format["BSF_Client_AssetManagement_GetVehicleInventory: _vehName %1, %2",_vehName, typeName _vehName];
	// diag_log format["BSF_Client_AssetManagement_GetVehicleInventory: _territoryID %1, %2",_territoryID, typeName _territoryID];
	// diag_log format["BSF_Client_AssetManagement_GetVehicleInventory: _isLocked %1, %2",_isLocked, typeName _isLocked];
	// diag_log format["BSF_Client_AssetManagement_GetVehicleInventory: _fuel %1, %2",_fuel, typeName _fuel];
	// diag_log format["BSF_Client_AssetManagement_GetVehicleInventory: _damage %1, %2",_damage, typeName _damage];
	// diag_log format["BSF_Client_AssetManagement_GetVehicleInventory: _pin_code %1, %2",_pin_code, typeName _pin_code];
	// diag_log format["BSF_Client_AssetManagement_GetVehicleInventory: _position_x %1, %2",_position_x, typeName _position_x];
	// diag_log format["BSF_Client_AssetManagement_GetVehicleInventory: _position_y %1, %2",_position_y, typeName _position_y];
	// diag_log format["BSF_Client_AssetManagement_GetVehicleInventory: _position_z %1, %2",_position_z, typeName _position_z];
	// diag_log format["BSF_Client_AssetManagement_GetVehicleInventory: _cargo_items %1, %2",_cargo_items, typeName _cargo_items];
	// diag_log format["BSF_Client_AssetManagement_GetVehicleInventory: _cargo_magazines %1, %2",_cargo_magazines, typeName _cargo_magazines];
	// diag_log format["BSF_Client_AssetManagement_GetVehicleInventory: _cargo_weapons %1, %2",_cargo_weapons, typeName _cargo_weapons];
	// diag_log format["BSF_Client_AssetManagement_GetVehicleInventory: _cargo_container %1, %2",_cargo_container, typeName _cargo_container];
	// diag_log format["BSF_Client_AssetManagement_GetVehicleInventory: _money %1, %2",_money, typeName _money];
	// diag_log format["BSF_Client_AssetManagement_GetVehicleInventory: _vehObject %1, %2",_vehObject, typeName _vehObject];
	// diag_log format["BSF_Client_AssetManagement_GetVehicleInventory: END ####################"];


_cargo_itemsCount = count (_cargo_items select 0);
_cargo_itemsIndex = 0;
for "_i" from 1 to _cargo_itemsCount do {
	_item = _cargo_items select 0 select _cargo_itemsIndex;
	_itemCount = _cargo_items select 1 select _cargo_itemsIndex;
	_cargo_itemsIndex = _cargo_itemsIndex + 1;
	VehicleInventory set [_item,_itemCount];
};

// diag_log format["BSF_Client_AssetManagement_GetVehicleInventory: VehicleInventory 1 %1, %2",VehicleInventory, typeName VehicleInventory];

{
	_item = _x select 0;
	if !(_item in VehicleInventory) then 
		{
			VehicleInventory set [_item,1];
		} else
		{
			_curItemCount = VehicleInventory get _item;
			VehicleInventory set [_item, (_curItemCount + 1)];
		};
} forEach _cargo_magazines;

// diag_log format["BSF_Client_AssetManagement_GetVehicleInventory: VehicleInventory 2 %1, %2",VehicleInventory, typeName VehicleInventory];

{
	_item = _x select 0;
	if !(_item in VehicleInventory) then 
		{
			VehicleInventory set [_item,1];
		} else
		{
			_curItemCount = VehicleInventory get _item;
			VehicleInventory set [_item, (_curItemCount + 1)];
		};
} forEach _cargo_weapons;

// diag_log format["BSF_Client_AssetManagement_GetVehicleInventory: VehicleInventory 3 %1, %2",VehicleInventory, typeName VehicleInventory];

{
	_item = _x select 0;
	if !(_item in VehicleInventory) then 
		{
			VehicleInventory set [_item,1];
		} else
		{
			_curItemCount = VehicleInventory get _item;
			VehicleInventory set [_item, (_curItemCount + 1)];
		};
} forEach _cargo_containers;

["BSF_Client_AssetManagement_GetVehicleInventory END"] call BSF_Client_Util_Debug;

true



