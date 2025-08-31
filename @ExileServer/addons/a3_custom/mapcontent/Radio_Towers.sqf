/**
 * Created with Exile Mod 3DEN Plugin
 * www.exilemod.com
 */

ExileRouletteChairs = [];
ExileRouletteChairPositions = [];

// 18 Vehicles
private _vehicles = [
["Land_TTowerBig_1_F", [2649.43, 1344.94, 465.459], [0, 1, 0], [0, 0, 1], true],
["Land_Pier_Box_F", [2650.16, 1343.74, 422.501], [0, 1, 0], [0, 0, 1], true],
["Land_TTowerBig_2_F", [9956.11, 1001.39, 308.473], [0.0209697, -0.99978, 0], [0, 0, 1], true],
["Land_Pier_Box_F", [9957.14, 1001.2, 261.798], [0.99958, 0.0289777, 0], [0, 0, 1], true],
["Land_Pier_Box_F", [9466.76, 11601.4, 136.997], [0.779153, 0.626833, 0], [0, 0, 1], true],
["Land_TTowerBig_2_F", [9465.82, 11601, 183.727], [0.620572, -0.78415, 0], [0, 0, 1], true],
["Land_Radar_Small_F", [9950.11, 4817.29, 14.254], [-0.951274, -0.308348, 0], [0, 0, 1], true],
["Land_Vysilac_FM", [9799.44, 5564.7, 34.9901], [-0.996216, -0.0869154, 0], [0, 0, 1], true],
["land_Objects96", [11811, 7870.33, 37.9791], [-0.149371, 0.988781, 0.000431461], [0.0028885, 0, 0.999996], true],
["rhs_p37", [6637.39, 3880.29, 255.986], [0, 1, 0], [0, 0, 1], true],
["Land_Radar", [2723.1, 4610.19, 153.376], [0, 1, 0], [0.00248939, 0, 0.999997], true],
["CDF_WarfareBAntiAirRadar", [1054.92, 7791.21, 307.296], [0.000165601, 0.999974, -0.00721871], [0.00538854, 0.00721771, 0.999959], true],
["RU_WarfareBAntiAirRadar", [7390.13, 8859.83, 170.686], [0.806243, -0.585963, -0.0813635], [0.0546139, -0.0632241, 0.996504], true],
["Land_Vysilac_FM", [5964.68, 5256.6, 176.587], [0.999984, 0.00561755, 0], [0, 0, 1], true]
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