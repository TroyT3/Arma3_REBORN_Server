// JohnO_script_treatWounds
// Treat wounds: requires fresh water + vishpirin

if !(alive player) exitWith {};

if (isNil "BSF_Reborn_TreatBusy") then { BSF_Reborn_TreatBusy = false; };
if (BSF_Reborn_TreatBusy) exitWith {
    ["InfoTitleAndText", ["Busy", "I am already cleaning my wounds..."]] call ExileClient_gui_toaster_addTemplateToast;
};

if (vehicle player != player) exitWith {
    ["InfoTitleAndText", ["Not now", "I should get out first..."]] call ExileClient_gui_toaster_addTemplateToast;
};

if (player getVariable ["BSF_Reborn_Infected", false]) then
{
    private _req = ["Exile_Item_PlasticBottleFreshWater", "Exile_Item_Vishpirin"];
    if ((_req findIf { !(_x in (magazines player)) }) == -1) then
    {
        BSF_Reborn_TreatBusy = true;

        player playActionNow "medic";
        sleep 4;

        player setVariable ["BSF_Reborn_WoundsTreated", true, true];

        ["InfoTitleAndText", ["Cleaned wounds", "I have cleaned my wounds. I should feel better over time."]] call ExileClient_gui_toaster_addTemplateToast;

        { player removeItem _x; } forEach _req;

        BSF_Reborn_TreatBusy = false;
    }
    else
    {
        private _missing = _req select { !(_x in (magazines player)) };
        ["InfoTitleAndText",
            ["Missing items", format ["I am missing: %1", _missing joinString ", "]]
        ] call ExileClient_gui_toaster_addTemplateToast;
    };
}
else
{
    ["InfoTitleAndText", ["I am fine", "I am not wounded."]] call ExileClient_gui_toaster_addTemplateToast;
};

BSF_UpdatingRebornStats = true;
[] call BSF_Client_Update_Reborn_Stats;
