//////////////// Esseker REBORN  /////////////////////

setTerrainGrid 6.25;
setViewDistance 1500;
setObjectViewDistance 800; //BSF

fnc_isInsideBuilding = compile preprocessFileLineNumbers "addons\blowout\external\fn_isInsideBuilding.sqf";
fnc_hasAPSI = compile preprocessFileLineNumbers "addons\blowout\external\fn_hasAPSI.sqf";

ns_blow_itemapsi = ["ItemRadio"];
ns_blow_itemtype = 3; // 1=Headgear 2=Vest 3=Item  4=Goggles 5=Uniform
ns_blow_removeapsi = false; // remove/destroy APSI item after storm
ns_blow_delaymod = 0.5; //blowout delay - higher number longer time between blowouts
ns_blow_damage_unprotected = 0.45; //amount of damage blowout causes - value of 1 or higher will kill player!
ns_blow_damage_inbuilding = 0.20; // set to 0 to have player not take damage when in a building regardless of having APSI
ns_blowout = true;//Do not change
ns_blowout_exile = true;//Do not change
ns_blow_prep = false;//Do not change
ns_blow_status = false;//Do not change
ns_blow_action = false;//Do not change
phasAPSI = false;//Do not change

//				execVM "BSF\intro\intro.sqf";
				execVM "R3F_LOG\init.sqf";
			[] 	execVM "BSF\EnigmaRevive\init.sqf";	
//			[] 	execVM "BSF\Maps\Billboards.sqf";	
//			[] 	execVM "BSF\player_markers.sqf";

	if hasInterface then
		{
			[] 	execVM "IgiLoad\IgiLoadInit.sqf";
			[] 	ExecVM "scarCODE\ServerInfoMenu\sqf\initLocal.sqf"; // scarCODE ServerInfoMenu
		};

	if (isServer) then 
		{
			[] execVM "BSF\fn_advancedTowingInit.sqf";	
			[] execVM "BSF\fn_advancedSlingLoadingInit.sqf";	
			[] execVM "BSF\time.sqf";
			[] execVM "MarXet\MarXet_Init.sqf";
		};

SA_TOW_IN_EXILE_SAFEZONE_ENABLED = true;
SA_MAX_TOWED_CARGO = 2;
SA_TOW_LOCKED_VEHICLES_ENABLED = false;
ASL_EXILE_SAFEZONE_ENABLED = true;

		#include "A3XAI_Client\A3XAI_initclient.sqf";
