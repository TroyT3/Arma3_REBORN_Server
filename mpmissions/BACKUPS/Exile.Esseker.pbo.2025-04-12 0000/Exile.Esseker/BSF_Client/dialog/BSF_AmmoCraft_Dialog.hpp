/*
* BSF_AmmoCraft_Dialog
* BSF\AmmoCrafting\dialog\BSF_AmmoCraft_Dialog.hpp
*
* BS-Free Game Servers
* www.bs-free.com
* © 2023 Troy - BS-Free
*
* This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
* To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
*/

/*
			colorBackground[] = {"175/225","25/255","225/255",1};	// PURPLE ********** 1
			colorBackground[] = {"220/225","150/255","20/255",1};	// ORANGE ********** 2
			colorBackground[] = {"230/225","235/255","10/255",1};	// YELLOW ********** 3
			colorBackground[] = {"10/225","235/255","10/225",1};	// TEAL ************ 4
			colorBackground[] = {"235/225","10/255","160/225",1};	// PINK ************ 5
			colorBackground[] = {"10/225","60/255","230/225",1};	// BLUE ************ 6
			colorBackground[] = {"220/225","58/255","71/225",1};	// BSF Red ********* 7
			colorBackground[] = {"20/225","220/255","50/225",1};	// GREEN *********** 8
*/

class BSF_AmmoCraft_Dialog
{
	idd = 25305;
	onLoad = "uiNamespace setVariable ['BSF_AmmoCraft_Dialog', _this select 0]; [""Load""] call BSF_Client_AmmoCraft_GUI_Load";
	onUnload = "[""UnLoad""] call ExileClient_MarXet_gui_load;uiNamespace setVariable ['BSF_AmmoCraft_Dialog', displayNull];";
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

////////////////////
////////////////////

		class BSFTitle: BSFText
		{
			idc = 20001;
			text = "BS-FREE Ammo Crafting";
			x = "1 		*				(((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
			y = "0.25 	*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY + (safezoneH - (((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "38 	*				(((safezoneW / safezoneH) min 1.2) / 40)";
			h = "0.9	*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[] = {0.1,0.1,0.1,1};
		};
		class RecycleBackground: BSFText
		{
			idc = 20002;
			x = "1 		*				(((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
			y = "1.25	*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY + (safezoneH - (((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "21.5 	*				(((safezoneW / safezoneH) min 1.2) / 40)";
			h = "23.1 	*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[] = {0.05,0.05,0.05,0.9};
		};
		class CraftingBackground: BSFText
		{
			idc = 20013;
			x = "22.75	*				(((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
			y = "1.25	*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY + (safezoneH - (((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "16.25 	*				(((safezoneW / safezoneH) min 1.2) / 40)";
			h = "23.1 	*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[] = {0.05,0.05,0.05,0.9};
		};
		class FullBackground: BSFText
		{
			idc = 20014;
			show = false;
			x = "1 		*				(((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
			y = "1.25	*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY + (safezoneH - (((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "38		*				(((safezoneW / safezoneH) min 1.2) / 40)";
			h = "23.1 	*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[] = {0.05,0.05,0.05,0.9};
		};
////////////////////
////////////////////

		class InstructionsButton: BSFButtonMenu
		{
			idc = 20101;
			onMouseButtonDown = "[""Instructions""] call BSF_Client_AmmoCraft_GUI_Load";
			text = "INSTRUCTIONS";
			x = "1 		*				(((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
			y = "24.8	*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY + (safezoneH - (((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "9.25	*				(((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 		*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.8};
			style = 2;
			class Attributes
			{
				align = "center";
			};
		};
		class CraftAmmoButton: BSFButtonMenu
		{
			idc = 20102;
			show = false;
			onMouseButtonDown = "[""Load"",  [lbText [20202,(lbCurSel 20202)]]] call BSF_Client_AmmoCraft_GUI_Load";
			text = "CRAFT AMMO";
			x = "1 		*				(((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
			y = "24.8	*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY + (safezoneH - (((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "9.25	*				(((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 		*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.8};
			style = 2;
			class Attributes
			{
				align = "center";
			};
		};
		class Button_2: BSFButtonMenu
		{
			idc = 20103;
			show = false;
			onMouseButtonDown = "call ExileClient_gui_inventory_combineMagazines";
			text = "BUTTON 2";
			x = "10.6	*				(((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
			y = "24.8	*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY + (safezoneH - (((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "9.25	*				(((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 		*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.8};
			style = 2;
			class Attributes
			{
				align = "center";
			};
		};
		class Button_ServerRules: BSFButtonMenu
		{
			idc = 20104;
			onMouseButtonDown = "createDialog 'RscDisplayServerInfoMenu'";
			text = "SERVER RULES";
			x = "20.2		*				(((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
			y = "24.8	*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY + (safezoneH - (((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "9.25	*				(((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 		*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorText[] = {1,1,1,1};
			colorBackground[] = {"220/225","58/255","71/225",1};	// BSF Red
			style = 2;
			class Attributes
			{
				align = "center";
			};
		};
		class ButtonClose: BSFButtonMenu
		{
			idc = 20105;
			onMouseButtonDown = "closeDialog 0";
			text = "CLOSE";
			x = "29.75		*				(((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
			y = "24.8	*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY + (safezoneH - (((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "9.25	*				(((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 		*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.8};
			style = 2;
			class Attributes
			{
				align = "center";
			};
		};

////////////////////
////////////////////

		class AmmoInvTitle: BSFText
		{
			idc = 20003;
			text = "MAGAZINES IN INVENTORY";
			x = "1.5	*				(((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
			y = "1.5 	*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + safezoneY + (safezoneH - ( ((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "20.5 	*				(((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 		*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[] = {0.1,0.1,0.1,1};
			class Attributes {align = "center";};
		};

		class AmmoInvBG: BSFText
		{
			idc = 20004;
			x = "1.5	*				(((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
			y = "2.6	*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + safezoneY + (safezoneH - ( ((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "20.5 	*				(((safezoneW / safezoneH) min 1.2) / 40)";
			h = "11.1 	*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[] = {0.05,0.05,0.05,0.7};
		};
		class AmmoInvFrame: BSFFrame
		{
			idc = 20005;
			x = "1.5	*				(((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
			y = "2.6	*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + safezoneY + (safezoneH - ( ((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "20.5 	*				(((safezoneW / safezoneH) min 1.2) / 40)";
			h = "11.1 	*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};

		class AmmoInvColBG1: BSFText
		{
			idc = 20035;
			x = "15.75 	*				(((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
			y = "2.63	*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + safezoneY + (safezoneH - ( ((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "1.5 	*				(((safezoneW / safezoneH) min 1.2) / 40)";
			h = "10.96 	*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[] = {0.05,0.05,0.05,0.7};
		};
		class AmmoInvColBG2: BSFText
		{
			idc = 20036;
			x = "19.25 	*				(((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
			y = "2.63	*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + safezoneY + (safezoneH - ( ((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "2.75 	*				(((safezoneW / safezoneH) min 1.2) / 40)";
			h = "10.96 	*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[] = {0.05,0.05,0.05,0.7};
		};
		class AmmoHeaderBrass: BSFPicture
		{
			idc = 20301;
			x = "17.2 	*				(((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
			y = "2.5 	*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + safezoneY + (safezoneH - ( ((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "1.5  	*				(((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1.5	*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			text = "BSF_Community_Addon\addons\BSF_Ammo\data\BSF_AR_Casing_CA.paa";
		};
		class AmmoHeaderBullet: BSFPicture
		{
			idc = 20302;
			x = "17.7 	*				(((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
			y = "2.5 	*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + safezoneY + (safezoneH - ( ((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "1.5  	*				(((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1.5	*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			text = "BSF_Community_Addon\addons\BSF_Ammo\data\BSF_AR_Tips_CA.paa";
		};
		class AmmoHeaderPowder: BSFPicture
		{
			idc = 20303;
			x = "19.35 	*				(((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
			y = "2.5 	*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + safezoneY + (safezoneH - ( ((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "1.5  	*				(((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1.5	*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			text = "BSF_Community_Addon\addons\BSF_Ammo\data\BSF_Gunpowder_CA.paa";
		};
		class AmmoHeaderQTY: BSFText
		{
			idc = 20006;
			font = "Caveat";
			text = "QTY";
			x = "15.65 	*				(((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
			y = "2.75	*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + safezoneY + (safezoneH - ( ((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "1.5  	*				(((safezoneW / safezoneH) min 1.2) / 40)";
			h = "0.7 	*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[] = {0.1,0.1,0.1,1};
			class Attributes {align = "center";};
		};

		class MagInvContainer: BSFListNBox
		{
			onLBDblClick = "_this call BSF_Client_AmmoCraft_inventory_event_DoubleClick";
			onMouseButtonClick = "ctrlEnable [20106,true];";
			itemBackground[] = {0,0,0,0.1};
			idc = 20201;
			columns[] = { 0, 0.7, 0.76, 0.85 };
			rowHeight = "2 	* 		((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			sizeEx = "0.8 	* 			((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			canDrag = 0;
			x = "1.5	*				(((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
			y = "3.6 	*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + safezoneY + (safezoneH - ( ((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "20.5 	*				(((safezoneW / safezoneH) min 1.2) / 40)";
			h = "10.1 	*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[] = {0,0,0,0};
		};

		class ButtonDisassemble: BSFButtonMenu
		{
			idc = 20106;
			onMouseButtonClick = "[""Disassemble""] call BSF_Client_AmmoCraft_GUI_Load";
			text = "DISASSEMBLE SELECTED";
			x = "5  	*				(((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
			y = "13.75	*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + safezoneY + (safezoneH - ( ((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "10 	*				(((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 		*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorText[] = {1,1,1,1};
			// colorBackground[] = {0,0,0,0.8};
			colorBackgroundFocused[] = {0, 0, 0, 1};
			colorFocused[] = {0.698, 0.925, 0,1};
			style = 2;
			class Attributes
			{
				align = "center";
			};
		}
////////////////////
////////////////////

		class PartsTitle: BSFText
		{
			idc = 20010;
			text = "COMPONENTS ON HAND";
			x = "1.5	*				(((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
			y = "15.1	*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + safezoneY + (safezoneH - ( ((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "11 	*				(((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 		*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[] = {0.1,0.1,0.1,1};
			class Attributes {align = "center";};
		};
		class PartsFrame: BSFFrame
		{
			idc = 20011;
			x = "1.5	*				(((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
			y = "16.2 	*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + safezoneY + (safezoneH - ( ((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "11 	*				(((safezoneW / safezoneH) min 1.2) / 40)";
			h = "7.55 	*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class PartsBG: BSFText
		{
			idc = 20012;
			x = "1.5	*				(((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
			y = "16.2 	*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + safezoneY + (safezoneH - ( ((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "11 	*				(((safezoneW / safezoneH) min 1.2) / 40)";
			h = "7.55 	*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[] = {0.05,0.05,0.05,0.7};
		};

		class PartsContainer: BSFListNBox
		{
			onLBDblClick = "_this call BSF_Client_AmmoCraft_inventory_event_DoubleClick";
			itemBackground[] = {1,1,1,0.1};
			idc = 20203;
			columns[] = { 0, 0.78 };
			rowHeight = "1.5 	* 			((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			sizeEx = "0.8 		* 			((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			canDrag = 1;
			x = "1.5	*				(((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
			y = "16.2 	*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + safezoneY + (safezoneH - ( ((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "11 	*				(((safezoneW / safezoneH) min 1.2) / 40)";
			h = "7.55 	*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[] = {0,0,0,0};
		};

////////////////////
////////////////////

		class AmmoBenchPic: BSFPicture
		{
			idc = 20304;
			x = "13 	*				(((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
			y = "15.1 	*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + safezoneY + (safezoneH - ( ((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "9  	*				(((safezoneW / safezoneH) min 1.2) / 40)";
			h = "9  	*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			text = "BSF_Community_Addon\addons\BSF_Misc\Items\data\ui\BSF_Icon_AmmoBanch_CA.paa";
		};
////////////////////
////////////////////

		class PlayerWeaponTitle: BSFText
		{
			idc = 20020;
			show = true;
			text = "WEAPONS IN INVENTORY";
			x = "23.25	*				(((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
			y = "1.5	*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + safezoneY + (safezoneH - ( ((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "15.25 	*				(((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 		*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[] = {0.1,0.1,0.1,1};
			class Attributes {align = "center";};
		};
		class PlayerWeaponBG: BSFText
		{
			idc = 20021;
			show = true;
			x = "23.25	*				(((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
			y = "2.6	*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + safezoneY + (safezoneH - ( ((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "15.25 	*				(((safezoneW / safezoneH) min 1.2) / 40)";
			h = "4 	*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[] = {0.05,0.05,0.05,0.7};
		};
		class PlayerWeapon: BSFListBox
		{
			onLBDblClick = "_this call BSF_Client_AmmoCraft_inventory_event_DoubleClick";
			onMouseButtonClick = "[""WeaponSelect"",lbCurSel (_this select 0)] call BSF_Client_AmmoCraft_GUI_Load";
			itemBackground[] = {0,0,0,0.1};
			idc = 20204;
			show = true;
			x = "23.25	*				(((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
			y = "2.6 	*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + safezoneY + (safezoneH - ( ((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "15.25 	*				(((safezoneW / safezoneH) min 1.2) / 40)";
			h = "4  	*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[] = {0,0,0,0};
		};

////////////////////
////////////////////

		class PlayerWeaponMagsTitle: BSFText
		{
			idc = 20022;
			show = true;
			text = "MAGS USED BY SELECTED WEAPON";
			x = "23.25	*				(((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
			y = "6.7	*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + safezoneY + (safezoneH - ( ((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "15.25 	*				(((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 		*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[] = {0.1,0.1,0.1,1};
			class Attributes {align = "center";};
		};
		class PlayerWeaponMagsBG: BSFText
		{
			idc = 20023;
			show = true;
			x = "23.25	*				(((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
			y = "7.7 	*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + safezoneY + (safezoneH - ( ((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "15.25 	*				(((safezoneW / safezoneH) min 1.2) / 40)";
			h = "6 	*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[] = {0.05,0.05,0.05,0.7};
		};
		class PlayerWeaponMags: BSFListBox
		{
			onLBDblClick = "_this call BSF_Client_AmmoCraft_inventory_event_DoubleClick";
			onMouseButtonClick = "[""MagCraftSelect""] call BSF_Client_AmmoCraft_GUI_Load";
			// onMouseButtonClick = "[] call BSF_Client_AmmoCraft_RefreshRequirements;";
			itemBackground[] = {0,0,0,0.1};
			idc = 20205;
			show = true;
			x = "23.25	*				(((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
			y = "7.7 	*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + safezoneY + (safezoneH - ( ((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "15.25 	*				(((safezoneW / safezoneH) min 1.2) / 40)";
			h = "6 	*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[] = {0,0,0,0};
		};
		class PlayerWeaponMagsHint: BSFText
		{
			onMouseEnter = "ctrlShow [20009, false]";
			idc = 20009;
			show = true;
			text = "Select a weapon...";
			font = "Caveat";
			x = "23.25	*				(((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
			y = "7.7 	*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + safezoneY + (safezoneH - ( ((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "15.25 	*				(((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1  	*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[] = {0.1,0.1,0.1,1};
			class Attributes {align = "center";};
		};
////////////////////
////////////////////

		class RequirementsTitle: BSFText
		{
			idc = 20024;
			show = true;
			text = "COMPONENTS                         NEED  /  HAVE";
			x = "23.25	*				(((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
			y = "17.8	*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + safezoneY + (safezoneH - ( ((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "15.25 	*				(((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 		*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[] = {0.1,0.1,0.1,1};
			class Attributes {align = "center";};
		};
		class RequirementsBG: BSFText
		{
			idc = 20025;
			show = true;
			x = "23.25	*				(((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
			y = "18.8	*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + safezoneY + (safezoneH - ( ((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "15.25 	*				(((safezoneW / safezoneH) min 1.2) / 40)";
			h = "4 		*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[] = {0.05,0.05,0.05,0.7};
		};
		class RequirementsFrame: BSFFrame
		{
			idc = 20026;
			show = true;
			x = "23.25	*				(((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
			y = "18.8	*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + safezoneY + (safezoneH - ( ((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "15.25 	*				(((safezoneW / safezoneH) min 1.2) / 40)";
			h = "4		*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class ReqContainer: BSFListNBox
		{
			onLBDblClick = "_this call BSF_Client_AmmoCraft_inventory_event_DoubleClick";
			itemBackground[] = {0,0,0,0.1};
			idc = 20206;
			show = true;
			columns[] = { 0, 0.60, 0.75};
			rowHeight = "1.2 	* 			((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			sizeEx = "1 	* 			((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			canDrag = 0;
			x = "23.25	*				(((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
			y = "18.8 	*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + safezoneY + (safezoneH - ( ((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "15.25 	*				(((safezoneW / safezoneH) min 1.2) / 40)";
			h = "3.8 	*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[] = {0,0,0,0};
		};

////////////////////
////////////////////

		class CraftMagButton: BSFButtonMenu
		{
			idc = 20107;
			show = true;
			onMouseButtonDown = "[""CraftMag"",  [lbText [20205,(lbCurSel 20202)]]] call BSF_Client_AmmoCraft_GUI_Load";
			text = "CRAFT SELECTED";
			x = "24.75	*				(((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
			y = "22.8	*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + safezoneY + (safezoneH - ( ((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "10 	*				(((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 		*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			// colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.8};
			style = 2;
			colorBackgroundFocused[] = {0, 0, 0, 1};
			colorFocused[] = {0.698, 0.925, 0,1};
			class Attributes
			{
				align = "center";
				shadow = "false";
			};
		}

////////////////////
////////////////////

		class CategorySelectTitle: BSFText
		{
			idc = 20030;
			show = true;
			text = "OR SELECT A CATEGORY";
			x = "23.25	*				(((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
			y = "13.8 	*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + safezoneY + (safezoneH - ( ((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "15.25 	*				(((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1  	*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[] = {0.1,0.1,0.1,1};
			class Attributes {align = "center";};
		};
		class CategorySelectBG: BSFText
		{
			idc = 20031;
			show = true;
			x = "23.25	*				(((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
			y = "14.8	*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + safezoneY + (safezoneH - ( ((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "15.25 	*				(((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 		*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[] = {0.05,0.05,0.05,0.7};
		};
		class CategorySelectFrame: BSFFrame
		{
			idc = 20032;
			show = true;
			x = "23.25	*				(((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
			y = "14.8	*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + safezoneY + (safezoneH - ( ((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "15.25 	*				(((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 		*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};

		class CategorySelect: BSFCombo
		{
			idc = 20207;
			onMouseButtonClick = "[""CategorySelect""] call BSF_Client_AmmoCraft_GUI_Load";
			text = "Select category to craft";
			show = true;
			sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
			x = "23.25	*				(((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
			y = "14.8	*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + safezoneY + (safezoneH - ( ((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "15.25 	*				(((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 		*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorSelectBackground[] = {1, 1, 1, 0.7};
			wholeHeight = 0.45;
			colorActive[] = {1, 0, 0, 1};
		};

		class RecipeSelect: BSFCombo
		{
			idc = 20208;
			onMouseButtonClick = "[""RecipeSelect""] call BSF_Client_AmmoCraft_GUI_Load";
			text = "";
			show = true;
			sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
			x = "23.25	*				(((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
			y = "15.9 	*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + safezoneY + (safezoneH - ( ((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "15.25 	*				(((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 		*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorSelectBackground[] = {1, 1, 1, 0.7};
			wholeHeight = 0.45;
			colorActive[] = {1, 0, 0, 1};
		};

		class CategorySelectHint: BSFText
		{
			onMouseEnter = "ctrlShow [20007, false]";
	//		onMouseExit = "ctrlShow [20007, true]";
			idc = 20007;
			show = true;
			text = "Select a category...";
			font = "Caveat";
			x = "23.25	*				(((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
			y = "14.8 	*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + safezoneY + (safezoneH - ( ((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "15.25 	*				(((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1  	*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[] = {0.1,0.1,0.1,1};
			class Attributes {align = "center";};
		};
		class RecipeSelectHint: BSFText
		{
			onMouseEnter = "ctrlShow [20008, false]";
	//		onMouseExit = "ctrlShow [20008, true]";
			idc = 20008;
			show = true;
			text = "Select a recipe...";
			font = "Caveat";
			x = "23.25	*				(((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
			y = "15.8 	*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + safezoneY + (safezoneH - ( ((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "15.25 	*				(((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1  	*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[] = {0.1,0.1,0.1,1};
			class Attributes {align = "center";};
		};

////////////////////
////////////////////

	class InstructionContent1: BSFStructuredText
	{
		idc = 20040;
		show = false;
		deletable = 0;
		fade = 0;
		access = 0;
		type = 13;
		style = 0;
		colorBackground[] = {0, 0, 0, 0};
		colorText[] = {1, 1, 1, 1};
		class Attributes
		{
			font = "PuristaMedium";
			color = "#ffffff";
			colorLink = "#D09B43";
			align = "left";
			shadow = 1;
		};
			x = "1.5	*				(((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
			y = "1.5	*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY + (safezoneH - (((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "37		*				(((safezoneW / safezoneH) min 1.2) / 40)";
			h = "23.75 	*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		text = "";
		size = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
		shadow = 1;
	};



	};
};


/* 		IDD 25305 - BSF_AmmoCraft_Dialog
		GUI ELEMENTS:						BUTTONS:					
20001 - BSFTitle 					20101 - InstructionsButton
20002 - RecycleBackground			20102 - CraftAmmoButton
20003 - AmmoInvTitle				20103 - Button_2
20004 - AmmoInvBG					20104 - Button_ServerRules
20005 - AmmoInvFrame				20105 - ButtonClose
20006 - AmmoHeaderQTY				20106 - ButtonDisassemble
20007 - CategorySelectHint			20107 - CraftMagButton
20008 - RecipeSelectHint			
20009 - PlayerWeaponMagsHint				CONTAINERS:
20010 - PartsTitle					20201 - MagInvContainer BSFListNBox
20011 - PartsFrame					20202 - AmmoSelect BSFCombo
20012 - PartsBG						20203 - PartsContainer BSFListNBox
20013 - CraftingBackground			20204 - PlayerWeapon
20014 - FullBackground				20205 - PlayerWeaponMags
20020 - PlayerWeaponTitle			20206 - ReqContainer
20021 - PlayerWeaponMagsBG			20207 - CategorySelect
20022 - PlayerWeaponMagsTitle		20208 - RecipeSelect
20023 -	PlayerWeaponMagsBG			
20024 - RequirementsTitle			
20025 - RequirementsBG						PICTURES:
20026 - RequirementsFrame			20301 - AmmoHeaderBrass
20030 - CategorySelectTitle			20302 - AmmoHeaderBullet
20031 - CategorySelectBG			20303 - AmmoHeaderPowder
20032 - CategorySelectFrame			20304 - AmmoBenchPic
20033 - 
20034 - 
20035 - AmmoInvColBG1
20036 - AmmoInvColBG2
20040 - InstructionContent1
*/
