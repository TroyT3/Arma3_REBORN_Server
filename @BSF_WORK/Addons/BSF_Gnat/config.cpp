////////////////////////////////////////////////////////////////////
//DeRap: config.bin
//Produced from mikero's Dos Tools Dll version 9.36
//https://mikero.bytex.digital/Downloads
//'now' is Tue Mar 05 15:32:43 2024 : 'file' last modified on Sat Sep 26 22:20:50 2020
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class BSF_Gnat
	{
		units[] = {"BSF_Gnat_01"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Air_F","A3_Data_F"};
	};
};
class CfgVehicles
{
	class Helicopter;
	class Helicopter_Base_F: Helicopter
	{
		class Turrets;
		class HitPoints;
	};
	class Helicopter_Base_H: Helicopter_Base_F
	{
		class EventHandlers;
		class Turrets: Turrets
		{
			class CopilotTurret;
		};
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitFuel;
			class HitEngine;
			class HitAvionics;
			class HitVRotor;
			class HitHRotor;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
		};
		class AnimationSources;
		class ViewOptics;
		class RotorLibHelicopterProperties;
		class Reflectors
		{
			class Right
			{
				color[] = {7000,7500,10000};
				ambient[] = {70,75,100};
				intensity = 50;
				size = 1;
				innerAngle = 15;
				outerAngle = 65;
				coneFadeCoef = 10;
				position = "Light_R_pos";
				direction = "Light_R_dir";
				hitpoint = "Light_R_hitpoint";
				selection = "Light_R";
				useFlare = 1;
				flareSize = 10;
				flareMaxDistance = 250;
				dayLight = 0;
			};
			class Left
			{
				color[] = {7000,7500,10000};
				ambient[] = {70,75,100};
				intensity = 50;
				size = 1;
				innerAngle = 15;
				outerAngle = 65;
				coneFadeCoef = 10;
				position = "Light_L_pos";
				direction = "Light_L_dir";
				hitpoint = "Light_L_hitpoint";
				selection = "Light_L";
				useFlare = 1;
				flareSize = 10;
				flareMaxDistance = 250;
				dayLight = 0;
			};
		};
	};
	class BSF_Gnat_base_F: Helicopter_Base_H
	{
		armor = 10;
		altFullForce = 2000;
		altNoForce = 6000;
		maxSpeed = 200;
		maxFordingDepth = 0.65;
		mainBladeRadius = 3;
		liftForceCoef = 1.5;
		bodyFrictionCoef = 0.3;
		cyclicAsideForceCoef = 1.3;
		cyclicForwardForceCoef = 1;
		backRotorForceCoef = 1;
		accuracy = 1;
		displayName = "BSF Gnat";
		model = "\BSF_Community_Addon\addons\BSF_Gnat\BSF_Gnat.p3d";
		icon = "\A3\Air_F\Heli_Light_02\Data\UI\Map_Heli_Light_02_CA.paa";
		picture = "\BSF_Community_Addon\addons\BSF_Gnat\data\ui\icon_BSF_Gnat_01_ca.paa";
		driverAction = "Chopperlight_L_Static_H";
		driverInAction = "";
		selectionDamage = "zbytek";
		driverOpticsModel = "";
		driverOpticsEffect[] = {};
		driverOpticsColor[] = {0};
		precisegetinout = 0;
		getInAction = "GetInLow";
		// getInAction = "GetInLow";
		getOutAction = "GetOutLow";
		cargoGetInAction[] = {""};
		cargoGetOutAction[] = {""};
		transportSoldier = 0;
		cargoIsCoDriver[] = {0};

		memoryPointsGetInDriver = "pos driver";
		memoryPointsGetInDriverDir = "pos driver dir";
// P:\a3\Data_f\proxies\Heli_Light_02\Pilot
// P:\a3\Data_f\proxies\Heli_Attack_01\Pilot
		memoryPointsGetInCargo = "";
		memoryPointsGetInCargoDir = "";
		hideWeaponsCargo = 1;
		cargoProxyIndexes[] = {};
		maximumLoad = 100;
		cargoCanEject = 1;
		driverCanEject = 1;
		LockDetectionSystem = "8 + 4";
		incomingMissileDetectionSystem = 16;
		weapons[] = {};
		magazines[] = {};
		rotorBlur = "RotorBlur";
		memoryPointDriverOptics = "";
		occludeSoundsWhenIn = 0.962341;
		obstructSoundsWhenIn = 0.916228;
		attenuationEffectType = "OpenHeliAttenuation";
		soundGeneralCollision1[] = {"BSF_Community_Addon\addons\BSF_Gnat\data\sounds\Heli_coll_default_int_1",1,1,100};
		soundGeneralCollision2[] = {"BSF_Community_Addon\addons\BSF_Gnat\data\sounds\Heli_coll_default_int_2",1,1,100};
		soundGeneralCollision3[] = {"BSF_Community_Addon\addons\BSF_Gnat\data\sounds\Heli_coll_default_int_3",1,1,100};
		soundCrashes[] = {"soundGeneralCollision1",0.33,"soundGeneralCollision2",0.33,"soundGeneralCollision3",0.33};
		soundLandCrashes[] = {"emptySound",0};
		soundBuildingCrash[] = {"soundGeneralCollision1",1,"soundGeneralCollision2",1,"soundGeneralCollision3",1};
		soundArmorCrash[] = {"soundGeneralCollision1",1,"soundGeneralCollision2",1,"soundGeneralCollision3",1};
		soundWoodCrash[] = {"soundGeneralCollision1",1,"soundGeneralCollision2",1,"soundGeneralCollision3",1};
		soundBushCollision1[] = {"BSF_Community_Addon\addons\BSF_Gnat\data\sounds\Heli_coll_bush_int_1",1,1,100};
		soundBushCollision2[] = {"BSF_Community_Addon\addons\BSF_Gnat\data\sounds\Heli_coll_bush_int_2",1,1,100};
		soundBushCollision3[] = {"BSF_Community_Addon\addons\BSF_Gnat\data\sounds\Heli_coll_bush_int_3",1,1,100};
		soundBushCrash[] = {"soundBushCollision1",0.33,"soundBushCollision2",0.33,"soundBushCollision3",0.33};
		soundWaterCollision1[] = {"BSF_Community_Addon\addons\BSF_Gnat\data\sounds\Heli_coll_water_ext_1",1,1,100};
		soundWaterCollision2[] = {"BSF_Community_Addon\addons\BSF_Gnat\data\sounds\Heli_coll_water_ext_2",1,1,100};
		soundWaterCrashes[] = {"soundWaterCollision1",0.5,"soundWaterCollision2",0.5};
		soundGetIn[] = {"BSF_Community_Addon\addons\BSF_Gnat\data\sounds\heli_get_in2",0.56234133,1};
		soundGetOut[] = {"BSF_Community_Addon\addons\BSF_Gnat\data\sounds\heli_get_out2",0.7943282,1,20};
		soundDammage[] = {"BSF_Community_Addon\addons\BSF_Gnat\data\sounds\Heli_crash_default_ext_1",3.1622777,1};
		soundEngineOnInt[] = {"BSF_Community_Addon\addons\BSF_Gnat\data\sounds\Int_Start",0.4,1};
		soundEngineOnExt[] = {"BSF_Community_Addon\addons\BSF_Gnat\data\sounds\Ext_Start",0.7943282,1,600};
		soundEngineOffInt[] = {"BSF_Community_Addon\addons\BSF_Gnat\data\sounds\Ext_Off",0.4,1};
		soundEngineOffExt[] = {"BSF_Community_Addon\addons\BSF_Gnat\data\sounds\Ext_Off",0.7943282,1,600};
		soundLocked[] = {"BSF_Community_Addon\addons\BSF_Gnat\data\sounds\opfor_lock_1",1,1};
		soundIncommingMissile[] = {"BSF_Community_Addon\addons\BSF_Gnat\data\sounds\opfor_lock_2",0.7,1};
		rotorDamageInt[] = {"BSF_Community_Addon\addons\BSF_Gnat\data\sounds\heli_damage_rotor_int_open_1",1,1};
		rotorDamageOut[] = {"BSF_Community_Addon\addons\BSF_Gnat\data\sounds\heli_damage_rotor_ext_1",2.5118864,1,150};
		rotorDamage[] = {"rotorDamageInt","rotorDamageOut"};
		tailDamageInt[] = {"BSF_Community_Addon\addons\BSF_Gnat\data\sounds\heli_damage_tail",1,1};
		tailDamageOut[] = {"BSF_Community_Addon\addons\BSF_Gnat\data\sounds\heli_damage_tail",1,1,300};
		tailDamage[] = {"tailDamageInt","tailDamageOut"};
		landingSoundInt0[] = {"BSF_Community_Addon\addons\BSF_Gnat\data\sounds\landing_skids_int1_open",1,1,100};
		landingSoundInt1[] = {"BSF_Community_Addon\addons\BSF_Gnat\data\sounds\landing_skids_int1_open",1,1,100};
		landingSoundInt[] = {"landingSoundInt0",0.5,"landingSoundInt1",0.5};
		landingSoundOut0[] = {"BSF_Community_Addon\addons\BSF_Gnat\data\sounds\landing_skids_ext1",1.7782794,1,100};
		landingSoundOut1[] = {"BSF_Community_Addon\addons\BSF_Gnat\data\sounds\landing_skids_ext1",1.7782794,1,100};
		landingSoundOut[] = {"landingSoundOut0",0.5,"landingSoundOut1",0.5};
		slingCargoAttach0[] = {"BSF_Community_Addon\addons\BSF_Gnat\data\sounds\SL_engineDownEndINT",1,1};
		slingCargoAttach1[] = {"BSF_Community_Addon\addons\BSF_Gnat\data\sounds\SL_1hookLock",1,1,80};
		slingCargoAttach[] = {"slingCargoAttach0","slingCargoAttach1"};
		slingCargoDetach0[] = {"BSF_Community_Addon\addons\BSF_Gnat\data\sounds\SL_engineUpEndINT",1,1};
		slingCargoDetach1[] = {"BSF_Community_Addon\addons\BSF_Gnat\data\sounds\SL_1hookUnlock",1,1,80};
		slingCargoDetach[] = {"slingCargoDetach0","slingCargoDetach1"};
		slingCargoDetachAir0[] = {"BSF_Community_Addon\addons\BSF_Gnat\data\sounds\SL_unhook_air_int",1,1};
		slingCargoDetachAir1[] = {"BSF_Community_Addon\addons\BSF_Gnat\data\sounds\SL_unhook_air_ext",1,1,80};
		slingCargoDetachAir[] = {"slingCargoDetach0","slingCargoDetach1"};
		slingCargoRopeBreak0[] = {"BSF_Community_Addon\addons\BSF_Gnat\data\sounds\SL_rope_break_int",1,1};
		slingCargoRopeBreak1[] = {"BSF_Community_Addon\addons\BSF_Gnat\data\sounds\SL_rope_break_ext",1,1,80};
		slingCargoRopeBreak[] = {"slingCargoDetach0","slingCargoDetach1"};
		class Sounds
		{
			class EngineExt
			{
				sound[] = {"BSF_Community_Addon\addons\BSF_Gnat\data\sounds\Ext_Idle",1,1,400};
				frequency = "rotorSpeed*(1+rotorThrust/6)*0.9";
				volume = "camPos*((rotorSpeed-0.72)*4)";
			};
			class RotorExt
			{
				sound[] = {"BSF_Community_Addon\addons\BSF_Gnat\data\sounds\Ext_Low",0.5,1,500};
				frequency = "1.3*(rotorSpeed factor [0.3, 0.7]) * (rotorSpeed factor [0.3, 1]) * (1 - rotorThrust/6)";
				volume = "camPos*(0 max (rotorSpeed-0.1))*(1 + rotorThrust)";
			};
			class RotorSwist
			{
				sound[] = {"BSF_Community_Addon\addons\BSF_Gnat\data\sounds\Close",0.5,1,600};
				frequency = "rotorSpeed*(1+rotorThrust/6)*0.9";
				volume = "camPos * (gmeterZ factor[1.5, 2.5]) + (gmeterZ factor[0.5, -0.5]) * (rotorThrust factor [0.7, 0.9])";
			};
			class EngineInt
			{
				sound[] = {"BSF_Community_Addon\addons\BSF_Gnat\data\sounds\Ext_Idle",1,1};
				frequency = "rotorSpeed*(1+rotorThrust/6)*0.9";
				volume = "(1-camPos)*((rotorSpeed-0.75)*4)";
			};
			class RotorInt
			{
				sound[] = {"BSF_Community_Addon\addons\BSF_Gnat\data\sounds\Ext_Low",0.501187,1};
				frequency = "1*(rotorSpeed factor [0.3, 0.7]) * (rotorSpeed factor [0.3, 1]) * (1 - rotorThrust/6)";
				volume = "(1-camPos)*(0 max (rotorSpeed-0.1))*(1 + rotorThrust)*0.9";
			};
			class RotorBench
			{
				sound[] = {"BSF_Community_Addon\addons\BSF_Gnat\data\sounds\Ext_Low",1.2589254,1,500};
				frequency = "1.3*(rotorSpeed factor [0.3, 0.7]) * (rotorSpeed factor [0.3, 1]) * (1 - rotorThrust/6)";
				volume = "(playerPos factor [3.9, 4]) * (1 - camPos) * (rotorSpeed factor [0.3, 1]) * (1 + rotorThrust) * 0.4";
				cone[] = {1.6,3.14,1.6,0.95};
			};
			class EngineBench
			{
				sound[] = {"BSF_Community_Addon\addons\BSF_Gnat\data\sounds\Ext_Idle",1.2818383,1};
				frequency = "rotorSpeed*(1+rotorThrust/6)*0.9";
				volume = "(playerPos factor [3.9, 4]) * (1 - camPos) * (0 max (rotorSpeed-0.4))";
			};
			class WindBench
			{
				sound[] = {"BSF_Community_Addon\addons\BSF_Gnat\data\sounds\wind_open_out",0.56234133,1,50};
				frequency = 1;
				volume = "4 * (playerPos factor [3.9, 4]) * (1 - camPos) * ((speed factor[0, 30]) + (speed factor[0, -30]))";
			};
			class TransmissionDamageExt_phase1
			{
				sound[] = {"BSF_Community_Addon\addons\BSF_Gnat\data\sounds\heli_damage_transmission_ext_1",1,1,150};
				frequency = "0.66 + rotorSpeed / 3";
				volume = "camPos * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
			};
			class TransmissionDamageExt_phase2
			{
				sound[] = {"BSF_Community_Addon\addons\BSF_Gnat\data\sounds\heli_damage_transmission_ext_2",1,1,150};
				frequency = "0.66 + rotorSpeed / 3";
				volume = "camPos * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
			};
			class TransmissionDamageInt_phase1
			{
				sound[] = {"BSF_Community_Addon\addons\BSF_Gnat\data\sounds\heli_damage_transmission_Ext_1",1,1,150};
				frequency = "0.66 + rotorSpeed / 3";
				volume = "(1 - camPos) * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
			};
			class TransmissionDamageInt_phase2
			{
				sound[] = {"BSF_Community_Addon\addons\BSF_Gnat\data\sounds\heli_damage_transmission_Ext_2",1,1,150};
				frequency = "0.66 + rotorSpeed / 3";
				volume = "(1 - camPos) * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
			};
			class RotorNoiseExt
			{
				sound[] = {"BSF_Community_Addon\addons\BSF_Gnat\data\sounds\Rotor_Fast",0.5,1,200};
				frequency = 1.5;
				volume = "(camPos*(rotorSpeed factor [0.6, 0.85]))";
				cone[] = {1.6,3.14,2,0.95};
			};
			class FarDistance
			{
				sound[] = {"BSF_Community_Addon\addons\BSF_Gnat\data\sounds\Distance",1.5,1.1,1100};
				frequency = "rotorSpeed";
				volume = "2 * camPos * (0 max (rotorSpeed-0.4))";
			};
			class FarDistanceRotor
			{
				sound[] = {"BSF_Community_Addon\addons\BSF_Gnat\data\sounds\tail_rotor",1.5,1,1000};
				frequency = "rotorSpeed";
				volume = "2 * camPos * (0 max (rotorSpeed-0.4))";
			};
			class damageAlarmInt
			{
				sound[] = {"BSF_Community_Addon\addons\BSF_Gnat\data\sounds\heli_alarm_bluefor",0.31622776,1};
				frequency = 1;
				volume = "engineOn * (1 - camPos) * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0.0, 0.001])";
			};
			class damageAlarmExt
			{
				sound[] = {"BSF_Community_Addon\addons\BSF_Gnat\data\sounds\heli_alarm_bluefor",0.2238721,1,20};
				frequency = 1;
				volume = "engineOn * camPos * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0, 0.001])";
			};
			class rotorLowAlarmInt
			{
				sound[] = {"BSF_Community_Addon\addons\BSF_Gnat\data\sounds\heli_alarm_rotor_low",0.31622776,1};
				frequency = 1;
				volume = "engineOn * (1 - camPos) * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
			};
			class rotorLowAlarmExt
			{
				sound[] = {"BSF_Community_Addon\addons\BSF_Gnat\data\sounds\heli_alarm_rotor_low",0.2238721,1,20};
				frequency = 1;
				volume = "engineOn * camPos * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
			};
			class scrubLandInt
			{
				sound[] = {"BSF_Community_Addon\addons\BSF_Gnat\data\sounds\scrubLandExt",1,1,100};
				frequency = 1;
				volume = "2 * (1-camPos) * (scrubLand factor[0.02, 0.05])";
			};
			class scrubLandExt
			{
				sound[] = {"BSF_Community_Addon\addons\BSF_Gnat\data\sounds\scrubLandExt",1,1,100};
				frequency = 1;
				volume = "camPos * (scrubLand factor[0.02, 0.05])";
			};
			class scrubBuildingInt
			{
				sound[] = {"BSF_Community_Addon\addons\BSF_Gnat\data\sounds\scrubBuildingExt",1,1,100};
				frequency = 1;
				volume = "2 * (1 - camPos) * (scrubBuilding factor[0.02, 0.05])";
			};
			class scrubBuildingExt
			{
				sound[] = {"BSF_Community_Addon\addons\BSF_Gnat\data\sounds\scrubBuildingExt",1,1,100};
				frequency = 1;
				volume = "camPos * (scrubBuilding factor[0.02, 0.05])";
			};
			class scrubTreeInt
			{
				sound[] = {"BSF_Community_Addon\addons\BSF_Gnat\data\sounds\scrubTreeExt",1,1,100};
				frequency = 1;
				volume = "(1 - camPos) * ((scrubTree) factor [0, 0.01])";
			};
			class scrubTreeExt
			{
				sound[] = {"BSF_Community_Addon\addons\BSF_Gnat\data\sounds\scrubTreeExt",1,1,100};
				frequency = 1;
				volume = "camPos * ((scrubTree) factor [0, 0.01])";
			};
			class RainExt
			{
				sound[] = {"BSF_Community_Addon\addons\BSF_Gnat\data\sounds\rain1_ext",1,1,100};
				frequency = 1;
				volume = "camPos * (rain - rotorSpeed/2) * 2";
			};
			class RainInt
			{
				sound[] = {"BSF_Community_Addon\addons\BSF_Gnat\data\sounds\rain1_ext",1,1,100};
				frequency = 1;
				volume = "(1-camPos)*(rain - rotorSpeed/2)*2";
			};
			class SlingLoadDownExt
			{
				sound[] = {"BSF_Community_Addon\addons\BSF_Gnat\data\sounds\SL_engineDownEXT",1,1,500};
				frequency = 1;
				volume = "camPos*(slingLoadActive factor [0,-1])";
			};
			class SlingLoadUpExt
			{
				sound[] = {"BSF_Community_Addon\addons\BSF_Gnat\data\sounds\SL_engineUpEXT",1,1,500};
				frequency = 1;
				volume = "camPos*(slingLoadActive factor [0,1])";
			};
			class SlingLoadDownInt
			{
				sound[] = {"BSF_Community_Addon\addons\BSF_Gnat\data\sounds\SL_engineDownEXT",1,1,500};
				frequency = 1;
				volume = "(1-camPos)*(slingLoadActive factor [0,-1])";
			};
			class SlingLoadUpInt
			{
				sound[] = {"BSF_Community_Addon\addons\BSF_Gnat\data\sounds\SL_engineUpEXT",1,1,500};
				frequency = 1;
				volume = "(1-camPos)*(slingLoadActive factor [0,1])";
			};
			class WindInt
			{
				sound[] = {"BSF_Community_Addon\addons\BSF_Gnat\data\sounds\wind_open_out",1,1,50};
				frequency = 1;
				volume = "(1-camPos)*(speed factor[5, 50])*(speed factor[5, 50])";
			};
			class WindLateralMovementInt
			{
				sound[] = {"BSF_Community_Addon\addons\BSF_Gnat\data\sounds\wind_lateral_open_int",1,1,50};
				frequency = 1;
				volume = "(1-camPos)*lateralMovement*((speed factor [5,40]) + (speed factor [-5,-40]))";
			};
			class GStress
			{
				sound[] = {"BSF_Community_Addon\addons\BSF_Gnat\data\sounds\vehicle_stress2b",0.11622776,1,50};
				frequency = 1;
				volume = "engineOn * (1-camPos) * ((gmeterZ factor[1.5, 2.5]) + (gmeterZ factor[0.5, -0.5]))";
			};
		};
		class SoundsExt
		{
			class SoundEvents{};
			class Sounds
			{
				class EngineExt
				{
					sound[] = {"BSF_Community_Addon\addons\BSF_Gnat\data\sounds\Ext_Idle",1,1,400};
					frequency = "1.3*rotorSpeed";
					volume = "2 * camPos * (0 max (rotorSpeed-0.4))";
				};
				class RotorExt
				{
					sound[] = {"BSF_Community_Addon\addons\BSF_Gnat\data\sounds\Ext_Low",0.5,1,500};
					frequency = "1.3*(rotorSpeed factor [0.3, 0.7]) * (rotorSpeed factor [0.3, 1]) * (1 - rotorThrust/6)";
					volume = "camPos * (rotorSpeed factor [0.3, 1]) * (1 + rotorThrust)";
				};
				class RotorSwist
				{
					sound[] = {"BSF_Community_Addon\addons\BSF_Gnat\data\sounds\Close",0.75,1,600};
					frequency = "1.3*rotorspeed";
					volume = "camPos * (gmeterZ factor[1.5, 2.5]) + (gmeterZ factor[0.5, -0.5]) * (rotorThrust factor [0.7, 0.9])";
				};
				class EngineInt
				{
					sound[] = {"BSF_Community_Addon\addons\BSF_Gnat\data\sounds\Ext_Idle",1,1};
					frequency = "rotorSpeed";
					volume = "(1-camPos)*2*(0 max (rotorSpeed-0.4))";
				};
				class RotorInt
				{
					sound[] = {"BSF_Community_Addon\addons\BSF_Gnat\data\sounds\Ext_Low",0.5,1};
					frequency = "(rotorSpeed factor [0.3, 0.7]) * (rotorSpeed factor [0.3, 1]) * (1 - rotorThrust/6)";
					volume = "(1 - camPos) * (rotorSpeed factor [0.3, 0.7]) * (1 + rotorThrust) * 0.7";
				};
				class RotorBench
				{
					sound[] = {"BSF_Community_Addon\addons\BSF_Gnat\data\sounds\Ext_Low",1.2589254,1,500};
					frequency = "1.3*(rotorSpeed factor [0.3, 0.7]) * (rotorSpeed factor [0.3, 1]) * (1 - rotorThrust/6)";
					volume = "(playerPos factor [3.9, 4]) * (1 - camPos) * (rotorSpeed factor [0.3, 1]) * (1 + rotorThrust) * 0.4";
					cone[] = {1.6,3.14,1.6,0.95};
				};
				class EngineBench
				{
					sound[] = {"BSF_Community_Addon\addons\BSF_Gnat\data\sounds\Ext_Idle",1.2818383,1};
					frequency = "1.3*rotorSpeed";
					volume = "(playerPos factor [3.9, 4]) * (1 - camPos) * (0 max (rotorSpeed-0.4))";
				};
				class WindBench
				{
					sound[] = {"BSF_Community_Addon\addons\BSF_Gnat\data\sounds\wind_open_out",0.56234133,1,50};
					frequency = 1;
					volume = "4 * (playerPos factor [3.9, 4]) * (1 - camPos) * ((speed factor[0, 30]) + (speed factor[0, -30]))";
				};
				class TransmissionDamageExt_phase1
				{
					sound[] = {"BSF_Community_Addon\addons\BSF_Gnat\data\sounds\heli_damage_transmission_ext_1",1,1,150};
					frequency = "0.66 + rotorSpeed / 3";
					volume = "camPos * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
				};
				class TransmissionDamageExt_phase2
				{
					sound[] = {"BSF_Community_Addon\addons\BSF_Gnat\data\sounds\heli_damage_transmission_ext_2",1,1,150};
					frequency = "0.66 + rotorSpeed / 3";
					volume = "camPos * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
				};
				class TransmissionDamageInt_phase1
				{
					sound[] = {"BSF_Community_Addon\addons\BSF_Gnat\data\sounds\heli_damage_transmission_ext_1",1,1,150};
					frequency = "0.66 + rotorSpeed / 3";
					volume = "(1 - camPos) * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
				};
				class TransmissionDamageInt_phase2
				{
					sound[] = {"BSF_Community_Addon\addons\BSF_Gnat\data\sounds\heli_damage_transmission_ext_2",1,1,150};
					frequency = "0.66 + rotorSpeed / 3";
					volume = "(1 - camPos) * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
				};
				class RotorNoiseExt
				{
					sound[] = {"BSF_Community_Addon\addons\BSF_Gnat\data\sounds\Rotor_Fast",1.2818383,1,200};
					frequency = 1;
					volume = "(camPos*(rotorSpeed factor [0.6, 0.85]))";
					cone[] = {1.6,3.14,2,0.95};
				};
				class FarDistance
				{
					sound[] = {"BSF_Community_Addon\addons\BSF_Gnat\data\sounds\Distance",2.0918384,1.1,1100};
					frequency = "rotorSpeed";
					volume = "2 * camPos * (0 max (rotorSpeed-0.4))";
				};
				class FarDistanceRotor
				{
					sound[] = {"BSF_Community_Addon\addons\BSF_Gnat\data\sounds\tail_rotor",2.0918384,1,1000};
					frequency = "rotorSpeed";
					volume = "2 * camPos * (0 max (rotorSpeed-0.4))";
				};
				class damageAlarmInt
				{
					sound[] = {"BSF_Community_Addon\addons\BSF_Gnat\data\sounds\heli_alarm_bluefor",0.31622776,1};
					frequency = 1;
					volume = "engineOn * (1 - camPos) * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0.0, 0.001])";
				};
				class damageAlarmExt
				{
					sound[] = {"BSF_Community_Addon\addons\BSF_Gnat\data\sounds\heli_alarm_bluefor",0.2238721,1,20};
					frequency = 1;
					volume = "engineOn * camPos * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0, 0.001])";
				};
				class rotorLowAlarmInt
				{
					sound[] = {"BSF_Community_Addon\addons\BSF_Gnat\data\sounds\heli_alarm_rotor_low",0.31622776,1};
					frequency = 1;
					volume = "engineOn * (1 - camPos) * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
				};
				class rotorLowAlarmExt
				{
					sound[] = {"BSF_Community_Addon\addons\BSF_Gnat\data\sounds\heli_alarm_rotor_low",0.2238721,1,20};
					frequency = 1;
					volume = "engineOn * camPos * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
				};
				class scrubLandInt
				{
					sound[] = {"BSF_Community_Addon\addons\BSF_Gnat\data\sounds\scrubLandInt_open",1,1,100};
					frequency = 1;
					volume = "2 * (1-camPos) * (scrubLand factor[0.02, 0.05])";
				};
				class scrubLandExt
				{
					sound[] = {"BSF_Community_Addon\addons\BSF_Gnat\data\sounds\scrubLandExt",1,1,100};
					frequency = 1;
					volume = "camPos * (scrubLand factor[0.02, 0.05])";
				};
				class scrubBuildingInt
				{
					sound[] = {"BSF_Community_Addon\addons\BSF_Gnat\data\sounds\scrubBuildingExt",1,1,100};
					frequency = 1;
					volume = "2 * (1 - camPos) * (scrubBuilding factor[0.02, 0.05])";
				};
				class scrubBuildingExt
				{
					sound[] = {"BSF_Community_Addon\addons\BSF_Gnat\data\sounds\scrubBuildingExt",1,1,100};
					frequency = 1;
					volume = "camPos * (scrubBuilding factor[0.02, 0.05])";
				};
				class scrubTreeInt
				{
					sound[] = {"BSF_Community_Addon\addons\BSF_Gnat\data\sounds\scrubTreeExt",1,1,100};
					frequency = 1;
					volume = "(1 - camPos) * ((scrubTree) factor [0, 0.01])";
				};
				class scrubTreeExt
				{
					sound[] = {"BSF_Community_Addon\addons\BSF_Gnat\data\sounds\scrubTreeExt",1,1,100};
					frequency = 1;
					volume = "camPos * ((scrubTree) factor [0, 0.01])";
				};
				class RainExt
				{
					sound[] = {"BSF_Community_Addon\addons\BSF_Gnat\data\sounds\rain1_ext",1,1,100};
					frequency = 1;
					volume = "camPos * (rain - rotorSpeed/2) * 2";
				};
				class RainInt
				{
					sound[] = {"BSF_Community_Addon\addons\BSF_Gnat\data\sounds\rain1_ext",1,1,100};
					frequency = 1;
					volume = "(1-camPos)*(rain - rotorSpeed/2)*2";
				};
				class SlingLoadDownExt
				{
					sound[] = {"BSF_Community_Addon\addons\BSF_Gnat\data\sounds\SL_engineDownEXT",1,1,500};
					frequency = 1;
					volume = "camPos*(slingLoadActive factor [0,-1])";
				};
				class SlingLoadUpExt
				{
					sound[] = {"BSF_Community_Addon\addons\BSF_Gnat\data\sounds\SL_engineUpEXT",1,1,500};
					frequency = 1;
					volume = "camPos*(slingLoadActive factor [0,1])";
				};
				class SlingLoadDownInt
				{
					sound[] = {"BSF_Community_Addon\addons\BSF_Gnat\data\sounds\SL_engineDownEXT",1,1,500};
					frequency = 1;
					volume = "(1-camPos)*(slingLoadActive factor [0,-1])";
				};
				class SlingLoadUpInt
				{
					sound[] = {"BSF_Community_Addon\addons\BSF_Gnat\data\sounds\SL_engineUpEXT",1,1,500};
					frequency = 1;
					volume = "(1-camPos)*(slingLoadActive factor [0,1])";
				};
				class WindInt
				{
					sound[] = {"BSF_Community_Addon\addons\BSF_Gnat\data\sounds\wind_open_out",1.1220185,1,50};
					frequency = 1;
					volume = "(1-camPos)*(speed factor[5, 50])*(speed factor[5, 50])";
				};
				class WindLateralMovementInt
				{
					sound[] = {"BSF_Community_Addon\addons\BSF_Gnat\data\sounds\wind_lateral_open_int",1.9952624,1,50};
					frequency = 1;
					volume = "(1-camPos)*lateralMovement*((speed factor [5,40]) + (speed factor [-5,-40]))";
				};
				class GStress
				{
					sound[] = {"BSF_Community_Addon\addons\BSF_Gnat\data\sounds\vehicle_stress2b",0.11622776,1,50};
					frequency = 1;
					volume = "engineOn * (1-camPos) * ((gmeterZ factor[1.5, 2.5]) + (gmeterZ factor[0.5, -0.5]))";
				};
			};
		};
		hiddenSelections[] = {"camo1"};
		aggregateReflectors[] = {{"Left","Right"}};
	};
	class BSF_Gnat_01: BSF_Gnat_base_F
	{
		displayName = "BSF Gnat";
		scope = 2;
		scopeCurator = 2;
		side = 3;
		faction = "CIV_F";
		accuracy = 1.5;
		weapons[] = {};
		magazines[] = {};
		hiddenSelectionsTextures[] = {"\BSF_Community_Addon\addons\BSF_Gnat\data\BSF_Gnat_01_CO.paa"};
		class CopilotTurret;
		class Components;
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
				class Components: Components{};
			};
		};
	};
};
class cfgMods
{
	author = "Troy - BS-Free";
	timepacked = "1123392174";
};
