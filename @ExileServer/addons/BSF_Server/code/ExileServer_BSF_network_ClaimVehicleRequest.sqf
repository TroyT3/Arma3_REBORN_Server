/*
* ExileServer_BSF_network_ClaimVehicleRequest.sqf

* Author: MezoPlays
* Copyright (c) 2016 MezoPlays
* This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License.
* To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0
*/
private ["_sessionID", "_package", "_objectNetID", "_pinCode", "_playerObject", "_ownerUID", "_vehicle", "_VehicleUID", "_VehicleDatabaseID", "_vehicleObj"];

_sessionID = _this select 0;
_package = _this select 1;
_objectNetID = _package select 0;
_pinCode = _package select 1;

_playerObject = _sessionID call ExileServer_system_session_getPlayerObject;
_ownerUID = getPlayerUID _playerObject;
_vehicle = objectFromNetId _objectNetID;

_VehicleUID = _vehicle getVariable ["ExileOwnerUID", ""];
_VehicleDatabaseID = _vehicle getVariable ["ExileDatabaseID", ""];

_persistent = _vehicle getVariable "ExileIsPersistent";
diag_log format ["ClaimVehicleRequest: _persistent %1", _persistent];

format["SERVER _VehicleUID %1 : %2",_VehicleUID, typeName _VehicleUID ] call BSF_Server_Util_Debug;

try
{
    if !(_VehicleUID in ["Reborn_Persistent","DMS_PersistentVehicle"]) then 
    {
        throw "No can do...This vehicle is already claimed!";
    };
    if !(_vehicle getVariable "ExileIsPersistent") then 
    {
        throw "This vehicle is not eligible to be claimed... sorry :("
    };
    if !(alive _playerObject) then
    {
        throw "You must be alive to claim a vehicle!";
    };
    if !(_vehicle isKindOf "AIR" || _vehicle isKindOf "CAR" || _vehicle isKindOf "TANK" || _vehicle isKindOf "SHIP") then
    {
        throw "You can't claim this type of vehicle";
    };
    if !(isNil {_vehicleObj getVariable "SC_drivenVehicle"}) then
    {
        throw "This vehicle is owned by the server!";
    };
    if !(count _pinCode == 4) then
    {
        throw "Your pincode must be 4 digits!";
    };

    _playerObject removeMagazineGlobal "Exile_Item_CodeLock";

    _vehicle setVariable ["ExileIsLocked",0, true]; // BSF Edit
    _vehicle setVariable ["ExileOwnerUID", _ownerUID, true];
    _vehicle setVariable ["ExileAccessCode", _pinCode, true];
    _vehicle setVariable ["ExileIsPersistent", true];
    _vehicle setVariable ["BSF_MarkerOn", 0, true];
    _vehicle setVehicleLock "UNLOCKED";
    _vehicleID = _vehicle call ExileServer_object_vehicle_database_update;

	format["BSF_ChangeVehicleOwner:%1:%2:%3", _ownerUID,_pinCode,_VehicleDatabaseID] call ExileServer_system_database_query_fireAndForget;

    // params  ["_option", "_vehID", "_territoryID","_object"];
    _xData = [];
    [_sessionID, "PlayerVehiclesUpdateResponse", [['add', 0, '', _vehicle, _xData]]] call ExileServer_system_network_send_to;

    [_sessionID, "toastRequest", ["SuccessTitleOnly", ["You're now the owner of this vehicle!"]]] call ExileServer_system_network_send_to;

}
catch
{
    [_sessionID, "toastRequest", ["ErrorTitleAndText", ["Claim Vehicles", _exception]]] call ExileServer_system_network_send_to;
    _vehicle setVehicleLock "UNLOCKED";; //Make sure the vehicle is unlocked if this stuff fails. Cheers John ;)
};
