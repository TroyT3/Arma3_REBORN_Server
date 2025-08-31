/**
 * ExileClient_action_event_onKeyDown
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */

private["_keyCode"];
_keyCode = _this select 1;
private _keys = [0x38, 0xB8];
_keys append (actionKeys "User5");
if !(_keyCode in _keys) then 
{
	ExileClientActionDelayAbort = true;
};
true