/*
*
*  MarXet_Traders.sqf
*  Author: WolfkillArcadia
*  © 2016 Arcas Industries
*  This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License.
*  To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
*/
private["_traders","_trader","_signs","_sign"];
_traders = [];
switch (toLower worldName) do {

    case "altis":
    {
		//////////////////////////////////////////////////////////
		//          Eastern Trader
		//////////////////////////////////////////////////////////
        _trader =
        [
            "Exile_Cutscene_Prisoner01",
            "",
            "GreekHead_A3_01",
            ["AidlPercMstpSnonWnonDnon_G01", "AidlPercMstpSnonWnonDnon_G02", "AidlPercMstpSnonWnonDnon_G03", "AidlPercMstpSnonWnonDnon_G04", "AidlPercMstpSnonWnonDnon_G05", "AidlPercMstpSnonWnonDnon_G06"],

            [22117.7,14518.1,0],
            173.5
        ]
        call ExileClient_object_trader_create;
        _traders pushBack _trader;

		//////////////////////////////////////////////////////////
		//          Panochori Trader
		//////////////////////////////////////////////////////////
        _trader =
        [
            "Exile_Cutscene_Prisoner01",
            "",
            "GreekHead_A3_01",
            ["AidlPercMstpSnonWnonDnon_G01", "AidlPercMstpSnonWnonDnon_G02", "AidlPercMstpSnonWnonDnon_G03", "AidlPercMstpSnonWnonDnon_G04", "AidlPercMstpSnonWnonDnon_G05", "AidlPercMstpSnonWnonDnon_G06"],

            [5110.84,10852.5,0],
            330
        ]
        call ExileClient_object_trader_create;
        _traders pushBack _trader;

		//////////////////////////////////////////////////////////
		//          Sideras Trader
		//////////////////////////////////////////////////////////
        _trader =
        [
            "Exile_Cutscene_Prisoner01",
            "",
            "GreekHead_A3_01",
            ["AidlPercMstpSnonWnonDnon_G01", "AidlPercMstpSnonWnonDnon_G02", "AidlPercMstpSnonWnonDnon_G03", "AidlPercMstpSnonWnonDnon_G04", "AidlPercMstpSnonWnonDnon_G05", "AidlPercMstpSnonWnonDnon_G06"],

            [23377.5,24162.2,0.6],
            206.8
        ]
        call ExileClient_object_trader_create;
        _traders pushBack _trader;

		//////////////////////////////////////////////////////////
		//          Terminal Trader
		//////////////////////////////////////////////////////////
        _trader =
        [
            "Exile_Cutscene_Prisoner01",
            "",
            "GreekHead_A3_01",
            ["AidlPercMstpSnonWnonDnon_G01", "AidlPercMstpSnonWnonDnon_G02", "AidlPercMstpSnonWnonDnon_G03", "AidlPercMstpSnonWnonDnon_G04", "AidlPercMstpSnonWnonDnon_G05", "AidlPercMstpSnonWnonDnon_G06"],

            [14588,16791.7,0.1],
            135.7
        ]
        call ExileClient_object_trader_create;
        _traders pushBack _trader;

		//////////////////////////////////////////////////////////
		//          Western Trader
		//////////////////////////////////////////////////////////
        _trader =
        [
            "Exile_Cutscene_Prisoner01",
            "",
            "GreekHead_A3_01",
            ["AidlPercMstpSnonWnonDnon_G01", "AidlPercMstpSnonWnonDnon_G02", "AidlPercMstpSnonWnonDnon_G03", "AidlPercMstpSnonWnonDnon_G04", "AidlPercMstpSnonWnonDnon_G05", "AidlPercMstpSnonWnonDnon_G06"],

            [2997.05,18181.4,0.22],
            238
        ]
        call ExileClient_object_trader_create;
        _traders pushBack _trader;

		//////////////////////////////////////////////////////////
		//          Peninsula Trader
		//////////////////////////////////////////////////////////
        _trader =
        [
            "Exile_Cutscene_Prisoner01",
            "",
            "GreekHead_A3_01",
            ["AidlPercMstpSnonWnonDnon_G01", "AidlPercMstpSnonWnonDnon_G02", "AidlPercMstpSnonWnonDnon_G03", "AidlPercMstpSnonWnonDnon_G04", "AidlPercMstpSnonWnonDnon_G05", "AidlPercMstpSnonWnonDnon_G06"],

            [19152.4,8334.55,0],
            55
        ]
        call ExileClient_object_trader_create;
        _traders pushBack _trader;

		//////////////////////////////////////////////////////////
		//          Kyra Nera Trader
		//////////////////////////////////////////////////////////
        _trader =
        [
            "Exile_Cutscene_Prisoner01",
            "",
            "GreekHead_A3_01",
            ["AidlPercMstpSnonWnonDnon_G01", "AidlPercMstpSnonWnonDnon_G02", "AidlPercMstpSnonWnonDnon_G03", "AidlPercMstpSnonWnonDnon_G04", "AidlPercMstpSnonWnonDnon_G05", "AidlPercMstpSnonWnonDnon_G06"],

            [10279,22417.6,0],
            300
        ]
        call ExileClient_object_trader_create;
        _traders pushBack _trader;
    };

	case "malden": {
        //////////////////////////////////////////////////////////
        //          Airport Trader
        //////////////////////////////////////////////////////////
        _trader =
        [
            "Exile_Cutscene_Prisoner01",
            "",
            "GreekHead_A3_01",
            ["AidlPercMstpSnonWnonDnon_G01", "AidlPercMstpSnonWnonDnon_G02", "AidlPercMstpSnonWnonDnon_G03", "AidlPercMstpSnonWnonDnon_G04", "AidlPercMstpSnonWnonDnon_G05", "AidlPercMstpSnonWnonDnon_G06"],

            [8136.56,10477.9,0],
            270
        ]
        call ExileClient_object_trader_create;
        _traders pushBack _trader;

        //////////////////////////////////////////////////////////
        //          Arette Trader
        //////////////////////////////////////////////////////////
        _trader =
        [
            "Exile_Cutscene_Prisoner01",
            "",
            "GreekHead_A3_01",
            ["AidlPercMstpSnonWnonDnon_G01", "AidlPercMstpSnonWnonDnon_G02", "AidlPercMstpSnonWnonDnon_G03", "AidlPercMstpSnonWnonDnon_G04", "AidlPercMstpSnonWnonDnon_G05", "AidlPercMstpSnonWnonDnon_G06"],

            [1595.61,4644.08,0],
            259
        ]
        call ExileClient_object_trader_create;
        _traders pushBack _trader;

        //////////////////////////////////////////////////////////
        //           Central Trader
        //////////////////////////////////////////////////////////
        _trader =
        [
            "Exile_Cutscene_Prisoner01",
            "",
            "GreekHead_A3_01",
            ["AidlPercMstpSnonWnonDnon_G01", "AidlPercMstpSnonWnonDnon_G02", "AidlPercMstpSnonWnonDnon_G03", "AidlPercMstpSnonWnonDnon_G04", "AidlPercMstpSnonWnonDnon_G05", "AidlPercMstpSnonWnonDnon_G06"],

            [3775.48,7479.05,0],
            132
        ]
        call ExileClient_object_trader_create;
        _traders pushBack _trader;

        //////////////////////////////////////////////////////////
        //          Harbor Trader
        //////////////////////////////////////////////////////////
        _trader =
        [
            "Exile_Cutscene_Prisoner01",
            "",
            "GreekHead_A3_01",
            ["AidlPercMstpSnonWnonDnon_G01", "AidlPercMstpSnonWnonDnon_G02", "AidlPercMstpSnonWnonDnon_G03", "AidlPercMstpSnonWnonDnon_G04", "AidlPercMstpSnonWnonDnon_G05", "AidlPercMstpSnonWnonDnon_G06"],

            [5735.48,2431.13,0],
            240
        ]
        call ExileClient_object_trader_create;
        _traders pushBack _trader;

        //////////////////////////////////////////////////////////
        //          Island Trader
        //////////////////////////////////////////////////////////
        _trader =
        [
            "Exile_Cutscene_Prisoner01",
            "",
            "GreekHead_A3_01",
            ["AidlPercMstpSnonWnonDnon_G01", "AidlPercMstpSnonWnonDnon_G02", "AidlPercMstpSnonWnonDnon_G03", "AidlPercMstpSnonWnonDnon_G04", "AidlPercMstpSnonWnonDnon_G05", "AidlPercMstpSnonWnonDnon_G06"],

            [9372.9,3855,0],
            285.2
        ]
        call ExileClient_object_trader_create;
        _traders pushBack _trader;
    };

	case "tanoa": {
            //////////////////////////////////////////////////////////
        //             East MarXet Trader
        //////////////////////////////////////////////////////////
        _trader =
        [
            "Exile_Cutscene_Prisoner01",
            "",
            "GreekHead_A3_01",
            ["AidlPercMstpSnonWnonDnon_G01", "AidlPercMstpSnonWnonDnon_G02", "AidlPercMstpSnonWnonDnon_G03", "AidlPercMstpSnonWnonDnon_G04", "AidlPercMstpSnonWnonDnon_G05", "AidlPercMstpSnonWnonDnon_G06"],
            [12187.9,8115.48,0],
            60
        ]
        call ExileClient_object_trader_create;
        _traders pushBack _trader;

        //////////////////////////////////////////////////////////
        //             West MarXet Trader
        //////////////////////////////////////////////////////////
        _trader =
        [
            "Exile_Cutscene_Prisoner01",
            "",
            "GreekHead_A3_01",
            ["AidlPercMstpSnonWnonDnon_G01", "AidlPercMstpSnonWnonDnon_G02", "AidlPercMstpSnonWnonDnon_G03", "AidlPercMstpSnonWnonDnon_G04", "AidlPercMstpSnonWnonDnon_G05", "AidlPercMstpSnonWnonDnon_G06"],
            [2271.38,8586.25,0],
            310
        ]
        call ExileClient_object_trader_create;
        _traders pushBack _trader;

        //////////////////////////////////////////////////////////
        //             South MarXet Trader
        //////////////////////////////////////////////////////////
        _trader =
        [
            "Exile_Cutscene_Prisoner01",
            "",
            "GreekHead_A3_01",
            ["AidlPercMstpSnonWnonDnon_G01", "AidlPercMstpSnonWnonDnon_G02", "AidlPercMstpSnonWnonDnon_G03", "AidlPercMstpSnonWnonDnon_G04", "AidlPercMstpSnonWnonDnon_G05", "AidlPercMstpSnonWnonDnon_G06"],
            [11773.9,4131.5,0],
            261
        ]
        call ExileClient_object_trader_create;
        _traders pushBack _trader;

        //////////////////////////////////////////////////////////
        //             North MarXet Trader
        //////////////////////////////////////////////////////////
        _trader =
        [
            "Exile_Cutscene_Prisoner01",
            "",
            "GreekHead_A3_01",
            ["AidlPercMstpSnonWnonDnon_G01", "AidlPercMstpSnonWnonDnon_G02", "AidlPercMstpSnonWnonDnon_G03", "AidlPercMstpSnonWnonDnon_G04", "AidlPercMstpSnonWnonDnon_G05", "AidlPercMstpSnonWnonDnon_G06"],
            [7973.27,12401.8,0],
            40
        ]
        call ExileClient_object_trader_create;
        _traders pushBack _trader;
    };

	case "esseker": {
        _trader =
           [
            "Exile_Cutscene_Prisoner01",
                "",
            "GreekHead_A3_01",
            ["AidlPercMstpSnonWnonDnon_G01", "AidlPercMstpSnonWnonDnon_G02", "AidlPercMstpSnonWnonDnon_G03", "AidlPercMstpSnonWnonDnon_G04", "AidlPercMstpSnonWnonDnon_G05", "AidlPercMstpSnonWnonDnon_G06"],
            [8024.87,5676.46,1.02559],
            262.425
            ]
        call ExileClient_object_trader_create;
            _traders pushBack _trader;

        _trader =   // Petlov Grad Church
           [
            "Exile_Cutscene_Prisoner01",
                "",
            "GreekHead_A3_01",
            ["AidlPercMstpSnonWnonDnon_G01", "AidlPercMstpSnonWnonDnon_G02", "AidlPercMstpSnonWnonDnon_G03", "AidlPercMstpSnonWnonDnon_G04", "AidlPercMstpSnonWnonDnon_G05", "AidlPercMstpSnonWnonDnon_G06"],
            [4301.05,3683.84,0.792114],
            237
            ]
        call ExileClient_object_trader_create;
            _traders pushBack _trader;

        _trader =   // Chokory
           [
            "Exile_Cutscene_Prisoner01",
                "",
            "GreekHead_A3_01",
            ["AidlPercMstpSnonWnonDnon_G01", "AidlPercMstpSnonWnonDnon_G02", "AidlPercMstpSnonWnonDnon_G03", "AidlPercMstpSnonWnonDnon_G04", "AidlPercMstpSnonWnonDnon_G05", "AidlPercMstpSnonWnonDnon_G06"],
            [4731.98,8563.77,0.152954],
            267
            ]
        call ExileClient_object_trader_create;
            _traders pushBack _trader;
    };

	case "lythium": {
        //////////////////////////////////////////////////////////
        //         Northern Trader
        //////////////////////////////////////////////////////////
        _trader =
        [
            "Exile_Cutscene_Prisoner01",
            "",
            "GreekHead_A3_01",
            ["AidlPercMstpSnonWnonDnon_G01", "AidlPercMstpSnonWnonDnon_G02", "AidlPercMstpSnonWnonDnon_G03", "AidlPercMstpSnonWnonDnon_G04", "AidlPercMstpSnonWnonDnon_G05", "AidlPercMstpSnonWnonDnon_G06"],
            [11622,16977,0],
            33
        ]
        call ExileClient_object_trader_create;
        _traders pushBack _trader;

        //////////////////////////////////////////////////////////
        //          Western Trader
        //////////////////////////////////////////////////////////
        _trader =
        [
            "Exile_Cutscene_Prisoner01",
            "",
            "GreekHead_A3_01",
            ["AidlPercMstpSnonWnonDnon_G01", "AidlPercMstpSnonWnonDnon_G02", "AidlPercMstpSnonWnonDnon_G03", "AidlPercMstpSnonWnonDnon_G04", "AidlPercMstpSnonWnonDnon_G05", "AidlPercMstpSnonWnonDnon_G06"],
            [3767,12166.2,0],
            74
        ]
        call ExileClient_object_trader_create;
        _traders pushBack _trader;

        //////////////////////////////////////////////////////////
        //          Eastern Trader
        //////////////////////////////////////////////////////////
        _trader =
        [
            "Exile_Cutscene_Prisoner01",
            "",
            "GreekHead_A3_01",
            ["AidlPercMstpSnonWnonDnon_G01", "AidlPercMstpSnonWnonDnon_G02", "AidlPercMstpSnonWnonDnon_G03", "AidlPercMstpSnonWnonDnon_G04", "AidlPercMstpSnonWnonDnon_G05", "AidlPercMstpSnonWnonDnon_G06"],

            [17044.8,9601.6,0],
            95
        ]
        call ExileClient_object_trader_create;
        _traders pushBack _trader;

        //////////////////////////////////////////////////////////
        //          Sideras Trader
        //////////////////////////////////////////////////////////
        _trader =
        [
            "Exile_Cutscene_Prisoner01",
            "",
            "GreekHead_A3_01",
            ["AidlPercMstpSnonWnonDnon_G01", "AidlPercMstpSnonWnonDnon_G02", "AidlPercMstpSnonWnonDnon_G03", "AidlPercMstpSnonWnonDnon_G04", "AidlPercMstpSnonWnonDnon_G05", "AidlPercMstpSnonWnonDnon_G06"],

            [4165.2,861.6,0],
            290
        ]
        call ExileClient_object_trader_create;
        _traders pushBack _trader;
    };

	case "ChernarusRedux": {
        _trader =
           [
            "Exile_Cutscene_Prisoner01",
                "",
            "GreekHead_A3_01",
            ["AidlPercMstpSnonWnonDnon_G01", "AidlPercMstpSnonWnonDnon_G02", "AidlPercMstpSnonWnonDnon_G03", "AidlPercMstpSnonWnonDnon_G04", "AidlPercMstpSnonWnonDnon_G05", "AidlPercMstpSnonWnonDnon_G06"],
            [8024.87,5676.46,1.02559],
            262.425
            ]
        call ExileClient_object_trader_create;
            _traders pushBack _trader;
    };

};
{
    _x forceAddUniform "U_BG_Guerilla2_1";
    _x addVest "Exile_Vest_Snow";
    _x addHeadgear "H_Watchcap_blk";
    _x addGoggles "G_Bandanna_aviator";
    _x addWeapon "srifle_DMR_04_F";
    _x addPrimaryWeaponItem "optic_LRPS";
    _x addWeapon "hgun_ACPC2_F";
    _x addAction ["<img image='\a3\ui_f\data\IGUI\Cfg\Actions\reammo_ca.paa' size='1' shadow='false' />Access MarXet","createDialog 'RscMarXetDialog'","",1,false,true,"","((position player) distance _target) <= 4"];
} forEach _traders;
[format["MarXet Traders have been placed. Trader count: %1. Map: %2",(count(_traders)),worldName],"Client Traders"] call ExileClient_MarXet_util_log;
