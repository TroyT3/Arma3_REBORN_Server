/**
 * ExileServer_system_trading_network_purchaseVehicleRequest
 *
 * Exile Mod
 * www.exilemod.com
 * 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 * 64Bit Conversion File Header (Extdb3) - Validatior
 * Modded by BSF
 */
private["_sessionID","_parameters","_vehicleClass","_pinCode","_playerObject","_salesPrice","_playerMoney","_position","_vehicleObject","_logging","_traderLog","_responseCode","_nObject", "_position3d","_position2d","_playerName"];
_sessionID = _this select 0;
_parameters = _this select 1;
_vehicleClass = _parameters select 0;
_pinCode = _parameters select 1;
try
{
    _playerObject = _sessionID call ExileServer_system_session_getPlayerObject;
    if (isNull _playerObject) then
    {
        throw 1;
    };
    if !(alive _playerObject) then
    {
        throw 2;
    };
    if (_playerObject getVariable ["ExileMutex",false]) then
    {
        throw 12;
    };
    _playerObject setVariable ["ExileMutex", true];
    if !(isClass (missionConfigFile >> "CfgExileArsenal" >> _vehicleClass) ) then
    {
        throw 3;
    };
    _salesPrice = getNumber (missionConfigFile >> "CfgExileArsenal" >> _vehicleClass >> "price");
    if (_salesPrice <= 0) then
    {
        throw 4;
    };
    _playerMoney = _playerObject getVariable ["ExileMoney", 0];
    if (_playerMoney < _salesPrice) then
    {
        throw 5;
    };
    if !((count _pinCode) isEqualTo 4) then
    {
        throw 11;
    };

    if (_vehicleClass isKindOf "Ship") then
    {
		private _playerPos = getPos _playerObject;
		private _SeaSpawnObject = "bsf_vehiclespawn_ship_invisible";
		private _nearLocation = nearestObject [_playerPos, _SeaSpawnObject];
		if !(isNull _nearLocation) then
		{
			_position = [_nearLocation, 1, 5, 3, 2] call BIS_fnc_findSafePos;
			_elevation = getPosATL _nearLocation select 2;
			_position set [2,_elevation];
		};

		if ( count _position == 0) then
		{
			throw 16;
		}
		else
		{
			_vehicleObject = [_vehicleClass, _position, (random 360), true, _pinCode] call ExileServer_object_vehicle_createPersistentVehicle;
		};
    }
    else
    {
		if (_vehicleClass isKindOf "Air") then
		{
			private _playerPos = getPos _playerObject;
			private _AirSpawnObject = "bsf_vehiclespawn_air_invisible";
			private _nearLocation = nearestObject [_playerPos, "BSF_VehicleSpawn_Air_Invisible"]; // Only using the invisible marker to stay in sync with Lone VG
			if !(isNull _nearLocation) then
			{
				_position3d = getPosATL _nearLocation findEmptyPosition [0,5];
			};
		}
		else
		{
			private _playerPos = getPos _playerObject;
			private _LandSpawnObject = "bsf_vehiclespawn_land";
			private _nearLocation = nearestObject [_playerPos, "BSF_VehicleSpawn_Land"];
			if !(isNull _nearLocation) then
			{
				_position3d = getPosATL _nearLocation findEmptyPosition [0,5];
			};
		};

		if ( count _position3d == 0) then
		{
			throw 15;
		}
		else
		{
			_vehicleObject = [_vehicleClass, _position3d, (random 360), true, _pinCode] call ExileServer_object_vehicle_createPersistentVehicle;
		};
    };

// BSF ASSET MANAGEMENT NEEDS WORK
    _vehicleObject setVariable ["ExileOwnerUID", (getPlayerUID _playerObject),true];
    // _vehicleObject setVariable ["ExileOwnerUID", (getPlayerUID _playerObject)]; // BSF Edit
    _vehicleObject setVariable ["ExileIsLocked",0, true]; // BSF Edit
    // _vehicleObject setVariable ["ExileIsLocked",0];
    _vehicleObject lock 0;
    _vehicleObject call ExileServer_object_vehicle_database_insert;
    _vehicleObject call ExileServer_object_vehicle_database_update;

    _playerMoney = _playerMoney - _salesPrice;
    _playerObject setVariable ["ExileMoney", _playerMoney, true];
    format["setPlayerMoney:%1:%2", _playerMoney, _playerObject getVariable ["ExileDatabaseID", 0]] call ExileServer_system_database_query_fireAndForget;
    [_sessionID, "purchaseVehicleResponse", [0, netId _vehicleObject, _salesPrice]] call ExileServer_system_network_send_to;
    _logging = getNumber(configFile >> "CfgSettings" >> "Logging" >> "traderLogging");
    if (_logging isEqualTo 1) then
    {
        _traderLog = format ["PLAYER: ( %1 ) %2 PURCHASED VEHICLE %3 FOR %4 POPTABS | PLAYER TOTAL MONEY: %5",getPlayerUID _playerObject,_playerObject,_vehicleClass,_salesPrice,_playerMoney];
        "extDB3" callExtension format["1:TRADING:%1",_traderLog];
    };
    ///// BSF Vehicle purchase DB logging	
    _playerName = _playerObject getVariable ["ExileName",""];
    _vehicleID = _vehicleObject getVariable ["ExileDatabaseID", -1];
    _vehicleName = VehicleNameMap getOrDefault [typeOf _vehicleObject, "Name Not Available"]; // HashMap created in 'BSF_Server\bootstrap\fn_preInit.sqf
    format["BSFVehiclePurchaseLog:%1:%2:%3:%4:%5:%6",_vehicleID,_vehicleClass,getPlayerUID _playerObject,_playerName,_pinCode,_vehicleName] call ExileServer_system_database_query_fireAndForget;

}
catch
{
    _responseCode = _exception;
    [_sessionID, "purchaseVehicleResponse", [_responseCode, "", 0]] call ExileServer_system_network_send_to;
};
if !(isNull _playerObject) then
{
    _playerObject setVariable ["ExileMutex", false];
};
true