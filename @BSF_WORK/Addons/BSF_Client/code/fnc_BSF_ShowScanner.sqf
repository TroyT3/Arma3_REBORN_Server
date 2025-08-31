// fnc_BSF_ShowScanner.sqf

[] spawn {
	if (ExileClientXM8IsVisible) then
	{
		closeDialog 1;
	}
	else
	{
		if ("Exile_Item_XM8" in (assignedItems player)) then
		{
			if (alive player) then
			{
				[] call ExileClient_gui_xm8_show;
				uiSleep 0.25;
				['ExAd_JX', 0] call ExileClient_gui_xm8_slide;
			};	
		};
	};
};


