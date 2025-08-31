////////////////////////////////////////////////////////////////////
//DeRap: config.bin
//Produced from mikero's Dos Tools Dll version 9.36
//https://mikero.bytex.digital/Downloads
//'now' is Tue Jun 27 14:09:56 2023 : 'file' last modified on Tue Jun 27 14:09:47 2023
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class BSF_Ammo
	{
		requiredVersion = 0.1;
		requiredAddons[] = {"a3_weapons_f","A3_Weapons_F_Enoch"};
		units[] = {};
		weapons[] = {};
		magazines[] = {"BSF_BulletTip_Box_Handgun","BSF_BulletTip_Box_AR","BSF_BulletTip_Box_Large","BSF_BulletTip_Box_Shot","BSF_BulletTip_Box_Slug","BSF_BulletCase_Box_Handgun","BSF_BulletCase_Box_AR","BSF_BulletCase_Box_Large","BSF_BulletCase_Box_Shot","BSF_GunPowder_Box"};
		ammo[] = {"BSF_BulletComponent","BSF_BulletTip","BSF_BulletCase","BSF_GunPowder"};
	};
};
class CfgAmmo
{
	class BulletBase;
	class BSF_BulletComponent: BulletBase
	{
		hit = 8;
		indirectHit = 2;
		indirectHitRange = 0.1;
		cartridge = "FxCartridge_slug";
		dangerRadiusHit = 8;
		cost = 3;
		typicalSpeed = 375;
		airFriction = -0.01;
		caliber = 0.75;
		deflecting = 30;
		class CamShakeFire
		{
			power = 1;
			duration = 0.35;
			frequency = 20;
			distance = 5;
		};
		class CamShakePlayerFire
		{
			power = 1.5;
			duration = 0.35;
			frequency = 20;
		};
		class CamShakeHit
		{
			power = 1.5;
			duration = 1;
			frequency = 15;
		};
		class HitEffects
		{
			Hit_Foliage_green = "ImpactLeavesGreen";
			Hit_Foliage_Dead = "ImpactLeavesDead";
			Hit_Foliage_Green_big = "ImpactLeavesGreenBig";
			Hit_Foliage_Palm = "ImpactLeavesPalm";
			Hit_Foliage_Pine = "ImpactLeavesPine";
			hitFoliage = "ImpactLeaves";
			hitGlass = "ImpactGlass";
			hitGlassArmored = "ImpactGlassThin";
			hitWood = "ImpactWood";
			hitMetal = "ImpactMetal";
			hitMetalPlate = "ImpactMetal";
			hitBuilding = "ImpactPlaster";
			hitPlastic = "ImpactPlastic";
			hitRubber = "ImpactRubber";
			hitConcrete = "ImpactConcrete";
			hitMan = "ImpactEffectsBlood";
			hitGroundSoft = "ImpactEffectsSmall";
			hitGroundRed = "ImpactEffectsRed";
			hitGroundHard = "ImpactEffectsHardGround";
			hitWater = "ImpactEffectsWater";
			hitVirtual = "ImpactMetal";
		};
	};
	class BSF_BulletTip: BSF_BulletComponent{};
	class BSF_BulletCase: BSF_BulletComponent{};
	class BSF_GunPowder: BSF_BulletComponent{};
};
class CfgMagazines
{
	class CA_Magazine;
	class BSF_BulletTip_Box_Base: CA_Magazine
	{
		author = "Troy - BS-Free";
		scope = 0;
		displayname = "";
		displaynameshort = "";
		descriptionshort = "Bullet Tips - Use at an ammo press.";
		model = "\A3\weapons_F\ammo\mag_univ.p3d";
		ammo = "BSF_BulletComponent";
		count = 250;
		initspeed = 396;
		picture = "";
		reloadaction = "GestureReloadMX";
		mass = 4;
	};
	class BSF_BulletTip_Box_Handgun: BSF_BulletTip_Box_Base
	{
		scope = 2;
		displayname = "Handgun bullet tips, 250 count";
		displaynameshort = "Tips for reloading handgun mags. 250 count";
		picture = "\BSF_Community_Addon\addons\BSF_Ammo\data\BSF_Hand_Tips_CA.paa";
	};
	class BSF_BulletTip_Box_AR: BSF_BulletTip_Box_Base
	{
		scope = 2;
		displayname = "AR bullet tips, 250 count";
		displaynameshort = "Tips for reloading AR mags. 250 count";
		picture = "\BSF_Community_Addon\addons\BSF_Ammo\data\BSF_AR_Tips_CA.paa";
	};
	class BSF_BulletTip_Box_Large: BSF_BulletTip_Box_Base
	{
		scope = 2;
		displayname = "Large bullet tips, 250 count";
		displaynameshort = "Tips for reloading large caliber mags. 250 count";
		picture = "\BSF_Community_Addon\addons\BSF_Ammo\data\BSF_Large_Tips_CA.paa";
	};
	class BSF_BulletTip_Box_Shot: BSF_BulletTip_Box_Base
	{
		scope = 2;
		displayname = "Buckshot, 250 count";
		displaynameshort = "Buckshot for reloading shotgun shells. 250 count";
		picture = "\BSF_Community_Addon\addons\BSF_Ammo\data\BSF_Buckshot_CA.paa";
	};
	class BSF_BulletTip_Box_Slug: BSF_BulletTip_Box_Base
	{
		scope = 2;
		displayname = "Slugs, 250 count";
		displaynameshort = "Slugs for reloading shotgun shells. 250 count";
		picture = "\BSF_Community_Addon\addons\BSF_Ammo\data\BSF_Slug_CA.paa";
	};
	class BSF_BulletCase_Box_Base: CA_Magazine
	{
		author = "Troy - BS-Free";
		model = "\A3\weapons_F\ammo\mag_univ.p3d";
		scope = 0;
		count = 250;
		ammo = "BSF_BulletComponent";
		initspeed = 396;
		picture = "\BSF_Community_Addon\addons\BSF_Ammo\data\BSF_Hand_Casing_CA.paa";
		descriptionshort = "Casings for reloading ammo - Use at an ammo press.";
		reloadaction = "GestureReloadMX";
		mass = 4;
	};
	class BSF_BulletCase_Box_Handgun: BSF_BulletCase_Box_Base
	{
		scope = 2;
		displayname = "Handgun bullet casings, 250 count";
		displaynameshort = "Casings for reloading handgun ammo. Use at an ammo press. 250 count";
		picture = "\BSF_Community_Addon\addons\BSF_Ammo\data\BSF_Hand_Casing_CA.paa";
	};
	class BSF_BulletCase_Box_AR: BSF_BulletCase_Box_Base
	{
		scope = 2;
		displayname = "AR bullet casings, 250 count";
		displaynameshort = "Casings for reloading AR ammo. Use at an ammo press. 250 count";
		picture = "\BSF_Community_Addon\addons\BSF_Ammo\data\BSF_AR_Casing_CA.paa";
	};
	class BSF_BulletCase_Box_Large: BSF_BulletCase_Box_Base
	{
		scope = 2;
		displayname = "Carge caliber bullet casings, 250 count";
		displaynameshort = "Casings for reloading large caliber ammo. Use at an ammo press. 250 count";
		picture = "\BSF_Community_Addon\addons\BSF_Ammo\data\BSF_Large_Casing_CA.paa";
	};
	class BSF_BulletCase_Box_Shot: BSF_BulletCase_Box_Base
	{
		scope = 2;
		displayname = "Shotgun shell casings, 250 count";
		displaynameshort = "Casings for reloading shotgun ammo. Use at an ammo press. 250 count";
		picture = "\BSF_Community_Addon\addons\BSF_Ammo\data\BSF_Shotgun_Casing_CA.paa";
	};
	class BSF_GunPowder_Box: CA_Magazine
	{
		author = "Troy - BS-Free";
		scope = 2;
		displayname = "Gun Powder";
		displaynameshort = "Gun powder for reloading ammo. 250 count";
		model = "\A3\weapons_F\ammo\mag_univ.p3d";
		ammo = "BSF_BulletComponent";
		count = 250;
		initspeed = 396;
		picture = "\BSF_Community_Addon\addons\BSF_Ammo\data\BSF_GunPowder.paa";
		descriptionshort = "Gun Powder for reloading.  Use at an ammo press.";
		reloadaction = "GestureReloadMX";
		mass = 4;
	};
};
