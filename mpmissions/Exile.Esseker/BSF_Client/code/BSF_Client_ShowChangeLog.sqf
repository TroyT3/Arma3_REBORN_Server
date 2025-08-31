/*
* BSF_Client_ShowChangeLog.sqf
* 
* BS-Free Game Servers
* www.bs-free.com
* © 2025 Troy - BS-Free
*
* This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
* To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
*/

params["_option"];

format["BSF_Client_ShowChangeLog: _this: %1", _this] call BSF_Client_Util_Debug;
format["BSF_Client_ShowChangeLog: OPTION: %1", _option] call BSF_Client_Util_Debug;

waitUntil {!isNull findDisplay 46};
_playerUID = getPlayerUID player;

switch (_option) do
{

case ("Load") : {
    disableSerialization;
    private _display = uiNamespace getVariable ["BSF_Changelog_Dialog", displayNull];
    private _changelogText = _display displayCtrl 1002;

    private _entries = call compile preprocessFileLineNumbers "BSF_Client\BSF_Changelog.sqf";
    private _content = "";
    {
        _content = _content + _x;
    } forEach _entries;

    _changelogText ctrlSetStructuredText parseText _content;
};

    case ("OK") : {
        ["BSFupdateGreetingRequest", [_playerUID]] call ExileClient_system_network_send;
        missionNamespace setVariable ["BSF_Show_Changelog", nil, true];
        format["BSF_Client_ShowChangeLog:OK _playerUID: %1", _playerUID] call BSF_Client_Util_Debug;
        closeDialog 1;
    };

};