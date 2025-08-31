/*
* BSF_Client_AmmoCraft_GUI_Load
* BSF\AmmoCrafting\functions\BSF_Client_AmmoCraft_GUI_Load.sqf
*
* BS-Free Game Servers
* www.bs-free.com
* © 2023 Troy - BS-Free
*
* This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
* To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
*/

private ["_option", "_display"];
disableSerialization;

_option = _this select 0;
_display = uiNamespace getVariable ["BSF_AmmoCraft_Dialog",displayNull];
waitUntil {AmmoHashLoaded};
waitUntil {AmmoPartsLoaded};
diag_log format['BSF LoadMags - AmmoMap confirmed'];
diag_log format['BSF LoadMags - AmmoParts confirmed'];

fnc_RefreshRequirements = {
	diag_log format['fnc_RefreshRequirements: %1', _this];
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
	diag_log format['fnc_RefreshRequirements _magData: %1', _magData];
	diag_log format['fnc_RefreshRequirements _magType: %1', _magType];
	diag_log format['fnc_RefreshRequirements _roundCount: %1', _roundCount];
	diag_log format['fnc_RefreshRequirements _powderCost: %1', _powderCost];
	diag_log format['fnc_RefreshRequirements _magCaliber: %1', _magCaliber];
	diag_log format['fnc_RefreshRequirements _magData: %1', _magData];

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
}; // END fnc_RefreshRequirements

fnc_displayPartsInInventory = {
disableSerialization;
_display = uiNamespace getVariable ["BSF_AmmoCraft_Dialog",displayNull];

_partsInventory = nil;
_partsInventory = createHashMap;
waitUntil{!isNil "_partsInventory"};
{
	if (!isNil {AmmoParts get (_x select 0)} ) then 
	{
		_part = AmmoParts get (_x select 0);
		_partClass = _part select 0;
		_partDisplayName = _part select 1;
		_partCount = _x select 1;
		_partPic = getText(configFile >> "CfgMagazines" >> _partClass >> "picture");
		if !((_x select 0) in _partsInventory) then{
			_partsInventory set [_partClass ,[_partDisplayName,  _partCount, _partPic]];
			}
		else 
		{
			_curCount = _x select 1;
			_partsInventory set [_partClass,[_partDisplayName, (_partsInventory get _partClass select 1) + _curCount, _partPic]];
		};
	};
} forEach (magazinesAmmo player);

diag_log format['BSF LoadMags _partsInventory %1',_partsInventory];

_ctrlPartsContainer = (_display displayCtrl 20203);
_ctrlPartsContainer lbSetCurSel -1;
lbClear _ctrlPartsContainer;

_partIndex = 0;
{
	_displayName = _partsInventory get _x select 0;
	_quantity = _partsInventory get _x select 1;
	_pic = _partsInventory get _x select 2;

	_ctrlPartsContainer lnbAddRow [_displayName, str _quantity];
	_ctrlPartsContainer lbSetPicture [_partIndex, _pic];
	_partIndex = _partIndex + 2;
} forEach _partsInventory;
_ctrlPartsContainer lnbSort [0, true];
};


switch (_option) do
{
	case ("Load") : {
		private ["_display"];
		disableSerialization;
		_display = uiNamespace getVariable ["BSF_AmmoCraft_Dialog",displayNull];
		ctrlEnable [20107,false]; // CraftMagButton
		ctrlEnable [20205,false]; // PlayerWeaponMags
		{
		ctrlShow [_x, true];
		} forEach [20002, 20003, 20004, 20005, 20006, 20007, 20008, 20009, 20010, 20011, 20012, 20013, 20020,
			20021, 20022, 20023, 20024, 20025, 20026, 20030, 20031, 20032, 20033, 20035, 20036, 20101, 20106,
		 	20107, 20201, 20202, 20203, 20204, 20205, 20206, 20207, 20208, 20301, 20302, 20304, 20304];
		{
		ctrlShow [_x, false];
		} forEach [20014, 20102, 20040];

		["LoadMags"] call BSF_Client_AmmoCraft_GUI_Load;
		};

	case ("LoadMags") : {
		private ["_display", "_magInventory", "_magQuantity", "_partsInventory", "_partIndex", "_ctrlPartsContainer", "_ctrlMagInvContainer", "_ctrlAmmoSelect", "_magIndex", "_weaponIndex", "_ctrlDisassembleButton", "_ctrlPlayerWeapon", "_ctrlPlayerWeaponMags", "_ctrlReqContainer", "_magSelection"];

		disableSerialization;
		_display = uiNamespace getVariable ["BSF_AmmoCraft_Dialog",displayNull];
    	_ctrlDisassembleButton = (_display displayCtrl 20106);
		_ctrlDisassembleButton ctrlEnable false;
    	_ctrlMagInvContainer = (_display displayCtrl 20201);
		_ctrlMagInvContainer lbSetCurSel -1;
		lbClear _ctrlMagInvContainer;
   		_ctrlPartsContainer = (_display displayCtrl 20203);
		_ctrlPartsContainer lbSetCurSel -1;
		lbClear _ctrlPartsContainer;
  		_ctrlPlayerWeapon = (_display displayCtrl 20204);
  		_ctrlPlayerWeaponMags = (_display displayCtrl 20205);
		_ctrlReqContainer = (_display displayCtrl 20206);

		////////////// Gather mags
		_magInventory = nil;
		_magInventory = createHashMap;
		_magQuantity = createHashMap;
		waitUntil{!isNil "_magInventory"};
		{
			_mag = AmmoMap get (_x select 0);
		if ((count _mag < 1)) then 
			{}
		else 
			{
				_magClass = _mag select 0;
				_magType =  _mag select 2;
				_displayName = _mag select 1;
				_roundCount = _x select 1;
				_powderPerRound = _mag select 4;
				_powderCount = _roundCount * _powderPerRound;
				_magPic = getText(configFile >> "CfgMagazines" >> _magClass >> "picture");

				if !((_x select 0) in _magInventory) then {
					_magInventory set [_magClass,[_magClass,_displayName, _magType, _roundCount, _powderCount, _magPic]];
					_magQuantity set [_magClass, 1];
				}
				else 
					{
					_curRounds = _magInventory get (_x select 0) select 3;
					_curPowder = _magInventory get (_x select 0) select 4;
					_magInventory set [_magClass,[_magClass,_displayName, _magType, _roundCount + _curRounds, _powderCount + _curPowder, _magPic]];
					_magCount = (_magQuantity get _magClass) + 1;
					_magQuantity set [_magClass, _magCount];
				};
			};
		} forEach (magazinesAmmo player);
		diag_log format['BSF_Client_AmmoCraft_GUI_Load _magInventory: %1', _magInventory];

		//////////////  Main Inventory Window
		_magIndex = 0;
		{
			_className = _magInventory get _x select 0;
			_displayName = _magInventory get _x select 1;
			_caliber = _magInventory get _x select 2;
			_rounds = _magInventory get _x select 3;
			_powder = _magInventory get _x select 4;
			_pic = _magInventory get _x select 5;
			_quantity = _magQuantity get _className;
			_ctrlMagInvContainer lnbAddRow [_displayName, str _quantity, str _rounds, str _powder];
			_ctrlMagInvContainer lnbSetPicture [[_magIndex, 0], _pic];
			_ctrlMagInvContainer lnbSetData [[_magIndex,0],_className];
			_data = _ctrlMagInvContainer lnbData [_magIndex, 0];
			_magIndex = _magIndex + 1;
		} forEach _magInventory;
		 _ctrlMagInvContainer lnbSort [0, true];
		//////////////  Main Inventory Window ^^^

		[] call fnc_displayPartsInInventory;

		////////////// Display weapons in inventory
		lbClear _ctrlPlayerWeapon;
		_weaponIndex = 0;
		{
			_weaponClassName = _x;
			_configName = _x call ExileClient_util_gear_getConfigNameByClassName;
			_weaponDisplayName = getText(configFile >> _configName >> _x >> "displayName");
			_weaponPic = getText(configFile >> _configName >> _x >> "picture");
			_ctrlPlayerWeapon lbAdd _weaponDisplayName;
			_ctrlPlayerWeapon lbSetPicture [_weaponIndex, _weaponPic];
			_ctrlPlayerWeapon lbSetData [_weaponIndex,_weaponClassName];
			_weaponIndex = _weaponIndex + 1;
		} forEach weapons player;
		lbSort _ctrlPlayerWeapon;
		////////////// Display weapons in inventory ^^^
	}; // End case "LoadMags"

	case "Disassemble" : {

		private ["_itemDisplayName", "_magArray", "_magClassName", "_itemsToRefund", "_magCaliber", "_inventory", "_ctrlMagInvContainer", "_ctrlPlayerWeapon"];

	   	_ctrlMagInvContainer = (_display displayCtrl 20201);
  		_ctrlPlayerWeapon = (_display displayCtrl 20204);
		lbClear _ctrlPlayerWeapon;

		_magClassName = _ctrlMagInvContainer lnbData [(lbCurSel _ctrlMagInvContainer),0];
		{
		  if (_y select 1 == _itemDisplayName) then {
		    _magArray pushback _x;
		    _magClassName = _magArray select 0;
		  };
		} forEach AmmoMap;

		_itemsToRefund = 0;
		if (_magClassName == "") then {["Load"] call BSF_Client_AmmoCraft_GUI_Load;} else 
		{
			{
			    if (_magClassName isEqualTo (_x select 0)) then {
			        if (!(_x select 2)) then {
			        	_count = _x select 1;
			            _itemsToRefund = _itemsToRefund + _count;
			        };
			    };
			} forEach magazinesAmmoFull player;

			////////////// Refund parts to player inventory
			 _magCaliber = AmmoMap get _magClassName select 2;
			_inventory = [_magCaliber] call BSF_Client_AmmoCraft_GetPlayerCraftingInventory;
			[_magCaliber,_inventory,_itemsToRefund,_magClassName] call BSF_Client_AmmoCraft_GiveRepackedInventory;

			////////////// Remove disassembled mags
			player removeMagazines _magClassName;

			["InfoTitleOnly", "Ammo Recycled"] call ExileClient_gui_toaster_addTemplateToast;
		};
		[] call BSF_Client_AmmoCraft_RefreshRequirements;
		["LoadMags"] call BSF_Client_AmmoCraft_GUI_Load;
	}; // End case "Disassemble"

	case "WeaponSelect" : {

		private ["_display", "_ctrlPlayerWeapon", "_ctrlCategorySelect", "_ctrlRecipeSelect", "_weaponName", "_configSearch", "_weaponClassName", "_configName", "_weaponMags", "_ctrlPlayerWeaponMags", "_ctrlReqContainer", "_MagIndex"];
		disableSerialization;
		_display = uiNamespace getVariable ["BSF_AmmoCraft_Dialog",displayNull];
 		ctrlEnable [20205,true];
		ctrlShow [20007, true];
		ctrlShow [20008, true];
		ctrlShow [20009, false];

		_ctrlCategorySelect = (_display displayCtrl 20207);
		_ctrlCategorySelect lbSetCurSel -1;
		lbClear _ctrlCategorySelect;
		//////
		_ctrlRecipeSelect = (_display displayCtrl 20208);
		_ctrlRecipeSelect lbSetCurSel -1;
		lbClear _ctrlRecipeSelect;
		//////

        _ctrlPlayerWeapon = _display displayCtrl 20204;
        _weaponName = _ctrlPlayerWeapon lbText (lbCurSel _ctrlPlayerWeapon);
		_weaponClassName = _ctrlPlayerWeapon lbData (lbCurSel _ctrlPlayerWeapon);
		_configName = _weaponClassName call ExileClient_util_gear_getConfigNameByClassName;
		_weaponMags = getArray(configFile >> _configName >> _weaponClassName >> "magazines");

		_ctrlPlayerWeaponMags = (_display displayCtrl 20205);	// PlayerWeaponMags
		_ctrlPlayerWeaponMags lbSetCurSel -1;
		lbClear _ctrlPlayerWeaponMags;
		_ctrlReqContainer = (_display displayCtrl 20206);
		lbClear _ctrlReqContainer;

		////////////// Populate mags used by selected weapon
		_MagIndex = 0;
		{
			_configName = _x call ExileClient_util_gear_getConfigNameByClassName;
			_DisplayName = getText(configFile >> _configName >> _x >> "displayName");

			_Pic = getText(configFile >> _configName >> _x >> "picture");
			_ctrlPlayerWeaponMags lbAdd _DisplayName;
			_ctrlPlayerWeaponMags lbSetPicture [_MagIndex, _Pic];
			_MagIndex = _MagIndex + 1;
		} forEach _weaponMags;
		lbSort _ctrlPlayerWeaponMags;
		////////////// Populate mags used by selected weapon ^^^
	}; // End case "WeaponSelect"

	case "MagCraftSelect" : {

		private ["_canCraft", "_display", "_ctrlPlayerWeapon", "_canCraft", "_ctrlPlayerWeaponMags", "_ctrlRecipeSelect", "_MagName", "_configSearch", "_magClassName", "_configName", "_MagData", "_MagType", "_RoundCount", "_PowderCount", "_magCaliber", "_inventory", "_bulletInvCount", "_brassInvCount", "_powderInvCount", "_ctrlReqContainer", "_ctrlMagInvContainer"];
		disableSerialization;

		_display = uiNamespace getVariable ["BSF_AmmoCraft_Dialog",displayNull];
        _ctrlPlayerWeaponMags = _display displayCtrl 20205;
        _MagName = _ctrlPlayerWeaponMags lbText (lbCurSel _ctrlPlayerWeaponMags);
		_configSearch = _MagName call ExileClient_util_gear_getConfigEntryByDisplayName;
		_magClassName = _configSearch select 0;
		_configName = _configSearch select 1;
		ctrlEnable [20107,false];
		_canCraft = false;

		_ctrlCategorySelect = (_display displayCtrl 20207);
		_ctrlCategorySelect lbSetCurSel -1;
		lbClear _ctrlCategorySelect;
		_ctrlRecipeSelect = (_display displayCtrl 20208);
		_ctrlRecipeSelect lbSetCurSel -1;
		lbClear _ctrlRecipeSelect;

		_ctrlReqContainer = (_display displayCtrl 20206);	// ReqContainer
		_ctrlMagInvContainer = (_display displayCtrl 20201);	// MagInvContainer
		lbClear _ctrlReqContainer;

		[] call fnc_RefreshRequirements;
		// [] call BSF_Client_AmmoCraft_RefreshRequirements;
	}; // End case "MagCraftSelect"

	case "CraftMag":{	// Craft mag selected in 20205
		private ["_display", "_ctrlPlayerWeaponMags", "_ctrlRecipeSelect", "_CraftDisplayName", "_configSearch", "_CraftClassName", "_configName", "_CraftMag", "_magCaliber", "_BulletCost", "_BrassCost", "_PowderCost", "_inventory", "_bulletInvType", "_bulletInvCount", "_brassInvType", "_brassInvCount", "_powderInvCount", "_magCapacity"];

		disableSerialization;
		_display = uiNamespace getVariable ["BSF_AmmoCraft_Dialog",displayNull];

        _ctrlPlayerWeaponMags = _display displayCtrl 20205;
		_ctrlRecipeSelect = (_display displayCtrl 20208);
		_CraftDisplayName = "";
        if ((lbCurSel _ctrlPlayerWeaponMags) > -1) then 
        	{
        _CraftDisplayName = _ctrlPlayerWeaponMags lbText (lbCurSel _ctrlPlayerWeaponMags);
        };
        if ((lbCurSel _ctrlRecipeSelect) > -1) then 
        	{
        _CraftDisplayName = _ctrlRecipeSelect lbText (lbCurSel _ctrlRecipeSelect);
        };

		_configSearch = _CraftDisplayName call ExileClient_util_gear_getConfigEntryByDisplayName;
		_CraftClassName = _configSearch select 0;
		_configName = _configSearch select 1;

		_CraftMag = 	AmmoMap get _CraftClassName;
		_magCaliber = 	(_CraftMag select 2);
		_BulletCost = 	(_CraftMag select 3);
		_BrassCost = 	(_CraftMag select 3);
		_PowderCost = 	(_CraftMag select 4) * _BrassCost;
		_inventory = 	[_magCaliber] call BSF_Client_AmmoCraft_GetPlayerCraftingInventory;

		_bulletInvType =	_inventory select 0 select 0;
		_bulletInvCount = 	_inventory select 0 select 2;
		_brassInvType = 	_inventory select 1 select 0;
		_brassInvCount = 	_inventory select 1 select 2;
		_powderInvCount = 	_inventory select 2 select 2;
		diag_log format['BSF CraftMag _CraftMag %1 - %2',_CraftMag, typeName _CraftMag];
		diag_log format['BSF CraftMag _magCaliber %1 - %2',_magCaliber, typeName _magCaliber];
		diag_log format['BSF CraftMag _BulletCost %1 - %2',_BulletCost, typeName _BulletCost];
		diag_log format['BSF CraftMag _BrassCost %1 - %2',_BrassCost, typeName _BrassCost];
		diag_log format['BSF CraftMag _PowderCost %1 - %2',_PowderCost, typeName _PowderCost];
		diag_log format['BSF CraftMag _inventory %1 - %2',_inventory, typeName _inventory];
		diag_log format['BSF CraftMag _bulletInvType %1 - %2',_bulletInvType, typeName _bulletInvType];
		diag_log format['BSF CraftMag _bulletInvCount %1 - %2',_bulletInvCount, typeName _bulletInvCount];
		diag_log format['BSF CraftMag _brassInvType %1 - %2',_brassInvType, typeName _brassInvType];
		diag_log format['BSF CraftMag _brassInvCount %1 - %2',_brassInvCount, typeName _brassInvCount];
		diag_log format['BSF CraftMag _powderInvCount %1 - %2',_powderInvCount, typeName _powderInvCount];

		_bulletInvCount = 	_bulletInvCount - _BulletCost;
		_brassInvCount = 	_brassInvCount - _BrassCost;
		_powderInvCount = 	_powderInvCount - _PowderCost;
		diag_log format['BSF CraftMag _bulletInvCount 2 %1 - %2',_bulletInvCount, typeName _bulletInvCount];
		diag_log format['BSF CraftMag _brassInvCount 2 %1 - %2',_brassInvCount, typeName _brassInvCount];
		diag_log format['BSF CraftMag _powderInvCount 2 %1 - %2',_powderInvCount, typeName _powderInvCount];

		////////////// Remove all crafting components and add crafted mag
		{player removeMagazines _x;
		} forEach [_bulletInvType,_brassInvType,"BSF_GunPowder_Box"];
		
		player addMagazine _CraftClassName;
		["InfoTitleOnly", format["Added: %1",_CraftDisplayName]] call ExileClient_gui_toaster_addTemplateToast;
		////////////// Refdund remaining crafting components
		_magCapacity = 250;

		while {_bulletInvCount > 0} do
		{
			_bulletsToRefundThisRound = _bulletInvCount min _magCapacity;
			player addMagazine [_bulletInvType, _bulletsToRefundThisRound];
			_bulletInvCount = _bulletInvCount - _bulletsToRefundThisRound;
			diag_log format['BSF CraftMag _bulletsToRefundThisRound %1 - %2',_bulletsToRefundThisRound, typeName _bulletsToRefundThisRound];
			diag_log format['BSF CraftMag _bulletInvCount %1 - %2',_bulletInvCount, typeName _bulletInvCount];
		};

		while {_brassInvCount > 0} do
		{
			_brassToRefundThisRound = _brassInvCount min _magCapacity;
			player addMagazine [_brassInvType, _brassToRefundThisRound];
			_brassInvCount = _brassInvCount - _brassToRefundThisRound;
			diag_log format['BSF CraftMag _brassToRefundThisRound %1 - %2',_brassToRefundThisRound, typeName _brassToRefundThisRound];
			diag_log format['BSF CraftMag _brassInvCount %1 - %2',_brassInvCount, typeName _brassInvCount];
		};

		while {_powderInvCount > 0} do
		{
			_powderToRefundThisRound = _powderInvCount min _magCapacity;
			player addMagazine ["BSF_GunPowder_Box", _powderToRefundThisRound];
			_powderInvCount = _powderInvCount - _powderToRefundThisRound;
			diag_log format['BSF CraftMag _powderToRefundThisRound %1 - %2',_powderToRefundThisRound, typeName _powderToRefundThisRound];
			diag_log format['BSF CraftMag _powderInvCount %1 - %2',_powderInvCount, typeName _powderInvCount];
		};
		////////////// Refdund remaining crafting components ^^^
		
		[] call fnc_displayPartsInInventory;
		[] call BSF_Client_AmmoCraft_RefreshRequirements;
		["LoadMags"] call BSF_Client_AmmoCraft_GUI_Load;
	}; // End case "CraftMag"

	case "ClearSelections" : {
		private ["_display", "_ctrlDisassembleButton", "_ctrlPartsContainer", "_ctrlReqContainer"];
		disableSerialization;
		_display = uiNamespace getVariable ["BSF_AmmoCraft_Dialog",displayNull];

    	_ctrlDisassembleButton = (_display displayCtrl 20106);
		_ctrlDisassembleButton ctrlEnable true;
   		_ctrlPartsContainer = (_display displayCtrl 20203);
		_ctrlPartsContainer lbSetCurSel -1;
		_ctrlReqContainer = (_display displayCtrl 20206);
		_ctrlReqContainer lbSetCurSel -1;
	}; // End case "ClearSelections"

	case "CategorySelect" : {
		private ["_display", "_ctrlReqContainer", "_ctrlPlayerWeapon", "_ctrlPlayerWeaponMags", "_ctrlCategorySelect", "_ctrlRecipeSelect", "_ctrlDisassembleButton", "_ctrlPartsContainer", "_categoryList", "_SelectedCategory", "_recipeIndex"];
		disableSerialization;
		_display = uiNamespace getVariable ["BSF_AmmoCraft_Dialog",displayNull];

		_ctrlReqContainer = (_display displayCtrl 20206);
		_ctrlReqContainer lbSetCurSel -1;
		lbClear _ctrlReqContainer;
  		_ctrlPlayerWeapon = (_display displayCtrl 20204);
		_ctrlPlayerWeapon lbSetCurSel -1;
  		_ctrlPlayerWeaponMags = (_display displayCtrl 20205);
		_ctrlPlayerWeaponMags lbSetCurSel -1;
		lbClear _ctrlPlayerWeaponMags;
		_ctrlCategorySelect = (_display displayCtrl 20207);
		lbClear _ctrlCategorySelect;
		_ctrlRecipeSelect = (_display displayCtrl 20208);
		_ctrlRecipeSelect lbSetCurSel -1;
		lbClear _ctrlRecipeSelect;
		ctrlEnable [20205,false];
		ctrlShow [20007, false];
		ctrlShow [20009, true];

		_categoryList = [
		"4.6 x 30 mm", "5.45 x 39 mm", "5.56 x 45 mm", "5.80 x 42 mm", "6.5 x 39 mm", "7.62 x 25 mm", "7.62 x 39 mm", 
		"7.62 x 51 mm", "7.62 x 54 mm", "7.62 x 63 mm", "7.65 x 17 mm", "7.92 x 33 mm", "7.92 x 57 mm", "8 mm", "9 x 18 mm", 
		"9 x 19 mm", "9 x 21 mm", "9 x 39 mm", "9.3 x 64 mm", "12.7 x 54 mm", "12.7 x 99 mm", "12.7 x 108 mm", 
		".22 LR ", ".300 Win Mag", ".303", ".338 ", ".408", ".45 ACP", "11.43 x 23 (.45 ACP)", ".50 BW ", ".50 BMG (12.7 x 99 mm)", "Shotgun"
		];

		{ 
			_ctrlCategorySelect lbAdd  _x;
		} forEach _categoryList;
		lbSort _ctrlCategorySelect;

		////////////// Gather recipes

		_SelectedCategory = _ctrlCategorySelect lbText (lbCurSel _ctrlCategorySelect);
		_recipeIndex = 0;

		{
			_mag = AmmoMap get _x;

			_Pic = getText(configFile >> "CfgMagazines" >> _mag select 0 >> "picture");
			_displayName = _mag select 1;
			_category = _mag select 5;

			if (_category isEqualTo _SelectedCategory) then 
				{
				_ctrlRecipeSelect lbAdd _displayName;
				_ctrlRecipeSelect lbSetPicture [_recipeIndex, _Pic];
				_recipeIndex = _recipeIndex + 1;
			};
		} forEach AmmoMap;
	}; // End case "CategorySelect"

	case "RecipeSelect" : {
		private ["_display", "_ctrlRecipeSelect"];
		disableSerialization;
		_display = uiNamespace getVariable ["BSF_AmmoCraft_Dialog",displayNull];
		_ctrlRecipeSelect = (_display displayCtrl 20208);

		ctrlShow [20008, false];
		ctrlEnable [20205,false];

        if ((lbCurSel _ctrlRecipeSelect) > -1) then 
		{
			[] call BSF_Client_AmmoCraft_RefreshRequirements;
		};
	}; // End case "X3"

	case "Instructions" : {
		private ["_display"];
		disableSerialization;
		_display = uiNamespace getVariable ["BSF_AmmoCraft_Dialog",displayNull];

		{ctrlShow [_x, false];
		} forEach [20002, 20003, 20004, 20005, 20006, 20007, 20008, 20009, 20010, 20011, 20012, 20013, 20020,
			20021, 20022, 20023, 20024, 20025, 20026, 20030, 20031, 20032, 20033, 20035, 20036, 20101, 20106,
		 	20107, 20201, 20202, 20203, 20204, 20205, 20206, 20207, 20208, 20301, 20302, 20304, 20304];

		{ctrlShow [_x, true];
		} forEach [20102, 20014, 20040];

		_ctrlContent = (_display displayCtrl 20040);
		_ctrlContent ctrlSetStructuredText parseText "";
		_content = "
			<img size='2' align='center' image='BSF_Client\images\BSF_Logo_Dirty_1024x256.paa' />
			<br />
			Most magazines can be broken down into 3 parts... bullets, casings, and powder. 
			There are currently 5 classes of ammo components.  Those are:
			<br />
			     <t font='PuristaSemibold'>Handgun</t> - 1 bullet, 1 case, and 1 powder returned per round.<br />
			     <t font='PuristaSemibold'>Rifle</t> - 1 bullet, 1 case, and 2 powder returned per round. <br />
			     <t font='PuristaSemibold'>Large Caliber</t> - 1 bullet, 1 case, and 3 powder returned per round. <br />
			     <t font='PuristaSemibold'>Shotgun Pellets</t> - 1 unit of pellets, 1 case, and 2 powder returned per round.<br />
			     <t font='PuristaSemibold'>Shotgun Slugs</t> - 1 slug, 1 case, and 2 powder returned per round. <br />
			<br />
			The <t font='PuristaBold'>MAGS IN IVENTORY</t> panel lists every mag type currently in inventory, how many you have, and what the component return count will be if recycled. 
			Clicking on <t font='PuristaBold'>DISASSEMBLE SELECTED</t> will recycle every mag of that type in inventory and deposit the returned parts to inventory.
			<t size='1.1'> </t>
			<br />
			<br />
			<t font='PuristaSemibold'>There are 2 ways to craft magazines:</t> 
			<br />
			<t font='PuristaBold'>1 -</t> Select a weapon in the <t font='PuristaBold'>WEAPONS IN IVENTORY</t> panel. 
			All craftable mags for that weapon will appear in the panel below. Select one of these mags.  If you have the required components, click <t font='PuristaBold'>CRAFT SELECTED</t>.
			<br />
			<t font='PuristaBold'>2 -</t> Select category and recipe from the appropriate dropdown menus. Again, if you have the required components, click <t font='PuristaBold'>CRAFT SELECTED</t>.
			<br />
			";
  		 _ctrlContent ctrlSetStructuredText parseText _content;
	}; // End case "Instructions"

	case "X3" : {
		private ["_display"];
		disableSerialization;
		_display = uiNamespace getVariable ["BSF_AmmoCraft_Dialog",displayNull];
	}; // End case "X3"

};







/////////////////////////// DEBUG STUFF
/*
player removeMagazines "rhs_45Rnd_545X39_7N6M_AK";     
_items = [ 
"rhs_weap_M590_8RD", 
"arifle_Mk20C_F",  
"hgun_PDW2000_F",  
"hgun_ACPC2_F",  
"rhs_weap_rpk74m",  
"rhsusf_50Rnd_762x51",
"rhsusf_50Rnd_762x51",   
"rhsusf_50Rnd_762x51_m61_ap",   
"rhsusf_50Rnd_762x51_m61_ap",
"rhsusf_50Rnd_762x51_m62_tracer",   
"rhsusf_50Rnd_762x51_m80a1epr",   
"rhsusf_50Rnd_762x51_m993",   
"rhsusf_5Rnd_00Buck",   
"rhsusf_5Rnd_300winmag_xm2010",   
"rhsusf_5Rnd_762x51_AICS_m118_special_Mag",   
"rhsusf_5Rnd_762x51_AICS_m62_Mag",   
"rhsusf_5Rnd_762x51_AICS_m993_Mag",   
"rhsusf_5Rnd_762x51_m118_special_Mag",   
"rhsusf_5Rnd_doomsday_Buck",   
"rhsusf_5Rnd_Slug",   
"rhsusf_8Rnd_00Buck",   
"rhsusf_8Rnd_doomsday_Buck",   
"rhsusf_8Rnd_Slug",   
"rhsusf_mag_10Rnd_STD_50BMG_M33",   
"rhsusf_mag_15Rnd_9x19_FMJ",   
 
"rhsusf_mag_40Rnd_46x30_AP",   
"rhsusf_mag_40Rnd_46x30_FMJ",   
"rhsusf_mag_7x45acp_MHP"   
   
];   
{     
 player addItem _x;     
}forEach _items;   
*/
