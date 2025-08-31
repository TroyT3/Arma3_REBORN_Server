
////////////////////////////////
// Tigr
////////////////////////////////

	class BSF_Skin_Tigr_Base{
			skins[] = {
			{"RHS_Default_Olive", 500},
			{"RHS_Default_Camo", 500},
			{"BSF_Skin_Tigr_Arctic", 1},
			{"BSF_Skin_Tigr_Black", 1},
			{"BSF_Skin_Tigr_CSAT", 1},
			{"BSF_Skin_Tigr_Desert1", 1},
			{"BSF_Skin_Tigr_Desert2", 1},
			{"BSF_Skin_Tigr_DesertDigi", 1},
			{"BSF_Skin_Tigr_MossyOak", 1},
			{"BSF_Skin_Tigr_Multi1", 1},
			{"BSF_Skin_Tigr_SnowLeopard", 1},
			{"BSF_Skin_Tigr_Stone", 1},
			{"BSF_Skin_Tigr_Tiger", 1},
			{"BSF_Skin_Tigr_WinterGreen", 1},
			{"BSF_Skin_Tigr_WD", 1}
			};
		};

	class rhs_tigr_base: BSF_Skin_Tigr_Base{};
	class rhs_tigr_vmf: BSF_Skin_Tigr_Base{};
	class rhs_tigr_msv: BSF_Skin_Tigr_Base{};
	class rhs_tigr_vv: BSF_Skin_Tigr_Base{};
	class rhs_tigr_vdv: BSF_Skin_Tigr_Base{};
	class rhs_tigr_3camo_vmf: BSF_Skin_Tigr_Base{};
	class rhs_tigr_3camo_msv: BSF_Skin_Tigr_Base{};
	class rhs_tigr_3camo_vdv: BSF_Skin_Tigr_Base{};
	class rhs_tigr_3camo_vv: BSF_Skin_Tigr_Base{};
	class rhs_tigr_ffv_3camo_msv: BSF_Skin_Tigr_Base{};
	class rhs_tigr_ffv_3camo_vmf: BSF_Skin_Tigr_Base{};
	class rhs_tigr_ffv_3camo_vdv: BSF_Skin_Tigr_Base{};
	class rhs_tigr_ffv_3camo_vv: BSF_Skin_Tigr_Base{};
	class rhs_tigr_ffv_vv: BSF_Skin_Tigr_Base{};
	class rhs_tigr_ffv_msv: BSF_Skin_Tigr_Base{};
	class rhs_tigr_ffv_vmf: BSF_Skin_Tigr_Base{};
	class rhs_tigr_ffv_vdv: BSF_Skin_Tigr_Base{};
	class rhs_tigr_sts_vdv: BSF_Skin_Tigr_Base{};
	class rhs_tigr_sts_vmf: BSF_Skin_Tigr_Base{};
	class rhs_tigr_sts_msv: BSF_Skin_Tigr_Base{};
	class rhs_tigr_sts_vv: BSF_Skin_Tigr_Base{};
	class rhs_tigr_sts_3camo_vmf: BSF_Skin_Tigr_Base{};
	class rhs_tigr_sts_3camo_msv: BSF_Skin_Tigr_Base{};
	class rhs_tigr_sts_3camo_vv: BSF_Skin_Tigr_Base{};
	class rhs_tigr_sts_3camo_vdv: BSF_Skin_Tigr_Base{};
	class rhs_tigr_m_vmf: BSF_Skin_Tigr_Base{};
	class rhs_tigr_m_vdv: BSF_Skin_Tigr_Base{};
	class rhs_tigr_m_msv: BSF_Skin_Tigr_Base{};
	class rhs_tigr_m_vv: BSF_Skin_Tigr_Base{};
	class rhs_tigr_m_3camo_vmf: BSF_Skin_Tigr_Base{};
	class rhs_tigr_m_3camo_msv: BSF_Skin_Tigr_Base{};
	class rhs_tigr_m_3camo_vv: BSF_Skin_Tigr_Base{};
	class rhs_tigr_m_3camo_vdv: BSF_Skin_Tigr_Base{};

	class RHS_Default_Olive: SneakCustoms{
		skinName = "RHS Olive";
        hiddenSelectionsTextures[] = {
			"rhsafrf\addons\rhs_tigr\data\rhs_tigr_co.paa",
			"rhsafrf\addons\rhs_tigr\data\rhs_tigr_int_01_co.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Tigr\BSF_Tigr_BSF_3_Int2.paa",
			"rhsafrf\addons\rhs_tigr\sts_proxies\data\tigr_ext_ads_co.paa",
			"rhsafrf\addons\rhs_tigr\m_proxies\data\tigr_m_adds_co.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Decals\BSF_Decal_Letter_B2_ca.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Decals\BSF_Decal_Letter_S2_ca.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Decals\BSF_Decal_Symbol_-2_ca.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Decals\BSF_Decal_Letter_F2_ca.paa"
			};
        availableFor = "All";
    };

	class RHS_Default_Camo: SneakCustoms{
		skinName = "RHS Camo";
        hiddenSelectionsTextures[] = {
			"rhsafrf\addons\rhs_tigr\data\rhs_tigr_co_camo.paa",
			"rhsafrf\addons\rhs_tigr\data\rhs_tigr_int_01_co.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Tigr\BSF_Tigr_BSF_3_Int2.paa",
			"rhsafrf\addons\rhs_tigr\sts_proxies\data\tigr_ext_ads_co.paa",
			"rhsafrf\addons\rhs_tigr\m_proxies\data\tigr_m_adds_co.paa",
			"rhsafrf\addons\rhs_decals\data\numbers\licenseplate\2_ca.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Decals\BSF_Decal_Letter_B2_ca.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Decals\BSF_Decal_Letter_S2_ca.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Decals\BSF_Decal_Symbol_-2_ca.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Decals\BSF_Decal_Letter_F2_ca.paa"
			};
        availableFor = "All";
    };

	class BSF_Skin_Tigr_Arctic: SneakCustoms{
		skinName = "BSF Arctic Blue";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Tigr\BSF_Tigr_Arctic_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Tigr\BSF_Tigr_BSF_2_Int1.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Tigr\BSF_Tigr_BSF_3_Int2.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Tigr\BSF_Tigr_Arctic_4_Adds1.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Tigr\BSF_Tigr_Arctic_5_Adds2.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Decals\BSF_Decal_Letter_B2_ca.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Decals\BSF_Decal_Letter_S2_ca.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Decals\BSF_Decal_Symbol_-2_ca.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Decals\BSF_Decal_Letter_F2_ca.paa"
			};
        availableFor = "Vip";
    };

	class BSF_Skin_Tigr_Black: SneakCustoms{
		skinName = "BSF Black Death";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Tigr\BSF_Tigr_Black_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Tigr\BSF_Tigr_BSF_2_Int1.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Tigr\BSF_Tigr_BSF_3_Int2.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Tigr\BSF_Tigr_Black_4_Adds1.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Tigr\BSF_Tigr_Black_5_Adds2.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Decals\BSF_Decal_Letter_B2_ca.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Decals\BSF_Decal_Letter_S2_ca.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Decals\BSF_Decal_Symbol_-2_ca.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Decals\BSF_Decal_Letter_F2_ca.paa"
			};
        availableFor = "Vip";
    };

	class BSF_Skin_Tigr_CSAT: SneakCustoms{
		skinName = "BSF CSAT";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Tigr\BSF_Tigr_CSAT_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Tigr\BSF_Tigr_BSF_2_Int1.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Tigr\BSF_Tigr_BSF_3_Int2.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Tigr\BSF_Tigr_CSAT_4_Adds1.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Tigr\BSF_Tigr_CSAT_5_Adds2.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Decals\BSF_Decal_Letter_B2_ca.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Decals\BSF_Decal_Letter_S2_ca.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Decals\BSF_Decal_Symbol_-2_ca.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Decals\BSF_Decal_Letter_F2_ca.paa"
			};
        availableFor = "Vip";
    };

	class BSF_Skin_Tigr_Desert1: SneakCustoms{
		skinName = "BSF Desert Fox";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Tigr\BSF_Tigr_Desert1_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Tigr\BSF_Tigr_BSF_2_Int1.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Tigr\BSF_Tigr_BSF_3_Int2.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Tigr\BSF_Tigr_Desert1_4_Adds1.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Tigr\BSF_Tigr_Desert1_5_Adds2.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Decals\BSF_Decal_Letter_B2_ca.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Decals\BSF_Decal_Letter_S2_ca.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Decals\BSF_Decal_Symbol_-2_ca.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Decals\BSF_Decal_Letter_F2_ca.paa"
			};
        availableFor = "Vip";
    };

	class BSF_Skin_Tigr_Desert2: SneakCustoms{
		skinName = "BSF Desert Storm";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Tigr\BSF_Tigr_Desert2_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Tigr\BSF_Tigr_BSF_2_Int1.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Tigr\BSF_Tigr_BSF_3_Int2.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Tigr\BSF_Tigr_Desert2_4_Adds1.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Tigr\BSF_Tigr_Desert2_5_Adds2.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Decals\BSF_Decal_Letter_B2_ca.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Decals\BSF_Decal_Letter_S2_ca.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Decals\BSF_Decal_Symbol_-2_ca.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Decals\BSF_Decal_Letter_F2_ca.paa"
			};
        availableFor = "Vip";
    };

	class BSF_Skin_Tigr_DesertDigi: SneakCustoms{
		skinName = "BSF Desert Digi";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Tigr\BSF_Tigr_DesertDigi_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Tigr\BSF_Tigr_BSF_2_Int1.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Tigr\BSF_Tigr_BSF_3_Int2.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Tigr\BSF_Tigr_DesertDigi_4_Adds1.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Tigr\BSF_Tigr_DesertDigi_5_Adds2.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Decals\BSF_Decal_Letter_B2_ca.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Decals\BSF_Decal_Letter_S2_ca.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Decals\BSF_Decal_Symbol_-2_ca.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Decals\BSF_Decal_Letter_F2_ca.paa"
			};
        availableFor = "Vip";
    };

	class BSF_Skin_Tigr_MossyOak: SneakCustoms{
		skinName = "BSF Mossy Oak";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Tigr\BSF_Tigr_MossyOak_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Tigr\BSF_Tigr_BSF_2_Int1.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Tigr\BSF_Tigr_BSF_3_Int2.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Tigr\BSF_Tigr_MossyOak_4_Adds1.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Tigr\BSF_Tigr_MossyOak_5_Adds2.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Decals\BSF_Decal_Letter_B2_ca.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Decals\BSF_Decal_Letter_S2_ca.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Decals\BSF_Decal_Symbol_-2_ca.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Decals\BSF_Decal_Letter_F2_ca.paa"
			};
        availableFor = "Vip";
    };

	class BSF_Skin_Tigr_Multi1: SneakCustoms{
		skinName = "BSF Multi";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Tigr\BSF_Tigr_Multi1_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Tigr\BSF_Tigr_BSF_2_Int1.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Tigr\BSF_Tigr_BSF_3_Int2.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Tigr\BSF_Tigr_Multi1_4_Adds1.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Tigr\BSF_Tigr_Multi1_5_Adds2.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Decals\BSF_Decal_Letter_B2_ca.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Decals\BSF_Decal_Letter_S2_ca.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Decals\BSF_Decal_Symbol_-2_ca.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Decals\BSF_Decal_Letter_F2_ca.paa"
			};
        availableFor = "Vip";
    };

	class BSF_Skin_Tigr_SnowLeopard: SneakCustoms{
		skinName = "BSF Snow Leopard";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Tigr\BSF_Tigr_SnowLeopard_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Tigr\BSF_Tigr_BSF_2_Int1.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Tigr\BSF_Tigr_BSF_3_Int2.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Tigr\BSF_Tigr_SnowLeopard_4_Adds1.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Tigr\BSF_Tigr_SnowLeopard_5_Adds2.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Decals\BSF_Decal_Letter_B2_ca.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Decals\BSF_Decal_Letter_S2_ca.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Decals\BSF_Decal_Symbol_-2_ca.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Decals\BSF_Decal_Letter_F2_ca.paa"
			};
        availableFor = "Vip";
    };

	class BSF_Skin_Tigr_Stone: SneakCustoms{
		skinName = "BSF Stone";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Tigr\BSF_Tigr_Stone_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Tigr\BSF_Tigr_BSF_2_Int1.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Tigr\BSF_Tigr_BSF_3_Int2.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Tigr\BSF_Tigr_Stone_4_Adds1.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Tigr\BSF_Tigr_Stone_5_Adds2.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Decals\BSF_Decal_Letter_B2_ca.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Decals\BSF_Decal_Letter_S2_ca.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Decals\BSF_Decal_Symbol_-2_ca.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Decals\BSF_Decal_Letter_F2_ca.paa"
			};
        availableFor = "Vip";
    };

	class BSF_Skin_Tigr_Tiger: SneakCustoms{
		skinName = "BSF Crouching Tiger";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Tigr\BSF_Tigr_Tiger_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Tigr\BSF_Tigr_BSF_2_Int1.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Tigr\BSF_Tigr_BSF_3_Int2.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Tigr\BSF_Tigr_Tiger_4_Adds1.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Tigr\BSF_Tigr_Tiger_5_Adds2.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Decals\BSF_Decal_Letter_B2_ca.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Decals\BSF_Decal_Letter_S2_ca.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Decals\BSF_Decal_Symbol_-2_ca.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Decals\BSF_Decal_Letter_F2_ca.paa"
			};
        availableFor = "Vip";
    };

	class BSF_Skin_Tigr_WinterGreen: SneakCustoms{
		skinName = "BSF WinterGreen";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Tigr\BSF_Tigr_WinterGreen_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Tigr\BSF_Tigr_BSF_2_Int1.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Tigr\BSF_Tigr_BSF_3_Int2.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Tigr\BSF_Tigr_WinterGreen_4_Adds1.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Tigr\BSF_Tigr_WinterGreen_5_Adds2.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Decals\BSF_Decal_Letter_B2_ca.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Decals\BSF_Decal_Letter_S2_ca.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Decals\BSF_Decal_Symbol_-2_ca.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Decals\BSF_Decal_Letter_F2_ca.paa"
			};
        availableFor = "Vip";
    };

	class BSF_Skin_Tigr_WD: SneakCustoms{
		skinName = "BSF Woodland";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Tigr\BSF_Tigr_WD_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Tigr\BSF_Tigr_BSF_2_Int1.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Tigr\BSF_Tigr_BSF_3_Int2.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Tigr\BSF_Tigr_WD_4_Adds1.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Tigr\BSF_Tigr_WD_5_Adds2.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Decals\BSF_Decal_Letter_B2_ca.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Decals\BSF_Decal_Letter_S2_ca.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Decals\BSF_Decal_Symbol_-2_ca.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Decals\BSF_Decal_Letter_F2_ca.paa"
			};
        availableFor = "Vip";
    };
