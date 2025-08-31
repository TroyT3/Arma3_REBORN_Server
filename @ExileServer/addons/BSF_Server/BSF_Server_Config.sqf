// BSF_Server_Config.sqf

// BSF_Server_AI_Monitor_Interval = 60;
// [BSF_Server_AI_Monitor_Interval, BSF_Server_AI_Monitor, [], true] call ExileServer_system_thread_addtask;

BSF_Changelog_ReleaseDate = [2025, 04, 07, 12, 30]; // [year, month, day, hour, minute]

private _BSF_Server_Debug = false;
private _BSF_Reborn_Active = false;

switch (toLower worldName) do
{
	case "altis":
	{
		_BSF_Server_Debug = false;
		_BSF_Reborn_Active = false;
	};

	case "malden":
	{
		_BSF_Server_Debug = false;
		_BSF_Reborn_Active = false;
	};

	case "tanoa":
	{
		_BSF_Server_Debug = false;
		_BSF_Reborn_Active = false;
	};

	case "esseker":
	{
		_BSF_Server_Debug = true;
		_BSF_Reborn_Active = true;
	};

	case "lythium":
	{
		_BSF_Server_Debug = false;
		_BSF_Reborn_Active = true;
	};

	case "ChernarusRedux":
	{
		_BSF_Server_Debug = false;
		_BSF_Reborn_Active = true;
	};
};

BSF_Server_Debug = _BSF_Server_Debug;	// Don't change here.  Edit the switch above
publicVariable "BSF_Server_Debug";
BSF_Reborn_Active = _BSF_Reborn_Active;
publicVariable "BSF_Reborn_Active";

format ["BSF_Server_Debug: %1", _BSF_Server_Debug] call BSF_Server_Util_Log;
format ["BSF_Reborn_Active: %1", _BSF_Reborn_Active] call BSF_Server_Util_Log;