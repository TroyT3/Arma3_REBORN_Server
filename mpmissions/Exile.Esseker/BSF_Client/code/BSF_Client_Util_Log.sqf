/*
* BSF_Client_Util_Log.sqf
* 
* BS-Free Game Servers
* www.bs-free.com
* © 2023 Troy - BS-Free
*
* This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
* To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
*/

/*
    Usage:
        ["Some message"] call BSF_Client_Util_Log;
        format["Some Message %1 %2", _var1, _var2] call BSF_Client_Util_Log;
*/

params ["_msg"];

private _formattedMsg = format ["*** BSF CLIENT LOG: %1", _msg];

// Log to RPT
diag_log _formattedMsg;

true