// fnc_BSF_Server_Test.sqf

if !("BS-Free" in serverName && isServer) exitWith
{
	diag_log "##### SERVER ERROR: You are not authorized to use the BS-Free Community Addon!";
	diag_log "##### SERVER ERROR: This mod can only be used on BS-Free servers! ";
	diag_log "##### SERVER ERROR: Your server will now shut down.";
	"#shutdown" call ExileServer_system_rcon_event_sendCommand;
};
