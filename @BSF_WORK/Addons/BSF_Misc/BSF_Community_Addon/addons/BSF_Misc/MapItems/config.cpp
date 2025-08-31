////////////////////////////////////////////////////////////////////
//DeRap: MapItems\config.bin
//Produced from mikero's Dos Tools Dll version 9.98
//https://mikero.bytex.digital/Downloads
//'now' is Wed Jul 09 20:03:48 2025 : 'file' last modified on Sat Jul 05 11:43:12 2025
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class BSF_Misc_MapItems
	{
		addonRootClass = "BSF_Misc";
		requiredVersion = 1.92;
		requiredAddons[] = {"BSF_Misc","a3_ui_f"};
		units[] = {"BSF_Trigger_Item_1","BSF_Trigger_Item_2","BSF_Trigger_Item_3","BSF_Trigger_Item_4"};
		weapons[] = {};
		magazines[] = {};
		ammo[] = {};
	};
};
class CfgMarkerClasses
{
	class BSF_Markers
	{
		displayName = "BSF Markers";
	};
};
class CfgMarkers
{
	class Flag;
	class loc_Tree;
	class BSF_Marker_VG: loc_Tree
	{
		size = 18;
		name = "BSF Virtual Garage";
		icon = "BSF_Community_Addon\addons\BSF_Misc\MapItems\BSF_Marker_VG.paa";
		color[] = {1,1,1,1};
		markerClass = "BSF_Markers";
	};
	class BSF_Respawn1_Icon: loc_Tree
	{
		scope = 1;
		name = "BSF Respawn 1";
		icon = "\BSF_Community_Addon\addons\BSF_Misc\MapItems\BSF_respawn1_ca.paa";
		color[] = {1,1,1,1};
		size = 24;
		markerClass = "BSF_Markers";
	};
	class BSF_Trader1_Icon: loc_Tree
	{
		scope = 1;
		name = "BSF Trader 1";
		icon = "\BSF_Community_Addon\addons\BSF_Misc\MapItems\BSF_trader_1_ca.paa";
		color[] = {1,1,1,1};
		size = 32;
		markerClass = "BSF_Markers";
	};
	class BSF_Trader2_Icon: loc_Tree
	{
		scope = 1;
		name = "BSF Trader 2";
		icon = "\BSF_Community_Addon\addons\BSF_Misc\MapItems\BSF_trader_2_ca.paa";
		color[] = {1,1,1,1};
		size = 24;
		markerClass = "BSF_Markers";
	};
	class BSF_TraderBoat_Icon: loc_Tree
	{
		scope = 1;
		name = "BSF Trader, Boat";
		icon = "\BSF_Community_Addon\addons\BSF_Misc\MapItems\BSF_Marker_Trader_Boat.paa";
		color[] = {1,1,1,1};
		size = 24;
		markerClass = "BSF_Markers";
	};
	class BSF_TraderTools_Icon: loc_Tree
	{
		scope = 1;
		name = "BSF Trader, Tools";
		icon = "\BSF_Community_Addon\addons\BSF_Misc\MapItems\BSF_trader_tools_ca.paa";
		color[] = {1,1,1,1};
		size = 24;
		markerClass = "BSF_Markers";
	};
};
class CfgVehicles
{
	class NonStrategic;
	class BSF_Trigger_Item_Base: NonStrategic
	{
		scope = 0;
		displayName = "Trigger Item Base";
		Author = "Troy - BS-Free";
		model = "\BSF_Community_Addon\addons\BSF_Misc\MapItems\BSF_Trigger_Item_1.p3d";
		editorCategory = "EdCat_Things";
		editorSubcategory = "EdSubcat_Blocks";
		mass = 20;
	};
	class BSF_Trigger_Item_1: BSF_Trigger_Item_Base
	{
		scope = 2;
		displayName = "Trigger Item 1";
	};
	class BSF_Trigger_Item_2: BSF_Trigger_Item_Base
	{
		scope = 2;
		displayName = "Trigger Item 2";
	};
	class BSF_Trigger_Item_3: BSF_Trigger_Item_Base
	{
		scope = 2;
		displayName = "Trigger Item 3";
	};
	class BSF_Trigger_Item_4: BSF_Trigger_Item_Base
	{
		scope = 2;
		displayName = "Trigger Item 4";
	};
};
