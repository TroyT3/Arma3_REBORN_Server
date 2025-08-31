/**
 * StokesMagee's Resort
 * www.stokesmagee.net
 * © 2017 StokesMagee's Resort
 *
 * This work is property of StokesMagee. You do not have permissions to use/edit/distribute any of this content
 * without written permission from StokesMagee.
 */

class RscSMDynMenu 
{
	idd = 42055;
	movingEnable = 1;
	enableSimulation = 1;
	onLoad = "setMousePosition [0.5, 0.5]; uiNamespace setVariable ['RscSMDynMenu', _this select 0]; true call ExileClient_gui_postProcessing_toggleDialogBackgroundBlur;";
	onUnload = "SM_DynMenu_ActionKeyPressed = false; uiNamespace setVariable ['RscSMDynMenu', displayNull]; false call ExileClient_gui_postProcessing_toggleDialogBackgroundBlur;";
	onKeyUp = "_this call ExileClient_gui_hud_event_onKeyUp";
	class controls {};
};