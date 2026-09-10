
class CfgPatches {
    class fdelta_viv_transport {
        name = "420th Customizations - Vehicle in Vehicle expansion";
        author = "ol1034, thegamecracks";
        url = "https://github.com/thegamecracks/420th-Customizations";

        requiredVersion = 2.22;
        requiredAddons[] = {
            "fdelta_main",
        };
        skipWhenMissingDependencies = 1;

        units[] = {};
    };
};

class CfgVehicles {
    class MRAP_01_base_F;
    class MRAP_02_base_F;
    class Tank_F;
    class VTOL_01_unarmed_base_F;
    class Wheeled_APC_F;

    class VTOL_01_vehicle_base_F: VTOL_01_unarmed_base_F {
        class VehicleTransport {
            class Carrier {
                maxLoadMass = 80000;
            };
        };
    };

    class MRAP_01_gmg_base_F: MRAP_01_base_F {
        class VehicleTransport {
            class Cargo {
                parachuteClass       = "B_Parachute_02_F";              // type of parachute used when dropped in air. When empty then parachute is not used.
                parachuteHeightLimit = 10;                              // minimal height above terrain when parachute is used.
                canBeTransported     = 1;                               // 0 (false) / 1 (true)
                dimensions[]         = {"BBox_1_1_pos","Mirror_R_BR"};  // memory point-based override of automatic bounding box
            };
        };
    };
    class MRAP_02_hmg_base_F: MRAP_02_base_F {
        class VehicleTransport {
            class Cargo {
                parachuteClass       = "B_Parachute_02_F";              // type of parachute used when dropped in air. When empty then parachute is not used.
                parachuteHeightLimit = 10;                              // minimal height above terrain when parachute is used.
                canBeTransported     = 1;                               // 0 (false) / 1 (true)
                dimensions[]         = {"BBox_1_1_pos","Mirror_R_BR"};  // memory point-based override of automatic bounding box
            };
        };
    };
    class APC_Wheeled_02_base_F: Wheeled_APC_F {
        class VehicleTransport {
            class Cargo {
                parachuteClass       = "B_Parachute_02_F";              // type of parachute used when dropped in air. When empty then parachute is not used.
                parachuteHeightLimit = 10;                              // minimal height above terrain when parachute is used.
                canBeTransported     = 1;                               // 0 (false) / 1 (true)
                dimensions[]         = {"BBox_1_1_pos","Mirror_R_BR"};  // memory point-based override of automatic bounding box
            };
        };
    };
    class APC_Wheeled_03_base_F: Wheeled_APC_F {
        class VehicleTransport {
            class Cargo {
                parachuteClass       = "B_Parachute_02_F";              // type of parachute used when dropped in air. When empty then parachute is not used.
                parachuteHeightLimit = 10;                              // minimal height above terrain when parachute is used.
                canBeTransported     = 1;                               // 0 (false) / 1 (true)
                dimensions[]         = {"BBox_1_1_pos","Mirror_R_BR"};  // memory point-based override of automatic bounding box
            };
        };
    };
    class APC_Tracked_01_base_F: Tank_F {
        class VehicleTransport {
            class Cargo {
                parachuteClass       = "B_Parachute_02_F";              // type of parachute used when dropped in air. When empty then parachute is not used.
                parachuteHeightLimit = 10;                              // minimal height above terrain when parachute is used.
                canBeTransported     = 1;                               // 0 (false) / 1 (true)
                dimensions[]         = {"BBox_1_1_pos","Mirror_R_BR"};  // memory point-based override of automatic bounding box
            };
        };
    };
    class APC_Tracked_02_base_F: Tank_F {
        class VehicleTransport {
            class Cargo {
                parachuteClass       = "B_Parachute_02_F";              // type of parachute used when dropped in air. When empty then parachute is not used.
                parachuteHeightLimit = 10;                              // minimal height above terrain when parachute is used.
                canBeTransported     = 1;                               // 0 (false) / 1 (true)
                dimensions[]         = {"BBox_1_1_pos","Mirror_R_BR"};  // memory point-based override of automatic bounding box
            };
        };
    };
    class APC_Tracked_03_base_F: Tank_F {
        class VehicleTransport {
            class Cargo {
                parachuteClass       = "B_Parachute_02_F";              // type of parachute used when dropped in air. When empty then parachute is not used.
                parachuteHeightLimit = 10;                              // minimal height above terrain when parachute is used.
                canBeTransported     = 1;                               // 0 (false) / 1 (true)
                dimensions[]         = {"BBox_1_1_pos","Mirror_R_BR"};  // memory point-based override of automatic bounding box
            };
        };
    };
    class MBT_01_base_F: Tank_F {
        class VehicleTransport {
            class Cargo {
                parachuteClass       = "B_Parachute_02_F";              // type of parachute used when dropped in air. When empty then parachute is not used.
                parachuteHeightLimit = 10;                              // minimal height above terrain when parachute is used.
                canBeTransported     = 1;                               // 0 (false) / 1 (true)
                dimensions[]         = {"BBox_1_1_pos","Mirror_R_BR"};  // memory point-based override of automatic bounding box
            };
        };
    };
    class MBT_02_base_F: Tank_F {
        class VehicleTransport {
            class Cargo {
                parachuteClass       = "B_Parachute_02_F";              // type of parachute used when dropped in air. When empty then parachute is not used.
                parachuteHeightLimit = 10;                              // minimal height above terrain when parachute is used.
                canBeTransported     = 1;                               // 0 (false) / 1 (true)
                dimensions[]         = {"BBox_1_1_pos","Mirror_R_BR"};  // memory point-based override of automatic bounding box
            };
        };
    };
    class MBT_03_base_F: Tank_F {
        class VehicleTransport {
            class Cargo {
                parachuteClass       = "B_Parachute_02_F";              // type of parachute used when dropped in air. When empty then parachute is not used.
                parachuteHeightLimit = 10;                              // minimal height above terrain when parachute is used.
                canBeTransported     = 1;                               // 0 (false) / 1 (true)
                dimensions[]         = {"BBox_1_1_pos","Mirror_R_BR"};  // memory point-based override of automatic bounding box
            };
        };
    };
    class MBT_04_base_F: Tank_F {
        class VehicleTransport {
            class Cargo {
                parachuteClass       = "B_Parachute_02_F";              // type of parachute used when dropped in air. When empty then parachute is not used.
                parachuteHeightLimit = 10;                              // minimal height above terrain when parachute is used.
                canBeTransported     = 1;                               // 0 (false) / 1 (true)
                dimensions[]         = {"BBox_1_1_pos","Mirror_R_BR"};  // memory point-based override of automatic bounding box
            };
        };
    };
};
