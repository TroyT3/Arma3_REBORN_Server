

	// 2 Vehicles
        private _vehicles = [
        ["Exile_Locker", [8079.33, 6425.85, 116.207], [0.990296, 0.138968, 0.00138659], [-0.00129187, -0.000771824, 0.999999], true], //Equipment
		["Exile_Locker", [2756.14, 11262.5, 136.818], [-0.0851855, 0.996365, 0], [0, 0, 1], true], //Armory

        ["Exile_Locker", [11167.6, 9103.77, 65.2057], [0, 1, 0], [0, 0, 1], true], //Waste Dump
        ["Exile_Locker", [6639.36, 3712.12, 238.694], [0, 1, 0], [0.00182698, 0, 0.999998], true], //Spec Ops
        ["Exile_Locker", [3978.02, 9290.03, 150.585], [0.61273, 0.790292, -0.000518203], [0.000845728, 0, 1], true], //Hardware
        ["Exile_Locker", [3109.28, 4492.94, 113.815], [0.12027, 0.992741, -0.000740717], [0.00212837, 0.00048828, 0.999998], true], //Vehicles
        ["Exile_Locker", [10046.7, 4844.48, 17.0556], [0.999429, -0.0337743, -0.00119505], [0.00119573, 0, 0.999999], true], //Aircraft
        ["Exile_ConcreteMixer",[8982.27,7873.28,168.152],[0,1,0],[0,0,1],false],
        ["Exile_ConcreteMixer",[2680.3,6116.71,122.486],[0,0.999445,-0.0333168],[0.0797454,0.0332107,0.996262],false],
        ["Exile_ConcreteMixer",[7405.93,5343.9,25.401],[0,0.999999,-0.00165584],[0.0116625,0.00165573,0.999931],false],
        ["Land_Laptop_device_F", [7579.86, 4539.49, 118.046], [0.0157873, -0.999852, -0.00683447], [-0.00606921, -0.00693102, 0.999958], false],
        ["Exile_Locker", [7579.95, 4530.67, 117.069], [-0.0641174, -0.997942, 3.13073e-005], [0.000488281, 0, 1], true], //Office
        ["Exile_Locker", [7578.25, 4531.9, 117.07], [-0.999908, 0.0135456, 0.000488236], [0.000488281, 0, 1], true], //Office

		["Land_FuelStation_Feed_F", [3121.53, 4488.39, 113.218], [-0.992401, 0.123046, 0], [0, 0, 1], true],	//fixes broken pumps east of Kupres
		["Land_FuelStation_Feed_F", [3114.79, 4489.24, 113.21], [-0.992401, 0.123046, 0], [0, 0, 1], true],		//fixes broken pumps east of Kupres

		["Land_Wreck_Van_F", [4290.83, 3042.37, 212.126], [0.803844, -0.588274, -0.0881456], [0.0510525, -0.0794082, 0.995534], true], 		// Junkyard
		["Land_WoodenBox_F", [4292.3, 3043.01, 210.855], [-0.272201, -0.962228, -0.00481445], [0, -0.00500338, 0.999987], true],			// Junkyard
		["Exile_Locker", [4274.8, 3026.96, 210.43], [-0.843987, -0.131154, -0.520082], [-0.511525, -0.0948442, 0.854018], true],			// Junkyard

		["Exile_Locker", [5724.5, 5432.92, 1.21294], [-0.722695, 0.691149, -0.00488312], [-0.00329363, 0.00362117, 0.999988], true],		// Boat Trader
		["Exile_Locker", [9830.21, 5767.4, 30.969], [-0.191177, 0.981555, 0.000228656], [0.00119604, 0, 0.999999], true],					// Black Market
		["Land_Cliff_stone_medium_F", [11151.4, 9102.22, 65.2046], [0, 0.99986, -0.0167297], [0.00729155, 0.0167293, 0.999833], true],		// Northeast Wastedump
		["Exile_Locker", [8025.82, 5668.48, 26.3759], [0.093266, -0.995641, -0.000101831], [0.00109183, 0, 0.999999], true],				// Black Market
 
		["CUP_A2_garage01", [3925.1, 9235.06, 150.693], [0.776237, -0.630441, 0], [0, 0, 1], true],											// ES Petrol Waste Dump
		["CUP_A2_skodovka_wrecked", [3925.85, 9239.01, 150.128], [-0.737026, 0.675864, 0], [0, 0, 1], true],								// ES Petrol Waste Dump
		["CUP_A2_uaz_wreck", [3911.61, 9237.39, 149.907], [0, 1, 0], [0, 0, 1], true],														// ES Petrol Waste Dump
		["CUP_A2_ural_wrecked", [3917.26, 9241.84, 150.613], [-0.545624, -0.83803, 0], [0, 0, 1], true],									// ES Petrol Waste Dump
		["BlackhawkWreck", [3920.77, 9220.16, 150.834], [0.816993, -0.576647, 0], [0, 0, 1], true],											// ES Petrol Waste Dump
		["land_Objects117", [3919.05, 9236.43, 150.741], [-0.999978, -0.00665325, 0], [0, 0, 1], true],										// ES Petrol Waste Dump
		["CUP_A2_hmmwv_wrecked", [3915.5, 9245.04, 150.463], [-0.769706, -0.638398, 0], [0, 0, 1], true],									// ES Petrol Waste Dump
		["CUP_A1_garbage_misc", [3914.7, 9235.96, 149.512], [-0.772786, -0.634667, 0], [0, 0, 1], true],									// ES Petrol Waste Dump
		["CUP_A1_garbage_paleta", [3919.13, 9241.26, 149.706], [0, 0.998374, 0.0569948], [-0.0263626, -0.056975, 0.998027], true],			// ES Petrol Waste Dump
		["CUP_A2_garbage_long", [3918.03, 9243.64, 149.851], [0, 0.998888, 0.047143], [-0.0164785, -0.0471366, 0.998753], true],			// ES Petrol Waste Dump
		["Exile_Locker", [3924.77, 9237.14, 149.458], [0.627585, 0.778548, 0], [0, 0, 1], true]												// ES Petrol Waste Dump
 
 ];
         
        {
            private _vehicle = (_x select 0) createVehicle (_x select 1);
            _vehicle allowDamage false;
            _vehicle setPosWorld (_x select 1);
            _vehicle setVectorDirAndUp [_x select 2, _x select 3];
            _vehicle enableSimulationGlobal (_x select 4);
            _vehicle setVariable ["ExileIsLocked", -1, true];
           
            if (_vehicle isKindOf "Exile_RussianRouletteChair") then
            {
                ExileRouletteChairs pushBack _vehicle;
                ExileRouletteChairPositions pushBack [_x select 1, getDir _vehicle];
            };
        }
        forEach _vehicles;
        
        _objectNew =
        [
            //Hardware
            ["Land_PortableLight_double_F",[3965.14,9272.26,150.437],[[-0.349193,-0.937051,0],[0,0,1]],false,true],
            ["Land_PortableLight_double_F",[3944.35,9269.91,150.433],[[0,1,0],[0,0,1]],false,true],
            ["Land_PortableLight_double_F",[3955.87,9262.89,150.429],[[0.98938,-0.145354,0],[0,0,1]],false,true],
            ["Land_PortableLight_double_F",[3957.12,9285.54,150.273],[[-0.729967,0.683482,0],[0,0,1]],false,true],
            ["Land_PortableLight_double_F",[3932.25,9248,150.253],[[0.932758,0.360503,0],[0,0,1]],false,true],
            ["Land_PortableLight_double_F",[3927.15,9260,153.153],[[0,1,0],[0,0,1]],false,true],
            //Dump yard
            ["Land_PortableLight_double_F",[11154.6,9100.81,65.0642],[[-0.670845,-0.741598,0],[0,0,1]],false,true],
            ["Land_PortableLight_double_F",[11162.1,9117.97,64.8971],[[0.774894,-0.632092,0],[0,0,1]],false,true],
            ["Land_PortableLight_double_F",[11151.9,9109.29,64.9188],[[-0.977491,-0.210977,0],[0,0,1]],false,true],
            ["Land_PortableLight_double_F",[11165.5,9096.06,65.0371],[[0.774894,-0.632092,0],[0,0,1]],false,true],
            //Armory
            ["Land_PortableLight_double_F",[2737.52,11288.3,135.131],[[0.774894,-0.632092,0],[0,0,1]],false,true],
            ["Land_PortableLight_double_F",[2729.89,11285.9,134.691],[[0.207816,-0.978168,0],[0,0,1]],false,true],
            ["Land_PortableLight_double_F",[2733,11268.4,135.595],[[-0.895437,0.445189,0],[0,0,1]],false,true],
            ["Land_PortableLight_double_F",[2755.21,11256,137.124],[[0.62975,-0.776798,0],[0,0,1]],false,true],
            //Vehicle
            ["Land_PortableLight_double_F",[3112.41,4485.39,114.018],[[0.207816,-0.978168,0],[0,0,1]],false,true],
            ["Land_PortableLight_double_F",[3128.56,4486.91,114.079],[[0.981938,-0.189202,0],[0,0,1]],false,true],
            ["Land_PortableLight_double_F",[3136.77,4506.04,113.763],[[-0.193578,-0.981085,0],[0,0,1]],false,true],
            //Boat
            ["Land_PortableLight_double_F",[5717.47,5429.94,1.32746],[[-0.918538,-0.395333,0],[0,0,1]],false,true],
            ["Land_PortableLight_double_F",[5710.67,5414.46,3.96071],[[0.917134,-0.398579,0],[0,0,1]],false,true],
            ["Land_PortableLight_double_F",[5747.52,5435.26,0.880503],[[-0.657295,-0.753634,0],[0,0,1]],false,true],
            ["Land_PortableLight_double_F",[5727.66,5428.84,1.28007],[[-0.749932,-0.661515,0],[0,0,1]],false,true],
            //Spec Ops
            ["Land_PortableLight_double_F",[6632.05,3697.65,239.054],[[-0.157023,0.987595,0],[0,0,1]],false,true],
            ["Land_PortableLight_double_F",[6628.81,3714.74,237.122],[[-0.973785,0.22747,0],[0,0,1]],false,true],
            ["Land_PortableLight_double_F",[6648.22,3713.07,241.173],[[-0.998223,-0.0595836,0],[0,0,1]],false,true],
            //Office
            ["Land_PortableLight_double_F",[7585.44,4511.75,114.238],[[-0.012135,0.999926,0],[0,0,1]],false,true],
            ["Land_PortableLight_double_F",[7590.36,4512.02,114.101],[[-0.012135,0.999926,0],[0,0,1]],false,true],
            ["Land_PortableLight_double_F",[7586.32,4534.06,117.065],[[-0.988137,0.153573,0],[0,0,1]],false,true],
            ["Land_PortableLight_double_F",[7581.43,4531.58,117.068],[[-0.0273569,-0.999626,0],[0,0,1]],false,true],
            //Equipment
            ["Land_PortableLight_double_F",[8090.87,6427.72,116.514],[[0.911509,0.411281,0],[0,0,1]],false,true],
            ["Land_PortableLight_double_F",[8082.35,6415.47,116.194],[[-0.591621,-0.806216,0],[0,0,1]],false,true],
            ["Land_PortableLight_double_F",[8078.42,6439.17,116.556],[[-0.420098,-0.907479,0],[0,0,1]],false,true],
            ["Land_PortableLight_double_F",[8074.33,6426.1,116.201],[[-0.0339127,0.999425,0],[0,0,1]],false,true]
        ];

        {
            private ["_objectNew"];

            _object = (_x select 0) createVehicle [0,0,0];
            _object setPosASL (_x select 1);
            _object setVectorDirAndUp (_x select 2);
            _object allowDamage (_x select 3);
            _object enableSimulationGlobal (_x select 4);
        }
        forEach _objectNew;     
 
        // 50 Simple Objects
        private _invisibleSelections = ["zasleh", "zasleh2", "box_nato_grenades_sign_f", "box_nato_ammoord_sign_f", "box_nato_support_sign_f"];
        private _simpleObjects = [
        //Equipment Trader
        ["ca\buildings\furniture\ammobednax.p3d", [8080.06, 6416.2, 116.2], [-0.993655, -0.11246, -0.00137047], [-0.00129187, -0.000771824, 0.999999]],
        ["ca\buildings\furniture\bedna_ammo2x.p3d", [8078.91, 6415.35, 116.623], [0, 1, 0], [0, 0, 1]],
        ["ca\signs2\signt\sign_badroadside.p3d", [7954.57, 6400.94, 114.411], [0, 0.995037, 0.0995048], [0.0945743, -0.0990588, 0.990577]],
        ["ca\misc\barbedwire.p3d", [8086.5, 6415.51, 117.012], [0, 0.999999, -0.00133721], [-0.0130287, 0.0013371, 0.999914]],
        ["ca\misc\barel6.p3d", [8081.35, 6418.35, 116.757], [0.862667, -0.505482, 0.0171156], [-0.0205067, -0.00114447, 0.999789]],
        ["ca\misc\barel1.p3d", [8082.03, 6418.11, 116.771], [0, 0.999999, 0.00109178], [-0.0154904, -0.00109165, 0.999879]],
        ["ca\misc\barel3.p3d", [8081.81, 6417.32, 116.766], [0, 0.999999, 0.00114471], [-0.0205067, -0.00114447, 0.999789]],
        ["ca\misc\barel1.p3d", [8082.41, 6417.31, 116.776], [0, 0.999999, 0.00109178], [-0.0154904, -0.00109165, 0.999879]],
        ["ca\misc\barel6.p3d", [8081.7, 6415.94, 116.762], [0, 0.999999, 0.00114471], [-0.0205067, -0.00114447, 0.999789]],
        ["ca\structures\furniture\decoration\box_c\box_c.p3d", [8077.01, 6413.97, 116.473], [0, 1, 0], [0, 0, 1]],
        ["ca\structures\furniture\decoration\box_c\box_c.p3d", [8078.05, 6414.27, 116.516], [0, 1, 0], [0, 0, 1]],
        ["ca\buildings2\misc_cargo\misc_cargo2e.p3d", [8074.51, 6429.67, 118.652], [-0.998444, -0.0526674, -0.0183128], [-0.0177159, -0.0117775, 0.999774]],
        ["ca\misc_e\misc_cargo2e_ep1.p3d", [8068.2, 6428.88, 118.581], [0.98664, 0.162853, 0.00445476], [-0.00393664, -0.00350407, 0.999986]],
        ["ca\misc3\cncblock.p3d", [8068.47, 6433.31, 116.463], [0, 0.999788, 0.020602], [-0.00395175, -0.0206019, 0.99978]],
        ["ca\structures\misc\misc_deerstand\misc_deerstand.p3d", [8091.48, 6433.71, 118.844], [0.121166, -0.991989, -0.0357305], [-0.0428367, -0.0411877, 0.998233]],
        ["ca\misc3\toilet.p3d", [8081.47, 6423.84, 117.406], [-0.998843, -0.0448226, -0.0174016], [-0.0174037, -0.000345003, 0.999848]],
        ["ca\structures_e\misc\misc_garbage\misc_garb_heap_ep1.p3d", [8080.89, 6425.64, 116.564], [0, 1, 0.000345055], [-0.0174037, -0.000345003, 0.999848]],
        ["ca\structures_e\misc\misc_garbage\misc_garb_heap_ep1.p3d", [8080.87, 6426.81, 116.573], [0, 0.999931, 0.0117793], [-0.0174037, -0.0117776, 0.999779]],
        ["ca\misc\popelnice.p3d", [8081.77, 6425.19, 116.684], [0, 1, 0.000345055], [-0.0174037, -0.000345003, 0.999848]],
        ["ca\misc\popelnice.p3d", [8080.48, 6424.92, 116.661], [0, 1, 0.000345055], [-0.0174037, -0.000345003, 0.999848]],
        ["ca\misc\heli_h_civil.p3d", [8051.67, 6457.1, 116.371], [0, 0.999133, -0.0416297], [0.0216599, 0.0416199, 0.998899]],
        ["cup\terrains\cup_terrains_cwa_misc\cwa_crates.p3d", [8074.53, 6414.38, 116.424], [0, 1, 0.000771824], [-0.00129187, -0.000771824, 0.999999]],
        ["cup\terrains\cup_terrains_cwa_misc\cwa_crates.p3d", [8073.72, 6414.34, 116.423], [-0.991661, 0.128866, -0.00118164], [-0.00129187, -0.000771824, 0.999999]],
        ["ca\buildings\misc\plot_provizorni.p3d", [8048.96, 6445.36, 116.946], [-0.0800344, 0.994898, 0.061421], [-0.0259136, -0.0636746, 0.997634]],
        ["ca\buildings\misc\plot_provizorni.p3d", [8057.36, 6446.58, 117.182], [-0.165007, 0.986244, 0.00971137], [-0.00836508, -0.0112454, 0.999902]],
        ["ca\buildings\misc\hrobecek.p3d", [8063.67, 6427.84, 116.124], [-0.141197, 0.989982, 0.000113683], [-0.00559927, -0.000913431, 0.999984]],
        ["ca\buildings\misc\hrobecek.p3d", [8062.35, 6427.72, 116.116], [-0.141197, 0.989982, 0.000113683], [-0.00559927, -0.000913431, 0.999984]],
        ["ca\buildings\misc\hrobecek.p3d", [8061.01, 6427.76, 116.108], [-0.141196, 0.989981, 0.00107556], [-0.00670383, -0.00204255, 0.999975]],
        ["ca\misc\m113t.p3d", [8067.87, 6436.75, 117.549], [0, 0.99933, 0.0366003], [-0.0199559, -0.0365931, 0.999131]],
        ["a3\structures_f\wrecks\wreck_skodovka_f.p3d", [8090.11, 6441.06, 117.375], [0.420828, 0.906965, 0.0178355], [-0.00904959, -0.0154629, 0.999839]],
        ["a3\structures_f\wrecks\wreck_skodovka_f.p3d", [8038.29, 6424.76, 116.313], [-0.9885, -0.150469, -0.015086], [-0.0155327, 0.00179384, 0.999878]],
        ["a3\structures_f\wrecks\wreck_truck_dropside_f.p3d", [8045.46, 6416.57, 117.33], [-0.998125, -0.061198, -0.00133668], [-0.00129187, -0.000771824, 0.999999]],
        ["a3\structures_f\civ\camping\sun_chair_green_f.p3d", [8071.64, 6414.55, 116.33], [0.0570301, -0.998372, -0.000696893], [-0.00129187, -0.000771824, 0.999999]],
        ["a3\structures_f_exp\walls\slum\slumwall_01_s_4m_f.p3d", [8070.92, 6415.02, 116.566], [-0.997887, -0.0649709, 0], [0, 0, 1]],
        ["a3\structures_f_exp\walls\slum\slumwall_01_s_4m_f.p3d", [8072.81, 6417.27, 116.571], [-0.066519, 0.997785, 0], [0, 0, 1]],
        ["a3\structures_f\civ\camping\campingtable_small_f.p3d", [8071.85, 6416.42, 116.596], [0, 1, 0.000771824], [-0.00129187, -0.000771824, 0.999999]],
        //Armory Trader
        ["ca\weapons\ammoboxes\usbasicammo.p3d", [2751.05, 11263.2, 137.141], [0, 1, 0], [0, 0, 1]],
        ["ca\weapons\ammoboxes\usbasicammo.p3d", [2751.93, 11263.2, 137.141], [0.993018, 0.117962, 0], [0, 0, 1]],
        ["ca\misc3\camonet_nato_var1.p3d", [2751.35, 11265.2, 139.093], [0, 1, 0], [0, 0, 1]],
        ["ca\misc\misc_backpackheap.p3d", [2748.46, 11269.6, 136.744], [0, 0.999837, -0.018036], [-0.0100245, 0.018035, 0.999787]],
        ["a3\structures_f\civ\camping\tenta_f.p3d", [2748.14, 11267.7, 137.088], [0.999759, 0.0213737, 0.00506135], [-0.0053265, 0.0123667, 0.999909]],
        ["ca\misc_e\cluttercutter_small_ep1.p3d", [2746.43, 11268, 136.394], [0, 0.999939, -0.0110105], [0.00535993, 0.0110104, 0.999925]],
        ["ca\misc_e\cluttercutter_small_ep1.p3d", [2746.25, 11266.5, 136.4], [0, 0.999923, -0.0123717], [-0.0685358, 0.0123426, 0.997572]],
        ["a3\structures_f\system\cluttercutter_medium_f.p3d", [2748.89, 11265.8, 136.533], [0, 0.999924, -0.0123669], [-0.0053265, 0.0123667, 0.999909]],
        ["ca\weapons\ammoboxes\usspecialweapons.p3d", [2749.06, 11262.9, 137.93], [0.997377, 0.0722523, 0.00441941], [-0.0053265, 0.0123667, 0.999909]],
        ["ca\weapons\ammoboxes\usspecialweapons.p3d", [2748.77, 11264.7, 137.906], [-0.959487, 0.281621, -0.00859421], [-0.0053265, 0.0123667, 0.999909]],
        ["ca\misc\ural_wrecked.p3d", [2737.81, 11280.8, 136.467], [-0.441742, 0.895672, -0.051331], [-0.051676, 0.0317181, 0.99816]],
        //Hardware Trader
        ["a3\structures_f\civ\constructions\cinderblocks_f.p3d", [3968, 9288.34, 150.586], [-0.704579, 0.709626, 0.000595886], [0.000845734, 0, 1]],
        ["a3\structures_f\civ\camping\fieldtoilet_f.p3d", [3964.95, 9287.18, 151.647], [0.63655, 0.771227, -0.00356429], [0.00559929, 0, 0.999984]],
        ["a3\structures_f_heli\civ\constructions\gastank_02_f.p3d", [3976.52, 9283.94, 151.451], [0, 1, 0], [0.000845734, 0, 1]],
        ["a3\structures_f_heli\civ\constructions\gastank_02_f.p3d", [3976.21, 9283.71, 151.452], [0.586025, -0.810293, -0.000495621], [0.000845734, 0, 1]],
        ["a3\structures_f_heli\civ\constructions\weldingtrolley_01_f.p3d", [3975.52, 9283.2, 151.283], [0.734974, -0.678095, -0.000621593], [0.000845734, 0, 1]],
        ["a3\structures_f\civ\camping\sun_chair_green_f.p3d", [3972.76, 9288.06, 150.732], [0.606342, 0.795204, -0.000512805], [0.000845734, 0, 1]],
        ["a3\structures_f\civ\camping\campingtable_small_f.p3d", [3970.53, 9291.53, 150.998], [-0.711247, 0.702942, 0.000601526], [0.000845734, 0, 1]],
        ["sar_ru_architect\a_uaz_dovn.p3d", [3961.43, 9273.22, 151.085], [0, 1, 0], [0, 0, 1]],
        ["sar_ru_architect\zaporosez.p3d", [3964.11, 9269.33, 150.703], [0.239791, -0.970824, 0], [0, 0, 1]],
        ["a3\structures_f_exp\walls\tin\tinwall_01_m_4m_v1_f.p3d", [3968.04, 9285.29, 151.26], [0.650826, 0.759227, 0], [0, 0, 1]],
        ["a3\structures_f_exp\walls\tin\tinwall_01_m_4m_v1_f.p3d", [3967.97, 9285.27, 152.526], [0.650826, 0.759227, 0], [0, 0, 1]],
        ["a3\structures_f\furniture\chairplastic_f.p3d", [3974.59, 9282.36, 151.07], [-0.67405, -0.738685, 0.000570067], [0.000845734, 0, 1]],
        ["a3\structures_f\furniture\chairplastic_f.p3d", [3973.99, 9281.66, 151.071], [-0.67405, -0.738685, 0.000570067], [0.000845734, 0, 1]],
        //Spec Ops
        ["ca\weapons\ammoboxes\usspecialweapons.p3d", [6642.57, 3711.85, 240.048], [0, 1, 0], [0.00182659, 0, 0.999998]],
        ["ca\weapons\ammoboxes\usspecialweapons.p3d", [6642.55, 3710.51, 240.048], [0.236028, -0.971746, -0.000431127], [0.00182659, 0, 0.999998]],
        ["ca\weapons\ammoboxes\usspecialweapons.p3d", [6648.36, 3713.3, 240.158], [0, 1, 0], [0.00182659, 0, 0.999998]],
        ["ca\weapons\ammoboxes\usbasicweapons.p3d", [6642.71, 3709.36, 239.979], [0, 1, 0], [0.00182659, 0, 0.999998]],
        ["ca\weapons\ammoboxes\usbasicweapons.p3d", [6641.26, 3711.76, 239.982], [0, 1, 0], [0.00182659, 0, 0.999998]],
        ["ca\weapons\ammoboxes\usbasicweapons.p3d", [6647.5, 3713.42, 240.091], [0, 1, 0], [0.00182659, 0, 0.999998]],
        ["ca\misc3\antenna.p3d", [6639.97, 3709.78, 245.76], [0, 1, 0], [0, 0, 1]],
        ["a3\structures_f_epa\mil\scrapyard\paperbox_closed_f.p3d", [6638.15, 3703.78, 239.339], [0.0450621, 0.998984, -8.231e-005], [0.00182659, 0, 0.999998]],
        ["a3\structures_f_epa\mil\scrapyard\paperbox_closed_f.p3d", [6639.68, 3703.6, 239.336], [0.0450621, 0.998984, -8.231e-005], [0.00182659, 0, 0.999998]],
        ["a3\structures_f_epa\mil\scrapyard\paperbox_open_full_f.p3d", [6641.25, 3703.55, 239.298], [0, 1, 0], [0.00182659, 0, 0.999998]],
        ["ca\misc3\camonet_nato_var1.p3d", [6631.63, 3707.93, 239.751], [-0.999402, 0.0345743, 0], [0, 0, 1]],
        ["a3\structures_f\furniture\chairplastic_f.p3d", [6644.72, 3713.06, 239.283], [0.994709, 0.102715, -0.00181693], [0.00182659, 0, 0.999998]],
        ["a3\structures_f\furniture\chairplastic_f.p3d", [6646.05, 3713.09, 239.284], [0.954726, -0.297487, 0], [0, 0, 1]],
        ["ca\structures\furniture\chairs\vojenska_palanda\vojenska_palanda.p3d", [6648.83, 3708.94, 238.676], [0.0377245, 0.999288, -6.89072e-005], [0.00182659, 0, 0.999998]],
        //Waste Dump
        ["a3\structures_f\households\slum\cargo_house_slum_f.p3d", [11168, 9099.22, 65.5674], [0.998472, -0.0552545, 0], [0, 0, 1]],
        ["a3\structures_f\households\slum\cargo_addon01_v1_f.p3d", [11165.5, 9103.01, 65.6134], [0.999348, -0.036092, 0], [0, 0, 1]],
        ["a3\structures_f\households\slum\cargo_addon01_v1_f.p3d", [11165.4, 9099.11, 65.636], [0.997348, -0.0727815, 0], [0, 0, 1]],
        ["a3\structures_f\households\slum\slum_house02_f.p3d", [11177, 9097.9, 66.1275], [-0.996371, 0.0851153, 0], [0, 0, 1]],
        ["a3\structures_f\households\slum\cargo_addon02_v1_f.p3d", [11171.1, 9100.39, 65.7579], [-0.999132, 0.0416683, 0], [0, 0, 1]],
        ["a3\structures_f\wrecks\wreck_truck_dropside_f.p3d", [11171.6, 9100.94, 66.2656], [0, 1, 0], [-0.0155672, 0, 0.999879]],
        ["a3\structures_f\wrecks\wreck_t72_hull_f.p3d", [11149.1, 9103.95, 65.687], [-0.898287, -0.439189, 0.0138995], [0.00729155, 0.0167293, 0.999833]],
        ["a3\structures_f\wrecks\wreck_slammer_hull_f.p3d", [11142.2, 9107.52, 65.7072], [0.288531, -0.957285, 0.0188256], [-0.000345267, 0.0195578, 0.999809]],
        ["ca\wheeled\skodovka_wrecked.p3d", [11145.4, 9101.23, 65.6811], [0, 1, 0], [0, 0, 1]],
        ["ca\wheeled\skodovka_wrecked.p3d", [11142.1, 9100.55, 65.6803], [1, 0.000574068, 0], [0, 0, 1]],
        ["ca\wheeled\skodovka_wrecked.p3d", [11164.3, 9118.3, 65.5074], [0, 0.999996, -0.00265204], [-0.012482, 0.00265184, 0.999919]],
        ["ca\wheeled\skodovka_wrecked.p3d", [11166.4, 9111.24, 65.5445], [0.67988, -0.733294, 0.0065565], [-0.00927082, 0.000345252, 0.999957]],
        ["ca\wheeled\skodovka_wrecked.p3d", [11180.9, 9153.6, 67.2943], [0, 0.998989, 0.0449566], [0.26749, -0.0433184, 0.962586]],
        ["ca\wheeled\skodovka_wrecked.p3d", [11205, 9144.77, 65.8781], [-0.752188, -0.649451, 0.111475], [0.135419, 0.0132089, 0.9907]],
        ["a3\structures_f\wrecks\wreck_ural_f.p3d", [11201.7, 9128.8, 67.3647], [-0.950328, 0.296193, -0.095643], [-0.101152, -0.00329447, 0.994865]],
        ["a3\structures_f\wrecks\wreck_ural_f.p3d", [11180.9, 9122.71, 66.1648], [-0.459796, -0.887938, 0.0123594], [0, 0.0139178, 0.999903]],
        ["ca\misc\datsun01t.p3d", [11147.8, 9117.15, 65.5649], [0, 0.999969, -0.0078429], [-0.00150498, 0.00784289, 0.999968]],
        ["ca\misc\datsun01t.p3d", [11152.3, 9131.43, 65.4347], [-0.474694, -0.880138, -0.00471569], [-0.0343815, 0.0131891, 0.999322]],
        ["ca\misc\datsun02t.p3d", [11147.6, 9129.45, 65.5397], [0.953034, -0.302864, 0.000530291], [0.00656916, 0.0224219, 0.999727]],
        ["a3\structures_f\wrecks\wreck_offroad_f.p3d", [11145.2, 9121.91, 65.6671], [-0.931624, 0.36324, -0.0115548], [-0.00154408, 0.0278379, 0.999611]],
        ["a3\structures_f\wrecks\wreck_offroad_f.p3d", [11151.2, 9098.6, 66.0342], [0.923189, 0.384347, 0], [0, 0, 1]],
        ["ca\misc\hiluxt.p3d", [11181.7, 9099.74, 65.9297], [0, 1, -0.000488281], [-0.000345267, 0.000488281, 1]],
        ["ca\misc\hiluxt.p3d", [11181, 9103.27, 65.9109], [0.842872, 0.538068, -0.00708929], [-0.000345267, 0.0137151, 0.999906]],
        ["a3\structures_f\wrecks\wreck_hunter_f.p3d", [11144, 9094.6, 66.9698], [0, 1, 0], [0, 0, 1]],
        ["a3\structures_f\wrecks\wreck_hunter_f.p3d", [11141.9, 9116.56, 66.6832], [-0.844229, -0.535979, -0.00183608], [-0.00822135, 0.00952418, 0.999921]],
        ["a3\structures_f\wrecks\wreck_hunter_f.p3d", [11189.8, 9128.53, 66.8388], [0.97611, -0.217165, 0.006957], [-0.00689666, 0.00103578, 0.999976]],
        ["ca\wheeled\hmmwv_wrecked.p3d", [11190.4, 9132.2, 65.9192], [0, 0.999153, 0.0411488], [-0.106828, -0.0409133, 0.993435]],
        ["ca\wheeled\hmmwv_wrecked.p3d", [11184.4, 9126.81, 65.8359], [0.98835, -0.152007, 0.00756778], [-0.00760366, 0.000345257, 0.999971]],
        ["ca\wheeled\hmmwv_wrecked.p3d", [11148.9, 9094.3, 66.0064], [0.941989, 0.335642, 0], [0, 0, 1]],
        ["a3\structures_f\wrecks\wreck_car3_f.p3d", [11136.7, 9110.71, 65.614], [0, 0.999893, -0.0146195], [-0.0103636, 0.0146188, 0.999839]],
        ["a3\structures_f\wrecks\wreck_car3_f.p3d", [11175.4, 9155.81, 68.8429], [0.96277, -0.167739, -0.211985], [0.190002, -0.137903, 0.97205]],
        ["a3\structures_f\wrecks\wreck_car_f.p3d", [11171.8, 9089.6, 65.8804], [0, 0.999989, -0.00474662], [-0.0024657, 0.00474661, 0.999986]],
        ["a3\structures_f\wrecks\wreck_car2_f.p3d", [11154.5, 9086.58, 65.9439], [0.677218, -0.735782, 0.000487862], [-0.000345267, 0.000345267, 1]],
        ["a3\structures_f\wrecks\wreck_truck_f.p3d", [11153.5, 9094.62, 66.3739], [0, 1, 0], [0, 0, 1]],
        ["a3\structures_f\wrecks\wreck_truck_f.p3d", [11164.5, 9114.55, 66.2153], [0.984383, 0.175889, 0.00733784], [-0.00861777, 0.00651421, 0.999942]],
        ["a3\structures_f\wrecks\wreck_bmp2_f.p3d", [11192.5, 9079.46, 68.5437], [0, 0.979962, -0.199187], [0, 0.199187, 0.979962]],
        ["a3\props_f_exp\industrial\heavyequipment\bulldozer_01_wreck_f.p3d", [11131.6, 9099.65, 66.4782], [0.991174, 0.132554, -0.0016254], [-0.000488281, 0.0159118, 0.999873]],
        ["a3\structures_f\civ\camping\campingtable_f.p3d", [11165, 9102.74, 65.4066], [-0.98872, 0.149768, 0.00160256], [0.00310737, 0.00981417, 0.999947]],
        ["a3\structures_f\civ\camping\campingchair_v1_f.p3d", [11166.4, 9103, 65.511], [0.991434, -0.129578, 0.016403], [-0.0155672, 0.00746033, 0.999851]],
        ["a3\structures_f\civ\camping\campingchair_v1_folded_f.p3d", [11166, 9101.5, 110.075], [0.780819, -0.624651, 0.011516], [-0.0110477, 0.00462482, 0.999928]],
        ["a3\structures_f\civ\camping\campingchair_v1_folded_f.p3d", [11165.9, 9100.91, 65.0782], [0, 0.999989, -0.00463223], [0.00310737, 0.00463221, 0.999984]],
        ["a3\structures_f\civ\camping\sun_chair_green_f.p3d", [11174.8, 9100.81, 65.4706], [-0.98387, 0.178885, 0], [0, 0, 1]],
        //Vehicles
        ["a3\structures_f\civ\camping\tentdome_f.p3d", [3107.19, 4496.12, 114.382], [0, 1, 0], [0, 0, 1]],
        ["a3\structures_f\civ\accessories\woodpile_f.p3d", [3106.42, 4490.59, 114.023], [0, 1, 0], [0, 0, 1]],
        ["a3\structures_f\civ\camping\campfire_f.p3d", [3102.45, 4494.31, 113.982], [0, 1, 0], [0, 0, 1]],
        ["ca\structures\misc\misc_deerstand\misc_deerstand.p3d", [3132.58, 4471.73, 115.908], [0.89107, 0.453865, 0], [0, 0, 1]],
        ["ca\structures\misc\misc_deerstand\misc_deerstand.p3d", [3139.11, 4503.71, 115.909], [-0.140665, -0.990057, 0], [0, 0, 1]],
        //Aircraft
        ["a3\structures_f\civ\camping\sun_chair_green_f.p3d", [10042.2, 4840.25, 17.2036], [0, 1, 0], [0.00119573, 0, 0.999999]],
        ["ca\misc\mutt_vysilacka.p3d", [10046.4, 4843.06, 18.8479], [0, 1, 0], [0, 0, 1]],
        ["ca\weapons\ammoboxes\usbasicammo.p3d", [10041.2, 4845.1, 17.2839], [0, 1, 0], [0.00119604, 0, 0.999999]],
        //Office and Roulette
        ["ca\misc2\desk\desk.p3d", [7579.91, 4539.67, 117.476], [0.00137273, -0.999999, -6.70036e-007], [0.000488106, 0, 1]],
        ["a3\structures_f_heli\furniture\officecabinet_01_f.p3d", [7581.26, 4539.89, 117.849], [0, 1, 0], [0.000488106, 0, 1]],
        ["ca\buildings\podesta_1_cube.p3d", [7583.35, 4545.3, 113.029], [0, 1, 0], [0, 0, 1]],
        ["a3\structures_f\furniture\chairwood_f.p3d", [7579.95, 4538.87, 117.068], [-0.0222973, -0.999751, 1.08835e-005], [0.000488106, 0, 1]],
        ["ca\structures_e\misc\misc_interier\table_ep1.p3d", [7578.77, 4533.55, 117.478], [0, 1, 0], [0.000488281, 0, 1]],
        ["ca\buildings\furniture\armchair.p3d", [7584.66, 4532.71, 117.066], [0.997437, -0.0715461, -0.00048703], [0.000488281, 0, 1]],
        ["cup\terrains\cup_terrains_cwa_furniture\lamps\hangar_lampicka.p3d", [7580.58, 4539.78, 118.107], [-0.999977, -0.00680255, 0.00048827], [0.000488281, 0, 1]],
        ["ca\structures\furniture\chairs\vojenska_palanda\vojenska_palanda.p3d", [7578.74, 4536.8, 117.07], [-0.0115734, 0.999933, 5.65105e-006], [0.000488281, 0, 1]]
        ];
 
        {
            private _simpleObject = createSimpleObject [_x select 0, _x select 1];
            _simpleObject setVectorDirAndUp [_x select 2, _x select 3];
           
            {
                if ((toLower _x) in _invisibleSelections) then
                {
                    _simpleObject hideSelection [_x, true];
                };
            }
            forEach (selectionNames _simpleObject);
        }
        forEach _simpleObjects;