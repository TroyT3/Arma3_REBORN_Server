/**
 * ExileClient_gui_traderDialog_updateInventoryDropdown
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */

private["_dialog","_inventoryDropdown","_index","_nearVehicles","_crateTypes"];
disableSerialization;
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

_dialog = uiNameSpace getVariable ["RscExileTraderDialog", displayNull];
_inventoryDropdown = _dialog displayCtrl 4004;
lbClear _inventoryDropdown;
_index = _inventoryDropdown lbAdd "Equipment";
_inventoryDropdown lbSetValue [_index, 1];
_inventoryDropdown lbSetPicture [_index, "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\face_ca.paa"];
_inventoryDropdown lbSetCurSel 0;
if !((uniform player) isEqualTo "") then
{
	_index = _inventoryDropdown lbAdd "Uniform";
	_inventoryDropdown lbSetPicture [_index, "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa"];
	_inventoryDropdown lbSetValue [_index, 2];
};
if !((vest player) isEqualTo "") then
{
	_index = _inventoryDropdown lbAdd "Vest";
	_inventoryDropdown lbSetPicture [_index, "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\vest_ca.paa"];
	_inventoryDropdown lbSetValue [_index, 3];
};
if !((backpack player) isEqualTo "") then
{
	_index = _inventoryDropdown lbAdd "Backpack";
	_inventoryDropdown lbSetPicture [_index, "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\backpack_ca.paa"];
	_inventoryDropdown lbSetValue [_index, 4];
};
_nearVehicles = nearestObjects [player, ["LandVehicle","Air","Ship"] + _crateTypes, 80];
{
	if (local _x) then
	{
		if (alive _x) then
		{
			if (isNull attachedTo _x) then
			{
				_index = _inventoryDropdown lbAdd getText(configFile >> "CfgVehicles" >> (typeOf _x) >> "displayName");
				_inventoryDropdown lbSetData [_index, netId _x];
				_inventoryDropdown lbSetValue [_index, 5];
			};
		};
	} else {
		if (typeOf _x in _crateTypes) then
		{
			if (alive _x) then
			{
				if (isNull attachedTo _x) then
				{
					_index = _inventoryDropdown lbAdd getText(configFile >> "CfgVehicles" >> (typeOf _x) >> "displayName");
					_inventoryDropdown lbSetData [_index, netId _x];
					_inventoryDropdown lbSetValue [_index, 5];
				};
			};
		};
	};
}
forEach _nearVehicles;
true
