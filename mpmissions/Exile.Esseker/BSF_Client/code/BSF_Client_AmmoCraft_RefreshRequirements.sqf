/*
* BSF_Client_AmmoCraft_RefreshRequirements
* BSF\AmmoCrafting\functions\BSF_Client_AmmoCraft_RefreshRequirements.sqf
*
* BS-Free Game Servers
* www.bs-free.com
* © 2023 Troy - BS-Free
*
* This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
* To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
*/

		disableSerialization;
		private ["_display", "_ctrlPlayerWeaponMags", "_ctrlReqContainer", "_ctrlCategorySelect", "_ctrlRecipeSelect", "_magName", "_configSearch", "_magClassName", "_magData", "_magType", "_roundCount", "_powderCost", "_magCaliber", "_inventory", "_bulletInvCount", "_brassInvCount", "_powderInvCount", "_bulletCost", "_brassCost"];

		_display = uiNamespace getVariable ["BSF_AmmoCraft_Dialog",displayNull];
		ctrlEnable [20107, false];

  		_ctrlPlayerWeaponMags = (_display displayCtrl 20205);
  		_ctrlPlayerWeaponMags = (_display displayCtrl 20205);

		_ctrlReqContainer = (_display displayCtrl 20206);
		_ctrlCategorySelect = (_display displayCtrl 20207);
		_ctrlRecipeSelect = (_display displayCtrl 20208);

		lbClear _ctrlReqContainer;

		if ( ((lbCurSel _ctrlPlayerWeaponMags) isEqualTo -1) and ((lbCurSel _ctrlCategorySelect) isEqualTo -1))  exitWith {};

        _magName = "";

        if ((lbCurSel _ctrlPlayerWeaponMags) > -1) then 
        	{
        _magName = _ctrlPlayerWeaponMags lbText (lbCurSel _ctrlPlayerWeaponMags);
        };
        if ((lbCurSel _ctrlRecipeSelect) > -1) then 
        	{
        _magName = _ctrlRecipeSelect lbText (lbCurSel _ctrlRecipeSelect);
        };

		_configSearch = _magName call ExileClient_util_gear_getConfigEntryByDisplayName;
		_magClassName = _configSearch select 0;

		_magData = AmmoMap get _magClassName;
		_magType = _magData select 2;
		_roundCount = _magData select 3;
		_powderCost = (_magData select 4) * _roundCount;
		_magCaliber = AmmoMap get _magClassName select 2;

		_inventory = [_magCaliber] call BSF_Client_AmmoCraft_GetPlayerCraftingInventory;
		_bulletInvCount = _inventory select 0;
		_brassInvCount = _inventory select 1;
		_powderInvCount = _inventory select 2;

		////////////// Populate mag crafting requirments
		_ctrlReqContainer lnbAddRow [_bulletInvCount select 1, str _roundCount, str (_bulletInvCount select 2)];
		_ctrlReqContainer lbSetPicture [0, _bulletInvCount select 3];
		if (_roundCount <= _bulletInvCount select 2) then {
			_ctrlReqContainer lnbSetColor [[0,1], [0.698, 0.925, 0,1]];
			} else {
			_ctrlReqContainer lnbSetColor [[0,1], [0.918, 0, 0,1]];
			};

		_ctrlReqContainer lnbAddRow [_brassInvCount select 1, str _roundCount, str (_brassInvCount select 2)];
		_ctrlReqContainer lbSetPicture [3, _brassInvCount select 3];
		if (_roundCount <= _brassInvCount select 2) then {
			_ctrlReqContainer lnbSetColor [[1,1], [0.698, 0.925, 0,1]];
			} else {
			_ctrlReqContainer lnbSetColor [[1,1], [0.918, 0, 0,1]];
			};

		_ctrlReqContainer lnbAddRow [_powderInvCount select 1, str _powderCost, str (_powderInvCount select 2)];
		_ctrlReqContainer lbSetPicture [6, _powderInvCount select 3];
		if (_powderCost <= _powderInvCount select 2) then {
			_ctrlReqContainer lnbSetColor [[2,1], [0.698, 0.925, 0,1]];
			} else {
			_ctrlReqContainer lnbSetColor [[2,1], [0.918, 0, 0,1]];
			};	

		_bulletCost = _roundCount;
		_brassCost = _roundCount;
		if ( (_bulletCost <= (_inventory select 0 select 2)) and (_brassCost <= (_inventory select 1 select 2)) and (_powderCost <= (_inventory select 2 select 2)) ) then 
			{
			ctrlEnable [20107,true];
			};
