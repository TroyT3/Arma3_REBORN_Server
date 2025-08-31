/*
* BSF_Client_Changelog_Show.sqf
* 
* BS-Free Game Servers
* www.bs-free.com
* © 2025 Troy - BS-Free
*
* This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
* To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
*/

[] spawn {
    waitUntil {!isNil "BSF_Show_Changelog"};
    if (BSF_Show_Changelog) then {
        ["BSF_Client_Changelog_Show: TRUE - Displaying Changelog"] call BSF_Client_Util_Debug;
        waitUntil { !isNull findDisplay 46 };
        createDialog "BSF_Changelog_Dialog";
    }
    else 
    {
        ["BSF_Client_Changelog_Show: FALSE - Changelog not displayed."] call BSF_Client_Util_Debug;
    };
};