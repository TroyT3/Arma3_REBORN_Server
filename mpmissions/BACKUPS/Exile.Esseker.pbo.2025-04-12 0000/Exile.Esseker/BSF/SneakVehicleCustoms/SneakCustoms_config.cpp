/********************************************************************
 * sneak_customs
 * file: sneak_customs\SneakCustoms_config.cpp
 * Author: Sneak
 * sneakcustoms@gmail.com
 * This extension is licensed under the Arma Public Licence
 ********************************************************************/
class CfgSneakCustoms{

	class SneakCustoms{};

#include "AH1Z.hpp"
#include "BSF_AH6_MELB.hpp"
#include "BSF_Bobcat.hpp"
#include "BSF_Cheetah.hpp"
#include "BSF_Cycles.hpp"
#include "BSF_Ghosthawk.hpp"
#include "BSF_Gorgon.hpp"
#include "BSF_HEMMT.hpp"
#include "BSF_Hummingbird.hpp"
#include "BSF_Huron.hpp"
#include "BSF_M1240.hpp"
#include "BSF_Marshall.hpp"
#include "BSF_Mi24.hpp"
#include "BSF_Mohawk.hpp"
#include "BSF_MRAP.hpp"
#include "BSF_MRZR.hpp"
#include "BSF_Orca.hpp"
#include "BSF_Panther.hpp"
#include "BSF_RG33.hpp"
#include "BSF_Scooter.hpp"
#include "BSF_SDV.hpp"
#include "BSF_Taru.hpp"
#include "BSF_Tigr.hpp"
#include "BSF_UH1Y.hpp"
#include "BSF_Ural.hpp"


////////////////////////////////
//BOX VAN
////////////////////////////////

	class BSF_Box_Van_Base{
		skins[] = {
			{"SneakCustoms_Car_Van_Box_Medic", 1}
		};
	};

	class Exile_Car_Van_Box_Abstract: BSF_Box_Van_Base{};
	class Exile_Car_Van_Abstract: BSF_Box_Van_Base{};

//Textures
	class SneakCustoms_Car_Van_Box_Medic: SneakCustoms{
		skinName = "Medic";
		hiddenSelectionsTextures[] = {"BSF_Community_Addon\addons\BSF_Misc\data\skins\Van\BSF_BoxTruck_Medic.paa"};
		availableFor = "Vip";
	};

};
