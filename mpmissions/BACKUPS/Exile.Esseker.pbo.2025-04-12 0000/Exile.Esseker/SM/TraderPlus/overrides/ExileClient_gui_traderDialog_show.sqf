/**
 * Author; StokesMagee
 * Website; www.stokesmagee.net
 * Copyright; © 2017 StokesMagee
 *
 * This work is property of StokesMagee. You do not have permissions to use/edit/distribute any of this content
 * without written permission from StokesMagee.
 */

private["_dialog", "_traderName", "_primaryWeaponCheckbox", "_handgunCheckbox", "_storeDropdown", "_storeDropdownSize", "_quantityDropdown", "_purchaseButton", "_sellButton"];
disableSerialization;
ExileClientCurrentTrader = _this getVariable "ExileTraderType";
createDialog "RscExileTraderDialog";
waitUntil { !isNull findDisplay 24007 };
_dialog = uiNameSpace getVariable ["RscExileTraderDialog", displayNull];
uiNameSpace setVariable ["RscExileTraderDialogIsInitialized", false];

private _purchaseButton = _dialog displayCtrl 4010;
_purchaseButton ctrlEnable false;

[] call ExileClient_gui_modelBox_create;
false call ExileClient_gui_postProcessing_toggleDialogBackgroundBlur;

SM_Mutex = false;
SM_lastTradeSearch = "";

_primaryWeaponCheckbox = _dialog displayCtrl 4044;
_handgunCheckbox = _dialog displayCtrl 4045;
_storeDropdown = _dialog displayCtrl 4008;

_storeDropdownSize = ctrlPosition _storeDropdown; 
if (getNumber (missionConfigFile >> "CfgTraders" >> ExileClientCurrentTrader >> "showWeaponFilter") isEqualTo 1) then
{
	_primaryWeaponCheckbox ctrlShow true;
	_handgunCheckbox ctrlShow true;
	_storeDropdownSize set [2, 16.5 * (0.025)];
}
else 
{
	_primaryWeaponCheckbox ctrlShow false;
	_handgunCheckbox ctrlShow false;
	_storeDropdownSize set [2, 20 * (0.025)];
};
_storeDropdown ctrlSetPosition _storeDropdownSize;
_storeDropdown ctrlCommit 0;
_sellButton = _dialog displayCtrl 4007;
_sellButton ctrlEnable false;

SM_TraderPlus_CachedItems = [];
SM_TraderPlus_Pages = 0;
SM_TraderPlus_TotalResults = 0;
SM_TraderPlus_CurrentPage = 1;


call ExileClient_gui_traderDialog_updatePlayerControls;
call ExileClient_gui_traderDialog_updateInventoryDropdown;
call ExileClient_gui_traderDialog_updateInventoryListBox;
call ExileClient_gui_traderDialog_updateStoreDropdown;

call SM_TraderPlus_updateCache;

private _pagesControl = _dialog displayCtrl 5511;
_pagesControl ctrlSetText format["PAGE: %1/%2", SM_TraderPlus_CurrentPage, SM_TraderPlus_Pages];

call ExileClient_gui_traderDialog_updateStoreListBox;

"" call ExileClient_gui_traderDialog_updateItemStats;
uiNameSpace setVariable ["RscExileTraderDialogIsInitialized", true];

true
