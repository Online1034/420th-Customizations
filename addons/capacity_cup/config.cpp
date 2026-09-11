class CfgPatches {
    class fdelta_capacity_cup {
        name = "420th Customizations - Capacity Tweaks - CUP Weapons";
        author = "thegamecracks";
        url = "https://github.com/thegamecracks/420th-Customizations";

        requiredVersion = 2.22;
        requiredAddons[] = {
            "A3_Data_F_Decade_Loadorder",
            "CUP_Weapons_Backpacks",
        };
        skipWhenMissingDependencies = 1;

        units[] = {};
    };
};

class CfgVehicles {
    class B_Kitbag_Base;
    class CUP_C_PHOENIX_FIRSTAID : B_Kitbag_Base {
        maximumLoad = 320; // 280
    };
};
