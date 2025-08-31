/* 
* BSFtestRequest
* ExileServer_BSF_network_BSFtestRequest.sqf
* BSF_Server\code\ExileServer_BSF_network_BSFtestRequest.sqf
 *
 * ["BSFtestRequest", ["Knock, Knock"]] call ExileClient_system_network_send;
 *
 * BS-Free Game Servers
 * www.bs-free.com
 * © 2023 Troy - BS-Free
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */

params ["_sessionID", "_data"];
private ["_KnockKnock", "_response"];

_KnockKnock = _data select 0;

try 
{
	[_sessionID, "toastRequest", ["SuccessTitleAndText", ["BSFtestRequest", format["%1",_KnockKnock]]]] call ExileServer_system_network_send_to;

	_response = "It's Alive!";
	[_sessionID, "BSFtestResponse",[_response]] call ExileServer_system_network_send_to;

	[_sessionID, "toastRequest", ["SuccessTitleAndText", ["BSFtestRequest", "Response sent"]]] call ExileServer_system_network_send_to;
}
catch 
{
	[_sessionID, "toastRequest", ["ErrorTitleAndText", ["Well, hell", _exception]]] call ExileServer_system_network_send_to;
};