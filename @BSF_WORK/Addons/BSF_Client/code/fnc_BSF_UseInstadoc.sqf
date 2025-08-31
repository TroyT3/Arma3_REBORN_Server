// fnc_BSF_UseInstadoc.sqf

if ("Exile_Item_InstaDoc" in (magazines player)) then
	{
	["Exile_Item_InstaDoc"] call ExileClient_object_item_consume;
	["SuccessTitleAndText", ["You used an InstaDoc!", _feedbackString]] call ExileClient_gui_toaster_addTemplateToast;
	}
else
	{
	["Whoops", ["You need a InstaDoc to do that!"]] call ExileClient_gui_notification_event_addNotification;
	};
