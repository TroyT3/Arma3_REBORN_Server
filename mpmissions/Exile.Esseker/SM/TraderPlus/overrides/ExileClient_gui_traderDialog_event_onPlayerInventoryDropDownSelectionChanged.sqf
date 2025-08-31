/**
 * Author; StokesMagee
 * Website; www.stokesmagee.net
 * Copyright; © 2017 StokesMagee
 *
 * This work is property of StokesMagee. You do not have permissions to use/edit/distribute any of this content
 * without written permission from StokesMagee.
 */

private["_listBox", "_index", "_dialog", "_storeListBox", "_inventoryListBox"];
disableSerialization;
if !(uiNameSpace getVariable ["RscExileTraderDialogIsInitialized", false]) exitWith {};
_listBox = _this select 0;
_index = _this select 1;
_dialog = uiNameSpace getVariable ["RscExileTraderDialog", displayNull];
_storeListBox = _dialog displayCtrl 4009;
_storeListBox lbSetCurSel -1;
_inventoryListBox = _dialog displayCtrl 4005;
_inventoryListBox lbSetCurSel -1;
"" call ExileClient_gui_traderDialog_updateItemStats;
call ExileClient_gui_traderDialog_updateInventoryListBox;
call ExileClient_gui_traderDialog_updateStoreListBox;
true
