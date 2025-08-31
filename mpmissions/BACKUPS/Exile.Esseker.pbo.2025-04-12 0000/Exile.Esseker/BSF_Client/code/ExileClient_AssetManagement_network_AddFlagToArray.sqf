/*
* ExileClient_AssetManagement_network_AddFlagToArray.sqf
* BSF_Client\functions\
*
* BS-Free Game Servers
* www.bs-free.com
* © 2023 Troy - BS-Free
*
* This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
* To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
*/
params ["_flagObject"];
// _data params ["_flagObject"];
// private ["_size", "_marker1Name", "_marker", "_marker2Name", "_marker2", "_marker3Name", "_marker3", "_totalDamage"];

diag_log "ExileClient_AssetManagement_network_AddFlagToArray: START";
diag_log format['ExileClient_AssetManagement_network_AddFlagToArray _this - % 1', _this];

if (isNil "ThisPlayersFlags") then {ThisPlayersFlags = createHashMap;};

_id = _flagObject getVariable ["ExileDatabaseID",""];
_pos = position _flagObject;
_size =_flagObject getVariable ["ExileTerritorySize",""];
_level =_flagObject getVariable ["ExileTerritoryLevel",""];
_owner = _flagObject getVariable ["ExileOwnerUID",""];
_name = _flagObject getVariable ["ExileTerritoryName",""];
_texture = _flagObject getVariable ["ExileFlagTexture",""];
_buildRights =_flagObject getVariable ["ExileTerritoryBuildRights",""];
_moderators =_flagObject getVariable ["ExileTerritoryModerators",""];
// _flagObj = _flagObject;

ThisPlayersFlags set [_id ,[_id, _pos, _size, _level, _owner, _name, _texture, _buildRights, _moderators, [_flagObject]]];

diag_log "ExileClient_AssetManagement_network_AddFlagToArray: END";