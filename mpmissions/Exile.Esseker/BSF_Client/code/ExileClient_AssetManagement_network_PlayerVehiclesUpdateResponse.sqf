// ExileClient_BSF_network_PlayerVehiclesUpdateResponse.sqf
// \BSF_Client\code\


// params  ["_option", "_vehID", "_newTerritoryID","_newVehObject"];
params  ["_data"];
_data params  ["_option", "_vehID", "_newTerritoryID","_newVehObject","_xData"];

// ["InfoTitleAndText", ["PlayerVehiclesUpdateResponse - _this", format["%1", _this]]] call ExileClient_gui_toaster_addTemplateToast;
// ["InfoTitleAndText", ["PlayerVehiclesUpdateResponse - _option", format["%1 - %2", _option, typeName _option]]] call ExileClient_gui_toaster_addTemplateToast;
// ["InfoTitleAndText", ["PlayerVehiclesUpdateResponse - _vehID", format["%1 - %2", _vehID, typeName _vehID]]] call ExileClient_gui_toaster_addTemplateToast;
// ["InfoTitleAndText", ["PlayerVehiclesUpdateResponse - _newTerritoryID", format["%1 - %2", _newTerritoryID, typeName _newTerritoryID]]] call ExileClient_gui_toaster_addTemplateToast;
diag_log format["ExileClient_BSF_network_PlayerVehiclesUpdateResponse: START ####################"];
diag_log format["ExileClient_BSF_network_PlayerVehiclesUpdateResponse _this %1, %2",_this, typeName _this];
diag_log format["ExileClient_BSF_network_PlayerVehiclesUpdateResponse _option %1, %2",_option, typeName _option];
diag_log format["ExileClient_BSF_network_PlayerVehiclesUpdateResponse _vehID %1, %2",_vehID, typeName _vehID];
diag_log format["ExileClient_BSF_network_PlayerVehiclesUpdateResponse _newTerritoryID %1, %2",_newTerritoryID, typeName _newTerritoryID];
diag_log format["ExileClient_BSF_network_PlayerVehiclesUpdateResponse _newVehObject %1, %2",_newVehObject, typeName _newVehObject];
diag_log format["ExileClient_BSF_network_PlayerVehiclesUpdateResponse: END ####################"];

// _fnc_add = {};

switch (_option) do {
	case ("store") : {
		_storedVehicle = BSF_PlayerVehicles get _vehID;
		_storedVehicle params ["_vehID","_ownerUID","_vehClass","_vehName","_territoryID","_territoryName","_isLocked","_fuel","_damage","_pin_code","_position_x","_position_y","_position_z","_cargo_items","_cargo_magazines","_cargo_weapons","_cargo_container","_money","_hitPoints","_clanID","_clanName","_ownerName","_vehObject"];
		_territoryID = _newTerritoryID;
		if (_territoryID isEqualTo "SM") then {_isLocked = 0;} 
		else {_isLocked = _vehObject getVariable ["ExileIsLocked", 0];};
		diag_log format["_storedVehicle: %1",_storedVehicle];
		diag_log format["ExileClient_BSF_network_PlayerVehiclesUpdateResponse: STORE ####################"];
		diag_log format["_territoryID: %1 - %2",_territoryID, typeName _territoryID];

		_fuel = fuel _vehObject;
		_damage = damage _vehObject;
		// _pin_code = _vehObject getVariable ["ExileAccessCode","00000"];
		_cargo_items = getItemCargo _vehObject;
		_cargo_magazines = [];
			{
				_thisItem = _x;
				_cargo_magazines pushBack [_thisItem,1];
			} forEach magazineCargo _vehObject;

		_cargo_weapons = [];
			{
				_thisItem = _x;
				_cargo_weapons pushBack [_thisItem,1];
			} forEach weaponCargo _vehObject;

		_cargo_container = [];
			{
				_thisItem = _x;
				_cargo_container pushBack [_thisItem,1];
			} forEach BackpackCargo _vehObject;

		_money = _vehObject getVariable ["ExileMoney",0];

		switch (_territoryID) do { 
			case "SM" : {
				_position_x = 0;
				_position_y = 0;
				_position_z = 0;
				}; 
			default { 
				_hitpoints = [];
				_allHitPointsArray = getAllHitPointsDamage _vehObject;
				_hitPointsNamesArray = _allHitPointsArray select 0;
				_selectionsNamesArray = _allHitPointsArray select 1;
				_damageValuesArray = _allHitPointsArray select 2;
				{
					_hitPointName = _hitPointsNamesArray select _forEachIndex;
					_damage = _damageValuesArray select _forEachIndex;
					_hitpoints pushback [_hitPointName, _damage];
					diag_log format["DAMAGE: _hitPointName %1 %2",_hitPointName ,_damage];
				} forEach _hitPointsNamesArray;
				diag_log format["DAMAGE: _hitpoints %1",_hitpoints];
			}; 
		};

		_vehObject = objNull;
		BSF_PlayerVehicles deleteAt _vehID;

		if (_territoryID isEqualTo "SM") then {
			_vehID = 9999;
			_hitpoints = _xData;
		};

		BSF_PlayerVehicles set [_vehID,[_vehID,_ownerUID,_vehClass,_vehName,_territoryID,_territoryName,_isLocked,_fuel,_damage,_pin_code,_position_x,_position_y,_position_z,_cargo_items,_cargo_magazines,_cargo_weapons,_cargo_container,_money,_hitpoints,_clanID,_clanName,_ownerName,_vehObject]];
	};

	case ("fetch") : { // VG Integration put on hold due to questions about including clan vehicles
		diag_log format["ExileClient_BSF_network_PlayerVehiclesUpdateResponse: FETCH ####################"];
		_fetchedVehicle = BSF_PlayerVehicles get _vehID;
		_fetchedVehicle params ["_vehID","_ownerUID","_vehClass","_vehName","_territoryID","_territoryName","_isLocked","_fuel","_damage","_pin_code","_position_x","_position_y","_position_z","_cargo_items","_cargo_magazines","_cargo_weapons","_cargo_container","_money","_hitPoints","_clanID","_clanName","_ownerName","_vehObject"];
		_vehObject = _newVehObject;
		_territoryID = "";
		_territoryName = "";
		_pin_code = _vehObject getVariable ["ExileAccessCode","00000"];

		_position = position _vehObject;
		_position_x = _position select 0;
		_position_y = _position select 1;
		_position_z = _position select 2;

		_hitpoints = [];
		// _allHitPointsArray = getAllHitPointsDamage _vehObject;
		// _hitPointsNamesArray = _allHitPointsArray select 0;
		// _selectionsNamesArray = _allHitPointsArray select 1;
		// _damageValuesArray = _allHitPointsArray select 2;
		// diag_log format["DAMAGE: _hitPointsNamesArray %1",_hitPointsNamesArray];
		// diag_log format["DAMAGE: _selectionsNamesArray %1",_selectionsNamesArray];
		// diag_log format["DAMAGE: _damageValuesArray %1",_damageValuesArray];
		// {
		// 	_hitPointName = _hitPointsNamesArray select _forEachIndex;
		// 	_damage = _damageValuesArray select _forEachIndex;
		// 	_hitpoints pushback [_hitPointName, _damage];
		// 	diag_log format["DAMAGE: _hitPointName %1 %2",_hitPointName ,_damage];
		// } forEach _hitPointsNamesArray;
		// diag_log format["DAMAGE: _hitpoints %1",_hitpoints];

		BSF_PlayerVehicles deleteAt _vehID;
		BSF_PlayerVehicles set [_vehID,[_vehID,_ownerUID,_vehClass,_vehName,_territoryID,_territoryName,_isLocked,_fuel,_damage,_pin_code,_position_x,_position_y,_position_z,_cargo_items,_cargo_magazines,_cargo_weapons,_cargo_container,_money,_hitpoints,_clanID,_clanName,_ownerName,_vehObject]];

		// _thisVehicle params ["_vehID","_ownerUID","_vehClass","_vehName","_territoryID","_territoryName","_isLocked","_fuel","_damage","_pin_code","_position_x","_position_y","_position_z","_cargo_items","_cargo_magazines","_cargo_weapons","_cargo_container","_money","_hitPoints","_clanID","_clanName","_ownerName","_vehObject"];
		// BSF_PlayerVehicles set [_vehID,[_vehID,_ownerUID,_vehClass,_vehName,_territoryID,_territoryName,_isLocked,_fuel,_damage,_pin_code,_position_x,_position_y,_position_z,_cargo_items,_cargo_magazines,_cargo_weapons,_cargo_container,_money,_hitpoints,_clanID,_clanName,_ownerName,_vehObject]];

		diag_log format["_fetchedVehicle: %1",_fetchedVehicle];
		};

	case ("add") : {
		diag_log format["ExileClient_BSF_network_PlayerVehiclesUpdateResponse: ADD ####################"];
		_vehObject = _newVehObject;
		_ownerUID = _vehObject getVariable ["ExileOwnerUID",""];
		_vehClass = typeOf _vehObject;
		_vehName = VehicleNameMap getOrDefault [_vehClass, "Name Not Available"]; // HashMap created in 'BSF_Server\bootstrap\fn_preInit.sqf
		_territoryID = "";
		_territoryName = "";
		_isLocked = _vehObject getVariable ["ExileIsLocked",-1];
		_fuel = fuel _vehObject;
		_damage = damage _vehObject;
		_pin_code = _vehObject getVariable ["ExileAccessCode","00000"];
		_position = position _vehObject;
		_position_x = _position select 0;
		_position_y = _position select 1;
		_position_z = _position select 2;
		_cargo_items = getItemCargo _vehObject;
		_cargo_magazines = [];
			{
				_thisItem = _x;
				_cargo_magazines pushBack [_thisItem,1];
			} forEach magazineCargo _vehObject;
		diag_log format["_cargo_magazines: %1",_cargo_magazines];
		_cargo_weapons = [];
			{
				_thisItem = _x;
				_cargo_weapons pushBack [_thisItem,1];
			} forEach weaponCargo _vehObject;
		diag_log format["_cargo_weapons: %1",_cargo_weapons];
		_cargo_container = [];
			{
				_thisItem = _x;
				_cargo_container pushBack [_thisItem,1];
			} forEach BackpackCargo _vehObject;
		diag_log format["_cargo_container: %1",_cargo_container];
		_money = _vehObject getVariable ["ExileMoney",0];

		_clanID = 0;
		_clanName = "";
		_ownerName = "";

		_hitpoints = [];
		// _allHitPointsArray = getAllHitPointsDamage _vehObject;
		// _hitPointsNamesArray = _allHitPointsArray select 0;
		// _selectionsNamesArray = _allHitPointsArray select 1;
		// _damageValuesArray = _allHitPointsArray select 2;
		// diag_log format["DAMAGE: _hitPointsNamesArray %1",_hitPointsNamesArray];
		// diag_log format["DAMAGE: _selectionsNamesArray %1",_selectionsNamesArray];
		// diag_log format["DAMAGE: _damageValuesArray %1",_damageValuesArray];
		// {
		// 	_hitPointName = _hitPointsNamesArray select _forEachIndex;
		// 	_damage = _damageValuesArray select _forEachIndex;
		// 	_hitpoints pushback [_hitPointName, _damage];
		// 	diag_log format["DAMAGE: _hitPointName %1 %2",_hitPointName ,_damage];
		// } forEach _hitPointsNamesArray;
		// diag_log format["DAMAGE: _hitpoints %1",_hitpoints];

		BSF_PlayerVehicles set [_vehID,[_vehID,_ownerUID,_vehClass,_vehName,_territoryID,_territoryName,_isLocked,_fuel,_damage,_pin_code,_position_x,_position_y,_position_z,_cargo_items,_cargo_magazines,_cargo_weapons,_cargo_container,_money,_hitpoints,_clanID,_clanName,_ownerName,_vehObject]];
	};

	case ("delete") : {
		diag_log format["ExileClient_BSF_network_PlayerVehiclesUpdateResponse: DELETE ####################"];
		diag_log format["PlayerVehiclesUpdateResponse DELETE _this %1",_this];
		diag_log format["PlayerVehiclesUpdateResponse DELETE _vehID %1 - %2",_vehID, typeName _vehID];
		BSF_PlayerVehicles deleteAt _vehID;
	};

	default {
		diag_log format["ExileClient_BSF_network_PlayerVehiclesUpdateResponse: DEFAULT ####################"];
	 };	
};



// diag_log format["BSF_PlayerVehicles %1",BSF_PlayerVehicles];

// _option = "delete";
// _vehID = 9;
// _territoryID = 17;
// _vehObject = objNull;
// ["xhzhwojo", "PlayerVehiclesUpdateResponse", [_option, _vehID, _territoryID, _object]] call ExileServer_system_network_send_to;




// /////////////////////////////  This works:
// 	class PlayerVehiclesUpdateResponse
// 		{
// 			module = "BSF";
// 			parameters[] = {"STRING","SCALAR","SCALAR","OBJECT"};
// 		};

// _option = "delete"; 	// STRING "store", "fetch", "add", "delete"
// _vehID = 9;				// SCALAR
// _territoryID = 17;		// SCALAR
// _object = objNull;		// OBJECT
// ["sonsrlvk", "PlayerVehiclesUpdateResponse", [_option, _vehID, _territoryID, _object]] call ExileServer_system_network_send_to;

// [_sessionID, "PlayerVehiclesUpdateResponse", [_option, _vehID, _territoryID, _object]] call ExileServer_system_network_send_to;
// /////////////////////////////
// and...
// /////////////////////////////  This works:
// 	class PlayerVehiclesUpdateResponse
// 		{
// 			module = "BSF";
// 			parameters[] = {"ARRAY"};
// 		};

// _option = "delete"; 	// STRING "store", "fetch", "add", "delete"
// _vehID = 9;				// SCALAR
// _territoryID = 17;		// SCALAR
// _object = objNull;		// OBJECT
// _data = [_option,_vehID,_territoryID,_object];
// ["rjyinlxt", "PlayerVehiclesUpdateResponse", [_data]] call ExileServer_system_network_send_to;

// [_sessionID, "PlayerVehiclesUpdateResponse", [_data]] call ExileServer_system_network_send_to;
// /////////////////////////////

// diag_log format["BSF_PlayerVehicles %1",BSF_PlayerVehicles];


// BSF_PlayerVehicles:
// [
// [9,[9,"76561197979791907","Exile_Car_Lada_White","Lada White","",0,0.5,0,4312,14592.5,16894.3,-0.000618,[[],[]],[],[],[],0,2fa1b140080# 1815304: psycho_lada.p3d]],
// [7,[7,"76561197979791907","Exile_Car_HMMWV_M134_Green","Humvee  M134 Green","",0,0.95,0,4312,11590.1,11911.4,0.002474,[[],[]],[],[],[],0,2fa1a5c8080# 1815302: psycho_hmmwvm134.p3d]],
// [8,[8,"76561197979791907","Exile_Car_Hunter","Hunter","",0,0.6,0,4312,11594.5,11906.7,7e-006,[[],[]],[],[],[],0,2fa1b2ba040# 1815303: mrap_01_unarmed_f.p3d]],
// [10,[10,"76561197979791907","Exile_Car_Offroad_Guerilla05","Offroad Guerilla 05","",-1,0.08,0,4312,14587,16900.5,0.010031,[[],[]],[],[],[],0,2fa1b050080# 1815305: offroad_01_unarmed_f.p3d]],
// [5,[5,"76561197979791907","Exile_Car_Hatchback_Beige","Hatchback_Beige",18,0,1,0,4312,11597.8,11913.1,0.019072,[[],[]],[["Exile_Item_WorkBenchKit",1]],[],[],13000,<NULL-object>]]
// ]


// [[9,[9,"76561197979791907","Exile_Car_Lada_White","Lada White","",0,0.5,0,4312,14592.5,16894.3,-0.000618,[[],[]],[],[],[],0,2fa1b140080# 1815304: psycho_lada.p3d]],[7,[7,"76561197979791907","Exile_Car_HMMWV_M134_Green","Humvee  M134 Green","",0,0.95,0,4312,11590.1,11911.4,0.002474,[[],[]],[],[],[],0,2fa1a5c8080# 1815302: psycho_hmmwvm134.p3d]],[8,[8,"76561197979791907","Exile_Car_Hunter","Hunter","",0,0.6,0,4312,11594.5,11906.7,7e-006,[[],[]],[],[],[],0,2fa1b2ba040# 1815303: mrap_01_unarmed_f.p3d]],[10,[10,"76561197979791907","Exile_Car_Offroad_Guerilla05","Offroad Guerilla 05","",-1,0.08,0,4312,14587,16900.5,0.010031,[[],[]],[],[],[],0,2fa1b050080# 1815305: offroad_01_unarmed_f.p3d]],[5,[5,"76561197979791907","Exile_Car_Hatchback_Beige","Hatchback_Beige",18,0,1,0,4312,11597.8,11913.1,0.019072,[[],[]],[["Exile_Item_WorkBenchKit",1]],[],[],13000,<NULL-object>]]]




