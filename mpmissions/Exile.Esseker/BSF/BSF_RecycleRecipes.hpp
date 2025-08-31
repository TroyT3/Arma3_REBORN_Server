// BSF_RecycleRecipes.hpp

class Recycle_BSF_Player_Sign_FreeStuff: Exile_AbstractCraftingRecipe
{
	name = "Recycle BSF Sign, Free Stuff";
	pictureItem = "BSF_Player_Sign_FreeStuff_Kit";
	requiredInteractionModelGroup = "WorkBench";
	requiresFire = 0;
	components[] =
	{
		{1, "BSF_Player_Sign_FreeStuff_Kit"}
	};
	returnedItems[] =
	{
		{6, "Exile_Item_JunkMetal"},
		{1, "Exile_Item_MetalScrews"}
	};
	category = "Recycle";
	tools[] =
	{
		"Exile_Item_Hammer"
	};
};

class Recycle_BSF_Player_Sign_Surplus: Exile_AbstractCraftingRecipe
{
	name = "Recycle BSF Sign, Surplus";
	pictureItem = "BSF_Player_Sign_Surplus_Kit";
	requiredInteractionModelGroup = "WorkBench";
	requiresFire = 0;
	components[] =
	{
		{1, "BSF_Player_Sign_Surplus_Kit"}
	};
	returnedItems[] =
	{
		{6, "Exile_Item_JunkMetal"},
		{1, "Exile_Item_MetalScrews"}
	};
	category = "Recycle";
	tools[] =
	{
		"Exile_Item_Hammer"
	};
};

class Recycle_BSF_Player_Sign_SelfServe: Exile_AbstractCraftingRecipe
{
	name = "Recycle BSF Sign, Self Serve";
	pictureItem = "BSF_Player_Sign_SelfServe_Kit";
	requiredInteractionModelGroup = "WorkBench";
	requiresFire = 0;
	components[] =
	{
		{1, "BSF_Player_Sign_SelfServe_Kit"}
	};
	returnedItems[] =
	{
		{6, "Exile_Item_JunkMetal"},
		{1, "Exile_Item_MetalScrews"}
	};
	category = "Recycle";
	tools[] =
	{
		"Exile_Item_Hammer"
	};
};


//////////////////////
/////	Buildings
//////////////////////

class Recycle_BSF_ConcreteRamp1: Exile_AbstractCraftingRecipe
{
	name = "Recycle Concrete Ramp, Long";
	pictureItem = "BSF_ConcreteRamp1_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_ConcreteRamp1_Kit"}
	};
	returnedItems[] =
	{
		{6, "Exile_Item_Sand"},
		{6, "Exile_Item_Cement"},
		{4, "Exile_Item_JunkMetal"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_GuardTowerSmall: Exile_AbstractCraftingRecipe
{
	name = "Recycle Guard Tower, Small ";
	pictureItem = "BSF_GuardTowerSmall_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "Welder";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_GuardTowerSmall_Kit"}
	};
	returnedItems[] =
	{
		{2, "Exile_Item_Cement"},
		{3, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalPole"},
		{4, "Exile_Item_MetalScrews"},
		{4, "Exile_Item_JunkMetal"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};
class Recycle_BSF_GuardTowerBig: Exile_AbstractCraftingRecipe
{
	name = "Recycle Guard Tower, Big ";
	pictureItem = "BSF_GuardTowerBig_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "Welder";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_GuardTowerBig_Kit"}
	};
	returnedItems[] =
	{
		{6, "Exile_Item_MetalBoard"},
		{6, "Exile_Item_MetalPole"},
		{4, "Exile_Item_MetalScrews"},
		{4, "Exile_Item_JunkMetal"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_CargoPlatform_Green: Exile_AbstractCraftingRecipe
{
	name = "Recycle Cargo Platform, Green";
	pictureItem = "BSF_CargoPlatform_Green_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "Welder";
	requiresConcreteMixer = 0;
	components[] = {
		{1, "BSF_CargoPlatform_Green_Kit"}
	};
	returnedItems[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{3, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalPole"},
		{4, "Exile_Item_MetalScrews"},
		{4, "Exile_Item_JunkMetal"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};
class Recycle_BSF_CargoPlatform_Brown: Craft_BSF_CargoPlatform_Green
{
	name = "Recycle Cargo Platform, Brown";
	pictureItem = "BSF_CargoPlatform_Brown_Kit";
	components[] = {
		{1, "BSF_CargoPlatform_Brown_Kit"}
	};
};
class Recycle_BSF_CargoPlatform_Jungle: Craft_BSF_CargoPlatform_Green
{
	name = "Recycle Cargo Platform, Jungle";
	pictureItem = "BSF_CargoPlatform_Jungle_Kit";
	components[] = {
		{1, "BSF_CargoPlatform_Jungle_Kit"}
	};
};
class Recycle_BSF_CargoPlatform_Rusty: Craft_BSF_CargoPlatform_Green
{
	name = "Recycle Cargo Platform, Rusty";
	pictureItem = "BSF_CargoPlatform_Rusty_Kit";
	components[] = {
		{1, "BSF_CargoPlatform_Rusty_Kit"}
	};
};

class Recycle_BSF_GuardBox: Exile_AbstractCraftingRecipe
{
	name = "Recycle Guard Box";
	pictureItem = "BSF_GuardBox_Kit";
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_GuardBox_Kit"}
	};
	returnedItems[] =
	{
		{3, "Exile_Item_Cement"},
		{3, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{1, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_DearStand1: Exile_AbstractCraftingRecipe
{
	name = "Recycle Deer Stand v1";
	pictureItem = "BSF_DearStand1_Kit";
	requiredInteractionModelGroup = "WorkBench";
	requiresFire = 0;
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_DearStand1_Kit"}
	};
	returnedItems[] =
	{
		{10, "Exile_Item_WoodLog"},
		{10, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_Rope"}
	};
	tools[] = {"Exile_Item_Handsaw","Exile_Item_Hammer"};
	category = "Recycle";
};
class Recycle_BSF_DearStand2: Craft_BSF_DearStand1
{
	name = "Recycle Deer Stand v2";
	pictureItem = "BSF_DearStand2_Kit";
	components[] = {{1, "BSF_DearStand2_Kit"}};
};

class Recycle_BSF_Radar1_Kit: Exile_AbstractCraftingRecipe
{
	name = "Recycle Radar Tower";
	pictureItem = "BSF_Radar1_Kit";
	requiresFire = 0;
	requiredInteractionModelGroup = "Welder";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_Radar1_Kit"}
	};
	returnedItems[] =
	{
		{8, "Exile_Item_Cement"},
		{8, "Exile_Item_Sand"},
		{5, "Exile_Item_MetalBoard"},
		{4, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_ModularBunker_Big: Exile_AbstractCraftingRecipe
{
	name = "Recycle Modular Bunker, Big";
	pictureItem = "BSF_ModularBunkerBig_Kit";
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_ModularBunkerBig_Kit"}
	};
	returnedItems[] =
	{
		{8, "Exile_Item_Cement"},
		{8, "Exile_Item_Sand"},
		{5, "Exile_Item_MetalBoard"},
		{4, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};
class Recycle_ModularBunker_HQ: Craft_ModularBunker_Big
{
	name = "Recycle Modular Bunker, HQ ";
	pictureItem = "BSF_ModularBunkerHQ_Kit";
	components[] =
	{
		{1, "BSF_ModularBunkerHQ_Kit"}
	};
};
class Recycle_ModularBunker_Tall: Craft_ModularBunker_Big
{
	name = "Recycle Modular Bunker, Tall ";
	pictureItem = "BSF_ModularBunkerTall_Kit";
	components[] =
	{
		{1, "BSF_ModularBunkerTall_Kit"}
	};
};
class Recycle_PillBox_Big: Craft_ModularBunker_Big
{
	name = "Recycle Pill Box, Big ";
	pictureItem = "BSF_PillBoxBig_Kit";
	components[] =
	{
		{1, "BSF_PillBoxBig_Kit"}
	};
};

class Recycle_Bunker2_Double: Exile_AbstractCraftingRecipe
{
	name = "Recycle Bunker 2, Double";
	pictureItem = "BSF_Bunker2_Double_Kit";
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_Bunker2_Double_Kit"}
	};
	returnedItems[] =
	{
		{5, "Exile_Item_Cement"},
		{5, "Exile_Item_Sand"},
		{3, "Exile_Item_MetalBoard"},
		{3, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};
class Recycle_Bunker2_DoubleMossy: Craft_Bunker2_Double
{
	name = "Recycle Bunker 2, Double, Mossy";
	pictureItem = "BSF_Bunker2_Mossy_Double_Kit";
	components[] =
	{
		{1, "BSF_Bunker2_Mossy_Double_Kit"}
	};
};

class Recycle_Bunker2_Left: Exile_AbstractCraftingRecipe
{
	name = "Recycle Bunker 2, Left";
	pictureItem = "BSF_Bunker2_Left_Kit";
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_Bunker2_Left_Kit"}
	};
	returnedItems[] =
	{
		{4, "Exile_Item_Cement"},
		{4, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};
class Recycle_Bunker2_Right: Craft_Bunker2_Left
{
	name = "Recycle Bunker 2, Right";
	pictureItem = "BSF_Bunker2_Right_Kit";
	components[] =
	{
		{1, "BSF_Bunker2_Right_Kit"}
	};
};
class Recycle_Bunker2_Left_Mossy: Craft_Bunker2_Left
{
	name = "Recycle Bunker 2, Left, Mossy";
	pictureItem = "BSF_Bunker2_Mossy_Left_Kit";
	components[] =
	{
		{1, "BSF_Bunker2_Mossy_Left_Kit"}
	};
};
class Recycle_Bunker2_Right_Mossy: Craft_Bunker2_Left
{
	name = "Recycle Bunker 2, Right, Mossy";
	pictureItem = "BSF_Bunker2_Mossy_Right_Kit";
	components[] =
	{
		{1, "BSF_Bunker2_Mossy_Right_Kit"}
	};
};
class Recycle_ModularBunker_Small: Craft_Bunker2_Left
{
	name = "Recycle Modular Bunker, Small";
	pictureItem = "BSF_ModularBunkerSmall_Kit";
	components[] =
	{
		{1, "BSF_ModularBunkerSmall_Kit"}
	};
};

class Recycle_PillBox_Rect: Exile_AbstractCraftingRecipe
{
	name = "Recycle Pill Box, Rectangular";
	pictureItem = "BSF_PillBoxRect_Kit";
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_PillBoxRect_Kit"}
	};
	returnedItems[] =
	{
		{3, "Exile_Item_Cement"},
		{3, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};
class Recycle_PillBox_Hex: Craft_PillBox_Rect
{
	name = "Recycle Pill Box, Hex";
	pictureItem = "BSF_PillBoxHex_Kit";
	components[] =
	{
		{1, "BSF_PillBoxHex_Kit"}
	};
};

class Recycle_ModularWall_3: Exile_AbstractCraftingRecipe
{
	name = "Recycle Modular Wall, 3x";
	pictureItem = "BSF_ModularBunker3Block_Kit";
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_ModularBunker3Block_Kit"}
	};
	returnedItems[] =
	{
		{2, "Exile_Item_Cement"},
		{1, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};
class Recycle_PillBoxWall_3_Blunt: Craft_ModularWall_3
{
	name = "Recycle Pill Box Wall, 3x Blunt";
	pictureItem = "BSF_PillBoxWall3_Blunt_Kit";
	components[] =
	{
		{1, "BSF_PillBoxWall3_Blunt_Kit"}
	};
};
class Recycle_PillBoxWall_3_Sharp: Craft_ModularWall_3
{
	name = "Recycle Pill Box Wall, 3x Sharp";
	pictureItem = "BSF_PillBoxWall3_Sharp_Kit";
	components[] =
	{
		{1, "BSF_PillBoxWall3_Sharp_Kit"}
	};
};

class Recycle_ModularWall_1: Exile_AbstractCraftingRecipe
{
	name = "Recycle Modular Wall, 1x";
	pictureItem = "BSF_ModularBunker1Block_Kit";
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_ModularBunker1Block_Kit"}
	};
	returnedItems[] =
	{
		{1, "Exile_Item_Cement"},
		{1, "Exile_Item_Sand"},
		{1, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};
class Recycle_PillBoxWall_1_Blunt: Craft_ModularWall_1
{
	name = "Recycle Pill Box Wall, 1x Blunt";
	pictureItem = "BSF_PillBoxWall1_Blunt_Kit";
	components[] =
	{
		{1, "BSF_PillBoxWall1_Blunt_Kit"}
	};
};
class Recycle_PillBoxWall_1_Sharp: Craft_ModularWall_1
{
	name = "Recycle Pill Box Wall, 1x Sharp";
	pictureItem = "BSF_PillBoxWall1_Sharp_Kit";
	components[] =
	{
		{1, "BSF_PillBoxWall1_Sharp_Kit"}
	};
};

//////////////////////
/////	Walls
//////////////////////

class Recycle_BSF_IronWall_Basic: Exile_AbstractCraftingRecipe
{
	name = "Recycle IW Wall";
	pictureItem = "BSF_IronWall_Basic_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_IronWall_Basic_Kit"}
	};
	returnedItems[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_IronWall_Low: Exile_AbstractCraftingRecipe
{
	name = "Recycle IW, Low";
	pictureItem = "BSF_IronWall_Low_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_IronWall_Low_Kit"}
	};
	returnedItems[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_IronWall_Topper: Exile_AbstractCraftingRecipe
{
	name = "Recycle IW Wall Spacer";
	pictureItem = "BSF_IronWall_Topper_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_IronWall_Topper_Kit"}
	};
	returnedItems[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_IronWall_Round: Exile_AbstractCraftingRecipe
{
	name = "Recycle IW, Round";
	pictureItem = "BSF_IronWall_Round_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_IronWall_Round_Kit"}
	};
	returnedItems[] =
	{
		{6, "Exile_Item_MetalBoard"},
		{6, "Exile_Item_MetalScrews"},
		{5, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_IronWall_Round_Low: Exile_AbstractCraftingRecipe
{
	name = "Recycle IW, Low Round Wall";
	pictureItem = "BSF_IronWall_Round_Low_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_IronWall_Round_Low_Kit"}
	};
	returnedItems[] =
	{
		{5, "Exile_Item_MetalBoard"},
		{5, "Exile_Item_MetalScrews"},
		{4, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_IronWall_Round_Topper: Exile_AbstractCraftingRecipe
{
	name = "Recycle IW Round Wall Spacer ";
	pictureItem = "BSF_IronWall_Round_Topper_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_IronWall_Round_Topper_Kit"}
	};
	returnedItems[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_IronWall_Tri: Exile_AbstractCraftingRecipe
{
	name = "Recycle IW, Angled ";
	pictureItem = "BSF_IronWall_Tri_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_IronWall_Tri_Kit"}
	};
	returnedItems[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_IronWall_Tri_Low: Exile_AbstractCraftingRecipe
{
	name = "Recycle IW, Low, Angled ";
	pictureItem = "BSF_IronWall_Tri_Low_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_IronWall_Tri_Low_Kit"}
	};
	returnedItems[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_IronWall_Tri_Topper: Exile_AbstractCraftingRecipe
{
	name = "Recycle IW Angled Wall Spacer";
	pictureItem = "BSF_IronWall_Tri_Topper_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_IronWall_Tri_Topper_Kit"}
	};
	returnedItems[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_IronWall_Half: Exile_AbstractCraftingRecipe
{
	name = "Recycle IW Half Wall";
	pictureItem = "BSF_IronWall_Half_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_IronWall_Half_Kit"}
	};
	returnedItems[] =
	{
		{3, "Exile_Item_MetalBoard"},
		{3, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_IronWall_Third: Exile_AbstractCraftingRecipe
{
	name = "Recycle IW 1/3 Wall";
	pictureItem = "BSF_IronWall_Third_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_IronWall_Third_Kit"}
	};
	returnedItems[] =
	{
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_IronWall_Post: Exile_AbstractCraftingRecipe
{
	name = "Recycle IW Post";
	pictureItem = "BSF_IronWall_Post_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_IronWall_Post_Kit"}
	};
	returnedItems[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_IronWall_2: Exile_AbstractCraftingRecipe
{
	name = "Recycle IW2";
	pictureItem = "BSF_IronWall_2_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_IronWall_2_Kit"}
	};
	returnedItems[] =
	{
		{5, "Exile_Item_MetalBoard"},
		{5, "Exile_Item_MetalScrews"},
		{4, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_IronWall_2_Low: Exile_AbstractCraftingRecipe
{
	name = "Recycle IW2, Low";
	pictureItem = "BSF_IronWall_2_Low_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_IronWall_2_Low_Kit"}
	};
	returnedItems[] =
	{
		{4, "Exile_Item_MetalBoard"},
		{3, "Exile_Item_MetalScrews"},
		{3, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_IronWall_2_Round: Exile_AbstractCraftingRecipe
{
	name = "Recycle IW2, Round";
	pictureItem = "BSF_IronWall_2_Round_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_IronWall_2_Round_Kit"}
	};
	returnedItems[] =
	{
		{6, "Exile_Item_MetalBoard"},
		{6, "Exile_Item_MetalScrews"},
		{5, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_IronWall_2_Round_Low: Exile_AbstractCraftingRecipe
{
	name = "Recycle IW2, Low Round Wall";
	pictureItem = "BSF_IronWall_2_Round_Low_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_IronWall_2_Round_Low_Kit"}
	};
	returnedItems[] =
	{
		{5, "Exile_Item_MetalBoard"},
		{5, "Exile_Item_MetalScrews"},
		{4, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_IronWall_2_Tri: Exile_AbstractCraftingRecipe
{
	name = "Recycle IW2, Angled ";
	pictureItem = "BSF_IronWall_2_Tri_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_IronWall_2_Tri_Kit"}
	};
	returnedItems[] =
	{
		{6, "Exile_Item_MetalBoard"},
		{6, "Exile_Item_MetalScrews"},
		{5, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_IronWall_2_Tri_Low: Exile_AbstractCraftingRecipe
{
	name = "Recycle IW2, Low, Angled ";
	pictureItem = "BSF_IronWall_2_Tri_Low_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_IronWall_2_Tri_Low_Kit"}
	};
	returnedItems[] =
	{
		{5, "Exile_Item_MetalBoard"},
		{5, "Exile_Item_MetalScrews"},
		{4, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_IronWall_2_Half: Exile_AbstractCraftingRecipe
{
	name = "Recycle IW2 1/2 Wall";
	pictureItem = "BSF_IronWall_2_Half_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_IronWall_2_Half_Kit"}
	};
	returnedItems[] =
	{
		{3, "Exile_Item_MetalBoard"},
		{3, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_IronWall_2_Third: Exile_AbstractCraftingRecipe
{
	name = "Recycle IW2 1/3 Wall";
	pictureItem = "BSF_IronWall_2_Third_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_IronWall_2_Third_Kit"}
	};
	returnedItems[] =
	{
		{3, "Exile_Item_MetalBoard"},
		{3, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};


//////////////////////
/////	Doors
//////////////////////

class Recycle_BSF_IronWall_DoorOpening_C: Exile_AbstractCraftingRecipe
{
	name = "Recycle IW Door Opening, Center ";
	pictureItem = "BSF_IronWall_DoorOpening_C_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_IronWall_DoorOpening_C_Kit"}
	};
	returnedItems[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_IronWall_DoorOpening_L: Exile_AbstractCraftingRecipe
{
	name = "Recycle IW Door Opening, Left ";
	pictureItem = "BSF_IronWall_DoorOpening_L_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_IronWall_DoorOpening_L_Kit"}
	};
	returnedItems[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_IronWall_DoorOpening_R: Exile_AbstractCraftingRecipe
{
	name = "Recycle IW Door Opening, Right ";
	pictureItem = "BSF_IronWall_DoorOpening_R_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_IronWall_DoorOpening_R_Kit"}
	};
	returnedItems[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_IronWall_DoorOpening_Round: Exile_AbstractCraftingRecipe
{
	name = "Recycle IW Door Opening, Round ";
	pictureItem = "BSF_IronWall_DoorOpening_Round_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_IronWall_DoorOpening_Round_Kit"}
	};
	returnedItems[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_IronWall_DoorOpening_Tri: Exile_AbstractCraftingRecipe
{
	name = "Recycle IW Door Opening, Angled ";
	pictureItem = "BSF_IronWall_DoorOpening_Tri_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_IronWall_DoorOpening_Tri_Kit"}
	};
	returnedItems[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_IronWall_Door_C: Exile_AbstractCraftingRecipe
{
	name = "Recycle IW Door, Center ";
	pictureItem = "BSF_IronWall_Door_C_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_IronWall_Door_C_Kit"}
	};
	returnedItems[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_IronWall_Door_L: Exile_AbstractCraftingRecipe
{
	name = "Recycle IW Door, Left ";
	pictureItem = "BSF_IronWall_Door_L_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_IronWall_Door_L_Kit"}
	};
	returnedItems[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_IronWall_Door_R: Exile_AbstractCraftingRecipe
{
	name = "Recycle IW Door, Right ";
	pictureItem = "BSF_IronWall_Door_R_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_IronWall_Door_R_Kit"}
	};
	returnedItems[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_IronWall_Door_Round: Exile_AbstractCraftingRecipe
{
	name = "Recycle IW Door, Round ";
	pictureItem = "BSF_IronWall_Door_Round_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_IronWall_Door_Round_Kit"}
	};
	returnedItems[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_IronWall_Door_Tri: Exile_AbstractCraftingRecipe
{
	name = "Recycle IW Door, Angled ";
	pictureItem = "BSF_IronWall_Door_Tri_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_IronWall_Door_Tri_Kit"}
	};
	returnedItems[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};


class Recycle_BSF_IronWall_2_DoorOpening_C: Exile_AbstractCraftingRecipe
{
	name = "Recycle IW2 Door Opening, Center ";
	pictureItem = "BSF_IronWall_2_DoorOpening_C_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_IronWall_2_DoorOpening_C_Kit"}
	};
	returnedItems[] =
	{
		{5, "Exile_Item_MetalBoard"},
		{5, "Exile_Item_MetalScrews"},
		{4, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_IronWall_2_DoorOpening_L: Exile_AbstractCraftingRecipe
{
	name = "Recycle IW2 Door Opening, Left ";
	pictureItem = "BSF_IronWall_2_DoorOpening_L_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_IronWall_2_DoorOpening_L_Kit"}
	};
	returnedItems[] =
	{
		{5, "Exile_Item_MetalBoard"},
		{5, "Exile_Item_MetalScrews"},
		{4, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_IronWall_2_DoorOpening_R: Exile_AbstractCraftingRecipe
{
	name = "Recycle IW2 Door Opening, Right ";
	pictureItem = "BSF_IronWall_2_DoorOpening_R_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_IronWall_2_DoorOpening_R_Kit"}
	};
	returnedItems[] =
	{
		{5, "Exile_Item_MetalBoard"},
		{5, "Exile_Item_MetalScrews"},
		{4, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_IronWall_2_DoorOpening_Round: Exile_AbstractCraftingRecipe
{
	name = "Recycle IW2 Door Opening, Round ";
	pictureItem = "BSF_IronWall_2_DoorOpening_Round_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_IronWall_2_DoorOpening_Round_Kit"}
	};
	returnedItems[] =
	{
		{6, "Exile_Item_MetalBoard"},
		{6, "Exile_Item_MetalScrews"},
		{5, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_IronWall_2_DoorOpening_Tri: Exile_AbstractCraftingRecipe
{
	name = "Recycle IW2 Door Opening, Angled ";
	pictureItem = "BSF_IronWall_2_DoorOpening_Tri_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_IronWall_2_DoorOpening_Tri_Kit"}
	};
	returnedItems[] =
	{
		{6, "Exile_Item_MetalBoard"},
		{6, "Exile_Item_MetalScrews"},
		{5, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_IronWall_2_Door_C: Exile_AbstractCraftingRecipe
{
	name = "Recycle IW2 Door, Center ";
	pictureItem = "BSF_IronWall_2_Door_C_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_IronWall_2_Door_C_Kit"}
	};
	returnedItems[] =
	{
		{5, "Exile_Item_MetalBoard"},
		{6, "Exile_Item_MetalScrews"},
		{4, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_IronWall_2_Door_L: Exile_AbstractCraftingRecipe
{
	name = "Recycle IW2 Door, Left ";
	pictureItem = "BSF_IronWall_2_Door_L_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_IronWall_2_Door_L_Kit"}
	};
	returnedItems[] =
	{
		{5, "Exile_Item_MetalBoard"},
		{6, "Exile_Item_MetalScrews"},
		{4, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_IronWall_2_Door_R: Exile_AbstractCraftingRecipe
{
	name = "Recycle IW2 Door, Right ";
	pictureItem = "BSF_IronWall_2_Door_R_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_IronWall_2_Door_R_Kit"}
	};
	returnedItems[] =
	{
		{5, "Exile_Item_MetalBoard"},
		{6, "Exile_Item_MetalScrews"},
		{4, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_IronWall_2_Door_Round: Exile_AbstractCraftingRecipe
{
	name = "Recycle IW2 Door, Round ";
	pictureItem = "BSF_IronWall_2_Door_Round_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_IronWall_2_Door_Round_Kit"}
	};
	returnedItems[] =
	{
		{6, "Exile_Item_MetalBoard"},
		{7, "Exile_Item_MetalScrews"},
		{5, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_IronWall_2_Door_Tri: Exile_AbstractCraftingRecipe
{
	name = "Recycle IW2 Door, Angled ";
	pictureItem = "BSF_IronWall_2_Door_Tri_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_IronWall_2_Door_Tri_Kit"}
	};
	returnedItems[] =
	{
		{6, "Exile_Item_MetalBoard"},
		{7, "Exile_Item_MetalScrews"},
		{5, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

//////////////////////
/////	Windows
//////////////////////

class Recycle_BSF_IronWall_WindowOpening_C: Exile_AbstractCraftingRecipe
{
	name = "Recycle IW Window Opening, Center ";
	pictureItem = "BSF_IronWall_WindowOpening_C_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_IronWall_WindowOpening_C_Kit"}
	};
	returnedItems[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_IronWall_WindowOpening_L: Exile_AbstractCraftingRecipe
{
	name = "Recycle IW Window Opening, Left ";
	pictureItem = "BSF_IronWall_WindowOpening_L_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_IronWall_WindowOpening_L_Kit"}
	};
	returnedItems[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_IronWall_WindowOpening_R: Exile_AbstractCraftingRecipe
{
	name = "Recycle IW Window Opening, Right ";
	pictureItem = "BSF_IronWall_WindowOpening_R_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_IronWall_WindowOpening_R_Kit"}
	};
	returnedItems[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_IronWall_WindowOpening_Round: Exile_AbstractCraftingRecipe
{
	name = "Recycle IW Window, Angled ";
	pictureItem = "BSF_IronWall_WindowOpening_Round_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_IronWall_WindowOpening_Round_Kit"}
	};
	returnedItems[] =
	{
		{6, "Exile_Item_MetalBoard"},
		{6, "Exile_Item_MetalScrews"},
		{5, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_IronWall_WindowOpening_Tri: Exile_AbstractCraftingRecipe
{
	name = "Recycle IW Window Opening, Angled ";
	pictureItem = "BSF_IronWall_WindowOpening_Tri_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_IronWall_WindowOpening_Tri_Kit"}
	};
	returnedItems[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};


class Recycle_BSF_IronWall_Window_C: Exile_AbstractCraftingRecipe
{
	name = "Recycle IW Window, Center ";
	pictureItem = "BSF_IronWall_Window_C_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_IronWall_Window_C_Kit"}
	};
	returnedItems[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_IronWall_Window_L: Exile_AbstractCraftingRecipe
{
	name = "Recycle IW Window, Left";
	pictureItem = "BSF_IronWall_Window_L_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_IronWall_Window_L_Kit"}
	};
	returnedItems[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_IronWall_Window_R: Exile_AbstractCraftingRecipe
{
	name = "Recycle IW Window, Right";
	pictureItem = "BSF_IronWall_Window_R_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_IronWall_Window_R_Kit"}
	};
	returnedItems[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_IronWall_Window_Round: Exile_AbstractCraftingRecipe
{
	name = "Recycle IW Window, Angled ";
	pictureItem = "BSF_IronWall_Window_Round_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_IronWall_Window_Round_Kit"}
	};
	returnedItems[] =
	{
		{6, "Exile_Item_MetalBoard"},
		{7, "Exile_Item_MetalScrews"},
		{5, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_IronWall_Window_Tri: Exile_AbstractCraftingRecipe
{
	name = "Recycle IW Window, Angled ";
	pictureItem = "BSF_IronWall_Window_Tri_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_IronWall_Window_Tri_Kit"}
	};
	returnedItems[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};


class Recycle_BSF_IronWall_2_WindowOpening_C: Exile_AbstractCraftingRecipe
{
	name = "Recycle IW2 Window Opening, Center ";
	pictureItem = "BSF_IronWall_2_WindowOpening_C_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_IronWall_2_WindowOpening_C_Kit"}
	};
	returnedItems[] =
	{
		{5, "Exile_Item_MetalBoard"},
		{5, "Exile_Item_MetalScrews"},
		{4, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_IronWall_2_WindowOpening_L: Exile_AbstractCraftingRecipe
{
	name = "Recycle IW2 Window Opening, Left ";
	pictureItem = "BSF_IronWall_2_WindowOpening_L_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_IronWall_2_WindowOpening_L_Kit"}
	};
	returnedItems[] =
	{
		{5, "Exile_Item_MetalBoard"},
		{5, "Exile_Item_MetalScrews"},
		{4, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_IronWall_2_WindowOpening_R: Exile_AbstractCraftingRecipe
{
	name = "Recycle IW2 Window Opening, Right ";
	pictureItem = "BSF_IronWall_2_WindowOpening_R_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_IronWall_2_WindowOpening_R_Kit"}
	};
	returnedItems[] =
	{
		{5, "Exile_Item_MetalBoard"},
		{5, "Exile_Item_MetalScrews"},
		{4, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_IronWall_2_WindowOpening_Round: Exile_AbstractCraftingRecipe
{
	name = "Recycle IW2 Window, Angled ";
	pictureItem = "BSF_IronWall_2_WindowOpening_Round_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_IronWall_2_WindowOpening_Round_Kit"}
	};
	returnedItems[] =
	{
		{6, "Exile_Item_MetalBoard"},
		{6, "Exile_Item_MetalScrews"},
		{5, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_IronWall_2_WindowOpening_Tri: Exile_AbstractCraftingRecipe
{
	name = "Recycle IW2 Window Opening, Angled ";
	pictureItem = "BSF_IronWall_2_WindowOpening_Tri_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_IronWall_2_WindowOpening_Tri_Kit"}
	};
	returnedItems[] =
	{
		{6, "Exile_Item_MetalBoard"},
		{6, "Exile_Item_MetalScrews"},
		{5, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};


class Recycle_BSF_IronWall_2_Window_C: Exile_AbstractCraftingRecipe
{
	name = "Recycle IW2 Window, Center ";
	pictureItem = "BSF_IronWall_2_Window_C_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_IronWall_2_Window_C_Kit"}
	};
	returnedItems[] =
	{
		{5, "Exile_Item_MetalBoard"},
		{6, "Exile_Item_MetalScrews"},
		{4, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_IronWall_2_Window_L: Exile_AbstractCraftingRecipe
{
	name = "Recycle IW2 Window, Left";
	pictureItem = "BSF_IronWall_2_Window_L_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_IronWall_2_Window_L_Kit"}
	};
	returnedItems[] =
	{
		{5, "Exile_Item_MetalBoard"},
		{6, "Exile_Item_MetalScrews"},
		{4, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_IronWall_2_Window_R: Exile_AbstractCraftingRecipe
{
	name = "Recycle IW2 Window, Right";
	pictureItem = "BSF_IronWall_2_Window_R_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_IronWall_2_Window_R_Kit"}
	};
	returnedItems[] =
	{
		{5, "Exile_Item_MetalBoard"},
		{6, "Exile_Item_MetalScrews"},
		{4, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_IronWall_2_Window_Tri: Exile_AbstractCraftingRecipe
{
	name = "Recycle IW2 Window, Angled ";
	pictureItem = "BSF_IronWall_2_Window_Tri_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_IronWall_2_Window_Tri_Kit"}
	};
	returnedItems[] =
	{
		{6, "Exile_Item_MetalBoard"},
		{7, "Exile_Item_MetalScrews"},
		{5, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_IronWall_2_Window_Round: Exile_AbstractCraftingRecipe
{
	name = "Recycle IW2 Window, Angled ";
	pictureItem = "BSF_IronWall_2_Window_Round_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_IronWall_2_Window_Round_Kit"}
	};
	returnedItems[] =
	{
		{6, "Exile_Item_MetalBoard"},
		{7, "Exile_Item_MetalScrews"},
		{5, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

//////////////////////
/////	Floors
//////////////////////

class Recycle_BSF_IronWall_Floor: Exile_AbstractCraftingRecipe
{
	name = "Recycle IW Floor";
	pictureItem = "BSF_IronWall_Floor_Basic_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_IronWall_Floor_Basic_Kit"}
	};
	returnedItems[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_IronWall_Floor_Half: Exile_AbstractCraftingRecipe
{
	name = "Recycle IW Floor, Half";
	pictureItem = "BSF_IronWall_Floor_Half_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_IronWall_Floor_Half_Kit"}
	};
	returnedItems[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_IronWall_Floor_Quarter: Exile_AbstractCraftingRecipe
{
	name = "Recycle IW Floor, Quarter";
	pictureItem = "BSF_IronWall_Floor_Quarter_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_IronWall_Floor_Quarter_Kit"}
	};
	returnedItems[] =
	{
		{1, "Exile_Item_Cement"},
		{1, "Exile_Item_Sand"},
		{1, "Exile_Item_MetalBoard"},
		{1, "Exile_Item_MetalScrews"},
		{1, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_IronWall_Floor_Round: Exile_AbstractCraftingRecipe
{
	name = "Recycle IW Floor, Round";
	pictureItem = "BSF_IronWall_Floor_Round_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_IronWall_Floor_Round_Kit"}
	};
	returnedItems[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_IronWall_Floor_Tri: Exile_AbstractCraftingRecipe
{
	name = "Recycle IW Floor, Angled";
	pictureItem = "BSF_IronWall_Floor_Tri_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_IronWall_Floor_Tri_Kit"}
	};
	returnedItems[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_IronWall_Floorport: Exile_AbstractCraftingRecipe
{
	name = "Recycle IW Floor Port";
	pictureItem = "BSF_IronWall_Floorport_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_IronWall_Floorport_Kit"}
	};
	returnedItems[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_IronWall_Floorport_Door: Exile_AbstractCraftingRecipe
{
	name = "Recycle IW Floor Port, Door";
	pictureItem = "BSF_IronWall_Floorport_Door_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_IronWall_Floorport_Door_Kit"}
	};
	returnedItems[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_IronWall_Stairport: Exile_AbstractCraftingRecipe
{
	name = "Recycle IW Stair Port";
	pictureItem = "BSF_IronWall_Stairport_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_IronWall_Stairport_Kit"}
	};
	returnedItems[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_IronWall_Floor_Hatchport: Exile_AbstractCraftingRecipe
{
	name = "Recycle IW Hatch Port";
	pictureItem = "BSF_IronWall_Floor_Hatchport_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_IronWall_Floor_Hatchport_Kit"}
	};
	returnedItems[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_IronWall_Floor_Hatch: Exile_AbstractCraftingRecipe
{
	name = "Recycle IW Hatch";
	pictureItem = "BSF_IronWall_Floor_Hatch_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_IronWall_Floor_Hatch_Kit"}
	};
	returnedItems[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{3, "Exile_Item_MetalBoard"},
		{3, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

//////////////////////
/////	Stairs
//////////////////////

class Recycle_BSF_IronWall_StairRail_L: Exile_AbstractCraftingRecipe
{
	name = "Recycle IW Stair Rail, Left";
	pictureItem = "BSF_IronWall_StairRail_L_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] =
	{
		{1, "BSF_IronWall_StairRail_L_Kit"}
	};
	returnedItems[] =
	{
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{3, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_IronWall_StairRail_R: Exile_AbstractCraftingRecipe
{
	name = "Recycle IW Stair Rail, Right";
	pictureItem = "BSF_IronWall_StairRail_R_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] =
	{
		{1, "BSF_IronWall_StairRail_R_Kit"}
	};
	returnedItems[] =
	{
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{3, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_IronWall_Stairs_2_C: Exile_AbstractCraftingRecipe
{
	name = "Recycle IW Stairs 1, Center";
	pictureItem = "BSF_IronWall_Stairs_2_C_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] =
	{
		{1, "BSF_IronWall_Stairs_2_C_Kit"}
	};
	returnedItems[] =
	{
		{3, "Exile_Item_MetalBoard"},
		{3, "Exile_Item_MetalScrews"},
		{3, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_IronWall_Stairs_2_L: Exile_AbstractCraftingRecipe
{
	name = "Recycle IW Stairs 1, Left";
	pictureItem = "BSF_IronWall_Stairs_2_L_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] =
	{
		{1, "BSF_IronWall_Stairs_2_L_Kit"}
	};
	returnedItems[] =
	{
		{3, "Exile_Item_MetalBoard"},
		{4, "Exile_Item_MetalScrews"},
		{3, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_IronWall_Stairs_2_R: Exile_AbstractCraftingRecipe
{
	name = "Recycle IW Stairs 1, Right";
	pictureItem = "BSF_IronWall_Stairs_2_R_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] =
	{
		{1, "BSF_IronWall_Stairs_2_R_Kit"}
	};
	returnedItems[] =
	{
		{3, "Exile_Item_MetalBoard"},
		{4, "Exile_Item_MetalScrews"},
		{3, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_IronWall_Stairs_RoofTop: Exile_AbstractCraftingRecipe
{
	name = "Recycle IW Stairs Rooftop";
	pictureItem = "BSF_IronWall_Stairs_RoofTop_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] =
	{
		{1, "BSF_IronWall_Stairs_RoofTop_Kit"}
	};
	returnedItems[] =
	{
		{3, "Exile_Item_MetalBoard"},
		{4, "Exile_Item_MetalScrews"},
		{3, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_IronWall_Stairs_Ext_C: Exile_AbstractCraftingRecipe
{
	name = "Recycle IW Stairs Low, Center";
	pictureItem = "BSF_IronWall_Stairs_Ext_C_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] =
	{
		{1, "BSF_IronWall_Stairs_Ext_C_Kit"}
	};
	returnedItems[] =
	{
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_IronWall_Stairs_Ext_L: Exile_AbstractCraftingRecipe
{
	name = "Recycle IW Stairs Low, Left";
	pictureItem = "BSF_IronWall_Stairs_Ext_L_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] =
	{
		{1, "BSF_IronWall_Stairs_Ext_L_Kit"}
	};
	returnedItems[] =
	{
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_IronWall_Stairs_Ext_R: Exile_AbstractCraftingRecipe
{
	name = "Recycle IW Stairs Low, Right";
	pictureItem = "BSF_IronWall_Stairs_Ext_R_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] =
	{
		{1, "BSF_IronWall_Stairs_Ext_R_Kit"}
	};
	returnedItems[] =
	{
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_IronWall_Stairs_Spiral_2_L: Exile_AbstractCraftingRecipe
{
	name = "Recycle IW Stairs Spiral, Left";
	pictureItem = "BSF_IronWall_Stairs_Spiral_2_L_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] =
	{
		{1, "BSF_IronWall_Stairs_Spiral_2_L_Kit"}
	};
	returnedItems[] =
	{
		{3, "Exile_Item_MetalBoard"},
		{4, "Exile_Item_MetalScrews"},
		{3, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_IronWall_Stairs_Spiral_2_R: Exile_AbstractCraftingRecipe
{
	name = "Recycle IW Stairs Spiral, Right";
	pictureItem = "BSF_IronWall_Stairs_Spiral_2_R_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] =
	{
		{1, "BSF_IronWall_Stairs_Spiral_2_R_Kit"}
	};
	returnedItems[] =
	{
		{3, "Exile_Item_MetalBoard"},
		{4, "Exile_Item_MetalScrews"},
		{3, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};


//////////////////////
/////	Roofs
//////////////////////


class Recycle_BSF_IronWall_Roof: Exile_AbstractCraftingRecipe
{
	name = "Recycle IW Roof";
	pictureItem = "BSF_IronWall_Roof_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_IronWall_Roof_Kit"}
	};
	returnedItems[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_IronWall_Roof_Corner: Exile_AbstractCraftingRecipe
{
	name = "Recycle IW Roof, Open Corner";
	pictureItem = "BSF_IronWall_Roof_Corner_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_IronWall_Roof_Corner_Kit"}
	};
	returnedItems[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_IronWall_Roof_Corner_Full: Exile_AbstractCraftingRecipe
{
	name = "Recycle IW Roof, Full Corner";
	pictureItem = "BSF_IronWall_Roof_Corner_Full_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_IronWall_Roof_Corner_Full_Kit"}
	};
	returnedItems[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_IronWall_Roof_Square: Exile_AbstractCraftingRecipe
{
	name = "Recycle IW Roof, Square";
	pictureItem = "BSF_IronWall_Roof_Square_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_IronWall_Roof_Square_Kit"}
	};
	returnedItems[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_IronWall_Roof_Round: Exile_AbstractCraftingRecipe
{
	name = "Recycle IW Roof, Round";
	pictureItem = "BSF_IronWall_Roof_Round_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_IronWall_Roof_Round_Kit"}
	};
	returnedItems[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_IronWall_Roof_Tri: Exile_AbstractCraftingRecipe
{
	name = "Recycle IW Roof, Angled";
	pictureItem = "BSF_IronWall_Roof_Tri_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_IronWall_Roof_Tri_Kit"}
	};
	returnedItems[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_IronWall_Roof_Third: Exile_AbstractCraftingRecipe
{
	name = "Recycle IW Roof, 1/3-ish";
	pictureItem = "BSF_IronWall_Roof_Third_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_IronWall_Roof_Third_Kit"}
	};
	returnedItems[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_IronWall_Roof_Half: Exile_AbstractCraftingRecipe
{
	name = "Recycle IW Roof, Half";
	pictureItem = "BSF_IronWall_Roof_Half_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_IronWall_Roof_Half_Kit"}
	};
	returnedItems[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_IronWall_Roof_Filler_L: Exile_AbstractCraftingRecipe
{
	name = "Recycle IW Roof Filler, Left";
	pictureItem = "BSF_IronWall_Roof_Filler_L_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_IronWall_Roof_Filler_L_Kit"}
	};
	returnedItems[] =
	{
		{1, "Exile_Item_Cement"},
		{1, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{1, "Exile_Item_MetalScrews"},
		{1, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_IronWall_Roof_Filler_R: Exile_AbstractCraftingRecipe
{
	name = "Recycle IW Roof Filler, Right";
	pictureItem = "BSF_IronWall_Roof_Filler_R_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_IronWall_Roof_Filler_R_Kit"}
	};
	returnedItems[] =
	{
		{1, "Exile_Item_Cement"},
		{1, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{1, "Exile_Item_MetalScrews"},
		{1, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

//////////////////////
/////	Gates
//////////////////////

class Recycle_BSF_IronWall_Gate_1L: Exile_AbstractCraftingRecipe
{
	name = "Recycle IW Gate, Left";
	pictureItem = "BSF_IronWall_Gate_1L_Kit";
	requiresFire = 1;
	BSF_Donor = 0;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_IronWall_Gate_1L_Kit"}
	};
	returnedItems[] =
	{
		{2, "Exile_Item_Cement"},
		{1, "BSF_Paint_Bucket_Yellow"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox","BSF_Paintbrush"};
	category = "Recycle";
};

class Recycle_BSF_IronWall_Gate_1R: Exile_AbstractCraftingRecipe
{
	name = "Recycle IW Gate, Right";
	pictureItem = "BSF_IronWall_Gate_1R_Kit";
	requiresFire = 1;
	BSF_Donor = 0;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_IronWall_Gate_1R_Kit"}
	};
	returnedItems[] =
	{
		{2, "Exile_Item_Cement"},
		{1, "BSF_Paint_Bucket_Yellow"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox","BSF_Paintbrush"};
	category = "Recycle";
};

//////////////////////
/////	Misc
//////////////////////

/*
class Recycle_BSF_MedChest: Exile_AbstractCraftingRecipe
{
	name = "Recycle Medicine Chest";
	pictureItem = "BSF_MedChest_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] =
	{
		{1, "BSF_MedChest_Kit"}
	};
	returnedItems[] =
	{
		{10, "Exile_Item_InstaDoc"},
		{5, "Exile_Item_Vishpirin"},
		{2, "Exile_Item_Heatpack"},
		{10, "Exile_Item_Bandage"},
		{1, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Screwdriver"};

	category = "Base Parts - BSF";
};
*/


class Recycle_BSF_Helipad_01: Exile_AbstractCraftingRecipe
{
	name = "Recycle Heli Pad";
	pictureItem = "BSF_Helipad_01_Kit";
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_Helipad_01_Kit"}
	};
	returnedItems[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{4, "BSF_Paint_Bucket_White"},
		{4, "BSF_Paint_Bucket_Yellow"}
	};
	tools[] = {"Exile_Item_Shovel","BSF_Paintbrush"};
	category = "Recycle";
};

class Recycle_BSF_Statue1: Exile_AbstractCraftingRecipe
{
	name = "Recycle Diva Statue";
	pictureItem = "BSF_Statue1_Kit";
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_Statue1_Kit"}
	};
	returnedItems[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{1, "BSF_Paint_Bucket_White"}
	};
	tools[] = {"Exile_Item_Shovel","BSF_Paintbrush"};
	category = "Recycle";
};

/*
class Recycle_BSF_PortableGenerator: Exile_AbstractCraftingRecipe
{
	name = "Portablle Generator";
	pictureItem = "BSF_PortableGenerator_Kit";
	components[] =
	{
		{1, "BSF_PortableGenerator_Kit"}
	};
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_ExtensionCord"},
		{1, "Exile_Item_MetalScrews"},
		{3, "Exile_Item_MetalBoard"},
		{5, "Exile_Item_MetalWire"}
	};
	tools[] =
	{
		"Exile_Item_Screwdriver",
		"Exile_Item_Grinder",
		"Exile_Item_Pliers"
	};
	category = "Electronics";
};
*/
class Recycle_Fishing_Net: Exile_AbstractCraftingRecipe
{
	name = "Recycle Fishing Net";
	pictureItem = "BSF_Fishing_Net";
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_Fishing_Net"}
	};
	returnedItems[] =
	{
		{4, "Exile_Item_Rope"}
	};
	tools[] = {"Exile_Item_Knife"};
	category = "Recycle";
};

class Recycle_BSF_Welder: Exile_AbstractCraftingRecipe
{
	name = "Recycle Welding Rig";
	pictureItem = "land_welder_Kit";
	components[] =
	{
		{1, "land_welder_Kit"}
	};
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "BSF_Welding_Gas"},
		{1, "Exile_Item_PortableGeneratorKit"},
		{2, "Exile_Item_ExtensionCord"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalPole"},
		{5, "Exile_Item_MetalWire"}
	};
	tools[] =
	{
		"Exile_Item_Foolbox",
		"Exile_Item_Screwdriver",
		"Exile_Item_CordlessScrewdriver",
		"Exile_Item_Wrench",
		"Exile_Item_Grinder",
		"Exile_Item_Pliers"
	};
	category = "Recycle";
};

class Recycle_Water_Pump: Exile_AbstractCraftingRecipe
{
	name = "Recycle Water Pump";
	pictureItem = "BSF_WaterPump_Kit";
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_WaterPump_Kit"}
	};
	returnedItems[] =
	{
		{1, "Exile_Item_Cement"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] =
	{
		"Exile_Item_Foolbox"
	};
	category = "Recycle";
};

class Recycle_Water_Tank: Exile_AbstractCraftingRecipe
{
	name = "Recycle Water Tank";
	pictureItem = "BSF_WaterTank_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{10, "Exile_Item_PlasticBottleEmpty"},
		{1, "BSF_WaterTank_Kit"}
	};
	returnedItems[] =
	{
		{1, "Exile_Item_DuctTape"},
		{10, "Exile_Item_PlasticBottleFreshWater"}
	};
	tools[] = {"Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_FlexFuelTank_Sand: Exile_AbstractCraftingRecipe
{
	name = "Recycle Flexible Fuel Tank, Sand";
	pictureItem = "land_FlexibleTankSand_Kit";
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "land_FlexibleTankSand_Kit"}
	};
	returnedItems[] =
	{
		{2, "Exile_Item_WaterBarrelKit"}
	};
	tools[] = {"Exile_Item_Foolbox"};
	category = "Recycle";
};
class Recycle_FlexFuelTank_Green: Craft_FlexFuelTank_Sand
{
	name = "Recycle Flexible Fuel Tank, Green";
	pictureItem = "land_FlexibleTankForest_Kit";
	components[] =
	{
		{1, "land_FlexibleTankForest_Kit"}
	};
};


////////////////////////////////////
///////////////////////////////////

//////////////////////
/////	Walls
//////////////////////

class Recycle_BSF_GreenWall: Exile_AbstractCraftingRecipe
{
	name = "Recycle GW Wall";
	pictureItem = "BSF_GreenWall_Basic_Kit";
	requiresFire = 1;
	BSF_Donor = 0;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_GreenWall_Basic_Kit"}
	};
	returnedItems[] =
	{
		{1, "BSF_Paint_Bucket_Green"},
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_GreenWall_Low: Exile_AbstractCraftingRecipe
{
	name = "Recycle GW, Low";
	pictureItem = "BSF_GreenWall_Low_Kit";
	requiresFire = 1;
	BSF_Donor = 0;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_GreenWall_Low_Kit"}
	};
	returnedItems[] =
	{
		{1, "BSF_Paint_Bucket_Green"},
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_GreenWall_Topper: Exile_AbstractCraftingRecipe
{
	name = "Recycle GW Wall Spacer";
	pictureItem = "BSF_GreenWall_Topper_Kit";
	requiresFire = 1;
	BSF_Donor = 0;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_GreenWall_Topper_Kit"}
	};
	returnedItems[] =
	{
		{1, "BSF_Paint_Bucket_Green"},
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_GreenWall_Round: Exile_AbstractCraftingRecipe
{
	name = "Recycle GW, Round";
	pictureItem = "BSF_GreenWall_Round_Kit";
	requiresFire = 1;
	BSF_Donor = 0;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_GreenWall_Round_Kit"}
	};
	returnedItems[] =
	{
		{1, "BSF_Paint_Bucket_Green"},
		{6, "Exile_Item_MetalBoard"},
		{6, "Exile_Item_MetalScrews"},
		{5, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_GreenWall_Round_Low: Exile_AbstractCraftingRecipe
{
	name = "Recycle GW, Low Round Wall";
	pictureItem = "BSF_GreenWall_Round_Low_Kit";
	requiresFire = 1;
	BSF_Donor = 0;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_GreenWall_Round_Low_Kit"}
	};
	returnedItems[] =
	{
		{1, "BSF_Paint_Bucket_Green"},
		{5, "Exile_Item_MetalBoard"},
		{5, "Exile_Item_MetalScrews"},
		{4, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_GreenWall_Round_Topper: Exile_AbstractCraftingRecipe
{
	name = "Recycle GW Round Wall Spacer ";
	pictureItem = "BSF_GreenWall_Round_Topper_Kit";
	requiresFire = 1;
	BSF_Donor = 0;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_GreenWall_Round_Topper_Kit"}
	};
	returnedItems[] =
	{
		{1, "BSF_Paint_Bucket_Green"},
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_GreenWall_Tri: Exile_AbstractCraftingRecipe
{
	name = "Recycle GW, Angled ";
	pictureItem = "BSF_GreenWall_Tri_Kit";
	requiresFire = 1;
	BSF_Donor = 0;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_GreenWall_Tri_Kit"}
	};
	returnedItems[] =
	{
		{1, "BSF_Paint_Bucket_Green"},
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_GreenWall_Tri_Low: Exile_AbstractCraftingRecipe
{
	name = "Recycle GW, Low, Angled ";
	pictureItem = "BSF_GreenWall_Tri_Low_Kit";
	requiresFire = 1;
	BSF_Donor = 0;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_GreenWall_Tri_Low_Kit"}
	};
	returnedItems[] =
	{
		{1, "BSF_Paint_Bucket_Green"},
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_GreenWall_Tri_Topper: Exile_AbstractCraftingRecipe
{
	name = "Recycle GW Angled Wall Spacer";
	pictureItem = "BSF_GreenWall_Tri_Topper_Kit";
	requiresFire = 1;
	BSF_Donor = 0;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_GreenWall_Tri_Topper_Kit"}
	};
	returnedItems[] =
	{
		{1, "BSF_Paint_Bucket_Green"},
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_GreenWall_Half: Exile_AbstractCraftingRecipe
{
	name = "Recycle GW Half Wall";
	pictureItem = "BSF_GreenWall_Half_Kit";
	requiresFire = 1;
	BSF_Donor = 0;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_GreenWall_Half_Kit"}
	};
	returnedItems[] =
	{
		{1, "BSF_Paint_Bucket_Green"},
		{3, "Exile_Item_MetalBoard"},
		{3, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_GreenWall_Third: Exile_AbstractCraftingRecipe
{
	name = "Recycle GW 1/3 Wall";
	pictureItem = "BSF_GreenWall_Third_Kit";
	requiresFire = 1;
	BSF_Donor = 0;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_GreenWall_Third_Kit"}
	};
	returnedItems[] =
	{
		{1, "BSF_Paint_Bucket_Green"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_GreenWall_Post: Exile_AbstractCraftingRecipe
{
	name = "Recycle GW Post";
	pictureItem = "BSF_GreenWall_Post_Kit";
	requiresFire = 1;
	BSF_Donor = 0;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_GreenWall_Post_Kit"}
	};
	returnedItems[] =
	{
		{1, "BSF_Paint_Bucket_Green"},
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};



//////////////////////
/////	Doors
//////////////////////

class Recycle_BSF_GreenWall_DoorOpening_C: Exile_AbstractCraftingRecipe
{
	name = "Recycle GW Door Opening, Center ";
	pictureItem = "BSF_GreenWall_DoorOpening_C_Kit";
	requiresFire = 1;
	BSF_Donor = 0;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_GreenWall_DoorOpening_C_Kit"}
	};
	returnedItems[] =
	{
		{1, "BSF_Paint_Bucket_Green"},
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_GreenWall_DoorOpening_L: Exile_AbstractCraftingRecipe
{
	name = "Recycle GW Door Opening, Left ";
	pictureItem = "BSF_GreenWall_DoorOpening_L_Kit";
	requiresFire = 1;
	BSF_Donor = 0;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_GreenWall_DoorOpening_L_Kit"}
	};
	returnedItems[] =
	{
		{1, "BSF_Paint_Bucket_Green"},
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_GreenWall_DoorOpening_R: Exile_AbstractCraftingRecipe
{
	name = "Recycle GW Door Opening, Right ";
	pictureItem = "BSF_GreenWall_DoorOpening_R_Kit";
	requiresFire = 1;
	BSF_Donor = 0;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_GreenWall_DoorOpening_R_Kit"}
	};
	returnedItems[] =
	{
		{1, "BSF_Paint_Bucket_Green"},
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_GreenWall_DoorOpening_Round: Exile_AbstractCraftingRecipe
{
	name = "Recycle GW Door Opening, Round ";
	pictureItem = "BSF_GreenWall_DoorOpening_Round_Kit";
	requiresFire = 1;
	BSF_Donor = 0;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_GreenWall_DoorOpening_Round_Kit"}
	};
	returnedItems[] =
	{
		{1, "BSF_Paint_Bucket_Green"},
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_GreenWall_DoorOpening_Tri: Exile_AbstractCraftingRecipe
{
	name = "Recycle GW Door Opening, Angled ";
	pictureItem = "BSF_GreenWall_DoorOpening_Tri_Kit";
	requiresFire = 1;
	BSF_Donor = 0;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_GreenWall_DoorOpening_Tri_Kit"}
	};
	returnedItems[] =
	{
		{1, "BSF_Paint_Bucket_Green"},
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_GreenWall_Door_C: Exile_AbstractCraftingRecipe
{
	name = "Recycle GW Door, Center ";
	pictureItem = "BSF_GreenWall_Door_C_Kit";
	requiresFire = 1;
	BSF_Donor = 0;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_GreenWall_Door_C_Kit"}
	};
	returnedItems[] =
	{
		{1, "BSF_Paint_Bucket_Green"},
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_GreenWall_Door_L: Exile_AbstractCraftingRecipe
{
	name = "Recycle GW Door, Left ";
	pictureItem = "BSF_GreenWall_Door_L_Kit";
	requiresFire = 1;
	BSF_Donor = 0;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_GreenWall_Door_L_Kit"}
	};
	returnedItems[] =
	{
		{1, "BSF_Paint_Bucket_Green"},
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_GreenWall_Door_R: Exile_AbstractCraftingRecipe
{
	name = "Recycle GW Door, Right ";
	pictureItem = "BSF_GreenWall_Door_R_Kit";
	requiresFire = 1;
	BSF_Donor = 0;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_GreenWall_Door_R_Kit"}
	};
	returnedItems[] =
	{
		{1, "BSF_Paint_Bucket_Green"},
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_GreenWall_Door_Round: Exile_AbstractCraftingRecipe
{
	name = "Recycle GW Door, Round ";
	pictureItem = "BSF_GreenWall_Door_Round_Kit";
	requiresFire = 1;
	BSF_Donor = 0;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_GreenWall_Door_Round_Kit"}
	};
	returnedItems[] =
	{
		{1, "BSF_Paint_Bucket_Green"},
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_GreenWall_Door_Tri: Exile_AbstractCraftingRecipe
{
	name = "Recycle GW Door, Angled ";
	pictureItem = "BSF_GreenWall_Door_Tri_Kit";
	requiresFire = 1;
	BSF_Donor = 0;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_GreenWall_Door_Tri_Kit"}
	};
	returnedItems[] =
	{
		{1, "BSF_Paint_Bucket_Green"},
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};


//////////////////////
/////	Windows
//////////////////////

class Recycle_BSF_GreenWall_WindowOpening_C: Exile_AbstractCraftingRecipe
{
	name = "Recycle GW Window Opening, Center ";
	pictureItem = "BSF_GreenWall_WindowOpening_C_Kit";
	requiresFire = 1;
	BSF_Donor = 0;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_GreenWall_WindowOpening_C_Kit"}
	};
	returnedItems[] =
	{
		{1, "BSF_Paint_Bucket_Green"},
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_GreenWall_WindowOpening_L: Exile_AbstractCraftingRecipe
{
	name = "Recycle GW Window Opening, Left ";
	pictureItem = "BSF_GreenWall_WindowOpening_L_Kit";
	requiresFire = 1;
	BSF_Donor = 0;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_GreenWall_WindowOpening_L_Kit"}
	};
	returnedItems[] =
	{
		{1, "BSF_Paint_Bucket_Green"},
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_GreenWall_WindowOpening_R: Exile_AbstractCraftingRecipe
{
	name = "Recycle GW Window Opening, Right ";
	pictureItem = "BSF_GreenWall_WindowOpening_R_Kit";
	requiresFire = 1;
	BSF_Donor = 0;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_GreenWall_WindowOpening_R_Kit"}
	};
	returnedItems[] =
	{
		{1, "BSF_Paint_Bucket_Green"},
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_GreenWall_WindowOpening_Round: Exile_AbstractCraftingRecipe
{
	name = "Recycle GW Window, Angled ";
	pictureItem = "BSF_GreenWall_WindowOpening_Round_Kit";
	requiresFire = 1;
	BSF_Donor = 0;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_GreenWall_WindowOpening_Round_Kit"}
	};
	returnedItems[] =
	{
		{1, "BSF_Paint_Bucket_Green"},
		{6, "Exile_Item_MetalBoard"},
		{6, "Exile_Item_MetalScrews"},
		{5, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_GreenWall_WindowOpening_Tri: Exile_AbstractCraftingRecipe
{
	name = "Recycle GW Window Opening, Angled ";
	pictureItem = "BSF_GreenWall_WindowOpening_Tri_Kit";
	requiresFire = 1;
	BSF_Donor = 0;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_GreenWall_WindowOpening_Tri_Kit"}
	};
	returnedItems[] =
	{
		{1, "BSF_Paint_Bucket_Green"},
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};


class Recycle_BSF_GreenWall_Window_C: Exile_AbstractCraftingRecipe
{
	name = "Recycle GW Window, Center ";
	pictureItem = "BSF_GreenWall_Window_C_Kit";
	requiresFire = 1;
	BSF_Donor = 0;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_GreenWall_Window_C_Kit"}
	};
	returnedItems[] =
	{
		{1, "BSF_Paint_Bucket_Green"},
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_GreenWall_Window_L: Exile_AbstractCraftingRecipe
{
	name = "Recycle GW Window, Left";
	pictureItem = "BSF_GreenWall_Window_L_Kit";
	requiresFire = 1;
	BSF_Donor = 0;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_GreenWall_Window_L_Kit"}
	};
	returnedItems[] =
	{
		{1, "BSF_Paint_Bucket_Green"},
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_GreenWall_Window_R: Exile_AbstractCraftingRecipe
{
	name = "Recycle GW Window, Right";
	pictureItem = "BSF_GreenWall_Window_R_Kit";
	requiresFire = 1;
	BSF_Donor = 0;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_GreenWall_Window_R_Kit"}
	};
	returnedItems[] =
	{
		{1, "BSF_Paint_Bucket_Green"},
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_GreenWall_Window_Round: Exile_AbstractCraftingRecipe
{
	name = "Recycle GW Window, Angled ";
	pictureItem = "BSF_GreenWall_Window_Round_Kit";
	requiresFire = 1;
	BSF_Donor = 0;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_GreenWall_Window_Round_Kit"}
	};
	returnedItems[] =
	{
		{1, "BSF_Paint_Bucket_Green"},
		{6, "Exile_Item_MetalBoard"},
		{7, "Exile_Item_MetalScrews"},
		{5, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_GreenWall_Window_Tri: Exile_AbstractCraftingRecipe
{
	name = "Recycle GW Window, Angled ";
	pictureItem = "BSF_GreenWall_Window_Tri_Kit";
	requiresFire = 1;
	BSF_Donor = 0;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_GreenWall_Window_Tri_Kit"}
	};
	returnedItems[] =
	{
		{1, "BSF_Paint_Bucket_Green"},
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};


//////////////////////
/////	Floors
//////////////////////

class Recycle_BSF_GreenWall_Floor: Exile_AbstractCraftingRecipe
{
	name = "Recycle GW Floor";
	pictureItem = "BSF_GreenWall_Floor_Kit";
	requiresFire = 1;
	BSF_Donor = 0;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_GreenWall_Floor_Kit"}
	};
	returnedItems[] =
	{
		{1, "BSF_Paint_Bucket_Green"},
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_GreenWall_Floor_Half: Exile_AbstractCraftingRecipe
{
	name = "Recycle GW Floor, Half";
	pictureItem = "BSF_GreenWall_Floor_Half_Kit";
	requiresFire = 1;
	BSF_Donor = 0;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_GreenWall_Floor_Half_Kit"}
	};
	returnedItems[] =
	{
		{1, "BSF_Paint_Bucket_Green"},
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_GreenWall_Floor_Quarter: Exile_AbstractCraftingRecipe
{
	name = "Recycle GW Floor, Quarter";
	pictureItem = "BSF_GreenWall_Floor_Quarter_Kit";
	requiresFire = 1;
	BSF_Donor = 0;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_GreenWall_Floor_Quarter_Kit"}
	};
	returnedItems[] =
	{
		{1, "BSF_Paint_Bucket_Green"},
		{1, "Exile_Item_Cement"},
		{1, "Exile_Item_Sand"},
		{1, "Exile_Item_MetalBoard"},
		{1, "Exile_Item_MetalScrews"},
		{1, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_GreenWall_Floor_Round: Exile_AbstractCraftingRecipe
{
	name = "Recycle GW Floor, Round";
	pictureItem = "BSF_GreenWall_Floor_Round_Kit";
	requiresFire = 1;
	BSF_Donor = 0;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_GreenWall_Floor_Round_Kit"}
	};
	returnedItems[] =
	{
		{1, "BSF_Paint_Bucket_Green"},
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_GreenWall_Floor_Tri: Exile_AbstractCraftingRecipe
{
	name = "Recycle GW Floor, Angled";
	pictureItem = "BSF_GreenWall_Floor_Tri_Kit";
	requiresFire = 1;
	BSF_Donor = 0;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_GreenWall_Floor_Tri_Kit"}
	};
	returnedItems[] =
	{
		{1, "BSF_Paint_Bucket_Green"},
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_GreenWall_Floorport: Exile_AbstractCraftingRecipe
{
	name = "Recycle GW Floor Port";
	pictureItem = "BSF_GreenWall_Floorport_Kit";
	requiresFire = 1;
	BSF_Donor = 0;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_GreenWall_Floorport_Kit"}
	};
	returnedItems[] =
	{
		{1, "BSF_Paint_Bucket_Green"},
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_GreenWall_Floorport_Door: Exile_AbstractCraftingRecipe
{
	name = "Recycle GW Floor Port, Door";
	pictureItem = "BSF_GreenWall_Floorport_Door_Kit";
	requiresFire = 1;
	BSF_Donor = 0;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_GreenWall_Floorport_Door_Kit"}
	};
	returnedItems[] =
	{
		{1, "BSF_Paint_Bucket_Green"},
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_GreenWall_Stairport: Exile_AbstractCraftingRecipe
{
	name = "Recycle GW Stair Port";
	pictureItem = "BSF_GreenWall_Stairport_Kit";
	requiresFire = 1;
	BSF_Donor = 0;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_GreenWall_Stairport_Kit"}
	};
	returnedItems[] =
	{
		{1, "BSF_Paint_Bucket_Green"},
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_GreenWall_Floor_Hatchport: Exile_AbstractCraftingRecipe
{
	name = "Recycle GW Hatch Port";
	pictureItem = "BSF_GreenWall_Floor_Hatchport_Kit";
	requiresFire = 1;
	BSF_Donor = 0;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_GreenWall_Floor_Hatchport_Kit"}
	};
	returnedItems[] =
	{
		{1, "BSF_Paint_Bucket_Green"},
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_GreenWall_Floor_Hatch: Exile_AbstractCraftingRecipe
{
	name = "Recycle GW Hatch";
	pictureItem = "BSF_GreenWall_Floor_Hatch_Kit";
	requiresFire = 1;
	BSF_Donor = 0;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_GreenWall_Floor_Hatch_Kit"}
	};
	returnedItems[] =
	{
		{1, "BSF_Paint_Bucket_Green"},
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{3, "Exile_Item_MetalBoard"},
		{3, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

//////////////////////
/////	Stairs
//////////////////////


class Recycle_BSF_GreenWall_StairRail_L: Exile_AbstractCraftingRecipe
{
	name = "Recycle GW Stair Rail, Left";
	pictureItem = "BSF_GreenWall_StairRail_L_Kit";
	requiresFire = 1;
	BSF_Donor = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] =
	{
		{1, "BSF_GreenWall_StairRail_L_Kit"}
	};
	returnedItems[] =
	{
		{1, "BSF_Paint_Bucket_Green"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{3, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_GreenWall_StairRail_R: Exile_AbstractCraftingRecipe
{
	name = "Recycle GW Stair Rail, Right";
	pictureItem = "BSF_GreenWall_StairRail_R_Kit";
	requiresFire = 1;
	BSF_Donor = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] =
	{
		{1, "BSF_GreenWall_StairRail_R_Kit"}
	};
	returnedItems[] =
	{
		{1, "BSF_Paint_Bucket_Green"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{3, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_GreenWall_Stairs_2_C: Exile_AbstractCraftingRecipe
{
	name = "Recycle GW Stairs 1, Center";
	pictureItem = "BSF_GreenWall_Stairs_2_C_Kit";
	requiresFire = 1;
	BSF_Donor = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] =
	{
		{1, "BSF_GreenWall_Stairs_2_C_Kit"}
	};
	returnedItems[] =
	{
		{1, "BSF_Paint_Bucket_Green"},
		{3, "Exile_Item_MetalBoard"},
		{3, "Exile_Item_MetalScrews"},
		{3, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_GreenWall_Stairs_2_L: Exile_AbstractCraftingRecipe
{
	name = "Recycle GW Stairs 1, Left";
	pictureItem = "BSF_GreenWall_Stairs_2_L_Kit";
	requiresFire = 1;
	BSF_Donor = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] =
	{
		{1, "BSF_GreenWall_Stairs_2_L_Kit"}
	};
	returnedItems[] =
	{
		{1, "BSF_Paint_Bucket_Green"},
		{3, "Exile_Item_MetalBoard"},
		{4, "Exile_Item_MetalScrews"},
		{3, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_GreenWall_Stairs_2_R: Exile_AbstractCraftingRecipe
{
	name = "Recycle GW Stairs 1, Right";
	pictureItem = "BSF_GreenWall_Stairs_2_R_Kit";
	requiresFire = 1;
	BSF_Donor = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] =
	{
		{1, "BSF_GreenWall_Stairs_2_R_Kit"}
	};
	returnedItems[] =
	{
		{1, "BSF_Paint_Bucket_Green"},
		{3, "Exile_Item_MetalBoard"},
		{4, "Exile_Item_MetalScrews"},
		{3, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_GreenWall_Stairs_RoofTop: Exile_AbstractCraftingRecipe
{
	name = "Recycle GW Stairs Rooftop";
	pictureItem = "BSF_GreenWall_Stairs_RoofTop_Kit";
	requiresFire = 1;
	BSF_Donor = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] =
	{
		{1, "BSF_GreenWall_Stairs_RoofTop_Kit"}
	};
	returnedItems[] =
	{
		{1, "BSF_Paint_Bucket_Green"},
		{3, "Exile_Item_MetalBoard"},
		{4, "Exile_Item_MetalScrews"},
		{3, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_GreenWall_Stairs_Ext_C: Exile_AbstractCraftingRecipe
{
	name = "Recycle GW Stairs Low, Center";
	pictureItem = "BSF_GreenWall_Stairs_Ext_C_Kit";
	requiresFire = 1;
	BSF_Donor = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] =
	{
		{1, "BSF_GreenWall_Stairs_Ext_C_Kit"}
	};
	returnedItems[] =
	{
		{1, "BSF_Paint_Bucket_Green"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_GreenWall_Stairs_Ext_L: Exile_AbstractCraftingRecipe
{
	name = "Recycle GW Stairs Low, Left";
	pictureItem = "BSF_GreenWall_Stairs_Ext_L_Kit";
	requiresFire = 1;
	BSF_Donor = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] =
	{
		{1, "BSF_GreenWall_Stairs_Ext_L_Kit"}
	};
	returnedItems[] =
	{
		{1, "BSF_Paint_Bucket_Green"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_GreenWall_Stairs_Ext_R: Exile_AbstractCraftingRecipe
{
	name = "Recycle GW Stairs Low, Right";
	pictureItem = "BSF_GreenWall_Stairs_Ext_R_Kit";
	requiresFire = 1;
	BSF_Donor = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] =
	{
		{1, "BSF_GreenWall_Stairs_Ext_R_Kit"}
	};
	returnedItems[] =
	{
		{1, "BSF_Paint_Bucket_Green"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_GreenWall_Stairs_Spiral_2_L: Exile_AbstractCraftingRecipe
{
	name = "Recycle GW Stairs Spiral, Right";
	pictureItem = "BSF_GreenWall_Stairs_Spiral_2_L_Kit";
	requiresFire = 1;
	BSF_Donor = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] =
	{
		{1, "BSF_GreenWall_Stairs_Spiral_2_L_Kit"}
	};
	returnedItems[] =
	{
		{1, "BSF_Paint_Bucket_Green"},
		{3, "Exile_Item_MetalBoard"},
		{4, "Exile_Item_MetalScrews"},
		{3, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_GreenWall_Stairs_Spiral_2_R: Exile_AbstractCraftingRecipe
{
	name = "Recycle GW Stairs Spiral, Right";
	pictureItem = "BSF_GreenWall_Stairs_Spiral_2_R_Kit";
	requiresFire = 1;
	BSF_Donor = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] =
	{
		{1, "BSF_GreenWall_Stairs_Spiral_2_R_Kit"}
	};
	returnedItems[] =
	{
		{1, "BSF_Paint_Bucket_Green"},
		{3, "Exile_Item_MetalBoard"},
		{4, "Exile_Item_MetalScrews"},
		{3, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

//////////////////////
/////	Roofs
//////////////////////


class Recycle_BSF_GreenWall_Roof: Exile_AbstractCraftingRecipe
{
	name = "Recycle GW Roof";
	pictureItem = "BSF_GreenWall_Roof_Kit";
	requiresFire = 1;
	BSF_Donor = 0;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_GreenWall_Roof_Kit"}
	};
	returnedItems[] =
	{
		{1, "BSF_Paint_Bucket_Green"},
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_GreenWall_Roof_Corner: Exile_AbstractCraftingRecipe
{
	name = "Recycle GW Roof, Open Corner";
	pictureItem = "BSF_GreenWall_Roof_Corner_Kit";
	requiresFire = 1;
	BSF_Donor = 0;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_GreenWall_Roof_Corner_Kit"}
	};
	returnedItems[] =
	{
		{1, "BSF_Paint_Bucket_Green"},
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_GreenWall_Roof_Corner_Full: Exile_AbstractCraftingRecipe
{
	name = "Recycle GW Roof, Full Corner";
	pictureItem = "BSF_GreenWall_Roof_Corner_Full_Kit";
	requiresFire = 1;
	BSF_Donor = 0;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_GreenWall_Roof_Corner_Full_Kit"}
	};
	returnedItems[] =
	{
		{1, "BSF_Paint_Bucket_Green"},
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_GreenWall_Roof_Square: Exile_AbstractCraftingRecipe
{
	name = "Recycle GW Roof, Square";
	pictureItem = "BSF_GreenWall_Roof_Square_Kit";
	requiresFire = 1;
	BSF_Donor = 0;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_GreenWall_Roof_Square_Kit"}
	};
	returnedItems[] =
	{
		{1, "BSF_Paint_Bucket_Green"},
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_GreenWall_Roof_Round: Exile_AbstractCraftingRecipe
{
	name = "Recycle GW Roof, Round";
	pictureItem = "BSF_GreenWall_Roof_Round_Kit";
	requiresFire = 1;
	BSF_Donor = 0;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_GreenWall_Roof_Round_Kit"}
	};
	returnedItems[] =
	{
		{1, "BSF_Paint_Bucket_Green"},
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_GreenWall_Roof_Tri: Exile_AbstractCraftingRecipe
{
	name = "Recycle GW Roof, Angled";
	pictureItem = "BSF_GreenWall_Roof_Tri_Kit";
	requiresFire = 1;
	BSF_Donor = 0;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_GreenWall_Roof_Tri_Kit"}
	};
	returnedItems[] =
	{
		{1, "BSF_Paint_Bucket_Green"},
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_GreenWall_Roof_Third: Exile_AbstractCraftingRecipe
{
	name = "Recycle GW Roof, 1/3-ish";
	pictureItem = "BSF_GreenWall_Roof_Third_Kit";
	requiresFire = 1;
	BSF_Donor = 0;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_GreenWall_Roof_Third_Kit"}
	};
	returnedItems[] =
	{
		{1, "BSF_Paint_Bucket_Green"},
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_GreenWall_Roof_Half: Exile_AbstractCraftingRecipe
{
	name = "Recycle GW Roof, Half";
	pictureItem = "BSF_GreenWall_Roof_Half_Kit";
	requiresFire = 1;
	BSF_Donor = 0;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_GreenWall_Roof_Half_Kit"}
	};
	returnedItems[] =
	{
		{1, "BSF_Paint_Bucket_Green"},
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_GreenWall_Roof_Filler_L: Exile_AbstractCraftingRecipe
{
	name = "Recycle GW Roof Filler, Left";
	pictureItem = "BSF_GreenWall_Roof_Filler_L_Kit";
	requiresFire = 1;
	BSF_Donor = 0;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_GreenWall_Roof_Filler_L_Kit"}
	};
	returnedItems[] =
	{
		{1, "BSF_Paint_Bucket_Green"},
		{1, "Exile_Item_Cement"},
		{1, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{1, "Exile_Item_MetalScrews"},
		{1, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_GreenWall_Roof_Filler_R: Exile_AbstractCraftingRecipe
{
	name = "Recycle GW Roof Filler, Right";
	pictureItem = "BSF_GreenWall_Roof_Filler_R_Kit";
	requiresFire = 1;
	BSF_Donor = 0;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_GreenWall_Roof_Filler_R_Kit"}
	};
	returnedItems[] =
	{
		{1, "BSF_Paint_Bucket_Green"},
		{1, "Exile_Item_Cement"},
		{1, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{1, "Exile_Item_MetalScrews"},
		{1, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

//////////////////////
/////	Gates
//////////////////////

class Recycle_BSF_GreenWall_Gate_1L: Exile_AbstractCraftingRecipe
{
	name = "Recycle GW Gate, Left";
	pictureItem = "BSF_GreenWall_Gate_1L_Kit";
	requiresFire = 1;
	BSF_Donor = 0;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_GreenWall_Gate_1L_Kit"}
	};
	returnedItems[] =
	{
		{1, "BSF_Paint_Bucket_Green"},
		{2, "Exile_Item_Cement"},
		{1, "BSF_Paint_Bucket_Yellow"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox","BSF_Paintbrush"};
	category = "Recycle";
};

class Recycle_BSF_GreenWall_Gate_1R: Exile_AbstractCraftingRecipe
{
	name = "Recycle GW Gate, Right";
	pictureItem = "BSF_GreenWall_Gate_1R_Kit";
	requiresFire = 1;
	BSF_Donor = 0;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_GreenWall_Gate_1R_Kit"}
	};
	returnedItems[] =
	{
		{1, "BSF_Paint_Bucket_Green"},
		{2, "Exile_Item_Cement"},
		{1, "BSF_Paint_Bucket_Yellow"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox","BSF_Paintbrush"};
	category = "Recycle";
};




//////////////////////
/////	Walls
//////////////////////

class Recycle_BSF_CastleWall: Exile_AbstractCraftingRecipe
{
	name = "Recycle CW Wall";
	pictureItem = "BSF_CastleWall_Basic_Kit";
	requiresFire = 1;
	BSF_Donor = 0;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_CastleWall_Basic_Kit"}
	};
	returnedItems[] =
	{
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_CastleWall_Low: Exile_AbstractCraftingRecipe
{
	name = "Recycle CW, Low";
	pictureItem = "BSF_CastleWall_Low_Kit";
	requiresFire = 1;
	BSF_Donor = 0;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_CastleWall_Low_Kit"}
	};
	returnedItems[] =
	{
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_CastleWall_Round: Exile_AbstractCraftingRecipe
{
	name = "Recycle CW, Round";
	pictureItem = "BSF_CastleWall_Round_Kit";
	requiresFire = 1;
	BSF_Donor = 0;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_CastleWall_Round_Kit"}
	};
	returnedItems[] =
	{
		{6, "Exile_Item_MetalBoard"},
		{6, "Exile_Item_MetalScrews"},
		{5, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_CastleWall_Round_Low: Exile_AbstractCraftingRecipe
{
	name = "Recycle CW, Low Round Wall";
	pictureItem = "BSF_CastleWall_Round_Low_Kit";
	requiresFire = 1;
	BSF_Donor = 0;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_CastleWall_Round_Low_Kit"}
	};
	returnedItems[] =
	{
		{5, "Exile_Item_MetalBoard"},
		{5, "Exile_Item_MetalScrews"},
		{4, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_CastleWall_Tri: Exile_AbstractCraftingRecipe
{
	name = "Recycle CW, Angled ";
	pictureItem = "BSF_CastleWall_Tri_Kit";
	requiresFire = 1;
	BSF_Donor = 0;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_CastleWall_Tri_Kit"}
	};
	returnedItems[] =
	{
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_CastleWall_Tri_Low: Exile_AbstractCraftingRecipe
{
	name = "Recycle CW, Low, Angled ";
	pictureItem = "BSF_CastleWall_Tri_Low_Kit";
	requiresFire = 1;
	BSF_Donor = 0;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_CastleWall_Tri_Low_Kit"}
	};
	returnedItems[] =
	{
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_CastleWall_Half: Exile_AbstractCraftingRecipe
{
	name = "Recycle CW Half Wall";
	pictureItem = "BSF_CastleWall_Half_Kit";
	requiresFire = 1;
	BSF_Donor = 0;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_CastleWall_Half_Kit"}
	};
	returnedItems[] =
	{
		{3, "Exile_Item_MetalBoard"},
		{3, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_CastleWall_Third: Exile_AbstractCraftingRecipe
{
	name = "Recycle CW 1/3 Wall";
	pictureItem = "BSF_CastleWall_Third_Kit";
	requiresFire = 1;
	BSF_Donor = 0;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_CastleWall_Third_Kit"}
	};
	returnedItems[] =
	{
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};


//////////////////////
/////	Doors
//////////////////////

class Recycle_BSF_CastleWall_DoorOpening_C: Exile_AbstractCraftingRecipe
{
	name = "Recycle CW Door Opening, Center ";
	pictureItem = "BSF_CastleWall_DoorOpening_C_Kit";
	requiresFire = 1;
	BSF_Donor = 0;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_CastleWall_DoorOpening_C_Kit"}
	};
	returnedItems[] =
	{
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_CastleWall_DoorOpening_L: Exile_AbstractCraftingRecipe
{
	name = "Recycle CW Door Opening, Left ";
	pictureItem = "BSF_CastleWall_DoorOpening_L_Kit";
	requiresFire = 1;
	BSF_Donor = 0;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_CastleWall_DoorOpening_L_Kit"}
	};
	returnedItems[] =
	{
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_CastleWall_DoorOpening_R: Exile_AbstractCraftingRecipe
{
	name = "Recycle CW Door Opening, Right ";
	pictureItem = "BSF_CastleWall_DoorOpening_R_Kit";
	requiresFire = 1;
	BSF_Donor = 0;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_CastleWall_DoorOpening_R_Kit"}
	};
	returnedItems[] =
	{
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_CastleWall_DoorOpening_Round: Exile_AbstractCraftingRecipe
{
	name = "Recycle CW Door Opening, Round ";
	pictureItem = "BSF_CastleWall_DoorOpening_Round_Kit";
	requiresFire = 1;
	BSF_Donor = 0;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_CastleWall_DoorOpening_Round_Kit"}
	};
	returnedItems[] =
	{
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_CastleWall_DoorOpening_Tri: Exile_AbstractCraftingRecipe
{
	name = "Recycle CW Door Opening, Angled ";
	pictureItem = "BSF_CastleWall_DoorOpening_Tri_Kit";
	requiresFire = 1;
	BSF_Donor = 0;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_CastleWall_DoorOpening_Tri_Kit"}
	};
	returnedItems[] =
	{
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_CastleWall_Door_C: Exile_AbstractCraftingRecipe
{
	name = "Recycle CW Door, Center ";
	pictureItem = "BSF_CastleWall_Door_C_Kit";
	requiresFire = 1;
	BSF_Donor = 0;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_CastleWall_Door_C_Kit"}
	};
	returnedItems[] =
	{
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_CastleWall_Door_L: Exile_AbstractCraftingRecipe
{
	name = "Recycle CW Door, Left ";
	pictureItem = "BSF_CastleWall_Door_L_Kit";
	requiresFire = 1;
	BSF_Donor = 0;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_CastleWall_Door_L_Kit"}
	};
	returnedItems[] =
	{
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_CastleWall_Door_R: Exile_AbstractCraftingRecipe
{
	name = "Recycle CW Door, Right ";
	pictureItem = "BSF_CastleWall_Door_R_Kit";
	requiresFire = 1;
	BSF_Donor = 0;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_CastleWall_Door_R_Kit"}
	};
	returnedItems[] =
	{
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_CastleWall_Door_Round: Exile_AbstractCraftingRecipe
{
	name = "Recycle CW Door, Round ";
	pictureItem = "BSF_CastleWall_Door_Round_Kit";
	requiresFire = 1;
	BSF_Donor = 0;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_CastleWall_Door_Round_Kit"}
	};
	returnedItems[] =
	{
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_CastleWall_Door_Tri: Exile_AbstractCraftingRecipe
{
	name = "Recycle CW Door, Angled ";
	pictureItem = "BSF_CastleWall_Door_Tri_Kit";
	requiresFire = 1;
	BSF_Donor = 0;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_CastleWall_Door_Tri_Kit"}
	};
	returnedItems[] =
	{
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};


//////////////////////
/////	Windows
//////////////////////

class Recycle_BSF_CastleWall_WindowOpening_C: Exile_AbstractCraftingRecipe
{
	name = "Recycle CW Window Opening, Center ";
	pictureItem = "BSF_CastleWall_WindowOpening_C_Kit";
	requiresFire = 1;
	BSF_Donor = 0;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_CastleWall_WindowOpening_C_Kit"}
	};
	returnedItems[] =
	{
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_CastleWall_WindowOpening_L: Exile_AbstractCraftingRecipe
{
	name = "Recycle CW Window Opening, Left ";
	pictureItem = "BSF_CastleWall_WindowOpening_L_Kit";
	requiresFire = 1;
	BSF_Donor = 0;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_CastleWall_WindowOpening_L_Kit"}
	};
	returnedItems[] =
	{
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_CastleWall_WindowOpening_R: Exile_AbstractCraftingRecipe
{
	name = "Recycle CW Window Opening, Right ";
	pictureItem = "BSF_CastleWall_WindowOpening_R_Kit";
	requiresFire = 1;
	BSF_Donor = 0;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_CastleWall_WindowOpening_R_Kit"}
	};
	returnedItems[] =
	{
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_CastleWall_WindowOpening_Round: Exile_AbstractCraftingRecipe
{
	name = "Recycle CW Window, Angled ";
	pictureItem = "BSF_CastleWall_WindowOpening_Round_Kit";
	requiresFire = 1;
	BSF_Donor = 0;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_CastleWall_WindowOpening_Round_Kit"}
	};
	returnedItems[] =
	{
		{6, "Exile_Item_MetalBoard"},
		{6, "Exile_Item_MetalScrews"},
		{5, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_CastleWall_WindowOpening_Tri: Exile_AbstractCraftingRecipe
{
	name = "Recycle CW Window Opening, Angled ";
	pictureItem = "BSF_CastleWall_WindowOpening_Tri_Kit";
	requiresFire = 1;
	BSF_Donor = 0;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_CastleWall_WindowOpening_Tri_Kit"}
	};
	returnedItems[] =
	{
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};


class Recycle_BSF_CastleWall_Window_C: Exile_AbstractCraftingRecipe
{
	name = "Recycle CW Window, Center ";
	pictureItem = "BSF_CastleWall_Window_C_Kit";
	requiresFire = 1;
	BSF_Donor = 0;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_CastleWall_Window_C_Kit"}
	};
	returnedItems[] =
	{
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_CastleWall_Window_L: Exile_AbstractCraftingRecipe
{
	name = "Recycle CW Window, Left";
	pictureItem = "BSF_CastleWall_Window_L_Kit";
	requiresFire = 1;
	BSF_Donor = 0;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_CastleWall_Window_L_Kit"}
	};
	returnedItems[] =
	{
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_CastleWall_Window_R: Exile_AbstractCraftingRecipe
{
	name = "Recycle CW Window, Right";
	pictureItem = "BSF_CastleWall_Window_R_Kit";
	requiresFire = 1;
	BSF_Donor = 0;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_CastleWall_Window_R_Kit"}
	};
	returnedItems[] =
	{
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_CastleWall_Window_Round: Exile_AbstractCraftingRecipe
{
	name = "Recycle CW Window, Angled ";
	pictureItem = "BSF_CastleWall_Window_Round_Kit";
	requiresFire = 1;
	BSF_Donor = 0;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_CastleWall_Window_Round_Kit"}
	};
	returnedItems[] =
	{
		{6, "Exile_Item_MetalBoard"},
		{7, "Exile_Item_MetalScrews"},
		{5, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_CastleWall_Window_Tri: Exile_AbstractCraftingRecipe
{
	name = "Recycle CW Window, Angled ";
	pictureItem = "BSF_CastleWall_Window_Tri_Kit";
	requiresFire = 1;
	BSF_Donor = 0;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_CastleWall_Window_Tri_Kit"}
	};
	returnedItems[] =
	{
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};


//////////////////////
/////	Floors
//////////////////////

class Recycle_BSF_CastleWall_Floor: Exile_AbstractCraftingRecipe
{
	name = "Recycle CW Floor";
	pictureItem = "BSF_CastleWall_Floor_Kit";
	requiresFire = 1;
	BSF_Donor = 0;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_CastleWall_Floor_Kit"}
	};
	returnedItems[] =
	{
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_CastleWall_Floor_Half: Exile_AbstractCraftingRecipe
{
	name = "Recycle CW Floor, Half";
	pictureItem = "BSF_CastleWall_Floor_Half_Kit";
	requiresFire = 1;
	BSF_Donor = 0;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_CastleWall_Floor_Half_Kit"}
	};
	returnedItems[] =
	{
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_CastleWall_Floor_Quarter: Exile_AbstractCraftingRecipe
{
	name = "Recycle CW Floor, Quarter";
	pictureItem = "BSF_CastleWall_Floor_Quarter_Kit";
	requiresFire = 1;
	BSF_Donor = 0;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_CastleWall_Floor_Quarter_Kit"}
	};
	returnedItems[] =
	{
		{2, "Exile_Item_WoodPlank"},
		{1, "Exile_Item_MetalBoard"},
		{1, "Exile_Item_MetalScrews"},
		{1, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_CastleWall_Floor_Round: Exile_AbstractCraftingRecipe
{
	name = "Recycle CW Floor, Round";
	pictureItem = "BSF_CastleWall_Floor_Round_Kit";
	requiresFire = 1;
	BSF_Donor = 0;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_CastleWall_Floor_Round_Kit"}
	};
	returnedItems[] =
	{
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_CastleWall_Floor_Tri: Exile_AbstractCraftingRecipe
{
	name = "Recycle CW Floor, Angled";
	pictureItem = "BSF_CastleWall_Floor_Tri_Kit";
	requiresFire = 1;
	BSF_Donor = 0;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_CastleWall_Floor_Tri_Kit"}
	};
	returnedItems[] =
	{
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_CastleWall_Floorport: Exile_AbstractCraftingRecipe
{
	name = "Recycle CW Floor Port";
	pictureItem = "BSF_CastleWall_Floorport_Kit";
	requiresFire = 1;
	BSF_Donor = 0;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_CastleWall_Floorport_Kit"}
	};
	returnedItems[] =
	{
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_CastleWall_Floorport_Door: Exile_AbstractCraftingRecipe
{
	name = "Recycle CW Floor Port, Door";
	pictureItem = "BSF_CastleWall_Floorport_Door_Kit";
	requiresFire = 1;
	BSF_Donor = 0;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_CastleWall_Floorport_Door_Kit"}
	};
	returnedItems[] =
	{
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_CastleWall_Stairport: Exile_AbstractCraftingRecipe
{
	name = "Recycle CW Stair Port";
	pictureItem = "BSF_CastleWall_Stairport_Kit";
	requiresFire = 1;
	BSF_Donor = 0;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_CastleWall_Stairport_Kit"}
	};
	returnedItems[] =
	{
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_CastleWall_Floor_Hatchport: Exile_AbstractCraftingRecipe
{
	name = "Recycle CW Hatch Port";
	pictureItem = "BSF_CastleWall_Floor_Hatchport_Kit";
	requiresFire = 1;
	BSF_Donor = 0;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_CastleWall_Floor_Hatchport_Kit"}
	};
	returnedItems[] =
	{
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_CastleWall_Floor_Hatch: Exile_AbstractCraftingRecipe
{
	name = "Recycle CW Hatch";
	pictureItem = "BSF_CastleWall_Floor_Hatch_Kit";
	requiresFire = 1;
	BSF_Donor = 0;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_CastleWall_Floor_Hatch_Kit"}
	};
	returnedItems[] =
	{
		{2, "Exile_Item_WoodPlank"},
		{3, "Exile_Item_MetalBoard"},
		{3, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};


//////////////////////
/////	Roofs
//////////////////////


class Recycle_BSF_CastleWall_Roof: Exile_AbstractCraftingRecipe
{
	name = "Recycle CW Roof";
	pictureItem = "BSF_CastleWall_Roof_Kit";
	requiresFire = 1;
	BSF_Donor = 0;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_CastleWall_Roof_Kit"}
	};
	returnedItems[] =
	{
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_CastleWall_Roof_Corner: Exile_AbstractCraftingRecipe
{
	name = "Recycle CW Roof, Open Corner";
	pictureItem = "BSF_CastleWall_Roof_Corner_Kit";
	requiresFire = 1;
	BSF_Donor = 0;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_CastleWall_Roof_Corner_Kit"}
	};
	returnedItems[] =
	{
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_CastleWall_Roof_Corner_Full: Exile_AbstractCraftingRecipe
{
	name = "Recycle CW Roof, Full Corner";
	pictureItem = "BSF_CastleWall_Roof_Corner_Full_Kit";
	requiresFire = 1;
	BSF_Donor = 0;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_CastleWall_Roof_Corner_Full_Kit"}
	};
	returnedItems[] =
	{
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};


class Recycle_BSF_CastleWall_Roof_Square: Exile_AbstractCraftingRecipe
{
	name = "Recycle CW Roof, Square";
	pictureItem = "BSF_CastleWall_Roof_Square_Kit";
	requiresFire = 1;
	BSF_Donor = 0;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_CastleWall_Roof_Square_Kit"}
	};
	returnedItems[] =
	{
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_CastleWall_Roof_Round: Exile_AbstractCraftingRecipe
{
	name = "Recycle CW Roof, Round";
	pictureItem = "BSF_CastleWall_Roof_Round_Kit";
	requiresFire = 1;
	BSF_Donor = 0;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_CastleWall_Roof_Round_Kit"}
	};
	returnedItems[] =
	{
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_CastleWall_Roof_Tri: Exile_AbstractCraftingRecipe
{
	name = "Recycle CW Roof, Angled";
	pictureItem = "BSF_CastleWall_Roof_Tri_Kit";
	requiresFire = 1;
	BSF_Donor = 0;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_CastleWall_Roof_Tri_Kit"}
	};
	returnedItems[] =
	{
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_CastleWall_Roof_Third: Exile_AbstractCraftingRecipe
{
	name = "Recycle CW Roof, 1/3-ish";
	pictureItem = "BSF_CastleWall_Roof_Third_Kit";
	requiresFire = 1;
	BSF_Donor = 0;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_CastleWall_Roof_Third_Kit"}
	};
	returnedItems[] =
	{
		{1, "Exile_Item_WoodPlank"},
		{1, "Exile_Item_MetalBoard"},
		{1, "Exile_Item_MetalScrews"},
		{1, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_CastleWall_Roof_Half: Exile_AbstractCraftingRecipe
{
	name = "Recycle CW Roof, Half";
	pictureItem = "BSF_CastleWall_Roof_Half_Kit";
	requiresFire = 1;
	BSF_Donor = 0;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_CastleWall_Roof_Half_Kit"}
	};
	returnedItems[] =
	{
		{1, "Exile_Item_WoodPlank"},
		{1, "Exile_Item_MetalBoard"},
		{1, "Exile_Item_MetalScrews"},
		{1, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_CastleWall_Roof_Filler_L: Exile_AbstractCraftingRecipe
{
	name = "Recycle CW Roof Filler, Left";
	pictureItem = "BSF_CastleWall_Roof_Filler_L_Kit";
	requiresFire = 1;
	BSF_Donor = 0;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_CastleWall_Roof_Filler_L_Kit"}
	};
	returnedItems[] =
	{
		{1, "Exile_Item_WoodPlank"},
		{1, "Exile_Item_MetalBoard"},
		{1, "Exile_Item_MetalScrews"},
		{1, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_CastleWall_Roof_Filler_R: Exile_AbstractCraftingRecipe
{
	name = "Recycle CW Roof Filler, Right";
	pictureItem = "BSF_CastleWall_Roof_Filler_R_Kit";
	requiresFire = 1;
	BSF_Donor = 0;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_CastleWall_Roof_Filler_R_Kit"}
	};
	returnedItems[] =
	{
		{1, "Exile_Item_WoodPlank"},
		{1, "Exile_Item_MetalBoard"},
		{1, "Exile_Item_MetalScrews"},
		{1, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

//////////////////////
/////	Stairs
//////////////////////

class Recycle_BSF_CastleWall_Stairs_L_Kit: Exile_AbstractCraftingRecipe
{
	name = "Recycle CW Stairs Left";
	pictureItem = "BSF_CastleWall_Stairs_L_Kit";
	requiresFire = 1;
	BSF_Donor = 0;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_CastleWall_Stairs_L_Kit"}
	};
	returnedItems[] =
	{
		{3, "Exile_Item_Cement"},
		{3, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_CastleWall_Stairs_R_Kit: Exile_AbstractCraftingRecipe
{
	name = "Recycle CW Stairs Right";
	pictureItem = "BSF_CastleWall_Stairs_R_Kit";
	requiresFire = 1;
	BSF_Donor = 0;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_CastleWall_Stairs_R_Kit"}
	};
	returnedItems[] =
	{
		{3, "Exile_Item_Cement"},
		{3, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

//////////////////////
/////	Gates
//////////////////////

class Recycle_BSF_CastleWall_Gate_1L: Exile_AbstractCraftingRecipe
{
	name = "Recycle CW Gate, Left";
	pictureItem = "BSF_CastleWall_Gate_1L_Kit";
	requiresFire = 1;
	BSF_Donor = 0;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_CastleWall_Gate_1L_Kit"}
	};
	returnedItems[] =
	{
		{2, "Exile_Item_Cement"},
		{1, "BSF_Paint_Bucket_Yellow"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox","BSF_Paintbrush"};
	category = "Recycle";
};

class Recycle_BSF_CastleWall_Gate_1R: Exile_AbstractCraftingRecipe
{
	name = "Recycle CW Gate, Right";
	pictureItem = "BSF_CastleWall_Gate_1R_Kit";
	requiresFire = 1;
	BSF_Donor = 0;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_CastleWall_Gate_1R_Kit"}
	};
	returnedItems[] =
	{
		{2, "Exile_Item_Cement"},
		{1, "BSF_Paint_Bucket_Yellow"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox","BSF_Paintbrush"};
	category = "Recycle";
};

//////////////////////
/////	Walls
//////////////////////

class Recycle_BSF_StoneWall_Basic: Exile_AbstractCraftingRecipe
{
	name = "Recycle SW Wall";
	pictureItem = "BSF_StoneWall_Basic_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_StoneWall_Basic_Kit"}
	};
	returnedItems[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_StoneWall_Low: Exile_AbstractCraftingRecipe
{
	name = "Recycle SW, Low";
	pictureItem = "BSF_StoneWall_Low_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_StoneWall_Low_Kit"}
	};
	returnedItems[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_StoneWall_Round: Exile_AbstractCraftingRecipe
{
	name = "Recycle SW, Round";
	pictureItem = "BSF_StoneWall_Round_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_StoneWall_Round_Kit"}
	};
	returnedItems[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{6, "Exile_Item_WoodPlank"},
		{6, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_StoneWall_Round_Low: Exile_AbstractCraftingRecipe
{
	name = "Recycle SW, Low Round Wall";
	pictureItem = "BSF_StoneWall_Round_Low_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_StoneWall_Round_Low_Kit"}
	};
	returnedItems[] =
	{
		{1, "Exile_Item_Cement"},
		{1, "Exile_Item_Sand"},
		{5, "Exile_Item_WoodPlank"},
		{5, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_StoneWall_Tri: Exile_AbstractCraftingRecipe
{
	name = "Recycle SW, Angled ";
	pictureItem = "BSF_StoneWall_Tri_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_StoneWall_Tri_Kit"}
	};
	returnedItems[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_StoneWall_Tri_Low: Exile_AbstractCraftingRecipe
{
	name = "Recycle SW, Low, Angled ";
	pictureItem = "BSF_StoneWall_Tri_Low_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_StoneWall_Tri_Low_Kit"}
	};
	returnedItems[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_StoneWall_Half: Exile_AbstractCraftingRecipe
{
	name = "Recycle SW Half Wall";
	pictureItem = "BSF_StoneWall_Half_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_StoneWall_Half_Kit"}
	};
	returnedItems[] =
	{
		{1, "Exile_Item_Cement"},
		{1, "Exile_Item_Sand"},
		{3, "Exile_Item_WoodPlank"},
		{3, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_StoneWall_Third: Exile_AbstractCraftingRecipe
{
	name = "Recycle SW 1/3 Wall";
	pictureItem = "BSF_StoneWall_Third_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_StoneWall_Third_Kit"}
	};
	returnedItems[] =
	{
		{1, "Exile_Item_Cement"},
		{1, "Exile_Item_Sand"},
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

//////////////////////
/////	Doors
//////////////////////

class Recycle_BSF_StoneWall_DoorOpening_C: Exile_AbstractCraftingRecipe
{
	name = "Recycle SW Door Opening, Center ";
	pictureItem = "BSF_StoneWall_DoorOpening_C_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_StoneWall_DoorOpening_C_Kit"}
	};
	returnedItems[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_StoneWall_DoorOpening_L: Exile_AbstractCraftingRecipe
{
	name = "Recycle SW Door Opening, Left ";
	pictureItem = "BSF_StoneWall_DoorOpening_L_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_StoneWall_DoorOpening_L_Kit"}
	};
	returnedItems[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_StoneWall_DoorOpening_R: Exile_AbstractCraftingRecipe
{
	name = "Recycle SW Door Opening, Right ";
	pictureItem = "BSF_StoneWall_DoorOpening_R_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_StoneWall_DoorOpening_R_Kit"}
	};
	returnedItems[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_StoneWall_DoorOpening_Round: Exile_AbstractCraftingRecipe
{
	name = "Recycle SW Door Opening, Round ";
	pictureItem = "BSF_StoneWall_DoorOpening_Round_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_StoneWall_DoorOpening_Round_Kit"}
	};
	returnedItems[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_StoneWall_DoorOpening_Tri: Exile_AbstractCraftingRecipe
{
	name = "Recycle SW Door Opening, Angled ";
	pictureItem = "BSF_StoneWall_DoorOpening_Tri_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_StoneWall_DoorOpening_Tri_Kit"}
	};
	returnedItems[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_StoneWall_Door_C: Exile_AbstractCraftingRecipe
{
	name = "Recycle SW Door, Center ";
	pictureItem = "BSF_StoneWall_Door_C_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_StoneWall_Door_C_Kit"}
	};
	returnedItems[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_StoneWall_Door_L: Exile_AbstractCraftingRecipe
{
	name = "Recycle SW Door, Left ";
	pictureItem = "BSF_StoneWall_Door_L_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_StoneWall_Door_L_Kit"}
	};
	returnedItems[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_StoneWall_Door_R: Exile_AbstractCraftingRecipe
{
	name = "Recycle SW Door, Right ";
	pictureItem = "BSF_StoneWall_Door_R_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_StoneWall_Door_R_Kit"}
	};
	returnedItems[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_StoneWall_Door_Round: Exile_AbstractCraftingRecipe
{
	name = "Recycle SW Door, Round ";
	pictureItem = "BSF_StoneWall_Door_Round_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_StoneWall_Door_Round_Kit"}
	};
	returnedItems[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_StoneWall_Door_Tri: Exile_AbstractCraftingRecipe
{
	name = "Recycle SW Door, Angled ";
	pictureItem = "BSF_StoneWall_Door_Tri_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_StoneWall_Door_Tri_Kit"}
	};
	returnedItems[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

//////////////////////
/////	Windows
//////////////////////

class Recycle_BSF_StoneWall_WindowOpening_C: Exile_AbstractCraftingRecipe
{
	name = "Recycle SW Window Opening, Center ";
	pictureItem = "BSF_StoneWall_WindowOpening_C_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_StoneWall_WindowOpening_C_Kit"}
	};
	returnedItems[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_StoneWall_WindowOpening_L: Exile_AbstractCraftingRecipe
{
	name = "Recycle SW Window Opening, Left ";
	pictureItem = "BSF_StoneWall_WindowOpening_L_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_StoneWall_WindowOpening_L_Kit"}
	};
	returnedItems[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_StoneWall_WindowOpening_R: Exile_AbstractCraftingRecipe
{
	name = "Recycle SW Window Opening, Right ";
	pictureItem = "BSF_StoneWall_WindowOpening_R_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_StoneWall_WindowOpening_R_Kit"}
	};
	returnedItems[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_StoneWall_WindowOpening_Round: Exile_AbstractCraftingRecipe
{
	name = "Recycle SW Window, Angled ";
	pictureItem = "BSF_StoneWall_WindowOpening_Round_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_StoneWall_WindowOpening_Round_Kit"}
	};
	returnedItems[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{6, "Exile_Item_WoodPlank"},
		{6, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_StoneWall_WindowOpening_Tri: Exile_AbstractCraftingRecipe
{
	name = "Recycle SW Window Opening, Angled ";
	pictureItem = "BSF_StoneWall_WindowOpening_Tri_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_StoneWall_WindowOpening_Tri_Kit"}
	};
	returnedItems[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_StoneWall_Window_C: Exile_AbstractCraftingRecipe
{
	name = "Recycle SW Window, Center ";
	pictureItem = "BSF_StoneWall_Window_C_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_StoneWall_Window_C_Kit"}
	};
	returnedItems[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_StoneWall_Window_L: Exile_AbstractCraftingRecipe
{
	name = "Recycle SW Window, Left";
	pictureItem = "BSF_StoneWall_Window_L_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_StoneWall_Window_L_Kit"}
	};
	returnedItems[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_StoneWall_Window_R: Exile_AbstractCraftingRecipe
{
	name = "Recycle SW Window, Right";
	pictureItem = "BSF_StoneWall_Window_R_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_StoneWall_Window_R_Kit"}
	};
	returnedItems[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_StoneWall_Window_Round: Exile_AbstractCraftingRecipe
{
	name = "Recycle SW Window, Angled ";
	pictureItem = "BSF_StoneWall_Window_Round_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_StoneWall_Window_Round_Kit"}
	};
	returnedItems[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{6, "Exile_Item_WoodPlank"},
		{5, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_StoneWall_Window_Tri: Exile_AbstractCraftingRecipe
{
	name = "Recycle SW Window, Angled ";
	pictureItem = "BSF_StoneWall_Window_Tri_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_StoneWall_Window_Tri_Kit"}
	};
	returnedItems[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};


//////////////////////
/////	Floors
//////////////////////

class Recycle_BSF_StoneWall_Floor: Exile_AbstractCraftingRecipe
{
	name = "Recycle SW Floor";
	pictureItem = "BSF_StoneWall_Floor_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_StoneWall_Floor_Kit"}
	};
	returnedItems[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_StoneWall_Floor_Half: Exile_AbstractCraftingRecipe
{
	name = "Recycle SW Floor, Half";
	pictureItem = "BSF_StoneWall_Floor_Half_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_StoneWall_Floor_Half_Kit"}
	};
	returnedItems[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_StoneWall_Floor_Quarter: Exile_AbstractCraftingRecipe
{
	name = "Recycle SW Floor, Quarter";
	pictureItem = "BSF_StoneWall_Floor_Quarter_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_StoneWall_Floor_Quarter_Kit"}
	};
	returnedItems[] =
	{
		{1, "Exile_Item_Cement"},
		{1, "Exile_Item_Sand"},
		{1, "Exile_Item_WoodPlank"},
		{1, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_StoneWall_Floor_Round: Exile_AbstractCraftingRecipe
{
	name = "Recycle SW Floor, Round";
	pictureItem = "BSF_StoneWall_Floor_Round_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_StoneWall_Floor_Round_Kit"}
	};
	returnedItems[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_StoneWall_Floor_Tri: Exile_AbstractCraftingRecipe
{
	name = "Recycle SW Floor, Angled";
	pictureItem = "BSF_StoneWall_Floor_Tri_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_StoneWall_Floor_Tri_Kit"}
	};
	returnedItems[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_StoneWall_Floorport: Exile_AbstractCraftingRecipe
{
	name = "Recycle SW Floor Port";
	pictureItem = "BSF_StoneWall_Floorport_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_StoneWall_Floorport_Kit"}
	};
	returnedItems[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_StoneWall_Floorport_Door: Exile_AbstractCraftingRecipe
{
	name = "Recycle SW Floor Port, Door";
	pictureItem = "BSF_StoneWall_Floorport_Door_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_StoneWall_Floorport_Door_Kit"}
	};
	returnedItems[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_StoneWall_Stairport: Exile_AbstractCraftingRecipe
{
	name = "Recycle SW Stair Port";
	pictureItem = "BSF_StoneWall_Stairport_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_StoneWall_Stairport_Kit"}
	};
	returnedItems[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_StoneWall_Floor_Hatchport: Exile_AbstractCraftingRecipe
{
	name = "Recycle SW Hatch Port";
	pictureItem = "BSF_StoneWall_Floor_Hatchport_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_StoneWall_Floor_Hatchport_Kit"}
	};
	returnedItems[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_StoneWall_Floor_Hatch: Exile_AbstractCraftingRecipe
{
	name = "Recycle SW Hatch";
	pictureItem = "BSF_StoneWall_Floor_Hatch_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_StoneWall_Floor_Hatch_Kit"}
	};
	returnedItems[] =
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{3, "Exile_Item_WoodPlank"},
		{3, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};


//////////////////////
/////	Walls
//////////////////////

class Recycle_BSF_WoodWall_Basic: Exile_AbstractCraftingRecipe
{
	name = "Recycle WW Wall";
	pictureItem = "BSF_WoodWall_Basic_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_WoodWall_Basic_Kit"}
	};
	returnedItems[] =
	{
		{4, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_WoodWall_Low: Exile_AbstractCraftingRecipe
{
	name = "Recycle WW, Low";
	pictureItem = "BSF_WoodWall_Low_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_WoodWall_Low_Kit"}
	};
	returnedItems[] =
	{
		{4, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_WoodWall_Topper: Exile_AbstractCraftingRecipe
{
	name = "Recycle CW Wall Spacer";
	pictureItem = "BSF_WoodWall_Topper_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_WoodWall_Topper_Kit"}
	};
	returnedItems[] =
	{
		{4, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_WoodWall_Round: Exile_AbstractCraftingRecipe
{
	name = "Recycle WW, Round";
	pictureItem = "BSF_WoodWall_Round_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_WoodWall_Round_Kit"}
	};
	returnedItems[] =
	{
		{6, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_WoodWall_Round_Low: Exile_AbstractCraftingRecipe
{
	name = "Recycle WW, Low Round Wall";
	pictureItem = "BSF_WoodWall_Round_Low_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_WoodWall_Round_Low_Kit"}
	};
	returnedItems[] =
	{
		{5, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_WoodWall_Round_Topper: Exile_AbstractCraftingRecipe
{
	name = "Recycle WW Round Wall Spacer ";
	pictureItem = "BSF_WoodWall_Round_Topper_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_WoodWall_Round_Topper_Kit"}
	};
	returnedItems[] =
	{
		{4, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_WoodWall_Tri: Exile_AbstractCraftingRecipe
{
	name = "Recycle WW, Angled ";
	pictureItem = "BSF_WoodWall_Tri_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_WoodWall_Tri_Kit"}
	};
	returnedItems[] =
	{
		{4, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_WoodWall_Tri_Low: Exile_AbstractCraftingRecipe
{
	name = "Recycle WW, Low, Angled ";
	pictureItem = "BSF_WoodWall_Tri_Low_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_WoodWall_Tri_Low_Kit"}
	};
	returnedItems[] =
	{
		{4, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_WoodWall_Tri_Topper: Exile_AbstractCraftingRecipe
{
	name = "Recycle WW Angled Wall Spacer";
	pictureItem = "BSF_WoodWall_Tri_Topper_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_WoodWall_Tri_Topper_Kit"}
	};
	returnedItems[] =
	{
		{4, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_WoodWall_Half: Exile_AbstractCraftingRecipe
{
	name = "Recycle WW Half Wall";
	pictureItem = "BSF_WoodWall_Half_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_WoodWall_Half_Kit"}
	};
	returnedItems[] =
	{
		{3, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_WoodWall_Third: Exile_AbstractCraftingRecipe
{
	name = "Recycle WW 1/3 Wall";
	pictureItem = "BSF_WoodWall_Third_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_WoodWall_Third_Kit"}
	};
	returnedItems[] =
	{
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_WoodWall_Post: Exile_AbstractCraftingRecipe
{
	name = "Recycle CW Post";
	pictureItem = "BSF_WoodWall_Post_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_WoodWall_Post_Kit"}
	};
	returnedItems[] =
	{
		{4, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Foolbox"};
	category = "Recycle";
};


//////////////////////
/////	Doors
//////////////////////

class Recycle_BSF_WoodWall_DoorOpening_C: Exile_AbstractCraftingRecipe
{
	name = "Recycle WW Door Opening, Center ";
	pictureItem = "BSF_WoodWall_DoorOpening_C_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_WoodWall_DoorOpening_C_Kit"}
	};
	returnedItems[] =
	{
		{4, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_WoodWall_DoorOpening_L: Exile_AbstractCraftingRecipe
{
	name = "Recycle WW Door Opening, Left ";
	pictureItem = "BSF_WoodWall_DoorOpening_L_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_WoodWall_DoorOpening_L_Kit"}
	};
	returnedItems[] =
	{
		{4, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_WoodWall_DoorOpening_R: Exile_AbstractCraftingRecipe
{
	name = "Recycle WW Door Opening, Right ";
	pictureItem = "BSF_WoodWall_DoorOpening_R_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_WoodWall_DoorOpening_R_Kit"}
	};
	returnedItems[] =
	{
		{4, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_WoodWall_DoorOpening_Round: Exile_AbstractCraftingRecipe
{
	name = "Recycle WW Door Opening, Round ";
	pictureItem = "BSF_WoodWall_DoorOpening_Round_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_WoodWall_DoorOpening_Round_Kit"}
	};
	returnedItems[] =
	{
		{4, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_WoodWall_DoorOpening_Tri: Exile_AbstractCraftingRecipe
{
	name = "Recycle WW Door Opening, Angled ";
	pictureItem = "BSF_WoodWall_DoorOpening_Tri_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_WoodWall_DoorOpening_Tri_Kit"}
	};
	returnedItems[] =
	{
		{4, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_WoodWall_Door_C: Exile_AbstractCraftingRecipe
{
	name = "Recycle WW Door, Center ";
	pictureItem = "BSF_WoodWall_Door_C_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_WoodWall_Door_C_Kit"}
	};
	returnedItems[] =
	{
		{4, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_WoodWall_Door_L: Exile_AbstractCraftingRecipe
{
	name = "Recycle WW Door, Left ";
	pictureItem = "BSF_WoodWall_Door_L_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_WoodWall_Door_L_Kit"}
	};
	returnedItems[] =
	{
		{4, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_WoodWall_Door_R: Exile_AbstractCraftingRecipe
{
	name = "Recycle WW Door, Right ";
	pictureItem = "BSF_WoodWall_Door_R_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_WoodWall_Door_R_Kit"}
	};
	returnedItems[] =
	{
		{4, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_WoodWall_Door_Round: Exile_AbstractCraftingRecipe
{
	name = "Recycle WW Door, Round ";
	pictureItem = "BSF_WoodWall_Door_Round_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_WoodWall_Door_Round_Kit"}
	};
	returnedItems[] =
	{
		{4, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_WoodWall_Door_Tri: Exile_AbstractCraftingRecipe
{
	name = "Recycle WW Door, Angled ";
	pictureItem = "BSF_WoodWall_Door_Tri_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_WoodWall_Door_Tri_Kit"}
	};
	returnedItems[] =
	{
		{4, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Foolbox"};
	category = "Recycle";
};

//////////////////////
/////	Windows
//////////////////////

class Recycle_BSF_WoodWall_WindowOpening_C: Exile_AbstractCraftingRecipe
{
	name = "Recycle WW Window Opening, Center ";
	pictureItem = "BSF_WoodWall_WindowOpening_C_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_WoodWall_WindowOpening_C_Kit"}
	};
	returnedItems[] =
	{
		{4, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_WoodWall_WindowOpening_L: Exile_AbstractCraftingRecipe
{
	name = "Recycle WW Window Opening, Left ";
	pictureItem = "BSF_WoodWall_WindowOpening_L_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_WoodWall_WindowOpening_L_Kit"}
	};
	returnedItems[] =
	{
		{4, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_WoodWall_WindowOpening_R: Exile_AbstractCraftingRecipe
{
	name = "Recycle WW Window Opening, Right ";
	pictureItem = "BSF_WoodWall_WindowOpening_R_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_WoodWall_WindowOpening_R_Kit"}
	};
	returnedItems[] =
	{
		{4, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_WoodWall_WindowOpening_Round: Exile_AbstractCraftingRecipe
{
	name = "Recycle WW Window, Angled ";
	pictureItem = "BSF_WoodWall_WindowOpening_Round_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_WoodWall_WindowOpening_Round_Kit"}
	};
	returnedItems[] =
	{
		{6, "Exile_Item_MetalBoard"},
		{6, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_WoodWall_WindowOpening_Tri: Exile_AbstractCraftingRecipe
{
	name = "Recycle WW Window Opening, Angled ";
	pictureItem = "BSF_WoodWall_WindowOpening_Tri_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_WoodWall_WindowOpening_Tri_Kit"}
	};
	returnedItems[] =
	{
		{4, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_WoodWall_Window_C: Exile_AbstractCraftingRecipe
{
	name = "Recycle WW Window, Center ";
	pictureItem = "BSF_WoodWall_Window_C_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_WoodWall_Window_C_Kit"}
	};
	returnedItems[] =
	{
		{4, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_WoodWall_Window_L: Exile_AbstractCraftingRecipe
{
	name = "Recycle WW Window, Left";
	pictureItem = "BSF_WoodWall_Window_L_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_WoodWall_Window_L_Kit"}
	};
	returnedItems[] =
	{
		{4, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_WoodWall_Window_R: Exile_AbstractCraftingRecipe
{
	name = "Recycle WW Window, Right";
	pictureItem = "BSF_WoodWall_Window_R_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_WoodWall_Window_R_Kit"}
	};
	returnedItems[] =
	{
		{4, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_WoodWall_Window_Round: Exile_AbstractCraftingRecipe
{
	name = "Recycle WW Window, Angled ";
	pictureItem = "BSF_WoodWall_Window_Round_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_WoodWall_Window_Round_Kit"}
	};
	returnedItems[] =
	{
		{6, "Exile_Item_MetalBoard"},
		{7, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_WoodWall_Window_Tri: Exile_AbstractCraftingRecipe
{
	name = "Recycle WW Window, Angled ";
	pictureItem = "BSF_WoodWall_Window_Tri_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_WoodWall_Window_Tri_Kit"}
	};
	returnedItems[] =
	{
		{4, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Foolbox"};
	category = "Recycle";
};

//////////////////////
/////	Floors
//////////////////////

class Recycle_BSF_WoodWall_Floor: Exile_AbstractCraftingRecipe
{
	name = "Recycle WW Floor";
	pictureItem = "BSF_WoodWall_Floor_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_WoodWall_Floor_Kit"}
	};
	returnedItems[] =
	{
		{4, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_WoodWall_Floor_Half: Exile_AbstractCraftingRecipe
{
	name = "Recycle WW Floor, Half";
	pictureItem = "BSF_WoodWall_Floor_Half_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_WoodWall_Floor_Half_Kit"}
	};
	returnedItems[] =
	{
		{4, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_WoodWall_Floor_Quarter: Exile_AbstractCraftingRecipe
{
	name = "Recycle WW Floor, Quarter";
	pictureItem = "BSF_WoodWall_Floor_Quarter_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_WoodWall_Floor_Quarter_Kit"}
	};
	returnedItems[] =
	{
		{2, "Exile_Item_WoodPlank"},
		{1, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_WoodWall_Floor_Round: Exile_AbstractCraftingRecipe
{
	name = "Recycle WW Floor, Round";
	pictureItem = "BSF_WoodWall_Floor_Round_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_WoodWall_Floor_Round_Kit"}
	};
	returnedItems[] =
	{
		{4, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_WoodWall_Floor_Tri: Exile_AbstractCraftingRecipe
{
	name = "Recycle WW Floor, Angled";
	pictureItem = "BSF_WoodWall_Floor_Tri_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_WoodWall_Floor_Tri_Kit"}
	};
	returnedItems[] =
	{
		{4, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_WoodWall_Floorport: Exile_AbstractCraftingRecipe
{
	name = "Recycle WW Floor Port";
	pictureItem = "BSF_WoodWall_Floorport_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_WoodWall_Floorport_Kit"}
	};
	returnedItems[] =
	{
		{4, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_WoodWall_Floorport_Door: Exile_AbstractCraftingRecipe
{
	name = "Recycle WW Floor Port, Door";
	pictureItem = "BSF_WoodWall_Floorport_Door_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_WoodWall_Floorport_Door_Kit"}
	};
	returnedItems[] =
	{
		{4, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_WoodWall_Stairport: Exile_AbstractCraftingRecipe
{
	name = "Recycle WW Stair Port";
	pictureItem = "BSF_WoodWall_Stairport_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_WoodWall_Stairport_Kit"}
	};
	returnedItems[] =
	{
		{4, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_WoodWall_Floor_Hatchport: Exile_AbstractCraftingRecipe
{
	name = "Recycle WW Hatch Port";
	pictureItem = "BSF_WoodWall_Floor_Hatchport_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_WoodWall_Floor_Hatchport_Kit"}
	};
	returnedItems[] =
	{
		{4, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_WoodWall_Floor_Hatch: Exile_AbstractCraftingRecipe
{
	name = "Recycle WW Hatch";
	pictureItem = "BSF_WoodWall_Floor_Hatch_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_WoodWall_Floor_Hatch_Kit"}
	};
	returnedItems[] =
	{
		{4, "Exile_Item_WoodPlank"},
		{3, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Foolbox"};
	category = "Recycle";
};

//////////////////////
/////	Stairs
//////////////////////

class Recycle_BSF_WoodWall_StairRail_L: Exile_AbstractCraftingRecipe
{
	name = "Recycle IW Stair Rail, Left";
	pictureItem = "BSF_WoodWall_StairRail_L_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] =
	{
		{1, "BSF_WoodWall_StairRail_L_Kit"}
	};
	returnedItems[] =
	{
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_WoodWall_StairRail_R: Exile_AbstractCraftingRecipe
{
	name = "Recycle IW Stair Rail, Right";
	pictureItem = "BSF_WoodWall_StairRail_R_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] =
	{
		{1, "BSF_WoodWall_StairRail_R_Kit"}
	};
	returnedItems[] =
	{
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_WoodWall_Stairs_2_C: Exile_AbstractCraftingRecipe
{
	name = "Recycle IW Stairs 1, Center";
	pictureItem = "BSF_WoodWall_Stairs_2_C_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] =
	{
		{1, "BSF_WoodWall_Stairs_2_C_Kit"}
	};
	returnedItems[] =
	{
		{3, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_WoodWall_Stairs_2_L: Exile_AbstractCraftingRecipe
{
	name = "Recycle IW Stairs 1, Left";
	pictureItem = "BSF_WoodWall_Stairs_2_L_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] =
	{
		{1, "BSF_WoodWall_Stairs_2_L_Kit"}
	};
	returnedItems[] =
	{
		{4, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_WoodWall_Stairs_2_R: Exile_AbstractCraftingRecipe
{
	name = "Recycle IW Stairs 1, Right";
	pictureItem = "BSF_WoodWall_Stairs_2_R_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] =
	{
		{1, "BSF_WoodWall_Stairs_2_R_Kit"}
	};
	returnedItems[] =
	{
		{4, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_WoodWall_Stairs_RoofTop: Exile_AbstractCraftingRecipe
{
	name = "Recycle IW Stairs Rooftop";
	pictureItem = "BSF_WoodWall_Stairs_RoofTop_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] =
	{
		{1, "BSF_WoodWall_Stairs_RoofTop_Kit"}
	};
	returnedItems[] =
	{
		{4, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_WoodWall_Stairs_Ext_C: Exile_AbstractCraftingRecipe
{
	name = "Recycle IW Stairs Low, Center";
	pictureItem = "BSF_WoodWall_Stairs_Ext_C_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] =
	{
		{1, "BSF_WoodWall_Stairs_Ext_C_Kit"}
	};
	returnedItems[] =
	{
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_WoodWall_Stairs_Ext_L: Exile_AbstractCraftingRecipe
{
	name = "Recycle IW Stairs Low, Left";
	pictureItem = "BSF_WoodWall_Stairs_Ext_L_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] =
	{
		{1, "BSF_WoodWall_Stairs_Ext_L_Kit"}
	};
	returnedItems[] =
	{
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_WoodWall_Stairs_Ext_R: Exile_AbstractCraftingRecipe
{
	name = "Recycle IW Stairs Low, Right";
	pictureItem = "BSF_WoodWall_Stairs_Ext_R_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] =
	{
		{1, "BSF_WoodWall_Stairs_Ext_R_Kit"}
	};
	returnedItems[] =
	{
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_WoodWall_Stairs_Spiral_1_L: Exile_AbstractCraftingRecipe
{
	name = "Recycle IW Stairs Spiral, Left";
	pictureItem = "BSF_WoodWall_Stairs_Spiral_1_L_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] =
	{
		{1, "BSF_WoodWall_Stairs_Spiral_1_L_Kit"}
	};
	returnedItems[] =
	{
		{4, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_WoodWall_Stairs_Spiral_1_R: Exile_AbstractCraftingRecipe
{
	name = "Recycle IW Stairs Spiral, Right";
	pictureItem = "BSF_WoodWall_Stairs_Spiral_1_R_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] =
	{
		{1, "BSF_WoodWall_Stairs_Spiral_1_R_Kit"}
	};
	returnedItems[] =
	{
		{4, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Foolbox"};
	category = "Recycle";
};


//////////////////////
/////	Copper Roofs
//////////////////////


class Recycle_BSF_Copper_Roof: Exile_AbstractCraftingRecipe
{
	name = "Recycle Cu Roof";
	pictureItem = "BSF_Copper_Roof_Kit";
	requiresFire = 1;
	BSF_Donor = 0;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_Copper_Roof_Kit"}
	};
	returnedItems[] =
	{
		{2, "BSF_Item_Copper_Plates"},
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_Copper_Roof_Corner: Exile_AbstractCraftingRecipe
{
	name = "Recycle Cu Roof, Open Corner";
	pictureItem = "BSF_Copper_Roof_Corner_Kit";
	requiresFire = 1;
	BSF_Donor = 0;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_Copper_Roof_Corner_Kit"}
	};
	returnedItems[] =
	{
		{2, "BSF_Item_Copper_Plates"},
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_Copper_Roof_Corner_Full: Exile_AbstractCraftingRecipe
{
	name = "Recycle Cu Roof, Full Corner";
	pictureItem = "BSF_Copper_Roof_Corner_Full_Kit";
	requiresFire = 1;
	BSF_Donor = 0;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_Copper_Roof_Corner_Full_Kit"}
	};
	returnedItems[] =
	{
		{2, "BSF_Item_Copper_Plates"},
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_Copper_Roof_Square: Exile_AbstractCraftingRecipe
{
	name = "Recycle Cu Roof, Full Corner";
	pictureItem = "BSF_Copper_Roof_Square_Kit";
	requiresFire = 1;
	BSF_Donor = 0;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_Copper_Roof_Square_Kit"}
	};
	returnedItems[] =
	{
		{2, "BSF_Item_Copper_Plates"},
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};


class Recycle_BSF_Copper_Roof_Round: Exile_AbstractCraftingRecipe
{
	name = "Recycle Cu Roof, Round";
	pictureItem = "BSF_Copper_Roof_Round_Kit";
	requiresFire = 1;
	BSF_Donor = 0;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_Copper_Roof_Round_Kit"}
	};
	returnedItems[] =
	{
		{2, "BSF_Item_Copper_Plates"},
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_Copper_Roof_Tri: Exile_AbstractCraftingRecipe
{
	name = "Recycle Cu Roof, Angled";
	pictureItem = "BSF_Copper_Roof_Tri_Kit";
	requiresFire = 1;
	BSF_Donor = 0;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_Copper_Roof_Tri_Kit"}
	};
	returnedItems[] =
	{
		{2, "BSF_Item_Copper_Plates"},
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_Copper_Roof_Third: Exile_AbstractCraftingRecipe
{
	name = "Recycle Cu Roof, 1/3-ish";
	pictureItem = "BSF_Copper_Roof_Third_Kit";
	requiresFire = 1;
	BSF_Donor = 0;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_Copper_Roof_Third_Kit"}
	};
	returnedItems[] =
	{
		{2, "BSF_Item_Copper_Plates"},
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_Copper_Roof_Half: Exile_AbstractCraftingRecipe
{
	name = "Recycle Cu Roof, Half";
	pictureItem = "BSF_Copper_Roof_Half_Kit";
	requiresFire = 1;
	BSF_Donor = 0;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_Copper_Roof_Half_Kit"}
	};
	returnedItems[] =
	{
		{2, "BSF_Item_Copper_Plates"},
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_Copper_Roof_Filler_L: Exile_AbstractCraftingRecipe
{
	name = "Recycle Cu Roof Filler, Left";
	pictureItem = "BSF_Copper_Roof_Filler_L_Kit";
	requiresFire = 1;
	BSF_Donor = 0;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_Copper_Roof_Filler_L_Kit"}
	};
	returnedItems[] =
	{
		{2, "BSF_Item_Copper_Plates"},
		{2, "Exile_Item_WoodPlank"},
		{1, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_Copper_Roof_Filler_R: Exile_AbstractCraftingRecipe
{
	name = "Recycle Cu Roof Filler, Right";
	pictureItem = "BSF_Copper_Roof_Filler_R_Kit";
	requiresFire = 1;
	BSF_Donor = 0;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_Copper_Roof_Filler_R_Kit"}
	};
	returnedItems[] =
	{
		{2, "BSF_Item_Copper_Plates"},
		{2, "Exile_Item_WoodPlank"},
		{1, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};





//////////////////////
/////	Storage
//////////////////////

class Recycle_BSF_ArmorLocker_Base: Exile_AbstractCraftingRecipe
{
	name = "";
	pictureItem = "";
	components[] = {};
	requiresFire = 1;
	requiredInteractionModelGroup = "Welder";
	requiresConcreteMixer = 0;
	returnedItems[] =
	{
		{6, "Exile_Item_MetalBoard"},
		{4, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_BSF_ArmorLocker: Recycle_BSF_ArmorLocker_Base
{
	name = "Recycle BSF Armor Locker, Blank";
	pictureItem = "BSF_ArmorLocker_Kit";
	components[] = {{1, "BSF_ArmorLocker_Kit"}};
};

class Recycle_BSF_ArmorLocker_Attachments: Recycle_BSF_ArmorLocker_Base
{
	name = "Recycle BSF Armor Locker, Attachments";
	pictureItem = "BSF_ArmorLocker_Attachments_Kit";
	components[] = {{1, "BSF_ArmorLocker_Attachments_Kit"}};
};
class Recycle_BSF_ArmorLocker_Ammo: Recycle_BSF_ArmorLocker_Base
{
	name = "Recycle BSF Armor Locker, Ammo";
	pictureItem = "BSF_ArmorLocker_Ammo_Kit";
	components[] = {{1, "BSF_ArmorLocker_Ammo_Kit"}};
};
class Recycle_BSF_ArmorLocker_Armor: Recycle_BSF_ArmorLocker_Base
{
	name = "Recycle BSF Armor Locker, Armor";
	pictureItem = "BSF_ArmorLocker_Armor_Kit";
	components[] = {{1, "BSF_ArmorLocker_Armor_Kit"}};
};
class Recycle_BSF_ArmorLocker_Rifles: Recycle_BSF_ArmorLocker_Base
{
	name = "Recycle BSF Armor Locker, Rifles";
	pictureItem = "BSF_ArmorLocker_Rifles_Kit";
	components[] = {{1, "BSF_ArmorLocker_Rifles_Kit"}};
};
class Recycle_BSF_ArmorLocker_Pistols: Recycle_BSF_ArmorLocker_Base
{
	name = "Recycle BSF Armor Locker, Pistols";
	pictureItem = "BSF_ArmorLocker_Pistols_Kit";
	components[] = {{1, "BSF_ArmorLocker_Pistols_Kit"}};
};
class Recycle_BSF_ArmorLocker_Food: Recycle_BSF_ArmorLocker_Base
{
	name = "Recycle BSF Armor Locker, Food";
	pictureItem = "BSF_ArmorLocker_Food_Kit";
	components[] = {{1, "BSF_ArmorLocker_Food_Kit"}};
};
class Recycle_BSF_ArmorLocker_Tools: Recycle_BSF_ArmorLocker_Base
{
	name = "Recycle BSF Armor Locker, Tools";
	pictureItem = "BSF_ArmorLocker_Tools_Kit";
	components[] = {{1, "BSF_ArmorLocker_Tools_Kit"}};
};
class Recycle_BSF_ArmorLocker_Storage: Recycle_BSF_ArmorLocker_Base
{
	name = "Recycle BSF Armor Locker, Storage";
	pictureItem = "BSF_ArmorLocker_Storage_Kit";
	components[] = {{1, "BSF_ArmorLocker_Storage_Kit"}};
};
class Recycle_BSF_ArmorLocker_Explosives: Recycle_BSF_ArmorLocker_Base
{
	name = "Recycle BSF Armor Locker, Explosives";
	pictureItem = "BSF_ArmorLocker_Explosives_Kit";
	components[] = {{1, "BSF_ArmorLocker_Explosives_Kit"}};
};
class Recycle_BSF_ArmorLocker_HMG: Recycle_BSF_ArmorLocker_Base
{
	name = "Recycle BSF Armor Locker, HMG";
	pictureItem = "BSF_ArmorLocker_HMG_Kit";
	components[] = {{1, "BSF_ArmorLocker_HMG_Kit"}};
};
class Recycle_BSF_ArmorLocker_Junk: Recycle_BSF_ArmorLocker_Base
{
	name = "Recycle BSF Armor Locker, Junk";
	pictureItem = "BSF_ArmorLocker_Junk_Kit";
	components[] = {{1, "BSF_ArmorLocker_Junk_Kit"}};
};
class Recycle_BSF_ArmorLocker_Launchers: Recycle_BSF_ArmorLocker_Base
{
	name = "Recycle BSF Armor Locker, Launchers";
	pictureItem = "BSF_ArmorLocker_Launchers_Kit";
	components[] = {{1, "BSF_ArmorLocker_Launchers_Kit"}};
};
class Recycle_BSF_ArmorLocker_LMG: Recycle_BSF_ArmorLocker_Base
{
	name = "Recycle BSF Armor Locker, LMG";
	pictureItem = "BSF_ArmorLocker_LMG_Kit";
	components[] = {{1, "BSF_ArmorLocker_LMG_Kit"}};
};
class Recycle_BSF_ArmorLocker_Materials: Recycle_BSF_ArmorLocker_Base
{
	name = "Recycle BSF Armor Locker, Materials";
	pictureItem = "BSF_ArmorLocker_Materials_Kit";
	components[] = {{1, "BSF_ArmorLocker_Materials_Kit"}};
};
class Recycle_BSF_ArmorLocker_Medical: Recycle_BSF_ArmorLocker_Base
{
	name = "Recycle BSF Armor Locker, Medical";
	pictureItem = "BSF_ArmorLocker_Medical_Kit";
	components[] = {{1, "BSF_ArmorLocker_Medical_Kit"}};
};
class Recycle_BSF_ArmorLocker_Optics: Recycle_BSF_ArmorLocker_Base
{
	name = "Recycle BSF Armor Locker, Optics";
	pictureItem = "BSF_ArmorLocker_Optics_Kit";
	components[] = {{1, "BSF_ArmorLocker_Optics_Kit"}};
};
class Recycle_BSF_ArmorLocker_Packs: Recycle_BSF_ArmorLocker_Base
{
	name = "Recycle BSF Armor Locker, Packs";
	pictureItem = "BSF_ArmorLocker_Packs_Kit";
	components[] = {{1, "BSF_ArmorLocker_Packs_Kit"}};
};
class Recycle_BSF_ArmorLocker_Rifles_127: Recycle_BSF_ArmorLocker_Base
{
	name = "Recycle BSF Armor Locker, Rifles_127";
	pictureItem = "BSF_ArmorLocker_Rifles_127_Kit";
	components[] = {{1, "BSF_ArmorLocker_Rifles_127_Kit"}};
};
class Recycle_BSF_ArmorLocker_Rifles_338: Recycle_BSF_ArmorLocker_Base
{
	name = "Recycle BSF Armor Locker, Rifles_338";
	pictureItem = "BSF_ArmorLocker_Rifles_338_Kit";
	components[] = {{1, "BSF_ArmorLocker_Rifles_338_Kit"}};
};
class Recycle_BSF_ArmorLocker_Rifles_545: Recycle_BSF_ArmorLocker_Base
{
	name = "Recycle BSF Armor Locker, Rifles_545";
	pictureItem = "BSF_ArmorLocker_Rifles_545_Kit";
	components[] = {{1, "BSF_ArmorLocker_Rifles_545_Kit"}};
};
class Recycle_BSF_ArmorLocker_Rifles_556: Recycle_BSF_ArmorLocker_Base
{
	name = "Recycle BSF Armor Locker, Rifles_556";
	pictureItem = "BSF_ArmorLocker_Rifles_556_Kit";
	components[] = {{1, "BSF_ArmorLocker_Rifles_556_Kit"}};
};
class Recycle_BSF_ArmorLocker_Rifles_65: Recycle_BSF_ArmorLocker_Base
{
	name = "Recycle BSF Armor Locker, Rifles_65";
	pictureItem = "BSF_ArmorLocker_Rifles_65_Kit";
	components[] = {{1, "BSF_ArmorLocker_Rifles_65_Kit"}};
};
class Recycle_BSF_ArmorLocker_Rifles_762: Recycle_BSF_ArmorLocker_Base
{
	name = "Recycle BSF Armor Locker, Rifles_762";
	pictureItem = "BSF_ArmorLocker_Rifles_762_Kit";
	components[] = {{1, "BSF_ArmorLocker_Rifles_762_Kit"}};
};
class Recycle_BSF_ArmorLocker_Rifles_Misc: Recycle_BSF_ArmorLocker_Base
{
	name = "Recycle BSF Armor Locker, Rifles_Misc";
	pictureItem = "BSF_ArmorLocker_Rifles_Misc_Kit";
	components[] = {{1, "BSF_ArmorLocker_Rifles_Misc_Kit"}};
};
class Recycle_BSF_ArmorLocker_Rifles_Sniper: Recycle_BSF_ArmorLocker_Base
{
	name = "Recycle BSF Armor Locker, Rifles_Sniper";
	pictureItem = "BSF_ArmorLocker_Rifles_Sniper_Kit";
	components[] = {{1, "BSF_ArmorLocker_Rifles_Sniper_Kit"}};
};
class Recycle_BSF_ArmorLocker_Shotguns: Recycle_BSF_ArmorLocker_Base
{
	name = "Recycle BSF Armor Locker, Shotguns";
	pictureItem = "BSF_ArmorLocker_Shotguns_Kit";
	components[] = {{1, "BSF_ArmorLocker_Shotguns_Kit"}};
};
class Recycle_BSF_ArmorLocker_SMG: Recycle_BSF_ArmorLocker_Base
{
	name = "Recycle BSF Armor Locker, SMG";
	pictureItem = "BSF_ArmorLocker_SMG_Kit";
	components[] = {{1, "BSF_ArmorLocker_SMG_Kit"}};
};
class Recycle_BSF_ArmorLocker_ToSell: Recycle_BSF_ArmorLocker_Base
{
	name = "Recycle BSF Armor Locker, To Sell";
	pictureItem = "BSF_ArmorLocker_ToSell_Kit";
	components[] = {{1, "BSF_ArmorLocker_ToSell_Kit"}};
};
class Recycle_BSF_ArmorLocker_ToSort: Recycle_BSF_ArmorLocker_Base
{
	name = "Recycle BSF Armor Locker, To Sort";
	pictureItem = "BSF_ArmorLocker_ToSort_Kit";
	components[] = {{1, "BSF_ArmorLocker_ToSort_Kit"}};
};
class Recycle_BSF_ArmorLocker_UAV: Recycle_BSF_ArmorLocker_Base
{
	name = "Recycle BSF Armor Locker, UAV";
	pictureItem = "BSF_ArmorLocker_UAV_Kit";
	components[] = {{1, "BSF_ArmorLocker_UAV_Kit"}};
};
class Recycle_BSF_ArmorLocker_Uniforms: Recycle_BSF_ArmorLocker_Base
{
	name = "Recycle BSF Armor Locker, Uniforms";
	pictureItem = "BSF_ArmorLocker_Uniforms_Kit";
	components[] = {{1, "BSF_ArmorLocker_Uniforms_Kit"}};
};

class Recycle_Rugged_Cabinet1_Black: Exile_AbstractCraftingRecipe
{
	name = "Recycle BSF Rugged Cabinet, 4-Drawer, Black";
	pictureItem = "BSF_RuggedCabinet1_Black_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	requiresConcreteMixer = 0;
	components[] =
	{
		{1, "BSF_RuggedCabinet1_Black_Kit"}
	};
	returnedItems[] =
	{
		{4, "Exile_Item_MetalBoard"},
		{4, "Exile_Item_ZipTie"},
		{2, "Exile_Item_MetalWire"}
	};
	tools[] = {"Exile_Item_Foolbox"};
	category = "Recycle";
};
class Recycle_Rugged_Cabinet1_Olive: Recycle_Rugged_Cabinet1_Black
{
	name = "Recycle BSF Rugged Cabinet, 4-Drawer, Olive";
	pictureItem = "BSF_RuggedCabinet1_Olive_Kit";
	components[] = {{1, "BSF_RuggedCabinet1_Olive_Kit"}};
};
class Recycle_Rugged_Cabinet1_Sand: Recycle_Rugged_Cabinet1_Black
{
	name = "Recycle BSF Rugged Cabinet, 4-Drawer, Sand";
	pictureItem = "BSF_RuggedCabinet1_Sand_Kit";
	components[] = {{1, "BSF_RuggedCabinet1_Sand_Kit"}};
};

class Recycle_Rugged_Cabinet2_Black: Recycle_Rugged_Cabinet1_Black
{
	name = "Recycle BSF Rugged Cabinet, 7-Drawer, Black";
	pictureItem = "BSF_RuggedCabinet2_Black_Kit";
	components[] = {{1, "BSF_RuggedCabinet2_Black_Kit"}};
};
class Recycle_Rugged_Cabinet2_Olive: Recycle_Rugged_Cabinet1_Black
{
	name = "Recycle BSF Rugged Cabinet, 7-Drawer, Olive";
	pictureItem = "BSF_RuggedCabinet2_Olive_Kit";
	components[] = {{1, "BSF_RuggedCabinet2_Olive_Kit"}};
};
class Recycle_Rugged_Cabinet2_Sand: Recycle_Rugged_Cabinet1_Black
{
	name = "Recycle BSF Rugged Cabinet, 7-Drawer, Sand";
	pictureItem = "BSF_RuggedCabinet2_Sand_Kit";
	components[] = {{1, "BSF_RuggedCabinet2_Sand_Kit"}};
};

class Recycle_Rugged_Cabinet3_Black: Recycle_Rugged_Cabinet1_Black
{
	name = "Recycle BSF Rugged Cabinet, Compact, Black";
	pictureItem = "BSF_RuggedCabinet3_Black_Kit";
	components[] = {{1, "BSF_RuggedCabinet3_Black_Kit"}};
};
class Recycle_Rugged_Cabinet3_Olive: Recycle_Rugged_Cabinet1_Black
{
	name = "Recycle BSF Rugged Cabinet, Compact, Olive";
	pictureItem = "BSF_RuggedCabinet3_Olive_Kit";
	components[] = {{1, "BSF_RuggedCabinet3_Olive_Kit"}};
};
class Recycle_Rugged_Cabinet3_Sand: Recycle_Rugged_Cabinet1_Black
{
	name = "Recycle BSF Rugged Cabinet, Compact, Sand";
	pictureItem = "BSF_RuggedCabinet3_Sand_Kit";
	components[] = {{1, "BSF_RuggedCabinet3_Sand_Kit"}};
};

//////////////////////
/////	Exile Stuff
//////////////////////

class Recycle_BSF_MiscMetal_Base: Exile_AbstractCraftingRecipe
{
	name = "";
	pictureItem = "";
	components[] = {};
	requiresFire = 1;
	requiredInteractionModelGroup = "Workbench";
	requiresConcreteMixer = 0;
	returnedItems[] = {};
	tools[] = {"Exile_Item_Grinder","Exile_Item_Foolbox"};
	category = "Recycle";
};

class Recycle_Safe_Kit: Recycle_BSF_MiscMetal_Base
{
	name = "Recycle Safe";
	pictureItem = "Exile_Item_SafeKit";
	components[] = {{"Exile_Item_SafeKit"}};
	returnedItems[] =
	{
		{1, "Exile_Item_MetalScrews"},
		{5, "Exile_Item_JunkMetal"}
	};
};

class Recycle_FuelCanisterEmpty_Kit: Recycle_BSF_MiscMetal_Base
{
	name = "Recycle Empty Fuel CanisterEmpty";
	pictureItem = "Exile_Item_FuelCanisterEmpty";
	components[] = {{"Exile_Item_FuelCanisterEmpty"}};
	returnedItems[] =
	{
		{2, "Exile_Item_JunkMetal"}
	};
};

class Recycle_FireExtinguisher_Kit: Recycle_BSF_MiscMetal_Base
{
	name = "Recycle Fire Extinguisher";
	pictureItem = "Exile_Item_FireExtinguisher";
	components[] = {{"Exile_Item_FireExtinguisher"}};
	returnedItems[] =
	{
		{2, "Exile_Item_JunkMetal"}
	};
};

class Recycle_OilCanister_Kit: Recycle_BSF_MiscMetal_Base
{
	name = "Recycle Oil Canister";
	pictureItem = "Exile_Item_OilCanister";
	components[] = {{"Exile_Item_OilCanister"}};
	returnedItems[] =
	{
		{1, "Exile_Item_JunkMetal"}
	};
};

class Recycle_MetalBoard_Kit: Recycle_BSF_MiscMetal_Base
{
	name = "Recycle Metal Board";
	pictureItem = "Exile_Item_MetalBoard";
	components[] = {{"Exile_Item_MetalBoard"}};
	returnedItems[] =
	{
		{2, "Exile_Item_JunkMetal"}
	};
};

class Recycle_MetalPole_Kit: Recycle_BSF_MiscMetal_Base
{
	name = "Recycle Metal Pole";
	pictureItem = "Exile_Item_MetalPole";
	components[] = {{"Exile_Item_MetalPole"}};
	returnedItems[] =
	{
		{4, "Exile_Item_JunkMetal"}
	};
};

class Recycle_MetalHedgehogKit_Kit: Recycle_BSF_MiscMetal_Base
{
	name = "Recycle Hedgehog";
	pictureItem = "Exile_Item_MetalHedgehogKit";
	components[] = {{"Exile_Item_MetalHedgehogKit"}};
	returnedItems[] =
	{
		{4, "Exile_Item_MetalPole"}
	};
};

class Recycle_CookingPot_Kit: Recycle_BSF_MiscMetal_Base
{
	name = "Recycle Cooking Pot";
	pictureItem = "Exile_Item_CookingPot";
	components[] = {{"Exile_Item_CookingPot"}};
	returnedItems[] =
	{
		{1, "Exile_Item_JunkMetal"}
	};
};

class Recycle_Handsaw_Kit: Recycle_BSF_MiscMetal_Base
{
	name = "Recycle Handsaw";
	pictureItem = "Exile_Item_Handsaw";
	components[] = {{"Exile_Item_Handsaw"}};
	returnedItems[] =
	{
		{1, "Exile_Item_JunkMetal"}
	};
};

class Recycle_Grinder_Kit: Recycle_BSF_MiscMetal_Base
{
	name = "Recycle Grinder";
	pictureItem = "Exile_Item_Grinder";
	components[] = {{"Exile_Item_Grinder"}};
	returnedItems[] =
	{
		{1, "Exile_Item_JunkMetal"}
	};
};

class Recycle_Foolbox_Kit: Recycle_BSF_MiscMetal_Base
{
	name = "Recycle Foolbox";
	pictureItem = "Exile_Item_Foolbox";
	components[] = {{"Exile_Item_Foolbox"}};
	returnedItems[] =
	{
		{1, "Exile_Item_JunkMetal"}
	};
};

class Recycle_SledgeHammer_Kit: Recycle_BSF_MiscMetal_Base
{
	name = "Recycle SledgeHammer";
	pictureItem = "Exile_Melee_SledgeHammer";
	components[] = {{"Exile_Melee_SledgeHammer"}};
	returnedItems[] =
	{
		{1, "Exile_Item_JunkMetal"}
	};
};

class Recycle_Melee_Axe_Kit: Recycle_BSF_MiscMetal_Base
{
	name = "Recycle Melee Axe";
	pictureItem = "Exile_Melee_Axe";
	components[] = {{"Exile_Melee_Axe"}};
	returnedItems[] =
	{
		{1, "Exile_Item_JunkMetal"}
	};
};

class Recycle_Hammer_Kit: Recycle_BSF_MiscMetal_Base
{
	name = "Recycle Hammer";
	pictureItem = "Exile_Item_Hammer";
	components[] = {{"Exile_Item_Hammer"}};
	returnedItems[] =
	{
		{1, "Exile_Item_JunkMetal"}
	};
};

class Recycle_Shovel_Kit: Recycle_BSF_MiscMetal_Base
{
	name = "Recycle Shovel";
	pictureItem = "Exile_Item_Shovel";
	components[] = {{"Exile_Item_Shovel"}};
	returnedItems[] =
	{
		{1, "Exile_Item_JunkMetal"}
	};
};

class Recycle_Wrench_Kit: Recycle_BSF_MiscMetal_Base
{
	name = "Recycle Wrench";
	pictureItem = "Exile_Item_Wrench";
	components[] = {{"Exile_Item_Wrench"}};
	returnedItems[] =
	{
		{1, "Exile_Item_JunkMetal"}
	};
};

class Recycle_PortableGenerator_Kit: Recycle_BSF_MiscMetal_Base
{
	name = "Recycle Portable Generator";
	pictureItem = "Exile_Item_PortableGeneratorKit";
	components[] = {{"Exile_Item_PortableGeneratorKit"}};
	returnedItems[] =
	{
		{4, "Exile_Item_MetalBoard"},
		{1, "Exile_Item_ExtensionCord"}
	};
};

class Recycle_ExtensionCord_Kit: Recycle_BSF_MiscMetal_Base
{
	name = "Recycle Extension Cord";
	pictureItem = "Exile_Item_ExtensionCord";
	components[] = {{"Exile_Item_ExtensionCord"}};
	returnedItems[] =
	{
		{1, "Exile_Item_MetalWire"}
	};
};

class Recycle_CamoTentKit_Kit: Recycle_BSF_MiscMetal_Base
{
	name = "Recycle Camo Tent";
	pictureItem = "Exile_Item_CamoTentKit";
	components[] = {{"Exile_Item_CamoTentKit"}};
	returnedItems[] =
	{
		{1, "BSF_Tarp_WD"},
		{1, "Exile_Item_Rope"},
		{1, "Exile_Item_MetalPole"}
	};
};



//////////////////////
/////	Tents
//////////////////////

class Recycle_BSF_Tent_Base: Exile_AbstractCraftingRecipe
{
	name = "";
	pictureItem = "";
	components[] = {};
	requiredInteractionModelGroup = "WorkBench";
	requiresFire = 0;
	tools[] =
	{
		"Exile_Item_Pliers"
	};
	returnedItems[] =
	{
		{4, "BSF_Tarp_WD"},
		{4, "Exile_Item_Rope"},
		{4, "Exile_Item_MetalPole"}
	};
	category = "Recycle";
};


class Recycle_BSF_TentOpen_AAF: Recycle_BSF_Tent_Base
{
	name = "Recycle Field Tent - Digital";
	pictureItem = "BSF_TentOpen_AAF_Kit";
	components[] = {{1, "BSF_TentOpen_AAF_Kit"}};
	returnedItems[] =
	{
		{4, "BSF_Tarp_WD"},
		{4, "Exile_Item_Rope"},
		{4, "Exile_Item_MetalPole"}
	};
};

class Recycle_BSF_TentOpen_CSAT: Recycle_BSF_Tent_Base
{
	name = "Recycle Field Tent - Hex";
	pictureItem = "BSF_TentOpen_CSAT_Kit";
	components[] = {{1, "BSF_TentOpen_CSAT_Kit"}};
	returnedItems[] =
	{
		{4, "BSF_Tarp_D"},
		{4, "Exile_Item_Rope"},
		{4, "Exile_Item_MetalPole"}
	};
};

class Recycle_BSF_TentOpen_Desert: Recycle_BSF_Tent_Base
{
	name = "Recycle Field Tent - Desert";
	pictureItem = "BSF_TentOpen_Desert_Kit";
	components[] = {{1, "BSF_TentOpen_Desert_Kit"}};
	returnedItems[] =
	{
		{4, "BSF_Tarp_Brown"},
		{4, "Exile_Item_Rope"},
		{4, "Exile_Item_MetalPole"}
	};
};

class Recycle_BSF_TentOpen_LDF: Recycle_BSF_Tent_Base
{
	name = "Recycle Field Tent - Woodland";
	pictureItem = "BSF_TentOpen_LDF_Kit";
	components[] = {{1, "BSF_TentOpen_LDF_Kit"}};
	returnedItems[] =
	{
		{4, "BSF_Tarp_WD"},
		{4, "Exile_Item_Rope"},
		{4, "Exile_Item_MetalPole"}
	};
};

class Recycle_BSF_TentOpen_White: Recycle_BSF_Tent_Base
{
	name = "Recycle Field Tent - White";
	pictureItem = "BSF_TentOpen_White_Kit";
	components[] = {{1, "BSF_TentOpen_White_Kit"}};
	returnedItems[] =
	{
		{4, "BSF_Tarp_White"},
		{4, "Exile_Item_Rope"},
		{4, "Exile_Item_MetalPole"}
	};
};

class Recycle_BSF_TentOpen_IDAP: Recycle_BSF_Tent_Base
{
	name = "Recycle Field Tent - IDAP";
	pictureItem = "BSF_TentOpen_IDAP_Kit";
	components[] = {{1, "BSF_TentOpen_IDAP_Kit"}};
	returnedItems[] =
	{
		{4, "BSF_Tarp_White"},
		{4, "Exile_Item_Rope"},
		{4, "Exile_Item_MetalPole"}
	};
};

class Recycle_BSF_TentOpen_Yellow_Kit: Recycle_BSF_Tent_Base
{
	name = "Recycle Field Tent - Yellow";
	pictureItem = "BSF_TentOpen_Yellow_Kit";
	components[] = {{1, "BSF_TentOpen_Yellow_Kit"}};
	returnedItems[] =
	{
		{4, "BSF_Tarp_Yellow"},
		{4, "Exile_Item_Rope"},
		{4, "Exile_Item_MetalPole"}
	};
};


class Recycle_BSF_TentOuter_AAF: Recycle_BSF_Tent_Base
{
	name = "Recycle Field Tent Outer - Digital";
	pictureItem = "BSF_TentOuter_AAF_Kit";
	components[] = {{1, "BSF_TentOuter_AAF_Kit"}};

	returnedItems[] =
	{
		{2, "BSF_Tarp_WD"},
		{3, "Exile_Item_Rope"},
		{4, "Exile_Item_MetalPole"}
	};
};

class Recycle_BSF_TentOuter_CSAT: Recycle_BSF_Tent_Base
{
	name = "Recycle Field Tent Outer - Hex";
	pictureItem = "BSF_TentOuter_CSAT_Kit";
	components[] = {{1, "BSF_TentOuter_CSAT_Kit"}};
	returnedItems[] =
	{
		{2, "BSF_Tarp_D"},
		{3, "Exile_Item_Rope"},
		{4, "Exile_Item_MetalPole"}
	};
};

class Recycle_BSF_TentOuter_Desert: Recycle_BSF_Tent_Base
{
	name = "Recycle Field Tent Outer - Desert";
	pictureItem = "BSF_TentOuter_Desert_Kit";
	components[] = {{1, "BSF_TentOuter_Desert_Kit"}};
	returnedItems[] =
	{
		{2, "BSF_Tarp_Brown"},
		{3, "Exile_Item_Rope"},
		{4, "Exile_Item_MetalPole"}
	};
};

class Recycle_BSF_TentOuter_LDF: Recycle_BSF_Tent_Base
{
	name = "Recycle Field Tent Outer - Woodland";
	pictureItem = "BSF_TentOuter_LDF_Kit";
	components[] = {{1, "BSF_TentOuter_LDF_Kit"}};
	returnedItems[] =
	{
		{2, "BSF_Tarp_WD"},
		{3, "Exile_Item_Rope"},
		{4, "Exile_Item_MetalPole"}
	};
};

class Recycle_BSF_TentOuter_White: Recycle_BSF_Tent_Base
{
	name = "Recycle Field Tent Outer - White";
	pictureItem = "BSF_TentOuter_White_Kit";
	components[] = {{1, "BSF_TentOuter_White_Kit"}};
	returnedItems[] =
	{
		{2, "BSF_Tarp_White"},
		{3, "Exile_Item_Rope"},
		{4, "Exile_Item_MetalPole"}
	};
};

class Recycle_BSF_TentOuter_IDAP: Recycle_BSF_Tent_Base
{
	name = "Recycle Field Tent Outer - IDAP";
	pictureItem = "BSF_TentOuter_IDAP_Kit";
	components[] = {{1, "BSF_TentOuter_IDAP_Kit"}};
	returnedItems[] =
	{
		{2, "BSF_Tarp_White"},
		{3, "Exile_Item_Rope"},
		{4, "Exile_Item_MetalPole"}
	};
};

class Recycle_BSF_TentOuter_Yellow_Kit: Recycle_BSF_Tent_Base
{
	name = "Recycle Field Tent Outer - Yellow";
	pictureItem = "BSF_TentOuter_Yellow_Kit";
	components[] = {{1, "BSF_TentOuter_Yellow_Kit"}};
	returnedItems[] =
	{
		{2, "BSF_Tarp_Yellow"},
		{3, "Exile_Item_Rope"},
		{4, "Exile_Item_MetalPole"}
	};
};


class Recycle_BSF_TentInner_AAF: Recycle_BSF_Tent_Base
{
	name = "Recycle Field Tent Inner - Digital";
	pictureItem = "BSF_TentInner_AAF_Kit";
	components[] = {{1, "BSF_TentInner_AAF_Kit"}};
	returnedItems[] =
	{
		{2, "BSF_Tarp1_Blue"},
		{3, "Exile_Item_Rope"},
		{4, "Exile_Item_MetalPole"}
	};
};

class Recycle_BSF_TentInner_CSAT: Recycle_BSF_Tent_Base
{
	name = "Recycle Field Tent Inner - Hex";
	pictureItem = "BSF_TentInner_CSAT_Kit";
	components[] = {{1, "BSF_TentInner_CSAT_Kit"}};
	returnedItems[] =
	{
		{2, "BSF_Tarp_D"},
		{3, "Exile_Item_Rope"},
		{4, "Exile_Item_MetalPole"}
	};
};

class Recycle_BSF_TentInner_Desert: Recycle_BSF_Tent_Base
{
	name = "Recycle Field Tent Inner - Desert";
	pictureItem = "BSF_TentInner_Desert_Kit";
	components[] = {{1, "BSF_TentInner_Desert_Kit"}};
	returnedItems[] =
	{
		{2, "BSF_Tarp_Brown"},
		{3, "Exile_Item_Rope"},
		{4, "Exile_Item_MetalPole"}
	};
};

class Recycle_BSF_TentInner_White: Recycle_BSF_Tent_Base
{
	name = "Recycle Field Tent Inner - Whie";
	pictureItem = "BSF_TentInner_White_Kit";
	components[] = {{1, "BSF_TentInner_White_Kit"}};
	returnedItems[] =
	{
		{2, "BSF_Tarp_White"},
		{3, "Exile_Item_Rope"},
		{4, "Exile_Item_MetalPole"}
	};
};

class Recycle_BSF_TentInner_LDF: Recycle_BSF_Tent_Base
{
	name = "Recycle Field Tent Inner - Woodland";
	pictureItem = "BSF_TentInner_LDF_Kit";
	components[] = {{1, "BSF_TentInner_LDF_Kit"}};
	returnedItems[] =
	{
		{2, "BSF_Tarp_WD"},
		{3, "Exile_Item_Rope"},
		{4, "Exile_Item_MetalPole"}
	};
};

class Recycle_BSF_TentInner_Yellow: Recycle_BSF_Tent_Base
{
	name = "Recycle Field Tent Inner - Yellow";
	pictureItem = "BSF_TentInner_Yellow_Kit";
	components[] = {{1, "BSF_TentInner_Yellow_Kit"}};
	returnedItems[] =
	{
		{2, "BSF_Tarp_Yellow"},
		{3, "Exile_Item_Rope"},
		{4, "Exile_Item_MetalPole"}
	};
};


class Recycle_BSF_TentDecon_AAF: Recycle_BSF_Tent_Base
{
	name = "Recycle Decontamination Tent - Digital";
	pictureItem = "BSF_TentDecon_AAF_Kit";
	components[] = {{1, "BSF_TentDecon_AAF_Kit"}};
	returnedItems[] =
	{
		{2, "BSF_Tarp_WD"},
		{3, "Exile_Item_Rope"},
		{4, "Exile_Item_MetalPole"}
	};
};

class Recycle_BSF_TentDecon_CSAT: Recycle_BSF_Tent_Base
{
	name = "Recycle Decontamination Tent - Hex";
	pictureItem = "BSF_TentInner_CSAT_Kit";
	components[] = {{1, "BSF_TentInner_CSAT_Kit"}};
	returnedItems[] =
	{
		{2, "BSF_Tarp_D"},
		{3, "Exile_Item_Rope"},
		{4, "Exile_Item_MetalPole"}
	};
};

class Recycle_BSF_TentDecon_Desert: Recycle_BSF_Tent_Base
{
	name = "Recycle Decontamination Tent - Desert";
	pictureItem = "BSF_TentDecon_Desert_Kit";
	components[] = {{1, "BSF_TentDecon_Desert_Kit"}};
	returnedItems[] =
	{
		{2, "BSF_Tarp_Brown"},
		{3, "Exile_Item_Rope"},
		{4, "Exile_Item_MetalPole"}
	};
};

class Recycle_BSF_TentDecon_LDF: Recycle_BSF_Tent_Base
{
	name = "Recycle Decontamination Tent - Woodland";
	pictureItem = "BSF_TentDecon_LDF_Kit";
	components[] = {{1, "BSF_TentDecon_LDF_Kit"}};
	returnedItems[] =
	{
		{2, "BSF_Tarp_WD"},
		{3, "Exile_Item_Rope"},
		{4, "Exile_Item_MetalPole"}
	};
};

class Recycle_BSF_TentDecon_White: Recycle_BSF_Tent_Base
{
	name = "Recycle Decontamination Tent - White";
	pictureItem = "BSF_TentDecon_White_Kit";
	components[] = {{1, "BSF_TentDecon_White_Kit"}};
	returnedItems[] =
	{
		{2, "BSF_Tarp_White"},
		{3, "Exile_Item_Rope"},
		{4, "Exile_Item_MetalPole"}
	};
};

class Recycle_BSF_TentDecon_IDAP: Recycle_BSF_Tent_Base
{
	name = "Recycle Decontamination Tent - IDAP";
	pictureItem = "BSF_TentDecon_IDAP_Kit";
	components[] = {{1, "BSF_TentDecon_IDAP_Kit"}};
	returnedItems[] =
	{
		{2, "BSF_Tarp_White"},
		{3, "Exile_Item_Rope"},
		{4, "Exile_Item_MetalPole"}
	};
};

class Recycle_BSF_TentDecon_Yellow: Recycle_BSF_Tent_Base
{
	name = "Recycle Decontamination Tent - Yellow";
	pictureItem = "BSF_TentDecon_Yellow_Kit";
	components[] = {{1, "BSF_TentDecon_Yellow_Kit"}};
	returnedItems[] =
	{
		{2, "BSF_Tarp_Yellow"},
		{3, "Exile_Item_Rope"},
		{4, "Exile_Item_MetalPole"}
	};
};


class Recycle_BSF_TentConnectOpen_AAF: Recycle_BSF_Tent_Base
{
	name = "Recycle Connector Tent - Digital";
	pictureItem = "BSF_TentConnectOpen_AAF_Kit";
	components[] = {{1, "BSF_TentConnectOpen_AAF_Kit"}};
	returnedItems[] =
	{
		{1, "BSF_Tarp_WD"},
		{2, "Exile_Item_Rope"},
		{2, "Exile_Item_MetalPole"}
	};
};

class Recycle_BSF_TentConnectOpen_CSAT: Recycle_BSF_Tent_Base
{
	name = "Recycle Connector Tent - Hex";
	pictureItem = "BSF_TentConnectOpen_CSAT_Kit";
	components[] = {{1, "BSF_TentConnectOpen_CSAT_Kit"}};
	returnedItems[] =
	{
		{1, "BSF_Tarp_D"},
		{2, "Exile_Item_Rope"},
		{2, "Exile_Item_MetalPole"}
	};
};

class Recycle_BSF_TentConnectOpen_Desert: Recycle_BSF_Tent_Base
{
	name = "Recycle Connector Tent - Desert";
	pictureItem = "BSF_TentConnectOpen_Desert_Kit";
	components[] = {{1, "BSF_TentConnectOpen_Desert_Kit"}};
	returnedItems[] =
	{
		{1, "BSF_Tarp_Brown"},
		{2, "Exile_Item_Rope"},
		{2, "Exile_Item_MetalPole"}
	};
};

class Recycle_BSF_TentConnectOpen_LDF: Recycle_BSF_Tent_Base
{
	name = "Recycle Connector Tent - Woodland";
	pictureItem = "BSF_TentConnectOpen_LDF_Kit";
	components[] = {{1, "BSF_TentConnectOpen_LDF_Kit"}};
	returnedItems[] =
	{
		{1, "BSF_Tarp_WD"},
		{2, "Exile_Item_Rope"},
		{2, "Exile_Item_MetalPole"}
	};
};

class Recycle_BSF_TentConnectOpen_White: Recycle_BSF_Tent_Base
{
	name = "Recycle Connector Tent - White";
	pictureItem = "BSF_TentConnectOpen_White_Kit";
	components[] = {{1, "BSF_TentConnectOpen_White_Kit"}};
	returnedItems[] =
	{
		{1, "BSF_Tarp_White"},
		{2, "Exile_Item_Rope"},
		{2, "Exile_Item_MetalPole"}
	};
};

class Recycle_BSF_TentConnectOpen_Yellow: Recycle_BSF_Tent_Base
{
	name = "Recycle Connector Tent - Yellow";
	pictureItem = "BSF_TentConnectOpen_Yellow_Kit";
	components[] = {{1, "BSF_TentConnectOpen_Yellow_Kit"}};
	returnedItems[] =
	{
		{1, "BSF_Tarp_Yellow"},
		{2, "Exile_Item_Rope"},
		{2, "Exile_Item_MetalPole"}
	};
};


class Recycle_BSF_TentConnectClosed_AAF: Recycle_BSF_Tent_Base
{
	name = "Recycle Connector Tent, Closed - Digital";
	pictureItem = "BSF_TentConnectClosed_AAF_Kit";
	components[] = {{1, "BSF_TentConnectClosed_AAF_Kit"}};
	returnedItems[] =
	{
		{1, "BSF_Tarp_WD"},
		{2, "Exile_Item_Rope"},
		{2, "Exile_Item_MetalPole"}
	};
};

class Recycle_BSF_TentConnectClosed_CSAT: Recycle_BSF_Tent_Base
{
	name = "Recycle Connector Tent, Closed - Hex";
	pictureItem = "BSF_TentConnectClosed_CSAT_Kit";
	components[] = {{1, "BSF_TentConnectClosed_CSAT_Kit"}};
	returnedItems[] =
	{
		{1, "BSF_Tarp_D"},
		{2, "Exile_Item_Rope"},
		{2, "Exile_Item_MetalPole"}
	};
};

class Recycle_BSF_TentConnectClosed_Desert: Recycle_BSF_Tent_Base
{
	name = "Recycle Connector Tent, Closed - Desert";
	pictureItem = "BSF_TentConnectClosed_Desert_Kit";
	components[] = {{1, "BSF_TentConnectClosed_Desert_Kit"}};
	returnedItems[] =
	{
		{1, "BSF_Tarp_Brown"},
		{2, "Exile_Item_Rope"},
		{2, "Exile_Item_MetalPole"}
	};
};

class Recycle_BSF_TentConnectClosed_White: Recycle_BSF_Tent_Base
{
	name = "Recycle Connector Tent, Closed - White";
	pictureItem = "BSF_TentConnectClosed_White_Kit";
	components[] = {{1, "BSF_TentConnectClosed_White_Kit"}};
	returnedItems[] =
	{
		{1, "BSF_Tarp_White"},
		{2, "Exile_Item_Rope"},
		{2, "Exile_Item_MetalPole"}
	};
};

class Recycle_BSF_TentConnectClosed_LDF: Recycle_BSF_Tent_Base
{
	name = "Recycle Connector Tent, Closed - Woodland";
	pictureItem = "BSF_TentConnectClosed_LDF_Kit";
	components[] = {{1, "BSF_TentConnectClosed_LDF_Kit"}};
	returnedItems[] =
	{
		{1, "BSF_Tarp_WD"},
		{2, "Exile_Item_Rope"},
		{2, "Exile_Item_MetalPole"}
	};
};

class Recycle_BSF_TentConnectClosed_Yellow: Recycle_BSF_Tent_Base
{
	name = "Recycle Connector Tent, Closed - Yellow";
	pictureItem = "BSF_TentConnectClosed_Yellow_Kit";
	components[] = {{1, "BSF_TentConnectClosed_Yellow_Kit"}};
	returnedItems[] =
	{
		{1, "BSF_Tarp_Yellow"},
		{2, "Exile_Item_Rope"},
		{2, "Exile_Item_MetalPole"}
	};
};


class Recycle_BSF_TentConnectCross_AAF: Recycle_BSF_Tent_Base
{
	name = "Recycle Connector Tent, Cross - Digital";
	pictureItem = "BSF_TentConnectCross_AAF_Kit";
	components[] = {{1, "BSF_TentConnectCross_AAF_Kit"}};
	returnedItems[] =
	{
		{1, "BSF_Tarp_WD"},
		{2, "Exile_Item_Rope"},
		{2, "Exile_Item_MetalPole"}
	};
};

class Recycle_BSF_TentConnectCross_CSAT: Recycle_BSF_Tent_Base
{
	name = "Recycle Connector Tent, Cross - Hex";
	pictureItem = "BSF_TentConnectCross_CSAT_Kit";
	components[] = {{1, "BSF_TentConnectCross_CSAT_Kit"}};
	returnedItems[] =
	{
		{1, "BSF_Tarp_D"},
		{2, "Exile_Item_Rope"},
		{2, "Exile_Item_MetalPole"}
	};
};

class Recycle_BSF_TentConnectCross_Desert: Recycle_BSF_Tent_Base
{
	name = "Recycle Connector Tent, Cross - Hex";
	pictureItem = "BSF_TentConnectCross_Desert_Kit";
	components[] = {{1, "BSF_TentConnectCross_Desert_Kit"}};
	returnedItems[] =
	{
		{1, "BSF_Tarp_Brown"},
		{2, "Exile_Item_Rope"},
		{2, "Exile_Item_MetalPole"}
	};
};

class Recycle_BSF_TentConnectCross_White: Recycle_BSF_Tent_Base
{
	name = "Recycle Connector Tent, Cross - Hex";
	pictureItem = "BSF_TentConnectCross_White_Kit";
	components[] = {{1, "BSF_TentConnectCross_White_Kit"}};
	returnedItems[] =
	{
		{1, "BSF_Tarp_White"},
		{2, "Exile_Item_Rope"},
		{2, "Exile_Item_MetalPole"}
	};
};

class Recycle_BSF_TentConnectCross_LDF: Recycle_BSF_Tent_Base
{
	name = "Recycle Connector Tent, Cross - Hex";
	pictureItem = "BSF_TentConnectCross_LDF_Kit";
	components[] = {{1, "BSF_TentConnectCross_LDF_Kit"}};
	returnedItems[] =
	{
		{1, "BSF_Tarp_WD"},
		{2, "Exile_Item_Rope"},
		{2, "Exile_Item_MetalPole"}
	};
};

class Recycle_BSF_TentConnectCross_Yellow: Recycle_BSF_Tent_Base
{
	name = "Recycle Connector Tent, Cross - Hex";
	pictureItem = "BSF_TentConnectCross_Yellow_Kit";
	components[] = {{1, "BSF_TentConnectCross_Yellow_Kit"}};
	returnedItems[] =
	{
		{1, "BSF_Tarp_Yellow"},
		{2, "Exile_Item_Rope"},
		{2, "Exile_Item_MetalPole"}
	};
};

/* Not working yet
class Recycle_BSF_TentFloorLight: Exile_AbstractCraftingRecipe
{
	name = "Recycle Field Tent Floor, Light";
	pictureItem = "BSF_TentFloor_Light_Kit";
	components[] = {{1, "BSF_TentFloor_Light_Kit"}};
	tools[] =
	{
		"Exile_Item_Foolbox"
	};
	returnedItems[] =
	{
		{1, "BSF_Tarp1_Blue"},
		{1, "Exile_Item_Rope"}
	};
};

class Recycle_BSF_TentFloorDark: Exile_AbstractCraftingRecipe
{
	name = "Recycle Field Tent Floor, Dark";
	pictureItem = "BSF_TentFloor_Dark_Kit";
	components[] = {{1, "BSF_TentFloor_Dark_Kit"}};
	tools[] =
	{
		"Exile_Item_Foolbox"
	};
	returnedItems[] =
	{
		{1, "BSF_Tarp1_Blue"},
		{1, "Exile_Item_Rope"}
	};
};
*/

class Recycle_BSF_SolarTentOlive: Recycle_BSF_Tent_Base
{
	name = "Recycle Backpacking Tent - Olive";
	pictureItem = "BSF_SolarTentOlive_Kit";
	components[] = {{1, "BSF_SolarTentOlive_Kit"}};
	returnedItems[] =
	{
		{1, "BSF_Tarp_Green"},
		{2, "Exile_Item_Rope"},
		{1, "Exile_Item_MetalPole"}
	};
};

class Recycle_BSF_SolarTentSand: Recycle_BSF_Tent_Base
{
	name = "Recycle Backpacking Tent - Sand";
	pictureItem = "BSF_SolarTentSand_Kit";
	components[] = {{1, "BSF_SolarTentSand_Kit"}};
	returnedItems[] =
	{
		{1, "BSF_Tarp_Brown"},
		{2, "Exile_Item_Rope"},
		{1, "Exile_Item_MetalPole"}
	};
};

class Recycle_BSF_SolarTentBlue: Recycle_BSF_SolarTentOlive
{
	name = "Recycle Backpacking Tent - Blue";
	pictureItem = "BSF_SolarTentBlue_Kit";
	components[] = {{1, "BSF_SolarTentBlue_Kit"}};
	returnedItems[] =
	{
		{1, "BSF_Tarp_Blue"},
		{2, "Exile_Item_Rope"},
		{1, "Exile_Item_MetalPole"}
	};
};

class Recycle_BSF_SolarTentRed: Recycle_BSF_SolarTentOlive
{
	name = "Recycle Backpacking Tent - Red";
	pictureItem = "BSF_SolarTentRed_Kit";
	components[] = {{1, "BSF_SolarTentRed_Kit"}};
	returnedItems[] =
	{
		{1, "BSF_Tarp_White"},
		{2, "Exile_Item_Rope"},
		{1, "Exile_Item_MetalPole"}
	};
};
