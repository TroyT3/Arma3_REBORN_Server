/*
* BSF_Client_AssetManagement_inventory_event_DoubleClick.sqf
* BSF_Client\code\
*
* BS-Free Game Servers
* www.bs-free.com
* © 2023 Troy - BS-Free
*
* This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
* To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
*/

private ["_itemControl", "_indexFactor", "_itemControlIndex", "_itemClassName", "_itemDisplayName", "_configName", "_configSearch"];
_itemControl = _this select 0;
_indexFactor = 1;

switch str _itemControl do 
	{
		case "Control #30201" : {	// VehiclesContainer
			_indexFactor = 1;

			if ((_this select 1) == 0 ) then 
				{_itemControlIndex = 0;} 
				else 
				{_itemControlIndex = (_this select 1) * _indexFactor};
			
			_itemClassName = _itemControl lnbData [_itemControlIndex,1];
			_itemDisplayName = _itemControl lnbText [_itemControlIndex,0];
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

		case "Control #30202" : {	// VehicleInvContainer
			_indexFactor = 1;

			if ((_this select 1) == 0 ) then 
				{_itemControlIndex = 0;} 
				else 
				{_itemControlIndex = (_this select 1) * _indexFactor};
			
			_itemClassName = _itemControl lnbData [_itemControlIndex,0];
			_itemDisplayName = _itemControl lnbText [_itemControlIndex,1];
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
	};
true