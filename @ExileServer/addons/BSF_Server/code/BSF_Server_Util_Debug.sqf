/*
* BSF_Server_Util_Debug.sqf
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
        ["Some message"] call BSF_Server_Util_Debug;
        format["Some Message %1 %2", _var1, _var2] call BSF_Server_Util_Debug;
*/

params ["_msg"];

if (!isServer) exitWith {};  // Only log from the server

if (isNil "BSF_Server_Debug" || {BSF_Server_Debug isEqualTo false}) exitWith {};

private _formattedMsg = format ["*** BSF SERVER DEBUG: %1", _msg];

// Log to RPT
diag_log _formattedMsg;

// Broadcast to all clients' system chat
[_formattedMsg] remoteExec ["systemChat", 0, false];

true