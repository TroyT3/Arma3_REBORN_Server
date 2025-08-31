// BSF_Server\init\preInit.sqf

private ['_code', '_function', '_file'];
{
    _code = '';
    _function = _x select 0;
    _file = _x select 1;
    _code = compileFinal (preprocessFileLineNumbers _file);                    
    missionNamespace setVariable [_function, _code];
}
forEach 
[
	['ExileServer_AssetManagement_network_DeleteConstructionRequest','BSF_Server\code\ExileServer_AssetManagement_network_DeleteConstructionRequest.sqf'],
	['ExileServer_AssetManagement_network_GiveVehicleAwayRequest','BSF_Server\code\ExileServer_AssetManagement_network_GiveVehicleAwayRequest.sqf'],
	['ExileServer_AssetManagement_network_GetOnlinePlayersRequest','BSF_Server\code\ExileServer_AssetManagement_network_GetOnlinePlayersRequest.sqf'],
	['BSF_Server_AssetManagement_getPlayerVehicles','BSF_Server\code\BSF_Server_AssetManagement_getPlayerVehicles.sqf'],
	['BSF_Server_Event_List_Cleanup','BSF_Server\code\BSF_Server_Event_List_Cleanup.sqf'],
	// ['ExileServer_AssetManagement_network_BSFretrieveVehicleRequest','BSF_Server\code\ExileServer_AssetManagement_network_BSFretrieveVehicleRequest.sqf'],
	// ['ExileServer_AssetManagement_network_BSFstoreVehicleRequest','BSF_Server\code\ExileServer_AssetManagement_network_BSFstoreVehicleRequest.sqf'],
	// ['ExileServer_AssetManagement_network_PlayerVehiclesUpdateRequest','BSF_Server\code\ExileServer_AssetManagement_network_PlayerVehiclesUpdateRequest.sqf'],
	['ExileServer_BSF_network_BambiVehicleDeployRequest','BSF_Server\code\ExileServer_BSF_network_BambiVehicleDeployRequest.sqf'],
	['ExileServer_BSF_network_ChangeTerritoryRequest','BSF_Server\code\ExileServer_BSF_network_ChangeTerritoryRequest.sqf'],
	['ExileServer_BSF_network_ChangeTerritoryNameRequest','BSF_Server\code\ExileServer_BSF_network_ChangeTerritoryNameRequest.sqf'],
	['ExileServer_BSF_network_GetTerritoryItemCountRequest','BSF_Server\code\ExileServer_BSF_network_GetTerritoryItemCountRequest.sqf'],
	['ExileServer_BSF_network_DeleteFlagRequest','BSF_Server\code\ExileServer_BSF_network_DeleteFlagRequest.sqf'],
	['ExileServer_BSF_network_BSFtestRequest','BSF_Server\code\ExileServer_BSF_network_BSFtestRequest.sqf'],
	['ExileServer_BSF_network_BSFupdateGreetingRequest','BSF_Server\code\ExileServer_BSF_network_BSFupdateGreetingRequest.sqf'],
	['ExileServer_BSF_network_ClaimVehicleRequest','BSF_Server\code\ExileServer_BSF_network_ClaimVehicleRequest.sqf'],
	['BSF_Server_AI_Monitor','BSF_Server\code\BSF_Server_AI_Monitor.sqf'],
	['BSF_Server_DeleteBlacklistedVehicles','BSF_Server\code\BSF_Server_DeleteBlacklistedVehicles.sqf'],
	['ExileServer_BSF_network_UpdateRebornStatsRequest','BSF_Server\code\ExileServer_BSF_network_UpdateRebornStatsRequest.sqf'],
	['BSF_Server_Test_Message','BSF_Server\code\BSF_Server_Test_Message.sqf'],
	['BSF_Server_Util_Debug','BSF_Server\code\BSF_Server_Util_Debug.sqf'],
	['BSF_Server_Util_Log','BSF_Server\code\BSF_Server_Util_Log.sqf']
];

call compile preprocessFileLineNumbers "BSF_Server\BSF_Server_Config.sqf";

BSF_Event_Positions = createHashMap;
publicVariable "BSF_Event_Positions";

execVM "BSF_Server\code\BSF_Server_Create_VehicleNameMap.sqf";

diag_log format ["BSF_Server preInit complete"];

true


