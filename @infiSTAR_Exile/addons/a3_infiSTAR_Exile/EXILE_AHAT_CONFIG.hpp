/* v0.93
	Author: Chris(tian) "infiSTAR" Lorenzen
	Contact: infiSTAR23@gmail.com // www.infiSTAR.de
	Copyright infiSTAR. All rights reserved.

	Description:
	Arma AntiHack & AdminTools - infiSTAR.de

	licensed to:
	'troy@troytilkens.com'

	Last download was on:
	'14-07-2018 17-15-03';
*/
class Cfg_infiSTAR_settings {
/*
	"serverCommandPassword" is serverCommandPassword - in your servers config.cfg
	if your config.cfg does not have serverCommandPassword yet, simply add it in a new line:
	serverCommandPassword = "changeme";

	This is   VERY IMPORTANT   as it is needed to KICK & BAN people.

	It will try to get this password from "@ExileServer\addons\exile_server_config" first. If you did not set a password there (config.cpp),
	then it will take what you put here.
*/
serverCommandPassword = "t3comadmin";

/*
	"passwordAdmin" is passwordAdmin - in your servers config.cfg, needed for servercommands from client

	This is used to be able to use the "login" function ingame. Will log you in as Arma "Admin".
*/
passwordAdmin = "BSFadmin";
/* serverCommandPassword and passwordAdmin should always be different passwords or it could cause problems! */



HIDE_FROM_PLAYERS = "false";				/* So no normal can see it :)! */
announce_adminstate_changed = "false";	/* whenever you type !admin as an admin it will announce that you logged out or in to all players on the server! */

LogAdminActions = "true";	/* "LogAdminActions": Sends actions done by each admin to the server to log it to the .txt file (if infiSTAR dlls are used) and .rpt file + sends it back to all other admins. */
enableIngameLogs = "true";	/* These logs are shown in the admin menu (disabling it might lower performance cost, since it sends a lot of big strings through the network) */

MY_LOG_FOLDER = "infiStar_Logs";	/* MY_LOG_FOLDER = "infiSTAR Logs"; - would create a folder named "infiSTAR Logs" */



/*
	if you set "useAdminNameTag" to "true",
	each admin uid can have an individual AdminTag which needs to be a part of the admins name.
	Without it, the admin will not get access to the admin menu.

	example names: "[Admin] PlayerName" or "PlayerName [Admin]"
	note: this is case sensitive as well, meaning "PlayerName [admin]" would not work as we set our example to "[Admin]"
*/
class adminNameTags {
	useAdminNameTag = "false";
	tags[] = {
		{"[Admin]","UID1"},
		{"[Owner]","UID2"},
		{"[Slave]","UID3"},
		{"[Admin]","UID4"},
		{"[Admin]","UID5"}
	};
};


/* "startAsNormal": if you add admin UIDs in here as well, they will start as almost "normal" player instead of with admin menu and such. */
startAsNormal[] =
{
	"UID1","UID2","UID3","..."
};

	// 76561197979791907 = Troy
	// 76561198799306403 = BS_Free

	// 76561197977348997 = North
	// 76561198018137982 = tj
	// 76561198358100209 = BigL
	// 76561198240158234 = O'Neil
	// 76561197990005794 = Vampire Jesus
	// 76561197963624561 = David - Combat Wombat
	// 76561198047719531 = Colton
	// 76561197960956778 = ManBearPig(Lovett)
	// 76561197971369508 = Xtek
	// 76561197974011576 = Diesel
	// 76561198052729396 = SpankyPrime - David
	// 76561198009072105 = Jacob (joyfulhen)
	// 76561197972318860 = Snow
	// 76561197976166271 = KillerMedic
	// 76561197986222333 = ZedDeadDevolver
	// 76561197966595081 = Tehrasha
	// 76561198068845750 = Shepard - Mike
	// 76561198052639867 = RabbidRabbi - Mike?
	// 76561198063832369 = TheS7ven
	// 76561198064166960 = Pitbull
	// 76561198052595406 = Doc Holiday
	// 76561198040791337 = woland88 - Tim
	// 76561198068651984 = sindin - Chris?
	// 76561198943327134 = lazzygamerz
	// 76561198001420228 = TSgt Miller
	// 76561197975811356 = Jonny11b
	// 76561198086493876 = Castro
	// 76561198006164504 = Scarlet Vendetta
	// 76561198152687939 = Duboges
	// 76561198023756858 = Dash
	// 76561198988839135 = PUG - Shepard's dad
	// 76561197960440392 = Greg - Old UID
	// 76561199807004538 = Greg - New UID
	// 76561198375824917 = Legion
	// 76561197997856265 = Revenant

/* "hiddenSuperAdmin": These admins are seen as normal players by normal admins, their actions are not logged either (to keep an eye out on your admins) */
hiddenSuperAdmin[] =
{
	"76561197979791907","76561198799306403","UID3","..."
};

adminUIDandAccess[] =
{
	{
		{"76561197979791907","76561198799306403","76561198018137982","76561197976166271"},	/* Admins with UIDs in this Array have their Access defined in the array below. */
		{
			"Territory Management",
			"Teleport On Map Click","Teleport - Target To Me","Teleport - Me To Target",
			"Teleport In Facing Direction (10m steps)","Drag and drop units on the map",
			"spectating","Delete Vehicle","FlyUp","ShowGear","Show Server Information",
			"HealSelf","HealRepairNear","AdminLog","Freeze","UnFreeze","Restrain","UnRestrain",
			"==== Loadouts ====","==== Base Deleter ====","Items spawn menu",
			"Remove Gear","Revive","Heal","Restore","Flip Vehicle","Move In My Vehicle","Move In Target Vehicle","Parachute Target","Eject","Eject Crew",
			"Player ESP","Player ESP (safezone style)","AI ESP","Dead ESP","Loot ESP",
			"Vehicle Marker","Flag Marker (with radius)","Box/Safe/Container Marker","DeadPlayer Marker",
			"God Mode","God Mode (no stats change)","Vehicle God Mode","Lower Terrain","Vehboost","UnlimAmmo","noRecoil","FastFire","Stealth / Invisible",
			"Disable Announces","Mass Message","Change Time","Spawn Support-Boxes","Create Billboard","Change ViewDistance",
			"Spawn Ammo","Login as Arma Admin","BIS FreeRoam Cam (works with ESP)","FreeRoam Cam (does not work with ESP)",
			"Request Steam Name","showinfo",
			"UnlockLockVehicle","Copy Worldspace(coords) to RPT & Chat",
			
			"Spawn Vehicles","Spawn Persistent Vehicles","Trader Menu",
			
			"Kill","Explode","Force Disconnect",
			"Kick (Silent)","Kick (Announce)","Ban (Silent)","Ban (Announce)","TempBan (Silent)","TempBan (Announce)",
			
			"AdminConsole",
			"DebugConsole",
			"Execute code on server (DebugConsole)","Execute code global (DebugConsole)","Execute code local (DebugConsole)",
			"Lock Server (DebugConsole)","UnLock Server (DebugConsole)","Ban (DebugConsole)","Kick (DebugConsole)",
			
			"Change Money on Player","Change Money on Bank","Change Respect",
			
			"MapIcons",
			"MapIcons: Buildings","MapIcons: Flags",
			"MapIcons: Player","MapIcons: DeadPlayer","MapIcons: Vehicles",
			"MapIcons: Vehicle Types","MapIcons: Vehicle lockstate","MapIcons: DeadVehicles",
			"MapIcons: AI",
			"Arsenal",	// Adds Arsenal to the mousewheel actions if you press "," on the Numpad!
			"Unconscious","Remove Unconscious",
			"Light",	// Zeus like Lighting from the Air strikes down at selected player / target / location - use ctrl+1 or the menu to use it!
			
			"Spawn Zombie on Target Location!",	// This only works when you are using ExilZ / RyanZombies
			
			""
		}
	},
	{
		{"76561198052729396","76561197966595081","76561198068845750","76561198052595406","76561198943327134","76561198375824917","76561198988839135","76561197960440392","76561199807004538","76561198009072105","76561197997856265"},
		{
			"Territory Management",
			"Teleport On Map Click","Teleport - Target To Me","Teleport - Me To Target",
			"Teleport In Facing Direction (10m steps)","Drag and drop units on the map",
			"spectating","Delete Vehicle","FlyUp","ShowGear","Show Server Information",
			"HealSelf","HealRepairNear","AdminLog","Freeze","UnFreeze","Restrain","UnRestrain",
			"==== Loadouts ====","==== Base Deleter ====","Items spawn menu",
			"Remove Gear","Revive","Heal","Restore","Flip Vehicle","Move In My Vehicle","Move In Target Vehicle","Parachute Target","Eject","Eject Crew",
			"Player ESP","Player ESP (safezone style)","AI ESP","Dead ESP","Loot ESP",
			"Vehicle Marker","Flag Marker (with radius)","Box/Safe/Container Marker","DeadPlayer Marker",
			"God Mode","God Mode (no stats change)","Vehicle God Mode","Lower Terrain","Vehboost","UnlimAmmo","noRecoil","FastFire","Stealth / Invisible",
			"Disable Announces","Mass Message","Change Time","Spawn Support-Boxes","Create Billboard","Change ViewDistance",
			"Spawn Ammo","Login as Arma Admin","BIS FreeRoam Cam (works with ESP)","FreeRoam Cam (does not work with ESP)",
			"Request Steam Name","showinfo",
			"UnlockLockVehicle","Copy Worldspace(coords) to RPT & Chat",

			"Spawn Vehicles","Spawn Persistent Vehicles","Trader Menu",

			"Kill","Explode","Force Disconnect",
			"Kick (Silent)","Kick (Announce)","Ban (Silent)","Ban (Announce)","TempBan (Silent)","TempBan (Announce)",

			"AdminConsole",
			"DebugConsole",
			//"Execute code on server (DebugConsole)","Execute code global (DebugConsole)","Execute code local (DebugConsole)",
			"Lock Server (DebugConsole)","UnLock Server (DebugConsole)","Ban (DebugConsole)","Kick (DebugConsole)",

			"Change Money on Player","Change Money on Bank","Change Respect",

			"MapIcons",
			"MapIcons: Buildings","MapIcons: Flags",
			"MapIcons: Player","MapIcons: DeadPlayer","MapIcons: Vehicles",
			"MapIcons: Vehicle Types","MapIcons: Vehicle lockstate","MapIcons: DeadVehicles",
			"MapIcons: AI",
			"Arsenal",
			"Unconscious","Remove Unconscious",
			"Light",

			"Spawn Zombie on Target Location!",

			""
		}
	},
	{
		{"UID1","UID2","UID3","..."},
		{
			"Teleport On Map Click","Teleport - Target To Me","Teleport - Me To Target",
			"Teleport In Facing Direction (10m steps)","Drag and drop units on the map",
			"spectating","Delete Vehicle","FlyUp","ShowGear","Show Server Information",
			"HealSelf","HealRepairNear","AdminLog","Freeze","UnFreeze","Restrain","UnRestrain",
			"==== Loadouts ====","==== Base Deleter ====","Items spawn menu",
			"Remove Gear","Revive","Heal","Restore","Flip Vehicle","Move In My Vehicle","Move In Target Vehicle","Parachute Target","Eject","Eject Crew",
			"Player ESP","Player ESP (safezone style)","AI ESP","Dead ESP","Loot ESP",
			"Vehicle Marker","Flag Marker (with radius)","Box/Safe/Container Marker","DeadPlayer Marker",
			"God Mode","God Mode (no stats change)","Vehicle God Mode","Lower Terrain","Vehboost","UnlimAmmo","noRecoil","FastFire","Stealth / Invisible",
			"Disable Announces","Mass Message","Change Time","Spawn Support-Boxes","Create Billboard","Change ViewDistance",
			"Spawn Ammo","Login as Arma Admin","BIS FreeRoam Cam (works with ESP)","FreeRoam Cam (does not work with ESP)",
			"Request Steam Name","showinfo",
			"UnlockLockVehicle","Copy Worldspace(coords) to RPT & Chat",

			"Spawn Vehicles","Spawn Persistent Vehicles","Trader Menu",

			"Kill","Explode","Force Disconnect",
			"Kick (Silent)","Kick (Announce)","Ban (Silent)","Ban (Announce)","TempBan (Silent)","TempBan (Announce)",

			"AdminConsole",
			"DebugConsole",
			"Execute code on server (DebugConsole)","Execute code global (DebugConsole)","Execute code local (DebugConsole)",
			"Lock Server (DebugConsole)","UnLock Server (DebugConsole)","Ban (DebugConsole)","Kick (DebugConsole)",

			"Change Money on Player","Change Money on Bank","Change Respect",

			"MapIcons",
			"MapIcons: Buildings","MapIcons: Flags",
			"MapIcons: Player","MapIcons: DeadPlayer","MapIcons: Vehicles",
			"MapIcons: Vehicle Types","MapIcons: Vehicle lockstate","MapIcons: DeadVehicles",
			"MapIcons: AI",
			"Arsenal",
			"Unconscious","Remove Unconscious",
			"Light",

			"Spawn Zombie on Target Location!",

			""
		}
	}
};


/*
	Noficiations shown to all players on the server. Could be used to replace BEC messages.
	dynamic format:
		{
			first occurrence after x min,
			show again after x min,
			show message for x seconds / delay until next message is shown,
			font size (recommended is 0.6),
			xpos,
			ypos,
			text color,
			font,
			text (<br/> is a linebreak)
		}
	systemchat format:
		{
			first occurrence after x min,
			show again after x min,
			show message for x seconds / delay until next message is shown,
			text
		}

	if you want the client to see a message only once when logging in, you put the first and second entry in the array to -1.
	Example:
		{-1, -1, 4, 0.6, 0, 0, "#ff0000", "OrbitronLight", "Welcome to our server"}

	xpos and ypos need to be within your monitor. to high numbers and you simply won't see the text..
		~ x-range is between -0.7 to +1
		~ y-range is between -0.4 to +1

	Arma Fonts:
		PuristaLight
		PuristaMedium
		PuristaSemiBold
		PuristaBold
		LucidaConsoleB
		EtelkaMonospacePro
		EtelkaMonospaceProBold
		EtelkaNarrowMediumPro
		TahomaB

	Exile Fonts:
		OrbitronLight
		OrbitronMedium
		PressStart2P
		RobotoMedium
		RobotoRegular
NOTE: do not use " within the text.
*/
ENABLE_NOTIFICATION_MESSAGES = "true";
NOTIFY_MSG_ARRAY[] =
{
	//	{1st,again,dur,ftsize,xpos,ypox,color,font,text(<br/>)}

{-100, -1, 5, 0.5, 0, 0, "#ffffff", "RobotoMedium", "Welcome BS-Free PVE "},

{.111, -1, 4.5, 0.6, 0, 0, "#e5e547", "RobotoMedium", "THIS IS A PVE SERVER"},
{.187, -1, 3.5, 0.6, 0, 0, "#e5e547", "RobotoMedium", "DID YOU GET THAT? - PVE <br/>    DON'T BE A DICK!"},
{.306, -1, 6, 0.6, 0, 0, "#e5e547", "RobotoMedium", "WE HAVE VERY STRICT RULES REGARDING STEALING <br/>    READ THE RULES!"},
{.425, 45, 6, 0.5, -.1, -.1, "#e5e547", "RobotoMedium", "You NEED TO READ THE RULES!   If you haven't, READ THEM NOW!."},
{.544, -1, 6, 0.5, -.1, -.1, "#e5e547", "RobotoMedium", "There are optional gameplay and FX mods installed on this server.  Check your XM8 for the list"},
{.612, -1, 6, 0.5, -.1, -.1, "#e5e547", "RobotoMedium", "Respect the Admin and they'll respect you back"},

{.697, 45, 4, 0.5, "safeZoneX", "0.5", "#048B5B", "RobotoMedium", "Protected and administrated by<br/>infiSTAR.de AdminTools, AntiHack"},
{.765, 55, 4, 0.6, 0, 0, "#e5e547", "RobotoMedium", "Join us on Discord - Link in Server Info Menu"},
{.867, -1, 5, 0.6, 0, 0, "#e5e547", "RobotoMedium", "No parking in Green/Red Zones - READ THE RULES!"}


/*
{-100, -1, 4.0, 0.5, 0, 0, "#ffffff", "RobotoMedium", "Welcome BS-Free PVE "},
{0.094, -1, 4.5, 0.6, 0, 0, "#e5e547", "RobotoMedium", "THIS IS A PVE SERVER"},
{0.170, -1, 3.5, 0.6, 0, 0, "#e5e547", "RobotoMedium", "DID YOU GET THAT? - PVE <br/>    DON'T BE A DICK!"},
{0.289, -1, 6.0, 0.6, 0, 0, "#e5e547", "RobotoMedium", "WE HAVE VERY STRICT RULES REGARDING STEALING <br/>    READ THE RULES!"},
{0.408, 45, 6.0, 0.6, 0, 0, "#e5e547", "RobotoMedium", "You NEED TO READ THE RULES!   If you haven't, READ THEM NOW!"},
{0.510, -1, 5.0, 0.6, 0, 0, "#e5e547", "RobotoMedium", "There are optional gameplay and FX mods installed on this server.  Check your XM8 for the list"},
{0.578, -1, 4.0, 0.6, 0, 0, "#e5e547", "RobotoMedium", "Visit our player forum - bs-free.com/forum<br/>  to share comments, questions, or bug reports "},
{0.731, 55, 4.0, 0.6, 0, 0, "#e5e547", "RobotoMedium", "Join us on Discord - Link in Server Info Menu"},
{0.816, -1, 4.0, 0.6, 0, 0, "#e5e547", "RobotoMedium", "No parking in Green/Red Zones - READ THE RULES!"},
{0.884, -1, 4.0, 0.6, 0, 0, "#e5e547", "RobotoMedium", "Our policies for vehicle replacement are in the rules."},
{0.952, -1, 4.0, 0.6, 0, 0, "#e5e547", "RobotoMedium", "If you don't follow those rules, you are out of luck. READ THE RULES!"}
*/
};


/*
	{chatCommand (text typed in chat), color, size, font, text shown to player}
	only triggers if the EXACT text is typed!
NOTE: do not use " within the text.
*/
chatCommands[] =
{
//	{"!ts","#2784D6","1","OrbitronMedium","ts.mycommunity.com"},
	{"!website","#2784D6","1","OrbitronMedium","www.bs-free.com"}
//	{"!admin","#2784D6","1","OrbitronMedium","please visit ts.mycommunity.com"}
};

/*
	{chatCommand (text typed in chat) partitial, color, size, font, text shown to player}
	"Hello, why is there no loot on this map?" <- will trigger the example below!
NOTE: do not use " within the text.
*/
chatCommandsP[] =
{
	{"no loot","#2784D6","1","OrbitronMedium","You cannot loot from non arma buildings in this map, you must move around - check the shipping yards for best loot"}
};

/*
	adds Exile Devs to your AdminList - makes it easier for them to debug their mod live
*/
ExileDevFriendlyMode = "true";

/*
	If admin has rights to "Create Billboard", he will have new options to create a Billboard ingame with one of the following textures
	{"name shown in adminmenu","path to texture"}

	should be looking somewhat like this:
	{"example picture","\mpmissions\Exile.Altis.pbo\example.paa"}

	the picture has to be available on EACH client AND the server.
	So you either need a client-side mod for it or you need to put it in the MPMission
*/
pathToCustomBillBoardTextures[] =
{
//	{"Doggy","exile_assets\texture\flag\flag_mate_21dmd_co.paa"},
//	{"Spawny","exile_assets\texture\flag\flag_mate_spawny_co.paa"},
//	{"Dickbutt","exile_assets\texture\flag\flag_misc_dickbutt_co.paa"},
//	{"Vish","exile_assets\texture\flag\flag_mate_vish_co.paa"},

	{"Rules 1","\BSF_Community_Addon\addons\BSF_Signs\data\Skins\BSF_Rules.paa"},
	{"Hey, Asshole","\BSF_Community_Addon\addons\BSF_Signs\data\Skins\BSF_Have_You_Read_The_Rules.paa"}
};

/*
	You can allow clients to execute functions on the server by adding them like this:
	infiSTAR_RE_LIST[] =
	{
		"fn_infiSTAR_antiDupeServer","fn_infiSTAR_antiVehicleTheft","fn_infiSTAR_serverOwner"
	};

	make sure that those functions can't be abused to to any harm.
*/
infiSTAR_RE_LIST[] =
{

};
/****************************************************************************************************/
/********************OPTIONS BELOW REQUIRE CHANGES TO YOUR EXILE SERVER DATABASE!********************/
/****************************************************************************************************/
/*
	"customDatabaseQueries"
	To use any of the below, you need to do some changes to the exile.ini!
	I've added these changes here:
		"infiSTAR.de_Exile\SERVER_ARMA3_FOLDER\db_related_changes"
*/
class customDatabaseQueries {
	/*
		if "USE_DATABASE_WHITELIST = "true";", UIDs that are not whitelisted in your exile server database, will be kicked on connect.
		exile.ini needs [getAccountWhitelisted]
	*/
	USE_DATABASE_WHITELIST = "false";

	/*
		if "USE_LOG_TO_DATABASE = "true";", infiSTAR will log to your exile server database! (yes I know this is great!)
		exile.ini needs [insert_infiSTARLog]
	*/
	USE_LOG_TO_DATABASE = "true";

	/*
		if "USE_GET_TOTAL_CONNECTIONS = "true";", infiSTAR can log how often a player has been connected to your server before.
		exile.ini needs [getTotalConnections]
	*/
	USE_GET_TOTAL_CONNECTIONS = "true";
};
/*
	if "USE_ANNOUNCE_NEW_PLAYER = "true";", infiSTAR will announce a "New Player: NAME" to the whole server!
*/
USE_ANNOUNCE_NEW_PLAYER = "true";
/****************************************************************************************************/
/********************OPTIONS ABOVE REQUIRE CHANGES TO YOUR EXILE SERVER DATABASE!********************/
/****************************************************************************************************/
/*
	Use UID WhiteList?
	if "USE_UID_WHITELIST = "true";", UIDs that are not in "UID_WHITELIST" array, will be kicked on connect.
	This even counts for Admins!
*/
USE_UID_WHITELIST = "false";
UID_WHITELIST[] =
{
	"UID1","UID2","UID3","..."
};


/*
	What is this?
	infiSTAR has a global ban system so hackers don't jump around servers and learn how to bypass infiSTAR.

	There was a situation where a group of people asked why their friend could not join the server.
	Well he was globally banned for hacking.. anyways - if you as a server admin want him to get in even tho he is globally banned,
	just ask for his UID and add the UID in the array below.
*/
USE_GLOBAL_BAN_CHECK = "false";			/* if false, it can not kick or ban global banned people but it will still "log" them. So you know a globally banned person joined your server. */
UID_SKIP_GLOBAL_BAN_CHECK[] =
{
	"UID1","UID2","UID3","..."
};
CHECK_BattlEye_GLOBALBANS = "false";	/* if you don't have BE enabled on your server, this can still check if a player has been banned globally on BattlEye */


/* What ESCAPE Menu shows */
ESCMNUTOP = "BS-Free PVE";
ESCMNUBOT = "Join us on DISCORD";
BRIEFING_MSG = "false";	/* use mission briefing message: if   "BRIEFING_MSG = "false";"   then the message will be replaced by infiSTAR */
HTML_LOAD_URL = "https://bs-free.com";		/* HTML_LOAD_URL = ""; == disabled and if you set a url it will be shown in ESCAPE menu. HTML in Arma/this is limited. Try it :) example: "http://goo.gl/gb0o7b" */
ENABLE_PRIVATE_CHAT_MENU = "true";		/* players can open it by typing !chat in chat or by  custom controls -> "Use Action 3" */
PRIVATE_CHAT_MENU_8GNETWORK = "false";	/* if this is "true" - players will only be able to use private chat if they enable 8GNetwork in their xm8 */



class infiSTAR_RESTART_SYSTEM {
	enableSystem = "true";

	/*
		Locks the server when it starts, adds an eventhandler that kciks all players "on join" until the mpmission is initiated.
		That was the server can start up more properly and "build" all bases before the first players get in..
	*/
	LOCK_ON_RESTART = "false";

	/*
		I would recommend to use USE_RESTART_TIME_IN_M = "true"; instead of USE_RESTART_FIXED_TIME_ARRAY
	*/
	USE_RESTART_TIME_IN_M = "false";

	/*
		Restart time in minutes (default: 180min == 3 hours)
	*/
	RESTART_TIME_IN_M = 180;

	/*
		diag_tickTime (starts with arma3server.exe), time (starts with mpmission init)
	*/
	TIME_FUNCTION_USED = "diag_tickTime";

	USE_RESTART_FIXED_TIME_ARRAY = "true";
	RESTART_TIMES[] = {	/* {hour,minute} .. put in the times when your server is supposed to restart (real time). */

		// {03,00},
		// {06,00},
		// {09,00},
		// {12,00},
		// {15,00},
		// {18,00},
		// {21,00},
		// {24,00}

		{04,00},
		{08,00},
		{12,00},
		{16,00},
		{20,00},
		{00,00}

	};

	USE_SHUTDOWN = "true";
	SERVER_END_FUNCTION = "#shutdown";	/* SERVER_END_FUNCTION -> #shutdown or #restartserver */
	RESTART_WARNING_SOUND = "air_raid";	/* for example: Alarm or air_raid */

	LOCK_MIN_BEFORE_SHUTDOWN = 1;				/* Locks the server x min before it gets shutdown */
	RESTART_IN_X_ARRAY[] = {15,10,5,4,3,2,1};	/* Announce the a restart x mins before it happens (x stands for each number) */
};




/* Allow Player to vote Day/Night by typing vote day / vote night in Chat*/
DayNightVote = "false";
MRV = 0.66;	/* if "DayNightVote = "true";" - Minimum votes required. Percentage of players needed to pass the vote. */
MVP = 0.66;	/* if "DayNightVote = "true";" - Minimum vote percentage. A setting that dictates the minimum vote percentage that needs to be reached for the vote to pass. */
VCT = 900;	/* if "DayNightVote = "true";" - Time (in seconds) to wait until nex vote is possible. */


/* Enable jumping instead of GetOver function (infiSTAR jumping is a custom jump animation :P) */
enableJump = "true";


/* Allow players to type !pee (or !piss) to start peeing */
allowPee = "true";


/*
	How does this work?

	chatAnimationCommands[] = {
		{{"command1 for animation1","command2 for animation1"}, "animation1", animation time before it will be forced to be stopped},
		{{"command3 for animation2","command4 for animation2"}, "animation2", animation time of 0 means it will do the animation "forever" till the end unless it gets stops by the user manually.}
	};
*/
chatAnimationCommands[] = {
	{{"!finger","!fuck"},"acts_briefing_sb_in",7}, //shows fuck you finger
	{{"!surrender","!giveup","!hands"},"AmovPercMstpSsurWnonDnon",0}, //surrender animation (hands behind the head) 
	{{"!dab"},"Exile_Funny_Dab01",0} //Exile Dab animation (doing the dab)
};



/*
	The following 4 options can be disabled by putting the value to -1. For example "TGV = -1;"
*/
TGV = 40;	/* Terrain Grid Value - TGV: if set to 50 grass will be very low for better client FPS.. default is 12.5 ~35 is good performance and grass :) */
VDV = 750;	/* ViewDistance Value   */
VOV = 750;	/* ObjectViewDistance   */
SVD = 50;	/* ShadowViewDistance   */

/*
	checks if the terraingrid is different from default or TGV (12.5 or what you set in TGV). If you are using things that can change the grid, put this to false!
*/
CHECK_TERRAIN_GRID = "false";	// you should have this on false if you allow people to change their terrain in the xm8apps


/*
	*readded new old uniform and vest check since some people asked for it.
	http://www.exilemod.com/topic/14179-miss-uniform_and_vest_check/
	the game is still broken and sometimes you can see people naked when they are not.
	I did not add the old check back in, I made a new one making use of new functions :)
*/
fix_uniform_and_vest = "true";


/*
	checks if player tries to dupe using the "disconnect trick" -> sends a ping to the server whenever a player opens the escape menu
*/
disconnect_dupe_check = "true";


/*
	There is a way for players to dupe items if they drive a vehicle close to a trader, open the trader menu and then have a friend sit in the driver of the vehicle.
	Now they can sell the same item unlimited times and it won't vanish from the vehicle..
	That issue is fixed with this check!
*/
fix_trader_dupe = "true";

/*
	server side check for the famous "wastedump dupe" as well as client side cooldown
	the timer can not be lower than 120 seconds. if it was lower the check would not be working.
*/
fix_wastedump_dupe = "false";



class lagSwitchCheck {
	/*
		checks if the client connection to the server is established and not lagged out. Might cause a lot of server / network power
		after 25 seconds, the client will be kicked to lobby.
	*/
	enable = "false";

	warn_delay = 3.5; 			/* When a lag of 2.5 seconds was registered, the player is warned and won't be able to open any GUI (Gear, Tradermenu [..]) */
	log_delay = 10; 			/* server side log entry, when a lagswitch was detected that took longer than x seconds */
	kick_and_log_delay =  15; 	/* KICK and server side log entry, when a lagswitch was detected that took longer than x seconds */
};


class infiSTAR_blocked_glitch_actions {
	/*
		if a player is near a flag where he has no buildrights, he can't use the listed inputs close to buildingparts (to prevent glitching!)
	*/
	block_glitch_actions_enabled = "true";

	inputs[] = {"GetOver","leanLeft","leanLeftToggle","leanRight","leanRightToggle","LookAround","LookAroundToggle",
	"ActionFreeLook","Prone","ZoomOut","ZoomOutToggle","ZoomContOut","LookUp","LookLeft","LookRight","FreeHeadMove","AimHeadUp",
	"Cheat1","Cheat2"};

	/* this should also be enabled to prevent freelook (people simply use it to sneak through walls..) */
	block_ALT_key = "true";
	block_ALT_key_all = "false";	// also blocking ALT key for the Territory owner (so they can't peak through walls to defend easier)
};


/*
	checks if a players tries to glitch through a wall (if player is allowed to build in that territory, it will not be logged.)
*/
wall_glitch_object = "true";	//	This checks if the Player Object is glitching through a wall/base part
wall_glitch_revert = "true";	//	Teleport player back to last "safe" postion if a glitch was detected. Needs: wall_glitch_object = "true";
/*
	If a player model intersects with a wall, the player will be teleport back to where he was before he intersected with it..

extra punishments possible:
	0 - no punishment
	1 - knockout for 60 seconds
	2 - kill

	hardcore punishments
	3 - handcuff
	4 - kick
	5 - ban (not recommended)
*/
wall_glitch_punish = 0;



/*
	stops players from glitching into bases using "eject" or "getout" of a vehicle..
*/
wall_glitch_vehicle = "true";



class infiSTAR_safeZoneOptions {
	/*
		In a safeZone, only you or somebody from your group/clan can drive (or sell) your vehicle
		(after a server restart, the first one who gets into a vehicle becomes the "owner" of it (default Exile settings))
	*/
	enable = "false";
	kick_from_driver_only = "false";	// if "true", only thieves who get in driver seat will be kicked from vehicle. if "false", they will be kicked from all seats
};



class infiSTAR_handleDamage {
	/*
		This whole handleDamage does not effect admins!
	*/
	enable = "false";

	/*
		PvP_ReflectDamage option should reflect damage from player vs player (the player still takes damage)
	*/
	PvP_ReflectDamage = "false";

	/*
		PvP_BlockDamage option should block damage from player vs player
	*/
	PvP_BlockDamage = "false";

	/*
		PvP_useZones will load PvP_ReflectDamage and PvP_BlockDamage only if people are not within a range of the given xyz coordinates!
		{{X,Y,Z},RADIUS}
	*/
	PvP_useZones = "false";
	zones[] = {
		{{0,0,0},1},
		{{1,1,1},1},
		{{2,2,2},1}
	};

	/*
		block damage completely if the source of the damage is NULL
		(for example if you crash into a bush the source is NULL)
	*/
	BlockNullSource = "false";
};


/*
	Checks player Actions (mousewheel actions, userinterface actions and inputactions)
*/
BlockHoldActions = "true";	/* STRONGLY recommended! */



KCM = "false";		/* Just close ALL CommandingMenus */
CMC = "true";		/* Check for CommandingMenus that are not in the allowedCommandingMenus array */
allowedCommandingMenus[] = {"#user:asl_deploy_ropes_count_menu","#user:asl_show_select_ropes_menu_array"};


reset_inGameUIEventHandler = "false";	/* reset inGameUIEventHandler */
checkFilePatchingEnabled = "true";		/* checks if filepatching is enabled on the client (if it is, the client could inject any script based hack easily) */
onEventsCheck = "false";				/* checks server side on Events vs Client side */
checkCfgPatches = "false";				/* checks server side Cfg Patches vs Client side (logs as "Bad Class found in CfgPatches >> xxx") */
check_Notifications = "false";			/* checks if BIS_fnc_showNotification was used, as it is used with many hacks - some custom addons however use them too. */
check_doors_n_gates = "true";			/* Fixes Hatches (so when they are locked, they stay closed..) and closes every door that's locked + keeps closing it in case somebody tries to hack open it! */
attach_to_check = "false";				/* logs and detaches attached vehicles that are close.. basically completely disallow attaching of vehicles! */
INVISIBLE_PLAYER_check = "false";		/* checks if a player object is invisible (hidden). None admins only. LOGS LIKE: INVISIBLE PLAYER-OBJECT   @X Y */
MAIN_LOOP_CHECK = "true";				/* "false", if you have too many log entries with "MAIN LOOP STOPPED!" */


checkPopTabIncrease = "false";
LogPopTabIncrease = 500000;			/* Only if checkPopTabIncrease = "true"; logs if PopTabs increased by x within ~50 seconds */
BanPopTabIncrease = 2000000;			/* Only if checkPopTabIncrease = "true"; bans a player if PopTabs increase by more than x within ~50 seconds */

checkRespectIncrease = "false";
LogRespectIncrease = 50000;			/* Only if checkRespectIncrease = "true"; logs if respect increased by x within ~50 seconds */
BanRespectIncrease = 150000;			/* Only if checkRespectIncrease = "true"; bans a player if respect increases by more than x within ~50 seconds */



/* Check for Map Menu & Map Sub-Menu */
CMM = "true";
maxMapMenuEntries = 6;	/* "Map Menu has been changed x entries found - Texts: y" incase you want to add some briefing to your map menu. Only matters if you have CMM = "true"; */

/* if steam api.steampowered.com is working, this might be a nice feature */
check_steam_ban = "false";	/* will announce and log steambanned players - using GetPlayerBans v1 */
ban_for_steam_ban = "false";	/* if "check_steam_ban = "true";" then steambanned players will get banned from your Arma server! */


MPH = "true";			/* This set to "true" will create a log of players being hit on your server */
GodModeCheck = "false";	/* This will check from serverside if a playerobject received damage but did not take it */


/*
	Anti Teleport
	AntiTeleport = "false"; To disable Anti Teleport
	Arrays below show position & radius where Teleporting is allowed.
	Mainly for the Traders (because when you purchase a vehicle, it teleports you into the vehicle)

	You can white-list "Teleport Zones" by adding them like below.

	XtoYposition allow players to teleport from pos1 to pos2 or pos2 to pos1 (order doesn't matter).
	The idea is to allow scripts like "FastTravel"

	class AntiTeleport {
		enable = "true";

		allowedZones[] = {
			{{0,0,0},1},
			{{1,1,1},1},
			{{2,2,2},1}
		};

		XtoYpositions[] = {
		//	{ AAC, Gravia}
		//	{{11590.1,11964.4,0}, {14541.7,17555,0}}
		};
	};
	Trading zones are white-listed by default.
*/
class AntiTeleport {
	enable = "false";

	allowedZones[] = {};

	XtoYpositions[] = {
	//	{ AAC, Gravia}
	//	{{11590.1,11964.4,0}, {14541.7,17555,0}}

	//	This can have as many positons as you want. Allows teleporting within each subarray of XtoYpositions
	//	{{11590.1,11964.4,0}, {14541.7,17555,0}, {0,0,0}, {2500,5000,0}}
	};
};



/*  Check Drawing on the Map (global channel) */
//	CHECK_DRAWING = "false";	/* logs & deletes global drawing */
//	Removed! - Arma3 can now disable map drawing by putting
//	disableMapDrawing = 1; into your mission config

CHECK_RECOIL = "false";		/* checks weapon recoil */



/*  Check Local Markers  */
CLM = "false";	/* "false" if you do not want LocalMarker to be checked. */

/*  Use aLocalM array    */
UMW = "false";	/* use allowed marker array from below (for example AltisLife uses house_ and others in there) or A.I. Missions */
/* aLocalM: if "CLM" && UMW - this array of names will be allowed */
aLocalM[] = {"MissionMarker"};


/*
	Not allowed Chat words on server.
	Example:
		badkickChat[] = {"blue"}; or badbanChat[] = {"blue"};
	will log and kick or ban if somebody writes "blue goat" or "blues" in the chat (not case sensitive).

	Example 2:
	This will most likely stop people from writing Cyrillic (Russian) (I've been asked for this)
	badkickChat[] = {"й","д","и","б","ь","т"};
*/
badWarnChat[] = {};
badkickChat[] = {	"й","д","и","б","ь","т","Beaner","bentshot","Bluegum","Burrhead","Burr-head","cocksucker","cock sucker","cunt","Dot head","Dothead","Dot-head",
	"fag","faggot","Flamer","Fudge packer","gayboy","gaylord","Gook","Gook-eye","hebe","Heeb","homo","Jungle bunny",
	"lesbo","lezbo","nigar","nigette","nigga","niggah","nigger","niggr","niggress","nigguh",
	"niggur","Niglet","Nignog","Nig-nog","Oven Dodger","paki","Pickaninny","Pillow biter","poofter","Porch monkey","pussy","Rag head","Raghead","Rag-head","Sambo",
	"Sausage jockey","Spearchucker","spigotty","TarBaby","Tar-Baby","Thicklips","Towel head","Towelhead","Towel-head","Tranny","Turd burglar","Wetback",
	"Whigger","Wigga","Wigger","wog","Yid","Zipperhead"
	};
badbanChat[] = {};


/* Not allowed Names on server. Example: badNamesFull[] = {"THE"}; would kick all players that are named "THE", it would NOT kick players named "THE CAR" (not case sensitive) */
badNamesFull[] = {};

/* Not allowed Names on server. Example: badNamesPartial[] = {"THE"}; would kick all players with names like "the car" as it includes "THE" (not case sensitive) */
badNamesPartial[] = {"admin","owner","administrator"};


/* Not allowed Group Names on server. Example: badGroupNames[] = {"THE"}; would rename all groups with names like "the car" as it includes "THE" (not case sensitive) */
badGroupNames[] = {"admin"};



/*
	if somebody talks on one of the following channels, his channel will be switched to "direct" channel
	0 = Global
	1 = Side
	2 = Command
	3 = Group
	4 = Vehicle
	5 = Direct <-- this is where people get switched too if they talk in one of the blacklisted channels!
	6-15 = Custom Radio (see radioChannelCreate)
*/
disAllowVon[] = {1,2};

/* badIDDsToKick will be checked before badIDDsToClose, badIDDsToClose will be checked before allowedIDDs */
/* badIDDsToKick: Forbidden Idds that will get you Kicked by the AH */
badIDDsToKick[] =
{
	-1338,-1337,-1341,17,19,30,32,45,56,59,62,64,69,71,110,125,
	132,133,155,156,165,166,167,312,313,
	1320,1321,1340,1341,1342,1343,1344,1345,1346,1347,
	2727,2928,2929,3030,316000,9899,0110,
	6900,552266
};

/* badIDDsToClose: Forbidden Idds that will get closed by the AH */
badIDDsToClose[] =
{
	-1,2,3,7,17,19,25,26,27,28,29,30,31,32,37,40,41,43,44,45,51,52,53,56,74,85,
	106,126,127,132,146,147,150,151,152,153,154,155,159,162,164,262,
	314,632,1320,2121,148,163,129,157,69,156,165,166,167,312,1321,2727,
	-1341,1341
};

/* Use IDD White-List ? */ UDW = "false";
/* allowedIDDs: Insert IDDs here to prevent them from being closed! */
allowedIDDs[] =
{

	/* Added while troubleshooting Better Inventory*/
	999, 1000, 1001, 160, 129, 312, 2727, 999999,

	/* default idds */
	-1,0,4,5,6,8,12,15,18,24,49,54,55,70,72,101,160,174,177,999,131,63,602,301,

	/* exile idds */
	24001,24002,20023,24005,24004,24010,24025,20021,20017,24012,24027,
	20019,20016,24007,20024,20018,24008,24011,24015,24000,24006,24014,
	20020,24026,4002,4000,4001,4003,1500,

	24033,24030,24029,24028,24031,24034,

	4004,21000,	// Bounty system and MarXet
	8457,	// http://www.exilemod.com/topic/9040-xm8-apps/
	65431,	// r3f menu fix
	6666,	// Paintshop
	0711,	// Advanced Banking
	0720,24036,	// Virtual Garage
	5501,5502,5503,5504,5505,5506,5507,	// BRAma Cookbook
	66000,66001,66002,66003,66004,66005,  // APOC Airdrop
	107000, // ExAd BRAmaRecipes
	7770,	// scarCODE Server Info Menu
	86000,	//xsSpawn
	-1339,-1340,	// custom infiSTAR dialogs (some editor & a private chat menu)
	42289,		// SM Lone Virtual Garage
	24007,		// SM Trader Plus
	420612,		// SM Loadout Trader
	42055,		// SM Dynamic Menu
	25301, 		// BSF_AssetManagement_Dialog
	25302, 		// BSF_ChangeTerritory_Dialog
	25303, 		// BSF_AssetManagement_Instructions_Dialog
	25305,		// BSF_AmmoCraft_Dialog
	602, 		// BSF_DisplayInventory_Dialog
	9920,		// GENIX Pylon Manager
	/* main idd - never delete it */
	46
};



/*
	important check to make sure certain variables are set and have the correct type!
*/
variableTypeChecks[] =
{
	{'ExileIsPlayingRussianRoulette',"false"},
	{'ExileClientIsHandcuffed',"false"},
	{'ExilePlayerInSafezone',"false"},
	{'ExileClientIsAutoRunning',"false"},
	{'ExileCurrentBreachingObject',objNull},
	{'ExileClientInteractionObject',objNull},
	{'HTML_LOAD_URL3',''},
	{'infiSTAR_lastJumptime',0},
	{'PLAYER_IN_VEHICLE',"false"},
	{'ExileSystemSpawnThread',[]}
};


/*
	it is highly recommended to have this check turned on (useBlacklistedVariableCheck = "true";)
	shows "BadVariable in xxxxxxxx " in the logs.
*/
useBlacklistedVariableCheck = "true";
blacklistedVariables[] =
{
	"bis_debug_cam",
	"arsenalopened","bis_fnc_arsenal_fullarsenal","babecore_escm_mousepos","RANDOMVAR",
	"bis_fnc_dbg_reminder_value","bis_fnc_dbg_reminder","bis_menu_groupcommunication","bis_fnc_addcommmenuitem_menu",
	"rscspectator","rscspectator_hints","rscspectator_display","rscspectator_playericon",
	"rscspectator_view","rscspectator_map","rscspectator_vision","rscspectator_keys",
	"rscspectator_interface","bis_fnc_camera_target","andy_loopz","initfileone","finie_s_p",
	"time","servertime","myplayeruid","hhahaaaaar","charliesheenkeybinds","kickoff","yolo","runonce","notakeybind","action1","supa_licenses","autokick","wallaisseikun","mainmenu",
	"gefclose","gefwhite","gefred","gefgreen","gefcyan","firsthint","new_queued","fn_exec","fnd_fnc_select","fnx3","antihackkick","tele","dmap","goldens_global_shit_yeah","glass911_run",
	"geardialog_create","lystokeypress","thirtysix","ly_swaggerlikeus","jkeyszz","n2","boxofmagic","mainscripts","dmc_fnc_4danews","infistarbypass","exec_text","vehicle_dblclick","init_main",
	"esp_count","nute_dat_bomber","s_cash100k","xposplayer","ly_re_onetime","skar_checka","mainscriptsv4","viewdistance","check_load","already_load","meins","f1","dummy","plane_jump",
	"c_player","mouseclickeh","distp","nec2","menu_i_run_color_lp","glassv1nce_bindhandler","thecar","fastanimes","getinpassenger","iaimon","dmc_re_onetime","func_execonserver","fnc_serverkicknice",
	"kick_admins","dasmokeon","hovering","r_kelly_be_flying","vincelol_altislife","life_fnc_byassskaroah","ah_fnc_mp","jayre","fn_newsbanner","hack_news","trollfuncs",
	"fanatic_infipass","keybindings_xxx","andysclosed","userfuncs","altisfuncs","remexe","bb_nofatigue","bis_fnc_diagkey_var_code","first_page","get_in_d","i_t_s__m_e_o","smissles","whippy_esp",
	"targetfuncs2","life_fnc_antifreeeeze","ly_keyforward","ty_re_onetime","life_fnc_xaaxaa","mein1","goddamnvehiclesxd","mystic_fnc_esp_distance","esp_id_setter","dummymen","whipbut","userfuncs",
	"krohdofreedom","selectedplayer","lmenu1","ggplayer","throx_menu_item","lvl1","init_menu_slew","d_b_r_t_y_slew","v6_gef","xasfjisisafudmmyx","kekse","updated_re_36","first","second",
	"sni_prz_zzz_targetplayer","healit","o_fnc_arma","mlrn_exec","running_threads","catchemall11235","killtarget","gmtoggle","t1","fuck_me_keyp","cheatcurator"
};

/*
	due to new hacking methods it is necessary to check variables on objects..
	since most server have 50.000+ objects this can cost a lot client fps but it should still be used.. for the greater good!
*/
useObjectVariableCheck = "false";



UVC_adminspawn = "false";	/* use vehicle check(s) on vehicles spawned by infiSTAR.de admin? */
/*
	Use vehicle white list? (everything not on white-list will be flagged as BadVehicle and deleted!)
	"EXILE" vehicles are white-listed by default!
*/
VehicleWhiteList_check = "false";
VehicleWhiteList[] =
{
	"B_Parachute","B_Parachute_02_F","O_Parachute_02_F","Steerable_Parachute_F",
	"I_UAV_01_F","B_HMG_01_high_F","O_HMG_01_F","B_Heli_Transport_01_F","B_Heli_Transport_01_camo_F","O_MRAP_02_gmg_F","O_static_AT_F","Land_Camping_Light_F"
};

/*
	Use forbidden vehicle check? (everything in the ForbiddenVehicles will be flagged as BadVehicle and deleted (even when it is on the white-list)!)
*/
ForbiddenVehicles_check = "false";
ForbiddenVehicles[] =
{
	"B_MBT_01_arty_F","B_Truck_01_ammo_F"
};

/*
	If you use VehicleWhiteList_check or ForbiddenVehicles_check then the vehicle check automatically checks for locally created vehicles.
	Locally created vehicles are these that get created by a player and not the server. E.g. when a player assambles a UAV or a static weapon!
	Also some public posted scripts for example the "bike script" are creating the vehicle (the bike) locally (so the type of the vehicle needs to get added to the array below!).
*/
LocalWhitelist[] =
{
	"O_HMG_01_weapon_F","O_HMG_01_F","O_HMG_01_support_F","I_UavTerminal","I_UAV_01_backpack_F",
	"Exile_Bike_OldBike","B_HMG_01_F","B_HMG_01_high_F","O_HMG_01_high_F","B_Mortar_01_F"
};




UFI = "false";	/* Use "ForbiddenItems"/Item Check(s) */
UIW = "false";	/* if "UIW = "true";" then it checks if the items the individual player has are in "ItemWhiteList" */
KICK_ON_DETECTION = "false";	// kick when a bad or not whitelisted item was found
ItemWhiteList[] =
{
	"AllowThisItem1","AllowThisItem2"
};
ForbiddenItems[] =
{
	"autocannon_Base_F","autocannon_30mm","autocannon_35mm","autocannon_40mm_CTWS","autocannon_30mm_CTWS","Bomb_04_Plane_CAS_01_F",
	"Bomb_03_Plane_CAS_02_F","cannon_105mm","cannon_120mm","cannon_120mm_long","cannon_125mm","Cannon_30mm_Plane_CAS_02_F","gatling_20mm",
	"gatling_25mm","gatling_30mm","Gatling_30mm_Plane_CAS_01_F","GBU12BombLauncher","GMG_20mm","GMG_40mm","GMG_UGV_40mm","HMG_127_MBT",
	"HMG_127","HMG_127_APC","HMG_01","HMG_M2","HMG_NSVT","LMG_Minigun2","LMG_RCWS","LMG_M200","LMG_Minigun","LMG_Minigun_heli","LMG_coax",
	"Missile_AGM_02_Plane_CAS_01_F","Missile_AA_04_Plane_CAS_01_F","Missile_AA_03_Plane_CAS_02_F","Missile_AGM_01_Plane_CAS_02_F","missiles_DAGR",
	"missiles_DAR","missiles_ASRAAM","missiles_SCALPEL","missiles_titan","missiles_titan_static","missiles_Zephyr","Mk82BombLauncher","mortar_82mm",
	"mortar_155mm_AMOS","rockets_Skyfire","rockets_230mm_GAT","Rocket_04_HE_Plane_CAS_01_F","Rocket_04_AP_Plane_CAS_01_F","Rocket_03_HE_Plane_CAS_02_F",
	"Rocket_03_AP_Plane_CAS_02_F","Twin_Cannon_20mm"
};



/*
	custom Box content:
	just an item like it is in the example with   "ItemMap"   will put the item once in the box.
	if an array is used like the   {"ItemGPS",5}   example, well I assume you could guess what it will do.

	You can just define as many as you want.
	{
		"BOX NAME",	// function name in the admin menu
		{
			"Item1","Item2",	// one per just item in a string
			{"Item1",5},{"Item2",10}	// second entry in each array defiens how many of items of the first entry are wanted.
		}
	}

	The last closing bracket in an array can not have a "," afterwards. So make sure to have no syntax errors here.
*/
allSupportBoxes[] =
// BEGIN SUPPLY BOX LIST
{
	{
		"Box1-Small_Wood_Base",
		{
			"Exile_Item_Flag","Exile_Item_CookingPot",
			{"Exile_Item_Codelock",1},
			{"Exile_Item_DuctTape",3},
			{"Exile_Item_InstaDoc",3},
			{"Exile_Item_Energydrink",5},
			{"Exile_Item_WoodWallKit",6},
			{"Exile_Item_FloodLightKit",1},
			{"Exile_Item_WoodFloorKit",6},
			{"Exile_Item_FuelCanisterFull",2},
			{"Exile_Item_EMRE",5},
			{"Exile_Item_WoodDoorKit",1},
			{"Exile_Item_Matches",1},
			{"Exile_Item_WoodGateKit",1},
			{"Exile_Item_WorkBenchKit",1},
			{"Land_Cargo20_sand_F_Kit",1},
			{"Exile_Item_PlasticBottleFreshWater",10},
			{"Exile_Item_PortableGeneratorKit",1},
			{"Exile_Item_CampFireKit",1},
			{"Exile_Item_WaterBarrelKit",1},
			{"ItemGPS",1},
			{"Exile_Melee_Axe",2}
		}
	},

	{
		"Box2-Small_Concrete_Base",
		{
			"Exile_Item_Flag","Exile_Item_Codelock",
			{"Exile_Item_ConcreteWallKit",6},
			{"Exile_Item_ConcreteFloorKit",6},
			{"Exile_Item_InstaDoc",4},
			{"Exile_Item_DuctTape",2},
			{"Exile_Item_ConcreteDoorwayKit",1},
			{"Exile_Item_ConcreteGateKit",1},
			{"Exile_Item_ConcreteWindowKit",1},
			{"Exile_Item_FortificationUpgrade",5},
			{"Exile_Item_FuelCanisterFull",2},
			{"Exile_Item_Matches",1},
			{"Exile_Item_PortableGeneratorKit",1},
			{"Exile_Item_WoodWallHalfKit",3},
			{"Exile_Item_PlasticBottleFreshWater",10},
			{"Land_Cargo20_sand_F_Kit",1},
			{"Exile_Item_Energydrink",5},
			{"Exile_Item_EMRE",5},
			{"Exile_Item_WorkBenchKit",1},
			{"Exile_Item_CampFireKit",1},
			{"Exile_Item_Codelock",1},
			{"Exile_Item_WaterBarrelKit",1},
			{"ItemGPS",1}
		}
	},

	{
		"Box3-Wood_Base_Deluxe",
		{
			"Exile_Item_Flag",
			{"Exile_Item_WoodDoorKit",2},
			{"Exile_Item_WoodDoorwayKit",1},
			{"Exile_Item_WoodFloorKit",20},
			{"Exile_Item_DuctTape",5},
			{"Exile_Item_InstaDoc",5},
			{"Exile_Item_WoodFloorPortKit",3},
			{"Exile_Item_WoodGateKit",2},
			{"Exile_Item_WoodLog",25},
			{"Exile_Item_WoodPlank",25},
			{"Exile_Item_WoodStairsKit",3},
			{"Exile_Item_WoodSupportKit",5},
			{"Exile_Item_WoodWallHalfKit",5},
			{"Exile_Item_WoodWallKit",25},
			{"Exile_Item_WoodWindowKit",5},
			{"Exile_Item_WoodDrawBridgeKit",2},
			{"Land_Cargo20_sand_F_Kit",1},
			{"Exile_Item_DuctTape",5},
			{"Land_Cargo20_sand_F_Kit",1},
			{"Exile_Item_InstaDoc",5},
			{"Exile_Item_Codelock",1},
			{"Exile_Item_FuelCanisterFull",2},
			{"Exile_Item_PortableGeneratorKit",1},
			{"Exile_Item_PlasticBottleFreshWater",10},
			{"Exile_Item_FloodLightKit",1},
			{"Exile_Item_EMRE",10},
			{"Exile_Item_Sand",20},
			{"Exile_Item_Matches",1},
			{"Exile_Item_WaterBarrelKit",1},
			{"Exile_Item_Cement",20},
			{"B_Slingload_01_fuel_F_Kit",1},
			{"B_Slingload_01_Ammo_F_Kit",1},
			{"Exile_Item_WorkBenchKit",1},
			{"Exile_Melee_Axe",1},
			{"Exile_Melee_SledgeHammer",1},
			{"Exile_Item_Foolbox",1},
			{"Exile_Item_Handsaw",1},
			{"Exile_Item_Grinder",1},
			{"Exile_Item_Pliers",1},
			{"Exile_Item_Screwdriver",1},
			{"Exile_Item_Shovel",1},
			{"Exile_Item_CampFireKit",1},
			{"Exile_Item_Knife",1}
		}
	},

	{
		"Box4-Concrete_Base_Deluxe",
		{
			{"Exile_Item_Flag",1},
			{"Exile_Item_ConcreteWindowKit",5},
			{"Exile_Item_ConcreteFloorPortKit",2},
			{"EBM_Brickwall_floorport_door_Kit",1},
			{"Exile_Item_ConcreteStairsKit",3},
			{"Exile_Item_ConcreteFloorKit",20},
			{"Exile_Item_ConcreteDoorKit",2},
			{"Exile_Item_ConcreteDoorwayKit",2},
			{"Exile_Item_ConcreteWallKit",25},
			{"Exile_Item_ConcreteGateKit",2},
			{"Exile_Item_ConcreteSupportKit",8},
			{"Exile_Item_FortificationUpgrade",10},
			{"Exile_Item_WoodWallHalfKit",5},
			{"Exile_Item_WoodDrawBridgeKit",2},
			{"Exile_Item_DuctTape",5},
			{"Land_Cargo20_sand_F_Kit",1},
			{"Exile_Item_InstaDoc",5},
			{"Exile_Item_Codelock",2},
			{"Exile_Item_FuelCanisterFull",2},
			{"Exile_Item_PortableGeneratorKit",1},
			{"Exile_Item_PlasticBottleFreshWater",10},
			{"Exile_Item_FloodLightKit",1},
			{"Exile_Item_EMRE",10},
			{"Exile_Item_Sand",20},
			{"Exile_Item_Matches",1},
			{"Exile_Item_WaterBarrelKit",1},
			{"Exile_Item_Cement",20},
			{"B_Slingload_01_fuel_F_Kit",1},
			{"B_Slingload_01_Ammo_F_Kit",1},
			{"Exile_Item_WorkBenchKit",1},
			{"Exile_Melee_Axe",1},
			{"Exile_Melee_SledgeHammer",1},
			{"Exile_Item_Foolbox",1},
			{"Exile_Item_Handsaw",1},
			{"Exile_Item_Grinder",1},
			{"Exile_Item_Pliers",1},
			{"Exile_Item_Screwdriver",1},
			{"Exile_Item_Shovel",1},
			{"Exile_Item_CampFireKit",1},
			{"Exile_Item_Knife",1}
		}
	},

	{
		"Box5-Brick_Base_Deluxe",
		{
			{"Exile_Item_Flag",1},
			{"EBM_Brickwall_window_Kit",5},
			{"EBM_Brickwall_floorport_door_Kit",1},
			{"EBM_Brickwall_stairs_Kit",3},
			{"EBM_Brickwall_floorport_Kit",3},
			{"EBM_Brickwall_floor_Kit",20},
			{"EBM_Brickwall_door_Kit",2},
			{"EBM_Brickwall_hole_Kit",2},
			{"EBM_Brickwall_Kit",25},
			{"Exile_Item_ConcreteGateKit",2},
			{"Exile_Item_ConcreteSupportKit",8},
			{"Exile_Item_FortificationUpgrade",10},
			{"Exile_Item_WoodWallHalfKit",5},
			{"Exile_Item_WoodDrawBridgeKit",2},
			{"Exile_Item_DuctTape",5},
			{"Land_Cargo20_sand_F_Kit",1},
			{"Exile_Item_InstaDoc",5},
			{"Exile_Item_Codelock",2},
			{"Exile_Item_FuelCanisterFull",2},
			{"Exile_Item_PortableGeneratorKit",1},
			{"Exile_Item_PlasticBottleFreshWater",10},
			{"Exile_Item_FloodLightKit",1},
			{"Exile_Item_EMRE",10},
			{"Exile_Item_Sand",20},
			{"Exile_Item_Matches",1},
			{"Exile_Item_WaterBarrelKit",1},
			{"Exile_Item_Cement",20},
			{"B_Slingload_01_fuel_F_Kit",1},
			{"B_Slingload_01_Ammo_F_Kit",1},
			{"Exile_Item_WorkBenchKit",1},
			{"Exile_Melee_Axe",1},
			{"Exile_Melee_SledgeHammer",1},
			{"Exile_Item_Foolbox",1},
			{"Exile_Item_Handsaw",1},
			{"Exile_Item_Grinder",1},
			{"Exile_Item_Pliers",1},
			{"Exile_Item_Screwdriver",1},
			{"Exile_Item_Shovel",1},
			{"Exile_Item_CampFireKit",1},
			{"Exile_Item_Knife",1}
		}
	},

	{
		"Box6-IronWall_Base_Deluxe",
		{
			{"Exile_Item_Flag",1},
			{"BSF_IronWall_2_Window_C_Kit",5},
			{"BSF_IronWall_Floorport_Door_Kit",1},
			{"BSF_IronWall_Stairs2_Kit",3},
			{"BSF_IronWall_Floorport_Kit",3},
			{"BSF_IronWall_Floor_Kit",20},
			{"BSF_IronWall_2_Door_C_Kit",2},
			{"BSF_IronWall_2_Kit",25},
			{"BSF_IronWall_Gate_1L_Kit",2},
			{"BSF_IronWall_Post_Kit",8},
			{"BSF_IronWall_2_Low_Kit",5},
			{"BSF_IronWall_2_Stairs_L_Kit",1},
			{"BSF_IronWall_Stairport_Kit",1},
			{"BSF_IronWall_StairRail_L_Kit",1},
			{"BSF_Stairs_Ext_C_Kit",1},
			{"Exile_Item_WoodDrawBridgeKit",2},
			{"Exile_Item_DuctTape",5},
			{"Land_Cargo20_sand_F_Kit",1},
			{"Exile_Item_InstaDoc",5},
			{"Exile_Item_Codelock",2},
			{"Exile_Item_FuelCanisterFull",2},
			{"Exile_Item_PortableGeneratorKit",1},
			{"Exile_Item_PlasticBottleFreshWater",10},
			{"Exile_Item_FloodLightKit",1},
			{"Exile_Item_EMRE",10},
			{"Exile_Item_Sand",20},
			{"Exile_Item_Matches",1},
			{"Exile_Item_WaterBarrelKit",1},
			{"Exile_Item_Cement",20},
			{"B_Slingload_01_fuel_F_Kit",1},
			{"B_Slingload_01_Ammo_F_Kit",1},
			{"Exile_Item_WorkBenchKit",1},
			{"Exile_Melee_Axe",1},
			{"Exile_Melee_SledgeHammer",1},
			{"Exile_Item_Foolbox",1},
			{"Exile_Item_Handsaw",1},
			{"Exile_Item_Grinder",1},
			{"Exile_Item_Pliers",1},
			{"Exile_Item_Screwdriver",1},
			{"Exile_Item_Shovel",1},
			{"Exile_Item_CampFireKit",1},
			{"Exile_Item_Knife",1}
		}
	},

	{
		"Box7-Admin_Mission_Gear",
		{
			{"Exile_Uniform_Woodland",20},
			{"BSF_Plate_Carrier_GL_Carbon",20},
			{"BSF_Caryyall_Carbon_F",20},
			{"BSF_Viper_Helmet_Black_F",20},
			{"BSF_Stealth_Helmet_Carbon",20},
			{"NVGogglesB_grn_F",20},
			{"Rangefinder",20},
			{"Exile_Item_Defibrillator",30},
			{"Exile_Item_InstaDoc",80},
			{"Exile_Item_PlasticBottleFreshWater",80},
			{"Exile_Item_EMRE",80},
			{"rzinfection_antivirus_pills",10},
			{"rhsusf_weap_glock17g4",10},
			{"rhsusf_acc_omega9k",10},
			{"rhsusf_mag_17Rnd_9x19_JHP",50}
		}
	},

	{
		"Box8-Admin_Mission_Weapons",
		{
			{"rhs_weap_m249_pip_S",2},
			{"rhsusf_200rnd_556x45_mixed_box",14},
			{"rhs_weap_m240B",1},
			{"rhsusf_acc_ARDEC_M240",1},
			{"rhsusf_100Rnd_762x51_m993",14},
			{"srifle_DMR_03_F",1},
			{"20Rnd_762x51_Mag",12},
			{"rhs_weap_m27iar_grip",2},
			{"rhs_mag_100Rnd_556x45_M855A1_cmag_mixed",10},
			{"rhs_mag_30rnd_556x45_mk318_PMAG_Tan",20},
			{"rhs_weap_mk18_d",2},
			{"rhs_weap_mk18_m320",2},
			{"rhsusf_acc_nt4_black",8},
			{"rhs_mag_30rnd_556x45_mk318_PMAG_Tan",44},
			{"rhs_weap_ak103_zenitco01_b33",2},
			{"arifle_AK12_F",2},
			{"muzzle_snds_B",6},
			{"rhs_30Rnd_762x39mm_polymer",44},
			{"optic_AMS",10},
			{"rhsusf_acc_su230_mrds",12},
			{"acc_pointer_IR",16},
			{"bipod_01_F_blk",16},
			{"rhsusf_weap_glock17g4",8},
			{"rhsusf_acc_omega9k",8},
			{"rhsusf_mag_17Rnd_9x19_JHP",40},
			{"launch_RPG7_F",2},
			{"rhs_rpg7_PG7V_mag",8},
			{"rhs_weap_m72a7",5},
			{"1Rnd_HE_Grenade_shell",20},
			{"1Rnd_SmokeRed_Grenade_shell",10},
			{"1Rnd_SmokeGreen_Grenade_shell",10},
			{"HandGrenade",20},
			{"B_IR_Grenade",20},
			{"SmokeShell",20},
			{"SmokeShellRed",10},
			{"SmokeShellGreen",10},
			{"rhssaf_tm200_mag",10}
		}
	}
};
// END SUPPLY BOX LIST
};
