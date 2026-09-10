class CfgPatches {
    class fdelta_main {
        name = "420th Customizations";
        author = "thegamecracks";
        url = "https://github.com/thegamecracks/420th-Customizations";

        requiredVersion = 2.22;
        requiredAddons[] = {
            "A3_Data_F_Decade_Loadorder",
            // All vanilla addons should be added here as dependencies.
            // External mods can depend on fdelta_main to transitively depend on
            // these addons.
            "fdelta_backpacks",
            "fdelta_capacity",
            "fdelta_guidance",
            "fdelta_he_rebalance",
            "fdelta_optics_nvgs",
            "fdelta_optics_zoom",
            "fdelta_pylons",
            "fdelta_viv_transport",
        };
        skipWhenMissingDependencies = 0;

        units[] = {};
    };
};
