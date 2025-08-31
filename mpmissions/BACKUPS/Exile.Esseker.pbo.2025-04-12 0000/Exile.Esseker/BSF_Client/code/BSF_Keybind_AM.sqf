// BSF_Keybind_AM.sqf

// if (AM_ACTIVE) then {
// ["SuccessTitleAndText", ["Success", format["AM_ACTIVE %1.",AM_ACTIVE]]] call ExileClient_gui_toaster_addTemplateToast;
// 		uiNamespace setVariable ['BSF_AssetManagement_Dialog', displayNull];
// 		closeDialog 2;
// } else {
// ["SuccessTitleAndText", ["Success", format["AM_ACTIVE %1.",AM_ACTIVE]]] call ExileClient_gui_toaster_addTemplateToast;
// 		createDialog "BSF_AssetManagement_Dialog"; 
// 		AM_ACTIVE = true; 
// };

// params ["_action", "_ctrl"];
// private ["_dialog"];
//         ["SuccessTitleAndText", ["Success", format["_this %1.",_this]]] call ExileClient_gui_toaster_addTemplateToast;

// // Find and store the dialog control
// // _dialog = findDisplay 25301;
//     switch (_action) do {
//         case "open": {

//             // Open the dialog
// 			createDialog "BSF_AssetManagement_Dialog";
//             // _dialog displayCtrl 1234567 ctrlShow true; // Replace 1234567 with the ID of your dialog control
//         };
//         case "close": {
//             // Close the dialog

//             // _dialog displayCtrl 1234567 ctrlShow false; // Replace 1234567 with the ID of your dialog control
//         };
//     };


["SuccessTitleAndText", ["Success", format["BSF_Keybind_AM %1.",_this]]] call ExileClient_gui_toaster_addTemplateToast;
hint str _this;
diag_log format['BSF_Keybind_AM _this: %1', _this];
diag_log format['BSF_Keybind_AM (actionKeys "BSF_OpenAM")       K: %1 - %2', (actionKeys "BSF_OpenAM"), typeName (actionKeys "BSF_OpenAM")];
diag_log format['BSF_Keybind_AM (actionKeys "BSF_Fishing")  Alt-F: %1 - %2', (actionKeys "BSF_Fishing"), typeName (actionKeys "BSF_Fishing")];
diag_log format['BSF_Keybind_AM (actionKeys "BSF_Scanner")  Alt-S: %1 - %2', (actionKeys "BSF_Scanner"), typeName (actionKeys "BSF_Scanner")];
diag_log format['BSF_Keybind_AM (actionKeys "BSF_InstaDoc") Alt-S: %1 - %2', (actionKeys "BSF_InstaDoc"), typeName (actionKeys "BSF_InstaDoc")];

private["_stopPropagation", "_caller", "_keyCode", "_shiftState", "_controlState", "_altState"];
_stopPropagation = false;
_caller = _this select 0;
_keyCode = _this select 1;
_shiftState = _this select 2;
_controlState = _this select 3;
_altState = _this select 4; 

switch (_keyCode) do  
{ 
	case 0x07:
	{
		if !(ExileClientXM8InputBoxFocused) then
		{
			closeDialog 1;
			_stopPropagation = true;
		};
	};

	case (actionKeys "BSF_OpenAM"):
	{
		if !(ExileClientXM8InputBoxFocused) then
		{
			closeDialog 1;
			_stopPropagation = true;
		};
	};
};
_stopPropagation 