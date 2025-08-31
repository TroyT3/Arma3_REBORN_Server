//////////////// Esseker REBORN  /////////////////////

#include "infiSTAR_defines.hpp"
#include "infiSTAR_AdminMenu.hpp"
#include "infiSTAR_chat.hpp"
#include "infiSTAR_KeyBinds.hpp"

#include "sounds.hpp"
#include "R3F_LOG\desc_include.h"
#include "ExAdClient\ExAd.cpp"
#include "scarCODE\ServerInfoMenu\hpp\CfgServerInfoMenu.hpp"
#include "scarCODE\ServerInfoMenu\hpp\RscDisplayServerInfoMenu.hpp"
#include "MarXet\dialog\RscMarXetDefines.hpp"
#include "MarXet\dialog\RscMarXetDialog.hpp"

#include "xs\spawn\Dialog\xsSpawnDefines.hpp"
#include "xs\spawn\Dialog\xsSpawnDiaglog.hpp"

#include "SM\TraderPlus\SM_TraderPlus.hpp"
#include "SM\DynamicMenu\RscSMDynMenu.hpp"

class CfgRemoteExec
{
    class Functions
	{
        mode = 1;
        jip = 0;
		class fnc_AdminReq { allowedTargets=2; };	// infiSTAR AntiHack
		class fn_xm8apps_server { allowedTargets=2; };	// infiSTAR xm8apps
		class ExileServer_system_network_dispatchIncomingMessage { allowedTargets=2; };	// ExileMod

		//ExAd:
		class ExAdServer_fnc_clientRequest { allowedTargets=2; };
		class APOC_srv_startAirdrop 		{ allowedTargets=2; };

		//Advanced Towing:
		class SA_Simulate_Towing { allowedTargets=0; }; 
		class SA_Attach_Tow_Ropes { allowedTargets=0; }; 
		class SA_Take_Tow_Ropes { allowedTargets=0; }; 
		class SA_Put_Away_Tow_Ropes { allowedTargets=0; }; 
		class SA_Pickup_Tow_Ropes { allowedTargets=0; }; 
		class SA_Drop_Tow_Ropes { allowedTargets=0; }; 
		class SA_Set_Owner { allowedTargets=2; }; 
		class SA_Hint { allowedTargets=1; }; 
		class SA_Hide_Object_Global { allowedTargets=2; };
		
		//Advanced Sling Loading:
		class ASL_Pickup_Ropes { allowedTargets=0; }; 
		class ASL_Deploy_Ropes_Index { allowedTargets=0; }; 
		class ASL_Rope_Set_Mass { allowedTargets=0; }; 
		class ASL_Extend_Ropes { allowedTargets=0; }; 
		class ASL_Shorten_Ropes { allowedTargets=0; }; 
		class ASL_Release_Cargo { allowedTargets=0; }; 
		class ASL_Retract_Ropes { allowedTargets=0; }; 
		class ASL_Deploy_Ropes { allowedTargets=0; }; 
		class ASL_Attach_Ropes { allowedTargets=0; }; 
		class ASL_Drop_Ropes { allowedTargets=0; }; 
		class ASL_Hint { allowedTargets=1; }; 
		class ASL_Hide_Object_Global { allowedTargets=2; }; 

		//Zeus
		class slz_fnc_assigncurator {allowedTargets = 2;};

		//SneakVehicleCustoms
		class SneakCustoms_change_skin  { allowedTargets=2; };
	};

class Commands
    {
		mode = 0;
		jip = 0;
    };
};	

class CfgFunctions
	{
		#include "ExAdClient\CfgFunctions.cpp"
	    class Reborn
	    {
		class Bootstrap
		{
		    file="Client_scriptsAndFunctions";
		    class preInit
		    {
		        preInit = 1;
		    };
		};
	    };
	};

class RscTextNS
	{
	    idc = -1;
	    type = 0;
	    style = 2;
	    LineSpacing = 1.0;
	    h = 0.04;
	    ColorBackground[] = {1,1,1,0.2};
	    ColorText[] = {0.1,0.1,0.1,1};
	    font = "EtelkaMonospacePro";
	    SizeEx = 0.025;
	};

class RscTitles
	{
		#include "ExAdClient\RscTitles.cpp"
		#include "blowout_rsc.cpp"
	};

class CfgNetworkMessages
	{
		#include "ExAdClient\CfgNetworkMessages.cpp"
		#include "MarXet\CfgMarXetNetworkMessages.hpp"
		#include "Client_scriptsAndFunctions\CfgNetworkMessages.hpp"
	};

///////mARMA
class mARMADebug {
    // Will report total map objects every 60 seconds
    class MapObjects {
        name = "Objects";
        code = "count allMissionObjects 'All'";
        interval = 60;
    };

    // Will report ingame players every X (interval) seconds
    class Players {
        name = "Players";
        code = "{isPlayer _x} count playableUnits";
        interval = 30;
    };

    class LocalAI 
    {
        name = "AIL";
        code = "{local _x} count allUnits";
        interval = 1;
    };
	
    class LootExile {
        name = "Loot Exile";
        code = "count (allMissionObjects 'LootWeaponHolder')";
        interval = 60;
    };	
	
    // Returns the mission name every 60 seconds
    class MissionName {
        name = "Mission Name";
        code = "MissionName";
        interval = 60;
    };

    // Returns the world name every 60 seconds
    class WorldName {
        name = "World Name";
        code = "WorldName";
        interval = 60;
    };
};
