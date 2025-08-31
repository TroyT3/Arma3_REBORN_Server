// Derived from RscDisplayInventory

class BSF_DisplayInventory_Dialog
{
	scriptName = "BSF_DisplayInventory_Dialog";
	scriptPath = "IGUI";
	onLoad = "[""onLoad"",_this,""BSF_DisplayInventory_Dialog"",'IGUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay'); _this spawn ExileClient_gui_inventory_event_onLoad";
	onUnload = "[""onUnload"",_this,""BSF_DisplayInventory_Dialog"",'IGUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	idd = 602;
	enableSimulation = 1;
	class Colors
	{
		dragValidBgr[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])",0.5};
		dragInvalidBgr[] = {"(profilenamespace getvariable ['IGUI_ERROR_RGB_R',0.8])","(profilenamespace getvariable ['IGUI_ERROR_RGB_G',0.0])","(profilenamespace getvariable ['IGUI_ERROR_RGB_B',0.0])",0.5};
		dragValidBar[] = {"(profilenamespace getvariable ['IGUI_WARNING_RGB_R',0.8])","(profilenamespace getvariable ['IGUI_WARNING_RGB_G',0.5])","(profilenamespace getvariable ['IGUI_WARNING_RGB_B',0.0])",0.5};
		dragInvalidBar[] = {"(profilenamespace getvariable ['IGUI_ERROR_RGB_R',0.8])","(profilenamespace getvariable ['IGUI_ERROR_RGB_G',0.0])","(profilenamespace getvariable ['IGUI_ERROR_RGB_B',0.0])",0.5};
		progressBar[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])",1};
		progressBarBgr[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])","(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])",0.75};
		highlight[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])",0.5};
	};
	class controlsBackground{};
	class controls
	{
		delete Background;
		delete Title;
		delete ButtonOK;
		delete ButtonCancel;
		delete BackgroundSlotPrimary;
		delete BackgroundSlotHeadgear;
		delete BackgroundSlotGoggles;
		delete BackgroundSlotHMD;
		delete BackgroundSlotBinoculars;
		delete BackgroundSlotPrimaryMuzzle;
		delete BackgroundSlotPrimaryUnderBarrel;
		delete BackgroundSlotPrimaryFlashlight;
		delete BackgroundSlotPrimaryOptics;
		delete BackgroundSlotPrimaryMagazineGL;
		delete BackgroundSlotPrimaryMagazine;
		delete BackgroundSlotSecondary;
		delete BackgroundSlotSecondaryMuzzle;
		delete BackgroundSlotSecondaryUnderBarrel;
		delete BackgroundSlotSecondaryFlashlight;
		delete BackgroundSlotSecondaryOptics;
		delete BackgroundSlotSecondaryMagazine;
		delete BackgroundSlotHandgunFlashlight;
		delete BackgroundSlotHandgunOptics;
		delete BackgroundSlotHandgunMagazine;
		delete BackgroundSlotHandgun;
		delete BackgroundSlotMap;
		delete BackgroundSlotGPS;
		delete BackgroundSlotHandgunMuzzle;
		delete BackgroundSlotHandgunUnderBarrel;
		delete BackgroundSlotRadio;
		delete BackgroundSlotCompass;
		delete BackgroundSlotWatch;
		class GroundTab: BSFActiveText
		{
			colorBackgroundSelected[] = {1,1,1,1};
			colorFocused[] = {1,1,1,0};
			soundDoubleClick[] = {"",0.1,1};
			color[] = {1,1,1,1};
			idc = 6321;
			x = "7 * (0.03) + (-0.25)";
			y = "8 * (0.04) + (-0.25)";
			w = "6 * (0.03)";
			h = "1 * (0.04)";
			// colorBackground[] = {0,0,0,1};
			colorBackground[] = {"175/225","25/255","225/255",1};	// PURPLE ********** 1
		};
		class RankBackground: BSFText
		{
			idc = 1014;
			x = -1;
			y = -1;
			w = "0.6 * (0.03)";
			h = "0.6 * (0.04)";
	//		colorBackground[] = {1,1,1,0.2};
			colorBackground[] = {"220/225","150/255","20/255",1};	// ORANGE ********** 2
		};
		class RankPicture: BSFPicture
		{
			idc = 1203;
			text = "\A3\Ui_f\data\GUI\Cfg\Ranks\corporal_gs.paa";
			x = -1;
			y = -1;
			w = "0.6 * (0.03)";
			h = "0.6 * (0.04)";
		};
		class UniformTab: GroundTab
		{
			idc = 6332;
			x = -1;
			y = -1;
			w = "4 * (0.03)";
			h = "4 * (0.04)";
//			colorBackground[] = {1,1,0,1};
			colorBackground[] = {"220/225","150/255","20/255",1};	// ORANGE ********** 2
		};
		class VestTab: UniformTab
		{
			idc = 6382;
			x = -1;
			y = -1;
			w = "4 * (0.03)";
			h = "4 * (0.04)";
//			colorBackground[] = {1,1,0,1};
			colorBackground[] = {"220/225","150/255","20/255",1};	// ORANGE ********** 2
		};
		class BackpackTab: UniformTab
		{
			idc = 6192;
			x = -1;
			y = -1;
			w = "4 * (0.03)";
			h = "4 * (0.04)";
//			colorBackground[] = {1,1,0,1};
			colorBackground[] = {"230/225","235/255","10/255",1};	// YELLOW ********** 3
		};
		class CA_ContainerBackground: BSFText 		//BSFid Main left-hand background
		{
			idc = 1001;
			x = "6.5 * (0.03) + (-0.25)";
			y = "7.5 * (0.04) + (-0.25)";
			w = "13 * (0.03)";
			h = "23 * (0.04)";
			colorBackground[] = {0.05,0.05,0.05,0.7};
		};
		class CA_PlayerBackground: BSFText			//BSFid Main right-hand background
		{
			idc = 1002;
			x = "20 * (0.03) + (-0.25)";
			y = "7.5 * (0.04) + (-0.25)";
			w = "23.5 * (0.03)";
			h = "23 * (0.04)";
			colorBackground[] = {0.05,0.05,0.05,0.7};
		};
		class TitleBackground: BSFText 			//BSFid Location: "Player Name:"
		{
			idc = 1020;
			x = "20 * (0.03) + (-0.25)";
			y = "6.4 * (0.04) + (-0.25)";
			w = "23.5 * (0.03)";
			h = "1 * (0.04)";
			colorBackground[] = {0.1,0.1,0.1,1};
		};
		class PlayersName: BSFText
		{
			idc = 111;
			text = "Player name:";
			x = "20 * (0.03) + (-0.25)";
			y = "6.4 * (0.04) + (-0.25)";
			w = "11.5 * (0.03)";
			h = "1 * (0.04)";
		};
		class ExileContainerLoadBackground: BSFText 	//BSFid
		{
			idc = -1;
			text = "";
			x = "7 * (0.03) + (-0.25)";
			y = "29.5 * (0.04) + (-0.25)";
			w = "12 * (0.03)";
			h = "0.5 * (0.04)";
			colorBackground[] = {0,0,0,0.5};
		};
		class ExilePlayerLoadBackground: BSFText 		// BSFid Total load bar on lower right of main panel
		{
			idc = -1;
			text = "";
			x = "20.5 * (0.03) + (-0.25)";
			y = "29.5 * (0.04) + (-0.25)";
			w = "22.5 * (0.03)";
			h = "0.5 * (0.04)";
			colorBackground[] = {0,0,0,0.5};
		};
		class ExileEquipmentLoadBackground: BSFText 		// BSFid Load meters under Uniform, Venst , Pack
		{
			idc = -1;
			text = "";
			x = "20.5 * (0.03) + (-0.25)";
			y = "12 * (0.04) + (-0.25)";
			w = "12 * (0.03)";
			h = "0.5 * (0.04)";
			colorBackground[] = {0,0,0,0.5};
		};
		class ButtonBack: BSFActiveText
		{
			color[] = {1,1,1,0.7};
			idc = 2;
			style = 48;
			text = "\A3\Ui_f\data\GUI\Rsc\RscDisplayArcadeMap\icon_exit_cross_ca.paa";
			x = "42.4 * (0.03) + (-0.25)";
			y = "6.4 * (0.04) + (-0.25)";
			w = "1 * (0.03)";
			h = "1 * (0.04)";
			colorText[] = {1,1,1,0.7};
			colorActive[] = {1,1,1,1};
			tooltip = "Close";
		};
		class ExternalContainerBackground: BSFPicture
		{
			idc = 1240;
			text = "#(argb,8,8,3)color(1,1,1,1)";
			x = "7 * (0.03) + (-0.25)";
			y = "11 * (0.04) + (-0.25)";
			w = "12 * (0.03)";
			h = "16 * (0.04)";
			colorText[] = {1,1,1,0.1};
		};
		class PlayerContainerBackground: ExternalContainerBackground
		{
			idc = 1241;
			text = "#(argb,8,8,3)color(1,1,1,1)";
			x = "20.5 * (0.03) + (-0.25)";
			y = "13 * (0.04) + (-0.25)";
			w = "12 * (0.03)";
			h = "14 * (0.04)";
			colorText[] = {1,1,1,0.1};
		};
		class SoldierTab: GroundTab
		{
			idc = 6401;
			x = "13 * (0.03) + (-0.25)";
			y = "8 * (0.04) + (-0.25)";
			w = "6 * (0.03)";
			h = "1 * (0.04)";
			// colorBackground[] = {0,0,0,1};
			colorBackground[] = {"220/225","150/255","20/255",1};	// ORANGE ********** 2
		};
		class GroundContainer: BSFListBox 				// BSFid Primary ground container inventory
		{
			itemBackground[] = {1,1,1,0.1};
			idc = 632;
			sizeEx2 = "0.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			rowHeight = "2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			sizeEx = "0.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			canDrag = 1;
			itemSpacing = 0.001;
			x = "7 * (0.03) + (-0.25)";
			y = "11 * (0.04) + (-0.25)";
			w = "12 * (0.03)";
			h = "16 * (0.04)";
			colorBackground[] = {0,0,0,0};
		};
		class SoldierContainer: GroundContainer	// BSFid Primary ground container inventory
		{
			idc = 640;
			x = "7 * (0.03) + (-0.25)";
			y = "11 * (0.04) + (-0.25)";
			w = "12 * (0.03)";
			h = "16 * (0.04)";
			colorBackground[] = {0.5,0,0,0};
			sizeEx = "0.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class GroundFilter: BSFCombo
		{
			idc = 6554;
			x = "7 * (0.03) + (-0.25)";
			y = "9.5 * (0.04) + (-0.25)";
			w = "12 * (0.03)";
			h = "1 * (0.04)";
		};
		class GroundLoad: BSFProgress
		{
			colorBar[] = {0.9,0.9,0.9,0.9};
			colorExtBar[] = {1,1,1,1};
			idc = 6307;
			texture = "";
			textureExt = "";
			x = "7 * (0.03) + (-0.25)";
			y = "29.5 * (0.04) + (-0.25)";
			w = "12 * (0.03)";
			h = "0.5 * (0.04)";
			colorFrame[] = {0,0,0,0};
		};
		class SlotPrimary: GroundTab
		{
			color[] = {1,1,1,1};
			colorBackgroundSelected[] = {1,1,1,0.1};
			colorFocused[] = {0,0,0,0};
			idc = 610;
			style = "0x30 + 0x800";
			canDrag = 1;
			onMouseButtonDblClick = "_this call ExileClient_gui_inventory_event_onSlotDoubleClick";
			x = "33 * (0.03) + (-0.25)";
			y = "13 * (0.04) + (-0.25)";
			w = "10 * (0.03)";
			h = "3.5 * (0.04)";
			colorText[] = {0,0,0,0.5};
			colorBackground[] = {0,0,0,0};
			// colorBackground[] = {"230/225","235/255","10/255",1};	// YELLOW **********
		};
		class SlotPrimaryMuzzle: SlotPrimary
		{
			idc = 620;
			x = "34 * (0.03) + (-0.25)";
			y = "16.5 * (0.04) + (-0.25)";
			w = "1.5 * (0.03)";
			h = "1.5 * (0.04)";
			colorText[] = {0,0,0,0.5};
//			colorBackground[] = {0,0,0,0};
			colorBackground[] = {"175/225","25/255","225/255",1};	// PURPLE **********
		};
		class SlotPrimaryUnderBarrel: SlotPrimary
		{
			idc = 641;
			x = "35.5 * (0.03) + (-0.25)";
			y = "16.5 * (0.04) + (-0.25)";
			w = "1.5 * (0.03)";
			h = "1.5 * (0.04)";
			colorText[] = {0,0,0,0.5};
			// colorBackground[] = {0,0,0,0};
			colorBackground[] = {"220/225","150/255","20/255",1};	// ORANGE ********** 
		};
		class SlotPrimaryFlashlight: SlotPrimary
		{
			idc = 622;
			x = "37 * (0.03) + (-0.25)";
			y = "16.5 * (0.04) + (-0.25)";
			w = "1.5 * (0.03)";
			h = "1.5 * (0.04)";
			colorText[] = {0,0,0,0.5};
//			colorBackground[] = {0,0,0,0};
			colorBackground[] = {"235/225","10/255","160/225",1};	// PINK ********** 
		};
		class SlotPrimaryOptics: SlotPrimary
		{
			idc = 621;
			x = "38.5 * (0.03) + (-0.25)";
			y = "16.5 * (0.04) + (-0.25)";
			w = "1.5 * (0.03)";
			h = "1.5 * (0.04)";
			colorText[] = {0,0,0,0.5};
//			colorBackground[] = {0,0,0,0};
			colorBackground[] = {"10/225","60/255","230/225",1};	// BLUE **********

		};
		class SlotPrimaryMagazineGL: SlotPrimary
		{
			idc = 644;
			x = "40 * (0.03) + (-0.25)";
			y = "16.5 * (0.04) + (-0.25)";
			w = "1.5 * (0.03)";
			h = "1.5 * (0.04)";
			colorText[] = {0,0,0,0.5};
//			colorBackground[] = {0,0,0,0};
			colorBackground[] = {"220/225","58/255","71/225",1};	// BSF Red **********
		};
		class SlotPrimaryMagazine: SlotPrimary
		{
			idc = 623;
			x = "41.5 * (0.03) + (-0.25)";
			y = "16.5 * (0.04) + (-0.25)";
			w = "1.5 * (0.03)";
			h = "1.5 * (0.04)";
			colorText[] = {0,0,0,0.5};
//			colorBackground[] = {0,0,0,0};
			colorBackground[] = {"10/225","235/255","230/225",1};	// TEAL ************
		};
		class SlotSecondary: SlotPrimary
		{
			idc = 611;
			x = "33 * (0.03) + (-0.25)";
			y = "18.5 * (0.04) + (-0.25)";
			w = "10 * (0.03)";
			h = "3.5 * (0.04)";
			colorText[] = {0,0,0,0.5};
			// colorBackground[] = {0,0,0,0};
			colorBackground[] = {"175/225","25/255","225/255",1};	// PURPLE **********
		};
		class SlotSecondaryMuzzle: SlotPrimary
		{
			idc = 624;
			x = "35.5 * (0.03) + (-0.25)";
			y = "22 * (0.04) + (-0.25)";
			w = "1.5 * (0.03)";
			h = "1.5 * (0.04)";
			colorText[] = {0,0,0,0.5};
			// colorBackground[] = {0,0,0,0};
			colorBackground[] = {"220/225","150/255","20/255",1};	// ORANGE ********** 
		};
		class SlotSecondaryUnderBarrel: SlotPrimary
		{
			idc = 642;
			x = "37 * (0.03) + (-0.25)";
			y = "22 * (0.04) + (-0.25)";
			w = "1.5 * (0.03)";
			h = "1.5 * (0.04)";
			colorText[] = {0,0,0,0.5};
			// colorBackground[] = {0,0,0,0};
			colorBackground[] = {"230/225","235/255","10/255",1};	// YELLOW **********
		};
		class SlotSecondaryFlashlight: SlotPrimary
		{
			idc = 626;
			x = "38.5 * (0.03) + (-0.25)";
			y = "22 * (0.04) + (-0.25)";
			w = "1.5 * (0.03)";
			h = "1.5 * (0.04)";
			colorText[] = {0,0,0,0.5};
			// colorBackground[] = {0,0,0,0};
			colorBackground[] = {"10/225","235/255","230/225",1};	// TEAL ************
		};
		class SlotSecondaryOptics: SlotPrimary
		{
			idc = 625;
			x = "40 * (0.03) + (-0.25)";
			y = "22 * (0.04) + (-0.25)";
			w = "1.5 * (0.03)";
			h = "1.5 * (0.04)";
			colorText[] = {0,0,0,0.5};
			// colorBackground[] = {0,0,0,0};
			colorBackground[] = {"235/225","10/255","160/225",1};	// PINK ********** 
	};
		class SlotSecondaryMagazine: SlotPrimary
		{
			idc = 627;
			x = "41.5 * (0.03) + (-0.25)";
			y = "22 * (0.04) + (-0.25)";
			w = "1.5 * (0.03)";
			h = "1.5 * (0.04)";
			colorText[] = {0,0,0,0.5};
			// colorBackground[] = {0,0,0,0};
			colorBackground[] = {"10/225","60/255","230/225",1};	// BLUE **********
		};
		class SlotHandgun: SlotPrimary
		{
			idc = 612;
			x = "33 * (0.03) + (-0.25)";
			y = "24 * (0.04) + (-0.25)";
			w = "10 * (0.03)";
			h = "3.5 * (0.04)";
			colorText[] = {0,0,0,0.5};
			// colorBackground[] = {0,0,0,0};
			colorBackground[] = {"220/225","58/255","71/225",1};	// BSF Red **********
		};
		class SlotHandgunMuzzle: SlotPrimary
		{
			idc = 628;
			x = "35.5 * (0.03) + (-0.25)";
			y = "27.5 * (0.04) + (-0.25)";
			w = "1.5 * (0.03)";
			h = "1.5 * (0.04)";
			colorText[] = {0,0,0,0.5};
			// colorBackground[] = {0,0,0,0};
			colorBackground[] = {"10/225","235/255","230/225",1};	// TEAL ************
		};
		class SlotHandgunUnderBarrel: SlotPrimary
		{
			idc = 643;
			x = "37 * (0.03) + (-0.25)";
			y = "27.5 * (0.04) + (-0.25)";
			w = "1.5 * (0.03)";
			h = "1.5 * (0.04)";
			colorText[] = {0,0,0,0.5};
			// colorBackground[] = {0,0,0,0};
			colorBackground[] = {"175/225","25/255","225/255",1};	// PURPLE **********
		};
		class SlotHandgunFlashlight: SlotPrimary
		{
			idc = 630;
			x = "38.5 * (0.03) + (-0.25)";
			y = "27.5 * (0.04) + (-0.25)";
			w = "1.5 * (0.03)";
			h = "1.5 * (0.04)";
			colorText[] = {0,0,0,0.5};
			// colorBackground[] = {0,0,0,0};
			colorBackground[] = {"220/225","150/255","20/255",1};	// ORANGE ********** 
		};
		class SlotHandgunOptics: SlotPrimary
		{
			idc = 629;
			x = "40 * (0.03) + (-0.25)";
			y = "27.5 * (0.04) + (-0.25)";
			w = "1.5 * (0.03)";
			h = "1.5 * (0.04)";
			colorText[] = {0,0,0,0.5};
			// colorBackground[] = {0,0,0,0};
			colorBackground[] = {"230/225","235/255","10/255",1};	// YELLOW **********
		};
		class SlotHandgunMagazine: SlotPrimary
		{
			idc = 631;
			x = "41.5 * (0.03) + (-0.25)";
			y = "27.5 * (0.04) + (-0.25)";
			w = "1.5 * (0.03)";
			h = "1.5 * (0.04)";
			colorText[] = {0,0,0,0.5};
			// colorBackground[] = {0,0,0,0};
			colorBackground[] = {"10/225","235/255","230/225",1};	// TEAL ************
		};
		class SlotHeadgear: SlotPrimary
		{
			idc = 6240;
			x = "33 * (0.03) + (-0.25)";
			y = "8 * (0.04) + (-0.25)";
			w = "2.5 * (0.03)";
			h = "2.5 * (0.04)";
			colorText[] = {0,0,0,0.5};
			// colorBackground[] = {0,0,0,0};
			colorBackground[] = {"235/225","10/255","160/225",1};	// PINK ************ 5
		};
		class SlotGoggles: SlotPrimary
		{
			idc = 6216;
			x = "35.5 * (0.03) + (-0.25)";
			y = "8 * (0.04) + (-0.25)";
			w = "2.5 * (0.03)";
			h = "2.5 * (0.04)";
			colorText[] = {1,1,1,1};
			// colorBackground[] = {0,0,0,0};
			colorBackground[] = {"10/225","60/255","230/225",1};	// BLUE ************ 6
		};
		class SlotHMD: SlotPrimary
		{
			idc = 6217;
			x = "38 * (0.03) + (-0.25)";
			y = "8 * (0.04) + (-0.25)";
			w = "2.5 * (0.03)";
			h = "2.5 * (0.04)";
			colorText[] = {0,0,0,0.5};
			// colorBackground[] = {0,0,0,0};
			colorBackground[] = {"220/225","58/255","71/225",1};	// BSF Red ********* 7
		};
		class SlotBinoculars: SlotPrimary
		{
			idc = 6238;
			x = "40.5 * (0.03) + (-0.25)";
			y = "8 * (0.04) + (-0.25)";
			w = "2.5 * (0.03)";
			h = "2.5 * (0.04)";
			colorText[] = {0,0,0,0.5};
			// colorBackground[] = {0,0,0,0};
			colorBackground[] = {"220/225","58/255","71/225",1};	// BSF Red ********* 7
		};
		class SlotMap: SlotPrimary
		{
			idc = 6211;
			x = "35 * (0.03) + (-0.25)";
			y = "10.5 * (0.04) + (-0.25)";
			w = "2 * (0.03)";
			h = "2 * (0.04)";
			colorText[] = {0,0,0,0.5};
			// colorBackground[] = {0,0,0,0};
			colorBackground[] = {"175/225","25/255","225/255",1};	// PURPLE ********** 1
		};
		class SlotGPS: SlotPrimary
		{
			idc = 6215;
			x = "37 * (0.03) + (-0.25)";
			y = "10.5 * (0.04) + (-0.25)";
			w = "2 * (0.03)";
			h = "2 * (0.04)";
			colorText[] = {0,0,0,0.5};
			// colorBackground[] = {0,0,0,0};
			colorBackground[] = {"220/225","150/255","20/255",1};	// ORANGE ********** 2
		};
		class SlotCompass: SlotPrimary
		{
			idc = 6212;
			x = "39 * (0.03) + (-0.25)";
			y = "10.5 * (0.04) + (-0.25)";
			w = "2 * (0.03)";
			h = "2 * (0.04)";
			colorText[] = {0,0,0,0.5};
			// colorBackground[] = {0,0,0,0};
			colorBackground[] = {"230/225","235/255","10/255",1};	// YELLOW ********** 3
		};
		class SlotRadio: SlotPrimary
		{
			idc = 6214;
			x = "41 * (0.03) + (-0.25)";
			y = "10.5 * (0.04) + (-0.25)";
			w = "2 * (0.03)";
			h = "2 * (0.04)";
			colorText[] = {0,0,0,0.5};
			// colorBackground[] = {0,0,0,0};
			colorBackground[] = {"10/225","235/255","230/225",1};	// TEAL ************ 4
		};
		class SlotWatch: SlotPrimary
		{
			idc = 6213;
			x = "33 * (0.03) + (-0.25)";
			y = "10.5 * (0.04) + (-0.25)";
			w = "2 * (0.03)";
			h = "2 * (0.04)";
			colorText[] = {0,0,0,0.5};
			// colorBackground[] = {0,0,0,0};
			colorBackground[] = {"235/225","10/255","160/225",1};	// PINK ************ 5
		};
		class UniformSlot: SlotPrimary
		{
			idc = 6331;
			x = "20.5 * (0.03) + (-0.25)";
			y = "8 * (0.04) + (-0.25)";
			w = "4 * (0.03)";
			h = "4 * (0.04)";
			colorText[] = {0,0,0,0.5};
			// colorBackground[] = {1,1,1,0.1};
			colorBackground[] = {"10/225","60/255","230/225",1};	// BLUE ************ 6
		};
		class UniformLoad: GroundLoad
		{
			idc = 6304;
			x = "20.5 * (0.03) + (-0.25)";
			y = "12 * (0.04) + (-0.25)";
			w = "4 * (0.03)";
			h = "0.5 * (0.04)";
			colorFrame[] = {0,0,0,0};
		};
		class UniformContainer: GroundContainer		// BSFid
		{
			idc = 633;
			onLBDblClick = "_this call ExileClient_gui_inventory_event_onItemDoubleClick";
			x = "20.5 * (0.03) + (-0.25)";
			y = "13 * (0.04) + (-0.25)";
			w = "12 * (0.03)";
			h = "14 * (0.04)";
			colorBackground[] = {0,0,0,0};
			sizeEx = "0.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class VestSlot: SlotPrimary
		{
			idc = 6381;
			x = "24.5 * (0.03) + (-0.25)";
			y = "8 * (0.04) + (-0.25)";
			w = "4 * (0.03)";
			h = "4 * (0.04)";
			colorText[] = {0,0,0,0.5};
			// colorBackground[] = {1,1,1,0.1};
			colorBackground[] = {"20/225","220/255","50/225",1};	// GREEN *********** 8
		};
		class VestLoad: GroundLoad
		{
			idc = 6305;
			x = "24.5 * (0.03) + (-0.25)";
			y = "12 * (0.04) + (-0.25)";
			w = "4 * (0.03)";
			h = "0.5 * (0.04)";
			colorFrame[] = {0,0,0,0};
		};
		class VestContainer: UniformContainer 		// BSFid
		{
			idc = 638;
			onLBDblClick = "_this call ExileClient_gui_inventory_event_onItemDoubleClick";
			x = "20.5 * (0.03) + (-0.25)";
			y = "13 * (0.04) + (-0.25)";
			w = "12 * (0.03)";
			h = "14 * (0.04)";
			colorBackground[] = {0,0,0,0};
			sizeEx = "0.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class BackpackSlot: SlotPrimary
		{
			idc = 6191;
			x = "28.5 * (0.03) + (-0.25)";
			y = "8 * (0.04) + (-0.25)";
			w = "4 * (0.03)";
			h = "4 * (0.04)";
			colorText[] = {0,0,0,0.5};
			// colorBackground[] = {1,1,1,0.1};
			colorBackground[] = {"220/225","150/255","20/255",1};	// ORANGE ********** 2
		};
		class BackpackLoad: GroundLoad
		{
			idc = 6306;
			x = "28.5 * (0.03) + (-0.25)";
			y = "12 * (0.04) + (-0.25)";
			w = "4 * (0.03)";
			h = "0.5 * (0.04)";
			colorFrame[] = {0,0,0,0};
		};
		class BackpackContainer: UniformContainer 		// BSFid
		{
			idc = 619;
			onLBDblClick = "_this call ExileClient_gui_inventory_event_onItemDoubleClick";
			x = "20.5 * (0.03) + (-0.25)";
			y = "13 * (0.04) + (-0.25)";
			w = "12 * (0.03)";
			h = "14 * (0.04)";
			colorBackground[] = {0,0,0,0};
			sizeEx = "0.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class TotalLoad: GroundLoad
		{
			idc = 6308;
			x = "20.5 * (0.03) + (-0.25)";
			y = "29.5 * (0.04) + (-0.25)";
			w = "22.5 * (0.03)";
			h = "0.5 * (0.04)";
			colorFrame[] = {0,0,0,0};
		};
		class ContainerMarker: GroundTab
		{
			idc = 6325;
			x = "-5.5 * (0.03) + (-0.25)";
			y = "32.5 * (0.04) + (-0.25)";
			w = "1 * (0.03)";
			h = "1 * (0.04)";
			// colorBackground[] = {0,0,0,1};
			colorBackground[] = {"10/225","235/255","230/225",1};	// TEAL ************ 4
		};
		class GroundMarker: ContainerMarker
		{
			idc = 6385;
			x = "-3.5 * (0.03) + (-0.25)";
			y = "32.5 * (0.04) + (-0.25)";
			w = "1 * (0.03)";
			h = "1 * (0.04)";
			// colorBackground[] = {0,0,0,1};
			colorBackground[] = {"10/225","60/255","230/225",1};	// BLUE ************ 6
		};
		class SoldierMarker: ContainerMarker
		{
			idc = 6405;
			x = "-2 * (0.03) + (-0.25)";
			y = "32.5 * (0.04) + (-0.25)";
			w = "1 * (0.03)";
			h = "1 * (0.04)";
			// colorBackground[] = {0,0,0,1};
			colorBackground[] = {"10/225","60/255","230/225",1};	// BLUE ************ 6
		};
		class ExileSecondaryBackground: BSFText 		// BSFid
		{
			idc = 1055;
			x = "33 * (0.03) + (-0.25)";
			y = "18.5 * (0.04) + (-0.25)";
			w = "10 * (0.03)";
			h = "5 * (0.04)";
			colorBackground[] = {1,1,1,0.05};
		};
		class ExileHandgunBackground: BSFText 		// BSFid
		{
			idc = 1056;
			x = "33 * (0.03) + (-0.25)";
			y = "24 * (0.04) + (-0.25)";
			w = "10 * (0.03)";
			h = "5 * (0.04)";
			colorBackground[] = {1,1,1,0.05};
		};
		class ExilePrimaryBackground: BSFText		// BSFid
		{
			idc = 1057;
			x = "33 * (0.03) + (-0.25)";
			y = "13 * (0.04) + (-0.25)";
			w = "10 * (0.03)";
			h = "5 * (0.04)";
			colorBackground[] = {1,1,1,0.05};
		};
		class ExileItemsBackground: BSFText		// BSFid
		{
			idc = 1058;
			x = "33 * (0.03) + (-0.25)";
			y = "8 * (0.04) + (-0.25)";
			w = "10 * (0.03)";
			h = "4.5 * (0.04)";
			colorBackground[] = {1,1,1,0.05};
		};
		class ExileButtonTakeAll: BSFButtonMenu		// BSFid
		{
			idc = 20001;
			onMouseButtonDown = "call ExileClient_gui_inventory_takeAll";
			text = "TAKE ALL";
			x = "6.5 * (0.03) + (-0.25)";
			y = "31 * (0.04) + (-0.25)";
			w = "8.5 * (0.03)";
			h = "1 * (0.04)";
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.8};
			style = 2;
			class Attributes
			{
				align = "center";
			};
		};
		class ExileButtonCombineMags: BSFButtonMenu		// BSFid
		{
			idc = 20002;
			onMouseButtonDown = "call ExileClient_gui_inventory_combineMagazines";
			text = "COMBINE MAGS";
			x = "(6.5 + 8.5 + 0.5) * (0.03) + (-0.25)";
			y = "31 * (0.04) + (-0.25)";
			w = "8.5 * (0.03)";
			h = "1 * (0.04)";
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.8};
			style = 2;
			class Attributes
			{
				align = "center";
			};
		};
		class ExileButtonServerRules: BSFButtonMenu 	//BSFid
		{
			idc = 20003;
			onMouseButtonDown = "createDialog 'RscDisplayServerInfoMenu'";
			text = "SERVER RULES";
			x = "(6.5 + 17 + 1) * (0.03) + (-0.25)";
			y = "31 * (0.04) + (-0.25)";
			w = "8.5 * (0.03)";
			h = "1 * (0.04)";
			colorText[] = {1,1,1,1};
			colorBackground[] = {"220/225","58/255","71/225",1};	// BSF Red
			style = 2;
			class Attributes
			{
				align = "center";
			};
		};

		class ExileButtonClose: BSFButtonMenu 		// BSFid
		{
			idc = -1;
			onMouseButtonDown = "closeDialog 0";
			text = "CLOSE";
			x = "35 * (0.03) + (-0.25)";
			y = "31 * (0.04) + (-0.25)";
			w = "8.5 * (0.03)";
			h = "1 * (0.04)";
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.8};
			style = 2;
			class Attributes
			{
				align = "center";
			};
		};
		class ExileContainerPopTabsBackground: BSFText  	// BSFid
		{
			idc = -1;
			x = "7 * (0.03) + (-0.25)";
			y = "27.5 * (0.04) + (-0.25)";
			w = "6.5 * (0.03)";
			h = "1.5 * (0.04)";
			colorBackground[] = {1,1,1,0.1};
		};
		class ExileContainerPopTabs: BSFStructuredText  	// BSFid
		{
			idc = 25000;
			size = "24 * pixelH";
			sizeEx = "24 * pixelH";
			text = "<t size='1' font='RobotoCondensed' align='right'>999999 / 999999 <img image='\exile_assets\texture\ui\poptab_inline_ca.paa' size='1' shadow='true' /></t>";
			x = "7 * (0.03) + (-0.25)";
			y = "(27.5 + 0.25) * (0.04) + (-0.25)";
			w = "6.5 * (0.03)";
			h = "(1.5 - 0.25) * (0.04)";
			colorBackground[] = {0,0,0,0};
		};
		class ExilePlayerPopTabsBackground: BSFText  	// BSFid
		{
			idc = -1;
			x = "26 * (0.03) + (-0.25)";
			y = "27.5 * (0.04) + (-0.25)";
			w = "6.5 * (0.03)";
			h = "1.5 * (0.04)";
			colorBackground[] = {1,1,1,0.1};
		};
		class ExilePlayerPopTabs: BSFStructuredText  	// BSFid
		{
			idc = 25001;
			size = "24 * pixelH";
			sizeEx = "24 * pixelH";
			text = "<t size='1' font='RobotoCondensed' align='right'>999999 <img image='\exile_assets\texture\ui\poptab_inline_ca.paa' size='1' shadow='true' /></t>";
			x = "26 * (0.03) + (-0.25)";
			y = "(27.5 + 0.25) * (0.04) + (-0.25)";
			w = "6.5 * (0.03)";
			h = "(1.5 - 0.25) * (0.04)";
			colorBackground[] = {0,0,0,0};
		};
		class ExileTakePopTabsInput: BSFEdit
		{
			idc = 25002;
			text = "";
			x = "14 * (0.03) + (-0.25)";
			y = "27.5 * (0.04) + (-0.25)";
			w = "3.5 * (0.03)";
			h = "1.5 * (0.04)";
			style = 2;
			onKeyUp = "_this call ExileClient_gui_inventory_event_onTakePopTabsInputKeyUp";
		};
		class ExileTakePopTabsButton: BSFButton
		{
			idc = 25003;
			text = ">";
			x = "17.5 * (0.03) + (-0.25)";
			y = "27.5 * (0.04) + (-0.25)";
			w = "1.5 * (0.03)";
			h = "1.5 * (0.04)";
			onMouseButtonClick = "_this call ExileClient_gui_inventory_event_onTakePopTabsButtonClick";
		};
		class ExilePutPopTabsButton: BSFButton
		{
			idc = 25004;
			text = "<";
			x = "20.5 * (0.03) + (-0.25)";
			y = "27.5 * (0.04) + (-0.25)";
			w = "1.5 * (0.03)";
			h = "1.5 * (0.04)";
			onMouseButtonClick = "_this call ExileClient_gui_inventory_event_onPutPopTabsButtonClick";
		};
		class ExilePutPopTabsInput: BSFEdit
		{
			idc = 25005;
			text = "";
			x = "22 * (0.03) + (-0.25)";
			y = "27.5 * (0.04) + (-0.25)";
			w = "3.5 * (0.03)";
			h = "1.5 * (0.04)";
			style = 2;
			onKeyUp = "_this call ExileClient_gui_inventory_event_onPutPopTabsInputKeyUp";
		};
		class ContainerCaptionBackground: BSFText 		//BSFid
		{
			idc = 1020;
			text = "Container";
			x = "6.5 * (0.03) + (-0.25)";
			y = "6.4 * (0.04) + (-0.25)";
			w = "13 * (0.03)";
			h = "1 * (0.04)";
			colorBackground[] = {0.1,0.1,0.1,1};
		};
	};
};

