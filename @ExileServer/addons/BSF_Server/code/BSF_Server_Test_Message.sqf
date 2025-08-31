// BSF_Server_Test_Message.sqf

params ["_message"];
_message = _this select 0;

diag_log format ["BSF_Server addon has been initialized."];
["toastRequest", ["InfoTitleOnly", [format["BSF_Server_Test_Messageessage <br/>%1",_message]]]] call ExileServer_system_network_send_broadcast;

