
/*
class Exile_AbstractCraftingRecipe
{
	name = "";
	pictureItem = "";
	returnedItems[] = {};
	components[] = {}; // Required components
	tools[] = {}; // Required tools (matches, gas cooker etc.)
	requiredInteractionModelGroup = ""; // See CfgInteractionModels
	requiresOcean = 0; // isSurfaceWater test
	requiresFire = 0; // inflamed object nearby
	requiresConcreteMixer = 0; // Check if concrete mixer is nearby
	requiresWelder = 0; // Check if welder is nearby
	BSF_Donor = 0;	// Id set to 1, only donors may craft
};

	requiredInteractionModelGroup = "CleanWaterSource";
	requiredInteractionModelGroup = "WaterSource";
	requiredInteractionModelGroup = "FuelSource";
	requiredInteractionModelGroup = "WorkBench";
	requiredInteractionModelGroup = "Welder";

*/

/*
	tools[] = {
		"Exile_Item_Shovel",
		"BSF_Paintbrush",
		"Exile_Item_Grinder",
		"Exile_Item_Foolbox",
		"Exile_Item_Screwdriver",
		"Exile_Item_Hammer",
		"Exile_Item_Pliers"
		"Exile_Item_Wrench",
		"Exile_Item_OilCanister",
		"Exile_Item_CordlessScrewdriver",
		"Exile_Item_Handsaw",
		"Exile_Melee_SledgeHammmer"	,
		"Exile_Item_CanOpener",
		"Exile_Item_Matches",
		"Exile_Item_Knife",
		};

materials and costs:
Exile_Item_CookingPot					80
Exile_Item_FireExtinguisher				650
Exile_Item_SleepingMat					1250
Exile_Item_ToiletPaper					5
Exile_Item_ZipTie						250
Exile_Item_Rope							250
Exile_Item_DuctTape						300
Exile_Item_ExtensionCord				175
Exile_Item_FuelCanisterEmpty			120
Exile_Item_FuelCanisterFull				140
Exile_Item_JunkMetal					400
Exile_Item_LightBulb					20
Exile_Item_MetalBoard					600
Exile_Item_MetalHedgehogKit				1200
Exile_Item_SafeKit						25000
Exile_Item_CodeLock						4400
Exile_Item_Laptop						4000
Exile_Item_BaseCameraKit				3200
Exile_Item_CamoTentKit					250
Exile_Item_MetalPole					800
Exile_Item_MetalScrews					150
Exile_Item_MetalWire					150
Exile_Item_Cement						200
Exile_Item_Sand							200
Exile_Item_CarWheel						1000
Land_CanisterPlastic_F					1000
Exile_Item_WaterCanisterDirtyWater		250
Exile_Item_WaterCanisterEmpty			200
spraycan_blk							100
spraycan_red							100
spraycan_grn							100
spraycan_wht							100
spraycan_blu							100
Exile_Item_BurlapSack					40
Exile_Item_WeaponParts					100
Exile_Item_PortableGeneratorKit			1600

BSF_Tarp_Blue
BSF_Tarp_White
BSF_Tarp_Yellow
BSF_Tarp_Brown
BSF_Tarp_Green
BSF_Tarp_D
BSF_Tarp_WD

*/

/*	category = "Tools";
				"Cooking";
				"Medical";
				"Storage";
				"Base Parts - BSF";
				"Electronics";
				"BSF Tents";
				"Buildings - BSF";
				"";
				"";

*/

/*	category = 	"Meterials"
				"Tools";
				"Cooking";
				"Medical";
				"Storage";
				"Base Parts - BSF";
				"Electronics";
				"BSF Tents";
				"Buildings - BSF";
				"";
				"";

*/

//////////////////////
/////	Buildings
//////////////////////

class Craft_BSF_ConcreteRamp1: Exile_AbstractCraftingRecipe
{
	name = "BSF Concrete Ramp, Long";
	pictureItem = "BSF_ConcreteRamp1_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 1;
	returnedItems[] =
	{
		{1, "BSF_ConcreteRamp1_Kit"}
	};
	components[] =
	{
		{6, "Exile_Item_Sand"},
		{6, "Exile_Item_Cement"},
		{4, "Exile_Item_JunkMetal"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF Base Parts";
};

class Craft_BSF_GuardTowerSmall: Exile_AbstractCraftingRecipe
{
	name = "BSF Guard Tower, Small ";
	pictureItem = "BSF_GuardTowerSmall_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "Welder";
	requiresConcreteMixer = 1;
	returnedItems[] =
	{
		{1, "BSF_GuardTowerSmall_Kit"}
	};
	components[] =
	{
		{2, "Exile_Item_Cement"},
		{3, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalPole"},
		{4, "Exile_Item_MetalScrews"},
		{4, "Exile_Item_JunkMetal"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF Base Parts";
};
class Craft_BSF_GuardTowerBig: Exile_AbstractCraftingRecipe
{
	name = "BSF Guard Tower, Big ";
	pictureItem = "BSF_GuardTowerBig_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "Welder";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{1, "BSF_GuardTowerBig_Kit"}
	};
	components[] =
	{
		{6, "Exile_Item_MetalBoard"},
		{6, "Exile_Item_MetalPole"},
		{4, "Exile_Item_MetalScrews"},
		{4, "Exile_Item_JunkMetal"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF Base Parts";
};

class Craft_BSF_CargoPlatform_Green: Exile_AbstractCraftingRecipe
{
	name = "BSF Cargo Platform, Green";
	pictureItem = "BSF_CargoPlatform_Green_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "Welder";
	requiresConcreteMixer = 1;
	returnedItems[] = {
		{1, "Exile_Item_WaterCanisterEmpty"},
		{1, "BSF_CargoPlatform_Green_Kit"}
	};
	components[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{1, "Exile_Item_WaterCanisterDirtyWater"},
		{3, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalPole"},
		{4, "Exile_Item_MetalScrews"},
		{4, "Exile_Item_JunkMetal"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF Base Parts";
};
class Craft_BSF_CargoPlatform_Brown: Craft_BSF_CargoPlatform_Green
{
	name = "BSF Cargo Platform, Brown";
	pictureItem = "BSF_CargoPlatform_Brown_Kit";
	returnedItems[] = {
		{1, "Exile_Item_WaterCanisterEmpty"},
		{1, "BSF_CargoPlatform_Brown_Kit"}
	};
};
class Craft_BSF_CargoPlatform_Jungle: Craft_BSF_CargoPlatform_Green
{
	name = "BSF Cargo Platform, Jungle";
	pictureItem = "BSF_CargoPlatform_Jungle_Kit";
	returnedItems[] = {
		{1, "Exile_Item_WaterCanisterEmpty"},
		{1, "BSF_CargoPlatform_Jungle_Kit"}
	};
};
class Craft_BSF_CargoPlatform_Rusty: Craft_BSF_CargoPlatform_Green
{
	name = "BSF Cargo Platform, Rusty";
	pictureItem = "BSF_CargoPlatform_Rusty_Kit";
	returnedItems[] = {
		{1, "Exile_Item_WaterCanisterEmpty"},
		{1, "BSF_CargoPlatform_Rusty_Kit"}
	};
};

class Craft_BSF_GuardBox: Exile_AbstractCraftingRecipe
{
	name = "BSF Guard Box";
	pictureItem = "BSF_GuardBox_Kit";
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 1;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "BSF_GuardBox_Kit"}
	};
	components[] =
	{
		{3, "Exile_Item_Cement"},
		{3, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{1, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_WaterCanisterDirtyWater"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF Base Parts";
};

class Craft_BSF_DearStand1: Exile_AbstractCraftingRecipe
{
	name = "BSF Deer Stand v1";
	pictureItem = "BSF_DearStand1_Kit";
	requiredInteractionModelGroup = "WorkBench";
	requiresFire = 0;
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{1, "BSF_DearStand1_Kit"}
	};
	components[] =
	{
		{10, "Exile_Item_WoodLog"},
		{10, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_Rope"}
	};
	tools[] = {"Exile_Item_Handsaw","Exile_Item_Hammer"};
	category = "BSF Base Parts";
};
class Craft_BSF_DearStand2: Craft_BSF_DearStand1
{
	name = "BSF Deer Stand v2";
	pictureItem = "BSF_DearStand2_Kit";
	returnedItems[] = {{1, "BSF_DearStand2_Kit"}};
};

class Craft_BSF_Radar1_Kit: Exile_AbstractCraftingRecipe
{
	name = "BSF Radar Tower";
	pictureItem = "BSF_Radar1_Kit";
	requiresFire = 0;
	requiredInteractionModelGroup = "Welder";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{1, "BSF_Radar1_Kit"}
	};
	components[] =
	{
		{8, "Exile_Item_Cement"},
		{8, "Exile_Item_Sand"},
		{5, "Exile_Item_MetalBoard"},
		{4, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF Base Parts";
};

class Craft_ModularBunker_Big: Exile_AbstractCraftingRecipe
{
	name = "BSF Modular Bunker, Big";
	pictureItem = "BSF_ModularBunkerBig_Kit";
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 1;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "BSF_ModularBunkerBig_Kit"}
	};
	components[] =
	{
		{8, "Exile_Item_Cement"},
		{8, "Exile_Item_Sand"},
		{5, "Exile_Item_MetalBoard"},
		{4, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF Base Parts";
};
class Craft_ModularBunker_HQ: Craft_ModularBunker_Big
{
	name = "BSF Modular Bunker, HQ ";
	pictureItem = "BSF_ModularBunkerHQ_Kit";
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "BSF_ModularBunkerHQ_Kit"}
	};
};
class Craft_ModularBunker_Tall: Craft_ModularBunker_Big
{
	name = "BSF Modular Bunker, Tall ";
	pictureItem = "BSF_ModularBunkerTall_Kit";
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "BSF_ModularBunkerTall_Kit"}
	};
};
class Craft_PillBox_Big: Craft_ModularBunker_Big
{
	name = "BSF Pill Box, Big ";
	pictureItem = "BSF_PillBoxBig_Kit";
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "BSF_PillBoxBig_Kit"}
	};
};

class Craft_Bunker2_Double: Exile_AbstractCraftingRecipe
{
	name = "BSF Bunker 2, Double";
	pictureItem = "BSF_Bunker2_Double_Kit";
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 1;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "BSF_Bunker2_Double_Kit"}
	};
	components[] =
	{
		{5, "Exile_Item_Cement"},
		{5, "Exile_Item_Sand"},
		{3, "Exile_Item_MetalBoard"},
		{3, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF Base Parts";
};
class Craft_Bunker2_DoubleMossy: Craft_Bunker2_Double
{
	name = "BSF Bunker 2, Double, Mossy";
	pictureItem = "BSF_Bunker2_Mossy_Double_Kit";
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "BSF_Bunker2_Mossy_Double_Kit"}
	};
};

class Craft_Bunker2_Left: Exile_AbstractCraftingRecipe
{
	name = "BSF Bunker 2, Left";
	pictureItem = "BSF_Bunker2_Left_Kit";
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 1;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "BSF_Bunker2_Left_Kit"}
	};
	components[] =
	{
		{4, "Exile_Item_Cement"},
		{4, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF Base Parts";
};
class Craft_Bunker2_Right: Craft_Bunker2_Left
{
	name = "BSF Bunker 2, Right";
	pictureItem = "BSF_Bunker2_Right_Kit";
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "BSF_Bunker2_Right_Kit"}
	};
};
class Craft_Bunker2_Left_Mossy: Craft_Bunker2_Left
{
	name = "BSF Bunker 2, Left, Mossy";
	pictureItem = "BSF_Bunker2_Mossy_Left_Kit";
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "BSF_Bunker2_Mossy_Left_Kit"}
	};
};
class Craft_Bunker2_Right_Mossy: Craft_Bunker2_Left
{
	name = "BSF Bunker 2, Right, Mossy";
	pictureItem = "BSF_Bunker2_Mossy_Right_Kit";
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "BSF_Bunker2_Mossy_Right_Kit"}
	};
};
class Craft_ModularBunker_Small: Craft_Bunker2_Left
{
	name = "BSF Modular Bunker, Small";
	pictureItem = "BSF_ModularBunkerSmall_Kit";
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "BSF_ModularBunkerSmall_Kit"}
	};
};

class Craft_PillBox_Rect: Exile_AbstractCraftingRecipe
{
	name = "BSF Pill Box, Rectangular";
	pictureItem = "BSF_PillBoxRect_Kit";
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 1;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "BSF_PillBoxRect_Kit"}
	};
	components[] =
	{
		{3, "Exile_Item_Cement"},
		{3, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF Base Parts";
};
class Craft_PillBox_Hex: Craft_PillBox_Rect
{
	name = "BSF Pill Box, Hex";
	pictureItem = "BSF_PillBoxHex_Kit";
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "BSF_PillBoxHex_Kit"}
	};
};

class Craft_ModularWall_3: Exile_AbstractCraftingRecipe
{
	name = "BSF Modular Wall, 3x";
	pictureItem = "BSF_ModularBunker3Block_Kit";
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_WaterCanisterEmpty"},
		{1, "BSF_ModularBunker3Block_Kit"}
	};
	components[] =
	{
		{2, "Exile_Item_Cement"},
		{1, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalPole"},
		{1, "Exile_Item_WaterCanisterDirtyWater"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF Base Parts";
};
class Craft_PillBoxWall_3_Blunt: Craft_ModularWall_3
{
	name = "BSF Pill Box Wall, 3x Blunt";
	pictureItem = "BSF_PillBoxWall3_Blunt_Kit";
	returnedItems[] =
	{
		{1, "Exile_Item_WaterCanisterEmpty"},
		{1, "BSF_PillBoxWall3_Blunt_Kit"}
	};
};
class Craft_PillBoxWall_3_Sharp: Craft_ModularWall_3
{
	name = "BSF Pill Box Wall, 3x Sharp";
	pictureItem = "BSF_PillBoxWall3_Sharp_Kit";
	returnedItems[] =
	{
		{1, "Exile_Item_WaterCanisterEmpty"},
		{1, "BSF_PillBoxWall3_Sharp_Kit"}
	};
};

class Craft_ModularWall_1: Exile_AbstractCraftingRecipe
{
	name = "BSF Modular Wall, 1x";
	pictureItem = "BSF_ModularBunker1Block_Kit";
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_WaterCanisterEmpty"},
		{1, "BSF_ModularBunker1Block_Kit"}
	};
	components[] =
	{
		{1, "Exile_Item_Cement"},
		{1, "Exile_Item_Sand"},
		{1, "Exile_Item_MetalPole"},
		{1, "Exile_Item_WaterCanisterDirtyWater"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF Base Parts";
};
class Craft_PillBoxWall_1_Blunt: Craft_ModularWall_1
{
	name = "BSF Pill Box Wall, 1x Blunt";
	pictureItem = "BSF_PillBoxWall1_Blunt_Kit";
	returnedItems[] =
	{
		{1, "Exile_Item_WaterCanisterEmpty"},
		{1, "BSF_PillBoxWall1_Blunt_Kit"}
	};
};
class Craft_PillBoxWall_1_Sharp: Craft_ModularWall_1
{
	name = "BSF Pill Box Wall, 1x Sharp";
	pictureItem = "BSF_PillBoxWall1_Sharp_Kit";
	returnedItems[] =
	{
		{1, "Exile_Item_WaterCanisterEmpty"},
		{1, "BSF_PillBoxWall1_Sharp_Kit"}
	};
};

//////////////////////
/////	Walls
//////////////////////

class Craft_BSF_IronWall_Basic: Exile_AbstractCraftingRecipe
{
	name = "BSF IW";
	pictureItem = "BSF_IronWall_Basic_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 1;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_IronWall_Basic_Kit"}
	};
	components[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF IronWall";
};

class Craft_BSF_IronWall_Low: Exile_AbstractCraftingRecipe
{
	name = "BSF IW, Low";
	pictureItem = "BSF_IronWall_Low_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 1;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_IronWall_Low_Kit"}
	};
	components[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF IronWall";
};

class Craft_BSF_IronWall_Topper: Exile_AbstractCraftingRecipe
{
	name = "BSF IW Wall Spacer";
	pictureItem = "BSF_IronWall_Topper_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 1;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_IronWall_Topper_Kit"}
	};
	components[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF IronWall";
};

class Craft_BSF_IronWall_Round: Exile_AbstractCraftingRecipe
{
	name = "BSF IW, Round";
	pictureItem = "BSF_IronWall_Round_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_IronWall_Round_Kit"}
	};
	components[] =
	{
		{6, "Exile_Item_MetalBoard"},
		{6, "Exile_Item_MetalScrews"},
		{5, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF IronWall";
};

class Craft_BSF_IronWall_Round_Low: Exile_AbstractCraftingRecipe
{
	name = "BSF IW, Low Round Wall";
	pictureItem = "BSF_IronWall_Round_Low_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_IronWall_Round_Low_Kit"}
	};
	components[] =
	{
		{5, "Exile_Item_MetalBoard"},
		{5, "Exile_Item_MetalScrews"},
		{4, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF IronWall";
};

class Craft_BSF_IronWall_Round_Topper: Exile_AbstractCraftingRecipe
{
	name = "BSF IW Round Wall Spacer ";
	pictureItem = "BSF_IronWall_Round_Topper_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 1;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_IronWall_Round_Topper_Kit"}
	};
	components[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF IronWall";
};

class Craft_BSF_IronWall_Tri: Exile_AbstractCraftingRecipe
{
	name = "BSF IW, Angled ";
	pictureItem = "BSF_IronWall_Tri_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 1;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_IronWall_Tri_Kit"}
	};
	components[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF IronWall";
};

class Craft_BSF_IronWall_Tri_Low: Exile_AbstractCraftingRecipe
{
	name = "BSF IW, Low, Angled ";
	pictureItem = "BSF_IronWall_Tri_Low_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 1;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_IronWall_Tri_Low_Kit"}
	};
	components[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF IronWall";
};

class Craft_BSF_IronWall_Tri_Topper: Exile_AbstractCraftingRecipe
{
	name = "BSF IW Angled Wall Spacer";
	pictureItem = "BSF_IronWall_Tri_Topper_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 1;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_IronWall_Tri_Topper_Kit"}
	};
	components[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF IronWall";
};

class Craft_BSF_IronWall_Half: Exile_AbstractCraftingRecipe
{
	name = "BSF IW Half Wall";
	pictureItem = "BSF_IronWall_Half_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{1, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_IronWall_Half_Kit"}
	};
	components[] =
	{
		{3, "Exile_Item_MetalBoard"},
		{3, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"},
		{1, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF IronWall";
};

class Craft_BSF_IronWall_Third: Exile_AbstractCraftingRecipe
{
	name = "BSF IW 1/3 Wall";
	pictureItem = "BSF_IronWall_Third_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{1, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_IronWall_Third_Kit"}
	};
	components[] =
	{
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"},
		{1, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF IronWall";
};

class Craft_BSF_IronWall_Post: Exile_AbstractCraftingRecipe
{
	name = "BSF IW Post";
	pictureItem = "BSF_IronWall_Post_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 1;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_IronWall_Post_Kit"}
	};
	components[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF IronWall";
};

class Craft_BSF_IronWall_2: Exile_AbstractCraftingRecipe
{
	name = "BSF IW2";
	pictureItem = "BSF_IronWall_2_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_IronWall_2_Kit"}
	};
	components[] =
	{
		{5, "Exile_Item_MetalBoard"},
		{5, "Exile_Item_MetalScrews"},
		{4, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF IronWall 2";
};

class Craft_BSF_IronWall_2_Low: Exile_AbstractCraftingRecipe
{
	name = "BSF IW2, Low";
	pictureItem = "BSF_IronWall_2_Low_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_IronWall_2_Low_Kit"}
	};
	components[] =
	{
		{4, "Exile_Item_MetalBoard"},
		{3, "Exile_Item_MetalScrews"},
		{3, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF IronWall 2";
};

class Craft_BSF_IronWall_2_Round: Exile_AbstractCraftingRecipe
{
	name = "BSF IW2, Round";
	pictureItem = "BSF_IronWall_2_Round_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_IronWall_2_Round_Kit"}
	};
	components[] =
	{
		{6, "Exile_Item_MetalBoard"},
		{6, "Exile_Item_MetalScrews"},
		{5, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF IronWall 2";
};

class Craft_BSF_IronWall_2_Round_Low: Exile_AbstractCraftingRecipe
{
	name = "BSF IW2, Low Round Wall";
	pictureItem = "BSF_IronWall_2_Round_Low_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_IronWall_2_Round_Low_Kit"}
	};
	components[] =
	{
		{5, "Exile_Item_MetalBoard"},
		{5, "Exile_Item_MetalScrews"},
		{4, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF IronWall 2";
};

class Craft_BSF_IronWall_2_Tri: Exile_AbstractCraftingRecipe
{
	name = "BSF IW2, Angled ";
	pictureItem = "BSF_IronWall_2_Tri_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_IronWall_2_Tri_Kit"}
	};
	components[] =
	{
		{6, "Exile_Item_MetalBoard"},
		{6, "Exile_Item_MetalScrews"},
		{5, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF IronWall 2";
};

class Craft_BSF_IronWall_2_Tri_Low: Exile_AbstractCraftingRecipe
{
	name = "BSF IW2, Low, Angled ";
	pictureItem = "BSF_IronWall_2_Tri_Low_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_IronWall_2_Tri_Low_Kit"}
	};
	components[] =
	{
		{5, "Exile_Item_MetalBoard"},
		{5, "Exile_Item_MetalScrews"},
		{4, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF IronWall 2";
};

class Craft_BSF_IronWall_2_Half: Exile_AbstractCraftingRecipe
{
	name = "BSF IW2 1/2 Wall";
	pictureItem = "BSF_IronWall_2_Half_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{1, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_IronWall_2_Half_Kit"}
	};
	components[] =
	{
		{3, "Exile_Item_MetalBoard"},
		{3, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"},
		{1, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF IronWall 2";
};

class Craft_BSF_IronWall_2_Third: Exile_AbstractCraftingRecipe
{
	name = "BSF IW2 1/3 Wall";
	pictureItem = "BSF_IronWall_2_Third_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{1, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_IronWall_2_Third_Kit"}
	};
	components[] =
	{
		{3, "Exile_Item_MetalBoard"},
		{3, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"},
		{1, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF IronWall 2";
};


//////////////////////
/////	Doors
//////////////////////

class Craft_BSF_IronWall_DoorOpening_C: Exile_AbstractCraftingRecipe
{
	name = "BSF IW Door Opening, Center ";
	pictureItem = "BSF_IronWall_DoorOpening_C_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 1;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_IronWall_DoorOpening_C_Kit"}
	};
	components[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF IronWall";
};

class Craft_BSF_IronWall_DoorOpening_L: Exile_AbstractCraftingRecipe
{
	name = "BSF IW Door Opening, Left ";
	pictureItem = "BSF_IronWall_DoorOpening_L_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 1;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_IronWall_DoorOpening_L_Kit"}
	};
	components[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF IronWall";
};

class Craft_BSF_IronWall_DoorOpening_R: Exile_AbstractCraftingRecipe
{
	name = "BSF IW Door Opening, Right ";
	pictureItem = "BSF_IronWall_DoorOpening_R_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 1;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_IronWall_DoorOpening_R_Kit"}
	};
	components[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF IronWall";
};

class Craft_BSF_IronWall_DoorOpening_Round: Exile_AbstractCraftingRecipe
{
	name = "BSF IW Door Opening, Round ";
	pictureItem = "BSF_IronWall_DoorOpening_Round_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 1;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_IronWall_DoorOpening_Round_Kit"}
	};
	components[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF IronWall";
};

class Craft_BSF_IronWall_DoorOpening_Tri: Exile_AbstractCraftingRecipe
{
	name = "BSF IW Door Opening, Angled ";
	pictureItem = "BSF_IronWall_DoorOpening_Tri_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 1;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_IronWall_DoorOpening_Tri_Kit"}
	};
	components[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF IronWall";
};

class Craft_BSF_IronWall_Door_C: Exile_AbstractCraftingRecipe
{
	name = "BSF IW Door, Center ";
	pictureItem = "BSF_IronWall_Door_C_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 1;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_IronWall_Door_C_Kit"}
	};
	components[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF IronWall";
};

class Craft_BSF_IronWall_Door_L: Exile_AbstractCraftingRecipe
{
	name = "BSF IW Door, Left ";
	pictureItem = "BSF_IronWall_Door_L_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 1;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_IronWall_Door_L_Kit"}
	};
	components[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF IronWall";
};

class Craft_BSF_IronWall_Door_R: Exile_AbstractCraftingRecipe
{
	name = "BSF IW Door, Right ";
	pictureItem = "BSF_IronWall_Door_R_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 1;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_IronWall_Door_R_Kit"}
	};
	components[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF IronWall";
};

class Craft_BSF_IronWall_Door_Round: Exile_AbstractCraftingRecipe
{
	name = "BSF IW Door, Round ";
	pictureItem = "BSF_IronWall_Door_Round_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 1;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_IronWall_Door_Round_Kit"}
	};
	components[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF IronWall";
};

class Craft_BSF_IronWall_Door_Tri: Exile_AbstractCraftingRecipe
{
	name = "BSF IW Door, Angled ";
	pictureItem = "BSF_IronWall_Door_Tri_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 1;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_IronWall_Door_Tri_Kit"}
	};
	components[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF IronWall";
};


class Craft_BSF_IronWall_2_DoorOpening_C: Exile_AbstractCraftingRecipe
{
	name = "BSF IW2 Door Opening, Center ";
	pictureItem = "BSF_IronWall_2_DoorOpening_C_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_IronWall_2_DoorOpening_C_Kit"}
	};
	components[] =
	{
		{5, "Exile_Item_MetalBoard"},
		{5, "Exile_Item_MetalScrews"},
		{4, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF IronWall";
};

class Craft_BSF_IronWall_2_DoorOpening_L: Exile_AbstractCraftingRecipe
{
	name = "BSF IW2 Door Opening, Left ";
	pictureItem = "BSF_IronWall_2_DoorOpening_L_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_IronWall_2_DoorOpening_L_Kit"}
	};
	components[] =
	{
		{5, "Exile_Item_MetalBoard"},
		{5, "Exile_Item_MetalScrews"},
		{4, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF IronWall 2";
};

class Craft_BSF_IronWall_2_DoorOpening_R: Exile_AbstractCraftingRecipe
{
	name = "BSF IW2 Door Opening, Right ";
	pictureItem = "BSF_IronWall_2_DoorOpening_R_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_IronWall_2_DoorOpening_R_Kit"}
	};
	components[] =
	{
		{5, "Exile_Item_MetalBoard"},
		{5, "Exile_Item_MetalScrews"},
		{4, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF IronWall 2";
};

class Craft_BSF_IronWall_2_DoorOpening_Round: Exile_AbstractCraftingRecipe
{
	name = "BSF IW2 Door Opening, Round ";
	pictureItem = "BSF_IronWall_2_DoorOpening_Round_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_IronWall_2_DoorOpening_Round_Kit"}
	};
	components[] =
	{
		{6, "Exile_Item_MetalBoard"},
		{6, "Exile_Item_MetalScrews"},
		{5, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF IronWall 2";
};

class Craft_BSF_IronWall_2_DoorOpening_Tri: Exile_AbstractCraftingRecipe
{
	name = "BSF IW2 Door Opening, Angled ";
	pictureItem = "BSF_IronWall_2_DoorOpening_Tri_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_IronWall_2_DoorOpening_Tri_Kit"}
	};
	components[] =
	{
		{6, "Exile_Item_MetalBoard"},
		{6, "Exile_Item_MetalScrews"},
		{5, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF IronWall 2";
};

class Craft_BSF_IronWall_2_Door_C: Exile_AbstractCraftingRecipe
{
	name = "BSF IW2 Door, Center ";
	pictureItem = "BSF_IronWall_2_Door_C_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_IronWall_2_Door_C_Kit"}
	};
	components[] =
	{
		{5, "Exile_Item_MetalBoard"},
		{6, "Exile_Item_MetalScrews"},
		{4, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF IronWall 2";
};

class Craft_BSF_IronWall_2_Door_L: Exile_AbstractCraftingRecipe
{
	name = "BSF IW2 Door, Left ";
	pictureItem = "BSF_IronWall_2_Door_L_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_IronWall_2_Door_L_Kit"}
	};
	components[] =
	{
		{5, "Exile_Item_MetalBoard"},
		{6, "Exile_Item_MetalScrews"},
		{4, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF IronWall 2";
};

class Craft_BSF_IronWall_2_Door_R: Exile_AbstractCraftingRecipe
{
	name = "BSF IW2 Door, Right ";
	pictureItem = "BSF_IronWall_2_Door_R_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_IronWall_2_Door_R_Kit"}
	};
	components[] =
	{
		{5, "Exile_Item_MetalBoard"},
		{6, "Exile_Item_MetalScrews"},
		{4, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF IronWall 2";
};

class Craft_BSF_IronWall_2_Door_Round: Exile_AbstractCraftingRecipe
{
	name = "BSF IW2 Door, Round ";
	pictureItem = "BSF_IronWall_2_Door_Round_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_IronWall_2_Door_Round_Kit"}
	};
	components[] =
	{
		{6, "Exile_Item_MetalBoard"},
		{7, "Exile_Item_MetalScrews"},
		{5, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF IronWall 2";
};

class Craft_BSF_IronWall_2_Door_Tri: Exile_AbstractCraftingRecipe
{
	name = "BSF IW2 Door, Angled ";
	pictureItem = "BSF_IronWall_2_Door_Tri_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_IronWall_2_Door_Tri_Kit"}
	};
	components[] =
	{
		{6, "Exile_Item_MetalBoard"},
		{7, "Exile_Item_MetalScrews"},
		{5, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF IronWall 2";
};

//////////////////////
/////	Windows
//////////////////////

class Craft_BSF_IronWall_WindowOpening_C: Exile_AbstractCraftingRecipe
{
	name = "BSF IW Window Opening, Center ";
	pictureItem = "BSF_IronWall_WindowOpening_C_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 1;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_IronWall_WindowOpening_C_Kit"}
	};
	components[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF IronWall";
};

class Craft_BSF_IronWall_WindowOpening_L: Exile_AbstractCraftingRecipe
{
	name = "BSF IW Window Opening, Left ";
	pictureItem = "BSF_IronWall_WindowOpening_L_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 1;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_IronWall_WindowOpening_L_Kit"}
	};
	components[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF IronWall";
};

class Craft_BSF_IronWall_WindowOpening_R: Exile_AbstractCraftingRecipe
{
	name = "BSF IW Window Opening, Right ";
	pictureItem = "BSF_IronWall_WindowOpening_R_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 1;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_IronWall_WindowOpening_R_Kit"}
	};
	components[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF IronWall";
};

class Craft_BSF_IronWall_WindowOpening_Round: Exile_AbstractCraftingRecipe
{
	name = "BSF IW Window, Angled ";
	pictureItem = "BSF_IronWall_WindowOpening_Round_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_IronWall_WindowOpening_Round_Kit"}
	};
	components[] =
	{
		{6, "Exile_Item_MetalBoard"},
		{6, "Exile_Item_MetalScrews"},
		{5, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF IronWall";
};

class Craft_BSF_IronWall_WindowOpening_Tri: Exile_AbstractCraftingRecipe
{
	name = "BSF IW Window Opening, Angled ";
	pictureItem = "BSF_IronWall_WindowOpening_Tri_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 1;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_IronWall_WindowOpening_Tri_Kit"}
	};
	components[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF IronWall";
};


class Craft_BSF_IronWall_Window_C: Exile_AbstractCraftingRecipe
{
	name = "BSF IW Window, Center ";
	pictureItem = "BSF_IronWall_Window_C_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 1;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_IronWall_Window_C_Kit"}
	};
	components[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF IronWall";
};

class Craft_BSF_IronWall_Window_L: Exile_AbstractCraftingRecipe
{
	name = "BSF IW Window, Left";
	pictureItem = "BSF_IronWall_Window_L_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 1;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_IronWall_Window_L_Kit"}
	};
	components[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF IronWall";
};

class Craft_BSF_IronWall_Window_R: Exile_AbstractCraftingRecipe
{
	name = "BSF IW Window, Right";
	pictureItem = "BSF_IronWall_Window_R_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 1;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_IronWall_Window_R_Kit"}
	};
	components[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF IronWall";
};

class Craft_BSF_IronWall_Window_Round: Exile_AbstractCraftingRecipe
{
	name = "BSF IW Window, Angled ";
	pictureItem = "BSF_IronWall_Window_Round_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_IronWall_Window_Round_Kit"}
	};
	components[] =
	{
		{6, "Exile_Item_MetalBoard"},
		{7, "Exile_Item_MetalScrews"},
		{5, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF IronWall";
};

class Craft_BSF_IronWall_Window_Tri: Exile_AbstractCraftingRecipe
{
	name = "BSF IW Window, Angled ";
	pictureItem = "BSF_IronWall_Window_Tri_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 1;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_IronWall_Window_Tri_Kit"}
	};
	components[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF IronWall";
};


class Craft_BSF_IronWall_2_WindowOpening_C: Exile_AbstractCraftingRecipe
{
	name = "BSF IW2 Window Opening, Center ";
	pictureItem = "BSF_IronWall_2_WindowOpening_C_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_IronWall_2_WindowOpening_C_Kit"}
	};
	components[] =
	{
		{5, "Exile_Item_MetalBoard"},
		{5, "Exile_Item_MetalScrews"},
		{4, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF IronWall 2";
};

class Craft_BSF_IronWall_2_WindowOpening_L: Exile_AbstractCraftingRecipe
{
	name = "BSF IW2 Window Opening, Left ";
	pictureItem = "BSF_IronWall_2_WindowOpening_L_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_IronWall_2_WindowOpening_L_Kit"}
	};
	components[] =
	{
		{5, "Exile_Item_MetalBoard"},
		{5, "Exile_Item_MetalScrews"},
		{4, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF IronWall 2";
};

class Craft_BSF_IronWall_2_WindowOpening_R: Exile_AbstractCraftingRecipe
{
	name = "BSF IW2 Window Opening, Right ";
	pictureItem = "BSF_IronWall_2_WindowOpening_R_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_IronWall_2_WindowOpening_R_Kit"}
	};
	components[] =
	{
		{5, "Exile_Item_MetalBoard"},
		{5, "Exile_Item_MetalScrews"},
		{4, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF IronWall 2";
};

class Craft_BSF_IronWall_2_WindowOpening_Round: Exile_AbstractCraftingRecipe
{
	name = "BSF IW2 Window, Angled ";
	pictureItem = "BSF_IronWall_2_WindowOpening_Round_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_IronWall_2_WindowOpening_Round_Kit"}
	};
	components[] =
	{
		{6, "Exile_Item_MetalBoard"},
		{6, "Exile_Item_MetalScrews"},
		{5, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF IronWall 2";
};

class Craft_BSF_IronWall_2_WindowOpening_Tri: Exile_AbstractCraftingRecipe
{
	name = "BSF IW2 Window Opening, Angled ";
	pictureItem = "BSF_IronWall_2_WindowOpening_Tri_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_IronWall_2_WindowOpening_Tri_Kit"}
	};
	components[] =
	{
		{6, "Exile_Item_MetalBoard"},
		{6, "Exile_Item_MetalScrews"},
		{5, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF IronWall 2";
};


class Craft_BSF_IronWall_2_Window_C: Exile_AbstractCraftingRecipe
{
	name = "BSF IW2 Window, Center ";
	pictureItem = "BSF_IronWall_2_Window_C_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_IronWall_2_Window_C_Kit"}
	};
	components[] =
	{
		{5, "Exile_Item_MetalBoard"},
		{6, "Exile_Item_MetalScrews"},
		{4, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF IronWall 2";
};

class Craft_BSF_IronWall_2_Window_L: Exile_AbstractCraftingRecipe
{
	name = "BSF IW2 Window, Left";
	pictureItem = "BSF_IronWall_2_Window_L_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_IronWall_2_Window_L_Kit"}
	};
	components[] =
	{
		{5, "Exile_Item_MetalBoard"},
		{6, "Exile_Item_MetalScrews"},
		{4, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF IronWall 2";
};

class Craft_BSF_IronWall_2_Window_R: Exile_AbstractCraftingRecipe
{
	name = "BSF IW2 Window, Right";
	pictureItem = "BSF_IronWall_2_Window_R_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_IronWall_2_Window_R_Kit"}
	};
	components[] =
	{
		{5, "Exile_Item_MetalBoard"},
		{6, "Exile_Item_MetalScrews"},
		{4, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF IronWall 2";
};

class Craft_BSF_IronWall_2_Window_Tri: Exile_AbstractCraftingRecipe
{
	name = "BSF IW2 Window, Angled ";
	pictureItem = "BSF_IronWall_2_Window_Tri_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_IronWall_2_Window_Tri_Kit"}
	};
	components[] =
	{
		{6, "Exile_Item_MetalBoard"},
		{7, "Exile_Item_MetalScrews"},
		{5, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF IronWall 2";
};

class Craft_BSF_IronWall_2_Window_Round: Exile_AbstractCraftingRecipe
{
	name = "BSF IW2 Window, Angled ";
	pictureItem = "BSF_IronWall_2_Window_Round_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_IronWall_2_Window_Round_Kit"}
	};
	components[] =
	{
		{6, "Exile_Item_MetalBoard"},
		{7, "Exile_Item_MetalScrews"},
		{5, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF IronWall 2";
};

//////////////////////
/////	Floors
//////////////////////

class Craft_BSF_IronWall_Floor: Exile_AbstractCraftingRecipe
{
	name = "BSF IW Floor";
	pictureItem = "BSF_IronWall_Floor_Basic_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 1;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_IronWall_Floor_Basic_Kit"}
	};
	components[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF IronWall";
};

class Craft_BSF_IronWall_Floor_Half: Exile_AbstractCraftingRecipe
{
	name = "BSF IW Floor, Half";
	pictureItem = "BSF_IronWall_Floor_Half_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 1;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_IronWall_Floor_Half_Kit"}
	};
	components[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF IronWall";
};

class Craft_BSF_IronWall_Floor_Quarter: Exile_AbstractCraftingRecipe
{
	name = "BSF IW Floor, Quarter";
	pictureItem = "BSF_IronWall_Floor_Quarter_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_IronWall_Floor_Quarter_Kit"}
	};
	components[] =
	{
		{1, "Exile_Item_Cement"},
		{1, "Exile_Item_Sand"},
		{1, "Exile_Item_MetalBoard"},
		{1, "Exile_Item_MetalScrews"},
		{1, "Exile_Item_MetalPole"},
		{1, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF IronWall";
};

class Craft_BSF_IronWall_Floor_Round: Exile_AbstractCraftingRecipe
{
	name = "BSF IW Floor, Round";
	pictureItem = "BSF_IronWall_Floor_Round_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 1;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_IronWall_Floor_Round_Kit"}
	};
	components[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF IronWall";
};

class Craft_BSF_IronWall_Floor_Tri: Exile_AbstractCraftingRecipe
{
	name = "BSF IW Floor, Angled";
	pictureItem = "BSF_IronWall_Floor_Tri_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 1;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_IronWall_Floor_Tri_Kit"}
	};
	components[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF IronWall";
};

class Craft_BSF_IronWall_Floorport: Exile_AbstractCraftingRecipe
{
	name = "BSF IW Floor Port";
	pictureItem = "BSF_IronWall_Floorport_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 1;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_IronWall_Floorport_Kit"}
	};
	components[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF IronWall";
};

class Craft_BSF_IronWall_Floorport_Door: Exile_AbstractCraftingRecipe
{
	name = "BSF IW Floor Port, Door";
	pictureItem = "BSF_IronWall_Floorport_Door_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 1;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_IronWall_Floorport_Door_Kit"}
	};
	components[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF IronWall";
};

class Craft_BSF_IronWall_Stairport: Exile_AbstractCraftingRecipe
{
	name = "BSF IW Stair Port";
	pictureItem = "BSF_IronWall_Stairport_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 1;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_IronWall_Stairport_Kit"}
	};
	components[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF IronWall";
};

class Craft_BSF_IronWall_Floor_Hatchport: Exile_AbstractCraftingRecipe
{
	name = "BSF IW Hatch Port";
	pictureItem = "BSF_IronWall_Floor_Hatchport_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 1;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_IronWall_Floor_Hatchport_Kit"}
	};
	components[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF IronWall";
};

class Craft_BSF_IronWall_Floor_Hatch: Exile_AbstractCraftingRecipe
{
	name = "BSF IW Hatch";
	pictureItem = "BSF_IronWall_Floor_Hatch_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 1;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_IronWall_Floor_Hatch_Kit"}
	};
	components[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{3, "Exile_Item_MetalBoard"},
		{3, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF IronWall";
};

//////////////////////
/////	Stairs
//////////////////////

class Craft_BSF_IronWall_StairRail_L: Exile_AbstractCraftingRecipe
{
	name = "BSF IW Stair Rail, Left";
	pictureItem = "BSF_IronWall_StairRail_L_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
		{1, "BSF_IronWall_StairRail_L_Kit"}
	};
	components[] =
	{
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{3, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF IronWall Stairs";
};

class Craft_BSF_IronWall_StairRail_R: Exile_AbstractCraftingRecipe
{
	name = "BSF IW Stair Rail, Right";
	pictureItem = "BSF_IronWall_StairRail_R_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
		{1, "BSF_IronWall_StairRail_R_Kit"}
	};
	components[] =
	{
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{3, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF IronWall Stairs";
};

class Craft_BSF_IronWall_Stairs_2_C: Exile_AbstractCraftingRecipe
{
	name = "BSF IronWall Stairs 1, Center";
	pictureItem = "BSF_IronWall_Stairs_2_C_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
		{1, "BSF_IronWall_Stairs_2_C_Kit"}
	};
	components[] =
	{
		{3, "Exile_Item_MetalBoard"},
		{3, "Exile_Item_MetalScrews"},
		{3, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF IronWall Stairs";
};

class Craft_BSF_IronWall_Stairs_2_L: Exile_AbstractCraftingRecipe
{
	name = "BSF IronWall Stairs 1, Left";
	pictureItem = "BSF_IronWall_Stairs_2_L_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
		{1, "BSF_IronWall_Stairs_2_L_Kit"}
	};
	components[] =
	{
		{3, "Exile_Item_MetalBoard"},
		{4, "Exile_Item_MetalScrews"},
		{3, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF IronWall Stairs";
};

class Craft_BSF_IronWall_Stairs_2_R: Exile_AbstractCraftingRecipe
{
	name = "BSF IronWall Stairs 1, Right";
	pictureItem = "BSF_IronWall_Stairs_2_R_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
		{1, "BSF_IronWall_Stairs_2_R_Kit"}
	};
	components[] =
	{
		{3, "Exile_Item_MetalBoard"},
		{4, "Exile_Item_MetalScrews"},
		{3, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF IronWall Stairs";
};

class Craft_BSF_IronWall_Stairs_RoofTop: Exile_AbstractCraftingRecipe
{
	name = "BSF IronWall Stairs Rooftop";
	pictureItem = "BSF_IronWall_Stairs_RoofTop_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
		{1, "BSF_IronWall_Stairs_RoofTop_Kit"}
	};
	components[] =
	{
		{3, "Exile_Item_MetalBoard"},
		{4, "Exile_Item_MetalScrews"},
		{3, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF IronWall Stairs";
};

class Craft_BSF_IronWall_Stairs_Ext_C: Exile_AbstractCraftingRecipe
{
	name = "BSF IronWall Stairs Low, Center";
	pictureItem = "BSF_IronWall_Stairs_Ext_C_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
		{1, "BSF_IronWall_Stairs_Ext_C_Kit"}
	};
	components[] =
	{
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF IronWall Stairs";
};

class Craft_BSF_IronWall_Stairs_Ext_L: Exile_AbstractCraftingRecipe
{
	name = "BSF IronWall Stairs Low, Left";
	pictureItem = "BSF_IronWall_Stairs_Ext_L_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
		{1, "BSF_IronWall_Stairs_Ext_L_Kit"}
	};
	components[] =
	{
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF IronWall Stairs";
};

class Craft_BSF_IronWall_Stairs_Ext_R: Exile_AbstractCraftingRecipe
{
	name = "BSF IronWall Stairs Low, Right";
	pictureItem = "BSF_IronWall_Stairs_Ext_R_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
		{1, "BSF_IronWall_Stairs_Ext_R_Kit"}
	};
	components[] =
	{
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF IronWall Stairs";
};

class Craft_BSF_IronWall_Stairs_Spiral_2_L: Exile_AbstractCraftingRecipe
{
	name = "BSF IronWall Stairs Spiral, Left";
	pictureItem = "BSF_IronWall_Stairs_Spiral_2_L_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
		{1, "BSF_IronWall_Stairs_Spiral_2_L_Kit"}
	};
	components[] =
	{
		{3, "Exile_Item_MetalBoard"},
		{4, "Exile_Item_MetalScrews"},
		{3, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF IronWall Stairs";
};

class Craft_BSF_IronWall_Stairs_Spiral_2_R: Exile_AbstractCraftingRecipe
{
	name = "BSF IronWall Stairs Spiral, Right";
	pictureItem = "BSF_IronWall_Stairs_Spiral_2_R_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
		{1, "BSF_IronWall_Stairs_Spiral_2_R_Kit"}
	};
	components[] =
	{
		{3, "Exile_Item_MetalBoard"},
		{4, "Exile_Item_MetalScrews"},
		{3, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF IronWall Stairs";
};


//////////////////////
/////	Roofs
//////////////////////


class Craft_BSF_IronWall_Roof: Exile_AbstractCraftingRecipe
{
	name = "BSF IW Roof";
	pictureItem = "BSF_IronWall_Roof_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 1;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_IronWall_Roof_Kit"}
	};
	components[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF IronWall";
};

class Craft_BSF_IronWall_Roof_Corner: Exile_AbstractCraftingRecipe
{
	name = "BSF IW Roof, Open Corner";
	pictureItem = "BSF_IronWall_Roof_Corner_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 1;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_IronWall_Roof_Corner_Kit"}
	};
	components[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF IronWall";
};

class Craft_BSF_IronWall_Roof_Corner_Full: Exile_AbstractCraftingRecipe
{
	name = "BSF IW Roof, Full Corner";
	pictureItem = "BSF_IronWall_Roof_Corner_Full_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 1;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_IronWall_Roof_Corner_Full_Kit"}
	};
	components[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF IronWall";
};

class Craft_BSF_IronWall_Roof_Square: Exile_AbstractCraftingRecipe
{
	name = "BSF IW Roof, Square";
	pictureItem = "BSF_IronWall_Roof_Square_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 1;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_IronWall_Roof_Square_Kit"}
	};
	components[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF IronWall";
};

class Craft_BSF_IronWall_Roof_Round: Exile_AbstractCraftingRecipe
{
	name = "BSF IW Roof, Round";
	pictureItem = "BSF_IronWall_Roof_Round_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 1;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_IronWall_Roof_Round_Kit"}
	};
	components[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF IronWall";
};

class Craft_BSF_IronWall_Roof_Tri: Exile_AbstractCraftingRecipe
{
	name = "BSF IW Roof, Angled";
	pictureItem = "BSF_IronWall_Roof_Tri_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 1;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_IronWall_Roof_Tri_Kit"}
	};
	components[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF IronWall";
};

class Craft_BSF_IronWall_Roof_Third: Exile_AbstractCraftingRecipe
{
	name = "BSF IW Roof, 1/3-ish";
	pictureItem = "BSF_IronWall_Roof_Third_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 1;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_IronWall_Roof_Third_Kit"}
	};
	components[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF IronWall";
};

class Craft_BSF_IronWall_Roof_Half: Exile_AbstractCraftingRecipe
{
	name = "BSF IW Roof, Half";
	pictureItem = "BSF_IronWall_Roof_Half_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 1;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_IronWall_Roof_Half_Kit"}
	};
	components[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF IronWall";
};

class Craft_BSF_IronWall_Roof_Filler_L: Exile_AbstractCraftingRecipe
{
	name = "BSF IW Roof Filler, Left";
	pictureItem = "BSF_IronWall_Roof_Filler_L_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_IronWall_Roof_Filler_L_Kit"}
	};
	components[] =
	{
		{1, "Exile_Item_Cement"},
		{1, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{1, "Exile_Item_MetalScrews"},
		{1, "Exile_Item_MetalPole"},
		{1, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF IronWall";
};

class Craft_BSF_IronWall_Roof_Filler_R: Exile_AbstractCraftingRecipe
{
	name = "BSF IW Roof Filler, Right";
	pictureItem = "BSF_IronWall_Roof_Filler_R_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_IronWall_Roof_Filler_R_Kit"}
	};
	components[] =
	{
		{1, "Exile_Item_Cement"},
		{1, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{1, "Exile_Item_MetalScrews"},
		{1, "Exile_Item_MetalPole"},
		{1, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF IronWall";
};

//////////////////////
/////	Gates
//////////////////////

class Craft_BSF_IronWall_Gate_1L: Exile_AbstractCraftingRecipe
{
	name = "BSF IW Gate, Left";
	pictureItem = "BSF_IronWall_Gate_1L_Kit";
	requiresFire = 1;
	BSF_Donor = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 1;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_IronWall_Gate_1L_Kit"}
	};
	components[] =
	{
		{2, "Exile_Item_Cement"},
		{1, "BSF_Paint_Bucket_Yellow"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox","BSF_Paintbrush"};
	category = "BSF IronWall";
};

class Craft_BSF_IronWall_Gate_1R: Exile_AbstractCraftingRecipe
{
	name = "BSF IW Gate, Right";
	pictureItem = "BSF_IronWall_Gate_1R_Kit";
	requiresFire = 1;
	BSF_Donor = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 1;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_IronWall_Gate_1R_Kit"}
	};
	components[] =
	{
		{2, "Exile_Item_Cement"},
		{1, "BSF_Paint_Bucket_Yellow"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox","BSF_Paintbrush"};
	category = "BSF IronWall";
};

//////////////////////
/////	Walls
//////////////////////

class Craft_BSF_GreenWall: Exile_AbstractCraftingRecipe
{
	name = "BSF GW";
	pictureItem = "BSF_GreenWall_Basic_Kit";
	requiresFire = 1;
	BSF_Donor = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 1;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_GreenWall_Basic_Kit"}
	};
	components[] =
	{
		{1, "BSF_Paint_Bucket_Green"},
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF GreenWall";
};

class Craft_BSF_GreenWall_Low: Exile_AbstractCraftingRecipe
{
	name = "BSF GW, Low";
	pictureItem = "BSF_GreenWall_Low_Kit";
	requiresFire = 1;
	BSF_Donor = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 1;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_GreenWall_Low_Kit"}
	};
	components[] =
	{
		{1, "BSF_Paint_Bucket_Green"},
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF GreenWall";
};

class Craft_BSF_GreenWall_Topper: Exile_AbstractCraftingRecipe
{
	name = "BSF GW Wall Spacer";
	pictureItem = "BSF_GreenWall_Topper_Kit";
	requiresFire = 1;
	BSF_Donor = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 1;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_GreenWall_Topper_Kit"}
	};
	components[] =
	{
		{1, "BSF_Paint_Bucket_Green"},
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF GreenWall";
};

class Craft_BSF_GreenWall_Round: Exile_AbstractCraftingRecipe
{
	name = "BSF GW, Round";
	pictureItem = "BSF_GreenWall_Round_Kit";
	requiresFire = 1;
	BSF_Donor = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_GreenWall_Round_Kit"}
	};
	components[] =
	{
		{1, "BSF_Paint_Bucket_Green"},
		{6, "Exile_Item_MetalBoard"},
		{6, "Exile_Item_MetalScrews"},
		{5, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF GreenWall";
};

class Craft_BSF_GreenWall_Round_Low: Exile_AbstractCraftingRecipe
{
	name = "BSF GW, Low Round Wall";
	pictureItem = "BSF_GreenWall_Round_Low_Kit";
	requiresFire = 1;
	BSF_Donor = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_GreenWall_Round_Low_Kit"}
	};
	components[] =
	{
		{1, "BSF_Paint_Bucket_Green"},
		{5, "Exile_Item_MetalBoard"},
		{5, "Exile_Item_MetalScrews"},
		{4, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF GreenWall";
};

class Craft_BSF_GreenWall_Round_Topper: Exile_AbstractCraftingRecipe
{
	name = "BSF GW Round Wall Spacer ";
	pictureItem = "BSF_GreenWall_Round_Topper_Kit";
	requiresFire = 1;
	BSF_Donor = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 1;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_GreenWall_Round_Topper_Kit"}
	};
	components[] =
	{
		{1, "BSF_Paint_Bucket_Green"},
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF GreenWall";
};

class Craft_BSF_GreenWall_Tri: Exile_AbstractCraftingRecipe
{
	name = "BSF GW, Angled ";
	pictureItem = "BSF_GreenWall_Tri_Kit";
	requiresFire = 1;
	BSF_Donor = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 1;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_GreenWall_Tri_Kit"}
	};
	components[] =
	{
		{1, "BSF_Paint_Bucket_Green"},
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF GreenWall";
};

class Craft_BSF_GreenWall_Tri_Low: Exile_AbstractCraftingRecipe
{
	name = "BSF GW, Low, Angled ";
	pictureItem = "BSF_GreenWall_Tri_Low_Kit";
	requiresFire = 1;
	BSF_Donor = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 1;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_GreenWall_Tri_Low_Kit"}
	};
	components[] =
	{
		{1, "BSF_Paint_Bucket_Green"},
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF GreenWall";
};

class Craft_BSF_GreenWall_Tri_Topper: Exile_AbstractCraftingRecipe
{
	name = "BSF GW Angled Wall Spacer";
	pictureItem = "BSF_GreenWall_Tri_Topper_Kit";
	requiresFire = 1;
	BSF_Donor = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 1;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_GreenWall_Tri_Topper_Kit"}
	};
	components[] =
	{
		{1, "BSF_Paint_Bucket_Green"},
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF GreenWall";
};

class Craft_BSF_GreenWall_Half: Exile_AbstractCraftingRecipe
{
	name = "BSF GW Half Wall";
	pictureItem = "BSF_GreenWall_Half_Kit";
	requiresFire = 1;
	BSF_Donor = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{1, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_GreenWall_Half_Kit"}
	};
	components[] =
	{
		{1, "BSF_Paint_Bucket_Green"},
		{3, "Exile_Item_MetalBoard"},
		{3, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"},
		{1, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF GreenWall";
};

class Craft_BSF_GreenWall_Third: Exile_AbstractCraftingRecipe
{
	name = "BSF GW 1/3 Wall";
	pictureItem = "BSF_GreenWall_Third_Kit";
	requiresFire = 1;
	BSF_Donor = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{1, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_GreenWall_Third_Kit"}
	};
	components[] =
	{
		{1, "BSF_Paint_Bucket_Green"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"},
		{1, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF GreenWall";
};

class Craft_BSF_GreenWall_Post: Exile_AbstractCraftingRecipe
{
	name = "BSF GW Post";
	pictureItem = "BSF_GreenWall_Post_Kit";
	requiresFire = 1;
	BSF_Donor = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 1;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_GreenWall_Post_Kit"}
	};
	components[] =
	{
		{1, "BSF_Paint_Bucket_Green"},
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF GreenWall";
};



//////////////////////
/////	Doors
//////////////////////

class Craft_BSF_GreenWall_DoorOpening_C: Exile_AbstractCraftingRecipe
{
	name = "BSF GW Door Opening, Center ";
	pictureItem = "BSF_GreenWall_DoorOpening_C_Kit";
	requiresFire = 1;
	BSF_Donor = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 1;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_GreenWall_DoorOpening_C_Kit"}
	};
	components[] =
	{
		{1, "BSF_Paint_Bucket_Green"},
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF GreenWall";
};

class Craft_BSF_GreenWall_DoorOpening_L: Exile_AbstractCraftingRecipe
{
	name = "BSF GW Door Opening, Left ";
	pictureItem = "BSF_GreenWall_DoorOpening_L_Kit";
	requiresFire = 1;
	BSF_Donor = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 1;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_GreenWall_DoorOpening_L_Kit"}
	};
	components[] =
	{
		{1, "BSF_Paint_Bucket_Green"},
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF GreenWall";
};

class Craft_BSF_GreenWall_DoorOpening_R: Exile_AbstractCraftingRecipe
{
	name = "BSF GW Door Opening, Right ";
	pictureItem = "BSF_GreenWall_DoorOpening_R_Kit";
	requiresFire = 1;
	BSF_Donor = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 1;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_GreenWall_DoorOpening_R_Kit"}
	};
	components[] =
	{
		{1, "BSF_Paint_Bucket_Green"},
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF GreenWall";
};

class Craft_BSF_GreenWall_DoorOpening_Round: Exile_AbstractCraftingRecipe
{
	name = "BSF GW Door Opening, Round ";
	pictureItem = "BSF_GreenWall_DoorOpening_Round_Kit";
	requiresFire = 1;
	BSF_Donor = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 1;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_GreenWall_DoorOpening_Round_Kit"}
	};
	components[] =
	{
		{1, "BSF_Paint_Bucket_Green"},
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF GreenWall";
};

class Craft_BSF_GreenWall_DoorOpening_Tri: Exile_AbstractCraftingRecipe
{
	name = "BSF GW Door Opening, Angled ";
	pictureItem = "BSF_GreenWall_DoorOpening_Tri_Kit";
	requiresFire = 1;
	BSF_Donor = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 1;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_GreenWall_DoorOpening_Tri_Kit"}
	};
	components[] =
	{
		{1, "BSF_Paint_Bucket_Green"},
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF GreenWall";
};

class Craft_BSF_GreenWall_Door_C: Exile_AbstractCraftingRecipe
{
	name = "BSF GW Door, Center ";
	pictureItem = "BSF_GreenWall_Door_C_Kit";
	requiresFire = 1;
	BSF_Donor = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 1;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_GreenWall_Door_C_Kit"}
	};
	components[] =
	{
		{1, "BSF_Paint_Bucket_Green"},
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF GreenWall";
};

class Craft_BSF_GreenWall_Door_L: Exile_AbstractCraftingRecipe
{
	name = "BSF GW Door, Left ";
	pictureItem = "BSF_GreenWall_Door_L_Kit";
	requiresFire = 1;
	BSF_Donor = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 1;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_GreenWall_Door_L_Kit"}
	};
	components[] =
	{
		{1, "BSF_Paint_Bucket_Green"},
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF GreenWall";
};

class Craft_BSF_GreenWall_Door_R: Exile_AbstractCraftingRecipe
{
	name = "BSF GW Door, Right ";
	pictureItem = "BSF_GreenWall_Door_R_Kit";
	requiresFire = 1;
	BSF_Donor = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 1;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_GreenWall_Door_R_Kit"}
	};
	components[] =
	{
		{1, "BSF_Paint_Bucket_Green"},
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF GreenWall";
};

class Craft_BSF_GreenWall_Door_Round: Exile_AbstractCraftingRecipe
{
	name = "BSF GW Door, Round ";
	pictureItem = "BSF_GreenWall_Door_Round_Kit";
	requiresFire = 1;
	BSF_Donor = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 1;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_GreenWall_Door_Round_Kit"}
	};
	components[] =
	{
		{1, "BSF_Paint_Bucket_Green"},
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF GreenWall";
};

class Craft_BSF_GreenWall_Door_Tri: Exile_AbstractCraftingRecipe
{
	name = "BSF GW Door, Angled ";
	pictureItem = "BSF_GreenWall_Door_Tri_Kit";
	requiresFire = 1;
	BSF_Donor = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 1;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_GreenWall_Door_Tri_Kit"}
	};
	components[] =
	{
		{1, "BSF_Paint_Bucket_Green"},
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF GreenWall";
};


//////////////////////
/////	Windows
//////////////////////

class Craft_BSF_GreenWall_WindowOpening_C: Exile_AbstractCraftingRecipe
{
	name = "BSF GW Window Opening, Center ";
	pictureItem = "BSF_GreenWall_WindowOpening_C_Kit";
	requiresFire = 1;
	BSF_Donor = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 1;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_GreenWall_WindowOpening_C_Kit"}
	};
	components[] =
	{
		{1, "BSF_Paint_Bucket_Green"},
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF GreenWall";
};

class Craft_BSF_GreenWall_WindowOpening_L: Exile_AbstractCraftingRecipe
{
	name = "BSF GW Window Opening, Left ";
	pictureItem = "BSF_GreenWall_WindowOpening_L_Kit";
	requiresFire = 1;
	BSF_Donor = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 1;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_GreenWall_WindowOpening_L_Kit"}
	};
	components[] =
	{
		{1, "BSF_Paint_Bucket_Green"},
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF GreenWall";
};

class Craft_BSF_GreenWall_WindowOpening_R: Exile_AbstractCraftingRecipe
{
	name = "BSF GW Window Opening, Right ";
	pictureItem = "BSF_GreenWall_WindowOpening_R_Kit";
	requiresFire = 1;
	BSF_Donor = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 1;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_GreenWall_WindowOpening_R_Kit"}
	};
	components[] =
	{
		{1, "BSF_Paint_Bucket_Green"},
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF GreenWall";
};

class Craft_BSF_GreenWall_WindowOpening_Round: Exile_AbstractCraftingRecipe
{
	name = "BSF GW Window, Angled ";
	pictureItem = "BSF_GreenWall_WindowOpening_Round_Kit";
	requiresFire = 1;
	BSF_Donor = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_GreenWall_WindowOpening_Round_Kit"}
	};
	components[] =
	{
		{1, "BSF_Paint_Bucket_Green"},
		{6, "Exile_Item_MetalBoard"},
		{6, "Exile_Item_MetalScrews"},
		{5, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF GreenWall";
};

class Craft_BSF_GreenWall_WindowOpening_Tri: Exile_AbstractCraftingRecipe
{
	name = "BSF GW Window Opening, Angled ";
	pictureItem = "BSF_GreenWall_WindowOpening_Tri_Kit";
	requiresFire = 1;
	BSF_Donor = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 1;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_GreenWall_WindowOpening_Tri_Kit"}
	};
	components[] =
	{
		{1, "BSF_Paint_Bucket_Green"},
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF GreenWall";
};


class Craft_BSF_GreenWall_Window_C: Exile_AbstractCraftingRecipe
{
	name = "BSF GW Window, Center ";
	pictureItem = "BSF_GreenWall_Window_C_Kit";
	requiresFire = 1;
	BSF_Donor = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 1;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_GreenWall_Window_C_Kit"}
	};
	components[] =
	{
		{1, "BSF_Paint_Bucket_Green"},
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF GreenWall";
};

class Craft_BSF_GreenWall_Window_L: Exile_AbstractCraftingRecipe
{
	name = "BSF GW Window, Left";
	pictureItem = "BSF_GreenWall_Window_L_Kit";
	requiresFire = 1;
	BSF_Donor = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 1;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_GreenWall_Window_L_Kit"}
	};
	components[] =
	{
		{1, "BSF_Paint_Bucket_Green"},
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF GreenWall";
};

class Craft_BSF_GreenWall_Window_R: Exile_AbstractCraftingRecipe
{
	name = "BSF GW Window, Right";
	pictureItem = "BSF_GreenWall_Window_R_Kit";
	requiresFire = 1;
	BSF_Donor = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 1;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_GreenWall_Window_R_Kit"}
	};
	components[] =
	{
		{1, "BSF_Paint_Bucket_Green"},
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF GreenWall";
};

class Craft_BSF_GreenWall_Window_Round: Exile_AbstractCraftingRecipe
{
	name = "BSF GW Window, Angled ";
	pictureItem = "BSF_GreenWall_Window_Round_Kit";
	requiresFire = 1;
	BSF_Donor = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_GreenWall_Window_Round_Kit"}
	};
	components[] =
	{
		{1, "BSF_Paint_Bucket_Green"},
		{6, "Exile_Item_MetalBoard"},
		{7, "Exile_Item_MetalScrews"},
		{5, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF GreenWall";
};

class Craft_BSF_GreenWall_Window_Tri: Exile_AbstractCraftingRecipe
{
	name = "BSF GW Window, Angled ";
	pictureItem = "BSF_GreenWall_Window_Tri_Kit";
	requiresFire = 1;
	BSF_Donor = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 1;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_GreenWall_Window_Tri_Kit"}
	};
	components[] =
	{
		{1, "BSF_Paint_Bucket_Green"},
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF GreenWall";
};


//////////////////////
/////	Floors
//////////////////////

class Craft_BSF_GreenWall_Floor: Exile_AbstractCraftingRecipe
{
	name = "BSF GW Floor";
	pictureItem = "BSF_GreenWall_Floor_Kit";
	requiresFire = 1;
	BSF_Donor = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 1;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_GreenWall_Floor_Kit"}
	};
	components[] =
	{
		{1, "BSF_Paint_Bucket_Green"},
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF GreenWall";
};

class Craft_BSF_GreenWall_Floor_Half: Exile_AbstractCraftingRecipe
{
	name = "BSF GW Floor, Half";
	pictureItem = "BSF_GreenWall_Floor_Half_Kit";
	requiresFire = 1;
	BSF_Donor = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 1;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_GreenWall_Floor_Half_Kit"}
	};
	components[] =
	{
		{1, "BSF_Paint_Bucket_Green"},
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF GreenWall";
};

class Craft_BSF_GreenWall_Floor_Quarter: Exile_AbstractCraftingRecipe
{
	name = "BSF GW Floor, Quarter";
	pictureItem = "BSF_GreenWall_Floor_Quarter_Kit";
	requiresFire = 1;
	BSF_Donor = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_GreenWall_Floor_Quarter_Kit"}
	};
	components[] =
	{
		{1, "BSF_Paint_Bucket_Green"},
		{1, "Exile_Item_Cement"},
		{1, "Exile_Item_Sand"},
		{1, "Exile_Item_MetalBoard"},
		{1, "Exile_Item_MetalScrews"},
		{1, "Exile_Item_MetalPole"},
		{1, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF GreenWall";
};

class Craft_BSF_GreenWall_Floor_Round: Exile_AbstractCraftingRecipe
{
	name = "BSF GW Floor, Round";
	pictureItem = "BSF_GreenWall_Floor_Round_Kit";
	requiresFire = 1;
	BSF_Donor = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 1;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_GreenWall_Floor_Round_Kit"}
	};
	components[] =
	{
		{1, "BSF_Paint_Bucket_Green"},
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF GreenWall";
};

class Craft_BSF_GreenWall_Floor_Tri: Exile_AbstractCraftingRecipe
{
	name = "BSF GW Floor, Angled";
	pictureItem = "BSF_GreenWall_Floor_Tri_Kit";
	requiresFire = 1;
	BSF_Donor = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 1;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_GreenWall_Floor_Tri_Kit"}
	};
	components[] =
	{
		{1, "BSF_Paint_Bucket_Green"},
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF GreenWall";
};

class Craft_BSF_GreenWall_Floorport: Exile_AbstractCraftingRecipe
{
	name = "BSF GW Floor Port";
	pictureItem = "BSF_GreenWall_Floorport_Kit";
	requiresFire = 1;
	BSF_Donor = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 1;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_GreenWall_Floorport_Kit"}
	};
	components[] =
	{
		{1, "BSF_Paint_Bucket_Green"},
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF GreenWall";
};

class Craft_BSF_GreenWall_Floorport_Door: Exile_AbstractCraftingRecipe
{
	name = "BSF GW Floor Port, Door";
	pictureItem = "BSF_GreenWall_Floorport_Door_Kit";
	requiresFire = 1;
	BSF_Donor = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 1;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_GreenWall_Floorport_Door_Kit"}
	};
	components[] =
	{
		{1, "BSF_Paint_Bucket_Green"},
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF GreenWall";
};

class Craft_BSF_GreenWall_Stairport: Exile_AbstractCraftingRecipe
{
	name = "BSF GW Stair Port";
	pictureItem = "BSF_GreenWall_Stairport_Kit";
	requiresFire = 1;
	BSF_Donor = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 1;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_GreenWall_Stairport_Kit"}
	};
	components[] =
	{
		{1, "BSF_Paint_Bucket_Green"},
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF GreenWall";
};

class Craft_BSF_GreenWall_Floor_Hatchport: Exile_AbstractCraftingRecipe
{
	name = "BSF GW Hatch Port";
	pictureItem = "BSF_GreenWall_Floor_Hatchport_Kit";
	requiresFire = 1;
	BSF_Donor = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 1;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_GreenWall_Floor_Hatchport_Kit"}
	};
	components[] =
	{
		{1, "BSF_Paint_Bucket_Green"},
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF GreenWall";
};

class Craft_BSF_GreenWall_Floor_Hatch: Exile_AbstractCraftingRecipe
{
	name = "BSF GW Hatch";
	pictureItem = "BSF_GreenWall_Floor_Hatch_Kit";
	requiresFire = 1;
	BSF_Donor = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 1;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_GreenWall_Floor_Hatch_Kit"}
	};
	components[] =
	{
		{1, "BSF_Paint_Bucket_Green"},
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{3, "Exile_Item_MetalBoard"},
		{3, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF GreenWall";
};

//////////////////////
/////	Stairs
//////////////////////


class Craft_BSF_GreenWall_StairRail_L: Exile_AbstractCraftingRecipe
{
	name = "BSF GW Stair Rail, Left";
	pictureItem = "BSF_GreenWall_StairRail_L_Kit";
	requiresFire = 1;
	BSF_Donor = 1;
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
		{1, "BSF_GreenWall_StairRail_L_Kit"}
	};
	components[] =
	{
		{1, "BSF_Paint_Bucket_Green"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{3, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF GreenWall Stairs";
};

class Craft_BSF_GreenWall_StairRail_R: Exile_AbstractCraftingRecipe
{
	name = "BSF GW Stair Rail, Right";
	pictureItem = "BSF_GreenWall_StairRail_R_Kit";
	requiresFire = 1;
	BSF_Donor = 1;
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
		{1, "BSF_GreenWall_StairRail_R_Kit"}
	};
	components[] =
	{
		{1, "BSF_Paint_Bucket_Green"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{3, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF GreenWall Stairs";
};

class Craft_BSF_GreenWall_Stairs_2_C: Exile_AbstractCraftingRecipe
{
	name = "BSF GW Stairs 1, Center";
	pictureItem = "BSF_GreenWall_Stairs_2_C_Kit";
	requiresFire = 1;
	BSF_Donor = 1;
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
		{1, "BSF_GreenWall_Stairs_2_C_Kit"}
	};
	components[] =
	{
		{1, "BSF_Paint_Bucket_Green"},
		{3, "Exile_Item_MetalBoard"},
		{3, "Exile_Item_MetalScrews"},
		{3, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF GreenWall Stairs";
};

class Craft_BSF_GreenWall_Stairs_2_L: Exile_AbstractCraftingRecipe
{
	name = "BSF GW Stairs 1, Left";
	pictureItem = "BSF_GreenWall_Stairs_2_L_Kit";
	requiresFire = 1;
	BSF_Donor = 1;
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
		{1, "BSF_GreenWall_Stairs_2_L_Kit"}
	};
	components[] =
	{
		{1, "BSF_Paint_Bucket_Green"},
		{3, "Exile_Item_MetalBoard"},
		{4, "Exile_Item_MetalScrews"},
		{3, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF GreenWall Stairs";
};

class Craft_BSF_GreenWall_Stairs_2_R: Exile_AbstractCraftingRecipe
{
	name = "BSF GW Stairs 1, Right";
	pictureItem = "BSF_GreenWall_Stairs_2_R_Kit";
	requiresFire = 1;
	BSF_Donor = 1;
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
		{1, "BSF_GreenWall_Stairs_2_R_Kit"}
	};
	components[] =
	{
		{1, "BSF_Paint_Bucket_Green"},
		{3, "Exile_Item_MetalBoard"},
		{4, "Exile_Item_MetalScrews"},
		{3, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF GreenWall Stairs";
};

class Craft_BSF_GreenWall_Stairs_RoofTop: Exile_AbstractCraftingRecipe
{
	name = "BSF GW Stairs Rooftop";
	pictureItem = "BSF_GreenWall_Stairs_RoofTop_Kit";
	requiresFire = 1;
	BSF_Donor = 1;
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
		{1, "BSF_GreenWall_Stairs_RoofTop_Kit"}
	};
	components[] =
	{
		{1, "BSF_Paint_Bucket_Green"},
		{3, "Exile_Item_MetalBoard"},
		{4, "Exile_Item_MetalScrews"},
		{3, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF GreenWall Stairs";
};

class Craft_BSF_GreenWall_Stairs_Ext_C: Exile_AbstractCraftingRecipe
{
	name = "BSF GW Stairs Low, Center";
	pictureItem = "BSF_GreenWall_Stairs_Ext_C_Kit";
	requiresFire = 1;
	BSF_Donor = 1;
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
		{1, "BSF_GreenWall_Stairs_Ext_C_Kit"}
	};
	components[] =
	{
		{1, "BSF_Paint_Bucket_Green"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF GreenWall Stairs";
};

class Craft_BSF_GreenWall_Stairs_Ext_L: Exile_AbstractCraftingRecipe
{
	name = "BSF GW Stairs Low, Left";
	pictureItem = "BSF_GreenWall_Stairs_Ext_L_Kit";
	requiresFire = 1;
	BSF_Donor = 1;
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
		{1, "BSF_GreenWall_Stairs_Ext_L_Kit"}
	};
	components[] =
	{
		{1, "BSF_Paint_Bucket_Green"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF GreenWall Stairs";
};

class Craft_BSF_GreenWall_Stairs_Ext_R: Exile_AbstractCraftingRecipe
{
	name = "BSF GW Stairs Low, Right";
	pictureItem = "BSF_GreenWall_Stairs_Ext_R_Kit";
	requiresFire = 1;
	BSF_Donor = 1;
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
		{1, "BSF_GreenWall_Stairs_Ext_R_Kit"}
	};
	components[] =
	{
		{1, "BSF_Paint_Bucket_Green"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF GreenWall Stairs";
};

class Craft_BSF_GreenWall_Stairs_Spiral_2_L: Exile_AbstractCraftingRecipe
{
	name = "BSF GW Stairs Spiral, Right";
	pictureItem = "BSF_GreenWall_Stairs_Spiral_2_L_Kit";
	requiresFire = 1;
	BSF_Donor = 1;
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
		{1, "BSF_GreenWall_Stairs_Spiral_2_L_Kit"}
	};
	components[] =
	{
		{1, "BSF_Paint_Bucket_Green"},
		{3, "Exile_Item_MetalBoard"},
		{4, "Exile_Item_MetalScrews"},
		{3, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF GreenWall Stairs";
};

class Craft_BSF_GreenWall_Stairs_Spiral_2_R: Exile_AbstractCraftingRecipe
{
	name = "BSF GW Stairs Spiral, Right";
	pictureItem = "BSF_GreenWall_Stairs_Spiral_2_R_Kit";
	requiresFire = 1;
	BSF_Donor = 1;
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
		{1, "BSF_GreenWall_Stairs_Spiral_2_R_Kit"}
	};
	components[] =
	{
		{1, "BSF_Paint_Bucket_Green"},
		{3, "Exile_Item_MetalBoard"},
		{4, "Exile_Item_MetalScrews"},
		{3, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF GreenWall Stairs";
};

//////////////////////
/////	Roofs
//////////////////////


class Craft_BSF_GreenWall_Roof: Exile_AbstractCraftingRecipe
{
	name = "BSF GW Roof";
	pictureItem = "BSF_GreenWall_Roof_Kit";
	requiresFire = 1;
	BSF_Donor = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 1;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_GreenWall_Roof_Kit"}
	};
	components[] =
	{
		{1, "BSF_Paint_Bucket_Green"},
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF GreenWall";
};

class Craft_BSF_GreenWall_Roof_Corner: Exile_AbstractCraftingRecipe
{
	name = "BSF GW Roof, Open Corner";
	pictureItem = "BSF_GreenWall_Roof_Corner_Kit";
	requiresFire = 1;
	BSF_Donor = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 1;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_GreenWall_Roof_Corner_Kit"}
	};
	components[] =
	{
		{1, "BSF_Paint_Bucket_Green"},
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF GreenWall";
};

class Craft_BSF_GreenWall_Roof_Corner_Full: Exile_AbstractCraftingRecipe
{
	name = "BSF GW Roof, Full Corner";
	pictureItem = "BSF_GreenWall_Roof_Corner_Full_Kit";
	requiresFire = 1;
	BSF_Donor = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 1;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_GreenWall_Roof_Corner_Full_Kit"}
	};
	components[] =
	{
		{1, "BSF_Paint_Bucket_Green"},
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF GreenWall";
};

class Craft_BSF_GreenWall_Roof_Square: Exile_AbstractCraftingRecipe
{
	name = "BSF GW Roof, Square";
	pictureItem = "BSF_GreenWall_Roof_Square_Kit";
	requiresFire = 1;
	BSF_Donor = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 1;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_GreenWall_Roof_Square_Kit"}
	};
	components[] =
	{
		{1, "BSF_Paint_Bucket_Green"},
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF GreenWall";
};

class Craft_BSF_GreenWall_Roof_Round: Exile_AbstractCraftingRecipe
{
	name = "BSF GW Roof, Round";
	pictureItem = "BSF_GreenWall_Roof_Round_Kit";
	requiresFire = 1;
	BSF_Donor = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 1;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_GreenWall_Roof_Round_Kit"}
	};
	components[] =
	{
		{1, "BSF_Paint_Bucket_Green"},
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF GreenWall";
};

class Craft_BSF_GreenWall_Roof_Tri: Exile_AbstractCraftingRecipe
{
	name = "BSF GW Roof, Angled";
	pictureItem = "BSF_GreenWall_Roof_Tri_Kit";
	requiresFire = 1;
	BSF_Donor = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 1;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_GreenWall_Roof_Tri_Kit"}
	};
	components[] =
	{
		{1, "BSF_Paint_Bucket_Green"},
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF GreenWall";
};

class Craft_BSF_GreenWall_Roof_Third: Exile_AbstractCraftingRecipe
{
	name = "BSF GW Roof, 1/3-ish";
	pictureItem = "BSF_GreenWall_Roof_Third_Kit";
	requiresFire = 1;
	BSF_Donor = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 1;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_GreenWall_Roof_Third_Kit"}
	};
	components[] =
	{
		{1, "BSF_Paint_Bucket_Green"},
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF GreenWall";
};

class Craft_BSF_GreenWall_Roof_Half: Exile_AbstractCraftingRecipe
{
	name = "BSF GW Roof, Half";
	pictureItem = "BSF_GreenWall_Roof_Half_Kit";
	requiresFire = 1;
	BSF_Donor = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 1;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_GreenWall_Roof_Half_Kit"}
	};
	components[] =
	{
		{1, "BSF_Paint_Bucket_Green"},
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF GreenWall";
};

class Craft_BSF_GreenWall_Roof_Filler_L: Exile_AbstractCraftingRecipe
{
	name = "BSF GW Roof Filler, Left";
	pictureItem = "BSF_GreenWall_Roof_Filler_L_Kit";
	requiresFire = 1;
	BSF_Donor = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_GreenWall_Roof_Filler_L_Kit"}
	};
	components[] =
	{
		{1, "BSF_Paint_Bucket_Green"},
		{1, "Exile_Item_Cement"},
		{1, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{1, "Exile_Item_MetalScrews"},
		{1, "Exile_Item_MetalPole"},
		{1, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF GreenWall";
};

class Craft_BSF_GreenWall_Roof_Filler_R: Exile_AbstractCraftingRecipe
{
	name = "BSF GW Roof Filler, Right";
	pictureItem = "BSF_GreenWall_Roof_Filler_R_Kit";
	requiresFire = 1;
	BSF_Donor = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_GreenWall_Roof_Filler_R_Kit"}
	};
	components[] =
	{
		{1, "BSF_Paint_Bucket_Green"},
		{1, "Exile_Item_Cement"},
		{1, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{1, "Exile_Item_MetalScrews"},
		{1, "Exile_Item_MetalPole"},
		{1, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF GreenWall";
};

//////////////////////
/////	Gates
//////////////////////

class Craft_BSF_GreenWall_Gate_1L: Exile_AbstractCraftingRecipe
{
	name = "BSF GW Gate, Left";
	pictureItem = "BSF_GreenWall_Gate_1L_Kit";
	requiresFire = 1;
	BSF_Donor = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 1;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_GreenWall_Gate_1L_Kit"}
	};
	components[] =
	{
		{1, "BSF_Paint_Bucket_Green"},
		{2, "Exile_Item_Cement"},
		{1, "BSF_Paint_Bucket_Yellow"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox","BSF_Paintbrush"};
	category = "BSF GreenWall";
};

class Craft_BSF_GreenWall_Gate_1R: Exile_AbstractCraftingRecipe
{
	name = "BSF GW Gate, Right";
	pictureItem = "BSF_GreenWall_Gate_1R_Kit";
	requiresFire = 1;
	BSF_Donor = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 1;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_GreenWall_Gate_1R_Kit"}
	};
	components[] =
	{
		{1, "BSF_Paint_Bucket_Green"},
		{2, "Exile_Item_Cement"},
		{1, "BSF_Paint_Bucket_Yellow"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox","BSF_Paintbrush"};
	category = "BSF GreenWall";
};




//////////////////////
/////	Walls
//////////////////////

class Craft_BSF_CastleWall: Exile_AbstractCraftingRecipe
{
	name = "BSF CW";
	pictureItem = "BSF_CastleWall_Basic_Kit";
	requiresFire = 1;
	BSF_Donor = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{1, "BSF_CastleWall_Basic_Kit"}
	};
	components[] =
	{
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF CastleWall";
};

class Craft_BSF_CastleWall_Low: Exile_AbstractCraftingRecipe
{
	name = "BSF CW, Low";
	pictureItem = "BSF_CastleWall_Low_Kit";
	requiresFire = 1;
	BSF_Donor = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{1, "BSF_CastleWall_Low_Kit"}
	};
	components[] =
	{
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF CastleWall";
};

class Craft_BSF_CastleWall_Round: Exile_AbstractCraftingRecipe
{
	name = "BSF CW, Round";
	pictureItem = "BSF_CastleWall_Round_Kit";
	requiresFire = 1;
	BSF_Donor = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{1, "BSF_CastleWall_Round_Kit"}
	};
	components[] =
	{
		{6, "Exile_Item_MetalBoard"},
		{6, "Exile_Item_MetalScrews"},
		{5, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF CastleWall";
};

class Craft_BSF_CastleWall_Round_Low: Exile_AbstractCraftingRecipe
{
	name = "BSF CW, Low Round Wall";
	pictureItem = "BSF_CastleWall_Round_Low_Kit";
	requiresFire = 1;
	BSF_Donor = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{1, "BSF_CastleWall_Round_Low_Kit"}
	};
	components[] =
	{
		{5, "Exile_Item_MetalBoard"},
		{5, "Exile_Item_MetalScrews"},
		{4, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF CastleWall";
};

class Craft_BSF_CastleWall_Tri: Exile_AbstractCraftingRecipe
{
	name = "BSF CW, Angled ";
	pictureItem = "BSF_CastleWall_Tri_Kit";
	requiresFire = 1;
	BSF_Donor = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{1, "BSF_CastleWall_Tri_Kit"}
	};
	components[] =
	{
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF CastleWall";
};

class Craft_BSF_CastleWall_Tri_Low: Exile_AbstractCraftingRecipe
{
	name = "BSF CW, Low, Angled ";
	pictureItem = "BSF_CastleWall_Tri_Low_Kit";
	requiresFire = 1;
	BSF_Donor = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{1, "BSF_CastleWall_Tri_Low_Kit"}
	};
	components[] =
	{
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF CastleWall";
};

class Craft_BSF_CastleWall_Half: Exile_AbstractCraftingRecipe
{
	name = "BSF CW Half Wall";
	pictureItem = "BSF_CastleWall_Half_Kit";
	requiresFire = 1;
	BSF_Donor = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{1, "BSF_CastleWall_Half_Kit"}
	};
	components[] =
	{
		{3, "Exile_Item_MetalBoard"},
		{3, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF CastleWall";
};

class Craft_BSF_CastleWall_Third: Exile_AbstractCraftingRecipe
{
	name = "BSF CW 1/3 Wall";
	pictureItem = "BSF_CastleWall_Third_Kit";
	requiresFire = 1;
	BSF_Donor = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{1, "BSF_CastleWall_Third_Kit"}
	};
	components[] =
	{
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF CastleWall";
};


//////////////////////
/////	Doors
//////////////////////

class Craft_BSF_CastleWall_DoorOpening_C: Exile_AbstractCraftingRecipe
{
	name = "BSF CW Door Opening, Center ";
	pictureItem = "BSF_CastleWall_DoorOpening_C_Kit";
	requiresFire = 1;
	BSF_Donor = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{1, "BSF_CastleWall_DoorOpening_C_Kit"}
	};
	components[] =
	{
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF CastleWall";
};

class Craft_BSF_CastleWall_DoorOpening_L: Exile_AbstractCraftingRecipe
{
	name = "BSF CW Door Opening, Left ";
	pictureItem = "BSF_CastleWall_DoorOpening_L_Kit";
	requiresFire = 1;
	BSF_Donor = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{1, "BSF_CastleWall_DoorOpening_L_Kit"}
	};
	components[] =
	{
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF CastleWall";
};

class Craft_BSF_CastleWall_DoorOpening_R: Exile_AbstractCraftingRecipe
{
	name = "BSF CW Door Opening, Right ";
	pictureItem = "BSF_CastleWall_DoorOpening_R_Kit";
	requiresFire = 1;
	BSF_Donor = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{1, "BSF_CastleWall_DoorOpening_R_Kit"}
	};
	components[] =
	{
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF CastleWall";
};

class Craft_BSF_CastleWall_DoorOpening_Round: Exile_AbstractCraftingRecipe
{
	name = "BSF CW Door Opening, Round ";
	pictureItem = "BSF_CastleWall_DoorOpening_Round_Kit";
	requiresFire = 1;
	BSF_Donor = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{1, "BSF_CastleWall_DoorOpening_Round_Kit"}
	};
	components[] =
	{
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF CastleWall";
};

class Craft_BSF_CastleWall_DoorOpening_Tri: Exile_AbstractCraftingRecipe
{
	name = "BSF CW Door Opening, Angled ";
	pictureItem = "BSF_CastleWall_DoorOpening_Tri_Kit";
	requiresFire = 1;
	BSF_Donor = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{1, "BSF_CastleWall_DoorOpening_Tri_Kit"}
	};
	components[] =
	{
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF CastleWall";
};

class Craft_BSF_CastleWall_Door_C: Exile_AbstractCraftingRecipe
{
	name = "BSF CW Door, Center ";
	pictureItem = "BSF_CastleWall_Door_C_Kit";
	requiresFire = 1;
	BSF_Donor = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{1, "BSF_CastleWall_Door_C_Kit"}
	};
	components[] =
	{
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF CastleWall";
};

class Craft_BSF_CastleWall_Door_L: Exile_AbstractCraftingRecipe
{
	name = "BSF CW Door, Left ";
	pictureItem = "BSF_CastleWall_Door_L_Kit";
	requiresFire = 1;
	BSF_Donor = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{1, "BSF_CastleWall_Door_L_Kit"}
	};
	components[] =
	{
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF CastleWall";
};

class Craft_BSF_CastleWall_Door_R: Exile_AbstractCraftingRecipe
{
	name = "BSF CW Door, Right ";
	pictureItem = "BSF_CastleWall_Door_R_Kit";
	requiresFire = 1;
	BSF_Donor = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{1, "BSF_CastleWall_Door_R_Kit"}
	};
	components[] =
	{
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF CastleWall";
};

class Craft_BSF_CastleWall_Door_Round: Exile_AbstractCraftingRecipe
{
	name = "BSF CW Door, Round ";
	pictureItem = "BSF_CastleWall_Door_Round_Kit";
	requiresFire = 1;
	BSF_Donor = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{1, "BSF_CastleWall_Door_Round_Kit"}
	};
	components[] =
	{
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF CastleWall";
};

class Craft_BSF_CastleWall_Door_Tri: Exile_AbstractCraftingRecipe
{
	name = "BSF CW Door, Angled ";
	pictureItem = "BSF_CastleWall_Door_Tri_Kit";
	requiresFire = 1;
	BSF_Donor = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{1, "BSF_CastleWall_Door_Tri_Kit"}
	};
	components[] =
	{
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF CastleWall";
};


//////////////////////
/////	Windows
//////////////////////

class Craft_BSF_CastleWall_WindowOpening_C: Exile_AbstractCraftingRecipe
{
	name = "BSF CW Window Opening, Center ";
	pictureItem = "BSF_CastleWall_WindowOpening_C_Kit";
	requiresFire = 1;
	BSF_Donor = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{1, "BSF_CastleWall_WindowOpening_C_Kit"}
	};
	components[] =
	{
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF CastleWall";
};

class Craft_BSF_CastleWall_WindowOpening_L: Exile_AbstractCraftingRecipe
{
	name = "BSF CW Window Opening, Left ";
	pictureItem = "BSF_CastleWall_WindowOpening_L_Kit";
	requiresFire = 1;
	BSF_Donor = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{1, "BSF_CastleWall_WindowOpening_L_Kit"}
	};
	components[] =
	{
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF CastleWall";
};

class Craft_BSF_CastleWall_WindowOpening_R: Exile_AbstractCraftingRecipe
{
	name = "BSF CW Window Opening, Right ";
	pictureItem = "BSF_CastleWall_WindowOpening_R_Kit";
	requiresFire = 1;
	BSF_Donor = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{1, "BSF_CastleWall_WindowOpening_R_Kit"}
	};
	components[] =
	{
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF CastleWall";
};

class Craft_BSF_CastleWall_WindowOpening_Round: Exile_AbstractCraftingRecipe
{
	name = "BSF CW Window, Angled ";
	pictureItem = "BSF_CastleWall_WindowOpening_Round_Kit";
	requiresFire = 1;
	BSF_Donor = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{1, "BSF_CastleWall_WindowOpening_Round_Kit"}
	};
	components[] =
	{
		{6, "Exile_Item_MetalBoard"},
		{6, "Exile_Item_MetalScrews"},
		{5, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF CastleWall";
};

class Craft_BSF_CastleWall_WindowOpening_Tri: Exile_AbstractCraftingRecipe
{
	name = "BSF CW Window Opening, Angled ";
	pictureItem = "BSF_CastleWall_WindowOpening_Tri_Kit";
	requiresFire = 1;
	BSF_Donor = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{1, "BSF_CastleWall_WindowOpening_Tri_Kit"}
	};
	components[] =
	{
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF CastleWall";
};


class Craft_BSF_CastleWall_Window_C: Exile_AbstractCraftingRecipe
{
	name = "BSF CW Window, Center ";
	pictureItem = "BSF_CastleWall_Window_C_Kit";
	requiresFire = 1;
	BSF_Donor = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{1, "BSF_CastleWall_Window_C_Kit"}
	};
	components[] =
	{
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF CastleWall";
};

class Craft_BSF_CastleWall_Window_L: Exile_AbstractCraftingRecipe
{
	name = "BSF CW Window, Left";
	pictureItem = "BSF_CastleWall_Window_L_Kit";
	requiresFire = 1;
	BSF_Donor = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{1, "BSF_CastleWall_Window_L_Kit"}
	};
	components[] =
	{
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF CastleWall";
};

class Craft_BSF_CastleWall_Window_R: Exile_AbstractCraftingRecipe
{
	name = "BSF CW Window, Right";
	pictureItem = "BSF_CastleWall_Window_R_Kit";
	requiresFire = 1;
	BSF_Donor = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{1, "BSF_CastleWall_Window_R_Kit"}
	};
	components[] =
	{
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF CastleWall";
};

class Craft_BSF_CastleWall_Window_Round: Exile_AbstractCraftingRecipe
{
	name = "BSF CW Window, Angled ";
	pictureItem = "BSF_CastleWall_Window_Round_Kit";
	requiresFire = 1;
	BSF_Donor = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{1, "BSF_CastleWall_Window_Round_Kit"}
	};
	components[] =
	{
		{6, "Exile_Item_MetalBoard"},
		{7, "Exile_Item_MetalScrews"},
		{5, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF CastleWall";
};

class Craft_BSF_CastleWall_Window_Tri: Exile_AbstractCraftingRecipe
{
	name = "BSF CW Window, Angled ";
	pictureItem = "BSF_CastleWall_Window_Tri_Kit";
	requiresFire = 1;
	BSF_Donor = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{1, "BSF_CastleWall_Window_Tri_Kit"}
	};
	components[] =
	{
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF CastleWall";
};


//////////////////////
/////	Floors
//////////////////////

class Craft_BSF_CastleWall_Floor: Exile_AbstractCraftingRecipe
{
	name = "BSF CW Floor";
	pictureItem = "BSF_CastleWall_Floor_Kit";
	requiresFire = 1;
	BSF_Donor = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{1, "BSF_CastleWall_Floor_Kit"}
	};
	components[] =
	{
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF CastleWall";
};

class Craft_BSF_CastleWall_Floor_Half: Exile_AbstractCraftingRecipe
{
	name = "BSF CW Floor, Half";
	pictureItem = "BSF_CastleWall_Floor_Half_Kit";
	requiresFire = 1;
	BSF_Donor = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{1, "BSF_CastleWall_Floor_Half_Kit"}
	};
	components[] =
	{
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF CastleWall";
};

class Craft_BSF_CastleWall_Floor_Quarter: Exile_AbstractCraftingRecipe
{
	name = "BSF CW Floor, Quarter";
	pictureItem = "BSF_CastleWall_Floor_Quarter_Kit";
	requiresFire = 1;
	BSF_Donor = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{1, "BSF_CastleWall_Floor_Quarter_Kit"}
	};
	components[] =
	{
		{2, "Exile_Item_WoodPlank"},
		{1, "Exile_Item_MetalBoard"},
		{1, "Exile_Item_MetalScrews"},
		{1, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF CastleWall";
};

class Craft_BSF_CastleWall_Floor_Round: Exile_AbstractCraftingRecipe
{
	name = "BSF CW Floor, Round";
	pictureItem = "BSF_CastleWall_Floor_Round_Kit";
	requiresFire = 1;
	BSF_Donor = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{1, "BSF_CastleWall_Floor_Round_Kit"}
	};
	components[] =
	{
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF CastleWall";
};

class Craft_BSF_CastleWall_Floor_Tri: Exile_AbstractCraftingRecipe
{
	name = "BSF CW Floor, Angled";
	pictureItem = "BSF_CastleWall_Floor_Tri_Kit";
	requiresFire = 1;
	BSF_Donor = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{1, "BSF_CastleWall_Floor_Tri_Kit"}
	};
	components[] =
	{
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF CastleWall";
};

class Craft_BSF_CastleWall_Floorport: Exile_AbstractCraftingRecipe
{
	name = "BSF CW Floor Port";
	pictureItem = "BSF_CastleWall_Floorport_Kit";
	requiresFire = 1;
	BSF_Donor = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{1, "BSF_CastleWall_Floorport_Kit"}
	};
	components[] =
	{
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF CastleWall";
};

class Craft_BSF_CastleWall_Floorport_Door: Exile_AbstractCraftingRecipe
{
	name = "BSF CW Floor Port, Door";
	pictureItem = "BSF_CastleWall_Floorport_Door_Kit";
	requiresFire = 1;
	BSF_Donor = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{1, "BSF_CastleWall_Floorport_Door_Kit"}
	};
	components[] =
	{
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF CastleWall";
};

class Craft_BSF_CastleWall_Stairport: Exile_AbstractCraftingRecipe
{
	name = "BSF CW Stair Port";
	pictureItem = "BSF_CastleWall_Stairport_Kit";
	requiresFire = 1;
	BSF_Donor = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{1, "BSF_CastleWall_Stairport_Kit"}
	};
	components[] =
	{
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF CastleWall";
};

class Craft_BSF_CastleWall_Floor_Hatchport: Exile_AbstractCraftingRecipe
{
	name = "BSF CW Hatch Port";
	pictureItem = "BSF_CastleWall_Floor_Hatchport_Kit";
	requiresFire = 1;
	BSF_Donor = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{1, "BSF_CastleWall_Floor_Hatchport_Kit"}
	};
	components[] =
	{
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF CastleWall";
};

class Craft_BSF_CastleWall_Floor_Hatch: Exile_AbstractCraftingRecipe
{
	name = "BSF CW Hatch";
	pictureItem = "BSF_CastleWall_Floor_Hatch_Kit";
	requiresFire = 1;
	BSF_Donor = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{1, "BSF_CastleWall_Floor_Hatch_Kit"}
	};
	components[] =
	{
		{2, "Exile_Item_WoodPlank"},
		{3, "Exile_Item_MetalBoard"},
		{3, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF CastleWall";
};


//////////////////////
/////	Roofs
//////////////////////


class Craft_BSF_CastleWall_Roof: Exile_AbstractCraftingRecipe
{
	name = "BSF CW Roof";
	pictureItem = "BSF_CastleWall_Roof_Kit";
	requiresFire = 1;
	BSF_Donor = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{1, "BSF_CastleWall_Roof_Kit"}
	};
	components[] =
	{
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF CastleWall";
};

class Craft_BSF_CastleWall_Roof_Corner: Exile_AbstractCraftingRecipe
{
	name = "BSF CW Roof, Open Corner";
	pictureItem = "BSF_CastleWall_Roof_Corner_Kit";
	requiresFire = 1;
	BSF_Donor = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{1, "BSF_CastleWall_Roof_Corner_Kit"}
	};
	components[] =
	{
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF CastleWall";
};

class Craft_BSF_CastleWall_Roof_Corner_Full: Exile_AbstractCraftingRecipe
{
	name = "BSF CW Roof, Full Corner";
	pictureItem = "BSF_CastleWall_Roof_Corner_Full_Kit";
	requiresFire = 1;
	BSF_Donor = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{1, "BSF_CastleWall_Roof_Corner_Full_Kit"}
	};
	components[] =
	{
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF CastleWall";
};


class Craft_BSF_CastleWall_Roof_Square: Exile_AbstractCraftingRecipe
{
	name = "BSF CW Roof, Square";
	pictureItem = "BSF_CastleWall_Roof_Square_Kit";
	requiresFire = 1;
	BSF_Donor = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{1, "BSF_CastleWall_Roof_Square_Kit"}
	};
	components[] =
	{
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF CastleWall";
};

class Craft_BSF_CastleWall_Roof_Round: Exile_AbstractCraftingRecipe
{
	name = "BSF CW Roof, Round";
	pictureItem = "BSF_CastleWall_Roof_Round_Kit";
	requiresFire = 1;
	BSF_Donor = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{1, "BSF_CastleWall_Roof_Round_Kit"}
	};
	components[] =
	{
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF CastleWall";
};

class Craft_BSF_CastleWall_Roof_Tri: Exile_AbstractCraftingRecipe
{
	name = "BSF CW Roof, Angled";
	pictureItem = "BSF_CastleWall_Roof_Tri_Kit";
	requiresFire = 1;
	BSF_Donor = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{1, "BSF_CastleWall_Roof_Tri_Kit"}
	};
	components[] =
	{
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF CastleWall";
};

class Craft_BSF_CastleWall_Roof_Third: Exile_AbstractCraftingRecipe
{
	name = "BSF CW Roof, 1/3-ish";
	pictureItem = "BSF_CastleWall_Roof_Third_Kit";
	requiresFire = 1;
	BSF_Donor = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{1, "BSF_CastleWall_Roof_Third_Kit"}
	};
	components[] =
	{
		{1, "Exile_Item_WoodPlank"},
		{1, "Exile_Item_MetalBoard"},
		{1, "Exile_Item_MetalScrews"},
		{1, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF CastleWall";
};

class Craft_BSF_CastleWall_Roof_Half: Exile_AbstractCraftingRecipe
{
	name = "BSF CW Roof, Half";
	pictureItem = "BSF_CastleWall_Roof_Half_Kit";
	requiresFire = 1;
	BSF_Donor = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{1, "BSF_CastleWall_Roof_Half_Kit"}
	};
	components[] =
	{
		{1, "Exile_Item_WoodPlank"},
		{1, "Exile_Item_MetalBoard"},
		{1, "Exile_Item_MetalScrews"},
		{1, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF CastleWall";
};

class Craft_BSF_CastleWall_Roof_Filler_L: Exile_AbstractCraftingRecipe
{
	name = "BSF CW Roof Filler, Left";
	pictureItem = "BSF_CastleWall_Roof_Filler_L_Kit";
	requiresFire = 1;
	BSF_Donor = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{1, "BSF_CastleWall_Roof_Filler_L_Kit"}
	};
	components[] =
	{
		{1, "Exile_Item_WoodPlank"},
		{1, "Exile_Item_MetalBoard"},
		{1, "Exile_Item_MetalScrews"},
		{1, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF CastleWall";
};

class Craft_BSF_CastleWall_Roof_Filler_R: Exile_AbstractCraftingRecipe
{
	name = "BSF CW Roof Filler, Right";
	pictureItem = "BSF_CastleWall_Roof_Filler_R_Kit";
	requiresFire = 1;
	BSF_Donor = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{1, "BSF_CastleWall_Roof_Filler_R_Kit"}
	};
	components[] =
	{
		{1, "Exile_Item_WoodPlank"},
		{1, "Exile_Item_MetalBoard"},
		{1, "Exile_Item_MetalScrews"},
		{1, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF CastleWall";
};

//////////////////////
/////	Stairs
//////////////////////

class Craft_BSF_CastleWall_Stairs_L_Kit: Exile_AbstractCraftingRecipe
{
	name = "BSF CW Stairs Left";
	pictureItem = "BSF_CastleWall_Stairs_L_Kit";
	requiresFire = 1;
	BSF_Donor = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 1;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_CastleWall_Stairs_L_Kit"}
	};
	components[] =
	{
		{3, "Exile_Item_Cement"},
		{3, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF CastleWall Stairs";
};

class Craft_BSF_CastleWall_Stairs_R_Kit: Exile_AbstractCraftingRecipe
{
	name = "BSF CW Stairs Right";
	pictureItem = "BSF_CastleWall_Stairs_R_Kit";
	requiresFire = 1;
	BSF_Donor = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 1;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_CastleWall_Stairs_R_Kit"}
	};
	components[] =
	{
		{3, "Exile_Item_Cement"},
		{3, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF CastleWall Stairs";
};

//////////////////////
/////	Gates
//////////////////////

class Craft_BSF_CastleWall_Gate_1L: Exile_AbstractCraftingRecipe
{
	name = "BSF CW Gate, Left";
	pictureItem = "BSF_CastleWall_Gate_1L_Kit";
	requiresFire = 1;
	BSF_Donor = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 1;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_CastleWall_Gate_1L_Kit"}
	};
	components[] =
	{
		{2, "Exile_Item_Cement"},
		{1, "BSF_Paint_Bucket_Yellow"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox","BSF_Paintbrush"};
	category = "BSF CastleWall";
};

class Craft_BSF_CastleWall_Gate_1R: Exile_AbstractCraftingRecipe
{
	name = "BSF CW Gate, Right";
	pictureItem = "BSF_CastleWall_Gate_1R_Kit";
	requiresFire = 1;
	BSF_Donor = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 1;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_CastleWall_Gate_1R_Kit"}
	};
	components[] =
	{
		{2, "Exile_Item_Cement"},
		{1, "BSF_Paint_Bucket_Yellow"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox","BSF_Paintbrush"};
	category = "BSF CastleWall";
};

//////////////////////
/////	Walls
//////////////////////

class Craft_BSF_StoneWall_Basic: Exile_AbstractCraftingRecipe
{
	name = "BSF SW";
	pictureItem = "BSF_StoneWall_Basic_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 1;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_StoneWall_Basic_Kit"}
	};
	components[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF StoneWall";
};

class Craft_BSF_StoneWall_Low: Exile_AbstractCraftingRecipe
{
	name = "BSF SW, Low";
	pictureItem = "BSF_StoneWall_Low_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 1;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_StoneWall_Low_Kit"}
	};
	components[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF StoneWall";
};

class Craft_BSF_StoneWall_Round: Exile_AbstractCraftingRecipe
{
	name = "BSF SW, Round";
	pictureItem = "BSF_StoneWall_Round_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_StoneWall_Round_Kit"}
	};
	components[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{6, "Exile_Item_WoodPlank"},
		{6, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF StoneWall";
};

class Craft_BSF_StoneWall_Round_Low: Exile_AbstractCraftingRecipe
{
	name = "BSF SW, Low Round Wall";
	pictureItem = "BSF_StoneWall_Round_Low_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_StoneWall_Round_Low_Kit"}
	};
	components[] =
	{
		{1, "Exile_Item_Cement"},
		{1, "Exile_Item_Sand"},
		{5, "Exile_Item_WoodPlank"},
		{5, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF StoneWall";
};

class Craft_BSF_StoneWall_Tri: Exile_AbstractCraftingRecipe
{
	name = "BSF SW, Angled ";
	pictureItem = "BSF_StoneWall_Tri_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 1;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_StoneWall_Tri_Kit"}
	};
	components[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF StoneWall";
};

class Craft_BSF_StoneWall_Tri_Low: Exile_AbstractCraftingRecipe
{
	name = "BSF SW, Low, Angled ";
	pictureItem = "BSF_StoneWall_Tri_Low_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 1;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_StoneWall_Tri_Low_Kit"}
	};
	components[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF StoneWall";
};

class Craft_BSF_StoneWall_Half: Exile_AbstractCraftingRecipe
{
	name = "BSF SW Half Wall";
	pictureItem = "BSF_StoneWall_Half_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{1, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_StoneWall_Half_Kit"}
	};
	components[] =
	{
		{1, "Exile_Item_Cement"},
		{1, "Exile_Item_Sand"},
		{3, "Exile_Item_WoodPlank"},
		{3, "Exile_Item_MetalScrews"},
		{1, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF StoneWall";
};

class Craft_BSF_StoneWall_Third: Exile_AbstractCraftingRecipe
{
	name = "BSF SW 1/3 Wall";
	pictureItem = "BSF_StoneWall_Third_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{1, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_StoneWall_Third_Kit"}
	};
	components[] =
	{
		{1, "Exile_Item_Cement"},
		{1, "Exile_Item_Sand"},
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"},
		{1, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF StoneWall";
};

//////////////////////
/////	Doors
//////////////////////

class Craft_BSF_StoneWall_DoorOpening_C: Exile_AbstractCraftingRecipe
{
	name = "BSF SW Door Opening, Center ";
	pictureItem = "BSF_StoneWall_DoorOpening_C_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 1;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_StoneWall_DoorOpening_C_Kit"}
	};
	components[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF StoneWall";
};

class Craft_BSF_StoneWall_DoorOpening_L: Exile_AbstractCraftingRecipe
{
	name = "BSF SW Door Opening, Left ";
	pictureItem = "BSF_StoneWall_DoorOpening_L_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 1;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_StoneWall_DoorOpening_L_Kit"}
	};
	components[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF StoneWall";
};

class Craft_BSF_StoneWall_DoorOpening_R: Exile_AbstractCraftingRecipe
{
	name = "BSF SW Door Opening, Right ";
	pictureItem = "BSF_StoneWall_DoorOpening_R_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 1;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_StoneWall_DoorOpening_R_Kit"}
	};
	components[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF StoneWall";
};

class Craft_BSF_StoneWall_DoorOpening_Round: Exile_AbstractCraftingRecipe
{
	name = "BSF SW Door Opening, Round ";
	pictureItem = "BSF_StoneWall_DoorOpening_Round_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 1;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_StoneWall_DoorOpening_Round_Kit"}
	};
	components[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF StoneWall";
};

class Craft_BSF_StoneWall_DoorOpening_Tri: Exile_AbstractCraftingRecipe
{
	name = "BSF SW Door Opening, Angled ";
	pictureItem = "BSF_StoneWall_DoorOpening_Tri_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 1;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_StoneWall_DoorOpening_Tri_Kit"}
	};
	components[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF StoneWall";
};

class Craft_BSF_StoneWall_Door_C: Exile_AbstractCraftingRecipe
{
	name = "BSF SW Door, Center ";
	pictureItem = "BSF_StoneWall_Door_C_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 1;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_StoneWall_Door_C_Kit"}
	};
	components[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF StoneWall";
};

class Craft_BSF_StoneWall_Door_L: Exile_AbstractCraftingRecipe
{
	name = "BSF SW Door, Left ";
	pictureItem = "BSF_StoneWall_Door_L_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 1;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_StoneWall_Door_L_Kit"}
	};
	components[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF StoneWall";
};

class Craft_BSF_StoneWall_Door_R: Exile_AbstractCraftingRecipe
{
	name = "BSF SW Door, Right ";
	pictureItem = "BSF_StoneWall_Door_R_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 1;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_StoneWall_Door_R_Kit"}
	};
	components[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF StoneWall";
};

class Craft_BSF_StoneWall_Door_Round: Exile_AbstractCraftingRecipe
{
	name = "BSF SW Door, Round ";
	pictureItem = "BSF_StoneWall_Door_Round_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 1;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_StoneWall_Door_Round_Kit"}
	};
	components[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF StoneWall";
};

class Craft_BSF_StoneWall_Door_Tri: Exile_AbstractCraftingRecipe
{
	name = "BSF SW Door, Angled ";
	pictureItem = "BSF_StoneWall_Door_Tri_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 1;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_StoneWall_Door_Tri_Kit"}
	};
	components[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF StoneWall";
};

//////////////////////
/////	Windows
//////////////////////

class Craft_BSF_StoneWall_WindowOpening_C: Exile_AbstractCraftingRecipe
{
	name = "BSF SW Window Opening, Center ";
	pictureItem = "BSF_StoneWall_WindowOpening_C_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 1;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_StoneWall_WindowOpening_C_Kit"}
	};
	components[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF StoneWall";
};

class Craft_BSF_StoneWall_WindowOpening_L: Exile_AbstractCraftingRecipe
{
	name = "BSF SW Window Opening, Left ";
	pictureItem = "BSF_StoneWall_WindowOpening_L_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 1;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_StoneWall_WindowOpening_L_Kit"}
	};
	components[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF StoneWall";
};

class Craft_BSF_StoneWall_WindowOpening_R: Exile_AbstractCraftingRecipe
{
	name = "BSF SW Window Opening, Right ";
	pictureItem = "BSF_StoneWall_WindowOpening_R_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 1;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_StoneWall_WindowOpening_R_Kit"}
	};
	components[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF StoneWall";
};

class Craft_BSF_StoneWall_WindowOpening_Round: Exile_AbstractCraftingRecipe
{
	name = "BSF SW Window, Angled ";
	pictureItem = "BSF_StoneWall_WindowOpening_Round_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_StoneWall_WindowOpening_Round_Kit"}
	};
	components[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{6, "Exile_Item_WoodPlank"},
		{6, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF StoneWall";
};

class Craft_BSF_StoneWall_WindowOpening_Tri: Exile_AbstractCraftingRecipe
{
	name = "BSF SW Window Opening, Angled ";
	pictureItem = "BSF_StoneWall_WindowOpening_Tri_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 1;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_StoneWall_WindowOpening_Tri_Kit"}
	};
	components[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF StoneWall";
};

class Craft_BSF_StoneWall_Window_C: Exile_AbstractCraftingRecipe
{
	name = "BSF SW Window, Center ";
	pictureItem = "BSF_StoneWall_Window_C_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 1;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_StoneWall_Window_C_Kit"}
	};
	components[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF StoneWall";
};

class Craft_BSF_StoneWall_Window_L: Exile_AbstractCraftingRecipe
{
	name = "BSF SW Window, Left";
	pictureItem = "BSF_StoneWall_Window_L_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 1;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_StoneWall_Window_L_Kit"}
	};
	components[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF StoneWall";
};

class Craft_BSF_StoneWall_Window_R: Exile_AbstractCraftingRecipe
{
	name = "BSF SW Window, Right";
	pictureItem = "BSF_StoneWall_Window_R_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 1;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_StoneWall_Window_R_Kit"}
	};
	components[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF StoneWall";
};

class Craft_BSF_StoneWall_Window_Round: Exile_AbstractCraftingRecipe
{
	name = "BSF SW Window, Angled ";
	pictureItem = "BSF_StoneWall_Window_Round_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_StoneWall_Window_Round_Kit"}
	};
	components[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{6, "Exile_Item_WoodPlank"},
		{5, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF StoneWall";
};

class Craft_BSF_StoneWall_Window_Tri: Exile_AbstractCraftingRecipe
{
	name = "BSF SW Window, Angled ";
	pictureItem = "BSF_StoneWall_Window_Tri_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 1;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_StoneWall_Window_Tri_Kit"}
	};
	components[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF StoneWall";
};


//////////////////////
/////	Floors
//////////////////////

class Craft_BSF_StoneWall_Floor: Exile_AbstractCraftingRecipe
{
	name = "BSF SW Floor";
	pictureItem = "BSF_StoneWall_Floor_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 1;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_StoneWall_Floor_Kit"}
	};
	components[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF StoneWall";
};

class Craft_BSF_StoneWall_Floor_Half: Exile_AbstractCraftingRecipe
{
	name = "BSF SW Floor, Half";
	pictureItem = "BSF_StoneWall_Floor_Half_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 1;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_StoneWall_Floor_Half_Kit"}
	};
	components[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF StoneWall";
};

class Craft_BSF_StoneWall_Floor_Quarter: Exile_AbstractCraftingRecipe
{
	name = "BSF SW Floor, Quarter";
	pictureItem = "BSF_StoneWall_Floor_Quarter_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_StoneWall_Floor_Quarter_Kit"}
	};
	components[] =
	{
		{1, "Exile_Item_Cement"},
		{1, "Exile_Item_Sand"},
		{1, "Exile_Item_WoodPlank"},
		{1, "Exile_Item_MetalScrews"},
		{1, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF StoneWall";
};

class Craft_BSF_StoneWall_Floor_Round: Exile_AbstractCraftingRecipe
{
	name = "BSF SW Floor, Round";
	pictureItem = "BSF_StoneWall_Floor_Round_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 1;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_StoneWall_Floor_Round_Kit"}
	};
	components[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF StoneWall";
};

class Craft_BSF_StoneWall_Floor_Tri: Exile_AbstractCraftingRecipe
{
	name = "BSF SW Floor, Angled";
	pictureItem = "BSF_StoneWall_Floor_Tri_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 1;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_StoneWall_Floor_Tri_Kit"}
	};
	components[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF StoneWall";
};

class Craft_BSF_StoneWall_Floorport: Exile_AbstractCraftingRecipe
{
	name = "BSF SW Floor Port";
	pictureItem = "BSF_StoneWall_Floorport_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 1;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_StoneWall_Floorport_Kit"}
	};
	components[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF StoneWall";
};

class Craft_BSF_StoneWall_Floorport_Door: Exile_AbstractCraftingRecipe
{
	name = "BSF SW Floor Port, Door";
	pictureItem = "BSF_StoneWall_Floorport_Door_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 1;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_StoneWall_Floorport_Door_Kit"}
	};
	components[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF StoneWall";
};

class Craft_BSF_StoneWall_Stairport: Exile_AbstractCraftingRecipe
{
	name = "BSF SW Stair Port";
	pictureItem = "BSF_StoneWall_Stairport_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 1;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_StoneWall_Stairport_Kit"}
	};
	components[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF StoneWall";
};

class Craft_BSF_StoneWall_Floor_Hatchport: Exile_AbstractCraftingRecipe
{
	name = "BSF SW Hatch Port";
	pictureItem = "BSF_StoneWall_Floor_Hatchport_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 1;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_StoneWall_Floor_Hatchport_Kit"}
	};
	components[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF StoneWall";
};

class Craft_BSF_StoneWall_Floor_Hatch: Exile_AbstractCraftingRecipe
{
	name = "BSF SW Hatch";
	pictureItem = "BSF_StoneWall_Floor_Hatch_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 1;
	returnedItems[] =
	{
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "BSF_StoneWall_Floor_Hatch_Kit"}
	};
	components[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{3, "Exile_Item_WoodPlank"},
		{3, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF StoneWall";
};


//////////////////////
/////	Walls
//////////////////////

class Craft_BSF_WoodWall_Basic: Exile_AbstractCraftingRecipe
{
	name = "BSF WW";
	pictureItem = "BSF_WoodWall_Basic_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{1, "BSF_WoodWall_Basic_Kit"}
	};
	components[] =
	{
		{4, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Foolbox"};
	category = "BSF WoodWall";
};

class Craft_BSF_WoodWall_Low: Exile_AbstractCraftingRecipe
{
	name = "BSF WW, Low";
	pictureItem = "BSF_WoodWall_Low_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{1, "BSF_WoodWall_Low_Kit"}
	};
	components[] =
	{
		{4, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Foolbox"};
	category = "BSF WoodWall";
};

class Craft_BSF_WoodWall_Topper: Exile_AbstractCraftingRecipe
{
	name = "BSF CW Wall Spacer";
	pictureItem = "BSF_WoodWall_Topper_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{1, "BSF_WoodWall_Topper_Kit"}
	};
	components[] =
	{
		{4, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Foolbox"};
	category = "BSF CastleWall";
};

class Craft_BSF_WoodWall_Round: Exile_AbstractCraftingRecipe
{
	name = "BSF WW, Round";
	pictureItem = "BSF_WoodWall_Round_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{1, "BSF_WoodWall_Round_Kit"}
	};
	components[] =
	{
		{6, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Foolbox"};
	category = "BSF WoodWall";
};

class Craft_BSF_WoodWall_Round_Low: Exile_AbstractCraftingRecipe
{
	name = "BSF WW, Low Round Wall";
	pictureItem = "BSF_WoodWall_Round_Low_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{1, "BSF_WoodWall_Round_Low_Kit"}
	};
	components[] =
	{
		{5, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Foolbox"};
	category = "BSF WoodWall";
};

class Craft_BSF_WoodWall_Round_Topper: Exile_AbstractCraftingRecipe
{
	name = "BSF WW Round Wall Spacer ";
	pictureItem = "BSF_WoodWall_Round_Topper_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{1, "BSF_WoodWall_Round_Topper_Kit"}
	};
	components[] =
	{
		{4, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Foolbox"};
	category = "BSF WoodWall";
};

class Craft_BSF_WoodWall_Tri: Exile_AbstractCraftingRecipe
{
	name = "BSF WW, Angled ";
	pictureItem = "BSF_WoodWall_Tri_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{1, "BSF_WoodWall_Tri_Kit"}
	};
	components[] =
	{
		{4, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Foolbox"};
	category = "BSF WoodWall";
};

class Craft_BSF_WoodWall_Tri_Low: Exile_AbstractCraftingRecipe
{
	name = "BSF WW, Low, Angled ";
	pictureItem = "BSF_WoodWall_Tri_Low_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{1, "BSF_WoodWall_Tri_Low_Kit"}
	};
	components[] =
	{
		{4, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Foolbox"};
	category = "BSF WoodWall";
};

class Craft_BSF_WoodWall_Tri_Topper: Exile_AbstractCraftingRecipe
{
	name = "BSF WW Angled Wall Spacer";
	pictureItem = "BSF_WoodWall_Tri_Topper_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{1, "BSF_WoodWall_Tri_Topper_Kit"}
	};
	components[] =
	{
		{4, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Foolbox"};
	category = "BSF WoodWall";
};

class Craft_BSF_WoodWall_Half: Exile_AbstractCraftingRecipe
{
	name = "BSF WW Half Wall";
	pictureItem = "BSF_WoodWall_Half_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{1, "BSF_WoodWall_Half_Kit"}
	};
	components[] =
	{
		{3, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Foolbox"};
	category = "BSF WoodWall";
};

class Craft_BSF_WoodWall_Third: Exile_AbstractCraftingRecipe
{
	name = "BSF WW 1/3 Wall";
	pictureItem = "BSF_WoodWall_Third_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{1, "BSF_WoodWall_Third_Kit"}
	};
	components[] =
	{
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Foolbox"};
	category = "BSF WoodWall";
};

class Craft_BSF_WoodWall_Post: Exile_AbstractCraftingRecipe
{
	name = "BSF CW Post";
	pictureItem = "BSF_WoodWall_Post_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{1, "BSF_WoodWall_Post_Kit"}
	};
	components[] =
	{
		{4, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Foolbox"};
	category = "BSF CastleWall";
};


//////////////////////
/////	Doors
//////////////////////

class Craft_BSF_WoodWall_DoorOpening_C: Exile_AbstractCraftingRecipe
{
	name = "BSF WW Door Opening, Center ";
	pictureItem = "BSF_WoodWall_DoorOpening_C_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{1, "BSF_WoodWall_DoorOpening_C_Kit"}
	};
	components[] =
	{
		{4, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Foolbox"};
	category = "BSF WoodWall";
};

class Craft_BSF_WoodWall_DoorOpening_L: Exile_AbstractCraftingRecipe
{
	name = "BSF WW Door Opening, Left ";
	pictureItem = "BSF_WoodWall_DoorOpening_L_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{1, "BSF_WoodWall_DoorOpening_L_Kit"}
	};
	components[] =
	{
		{4, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Foolbox"};
	category = "BSF WoodWall";
};

class Craft_BSF_WoodWall_DoorOpening_R: Exile_AbstractCraftingRecipe
{
	name = "BSF WW Door Opening, Right ";
	pictureItem = "BSF_WoodWall_DoorOpening_R_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{1, "BSF_WoodWall_DoorOpening_R_Kit"}
	};
	components[] =
	{
		{4, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Foolbox"};
	category = "BSF WoodWall";
};

class Craft_BSF_WoodWall_DoorOpening_Round: Exile_AbstractCraftingRecipe
{
	name = "BSF WW Door Opening, Round ";
	pictureItem = "BSF_WoodWall_DoorOpening_Round_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{1, "BSF_WoodWall_DoorOpening_Round_Kit"}
	};
	components[] =
	{
		{4, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Foolbox"};
	category = "BSF WoodWall";
};

class Craft_BSF_WoodWall_DoorOpening_Tri: Exile_AbstractCraftingRecipe
{
	name = "BSF WW Door Opening, Angled ";
	pictureItem = "BSF_WoodWall_DoorOpening_Tri_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{1, "BSF_WoodWall_DoorOpening_Tri_Kit"}
	};
	components[] =
	{
		{4, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Foolbox"};
	category = "BSF WoodWall";
};

class Craft_BSF_WoodWall_Door_C: Exile_AbstractCraftingRecipe
{
	name = "BSF WW Door, Center ";
	pictureItem = "BSF_WoodWall_Door_C_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{1, "BSF_WoodWall_Door_C_Kit"}
	};
	components[] =
	{
		{4, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Foolbox"};
	category = "BSF WoodWall";
};

class Craft_BSF_WoodWall_Door_L: Exile_AbstractCraftingRecipe
{
	name = "BSF WW Door, Left ";
	pictureItem = "BSF_WoodWall_Door_L_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{1, "BSF_WoodWall_Door_L_Kit"}
	};
	components[] =
	{
		{4, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Foolbox"};
	category = "BSF WoodWall";
};

class Craft_BSF_WoodWall_Door_R: Exile_AbstractCraftingRecipe
{
	name = "BSF WW Door, Right ";
	pictureItem = "BSF_WoodWall_Door_R_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{1, "BSF_WoodWall_Door_R_Kit"}
	};
	components[] =
	{
		{4, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Foolbox"};
	category = "BSF WoodWall";
};

class Craft_BSF_WoodWall_Door_Round: Exile_AbstractCraftingRecipe
{
	name = "BSF WW Door, Round ";
	pictureItem = "BSF_WoodWall_Door_Round_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{1, "BSF_WoodWall_Door_Round_Kit"}
	};
	components[] =
	{
		{4, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Foolbox"};
	category = "BSF WoodWall";
};

class Craft_BSF_WoodWall_Door_Tri: Exile_AbstractCraftingRecipe
{
	name = "BSF WW Door, Angled ";
	pictureItem = "BSF_WoodWall_Door_Tri_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{1, "BSF_WoodWall_Door_Tri_Kit"}
	};
	components[] =
	{
		{4, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Foolbox"};
	category = "BSF WoodWall";
};

//////////////////////
/////	Windows
//////////////////////

class Craft_BSF_WoodWall_WindowOpening_C: Exile_AbstractCraftingRecipe
{
	name = "BSF WW Window Opening, Center ";
	pictureItem = "BSF_WoodWall_WindowOpening_C_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{1, "BSF_WoodWall_WindowOpening_C_Kit"}
	};
	components[] =
	{
		{4, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Foolbox"};
	category = "BSF WoodWall";
};

class Craft_BSF_WoodWall_WindowOpening_L: Exile_AbstractCraftingRecipe
{
	name = "BSF WW Window Opening, Left ";
	pictureItem = "BSF_WoodWall_WindowOpening_L_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{1, "BSF_WoodWall_WindowOpening_L_Kit"}
	};
	components[] =
	{
		{4, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Foolbox"};
	category = "BSF WoodWall";
};

class Craft_BSF_WoodWall_WindowOpening_R: Exile_AbstractCraftingRecipe
{
	name = "BSF WW Window Opening, Right ";
	pictureItem = "BSF_WoodWall_WindowOpening_R_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{1, "BSF_WoodWall_WindowOpening_R_Kit"}
	};
	components[] =
	{
		{4, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Foolbox"};
	category = "BSF WoodWall";
};

class Craft_BSF_WoodWall_WindowOpening_Round: Exile_AbstractCraftingRecipe
{
	name = "BSF WW Window, Angled ";
	pictureItem = "BSF_WoodWall_WindowOpening_Round_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{1, "BSF_WoodWall_WindowOpening_Round_Kit"}
	};
	components[] =
	{
		{6, "Exile_Item_MetalBoard"},
		{6, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Foolbox"};
	category = "BSF WoodWall";
};

class Craft_BSF_WoodWall_WindowOpening_Tri: Exile_AbstractCraftingRecipe
{
	name = "BSF WW Window Opening, Angled ";
	pictureItem = "BSF_WoodWall_WindowOpening_Tri_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{1, "BSF_WoodWall_WindowOpening_Tri_Kit"}
	};
	components[] =
	{
		{4, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Foolbox"};
	category = "BSF WoodWall";
};

class Craft_BSF_WoodWall_Window_C: Exile_AbstractCraftingRecipe
{
	name = "BSF WW Window, Center ";
	pictureItem = "BSF_WoodWall_Window_C_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{1, "BSF_WoodWall_Window_C_Kit"}
	};
	components[] =
	{
		{4, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Foolbox"};
	category = "BSF WoodWall";
};

class Craft_BSF_WoodWall_Window_L: Exile_AbstractCraftingRecipe
{
	name = "BSF WW Window, Left";
	pictureItem = "BSF_WoodWall_Window_L_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{1, "BSF_WoodWall_Window_L_Kit"}
	};
	components[] =
	{
		{4, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Foolbox"};
	category = "BSF WoodWall";
};

class Craft_BSF_WoodWall_Window_R: Exile_AbstractCraftingRecipe
{
	name = "BSF WW Window, Right";
	pictureItem = "BSF_WoodWall_Window_R_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{1, "BSF_WoodWall_Window_R_Kit"}
	};
	components[] =
	{
		{4, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Foolbox"};
	category = "BSF WoodWall";
};

class Craft_BSF_WoodWall_Window_Round: Exile_AbstractCraftingRecipe
{
	name = "BSF WW Window, Angled ";
	pictureItem = "BSF_WoodWall_Window_Round_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{1, "BSF_WoodWall_Window_Round_Kit"}
	};
	components[] =
	{
		{6, "Exile_Item_MetalBoard"},
		{7, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Foolbox"};
	category = "BSF WoodWall";
};

class Craft_BSF_WoodWall_Window_Tri: Exile_AbstractCraftingRecipe
{
	name = "BSF WW Window, Angled ";
	pictureItem = "BSF_WoodWall_Window_Tri_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{1, "BSF_WoodWall_Window_Tri_Kit"}
	};
	components[] =
	{
		{4, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Foolbox"};
	category = "BSF WoodWall";
};

//////////////////////
/////	Floors
//////////////////////

class Craft_BSF_WoodWall_Floor: Exile_AbstractCraftingRecipe
{
	name = "BSF WW Floor";
	pictureItem = "BSF_WoodWall_Floor_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{1, "BSF_WoodWall_Floor_Kit"}
	};
	components[] =
	{
		{4, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Foolbox"};
	category = "BSF WoodWall";
};

class Craft_BSF_WoodWall_Floor_Half: Exile_AbstractCraftingRecipe
{
	name = "BSF WW Floor, Half";
	pictureItem = "BSF_WoodWall_Floor_Half_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{1, "BSF_WoodWall_Floor_Half_Kit"}
	};
	components[] =
	{
		{4, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Foolbox"};
	category = "BSF WoodWall";
};

class Craft_BSF_WoodWall_Floor_Quarter: Exile_AbstractCraftingRecipe
{
	name = "BSF WW Floor, Quarter";
	pictureItem = "BSF_WoodWall_Floor_Quarter_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{1, "BSF_WoodWall_Floor_Quarter_Kit"}
	};
	components[] =
	{
		{2, "Exile_Item_WoodPlank"},
		{1, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Foolbox"};
	category = "BSF WoodWall";
};

class Craft_BSF_WoodWall_Floor_Round: Exile_AbstractCraftingRecipe
{
	name = "BSF WW Floor, Round";
	pictureItem = "BSF_WoodWall_Floor_Round_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{1, "BSF_WoodWall_Floor_Round_Kit"}
	};
	components[] =
	{
		{4, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Foolbox"};
	category = "BSF WoodWall";
};

class Craft_BSF_WoodWall_Floor_Tri: Exile_AbstractCraftingRecipe
{
	name = "BSF WW Floor, Angled";
	pictureItem = "BSF_WoodWall_Floor_Tri_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{1, "BSF_WoodWall_Floor_Tri_Kit"}
	};
	components[] =
	{
		{4, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Foolbox"};
	category = "BSF WoodWall";
};

class Craft_BSF_WoodWall_Floorport: Exile_AbstractCraftingRecipe
{
	name = "BSF WW Floor Port";
	pictureItem = "BSF_WoodWall_Floorport_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{1, "BSF_WoodWall_Floorport_Kit"}
	};
	components[] =
	{
		{4, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Foolbox"};
	category = "BSF WoodWall";
};

class Craft_BSF_WoodWall_Floorport_Door: Exile_AbstractCraftingRecipe
{
	name = "BSF WW Floor Port, Door";
	pictureItem = "BSF_WoodWall_Floorport_Door_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{1, "BSF_WoodWall_Floorport_Door_Kit"}
	};
	components[] =
	{
		{4, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Foolbox"};
	category = "BSF WoodWall";
};

class Craft_BSF_WoodWall_Stairport: Exile_AbstractCraftingRecipe
{
	name = "BSF WW Stair Port";
	pictureItem = "BSF_WoodWall_Stairport_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{1, "BSF_WoodWall_Stairport_Kit"}
	};
	components[] =
	{
		{4, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Foolbox"};
	category = "BSF WoodWall";
};

class Craft_BSF_WoodWall_Floor_Hatchport: Exile_AbstractCraftingRecipe
{
	name = "BSF WW Hatch Port";
	pictureItem = "BSF_WoodWall_Floor_Hatchport_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{1, "BSF_WoodWall_Floor_Hatchport_Kit"}
	};
	components[] =
	{
		{4, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Foolbox"};
	category = "BSF WoodWall";
};

class Craft_BSF_WoodWall_Floor_Hatch: Exile_AbstractCraftingRecipe
{
	name = "BSF WW Hatch";
	pictureItem = "BSF_WoodWall_Floor_Hatch_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{1, "BSF_WoodWall_Floor_Hatch_Kit"}
	};
	components[] =
	{
		{4, "Exile_Item_WoodPlank"},
		{3, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Foolbox"};
	category = "BSF WoodWall";
};

//////////////////////
/////	Stairs
//////////////////////

class Craft_BSF_WoodWall_StairRail_L: Exile_AbstractCraftingRecipe
{
	name = "BSF IW Stair Rail, Left";
	pictureItem = "BSF_WoodWall_StairRail_L_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
		{1, "BSF_WoodWall_StairRail_L_Kit"}
	};
	components[] =
	{
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Foolbox"};
	category = "BSF WoodWall Stairs";
};

class Craft_BSF_WoodWall_StairRail_R: Exile_AbstractCraftingRecipe
{
	name = "BSF IW Stair Rail, Right";
	pictureItem = "BSF_WoodWall_StairRail_R_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
		{1, "BSF_WoodWall_StairRail_R_Kit"}
	};
	components[] =
	{
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Foolbox"};
	category = "BSF WoodWall Stairs";
};

class Craft_BSF_WoodWall_Stairs_2_C: Exile_AbstractCraftingRecipe
{
	name = "BSF IronWall Stairs 1, Center";
	pictureItem = "BSF_WoodWall_Stairs_2_C_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
		{1, "BSF_WoodWall_Stairs_2_C_Kit"}
	};
	components[] =
	{
		{4, "Exile_Item_WoodPlank"},
		{3, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Foolbox"};
	category = "BSF WoodWall Stairs";
};

class Craft_BSF_WoodWall_Stairs_2_L: Exile_AbstractCraftingRecipe
{
	name = "BSF IronWall Stairs 1, Left";
	pictureItem = "BSF_WoodWall_Stairs_2_L_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
		{1, "BSF_WoodWall_Stairs_2_L_Kit"}
	};
	components[] =
	{
		{4, "Exile_Item_WoodPlank"},
		{4, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Foolbox"};
	category = "BSF WoodWall Stairs";
};

class Craft_BSF_WoodWall_Stairs_2_R: Exile_AbstractCraftingRecipe
{
	name = "BSF IronWall Stairs 1, Right";
	pictureItem = "BSF_WoodWall_Stairs_2_R_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
		{1, "BSF_WoodWall_Stairs_2_R_Kit"}
	};
	components[] =
	{
		{4, "Exile_Item_WoodPlank"},
		{4, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Foolbox"};
	category = "BSF WoodWall Stairs";
};

class Craft_BSF_WoodWall_Stairs_RoofTop: Exile_AbstractCraftingRecipe
{
	name = "BSF IronWall Stairs Rooftop";
	pictureItem = "BSF_WoodWall_Stairs_RoofTop_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
		{1, "BSF_WoodWall_Stairs_RoofTop_Kit"}
	};
	components[] =
	{
		{4, "Exile_Item_WoodPlank"},
		{4, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Foolbox"};
	category = "BSF WoodWall Stairs";
};

class Craft_BSF_WoodWall_Stairs_Ext_C: Exile_AbstractCraftingRecipe
{
	name = "BSF IronWall Stairs Low, Center";
	pictureItem = "BSF_WoodWall_Stairs_Ext_C_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
		{1, "BSF_WoodWall_Stairs_Ext_C_Kit"}
	};
	components[] =
	{
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Foolbox"};
	category = "BSF WoodWall Stairs";
};

class Craft_BSF_WoodWall_Stairs_Ext_L: Exile_AbstractCraftingRecipe
{
	name = "BSF IronWall Stairs Low, Left";
	pictureItem = "BSF_WoodWall_Stairs_Ext_L_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
		{1, "BSF_WoodWall_Stairs_Ext_L_Kit"}
	};
	components[] =
	{
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Foolbox"};
	category = "BSF WoodWall Stairs";
};

class Craft_BSF_WoodWall_Stairs_Ext_R: Exile_AbstractCraftingRecipe
{
	name = "BSF IronWall Stairs Low, Right";
	pictureItem = "BSF_WoodWall_Stairs_Ext_R_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
		{1, "BSF_WoodWall_Stairs_Ext_R_Kit"}
	};
	components[] =
	{
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Foolbox"};
	category = "BSF WoodWall Stairs";
};

class Craft_BSF_WoodWall_Stairs_Spiral_1_L: Exile_AbstractCraftingRecipe
{
	name = "BSF IronWall Stairs Spiral, Left";
	pictureItem = "BSF_WoodWall_Stairs_Spiral_1_L_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
		{1, "BSF_WoodWall_Stairs_Spiral_1_L_Kit"}
	};
	components[] =
	{
		{5, "Exile_Item_WoodPlank"},
		{4, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Foolbox"};
	category = "BSF WoodWall Stairs";
};

class Craft_BSF_WoodWall_Stairs_Spiral_1_R: Exile_AbstractCraftingRecipe
{
	name = "BSF IronWall Stairs Spiral, Right";
	pictureItem = "BSF_WoodWall_Stairs_Spiral_1_R_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
		{1, "BSF_WoodWall_Stairs_Spiral_1_R_Kit"}
	};
	components[] =
	{
		{5, "Exile_Item_WoodPlank"},
		{4, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Foolbox"};
	category = "BSF WoodWall Stairs";
};


//////////////////////
/////	Copper Roofs
//////////////////////


class Craft_BSF_Copper_Roof: Exile_AbstractCraftingRecipe
{
	name = "BSF Cu Roof";
	pictureItem = "BSF_Copper_Roof_Kit";
	requiresFire = 1;
	BSF_Donor = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{1, "BSF_Copper_Roof_Kit"}
	};
	components[] =
	{
		{2, "BSF_Item_Copper_Plates"},
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF Copper";
};

class Craft_BSF_Copper_Roof_Corner: Exile_AbstractCraftingRecipe
{
	name = "BSF Cu Roof, Open Corner";
	pictureItem = "BSF_Copper_Roof_Corner_Kit";
	requiresFire = 1;
	BSF_Donor = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{1, "BSF_Copper_Roof_Corner_Kit"}
	};
	components[] =
	{
		{2, "BSF_Item_Copper_Plates"},
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF Copper";
};

class Craft_BSF_Copper_Roof_Corner_Full: Exile_AbstractCraftingRecipe
{
	name = "BSF Cu Roof, Full Corner";
	pictureItem = "BSF_Copper_Roof_Corner_Full_Kit";
	requiresFire = 1;
	BSF_Donor = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{1, "BSF_Copper_Roof_Corner_Full_Kit"}
	};
	components[] =
	{
		{2, "BSF_Item_Copper_Plates"},
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF Copper";
};

class Craft_BSF_Copper_Roof_Square: Exile_AbstractCraftingRecipe
{
	name = "BSF Cu Roof, Full Corner";
	pictureItem = "BSF_Copper_Roof_Square_Kit";
	requiresFire = 1;
	BSF_Donor = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{1, "BSF_Copper_Roof_Square_Kit"}
	};
	components[] =
	{
		{2, "BSF_Item_Copper_Plates"},
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF Copper";
};


class Craft_BSF_Copper_Roof_Round: Exile_AbstractCraftingRecipe
{
	name = "BSF Cu Roof, Round";
	pictureItem = "BSF_Copper_Roof_Round_Kit";
	requiresFire = 1;
	BSF_Donor = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{1, "BSF_Copper_Roof_Round_Kit"}
	};
	components[] =
	{
		{2, "BSF_Item_Copper_Plates"},
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF Copper";
};

class Craft_BSF_Copper_Roof_Tri: Exile_AbstractCraftingRecipe
{
	name = "BSF Cu Roof, Angled";
	pictureItem = "BSF_Copper_Roof_Tri_Kit";
	requiresFire = 1;
	BSF_Donor = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{1, "BSF_Copper_Roof_Tri_Kit"}
	};
	components[] =
	{
		{2, "BSF_Item_Copper_Plates"},
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF Copper";
};

class Craft_BSF_Copper_Roof_Third: Exile_AbstractCraftingRecipe
{
	name = "BSF Cu Roof, 1/3-ish";
	pictureItem = "BSF_Copper_Roof_Third_Kit";
	requiresFire = 1;
	BSF_Donor = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{1, "BSF_Copper_Roof_Third_Kit"}
	};
	components[] =
	{
		{2, "BSF_Item_Copper_Plates"},
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF Copper";
};

class Craft_BSF_Copper_Roof_Half: Exile_AbstractCraftingRecipe
{
	name = "BSF Cu Roof, Half";
	pictureItem = "BSF_Copper_Roof_Half_Kit";
	requiresFire = 1;
	BSF_Donor = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{1, "BSF_Copper_Roof_Half_Kit"}
	};
	components[] =
	{
		{2, "BSF_Item_Copper_Plates"},
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF Copper";
};

class Craft_BSF_Copper_Roof_Filler_L: Exile_AbstractCraftingRecipe
{
	name = "BSF Cu Roof Filler, Left";
	pictureItem = "BSF_Copper_Roof_Filler_L_Kit";
	requiresFire = 1;
	BSF_Donor = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{1, "BSF_Copper_Roof_Filler_L_Kit"}
	};
	components[] =
	{
		{2, "BSF_Item_Copper_Plates"},
		{2, "Exile_Item_WoodPlank"},
		{1, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF Copper";
};

class Craft_BSF_Copper_Roof_Filler_R: Exile_AbstractCraftingRecipe
{
	name = "BSF Cu Roof Filler, Right";
	pictureItem = "BSF_Copper_Roof_Filler_R_Kit";
	requiresFire = 1;
	BSF_Donor = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{1, "BSF_Copper_Roof_Filler_R_Kit"}
	};
	components[] =
	{
		{2, "BSF_Item_Copper_Plates"},
		{2, "Exile_Item_WoodPlank"},
		{1, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF Copper";
};

