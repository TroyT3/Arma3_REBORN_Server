/*
* BSF_Client_AmmoCraft_GetPlayerCraftingInventory
* BSF\AmmoCrafting\functions\BSF_Client_AmmoCraft_GetPlayerCraftingInventory.sqf
*
* BS-Free Game Servers
* www.bs-free.com
* © 2023 Troy - BS-Free
*
* This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
* To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
*/
params ["_magCaliber"];
private ["_bulletTip" ,"_BulletCase" ,"_BulletPic" ,"_BrassPic" ,"_PowderPic" ,"_partsInventory" ,"_bulletInventory" ,"_bulletCaseInventory", "_powderInventory", "_inventory"];

// _ammoParts = createHashMapFromArray [
// 	["BSF_BulletTip_Box_Handgun",["BSF_BulletTip_Box_Handgun","Bullets, Handgun","HG"]],
// 	["BSF_BulletTip_Box_AR",["BSF_BulletTip_Box_AR","Bullets, Rifle","AR"]],
// 	["BSF_BulletTip_Box_Large",["BSF_BulletTip_Box_Large","Bullets, Large Caliber","LC"]],
// 	["BSF_BulletTip_Box_Shot",["BSF_BulletTip_Box_Shot","Buckshot","Shot"]],
// 	["BSF_BulletTip_Box_Slug",["BSF_BulletTip_Box_Slug","12 Gauge Slugs","Slug"]],
// 	["BSF_BulletCase_Box_Handgun",["BSF_BulletCase_Box_Handgun","Brass, Handgun","HG"]],
// 	["BSF_BulletCase_Box_AR",["BSF_BulletCase_Box_AR","Brass, Rifle","AR"]],
// 	["BSF_BulletCase_Box_Large",["BSF_BulletCase_Box_Large","Brass, Large Caliber","LC"]],
// 	["BSF_BulletCase_Box_Shot",["BSF_BulletCase_Box_Shot","12 Gauge Shotgun Hulls","Shot"]],
// 	["BSF_GunPowder_Box",["BSF_GunPowder_Box","Powder",""]]
// 	];

	_bulletTip = [];
	_BulletCase = [];
	switch _magCaliber do
		{
		case "AR" : {
				_bulletTip = ["BSF_BulletTip_Box_AR","Bullets, Rifle"];
				_BulletCase = ["BSF_BulletCase_Box_AR","Brass, Rifle"];
				};
		case "HG" : {
				_bulletTip = ["BSF_BulletTip_Box_Handgun","Bullets, Handgun"];
				_BulletCase = ["BSF_BulletCase_Box_Handgun","Brass, Handgun"];
				};
		case "LC" : {
				_bulletTip = ["BSF_BulletTip_Box_Large","Bullets, Large Caliber"];
				_BulletCase = ["BSF_BulletCase_Box_Large","Brass, Large Caliber"];
				};
		case "Shot" : {
				_bulletTip = ["BSF_BulletTip_Box_Shot","Buckshot"];
				_BulletCase = ["BSF_BulletCase_Box_Shot","12 Gauge Shotgun Hulls"];
				};
		case "Slug" : {
				_bulletTip = ["BSF_BulletTip_Box_Slug","12 Gauge Slugs"];
				_BulletCase = ["BSF_BulletCase_Box_Shot","12 Gauge Shotgun Hulls"];
				};
		default 	{
				_bulletTip = ["BSF_BulletTip_Box_Handgun","Bullets, Handgun"];
				_BulletCase = ["BSF_BulletCase_Box_Handgun","Brass, Handgun"];
				};
			};
	_BulletPic = getText(configFile >> "CfgMagazines" >> _bulletTip select 0 >> "picture");
	_BrassPic = getText(configFile >> "CfgMagazines" >> _BulletCase select 0 >> "picture");
	_PowderPic = getText(configFile >> "CfgMagazines" >> "BSF_GunPowder_Box" >> "picture");
	
	_partsInventory = nil;
	_partsInventory = createHashMap;
	waitUntil{!isNil "_partsInventory"};
	{
		_part = AmmoParts get (_x select 0);
		diag_log format['BSF GET INVENTORY _part %1',_part];

		if ((count _part) > 0 ) then 
				{
					_partClass = _part select 0 ;
					_partDisplayName = _part select 1;
					_partCount = _x select 1;
					_partPic = getText(configFile >> "CfgMagazines" >> _partClass >> "picture");

					if !((_x select 0) in _partsInventory) then
					{
					_partsInventory set [_partClass, [_partClass,_partCount, _partPic]];
					}
					else 
					{
						_CurCount = _x select 1;
						_partsInventory set [_partClass, [_partClass, (_partsInventory get _partClass select 1) + _CurCount, _partPic]];
					};
				};
	} forEach (magazinesAmmo player);
	
	_bulletInventory = [_bulletTip select 0, (_bulletTip select 1), 0, _BulletPic];
	_bulletCaseInventory = [_bulletCase select 0, (_bulletCase select 1), 0, _BrassPic];
	_powderInventory = ["BSF_GunPowder_Box","Powder", 0, _PowderPic];

	if !(count _partsInventory == 0) then
		{
			if ((_bulletTip select 0) in _partsInventory) then	
				{
				_bulletInventory = [_bulletTip select 0, _bulletTip select 1, _partsInventory get (_bulletTip select 0) select 1, _BulletPic];
				};
			if ((_bulletCase select 0) in _partsInventory) then	
				{
				_bulletCaseInventory = [_bulletCase select 0, _bulletCase select 1, _partsInventory get (_bulletCase select 0) select 1, _BrassPic];
				};
			if ("BSF_GunPowder_Box" in _partsInventory) then	
				{
				_powderInventory = ["BSF_GunPowder_Box", "Powder", _partsInventory get "BSF_GunPowder_Box" select 1, _PowderPic];
				};
			};	

	_inventory = [];
	_inventory set [0,_bulletInventory];
	_inventory set [1,_bulletCaseInventory];
	_inventory set [2,_powderInventory];

_inventory;