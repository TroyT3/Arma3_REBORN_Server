// BSF_Server

#define _ARMA_

class CfgPatches
{
	class BSF_Server
	{
		version = "v1.02";
		requiredVersion = 0.1;
		requiredAddons[] = {"exile_client","exile_server"};
		units[] = {};
		weapons[] = {};
		magazines[] = {};
		ammo[] = {};
	};
};

class BSF_Server
{
	#include "BSF_Server.hpp"
};

class CfgFunctions
{
	class BSF_Server
	{
		class Bootstrap
		{
			file = "BSF_Server\init"; // Location of the Init files.
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
	// class BSFretrieveVehicleRequest	// VG Integration put on hold
	// {
	// 	module = "AssetManagement";
	// 	parameters[] = {"SCALAR"};
	// };
	// class BSFstoreVehicleRequest // VG Integration put on hold
	// {
	// 	module = "AssetManagement";
	// 	parameters[] = {"ARRAY"};
	// };
	// class PlayerVehiclesUpdateRequest // VG Integration put on hold
	// {
	// 	module = "AssetManagement";
	// 	parameters[] = {"STRING","SCALAR","STRING","OBJECT"};
	// };

	class UpdateRebornStatsRequest
	{
		module = "BSF";
		parameters[] = {"ARRAY"};
	};
	class EVRRequest
	{
		module = "BSF";
		parameters[] = {"STRING","STRING"};
	};

	class BSFupdateGreetingRequest
	{
		module = "BSF";
		parameters[] = {"STRING"};
	};
	class DeleteConstructionRequest
	{
		module = "AssetManagement";
		parameters[] = {"OBJECT"};
	};
	class GiveVehicleAwayRequest
	{
		module = "AssetManagement";
		parameters[] = {"STRING","OBJECT","STRING"};
	};
	class GetOnlinePlayersRequest
	{
		module = "AssetManagement";
		parameters[] = {};
		// parameters[] = {"ARRAY"};
	};
	class BambiVehicleDeployRequest
	{
		module = "BSF";
		parameters[] = {"STRING"};
	};

	class ChangeTerritoryRequest
	{
		module = "BSF";
		parameters[] = {"SCALAR","STRING","STRING","OBJECT","SCALAR"};
	};
	class ChangeTerritoryNameRequest
	{
		module = "BSF";
		parameters[] = {"SCALAR","STRING","OBJECT","SCALAR"};
	};	
	class GetTerritoryItemCountRequest
	{
		module = "BSF";
		parameters[] = {"SCALAR","SCALAR"};
	};	
	class DeleteFlagRequest
	{
		module = "BSF";
		parameters[] = {"SCALAR","OBJECT"};
	};	
	class BSFtestRequest
	{
		module = "BSF";
		parameters[] = {"STRING"};
	};

    class ClaimVehicleRequest
    {
        module = "BSF";
        parameters[] = {"STRING","STRING"};
    };

};