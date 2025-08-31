/*
* BSF_Client_AmmoCraft_inventory_event_DoubleClick
*
* BS-Free Game Servers
* www.bs-free.com
* © 2023 Troy - BS-Free
*
* This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
* To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
*/

private["_itemControl", "_itemControlIndex", "_indexFactor", "_itemClassName", "_itemDisplayName", "_configName", "_configSearch","_ammoParts"];
_itemControl = _this select 0;
_indexFactor = 1;

switch str _itemControl do 
	{
		case "Control #20201" : {	// MagInventoryContainer
			_indexFactor = 4;

			if ((_this select 1) == 0 ) then 
				{_itemControlIndex = 0;} 
				else 
				{_itemControlIndex = (_this select 1) * _indexFactor};
			
			_itemClassName = _itemControl lbData _itemControlIndex;
			_itemDisplayName = _itemControl lbText _itemControlIndex;
			_configName = "";

			if( _itemClassName == "" ) then
			{
				_configSearch = _itemDisplayName call ExileClient_util_gear_getConfigEntryByDisplayName;
				_itemClassName = _configSearch select 0;
				_configName = _configSearch select 1;
			}
			else 
			{
				_configName = _itemClassName call ExileClient_util_gear_getConfigNameByClassName;
			};
			if( _configName != "" ) then
			{
				[_configName, _itemClassName] call ExileClient_gui_itemDetails_show;
			};
		};

		case "Control #20203" : {	// PartsContainer
			_indexFactor = 2;

			if ((_this select 1) == 0 ) then 
				{_itemControlIndex = 0;} 
				else 
				{_itemControlIndex = (_this select 1) * _indexFactor};

			_itemClassName = _itemControl lbData _itemControlIndex;
			_itemDisplayName = _itemControl lbText _itemControlIndex;

			_ammoParts = createHashMapFromArray [
				["Bullets, Handgun","BSF_BulletTip_Box_Handgun"],
				["Bullets, Rifle","BSF_BulletTip_Box_AR"],
				["Bullets, Large Caliber","BSF_BulletTip_Box_Large"],
				["Buckshot","BSF_BulletTip_Box_Shot"],
				["12 Gauge Slugs","BSF_BulletTip_Box_Slug"],
				["Brass, Handgun","BSF_BulletCase_Box_Handgun"],
				["Brass, Rifle","BSF_BulletCase_Box_AR"],
				["Brass, Large Caliber","BSF_BulletCase_Box_Large"],
				["12 Gauge Shotgun Hulls","BSF_BulletCase_Box_Shot"],
				["Powder","BSF_GunPowder_Box"]
				];

			_itemClassName = _ammoParts get _itemDisplayName;
			["CfgMagazines", _itemClassName] call ExileClient_gui_itemDetails_show;
		};

		case "Control #20204" : {	// MagInventoryContainer
			_indexFactor = 1;

			if ((_this select 1) == 0 ) then 
				{_itemControlIndex = 0;} 
				else 
				{_itemControlIndex = (_this select 1) * _indexFactor};
			
			_itemClassName = _itemControl lbData _itemControlIndex;
			_itemDisplayName = _itemControl lbText _itemControlIndex;
			_configName = "";

			if( _itemClassName == "" ) then
			{
				_configSearch = _itemDisplayName call ExileClient_util_gear_getConfigEntryByDisplayName;
				_itemClassName = _configSearch select 0;
				_configName = _configSearch select 1;
			}
			else 
			{
				_configName = _itemClassName call ExileClient_util_gear_getConfigNameByClassName;
			};
			if( _configName != "" ) then
			{
				[_configName, _itemClassName] call ExileClient_gui_itemDetails_show;
			};
		};

		case "Control #20205" : {	// PlayerWeaponMags
			_indexFactor = 1;

			if ((_this select 1) == 0 ) then 
				{_itemControlIndex = 0;} 
				else 
				{_itemControlIndex = (_this select 1) * _indexFactor};
			
			_itemClassName = _itemControl lbData _itemControlIndex;
			_itemDisplayName = _itemControl lbText _itemControlIndex;
			_configName = "";

			if( _itemClassName == "" ) then
			{
				_configSearch = _itemDisplayName call ExileClient_util_gear_getConfigEntryByDisplayName;
				_itemClassName = _configSearch select 0;
				_configName = _configSearch select 1;
			}
			else 
			{
				_configName = _itemClassName call ExileClient_util_gear_getConfigNameByClassName;
			};
			if( _configName != "" ) then
			{
				[_configName, _itemClassName] call ExileClient_gui_itemDetails_show;
			};
		};

		case "Control #20206" : {	// PartsContainer
			_indexFactor = 3;

			if ((_this select 1) == 0 ) then 
				{_itemControlIndex = 0;} 
				else 
				{_itemControlIndex = (_this select 1) * _indexFactor};

			_itemClassName = _itemControl lbData _itemControlIndex;
			_itemDisplayName = _itemControl lbText _itemControlIndex;

			_ammoParts = createHashMapFromArray [
				["Bullets, Handgun","BSF_BulletTip_Box_Handgun"],
				["Bullets, Rifle","BSF_BulletTip_Box_AR"],
				["Bullets, Large Caliber","BSF_BulletTip_Box_Large"],
				["Buckshot","BSF_BulletTip_Box_Shot"],
				["12 Gauge Slugs","BSF_BulletTip_Box_Slug"],
				["Brass, Handgun","BSF_BulletCase_Box_Handgun"],
				["Brass, Rifle","BSF_BulletCase_Box_AR"],
				["Brass, Large Caliber","BSF_BulletCase_Box_Large"],
				["12 Gauge Shotgun Hulls","BSF_BulletCase_Box_Shot"],
				["Powder","BSF_GunPowder_Box"]
				];

			_itemClassName = _ammoParts get _itemDisplayName;
			["CfgMagazines", _itemClassName] call ExileClient_gui_itemDetails_show;
		};



	};

// diag_log format['BSF _this %1',_this];
// diag_log format['BSF _itemControl %1',_itemControl];
// diag_log format['BSF _itemControlIndex %1',_itemControlIndex];
// diag_log format['BSF _itemClassName %1',_itemClassName];
// diag_log format['BSF _itemDisplayName %1',_itemDisplayName];
// diag_log format['BSF _indexFactor %1',_indexFactor];

true