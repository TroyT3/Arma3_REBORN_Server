// BSF_Server\init\postInit.sqf

call BSF_Server_DeleteBlacklistedVehicles;

if(isNil "BSF_flagTextureArray")then
{
	BSF_flagTextureArray = [];
	if(isClass (missionConfigFile >> "CfgFlags"))then
	{
		BSF_flagTextureArray = BSF_flagTextureArray + ("true" configClasses (missionConfigFile >> "CfgFlags"));
	};
	BSF_flagTextureArray = BSF_flagTextureArray + ("true" configClasses (configFile >> "CfgFlagsNative"));
};
publicVariable "BSF_flagTextureArray";

diag_log format ["BSF_Server postInit complete"];

[] spawn BSF_Server_Event_List_Cleanup;

true