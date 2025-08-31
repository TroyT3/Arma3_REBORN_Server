/**
 * Author; StokesMagee
 * Website; www.stokesmagee.net
 * Copyright; © 2017 StokesMagee
 *
 * This work is property of StokesMagee. You do not have permissions to use/edit/distribute any of this content
 * without written permission from StokesMagee.
 */

private["_listBox", "_index", "_dialog", "_purchaseButton", "_inventoryLoadLabel", "_inventoryLoadValue", "_itemClassName", "_inventoryDropdown", "_selectedInventoryDropdownIndex", "_currentContainerType", "_canBuyItem", "_tradingResult", "_salesPrice", "_quality", "_requiredRespect", "_itemInformation", "_itemType", "_containerNetID", "_containerVehicle", "_inventoryListBox"];
disableSerialization;
if !(uiNameSpace getVariable ["RscExileTraderDialogIsInitialized", false]) exitWith {};
_listBox = _this select 0;
_dialog = uiNameSpace getVariable ["RscExileTraderDialog", displayNull];
private _inventoryLoad = _dialog displayCtrl 4012;
_inventoryLoad ctrlSetTextColor [0.13, 0.54, 0.21, 0.8];
_itemClassName = _listBox getVariable ["ItemClassName", ""];

_inventoryDropdown = _dialog displayCtrl 4004;
_purchaseButton = _dialog displayCtrl 4010;
_selectedInventoryDropdownIndex = lbCurSel _inventoryDropdown;
_currentContainerType = _inventoryDropdown lbValue _selectedInventoryDropdownIndex;
_canBuyItem = true;
_tradingResult = 0;
try 
{
	_salesPrice = getNumber(missionConfigFile >> "CfgExileArsenal" >> _itemClassName >> "price");
	if (_salesPrice > (player getVariable ["ExileMoney", 0])) throw 5;
	_quality = getNumber(missionConfigFile >> "CfgExileArsenal" >> _itemClassName >> "quality");
	_requiredRespect = getNumber(missionConfigFile >> "CfgTrading" >> "requiredRespect" >> format["Level%1",_quality]);
	if (_requiredRespect > ExileClientPlayerScore) throw 14;
	switch (_currentContainerType) do
	{
		case 1:
		{
			_itemInformation = [_itemClassName] call BIS_fnc_itemType;
			_itemType = _itemInformation select 1;
			if !([player, _itemClassName] call ExileClient_util_playerCargo_canAdd) throw 9;
		};
		case 2:
		{	
			if !(player canAddItemToUniform _itemClassName) throw 9;
		};
		case 3:
		{
			if !(player canAddItemToVest _itemClassName) throw 9;
		};
		case 4:
		{
			if !(player canAddItemToBackpack _itemClassName) throw 9;
		};
		default 
		{
			_containerNetID = _inventoryDropdown lbData _selectedInventoryDropdownIndex;
			_containerVehicle = objectFromNetId _containerNetID;
			if (_containerVehicle isEqualTo objNull) throw 8;
			if !([_containerVehicle, _itemClassName] call ExileClient_util_containerCargo_canAdd) throw 9;
		};
	};
}
catch
{
	_tradingResult = _exception;
	_canBuyItem = false;
};
if (ExileClientIsWaitingForServerTradeResponse) then
{
	_canBuyItem = false;
};

if (_listBox isEqualType controlNull) then
{
	private _oldControl = _purchaseButton getVariable ["ItemGroupControl", controlNull];
	if !(isNull _oldControl) then
	{
		(_oldControl controlsGroupCtrl 4201) ctrlSetBackgroundColor [0.1,0.1,0.1,1];
	};
};

if (_canBuyItem) then 
{
	_purchaseButton ctrlEnable true;
	_purchaseButton setVariable ["ItemClassName", _itemClassName];
	_purchaseButton setVariable ["ItemGroupControl", _listBox];
	(_listBox controlsGroupCtrl 4201) ctrlSetBackgroundColor [0.13, 0.54, 0.21, 1];
	_itemClassName call ExileClient_gui_traderDialog_updateItemStats;
}
else 
{
	if (_tradingResult isEqualTo 9) then
	{
		_inventoryLoad ctrlSetTextColor [0.91, 0, 0, 0.6];
	};
	_purchaseButton ctrlEnable false;
	_purchaseButton setVariable ["ItemClassName",""];
	_purchaseButton setVariable ["ItemGroupControl", controlNull];

	(_listBox controlsGroupCtrl 4201) ctrlSetBackgroundColor [0.2, 0.05, 0.05, 1];
	"" call ExileClient_gui_traderDialog_updateItemStats;
};

_inventoryListBox = _dialog displayCtrl 4005;
_inventoryListBox lbSetCurSel -1;
true
