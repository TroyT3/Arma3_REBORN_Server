/*
 * BSF_Client\bootstrap\fn_postInit.sqf
 * BS-Free Game Servers
 * www.bs-free.com
 * © 2023 Troy - BS-Free
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */

[] spawn BSF_Client_TerritoryDueDateAnnouncment;
[] spawn BSF_Client_Changelog_Show;

diag_log format ["BSF_Client mission has been initialized."];

call ExileClient_system_process_postInit;
// AM_ACTIVE = false;
true