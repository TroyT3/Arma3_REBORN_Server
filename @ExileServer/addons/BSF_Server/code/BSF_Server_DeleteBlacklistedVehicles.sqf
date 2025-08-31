/*
* BSF_Server_DeleteBlacklistedVehicles
* BSF_Server\code\BSF_Server_DeleteBlacklistedVehicleses.sqf
* 
* BS-Free Game Servers
* www.bs-free.com
* © 2023 Troy - BS-Free
*
* This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
* To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
*/

private ["_blacklistArray", "_vehicleID", "_owner"];

uiSleep 10;

	_blacklistArray = [
		"BSF_Gnat_01",
		"Exile_Car_Kart_Blue",
		"Exile_Car_Kart_BluKing",
		"Exile_Car_Kart_RedStone",
		"Exile_Car_Kart_Vrana",
		"Exile_Car_Kart_Green",
		"Exile_Car_Kart_Orange",
		"Exile_Car_Kart_White",
		"Exile_Car_Kart_Yellow",
		"Exile_Car_Kart_Black",
		"C_Kart_01_F",
		"C_Kart_01_black_F",
		"C_Kart_01_Blu_F",
		"C_Kart_01_Fuel_F",
		"C_Kart_01_green_F",
		"C_Kart_01_orange_F",
		"C_Kart_01_Red_F",
		"C_Kart_01_Vrana_F",
		"C_Kart_01_white_F",
		"C_Kart_01_yellow_F",
		"Exile_Bike_QuadBike_White",
		"Exile_Bike_QuadBike_Black",
		"Exile_Bike_QuadBike_Blue",
		"Exile_Bike_QuadBike_Red",
		"Exile_Bike_QuadBike_Fia",
		"Exile_Bike_QuadBike_Guerilla01",
		"Exile_Bike_QuadBike_Guerilla02",
		"Exile_Bike_QuadBike_Nato",
		"Exile_Bike_QuadBike_Csat",
		"C_Quadbike_01_F",
		"B_Quadbike_01_F",
		"O_Quadbike_01_F",
		"I_Quadbike_01_F",
		"I_G_Quadbike_01_F",
		"B_G_Quadbike_01_F",
		"O_G_Quadbike_01_F",
		"C_G_Quadbike_01_F",
		"L_Quadbike_01_F",
		"B_T_Quadbike_01_F",
		"O_T_Quadbike_01_ghex_F",
		"C_Quadbike_01_black_F",
		"C_Quadbike_01_blue_F",
		"C_Quadbike_01_red_F",
		"C_Quadbike_01_white_F",
		"I_E_Quadbike_01_F",
		"dbo_CIV_new_bike",
		"dbo_CIV_ol_bike",
		"Exile_Bike_MountainBike",
		"Exile_Bike_OldBike"
	];

{
	if (typeOf vehicle _x in _blacklistArray) then
	{
		_vehicleID = _x getvariable ['ExileDatabaseID',0];
		_owner = _x getvariable ['ExileOwnerUID',0];
		if !(_owner isEqualTo "Reborn_Persistent") then {
			deleteVehicle _x;
			format ["deleteVehicle:%1", _vehicleID] call ExileServer_system_database_query_fireAndForget;
			diag_log format["BSF BLACKLIST - DELETED: %1 BELONGING TO %2",(typeOf vehicle _x),_owner];
		};
	};
} forEach vehicles;



