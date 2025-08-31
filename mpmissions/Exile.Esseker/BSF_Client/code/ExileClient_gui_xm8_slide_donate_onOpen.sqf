/*
* ExileClient_gui_xm8_slide_donate_onOpen
* BSF_Client\code\
*
* BS-Free Game Servers
* www.bs-free.com
* © 2023 Troy - BS-Free
*
* This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
* To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
*/
 
private["_display", "_textCtrl","_text"];
disableSerialization;
_display = uiNameSpace getVariable ["RscExileXM8", displayNull];
_textCtrl = _display displayCtrl 5122;
_URLCtrl = _display displayCtrl 5123;

_text = "
<t size='1.1' align='center'>Help your community!</t><br />
<br/>
<t align='center'>We develop and run our servers for fun. We don’t make any money and all donations are either put back into the server or offset what comes out of our pockets. You can help us by becomming a subscriber through PayPal or Patreon. Follow this link to join in. </t>
<br/>
<br/>
<t size='1.1' align='center'><a color='#db3a47' href='https://bs-free.com/donate_xm8'>bs-free.com/donate</a></t>
<br />
<br />
<t align='center'>Have questions regarding the perks we offer our Donors?  Jump onto our Discord server and ask our admin staff.</t>
<br/>
<br/>
<t size='1.1' align='center'><a color='#db3a47' href='https://discord.gg/aDrfNZ3z'>JOIN DISCORD</a></t><br />

";

_textCtrl ctrlSetStructuredText (parseText _text);
[_textCtrl] call BIS_fnc_ctrlTextHeight;
