// BSF_Client_RemoteTest.sqf
// BSF_Client\code\

params ["_message"];


switch (_message) do
{
	case "Hello" : {
		["InfoTitleAndText", ["BSF_Client_RemoteTest", format["%1 - %2", _message, typeName _message]]] call ExileClient_gui_toaster_addTemplateToast;
	};
	case "Goodbye" : {
		["InfoTitleAndText", ["BSF_Client_RemoteTest", format["%1 - %2", _message, typeName _message]]] call ExileClient_gui_toaster_addTemplateToast;
	};
	default {
		["InfoTitleAndText", ["BSF_Client_RemoteTest", format["%1 - %2", _message, typeName _message]]] call ExileClient_gui_toaster_addTemplateToast;
	};

};



