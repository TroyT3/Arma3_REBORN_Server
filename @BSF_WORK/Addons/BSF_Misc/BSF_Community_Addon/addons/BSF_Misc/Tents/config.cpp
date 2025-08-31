////////////////////////////////////////////////////////////////////
//DeRap: Tents\config.bin
//Produced from mikero's Dos Tools Dll version 9.98
//https://mikero.bytex.digital/Downloads
//'now' is Wed Jul 09 20:03:48 2025 : 'file' last modified on Sat Jul 05 11:43:12 2025
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class BSF_Misc_Tents
	{
		requiredVersion = 1.92;
		requiredAddons[] = {"BSF_Misc","exile_assets","exile_client","BSF_Buildings","a3_data_f","BSF_Misc_Paint","A3_Structures_F_Enoch_Military_Camps"};
		units[] = {"BSF_TentOpen_Base","BSF_TentOpen_AAF","BSF_TentOpen_CSAT","BSF_TentOpen_Desert","BSF_TentOpen_White","BSF_TentOpen_IDAP","BSF_TentOpen_LDF","BSF_TentOpen_Yellow","BSF_TentOuter_Base","BSF_TentOuter_AAF","BSF_TentOuter_CSAT","BSF_TentOuter_Desert","BSF_TentOuter_White","BSF_TentOuter_IDAP","BSF_TentOuter_LDF","BSF_TentOuter_Yellow","BSF_TentInner_Base","BSF_TentInner_AAF","BSF_TentInner_CSAT","BSF_TentInner_Desert","BSF_TentInner_White","BSF_TentInner_IDAP","BSF_TentInner_LDF","BSF_TentInner_Yellow","BSF_TentConnectOpen_Base","BSF_TentConnectOpen_AAF","BSF_TentConnectOpen_CSAT","BSF_TentConnectOpen_Desert","BSF_TentConnectOpen_White","BSF_TentConnectOpen_LDF","BSF_TentConnectOpen_Yellow","BSF_TentConnectClosed_Base","BSF_TentConnectClosed_AAF","BSF_TentConnectClosed_CSAT","BSF_TentConnectClosed_Desert","BSF_TentConnectClosed_White","BSF_TentConnectClosed_LDF","BSF_TentConnectClosed_Yellow","BSF_TentConnectCross_Base","BSF_TentConnectCross_AAF","BSF_TentConnectCross_CSAT","BSF_TentConnectCross_Desert","BSF_TentConnectCross_White","BSF_TentConnectCross_LDF","BSF_TentConnectCross_Yellow","BSF_TentDecon_Base","BSF_TentDecon_AAF","BSF_TentDecon_CSAT","BSF_TentDecon_Desert","BSF_TentDecon_White","BSF_TentDecon_IDAP","BSF_TentDecon_LDF","BSF_TentDecon_Yellow","BSF_TentOpen_Base_Preview","BSF_TentOpen_AAF_Preview","BSF_TentOpen_CSAT_Preview","BSF_TentOpen_Desert_Preview","BSF_TentOpen_White_Preview","BSF_TentOpen_IDAP_Preview","BSF_TentOpen_LDF_Preview","BSF_TentOpen_Yellow_Preview","BSF_TentOuter_Base_Preview","BSF_TentOuter_AAF_Preview","BSF_TentOuter_CSAT_Preview","BSF_TentOuter_Desert_Preview","BSF_TentOuter_White_Preview","BSF_TentOuter_IDAP_Preview","BSF_TentOuter_LDF_Preview","BSF_TentOuter_Yellow_Preview","BSF_TentInner_Base_Preview","BSF_TentInner_AAF_Preview","BSF_TentInner_CSAT_Preview","BSF_TentInner_Desert_Preview","BSF_TentInner_White_Preview","BSF_TentInner_IDAP_Preview","BSF_TentInner_LDF_Preview","BSF_TentInner_Yellow_Preview","BSF_TentConnectOpen_Base_Preview","BSF_TentConnectOpen_AAF_Preview","BSF_TentConnectOpen_CSAT_Preview","BSF_TentConnectOpen_Desert_Preview","BSF_TentConnectOpen_White_Preview","BSF_TentConnectOpen_LDF_Preview","BSF_TentConnectOpen_Yellow_Preview","BSF_TentConnectClosed_Base_Preview","BSF_TentConnectClosed_AAF_Preview","BSF_TentConnectClosed_CSAT_Preview","BSF_TentConnectClosed_Desert_Preview","BSF_TentConnectClosed_White_Preview","BSF_TentConnectClosed_LDF_Preview","BSF_TentConnectClosed_Yellow_Preview","BSF_TentConnectCross_Base_Preview","BSF_TentConnectCross_AAF_Preview","BSF_TentConnectCross_CSAT_Preview","BSF_TentConnectCross_Desert_Preview","BSF_TentConnectCross_White_Preview","BSF_TentConnectCross_LDF_Preview","BSF_TentConnectCross_Yellow_Preview","BSF_TentDecon_Base_Preview","BSF_TentDecon_AAF_Preview","BSF_TentDecon_CSAT_Preview","BSF_TentDecon_Desert_Preview","BSF_TentDecon_White_Preview","BSF_TentDecon_IDAP_Preview","BSF_TentDecon_LDF_Preview","BSF_TentDecon_Yellow_Preview"};
		weapons[] = {};
		magazines[] = {"BSF_TentOpen_AAF_Kit","BSF_TentOpen_CSAT_Kit","BSF_TentOpen_Desert_Kit","BSF_TentOpen_White_Kit","BSF_TentOpen_IDAP_Kit","BSF_TentOpen_LDF_Kit","BSF_TentOpen_Yellow_Kit","BSF_TentOuter_AAF_Kit","BSF_TentOuter_CSAT_Kit","BSF_TentOuter_Desert_Kit","BSF_TentOuter_White_Kit","BSF_TentOuter_IDAP_Kit","BSF_TentOuter_LDF_Kit","BSF_TentOuter_Yellow_Kit","BSF_TentInner_AAF_Kit","BSF_TentInner_CSAT_Kit","BSF_TentInner_Desert_Kit","BSF_TentInner_White_Kit","BSF_TentInner_LDF_Kit","BSF_TentInner_Yellow_Kit","BSF_TentDecon_AAF_Kit","BSF_TentDecon_CSAT_Kit","BSF_TentDecon_Desert_Kit","BSF_TentDecon_White_Kit","BSF_TentDecon_IDAP_Kit","BSF_TentDecon_LDF_Kit","BSF_TentDecon_Yellow_Kit","BSF_TentConnectOpen_AAF_Kit","BSF_TentConnectOpen_CSAT_Kit","BSF_TentConnectOpen_Desert_Kit","BSF_TentConnectOpen_White_Kit","BSF_TentConnectOpen_LDF_Kit","BSF_TentConnectOpen_Yellow_Kit","BSF_TentConnectClosed_AAF_Kit","BSF_TentConnectClosed_CSAT_Kit","BSF_TentConnectClosed_Desert_Kit","BSF_TentConnectClosed_White_Kit","BSF_TentConnectClosed_LDF_Kit","BSF_TentConnectClosed_Yellow_Kit","BSF_TentConnectCross_AAF_Kit","BSF_TentConnectCross_CSAT_Kit","BSF_TentConnectCross_Desert_Kit","BSF_TentConnectCross_White_Kit","BSF_TentConnectCross_LDF_Kit","BSF_TentConnectCross_Yellow_Kit"};
		ammo[] = {};
	};
};
class AbstractConstruction;
class CfgConstruction
{
	class AbstractTent: AbstractConstruction
	{
		class SnapPositions
		{
			BSF_ConToFieldTent_01[] = {0,7,-1.29};
			BSF_ConToFieldTent_02[] = {0,-7,-1.29};
			BSF_FieldTentToCon_01[] = {0,7,-1.29};
			BSF_FieldTentToCon_02[] = {0,-7,-1.29};
			BSF_Connector_Tent_01[] = {0,4,-1.29};
			BSF_Connector_Tent_02[] = {0,-4,-1.29};
			BSF_Connector_Tent_03[] = {4,0,-1.29};
			BSF_Connector_Tent_04[] = {-4,0,-1.29};
		};
		class SnapObjects
		{
			class BSF_TentOpen_Base
			{
				positions[] = {"BSF_ConToFieldTent_01","BSF_ConToFieldTent_02"};
			};
			class BSF_TentOpen_AAF: BSF_TentOpen_Base{};
			class BSF_TentOpen_CSAT: BSF_TentOpen_Base{};
			class BSF_TentOpen_Desert: BSF_TentOpen_Base{};
			class BSF_TentOpen_White: BSF_TentOpen_Base{};
			class BSF_TentOpen_IDAP: BSF_TentOpen_Base{};
			class BSF_TentOpen_LDF: BSF_TentOpen_Base{};
			class BSF_TentOpen_Yellow: BSF_TentOpen_Base{};
			class BSF_TentConnectOpen_Base
			{
				positions[] = {"BSF_Connector_Tent_01","BSF_Connector_Tent_02","BSF_FieldTentToCon_01","BSF_FieldTentToCon_02"};
			};
			class BSF_TentConnectOpen_AAF: BSF_TentConnectOpen_Base{};
			class BSF_TentConnectOpen_CSAT: BSF_TentConnectOpen_Base{};
			class BSF_TentConnectOpen_Desert: BSF_TentConnectOpen_Base{};
			class BSF_TentConnectOpen_White: BSF_TentConnectOpen_Base{};
			class BSF_TentConnectOpen_LDF: BSF_TentConnectOpen_Base{};
			class BSF_TentConnectOpen_Yellow: BSF_TentConnectOpen_Base{};
			class BSF_TentConnectClosed_AAF: BSF_TentConnectOpen_Base{};
			class BSF_TentConnectClosed_CSAT: BSF_TentConnectOpen_Base{};
			class BSF_TentConnectClosed_Desert: BSF_TentConnectOpen_Base{};
			class BSF_TentConnectClosed_White: BSF_TentConnectOpen_Base{};
			class BSF_TentConnectClosed_LDF: BSF_TentConnectOpen_Base{};
			class BSF_TentConnectClosed_Yellow: BSF_TentConnectOpen_Base{};
			class BSF_TentConnectCross_Base
			{
				positions[] = {"BSF_Connector_Tent_01","BSF_Connector_Tent_02","BSF_Connector_Tent_03","BSF_Connector_Tent_04","BSF_FieldTentToCon_01","BSF_FieldTentToCon_02"};
			};
			class BSF_TentConnectCross_AAF: BSF_TentConnectCross_Base{};
			class BSF_TentConnectCross_CSAT: BSF_TentConnectCross_Base{};
			class BSF_TentConnectCross_Desert: BSF_TentConnectCross_Base{};
			class BSF_TentConnectCross_White: BSF_TentConnectCross_Base{};
			class BSF_TentConnectCross_LDF: BSF_TentConnectCross_Base{};
			class BSF_TentConnectCross_Yellow: BSF_TentConnectCross_Base{};
		};
	};
	class BSF_TentOpen_AAF_Construction: AbstractTent
	{
		staticObject = "BSF_TentOpen_AAF";
		previewObject = "BSF_TentOpen_AAF_Preview";
		kitMagazine = "BSF_TentOpen_AAF_Kit";
		refundObjects[] = {"BSF_TentOpen_AAF_Kit"};
		allowDuplicateSnap = 1;
		materialType = 10;
	};
	class BSF_TentOpen_CSAT_Construction: AbstractTent
	{
		staticObject = "BSF_TentOpen_CSAT";
		previewObject = "BSF_TentOpen_CSAT_Preview";
		kitMagazine = "BSF_TentOpen_CSAT_Kit";
		refundObjects[] = {"BSF_TentOpen_CSAT_Kit"};
		materialType = 10;
	};
	class BSF_TentOpen_Desert_Construction: AbstractTent
	{
		staticObject = "BSF_TentOpen_Desert";
		previewObject = "BSF_TentOpen_Desert_Preview";
		kitMagazine = "BSF_TentOpen_Desert_Kit";
		refundObjects[] = {"BSF_TentOpen_Desert_Kit"};
		materialType = 10;
	};
	class BSF_TentOpen_White_Construction: AbstractTent
	{
		staticObject = "BSF_TentOpen_White";
		previewObject = "BSF_TentOpen_White_Preview";
		kitMagazine = "BSF_TentOpen_White_Kit";
		refundObjects[] = {"BSF_TentOpen_White_Kit"};
		materialType = 10;
	};
	class BSF_TentOpen_IDAP_Construction: AbstractTent
	{
		staticObject = "BSF_TentOpen_IDAP";
		previewObject = "BSF_TentOpen_IDAP_Preview";
		kitMagazine = "BSF_TentOpen_IDAP_Kit";
		refundObjects[] = {"BSF_TentOpen_IDAP_Kit"};
		materialType = 10;
	};
	class BSF_TentOpen_LDF_Construction: AbstractTent
	{
		staticObject = "BSF_TentOpen_LDF";
		previewObject = "BSF_TentOpen_LDF_Preview";
		kitMagazine = "BSF_TentOpen_LDF_Kit";
		refundObjects[] = {"BSF_TentOpen_LDF_Kit"};
		materialType = 10;
	};
	class BSF_TentOpen_Yellow_Construction: AbstractTent
	{
		staticObject = "BSF_TentOpen_Yellow";
		previewObject = "BSF_TentOpen_Yellow_Preview";
		kitMagazine = "BSF_TentOpen_Yellow_Kit";
		refundObjects[] = {"BSF_TentOpen_Yellow_Kit"};
		materialType = 10;
	};
	class BSF_TentOuter_AAF_Construction: AbstractConstruction
	{
		staticObject = "BSF_TentOuter_AAF";
		previewObject = "BSF_TentOuter_AAF_Preview";
		kitMagazine = "BSF_TentOuter_AAF_Kit";
		refundObjects[] = {"BSF_TentOuter_AAF_Kit"};
		materialType = 10;
	};
	class BSF_TentOuter_CSAT_Construction: AbstractConstruction
	{
		staticObject = "BSF_TentOuter_CSAT";
		previewObject = "BSF_TentOuter_CSAT_Preview";
		kitMagazine = "BSF_TentOuter_CSAT_Kit";
		refundObjects[] = {"BSF_TentOuter_CSAT_Kit"};
		materialType = 10;
	};
	class BSF_TentOuter_Desert_Construction: AbstractConstruction
	{
		staticObject = "BSF_TentOuter_Desert";
		previewObject = "BSF_TentOuter_Desert_Preview";
		kitMagazine = "BSF_TentOuter_Desert_Kit";
		refundObjects[] = {"BSF_TentOuter_Desert_Kit"};
		materialType = 10;
	};
	class BSF_TentOuter_White_Construction: AbstractConstruction
	{
		staticObject = "BSF_TentOuter_White";
		previewObject = "BSF_TentOuter_White_Preview";
		kitMagazine = "BSF_TentOuter_White_Kit";
		refundObjects[] = {"BSF_TentOuter_White_Kit"};
		materialType = 10;
	};
	class BSF_TentOuter_IDAP_Construction: AbstractConstruction
	{
		staticObject = "BSF_TentOuter_IDAP";
		previewObject = "BSF_TentOuter_IDAP_Preview";
		kitMagazine = "BSF_TentOuter_IDAP_Kit";
		refundObjects[] = {"BSF_TentOuter_IDAP_Kit"};
		materialType = 10;
	};
	class BSF_TentOuter_LDF_Construction: AbstractConstruction
	{
		staticObject = "BSF_TentOuter_LDF";
		previewObject = "BSF_TentOuter_LDF_Preview";
		kitMagazine = "BSF_TentOuter_LDF_Kit";
		refundObjects[] = {"BSF_TentOuter_LDF_Kit"};
		materialType = 10;
	};
	class BSF_TentOuter_Yellow_Construction: AbstractConstruction
	{
		staticObject = "BSF_TentOuter_Yellow";
		previewObject = "BSF_TentOuter_Yellow_Preview";
		kitMagazine = "BSF_TentOuter_Yellow_Kit";
		refundObjects[] = {"BSF_TentOuter_Yellow_Kit"};
		materialType = 10;
	};
	class BSF_TentInner_AAF_Construction: AbstractConstruction
	{
		staticObject = "BSF_TentInner_AAF";
		previewObject = "BSF_TentInner_AAF_Preview";
		kitMagazine = "BSF_TentInner_AAF_Kit";
		refundObjects[] = {"BSF_TentInner_AAF_Kit"};
		materialType = 10;
	};
	class BSF_TentInner_CSAT_Construction: AbstractConstruction
	{
		staticObject = "BSF_TentInner_CSAT";
		previewObject = "BSF_TentInner_CSAT_Preview";
		kitMagazine = "BSF_TentInner_CSAT_Kit";
		refundObjects[] = {"BSF_TentInner_CSAT_Kit"};
		materialType = 10;
	};
	class BSF_TentInner_Desert_Construction: AbstractConstruction
	{
		staticObject = "BSF_TentInner_Desert";
		previewObject = "BSF_TentInner_Desert_Preview";
		kitMagazine = "BSF_TentInner_Desert_Kit";
		refundObjects[] = {"BSF_TentInner_Desert_Kit"};
		materialType = 10;
	};
	class BSF_TentInner_White_Construction: AbstractConstruction
	{
		staticObject = "BSF_TentInner_White";
		previewObject = "BSF_TentInner_White_Preview";
		kitMagazine = "BSF_TentInner_White_Kit";
		refundObjects[] = {"BSF_TentInner_White_Kit"};
		materialType = 10;
	};
	class BSF_TentInner_LDF_Construction: AbstractConstruction
	{
		staticObject = "BSF_TentInner_LDF";
		previewObject = "BSF_TentInner_LDF_Preview";
		kitMagazine = "BSF_TentInner_LDF_Kit";
		refundObjects[] = {"BSF_TentInner_LDF_Kit"};
		materialType = 10;
	};
	class BSF_TentInner_Yellow_Construction: AbstractConstruction
	{
		staticObject = "BSF_TentInner_Yellow";
		previewObject = "BSF_TentInner_Yellow_Preview";
		kitMagazine = "BSF_TentInner_Yellow_Kit";
		refundObjects[] = {"BSF_TentInner_Yellow_Kit"};
		materialType = 10;
	};
	class BSF_TentDecon_AAF_Construction: AbstractConstruction
	{
		staticObject = "BSF_TentDecon_AAF";
		previewObject = "BSF_TentDecon_AAF_Preview";
		kitMagazine = "BSF_TentDecon_AAF_Kit";
		refundObjects[] = {"BSF_TentDecon_AAF_Kit"};
		materialType = 10;
	};
	class BSF_TentDecon_CSAT_Construction: AbstractConstruction
	{
		staticObject = "BSF_TentDecon_CSAT";
		previewObject = "BSF_TentDecon_CSAT_Preview";
		kitMagazine = "BSF_TentDecon_CSAT_Kit";
		refundObjects[] = {"BSF_TentDecon_CSAT_Kit"};
		materialType = 10;
	};
	class BSF_TentDecon_Desert_Construction: AbstractConstruction
	{
		staticObject = "BSF_TentDecon_Desert";
		previewObject = "BSF_TentDecon_Desert_Preview";
		kitMagazine = "BSF_TentDecon_Desert_Kit";
		refundObjects[] = {"BSF_TentDecon_Desert_Kit"};
		materialType = 10;
	};
	class BSF_TentDecon_White_Construction: AbstractConstruction
	{
		staticObject = "BSF_TentDecon_White";
		previewObject = "BSF_TentDecon_White_Preview";
		kitMagazine = "BSF_TentDecon_White_Kit";
		refundObjects[] = {"BSF_TentDecon_White_Kit"};
		materialType = 10;
	};
	class BSF_TentDecon_IDAP_Construction: AbstractConstruction
	{
		staticObject = "BSF_TentDecon_IDAP";
		previewObject = "BSF_TentDecon_IDAP_Preview";
		kitMagazine = "BSF_TentDecon_IDAP_Kit";
		refundObjects[] = {"BSF_TentDecon_IDAP_Kit"};
		materialType = 10;
	};
	class BSF_TentDecon_LDF_Construction: AbstractConstruction
	{
		staticObject = "BSF_TentDecon_LDF";
		previewObject = "BSF_TentDecon_LDF_Preview";
		kitMagazine = "BSF_TentDecon_LDF_Kit";
		refundObjects[] = {"BSF_TentDecon_LDF_Kit"};
		materialType = 10;
	};
	class BSF_TentDecon_Yellow_Construction: AbstractConstruction
	{
		staticObject = "BSF_TentDecon_Yellow";
		previewObject = "BSF_TentDecon_Yellow_Preview";
		kitMagazine = "BSF_TentDecon_Yellow_Kit";
		refundObjects[] = {"BSF_TentDecon_Yellow_Kit"};
		materialType = 10;
	};
	class BSF_TentConnectOpen_AAF_Construction: AbstractTent
	{
		staticObject = "BSF_TentConnectOpen_AAF";
		previewObject = "BSF_TentConnectOpen_AAF_Preview";
		kitMagazine = "BSF_TentConnectOpen_AAF_Kit";
		refundObjects[] = {"BSF_TentConnectOpen_AAF_Kit"};
		allowDuplicateSnap = 1;
		materialType = 10;
	};
	class BSF_TentConnectOpen_CSAT_Construction: AbstractTent
	{
		staticObject = "BSF_TentConnectOpen_CSAT";
		previewObject = "BSF_TentConnectOpen_CSAT_Preview";
		kitMagazine = "BSF_TentConnectOpen_CSAT_Kit";
		refundObjects[] = {"BSF_TentConnectOpen_CSAT_Kit"};
		materialType = 10;
	};
	class BSF_TentConnectOpen_Desert_Construction: AbstractTent
	{
		staticObject = "BSF_TentConnectOpen_Desert";
		previewObject = "BSF_TentConnectOpen_Desert_Preview";
		kitMagazine = "BSF_TentConnectOpen_Desert_Kit";
		refundObjects[] = {"BSF_TentConnectOpen_Desert_Kit"};
		materialType = 10;
	};
	class BSF_TentConnectOpen_White_Construction: AbstractTent
	{
		staticObject = "BSF_TentConnectOpen_White";
		previewObject = "BSF_TentConnectOpen_White_Preview";
		kitMagazine = "BSF_TentConnectOpen_White_Kit";
		refundObjects[] = {"BSF_TentConnectOpen_White_Kit"};
		materialType = 10;
	};
	class BSF_TentConnectOpen_LDF_Construction: AbstractTent
	{
		staticObject = "BSF_TentConnectOpen_LDF";
		previewObject = "BSF_TentConnectOpen_LDF_Preview";
		kitMagazine = "BSF_TentConnectOpen_LDF_Kit";
		refundObjects[] = {"BSF_TentConnectOpen_LDF_Kit"};
		materialType = 10;
	};
	class BSF_TentConnectOpen_Yellow_Construction: AbstractTent
	{
		staticObject = "BSF_TentConnectOpen_Yellow";
		previewObject = "BSF_TentConnectOpen_Yellow_Preview";
		kitMagazine = "BSF_TentConnectOpen_Yellow_Kit";
		refundObjects[] = {"BSF_TentConnectOpen_Yellow_Kit"};
		materialType = 10;
	};
	class BSF_TentConnectClosed_AAF_Construction: AbstractTent
	{
		staticObject = "BSF_TentConnectClosed_AAF";
		previewObject = "BSF_TentConnectClosed_AAF_Preview";
		kitMagazine = "BSF_TentConnectClosed_AAF_Kit";
		refundObjects[] = {"BSF_TentConnectClosed_AAF_Kit"};
		allowDuplicateSnap = 1;
		materialType = 10;
	};
	class BSF_TentConnectClosed_CSAT_Construction: AbstractTent
	{
		staticObject = "BSF_TentConnectClosed_CSAT";
		previewObject = "BSF_TentConnectClosed_CSAT_Preview";
		kitMagazine = "BSF_TentConnectClosed_CSAT_Kit";
		refundObjects[] = {"BSF_TentConnectClosed_CSAT_Kit"};
		materialType = 10;
	};
	class BSF_TentConnectClosed_Desert_Construction: AbstractTent
	{
		staticObject = "BSF_TentConnectClosed_Desert";
		previewObject = "BSF_TentConnectClosed_Desert_Preview";
		kitMagazine = "BSF_TentConnectClosed_Desert_Kit";
		refundObjects[] = {"BSF_TentConnectClosed_Desert_Kit"};
		materialType = 10;
	};
	class BSF_TentConnectClosed_White_Construction: AbstractTent
	{
		staticObject = "BSF_TentConnectClosed_White";
		previewObject = "BSF_TentConnectClosed_White_Preview";
		kitMagazine = "BSF_TentConnectClosed_White_Kit";
		refundObjects[] = {"BSF_TentConnectClosed_White_Kit"};
		materialType = 10;
	};
	class BSF_TentConnectClosed_LDF_Construction: AbstractTent
	{
		staticObject = "BSF_TentConnectClosed_LDF";
		previewObject = "BSF_TentConnectClosed_LDF_Preview";
		kitMagazine = "BSF_TentConnectClosed_LDF_Kit";
		refundObjects[] = {"BSF_TentConnectClosed_LDF_Kit"};
		materialType = 10;
	};
	class BSF_TentConnectClosed_Yellow_Construction: AbstractTent
	{
		staticObject = "BSF_TentConnectClosed_Yellow";
		previewObject = "BSF_TentConnectClosed_Yellow_Preview";
		kitMagazine = "BSF_TentConnectClosed_Yellow_Kit";
		refundObjects[] = {"BSF_TentConnectClosed_Yellow_Kit"};
		materialType = 10;
	};
	class BSF_TentConnectCross_AAF_Construction: AbstractTent
	{
		staticObject = "BSF_TentConnectCross_AAF";
		previewObject = "BSF_TentConnectCross_AAF_Preview";
		kitMagazine = "BSF_TentConnectCross_AAF_Kit";
		refundObjects[] = {"BSF_TentConnectCross_AAF_Kit"};
		allowDuplicateSnap = 1;
		materialType = 10;
	};
	class BSF_TentConnectCross_CSAT_Construction: AbstractTent
	{
		staticObject = "BSF_TentConnectCross_CSAT";
		previewObject = "BSF_TentConnectCross_CSAT_Preview";
		kitMagazine = "BSF_TentConnectCross_CSAT_Kit";
		refundObjects[] = {"BSF_TentConnectCross_CSAT_Kit"};
		materialType = 10;
	};
	class BSF_TentConnectCross_Desert_Construction: AbstractTent
	{
		staticObject = "BSF_TentConnectCross_Desert";
		previewObject = "BSF_TentConnectCross_Desert_Preview";
		kitMagazine = "BSF_TentConnectCross_Desert_Kit";
		refundObjects[] = {"BSF_TentConnectCross_Desert_Kit"};
		materialType = 10;
	};
	class BSF_TentConnectCross_White_Construction: AbstractTent
	{
		staticObject = "BSF_TentConnectCross_White";
		previewObject = "BSF_TentConnectCross_White_Preview";
		kitMagazine = "BSF_TentConnectCross_White_Kit";
		refundObjects[] = {"BSF_TentConnectCross_White_Kit"};
		materialType = 10;
	};
	class BSF_TentConnectCross_LDF_Construction: AbstractTent
	{
		staticObject = "BSF_TentConnectCross_LDF";
		previewObject = "BSF_TentConnectCross_LDF_Preview";
		kitMagazine = "BSF_TentConnectCross_LDF_Kit";
		refundObjects[] = {"BSF_TentConnectCross_LDF_Kit"};
		materialType = 10;
	};
	class BSF_TentConnectCross_Yellow_Construction: AbstractTent
	{
		staticObject = "BSF_TentConnectCross_Yellow";
		previewObject = "BSF_TentConnectCross_Yellow_Preview";
		kitMagazine = "BSF_TentConnectCross_Yellow_Kit";
		refundObjects[] = {"BSF_TentConnectCross_Yellow_Kit"};
		materialType = 10;
	};
};
class CfgMagazines
{
	class Exile_AbstractItem;
	class Exile_AbstractItem_Interaction_Constructing;
	class BSF_TentOpen_AAF_Kit: Exile_AbstractItem
	{
		scope = 2;
		mass = 10;
		displayName = "Field Tent, Digital";
		descriptionShort = "A large tent suitable to house a low-life like you.";
		model = "\BSF_Community_Addon\addons\bsf_misc\BSF_Crate\BSF_Crate.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Tents\data\icon_BSF_TentField1_AAF_CA.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class BSF_TentOpen_CSAT_Kit: Exile_AbstractItem
	{
		scope = 2;
		mass = 10;
		displayName = "Field Tent, CSAT";
		descriptionShort = "A large tent suitable to house a low-life like you.";
		model = "\BSF_Community_Addon\addons\bsf_misc\BSF_Crate\BSF_Crate.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Tents\data\icon_BSF_TentField1_CSAT_CA.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class BSF_TentOpen_Desert_Kit: Exile_AbstractItem
	{
		scope = 2;
		mass = 10;
		displayName = "Field Tent, Desert";
		descriptionShort = "A large tent suitable to house a low-life like you.";
		model = "\BSF_Community_Addon\addons\bsf_misc\BSF_Crate\BSF_Crate.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Tents\data\icon_BSF_TentField1_NATO_CA.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class BSF_TentOpen_White_Kit: Exile_AbstractItem
	{
		scope = 2;
		mass = 10;
		displayName = "Field Tent, White";
		descriptionShort = "A large tent suitable to house a low-life like you.";
		model = "\BSF_Community_Addon\addons\bsf_misc\BSF_Crate\BSF_Crate.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Tents\data\icon_BSF_TentField1_White_CA.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class BSF_TentOpen_IDAP_Kit: Exile_AbstractItem
	{
		scope = 2;
		mass = 10;
		displayName = "Field Tent, IDAP";
		descriptionShort = "A large tent suitable to house a low-life like you.";
		model = "\BSF_Community_Addon\addons\bsf_misc\BSF_Crate\BSF_Crate.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Tents\data\icon_BSF_TentField1_IDAP_CA.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class BSF_TentOpen_LDF_Kit: Exile_AbstractItem
	{
		scope = 2;
		mass = 10;
		displayName = "Field Tent, Woodland";
		descriptionShort = "A large tent suitable to house a low-life like you.";
		model = "\BSF_Community_Addon\addons\bsf_misc\BSF_Crate\BSF_Crate.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Tents\data\icon_BSF_TentField1_LDF_CA.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class BSF_TentOpen_Yellow_Kit: Exile_AbstractItem
	{
		scope = 2;
		mass = 10;
		displayName = "Field Tent, Woodland";
		descriptionShort = "A large tent suitable to house a low-life like you.";
		model = "\BSF_Community_Addon\addons\bsf_misc\BSF_Crate\BSF_Crate.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Tents\data\icon_BSF_TentField1_Yellow_CA.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class BSF_TentOuter_AAF_Kit: Exile_AbstractItem
	{
		scope = 2;
		mass = 10;
		displayName = "Field Tent, Outer, Digital";
		descriptionShort = "A large tent suitable to house a low-life like you.";
		model = "\BSF_Community_Addon\addons\bsf_misc\BSF_Crate\BSF_Crate.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Tents\data\icon_BSF_TentOuter_AAF_CA.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class BSF_TentOuter_CSAT_Kit: Exile_AbstractItem
	{
		scope = 2;
		mass = 10;
		displayName = "Field Tent, Outer, CSAT";
		descriptionShort = "A large tent suitable to house a low-life like you.";
		model = "\BSF_Community_Addon\addons\bsf_misc\BSF_Crate\BSF_Crate.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Tents\data\icon_BSF_TentOuter_CSAT_CA.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class BSF_TentOuter_Desert_Kit: Exile_AbstractItem
	{
		scope = 2;
		mass = 10;
		displayName = "Field Tent, Outer, Desert";
		descriptionShort = "A large tent suitable to house a low-life like you.";
		model = "\BSF_Community_Addon\addons\bsf_misc\BSF_Crate\BSF_Crate.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Tents\data\icon_BSF_TentOuter_NATO_CA.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class BSF_TentOuter_White_Kit: Exile_AbstractItem
	{
		scope = 2;
		mass = 10;
		displayName = "Field Tent, Outer, White";
		descriptionShort = "A large tent suitable to house a low-life like you.";
		model = "\BSF_Community_Addon\addons\bsf_misc\BSF_Crate\BSF_Crate.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Tents\data\icon_BSF_TentOuter_White_CA.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class BSF_TentOuter_IDAP_Kit: Exile_AbstractItem
	{
		scope = 2;
		mass = 10;
		displayName = "Field Tent, Outer, IDAP";
		descriptionShort = "A large tent suitable to house a low-life like you.";
		model = "\BSF_Community_Addon\addons\bsf_misc\BSF_Crate\BSF_Crate.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Tents\data\icon_BSF_TentOuter_IDAP_CA.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class BSF_TentOuter_LDF_Kit: Exile_AbstractItem
	{
		scope = 2;
		mass = 10;
		displayName = "Field Tent, Outer, Woodland";
		descriptionShort = "A large tent suitable to house a low-life like you.";
		model = "\BSF_Community_Addon\addons\bsf_misc\BSF_Crate\BSF_Crate.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Tents\data\icon_BSF_TentOuter_LDF_CA.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class BSF_TentOuter_Yellow_Kit: Exile_AbstractItem
	{
		scope = 2;
		mass = 10;
		displayName = "Field Tent, Outer, Yellow";
		descriptionShort = "A large tent suitable to house a low-life like you.";
		model = "\BSF_Community_Addon\addons\bsf_misc\BSF_Crate\BSF_Crate.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Tents\data\icon_BSF_TentOuter_Yellow_CA.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class BSF_TentInner_AAF_Kit: Exile_AbstractItem
	{
		scope = 2;
		mass = 10;
		displayName = "Field Tent, Inner, Digital";
		descriptionShort = "A large tent suitable to house a low-life like you.";
		model = "\BSF_Community_Addon\addons\bsf_misc\BSF_Crate\BSF_Crate.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Tents\data\icon_BSF_TentInner_AAF_CA.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class BSF_TentInner_CSAT_Kit: Exile_AbstractItem
	{
		scope = 2;
		mass = 10;
		displayName = "Field Tent, Inner, CSAT";
		descriptionShort = "A large tent suitable to house a low-life like you.";
		model = "\BSF_Community_Addon\addons\bsf_misc\BSF_Crate\BSF_Crate.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Tents\data\icon_BSF_TentInner_CSAT_CA.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class BSF_TentInner_Desert_Kit: Exile_AbstractItem
	{
		scope = 2;
		mass = 10;
		displayName = "Field Tent, Inner, Desert";
		descriptionShort = "A large tent suitable to house a low-life like you.";
		model = "\BSF_Community_Addon\addons\bsf_misc\BSF_Crate\BSF_Crate.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Tents\data\icon_BSF_TentInner_NATO_CA.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class BSF_TentInner_White_Kit: Exile_AbstractItem
	{
		scope = 2;
		mass = 10;
		displayName = "Field Tent, Inner, White";
		descriptionShort = "A large tent suitable to house a low-life like you.";
		model = "\BSF_Community_Addon\addons\bsf_misc\BSF_Crate\BSF_Crate.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Tents\data\icon_BSF_TentInner_White_CA.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class BSF_TentInner_LDF_Kit: Exile_AbstractItem
	{
		scope = 2;
		mass = 10;
		displayName = "Field Tent, Inner, Woodland";
		descriptionShort = "A large tent suitable to house a low-life like you.";
		model = "\BSF_Community_Addon\addons\bsf_misc\BSF_Crate\BSF_Crate.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Tents\data\icon_BSF_TentInner_LDF_CA.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class BSF_TentInner_Yellow_Kit: Exile_AbstractItem
	{
		scope = 2;
		mass = 10;
		displayName = "Field Tent, Inner, Yellow";
		descriptionShort = "A large tent suitable to house a low-life like you.";
		model = "\BSF_Community_Addon\addons\bsf_misc\BSF_Crate\BSF_Crate.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Tents\data\icon_BSF_TentInner_Yellow_CA.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class BSF_TentDecon_AAF_Kit: Exile_AbstractItem
	{
		scope = 2;
		mass = 10;
		displayName = "Field Tent, Digital";
		descriptionShort = "A decontamination tent. Maybe you can deal with those fleas";
		model = "\BSF_Community_Addon\addons\bsf_misc\BSF_Crate\BSF_Crate.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Tents\data\icon_BSF_TentDecon_AAF_CA.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class BSF_TentDecon_CSAT_Kit: Exile_AbstractItem
	{
		scope = 2;
		mass = 10;
		displayName = "Field Tent, CSAT";
		descriptionShort = "A decontamination tent. Maybe you can deal with those fleas";
		model = "\BSF_Community_Addon\addons\bsf_misc\BSF_Crate\BSF_Crate.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Tents\data\icon_BSF_TentDecon_CSAT_CA.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class BSF_TentDecon_Desert_Kit: Exile_AbstractItem
	{
		scope = 2;
		mass = 10;
		displayName = "Field Tent, Desert";
		descriptionShort = "A decontamination tent. Maybe you can deal with those fleas";
		model = "\BSF_Community_Addon\addons\bsf_misc\BSF_Crate\BSF_Crate.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Tents\data\icon_BSF_TentDecon_NATO_CA.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class BSF_TentDecon_White_Kit: Exile_AbstractItem
	{
		scope = 2;
		mass = 10;
		displayName = "Field Tent, White";
		descriptionShort = "A decontamination tent. Maybe you can deal with those fleas";
		model = "\BSF_Community_Addon\addons\bsf_misc\BSF_Crate\BSF_Crate.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Tents\data\icon_BSF_TentDecon_White_CA.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class BSF_TentDecon_IDAP_Kit: Exile_AbstractItem
	{
		scope = 2;
		mass = 10;
		displayName = "Field Tent, IDAP";
		descriptionShort = "A decontamination tent. Maybe you can deal with those fleas";
		model = "\BSF_Community_Addon\addons\bsf_misc\BSF_Crate\BSF_Crate.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Tents\data\icon_BSF_TentDecon_White_CA.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class BSF_TentDecon_LDF_Kit: Exile_AbstractItem
	{
		scope = 2;
		mass = 10;
		displayName = "Field Tent, Woodland";
		descriptionShort = "A decontamination tent. Maybe you can deal with those fleas";
		model = "\BSF_Community_Addon\addons\bsf_misc\BSF_Crate\BSF_Crate.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Tents\data\icon_BSF_TentDecon_LDF_CA.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class BSF_TentDecon_Yellow_Kit: Exile_AbstractItem
	{
		scope = 2;
		mass = 10;
		displayName = "Field Tent, Woodland";
		descriptionShort = "A decontamination tent. Maybe you can deal with those fleas";
		model = "\BSF_Community_Addon\addons\bsf_misc\BSF_Crate\BSF_Crate.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Tents\data\icon_BSF_TentDecon_LDF_CA.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class BSF_TentConnectOpen_AAF_Kit: Exile_AbstractItem
	{
		scope = 2;
		mass = 10;
		displayName = "Field Tent Connector, Open, Digital";
		descriptionShort = "Now you can make mazes for your hamster!";
		model = "\BSF_Community_Addon\addons\bsf_misc\BSF_Crate\BSF_Crate.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Tents\data\icon_BSF_TentConOpen_AAF_CA.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class BSF_TentConnectOpen_CSAT_Kit: Exile_AbstractItem
	{
		scope = 2;
		mass = 10;
		displayName = "Field Tent Connector, Open, CSAT";
		descriptionShort = "Now you can make mazes for your hamster!";
		model = "\BSF_Community_Addon\addons\bsf_misc\BSF_Crate\BSF_Crate.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Tents\data\icon_BSF_TentConOpen_CSAT_CA.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class BSF_TentConnectOpen_Desert_Kit: Exile_AbstractItem
	{
		scope = 2;
		mass = 10;
		displayName = "Field Tent Connector, Open, Desert";
		descriptionShort = "Now you can make mazes for your hamster!";
		model = "\BSF_Community_Addon\addons\bsf_misc\BSF_Crate\BSF_Crate.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Tents\data\icon_BSF_TentConOpen_NATO_CA.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class BSF_TentConnectOpen_White_Kit: Exile_AbstractItem
	{
		scope = 2;
		mass = 10;
		displayName = "Field Tent Connector, Open, White";
		descriptionShort = "Now you can make mazes for your hamster!";
		model = "\BSF_Community_Addon\addons\bsf_misc\BSF_Crate\BSF_Crate.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Tents\data\icon_BSF_TentConOpen_White_CA.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class BSF_TentConnectOpen_LDF_Kit: Exile_AbstractItem
	{
		scope = 2;
		mass = 10;
		displayName = "Field Tent Connector, Open, Woodland";
		descriptionShort = "Now you can make mazes for your hamster!";
		model = "\BSF_Community_Addon\addons\bsf_misc\BSF_Crate\BSF_Crate.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Tents\data\icon_BSF_TentConOpen_LDF_CA.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class BSF_TentConnectOpen_Yellow_Kit: Exile_AbstractItem
	{
		scope = 2;
		mass = 10;
		displayName = "Field Tent Connector, Open, Yellow";
		descriptionShort = "Now you can make mazes for your hamster!";
		model = "\BSF_Community_Addon\addons\bsf_misc\BSF_Crate\BSF_Crate.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Tents\data\icon_BSF_TentConOpen_Yellow_CA.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class BSF_TentConnectClosed_AAF_Kit: Exile_AbstractItem
	{
		scope = 2;
		mass = 10;
		displayName = "Field Tent Connector, Closed, Digital";
		descriptionShort = "Now you can make mazes for your hamster!";
		model = "\BSF_Community_Addon\addons\bsf_misc\BSF_Crate\BSF_Crate.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Tents\data\icon_BSF_TentConClosed_AAF_CA.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class BSF_TentConnectClosed_CSAT_Kit: Exile_AbstractItem
	{
		scope = 2;
		mass = 10;
		displayName = "Field Tent Connector, Closed, CSAT";
		descriptionShort = "Now you can make mazes for your hamster!";
		model = "\BSF_Community_Addon\addons\bsf_misc\BSF_Crate\BSF_Crate.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Tents\data\icon_BSF_TentConClosed_CSAT_CA.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class BSF_TentConnectClosed_Desert_Kit: Exile_AbstractItem
	{
		scope = 2;
		mass = 10;
		displayName = "Field Tent Connector, Closed, Desert";
		descriptionShort = "Now you can make mazes for your hamster!";
		model = "\BSF_Community_Addon\addons\bsf_misc\BSF_Crate\BSF_Crate.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Tents\data\icon_BSF_TentConClosed_NATO_CA.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class BSF_TentConnectClosed_White_Kit: Exile_AbstractItem
	{
		scope = 2;
		mass = 10;
		displayName = "Field Tent Connector, Closed, White";
		descriptionShort = "Now you can make mazes for your hamster!";
		model = "\BSF_Community_Addon\addons\bsf_misc\BSF_Crate\BSF_Crate.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Tents\data\icon_BSF_TentConClosed_White_CA.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class BSF_TentConnectClosed_LDF_Kit: Exile_AbstractItem
	{
		scope = 2;
		mass = 10;
		displayName = "Field Tent Connector, Closed, Woodland";
		descriptionShort = "Now you can make mazes for your hamster!";
		model = "\BSF_Community_Addon\addons\bsf_misc\BSF_Crate\BSF_Crate.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Tents\data\icon_BSF_TentConClosed_LDF_CA.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class BSF_TentConnectClosed_Yellow_Kit: Exile_AbstractItem
	{
		scope = 2;
		mass = 10;
		displayName = "Field Tent Connector, Closed, Yellow";
		descriptionShort = "Now you can make mazes for your hamster!";
		model = "\BSF_Community_Addon\addons\bsf_misc\BSF_Crate\BSF_Crate.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Tents\data\icon_BSF_TentConClosed_Yellow_CA.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class BSF_TentConnectCross_AAF_Kit: Exile_AbstractItem
	{
		scope = 2;
		mass = 10;
		displayName = "Field Tent Connector, Closed, Digital";
		descriptionShort = "Now you can make mazes for your hamster!";
		model = "\BSF_Community_Addon\addons\bsf_misc\BSF_Crate\BSF_Crate.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Tents\data\icon_BSF_TentConCross_AAF_CA.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class BSF_TentConnectCross_CSAT_Kit: Exile_AbstractItem
	{
		scope = 2;
		mass = 10;
		displayName = "Field Tent Connector, Closed, CSAT";
		descriptionShort = "Now you can make mazes for your hamster!";
		model = "\BSF_Community_Addon\addons\bsf_misc\BSF_Crate\BSF_Crate.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Tents\data\icon_BSF_TentConCross_CSAT_CA.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class BSF_TentConnectCross_Desert_Kit: Exile_AbstractItem
	{
		scope = 2;
		mass = 10;
		displayName = "Field Tent Connector, Closed, Desert";
		descriptionShort = "Now you can make mazes for your hamster!";
		model = "\BSF_Community_Addon\addons\bsf_misc\BSF_Crate\BSF_Crate.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Tents\data\icon_BSF_TentConCross_NATO_CA.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class BSF_TentConnectCross_White_Kit: Exile_AbstractItem
	{
		scope = 2;
		mass = 10;
		displayName = "Field Tent Connector, Closed, White";
		descriptionShort = "Now you can make mazes for your hamster!";
		model = "\BSF_Community_Addon\addons\bsf_misc\BSF_Crate\BSF_Crate.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Tents\data\icon_BSF_TentConCross_White_CA.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class BSF_TentConnectCross_LDF_Kit: Exile_AbstractItem
	{
		scope = 2;
		mass = 10;
		displayName = "Field Tent Connector, Closed, Woodland";
		descriptionShort = "Now you can make mazes for your hamster!";
		model = "\BSF_Community_Addon\addons\bsf_misc\BSF_Crate\BSF_Crate.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Tents\data\icon_BSF_TentConCross_LDF_CA.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class BSF_TentConnectCross_Yellow_Kit: Exile_AbstractItem
	{
		scope = 2;
		mass = 10;
		displayName = "Field Tent Connector, Closed, Yellow";
		descriptionShort = "Now you can make mazes for your hamster!";
		model = "\BSF_Community_Addon\addons\bsf_misc\BSF_Crate\BSF_Crate.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Tents\data\icon_BSF_TentConCross_Yellow_CA.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
};
class CfgVehicleClasses
{
	class ExileConstructions
	{
		displayName = "Exile Constructions";
	};
	class ExileContainers
	{
		displayName = "Exile Containers";
	};
};
class CfgVehicles
{
	class Exile_Construction_Abstract_Static;
	class Exile_Construction_Abstract_Physics;
	class BSF_TentOpen_Base: Exile_Construction_Abstract_Static
	{
		author = "BSF";
		class SimpleObject
		{
			eden = 0;
			animate[] = {{"door1_hide",1},{"door2_hide",1},{"windows_hide",1},{"roof_1_solar_hide",1},{"roof_1_nosolar_unhide",1},{"roof_2_solar_hide",0},{"roof_2_nosolar_unhide",0}};
			hide[] = {};
			verticalOffset = 1.375;
			verticalOffsetWorld = 0;
			init = "[this, '', []] call bis_fnc_initVehicle";
		};
		scope = 2;
		displayName = "Field Tent 7-55";
		model = "\A3\Structures_F_Orange\Humanitarian\Camps\MedicalTent_01_F.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"a3\Structures_F_Orange\Humanitarian\Camps\Data\MedicalTent_01_digital_F_CO.paa"};
		class AnimationSources
		{
			class Door_Hide
			{
				source = "user";
				animPeriod = 1e-06;
				initPhase = 1;
			};
			class InnerTent_Hide
			{
				source = "user";
				animPeriod = 1e-06;
			};
			class OuterTent_Hide
			{
				source = "user";
				animPeriod = 1e-06;
			};
			class MedSign_Hide
			{
				source = "user";
				animPeriod = 1e-06;
				initPhase = 1;
			};
			class SolarPanel1_Hide
			{
				source = "user";
				animPeriod = 1e-06;
				initPhase = 1;
			};
			class SolarPanel2_Hide
			{
				source = "user";
				animPeriod = 1e-06;
			};
		};
	};
	class BSF_TentOpen_Base_Preview: Exile_Construction_Abstract_Physics
	{
		author = "BSF";
		class SimpleObject
		{
			eden = 0;
			animate[] = {{"door1_hide",1},{"door2_hide",1},{"windows_hide",1},{"roof_1_solar_hide",1},{"roof_1_nosolar_unhide",1},{"roof_2_solar_hide",0},{"roof_2_nosolar_unhide",0}};
			hide[] = {};
			verticalOffset = 1.375;
			verticalOffsetWorld = 0;
			init = "[this, '', []] call bis_fnc_initVehicle";
		};
		scope = 2;
		displayName = "Field Tent";
		model = "\A3\Structures_F_Orange\Humanitarian\Camps\MedicalTent_01_F.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"a3\Structures_F_Orange\Humanitarian\Camps\Data\MedicalTent_01_digital_F_CO.paa"};
		class AnimationSources
		{
			class Door_Hide
			{
				source = "user";
				animPeriod = 1e-06;
				initPhase = 1;
			};
			class InnerTent_Hide
			{
				source = "user";
				animPeriod = 1e-06;
			};
			class OuterTent_Hide
			{
				source = "user";
				animPeriod = 1e-06;
			};
			class MedSign_Hide
			{
				source = "user";
				animPeriod = 1e-06;
				initPhase = 1;
			};
			class SolarPanel1_Hide
			{
				source = "user";
				animPeriod = 1e-06;
				initPhase = 1;
			};
			class SolarPanel2_Hide
			{
				source = "user";
				animPeriod = 1e-06;
			};
		};
	};
	class BSF_TentOpen_AAF: BSF_TentOpen_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\A3\Structures_F_Orange\Humanitarian\Camps\Data\medicaltent_01_digital_f_co.paa"};
	};
	class BSF_TentOpen_AAF_Preview: BSF_TentOpen_Base_Preview
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\A3\Structures_F_Orange\Humanitarian\Camps\Data\medicaltent_01_digital_f_co.paa"};
	};
	class BSF_TentOpen_CSAT: BSF_TentOpen_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\A3\Structures_F_Orange\Humanitarian\Camps\Data\medicaltent_01_brownhex_f_co.paa"};
	};
	class BSF_TentOpen_CSAT_Preview: BSF_TentOpen_Base_Preview
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\A3\Structures_F_Orange\Humanitarian\Camps\Data\medicaltent_01_brownhex_f_co.paa"};
	};
	class BSF_TentOpen_Desert: BSF_TentOpen_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\A3\Structures_F_Orange\Humanitarian\Camps\Data\medicaltent_01_mtp_f_co.paa"};
	};
	class BSF_TentOpen_Desert_Preview: BSF_TentOpen_Base_Preview
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\A3\Structures_F_Orange\Humanitarian\Camps\Data\medicaltent_01_mtp_f_co.paa"};
	};
	class BSF_TentOpen_White: BSF_TentOpen_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\A3\Structures_F_Orange\Humanitarian\Camps\Data\MedicalTent_01_white_generic_F_CO.paa"};
	};
	class BSF_TentOpen_White_Preview: BSF_TentOpen_Base_Preview
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\A3\Structures_F_Orange\Humanitarian\Camps\Data\MedicalTent_01_white_generic_F_CO.paa"};
	};
	class BSF_TentOpen_IDAP: BSF_TentOpen_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"a3\structures_f_enoch\military\camps\data\decon_tent_ext_idap_co.paa"};
	};
	class BSF_TentOpen_IDAP_Preview: BSF_TentOpen_Base_Preview
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"a3\structures_f_enoch\military\camps\data\decon_tent_ext_idap_co.paa"};
	};
	class BSF_TentOpen_LDF: BSF_TentOpen_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"a3\structures_f_enoch\military\camps\data\medicaltent_01_wdl_f_co.paa"};
	};
	class BSF_TentOpen_LDF_Preview: BSF_TentOpen_Base_Preview
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"a3\structures_f_enoch\military\camps\data\medicaltent_01_wdl_f_co.paa"};
	};
	class BSF_TentOpen_Yellow: BSF_TentOpen_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"a3\structures_f_enoch\military\camps\data\decon_tent_ext_co.paa"};
	};
	class BSF_TentOpen_Yellow_Preview: BSF_TentOpen_Base_Preview
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"a3\structures_f_enoch\military\camps\data\decon_tent_ext_co.paa"};
	};
	class BSF_TentOuter_Base: Exile_Construction_Abstract_Static
	{
		author = "BSF";
		class SimpleObject
		{
			eden = 0;
			animate[] = {{"door1_hide",1},{"door2_hide",1},{"windows_hide",1},{"roof_1_solar_hide",1},{"roof_1_nosolar_unhide",1},{"roof_2_solar_hide",0},{"roof_2_nosolar_unhide",0}};
			hide[] = {};
			verticalOffset = 1.375;
			verticalOffsetWorld = 0;
			init = "[this, '', []] call bis_fnc_initVehicle";
		};
		scope = 2;
		displayName = "Field Tent, Outer";
		model = "\A3\Structures_F_Orange\Humanitarian\Camps\MedicalTent_01_F.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"a3\Structures_F_Orange\Humanitarian\Camps\Data\MedicalTent_01_digital_F_CO.paa"};
		class AnimationSources
		{
			class Door_Hide
			{
				source = "user";
				animPeriod = 1e-06;
				initPhase = 1;
			};
			class InnerTent_Hide
			{
				source = "user";
				animPeriod = 1e-06;
				initPhase = 1;
			};
			class OuterTent_Hide
			{
				source = "user";
				animPeriod = 1e-06;
			};
			class MedSign_Hide
			{
				source = "user";
				animPeriod = 1e-06;
				initPhase = 1;
			};
			class SolarPanel1_Hide
			{
				source = "user";
				animPeriod = 1e-06;
				initPhase = 1;
			};
			class SolarPanel2_Hide
			{
				source = "user";
				animPeriod = 1e-06;
			};
		};
	};
	class BSF_TentOuter_Base_Preview: Exile_Construction_Abstract_Physics
	{
		author = "BSF";
		class SimpleObject
		{
			eden = 0;
			animate[] = {{"door1_hide",1},{"door2_hide",1},{"windows_hide",1},{"roof_1_solar_hide",1},{"roof_1_nosolar_unhide",1},{"roof_2_solar_hide",0},{"roof_2_nosolar_unhide",0}};
			hide[] = {};
			verticalOffset = 1.375;
			verticalOffsetWorld = 0;
			init = "[this, '', []] call bis_fnc_initVehicle";
		};
		scope = 2;
		displayName = "Field Tent, Outer";
		model = "\A3\Structures_F_Orange\Humanitarian\Camps\MedicalTent_01_F.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"a3\Structures_F_Orange\Humanitarian\Camps\Data\MedicalTent_01_digital_F_CO.paa"};
		class AnimationSources
		{
			class Door_Hide
			{
				source = "user";
				animPeriod = 1e-06;
				initPhase = 1;
			};
			class InnerTent_Hide
			{
				source = "user";
				animPeriod = 1e-06;
				initPhase = 1;
			};
			class OuterTent_Hide
			{
				source = "user";
				animPeriod = 1e-06;
			};
			class MedSign_Hide
			{
				source = "user";
				animPeriod = 1e-06;
				initPhase = 1;
			};
			class SolarPanel1_Hide
			{
				source = "user";
				animPeriod = 1e-06;
				initPhase = 1;
			};
			class SolarPanel2_Hide
			{
				source = "user";
				animPeriod = 1e-06;
			};
		};
	};
	class BSF_TentOuter_AAF: BSF_TentOuter_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\A3\Structures_F_Orange\Humanitarian\Camps\Data\medicaltent_01_digital_f_co.paa"};
	};
	class BSF_TentOuter_AAF_Preview: BSF_TentOuter_Base_Preview
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\A3\Structures_F_Orange\Humanitarian\Camps\Data\medicaltent_01_digital_f_co.paa"};
	};
	class BSF_TentOuter_CSAT: BSF_TentOuter_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\A3\Structures_F_Orange\Humanitarian\Camps\Data\medicaltent_01_brownhex_f_co.paa"};
	};
	class BSF_TentOuter_CSAT_Preview: BSF_TentOuter_Base_Preview
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\A3\Structures_F_Orange\Humanitarian\Camps\Data\medicaltent_01_brownhex_f_co.paa"};
	};
	class BSF_TentOuter_Desert: BSF_TentOuter_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\A3\Structures_F_Orange\Humanitarian\Camps\Data\medicaltent_01_mtp_f_co.paa"};
	};
	class BSF_TentOuter_Desert_Preview: BSF_TentOuter_Base_Preview
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\A3\Structures_F_Orange\Humanitarian\Camps\Data\medicaltent_01_mtp_f_co.paa"};
	};
	class BSF_TentOuter_White: BSF_TentOuter_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\A3\Structures_F_Orange\Humanitarian\Camps\Data\MedicalTent_01_white_generic_F_CO.paa"};
	};
	class BSF_TentOuter_White_Preview: BSF_TentOuter_Base_Preview
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\A3\Structures_F_Orange\Humanitarian\Camps\Data\MedicalTent_01_white_generic_F_CO.paa"};
	};
	class BSF_TentOuter_IDAP: BSF_TentOuter_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"a3\structures_f_enoch\military\camps\data\decon_tent_ext_idap_co.paa"};
	};
	class BSF_TentOuter_IDAP_Preview: BSF_TentOuter_Base_Preview
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"a3\structures_f_enoch\military\camps\data\decon_tent_ext_idap_co.paa"};
	};
	class BSF_TentOuter_LDF: BSF_TentOuter_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"a3\structures_f_enoch\military\camps\data\medicaltent_01_wdl_f_co.paa"};
	};
	class BSF_TentOuter_LDF_Preview: BSF_TentOuter_Base_Preview
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"a3\structures_f_enoch\military\camps\data\medicaltent_01_wdl_f_co.paa"};
	};
	class BSF_TentOuter_Yellow: BSF_TentOuter_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"a3\structures_f_enoch\military\camps\data\decon_tent_ext_co.paa"};
	};
	class BSF_TentOuter_Yellow_Preview: BSF_TentOuter_Base_Preview
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"a3\structures_f_enoch\military\camps\data\decon_tent_ext_co.paa"};
	};
	class BSF_TentInner_Base: Exile_Construction_Abstract_Static
	{
		author = "BSF";
		class SimpleObject
		{
			eden = 0;
			animate[] = {{"door1_hide",1},{"door2_hide",1},{"windows_hide",1},{"roof_1_solar_hide",1},{"roof_1_nosolar_unhide",1},{"roof_2_solar_hide",0},{"roof_2_nosolar_unhide",0}};
			hide[] = {};
			verticalOffset = 1.375;
			verticalOffsetWorld = 0;
			init = "[this, '', []] call bis_fnc_initVehicle";
		};
		scope = 2;
		displayName = "Field Tent, Outer";
		model = "\A3\Structures_F_Orange\Humanitarian\Camps\MedicalTent_01_F.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"a3\Structures_F_Orange\Humanitarian\Camps\Data\MedicalTent_01_digital_F_CO.paa"};
		class AnimationSources
		{
			class Door_Hide
			{
				source = "user";
				animPeriod = 1e-06;
				initPhase = 1;
			};
			class InnerTent_Hide
			{
				source = "user";
				animPeriod = 1e-06;
				initPhase = 0;
			};
			class OuterTent_Hide
			{
				source = "user";
				animPeriod = 1e-06;
				initPhase = 1;
			};
			class MedSign_Hide
			{
				source = "user";
				animPeriod = 1e-06;
				initPhase = 1;
			};
			class SolarPanel1_Hide
			{
				source = "user";
				animPeriod = 1e-06;
				initPhase = 1;
			};
			class SolarPanel2_Hide
			{
				source = "user";
				animPeriod = 1e-06;
				initPhase = 1;
			};
		};
	};
	class BSF_TentInner_Base_Preview: Exile_Construction_Abstract_Physics
	{
		author = "BSF";
		class SimpleObject
		{
			eden = 0;
			animate[] = {{"door1_hide",1},{"door2_hide",1},{"windows_hide",1},{"roof_1_solar_hide",1},{"roof_1_nosolar_unhide",1},{"roof_2_solar_hide",0},{"roof_2_nosolar_unhide",0}};
			hide[] = {};
			verticalOffset = 1.375;
			verticalOffsetWorld = 0;
			init = "[this, '', []] call bis_fnc_initVehicle";
		};
		scope = 2;
		displayName = "Field Tent, Outer";
		model = "\A3\Structures_F_Orange\Humanitarian\Camps\MedicalTent_01_F.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"a3\Structures_F_Orange\Humanitarian\Camps\Data\MedicalTent_01_digital_F_CO.paa"};
		class AnimationSources
		{
			class Door_Hide
			{
				source = "user";
				animPeriod = 1e-06;
				initPhase = 1;
			};
			class InnerTent_Hide
			{
				source = "user";
				animPeriod = 1e-06;
				initPhase = 0;
			};
			class OuterTent_Hide
			{
				source = "user";
				animPeriod = 1e-06;
				initPhase = 1;
			};
			class MedSign_Hide
			{
				source = "user";
				animPeriod = 1e-06;
				initPhase = 1;
			};
			class SolarPanel1_Hide
			{
				source = "user";
				animPeriod = 1e-06;
				initPhase = 1;
			};
			class SolarPanel2_Hide
			{
				source = "user";
				animPeriod = 1e-06;
				initPhase = 1;
			};
		};
	};
	class BSF_TentInner_AAF: BSF_TentInner_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\A3\Structures_F_Orange\Humanitarian\Camps\Data\medicaltent_01_digital_f_co.paa"};
	};
	class BSF_TentInner_AAF_Preview: BSF_TentInner_Base_Preview
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\A3\Structures_F_Orange\Humanitarian\Camps\Data\medicaltent_01_digital_f_co.paa"};
	};
	class BSF_TentInner_CSAT: BSF_TentInner_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\A3\Structures_F_Orange\Humanitarian\Camps\Data\medicaltent_01_brownhex_f_co.paa"};
	};
	class BSF_TentInner_CSAT_Preview: BSF_TentInner_Base_Preview
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\A3\Structures_F_Orange\Humanitarian\Camps\Data\medicaltent_01_brownhex_f_co.paa"};
	};
	class BSF_TentInner_Desert: BSF_TentInner_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\A3\Structures_F_Orange\Humanitarian\Camps\Data\medicaltent_01_mtp_f_co.paa"};
	};
	class BSF_TentInner_Desert_Preview: BSF_TentInner_Base_Preview
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\A3\Structures_F_Orange\Humanitarian\Camps\Data\medicaltent_01_mtp_f_co.paa"};
	};
	class BSF_TentInner_White: BSF_TentInner_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\A3\Structures_F_Orange\Humanitarian\Camps\Data\MedicalTent_01_white_generic_F_CO.paa"};
	};
	class BSF_TentInner_White_Preview: BSF_TentInner_Base_Preview
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\A3\Structures_F_Orange\Humanitarian\Camps\Data\MedicalTent_01_white_generic_F_CO.paa"};
	};
	class BSF_TentInner_IDAP: BSF_TentInner_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"a3\structures_f_enoch\military\camps\data\decon_tent_ext_idap_co.paa"};
	};
	class BSF_TentInner_IDAP_Preview: BSF_TentInner_Base_Preview
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"a3\structures_f_enoch\military\camps\data\decon_tent_ext_idap_co.paa"};
	};
	class BSF_TentInner_LDF: BSF_TentInner_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"a3\structures_f_enoch\military\camps\data\medicaltent_01_wdl_f_co.paa"};
	};
	class BSF_TentInner_LDF_Preview: BSF_TentInner_Base_Preview
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"a3\structures_f_enoch\military\camps\data\medicaltent_01_wdl_f_co.paa"};
	};
	class BSF_TentInner_Yellow: BSF_TentInner_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"a3\structures_f_enoch\military\camps\data\decon_tent_ext_co.paa"};
	};
	class BSF_TentInner_Yellow_Preview: BSF_TentInner_Base_Preview
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"a3\structures_f_enoch\military\camps\data\decon_tent_ext_co.paa"};
	};
	class BSF_TentConnectOpen_Base: Exile_Construction_Abstract_Static
	{
		author = "BSF";
		class SimpleObject
		{
			eden = 0;
			animate[] = {};
			hide[] = {};
			verticalOffset = 1.298;
			verticalOffsetWorld = 0;
			init = "[this, '', []] call bis_fnc_initVehicle";
		};
		scope = 2;
		displayName = "Connector Tent, Open";
		model = "\a3\Structures_F_Enoch\Military\Camps\ConnectorTent_01_F.p3d";
		hiddenSelections[] = {"Camo_1"};
		hiddenSelectionsTextures[] = {"a3\Structures_F_Orange\Humanitarian\Camps\Data\MedicalTent_01_white_generic_F_CO.paa"};
		hiddenSelectionsMaterials[] = {"\a3\Structures_F_Orange\Humanitarian\Camps\Data\MedicalTent_01.rvmat"};
		class AnimationSources
		{
			class Door_1_Hide
			{
				source = "user";
				animPeriod = 1e-06;
				initPhase = 1;
			};
			class Door_2_Hide
			{
				source = "user";
				animPeriod = 1e-06;
				initPhase = 1;
			};
		};
	};
	class BSF_TentConnectOpen_Base_Preview: Exile_Construction_Abstract_Physics
	{
		author = "BSF";
		class SimpleObject
		{
			eden = 0;
			animate[] = {};
			hide[] = {};
			verticalOffset = 1.298;
			verticalOffsetWorld = 0;
			init = "[this, '', []] call bis_fnc_initVehicle";
		};
		scope = 2;
		displayName = "Connector Tent, Open";
		model = "\a3\Structures_F_Enoch\Military\Camps\ConnectorTent_01_F.p3d";
		hiddenSelections[] = {"Camo_1"};
		hiddenSelectionsTextures[] = {"a3\Structures_F_Orange\Humanitarian\Camps\Data\MedicalTent_01_white_generic_F_CO.paa"};
		hiddenSelectionsMaterials[] = {"\a3\Structures_F_Orange\Humanitarian\Camps\Data\MedicalTent_01.rvmat"};
		class AnimationSources
		{
			class Door_1_Hide
			{
				source = "user";
				animPeriod = 1e-06;
				initPhase = 1;
			};
			class Door_2_Hide
			{
				source = "user";
				animPeriod = 1e-06;
				initPhase = 1;
			};
		};
	};
	class BSF_TentConnectOpen_AAF: BSF_TentConnectOpen_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\A3\Structures_F_Orange\Humanitarian\Camps\Data\medicaltent_01_digital_f_co.paa"};
	};
	class BSF_TentConnectOpen_AAF_Preview: BSF_TentConnectOpen_Base_Preview
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\A3\Structures_F_Orange\Humanitarian\Camps\Data\medicaltent_01_digital_f_co.paa"};
	};
	class BSF_TentConnectOpen_CSAT: BSF_TentConnectOpen_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\A3\Structures_F_Orange\Humanitarian\Camps\Data\medicaltent_01_brownhex_f_co.paa"};
	};
	class BSF_TentConnectOpen_CSAT_Preview: BSF_TentConnectOpen_Base_Preview
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\A3\Structures_F_Orange\Humanitarian\Camps\Data\medicaltent_01_brownhex_f_co.paa"};
	};
	class BSF_TentConnectOpen_Desert: BSF_TentConnectOpen_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\A3\Structures_F_Orange\Humanitarian\Camps\Data\medicaltent_01_mtp_f_co.paa"};
	};
	class BSF_TentConnectOpen_Desert_Preview: BSF_TentConnectOpen_Base_Preview
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\A3\Structures_F_Orange\Humanitarian\Camps\Data\medicaltent_01_mtp_f_co.paa"};
	};
	class BSF_TentConnectOpen_White: BSF_TentConnectOpen_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\A3\Structures_F_Orange\Humanitarian\Camps\Data\MedicalTent_01_white_generic_F_CO.paa"};
	};
	class BSF_TentConnectOpen_White_Preview: BSF_TentConnectOpen_Base_Preview
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\A3\Structures_F_Orange\Humanitarian\Camps\Data\MedicalTent_01_white_generic_F_CO.paa"};
	};
	class BSF_TentConnectOpen_LDF: BSF_TentConnectOpen_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"a3\structures_f_enoch\military\camps\data\medicaltent_01_wdl_f_co.paa"};
	};
	class BSF_TentConnectOpen_LDF_Preview: BSF_TentConnectOpen_Base_Preview
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"a3\structures_f_enoch\military\camps\data\medicaltent_01_wdl_f_co.paa"};
	};
	class BSF_TentConnectOpen_Yellow: BSF_TentConnectOpen_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"a3\structures_f_enoch\military\camps\data\decon_tent_ext_co.paa"};
	};
	class BSF_TentConnectOpen_Yellow_Preview: BSF_TentConnectOpen_Base_Preview
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"a3\structures_f_enoch\military\camps\data\decon_tent_ext_co.paa"};
	};
	class BSF_TentConnectClosed_Base: Exile_Construction_Abstract_Static
	{
		author = "BSF";
		class SimpleObject
		{
			eden = 0;
			animate[] = {};
			hide[] = {};
			verticalOffset = 1.298;
			verticalOffsetWorld = 0;
			init = "[this, '', []] call bis_fnc_initVehicle";
		};
		scope = 2;
		displayName = "Connector Tent, Closed";
		model = "\a3\Structures_F_Enoch\Military\Camps\ConnectorTent_01_F.p3d";
		hiddenSelections[] = {"Camo_1"};
		hiddenSelectionsTextures[] = {"a3\Structures_F_Orange\Humanitarian\Camps\Data\MedicalTent_01_white_generic_F_CO.paa"};
		hiddenSelectionsMaterials[] = {"\a3\Structures_F_Orange\Humanitarian\Camps\Data\MedicalTent_01.rvmat"};
		class AnimationSources
		{
			class Door_1_Hide
			{
				source = "user";
				animPeriod = 1e-06;
				initPhase = 1;
			};
			class Door_2_Hide
			{
				source = "user";
				animPeriod = 1e-06;
				initPhase = 0;
			};
		};
	};
	class BSF_TentConnectClosed_Base_Preview: Exile_Construction_Abstract_Physics
	{
		author = "BSF";
		class SimpleObject
		{
			eden = 0;
			animate[] = {};
			hide[] = {};
			verticalOffset = 1.298;
			verticalOffsetWorld = 0;
			init = "[this, '', []] call bis_fnc_initVehicle";
		};
		scope = 2;
		displayName = "Connector Tent, Closed";
		model = "\a3\Structures_F_Enoch\Military\Camps\ConnectorTent_01_F.p3d";
		hiddenSelections[] = {"Camo_1"};
		hiddenSelectionsTextures[] = {"a3\Structures_F_Orange\Humanitarian\Camps\Data\MedicalTent_01_white_generic_F_CO.paa"};
		hiddenSelectionsMaterials[] = {"\a3\Structures_F_Orange\Humanitarian\Camps\Data\MedicalTent_01.rvmat"};
		class AnimationSources
		{
			class Door_1_Hide
			{
				source = "user";
				animPeriod = 1e-06;
				initPhase = 1;
			};
			class Door_2_Hide
			{
				source = "user";
				animPeriod = 1e-06;
				initPhase = 0;
			};
		};
	};
	class BSF_TentConnectClosed_AAF: BSF_TentConnectClosed_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\A3\Structures_F_Orange\Humanitarian\Camps\Data\medicaltent_01_digital_f_co.paa"};
	};
	class BSF_TentConnectClosed_AAF_Preview: BSF_TentConnectClosed_Base_Preview
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\A3\Structures_F_Orange\Humanitarian\Camps\Data\medicaltent_01_digital_f_co.paa"};
	};
	class BSF_TentConnectClosed_CSAT: BSF_TentConnectClosed_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\A3\Structures_F_Orange\Humanitarian\Camps\Data\medicaltent_01_brownhex_f_co.paa"};
	};
	class BSF_TentConnectClosed_CSAT_Preview: BSF_TentConnectClosed_Base_Preview
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\A3\Structures_F_Orange\Humanitarian\Camps\Data\medicaltent_01_brownhex_f_co.paa"};
	};
	class BSF_TentConnectClosed_Desert: BSF_TentConnectClosed_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\A3\Structures_F_Orange\Humanitarian\Camps\Data\medicaltent_01_mtp_f_co.paa"};
	};
	class BSF_TentConnectClosed_Desert_Preview: BSF_TentConnectClosed_Base_Preview
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\A3\Structures_F_Orange\Humanitarian\Camps\Data\medicaltent_01_mtp_f_co.paa"};
	};
	class BSF_TentConnectClosed_White: BSF_TentConnectClosed_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\A3\Structures_F_Orange\Humanitarian\Camps\Data\MedicalTent_01_white_generic_F_CO.paa"};
	};
	class BSF_TentConnectClosed_White_Preview: BSF_TentConnectClosed_Base_Preview
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\A3\Structures_F_Orange\Humanitarian\Camps\Data\MedicalTent_01_white_generic_F_CO.paa"};
	};
	class BSF_TentConnectClosed_LDF: BSF_TentConnectClosed_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"a3\structures_f_enoch\military\camps\data\medicaltent_01_wdl_f_co.paa"};
	};
	class BSF_TentConnectClosed_LDF_Preview: BSF_TentConnectClosed_Base_Preview
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"a3\structures_f_enoch\military\camps\data\medicaltent_01_wdl_f_co.paa"};
	};
	class BSF_TentConnectClosed_Yellow: BSF_TentConnectClosed_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"a3\structures_f_enoch\military\camps\data\decon_tent_ext_co.paa"};
	};
	class BSF_TentConnectClosed_Yellow_Preview: BSF_TentConnectClosed_Base_Preview
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"a3\structures_f_enoch\military\camps\data\decon_tent_ext_co.paa"};
	};
	class BSF_TentConnectCross_Base: Exile_Construction_Abstract_Static
	{
		author = "BSF";
		class SimpleObject
		{
			eden = 0;
			animate[] = {};
			hide[] = {};
			verticalOffset = 1.262;
			verticalOffsetWorld = 0;
			init = "[this, '', []] call bis_fnc_initVehicle";
		};
		scope = 2;
		displayName = "Connector Tent, Cross";
		model = "a3\structures_f_enoch\military\camps\connectortent_01_cross_f.p3d";
		hiddenSelections[] = {"Camo_1"};
		hiddenSelectionsTextures[] = {"a3\Structures_F_Orange\Humanitarian\Camps\Data\MedicalTent_01_white_generic_F_CO.paa"};
		hiddenSelectionsMaterials[] = {"\a3\Structures_F_Orange\Humanitarian\Camps\Data\MedicalTent_01.rvmat"};
		class AnimationSources
		{
			class Door_1_Hide
			{
				source = "user";
				animPeriod = 1e-06;
				initPhase = 1;
			};
			class Door_2_Hide
			{
				source = "user";
				animPeriod = 1e-06;
				initPhase = 1;
			};
			class Door_3_Hide
			{
				source = "user";
				animPeriod = 1e-06;
				initPhase = 1;
			};
			class Door_4_Hide
			{
				source = "user";
				animPeriod = 1e-06;
				initPhase = 1;
			};
		};
	};
	class BSF_TentConnectCross_Base_Preview: Exile_Construction_Abstract_Physics
	{
		author = "BSF";
		class SimpleObject
		{
			eden = 0;
			animate[] = {};
			hide[] = {};
			verticalOffset = 1.262;
			verticalOffsetWorld = 0;
			init = "[this, '', []] call bis_fnc_initVehicle";
		};
		scope = 2;
		displayName = "Connector Tent, Cross";
		model = "a3\structures_f_enoch\military\camps\connectortent_01_cross_f.p3d";
		hiddenSelections[] = {"Camo_1"};
		hiddenSelectionsTextures[] = {"a3\Structures_F_Orange\Humanitarian\Camps\Data\MedicalTent_01_white_generic_F_CO.paa"};
		hiddenSelectionsMaterials[] = {"\a3\Structures_F_Orange\Humanitarian\Camps\Data\MedicalTent_01.rvmat"};
		class AnimationSources
		{
			class Door_1_Hide
			{
				source = "user";
				animPeriod = 1e-06;
				initPhase = 1;
			};
			class Door_2_Hide
			{
				source = "user";
				animPeriod = 1e-06;
				initPhase = 1;
			};
			class Door_3_Hide
			{
				source = "user";
				animPeriod = 1e-06;
				initPhase = 1;
			};
			class Door_4_Hide
			{
				source = "user";
				animPeriod = 1e-06;
				initPhase = 1;
			};
		};
	};
	class BSF_TentConnectCross_AAF: BSF_TentConnectCross_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\A3\Structures_F_Orange\Humanitarian\Camps\Data\medicaltent_01_digital_f_co.paa"};
	};
	class BSF_TentConnectCross_AAF_Preview: BSF_TentConnectCross_Base_Preview
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\A3\Structures_F_Orange\Humanitarian\Camps\Data\medicaltent_01_digital_f_co.paa"};
	};
	class BSF_TentConnectCross_CSAT: BSF_TentConnectCross_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\A3\Structures_F_Orange\Humanitarian\Camps\Data\medicaltent_01_brownhex_f_co.paa"};
	};
	class BSF_TentConnectCross_CSAT_Preview: BSF_TentConnectCross_Base_Preview
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\A3\Structures_F_Orange\Humanitarian\Camps\Data\medicaltent_01_brownhex_f_co.paa"};
	};
	class BSF_TentConnectCross_Desert: BSF_TentConnectCross_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\A3\Structures_F_Orange\Humanitarian\Camps\Data\medicaltent_01_mtp_f_co.paa"};
	};
	class BSF_TentConnectCross_Desert_Preview: BSF_TentConnectCross_Base_Preview
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\A3\Structures_F_Orange\Humanitarian\Camps\Data\medicaltent_01_mtp_f_co.paa"};
	};
	class BSF_TentConnectCross_White: BSF_TentConnectCross_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\A3\Structures_F_Orange\Humanitarian\Camps\Data\MedicalTent_01_white_generic_F_CO.paa"};
	};
	class BSF_TentConnectCross_White_Preview: BSF_TentConnectCross_Base_Preview
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\A3\Structures_F_Orange\Humanitarian\Camps\Data\MedicalTent_01_white_generic_F_CO.paa"};
	};
	class BSF_TentConnectCross_LDF: BSF_TentConnectCross_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"a3\structures_f_enoch\military\camps\data\medicaltent_01_wdl_f_co.paa"};
	};
	class BSF_TentConnectCross_LDF_Preview: BSF_TentConnectCross_Base_Preview
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"a3\structures_f_enoch\military\camps\data\medicaltent_01_wdl_f_co.paa"};
	};
	class BSF_TentConnectCross_Yellow: BSF_TentConnectCross_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"a3\structures_f_enoch\military\camps\data\decon_tent_ext_co.paa"};
	};
	class BSF_TentConnectCross_Yellow_Preview: BSF_TentConnectCross_Base_Preview
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"a3\structures_f_enoch\military\camps\data\decon_tent_ext_co.paa"};
	};
	class BSF_TentDecon_Base: Exile_Construction_Abstract_Static
	{
		author = "BSF";
		class SimpleObject
		{
			eden = 0;
			animate[] = {};
			hide[] = {};
			verticalOffset = 1.364;
			verticalOffsetWorld = 0;
			init = "[this, '', []] call bis_fnc_initVehicle";
		};
		scope = 2;
		displayName = "Tent, Decontamination";
		model = "\a3\Structures_F_Enoch\Military\Camps\DeconTent_01_F.p3d";
		hiddenSelections[] = {"Camo_1"};
		hiddenSelectionsTextures[] = {"a3\Structures_F_Orange\Humanitarian\Camps\Data\MedicalTent_01_digital_F_CO.paa"};
		hiddenSelectionsMaterials[] = {"\a3\Structures_F_Orange\Humanitarian\Camps\Data\MedicalTent_01.rvmat"};
		class AnimationSources
		{
			class Door_1_Hide
			{
				source = "user";
				animPeriod = 1e-06;
				initPhase = 1;
			};
			class Door_2_Hide
			{
				source = "user";
				animPeriod = 1e-06;
				initPhase = 1;
			};
			class InnerTent_Hide
			{
				source = "user";
				animPeriod = 1e-06;
				initPhase = 0;
			};
			class OuterTent_Hide
			{
				source = "user";
				animPeriod = 1e-06;
				initPhase = 0;
			};
		};
	};
	class BSF_TentDecon_Base_Preview: Exile_Construction_Abstract_Physics
	{
		author = "BSF";
		class SimpleObject
		{
			eden = 0;
			animate[] = {};
			hide[] = {};
			verticalOffset = 1.364;
			verticalOffsetWorld = 0;
			init = "[this, '', []] call bis_fnc_initVehicle";
		};
		scope = 2;
		displayName = "Tent, Decontamination";
		model = "\a3\Structures_F_Enoch\Military\Camps\DeconTent_01_F.p3d";
		hiddenSelections[] = {"Camo_1"};
		hiddenSelectionsTextures[] = {"a3\Structures_F_Orange\Humanitarian\Camps\Data\MedicalTent_01_digital_F_CO.paa"};
		hiddenSelectionsMaterials[] = {"\a3\Structures_F_Orange\Humanitarian\Camps\Data\MedicalTent_01.rvmat"};
		class AnimationSources
		{
			class Door_1_Hide
			{
				source = "user";
				animPeriod = 1e-06;
				initPhase = 1;
			};
			class Door_2_Hide
			{
				source = "user";
				animPeriod = 1e-06;
				initPhase = 1;
			};
			class InnerTent_Hide
			{
				source = "user";
				animPeriod = 1e-06;
				initPhase = 0;
			};
			class OuterTent_Hide
			{
				source = "user";
				animPeriod = 1e-06;
				initPhase = 0;
			};
		};
	};
	class BSF_TentDecon_AAF: BSF_TentDecon_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\A3\Structures_F_Orange\Humanitarian\Camps\Data\medicaltent_01_digital_f_co.paa"};
	};
	class BSF_TentDecon_AAF_Preview: BSF_TentDecon_Base_Preview
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\A3\Structures_F_Orange\Humanitarian\Camps\Data\medicaltent_01_digital_f_co.paa"};
	};
	class BSF_TentDecon_CSAT: BSF_TentDecon_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\A3\Structures_F_Orange\Humanitarian\Camps\Data\medicaltent_01_brownhex_f_co.paa"};
	};
	class BSF_TentDecon_CSAT_Preview: BSF_TentDecon_Base_Preview
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\A3\Structures_F_Orange\Humanitarian\Camps\Data\medicaltent_01_brownhex_f_co.paa"};
	};
	class BSF_TentDecon_Desert: BSF_TentDecon_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\A3\Structures_F_Orange\Humanitarian\Camps\Data\medicaltent_01_mtp_f_co.paa"};
	};
	class BSF_TentDecon_Desert_Preview: BSF_TentDecon_Base_Preview
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\A3\Structures_F_Orange\Humanitarian\Camps\Data\medicaltent_01_mtp_f_co.paa"};
	};
	class BSF_TentDecon_White: BSF_TentDecon_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\A3\Structures_F_Orange\Humanitarian\Camps\Data\MedicalTent_01_white_generic_F_CO.paa"};
	};
	class BSF_TentDecon_White_Preview: BSF_TentDecon_Base_Preview
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\A3\Structures_F_Orange\Humanitarian\Camps\Data\MedicalTent_01_white_generic_F_CO.paa"};
	};
	class BSF_TentDecon_IDAP: BSF_TentDecon_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"a3\structures_f_enoch\military\camps\data\decon_tent_ext_idap_co.paa"};
	};
	class BSF_TentDecon_IDAP_Preview: BSF_TentDecon_Base_Preview
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"a3\structures_f_enoch\military\camps\data\decon_tent_ext_idap_co.paa"};
	};
	class BSF_TentDecon_LDF: BSF_TentDecon_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"a3\structures_f_enoch\military\camps\data\medicaltent_01_wdl_f_co.paa"};
	};
	class BSF_TentDecon_LDF_Preview: BSF_TentDecon_Base_Preview
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"a3\structures_f_enoch\military\camps\data\medicaltent_01_wdl_f_co.paa"};
	};
	class BSF_TentDecon_Yellow: BSF_TentDecon_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"a3\structures_f_enoch\military\camps\data\decon_tent_ext_co.paa"};
	};
	class BSF_TentDecon_Yellow_Preview: BSF_TentDecon_Base_Preview
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"a3\structures_f_enoch\military\camps\data\decon_tent_ext_co.paa"};
	};
};
