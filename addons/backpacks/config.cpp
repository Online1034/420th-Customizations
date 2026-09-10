class CfgPatches {
    class fdelta_backpacks {
        name = "420th Customizations - Backpacks - Vanilla";
        author = "ol1034, thegamecracks";
        url = "https://github.com/thegamecracks/420th-Customizations";

        requiredVersion = 2.22;
        requiredAddons[] = {
            "A3_Data_F_Decade_Loadorder",
            "fdelta_main",
        };
        skipWhenMissingDependencies = 0;

        units[] = {
            "B_Kitbag_Black_420",
            "B_Kitbag_Digi_420",
        };
    };
};

class CfgVehicles {
    class B_Kitbag_Base;
    class B_Kitbag_Black_420 : B_Kitbag_Base {
        displayName = "Kitbag (Black)";
        hiddenSelectionsTextures[] = {"\a3\weapons_f\ammoboxes\bags\data\backpack_fast_blk_co.paa"};
        picture = "\z\fdelta\addons\backpacks\data\ui\icon_B_Kitbag_Black_420_ca.paa";
        scope = 2;
    };
    class B_Kitbag_Digi_420 : B_Kitbag_Base {
        displayName = "Kitbag (Digi)";
        hiddenSelectionsTextures[] = {"\a3\weapons_f\ammoboxes\bags\data\backpack_fast_digi_co.paa"};
        picture = "\z\fdelta\addons\backpacks\data\ui\icon_B_Kitbag_Digi_420_ca.paa";
        scope = 2;
    };
};
