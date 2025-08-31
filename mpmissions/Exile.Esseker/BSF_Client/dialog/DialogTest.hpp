/*
createDialog "BSF_AssetManagement_Dialog"; 
createDialog "PixelGridTest"; 
createDialog "DialogTest"; 

*/
// ["InfoTitleAndText", [" pixelGrid", format["%1", pixelGrid]]] call ExileClient_gui_toaster_addTemplateToast;
// ["InfoTitleAndText", [" pixelGridBase", format["%1", pixelGridBase]]] call ExileClient_gui_toaster_addTemplateToast;
// ["InfoTitleAndText", [" pixelGridNoUIScale ", format["%1", pixelGridNoUIScale ]]] call ExileClient_gui_toaster_addTemplateToast;
// ["InfoTitleAndText", [" pixelGridNoUIScale ", format["%1", pixelH ]]] call ExileClient_gui_toaster_addTemplateToast;

// pixelGrid = 12
// pixelGridBase = 24
// pixelGridNoUIScale = 24



class PixelGridTest
{
	idd = 25502;
	onLoad = "uiNamespace setVariable ['PixelGridTest', _this select 0]";
	class Controls
	{
		class Background: BSFText
		{
			x = "0.5 - pixelW * pixelGrid * 50";	// centre minus half width
			y = "0.5 - pixelH * pixelGrid * 30";	// centre minus half height
			w = "pixelW * pixelGrid * 100";
			h = "pixelH * pixelGrid * 60";
			colorBackground[] = {0.9, 0.9, 0.9, 1};
		};

		// class V00: BSFText
		// {
		// 	x = "0.5 - pixelW * pixelGrid * 50";	// centre minus half width
		// 	y = "0.5 - pixelH * pixelGrid * 30";	// centre minus half height
		// 	w = "pixelW * pixelGrid * 3";
		// 	h = "pixelH * pixelGrid * 60";
		// 	colorBackground[] = {1, 0, 0, 1};
		// };
		// class V01: BSFText
		// {
		// 	x = "0.5 - pixelW * pixelGrid * 50";	// centre minus half width
		// 	y = "0.5 - pixelH * pixelGrid * 30";	// centre minus half height
		// 	w = "pixelW * pixelGrid * 3";
		// 	h = "pixelH * pixelGrid * 60";
		// 	colorBackground[] = {1, 0, 0, 1};
		// };
		// class V02: BSFText
		// {
		// 	x = "0.5 - pixelW * pixelGrid * 44";	// centre minus half width
		// 	y = "0.5 - pixelH * pixelGrid * 30";	// centre minus half height
		// 	w = "pixelW * pixelGrid * 3";
		// 	h = "pixelH * pixelGrid * 60";
		// 	colorBackground[] = {1, 0, 0, 1};
		// };
		// class V03: BSFText
		// {
		// 	x = "0.5 - pixelW * pixelGrid * 38";	// centre minus half width
		// 	y = "0.5 - pixelH * pixelGrid * 30";	// centre minus half height
		// 	w = "pixelW * pixelGrid * 3";
		// 	h = "pixelH * pixelGrid * 60";
		// 	colorBackground[] = {1, 0, 0, 1};
		// };
		// class V04: BSFText
		// {
		// 	x = "0.5 - pixelW * pixelGrid * 32";	// centre minus half width
		// 	y = "0.5 - pixelH * pixelGrid * 30";	// centre minus half height
		// 	w = "pixelW * pixelGrid * 3";
		// 	h = "pixelH * pixelGrid * 60";
		// 	colorBackground[] = {1, 0, 0, 1};
		// };
		// class V05: BSFText
		// {
		// 	x = "0.5 - pixelW * pixelGrid * 26";	// centre minus half width
		// 	y = "0.5 - pixelH * pixelGrid * 30";	// centre minus half height
		// 	w = "pixelW * pixelGrid * 3";
		// 	h = "pixelH * pixelGrid * 60";
		// 	colorBackground[] = {1, 0, 0, 1};
		// };
		// class V06: BSFText
		// {
		// 	x = "0.5 - pixelW * pixelGrid * 20";	// centre minus half width
		// 	y = "0.5 - pixelH * pixelGrid * 30";	// centre minus half height
		// 	w = "pixelW * pixelGrid * 3";
		// 	h = "pixelH * pixelGrid * 60";
		// 	colorBackground[] = {1, 0, 0, 1};
		// };
		// class V07: BSFText
		// {
		// 	x = "0.5 - pixelW * pixelGrid * 14";	// centre minus half width
		// 	y = "0.5 - pixelH * pixelGrid * 30";	// centre minus half height
		// 	w = "pixelW * pixelGrid * 3";
		// 	h = "pixelH * pixelGrid * 60";
		// 	colorBackground[] = {1, 0, 0, 1};
		// };
		// class V08: BSFText
		// {
		// 	x = "0.5 - pixelW * pixelGrid * 8";	// centre minus half width
		// 	y = "0.5 - pixelH * pixelGrid * 30";	// centre minus half height
		// 	w = "pixelW * pixelGrid * 3";
		// 	h = "pixelH * pixelGrid * 60";
		// 	colorBackground[] = {1, 0, 0, 1};
		// };
		// class V09: BSFText
		// {
		// 	x = "0.5 - pixelW * pixelGrid * 2";	// centre minus half width
		// 	y = "0.5 - pixelH * pixelGrid * 30";	// centre minus half height
		// 	w = "pixelW * pixelGrid * 3";
		// 	h = "pixelH * pixelGrid * 60";
		// 	colorBackground[] = {1, 0, 0, 1};
		// };
		// class V10: BSFText
		// {
		// 	x = "0.5 - pixelW * pixelGrid * -4";	// centre minus half width
		// 	y = "0.5 - pixelH * pixelGrid * 30";	// centre minus half height
		// 	w = "pixelW * pixelGrid * 3";
		// 	h = "pixelH * pixelGrid * 60";
		// 	colorBackground[] = {1, 0, 0, 1};
		// };
		// class V11: BSFText
		// {
		// 	x = "0.5 - pixelW * pixelGrid * -10";	// centre minus half width
		// 	y = "0.5 - pixelH * pixelGrid * 30";	// centre minus half height
		// 	w = "pixelW * pixelGrid * 3";
		// 	h = "pixelH * pixelGrid * 60";
		// 	colorBackground[] = {1, 0, 0, 1};
		// };
		// class V12: BSFText
		// {
		// 	x = "0.5 - pixelW * pixelGrid * -16";	// centre minus half width
		// 	y = "0.5 - pixelH * pixelGrid * 30";	// centre minus half height
		// 	w = "pixelW * pixelGrid * 3";
		// 	h = "pixelH * pixelGrid * 60";
		// 	colorBackground[] = {1, 0, 0, 1};
		// };
		// class V13: BSFText
		// {
		// 	x = "0.5 - pixelW * pixelGrid * -22";	// centre minus half width
		// 	y = "0.5 - pixelH * pixelGrid * 30";	// centre minus half height
		// 	w = "pixelW * pixelGrid * 3";
		// 	h = "pixelH * pixelGrid * 60";
		// 	colorBackground[] = {1, 0, 0, 1};
		// };
		// class V14: BSFText
		// {
		// 	x = "0.5 - pixelW * pixelGrid * -28";	// centre minus half width
		// 	y = "0.5 - pixelH * pixelGrid * 30";	// centre minus half height
		// 	w = "pixelW * pixelGrid * 3";
		// 	h = "pixelH * pixelGrid * 60";
		// 	colorBackground[] = {1, 0, 0, 1};
		// };
		// class V15: BSFText
		// {
		// 	x = "0.5 - pixelW * pixelGrid * -34";	// centre minus half width
		// 	y = "0.5 - pixelH * pixelGrid * 30";	// centre minus half height
		// 	w = "pixelW * pixelGrid * 3";
		// 	h = "pixelH * pixelGrid * 60";
		// 	colorBackground[] = {1, 0, 0, 1};
		// };
		// class V16: BSFText
		// {
		// 	x = "0.5 - pixelW * pixelGrid * -40";	// centre minus half width
		// 	y = "0.5 - pixelH * pixelGrid * 30";	// centre minus half height
		// 	w = "pixelW * pixelGrid * 3";
		// 	h = "pixelH * pixelGrid * 60";
		// 	colorBackground[] = {1, 0, 0, 1};
		// };
		// class V17: BSFText
		// {
		// 	x = "0.5 - pixelW * pixelGrid * -46";	// centre minus half width
		// 	y = "0.5 - pixelH * pixelGrid * 30";	// centre minus half height
		// 	w = "pixelW * pixelGrid * 3";
		// 	h = "pixelH * pixelGrid * 60";
		// 	colorBackground[] = {1, 0, 0, 1};
		// };





		// class H00: BSFText
		// {
		// 	x = "0.5 - pixelW * pixelGrid * 50";	// centre minus half width
		// 	y = "0.5 - pixelH * pixelGrid * 30";	// centre minus half height
		// 	w = "pixelW * pixelGrid * 100";
		// 	h = "pixelH * pixelGrid * 3";
		// 	colorBackground[] = {1, 1, 1, 1};
		// };
		// class H01: BSFText
		// {
		// 	x = "0.5 - pixelW * pixelGrid * 50";	// centre minus half width
		// 	y = "0.5 - pixelH * pixelGrid * 24";	// centre minus half height
		// 	w = "pixelW * pixelGrid * 100";
		// 	h = "pixelH * pixelGrid * 3";
		// 	colorBackground[] = {1, 1, 1, 1};
		// };
		// class H02: BSFText
		// {
		// 	x = "0.5 - pixelW * pixelGrid * 50";	// centre minus half width
		// 	y = "0.5 - pixelH * pixelGrid * 18";	// centre minus half height
		// 	w = "pixelW * pixelGrid * 100";
		// 	h = "pixelH * pixelGrid * 3";
		// 	// text = "INSTRUCTIONS";
		// 	colorBackground[] = {1, 1, 1, 1};
		// };
		// class H03: BSFText
		// {
		// 	x = "0.5 - pixelW * pixelGrid * 50";	// centre minus half width
		// 	y = "0.5 - pixelH * pixelGrid * 12";	// centre minus half height
		// 	w = "pixelW * pixelGrid * 100";
		// 	h = "pixelH * pixelGrid * 3";
		// 	// text = "INSTRUCTIONS";
		// 	colorBackground[] = {1, 1, 1, 1};
		// };
		// class H04: BSFText
		// {
		// 	x = "0.5 - pixelW * pixelGrid * 50";	// centre minus half width
		// 	y = "0.5 - pixelH * pixelGrid * 6";	// centre minus half height
		// 	w = "pixelW * pixelGrid * 100";
		// 	h = "pixelH * pixelGrid * 3";
		// 	// text = "INSTRUCTIONS";
		// 	colorBackground[] = {1, 1, 1, 1};
		// };
		// class H05: BSFText
		// {
		// 	x = "0.5 - pixelW * pixelGrid * 50";	// centre minus half width
		// 	y = "0.5 - pixelH * pixelGrid * 0";	// centre minus half height
		// 	w = "pixelW * pixelGrid * 100";
		// 	h = "pixelH * pixelGrid * 3";
		// 	// text = "INSTRUCTIONS";
		// 	colorBackground[] = {1, 1, 1, 1};
		// };
		// class H06: BSFText
		// {
		// 	x = "0.5 - pixelW * pixelGrid * 50";	// centre minus half width
		// 	y = "0.5 - pixelH * pixelGrid * -6";	// centre minus half height
		// 	w = "pixelW * pixelGrid * 100";
		// 	h = "pixelH * pixelGrid * 3";
		// 	// text = "INSTRUCTIONS";
		// 	colorBackground[] = {1, 1, 1, 1};
		// };
		// class H07: BSFText
		// {
		// 	x = "0.5 - pixelW * pixelGrid * 50";	// centre minus half width
		// 	y = "0.5 - pixelH * pixelGrid * -12";	// centre minus half height
		// 	w = "pixelW * pixelGrid * 100";
		// 	h = "pixelH * pixelGrid * 3";
		// 	// text = "INSTRUCTIONS";
		// 	colorBackground[] = {1, 1, 1, 1};
		// };
		// class H08: BSFText
		// {
		// 	x = "0.5 - pixelW * pixelGrid * 50";	// centre minus half width
		// 	y = "0.5 - pixelH * pixelGrid * -18";	// centre minus half height
		// 	w = "pixelW * pixelGrid * 100";
		// 	h = "pixelH * pixelGrid * 3";
		// 	// text = "INSTRUCTIONS";
		// 	colorBackground[] = {1, 1, 1, 1};
		// };
		// class H09: BSFText
		// {
		// 	x = "0.5 - pixelW * pixelGrid * 50";	// centre minus half width
		// 	y = "0.5 - pixelH * pixelGrid * -24";	// centre minus half height
		// 	w = "pixelW * pixelGrid * 100";
		// 	h = "pixelH * pixelGrid * 3";
		// 	// text = "INSTRUCTIONS";
		// 	colorBackground[] = {1, 1, 1, 1};
		// };


		// class PlayerFlagPiXc: BSFPictureKeepAspect
		// {
		// 	idc = 20232;
		// 	text = "BSF_Community_Addon\addons\BSF_Misc\data\flags\BSF_Flag_PUG.paa";
		// 	x = "3  	*			(((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
		// 	y = "4 		*			((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + safezoneY + (safezoneH - ( ((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		// 	w = "10		*			(((safezoneW / safezoneH) min 1.2) / 40)";
		// 	h = "5 		*			((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		// };
		class PlayerFlagPic: BSFPictureKeepAspect
		{
			idc = 20232;
			text = "BSF_Community_Addon\addons\BSF_Misc\data\flags\BSF_Flag_PUG.paa";
			x = "0.5 - pixelW * pixelGrid * 45";
			y = "0.5 - pixelH * pixelGrid * 23";
			w = "pixelW * pixelGrid * 26";
			h = "pixelH * pixelGrid * 13";
		};
		class Glass1: BSFImgButton
		{
			idc = 520299;
			color[] = {1, 1, 1, 1}; // Show image as is, without shading
			colorActive[] = {1, 1, 1, 1};
			text = "BSF\AssetManagement\images\Buttons\glassOverlay01.paa";
			x = "0.5 - pixelW * pixelGrid * 45";
			y = "0.5 - pixelH * pixelGrid * 23";
			w = "pixelW * pixelGrid * 26";
			h = "pixelH * pixelGrid * 13";
		};




		/////// Footer Buttons:
		class InstructionsButton: BSFButtonMenu
		{
			idc = 20101;
			onMouseButtonDown = "[""Instructions""] call BSF_Client_AssetManagement_GUI_Load";
			text = "INSTRUCTIONS";
			x = "1 		*			(((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
			y = "24.8	*			((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY + (safezoneH - (((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "9.25	*			(((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 		*			((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class X1Button: BSFButtonMenu
		{
			idc = 20102;
			show = false;
			text = "CRAFT AMMO";
			onMouseButtonDown = "[""Load"",  [lbText [20202,(lbCurSel 20202)]]] call BSF_Client_AssetManagement_GUI_Load";
			x = "1 		*			(((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
			y = "24.8	*			((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY + (safezoneH - (((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "9.25	*			(((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 		*			((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Button_2: BSFButtonMenu
		{
			idc = 20103;
			show = false;
			text = "BUTTON 2";
			onMouseButtonDown = "call ExileClient_gui_inventory_combineMagazines";
			x = "10.6	*			(((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
			y = "24.8	*			((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY + (safezoneH - (((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "9.25	*			(((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 		*			((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Button_ServerRules: BSFButtonMenu
		{
			idc = 20104;
			text = "SERVER RULES";
			onMouseButtonDown = "createDialog 'RscDisplayServerInfoMenu'";
			x = "20.2	*			(((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
			y = "24.8	*			((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY + (safezoneH - (((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "9.25	*			(((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 		*			((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[] = {"220/225","58/255","71/225",1};	// BSF Red
		};
		class ButtonClose: BSFButtonMenu
		{
			idc = 20105;
			text = "CLOSE";
			onMouseButtonDown = "closeDialog 0";
			x = "29.75	*			(((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
			y = "24.8	*			((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY + (safezoneH - (((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "9.25	*			(((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 		*			((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};

		/////// Footer Buttons ^^^

	};
};


class DialogTest
{
	idd = 25501;
	onLoad = "uiNamespace setVariable ['DialogTest', _this select 0]";
	// onUnload = "[""UnLoad""] call BSF_Client_AssetManagement_GUI_Load;uiNamespace setVariable ['BSF_AssetManagement_Dialog', displayNull];";
	class Controls
	{
		class Background: BSFText
		{
			x = "1 		*				(((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
			y = "1 		*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY + (safezoneH - (((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "38		*				(((safezoneW / safezoneH) min 1.2) / 40)";
			h = "23 	*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[] = {0.0, 0.0, 0.0, .6};
		};

		// class BG_Image: BSFPictureKeepAspect
		// {
		// 	idc = 20000;
		// 	x = "1 		*			(((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
		// 	y = "1 		*			((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY + (safezoneH - (((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		// 	w = "38		*			(((safezoneW / safezoneH) min 1.2) / 40)";
		// 	h = "23 	*			((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		// 	text = "BSF\AssetManagement\images\BSF_BG_Altis.jpg";
		// };

		class H00: BSFText
		{
			x = "1 		*				(((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
			y = "0		*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY + (safezoneH - (((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "38		*				(((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 		*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[] = {1, 1, 1, 1};
		}

		class H01: BSFText
		{
			x = "1 		*				(((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
			y = "2		*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY + (safezoneH - (((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "38		*				(((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 		*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[] = {1, 1, 1, 1};
		};

		class H02: BSFText
		{
			x = "1 		*				(((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
			y = "4 		*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY + (safezoneH - (((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "38		*				(((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 		*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[] = {1, 1, 1, 1};
		};

		class H03: BSFText
		{
			x = "1 		*				(((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
			y = "6 		*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY + (safezoneH - (((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "38		*				(((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 		*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[] = {1, 1, 1, 1};
		};

		class H04: BSFText
		{
			x = "1 		*				(((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
			y = "8 		*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY + (safezoneH - (((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "38		*				(((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 		*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[] = {1, 1, 1, 1};
		};
		class H05: BSFText
		{
			x = "1 		*				(((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
			y = "10 		*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY + (safezoneH - (((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "38		*				(((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 		*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[] = {1, 1, 1, 1};
		};
		class H06: BSFText
		{
			x = "1 		*				(((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
			y = "12 		*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY + (safezoneH - (((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "38		*				(((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 		*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[] = {1, 1, 1, 1};
		};
		class H07: BSFText
		{
			x = "1 		*				(((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
			y = "14 		*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY + (safezoneH - (((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "38		*				(((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 		*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[] = {1, 1, 1, 1};
		};
		class H08: BSFText
		{
			x = "1 		*				(((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
			y = "16 		*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY + (safezoneH - (((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "38		*				(((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 		*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[] = {1, 1, 1, 1};
		};
		class H09: BSFText
		{
			x = "1 		*				(((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
			y = "18 		*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY + (safezoneH - (((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "38		*				(((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 		*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[] = {1, 1, 1, 1};
		};
		class H10: BSFText
		{
			x = "1 		*				(((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
			y = "20 		*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY + (safezoneH - (((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "38		*				(((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 		*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[] = {1, 1, 1, 1};
		};
		class H11: BSFText
		{
			x = "1 		*				(((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
			y = "22 		*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY + (safezoneH - (((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "38		*				(((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 		*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[] = {1, 1, 1, 1};
		};
		// class H12: BSFText
		// {
		// 	x = "1 		*				(((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
		// 	y = "24 		*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY + (safezoneH - (((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		// 	w = "38		*				(((safezoneW / safezoneH) min 1.2) / 40)";
		// 	h = "1 		*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		// 	colorBackground[] = {1, 1, 1, 1};
		// };

		class V01: BSFText
		{
			x = "1 		*				(((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
			y = "1 		*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY + (safezoneH - (((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "1		*				(((safezoneW / safezoneH) min 1.2) / 40)";
			h = "23 	*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[] = {1, 1, 1, 1};
		};

		class V02: BSFText
		{
			x = "3 		*				(((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
			y = "1 		*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY + (safezoneH - (((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "1		*				(((safezoneW / safezoneH) min 1.2) / 40)";
			h = "23 	*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[] = {1, 1, 1, 1};
		};
		class V03: BSFText
		{
			x = "5 		*				(((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
			y = "1 		*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY + (safezoneH - (((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "1		*				(((safezoneW / safezoneH) min 1.2) / 40)";
			h = "23 	*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[] = {1, 1, 1, 1};
		};
		class V04: BSFText
		{
			x = "7 		*				(((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
			y = "1 		*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY + (safezoneH - (((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "1		*				(((safezoneW / safezoneH) min 1.2) / 40)";
			h = "23 	*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[] = {1, 1, 1, 1};
		};
		class V05: BSFText
		{
			x = "9 		*				(((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
			y = "1 		*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY + (safezoneH - (((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "1		*				(((safezoneW / safezoneH) min 1.2) / 40)";
			h = "23 	*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[] = {1, 1, 1, 1};
		};
		class V06: BSFText
		{
			x = "11 		*				(((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
			y = "1 		*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY + (safezoneH - (((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "1		*				(((safezoneW / safezoneH) min 1.2) / 40)";
			h = "23 	*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[] = {1, 1, 1, 1};
		};
		class V07: BSFText
		{
			x = "13 		*				(((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
			y = "1 		*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY + (safezoneH - (((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "1		*				(((safezoneW / safezoneH) min 1.2) / 40)";
			h = "23 	*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[] = {1, 1, 1, 1};
		};
		class V08: BSFText
		{
			x = "15 		*				(((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
			y = "1 		*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY + (safezoneH - (((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "1		*				(((safezoneW / safezoneH) min 1.2) / 40)";
			h = "23 	*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[] = {1, 1, 1, 1};
		};
		class V09: BSFText
		{
			x = "17 		*				(((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
			y = "1 		*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY + (safezoneH - (((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "1		*				(((safezoneW / safezoneH) min 1.2) / 40)";
			h = "23 	*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[] = {1, 1, 1, 1};
		};
		class V10: BSFText
		{
			x = "19 		*				(((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
			y = "1 		*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY + (safezoneH - (((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "1		*				(((safezoneW / safezoneH) min 1.2) / 40)";
			h = "23 	*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[] = {1, 1, 1, 1};
		};
		class V11: BSFText
		{
			x = "21 		*				(((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
			y = "1 		*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY + (safezoneH - (((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "1		*				(((safezoneW / safezoneH) min 1.2) / 40)";
			h = "23 	*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[] = {1, 1, 1, 1};
		};
		class V12: BSFText
		{
			x = "23		*				(((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
			y = "1 		*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY + (safezoneH - (((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "1		*				(((safezoneW / safezoneH) min 1.2) / 40)";
			h = "23 	*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[] = {1, 1, 1, 1};
		};
		class V13: BSFText
		{
			x = "25		*				(((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
			y = "1 		*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY + (safezoneH - (((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "1		*				(((safezoneW / safezoneH) min 1.2) / 40)";
			h = "23 	*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[] = {1, 1, 1, 1};
		};
		class V14: BSFText
		{
			x = "27		*				(((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
			y = "1 		*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY + (safezoneH - (((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "1		*				(((safezoneW / safezoneH) min 1.2) / 40)";
			h = "23 	*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[] = {1, 1, 1, 1};
		};
		class V15: BSFText
		{
			x = "29		*				(((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
			y = "1 		*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY + (safezoneH - (((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "1		*				(((safezoneW / safezoneH) min 1.2) / 40)";
			h = "23 	*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[] = {1, 1, 1, 1};
		};
		class V16: BSFText
		{
			x = "31		*				(((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
			y = "1 		*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY + (safezoneH - (((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "1		*				(((safezoneW / safezoneH) min 1.2) / 40)";
			h = "23 	*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[] = {1, 1, 1, 1};
		};
		class V17: BSFText
		{
			x = "33		*				(((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
			y = "1 		*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY + (safezoneH - (((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "1		*				(((safezoneW / safezoneH) min 1.2) / 40)";
			h = "23 	*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[] = {1, 1, 1, 1};
		};
		class V18: BSFText
		{
			x = "35		*				(((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
			y = "1 		*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY + (safezoneH - (((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "1		*				(((safezoneW / safezoneH) min 1.2) / 40)";
			h = "23 	*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[] = {1, 1, 1, 1};
		};
		class V19: BSFText
		{
			x = "37		*				(((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
			y = "1 		*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY + (safezoneH - (((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "1		*				(((safezoneW / safezoneH) min 1.2) / 40)";
			h = "23 	*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[] = {1, 1, 1, 1};
		};
		// class V20: BSFText
		// {
		// 	x = "23		*				(((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
		// 	y = "1 		*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY + (safezoneH - (((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		// 	w = "1		*				(((safezoneW / safezoneH) min 1.2) / 40)";
		// 	h = "23 	*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		// 	colorBackground[] = {1, 1, 1, 1};
		// };


		/////// Footer Buttons:
		class InstructionsButton: BSFButtonMenu
		{
			idc = 20101;
			onMouseButtonDown = "[""Instructions""] call BSF_Client_AssetManagement_GUI_Load";
			text = "INSTRUCTIONS";
			x = "1 		*			(((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
			y = "24.8	*			((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY + (safezoneH - (((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "9.25	*			(((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 		*			((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class X1Button: BSFButtonMenu
		{
			idc = 20102;
			show = false;
			text = "CRAFT AMMO";
			onMouseButtonDown = "[""Load"",  [lbText [20202,(lbCurSel 20202)]]] call BSF_Client_AssetManagement_GUI_Load";
			x = "1 		*			(((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
			y = "24.8	*			((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY + (safezoneH - (((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "9.25	*			(((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 		*			((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Button_2: BSFButtonMenu
		{
			idc = 20103;
			show = false;
			text = "BUTTON 2";
			onMouseButtonDown = "call ExileClient_gui_inventory_combineMagazines";
			x = "10.6	*			(((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
			y = "24.8	*			((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY + (safezoneH - (((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "9.25	*			(((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 		*			((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Button_ServerRules: BSFButtonMenu
		{
			idc = 20104;
			text = "SERVER RULES";
			onMouseButtonDown = "createDialog 'RscDisplayServerInfoMenu'";
			x = "20.2	*			(((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
			y = "24.8	*			((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY + (safezoneH - (((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "9.25	*			(((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 		*			((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[] = {"220/225","58/255","71/225",1};	// BSF Red
		};
		class ButtonClose: BSFButtonMenu
		{
			idc = 20105;
			text = "CLOSE";
			onMouseButtonDown = "closeDialog 0";
			x = "29.75	*			(((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
			y = "24.8	*			((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY + (safezoneH - (((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "9.25	*			(((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 		*			((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};

		/////// Footer Buttons ^^^

		// class BG_Image: BSFPictureKeepAspect
		// {
		// 	idc = -1;
		// 	x = "1 		*				(((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
		// 	y = "1.25	*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY + (safezoneH - (((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		// 	w = "38		*				(((safezoneW / safezoneH) min 1.2) / 40)";
		// 	h = "23.1 	*				((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		// 	text = "BSF\AssetManagement\images\GentacBG.paa";
		// };



	};
};






		// // Black background
		// class Background: BSFText
		// {
		// 	// x = safezoneX;
		// 	// y = safezoneY;
		// 	// w = safezoneW;
		// 	// h = safezoneH;
		// 	x = safeZoneX + 0.1 * safeZoneW;
		// 	y = safeZoneY + 0.1 * safeZoneH;
		// 	w = safeZoneW * 0.8;
		// 	h = safeZoneH * 0.8;

		// 	colorBackground[] = {0.0, 0.0, 0.0, 1.0};
		// };

		// /*
		// 	=== GUI_GRID ===
		// 	Grid used in majority of game's menus, does not use pixel accurate coordinates.
		// 	Affected only by interface size, giving user ability to customize its scale on the screen.
		// 	Designed to use only 40x25 grids (i.e., size on 16:10 screen with Very Large interface size),
		// 	although some menus may be stretched to fill the whole screen. Never gets smaller than 40x25 grids.
		// 	Default grid in the GUI editor.
		// */
		// class GUI_GRID: BSFText
		// {
		// 	x = safezoneX + (safezoneW * 0.25) - ((10 * GUI_GRID_W) * 0.5);
		// 	y = safezoneY + (safezoneH * 0.25) - ((10 * GUI_GRID_H) * 0.5);
		// 	w = 10 * GUI_GRID_W;
		// 	h = 10 * GUI_GRID_H;

		// 	colorBackground[] = {1.0, 0.5, 0.5, 1.0};
		// 	colorText[] = {0.0, 0.0, 0.0, 1.0};
		// 	text = "GUI_GRID";
		// 	shadow = 0;
		// 	style = ST_CENTER;
		// };

		// class GUI_GRID2: BSFText
		// {
		// 	x = safezoneX + (safezoneW * 0.25) - ((0 * GUI_GRID_W) * 0.5);
		// 	y = safezoneY + (safezoneH * 0.25) - ((0 * GUI_GRID_H) * 0.5);
		// 	w = 1 * GUI_GRID_W;
		// 	h = 1 * GUI_GRID_H;

		// 	colorBackground[] = {1.0, 0.5, 0.5, 1.0};
		// 	colorText[] = {0.0, 0.0, 0.0, 1.0};
		// 	text = "GUI_GRID";
		// 	shadow = 0;
		// 	style = ST_CENTER;
		// };

		// /*
		// 	=== pixelGrid ===
		// 	Pixel accurate grid introduced to replace GUI_GRID. Respects both resolution and interface size,
		// 	but always returns whole number which can be divided by up to 4 and still be a whole number.
		// 	Due to this rounding, some interface sizes may use the same value.
		// */
		// class PixelGrid: GUI_GRID
		// {
		// 	x = safezoneX + (safezoneW * 0.25) - ((20 * pixelGrid * pixelW) * 0.5);
		// 	y = safezoneY + (safezoneH * 0.75) - ((20 * pixelGrid * pixelH) * 0.5);
		// 	w = 20 * pixelGrid * pixelW;
		// 	h = 20 * pixelGrid * pixelH;

		// 	colorBackground[] = {0.5, 0.5, 1.0, 1.0};
		// 	text = "pixelGrid";
		// };

		// class PixelGrid2: GUI_GRID
		// {
		// 	x = safezoneX + (safezoneW * 0.25) - ((30 * pixelGrid * pixelW) * 0.5);
		// 	y = safezoneY + (safezoneH * 0.75) - ((30 * pixelGrid * pixelH) * 0.5);
		// 	w = 20 * pixelGrid * pixelW;
		// 	h = 20 * pixelGrid * pixelH;

		// 	colorBackground[] = {0.5, 0.5, 1.0, 1.0};
		// 	text = "pixelGrid";
		// };