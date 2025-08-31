/**
 * ExileServer_system_trading_network_wasteDumpRequest
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 * 64Bit Conversion File Header (Extdb3) - Validatior
 */
 
private["_sessionID","_parameters","_vehicleNetID","_mode","_vehicleObject","_vehicleDBID","_playerObject","_cargo","_revenue","_playerMoney","_respectGain","_playerRespect","_logging","_traderLog","_responseCode","_crateTypes"];
_sessionID = _this select 0;
_parameters = _this select 1;
_vehicleNetID = _parameters select 0;
_mode = _parameters select 1;
_crateTypes = [
		"Exile_Container_SupplyBox",
		"C_IDAP_supplyCrate_F",
		"BSF_SupplyBox_Orange",
		"BSF_SupplyBox_Green",
		"I_supplyCrate_F",
		"O_supplyCrate_F",
		"B_supplyCrate_F",
		"C_T_supplyCrate_F",
		"C_supplyCrate_F",
		"IG_supplyCrate_F",
		"B_CargoNet_01_ammo_F",
		"I_CargoNet_01_ammo_F",
		"O_CargoNet_01_ammo_F",
		"C_IDAP_CargoNet_01_supplies_F",
		"CargoNet_01_box_F",
		"Box_IND_AmmoVeh_F",
		"Box_East_AmmoVeh_F",
		"Box_NATO_AmmoVeh_F",
		"Box_AAF_Uniforms_F",
		"Box_CSAT_Uniforms_F",
		"Box_NATO_Uniforms_F",
		"Box_IDAP_Uniforms_F",
		"Box_AAF_Equip_F",
		"Box_CSAT_Equip_F",
		"Box_NATO_Equip_F",
		"Box_IDAP_Equip_F",
		"Box_GEN_Equip_F",
		"Land_MetalCase_01_large_F",
		"Box_IND_Support_F",
		"Box_East_Support_F",
		"Box_NATO_Support_F",
		"Box_FIA_Support_F",
		"Box_NATO_WpsSpecial_F",
		"Box_IND_WpsSpecial_F", 
		"Box_East_WpsSpecial_F", 
		"Box_T_NATO_WpsSpecial_F",			
		"Box_T_East_WpsSpecial_F",			
		"Box_East_WpsLaunch_F", 
		"Box_NATO_WpsLaunch_F", 
		"Box_IND_WpsLaunch_F", 
		"Box_Syndicate_WpsLaunch_F",			
		"Box_IND_Grenades_F",
		"Box_East_Grenades_F",
		"Box_NATO_Grenades_F",
		"Box_IND_AmmoOrd_F",
		"Box_East_AmmoOrd_F",
		"Box_NATO_AmmoOrd_F",
		"Box_IDAP_AmmoOrd_F",
		"Box_IND_Ammo_F",
		"Box_East_Ammo_F",
		"Box_NATO_Ammo_F",
		"Box_FIA_Ammo_F",
		"Box_T_East_Ammo_F",
		"Box_IND_Wps_F",
		"Box_East_Wps_F",
		"Box_NATO_Wps_F",
		"Box_FIA_Wps_F",
		"Box_T_East_Wps_F",
		"Box_Exile_Weapons_1v",
		"Box_T_NATO_Wps_F",
		"Box_Syndicate_Ammo_F",
		"Box_IED_Exp_F",
		"Box_Syndicate_Wps_F"
		];
try 
{
	_vehicleObject = objectFromNetId _vehicleNetID;
	_vehicleDBID = _vehicleObject getVariable "ExileDatabaseID";
	if (isNull _vehicleObject) then
	{
		throw 6;
	};
	if (_vehicleObject getVariable ["ExileMutex", false]) then
	{
		throw 12;
	};
	_vehicleObject setVariable ["ExileMutex", true];
	_playerObject = _sessionID call ExileServer_system_session_getPlayerObject;
	if (isNull _playerObject) then
	{
		throw 1;
	};
	if !(alive _playerObject) then
	{
		throw 2;
	};
	if !((owner _vehicleObject) isEqualTo (owner _playerObject)) then 
	{
		if (typeOf _vehicleObject in _crateTypes) then
		{
			_vehicleObject setOwner (owner _playerObject);
		} else {
			throw 6;
		};
	};
	_cargo = _vehicleObject call ExileClient_util_containerCargo_list;
	_revenue = _cargo call ExileClient_util_gear_calculateTotalSellPrice;

	clearBackpackCargoGlobal _vehicleObject;
	clearItemCargoGlobal _vehicleObject;
	clearMagazineCargoGlobal _vehicleObject;
	clearWeaponCargoGlobal _vehicleObject;
	if (_mode isEqualTo 2) then
	{
		_revenue = _revenue + ([(typeOf _vehicleObject)] call ExileClient_util_gear_calculateTotalSellPrice);
		_vehicleObject call ExileServer_object_vehicle_remove;
		_xData = [];
		[_sessionID, 'PlayerVehiclesUpdateResponse', [['delete', _vehicleDBID, '', _vehicleObject, _xData]]] call ExileServer_system_network_send_to;
		deleteVehicle _vehicleObject;
	}
	else 
	{
		_vehicleObject call ExileServer_object_vehicle_database_update;
	};
	_playerMoney = _playerObject getVariable ["ExileMoney", 0];
	_playerMoney = _playerMoney + _revenue;
	_playerObject setVariable ["ExileMoney", _playerMoney, true];
	format["setPlayerMoney:%1:%2", _playerMoney, _playerObject getVariable ["ExileDatabaseID", 0]] call ExileServer_system_database_query_fireAndForget;
	_respectGain = _revenue * getNumber (configFile >> "CfgSettings" >> "Respect" >> "tradingRespectFactor");
	_playerRespect = _playerObject getVariable ["ExileScore", 0];
	_playerRespect = floor (_playerRespect + _respectGain);
	_playerObject setVariable ["ExileScore", _playerRespect];
	format["setAccountScore:%1:%2", _playerRespect, (getPlayerUID _playerObject)] call ExileServer_system_database_query_fireAndForget;
	[_sessionID, "wasteDumpResponse", [0, _revenue, str _playerRespect]] call ExileServer_system_network_send_to;
	

///// BSF Vehicle sale DB logging	
_pinCode = _vehicleObject getVariable ["ExileAccessCode",""];
_PName = _playerObject getVariable ["ExileName",""];
_VehicleID = _vehicleObject getVariable ["ExileDatabaseID", -1];
_Owner = _vehicleObject getVariable ["ExileOwnerUID", ""];
_exempt_uid = ["DMS_PersistentVehicle","Reborn_Persistent",""];
_vehicleName = VehicleNameMap getOrDefault [typeOf _vehicleObject, "Name Not Available"]; // HashMap created in 'BSF_Server\bootstrap\fn_preInit.sqf

if ((_vehicleObject getVariable ["ExileIsPersistent", true]) && ((getPlayerUID _playerObject) != _Owner) && !(_Owner in _exempt_uid) && !(typeOf _vehicleObject in _crateTypes)) then // && (_vehicleDBID >)
	{				
		_SellerName = _playerObject getVariable ["ExileName",""];
		_OwnerName = format["loadPlayerName:%1", _Owner] call ExileServer_system_database_query_selectSingle;

		switch (_mode) do
		{
			case 1: // Cargo Only
			{
				_sale_type = "Cargo";
				["toastRequest", ["WarningTitleAndText", ["<t size='27' color='#ff0000' font='puristaMedium'>CARGO SOLD</t>", format["<t size='23' align='center' font='PuristaLight'>%1 just sold cargo from a vehicle belonging to %2 <br/>Let's hope it was consentural!</t>",_SellerName,_OwnerName select 0]]]] call ExileServer_system_network_send_broadcast;
				format["BSFVehicleSaleLog:%1:%2:%3:%4:%5:%6:%7:%8:%9",_VehicleID,typeOf _vehicleObject,getPlayerUID _playerObject,_PName,_Owner,_pinCode,_sale_type,_OwnerName select 0,_vehicleName] call ExileServer_system_database_query_fireAndForget;
			};
			case 2:	// Vehicla and cargo
			{
				_sale_type = "Vehicle";
				["toastRequest", ["WarningTitleAndText", ["<t size='27' color='#ff0000' font='puristaMedium'>VEHICLE SOLD</t>", format["<t size='23' align='center' font='PuristaLight'>%1 just sold a vehicle belonging to %2 <br/>Let's hope it was consentural!</t>",_SellerName,_OwnerName select 0]]]] call ExileServer_system_network_send_broadcast;
				format["BSFVehicleSaleLog:%1:%2:%3:%4:%5:%6:%7:%8:%9",_VehicleID,typeOf _vehicleObject,getPlayerUID _playerObject,_PName,_Owner,_pinCode,_sale_type,_OwnerName select 0,_vehicleName] call ExileServer_system_database_query_fireAndForget;
				format["BSFVehicleUpdateLog:%1:%2:%3:%4",getPlayerUID _playerObject,_PName,_pinCode,_VehicleID] call ExileServer_system_database_query_fireAndForget;
			};
		};				
	}
	else
	{};
///// END BSF Vehicle sale DB logging	
	
	_logging = getNumber(configFile >> "CfgSettings" >> "Logging" >> "traderLogging");
	if (_logging isEqualTo 1) then
	{
		_traderLog = format ["PLAYER: ( %1 ) %2 SOLD ITEM: %3 (ID# %4) (OWNER UID: %9) with Cargo %5 FOR %6 POPTABS AND %7 RESPECT | PLAYER TOTAL MONEY: %8",getPlayerUID _playerObject,_playerObject,typeOf _vehicleObject,_vehicleDBID,_cargo,_revenue,_respectGain,_playerMoney,_Owner];
		"extDB3" callExtension format["1:TRADING:%1",_traderLog];
	};

}
catch
{
	_responseCode = _exception;
	[_sessionID, "wasteDumpResponse", [_responseCode, 0, ""]] call ExileServer_system_network_send_to;
};
if (!isNull _vehicleObject) then
{
	_vehicleObject setVariable ["ExileMutex", false];
};
true
