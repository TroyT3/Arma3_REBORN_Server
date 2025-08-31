/**
 * Created with Exile Mod 3DEN Plugin
 * www.exilemod.com
 */

ExileRouletteChairs = [];
ExileRouletteChairPositions = [];

// 19 Vehicles
private _vehicles = [
["CUP_A2_Road_asf1_0_2000", [10402.4, 5104.79, 10.8022], [0.138309, 0.990389, 0], [0, 0, 1], true],
["CUP_A2_Road_asf1_6", [10390.8, 5024.65, 7.69185], [0.1383, 0.989622, 0.0389992], [0.0110303, -0.0409143, 0.999102], true],
["CUP_A2_Road_asf1_0_2000", [10399.9, 5087.57, 9.36563], [0.138309, 0.990389, 0], [0, 0, 1], true],
["CUP_A2_Road_asf1_0_2000", [10397.4, 5070.48, 7.19484], [0.138309, 0.990389, 0], [0, 0, 1], true],
["CUP_A2_Road_asf1_0_2000", [10395, 5053.45, 6.63359], [0.138309, 0.990389, 0], [0, 0, 1], true],
["CUP_A2_Road_asf1_0_2000", [10392.5, 5036.39, 6.25236], [0.138309, 0.990389, 0], [0, 0, 1], true],
["CUP_A2_Road_asf1_6", [10390, 5018.48, 6.03573], [0.1383, 0.989622, 0.0389992], [0.0110303, -0.0409143, 0.999102], true],
["CUP_A2_Road_asf1_0_2000", [10435.1, 5338.79, 5.00843], [0.138309, 0.990389, 0], [0, 0, 1], true],
["CUP_A2_Road_asf1_0_2000", [10437.6, 5355.5, 5.16431], [0.138309, 0.990389, 0], [0, 0, 1], true],
["CUP_A2_Road_asf1_0_2000", [10440, 5371, 5.21531], [0.167027, 0.985952, 0], [0, 0, 1], true],
["CUP_A2_Road_bridge_asf1_25", [10411.7, 5171.23, 0.570419], [0.138309, 0.990115, -0.023291], [0.00209457, 0.0232246, 0.999728], true],
["CUP_A2_Road_bridge_asf1_25", [10408.3, 5146.48, 1.15038], [0.138309, 0.990115, -0.023291], [0.00209457, 0.0232246, 0.999728], true],
["CUP_A2_Road_bridge_asf1_25", [10404.8, 5121.73, 1.73127], [0.138309, 0.990115, -0.023291], [0.00209457, 0.0232246, 0.999728], true],
["CUP_A2_Road_bridge_asf1_25", [10432.5, 5319.75, -2.91545], [0.138309, 0.990115, -0.023291], [0.00209457, 0.0232246, 0.999728], true],
["CUP_A2_Road_bridge_asf1_25", [10429, 5295, -2.33475], [0.138309, 0.990115, -0.023291], [0.00209457, 0.0232246, 0.999728], true],
["CUP_A2_Road_bridge_asf1_25", [10425.5, 5270.24, -1.75247], [0.138309, 0.990115, -0.023291], [0.00209457, 0.0232246, 0.999728], true],
["CUP_A2_Road_bridge_asf1_25", [10422.1, 5245.49, -1.17233], [0.138309, 0.990115, -0.023291], [0.00209457, 0.0232246, 0.999728], true],
["CUP_A2_Road_bridge_asf1_25", [10418.6, 5220.73, -0.591371], [0.138309, 0.990115, -0.023291], [0.00209457, 0.0232246, 0.999728], true],
["CUP_A2_Road_bridge_asf1_25", [10415.2, 5195.98, -0.0113735], [0.138309, 0.990115, -0.023291], [0.00209457, 0.0232246, 0.999728], true]
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

// 0 Simple Objects
private _invisibleSelections = ["zasleh", "zasleh2", "box_nato_grenades_sign_f", "box_nato_ammoord_sign_f", "box_nato_support_sign_f"];
private _simpleObjects = [

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