////////////////////////////////////////////////////////////////////
//DeRap: Consumable\config.bin
//Produced from mikero's Dos Tools Dll version 9.98
//https://mikero.bytex.digital/Downloads
//'now' is Wed Jul 09 20:03:32 2025 : 'file' last modified on Sat Jul 05 11:43:12 2025
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class BSF_Misc_Consumable
	{
		addonRootClass = "BSF_Misc";
		requiredVersion = 1.92;
		requiredAddons[] = {"BSF_Misc","a3_data_f","A3_Structures_F","exile_assets","A3_props_f_orange","A3_structures_f_epa"};
		units[] = {"BSF_PoisonBottle","BSF_Carla_Cane"};
		weapons[] = {};
		magazines[] = {"BSF_Carla_Cane","BSF_Item_Canteen_OJ","BSF_Item_Canteen_Coffee","BSF_Item_Canteen_WaterDirty","BSF_Item_Canteen_WaterSalt","BSF_Item_Canteen_WaterFresh","BSF_Item_Canteen_Empty","BSF_Item_Orange","BSF_Item_Pumpkin_Raw","BSF_Item_Pumpkin_Cooked","BSF_WaterPure_Tabs","BSF_Item_Injector1","BSF_Item_Vitamins1","BSF_Item_Pain_Killlers","BSF_Item_FirstAid_Kit1","BSF_Item_Blood_Bag_KR","BSF_Item_Blood_Bag_Clean","BSF_Item_Disinfectant_Spray","BSF_IV_Bag","BSF_Item_IV_Bag_Used","BSF_Antibiotics","BSF_Item_Banndage_Used","BSF_Item_Poison"};
		ammo[] = {};
	};
};
class CfgMagazines
{
	class Exile_AbstractItem;
	class Exile_AbstractItem_Interaction_Consuming_Healing;
	class Exile_AbstractItem_Interaction_Eating;
	class Exile_AbstractItem_Interaction_Using;
	class Exile_AbstractItem_Interaction_Drinking;
	class Exile_AbstractItem_Interaction_Consuming_Using;
	class BSF_Carla_Cane: Exile_AbstractItem
	{
		scope = 2;
		mass = 2;
		displayName = "Carla Cane";
		descriptionShort = "Beccause Troy's wife thought you deserved something special.";
		model = "BSF_Community_Addon\addons\BSF_Misc\Consumable\BSF_Carla_Cane.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Consumable\Food\icon_BSF_Carla_Cane_CA.paa";
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[] = {{8,5,30},{2,10,10},{7,15,600}};
			};
		};
	};
	class BSF_Item_Canteen_OJ: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Canteen, Orange Juice";
		descriptionShort = "A canteen full of fresh squeezed orange juice.";
		mass = 3;
		model = "\A3\Structures_F_EPA\Items\Food\Canteen_F.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Consumable\Food\icon_BSF_Canteen_OJ_CA.paa";
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Drinking
			{
				returnedItem = "BSF_Item_Canteen_Empty";
				effects[] = {{3,75,60},{2,15,5},{5,-0.5,10}};
			};
		};
	};
	class BSF_Item_Canteen_Coffee: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Canteen, Coffee";
		descriptionShort = "A canteen full of dark coffee.";
		mass = 3;
		model = "\A3\Structures_F_EPA\Items\Food\Canteen_F.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Consumable\Food\icon_BSF_Canteen_Coffee_CA.paa";
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Drinking
			{
				returnedItem = "BSF_Item_Canteen_Empty";
				effects[] = {{3,100,60},{2,10,5},{5,0.5,10}};
			};
		};
	};
	class BSF_Item_Canteen_WaterDirty: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Canteen, Dirty Water";
		descriptionShort = "A canteen full dirty water.";
		mass = 3;
		model = "\A3\Structures_F_EPA\Items\Food\Canteen_F.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Consumable\Food\icon_BSF_Canteen_WaterDirty_CA.paa";
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Drinking
			{
				returnedItem = "BSF_Item_Canteen_Empty";
				effects[] = {{3,10,20},{0,-10,5}};
			};
		};
	};
	class BSF_Item_Canteen_WaterSalt: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Canteen, Salt Water";
		descriptionShort = "A canteen full salt water. Yum";
		mass = 3;
		model = "\A3\Structures_F_EPA\Items\Food\Canteen_F.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Consumable\Food\icon_BSF_Canteen_WaterSalt_CA.paa";
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Drinking
			{
				returnedItem = "BSF_Item_Canteen_Empty";
				effects[] = {{3,-20,10},{0,-30,15}};
			};
		};
	};
	class BSF_Item_Canteen_WaterFresh: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Canteen, Clean Water";
		descriptionShort = "A canteen full of clean, fresh water.";
		mass = 3;
		model = "\A3\Structures_F_EPA\Items\Food\Canteen_F.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Consumable\Food\icon_BSF_Canteen_WaterFresh_CA.paa";
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Drinking
			{
				returnedItem = "BSF_Item_Canteen_Empty";
				effects[] = {{3,100,20}};
			};
		};
	};
	class BSF_Item_Canteen_Empty: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Canteen, Empty";
		descriptionShort = "An empty canteen.";
		mass = 2;
		model = "\A3\Structures_F_EPA\Items\Food\Canteen_F.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Consumable\Food\icon_BSF_Canteen_Empty_CA.paa";
	};
	class BSF_Item_Orange: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Orange";
		descriptionShort = "You can eat it, but it's much better cooked.";
		mass = 3;
		model = "\A3\Props_F_Orange\Humanitarian\Supplies\Pumpkin_01_F.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Consumable\Food\icon_BSF_Orange_CA.paa";
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[] = {{2,10,10}};
			};
		};
	};
	class BSF_Item_Pumpkin_Raw: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Pumpkin, Raw";
		descriptionShort = "You can eat it, but it's much better cooked.";
		mass = 3;
		model = "\A3\Props_F_Orange\Humanitarian\Supplies\Pumpkin_01_F.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Consumable\Food\icon_BSF_Pumpkin_Raw_CA.paa";
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[] = {{2,50,30}};
			};
		};
	};
	class BSF_Item_Pumpkin_Cooked: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Pumpkin, Cooked";
		descriptionShort = "Want to impress your friends?  Make a pie.";
		mass = 3;
		model = "\A3\Props_F_Orange\Humanitarian\Supplies\Pumpkin_01_F.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Consumable\Food\icon_BSF_Pumpkin_Cooked_CA.paa";
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[] = {{2,100,30}};
			};
		};
	};
	class BSF_WaterPure_Tabs: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Water Purification Tablets";
		descriptionShort = "Pop these guys into a bottle of water and chug.";
		mass = 2;
		model = "\A3\Structures_F_EPA\Items\Medical\WaterPurificationTablets_F.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Consumable\Medical\icon_BSF_WaterPure_Tabs_CA.paa";
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[] = {{0,-25,30}};
			};
		};
	};
	class BSF_Item_Injector1: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Injector 1";
		descriptionShort = "Unknown";
		mass = 2;
		model = "a3\Props_F_Orange\Humanitarian\Garbage\MedicalGarbage_01_Injector_F";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Consumable\Medical\icon_BSF_Injector_CA.paa";
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Consuming_Healing
			{
				effects[] = {{0,25,30}};
			};
		};
	};
	class BSF_Item_Vitamins1: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Vitamins";
		descriptionShort = "The guy at the health food store said that these cure everything.";
		mass = 2;
		model = "\A3\Structures_F_EPA\Items\Medical\VitaminBottle_F.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Consumable\Medical\icon_BSF_Vitamins_CA.paa";
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[] = {{0,10,30}};
			};
		};
	};
	class BSF_Item_Pain_Killlers: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Pain Killers";
		descriptionShort = "They don't solve everything, but they sure help.";
		mass = 2;
		model = "\A3\Structures_F_EPA\Items\Medical\PainKillers_F.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Consumable\Medical\icon_BSF_Pain_Killers_CA.paa";
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[] = {{0,25,30},{3,-50,60},{4,0.8,0}};
			};
		};
	};
	class BSF_Item_FirstAid_Kit1: Exile_AbstractItem
	{
		scope = 2;
		displayName = "First Aid Kit";
		descriptionShort = "This little bag will fix you right up.";
		mass = 2;
		model = "\A3\Props_F_Orange\Humanitarian\Camps\FirstAidKit_01_closed_F.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Consumable\Medical\icon_BSF_FirstAid_Kit_CA.paa";
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Consuming_Healing
			{
				effects[] = {{0,100,30}};
			};
		};
	};
	class BSF_Item_Blood_Bag_KR: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Bloody Mary";
		descriptionShort = "The donor was Keith Richards during a USO tour. Use with caution.";
		mass = 2;
		model = "\A3\Structures_F_EPA\Items\Medical\BloodBag_F.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Consumable\Medical\icon_BSF_Blood_Bag_KR_CA.paa";
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Consuming_Healing
			{
				effects[] = {{0,100,60},{4,2,0}};
			};
		};
	};
	class BSF_Item_Blood_Bag_Clean: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Blood bag";
		descriptionShort = "Top off before heading out into the cold, cruel world.";
		mass = 2;
		model = "\A3\Structures_F_EPA\Items\Medical\BloodBag_F.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Consumable\Medical\icon_BSF_Blood_Bag_CA.paa";
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Consuming_Healing
			{
				effects[] = {{0,100,60},{4,-0.4,0}};
			};
		};
	};
	class BSF_Item_Disinfectant_Spray: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Disinfectant spray";
		descriptionShort = "Cleans and disinfects. Because clenliness is next to...";
		mass = 1;
		model = "\A3\Structures_F_EPA\Items\Medical\DisinfectantSpray_F.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Consumable\Medical\icon_BSF_Disinfectant_Spray_CA.paa";
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Consuming_Using
			{
				effects[] = {{0,-50,30},{4,2,0},{5,5000001,0}};
			};
		};
	};
	class BSF_IV_Bag: Exile_AbstractItem
	{
		scope = 2;
		displayName = "A full IV bag.";
		descriptionShort = "A full IV bag. Hydrate or die. Hook me up!";
		mass = 2;
		model = "\A3\Props_F_Orange\Humanitarian\Camps\IntravenBag_01_empty_F.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Consumable\Medical\icon_BSF_IV_Bag_CA.paa";
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Consuming_Healing
			{
				returnedItem = "BSF_Item_IV_Bag_Used";
				effects[] = {{0,50,60},{3,75,60},{4,-1,0},{5,-3,0}};
			};
		};
	};
	class BSF_Item_IV_Bag_Used: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Empty IV bag";
		descriptionShort = "An empty IV bag.  With the right stuff I might be able to use this.";
		mass = 1;
		model = "\A3\Props_F_Orange\Humanitarian\Camps\IntravenBag_01_empty_F.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Consumable\Medical\icon_BSF_IV_Bag_Used_CA.paa";
	};
	class BSF_Antibiotics: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Antibiotics";
		descriptionShort = "An old package of persription antibiotics.  Can't quite make out that expiration date...<br/>Health: +50%/120s";
		mass = 1;
		model = "\A3\Structures_F_EPA\Items\Medical\Antibiotic_F.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Consumable\Medical\icon_BSF_Antibiotics_CA.paa";
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[] = {{0,50,120},{3,-25,60}};
			};
		};
	};
	class BSF_Item_Banndage_Used: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Used Bandage";
		descriptionShort = "An old, blood-soaked bandage.  It's better than nothing, right? </br>  Right? ...";
		mass = 1;
		model = "a3\Props_F_Orange\Humanitarian\Garbage\MedicalGarbage_01_Bandage_F";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Consumable\Medical\icon_BSF_Bandage_Used_CA.paa";
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Consuming_Healing
			{
				stopBleeding = 1;
				effects[] = {{0,-10,10}};
			};
		};
	};
	class BSF_Item_Poison: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Poison";
		descriptionShort = "For when you feel the need to self-sabotage.";
		mass = 1;
		model = "\BSF_Community_Addon\addons\BSF_Misc\Consumable\BSF_PoisonBottle.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Consumable\Medical\icon_BSF_Poison_CA.paa";
		editorCategory = "EdCat_Things";
		editorSubcategory = "EdSubcat_Medicine";
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Drinking
			{
				stopBleeding = 0;
				effects[] = {{0,-50,10}};
			};
		};
	};
};
class CfgVehicles
{
	class NonStrategic;
	class BSF_PoisonBottle: NonStrategic
	{
		scope = 2;
		displayName = "Poison";
		model = "\BSF_Community_Addon\addons\BSF_Misc\Consumable\BSF_PoisonBottle.p3d";
		editorPreview = "\BSF_Community_Addon\addons\BSF_Misc\Consumable\Medical\icon_BSF_Poison_CA.paa";
		editorCategory = "EdCat_Things";
		editorSubcategory = "EdSubcat_Medicine";
	};
	class BSF_Carla_Cane: NonStrategic
	{
		author = "BSF";
		scope = 2;
		displayName = "Carla Cane";
		model = "BSF_Community_Addon\addons\BSF_Misc\Consumable\BSF_Carla_Cane.p3d";
	};
};
