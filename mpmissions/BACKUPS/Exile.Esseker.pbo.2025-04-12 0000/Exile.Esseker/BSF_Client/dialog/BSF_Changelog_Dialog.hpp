// createDialog "BSF_Changelog_Dialog";

class BSF_Changelog_Dialog
{
    idd = 25501;
    onLoad = "disableSerialization; uiNamespace setVariable ['BSF_Changelog_Dialog', _this select 0]; ['Load'] call BSF_Client_ShowChangeLog;";

    class controls
    {
        class BSF_Changelog_Group: BSFControlsGroup
        {
            idc = 5000;
            x = safeZoneX + (pixelW * pixelGrid * 2);
            y = safeZoneY + (pixelH * pixelGrid * 2);
            w = pixelW * pixelGrid * 64;
            h = pixelH * pixelGrid * 90;

            class controls
            {
                class Background: BSFText
                {
                    x = 0;
                    y = 0;
                    w = pixelW * pixelGrid * 64;
                    h = pixelH * pixelGrid * 90;
                    colorBackground[] = {0.05, 0.05, 0.05, 0.95};
                };

                class TitleImage: BSFPictureKeepAspect
                {
                    idc = 1000;
                    text = "BSF_Client\images\BSF_Logo_Dirty_1024x256.paa";
                    x = pixelW * pixelGrid * 20;
                    y = pixelH * pixelGrid * 1;
                    w = pixelW * pixelGrid * 24;
                };

                class Title: BSFText
                {
                    idc = 1001;
                    text = "Changelog";
                    x = pixelW * pixelGrid * 25;
                    y = pixelH * pixelGrid * 10;
                    w = pixelW * pixelGrid * 16;
                    h = pixelH * pixelGrid * 4;
                    sizeEx = pixelH * pixelGrid * 3;
                    colorText[] = {1, 1, 1, 1};
                };

                class ChangelogScrollGroup: BSFControlsGroup
                {
                    idc = 6000;
                    x = pixelW * pixelGrid * 2;
                    y = pixelH * pixelGrid * 14;
                    w = pixelW * pixelGrid * 60;
                    h = pixelH * pixelGrid * 66; // Allow room for scroll

                    class VScrollbar
                    {
                        width = 0.015;
                        autoScrollEnabled = 1;
                    };

                    class controls
                    {
                        class ChangelogText: BSFStructuredText
                        {
                            idc = 1002;
                            text = "";
                            x = 0;
                            y = 0;
                            w = pixelW * pixelGrid * 58;
                            h = pixelH * pixelGrid * 100; // Large enough to scroll
                            colorBackground[] = {0,0,0,0};
                        };
                    };
                };

                class BtnOk: BSFButtonApp
                {
                    idc = 1003;
                    text = "OK, Got it!";
                    onMouseButtonClick = "['OK'] call BSF_Client_ShowChangeLog";
                    x = pixelW * pixelGrid * 48;
                    y = pixelH * pixelGrid * 82;
                    w = pixelW * pixelGrid * 12;
                    h = pixelH * pixelGrid * 4;
                    colorBackground[] = {0.3, 0.3, 0.3, 1};
                };
            };
        };
    };
};
