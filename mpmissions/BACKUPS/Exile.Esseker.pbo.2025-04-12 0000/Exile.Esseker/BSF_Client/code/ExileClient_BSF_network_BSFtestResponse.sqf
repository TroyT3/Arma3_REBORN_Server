/* 
 * BSF_Client\code\ExileClient_BSF_network_BSFtestResponse.sqf
 * BS-Free Game Servers
 * www.bs-free.com
 * © 2023 Troy - BS-Free
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */

params ["_answer"];
//private ["_answer"];

_answer = _this select 0;

try
{
	["InfoTitleAndText", ["BSFtestResponse", format["_answer %1", _answer]]] call ExileClient_gui_toaster_addTemplateToast;
}
catch
{
	[_sessionID, "ToastRequest",["ErrorTitleAndText", ["Whoops!", _exception]]] call ExileServer_system_network_send_to;
};

true