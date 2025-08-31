/*
* ExileServer_AssetManagement_network_DeleteConstructionRequest
* \BSF_Server\code\server\
*
* BS-Free Game Servers
* www.bs-free.com
* © 2023 Troy - BS-Free
*
* This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
* To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
*/
params ["_sessionID","_data"];
// _data params ["_objectNetID"];
_data params ["_object"];

_thisFile = "DeleteConstructionRequest";
format["%1 : START", _thisFile] call BSF_Server_Util_Debug;
format["%1 : %2", _thisFile, _this] call BSF_Server_Util_Debug;
format["%1 : %2", _object, typeName _object] call BSF_Server_Util_Debug;

// _object = objectFromNetId _objectNetID;
_objectDatabaseID = _object getVariable ["ExileDatabaseID", -1];
format["BSF_DeleteConstruction: %1 : %2", typeOf _object, _objectDatabaseID] call BSF_Server_Util_Debug;

try
{
	_playerObject = _sessionID call ExileServer_system_session_getPlayerObject;
	if (isNull _playerObject) then 
	{
		throw "Player is null";
	};
	
	switch (true) do { 
		case (_object isKindOf "Exile_Construction_Abstract_Static") : {
			format ["deleteConstruction:%1", _objectDatabaseID] call ExileServer_system_database_query_fireAndForget;
			format["Exile_Construction_Abstract_Static %1 : %2",_object, typeName _object] call BSF_Server_Util_Debug;
			deleteVehicle _object;
		};
		
		case (_object isKindOf "Exile_Container_Abstract") : {
			format ["deleteContainer:%1", _objectDatabaseID] call ExileServer_system_database_query_fireAndForget;
			deleteVehicle _object;
			format["Exile_Container_Abstract %1 : %2",_object, typeName _object] call BSF_Server_Util_Debug;
		};
		
		case (_object isKindOf "Exile_Construction_Flag_Static") : {
			format ["deleteTerritory:%1", _objectDatabaseID] call ExileServer_system_database_query_fireAndForget;
			deleteVehicle _object;
			format["Exile_Construction_Flag_Static %1 : %2",_object, typeName _object] call BSF_Server_Util_Debug;
		};

		// Exile_Construction_Flag_Static

		default { 
			deleteVehicle _object;
			format["SWITCH DEFAULT %1 : %2",typeName _object] call BSF_Server_Util_Debug;
		}; 
	};


}
catch
{
	[_sessionID, "DeleteConstructionRequest", [false]] call ExileServer_system_network_send_to;
	[_sessionID, "toastRequest", ["ErrorTitleAndText", ["Deletion Failed!", _exception]]] call ExileServer_system_network_send_to;
	_exception call ExileServer_util_log;	
};

true