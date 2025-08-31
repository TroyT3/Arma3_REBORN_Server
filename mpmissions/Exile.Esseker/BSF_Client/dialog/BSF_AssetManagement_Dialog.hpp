/*
createDialog "BSF_AssetManagement_Dialog"; 
createDialog "PixelGridTest"; 
createDialog "DialogTest"; 
*/
class BSF_AssetManagement_Dialog
{
	idd = 25301;
	onLoad = "uiNamespace setVariable ['BSF_AssetManagement_Dialog', _this select 0]; [""Load"",0] call BSF_Client_AssetManagement_GUI_Load";
	onUnload = "[""UnLoad""] call BSF_Client_AssetManagement_GUI_Load;uiNamespace setVariable ['BSF_AssetManagement_Dialog', displayNull];";
	// onKeyUp = "_this call BSF_Keybind_AM";
	onKeyDown = "_this call BSF_Keybind_AM";
	// onKeyDown = "_this call ExileClient_gui_xm8_event_onKeyDown";

	class controls
	{
		class TabletBackground: BSFPictureKeepAspect
		{
			idc = 20000;
			text = "BSF_Client\images\BSF_Tablet_BG_ca.paa";
			x = "0.5 - pixelW * pixelGrid * 64";	// center minus half width
			y = "0.5 - pixelH * pixelGrid * 70";	// center minus half height
			w = "pixelW * pixelGrid * 141";
			h = "pixelH * pixelGrid * 141";
		};

		class LED_Green: BSFPictureKeepAspect
		{
			idc = 20002;
			text = "BSF_Client\images\BSF_LED_Green.paa";
			x = "0.5 - pixelW * pixelGrid * 35.25";
			y = "0.5 - pixelH * pixelGrid * -37";
			w = "pixelW * pixelGrid * 2";
			h = "pixelH * pixelGrid * 2";
		};
		class LED_Orange: BSFPictureKeepAspect
		{
			idc = 20003;
			text = "BSF_Client\images\BSF_LED_Orange.paa";
			x = "0.5 - pixelW * pixelGrid * 33.1";
			y = "0.5 - pixelH * pixelGrid * -37";
			w = "pixelW * pixelGrid * 2";
			h = "pixelH * pixelGrid * 2";
		};		

		class ShowMapMarkers_Title: BSFPictureKeepAspect
		{
			idc = 20201;
			text = "BSF_Client\images\BSF_AM_Label_AllMapMarkers_ca.paa";
			x = "0.5 - pixelW * pixelGrid * 14";
			y = "0.5 - pixelH * pixelGrid * 38";
			w = "pixelW * pixelGrid * 36";
			h = "pixelH * pixelGrid * 12";
		};
		class ShowMapMarkers_BtnON: BSFImgButton
		{
			idc = 20202;
			onMouseButtonClick = "[""ShowMapMarkersON""] call BSF_Client_AssetManagement_GUI_Load";
			color[] = {1, 1, 1, 1}; // Show image as is, without shading
			colorActive[] = {0.7, 0.7, 0.7, 1};
			text = "BSF_Client\images\BSF_Btn_Slider_OFF_ca.paa";
			x = "0.5 - pixelW * pixelGrid * -13";
			y = "0.5 - pixelH * pixelGrid * 33.5";
			w = "pixelW * pixelGrid * 6";
			h = "pixelH * pixelGrid * 3";
		};
		class ShowMapMarkers_BtnOFF: BSFImgButton
		{
			idc = 20203;
			show = false;
			onMouseButtonClick = "[""ShowMapMarkersOFF""] call BSF_Client_AssetManagement_GUI_Load";
			color[] = {1, 1, 1, 1}; // Show image as is, without shading
			colorActive[] = {0.7, 0.7, 0.7, 1};
			text = "BSF_Client\images\BSF_Btn_Slider_ON_ca.paa";
			x = "0.5 - pixelW * pixelGrid * -13";
			y = "0.5 - pixelH * pixelGrid * 33.5";
			w = "pixelW * pixelGrid * 6";
			h = "pixelH * pixelGrid * 3";
		};
		/* 		IDD 25301 - BSF_AssetManagement_Dialog
				GUI ELEMENTS:						BUTTONS:					
		20000 - TabletBackground 			 					
		20002 - LED_Green					
		20003 - LED_Orange					
		20201 - ShowMapMarkers_Title		
		20202 - ShowMapMarkers_BtnON				
		20203 - ShowMapMarkers_BtnOFF			
		20204 - PlayerFlags_Title			
		20205 - PlayerFlags_BtnON						
		20206 - PlayerFlags_BtnOFF					
		20207 - FlagTest_Title			
		20208 - FlagTest_Btn						
		20280 - ShowRadiusText
		20281 - Radius_BtnON
		20282 - Radius_BtnOFF
		20210 - InstructionsTitle
		20211 - InstructionsButton
		20230 - TerritoryInfo_Title 
		20231 - TerritoryList
		20232 - PlayerFlagPic
		20233 - TerritoryLevel_Caption
		20234 - TerritorySize_Caption
		20235 - TerritoryParts_Caption
		20236 - TerritoryLevel_Data
		20237 - TerritorySize_Data
		20238 - TerritoryParts_Data
		20239 - PaymentDueDateText
		20240 - TerritoryVG_Caption
		20241 - TerritoryVG_Data

		20250 - ChangeFlag_Title
		20251 - ChangeFlag_Btn

		20260 - MemberListBox
		20261 - Leave_Btn
		20262 - Kick_Btn
		20263 - Promote_Btn
		20264 - Demote_Btn

		24010 - Message
		24011 - OkayButton
		24012 - Question
		24020 - Confirm

		30107 - VehicleHPbars_Title
		30108 - VehicleHPbars_BtnON
		30109 - VehicleHPbars_BtnOFF
		30110 - VehicleMarker_BtnON
		30111 - VehicleMarker_BtnOFF
		30112 - VehicleMarker_BtnDisabled
		30113 - VehicleMarker_Title
		30114 - AllVehMarkers_Title
		30115 - AllVehMarkers_BtnON
		30116 - AllVehMarkers_BtnOFF
		30117 - AllVehMarkers_BtnMixed
		30003 - Vehicles_Title
		30004 - Vehicles_BG
		30005 - Vehicles_Frame
		30006 - Vehicles_Captions
		30201 - Vehicles_Container
		30008 - VehicleInv_Title
		30009 - VehicleInv_BG
		30010 - VehicleInv_Frame
		30202 - VehicleInv_Container
		30011 - VehicleDetails_Title
		30012 - VehicleDetails_Captions
		30013 - VehicleDetails_Text
		20500 - DeleteTerritory_Title
		20501 - DeleteTerritory_Btn
		20502 - DeleteTerritory_BtnDisabled
		20503 - TabletBackgroundWarning1
		20504 - TabletBackgroundWarning2
		20505 - DeleteTerritory_BtnYesFrame
		20506 - DeleteTerritory_BtnNoFrame
		20510 - DeleteTerritory_BtnYes1
		20511 - DeleteTerritory_BtnNo1
		20512 - DeleteTerritory_BtnYes2
		20513 - DeleteTerritory_BtnNo2
		*/
		class PlayerFlags_Title: BSFPictureKeepAspect
		{
			idc = 20204;
			text = "BSF_Client\images\BSF_AM_Label_FlagMarkers_ca.paa";
			x = "0.5 - pixelW * pixelGrid * 14";
			y = "0.5 - pixelH * pixelGrid * 35";
			w = "pixelW * pixelGrid * 36";
			h = "pixelH * pixelGrid * 12";
		};
		class PlayerFlags_BtnON: BSFImgButton
		{
			idc = 20205;
			onMouseButtonClick = "[""PlayerFlagsON""] call BSF_Client_AssetManagement_GUI_Load";
			color[] = {1, 1, 1, 1}; // Show image as is, without shading
			colorActive[] = {0.7, 0.7, 0.7, 1};
			text = "BSF_Client\images\BSF_Btn_Slider_OFF_ca.paa";
			x = "0.5 - pixelW * pixelGrid * -13";
			y = "0.5 - pixelH * pixelGrid * 30.5";
			w = "pixelW * pixelGrid * 6";
			h = "pixelH * pixelGrid * 3";
			colorBackground[] = {0.5,0.08,0.025,0.9}; // Red
		};
		class PlayerFlags_BtnOFF: BSFImgButton
		{
			idc = 20206;
			show = false;
			onMouseButtonClick = "[""PlayerFlagsOFF""] call BSF_Client_AssetManagement_GUI_Load";
			color[] = {1, 1, 1, 1}; // Show image as is, without shading
			colorActive[] = {0.7, 0.7, 0.7, 1};
			text = "BSF_Client\images\BSF_Btn_Slider_ON_ca.paa";
			x = "0.5 - pixelW * pixelGrid * -13";
			y = "0.5 - pixelH * pixelGrid * 30.5";
			w = "pixelW * pixelGrid * 6";
			h = "pixelH * pixelGrid * 3";
			colorBackground[] = {0.035,0.30,0.08,0.9}; // Green
		};
		class InstructionsTitle: BSFPictureKeepAspect
		{
			idc = 20210;
			text = "BSF_Client\images\BSF_AM_Label_Instructions_ca.paa";
			x = "0.5 - pixelW * pixelGrid * -10";
			y = "0.5 - pixelH * pixelGrid * -21";
			w = "pixelW * pixelGrid * 36";
			h = "pixelH * pixelGrid * 12";
		};
		class InstructionsButton: BSFImgButton
		{
			idc = 20211;
			onMouseButtonDown = "[""Instructions""] call BSF_Client_AssetManagement_GUI_Load";
			color[] = {1, 1, 1, 1}; // Show image as is, without shading
			colorActive[] = {0.7, 0.7, 0.7, 1};
			text = "BSF_Client\images\BSF_Btn_Glass_Blue_ca.paa";
			x = "0.5 - pixelW * pixelGrid * -37";
			y = "0.5 - pixelH * pixelGrid * -25.5";
			w = "pixelW * pixelGrid * 6";
			h = "pixelH * pixelGrid * 3";
		};
		class ShowRadiusText: BSFPictureKeepAspect
		{
			idc = 20280;
			text = "BSF_Client\images\BSF_AM_Label_FlagRadius_ca.paa";
			x = "0.5 - pixelW * pixelGrid * 14";
			y = "0.5 - pixelH * pixelGrid * 32";
			w = "pixelW * pixelGrid * 36";
			h = "pixelH * pixelGrid * 12";
		};
		class Radius_BtnON: BSFImgButton
		{
			idc = 20281;
			onMouseButtonClick = "[""RadiusShow""] call BSF_Client_AssetManagement_GUI_Load";
			color[] = {1, 1, 1, 1}; // Show image as is, without shading
			colorActive[] = {0.7, 0.7, 0.7, 1};
			text = "BSF_Client\images\BSF_Btn_Slider_OFF_ca.paa";
			x = "0.5 - pixelW * pixelGrid * -13";
			y = "0.5 - pixelH * pixelGrid * 27.5";
			w = "pixelW * pixelGrid * 6";
			h = "pixelH * pixelGrid * 3";
		};
		class Radius_BtnOFF: BSFImgButton
		{
			idc = 20282;
			show = false;
			onMouseButtonClick = "[""RadiusHide""] call BSF_Client_AssetManagement_GUI_Load";
			color[] = {1, 1, 1, 1}; // Show image as is, without shading
			colorActive[] = {0.7, 0.7, 0.7, 1};
			text = "BSF_Client\images\BSF_Btn_Slider_ON_ca.paa";
			x = "0.5 - pixelW * pixelGrid * -13";
			y = "0.5 - pixelH * pixelGrid * 27.5";
			w = "pixelW * pixelGrid * 6";
			h = "pixelH * pixelGrid * 3";
		};

		class FlagTest_Title: BSFPictureKeepAspect
		{
			idc = 20207;
			text = "BSF_Client\images\BSF_AM_Label_FlagTest_ca.paa";
			x = "0.5 - pixelW * pixelGrid * -15";
			y = "0.5 - pixelH * pixelGrid * 38";
			w = "pixelW * pixelGrid * 36";
			h = "pixelH * pixelGrid * 12";
		};
		class FlagTest_Btn: BSFImgButton
		{
			idc = 20208;
			onMouseButtonClick = "[""FlagTest""] call BSF_Client_AssetManagement_GUI_Load";
			color[] = {1, 1, 1, 1}; // Show image as is, without shading
			colorActive[] = {0.7, 0.7, 0.7, 1};
			text = "BSF_Client\images\BSF_Btn_Glass_Blue_ca.paa";
			x = "0.5 - pixelW * pixelGrid * -36";
			y = "0.5 - pixelH * pixelGrid * 33.5";
			w = "pixelW * pixelGrid * 6";
			h = "pixelH * pixelGrid * 3";
		};

		class ChangeFlag_Title: BSFPictureKeepAspect
		{
			idc = 20250;
			text = "BSF_Client\images\BSF_AM_Label_ChangeFlag_ca.paa";
			x = "0.5 - pixelW * pixelGrid * -15";
			y = "0.5 - pixelH * pixelGrid * 35";
			w = "pixelW * pixelGrid * 36";
			h = "pixelH * pixelGrid * 12";
		};
		class ChangeFlag_Btn: BSFImgButton
		{
			idc = 20251;
			onMouseButtonClick = "closeDialog 0; [""ChangeFlag""] call BSF_Client_AssetManagement_GUI_Load";
			color[] = {1, 1, 1, 1}; // Show image as is, without shading
			colorActive[] = {0.7, 0.7, 0.7, 1};
			text = "BSF_Client\images\BSF_Btn_Glass_Green_ca.paa";
			x = "0.5 - pixelW * pixelGrid * -36";
			y = "0.5 - pixelH * pixelGrid * 30.5";
			w = "pixelW * pixelGrid * 6";
			h = "pixelH * pixelGrid * 3";
		};
		//////////////////////////////////////
		//////////////////////////////////////
		class TerritoryInfo_Title: BSFPictureKeepAspect
		{
			idc = 20230;
			text = "BSF_Client\images\BSF_AM_Label_TerritoryInfo_ca.paa";
			x = "0.5 - pixelW * pixelGrid * 44";
			y = "0.5 - pixelH * pixelGrid * 38";
			w = "pixelW * pixelGrid * 36";
			h = "pixelH * pixelGrid * 12";
		};

		class TerritoryList: BSFCombo
		{
			idc = 20231;
			onLBSelChanged = "[""TerritorySelect"",_this select 1] call BSF_Client_AssetManagement_GUI_Load";
			x = "0.5 - pixelW * pixelGrid * 44";
			y = "0.5 - pixelH * pixelGrid * 29";
			w = "pixelW * pixelGrid * 34";
			h = "pixelH * pixelGrid * 3";
		};

		class PlayerFlagPic: BSFPictureKeepAspect
		{
			idc = 20232;
			// text = "";
			// text = "BSF_Community_Addon\addons\BSF_Misc\data\flags\BSF_Flag_BSF_co.paa"; // TESTING ONLY?
			text = "BSF_Community_Addon\addons\BSF_Misc\data\flags\BSF_Flag_PUG.paa"; // TESTING ONLY?
			x = "0.5 - pixelW * pixelGrid * 43";
			y = "0.5 - pixelH * pixelGrid * 25";
			w = "pixelW * pixelGrid * 26";
			h = "pixelH * pixelGrid * 13";
		};

		class TerritoryLevel_Caption: BSFStructuredText
		{
			idc = 20233;
			text = "Level:";
			x = "0.5 - pixelW * pixelGrid * 43";
			y = "0.5 - pixelH * pixelGrid * 12";
			w = "pixelW * pixelGrid * 6";
			h = "pixelH * pixelGrid * 2.5";
			size = "pixelH * pixelGrid * 2.25";
		};
		class TerritorySize_Caption: BSFStructuredText
		{
			idc = 20234;
			text = "Size:";
			x = "0.5 - pixelW * pixelGrid * 37";
			y = "0.5 - pixelH * pixelGrid * 12";
			w = "pixelW * pixelGrid * 6";
			h = "pixelH * pixelGrid * 2.5";
			size = "pixelH * pixelGrid * 2.25";
		};
		class TerritoryParts_Caption: BSFStructuredText
		{
			idc = 20235;
			text = "Parts:";
			x = "0.5 - pixelW * pixelGrid * 28";
			y = "0.5 - pixelH * pixelGrid * 12";
			w = "pixelW * pixelGrid * 6";
			h = "pixelH * pixelGrid * 2.5";
			size = "pixelH * pixelGrid * 2.25";
		};

		class TerritoryLevel_Data: BSFStructuredText
		{
			idc = 20236;
			text = "11";
			x = "0.5 - pixelW * pixelGrid * 43";
			y = "0.5 - pixelH * pixelGrid * 10";
			w = "pixelW * pixelGrid * 10";
			h = "pixelH * pixelGrid * 2.5";
			size = "pixelH * pixelGrid * 2.25";
		};
		class TerritorySize_Data: BSFStructuredText
		{
			idc = 20237;
			text = "225";
			x = "0.5 - pixelW * pixelGrid * 37";
			y = "0.5 - pixelH * pixelGrid * 10";
			w = "pixelW * pixelGrid * 10";
			h = "pixelH * pixelGrid * 2.5";
			size = "pixelH * pixelGrid * 2.25";
		};
		class TerritoryParts_Data: BSFStructuredText
		{
			idc = 20238;
			text = "79 of 225";
			x = "0.5 - pixelW * pixelGrid * 28";
			y = "0.5 - pixelH * pixelGrid * 10";
			w = "pixelW * pixelGrid * 10";
			h = "pixelH * pixelGrid * 2.5";
			size = "pixelH * pixelGrid * 2.25";
		};

		class PaymentDueDateText: BSFText
		{
			idc = 20239;
			text = "Thanks For Donating!";
			x = "0.5 - pixelW * pixelGrid * 43";
			y = "0.5 - pixelH * pixelGrid * 8";
			w = "pixelW * pixelGrid * 48";
			h = "pixelH * pixelGrid * 2.5";
			sizeEx = "pixelH * pixelGrid * 2.25";
		};

		class TerritoryVG_Caption: BSFStructuredText
		{
			idc = 20240;
			text = "VG:";
			x = "0.5 - pixelW * pixelGrid * 21";
			y = "0.5 - pixelH * pixelGrid * 12";
			w = "pixelW * pixelGrid * 5";
			h = "pixelH * pixelGrid * 2.5";
			size = "pixelH * pixelGrid * 2.25";
		};
		class TerritoryVG_Data: BSFStructuredText
		{
			idc = 20241;
			text = "11";
			x = "0.5 - pixelW * pixelGrid * 21";
			y = "0.5 - pixelH * pixelGrid * 10";
			w = "pixelW * pixelGrid * 5";
			h = "pixelH * pixelGrid * 2.5";
			size = "pixelH * pixelGrid * 2.25";
		};

		////////////////////////////////
		////////////////////////////////

		class MemberListBox: BSFListBox
		{
			idc = 20260;
			onLBSelChanged = "_this call fnc_BSF_AM_onMemberListBoxSelectionChanged";
			x = "0.5 - pixelW * pixelGrid * 14";
			y = "0.5 - pixelH * pixelGrid * 23";
			w = "pixelW * pixelGrid * 48";
			h = "pixelH * pixelGrid * 13";
			font = "LucidaConsoleB";
			rowHeight = "pixelH * pixelGrid * 2.25";
			sizeEx = "pixelH * pixelGrid * 2";
		};
		class Leave_Btn: BSFButtonApp
		{
			idc = 20261;
			text = "LEAVE";
			onButtonClick = "_this spawn ExileClient_gui_xm8_slide_territory_event_onLeave_BtnClick";
			x = "0.5 - pixelW * pixelGrid * -35";
			y = "0.5 - pixelH * pixelGrid * 23";
			w = "pixelW * pixelGrid * 10";
			h = "pixelH * pixelGrid * 2.5";
			shadow = 2;
		};
		class Kick_Btn: BSFButtonApp
		{
			idc = 20262;
			text = "KICK";
			onButtonClick = "_this spawn fnc_event_onKick_BtnClick";
			x = "0.5 - pixelW * pixelGrid * -35";
			y = "0.5 - pixelH * pixelGrid * 19.5";
			w = "pixelW * pixelGrid * 10";
			h = "pixelH * pixelGrid * 2.5";
		};
		class Promote_Btn: BSFButtonApp
		{
			idc = 20263;
			text = "PROMOTE";
			onButtonClick = "_this spawn fnc_event_onPromote_BtnClick";
			x = "0.5 - pixelW * pixelGrid * -35";
			y = "0.5 - pixelH * pixelGrid * 16";
			w = "pixelW * pixelGrid * 10";
			h = "pixelH * pixelGrid * 2.5";
		};
		class Demote_Btn: BSFButtonApp
		{
			idc = 20264;
			text = "DEMOTE";
			onButtonClick = "_this spawn fnc_event_onDemote_BtnClick";
			x = "0.5 - pixelW * pixelGrid * -35";
			y = "0.5 - pixelH * pixelGrid * 12.5";
			w = "pixelW * pixelGrid * 10";
			h = "pixelH * pixelGrid * 2.5";
		};

		////////////////////////////////
		////////////////////////////////

		class Message: BSFExileXM8Slide
		{
			idc = 24010; // 4010
			show = "false";
			x = "3 * (0.025) + (0)";
			y = "(2 + 1.5) * (0.04) + (0)";
			h = "(19 - 1.5) * (0.04)";
			deletable = 0;
			fade = 0;
			shadow = 0;
			style = 16;
			type = 15;
			class VScrollbar
			{
				color[] = {1, 1, 1, 1};
				width = 0.021;
				autoScrollEnabled = 1;
			};
			class HScrollbar
			{
				color[] = {1, 1, 1, 1};
				height = 0.028;
			};
			class Controls
			{
				class Background: BSFText
				{
					idc = -1;
					x = 0;
					y = 0;
					w = "34 * (0.025)";
					h = "19 * (0.04)";
					colorBackground[] = {"41/255","39/255","46/255",0.95};
				};
				class OkayButton: RscBSFExileXM8Button
				{
					idc = 24011; // 4011
					text = "Okay";
					x = "(16.5 - 3) * (0.025)";
					y = "(12 - 2) * (0.04)";
					w = "7 * (0.025)";
					h = "2 * (0.04)";
					onButtonClick = "false call fnc_BSF_AM_hideMessage";
					// onButtonClick = "call ExileClient_gui_xm8_hideMessage";
				};
				class Question: BSFStructuredText
				{
					idc = 24012;	// 4012
					text = "<t align='center'><t color='#a0df3b'>Yay!</t><br/><t color='#fcfdff' size='1.4'>You have done something cool!</t></t>";
					x = "(4 - 3) * (0.025)";
					y = "(7 - 2) * (0.04)";
					w = "32 * (0.025)";
					h = "3.5 * (0.04)";
					colorBackground[] = {0,0,0,0};
				};
			};
		};
		class Confirm: BSFExileXM8Slide
		{
			idc = 24020; // 4020
			show = "false";
			x = "3 * (0.025) + (0)";
			y = "(2 + 1.5) * (0.04) + (0)";
			h = "(19 - 1.5) * (0.04)";
			deletable = 0;
			fade = 0;
			shadow = 0;
			style = 16;
			type = 15;
			class VScrollbar
			{
				color[] = {1, 1, 1, 1};
				width = 0.021;
				autoScrollEnabled = 1;
			};
			class HScrollbar
			{
				color[] = {1, 1, 1, 1};
				height = 0.028;
			};			
			class Controls
			{
				class Background: BSFText
				{
					idc = -1;
					x = 0;
					y = 0;
					w = "34 * (0.025)";
					h = "19 * (0.04)";
					colorBackground[] = {"41/255","39/255","46/255",0.95};
				};
				class Question: BSFStructuredText
				{
					idc = 24021; // 4021
					text = "<t align='center'><t color='#00b2cd'>Confirm</t><br/><t color='#fcfdff' size='1.4'>Kick Eichi?</t></t>";
					x = "(4 - 3) * (0.025)";
					y = "(7 - 2) * (0.04)";
					w = "32 * (0.025)";
					h = "3.5 * (0.04)";
					colorBackground[] = {0,0,0,0};
				};
				class YesButton: RscBSFExileXM8Button
				{
					idc = 24022; // 4022
					text = "Kick";
					x = "(12.5 - 3) * (0.025)";
					y = "(12 - 2) * (0.04)";
					w = "7 * (0.025)";
					h = "2 * (0.04)";
					onButtonClick = "true call fnc_BSF_AM_hideConfirm";
					// onButtonClick = "true call ExileClient_gui_xm8_hideConfirm";
				};
				class NoButton: RscBSFExileXM8Button
				{
					idc = 24023; // 4023
					text = "Don't kick";
					x = "(20.5 - 3) * (0.025)";
					y = "(12 - 2) * (0.04)";
					w = "7 * (0.025)";
					h = "2 * (0.04)";
					onButtonClick = "false call fnc_BSF_AM_hideConfirm";
					// onButtonClick = "false call ExileClient_gui_xm8_hideConfirm";
				};
			};
		};

		/////////////////// BEGIN LOJACK

		class VehicleHPbars_Title: BSFPictureKeepAspect
		{
			idc = 30107;
			text = "BSF_Client\images\BSF_AM_Label_VehHitPoints_ca.paa";
			x = "0.5 - pixelW * pixelGrid * -10";
			y = "0.5 - pixelH * pixelGrid * -12";
			w = "pixelW * pixelGrid * 36";
			h = "pixelH * pixelGrid * 12";
		};
		class VehicleHPbars_BtnON: BSFImgButton
		{
			idc = 30108;
			onMouseButtonClick = "[""VehHP_ON""] call BSF_Client_AssetManagement_GUI_Load";
			color[] = {1, 1, 1, 1}; // Show image as is, without shading
			colorActive[] = {0.7, 0.7, 0.7, 1};
			text = "BSF_Client\images\BSF_Btn_Slider_OFF_ca.paa";
			x = "0.5 - pixelW * pixelGrid * -37";
			y = "0.5 - pixelH * pixelGrid * -16.5";
			w = "pixelW * pixelGrid * 6";
			h = "pixelH * pixelGrid * 3";
		};
		class VehicleHPbars_BtnOFF: BSFImgButton
		{
			idc = 30109;
			show = false;
			onMouseButtonClick = "[""VehHP_OFF""] call BSF_Client_AssetManagement_GUI_Load";
			color[] = {1, 1, 1, 1}; // Show image as is, without shading
			colorActive[] = {0.7, 0.7, 0.7, 1};
			text = "BSF_Client\images\BSF_Btn_Slider_ON_ca.paa";
			x = "0.5 - pixelW * pixelGrid * -37";
			y = "0.5 - pixelH * pixelGrid * -16.5";
			w = "pixelW * pixelGrid * 6";
			h = "pixelH * pixelGrid * 3";
		};

		class VehicleMarker_Title: BSFPictureKeepAspect
		{
			idc = 30113;
			text = "BSF_Client\images\BSF_AM_Label_VehMarkerCur_ca.paa";
			x = "0.5 - pixelW * pixelGrid * -10";
			y = "0.5 - pixelH * pixelGrid * -15";
			w = "pixelW * pixelGrid * 36";
			h = "pixelH * pixelGrid * 12";
		};
		class VehicleMarker_BtnON: BSFImgButton
		{
			idc = 30110;
			onMouseButtonClick = "[""ToggleMarker""] call BSF_Client_AssetManagement_GUI_Load";
			color[] = {1, 1, 1, 1}; // Show image as is, without shading
			colorActive[] = {0.7, 0.7, 0.7, 1};
			text = "BSF_Client\images\BSF_Btn_Slider_OFF_ca.paa";
			x = "0.5 - pixelW * pixelGrid * -37";
			y = "0.5 - pixelH * pixelGrid * -19.5";
			w = "pixelW * pixelGrid * 6";
			h = "pixelH * pixelGrid * 3";
		};
		class VehicleMarker_BtnOFF: BSFImgButton
		{
			idc = 30111;
			show = false;
			onMouseButtonClick = "[""ToggleMarker""] call BSF_Client_AssetManagement_GUI_Load";
			color[] = {1, 1, 1, 1}; // Show image as is, without shading
			colorActive[] = {0.7, 0.7, 0.7, 1};
			text = "BSF_Client\images\BSF_Btn_Slider_ON_ca.paa";
			x = "0.5 - pixelW * pixelGrid * -37";
			y = "0.5 - pixelH * pixelGrid * -19.5";
			w = "pixelW * pixelGrid * 6";
			h = "pixelH * pixelGrid * 3";
		};
		class VehicleMarker_BtnDisabled: BSFImgButton
		{
			idc = 30112;
			// show = false;
			color[] = {1, 1, 1, 1}; // Show image as is, without shading
			colorActive[] = {0.7, 0.7, 0.7, 1};
			text = "BSF_Client\images\BSF_Btn_Glass_Gray_ca.paa";
			x = "0.5 - pixelW * pixelGrid * -37";
			y = "0.5 - pixelH * pixelGrid * -19.5";
			w = "pixelW * pixelGrid * 6";
			h = "pixelH * pixelGrid * 3";
		};

		class AllVehMarkers_Title: BSFPictureKeepAspect
		{
			idc = 30114;
			text = "BSF_Client\images\BSF_AM_Label_VehMarkerAll_ca.paa";
			x = "0.5 - pixelW * pixelGrid * -10";
			y = "0.5 - pixelH * pixelGrid * -18";
			w = "pixelW * pixelGrid * 36";
			h = "pixelH * pixelGrid * 12";
		};
		class AllVehMarkers_BtnON: BSFImgButton
		{
			idc = 30115;
			onMouseButtonClick = "[""ToggleMarkerAll""] call BSF_Client_AssetManagement_GUI_Load";
			color[] = {1, 1, 1, 1}; // Show image as is, without shading
			colorActive[] = {0.7, 0.7, 0.7, 1};
			text = "BSF_Client\images\BSF_Btn_Slider_OFF_ca.paa";
			x = "0.5 - pixelW * pixelGrid * -37";
			y = "0.5 - pixelH * pixelGrid * -22.5";
			w = "pixelW * pixelGrid * 6";
			h = "pixelH * pixelGrid * 3";
		};
		class AllVehMarkers_BtnOFF: BSFImgButton
		{
			idc = 30116;
			show = false;
			onMouseButtonClick = "[""ToggleMarkerAll""] call BSF_Client_AssetManagement_GUI_Load";
			color[] = {1, 1, 1, 1}; // Show image as is, without shading
			colorActive[] = {0.7, 0.7, 0.7, 1};
			text = "BSF_Client\images\BSF_Btn_Slider_ON_ca.paa";
			x = "0.5 - pixelW * pixelGrid * -37";
			y = "0.5 - pixelH * pixelGrid * -22.5";
			w = "pixelW * pixelGrid * 6";
			h = "pixelH * pixelGrid * 3";
		};
		class AllVehMarkers_BtnMixed: BSFImgButton
		{
			idc = 30117;
			show = false;
			onMouseButtonClick = "[""ToggleMarkerAll""] call BSF_Client_AssetManagement_GUI_Load";
			color[] = {1, 1, 1, 1}; // Show image as is, without shading
			colorActive[] = {0.7, 0.7, 0.7, 1};
			text = "BSF_Client\images\BSF_Btn_Slider_MIX_ca.paa";
			x = "0.5 - pixelW * pixelGrid * -37";
			y = "0.5 - pixelH * pixelGrid * -22.5";
			w = "pixelW * pixelGrid * 6";
			h = "pixelH * pixelGrid * 3";
		};

		////////////////////
		////////////////////

		class Vehicles_Title: BSFText
		{
			idc = 30003;
			text = "VEHICLES IN INVENTORY";
			x = "0.5 - pixelW * pixelGrid * 45";
			y = "0.5 - pixelH * pixelGrid * 6";
			w = "pixelW * pixelGrid * 20";
			h = "pixelH * pixelGrid * 2";
			SizeEx = "pixelH * pixelGrid * 2";
		};
		class Vehicles_BG: BSFText
		{
			idc = 30004;
			x = "0.5 - pixelW * pixelGrid * 45";
			y = "0.5 - pixelH * pixelGrid * 4";
			w = "pixelW * pixelGrid * 60";
			h = "pixelH * pixelGrid * 16";
			colorBackground[] = {0.05,0.05,0.05,0.7};
		};
		class Vehicles_Frame: BSFFrame
		{
			idc = 30005;
			x = "0.5 - pixelW * pixelGrid * 45";
			y = "0.5 - pixelH * pixelGrid * 4";
			w = "pixelW * pixelGrid * 60";
			h = "pixelH * pixelGrid * 16";
		};
		class Vehicles_Captions: BSFText
		{
			idc = 30006;
			text = "VEHICLE                                                                GRID                 PIN            HEALTH         IN VG     LOCKED";
			x = "0.5 - pixelW * pixelGrid * 45";
			y = "0.5 - pixelH * pixelGrid * 4";
			w = "pixelW * pixelGrid * 60";
			h = "pixelH * pixelGrid * 2";
			SizeEx = "pixelH * pixelGrid * 2";
		};
		class Vehicles_Container: BSFListNBox
		{
			idc = 30201;
			onLBDblClick = "_this call BSF_Client_AssetManagement_inventory_event_DoubleClick";
			onMouseButtonClick = "[""Inventory""] call BSF_Client_AssetManagement_GUI_Load";
			itemBackground[] = {0,0,0,0.1};
			columns[] = { 0, 0.4, 0.55, 0.67, 0.8, 0.9};// EDITING NOW
			SizeEx = "pixelH * pixelGrid * 2.25";
			rowHeight = "pixelH * pixelGrid * 2.25";
			canDrag = 0;
			x = "0.5 - pixelW * pixelGrid * 45";
			y = "0.5 - pixelH * pixelGrid * 2";
			w = "pixelW * pixelGrid * 60";
			h = "pixelH * pixelGrid * 14";
		};

		class VehicleInv_Title: BSFText
		{
			idc = 30008;
			text = "VEHICLE INVENTORY";
			x = "0.5 - pixelW * pixelGrid * 45";
			y = "0.5 - pixelH * pixelGrid * -13";
			w = "pixelW * pixelGrid * 38";
			h = "pixelH * pixelGrid * 2";
			SizeEx = "pixelH * pixelGrid * 2";
		};
		class VehicleInv_BG: BSFText
		{
			idc = 30009;
			x = "0.5 - pixelW * pixelGrid * 45";
			y = "0.5 - pixelH * pixelGrid * -15";
			w = "pixelW * pixelGrid * 38";
			h = "pixelH * pixelGrid * 16";
			colorBackground[] = {0.05,0.05,0.05,0.7};
		};
		class VehicleInv_Frame: BSFFrame
		{
			idc = 30010;
			x = "0.5 - pixelW * pixelGrid * 45";
			y = "0.5 - pixelH * pixelGrid * -15";
			w = "pixelW * pixelGrid * 38";
			h = "pixelH * pixelGrid * 16";
		};
		class VehicleInv_Container: BSFListNBox
		{
			idc = 30202;
			onLBDblClick = "_this call BSF_Client_AssetManagement_inventory_event_DoubleClick";
			itemBackground[] = {0,0,0,0.1};
			columns[] = { 0, 0.8 };
			SizeEx = "pixelH * pixelGrid * 2.25";
			rowHeight = "pixelH * pixelGrid * 2.25";		// EDITING NOW
			canDrag = 0;
			x = "0.5 - pixelW * pixelGrid * 45";
			y = "0.5 - pixelH * pixelGrid * -15";
			w = "pixelW * pixelGrid * 38";
			h = "pixelH * pixelGrid * 16";
			colorBackground[] = {0,0,0,0};
		};

		class VehicleDetails_Title: BSFText
		{
			idc = 30011;
			text = "VEHICLE DETAILS:";
			x = "0.5 - pixelW * pixelGrid * 5";
			y = "0.5 - pixelH * pixelGrid * -13";
			w = "pixelW * pixelGrid * 14";
			h = "pixelH * pixelGrid * 2";
			SizeEx = "pixelH * pixelGrid * 2";
		};
		class VehicleDetails_Captions: BSFStructuredText
		{
			idc = 30012;
			deletable = 0;
			fade = 0;
			access = 0;
			type = 13;
			style = 0;
			colorBackground[] = {0, 0, 0, 0};
			colorText[] = {1, 1, 1, 1};
			class Attributes
			{
				font = "RobotoCondensed";
				color = "#ffffff";
				colorLink = "#D09B43";
				align = "left";
				shadow = 1;
			};
			x = "0.5 - pixelW * pixelGrid * 5";
			y = "0.5 - pixelH * pixelGrid * -15";
			w = "pixelW * pixelGrid * 13";
			h = "pixelH * pixelGrid * 16";
			text = "<t align='left'>Maximum Load <br/>Armor <br/>Fuel Capacity <br/>Max Speed <br/>Purchase Price <br/>Sell Price <br/>Level</t>";
			size = "pixelH * pixelGrid * 2.25";
			shadow = 1;
		};

		class VehicleDetails_Text: BSFStructuredText
		{
			idc = 30013;
			deletable = 0;
			fade = 0;
			access = 0;
			type = 13;
			style = 0;
			colorBackground[] = {0, 0, 0, 0};
			colorText[] = {1, 1, 1, 1};
			class Attributes
			{
				font = "RobotoCondensed";
				color = "#ffffff";
				colorLink = "#D09B43";
				align = "left";
				shadow = 1;
			};
			x = "0.5 - pixelW * pixelGrid * -6";
			y = "0.5 - pixelH * pixelGrid * -15";
			w = "4  	*				(((safezoneW / safezoneH) min 1.2) / 40)";
			h = "10  	*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			size = "pixelH * pixelGrid * 2.25";
			text = "<t align='left'>4000 <br/>450 <br/>32 <br/>115 <br/>11000 <br/>9500 <br/>3</t>";
			shadow = 1;
		};

		////////////////////////////
		////////////////////////////

		class DeleteTerritory_Title: BSFPictureKeepAspect
		{
			idc = 20500;
			text = "BSF_Client\images\BSF_AM_Label_DeleteFlag_ca.paa";
			x = "0.5 - pixelW * pixelGrid * -15";
			y = "0.5 - pixelH * pixelGrid * 32";
			w = "pixelW * pixelGrid * 36";
			h = "pixelH * pixelGrid * 12";
		};
		class DeleteTerritory_Btn: BSFImgButton
		{
			idc = 20501;
			onMouseButtonClick = "[""DeleteTerritoryConfirmation1"",-1] call BSF_Client_AssetManagement_GUI_Load";
			color[] = {1, 1, 1, 1}; // Show image as is, without shading
			colorActive[] = {0.7, 0.7, 0.7, 1};
			text = "BSF_Client\images\BSF_Btn_Glass_Red_ca.paa";
			x = "0.5 - pixelW * pixelGrid * -36";
			y = "0.5 - pixelH * pixelGrid * 27.5";
			w = "pixelW * pixelGrid * 6";
			h = "pixelH * pixelGrid * 3";
		};
		class DeleteTerritory_BtnDisabled: BSFImgButton
		{
			idc = 20502;
			show = false;
			color[] = {1, 1, 1, 1}; // Show image as is, without shading
			colorActive[] = {0.7, 0.7, 0.7, 1};
			text = "BSF_Client\images\BSF_Btn_Glass_Gray_ca.paa";
			x = "0.5 - pixelW * pixelGrid * -36";
			y = "0.5 - pixelH * pixelGrid * 27.5";
			w = "pixelW * pixelGrid * 6";
			h = "pixelH * pixelGrid * 3";
		};
		class TabletBackgroundWarning1: BSFPictureKeepAspect
		{
			idc = 20503;
			show = false;
			text = "BSF_Client\images\BSF_Tablet_BG_Warning1_ca.paa";
			x = "0.5 - pixelW * pixelGrid * 64";
			y = "0.5 - pixelH * pixelGrid * 70";
			w = "pixelW * pixelGrid * 141";
			h = "pixelH * pixelGrid * 141";
		};

		class TabletBackgroundWarning2: BSFPictureKeepAspect
		{
			idc = 20504;
			show = false;
			text = "BSF_Client\images\BSF_Tablet_BG_Warning2_ca.paa";
			x = "0.5 - pixelW * pixelGrid * 64";
			y = "0.5 - pixelH * pixelGrid * 70";
			w = "pixelW * pixelGrid * 141";
			h = "pixelH * pixelGrid * 141";
		};

		class DeleteTerritory_BtnYesFrame: BSFFrame
		{
			idc = 20505;
			show = false;
			x = "0.5 - pixelW * pixelGrid * 13.1";
			y = "0.5 - pixelH * pixelGrid * -20.05";
			w = "pixelW * pixelGrid * 8.2";
			h = "pixelH * pixelGrid * 4.2";
		};
		class DeleteTerritory_BtnNoFrame: BSFFrame
		{
			idc = 20506;
			show = false;
			x = "0.5 - pixelW * pixelGrid * -4.9";
			y = "0.5 - pixelH * pixelGrid * -20.05";
			w = "pixelW * pixelGrid * 8.2";
			h = "pixelH * pixelGrid * 4.2";
		};
		class DeleteTerritory_BtnYes1: BSFButtonApp
		{
			idc = 20510;
			show = false;
			text = "YES";
			onMouseButtonClick = "[""DeleteTerritoryConfirmation2"",-1] call BSF_Client_AssetManagement_GUI_Load";
			x = "0.5 - pixelW * pixelGrid * 13";
			y = "0.5 - pixelH * pixelGrid * -20";
			w = "pixelW * pixelGrid * 8";
			h = "pixelH * pixelGrid * 4";
			colorBackground[] = {0.1,0.1,0.1,1};
		};
		class DeleteTerritory_BtnNo1: BSFButtonApp
		{
			idc = 20511;
			show = false;
			text = "NO";

			onMouseButtonClick = "[""Load"",0] call BSF_Client_AssetManagement_GUI_Load";
			x = "0.5 - pixelW * pixelGrid * -5";
			y = "0.5 - pixelH * pixelGrid * -20";
			w = "pixelW * pixelGrid * 8";
			h = "pixelH * pixelGrid * 4";
			colorBackground[] = {0.1,0.1,0.1,1};
		};

		class DeleteTerritory_BtnYes2: BSFButtonApp
		{
			idc = 20512;
			show = false;
			text = "YES";
			onMouseButtonClick = "[""DeleteTerritory"",-1] call BSF_Client_AssetManagement_GUI_Load";
			x = "0.5 - pixelW * pixelGrid * 13";
			y = "0.5 - pixelH * pixelGrid * -20";
			w = "pixelW * pixelGrid * 8";
			h = "pixelH * pixelGrid * 4";
			colorBackground[] = {0.1,0.1,0.1,1};
		};
		class DeleteTerritory_BtnNo2: BSFButtonApp
		{
			idc = 20513;
			show = false;
			text = "NO";
			onMouseButtonClick = "[""Load"",0] call BSF_Client_AssetManagement_GUI_Load";
			x = "0.5 - pixelW * pixelGrid * -5";
			y = "0.5 - pixelH * pixelGrid * -20";
			w = "pixelW * pixelGrid * 8";
			h = "pixelH * pixelGrid * 4";
			colorBackground[] = {0.1,0.1,0.1,1};
		};

	};
};



/*
createDialog "RscExileSetupTerritoryDialog";
createDialog "BSF_ChangeTerritory_Dialog";
createDialog "BSF_AssetManagement_Instructions_Dialog";
*/
class BSF_ChangeTerritory_Dialog
{
	idd = 25302;
	onLoad = "uiNamespace setVariable ['BSF_ChangeTerritory_Dialog', _this select 0]";
	// onUnload = "call ExileClient_gui_setupTerritoryDialog_event_onUnload; uiNamespace setVariable ['BSF_ChangeTerritory_Dialog', displayNull]";
	class controlsBackground
	{
		class DialogBackground: BSFText
		{
			idc = -1;
			x = "10 * (0.025) + (0)";
			y = "5 * (0.04) + (0)";
			w = "20 * (0.025)";
			h = "16 * (0.04)";
			colorBackground[] = {0.05,0.05,0.05,0.7};
		};
		class DialogCaption: BSFText
		{
			idc = -1;
			text = "Change Territory Info";
			x = "10 * (0.025) + (0)";
			y = "3.9 * (0.04) + (0)";
			w = "20 * (0.025)";
			h = "1 * (0.04)";
			colorBackground[] = {0.1,0.1,0.1,1};
		};
		class NameLabel: BSFText
		{
			idc = -1;
			text = "Name:";
			x = "10.5 * (0.025) + (0)";
			y = "5.5 * (0.04) + (0)";
			w = "19 * (0.025)";
			h = "1 * (0.04)";
		};
		class FlagLabel: BSFText
		{
			idc = -1;
			text = "Flag Texture:";
			x = "10.5 * (0.025) + (0)";
			y = "9.5 * (0.04) + (0)";
			w = "19 * (0.025)";
			h = "1 * (0.04)";
		};
	};
	class controls
	{
		class CancelButton: BSFButtonMenuCancel
		{
			idc = 4005;
			onMouseButtonClick = "[""Load"",0] call BSF_Client_AssetManagement_GUI_Load";
			action = "closeDialog 0";
			x = "23.5 * (0.025) + (0)";
			y = "19.5 * (0.04) + (0)";
			w = "6 * (0.025)";
			h = "1 * (0.04)";
		};
		class OKButton: BSFButtonMenuOK
		{
			idc = 4002;
			text = "Ok";
			onMouseButtonClick = "[] call fnc_displayFlagSetup_OK;";
			x = "10.5 * (0.025) + (0)";
			y = "19.5 * (0.04) + (0)";
			w = "6 * (0.025)";
			h = "1 * (0.04)";
		};

		class NameInput: BSFEdit
		{
			idc = 4000;
			text = "";
			maxChars = 40;
			x = "10.5 * (0.025) + (0)";
			y = "6.5 * (0.04) + (0)";
			w = "19 * (0.025)";
			h = "2 * (0.04)";
			colorBackground[] = {0,0,0,1};
		};

		class FlagListBox: BSFListBox
		{
			idc = 4001;
			x = "10.5 * (0.025) + (0)";
			y = "10.5 * (0.04) + (0)";
			w = "19 * (0.025)";
			h = "8 * (0.04)";
		};
	};
};




class BSF_AssetManagement_Instructions_Dialog
{
	idd = 25303;
	onLoad = "uiNamespace setVariable ['BSF_AssetManagement_Instructions_Dialog', _this select 0]";
	class controls
	{
		class Instructions_BG: BSFPictureKeepAspect
		{
			idc = 20000;
			text = "BSF_Client\images\Tablet_BG_ca.paa";
			x = "0.5 - pixelW * pixelGrid * 64";
			y = "0.5 - pixelH * pixelGrid * 70";
			w = "pixelW * pixelGrid * 141";
			h = "pixelH * pixelGrid * 141";
		};

		class LED_Green: BSFPictureKeepAspect
		{
			idc = 20002;
			text = "BSF_Client\images\BSF_LED_Green.paa";
			x = "0.5 - pixelW * pixelGrid * 35.25";
			y = "0.5 - pixelH * pixelGrid * -37";
			w = "pixelW * pixelGrid * 2";
			h = "pixelH * pixelGrid * 2";
		};
		class LED_Orange: BSFPictureKeepAspect
		{
			idc = 20003;
			text = "BSF_Client\images\BSF_LED_Orange.paa";
			x = "0.5 - pixelW * pixelGrid * 33.1";
			y = "0.5 - pixelH * pixelGrid * -37";
			w = "pixelW * pixelGrid * 2";
			h = "pixelH * pixelGrid * 2";
		};		

		class Instruction_Content: BSFStructuredText
		{
			idc = 20102;
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
			x = "0.5 - pixelW * pixelGrid * 44";
			y = "0.5 - pixelH * pixelGrid * 35";
			w = "pixelW * pixelGrid * 88";
			h = "pixelH * pixelGrid * 65";
			text = "";
			size = "pixelH * pixelGrid * 2.35";
			shadow = 1;
		};
	};
};

