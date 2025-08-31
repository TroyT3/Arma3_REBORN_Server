////////////////////////////////////////////////////////////////////
//DeRap: Items\config.bin
//Produced from mikero's Dos Tools Dll version 9.98
//https://mikero.bytex.digital/Downloads
//'now' is Wed Jul 09 20:03:47 2025 : 'file' last modified on Sat Jul 05 11:43:12 2025
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class BSF_Misc_Items
	{
		requiredVersion = 1.92;
		requiredAddons[] = {"BSF_Misc","exile_assets","exile_client","a3_structures_f","a3_structures_f_enoch","a3_props_f_enoch"};
		units[] = {"BSF_CargoPlatform_Green","BSF_CargoPlatform_Brown","BSF_CargoPlatform_Jungle","BSF_CargoPlatform_Rusty","BSF_Statue1","BSF_GuardBox","BSF_Radar1","BSF_DearStand2","BSF_DearStand1","BSF_GuardTowerSmall","BSF_GuardTowerBig","BSF_Bunker2_Double","BSF_Bunker2_Left","BSF_Bunker2_Right","BSF_Bunker2_Mossy_Double","BSF_Bunker2_Mossy_Left","BSF_Bunker2_Mossy_Right","BSF_PillBoxBig","BSF_PillBoxRect","BSF_PillBoxHex","BSF_PillBoxWall1_Sharp","BSF_PillBoxWall3_Sharp","BSF_PillBoxWall1_Blunt","BSF_PillBoxWall3_Blunt","BSF_ModularBunkerBig","BSF_ModularBunkerHQ","BSF_ModularBunkerSmall","BSF_ModularBunkerTall","BSF_ModularBunker1Block","BSF_ModularBunker3Block","BSF_ConcreteRamp1","BSF_WaterPump","BSF_WaterTank","BSF_RuggedCabinet1_Black","BSF_RuggedCabinet1_Olive","BSF_RuggedCabinet1_Sand","BSF_RuggedCabinet2_Black","BSF_RuggedCabinet2_Olive","BSF_RuggedCabinet2_Sand","BSF_RuggedCabinet3_Black","BSF_RuggedCabinet3_Olive","BSF_RuggedCabinet3_Sand","land_FlexibleTankForest","land_FlexibleTankSand","BSF_SolarTentBlue","BSF_SolarTentOlive","BSF_SolarTentRed","BSF_SolarTentSand","BSF_Workbench_01","BSF_GrassCutter_20","BSF_GrassCutter_30","BSF_GrassCutter_40","BSF_Item_Copper_Plates","BSF_Item_Book_ZombEats","BSF_Item_Book_SLAP","BSF_Item_Book_FuckYou","BSF_medchest","land_welder","BSF_CargoPlatform_Green_Preview","BSF_CargoPlatform_Brown_Preview","BSF_CargoPlatform_Jungle_Preview","BSF_CargoPlatform_Rusty_Preview","BSF_Statue1_Preview","BSF_GuardBox_Preview","BSF_Radar1_Preview","BSF_DearStand2_Preview","BSF_DearStand1_Preview","BSF_GuardTowerSmall_Preview","BSF_GuardTowerBig_Preview","BSF_Bunker2_Double_Preview","BSF_Bunker2_Left_Preview","BSF_Bunker2_Right_Preview","BSF_Bunker2_Mossy_Double_Preview","BSF_Bunker2_Mossy_Left_Preview","BSF_Bunker2_Mossy_Right_Preview"};
		weapons[] = {};
		magazines[] = {"BSF_CargoPlatform_Green_Kit","BSF_CargoPlatform_Brown_Kit","BSF_CargoPlatform_Jungle_Kit","BSF_CargoPlatform_Rusty_Kit","BSF_Statue1_Kit","BSF_GuardBox_Kit","BSF_Radar1_Kit","BSF_DearStand2_Kit","BSF_DearStand1_Kit","BSF_GuardTowerSmall_Kit","BSF_GuardTowerBig_Kit","BSF_Bunker2_Double_Kit","BSF_Bunker2_Left_Kit","BSF_Bunker2_Right_Kit","BSF_Bunker2_Mossy_Double_Kit","BSF_Bunker2_Mossy_Left_Kit","BSF_Bunker2_Mossy_Right_Kit","BSF_PillBoxBig_Kit","BSF_PillBoxRect_Kit","BSF_PillBoxHex_Kit","BSF_PillBoxWall1_Sharp_Kit","BSF_PillBoxWall3_Sharp_Kit","BSF_PillBoxWall1_Blunt_Kit","BSF_PillBoxWall3_Blunt_Kit","BSF_ModularBunkerBig_Kit","BSF_ModularBunkerHQ_Kit","BSF_ModularBunkerSmall_Kit","BSF_ModularBunkerTall_Kit","BSF_ModularBunker1Block_Kit","BSF_ModularBunker3Block_Kit","BSF_ConcreteRamp1_Kit","BSF_WaterPump_Kit","BSF_WaterTank_Kit","land_FlexibleTankForest_Kit","land_FlexibleTankSand_Kit","BSF_SolarTentBlue_Kit","BSF_SolarTentOlive_Kit","BSF_SolarTentRed_Kit","BSF_SolarTentSand_Kit","BSF_RuggedCabinet1_Black_Kit","BSF_RuggedCabinet1_Olive_Kit","BSF_RuggedCabinet1_Sand_Kit","BSF_RuggedCabinet2_Black_Kit","BSF_RuggedCabinet2_Olive_Kit","BSF_RuggedCabinet2_Sand_Kit","BSF_RuggedCabinet3_Black_Kit","BSF_RuggedCabinet3_Olive_Kit","BSF_RuggedCabinet3_Sand_Kit","BSF_Fishing_Net","BSF_GrassCutter_20_Kit","BSF_GrassCutter_30_Kit","BSF_GrassCutter_40_Kit","BSF_Item_Copper_Plates","BSF_Tarp_Blue","BSF_Tarp_White","BSF_Tarp_Yellow","BSF_Tarp_Brown","BSF_Tarp_Green","BSF_Tarp_D","BSF_Tarp_WD","BSF_medchest_Kit","land_welder_Kit","BSF_Welding_Gas"};
		ammo[] = {};
	};
};
class AbstractConstruction;
class CfgConstruction
{
	class AbstractFloor: AbstractConstruction
	{
		class SnapPositions{};
		class SnapObjects{};
	};
	class BSF_GrassCutter_20_Construction: AbstractConstruction
	{
		staticObject = "BSF_GrassCutter_20";
		previewObject = "BSF_GrassCutter_20_Preview";
		kitMagazine = "BSF_GrassCutter_20_Kit";
		refundObjects[] = {"BSF_GrassCutter_20_Kit"};
		materialType = 10;
	};
	class BSF_GrassCutter_30_Construction: AbstractConstruction
	{
		staticObject = "BSF_GrassCutter_30";
		previewObject = "BSF_GrassCutter_30_Preview";
		kitMagazine = "BSF_GrassCutter_30_Kit";
		refundObjects[] = {"BSF_GrassCutter_30_Kit"};
		materialType = 10;
	};
	class BSF_GrassCutter_40_Construction: AbstractConstruction
	{
		staticObject = "BSF_GrassCutter_40";
		previewObject = "BSF_GrassCutter_40_Preview";
		kitMagazine = "BSF_GrassCutter_40_Kit";
		refundObjects[] = {"BSF_GrassCutter_40_Kit"};
		materialType = 10;
	};
	class BSF_medchest_Construction: AbstractConstruction
	{
		staticObject = "BSF_medchest";
		previewObject = "BSF_medchest_Preview";
		kitMagazine = "BSF_medchest_Kit";
		refundObjects[] = {"BSF_medchest_Kit"};
		materialType = 10;
	};
	class BSF_Welding_Cart_Construction: AbstractConstruction
	{
		staticObject = "land_welder";
		previewObject = "land_welder_Preview";
		kitMagazine = "land_welder_Kit";
		refundObjects[] = {"land_welder_Kit"};
		materialType = 10;
	};
	class BSF_WaterPump_Construction: AbstractConstruction
	{
		staticObject = "BSF_WaterPump";
		previewObject = "BSF_WaterPump_Preview";
		kitMagazine = "BSF_WaterPump_Kit";
		refundObjects[] = {"BSF_WaterPump_Kit"};
		materialType = 10;
	};
	class BSF_WaterTank_Construction: AbstractConstruction
	{
		staticObject = "BSF_WaterTank";
		previewObject = "BSF_WaterTank_Preview";
		kitMagazine = "BSF_WaterTank_Kit";
		refundObjects[] = {"BSF_WaterTank_Kit"};
		materialType = 10;
	};
	class land_FlexibleTankForest_Construction: AbstractConstruction
	{
		staticObject = "land_FlexibleTankForest";
		previewObject = "land_FlexibleTankForest_Preview";
		kitMagazine = "land_FlexibleTankForest_Kit";
		refundObjects[] = {"land_FlexibleTankForest_Kit"};
		materialType = 10;
	};
	class land_FlexibleTankSand_Construction: AbstractConstruction
	{
		staticObject = "land_FlexibleTankSand";
		previewObject = "land_FlexibleTankSand_Preview";
		kitMagazine = "land_FlexibleTankSand_Kit";
		refundObjects[] = {"land_FlexibleTankSand_Kit"};
		materialType = 10;
	};
	class BSF_SolarTentBlue_Construction: AbstractConstruction
	{
		staticObject = "BSF_SolarTentBlue";
		previewObject = "BSF_SolarTentBlue_Preview";
		kitMagazine = "BSF_SolarTentBlue_Kit";
		requiresTerritory = 0;
		refundObjects[] = {"BSF_SolarTentBlue_Kit"};
		materialType = 10;
	};
	class BSF_SolarTentOlive_Construction: AbstractConstruction
	{
		staticObject = "BSF_SolarTentOlive";
		previewObject = "BSF_SolarTentOlive_Preview";
		kitMagazine = "BSF_SolarTentOlive_Kit";
		requiresTerritory = 0;
		refundObjects[] = {"BSF_SolarTentOlive_Kit"};
		materialType = 10;
	};
	class BSF_SolarTentRed_Construction: AbstractConstruction
	{
		staticObject = "BSF_SolarTentRed";
		previewObject = "BSF_SolarTentRed_Preview";
		kitMagazine = "BSF_SolarTentRed_Kit";
		refundObjects[] = {"BSF_SolarTentRed_Kit"};
		materialType = 10;
	};
	class BSF_SolarTentSand_Construction: AbstractConstruction
	{
		staticObject = "BSF_SolarTentSand";
		previewObject = "BSF_SolarTentSand_Preview";
		kitMagazine = "BSF_SolarTentSand_Kit";
		requiresTerritory = 0;
		refundObjects[] = {"BSF_SolarTentSand_Kit"};
		materialType = 10;
	};
	class BSF_RuggedCabinet1_Black_Construction: AbstractConstruction
	{
		staticObject = "BSF_RuggedCabinet1_Black";
		previewObject = "BSF_RuggedCabinet1_Black_Preview";
		kitMagazine = "BSF_RuggedCabinet1_Black_Kit";
		refundObjects[] = {"BSF_RuggedCabinet1_Black_Kit"};
		materialType = 10;
	};
	class BSF_RuggedCabinet1_Olive_Construction: AbstractConstruction
	{
		staticObject = "BSF_RuggedCabinet1_Olive";
		previewObject = "BSF_RuggedCabinet1_Olive_Preview";
		kitMagazine = "BSF_RuggedCabinet1_Olive_Kit";
		refundObjects[] = {"BSF_RuggedCabinet1_Olive_Kit"};
		materialType = 10;
	};
	class BSF_RuggedCabinet1_Sand_Construction: AbstractConstruction
	{
		staticObject = "BSF_RuggedCabinet1_Sand";
		previewObject = "BSF_RuggedCabinet1_Sand_Preview";
		kitMagazine = "BSF_RuggedCabinet1_Sand_Kit";
		refundObjects[] = {"BSF_RuggedCabinet1_Sand_Kit"};
		materialType = 10;
	};
	class BSF_RuggedCabinet2_Black_Construction: AbstractConstruction
	{
		staticObject = "BSF_RuggedCabinet2_Black";
		previewObject = "BSF_RuggedCabinet2_Black_Preview";
		kitMagazine = "BSF_RuggedCabinet2_Black_Kit";
		refundObjects[] = {"BSF_RuggedCabinet2_Black_Kit"};
		materialType = 10;
	};
	class BSF_RuggedCabinet2_Olive_Construction: AbstractConstruction
	{
		staticObject = "BSF_RuggedCabinet2_Olive";
		previewObject = "BSF_RuggedCabinet2_Olive_Preview";
		kitMagazine = "BSF_RuggedCabinet2_Olive_Kit";
		refundObjects[] = {"BSF_RuggedCabinet2_Olive_Kit"};
		materialType = 10;
	};
	class BSF_RuggedCabinet2_Sand_Construction: AbstractConstruction
	{
		staticObject = "BSF_RuggedCabinet2_Sand";
		previewObject = "BSF_RuggedCabinet2_Sand_Preview";
		kitMagazine = "BSF_RuggedCabinet2_Sand_Kit";
		refundObjects[] = {"BSF_RuggedCabinet2_Sand_Kit"};
		materialType = 10;
	};
	class BSF_RuggedCabinet3_Black_Construction: AbstractConstruction
	{
		staticObject = "BSF_RuggedCabinet3_Black";
		previewObject = "BSF_RuggedCabinet3_Black_Preview";
		kitMagazine = "BSF_RuggedCabinet3_Black_Kit";
		refundObjects[] = {"BSF_RuggedCabinet3_Black_Kit"};
		materialType = 10;
	};
	class BSF_RuggedCabinet3_Olive_Construction: AbstractConstruction
	{
		staticObject = "BSF_RuggedCabinet3_Olive";
		previewObject = "BSF_RuggedCabinet3_Olive_Preview";
		kitMagazine = "BSF_RuggedCabinet3_Olive_Kit";
		refundObjects[] = {"BSF_RuggedCabinet3_Olive_Kit"};
		materialType = 10;
	};
	class BSF_RuggedCabinet3_Sand_Construction: AbstractConstruction
	{
		staticObject = "BSF_RuggedCabinet3_Sand";
		previewObject = "BSF_RuggedCabinet3_Sand_Preview";
		kitMagazine = "BSF_RuggedCabinet3_Sand_Kit";
		refundObjects[] = {"BSF_RuggedCabinet3_Sand_Kit"};
		materialType = 10;
	};
	class BSF_ConcreteRamp1_Construction: AbstractConstruction
	{
		staticObject = "BSF_ConcreteRamp1";
		previewObject = "BSF_ConcreteRamp1_Preview";
		kitMagazine = "BSF_ConcreteRamp1_Kit";
		refundObjects[] = {"BSF_ConcreteRamp1_Kit"};
		materialType = 10;
	};
	class BSF_ModularBunkerBig_Construction: AbstractConstruction
	{
		staticObject = "BSF_ModularBunkerBig";
		previewObject = "BSF_ModularBunkerBig_Preview";
		kitMagazine = "BSF_ModularBunkerBig_Kit";
		refundObjects[] = {"BSF_ModularBunkerBig_Kit"};
		materialType = 10;
	};
	class BSF_ModularBunkerHQ_Construction: AbstractConstruction
	{
		staticObject = "BSF_ModularBunkerHQ";
		previewObject = "BSF_ModularBunkerHQ_Preview";
		kitMagazine = "BSF_ModularBunkerHQ_Kit";
		refundObjects[] = {"BSF_ModularBunkerHQ_Kit"};
		materialType = 10;
	};
	class BSF_ModularBunkerSmall_Construction: AbstractConstruction
	{
		staticObject = "BSF_ModularBunkerSmall";
		previewObject = "BSF_ModularBunkerSmall_Preview";
		kitMagazine = "BSF_ModularBunkerSmall_Kit";
		refundObjects[] = {"BSF_ModularBunkerSmall_Kit"};
		materialType = 10;
	};
	class BSF_ModularBunkerTall_Construction: AbstractConstruction
	{
		staticObject = "BSF_ModularBunkerTall";
		previewObject = "BSF_ModularBunkerTall_Preview";
		kitMagazine = "BSF_ModularBunkerTall_Kit";
		refundObjects[] = {"BSF_ModularBunkerTall_Kit"};
		materialType = 10;
	};
	class BSF_ModularBunker1Block_Construction: AbstractConstruction
	{
		staticObject = "BSF_ModularBunker1Block";
		previewObject = "BSF_ModularBunker1Block_Preview";
		kitMagazine = "BSF_ModularBunker1Block_Kit";
		refundObjects[] = {"BSF_ModularBunker1Block_Kit"};
		materialType = 10;
	};
	class BSF_ModularBunker3Block_Construction: AbstractConstruction
	{
		staticObject = "BSF_ModularBunker3Block";
		previewObject = "BSF_ModularBunker3Block_Preview";
		kitMagazine = "BSF_ModularBunker3Block_Kit";
		refundObjects[] = {"BSF_ModularBunker3Block_Kit"};
		materialType = 10;
	};
	class BSF_PillBoxBig_Construction: AbstractConstruction
	{
		staticObject = "BSF_PillBoxBig";
		previewObject = "BSF_PillBoxBig_Preview";
		kitMagazine = "BSF_PillBoxBig_Kit";
		refundObjects[] = {"BSF_PillBoxBig_Kit"};
		materialType = 10;
	};
	class BSF_PillBoxRect_Construction: AbstractConstruction
	{
		staticObject = "BSF_PillBoxRect";
		previewObject = "BSF_PillBoxRect_Preview";
		kitMagazine = "BSF_PillBoxRect_Kit";
		refundObjects[] = {"BSF_PillBoxRect_Kit"};
		materialType = 10;
	};
	class BSF_PillBoxHex_Construction: AbstractConstruction
	{
		staticObject = "BSF_PillBoxHex";
		previewObject = "BSF_PillBoxHex_Preview";
		kitMagazine = "BSF_PillBoxHex_Kit";
		refundObjects[] = {"BSF_PillBoxHex_Kit"};
		materialType = 10;
	};
	class BSF_PillBoxWall1_Sharp_Construction: AbstractConstruction
	{
		staticObject = "BSF_PillBoxWall1_Sharp";
		previewObject = "BSF_PillBoxWall1_Sharp_Preview";
		kitMagazine = "BSF_PillBoxWall1_Sharp_Kit";
		refundObjects[] = {"BSF_PillBoxWall1_Sharp_Kit"};
		materialType = 10;
	};
	class BSF_PillBoxWall3_Sharp_Construction: AbstractConstruction
	{
		staticObject = "BSF_PillBoxWall3_Sharp";
		previewObject = "BSF_PillBoxWall3_Sharp_Preview";
		kitMagazine = "BSF_PillBoxWall3_Sharp_Kit";
		refundObjects[] = {"BSF_PillBoxWall3_Sharp_Kit"};
		materialType = 10;
	};
	class BSF_PillBoxWall1_Blunt_Construction: AbstractConstruction
	{
		staticObject = "BSF_PillBoxWall1_Blunt";
		previewObject = "BSF_PillBoxWall1_Blunt_Preview";
		kitMagazine = "BSF_PillBoxWall1_Blunt_Kit";
		refundObjects[] = {"BSF_PillBoxWall1_Blunt_Kit"};
		materialType = 10;
	};
	class BSF_PillBoxWall3_Blunt_Construction: AbstractConstruction
	{
		staticObject = "BSF_PillBoxWall3_Blunt";
		previewObject = "BSF_PillBoxWall3_Blunt_Preview";
		kitMagazine = "BSF_PillBoxWall3_Blunt_Kit";
		refundObjects[] = {"BSF_PillBoxWall3_Blunt_Kit"};
		materialType = 10;
	};
	class BSF_Bunker2_Double_Construction: AbstractConstruction
	{
		staticObject = "BSF_Bunker2_Double";
		previewObject = "BSF_Bunker2_Double_Preview";
		kitMagazine = "BSF_Bunker2_Double_Kit";
		refundObjects[] = {"BSF_Bunker2_Double_Kit"};
		materialType = 10;
	};
	class BSF_Bunker2_Left_Construction: AbstractConstruction
	{
		staticObject = "BSF_Bunker2_Left";
		previewObject = "BSF_Bunker2_Left_Preview";
		kitMagazine = "BSF_Bunker2_Left_Kit";
		refundObjects[] = {"BSF_Bunker2_Left_Kit"};
		materialType = 10;
	};
	class BSF_Bunker2_Right_Construction: AbstractConstruction
	{
		staticObject = "BSF_Bunker2_Right";
		previewObject = "BSF_Bunker2_Right_Preview";
		kitMagazine = "BSF_Bunker2_Right_Kit";
		refundObjects[] = {"BSF_Bunker2_Right_Kit"};
		materialType = 10;
	};
	class BSF_Bunker2_Mossy_Double_Construction: AbstractConstruction
	{
		staticObject = "BSF_Bunker2_Mossy_Double";
		previewObject = "BSF_Bunker2_Mossy_Double_Preview";
		kitMagazine = "BSF_Bunker2_Mossy_Double_Kit";
		refundObjects[] = {"BSF_Bunker2_Mossy_Double_Kit"};
		materialType = 10;
	};
	class BSF_Bunker2_Mossy_Left_Construction: AbstractConstruction
	{
		staticObject = "BSF_Bunker2_Mossy_Left";
		previewObject = "BSF_Bunker2_Mossy_Left_Preview";
		kitMagazine = "BSF_Bunker2_Mossy_Left_Kit";
		refundObjects[] = {"BSF_Bunker2_Mossy_Left_Kit"};
		materialType = 10;
	};
	class BSF_Bunker2_Mossy_Right_Construction: AbstractConstruction
	{
		staticObject = "BSF_Bunker2_Mossy_Right";
		previewObject = "BSF_Bunker2_Mossy_Right_Preview";
		kitMagazine = "BSF_Bunker2_Mossy_Right_Kit";
		refundObjects[] = {"BSF_Bunker2_Mossy_Right_Kit"};
		materialType = 10;
	};
	class BSF_GuardTowerBig_Construction: AbstractConstruction
	{
		staticObject = "BSF_GuardTowerBig";
		previewObject = "BSF_GuardTowerBig_Preview";
		kitMagazine = "BSF_GuardTowerBig_Kit";
		refundObjects[] = {"BSF_GuardTowerBig_Kit"};
		materialType = 10;
	};
	class BSF_GuardTowerSmall_Construction: AbstractConstruction
	{
		staticObject = "BSF_GuardTowerSmall";
		previewObject = "BSF_GuardTowerSmall_Preview";
		kitMagazine = "BSF_GuardTowerSmall_Kit";
		refundObjects[] = {"BSF_GuardTowerSmall_Kit"};
		materialType = 10;
	};
	class BSF_Radar1_Construction: AbstractConstruction
	{
		staticObject = "BSF_Radar1";
		previewObject = "BSF_Radar1_Preview";
		kitMagazine = "BSF_Radar1_Kit";
		refundObjects[] = {"BSF_Radar1_Kit"};
		materialType = 10;
	};
	class BSF_DearStand2_Construction: AbstractConstruction
	{
		staticObject = "BSF_DearStand2";
		previewObject = "BSF_DearStand2_Preview";
		kitMagazine = "BSF_DearStand2_Kit";
		refundObjects[] = {"BSF_DearStand2_Kit"};
		materialType = 10;
	};
	class BSF_DearStand1_Construction: AbstractConstruction
	{
		staticObject = "BSF_DearStand1";
		previewObject = "BSF_DearStand1_Preview";
		kitMagazine = "BSF_DearStand1_Kit";
		refundObjects[] = {"BSF_DearStand1_Kit"};
		materialType = 10;
	};
	class BSF_GuardBox_Construction: AbstractConstruction
	{
		staticObject = "BSF_GuardBox";
		previewObject = "BSF_GuardBox_Preview";
		kitMagazine = "BSF_GuardBox_Kit";
		refundObjects[] = {"BSF_GuardBox_Kit"};
		materialType = 10;
	};
	class BSF_Statue1_Construction: AbstractConstruction
	{
		staticObject = "BSF_Statue1";
		previewObject = "BSF_Statue1_Preview";
		kitMagazine = "BSF_Statue1_Kit";
		refundObjects[] = {"BSF_Statue1_Kit"};
		materialType = 10;
	};
	class BSF_CargoPlatform_Green_Construction: AbstractConstruction
	{
		staticObject = "BSF_CargoPlatform_Green";
		previewObject = "BSF_CargoPlatform_Green_Preview";
		kitMagazine = "BSF_CargoPlatform_Green_Kit";
		refundObjects[] = {"BSF_CargoPlatform_Green_Kit"};
		materialType = 10;
	};
	class BSF_CargoPlatform_Brown_Construction: AbstractConstruction
	{
		staticObject = "BSF_CargoPlatform_Brown";
		previewObject = "BSF_CargoPlatform_Brown_Preview";
		kitMagazine = "BSF_CargoPlatform_Brown_Kit";
		refundObjects[] = {"BSF_CargoPlatform_Brown_Kit"};
		materialType = 10;
	};
	class BSF_CargoPlatform_Jungle_Construction: AbstractConstruction
	{
		staticObject = "BSF_CargoPlatform_Jungle";
		previewObject = "BSF_CargoPlatform_Jungle_Preview";
		kitMagazine = "BSF_CargoPlatform_Jungle_Kit";
		refundObjects[] = {"BSF_CargoPlatform_Jungle_Kit"};
		materialType = 10;
	};
	class BSF_CargoPlatform_Rusty_Construction: AbstractConstruction
	{
		staticObject = "BSF_CargoPlatform_Rusty";
		previewObject = "BSF_CargoPlatform_Rusty_Preview";
		kitMagazine = "BSF_CargoPlatform_Rusty_Kit";
		refundObjects[] = {"BSF_CargoPlatform_Rusty_Kit"};
		materialType = 10;
	};
};
class CfgMagazines
{
	class Exile_AbstractItem;
	class Exile_AbstractItem_Interaction_Constructing;
	class BSF_GrassCutter_20_Kit: Exile_AbstractItem
	{
		scope = 2;
		mass = 20;
		displayName = "BSF Grass Cutter, 20 Meter";
		descriptionShort = "Slap this sucker down somewhere in your territory to remove all bushes and trees within 20 meters.<br/>Will take effact after a server restart.<br/>Place using Physics and let it drop to the ground";
		model = "\BSF_Community_Addon\addons\bsf_misc\BSF_Crate\BSF_Crate.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Items\data\ui\icon_BSF_Frisbee_20_CA.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class BSF_GrassCutter_30_Kit: Exile_AbstractItem
	{
		scope = 2;
		mass = 20;
		displayName = "BSF Grass Cutter, 20 Meter";
		descriptionShort = "Slap this sucker down somewhere in your territory to remove all bushes and trees within 20 meters.<br/>Will take effact after a server restart.<br/>Place using Physics and let it drop to the ground";
		model = "\BSF_Community_Addon\addons\bsf_misc\BSF_Crate\BSF_Crate.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Items\data\ui\icon_BSF_Frisbee_30_CA.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class BSF_GrassCutter_40_Kit: Exile_AbstractItem
	{
		scope = 2;
		mass = 20;
		displayName = "BSF Grass Cutter, 40 Meter";
		descriptionShort = "Slap this sucker down somewhere in your territory to remove all bushes and trees within 20 meters.<br/>Will take effact after a server restart.<br/>Place using Physics and let it drop to the ground";
		model = "\BSF_Community_Addon\addons\bsf_misc\BSF_Crate\BSF_Crate.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Items\data\ui\icon_BSF_Frisbee_40_CA.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class BSF_Item_Copper_Plates: Exile_AbstractItem
	{
		scope = 2;
		mass = 20;
		displayName = "Copper Scrap";
		descriptionShort = "Copper scrap for some roofing projects";
		model = "BSF_Community_Addon\addons\BSF_Misc\Items\BSF_Item_Copper_Plates.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Items\data\ui\icon_BSF_Item_Copper_Plates_CA.paa";
	};
	class BSF_Tarp_Blue: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Tarp, Blue";
		descriptionShort = "Imagine all of the things that you can do with this! Now if only you could write the code needed to actually make that crap.";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Items\data\ui\icon_BSF_Tarp_Blue_CA.paa";
		mass = 20;
		model = "BSF_Community_Addon\addons\BSF_Misc\Items\BSF_Tarp_Blue.p3d";
	};
	class BSF_Tarp_White: BSF_Tarp_Blue
	{
		displayName = "Tarp, White";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Items\data\ui\icon_BSF_Tarp_White_CA.paa";
		model = "BSF_Community_Addon\addons\BSF_Misc\Items\BSF_Tarp_White.p3d";
	};
	class BSF_Tarp_Yellow: BSF_Tarp_Blue
	{
		displayName = "Tarp, Yellow";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Items\data\ui\icon_BSF_Tarp_Yellow_CA.paa";
		model = "BSF_Community_Addon\addons\BSF_Misc\Items\BSF_Tarp_Yellow.p3d";
	};
	class BSF_Tarp_Brown: BSF_Tarp_Blue
	{
		displayName = "Tarp, Brown";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Items\data\ui\icon_BSF_Tarp_Brown_CA.paa";
		model = "BSF_Community_Addon\addons\BSF_Misc\Items\BSF_Tarp_Brown.p3d";
	};
	class BSF_Tarp_Green: BSF_Tarp_Blue
	{
		displayName = "Tarp, Green";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Items\data\ui\icon_BSF_Tarp_Green_CA.paa";
		model = "BSF_Community_Addon\addons\BSF_Misc\Items\BSF_Tarp_Green.p3d";
	};
	class BSF_Tarp_D: BSF_Tarp_Blue
	{
		displayName = "Tarp, Desert";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Items\data\ui\icon_BSF_Tarp_D_CA.paa";
		model = "BSF_Community_Addon\addons\BSF_Misc\Items\BSF_Tarp_CamoD.p3d";
	};
	class BSF_Tarp_WD: BSF_Tarp_Blue
	{
		displayName = "Tarp, Green Camo";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Items\data\ui\icon_BSF_Tarp_WD_CA.paa";
		model = "BSF_Community_Addon\addons\BSF_Misc\Items\BSF_Tarp_CamoWD.p3d";
	};
	class BSF_medchest_Kit: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Medicine Chest";
		descriptionShort = "Slap this baby on a wall and let the healing begin.  You can store your crap in it too!";
		mass = 30;
		model = "\BSF_Community_Addon\addons\BSF_Misc\BSF_Crate\BSF_Crate.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Items\data\ui\icon_BSF_MedChest_CA.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class land_welder_Kit: Exile_AbstractItem
	{
		scope = 2;
		mass = 100;
		displayName = "Welding Cart";
		descriptionShort = "Now if only you knew how to use the damned thing.";
		model = "\BSF_Community_Addon\addons\bsf_misc\BSF_Crate\BSF_Crate.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Items\data\ui\icon_BSF_WeldingCart_CA.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class BSF_Welding_Gas: Exile_AbstractItem
	{
		scope = 2;
		mass = 70;
		displayName = "Welding Gas Tank";
		descriptionShort = "Can be used to craft a welding cart";
		model = "\BSF_Community_Addon\addons\BSF_Misc\Items\BSF_GasTank_1.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Items\data\ui\icon_BSF_WeldingGas_CA.paa";
	};
	class BSF_CargoPlatform_Green_Kit: Exile_AbstractItem
	{
		scope = 2;
		mass = 10;
		displayName = "Cargo Platform, Green";
		descriptionShort = "Why not?";
		model = "\BSF_Community_Addon\addons\bsf_misc\BSF_Crate\BSF_Crate.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Items\data\ui\icon_BSF_CargoPlatform_Green_CA.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class BSF_CargoPlatform_Brown_Kit: Exile_AbstractItem
	{
		scope = 2;
		mass = 10;
		displayName = "Cargo Platform, Brown";
		descriptionShort = "Why not?";
		model = "\BSF_Community_Addon\addons\bsf_misc\BSF_Crate\BSF_Crate.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Items\data\ui\icon_BSF_CargoPlatform_Brown_CA.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class BSF_CargoPlatform_Jungle_Kit: Exile_AbstractItem
	{
		scope = 2;
		mass = 10;
		displayName = "Cargo Platform, Jungle";
		descriptionShort = "Why not?";
		model = "\BSF_Community_Addon\addons\bsf_misc\BSF_Crate\BSF_Crate.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Items\data\ui\icon_BSF_CargoPlatform_Jungle_CA.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class BSF_CargoPlatform_Rusty_Kit: Exile_AbstractItem
	{
		scope = 2;
		mass = 10;
		displayName = "Cargo Platform, Rusty";
		descriptionShort = "Why not?";
		model = "\BSF_Community_Addon\addons\bsf_misc\BSF_Crate\BSF_Crate.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Items\data\ui\icon_BSF_CargoPlatform_Rusty_CA.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class BSF_Statue1_Kit: Exile_AbstractItem
	{
		scope = 2;
		mass = 10;
		displayName = "Statue, female";
		descriptionShort = "Why not?";
		model = "\BSF_Community_Addon\addons\bsf_misc\BSF_Crate\BSF_Crate.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Items\data\ui\icon_BSF_Statue1_CA.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class BSF_GuardBox_Kit: Exile_AbstractItem
	{
		scope = 2;
		mass = 10;
		displayName = "Guard Box";
		descriptionShort = "A good place to stand around looking bored.";
		model = "\BSF_Community_Addon\addons\bsf_misc\BSF_Crate\BSF_Crate.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Items\data\ui\icon_BSF_GuardBox_CA.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class BSF_Radar1_Kit: Exile_AbstractItem
	{
		scope = 2;
		mass = 10;
		displayName = "Radar Tower v1";
		descriptionShort = "Beep Beep Blip...";
		model = "\BSF_Community_Addon\addons\bsf_misc\BSF_Crate\BSF_Crate.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Items\data\ui\icon_BSF_Radar1_CA.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class BSF_DearStand2_Kit: Exile_AbstractItem
	{
		scope = 2;
		mass = 10;
		displayName = "Deer Stand v2";
		descriptionShort = "Oh dear, watch out.";
		model = "\BSF_Community_Addon\addons\bsf_misc\BSF_Crate\BSF_Crate.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Items\data\ui\icon_BSF_DeerStand2_CA.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class BSF_DearStand1_Kit: Exile_AbstractItem
	{
		scope = 2;
		mass = 10;
		displayName = "Deer Stand v1";
		descriptionShort = "Oh dear, watch out.";
		model = "\BSF_Community_Addon\addons\bsf_misc\BSF_Crate\BSF_Crate.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Items\data\ui\icon_BSF_DeerStand1_CA.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class BSF_GuardTowerSmall_Kit: Exile_AbstractItem
	{
		scope = 2;
		mass = 10;
		displayName = "Guard Tower, Small";
		descriptionShort = "For when you only want to be a little high.";
		model = "\BSF_Community_Addon\addons\bsf_misc\BSF_Crate\BSF_Crate.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Items\data\ui\icon_BSF_GuardTowerSmall_CA.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class BSF_GuardTowerBig_Kit: Exile_AbstractItem
	{
		scope = 2;
		mass = 10;
		displayName = "Guard Tower, Big";
		descriptionShort = "An alternative way  to get really high.";
		model = "\BSF_Community_Addon\addons\bsf_misc\BSF_Crate\BSF_Crate.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Items\data\ui\icon_BSF_GuardTowerBig_CA.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class BSF_Bunker2_Double_Kit: Exile_AbstractItem
	{
		scope = 2;
		mass = 10;
		displayName = "Old Concrete Bunker, Double";
		descriptionShort = "Bunker down, buddy.";
		model = "\BSF_Community_Addon\addons\bsf_misc\BSF_Crate\BSF_Crate.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Items\data\ui\icon_BSF_Bunker2_Light_Double_CA.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class BSF_Bunker2_Left_Kit: Exile_AbstractItem
	{
		scope = 2;
		mass = 10;
		displayName = "Old Concrete Bunker, Left";
		descriptionShort = "Bunker down, buddy.";
		model = "\BSF_Community_Addon\addons\bsf_misc\BSF_Crate\BSF_Crate.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Items\data\ui\icon_BSF_Bunker2_Light_Left_CA.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class BSF_Bunker2_Right_Kit: Exile_AbstractItem
	{
		scope = 2;
		mass = 10;
		displayName = "Old Concrete Bunker, Right";
		descriptionShort = "Bunker down, buddy.";
		model = "\BSF_Community_Addon\addons\bsf_misc\BSF_Crate\BSF_Crate.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Items\data\ui\icon_BSF_Bunker2_Light_Right_CA.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class BSF_Bunker2_Mossy_Double_Kit: Exile_AbstractItem
	{
		scope = 2;
		mass = 10;
		displayName = "Old Mossy Concrete Bunker, Double";
		descriptionShort = "Bunker down, buddy.";
		model = "\BSF_Community_Addon\addons\bsf_misc\BSF_Crate\BSF_Crate.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Items\data\ui\icon_BSF_Bunker2_Mossy_Double_CA.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class BSF_Bunker2_Mossy_Left_Kit: Exile_AbstractItem
	{
		scope = 2;
		mass = 10;
		displayName = "Old Mossy Concrete Bunker, Left";
		descriptionShort = "Bunker down, buddy.";
		model = "\BSF_Community_Addon\addons\bsf_misc\BSF_Crate\BSF_Crate.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Items\data\ui\icon_BSF_Bunker2_Mossy_Left_CA.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class BSF_Bunker2_Mossy_Right_Kit: Exile_AbstractItem
	{
		scope = 2;
		mass = 10;
		displayName = "Old Mossy Concrete Bunker, Right";
		descriptionShort = "Bunker down, buddy.";
		model = "\BSF_Community_Addon\addons\bsf_misc\BSF_Crate\BSF_Crate.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Items\data\ui\icon_BSF_Bunker2_Mossy_Right_CA.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class BSF_PillBoxBig_Kit: Exile_AbstractItem
	{
		scope = 2;
		mass = 10;
		displayName = "Pillbox, Big";
		descriptionShort = "You can put your pills in here.";
		model = "\BSF_Community_Addon\addons\bsf_misc\BSF_Crate\BSF_Crate.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Items\data\ui\icon_BSF_PillBox_Big_CA.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class BSF_PillBoxRect_Kit: Exile_AbstractItem
	{
		scope = 2;
		mass = 10;
		displayName = "Pillbox, Rectangle";
		descriptionShort = "You can put your pills in here.";
		model = "\BSF_Community_Addon\addons\bsf_misc\BSF_Crate\BSF_Crate.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Items\data\ui\icon_BSF_PillBox_Rect_CA.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class BSF_PillBoxHex_Kit: Exile_AbstractItem
	{
		scope = 2;
		mass = 10;
		displayName = "Pillbox, Hexagonal";
		descriptionShort = "You can put your pills in here.";
		model = "\BSF_Community_Addon\addons\bsf_misc\BSF_Crate\BSF_Crate.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Items\data\ui\icon_BSF_PillBox_Hex_CA.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class BSF_PillBoxWall1_Sharp_Kit: Exile_AbstractItem
	{
		scope = 2;
		mass = 10;
		displayName = "Pillbox Wall, 3m Sharp";
		descriptionShort = "YOu can put your pills in here.";
		model = "\BSF_Community_Addon\addons\bsf_misc\BSF_Crate\BSF_Crate.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Items\data\ui\icon_BSF_PillBox_W1_Sharp_CA.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class BSF_PillBoxWall3_Sharp_Kit: Exile_AbstractItem
	{
		scope = 2;
		mass = 10;
		displayName = "Pillbox Wall, 6m Sharp";
		descriptionShort = "YOu can put your pills in here.";
		model = "\BSF_Community_Addon\addons\bsf_misc\BSF_Crate\BSF_Crate.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Items\data\ui\icon_BSF_PillBox_W3_Sharp_CA.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class BSF_PillBoxWall1_Blunt_Kit: Exile_AbstractItem
	{
		scope = 2;
		mass = 10;
		displayName = "Pillbox Wall, 3m Blunt";
		descriptionShort = "YOu can put your pills in here.";
		model = "\BSF_Community_Addon\addons\bsf_misc\BSF_Crate\BSF_Crate.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Items\data\ui\icon_BSF_PillBox_W1_Blunt_CA.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class BSF_PillBoxWall3_Blunt_Kit: Exile_AbstractItem
	{
		scope = 2;
		mass = 10;
		displayName = "Pillbox Wall, 6m Blunt";
		descriptionShort = "YOu can put your pills in here.";
		model = "\BSF_Community_Addon\addons\bsf_misc\BSF_Crate\BSF_Crate.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Items\data\ui\icon_BSF_PillBox_W3_Blunt_CA.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class BSF_ModularBunkerBig_Kit: Exile_AbstractItem
	{
		scope = 2;
		mass = 10;
		displayName = "Modular Bunker, Big";
		descriptionShort = "For those that are really afraid of getting shot.";
		model = "\BSF_Community_Addon\addons\bsf_misc\BSF_Crate\BSF_Crate.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Items\data\ui\icon_BSF_ModularBunkerBig_CA.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class BSF_ModularBunkerHQ_Kit: Exile_AbstractItem
	{
		scope = 2;
		mass = 10;
		displayName = "Modular Bunker, HQ";
		descriptionShort = "If you  had minion, you could command them from here.  You don't.";
		model = "\BSF_Community_Addon\addons\bsf_misc\BSF_Crate\BSF_Crate.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Items\data\ui\icon_BSF_ModularBunkerHQ_CA.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class BSF_ModularBunkerSmall_Kit: Exile_AbstractItem
	{
		scope = 2;
		mass = 10;
		displayName = "Modular Bunker, Small";
		descriptionShort = "A wee little bunker to cower in.";
		model = "\BSF_Community_Addon\addons\bsf_misc\BSF_Crate\BSF_Crate.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Items\data\ui\icon_BSF_ModularBunkerSmall_CA.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class BSF_ModularBunkerTall_Kit: Exile_AbstractItem
	{
		scope = 2;
		mass = 10;
		displayName = "Modular Bunker, Tall";
		descriptionShort = "You can see your house from up here.";
		model = "\BSF_Community_Addon\addons\bsf_misc\BSF_Crate\BSF_Crate.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Items\data\ui\icon_BSF_ModularBunkerTall_CA.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class BSF_ModularBunker1Block_Kit: Exile_AbstractItem
	{
		scope = 2;
		mass = 10;
		displayName = "Modular Bunker Wall, 1 Block";
		descriptionShort = "For those that are really afraid of getting shot.";
		model = "\BSF_Community_Addon\addons\bsf_misc\BSF_Crate\BSF_Crate.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Items\data\ui\icon_BSF_ModularBunker1Block_CA.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class BSF_ModularBunker3Block_Kit: Exile_AbstractItem
	{
		scope = 2;
		mass = 10;
		displayName = "Modular Bunker Wall, 3 Blocks";
		descriptionShort = "For those that are really afraid of getting shot.";
		model = "\BSF_Community_Addon\addons\bsf_misc\BSF_Crate\BSF_Crate.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Items\data\ui\icon_BSF_ModularBunker3Block_CA.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class BSF_ConcreteRamp1_Kit: Exile_AbstractItem
	{
		scope = 2;
		mass = 10;
		displayName = "Conccrete Ramp";
		descriptionShort = "A large flat concrete ramp";
		model = "\BSF_Community_Addon\addons\bsf_misc\BSF_Crate\BSF_Crate.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Items\data\ui\icon_BSF_ConcreteRamp1_CA.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class BSF_WaterPump_Kit: Exile_AbstractItem
	{
		scope = 2;
		mass = 10;
		displayName = "Water Pump";
		descriptionShort = "A water pump for all of your clean, watery needs";
		model = "\BSF_Community_Addon\addons\bsf_misc\BSF_Crate\BSF_Crate.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Items\data\ui\icon_BSF_WaterPump_CA.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class BSF_WaterTank_Kit: Exile_AbstractItem
	{
		scope = 2;
		author = "Troy - BS-Free";
		displayName = "Water Tank";
		descriptionShort = "A bigger, better storage tank for your water.";
		model = "\BSF_Community_Addon\addons\bsf_misc\BSF_Crate\BSF_Crate.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Items\data\ui\icon_BSF_WaterTank_CA.paa";
		mass = 30;
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class land_FlexibleTankForest_Kit: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Flexible Fuel Tank, Forest";
		descriptionShort = "A good place to store fuel.";
		mass = 50;
		model = "\BSF_Community_Addon\addons\bsf_misc\BSF_Crate\BSF_Crate.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Items\data\ui\icon_BSF_FlexibleFuelTankForest_CA.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class land_FlexibleTankSand_Kit: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Flexible Fuel Tank, Sand";
		descriptionShort = "A good place to store fuel.";
		mass = 50;
		model = "\BSF_Community_Addon\addons\bsf_misc\BSF_Crate\BSF_Crate.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Items\data\ui\icon_BSF_FlexibleFuelTankSand_CA.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class BSF_SolarTentBlue_Kit: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Backpacking Tent, Blue & White";
		descriptionShort = "A modern take on the classic pup-tent";
		mass = 30;
		model = "a3\props_f_enoch\military\camps\tentsolar_01_folded_f.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Items\data\ui\icon_BSF_SolarTentBlue_CA.paa";
		hiddenSelections[] = {"camo_1"};
		hiddenSelectionsTextures[] = {"a3\props_f_enoch\military\camps\data\tentsolar_01_bluewhite_f_co.paa"};
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class BSF_SolarTentOlive_Kit: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Backpacking Tent, Olive";
		descriptionShort = "A modern take on the classic pup-tent";
		mass = 30;
		model = "a3\props_f_enoch\military\camps\tentsolar_01_folded_f.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Items\data\ui\icon_BSF_SolarTentOlive_CA.paa";
		hiddenSelections[] = {"camo_1"};
		hiddenSelectionsTextures[] = {"a3\props_f_enoch\military\camps\data\tentsolar_01_olive_f_co.paa"};
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class BSF_SolarTentRed_Kit: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Backpacking Tent, Red & White";
		descriptionShort = "A modern take on the classic pup-tent";
		mass = 30;
		model = "a3\props_f_enoch\military\camps\tentsolar_01_folded_f.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Items\data\ui\icon_BSF_SolarTentRed_CA.paa";
		hiddenSelections[] = {"camo_1"};
		hiddenSelectionsTextures[] = {"a3\props_f_enoch\military\camps\data\tentsolar_01_redwhite_f_co.paa"};
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class BSF_SolarTentSand_Kit: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Backpacking Tent, Sand";
		descriptionShort = "A modern take on the classic pup-tent";
		mass = 30;
		model = "a3\props_f_enoch\military\camps\tentsolar_01_folded_f.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Items\data\ui\icon_BSF_SolarTentSand_CA.paa";
		hiddenSelections[] = {"camo_1"};
		hiddenSelectionsTextures[] = {"a3\props_f_enoch\military\camps\data\tentsolar_01_sand_f_co.paa"};
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class BSF_RuggedCabinet1_Black_Kit: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Rugged Portable Cabinet - 4 Drawers, Black";
		descriptionShort = "A rugged storage box for your knickknacks.";
		mass = 30;
		model = "\BSF_Community_Addon\addons\bsf_misc\BSF_Crate\BSF_Crate.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Items\data\ui\icon_BSF_RuggedCabinet1_Black_CA.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class BSF_RuggedCabinet1_Olive_Kit: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Rugged Portable Cabinet - 4 Drawers, Olive";
		descriptionShort = "A rugged storage box for your knickknacks.";
		mass = 30;
		model = "\BSF_Community_Addon\addons\bsf_misc\BSF_Crate\BSF_Crate.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Items\data\ui\icon_BSF_RuggedCabinet1_Olive_CA.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class BSF_RuggedCabinet1_Sand_Kit: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Rugged Portable Cabinet - 4 Drawers, Sand";
		descriptionShort = "A rugged storage box for your knickknacks.";
		mass = 30;
		model = "\BSF_Community_Addon\addons\bsf_misc\BSF_Crate\BSF_Crate.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Items\data\ui\icon_BSF_RuggedCabinet1_Sand_CA.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class BSF_RuggedCabinet2_Black_Kit: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Rugged Portable Cabinet - 7 Drawers, Black";
		descriptionShort = "A rugged storage box for your knickknacks.";
		mass = 30;
		model = "\BSF_Community_Addon\addons\bsf_misc\BSF_Crate\BSF_Crate.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Items\data\ui\icon_BSF_RuggedCabinet2_Black_CA.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class BSF_RuggedCabinet2_Olive_Kit: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Rugged Portable Cabinet - 7 Drawers, Olive";
		descriptionShort = "A rugged storage box for your knickknacks.";
		mass = 30;
		model = "\BSF_Community_Addon\addons\bsf_misc\BSF_Crate\BSF_Crate.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Items\data\ui\icon_BSF_RuggedCabinet2_Olive_CA.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class BSF_RuggedCabinet2_Sand_Kit: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Rugged Portable Cabinet - 7 Drawers, Sand";
		descriptionShort = "A rugged storage box for your knickknacks.";
		mass = 30;
		model = "\BSF_Community_Addon\addons\bsf_misc\BSF_Crate\BSF_Crate.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Items\data\ui\icon_BSF_RuggedCabinet2_Sand_CA.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class BSF_RuggedCabinet3_Black_Kit: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Rugged Portable Cabinet - Compact, Black";
		descriptionShort = "A rugged storage box for your knickknacks.";
		mass = 30;
		model = "\BSF_Community_Addon\addons\bsf_misc\BSF_Crate\BSF_Crate.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Items\data\ui\icon_BSF_RuggedCabinet3_Black_CA.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class BSF_RuggedCabinet3_Olive_Kit: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Rugged Portable Cabinet - Compact, Olive";
		descriptionShort = "A rugged storage box for your knickknacks.";
		mass = 30;
		model = "\BSF_Community_Addon\addons\bsf_misc\BSF_Crate\BSF_Crate.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Items\data\ui\icon_BSF_RuggedCabinet3_Olive_CA.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class BSF_RuggedCabinet3_Sand_Kit: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Rugged Portable Cabinet - Compact, Sand";
		descriptionShort = "A rugged storage box for your knickknacks.";
		mass = 30;
		model = "\BSF_Community_Addon\addons\bsf_misc\BSF_Crate\BSF_Crate.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Items\data\ui\icon_BSF_RuggedCabinet3_Sand_CA.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class BSF_Fishing_Net: Exile_AbstractItem
	{
		scope = 2;
		author = "Troy - BS-Free";
		displayName = "Fishing Net";
		descriptionShort = "A simple fishing net.  Now get to work. Get yourself a boat, head out to sea and hit the INS key.";
		model = "\BSF_Community_Addon\addons\BSF_Misc\Items\BSF_Fishing_Net.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Items\data\ui\icon_BSF_Fishing_Net_CA.paa";
		mass = 30;
	};
	class BSF_Book_ZombEats: Exile_AbstractItem
	{
		displayName = "Zomb-Eat!";
		descriptionShort = "A comprehensive how-to guide on cooking your own gourmet zombie meals.";
		model = "BSF_Community_Addon\addons\BSF_Misc\Items\BSF_Book_1.p3d";
		picture = "BSF_Community_Addon\addons\BSF_Misc\Items\data\ui\icon_BSF_Book_ZombEats_CA.paa";
		mass = 1;
	};
	class BSF_Book_SLAP: Exile_AbstractItem
	{
		displayName = "SLAP!";
		descriptionShort = "A comprehensive how-to guide on cooking your own gourmet zombie meals.";
		model = "BSF_Community_Addon\addons\BSF_Misc\Items\BSF_Book_1.p3d";
		picture = "BSF_Community_Addon\addons\BSF_Misc\Items\data\ui\icon_BSF_Book_SLAP_CA.paa";
		mass = 1;
	};
	class BSF_Book_FuckYou: Exile_AbstractItem
	{
		displayName = "SLAP!";
		descriptionShort = "A guide to civil discourse";
		model = "BSF_Community_Addon\addons\BSF_Misc\Items\BSF_Book_3.p3d";
		picture = "BSF_Community_Addon\addons\BSF_Misc\Items\data\ui\icon_BSF_Book_FuckYou_CA.paa";
		mass = 1;
	};
};
class CfgEditorCategories
{
	class BSF_Storage
	{
		displayName = "BSF Storage";
	};
	class BSF_Items
	{
		displayName = "BSF Items";
	};
};
class CfgEditorSubcategories
{
	class BSF_Items_Materials
	{
		displayName = "Materials";
	};
	class BSF_Rugged_Cab
	{
		displayName = "Rugged Cabinets";
	};
};
class CfgVehicleClasses
{
	class ExileConstructions
	{
		displayName = "Exile Constructions";
	};
	class ExileContainers
	{
		displayName = "Exile Containers";
	};
};
class CfgVehicles
{
	class Exile_Construction_Abstract_Static;
	class Exile_Construction_Abstract_Physics;
	class Exile_Container_Abstract;
	class NonStrategic;
	class Building;
	class House;
	class Land_Workbench_01_F;
	class BSF_Workbench_01: Land_Workbench_01_F
	{
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_Workbench_01_F.jpg";
		scope = 2;
		displayName = "BSF Workbench";
		model = "\A3\Structures_F_Heli\Furniture\Workbench_01_F.p3d";
	};
	class BSF_GrassCutter_20_Preview: Exile_Construction_Abstract_Physics
	{
		model = "BSF_Community_Addon\addons\BSF_Misc\Items\BSF_Frisbee_Preview.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"\BSF_Community_Addon\addons\BSF_Misc\data\BSF_Object_Preview.rvmat"};
		hiddenSelectionsTextures[] = {"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"};
	};
	class BSF_GrassCutter_20: Exile_Construction_Abstract_Static
	{
		editorPreview = "\BSF_Community_Addon\addons\BSF_Misc\Items\data\ui\icon_BSF_Frisbee_20_CA.paa";
		scope = 2;
		displayName = "BSF Grass Cutter, 20 meter";
		model = "BSF_Community_Addon\addons\BSF_Misc\Items\BSF_Frisbee.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"BSF_Community_Addon\addons\BSF_Misc\Items\data\BSF_Frisbee.rvmat"};
		hiddenSelectionsTextures[] = {"BSF_Community_Addon\addons\BSF_Misc\Items\data\BSF_Frisbee_Blue_CO.paa"};
	};
	class BSF_GrassCutter_30_Preview: Exile_Construction_Abstract_Physics
	{
		model = "BSF_Community_Addon\addons\BSF_Misc\Items\BSF_Frisbee_Preview.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"\BSF_Community_Addon\addons\BSF_Misc\data\BSF_Object_Preview.rvmat"};
		hiddenSelectionsTextures[] = {"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"};
	};
	class BSF_GrassCutter_30: Exile_Construction_Abstract_Static
	{
		editorPreview = "\BSF_Community_Addon\addons\BSF_Misc\Items\data\ui\icon_BSF_Frisbee_30_CA.paa";
		scope = 2;
		displayName = "BSF Grass Cutter, 30 meter";
		model = "BSF_Community_Addon\addons\BSF_Misc\Items\BSF_Frisbee.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"BSF_Community_Addon\addons\BSF_Misc\Items\data\BSF_Frisbee.rvmat"};
		hiddenSelectionsTextures[] = {"BSF_Community_Addon\addons\BSF_Misc\Items\data\BSF_Frisbee_Green_CO.paa"};
	};
	class BSF_GrassCutter_40_Preview: Exile_Construction_Abstract_Physics
	{
		model = "BSF_Community_Addon\addons\BSF_Misc\Items\BSF_Frisbee_Preview.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"\BSF_Community_Addon\addons\BSF_Misc\data\BSF_Object_Preview.rvmat"};
		hiddenSelectionsTextures[] = {"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"};
	};
	class BSF_GrassCutter_40: Exile_Construction_Abstract_Static
	{
		editorPreview = "\BSF_Community_Addon\addons\BSF_Misc\Items\data\ui\icon_BSF_Frisbee_40_CA.paa";
		scope = 2;
		displayName = "BSF Grass Cutter, 40 meter";
		model = "BSF_Community_Addon\addons\BSF_Misc\Items\BSF_Frisbee.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"BSF_Community_Addon\addons\BSF_Misc\Items\data\BSF_Frisbee.rvmat"};
		hiddenSelectionsTextures[] = {"BSF_Community_Addon\addons\BSF_Misc\Items\data\BSF_Frisbee_Orange_CO.paa"};
	};
	class BSF_Item_Copper_Plates: Exile_Construction_Abstract_Static
	{
		editorPreview = "\BSF_Community_Addon\addons\BSF_Misc\Items\data\ui\icon_BSF_Item_Copper_Plates_CA.paa";
		scope = 2;
		editorCategory = "BSF_Items";
		editorSubcategory = "BSF_Items_Materials";
		displayName = "BSF Copper Plates";
		model = "BSF_Community_Addon\addons\BSF_Misc\Items\BSF_Item_Copper_Plates.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"BSF_Community_Addon\addons\BSF_Misc\Items\data\BSF_Item_Copper_Plates.rvmat"};
		hiddenSelectionsTextures[] = {"BSF_Community_Addon\addons\BSF_Misc\Items\data\BSF_Item_Copper_Plates_CO.paa"};
	};
	class BSF_Item_Book_ZombEats: Exile_Construction_Abstract_Static
	{
		editorPreview = "\BSF_Community_Addon\addons\BSF_Misc\Items\data\ui\icon_BSF_Book_ZombEats_CA.paa";
		scope = 2;
		displayName = "Zomb Eats!";
		model = "BSF_Community_Addon\addons\BSF_Misc\Items\BSF_Book_1.p3d";
	};
	class BSF_Item_Book_SLAP: Exile_Construction_Abstract_Static
	{
		editorPreview = "\BSF_Community_Addon\addons\BSF_Misc\Items\data\ui\icon_BSF_Book_SLAP_CA.paa";
		scope = 2;
		displayName = "SLAP!";
		model = "BSF_Community_Addon\addons\BSF_Misc\Items\BSF_Book_2.p3d";
	};
	class BSF_Item_Book_FuckYou: Exile_Construction_Abstract_Static
	{
		editorPreview = "\BSF_Community_Addon\addons\BSF_Misc\Items\data\ui\icon_BSF_Book_SLAP_CA.paa";
		scope = 2;
		displayName = "Us vs Them";
		model = "BSF_Community_Addon\addons\BSF_Misc\Items\BSF_Book_3.p3d";
	};
	class BSF_medchest_Preview: Exile_Construction_Abstract_Physics
	{
		scope = 1;
		model = "\BSF_Community_Addon\addons\BSF_Misc\Items\BSF_medchest_f.p3d";
		displayName = "Medicine Chest";
		class AnimationSources
		{
			class Open_Lid
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			class Heal
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
		};
		class UserActions
		{
			class Open_Chest
			{
				displayNameDefault = "<img image='\BSF_Community_Addon\addons\BSF_Misc\data\Icons\icon_chest_open_ca.paa' size='2.5' />";
				displayName = "Open Chest";
				position = "Action_Point";
				priority = 0.4;
				radius = 3;
				onlyForPlayer = 0;
				showWindow = 1;
				condition = "(this animationPhase 'Open_Lid' < 0.5) && ((this getVariable ['ExileIsLocked',''] isEqualTo '') || (this getVariable ['ExileIsLocked',''] isEqualTo 0))";
				statement = "this animateSource [""Open_Lid"",1];playSound3D [""A3\Sounds_F\structures\doors\RollDoors\RollDoorsSqueak_1.wss"", this, false, getPosASL this, 1]";
			};
			class Close_Chest: Open_Chest
			{
				displayNameDefault = "<img image='\BSF_Community_Addon\addons\BSF_Misc\data\Icons\icon_chest_close_ca.paa' size='2.5' />";
				displayName = "Close Window";
				priority = 0.2;
				condition = "this animationSourcePhase ""Open_Lid"" == 1";
				statement = "this animateSource [""Open_Lid"",0];playSound3D [""A3\Sounds_F\structures\doors\RollDoors\RollDoorsSqueak_1.wss"", this, false, getPosASL this, 1]";
			};
			class Heal
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Heal Thyself";
				position = "camera";
				priority = 1;
				radius = 2;
				onlyForPlayer = 0;
				showWindow = 1;
				condition = 1;
				statement = "player setDamage 0;";
			};
		};
	};
	class BSF_medchest: Exile_Container_Abstract
	{
		scope = 2;
		model = "\BSF_Community_Addon\addons\BSF_Misc\Items\BSF_medchest_f.p3d";
		displayName = "Medicine Chest";
		maximumLoad = 5000;
		armor = 5000;
		simulation = "house";
		exileRequiresSimulation = 1;
		editorCategory = "BSF_Storage";
		class AnimationSources
		{
			class Open_Lid
			{
				source = "user";
				initPhase = 0;
				animPeriod = 2;
				sound = "MetalDoorsSound";
			};
			class Heal_Source
			{
				source = "user";
				initPhase = 0;
				animPeriod = 2;
				sound = "MetalDoorsSound";
			};
		};
		class UserActions
		{
			class OpenChest
			{
				displayNameDefault = "<img image='\BSF_Community_Addon\addons\BSF_Misc\data\Icons\icon_chest_open_ca.paa' size='2.5' />";
				displayName = "Open Chest";
				position = "ActionPoint";
				priority = 0.4;
				radius = 2.5;
				onlyForPlayer = 0;
				condition = "((this animationSourcePhase 'Open_Lid') < 0.5)";
				statement = "this animateSource ['Open_Lid', 1];";
			};
			class CloseChest: OpenChest
			{
				displayName = "Close Chest";
				priority = 0.2;
				condition = "((this animationSourcePhase 'Open_Lid') >= 0.1)";
				statement = "this animateSource ['Open_Lid', 0];";
			};
			class healing
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "heal yourself";
				position = "ActionPoint";
				priority = 1;
				radius = 2;
				onlyForPlayer = 0;
				showWindow = 0;
				condition = 1;
				statement = "player setDamage 0;";
			};
		};
	};
	class land_FlexibleTankForest: House
	{
		scope = 2;
		displayName = "Flexible Fuel Tank";
		class SimpleObject
		{
			eden = 0;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.826;
			verticalOffsetWorld = 0;
			init = "''";
		};
		model = "\A3\Supplies_F_Heli\Fuel\FlexibleTank_01_F.p3d";
		hiddenSelections[] = {"camo_1"};
		hiddenSelectionsTextures[] = {"\A3\Supplies_F_Heli\Fuel\Data\Flexible_tank_forest_CO.paa"};
		armor = 5000;
		simulation = "house";
		memoryPointSupply = "slingloadcargox";
		exileRequiresSimulation = 1;
		transportFuel = 50000;
		disableInventory = 1;
		destrType = "DestructNo";
	};
	class land_FlexibleTankForest_Preview: Exile_Construction_Abstract_Physics
	{
		scope = 1;
		model = "\A3\Supplies_F_Heli\Fuel\FlexibleTank_01_F.p3d";
		hiddenSelections[] = {"camo_1"};
		hiddenSelectionsTextures[] = {"\A3\Supplies_F_Heli\Fuel\Data\Flexible_tank_forest_CO.paa"};
	};
	class land_FlexibleTankSand: Exile_Construction_Abstract_Static
	{
		scope = 2;
		displayName = "Flexible Fuel Tank";
		class SimpleObject
		{
			eden = 0;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.826;
			verticalOffsetWorld = 0;
			init = "''";
		};
		model = "\A3\Supplies_F_Heli\Fuel\FlexibleTank_01_F.p3d";
		hiddenSelections[] = {"camo_1"};
		hiddenSelectionsTextures[] = {"\A3\Supplies_F_Heli\Fuel\Data\Flexible_tank_Sand_CO.paa"};
		armor = 5000;
		simulation = "house";
		memoryPointSupply = "slingloadcargo1";
		exileRequiresSimulation = 1;
		transportFuel = 50000;
		disableInventory = 1;
		destrType = "DestructNo";
	};
	class land_FlexibleTankSand_Preview: Exile_Construction_Abstract_Physics
	{
		scope = 1;
		model = "\A3\Supplies_F_Heli\Fuel\FlexibleTank_01_F.p3d";
		hiddenSelections[] = {"camo_1"};
		hiddenSelectionsTextures[] = {"\A3\Supplies_F_Heli\Fuel\Data\Flexible_tank_Sand_CO.paa"};
	};
	class land_welder: Exile_Construction_Abstract_Static
	{
		scope = 2;
		displayName = "Welding Cart";
		model = "\BSF_Community_Addon\addons\BSF_Misc\Items\welder_f.p3d";
		exileRequiresSimulation = 1;
	};
	class land_welder_Preview: Exile_Construction_Abstract_Physics
	{
		scope = 1;
		displayName = "Welding Cart";
		model = "\A3\Structures_F_Heli\Civ\Constructions\WeldingTrolley_01_F.p3d";
	};
	class BSF_CargoPlatform_Base: Exile_Construction_Abstract_Static
	{
		author = "BSF";
		scope = 1;
		displayName = "Cargo Tower";
		model = "\a3\Structures_F_Enoch\Military\Camps\CargoPlatform_01_F.p3d";
		hiddenSelections[] = {"Camo_1"};
		hiddenSelectionsMaterials[] = {"a3\Structures_F_Enoch\Military\Camps\data\Cargo_Platform_V1_multi.rvmat"};
		class AnimationSources
		{
			class Leg_1_Move_Source
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			class Leg_2_Move_Source
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			class Leg_3_Move_Source
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			class Leg_4_Move_Source
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			class Panel_1_Rotate_Source
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			class Panel_2_Rotate_Source
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			class Panel_3_Rotate_Source
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			class Panel_4_Rotate_Source
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			class Panel_1_Hide_Source
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 0;
			};
			class Panel_2_Hide_Source
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 0;
			};
			class Panel_3_Hide_Source
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 0;
			};
			class Panel_4_Hide_Source
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 0;
			};
		};
		class Attributes
		{
			class Leg_1_move_source
			{
				displayName = "$STR_A3_C_CfgVehicles_CargoPlatform_01_base_F_Attributes_Leg_1_move_source0";
				property = "Leg_1_move";
				control = "Slider";
				defaultValue = 0;
				expression = "_this animateSource ['%s',_value*6.541,true]";
			};
			class Leg_2_move_source: Leg_1_move_source
			{
				displayName = "$STR_A3_C_CfgVehicles_CargoPlatform_01_base_F_Attributes_Leg_2_move_source0";
				property = "Leg_2_move";
			};
			class Leg_3_move_source: Leg_2_move_source
			{
				displayName = "$STR_A3_C_CfgVehicles_CargoPlatform_01_base_F_Attributes_Leg_3_move_source0";
				property = "Leg_3_move";
			};
			class Leg_4_move_source: Leg_2_move_source
			{
				displayName = "$STR_A3_C_CfgVehicles_CargoPlatform_01_base_F_Attributes_Leg_4_move_source0";
				property = "Leg_4_move";
			};
			class Panel_1_rotate_source
			{
				displayName = "$STR_A3_C_CfgVehicles_CargoPlatform_01_base_F_Attributes_Panel_1_rotate_source0";
				property = "Panel_1_rotate";
				control = "Slider";
				defaultValue = 0;
				expression = "_this animateSource ['%s',rad(_value*180),true]";
			};
			class Panel_2_rotate_source: Panel_1_rotate_source
			{
				displayName = "$STR_A3_C_CfgVehicles_CargoPlatform_01_base_F_Attributes_Panel_2_rotate_source0";
				property = "Panel_2_rotate";
			};
			class Panel_3_rotate_source: Panel_2_rotate_source
			{
				displayName = "$STR_A3_C_CfgVehicles_CargoPlatform_01_base_F_Attributes_Panel_3_rotate_source0";
				property = "Panel_3_rotate";
			};
			class Panel_4_rotate_source: Panel_2_rotate_source
			{
				displayName = "$STR_A3_C_CfgVehicles_CargoPlatform_01_base_F_Attributes_Panel_4_rotate_source0";
				property = "Panel_4_rotate";
			};
			class Panel_1_hide_source
			{
				displayName = "$STR_A3_C_CfgVehicles_CargoPlatform_01_base_F_Attributes_Panel_1_hide_source0";
				property = "Panel_1_hide";
				control = "CheckboxNumber";
				defaultValue = 0;
				expression = "_this animateSource ['%s',_value,true]";
			};
			class Panel_2_hide_source: Panel_1_hide_source
			{
				displayName = "$STR_A3_C_CfgVehicles_CargoPlatform_01_base_F_Attributes_Panel_2_hide_source0";
				property = "Panel_2_hide";
			};
			class Panel_3_hide_source: Panel_2_hide_source
			{
				displayName = "$STR_A3_C_CfgVehicles_CargoPlatform_01_base_F_Attributes_Panel_3_hide_source0";
				property = "Panel_3_hide";
			};
			class Panel_4_hide_source: Panel_2_hide_source
			{
				displayName = "$STR_A3_C_CfgVehicles_CargoPlatform_01_base_F_Attributes_Panel_4_hide_source0";
				property = "Panel_4_hide";
			};
		};
	};
	class BSF_CargoPlatform_Base_Preview: Exile_Construction_Abstract_Physics
	{
		author = "BSF";
		scope = 1;
		displayName = "Cargo Tower";
		model = "\a3\Structures_F_Enoch\Military\Camps\CargoPlatform_01_F.p3d";
		hiddenSelections[] = {"Camo_1"};
		hiddenSelectionsMaterials[] = {"a3\Structures_F_Enoch\Military\Camps\data\Cargo_Platform_V1_multi.rvmat"};
		class AnimationSources
		{
			class Leg_1_Move_Source
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			class Leg_2_Move_Source
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			class Leg_3_Move_Source
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			class Leg_4_Move_Source
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			class Panel_1_Rotate_Source
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			class Panel_2_Rotate_Source
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			class Panel_3_Rotate_Source
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			class Panel_4_Rotate_Source
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			class Panel_1_Hide_Source
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 0;
			};
			class Panel_2_Hide_Source
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 0;
			};
			class Panel_3_Hide_Source
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 0;
			};
			class Panel_4_Hide_Source
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 0;
			};
		};
	};
	class BSF_CargoPlatform_Green: BSF_CargoPlatform_Base
	{
		scope = 2;
		hiddenSelectionsMaterials[] = {"a3\Structures_F_Enoch\Military\Camps\data\Cargo_Platform_V1_multi.rvmat"};
	};
	class BSF_CargoPlatform_Green_Preview: BSF_CargoPlatform_Base_Preview
	{
		scope = 2;
		hiddenSelectionsMaterials[] = {"a3\Structures_F_Enoch\Military\Camps\data\Cargo_Platform_V1_multi.rvmat"};
	};
	class BSF_CargoPlatform_Brown: BSF_CargoPlatform_Base
	{
		scope = 2;
		hiddenSelectionsMaterials[] = {"a3\Structures_F_Enoch\Military\Camps\data\Cargo_Platform_V2_multi.rvmat"};
	};
	class BSF_CargoPlatform_Brown_Preview: BSF_CargoPlatform_Base_Preview
	{
		scope = 2;
		hiddenSelectionsMaterials[] = {"a3\Structures_F_Enoch\Military\Camps\data\Cargo_Platform_V2_multi.rvmat"};
	};
	class BSF_CargoPlatform_Jungle: BSF_CargoPlatform_Base
	{
		scope = 2;
		hiddenSelectionsMaterials[] = {"a3\Structures_F_Enoch\Military\Camps\data\Cargo_Platform_V3_multi.rvmat"};
	};
	class BSF_CargoPlatform_Jungle_Preview: BSF_CargoPlatform_Base_Preview
	{
		scope = 2;
		hiddenSelectionsMaterials[] = {"a3\Structures_F_Enoch\Military\Camps\data\Cargo_Platform_V3_multi.rvmat"};
	};
	class BSF_CargoPlatform_Rusty: BSF_CargoPlatform_Base
	{
		scope = 2;
		hiddenSelectionsMaterials[] = {"a3\Structures_F_Enoch\Military\Camps\data\Cargo_Platform_V4_multi.rvmat"};
	};
	class BSF_CargoPlatform_Rusty_Preview: BSF_CargoPlatform_Base_Preview
	{
		scope = 2;
		hiddenSelectionsMaterials[] = {"a3\Structures_F_Enoch\Military\Camps\data\Cargo_Platform_V4_multi.rvmat"};
	};
	class BSF_Statue1: Exile_Construction_Abstract_Static
	{
		scope = 2;
		displayName = "Statue, female";
		model = "a3\structures_f_enoch\cultural\statues\statue_03_f.p3d";
		simulation = "house";
		exileRequiresSimulation = 1;
	};
	class BSF_Statue1_Preview: Exile_Construction_Abstract_Physics
	{
		scope = 2;
		displayName = "Statue, female";
		model = "a3\structures_f_enoch\cultural\statues\statue_03_f.p3d";
	};
	class BSF_GuardBox: Exile_Construction_Abstract_Static
	{
		scope = 2;
		displayName = "Guard Box";
		model = "a3\structures_f_enoch\military\barracks\guardbox_01_green_f.p3d";
		simulation = "house";
		exileRequiresSimulation = 1;
	};
	class BSF_GuardBox_Preview: Exile_Construction_Abstract_Physics
	{
		scope = 2;
		displayName = "Guard Box";
		model = "a3\structures_f_enoch\military\barracks\guardbox_01_green_f.p3d";
	};
	class BSF_Radar1: Exile_Construction_Abstract_Static
	{
		scope = 2;
		displayName = "Radar Tower v1";
		model = "a3\structures_f_enoch\military\radar\mobileradar_01_radar_f.p3d";
		simulation = "house";
		exileRequiresSimulation = 1;
	};
	class BSF_Radar1_Preview: Exile_Construction_Abstract_Physics
	{
		scope = 2;
		displayName = "Radar Tower v1";
		model = "a3\structures_f_enoch\military\radar\mobileradar_01_radar_f.p3d";
	};
	class BSF_DearStand2: Exile_Construction_Abstract_Static
	{
		scope = 2;
		displayName = "Dear Stand v2";
		model = "a3\props_f_enoch\civilian\forest\deerstand_02_f.p3d";
		simulation = "house";
		ladders[] = {{"ladder_1_start","ladder_1_end",2.5,"ladder_1_action"}};
		exileRequiresSimulation = 1;
	};
	class BSF_DearStand2_Preview: Exile_Construction_Abstract_Physics
	{
		scope = 2;
		displayName = "Dear Stand v2";
		model = "a3\props_f_enoch\civilian\forest\deerstand_02_f.p3d";
	};
	class BSF_DearStand1: Exile_Construction_Abstract_Static
	{
		scope = 2;
		displayName = "Dear Stand v1";
		model = "a3\props_f_enoch\civilian\forest\deerstand_01_f.p3d";
		simulation = "house";
		ladders[] = {{"ladder_1_start","ladder_1_end",2.5,"ladder_1_action"}};
		exileRequiresSimulation = 1;
	};
	class BSF_DearStand1_Preview: Exile_Construction_Abstract_Physics
	{
		scope = 2;
		displayName = "Dear Stand v1";
		model = "a3\props_f_enoch\civilian\forest\deerstand_01_f.p3d";
	};
	class BSF_GuardTowerSmall: Exile_Construction_Abstract_Static
	{
		scope = 2;
		displayName = "Guard Tower, Small";
		model = "a3\structures_f_enoch\military\barracks\guardtower_02_f.p3d";
		simulation = "house";
		ladders[] = {{"ladder_1_start","ladder_1_end",2.5,"ladder_1_action"}};
		exileRequiresSimulation = 1;
	};
	class BSF_GuardTowerSmall_Preview: Exile_Construction_Abstract_Physics
	{
		scope = 2;
		displayName = "Guard Tower, Small";
		model = "a3\structures_f_enoch\military\barracks\guardtower_02_f.p3d";
	};
	class BSF_GuardTowerBig: Exile_Construction_Abstract_Static
	{
		scope = 2;
		displayName = "Guard Tower, Big";
		model = "a3\structures_f_enoch\military\barracks\guardtower_01_f.p3d";
		simulation = "house";
		exileRequiresSimulation = 1;
	};
	class BSF_GuardTowerBig_Preview: Exile_Construction_Abstract_Physics
	{
		scope = 2;
		displayName = "Guard Tower, Big";
		model = "a3\structures_f_enoch\military\barracks\guardtower_01_f.p3d";
	};
	class BSF_Bunker2_Double: Exile_Construction_Abstract_Static
	{
		scope = 2;
		displayName = "Old Concrete Bunker, Double";
		model = "a3\structures_f_enoch\military\bunkers\bunker_02_light_double_f.p3d";
		simulation = "house";
		exileRequiresSimulation = 1;
	};
	class BSF_Bunker2_Double_Preview: Exile_Construction_Abstract_Physics
	{
		scope = 2;
		displayName = "Old Concrete Bunker, Double";
		model = "a3\structures_f_enoch\military\bunkers\bunker_02_light_double_f.p3d";
	};
	class BSF_Bunker2_Left: Exile_Construction_Abstract_Static
	{
		scope = 2;
		displayName = "Old Concrete Bunker, Left";
		model = "a3\structures_f_enoch\military\bunkers\bunker_02_light_left_f.p3d";
		simulation = "house";
		exileRequiresSimulation = 1;
	};
	class BSF_Bunker2_Left_Preview: Exile_Construction_Abstract_Physics
	{
		scope = 2;
		displayName = "Old Concrete Bunker, Left";
		model = "a3\structures_f_enoch\military\bunkers\bunker_02_light_left_f.p3d";
	};
	class BSF_Bunker2_Right: Exile_Construction_Abstract_Static
	{
		scope = 2;
		displayName = "Old Concrete Bunker, Right";
		model = "a3\structures_f_enoch\military\bunkers\bunker_02_light_right_f.p3d";
		simulation = "house";
		exileRequiresSimulation = 1;
	};
	class BSF_Bunker2_Right_Preview: Exile_Construction_Abstract_Physics
	{
		scope = 2;
		displayName = "Old Concrete Bunker, Right";
		model = "a3\structures_f_enoch\military\bunkers\bunker_02_light_right_f.p3d";
	};
	class BSF_Bunker2_Mossy_Double: Exile_Construction_Abstract_Static
	{
		scope = 2;
		displayName = "Old Mossy Concrete Bunker, Double";
		model = "a3\structures_f_enoch\military\bunkers\bunker_02_double_f.p3d";
		simulation = "house";
		exileRequiresSimulation = 1;
	};
	class BSF_Bunker2_Mossy_Double_Preview: Exile_Construction_Abstract_Physics
	{
		scope = 2;
		displayName = "Old Mossy Concrete Bunker, Double";
		model = "a3\structures_f_enoch\military\bunkers\bunker_02_double_f.p3d";
	};
	class BSF_Bunker2_Mossy_Left: Exile_Construction_Abstract_Static
	{
		scope = 2;
		displayName = "Old Mossy Concrete Bunker, Left";
		model = "a3\structures_f_enoch\military\bunkers\bunker_02_left_f.p3d";
		simulation = "house";
		exileRequiresSimulation = 1;
	};
	class BSF_Bunker2_Mossy_Left_Preview: Exile_Construction_Abstract_Physics
	{
		scope = 2;
		displayName = "Old Mossy Concrete Bunker, Left";
		model = "a3\structures_f_enoch\military\bunkers\bunker_02_left_f.p3d";
	};
	class BSF_Bunker2_Mossy_Right: Exile_Construction_Abstract_Static
	{
		scope = 2;
		displayName = "Old Mossy Concrete Bunker, Right";
		model = "a3\structures_f_enoch\military\bunkers\bunker_02_right_f.p3d";
		simulation = "house";
		exileRequiresSimulation = 1;
	};
	class BSF_Bunker2_Mossy_Right_Preview: Exile_Construction_Abstract_Physics
	{
		scope = 2;
		displayName = "Old Mossy Concrete Bunker, Right";
		model = "a3\structures_f_enoch\military\bunkers\bunker_02_right_f.p3d";
	};
	class BSF_PillBoxBig: Exile_Construction_Abstract_Static
	{
		scope = 2;
		displayName = "Pillbox, Big";
		model = "a3\structures_f_exp\military\pillboxes\pillboxbunker_01_big_f.p3d";
		simulation = "house";
		exileRequiresSimulation = 1;
	};
	class BSF_PillBoxBig_Preview: Exile_Construction_Abstract_Physics
	{
		scope = 1;
		displayName = "Pillbox, Big";
		model = "a3\structures_f_exp\military\pillboxes\pillboxbunker_01_big_f.p3d";
	};
	class BSF_PillBoxRect: Exile_Construction_Abstract_Static
	{
		scope = 2;
		displayName = "Pillbox, Rectangle";
		model = "a3\structures_f_exp\military\pillboxes\pillboxbunker_01_rectangle_f.p3d";
		simulation = "house";
		exileRequiresSimulation = 1;
	};
	class BSF_PillBoxRect_Preview: Exile_Construction_Abstract_Physics
	{
		scope = 1;
		displayName = "Pillbox, Rectangle";
		model = "a3\structures_f_exp\military\pillboxes\pillboxbunker_01_rectangle_f.p3d";
	};
	class BSF_PillBoxHex: Exile_Construction_Abstract_Static
	{
		scope = 2;
		displayName = "Pillbox, Hex";
		model = "a3\structures_f_exp\military\pillboxes\pillboxbunker_01_hex_f.p3d";
		simulation = "house";
		exileRequiresSimulation = 1;
	};
	class BSF_PillBoxHex_Preview: Exile_Construction_Abstract_Physics
	{
		scope = 1;
		displayName = "Pillbox, Hex";
		model = "a3\structures_f_exp\military\pillboxes\pillboxbunker_01_hex_f.p3d";
	};
	class BSF_PillBoxWall1_Sharp: Exile_Construction_Abstract_Static
	{
		scope = 2;
		displayName = "Pillbox Wall, 3m Sharp";
		model = "a3\structures_f_exp\military\pillboxes\pillboxwall_01_3m_f.p3d";
		simulation = "house";
		exileRequiresSimulation = 1;
	};
	class BSF_PillBoxWall1_Sharp_Preview: Exile_Construction_Abstract_Physics
	{
		scope = 1;
		displayName = "Pillbox Wall, 3m Sharp";
		model = "a3\structures_f_exp\military\pillboxes\pillboxwall_01_3m_f.p3d";
	};
	class BSF_PillBoxWall3_Sharp: Exile_Construction_Abstract_Static
	{
		scope = 2;
		displayName = "Pillbox Wall, 6m Sharp";
		model = "a3\structures_f_exp\military\pillboxes\pillboxwall_01_6m_f.p3d";
		simulation = "house";
		exileRequiresSimulation = 1;
	};
	class BSF_PillBoxWall3_Sharp_Preview: Exile_Construction_Abstract_Physics
	{
		scope = 1;
		displayName = "Pillbox Wall, 6m Sharp";
		model = "a3\structures_f_exp\military\pillboxes\pillboxwall_01_6m_f.p3d";
	};
	class BSF_PillBoxWall1_Blunt: Exile_Construction_Abstract_Static
	{
		scope = 2;
		displayName = "Pillbox Wall, 3m Blunt";
		model = "a3\structures_f_exp\military\pillboxes\pillboxwall_01_3m_round_f.p3d";
		simulation = "house";
		exileRequiresSimulation = 1;
	};
	class BSF_PillBoxWall1_Blunt_Preview: Exile_Construction_Abstract_Physics
	{
		scope = 1;
		displayName = "Pillbox Wall, 3m Blunt";
		model = "a3\structures_f_exp\military\pillboxes\pillboxwall_01_3m_round_f.p3d";
	};
	class BSF_PillBoxWall3_Blunt: Exile_Construction_Abstract_Static
	{
		scope = 2;
		displayName = "Pillbox Wall, 6m Blunt";
		model = "a3\structures_f_exp\military\pillboxes\pillboxwall_01_6m_round_f.p3d";
		simulation = "house";
		exileRequiresSimulation = 1;
	};
	class BSF_PillBoxWall3_Blunt_Preview: Exile_Construction_Abstract_Physics
	{
		scope = 1;
		displayName = "Pillbox Wall, 6m Blunt";
		model = "a3\structures_f_exp\military\pillboxes\pillboxwall_01_6m_round_f.p3d";
	};
	class BSF_ModularBunkerBig: Exile_Construction_Abstract_Static
	{
		scope = 2;
		model = "a3\structures_f_argo\military\bunkers\bunker_01_big_f.p3d";
		displayName = "Modular Bunker, Big";
		simulation = "house";
		exileRequiresSimulation = 1;
	};
	class BSF_ModularBunkerBig_Preview: Exile_Construction_Abstract_Physics
	{
		scope = 1;
		displayName = "Modular Bunker, Big";
		model = "a3\structures_f_argo\military\bunkers\bunker_01_big_f.p3d";
	};
	class BSF_ModularBunkerHQ: Exile_Construction_Abstract_Static
	{
		scope = 2;
		model = "a3\structures_f_argo\military\bunkers\bunker_01_hq_f.p3d";
		displayName = "Modular Bunker, HQ";
		simulation = "house";
		exileRequiresSimulation = 1;
	};
	class BSF_ModularBunkerHQ_Preview: Exile_Construction_Abstract_Physics
	{
		displayName = "Modular Bunker, HQ";
		model = "a3\structures_f_argo\military\bunkers\bunker_01_hq_f.p3d";
	};
	class BSF_ModularBunkerSmall: Exile_Construction_Abstract_Static
	{
		scope = 2;
		model = "a3\structures_f_argo\military\bunkers\bunker_01_small_f.p3d";
		displayName = "Modular Bunker, Small";
		simulation = "house";
		exileRequiresSimulation = 1;
	};
	class BSF_ModularBunkerSmall_Preview: Exile_Construction_Abstract_Physics
	{
		displayName = "Modular Bunker, Small";
		model = "a3\structures_f_argo\military\bunkers\bunker_01_small_f.p3d";
	};
	class BSF_ModularBunkerTall: Exile_Construction_Abstract_Static
	{
		scope = 2;
		model = "a3\structures_f_argo\military\bunkers\bunker_01_tall_f.p3d";
		displayName = "Modular Bunker, Tall";
		simulation = "house";
		exileRequiresSimulation = 1;
	};
	class BSF_ModularBunkerTall_Preview: Exile_Construction_Abstract_Physics
	{
		displayName = "Modular Bunker, Tall";
		model = "a3\structures_f_argo\military\bunkers\bunker_01_tall_f.p3d";
	};
	class BSF_ModularBunker1Block: Exile_Construction_Abstract_Static
	{
		scope = 2;
		model = "a3\structures_f_argo\military\bunkers\bunker_01_blocks_1_f.p3d";
		displayName = "Modular Bunker, 1 Block";
		simulation = "house";
		exileRequiresSimulation = 1;
	};
	class BSF_ModularBunker1Block_Preview: Exile_Construction_Abstract_Physics
	{
		displayName = "Modular Bunker, 1 Block";
		model = "a3\structures_f_argo\military\bunkers\bunker_01_blocks_1_f.p3d";
	};
	class BSF_ModularBunker3Block: Exile_Construction_Abstract_Static
	{
		scope = 2;
		model = "a3\structures_f_argo\military\bunkers\bunker_01_blocks_3_f.p3d";
		displayName = "Modular Bunker, 3 Blocks";
		simulation = "house";
		exileRequiresSimulation = 1;
	};
	class BSF_ModularBunker3Block_Preview: Exile_Construction_Abstract_Physics
	{
		displayName = "Modular Bunker, 3 Blocks";
		model = "a3\structures_f_argo\military\bunkers\bunker_01_blocks_3_f.p3d";
	};
	class BSF_ConcreteRamp1: Exile_Construction_Abstract_Static
	{
		scope = 2;
		model = "a3\structures_f_enoch\infrastructure\railways\rail_concreteramp_f.p3d";
		displayName = "Concrete Ramp";
		simulation = "house";
		exileRequiresSimulation = 1;
	};
	class BSF_ConcreteRamp1_Preview: Exile_Construction_Abstract_Physics
	{
		displayName = "Concrete Ramp";
		model = "a3\structures_f_enoch\infrastructure\railways\rail_concreteramp_f.p3d";
	};
	class BSF_WaterPump: Exile_Construction_Abstract_Static
	{
		author = "Troy - BS-Free";
		scope = 2;
		model = "a3\structures_f_enoch\civilian\accessories\concretewell_02_f.p3d";
		displayName = "Water Pump";
		armor = 5000;
		simulation = "house";
		exileRequiresSimulation = 1;
	};
	class BSF_WaterPump_Preview: Exile_Construction_Abstract_Physics
	{
		displayName = "Water Pump";
		model = "a3\structures_f_enoch\civilian\accessories\concretewell_02_f.p3d";
	};
	class BSF_WaterTank: Exile_Construction_Abstract_Static
	{
		author = "Troy - BS-Free";
		displayName = "Water Tank";
		scope = 2;
		model = "\a3\structures_f\items\vessels\watertank_f.p3d";
		armor = 5000;
		simulation = "house";
		exileRequiresSimulation = 1;
	};
	class BSF_WaterTank_Preview: Exile_Construction_Abstract_Physics
	{
		displayName = "Water Tank";
		model = "\A3\Structures_F\Items\Vessels\WaterTank_F.p3d";
	};
	class BSF_RuggedCabinet1_Base: Exile_Container_Abstract
	{
		scope = 0;
		displayName = "Rugged Cabinet, 4 Drawer";
		model = "a3\props_f_enoch\military\camps\portablecabinet_01_4drawers_f.p3d";
		hiddenSelections[] = {"drawer_1","drawer_2","drawer_3","drawer_4","camo_1"};
		hiddenSelectionsTextures[] = {"","","","","a3\props_f_enoch\military\camps\data\portablecabinet_01_black_co.paa"};
		maximumLoad = 2000;
		armor = 5000;
		simulation = "house";
		exileRequiresSimulation = 1;
		editorCategory = "BSF_Storage";
		editorSubcategory = "BSF_Rugged_Cab";
		class AnimationSources
		{
			class Drawer_1_move_source
			{
				source = "user";
				initPhase = 0;
				animPeriod = 0.5;
				sound = "Sfx_RuggedCabinet_Drawer";
				soundPosition = "Drawer_1_axis";
			};
			class Drawer_2_move_source: Drawer_1_move_source{};
			class Drawer_3_move_source: Drawer_1_move_source{};
			class Drawer_4_move_source: Drawer_1_move_source{};
			class Drawer_5_move_source: Drawer_1_move_source{};
			class Drawer_6_move_source: Drawer_1_move_source{};
			class Drawer_1_hide_source: Drawer_1_move_source{};
			class Drawer_2_hide_source: Drawer_1_move_source{};
			class Drawer_3_hide_source: Drawer_1_move_source{};
			class Drawer_4_hide_source: Drawer_1_move_source{};
			class Drawer_5_hide_source: Drawer_1_move_source{};
			class Drawer_6_hide_source: Drawer_1_move_source{};
		};
	};
	class BSF_RuggedCabinet1_Preview_Base: Exile_Construction_Abstract_Physics
	{
		displayName = "Rugged Cabinet, Compact";
		model = "a3\props_f_enoch\military\camps\portablecabinet_01_4drawers_f.p3d";
		hiddenSelections[] = {"drawer_1","drawer_2","drawer_3","drawer_4","camo_1"};
		hiddenSelectionsTextures[] = {"","","","","a3\props_f_enoch\military\camps\data\portablecabinet_01_black_co.paa"};
		class AnimationSources
		{
			class Drawer_1_move_source
			{
				source = "user";
				initPhase = 0;
				animPeriod = 0.5;
				sound = "Sfx_RuggedCabinet_Drawer";
				soundPosition = "Drawer_1_axis";
			};
			class Drawer_2_move_source: Drawer_1_move_source{};
			class Drawer_3_move_source: Drawer_1_move_source{};
			class Drawer_4_move_source: Drawer_1_move_source{};
			class Drawer_5_move_source: Drawer_1_move_source{};
			class Drawer_6_move_source: Drawer_1_move_source{};
			class Drawer_1_hide_source: Drawer_1_move_source{};
			class Drawer_2_hide_source: Drawer_1_move_source{};
			class Drawer_3_hide_source: Drawer_1_move_source{};
			class Drawer_4_hide_source: Drawer_1_move_source{};
			class Drawer_5_hide_source: Drawer_1_move_source{};
			class Drawer_6_hide_source: Drawer_1_move_source{};
		};
	};
	class BSF_RuggedCabinet1_Black: BSF_RuggedCabinet1_Base
	{
		scope = 2;
		hiddenSelections[] = {"camo_1"};
		hiddenSelectionsTextures[] = {"a3\props_f_enoch\military\camps\data\portablecabinet_01_black_co.paa"};
	};
	class BSF_RuggedCabinet1_Black_Preview: BSF_RuggedCabinet1_Preview_Base
	{
		hiddenSelections[] = {"camo_1"};
		hiddenSelectionsTextures[] = {"a3\props_f_enoch\military\camps\data\portablecabinet_01_black_co.paa"};
	};
	class BSF_RuggedCabinet1_Olive: BSF_RuggedCabinet1_Base
	{
		scope = 2;
		hiddenSelections[] = {"camo_1"};
		hiddenSelectionsTextures[] = {"a3\props_f_enoch\military\camps\data\portablecabinet_01_olive_co.paa"};
	};
	class BSF_RuggedCabinet1_Olive_Preview: BSF_RuggedCabinet1_Preview_Base
	{
		hiddenSelections[] = {"camo_1"};
		hiddenSelectionsTextures[] = {"a3\props_f_enoch\military\camps\data\portablecabinet_01_olive_co.paa"};
	};
	class BSF_RuggedCabinet1_Sand: BSF_RuggedCabinet1_Base
	{
		scope = 2;
		hiddenSelections[] = {"camo_1"};
		hiddenSelectionsTextures[] = {"a3\props_f_enoch\military\camps\data\portablecabinet_01_sand_co.paa"};
	};
	class BSF_RuggedCabinet1_Sand_Preview: BSF_RuggedCabinet1_Preview_Base
	{
		hiddenSelections[] = {"camo_1"};
		hiddenSelectionsTextures[] = {"a3\props_f_enoch\military\camps\data\portablecabinet_01_sand_co.paa"};
	};
	class BSF_RuggedCabinet2_Base: Exile_Container_Abstract
	{
		scope = 0;
		displayName = "Rugged Cabinet, 7 Drawer";
		model = "a3\props_f_enoch\military\camps\portablecabinet_01_7drawers_f.p3d";
		hiddenSelections[] = {"camo_1"};
		hiddenSelectionsTextures[] = {"a3\props_f_enoch\military\camps\data\portablecabinet_01_black_co.paa"};
		maximumLoad = 2000;
		armor = 5000;
		simulation = "house";
		exileRequiresSimulation = 1;
		editorCategory = "BSF_Storage";
		editorSubcategory = "BSF_Rugged_Cab";
		class AnimationSources
		{
			class Drawer_1_move_source
			{
				source = "user";
				initPhase = 0;
				animPeriod = 0.5;
				sound = "Sfx_RuggedCabinet_Drawer";
				soundPosition = "Drawer_1_axis";
			};
			class Drawer_2_move_source: Drawer_1_move_source{};
			class Drawer_3_move_source: Drawer_1_move_source{};
			class Drawer_4_move_source: Drawer_1_move_source{};
			class Drawer_5_move_source: Drawer_1_move_source{};
			class Drawer_6_move_source: Drawer_1_move_source{};
			class Drawer_1_hide_source: Drawer_1_move_source{};
			class Drawer_2_hide_source: Drawer_1_move_source{};
			class Drawer_3_hide_source: Drawer_1_move_source{};
			class Drawer_4_hide_source: Drawer_1_move_source{};
			class Drawer_5_hide_source: Drawer_1_move_source{};
			class Drawer_6_hide_source: Drawer_1_move_source{};
		};
	};
	class BSF_RuggedCabinet2_Preview_Base: Exile_Construction_Abstract_Physics
	{
		displayName = "Rugged Cabinet, Compact";
		model = "a3\props_f_enoch\military\camps\portablecabinet_01_7drawers_f.p3d";
		hiddenSelections[] = {"camo_1"};
		hiddenSelectionsTextures[] = {"a3\props_f_enoch\military\camps\data\portablecabinet_01_black_co.paa"};
		class AnimationSources
		{
			class Drawer_1_move_source
			{
				source = "user";
				initPhase = 0;
				animPeriod = 0.5;
				sound = "Sfx_RuggedCabinet_Drawer";
				soundPosition = "Drawer_1_axis";
			};
			class Drawer_2_move_source: Drawer_1_move_source{};
			class Drawer_3_move_source: Drawer_1_move_source{};
			class Drawer_4_move_source: Drawer_1_move_source{};
			class Drawer_5_move_source: Drawer_1_move_source{};
			class Drawer_6_move_source: Drawer_1_move_source{};
			class Drawer_1_hide_source: Drawer_1_move_source{};
			class Drawer_2_hide_source: Drawer_1_move_source{};
			class Drawer_3_hide_source: Drawer_1_move_source{};
			class Drawer_4_hide_source: Drawer_1_move_source{};
			class Drawer_5_hide_source: Drawer_1_move_source{};
			class Drawer_6_hide_source: Drawer_1_move_source{};
		};
	};
	class BSF_RuggedCabinet2_Black: BSF_RuggedCabinet2_Base
	{
		scope = 2;
		hiddenSelections[] = {"drawer_2","drawer_3","drawer_4","drawer_5","drawer_6","camo_1"};
		hiddenSelectionsTextures[] = {"","","","","","a3\props_f_enoch\military\camps\data\portablecabinet_01_black_co.paa"};
	};
	class BSF_RuggedCabinet2_Black_Preview: BSF_RuggedCabinet2_Preview_Base
	{
		hiddenSelections[] = {"drawer_2","drawer_3","drawer_4","drawer_5","drawer_6","camo_1"};
		hiddenSelectionsTextures[] = {"","","","","","a3\props_f_enoch\military\camps\data\portablecabinet_01_black_co.paa"};
	};
	class BSF_RuggedCabinet2_Olive: BSF_RuggedCabinet2_Base
	{
		scope = 2;
		hiddenSelections[] = {"drawer_2","drawer_3","drawer_4","drawer_5","drawer_6","camo_1"};
		hiddenSelectionsTextures[] = {"","","","","","a3\props_f_enoch\military\camps\data\portablecabinet_01_olive_co.paa"};
	};
	class BSF_RuggedCabinet2_Olive_Preview: BSF_RuggedCabinet2_Preview_Base
	{
		hiddenSelections[] = {"drawer_2","drawer_3","drawer_4","drawer_5","drawer_6","camo_1"};
		hiddenSelectionsTextures[] = {"","","","","","a3\props_f_enoch\military\camps\data\portablecabinet_01_olive_co.paa"};
	};
	class BSF_RuggedCabinet2_Sand: BSF_RuggedCabinet2_Base
	{
		scope = 2;
		hiddenSelections[] = {"drawer_2","drawer_3","drawer_4","drawer_5","drawer_6","camo_1"};
		hiddenSelectionsTextures[] = {"","","","","","a3\props_f_enoch\military\camps\data\portablecabinet_01_sand_co.paa"};
	};
	class BSF_RuggedCabinet2_Sand_Preview: BSF_RuggedCabinet2_Preview_Base
	{
		hiddenSelections[] = {"drawer_2","drawer_3","drawer_4","drawer_5","drawer_6","camo_1"};
		hiddenSelectionsTextures[] = {"","","","","","a3\props_f_enoch\military\camps\data\portablecabinet_01_sand_co.paa"};
	};
	class BSF_RuggedCabinet3_Base: Exile_Container_Abstract
	{
		scope = 0;
		displayName = "Rugged Cabinet, Compact";
		model = "a3\props_f_enoch\military\camps\portablecabinet_01_closed_f.p3d";
		hiddenSelections[] = {"camo_1"};
		hiddenSelectionsTextures[] = {"a3\props_f_enoch\military\camps\data\portablecabinet_01_black_co.paa"};
		maximumLoad = 2000;
		armor = 5000;
		simulation = "house";
		exileRequiresSimulation = 1;
		editorCategory = "BSF_Storage";
		editorSubcategory = "BSF_Rugged_Cab";
		class AnimationSources
		{
			class Drawer_1_move_source
			{
				source = "user";
				initPhase = 0;
				animPeriod = 0.5;
				sound = "Sfx_RuggedCabinet_Drawer";
				soundPosition = "Drawer_1_axis";
			};
			class Drawer_2_move_source: Drawer_1_move_source{};
			class Drawer_3_move_source: Drawer_1_move_source{};
			class Drawer_4_move_source: Drawer_1_move_source{};
			class Drawer_5_move_source: Drawer_1_move_source{};
			class Drawer_6_move_source: Drawer_1_move_source{};
			class Drawer_1_hide_source: Drawer_1_move_source{};
			class Drawer_2_hide_source: Drawer_1_move_source{};
			class Drawer_3_hide_source: Drawer_1_move_source{};
			class Drawer_4_hide_source: Drawer_1_move_source{};
			class Drawer_5_hide_source: Drawer_1_move_source{};
			class Drawer_6_hide_source: Drawer_1_move_source{};
		};
	};
	class BSF_RuggedCabinet3_Preview_Base: Exile_Construction_Abstract_Physics
	{
		displayName = "Rugged Cabinet, Compact";
		model = "a3\props_f_enoch\military\camps\portablecabinet_01_closed_f.p3d";
		hiddenSelections[] = {"camo_1"};
		hiddenSelectionsTextures[] = {"a3\props_f_enoch\military\camps\data\portablecabinet_01_black_co.paa"};
		class AnimationSources
		{
			class Drawer_1_move_source
			{
				source = "user";
				initPhase = 0;
				animPeriod = 0.5;
				sound = "Sfx_RuggedCabinet_Drawer";
				soundPosition = "Drawer_1_axis";
			};
			class Drawer_2_move_source: Drawer_1_move_source{};
			class Drawer_3_move_source: Drawer_1_move_source{};
			class Drawer_4_move_source: Drawer_1_move_source{};
			class Drawer_5_move_source: Drawer_1_move_source{};
			class Drawer_6_move_source: Drawer_1_move_source{};
			class Drawer_1_hide_source: Drawer_1_move_source{};
			class Drawer_2_hide_source: Drawer_1_move_source{};
			class Drawer_3_hide_source: Drawer_1_move_source{};
			class Drawer_4_hide_source: Drawer_1_move_source{};
			class Drawer_5_hide_source: Drawer_1_move_source{};
			class Drawer_6_hide_source: Drawer_1_move_source{};
		};
	};
	class BSF_RuggedCabinet3_Black: BSF_RuggedCabinet3_Base
	{
		scope = 2;
		hiddenSelections[] = {"camo_1"};
		hiddenSelectionsTextures[] = {"a3\props_f_enoch\military\camps\data\portablecabinet_01_black_co.paa"};
	};
	class BSF_RuggedCabinet3_Black_Preview: BSF_RuggedCabinet3_Preview_Base
	{
		hiddenSelections[] = {"camo_1"};
		hiddenSelectionsTextures[] = {"a3\props_f_enoch\military\camps\data\portablecabinet_01_black_co.paa"};
	};
	class BSF_RuggedCabinet3_Olive: BSF_RuggedCabinet3_Base
	{
		scope = 2;
		hiddenSelections[] = {"camo_1"};
		hiddenSelectionsTextures[] = {"a3\props_f_enoch\military\camps\data\portablecabinet_01_olive_co.paa"};
	};
	class BSF_RuggedCabinet3_Olive_Preview: BSF_RuggedCabinet3_Preview_Base
	{
		hiddenSelections[] = {"camo_1"};
		hiddenSelectionsTextures[] = {"a3\props_f_enoch\military\camps\data\portablecabinet_01_olive_co.paa"};
	};
	class BSF_RuggedCabinet3_Sand: BSF_RuggedCabinet3_Base
	{
		scope = 2;
		hiddenSelections[] = {"camo_1"};
		hiddenSelectionsTextures[] = {"a3\props_f_enoch\military\camps\data\portablecabinet_01_sand_co.paa"};
	};
	class BSF_RuggedCabinet3_Sand_Preview: BSF_RuggedCabinet3_Preview_Base
	{
		hiddenSelections[] = {"camo_1"};
		hiddenSelectionsTextures[] = {"a3\props_f_enoch\military\camps\data\portablecabinet_01_sand_co.paa"};
	};
	class BSF_SolarTent_Base: Exile_Container_Abstract
	{
		scope = 0;
		model = "a3\props_f_enoch\military\camps\tentsolar_01_f.p3d";
		displayName = "Backpacking Tent";
		hiddenSelections[] = {"camo_1"};
		hiddenSelectionsTextures[] = {"a3\props_f_enoch\military\camps\data\tentsolar_01_bluewhite_f_co.paa"};
		maximumLoad = 2000;
		armor = 5000;
		simulation = "house";
		exileRequiresSimulation = 1;
		requiresTerritory = 0;
	};
	class BSF_SolarTent_Preview_Base: Exile_Construction_Abstract_Physics
	{
		displayName = "Solar Tent";
		model = "a3\props_f_enoch\military\camps\tentsolar_01_f.p3d";
		hiddenSelections[] = {"camo_1"};
		hiddenSelectionsTextures[] = {"a3\props_f_enoch\military\camps\data\tentsolar_01_bluewhite_f_co.paa"};
	};
	class BSF_SolarTentBlue: BSF_SolarTent_Base
	{
		scope = 2;
		hiddenSelections[] = {"camo_1"};
		hiddenSelectionsTextures[] = {"a3\props_f_enoch\military\camps\data\tentsolar_01_bluewhite_f_co.paa"};
	};
	class BSF_SolarTentBlue_Preview: BSF_SolarTent_Preview_Base
	{
		hiddenSelections[] = {"camo_1"};
		hiddenSelectionsTextures[] = {"a3\props_f_enoch\military\camps\data\tentsolar_01_bluewhite_f_co.paa"};
	};
	class BSF_SolarTentOlive: BSF_SolarTent_Base
	{
		scope = 2;
		hiddenSelections[] = {"camo_1"};
		hiddenSelectionsTextures[] = {"a3\props_f_enoch\military\camps\data\tentsolar_01_olive_f_co.paa"};
	};
	class BSF_SolarTentOlive_Preview: BSF_SolarTent_Preview_Base
	{
		hiddenSelections[] = {"camo_1"};
		hiddenSelectionsTextures[] = {"a3\props_f_enoch\military\camps\data\tentsolar_01_olive_f_co.paa"};
	};
	class BSF_SolarTentRed: BSF_SolarTent_Base
	{
		scope = 2;
		hiddenSelections[] = {"camo_1"};
		hiddenSelectionsTextures[] = {"a3\props_f_enoch\military\camps\data\tentsolar_01_redwhite_f_co.paa"};
	};
	class BSF_SolarTentRed_Preview: BSF_SolarTent_Preview_Base
	{
		hiddenSelections[] = {"camo_1"};
		hiddenSelectionsTextures[] = {"a3\props_f_enoch\military\camps\data\tentsolar_01_redwhite_f_co.paa"};
	};
	class BSF_SolarTentSand: BSF_SolarTent_Base
	{
		scope = 2;
		hiddenSelections[] = {"camo_1"};
		hiddenSelectionsTextures[] = {"a3\props_f_enoch\military\camps\data\tentsolar_01_sand_f_co.paa"};
	};
	class BSF_SolarTentSand_Preview: BSF_SolarTent_Preview_Base
	{
		hiddenSelections[] = {"camo_1"};
		hiddenSelectionsTextures[] = {"a3\props_f_enoch\military\camps\data\tentsolar_01_sand_f_co.paa"};
	};
};
