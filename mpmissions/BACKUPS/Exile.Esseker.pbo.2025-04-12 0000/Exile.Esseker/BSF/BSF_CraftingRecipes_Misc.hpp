
/*
	requiredInteractionModelGroup = "CleanWaterSource";
	requiredInteractionModelGroup = "WaterSource";
	requiredInteractionModelGroup = "FuelSource";
	requiredInteractionModelGroup = "WorkBench";
	requiredInteractionModelGroup = "Welder";

	requiresFire = 1;
	requiresConcreteMixer = 0;
	requiresWelder = 1;
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

{
Exile_Item_WoodPlank
Exile_Item_WoodLog
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

BSF_Paint_Bucket_Green
BSF_Paint_Bucket_White
BSF_Paint_Bucket_Red
BSF_Paint_Bucket_Yellow
BSF_Paint_Bucket_Black

BSF_Tarp_Blue
BSF_Tarp_White
BSF_Tarp_Yellow
BSF_Tarp_Brown
BSF_Tarp_Green
BSF_Tarp_D
BSF_Tarp_WD
};

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
class Craft_BSF_AmmoBench: Exile_AbstractCraftingRecipe
{
	name = "BSF Ammo Crafting Bench";
	pictureItem = "Land_BSF_AmmoBench_Kit";
	returnedItems[] =
	{
		{1, "Land_BSF_AmmoBench_Kit"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "Welder";
	requiresConcreteMixer = 0;
	components[] =
	{
		{6, "Exile_Item_WoodPlank"},
		{4, "Exile_Item_MetalBoard"},
		{4, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "BSF Misc";
};

class craft_junkMetal_from_cans: Exile_AbstractCraftingRecipe
{
	name = "Junk Metal";
	pictureItem = "Exile_Item_JunkMetal";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_JunkMetal"}
	};
	components[] = 
	{
		{4, "Exile_Item_Can_Empty"}
	};
	category = "Materials";
};

class Craft_BSF_Player_Sign_FreeStuff: Exile_AbstractCraftingRecipe
{
	name = "BSF Sign, Free Stuff";
	pictureItem = "BSF_Player_Sign_FreeStuff_Kit";
	requiredInteractionModelGroup = "WorkBench";
	requiresFire = 0;
	returnedItems[] =
	{
		{1, "BSF_Player_Sign_FreeStuff_Kit"}
	};
	components[] =
	{
		{6, "Exile_Item_JunkMetal"},
		{1, "Exile_Item_MetalScrews"}
	};
	category = "Crafting";
	tools[] =
	{
		"BSF_Paintbrush",
		"Exile_Item_Hammer",
		"BSF_Paint_Bucket_White",
		"BSF_Paint_Bucket_Black"
	};
};

class Craft_BSF_Player_Sign_Surplus: Exile_AbstractCraftingRecipe
{
	name = "BSF Sign, Surplus";
	pictureItem = "BSF_Player_Sign_Surplus_Kit";
	requiredInteractionModelGroup = "WorkBench";
	requiresFire = 0;
	returnedItems[] =
	{
		{1, "BSF_Player_Sign_Surplus_Kit"}
	};
	components[] =
	{
		{6, "Exile_Item_JunkMetal"},
		{1, "Exile_Item_MetalScrews"}
	};
	category = "Crafting";
	tools[] =
	{
		"BSF_Paintbrush",
		"Exile_Item_Handsaw",
		"BSF_Paint_Bucket_White",
		"BSF_Paint_Bucket_Green"
	};
};

class Craft_BSF_Player_Sign_SelfServe: Exile_AbstractCraftingRecipe
{
	name = "BSF Sign, Self Serve";
	pictureItem = "BSF_Player_Sign_SelfServe_Kit";
	requiredInteractionModelGroup = "WorkBench";
	requiresFire = 0;
	returnedItems[] =
	{
		{1, "BSF_Player_Sign_SelfServe_Kit"}
	};
	components[] =
	{
		{6, "Exile_Item_JunkMetal"},
		{1, "Exile_Item_MetalScrews"}
	};
	category = "Crafting";
	tools[] =
	{
		"BSF_Paintbrush",
		"Exile_Item_Handsaw",
		"BSF_Paint_Bucket_Red",
		"BSF_Paint_Bucket_Black"
	};
};

class Craft_BSF_BagOfSand: Exile_AbstractCraftingRecipe
{
	name = "Fill Sandbag";
	pictureItem = "Exile_Item_Sand";
	requiresOcean = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_Sand"}
	};
	components[] =
	{
		{1, "Exile_Item_BurlapSack"}
	};
	category = "Crafting";
	tools[] =
	{
		"Exile_Item_Shovel"
	};
};

//////////////////////
/////	Tents
//////////////////////

class Craft_BSF_TentOpen_AAF: Exile_AbstractCraftingRecipe
{
	name = "Field Tent - Digital";
	pictureItem = "BSF_TentOpen_AAF_Kit";
	returnedItems[] = {{1, "BSF_TentOpen_AAF_Kit"}};
	requiredInteractionModelGroup = "WorkBench";
	requiresFire = 0;
	tools[] =
	{
		"Exile_Item_Pliers",
		"BSF_Paintbrush"
	};
	components[] =
	{
		{4, "BSF_Tarp_WD"},
		{4, "Exile_Item_Rope"},
		{4, "Exile_Item_MetalPole"}
	};
	category = "BSF Tents";
};

class Craft_BSF_TentOpen_CSAT: Craft_BSF_TentOpen_AAF
{
	name = "Field Tent - Hex";
	pictureItem = "BSF_TentOpen_CSAT_Kit";
	returnedItems[] = {{1, "BSF_TentOpen_CSAT_Kit"}};
	components[] =
	{
		{4, "BSF_Tarp_D"},
		{4, "Exile_Item_Rope"},
		{4, "Exile_Item_MetalPole"}
	};
};

class Craft_BSF_TentOpen_Desert: Craft_BSF_TentOpen_AAF
{
	name = "Field Tent - Desert";
	pictureItem = "BSF_TentOpen_Desert_Kit";
	returnedItems[] = {{1, "BSF_TentOpen_Desert_Kit"}};
	components[] =
	{
		{4, "BSF_Tarp_Brown"},
		{4, "Exile_Item_Rope"},
		{4, "Exile_Item_MetalPole"}
	};
};

class Craft_BSF_TentOpen_LDF: Craft_BSF_TentOpen_AAF
{
	name = "Field Tent - Woodland";
	pictureItem = "BSF_TentOpen_LDF_Kit";
	returnedItems[] = {{1, "BSF_TentOpen_LDF_Kit"}};
	components[] =
	{
		{4, "BSF_Tarp_WD"},
		{4, "Exile_Item_Rope"},
		{4, "Exile_Item_MetalPole"}
	};
};

class Craft_BSF_TentOpen_White: Craft_BSF_TentOpen_AAF
{
	name = "Field Tent - White";
	pictureItem = "BSF_TentOpen_White_Kit";
	returnedItems[] = {{1, "BSF_TentOpen_White_Kit"}};
	components[] =
	{
		{4, "BSF_Tarp_White"},
		{4, "Exile_Item_Rope"},
		{4, "Exile_Item_MetalPole"}
	};
};

class Craft_BSF_TentOpen_IDAP: Craft_BSF_TentOpen_AAF
{
	name = "Field Tent - IDAP";
	pictureItem = "BSF_TentOpen_IDAP_Kit";
	returnedItems[] = {{1, "BSF_TentOpen_IDAP_Kit"}};
	components[] =
	{
		{4, "BSF_Tarp_White"},
		{4, "Exile_Item_Rope"},
		{4, "Exile_Item_MetalPole"}
	};
};

class Craft_BSF_TentOpen_Yellow_Kit: Craft_BSF_TentOpen_AAF
{
	name = "Field Tent - Yellow";
	pictureItem = "BSF_TentOpen_Yellow_Kit";
	returnedItems[] = {{1, "BSF_TentOpen_Yellow_Kit"}};
	components[] =
	{
		{4, "BSF_Tarp_Yellow"},
		{4, "Exile_Item_Rope"},
		{4, "Exile_Item_MetalPole"}
	};
};


class Craft_BSF_TentOuter_AAF: Exile_AbstractCraftingRecipe
{
	name = "Field Tent Outer - Digital";
	pictureItem = "BSF_TentOuter_AAF_Kit";
	returnedItems[] = {{1, "BSF_TentOuter_AAF_Kit"}};
	requiredInteractionModelGroup = "WorkBench";
	requiresFire = 0;
	tools[] =
	{
		"Exile_Item_Pliers",
		"BSF_Paintbrush"
	};
	components[] =
	{
		{2, "BSF_Tarp_WD"},
		{3, "Exile_Item_Rope"},
		{4, "Exile_Item_MetalPole"}
	};
	category = "BSF Tents";
};

class Craft_BSF_TentOuter_CSAT: Craft_BSF_TentOuter_AAF
{
	name = "Field Tent Outer - Hex";
	pictureItem = "BSF_TentOuter_CSAT_Kit";
	returnedItems[] = {{1, "BSF_TentOuter_CSAT_Kit"}};
	components[] =
	{
		{2, "BSF_Tarp_D"},
		{3, "Exile_Item_Rope"},
		{4, "Exile_Item_MetalPole"}
	};
};

class Craft_BSF_TentOuter_Desert: Craft_BSF_TentOuter_AAF
{
	name = "Field Tent Outer - Desert";
	pictureItem = "BSF_TentOuter_Desert_Kit";
	returnedItems[] = {{1, "BSF_TentOuter_Desert_Kit"}};
	components[] =
	{
		{2, "BSF_Tarp_Brown"},
		{3, "Exile_Item_Rope"},
		{4, "Exile_Item_MetalPole"}
	};
};

class Craft_BSF_TentOuter_LDF: Craft_BSF_TentOuter_AAF
{
	name = "Field Tent Outer - Woodland";
	pictureItem = "BSF_TentOuter_LDF_Kit";
	returnedItems[] = {{1, "BSF_TentOuter_LDF_Kit"}};
	components[] =
	{
		{2, "BSF_Tarp_WD"},
		{3, "Exile_Item_Rope"},
		{4, "Exile_Item_MetalPole"}
	};
};

class Craft_BSF_TentOuter_White: Craft_BSF_TentOuter_AAF
{
	name = "Field Tent Outer - White";
	pictureItem = "BSF_TentOuter_White_Kit";
	returnedItems[] = {{1, "BSF_TentOuter_White_Kit"}};
	components[] =
	{
		{2, "BSF_Tarp_White"},
		{3, "Exile_Item_Rope"},
		{4, "Exile_Item_MetalPole"}
	};
};

class Craft_BSF_TentOuter_IDAP: Craft_BSF_TentOuter_AAF
{
	name = "Field Tent Outer - IDAP";
	pictureItem = "BSF_TentOuter_IDAP_Kit";
	returnedItems[] = {{1, "BSF_TentOuter_IDAP_Kit"}};
	components[] =
	{
		{2, "BSF_Tarp_White"},
		{3, "Exile_Item_Rope"},
		{4, "Exile_Item_MetalPole"}
	};
};

class Craft_BSF_TentOuter_Yellow_Kit: Craft_BSF_TentOuter_AAF
{
	name = "Field Tent Outer - Yellow";
	pictureItem = "BSF_TentOuter_Yellow_Kit";
	returnedItems[] = {{1, "BSF_TentOuter_Yellow_Kit"}};
	components[] =
	{
		{2, "BSF_Tarp_Yellow"},
		{3, "Exile_Item_Rope"},
		{4, "Exile_Item_MetalPole"}
	};
};


class Craft_BSF_TentInner_AAF: Exile_AbstractCraftingRecipe
{
	name = "Field Tent Inner - Digital";
	pictureItem = "BSF_TentInner_AAF_Kit";
	returnedItems[] = {{1, "BSF_TentInner_AAF_Kit"}};
	requiredInteractionModelGroup = "WorkBench";
	requiresFire = 0;
	tools[] =
	{
		"Exile_Item_Pliers",
		"BSF_Paintbrush"
	};
	components[] =
	{
		{2, "BSF_Tarp1_Blue"},
		{3, "Exile_Item_Rope"},
		{4, "Exile_Item_MetalPole"}
	};
	category = "BSF Tents";
};

class Craft_BSF_TentInner_CSAT: Craft_BSF_TentInner_AAF
{
	name = "Field Tent Inner - Hex";
	pictureItem = "BSF_TentInner_CSAT_Kit";
	returnedItems[] = {{1, "BSF_TentInner_CSAT_Kit"}};
	components[] =
	{
		{2, "BSF_Tarp_D"},
		{3, "Exile_Item_Rope"},
		{4, "Exile_Item_MetalPole"}
	};
};

class Craft_BSF_TentInner_Desert: Craft_BSF_TentInner_AAF
{
	name = "Field Tent Inner - Desert";
	pictureItem = "BSF_TentInner_Desert_Kit";
	returnedItems[] = {{1, "BSF_TentInner_Desert_Kit"}};
	components[] =
	{
		{2, "BSF_Tarp_Brown"},
		{3, "Exile_Item_Rope"},
		{4, "Exile_Item_MetalPole"}
	};
};

class Craft_BSF_TentInner_White: Craft_BSF_TentInner_AAF
{
	name = "Field Tent Inner - Whie";
	pictureItem = "BSF_TentInner_White_Kit";
	returnedItems[] = {{1, "BSF_TentInner_White_Kit"}};
	components[] =
	{
		{2, "BSF_Tarp_White"},
		{3, "Exile_Item_Rope"},
		{4, "Exile_Item_MetalPole"}
	};
};

class Craft_BSF_TentInner_LDF: Craft_BSF_TentInner_AAF
{
	name = "Field Tent Inner - Woodland";
	pictureItem = "BSF_TentInner_LDF_Kit";
	returnedItems[] = {{1, "BSF_TentInner_LDF_Kit"}};
	components[] =
	{
		{2, "BSF_Tarp_WD"},
		{3, "Exile_Item_Rope"},
		{4, "Exile_Item_MetalPole"}
	};
};

class Craft_BSF_TentInner_Yellow: Craft_BSF_TentInner_AAF
{
	name = "Field Tent Inner - Yellow";
	pictureItem = "BSF_TentInner_Yellow_Kit";
	returnedItems[] = {{1, "BSF_TentInner_Yellow_Kit"}};
	components[] =
	{
		{2, "BSF_Tarp_Yellow"},
		{3, "Exile_Item_Rope"},
		{4, "Exile_Item_MetalPole"}
	};
};


class Craft_BSF_TentDecon_AAF: Exile_AbstractCraftingRecipe
{
	name = "Decontamination Tent - Digital";
	pictureItem = "BSF_TentDecon_AAF_Kit";
	returnedItems[] = {{1, "BSF_TentDecon_AAF_Kit"}};
	requiredInteractionModelGroup = "WorkBench";
	requiresFire = 0;
	tools[] =
	{
		"Exile_Item_Pliers",
		"BSF_Paintbrush"
	};
	components[] =
	{
		{2, "BSF_Tarp_WD"},
		{3, "Exile_Item_Rope"},
		{4, "Exile_Item_MetalPole"}
	};
	category = "BSF Tents";
};

class Craft_BSF_TentDecon_CSAT: Craft_BSF_TentDecon_AAF
{
	name = "Decontamination Tent - Hex";
	pictureItem = "BSF_TentInner_CSAT_Kit";
	returnedItems[] = {{1, "BSF_TentInner_CSAT_Kit"}};
	components[] =
	{
		{2, "BSF_Tarp_D"},
		{3, "Exile_Item_Rope"},
		{4, "Exile_Item_MetalPole"}
	};
};

class Craft_BSF_TentDecon_Desert: Craft_BSF_TentDecon_AAF
{
	name = "Decontamination Tent - Desert";
	pictureItem = "BSF_TentDecon_Desert_Kit";
	returnedItems[] = {{1, "BSF_TentDecon_Desert_Kit"}};
	components[] =
	{
		{2, "BSF_Tarp_Brown"},
		{3, "Exile_Item_Rope"},
		{4, "Exile_Item_MetalPole"}
	};
};

class Craft_BSF_TentDecon_LDF: Craft_BSF_TentDecon_AAF
{
	name = "Decontamination Tent - Woodland";
	pictureItem = "BSF_TentDecon_LDF_Kit";
	returnedItems[] = {{1, "BSF_TentDecon_LDF_Kit"}};
	components[] =
	{
		{2, "BSF_Tarp_WD"},
		{3, "Exile_Item_Rope"},
		{4, "Exile_Item_MetalPole"}
	};
};

class Craft_BSF_TentDecon_White: Craft_BSF_TentDecon_AAF
{
	name = "Decontamination Tent - White";
	pictureItem = "BSF_TentDecon_White_Kit";
	returnedItems[] = {{1, "BSF_TentDecon_White_Kit"}};
	components[] =
	{
		{2, "BSF_Tarp_White"},
		{3, "Exile_Item_Rope"},
		{4, "Exile_Item_MetalPole"}
	};
};

class Craft_BSF_TentDecon_IDAP: Craft_BSF_TentDecon_AAF
{
	name = "Decontamination Tent - IDAP";
	pictureItem = "BSF_TentDecon_IDAP_Kit";
	returnedItems[] = {{1, "BSF_TentDecon_IDAP_Kit"}};
	components[] =
	{
		{2, "BSF_Tarp_White"},
		{3, "Exile_Item_Rope"},
		{4, "Exile_Item_MetalPole"}
	};
};

class Craft_BSF_TentDecon_Yellow: Craft_BSF_TentDecon_AAF
{
	name = "Decontamination Tent - Yellow";
	pictureItem = "BSF_TentDecon_Yellow_Kit";
	returnedItems[] = {{1, "BSF_TentDecon_Yellow_Kit"}};
	components[] =
	{
		{2, "BSF_Tarp_Yellow"},
		{3, "Exile_Item_Rope"},
		{4, "Exile_Item_MetalPole"}
	};
};


class Craft_BSF_TentConnectOpen_AAF: Exile_AbstractCraftingRecipe
{
	name = "Connector Tent - Digital";
	pictureItem = "BSF_TentConnectOpen_AAF_Kit";
	returnedItems[] = {{1, "BSF_TentConnectOpen_AAF_Kit"}};
	requiredInteractionModelGroup = "WorkBench";
	requiresFire = 0;
	tools[] =
	{
		"Exile_Item_Pliers",
		"BSF_Paintbrush"
	};
	components[] =
	{
		{1, "BSF_Tarp_WD"},
		{2, "Exile_Item_Rope"},
		{2, "Exile_Item_MetalPole"}
	};
	category = "BSF Tents";
};

class Craft_BSF_TentConnectOpen_CSAT: Craft_BSF_TentConnectOpen_AAF
{
	name = "Connector Tent - Hex";
	pictureItem = "BSF_TentConnectOpen_CSAT_Kit";
	returnedItems[] = {{1, "BSF_TentConnectOpen_CSAT_Kit"}};
	components[] =
	{
		{1, "BSF_Tarp_D"},
		{2, "Exile_Item_Rope"},
		{2, "Exile_Item_MetalPole"}
	};
};

class Craft_BSF_TentConnectOpen_Desert: Craft_BSF_TentConnectOpen_AAF
{
	name = "Connector Tent - Desert";
	pictureItem = "BSF_TentConnectOpen_Desert_Kit";
	returnedItems[] = {{1, "BSF_TentConnectOpen_Desert_Kit"}};
	components[] =
	{
		{1, "BSF_Tarp_Brown"},
		{2, "Exile_Item_Rope"},
		{2, "Exile_Item_MetalPole"}
	};
};

class Craft_BSF_TentConnectOpen_LDF: Craft_BSF_TentConnectOpen_AAF
{
	name = "Connector Tent - Woodland";
	pictureItem = "BSF_TentConnectOpen_LDF_Kit";
	returnedItems[] = {{1, "BSF_TentConnectOpen_LDF_Kit"}};
	components[] =
	{
		{1, "BSF_Tarp_WD"},
		{2, "Exile_Item_Rope"},
		{2, "Exile_Item_MetalPole"}
	};
};

class Craft_BSF_TentConnectOpen_White: Craft_BSF_TentConnectOpen_AAF
{
	name = "Connector Tent - White";
	pictureItem = "BSF_TentConnectOpen_White_Kit";
	returnedItems[] = {{1, "BSF_TentConnectOpen_White_Kit"}};
	components[] =
	{
		{1, "BSF_Tarp_White"},
		{2, "Exile_Item_Rope"},
		{2, "Exile_Item_MetalPole"}
	};
};

class Craft_BSF_TentConnectOpen_Yellow: Craft_BSF_TentConnectOpen_AAF
{
	name = "Connector Tent - Yellow";
	pictureItem = "BSF_TentConnectOpen_Yellow_Kit";
	returnedItems[] = {{1, "BSF_TentConnectOpen_Yellow_Kit"}};
	components[] =
	{
		{1, "BSF_Tarp_Yellow"},
		{2, "Exile_Item_Rope"},
		{2, "Exile_Item_MetalPole"}
	};
};


class Craft_BSF_TentConnectClosed_AAF: Exile_AbstractCraftingRecipe
{
	name = "Connector Tent, Closed - Digital";
	pictureItem = "BSF_TentConnectClosed_AAF_Kit";
	returnedItems[] = {{1, "BSF_TentConnectClosed_AAF_Kit"}};
	requiredInteractionModelGroup = "WorkBench";
	requiresFire = 0;
	tools[] =
	{
		"Exile_Item_Pliers",
		"BSF_Paintbrush"
	};
	components[] =
	{
		{1, "BSF_Tarp_WD"},
		{2, "Exile_Item_Rope"},
		{2, "Exile_Item_MetalPole"}
	};
	category = "BSF Tents";
};

class Craft_BSF_TentConnectClosed_CSAT: Craft_BSF_TentConnectClosed_AAF
{
	name = "Connector Tent, Closed - Hex";
	pictureItem = "BSF_TentConnectClosed_CSAT_Kit";
	returnedItems[] = {{1, "BSF_TentConnectClosed_CSAT_Kit"}};
	components[] =
	{
		{1, "BSF_Tarp_D"},
		{2, "Exile_Item_Rope"},
		{2, "Exile_Item_MetalPole"}
	};
};

class Craft_BSF_TentConnectClosed_Desert: Craft_BSF_TentConnectClosed_AAF
{
	name = "Connector Tent, Closed - Desert";
	pictureItem = "BSF_TentConnectClosed_Desert_Kit";
	returnedItems[] = {{1, "BSF_TentConnectClosed_Desert_Kit"}};
	components[] =
	{
		{1, "BSF_Tarp_Brown"},
		{2, "Exile_Item_Rope"},
		{2, "Exile_Item_MetalPole"}
	};
};

class Craft_BSF_TentConnectClosed_White: Craft_BSF_TentConnectClosed_AAF
{
	name = "Connector Tent, Closed - White";
	pictureItem = "BSF_TentConnectClosed_White_Kit";
	returnedItems[] = {{1, "BSF_TentConnectClosed_White_Kit"}};
	components[] =
	{
		{1, "BSF_Tarp_White"},
		{2, "Exile_Item_Rope"},
		{2, "Exile_Item_MetalPole"}
	};
};

class Craft_BSF_TentConnectClosed_LDF: Craft_BSF_TentConnectClosed_AAF
{
	name = "Connector Tent, Closed - Woodland";
	pictureItem = "BSF_TentConnectClosed_LDF_Kit";
	returnedItems[] = {{1, "BSF_TentConnectClosed_LDF_Kit"}};
	components[] =
	{
		{1, "BSF_Tarp_WD"},
		{2, "Exile_Item_Rope"},
		{2, "Exile_Item_MetalPole"}
	};
};

class Craft_BSF_TentConnectClosed_Yellow: Craft_BSF_TentConnectClosed_AAF
{
	name = "Connector Tent, Closed - Yellow";
	pictureItem = "BSF_TentConnectClosed_Yellow_Kit";
	returnedItems[] = {{1, "BSF_TentConnectClosed_Yellow_Kit"}};
	components[] =
	{
		{1, "BSF_Tarp_Yellow"},
		{2, "Exile_Item_Rope"},
		{2, "Exile_Item_MetalPole"}
	};
};


class Craft_BSF_TentConnectCross_AAF: Exile_AbstractCraftingRecipe
{
	name = "Connector Tent, Cross - Digital";
	pictureItem = "BSF_TentConnectCross_AAF_Kit";
	returnedItems[] = {{1, "BSF_TentConnectCross_AAF_Kit"}};
	requiredInteractionModelGroup = "WorkBench";
	requiresFire = 0;
	tools[] =
	{
		"Exile_Item_Pliers",
		"BSF_Paintbrush"
	};
	components[] =
	{
		{1, "BSF_Tarp_WD"},
		{2, "Exile_Item_Rope"},
		{2, "Exile_Item_MetalPole"}
	};
	category = "BSF Tents";
};

class Craft_BSF_TentConnectCross_CSAT: Craft_BSF_TentConnectCross_AAF
{
	name = "Connector Tent, Cross - Hex";
	pictureItem = "BSF_TentConnectCross_CSAT_Kit";
	returnedItems[] = {{1, "BSF_TentConnectCross_CSAT_Kit"}};
	components[] =
	{
		{1, "BSF_Tarp_D"},
		{2, "Exile_Item_Rope"},
		{2, "Exile_Item_MetalPole"}
	};
};

class Craft_BSF_TentConnectCross_Desert: Craft_BSF_TentConnectCross_AAF
{
	name = "Connector Tent, Cross - Hex";
	pictureItem = "BSF_TentConnectCross_Desert_Kit";
	returnedItems[] = {{1, "BSF_TentConnectCross_Desert_Kit"}};
	components[] =
	{
		{1, "BSF_Tarp_Brown"},
		{2, "Exile_Item_Rope"},
		{2, "Exile_Item_MetalPole"}
	};
};

class Craft_BSF_TentConnectCross_White: Craft_BSF_TentConnectCross_AAF
{
	name = "Connector Tent, Cross - Hex";
	pictureItem = "BSF_TentConnectCross_White_Kit";
	returnedItems[] = {{1, "BSF_TentConnectCross_White_Kit"}};
	components[] =
	{
		{1, "BSF_Tarp_White"},
		{2, "Exile_Item_Rope"},
		{2, "Exile_Item_MetalPole"}
	};
};

class Craft_BSF_TentConnectCross_LDF: Craft_BSF_TentConnectCross_AAF
{
	name = "Connector Tent, Cross - Hex";
	pictureItem = "BSF_TentConnectCross_LDF_Kit";
	returnedItems[] = {{1, "BSF_TentConnectCross_LDF_Kit"}};
	components[] =
	{
		{1, "BSF_Tarp_WD"},
		{2, "Exile_Item_Rope"},
		{2, "Exile_Item_MetalPole"}
	};
};

class Craft_BSF_TentConnectCross_Yellow: Craft_BSF_TentConnectCross_AAF
{
	name = "Connector Tent, Cross - Hex";
	pictureItem = "BSF_TentConnectCross_Yellow_Kit";
	returnedItems[] = {{1, "BSF_TentConnectCross_Yellow_Kit"}};
	components[] =
	{
		{1, "BSF_Tarp_Yellow"},
		{2, "Exile_Item_Rope"},
		{2, "Exile_Item_MetalPole"}
	};
};

/* Not working yet
class Craft_BSF_TentFloorLight: Exile_AbstractCraftingRecipe
{
	name = "Field Tent Floor, Light";
	pictureItem = "BSF_TentFloor_Light_Kit";
	returnedItems[] = {{1, "BSF_TentFloor_Light_Kit"}};
	requiredInteractionModelGroup = "WorkBench";
	requiresFire = 0;
	tools[] =
	{
		"Exile_Item_Foolbox"
	};
	components[] =
	{
		{1, "BSF_Tarp1_Blue"},
		{1, "Exile_Item_Rope"}
	};
	category = "BSF Tents";
};

class Craft_BSF_TentFloorDark: Exile_AbstractCraftingRecipe
{
	name = "Field Tent Floor, Dark";
	pictureItem = "BSF_TentFloor_Dark_Kit";
	returnedItems[] = {{1, "BSF_TentFloor_Dark_Kit"}};
	requiredInteractionModelGroup = "WorkBench";
	requiresFire = 0;
	tools[] =
	{
		"Exile_Item_Foolbox"
	};
	components[] =
	{
		{1, "BSF_Tarp1_Blue"},
		{1, "Exile_Item_Rope"}
	};
	category = "BSF Tents";
};
*/

class Craft_BSF_SolarTentBlue: Exile_AbstractCraftingRecipe
{
	name = "Backpacking Tent - Blue";
	pictureItem = "BSF_SolarTentBlue_Kit";
	returnedItems[] = {{1, "BSF_SolarTentBlue_Kit"}};
	requiredInteractionModelGroup = "WorkBench";
	requiresFire = 0;
	tools[] =
	{
		"Exile_Item_Pliers",
		"BSF_Paintbrush"
	};
	components[] =
	{
		{1, "BSF_Tarp_Blue"},
		{2, "Exile_Item_Rope"},
		{1, "Exile_Item_MetalPole"}
	};
	category = "BSF Tents";
};

class Craft_BSF_SolarTentOlive: Craft_BSF_SolarTentBlue
{
	name = "Backpacking Tent - Olive";
	pictureItem = "BSF_SolarTentOlive_Kit";
	returnedItems[] = {{1, "BSF_SolarTentOlive_Kit"}};
	components[] =
	{
		{1, "BSF_Tarp_Green"},
		{2, "Exile_Item_Rope"},
		{1, "Exile_Item_MetalPole"}
	};
};

class Craft_BSF_SolarTentRed: Craft_BSF_SolarTentBlue
{
	name = "Backpacking Tent - Red";
	pictureItem = "BSF_SolarTentRed_Kit";
	returnedItems[] = {{1, "BSF_SolarTentRed_Kit"}};
	components[] =
	{
		{1, "BSF_Paint_Bucket_Red"},
		{1, "BSF_Tarp_White"},
		{2, "Exile_Item_Rope"},
		{1, "Exile_Item_MetalPole"}
	};
};

class Craft_BSF_SolarTentSand: Craft_BSF_SolarTentBlue
{
	name = "Backpacking Tent - Sand";
	pictureItem = "BSF_SolarTentSand_Kit";
	returnedItems[] = {{1, "BSF_SolarTentSand_Kit"}};
	components[] =
	{
		{1, "BSF_Tarp_Brown"},
		{2, "Exile_Item_Rope"},
		{1, "Exile_Item_MetalPole"}
	};
};


//////////////////////
/////	Cooking
//////////////////////

class Craft_BSF_CanOpener: Exile_AbstractCraftingRecipe
{
	name = "Can Opener";
	pictureItem = "Exile_Item_CanOpener";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_CanOpener"}
	};
	tools[] =
	{
		"Exile_Item_Pliers"
	};
	components[] = 
	{
		{2, "Exile_Item_JunkMetal"}
	};
	category = "Cooking";
	};

class PurifyWater_Dirty_Exile: Exile_AbstractCraftingRecipe
{
	name = "Purify Dirty Water";
	pictureItem = "Exile_Item_PlasticBottleFreshWater";
	returnedItems[] =
	{
		{1, "Exile_Item_PlasticBottleFreshWater"}
	};
	components[] =
	{
		{1, "Exile_Item_PlasticBottleDirtyWater"},
		{1, "BSF_WaterPure_Tabs"}
	};
	category = "Cooking";
};

class PurifyWater_Dirty_BSF: Exile_AbstractCraftingRecipe
{
	name = "Purify Dirty Water";
	pictureItem = "BSF_Item_Canteen_WaterFresh";
	returnedItems[] =
	{
		{1, "BSF_Item_Canteen_WaterFresh"}
	};
	components[] =
	{
		{1, "BSF_Item_Canteen_WaterDirty"},
		{1, "BSF_WaterPure_Tabs"}
	};
	category = "Cooking";
};

class Craft_BSF_CookCanteenSaltWater: Exile_AbstractCraftingRecipe
{
	name = "Purify Salt Water";
	pictureItem = "BSF_Item_Canteen_WaterFresh";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "BSF_Item_Canteen_WaterFresh"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] =
	{
		{1, "BSF_Item_Canteen_WaterSalt"}
	};
	category = "Cooking";
};
class Craft_BSF_Canteen_FillWithSaltWater: Exile_AbstractCraftingRecipe
{
	name = "Fill Salt Water";
	pictureItem = "BSF_Item_Canteen_WaterSalt";
	requiresOcean = 1;
	returnedItems[] =
	{
		{1, "BSF_Item_Canteen_WaterSalt"}
	};
	components[] =
	{
		{1, "Exile_Item_PlasticBottleEmpty"}
	};
	category = "Cooking";
};
class Craft_BSF_Canteen_FillWithFreshWater: Exile_AbstractCraftingRecipe
{
	name = "Fill Fresh Water";
	pictureItem = "BSF_Item_Canteen_WaterFresh";
	requiredInteractionModelGroup = "CleanWaterSource";
	returnedItems[] =
	{
		{1, "BSF_Item_Canteen_WaterFresh"}
	};
	components[] =
	{
		{1, "BSF_Item_Canteen_Empty"}
	};
	category = "Cooking";
};
class Craft_BSF_Canteen_FillWithDirtyWater: Exile_AbstractCraftingRecipe
{
	name = "Fill Dirty Water";
	pictureItem = "BSF_Item_Canteen_WaterDirty";
	requiredInteractionModelGroup = "WaterSource";
	returnedItems[] =
	{
		{1, "BSF_Item_Canteen_WaterDirty"}
	};
	components[] =
	{
		{1, "BSF_Item_Canteen_Empty"}
	};
	category = "Cooking";
};
class Craft_BSF_Canteen_WaterFresh: Exile_AbstractCraftingRecipe
{
	name = "Canteen, Fresh Water";
	pictureItem = "BSF_Item_Canteen_WaterFresh";
	returnedItems[] =
	{
		{1, "BSF_Item_Canteen_WaterFresh"}
	};
	components[] =
	{
		{1, "BSF_Item_Canteen_Empty"}
	};
	category = "Cooking";
};


class Craft_BSF_Canteen_OJ: Exile_AbstractCraftingRecipe
{
	name = "Canteen, Orange Juice";
	pictureItem = "BSF_Item_Canteen_OJ";
	returnedItems[] =
	{
		{1, "BSF_Item_Canteen_OJ"}
	};
	components[] =
	{
		{1, "BSF_Item_Canteen_Empty"},
		{5, "BSF_Item_Orange"}
	};
	category = "Cooking";
};

class Craft_BSF_Canteen_Coffee: Exile_AbstractCraftingRecipe
{
	name = "Canteen, Coffee";
	pictureItem = "BSF_Item_Canteen_Coffee";
	returnedItems[] =
	{
		{1, "BSF_Item_Canteen_Coffee"}
	};
	components[] =
	{
		{1, "BSF_Item_Canteen_Empty"},
		{1, "Exile_Item_InstantCoffee"}
	};
	category = "Cooking";
};

class Craft_BSF_Pumpkin: Exile_AbstractCraftingRecipe
{
	name = "Cook Pumpkin";
	pictureItem = "BSF_Item_Pumpkin_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "BSF_Item_Pumpkin_Cooked"}
	};
	components[] =
	{
		{1, "BSF_Item_Pumpkin_Raw"}
	};
	category = "Cooking";
};

//////////////////////
/////	Medical
//////////////////////

class craft_BSF_Vishpirin: Exile_AbstractCraftingRecipe
{
	name = "Vishpirin";
	pictureItem = "Exile_Item_Vishpirin";
	returnedItems[] =
	{
		{1, "Exile_Item_Vishpirin"}
	};
	tools[] =
	{
		"Exile_Item_Can_Empty"
	};
	components[] = 
	{
		{1, "Exile_Item_SeedAstics"},
		{1, "Exile_Item_PlasticBottleFreshWater"},
		{1, "Exile_Item_EnergyDrink"}
	};
	category = "Medical";
};

class Craft_BSF_InstaDoc: Exile_AbstractCraftingRecipe
{
	name = "Make InstaDoc";
	pictureItem = "Exile_Item_InstaDoc";
	returnedItems[] =
	{
		{1, "Exile_Item_InstaDoc"}
	};
	components[] =
	{
		{1, "BSF_Item_Vitamins1"},
		{1, "BSF_Item_Pain_Killlers"},
		{1, "BSF_Antibiotics"},
		{1, "Exile_Item_Vishpirin"}
	};
	category = "Medical";
};

class Craft_BSF_IV_Bag: Exile_AbstractCraftingRecipe
{
	name = "Fill IV Bag";
	pictureItem = "BSF_IV_Bag";
	returnedItems[] =
	{
		{1, "Exile_Item_PlasticBottleEmpty"},
		{1, "BSF_IV_Bag"}
	};
	components[] =
	{
		{1, "Exile_Item_PlasticBottleFreshWater"},
		{1, "Exile_Item_Vishpirin"},
		{1, "BSF_Item_IV_Bag_Used"}
	};
	category = "Medical";
};
class Craft_BSF_Bandage_Boiled: Exile_AbstractCraftingRecipe
{
	name = "Clean Bandage";
	pictureItem = "Exile_Item_Bandage";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_PlasticBottleEmpty"},
		{1, "Exile_Item_Bandage"}
	};
	components[] =
	{
		{1, "BSF_Item_Banndage_Used"},
		{1, "Exile_Item_PlasticBottleFreshWater"}
	};
	tools[] = {"Exile_Item_CookingPot"};
	category = "Medical";
};
class Craft_BSF_Bandage_Disinfected: Exile_AbstractCraftingRecipe
{
	name = "Clean Bandage";
	pictureItem = "Exile_Item_Bandage";
	requiresFire = 0;
	returnedItems[] =
	{
		{1, "BSF_Item_Disinfectant_Spray"},
		{1, "Exile_Item_Bandage"}
	};
	components[] =
	{
		{1, "BSF_Item_Banndage_Used"},
		{1, "BSF_Item_Disinfectant_Spray"}
	};
	category = "Medical";
};

//////////////////////
/////	Storage
//////////////////////

class Craft_BSF_ArmorLocker: Exile_AbstractCraftingRecipe
{
	name = "BSF Armor Locker, Blank";
	pictureItem = "BSF_ArmorLocker_Kit";
	returnedItems[] =
	{
		{1, "BSF_ArmorLocker_Kit"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "Welder";
	requiresConcreteMixer = 0;
	components[] =
	{
		{6, "Exile_Item_MetalBoard"},
		{4, "Exile_Item_MetalScrews"},
		{2, "BSF_Paint_Bucket_Green"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox","BSF_Paintbrush"};
	category = "BSF Armor Lockers";
};

class Craft_BSF_ArmorLocker_Attachments: Craft_BSF_ArmorLocker
{
	name = "BSF Armor Locker, Attachments";
	pictureItem = "BSF_ArmorLocker_Attachments_Kit";
	returnedItems[] =
	{
		{1, "BSF_ArmorLocker_Attachments_Kit"}
	};
};
class Craft_BSF_ArmorLocker_Ammo: Craft_BSF_ArmorLocker
{
	name = "BSF Armor Locker, Ammo";
	pictureItem = "BSF_ArmorLocker_Ammo_Kit";
	returnedItems[] =
	{
		{1, "BSF_ArmorLocker_Ammo_Kit"}
	};
};
class Craft_BSF_ArmorLocker_Armor: Craft_BSF_ArmorLocker
{
	name = "BSF Armor Locker, Armor";
	pictureItem = "BSF_ArmorLocker_Armor_Kit";
	returnedItems[] =
	{
		{1, "BSF_ArmorLocker_Armor_Kit"}
	};
};
class Craft_BSF_ArmorLocker_Rifles: Craft_BSF_ArmorLocker
{
	name = "BSF Armor Locker, Rifles";
	pictureItem = "BSF_ArmorLocker_Rifles_Kit";
	returnedItems[] =
	{
		{1, "BSF_ArmorLocker_Rifles_Kit"}
	};
};
class Craft_BSF_ArmorLocker_Pistols: Craft_BSF_ArmorLocker
{
	name = "BSF Armor Locker, Pistols";
	pictureItem = "BSF_ArmorLocker_Pistols_Kit";
	returnedItems[] =
	{
		{1, "BSF_ArmorLocker_Pistols_Kit"}
	};
};
class Craft_BSF_ArmorLocker_Food: Craft_BSF_ArmorLocker
{
	name = "BSF Armor Locker, Food";
	pictureItem = "BSF_ArmorLocker_Food_Kit";
	returnedItems[] =
	{
		{1, "BSF_ArmorLocker_Food_Kit"}
	};
};
class Craft_BSF_ArmorLocker_Tools: Craft_BSF_ArmorLocker
{
	name = "BSF Armor Locker, Tools";
	pictureItem = "BSF_ArmorLocker_Tools_Kit";
	returnedItems[] =
	{
		{1, "BSF_ArmorLocker_Tools_Kit"}
	};
};
class Craft_BSF_ArmorLocker_Storage: Craft_BSF_ArmorLocker
{
	name = "BSF Armor Locker, Storage";
	pictureItem = "BSF_ArmorLocker_Storage_Kit";
	returnedItems[] =
	{
		{1, "BSF_ArmorLocker_Storage_Kit"}
	};
};
class Craft_BSF_ArmorLocker_Explosives: Craft_BSF_ArmorLocker
{
	name = "BSF Armor Locker, Explosives";
	pictureItem = "BSF_ArmorLocker_Explosives_Kit";
	returnedItems[] =
	{
		{1, "BSF_ArmorLocker_Explosives_Kit"}
	};
};
class Craft_BSF_ArmorLocker_HMG: Craft_BSF_ArmorLocker
{
	name = "BSF Armor Locker, HMG";
	pictureItem = "BSF_ArmorLocker_HMG_Kit";
	returnedItems[] =
	{
		{1, "BSF_ArmorLocker_HMG_Kit"}
	};
};
class Craft_BSF_ArmorLocker_Junk: Craft_BSF_ArmorLocker
{
	name = "BSF Armor Locker, Junk";
	pictureItem = "BSF_ArmorLocker_Junk_Kit";
	returnedItems[] =
	{
		{1, "BSF_ArmorLocker_Junk_Kit"}
	};
};
class Craft_BSF_ArmorLocker_Launchers: Craft_BSF_ArmorLocker
{
	name = "BSF Armor Locker, Launchers";
	pictureItem = "BSF_ArmorLocker_Launchers_Kit";
	returnedItems[] =
	{
		{1, "BSF_ArmorLocker_Launchers_Kit"}
	};
};
class Craft_BSF_ArmorLocker_LMG: Craft_BSF_ArmorLocker
{
	name = "BSF Armor Locker, LMG";
	pictureItem = "BSF_ArmorLocker_LMG_Kit";
	returnedItems[] =
	{
		{1, "BSF_ArmorLocker_LMG_Kit"}
	};
};
class Craft_BSF_ArmorLocker_Materials: Craft_BSF_ArmorLocker
{
	name = "BSF Armor Locker, Materials";
	pictureItem = "BSF_ArmorLocker_Materials_Kit";
	returnedItems[] =
	{
		{1, "BSF_ArmorLocker_Materials_Kit"}
	};
};
class Craft_BSF_ArmorLocker_Medical: Craft_BSF_ArmorLocker
{
	name = "BSF Armor Locker, Medical";
	pictureItem = "BSF_ArmorLocker_Medical_Kit";
	returnedItems[] =
	{
		{1, "BSF_ArmorLocker_Medical_Kit"}
	};
};
class Craft_BSF_ArmorLocker_Optics: Craft_BSF_ArmorLocker
{
	name = "BSF Armor Locker, Optics";
	pictureItem = "BSF_ArmorLocker_Optics_Kit";
	returnedItems[] =
	{
		{1, "BSF_ArmorLocker_Optics_Kit"}
	};
};
class Craft_BSF_ArmorLocker_Packs: Craft_BSF_ArmorLocker
{
	name = "BSF Armor Locker, Packs";
	pictureItem = "BSF_ArmorLocker_Packs_Kit";
	returnedItems[] =
	{
		{1, "BSF_ArmorLocker_Packs_Kit"}
	};
};
class Craft_BSF_ArmorLocker_Rifles_127: Craft_BSF_ArmorLocker
{
	name = "BSF Armor Locker, Rifles_127";
	pictureItem = "BSF_ArmorLocker_Rifles_127_Kit";
	returnedItems[] =
	{
		{1, "BSF_ArmorLocker_Rifles_127_Kit"}
	};
};
class Craft_BSF_ArmorLocker_Rifles_338: Craft_BSF_ArmorLocker
{
	name = "BSF Armor Locker, Rifles_338";
	pictureItem = "BSF_ArmorLocker_Rifles_338_Kit";
	returnedItems[] =
	{
		{1, "BSF_ArmorLocker_Rifles_338_Kit"}
	};
};
class Craft_BSF_ArmorLocker_Rifles_545: Craft_BSF_ArmorLocker
{
	name = "BSF Armor Locker, Rifles_545";
	pictureItem = "BSF_ArmorLocker_Rifles_545_Kit";
	returnedItems[] =
	{
		{1, "BSF_ArmorLocker_Rifles_545_Kit"}
	};
};
class Craft_BSF_ArmorLocker_Rifles_556: Craft_BSF_ArmorLocker
{
	name = "BSF Armor Locker, Rifles_556";
	pictureItem = "BSF_ArmorLocker_Rifles_556_Kit";
	returnedItems[] =
	{
		{1, "BSF_ArmorLocker_Rifles_556_Kit"}
	};
};
class Craft_BSF_ArmorLocker_Rifles_65: Craft_BSF_ArmorLocker
{
	name = "BSF Armor Locker, Rifles_65";
	pictureItem = "BSF_ArmorLocker_Rifles_65_Kit";
	returnedItems[] =
	{
		{1, "BSF_ArmorLocker_Rifles_65_Kit"}
	};
};
class Craft_BSF_ArmorLocker_Rifles_762: Craft_BSF_ArmorLocker
{
	name = "BSF Armor Locker, Rifles_762";
	pictureItem = "BSF_ArmorLocker_Rifles_762_Kit";
	returnedItems[] =
	{
		{1, "BSF_ArmorLocker_Rifles_762_Kit"}
	};
};
class Craft_BSF_ArmorLocker_Rifles_Misc: Craft_BSF_ArmorLocker
{
	name = "BSF Armor Locker, Rifles_Misc";
	pictureItem = "BSF_ArmorLocker_Rifles_Misc_Kit";
	returnedItems[] =
	{
		{1, "BSF_ArmorLocker_Rifles_Misc_Kit"}
	};
};
class Craft_BSF_ArmorLocker_Rifles_Sniper: Craft_BSF_ArmorLocker
{
	name = "BSF Armor Locker, Rifles_Sniper";
	pictureItem = "BSF_ArmorLocker_Rifles_Sniper_Kit";
	returnedItems[] =
	{
		{1, "BSF_ArmorLocker_Rifles_Sniper_Kit"}
	};
};
class Craft_BSF_ArmorLocker_Shotguns: Craft_BSF_ArmorLocker
{
	name = "BSF Armor Locker, Shotguns";
	pictureItem = "BSF_ArmorLocker_Shotguns_Kit";
	returnedItems[] =
	{
		{1, "BSF_ArmorLocker_Shotguns_Kit"}
	};
};
class Craft_BSF_ArmorLocker_SMG: Craft_BSF_ArmorLocker
{
	name = "BSF Armor Locker, SMG";
	pictureItem = "BSF_ArmorLocker_SMG_Kit";
	returnedItems[] =
	{
		{1, "BSF_ArmorLocker_SMG_Kit"}
	};
};
class Craft_BSF_ArmorLocker_ToSell: Craft_BSF_ArmorLocker
{
	name = "BSF Armor Locker, To Sell";
	pictureItem = "BSF_ArmorLocker_ToSell_Kit";
	returnedItems[] =
	{
		{1, "BSF_ArmorLocker_ToSell_Kit"}
	};
};
class Craft_BSF_ArmorLocker_ToSort: Craft_BSF_ArmorLocker
{
	name = "BSF Armor Locker, To Sort";
	pictureItem = "BSF_ArmorLocker_ToSort_Kit";
	returnedItems[] =
	{
		{1, "BSF_ArmorLocker_ToSort_Kit"}
	};
};
class Craft_BSF_ArmorLocker_UAV: Craft_BSF_ArmorLocker
{
	name = "BSF Armor Locker, UAV";
	pictureItem = "BSF_ArmorLocker_UAV_Kit";
	returnedItems[] =
	{
		{1, "BSF_ArmorLocker_UAV_Kit"}
	};
};
class Craft_BSF_ArmorLocker_Uniforms: Craft_BSF_ArmorLocker
{
	name = "BSF Armor Locker, Uniforms";
	pictureItem = "BSF_ArmorLocker_Uniforms_Kit";
	returnedItems[] =
	{
		{1, "BSF_ArmorLocker_Uniforms_Kit"}
	};
};

class Craft_Rugged_Caninet1_Black: Exile_AbstractCraftingRecipe
{
	name = "BSF Rugged Cabinet, 4-Drawer, Black";
	pictureItem = "BSF_RuggedCabinet1_Black_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{1, "BSF_RuggedCabinet1_Black_Kit"}
	};
	components[] =
	{
		{4, "Exile_Item_MetalBoard"},
		{4, "Exile_Item_ZipTie"},
		{2, "Exile_Item_MetalWire"}
	};
	tools[] = {"Exile_Item_Foolbox"};
	category = "Storage";
};
class Craft_Rugged_Caninet1_Olive: Craft_Rugged_Caninet1_Black
{
	name = "BSF Rugged Cabinet, 4-Drawer, Olive";
	pictureItem = "BSF_RuggedCabinet1_Olive_Kit";
	returnedItems[] = {{1, "BSF_RuggedCabinet1_Olive_Kit"}};
};
class Craft_Rugged_Caninet1_Sand: Craft_Rugged_Caninet1_Black
{
	name = "BSF Rugged Cabinet, 4-Drawer, Sand";
	pictureItem = "BSF_RuggedCabinet1_Sand_Kit";
	returnedItems[] = {{1, "BSF_RuggedCabinet1_Sand_Kit"}};
};

class Craft_Rugged_Caninet2_Black: Craft_Rugged_Caninet1_Black
{
	name = "BSF Rugged Cabinet, 7-Drawer, Black";
	pictureItem = "BSF_RuggedCabinet2_Black_Kit";
	returnedItems[] = {{1, "BSF_RuggedCabinet2_Black_Kit"}};
};
class Craft_Rugged_Caninet2_Olive: Craft_Rugged_Caninet1_Black
{
	name = "BSF Rugged Cabinet, 7-Drawer, Olive";
	pictureItem = "BSF_RuggedCabinet2_Olive_Kit";
	returnedItems[] = {{1, "BSF_RuggedCabinet2_Olive_Kit"}};
};
class Craft_Rugged_Caninet2_Sand: Craft_Rugged_Caninet1_Black
{
	name = "BSF Rugged Cabinet, 7-Drawer, Sand";
	pictureItem = "BSF_RuggedCabinet2_Sand_Kit";
	returnedItems[] = {{1, "BSF_RuggedCabinet2_Sand_Kit"}};
};

class Craft_Rugged_Caninet3_Black: Craft_Rugged_Caninet1_Black
{
	name = "BSF Rugged Cabinet, Compact, Black";
	pictureItem = "BSF_RuggedCabinet3_Black_Kit";
	returnedItems[] = {{1, "BSF_RuggedCabinet3_Black_Kit"}};
};
class Craft_Rugged_Caninet3_Olive: Craft_Rugged_Caninet1_Black
{
	name = "BSF Rugged Cabinet, Compact, Olive";
	pictureItem = "BSF_RuggedCabinet3_Olive_Kit";
	returnedItems[] = {{1, "BSF_RuggedCabinet3_Olive_Kit"}};
};
class Craft_Rugged_Caninet3_Sand: Craft_Rugged_Caninet1_Black
{
	name = "BSF Rugged Cabinet, Compact, Sand";
	pictureItem = "BSF_RuggedCabinet3_Sand_Kit";
	returnedItems[] = {{1, "BSF_RuggedCabinet3_Sand_Kit"}};
};




