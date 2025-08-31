/**
 * Author; StokesMagee
 * Website; www.stokesmagee.net
 * Copyright; © 2017 StokesMagee
 *
 * This work is property of StokesMagee. You do not have permissions to use/edit/distribute any of this content
 * without written permission from StokesMagee.
 */

[] call SM_TraderPlus_updateCache;

if (SM_TraderPlus_TotalResults == 0) then
{
	SM_TraderPlus_CurrentPage = 0;
	[true] call SM_TraderPlus_deleteTraderGroup;
}
else
{
	SM_TraderPlus_CurrentPage = 1;
	[""] call ExileClient_gui_TraderDialog_updateStoreListBox;
};

private _pagesControl = _dialog displayCtrl 5511;
_pagesControl ctrlSetText format["PAGE: %1/%2", SM_TraderPlus_CurrentPage, SM_TraderPlus_Pages];
true
