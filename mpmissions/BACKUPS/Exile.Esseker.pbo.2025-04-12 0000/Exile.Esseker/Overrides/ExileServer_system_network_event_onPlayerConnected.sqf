/**
 * ExileServer_system_network_event_onPlayerConnected
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * Modified by DirtySanchez @ DonkeyPunch.INFO
 * RZI Persistence Code
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_isKnownAccount","_hasInfectionEntry"];
_uid = _this select 0;
_name = _this select 1;
if !(_uid in ["", "__SERVER__", "__HEADLESS__"]) then
{
	format["Player %1 (UID %2) connected!", _name, _uid] call ExileServer_util_log;
	_isKnownAccount = format["isKnownAccount:%1", _uid] call ExileServer_system_database_query_selectSingleField;
	if (_isKnownAccount) then
	{
		format["startAccountSession:%1:%2", _uid, _name] call ExileServer_system_database_query_fireAndForget;
		//RZ Infection Persistence Block 1
        _hasInfectionEntry = format["hasInfectionEntry:%1",_uid] call ExileServer_system_database_query_selectSingleField;
        if !(_hasInfectionEntry) then
        {
            format["createInfectionEntry:%1",_uid] call ExileServer_system_database_query_fireAndForget;
        };
		//end block 1
	}
	else
	{
		format["createAccount:%1:%2", _uid, _name] call ExileServer_system_database_query_fireAndForget;
		//RZ Infection Persistence Block 2
        format["createInfectionEntry:%1",_uid] call ExileServer_system_database_query_fireAndForget;
		//end block 2
	};
};
true