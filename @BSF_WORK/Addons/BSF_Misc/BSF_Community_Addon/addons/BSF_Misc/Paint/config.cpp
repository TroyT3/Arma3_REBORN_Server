////////////////////////////////////////////////////////////////////
//DeRap: Paint\config.bin
//Produced from mikero's Dos Tools Dll version 9.98
//https://mikero.bytex.digital/Downloads
//'now' is Wed Jul 09 20:03:48 2025 : 'file' last modified on Sat Jul 05 11:43:12 2025
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class BSF_Misc_Paint
	{
		addonRootClass = "BSF_Misc";
		requiredVersion = 1.92;
		requiredAddons[] = {"a3_data_f","exile_assets"};
		units[] = {"BSF_Item_Paintbrush","BSF_Item_Paint_Bucket_Green","BSF_Item_Paint_Bucket_White","BSF_Item_Paint_Bucket_Red","BSF_Item_Paint_Bucket_Yellow","BSF_Item_Paint_Bucket_Black"};
		weapons[] = {};
		magazines[] = {"BSF_Paintbrush","BSF_Paint_Bucket_Green","BSF_Paint_Bucket_White","BSF_Paint_Bucket_Red","BSF_Paint_Bucket_Yellow","BSF_Paint_Bucket_Black"};
		ammo[] = {};
	};
};
class CfgMagazines
{
	class Exile_AbstractItem;
	class BSF_Paintbrush: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Paint Brush";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Paint\data\ui\icon_BSF_Paintbrush_CA.paa";
		Author = "Troy - BS-Free";
		descriptionShort = "It's a paint brush.  What more do you need?";
		model = "\BSF_Community_Addon\addons\BSF_Misc\Paint\BSF_Paintbrush.p3d";
		editorCategory = "EdCat_Things";
		editorSubcategory = "EdSubcat_Tools";
		mass = 5;
	};
	class BSF_Paint_Bucket_Base: Exile_AbstractItem
	{
		scope = 0;
		displayName = "BSF Paint Bucket";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Paint\data\ui\icon_BSF_Paint_Bucket_Green_CA.paa";
		Author = "Troy - BS-Free";
		model = "\BSF_Community_Addon\addons\BSF_Misc\Paint\BSF_Paint_Bucket.p3d";
		editorCategory = "EdCat_Things";
		editorSubcategory = "EdSubcat_Tools";
		mass = 20;
	};
	class BSF_Paint_Bucket_Green: BSF_Paint_Bucket_Base
	{
		scope = 2;
		displayName = "BSF Paint, Green";
		descriptionShort = "A half empty bucket of green paint. Half full? Hmmm";
		model = "\BSF_Community_Addon\addons\BSF_Misc\Paint\BSF_Paint_Bucket_Green.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Paint\data\ui\icon_BSF_Paint_Bucket_Green_CA.paa";
	};
	class BSF_Paint_Bucket_White: BSF_Paint_Bucket_Base
	{
		scope = 2;
		displayName = "BSF Paint, White";
		descriptionShort = "A half empty bucket of white paint. Mr. Miyagi says 'paint the fence'";
		model = "\BSF_Community_Addon\addons\BSF_Misc\Paint\BSF_Paint_Bucket_White.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Paint\data\ui\icon_BSF_Paint_Bucket_White_CA.paa";
	};
	class BSF_Paint_Bucket_Red: BSF_Paint_Bucket_Base
	{
		scope = 2;
		displayName = "BSF Paint, Red";
		descriptionShort = "A half empty bucket of red paint. Now all I need is a little Corvette";
		model = "\BSF_Community_Addon\addons\BSF_Misc\Paint\BSF_Paint_Bucket_Red.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Paint\data\ui\icon_BSF_Paint_Bucket_Red_CA.paa";
	};
	class BSF_Paint_Bucket_Yellow: BSF_Paint_Bucket_Base
	{
		scope = 2;
		displayName = "BSF Paint, Yellow";
		descriptionShort = "A half empty bucket of yellow paint. Now where's that submarine?";
		model = "\BSF_Community_Addon\addons\BSF_Misc\Paint\BSF_Paint_Bucket_Yellow.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Paint\data\ui\icon_BSF_Paint_Bucket_Yellow_CA.paa";
	};
	class BSF_Paint_Bucket_Black: BSF_Paint_Bucket_Base
	{
		scope = 2;
		displayName = "BSF Paint, Black";
		descriptionShort = "A half empty bucket of black paint. No colors anymore I want them to turn black... ";
		model = "\BSF_Community_Addon\addons\BSF_Misc\Paint\BSF_Paint_Bucket_Black.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Paint\data\ui\icon_BSF_Paint_Bucket_Black_CA.paa";
	};
};
class CfgVehicles
{
	class NonStrategic;
	class BSF_Item_Paintbrush: NonStrategic
	{
		scope = 2;
		displayName = "BSF Paint Brush";
		editorPreview = "\BSF_Community_Addon\addons\BSF_Misc\Paint\data\ui\icon_BSF_Paintbrush_CA.paa";
		Author = "Troy - BS-Free";
		descriptionShort = "";
		descriptionUse = "";
		model = "\BSF_Community_Addon\addons\BSF_Misc\Paint\BSF_Paintbrush.p3d";
		editorCategory = "EdCat_Things";
		editorSubcategory = "EdSubcat_Tools";
		mass = 1;
	};
	class BSF_Item_Paint_Bucket_Base: NonStrategic
	{
		scope = 0;
		displayName = "BSF Paint Bucket";
		editorPreview = "\BSF_Community_Addon\addons\BSF_Misc\Paint\data\ui\icon_BSF_Paint_Bucket_Green_CA.paa";
		Author = "Troy - BS-Free";
		descriptionShort = "";
		descriptionUse = "";
		model = "\BSF_Community_Addon\addons\BSF_Misc\Paint\BSF_Paint_Bucket.p3d";
		editorCategory = "EdCat_Things";
		editorSubcategory = "EdSubcat_Tools";
		mass = 20;
	};
	class BSF_Item_Paint_Bucket_Green: BSF_Item_Paint_Bucket_Base
	{
		scope = 2;
		displayName = "BSF Paint, Green";
		model = "\BSF_Community_Addon\addons\BSF_Misc\Paint\BSF_Paint_Bucket_Green.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Paint\data\ui\icon_BSF_Paint_Bucket_Green_CA.paa";
	};
	class BSF_Item_Paint_Bucket_White: BSF_Item_Paint_Bucket_Base
	{
		scope = 2;
		displayName = "BSF Paint, White";
		model = "\BSF_Community_Addon\addons\BSF_Misc\Paint\BSF_Paint_Bucket_White.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Paint\data\ui\icon_BSF_Paint_Bucket_White_CA.paa";
	};
	class BSF_Item_Paint_Bucket_Red: BSF_Item_Paint_Bucket_Base
	{
		scope = 2;
		displayName = "BSF Paint, Red";
		model = "\BSF_Community_Addon\addons\BSF_Misc\Paint\BSF_Paint_Bucket_Red.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Paint\data\ui\icon_BSF_Paint_Bucket_Red_CA.paa";
	};
	class BSF_Item_Paint_Bucket_Yellow: BSF_Item_Paint_Bucket_Base
	{
		scope = 2;
		displayName = "BSF Paint, Yellow";
		model = "\BSF_Community_Addon\addons\BSF_Misc\Paint\BSF_Paint_Bucket_Yellow.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Paint\data\ui\icon_BSF_Paint_Bucket_Yellow_CA.paa";
	};
	class BSF_Item_Paint_Bucket_Black: BSF_Item_Paint_Bucket_Base
	{
		scope = 2;
		displayName = "BSF Paint, Black";
		model = "\BSF_Community_Addon\addons\BSF_Misc\Paint\BSF_Paint_Bucket_Black.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Paint\data\ui\icon_BSF_Paint_Bucket_Black_CA.paa";
	};
};
