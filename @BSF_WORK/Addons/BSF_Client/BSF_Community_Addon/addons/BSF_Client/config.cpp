////////////////////////////////////////////////////////////////////
//DeRap: config.bin
//Produced from mikero's Dos Tools Dll version 9.98
//https://mikero.bytex.digital/Downloads
//'now' is Sun Jun 29 14:03:01 2025 : 'file' last modified on Fri Jun 27 22:46:47 2025
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class BSF_Client
	{
		requiredVersion = 0.1;
		requiredAddons[] = {"exile_client","a3_anims_f","a3_ui_f","a3_data_f","exile_assets"};
		units[] = {};
		weapons[] = {};
	};
};
class CfgMods
{
	class BSF_CommunityAddon
	{
		dir = "@BSF_Community_Addon";
		appID = 1651820025;
		name = "BS-Free Community Addon";
		nameShort = "BSF Community Addon";
		author = "Troy - BS-Free";
		tooltip = "A collection of assets exclusively for the BS-Free community.";
		tooltipOwned = "BS-Free Community Addon";
		overview = "A collection of assets crafted exclusively for the BS-Free community.";
		fieldManualTopicAndHint[] = {"PremiumContent","PremiumMyDLC"};
		dlcColor[] = {0.0033686275,0.00089019607,0.0010901961,1};
		action = "https://bs-free.com";
		artwork = "\BSF_Community_Addon\addons\BSF_Client\data\BSF_Artwork.jpg";
		picture = "\BSF_Community_Addon\addons\BSF_Client\data\BSF_Picture.paa";
		logo = "\BSF_Community_Addon\addons\BSF_Client\data\BSF_Logo.paa";
		logoOver = "\BSF_Community_Addon\addons\BSF_Client\data\BSF_LogoOver.paa";
		logoSmall = "\BSF_Community_Addon\addons\BSF_Client\data\BSF_LogoSmall.paa";
		hideName = 1;
		hidePicture = 0;
		overviewText = "Have fun playing with all the new toys included in this most splendid DLC.";
	};
};
class CfgFunctions
{
	class BSF_Client
	{
		class Bootstrap
		{
			file = "BSF_Community_Addon\addons\BSF_Client\bootstrap";
			class preInit
			{
				preInit = 1;
			};
			class postInit
			{
				postInit = 1;
			};
		};
	};
};
class CfgNetworkMessages
{
	class LoadMags
	{
		module = "BSF";
		parameters[] = {"STRING","STRING"};
	};
	class EVRRequest
	{
		module = "BSF";
		parameters[] = {"STRING","STRING"};
	};
	class BSFtestRequest
	{
		module = "BSF";
		parameters[] = {"STRING"};
	};
};
class CfgMovesBasic;
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class LadderCivilStatic;
		class LadderCivilUpLoop: LadderCivilStatic
		{
			speed = "1.05/(2/3)";
		};
	};
};
class CfgAnimation
{
	ladderSpeed = "0.5/(1/3)";
};
class RscText;
class RscCombo;
class RscStructuredText;
class RscButtonMenuCancel;
class RscButtonMenu;
class RscButtonMenuOK;
class RscButtonMenuRules: RscButtonMenu
{
	idc = 1;
	shortcuts[] = {"0x00050000 + 0",28,57,156};
	default = 1;
	text = "SERVER RULES";
	soundPush[] = {"\A3\ui_f\data\sound\RscButtonMenuOK\soundPush",0.09,1};
};
class RscExileWasteDumpDialogBSF
{
	idd = 24011;
	onLoad = "uiNamespace setVariable ['RscExileWasteDumpDialog', _this select 0]";
	onUnload = "call ExileClient_gui_wasteDumpDialog_event_onUnload; uiNamespace setVariable ['RscExileWasteDumpDialog', displayNull]";
	class controlsBackground
	{
		class DialogBackground: RscText
		{
			idc = -1;
			x = "10 * (0.025) + (0)";
			y = "9 * (0.04) + (0)";
			w = "20 * (0.025)";
			h = "8 * (0.04)";
			colorBackground[] = {0.05,0.05,0.05,0.7};
		};
		class DialogCation: RscText
		{
			idc = -1;
			text = "Waste Dump";
			x = "10 * (0.025) + (0)";
			y = "7.9 * (0.04) + (0)";
			w = "20 * (0.025)";
			h = "1 * (0.04)";
			colorBackground[] = {0.1,0.1,0.1,1};
		};
		class RevenueLabel: RscText
		{
			idc = -1;
			text = "Revenue:";
			x = "10.5 * (0.025) + (0)";
			y = "12 * (0.04) + (0)";
			w = "19 * (0.025)";
			h = "1 * (0.04)";
		};
		class ModeLabel: RscText
		{
			idc = -1;
			text = "What would you like to throw away?";
			x = "10.5 * (0.025) + (0)";
			y = "9.5 * (0.04) + (0)";
			w = "19 * (0.025)";
			h = "1 * (0.04)";
		};
	};
	class controls
	{
		class ModeDropDown: RscCombo
		{
			idc = 4002;
			x = "10.5 * (0.025) + (0)";
			y = "10.5 * (0.04) + (0)";
			w = "19 * (0.025)";
			h = "1 * (0.04)";
			onLBSelChanged = "_this call ExileClient_gui_wasteDumpDialog_event_onModeDropDownSelectionChanged";
		};
		class RevenueValue: RscStructuredText
		{
			idc = 4001;
			text = "<t size='1.4'>0<img image='\BSF_Community_Addon\addons\BSF_Client\data\poptab_notification_ca.paa' size='1' shadow='true' /></t>";
			x = "10.5 * (0.025) + (0)";
			y = "13 * (0.04) + (0)";
			w = "19 * (0.025)";
			h = "1.5 * (0.04)";
			colorBackground[] = {0,0,0,0};
		};
		class SellButton: RscButtonMenuOK
		{
			idc = 4000;
			onMouseButtonClick = "_this call ExileClient_gui_wasteDumpDialog_event_onSellButtonClick";
			text = "Adios!";
			x = "10.5 * (0.025) + (0)";
			y = "15.5 * (0.04) + (0)";
			w = "5 * (0.025)";
			h = "1 * (0.04)";
			colorText[] = {1,1,1,1};
		};
		class RulesButton: RscButtonMenuRules
		{
			idc = 4000;
			onMouseButtonClick = "createDialog 'RscDisplayServerInfoMenu'";
			text = "Server Rules";
			x = "15.75 * (0.025) + (0)";
			y = "15.5 * (0.04) + (0)";
			w = "7.5 * (0.025)";
			h = "1 * (0.04)";
			colorText[] = {1,1,1,1};
			colorBackground[] = {0.859,0.227,0.278,1};
		};
		class CancelButton: RscButtonMenuCancel
		{
			idc = -1;
			action = "closeDialog 0";
			x = "23.5 * (0.025) + (0)";
			y = "15.5 * (0.04) + (0)";
			w = "6 * (0.025)";
			h = "1 * (0.04)";
		};
	};
};
class CfgModSettings
{
	class BSFree
	{
		displayname = "BS-Free Settings";
		class Keys
		{
			class UnitScanner
			{
				displayname = "Show Unit Scanner";
				keyfunction = "fnc_BSF_ShowScanner";
				class user0
				{
					displayname = "NONE";
					value = 0;
				};
				class user1
				{
					displayname = "User Action 1";
					value = 1;
				};
				class user2
				{
					displayname = "User Action 2";
					value = 2;
				};
				class user3
				{
					displayname = "User Action 3";
					value = 3;
				};
				class user4
				{
					displayname = "User Action 4";
					value = 4;
				};
				class user5
				{
					displayname = "User Action 5";
					value = 5;
				};
				class user6
				{
					displayname = "User Action 6";
					value = 6;
				};
				class user7
				{
					displayname = "User Action 7";
					value = 7;
				};
				class user8
				{
					displayname = "User Action 8";
					value = 8;
				};
				class user9
				{
					displayname = "User Action 9";
					value = 9;
				};
				class user10
				{
					displayname = "User Action 10";
					value = 10;
				};
				class user11
				{
					displayname = "User Action 11";
					value = 11;
				};
				class user12
				{
					displayname = "User Action 12";
					value = 12;
				};
				class user13
				{
					displayname = "User Action 13";
					value = 13;
				};
				class user14
				{
					displayname = "User Action 14";
					value = 14;
				};
				class user15
				{
					displayname = "User Action 15";
					value = 15;
				};
				class user16
				{
					displayname = "User Action 16";
					value = 16;
				};
				class user17
				{
					displayname = "User Action 17";
					value = 17;
				};
				class user18
				{
					displayname = "User Action 18";
					value = 18;
				};
				class user19
				{
					displayname = "User Action 19";
					value = 19;
				};
				class user20
				{
					displayname = "User Action 20";
					value = 20;
				};
			};
			class InstaDoc
			{
				displayname = "Use InstaDoc";
				keyfunction = "fnc_BSF_UseInstadoc";
				class user0
				{
					displayname = "NONE";
					value = 0;
				};
				class user1
				{
					displayname = "User Action 1";
					value = 1;
				};
				class user2
				{
					displayname = "User Action 2";
					value = 2;
				};
				class user3
				{
					displayname = "User Action 3";
					value = 3;
				};
				class user4
				{
					displayname = "User Action 4";
					value = 4;
				};
				class user5
				{
					displayname = "User Action 5";
					value = 5;
				};
				class user6
				{
					displayname = "User Action 6";
					value = 6;
				};
				class user7
				{
					displayname = "User Action 7";
					value = 7;
				};
				class user8
				{
					displayname = "User Action 8";
					value = 8;
				};
				class user9
				{
					displayname = "User Action 9";
					value = 9;
				};
				class user10
				{
					displayname = "User Action 10";
					value = 10;
				};
				class user11
				{
					displayname = "User Action 11";
					value = 11;
				};
				class user12
				{
					displayname = "User Action 12";
					value = 12;
				};
				class user13
				{
					displayname = "User Action 13";
					value = 13;
				};
				class user14
				{
					displayname = "User Action 14";
					value = 14;
				};
				class user15
				{
					displayname = "User Action 15";
					value = 15;
				};
				class user16
				{
					displayname = "User Action 16";
					value = 16;
				};
				class user17
				{
					displayname = "User Action 17";
					value = 17;
				};
				class user18
				{
					displayname = "User Action 18";
					value = 18;
				};
				class user19
				{
					displayname = "User Action 19";
					value = 19;
				};
				class user20
				{
					displayname = "User Action 20";
					value = 20;
				};
			};
			class Fishing
			{
				displayname = "Fishing";
				keyfunction = "fnc_BSF_Fishing";
				class user0
				{
					displayname = "NONE";
					value = 0;
				};
				class user1
				{
					displayname = "User Action 1";
					value = 1;
				};
				class user2
				{
					displayname = "User Action 2";
					value = 2;
				};
				class user3
				{
					displayname = "User Action 3";
					value = 3;
				};
				class user4
				{
					displayname = "User Action 4";
					value = 4;
				};
				class user5
				{
					displayname = "User Action 5";
					value = 5;
				};
				class user6
				{
					displayname = "User Action 6";
					value = 6;
				};
				class user7
				{
					displayname = "User Action 7";
					value = 7;
				};
				class user8
				{
					displayname = "User Action 8";
					value = 8;
				};
				class user9
				{
					displayname = "User Action 9";
					value = 9;
				};
				class user10
				{
					displayname = "User Action 10";
					value = 10;
				};
				class user11
				{
					displayname = "User Action 11";
					value = 11;
				};
				class user12
				{
					displayname = "User Action 12";
					value = 12;
				};
				class user13
				{
					displayname = "User Action 13";
					value = 13;
				};
				class user14
				{
					displayname = "User Action 14";
					value = 14;
				};
				class user15
				{
					displayname = "User Action 15";
					value = 15;
				};
				class user16
				{
					displayname = "User Action 16";
					value = 16;
				};
				class user17
				{
					displayname = "User Action 17";
					value = 17;
				};
				class user18
				{
					displayname = "User Action 18";
					value = 18;
				};
				class user19
				{
					displayname = "User Action 19";
					value = 19;
				};
				class user20
				{
					displayname = "User Action 20";
					value = 20;
				};
			};
		};
	};
};
class RscButton;
class RscControlsGroup;
class RscListBox;
class RscExileItemDetailsDialog
{
	class controls
	{
		class TabButtonDisassembleAmmo: RscButton
		{
			idc = 1605;
			text = "DISASSEMBLE AMMO";
			x = "19 * (0.025) + (0)";
			y = "0.25 * (0.04) + (0)";
			w = "8 * (0.025)";
			h = "1 * (0.04)";
			action = "'DISASSEMBLE' call ExileClient_gui_itemDetails_event_onTabButtonClicked;";
		};
		class TabAmmo: RscControlsGroup
		{
			idc = 5005;
			x = "13 * (0.025) + (0)";
			y = "2 * (0.04) + (0)";
			w = "26.5 * (0.025)";
			h = "20 * (0.04)";
			show = "false";
			class controls
			{
				class AmmoListBox: RscListBox
				{
					idc = 1406;
					x = 0;
					y = 0;
					w = "26.5 * (0.025)";
					h = "20 * (0.04)";
					sizeEx = "0.8 *    (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					sizeEx2 = "0.8 *    (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					rowHeight = "2 *    (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					canDrag = 0;
					colorText[] = {1,1,1,1};
					colorBackground[] = {0,0,0,0};
					itemBackground[] = {1,1,1,0.1};
					itemSpacing = 0.001;
					onLBDblClick = "closeDialog 0; _this call ExileClient_gui_itemDetails_event_onCraftingRecipeDoubleClick";
				};
			};
		};
	};
};
