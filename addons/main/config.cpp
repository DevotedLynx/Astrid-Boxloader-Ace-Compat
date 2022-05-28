#include "\x\ABAC\addons\main\script_component.hpp"

class CfgPatches
{
    class astrid_main
    {
        name = "Astrid's Boxloader Ace Compat";
        author = "LynxAustralis";
        url = "https://github.com/DevotedLynx/AstridsAdvancedAids/wiki";
        units[] = 
        {
        };
        Weapons[] = 
        {
        };
        requiredVersion = 1.00;
        version = 0.1;
        requiredAddons[]=
        {
            "ace_main",
            "boxloader",
            "cba_main"
        };
    };
};
class CfgMods
{
    class astrid
    {
        dir="@AstridsBoxloaderCompat";
		name="Astrid's Boxloader Ace Compat";
		hidePicture="true";
		hideName="true";
		actionName="Website";
		action="https://github.com/DevotedLynx/Astrid-Boxloader-Ace-Compat/wiki";
		description="";
    };
};