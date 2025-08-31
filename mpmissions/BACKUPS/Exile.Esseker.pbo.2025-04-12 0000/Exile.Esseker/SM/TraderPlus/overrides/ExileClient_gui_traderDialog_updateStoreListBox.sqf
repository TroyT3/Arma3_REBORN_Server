/**
 * Author; StokesMagee
 * Website; www.stokesmagee.net
 * Copyright; © 2017 StokesMagee
 *
 * This work is property of StokesMagee. You do not have permissions to use/edit/distribute any of this content
 * without written permission from StokesMagee.
 */

disableSerialization;
private _dialog = uiNameSpace getVariable ["RscExileTraderDialog", displayNull];
private _arsenalConfig = missionConfigFile >> "CfgExileArsenal";
deleteVehicle ExileClientModelBoxVehicle;

_inventoryDropdown = _dialog displayCtrl 4004;
_selectedInventoryDropdownIndex = lbCurSel _inventoryDropdown;
_currentContainerType = _inventoryDropdown lbValue _selectedInventoryDropdownIndex;
private _quantityDropdown = _dialog displayCtrl 5513;

private _controls = [];
for "_i" from 1600 to 1629 do
{
	_controls pushBack _i;
};

private _currentControl = 0;
private _number = (30 * SM_TraderPlus_CurrentPage) - 1;
for "_i" from (_number - 29) to _number do
{
	if (_i >= SM_TraderPlus_TotalResults) then
	{
		private _ctrlListItemGroup = _dialog displayCtrl (_controls select _currentControl);
		private _itemPictureCtrl = _ctrlListItemGroup controlsGroupCtrl 4202;
		private _toolTipCtrl = _ctrlListItemGroup controlsGroupCtrl 4205;
		private _displayNameCtrl = _ctrlListItemGroup controlsGroupCtrl 4203;
		private _poptabsCtrl = _ctrlListItemGroup controlsGroupCtrl 4204;

		private _backGround = _ctrlListItemGroup controlsGroupCtrl 4201;
		_backGround ctrlSetBackgroundColor [0.1,0.1,0.1,1];

		_itemPictureCtrl ctrlSetText "";
		_toolTipCtrl ctrlSetTooltip "";
		_displayNameCtrl ctrlSetStructuredText parseText "";
		_displayNameCtrl ctrlSetTooltip "";
		_poptabsCtrl ctrlSetStructuredText parseText "";

		_ctrlListItemGroup setVariable ["ItemClassName", nil];
	}
	else
	{
		(SM_TraderPlus_CachedItems select _i) params ["_itemClassName","_requiredRespect","_quality"];
		private _configName = _itemClassName call ExileClient_util_gear_getConfigNameByClassName;
		private _itemConfig = configFile >> _configName >> _itemClassName;
		private _displayName = getText(_itemConfig >> "displayName");

		private _ctrlListItemGroup = _dialog displayCtrl (_controls select _currentControl);

		private _picture = getText(_itemConfig >> "picture");
		private _salesPrice = getNumber(_arsenalConfig >> _itemClassName >> "price");
		private _popTabColor = [1, 1, 1, 1];
		switch (_quality) do
		{
			case 1: { _popTabColor = [1,1,1,1]; };
			case 2: { _popTabColor = [0.62, 0.87 ,0.23, 1]; };
			case 3: { _popTabColor = [0, 0.78, 0.92, 1]; };
			case 4: { _popTabColor = [0.62, 0.27, 0.58, 1]; };
			case 5: { _popTabColor = [1, 0.7, 0.09, 1]; };
			case 6: { _popTabColor = [0.93, 0, 0.48, 1]; };				
		};
		private _imageColor = [1,1,1,1];
		private _toolTip = _displayName;
		private _playerMoney = player getVariable ["ExileMoney", 0];
		private _missingRespect = _requiredRespect - ExileClientPlayerScore;
		private _missingPopTabs = _salesPrice - _playerMoney;
		private _backGround = _ctrlListItemGroup controlsGroupCtrl 4201;

		private _displayRed = false;
		if (_requiredRespect > ExileClientPlayerScore) then
		{
			_toolTip = _toolTip + format["%1Missing %2 Respect", endl, _missingRespect call ExileClient_util_string_exponentToString];
			_displayRed = true;
		};
		if (_salesPrice > (player getVariable ["ExileMoney", 0])) then
		{
			_toolTip = _toolTip + format["%1Missing %2 Pop Tabs", endl, _missingPopTabs call ExileClient_util_string_exponentToString];
			_displayRed = true;
		};

		private _notEnoughSpace =
		{
			_toolTip = _toolTip + format["%1Not enough inventory space!", endl];
			_displayRed = true;
		};
		switch (_currentContainerType) do
		{
			case 1:
			{
				_itemInformation = [_itemClassName] call BIS_fnc_itemType;
				_itemType = _itemInformation select 1;

				if !([player, _itemClassName] call ExileClient_util_playerCargo_canAdd) then _notEnoughSpace;
			};
			case 2:
			{	
				if !(player canAddItemToUniform _itemClassName) then _notEnoughSpace;
			};
			case 3:
			{
				if !(player canAddItemToVest _itemClassName) then _notEnoughSpace;
			};
			case 4:
			{
				if !(player canAddItemToBackpack _itemClassName) then _notEnoughSpace;
			};
			default 
			{
				_containerNetID = _inventoryDropdown lbData _selectedInventoryDropdownIndex;
				_containerVehicle = objectFromNetId _containerNetID;
				if (_containerVehicle isEqualTo objNull) then _notEnoughSpace;
				if !([_containerVehicle, _itemClassName] call ExileClient_util_containerCargo_canAdd) then _notEnoughSpace;
			};
		};
		if (_displayRed) then
		{
			_popTabColor set [3, 0.3];
			_imageColor set [3, 0.3];
			_backGround ctrlSetBackgroundColor [0.2, 0.05, 0.05, 1];
		};

		private _itemPictureCtrl = _ctrlListItemGroup controlsGroupCtrl 4202;
		_itemPictureCtrl ctrlSetTextColor _imageColor;
		_itemPictureCtrl ctrlSetText _picture;

		private _itemToolTip = _ctrlListItemGroup controlsGroupCtrl 4205;
		_itemToolTip ctrlSetTooltip _toolTip;

		private _displayNameCtrl = _ctrlListItemGroup controlsGroupCtrl 4203;
		_displayNameCtrl ctrlSetStructuredText parseText format["<t size='0.7' align='center' shadow=2>%1</t>", _displayName];
		_displayNameCtrl ctrlSetTooltip _toolTip;
		_displayNameCtrl ctrlSetTextColor _imageColor;

		private _poptabsCtrl = _ctrlListItemGroup controlsGroupCtrl 4204;
		_poptabsCtrl ctrlSetStructuredText parseText format["<t size='1.2' align='right' shadow=2>%1 <img size='1.6' image='exile_assets\texture\ui\poptab_trader_ca.paa'/></t>", _salesPrice call ExileClient_util_string_exponentToString];
		_poptabsCtrl ctrlSetTextColor _popTabColor;

		_ctrlListItemGroup setVariable ["ItemClassName", _itemClassName];
	};
	_currentControl = _currentControl + 1;
};

true
