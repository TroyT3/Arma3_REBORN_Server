/*

    Name: ExileClient_ClaimVehicles_network_claimRequestSend.sqf

    Author: MezoPlays
    Copyright (c) 2016 MezoPlays

    This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License.
    To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0

*/
_object = cursorTarget;
_vehicleObj = _object;
_objectNetId = netId _object;
_object = typeOf _object;
_vehicle = objectFromNetId _objectNetID;

_ownerUID = _vehicle getVariable ["ExileOwnerUID",""];
_vehID = _vehicle getVariable ["ExileDatabaseID",-1];
["InfoTitleAndText", ["claimRequestSend ownerUID: ", format["%1", _ownerUID]]] call ExileClient_gui_toaster_addTemplateToast;

try
{
    if !(local _vehicleObj) then
    {
        throw "Get in the drivers seat first";
    };
    if !(_object isKindOf "AIR" || _object isKindOf "CAR" || _object isKindOf "TANK" || _object isKindOf "SHIP") then
    {
        throw "That's not a Vehicle... derp!";
    };
    if !("Exile_Item_Codelock" in (player call ExileClient_util_playerCargo_list)) then
    {
        throw "You need a codelock to do that!";
    };
    if !(_vehID > 0) then 
    {
        throw "This vehicle is not eligible to be claimed... sorry :("
    };
    if !(_ownerUID in ["Reborn_Persistent","DMS_PersistentVehicle"]) then 
    {
        throw "This vehicle is already owned by another player";
    };

    _pincode = 4 call ExileClient_gui_keypadDialog_show;

    if !(count _pinCode == 4) then
    {
        throw "Your pincode must be 4 digits!";
    };

    ["saveVehicleRequest",[_objectNetId,_pinCode]] call ExileClient_system_network_send;

    _vehicleObj lock 0;

    call ExileClient_gui_interactionMenu_unhook;

}
catch
{
    ["ErrorTitleAndText", ["Claim Vehicles", _exception]] call ExileClient_gui_toaster_addTemplateToast;
};
