//////////////// Esseker REBORN  /////////////////////
allowFunctionsRecompile = 0;

#include "\a3\ui_f\hpp\defineCommonGrids.inc"

#include "BSF_Client\dialog\BSF_Defines.hpp"
#include "BSF_Client\dialog\DialogTest.hpp"
#include "BSF_Client\dialog\BSF_AssetManagement_Dialog.hpp"
#include "BSF_Client\dialog\BSF_AmmoCraft_Dialog.hpp"
#include "BSF_Client\dialog\BSF_Changelog_Dialog.hpp"

#include "infiSTAR_defines.hpp"
#include "infiSTAR_AdminMenu.hpp"
#include "infiSTAR_chat.hpp"
#include "infiSTAR_KeyBinds.hpp"

#include "sounds.hpp"
#include "R3F_LOG\desc_include.h"
#include "ExAdClient\ExAd.cpp"
#include "BSF\ServerInfoMenu\hpp\CfgServerInfoMenu.hpp"
#include "BSF\ServerInfoMenu\hpp\RscDisplayServerInfoMenu.hpp"
#include "MarXet\dialog\RscMarXetDefines.hpp"
#include "MarXet\dialog\RscMarXetDialog.hpp"

#include "xs\spawn\Dialog\xsSpawnDefines.hpp"
#include "xs\spawn\Dialog\xsSpawnDialog.hpp"

#include "SM\TraderPlus\SM_TraderPlus.hpp"
#include "SM\DynamicMenu\RscSMDynMenu.hpp"
#include "SM\LoadoutTrader\SM_LoadoutTrader.hpp"
#include "SM\LoneVirtualGarage\config.hpp"

class CfgRemoteExec
{
    class Functions
	{
        mode = 1;
        jip = 0;
		class fnc_AdminReq { allowedTargets=2; };	// infiSTAR AntiHack
		class fn_xm8apps_server { allowedTargets=2; };	// infiSTAR xm8apps
		class ExileServer_system_network_dispatchIncomingMessage { allowedTargets=2; };	// ExileMod

		//SM Zombz
		class SM_ZombieDoMove { allowedTargets = 1; };
		class SM_Say3D { allowedTargets = 1; };
		class SM_Network_HandleMessage { allowedTargets = 2; };

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

		// Advanced Train Simulator DEV
		class ATRAIN_fnc_requestATSInstall { allowedTargets=2; };
		class ATRAIN_fnc_updateTrackMap { allowedTargets=2; };
		class ATRAIN_fnc_registerTrain { allowedTargets=2; };
		class ATRAIN_fnc_registerTrainCar { allowedTargets=2; };
		class ATRAIN_fnc_hideTrainObjectGlobal { allowedTargets=2; };
		class ATRAIN_fnc_hidePlayerObjectGlobal { allowedTargets=2; };

	};

class Commands
    {
		mode = 0;
		jip = 0;
    };
};

class CfgHints
{
    #include "ExAdClient\CfgHints.cpp" // ExAd Virtual Garage
};

class cfgFunctions
	{
		#include "BSF_Client\CfgFunctions.cpp"
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
		#include "VEMFr_client\gui\RscDisplayVEMFrClient.hpp"
		#include "VEMFr_client\gui\RscDisplayBaseAttack.hpp"
	};

class CfgNetworkMessages
	{
		#include "ExAdClient\CfgNetworkMessages.cpp"
		#include "MarXet\CfgMarXetNetworkMessages.hpp"
		#include "Client_scriptsAndFunctions\CfgNetworkMessages.hpp"

	class CreateBambiVehicleMarkerResponse
		{
			module = "BSF";
			parameters[] = {"ARRAY"};
		};
	class AddFlagToArray
		{
			module = "AssetManagement";
			parameters[] = {"OBJECT"};
		};
			
	class BSFretrieveVehicleResponse
		{
			module = "AssetManagement";
			parameters[] = {"BOOL"};
		};

	class PlayerVehiclesCreateResponse
		{
			module = "AssetManagement";
			parameters[] = {"HashMap"};
		};

	class PlayerVehiclesUpdateResponse
		{
			module = "AssetManagement";
			parameters[] = {"ARRAY"};
		};

	class GetTerritoryItemCountResponse
		{
			module = "AssetManagement";
			parameters[] = {"SCALAR"};
		};

	class BSFtestResponse
		{
			module = "BSF";
			parameters[] = {"STRING"};
		};

	class BSF_RetrieveVehicleResponse
		{
			module = "VirtualGarage";
			parameters[] = {"STRING","STRING"};
		};

	// Begin SM Loadout Trader
	class requestSavedLoadoutsResponse
		{
			module = "SM";
			parameters[] = {"ARRAY"};
		};
	class purchaseLoadoutResponse
		{
			module = "SM";
			parameters[] = {"ARRAY"};
		};
	// End SM Loadout Trader

	// Begin SM Virtual Garage
	class SM_RetrieveVehicleResponse
		{
			module = "VirtualGarage";
			parameters[] = {"STRING","STRING"};
		};
	class SM_openVirtualGarageResponse
		{
			module = "VirtualGarage";
			parameters[] = {"STRING"};
		};
	// End SM Virtual Garage
	};

