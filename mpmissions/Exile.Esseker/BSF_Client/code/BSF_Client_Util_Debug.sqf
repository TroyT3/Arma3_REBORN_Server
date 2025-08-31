/*
* BSF_Client_Util_Debug.sqf
* 
* BS-Free Game Servers
* www.bs-free.com
* © 2025 Troy - BS-Free
*
* This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
* To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
*/

/*
    Usage:
        ["Some message"] call BSF_Client_Util_Debug;
        format["Some Message %1 %2", _var1, _var2] call BSF_Client_Util_Debug;
*/

params ["_msg"]; // Default to empty string if _msg is not passed or wrong type
// params [["_msg", "", [""]]]; // Default to empty string if _msg is not passed or wrong type

// if (_msg isEqualTo "") exitWith {
//     private _formattedMsg = "*** BSF CLIENT DEBUG: ERROR!!! Message Empty! Check your shit!";
//     diag_log _formattedMsg;
//     systemChat _formattedMsg;
// };

if (BSF_Client_Debug isEqualTo true) then {
    private _formattedMsg = format ["*** BSF CLIENT DEBUG: %1", _msg];
    diag_log _formattedMsg; // Log to RPT
    systemChat _formattedMsg; // Show locally
};