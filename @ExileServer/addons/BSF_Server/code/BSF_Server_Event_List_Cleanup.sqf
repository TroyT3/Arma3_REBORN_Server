/*
* BSF_Server_Event_List_Cleanup
* BSF_Server\code\BSF_Server_Event_List_Cleanup.sqf
* 
* Periodically checks for dead event markers and removes their entries from BSF_Event_Positions.
* 
* BS-Free Game Servers
* www.bs-free.com
* © 2025 Troy - BS-Free
*
* This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
* To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
*/

while {true} do {

    waitUntil {!isNil "BSF_Event_Positions"};
    private _keys = keys BSF_Event_Positions;

	{
        private _markerName = _x;
        if (getMarkerType _markerName == "") then {
            BSF_Event_Positions deleteAt _markerName;
            format ["Removed event entry for missing marker: %1", _markerName] call BSF_Server_Util_Debug;
        };
    } forEach _keys;

    sleep 60;
};