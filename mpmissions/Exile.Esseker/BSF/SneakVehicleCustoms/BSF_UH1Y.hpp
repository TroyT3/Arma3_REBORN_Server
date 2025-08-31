// UH-1Y

		class BSF_Skin_UH1Y_Base {
		skins[] = {
			{"BSF_Skin_UH1Y_Roses", 1},
			{"BSF_Skin_UH1Y_Tiger", 1}
		};
	};

		class RHS_UH1Y_US_base: BSF_Skin_UH1Y_Base{};
		class RHS_UH1Y: BSF_Skin_UH1Y_Base{};
		class RHS_UH1Y_d: BSF_Skin_UH1Y_Base{};
		class RHS_UH1Y_FFAR: BSF_Skin_UH1Y_Base{};
		class RHS_UH1Y_FFAR_d: BSF_Skin_UH1Y_Base{};
		class RHS_UH1Y_GS: BSF_Skin_UH1Y_Base{};
		class RHS_UH1Y_d_GS: BSF_Skin_UH1Y_Base{};
		class RHS_UH1Y_UNARMED: BSF_Skin_UH1Y_Base{};
		class RHS_UH1Y_UNARMED_d: BSF_Skin_UH1Y_Base{};
		class B_mas_UH1Y_Base: BSF_Skin_UH1Y_Base{};
		class B_mas_UH1Y_F: BSF_Skin_UH1Y_Base{};
		class B_mas_UH1Y_UNA_F: BSF_Skin_UH1Y_Base{};
		class B_mas_UH1Y_MEV_F: BSF_Skin_UH1Y_Base{};
			
	class BSF_Skin_UH1Y_Roses: SneakCustoms{
		skinName = "Roses";
		hiddenSelectionsTextures[] = {"BSF_Community_Addon\addons\BSF_Misc\data\skins\UH1Y\BSF_UH1Y_Roses.paa","BSF_Community_Addon\addons\BSF_Misc\data\skins\UH1Y\BSF_UH1Y_Int_Default.paa"};
		availableFor = "Vip";
	};	

	class BSF_Skin_UH1Y_Tiger: SneakCustoms{
		skinName = "Tiger Stripe";
		hiddenSelectionsTextures[] = {"BSF_Community_Addon\addons\BSF_Misc\data\skins\UH1Y\BSF_UH1Y_Tiger.paa","BSF_Community_Addon\addons\BSF_Misc\data\skins\UH1Y\BSF_UH1Y_Int_Default.paa"};
		availableFor = "Vip";
	};