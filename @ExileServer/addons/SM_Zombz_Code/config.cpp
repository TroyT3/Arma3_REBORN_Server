/**
 * Author; StokesMagee
 * Website; www.stokesmagee.net
 * Copyright; © 2017 StokesMagee
 *
 * This work is property of StokesMagee. You do not have permissions to use/edit/distribute any of this content
 * without written permission from StokesMagee.
 */

class CfgPatches
{
	class SM_Zombz_Code
	{
		requiredVersion = 1;
		requiredAddons[] = {"RyanZombies","SM_Zombz"};
		units[] = {};
		weapons[] = {};
		magazines[] = {};
		ammo[] = {};
		version = "v0.4.8";
	};
};

#include "SM_Zombz.hpp"

class CfgFunctions
{
	class SM_Zombz
	{
		class main
		{
			file = "SM_Zombz_Code\init";
			class preInit { preinit = 1; };
		};
	};
};

class CfgVehicles
{
	class Logic;
	class Module_F: Logic
	{
		class AttributesBase
		{
			class Default;
			class Edit;
			class Combo;
			class Checkbox;
			class CheckboxNumber;
			class ModuleDescription;
			class Units;
		};
		class ModuleDescription;
	};

	class SM_Zombz_Zone: Module_F
	{
		function = "SM_Zombz_fnc_zoneInit";
	};
};