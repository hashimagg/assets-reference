class CCS_Hashima_Tool_9V_Battery : Battery9V
{
    displayName = "Fujitsu 9V Battery";

    descriptionShort = "An alkaline 9V battery. Used for powering various small appliances like flashlights and radio transceivers.";

    hiddenSelections[] =
    {
        "zbytek"
    };

    hiddenSelectionsTextures[] =
    {
        "ccs\hashima-assets\data\tool\Textures\CCS_Hashima_Tool_9V_Battery_co.paa"
    };
};

class CCS_Hashima_Tool_Alarm_Clock_Red : AlarmClock_Red
{
    displayName = "One Piece Alarm Clock";

    descriptionShort = "Common table alarm clock. Spring powered and apparently still working.";

    hiddenSelectionsTextures[] =
    {
        "ccs\hashima-assets\data\tool\Textures\CCS_Hashima_Tool_Alarm_Clock_Red_co.paa"
    };
};

class CCS_Hashima_Tool_Alarm_Clock_Blue : AlarmClock_Blue
{
    displayName = "Dragon Ball Alarm Clock";

    descriptionShort = "Common table alarm clock. Spring powered and apparently still working.";

    hiddenSelectionsTextures[] =
    {
        "ccs\hashima-assets\data\tool\Textures\CCS_Hashima_Tool_Alarm_Clock_Blue_co.paa"
    };
};

class CCS_Hashima_Tool_Alarm_Clock_Green : AlarmClock_Green
{
    displayName = "My Hero Academia Alarm Clock";

    descriptionShort = "Common table alarm clock. Spring powered and apparently still working.";

    hiddenSelectionsTextures[] =
    {
        "ccs\hashima-assets\data\tool\Textures\CCS_Hashima_Tool_Alarm_Clock_Green_co.paa"
    };
};

class CCS_Hashima_Tool_Ammobox : AmmoBox
{
    displayName = "Howa Ammo Box";

    descriptionShort = "A metal storage box. Originally designed for holding ammunition, but can store other things too.";

    hiddenSelections[] =
    {
        "zbytek"
    };

    hiddenSelectionsTextures[] =
    {
        "ccs\hashima-assets\data\tool\Textures\CCS_Hashima_Tool_Ammobox_co.paa"
    };

    hiddenSelectionsMaterials[] =
    {
        "ccs\hashima-assets\data\tool\Textures\CCS_Hashima_Tool_Ammobox.rvmat"
    };

    class DamageSystem
    {
        class GlobalHealth
        {
            class Health
            {
                hitpoints = 300;

                healthLevels[] =
                {
                    {
                        1.0,
                        {
                            "ccs\hashima-assets\data\tool\Textures\CCS_Hashima_Tool_Ammobox.rvmat"
                        }
                    },
                    {
                        0.7,
                        {
                            "ccs\hashima-assets\data\tool\Textures\CCS_Hashima_Tool_Ammobox.rvmat"
                        }
                    },
                    {
                        0.5,
                        {
                            "ccs\hashima-assets\data\tool\Textures\CCS_Hashima_Tool_Ammobox_damage.rvmat"
                        }
                    },
                    {
                        0.3,
                        {
                            "ccs\hashima-assets\data\tool\Textures\CCS_Hashima_Tool_Ammobox_damage.rvmat"
                        }
                    },
                    {
                        0.0,
                        {
                            "ccs\hashima-assets\data\tool\Textures\CCS_Hashima_Tool_Ammobox_destruct.rvmat"
                        }
                    }
                };
            };
        };
    };
};

class CCS_Hashima_Tool_Battery_Charger : BatteryCharger
{
    displayName = "Sumo-King Battery Charger";

    descriptionShort = "Used to charge truck or car batteries when plugged into running electric grid.";

    hiddenSelectionsTextures[] =
    {
        "ccs\hashima-assets\data\tool\Textures\CCS_Hashima_Tool_Battery_Charger_co.paa",
        "ccs\hashima-assets\data\tool\Textures\CCS_Hashima_Tool_Battery_Charger_co.paa",
        "ccs\hashima-assets\data\tool\Textures\CCS_Hashima_Tool_Battery_Charger_co.paa",
        "ccs\hashima-assets\data\tool\Textures\CCS_Hashima_Tool_Battery_Charger_co.paa",
        "ccs\hashima-assets\data\tool\Textures\CCS_Hashima_Tool_Battery_Charger_co.paa",
        "ccs\hashima-assets\data\tool\Textures\CCS_Hashima_Tool_Battery_Charger_co.paa",
        "ccs\hashima-assets\data\tool\Textures\CCS_Hashima_Tool_Battery_Charger_co.paa",
        "ccs\hashima-assets\data\tool\Textures\CCS_Hashima_Tool_Battery_Charger_co.paa",
        "ccs\hashima-assets\data\tool\Textures\CCS_Hashima_Tool_Battery_Charger_co.paa",
        "ccs\hashima-assets\data\tool\Textures\CCS_Hashima_Tool_Battery_Charger_co.paa"
    };
};

class CCS_Hashima_Tool_Canteen : Canteen
{
    displayName = "Canteen";

    descriptionShort = "A reusable plastic bottle used by military and campers. Can be filled with various liquids.";

    hiddenSelections[] =
    {
        "zbytek"
    };

    hiddenSelectionsTextures[] =
    {
        "ccs\hashima-assets\data\tool\Textures\CCS_Hashima_Tool_Canteen_co.paa"
    };
};

class CCS_Hashima_Tool_Car_Battery : CarBattery
{
    displayName = "GS YUASA Car Battery";

    descriptionShort = "12V rechargeable car battery, usable in cars. It can be used to power other appliances, if connected properly.";

    hiddenSelections[] =
    {
        "zbytek"
    };

    hiddenSelectionsTextures[] =
    {
        "ccs\hashima-assets\data\tool\Textures\CCS_Hashima_Tool_Car_Battery_co.paa"
    };
};

class CCS_Hashima_Tool_Field_Transceiver: BaseRadio
{
    displayName = "Field Transceiver";

    descriptionShort = "A R-105 portable base radio station operating on wide set of frequencies on long ranges. Can also be hooked to a vehicle battery.";

    hiddenSelections[] =
    {
        "zbytek"
    };

    hiddenSelectionsTextures[] =
    {
        "ccs\hashima-assets\data\tool\Textures\CCS_Hashima_Tool_Field_Transceiver_co.paa"
    };

    hiddenSelectionsMaterials[] =
    {
        "ccs\hashima-assets\data\tool\Textures\CCS_Hashima_Tool_Field_Transceiver.rvmat"
    };

    class DamageSystem
    {
        class GlobalHealth
        {
            class Health
            {
                hitpoints = 100;

                healthLevels[] =
                {
                    {
                        1.0,
                        {
                            "ccs\hashima-assets\data\tool\Textures\CCS_Hashima_Tool_Field_Transceiver.rvmat"
                        }
                    },
                    {
                        0.7,
                        {
                            "ccs\hashima-assets\data\tool\Textures\CCS_Hashima_Tool_Field_Transceiver.rvmat"
                        }
                    },
                    {
                        0.5,
                        {
                            "ccs\hashima-assets\data\tool\Textures\CCS_Hashima_Tool_Field_Transceiver_damage.rvmat"
                        }
                    },
                    {
                        0.3,
                        {
                            "ccs\hashima-assets\data\tool\Textures\CCS_Hashima_Tool_Field_Transceiver_damage.rvmat"
                        }
                    },
                    {
                        0.0,
                        {
                            "ccs\hashima-assets\data\tool\Textures\CCS_Hashima_Tool_Field_Transceiver_destruct.rvmat"
                        }
                    }
                };
            };
        };
    };
};

class CCS_Hashima_Tool_Garden_Lime : GardenLime
{
    displayName = "Honen Agri Garden Lime";

    descriptionShort = "A bag of garden lime. Useful fertilizer to speed up growth and to boost crops or leather tanning agent.";

    hiddenSelections[] =
    {
        "zbytek"
    };

    hiddenSelectionsTextures[] =
    {
        "ccs\hashima-assets\data\tool\Textures\CCS_Hashima_Tool_Garden_Lime_co.paa"
    };

    hiddenSelectionsMaterials[] =
    {
        "ccs\hashima-assets\data\tool\Textures\CCS_Hashima_Tool_Garden_Lime.rvmat"
    };

    class DamageSystem
    {
        class GlobalHealth
        {
            class Health
            {
                hitpoints = 100;

                healthLevels[] =
                {
                    {
                        1.0,
                        {
                            "ccs\hashima-assets\data\tool\Textures\CCS_Hashima_Tool_Garden_Lime.rvmat"
                        }
                    },
                    {
                        0.7,
                        {
                            "ccs\hashima-assets\data\tool\Textures\CCS_Hashima_Tool_Garden_Lime.rvmat"
                        }
                    },
                    {
                        0.5,
                        {
                            "ccs\hashima-assets\data\tool\Textures\CCS_Hashima_Tool_Garden_Lime_damage.rvmat"
                        }
                    },
                    {
                        0.3,
                        {
                            "ccs\hashima-assets\data\tool\Textures\CCS_Hashima_Tool_Garden_Lime_damage.rvmat"
                        }
                    },
                    {
                        0.0,
                        {
                            "ccs\hashima-assets\data\tool\Textures\CCS_Hashima_Tool_Garden_Lime_destruct.rvmat"
                        }
                    }
                };
            };
        };
    };
};

class CCS_Hashima_Tool_Gas_Canister_Large : LargeGasCanister
{
    displayName = "CreepyCrappyCanister™ Large";

    descriptionShort = "Contains butane which is provided to gas-powered camping equipment after attaching it.";

    hiddenSelections[] =
    {
        "zbytek"
    };

    hiddenSelectionsTextures[] =
    {
        "ccs\hashima-assets\data\tool\Textures\CCS_Hashima_Tool_Gas_Canister_Large_co.paa"
    };
};

class CCS_Hashima_Tool_Gas_Canister_Medium : MediumGasCanister
{
    displayName = "CreepyCrappyCanister™ Medium";

    descriptionShort = "Contains butane which is provided to gas-powered camping equipment after attaching it.";

    hiddenSelections[] =
    {
        "zbytek"
    };

    hiddenSelectionsTextures[] =
    {
        "ccs\hashima-assets\data\tool\Textures\CCS_Hashima_Tool_Gas_Canister_Medium_co.paa"
    };
};

class CCS_Hashima_Tool_Gas_Canister_Small : SmallGasCanister
{
    displayName = "CreepyCrappyCanister™ Small";

    descriptionShort = "Contains butane which is provided to gas-powered camping equipment after attaching it.";

    hiddenSelections[] =
    {
        "zbytek"
    };

    hiddenSelectionsTextures[] =
    {
        "ccs\hashima-assets\data\tool\Textures\CCS_Hashima_Tool_Gas_Canister_Small_co.paa"
    };
};

class CCS_Hashima_Tool_Jerrycan : CanisterGasoline
{
    displayName = "Jerrycan";

    descriptionShort = "A metal canister, useful for storing large volumes of gasoline or other liquids.";

    hiddenSelections[] =
    {
        "zbytek"
    };

    hiddenSelectionsTextures[] =
    {
        "ccs\hashima-assets\data\tool\Textures\CCS_Hashima_Tool_Jerrycan_co.paa"
    };
};

class CCS_Hashima_Tool_Kitchen_Timer : KitchenTimer
{
    displayName = "Kitchen Timer";

    descriptionShort = "Turn it or burn it.";

    hiddenSelectionsTextures[] =
    {
        "ccs\hashima-assets\data\tool\Textures\CCS_Hashima_Tool_Kitchen_Timer_co.paa"
    };
};

class CCS_Hashima_Tool_Lighter_1 : PetrolLighter
{
	displayName = "Shingeki No Kyojin Lighter";

    descriptionShort = "A simple plastic lighter, filled with pressurized gas. Unsurprisingly, it can be used to light stuff on fire.";

    hiddenSelections[] =
    {
        "zbytek"
    };

    hiddenSelectionsTextures[] =
    {
        "ccs\hashima-assets\data\tool\Textures\CCS_Hashima_Tool_Lighter_1_ca.paa"
    };
};

class CCS_Hashima_Tool_Lighter_2 : PetrolLighter
{
	displayName = "XXXXXXXOOO Lighter";

    descriptionShort = "A simple plastic lighter, filled with pressurized gas. Unsurprisingly, it can be used to light stuff on fire.";

    hiddenSelections[] =
    {
        "zbytek"
    };

    hiddenSelectionsTextures[] =
    {
        "ccs\hashima-assets\data\tool\Textures\CCS_Hashima_Tool_Lighter_2_ca.paa"
    };
};

class CCS_Hashima_Tool_Lighter_3 : PetrolLighter
{
	displayName = "NIEF Lighter";

    descriptionShort = "A simple plastic lighter, filled with pressurized gas. Unsurprisingly, it can be used to light stuff on fire.";

    hiddenSelections[] =
    {
        "zbytek"
    };

    hiddenSelectionsTextures[] =
    {
        "ccs\hashima-assets\data\tool\Textures\CCS_Hashima_Tool_Lighter_3_ca.paa"
    };
};

class CCS_Hashima_Tool_Matchbox_1 : Matchbox
{
    displayName = "Matches";

    descriptionShort = "A box of long kitchen safety matches. Store in dry place and keep away from children.";

    hiddenSelections[] =
    {
        "zbytek"
    };

    hiddenSelectionsTextures[] =
    {
        "ccs\hashima-assets\data\tool\Textures\CCS_Hashima_Tool_Matchbox_1_co.paa"
    };
};

class CCS_Hashima_Tool_Matchbox_2 : Matchbox
{
    displayName = "Matches";

    descriptionShort = "A box of long kitchen safety matches. Store in dry place and keep away from children.";

    hiddenSelections[] =
    {
        "zbytek"
    };

    hiddenSelectionsTextures[] =
    {
        "ccs\hashima-assets\data\tool\Textures\CCS_Hashima_Tool_Matchbox_2_co.paa"
    };
};

class CCS_Hashima_Tool_Matchbox_3 : Matchbox
{
    displayName = "Matches";

    descriptionShort = "A box of long kitchen safety matches. Store in dry place and keep away from children.";

    hiddenSelections[] =
    {
        "zbytek"
    };

    hiddenSelectionsTextures[] =
    {
        "ccs\hashima-assets\data\tool\Textures\CCS_Hashima_Tool_Matchbox_3_co.paa"
    };
};

class CCS_Hashima_Tool_Matchbox_4 : Matchbox
{
    displayName = "Matches";

    descriptionShort = "A box of long kitchen safety matches. Store in dry place and keep away from children.";

    hiddenSelections[] =
    {
        "zbytek"
    };

    hiddenSelectionsTextures[] =
    {
        "ccs\hashima-assets\data\tool\Textures\CCS_Hashima_Tool_Matchbox_4_co.paa"
    };
};

class CCS_Hashima_Tool_Matchbox_5 : Matchbox
{
    displayName = "Matches";

    descriptionShort = "A box of long kitchen safety matches. Store in dry place and keep away from children.";

    hiddenSelections[] =
    {
        "zbytek"
    };

    hiddenSelectionsTextures[] =
    {
        "ccs\hashima-assets\data\tool\Textures\CCS_Hashima_Tool_Matchbox_5_co.paa"
    };
};

class CCS_Hashima_Tool_Megaphone: Megaphone
{
    displayName = "CreepyCrappyShout™";

    descriptionShort = "A megaphone used to make announcements or indiscreetly communicate over large distances. Requires a battery to operate.";

    hiddenSelections[] =
    {
        "zbytek"
    };

    hiddenSelectionsTextures[] =
    {
        "ccs\hashima-assets\data\tool\Textures\CCS_Hashima_Tool_Megaphone_co.paa"
    };
};

class CCS_Hashima_Tool_Orienteering_Compass : OrienteeringCompass
{
    displayName = "Uniqlo Orienteering Compass";

    descriptionShort = "Used for hiking, its needle points to the north, helping with orientation. It is very difficult to get lost with one of these.";

    hiddenSelections[] =
    {
        "zbytek"
    };

    hiddenSelectionsTextures[] =
    {
        "ccs\hashima-assets\data\tool\Textures\CCS_Hashima_Tool_Orienteering_Compass_ca.paa"
    };

    hiddenSelectionsMaterials[] =
    {
        "ccs\hashima-assets\data\tool\Textures\CCS_Hashima_Tool_Orienteering_Compass.rvmat"
    };

    class DamageSystem
    {
        class GlobalHealth
        {
            class Health
            {
                hitpoints = 70;

                healthLevels[] =
                {
                    {
                        1.0,
                        {
                            "ccs\hashima-assets\data\tool\Textures\CCS_Hashima_Tool_Orienteering_Compass.rvmat"
                        }
                    },
                    {
                        0.7,
                        {
                            "ccs\hashima-assets\data\tool\Textures\CCS_Hashima_Tool_Orienteering_Compass.rvmat"
                        }
                    },
                    {
                        0.5,
                        {
                            "ccs\hashima-assets\data\tool\Textures\CCS_Hashima_Tool_Orienteering_Compass_damage.rvmat"
                        }
                    },
                    {
                        0.3,
                        {
                            "ccs\hashima-assets\data\tool\Textures\CCS_Hashima_Tool_Orienteering_Compass_damage.rvmat"
                        }
                    },
                    {
                        0.0,
                        {
                            "ccs\hashima-assets\data\tool\Textures\CCS_Hashima_Tool_Orienteering_Compass_destruct.rvmat"
                        }
                    }
                };
            };
        };
    };
};

class CCS_Hashima_Tool_Protective_Case : SmallProtectorCase
{
    displayName = "CreepyCrappyCase™";

    descriptionShort = "A rugged, plastic, airtight container. Very durable, used to protect sensitive gear.";

    hiddenSelections[] =
    {
        "zbytek"
    };

    hiddenSelectionsTextures[] =
    {
        "ccs\hashima-assets\data\tool\Textures\CCS_Hashima_Tool_Protective_case_co.paa"
    };
};

class CCS_Hashima_Tool_Road_Flare : Roadflare
{
	displayName = "Road Flare";

    descriptionShort = "A simple plastic lighter, filled with pressurized gas. Unsurprisingly, it can be used to light stuff on fire.";

    hiddenSelectionsTextures[] =
    {
        "ccs\hashima-assets\data\tool\Textures\CCS_Hashima_Tool_Road_Flare_co.paa"
    };
};

class CCS_Hashima_Tool_Rope_Box_1 : NailBox
{
    displayName = "Yandere Survivors Syntethic Rope";

    descriptionShort = "Strong rope, used to tie stuff together, be it things or people.";

    hiddenSelections[] =
    {
        "zbytek"
    };

    hiddenSelectionsTextures[] =
    {
        "ccs\hashima-assets\data\tool\Textures\CCS_Hashima_Tool_Rope_Box_1_co.paa"
    };

    hiddenSelectionsMaterials[] =
    {
        "ccs\hashima-assets\data\tool\Textures\CCS_Hashima_Tool_Rope_Box.rvmat"
    };

    class DamageSystem
    {
        class GlobalHealth
        {
            class Health
            {
                hitpoints = 80;

                healthLevels[] =
                {
                    {
                        1.0,
                        {
                            "ccs\hashima-assets\data\tool\Textures\CCS_Hashima_Tool_Rope_Box.rvmat"
                        }
                    },
                    {
                        0.7,
                        {
                            "ccs\hashima-assets\data\tool\Textures\CCS_Hashima_Tool_Rope_Box.rvmat"
                        }
                    },
                    {
                        0.5,
                        {
                            "ccs\hashima-assets\data\tool\Textures\CCS_Hashima_Tool_Rope_Box_damage.rvmat"
                        }
                    },
                    {
                        0.3,
                        {
                            "ccs\hashima-assets\data\tool\Textures\CCS_Hashima_Tool_Rope_Box_damage.rvmat"
                        }
                    },
                    {
                        0.0,
                        {
                            "ccs\hashima-assets\data\tool\Textures\CCS_Hashima_Tool_Rope_Box_destruct.rvmat"
                        }
                    }
                };
            };
        };
    };

    class Resources
    {
        class Rope
        {
            value = 1;
            variable = "quantity";
        };
    };
};

class CCS_Hashima_Tool_Rope_Box_2 : NailBox
{
    displayName = "Yandere Survivors Syntethic Rope";

    descriptionShort = "Strong rope, used to tie stuff together, be it things or people.";

    hiddenSelections[] =
    {
        "zbytek"
    };

    hiddenSelectionsTextures[] =
    {
        "ccs\hashima-assets\data\tool\Textures\CCS_Hashima_Tool_Rope_Box_2_co.paa"
    };

    hiddenSelectionsMaterials[] =
    {
        "ccs\hashima-assets\data\tool\Textures\CCS_Hashima_Tool_Rope_Box.rvmat"
    };

    class DamageSystem
    {
        class GlobalHealth
        {
            class Health
            {
                hitpoints = 80;

                healthLevels[] =
                {
                    {
                        1.0,
                        {
                            "ccs\hashima-assets\data\tool\Textures\CCS_Hashima_Tool_Rope_Box.rvmat"
                        }
                    },
                    {
                        0.7,
                        {
                            "ccs\hashima-assets\data\tool\Textures\CCS_Hashima_Tool_Rope_Box.rvmat"
                        }
                    },
                    {
                        0.5,
                        {
                            "ccs\hashima-assets\data\tool\Textures\CCS_Hashima_Tool_Rope_Box_damage.rvmat"
                        }
                    },
                    {
                        0.3,
                        {
                            "ccs\hashima-assets\data\tool\Textures\CCS_Hashima_Tool_Rope_Box_damage.rvmat"
                        }
                    },
                    {
                        0.0,
                        {
                            "ccs\hashima-assets\data\tool\Textures\CCS_Hashima_Tool_Rope_Box_destruct.rvmat"
                        }
                    }
                };
            };
        };
    };

    class Resources
    {
        class Rope
        {
            value = 1;
            variable = "quantity";
        };
    };
};

class CCS_Hashima_Tool_Sewing_Kit : SewingKit
{
    displayName = "Sakura Sewing Kit";

    descriptionShort = "A pocket-sized universal sewing kit, comes in handy for patching both clothes and people's wounds.";

    hiddenSelections[] =
    {
        "zbytek"
    };

    hiddenSelectionsTextures[] =
    {
        "ccs\hashima-assets\data\tool\Textures\CCS_Hashima_Tool_Sewing_Kit_co.paa"
    };
};

class CCS_Hashima_Tool_Teddy_Brown : Bear_Beige
{
    displayName = "Teddy Bear";

    descriptionShort = "A cuddle teddy bear toy. Even though it's stuffed, it is able to conceal small items, somewhere.";

    hiddenSelectionsTextures[] =
    {
        "ccs\hashima-assets\data\tool\Textures\CCS_Hashima_Tool_Teddy_Brown_co.paa"
    };
};

class CCS_Hashima_Tool_Teddy_Dark : Bear_Dark
{
    displayName = "Teddy Bear";

    descriptionShort = "A cuddle teddy bear toy. Even though it's stuffed, it is able to conceal small items, somewhere.";

    hiddenSelectionsTextures[] =
    {
        "ccs\hashima-assets\data\tool\Textures\CCS_Hashima_Tool_Teddy_Dark_co.paa"
    };
};

class CCS_Hashima_Tool_Teddy_Pink : Bear_Pink
{
    displayName = "Teddy Bear";

    descriptionShort = "A cuddle teddy bear toy. Even though it's stuffed, it is able to conceal small items, somewhere.";

    hiddenSelectionsTextures[] =
    {
        "ccs\hashima-assets\data\tool\Textures\CCS_Hashima_Tool_Teddy_Pink_co.paa"
    };
};

class CCS_Hashima_Tool_Teddy_White : Bear_White
{
    displayName = "Teddy Bear";

    descriptionShort = "A cuddle teddy bear toy. Even though it's stuffed, it is able to conceal small items, somewhere.";

    hiddenSelectionsTextures[] =
    {
        "ccs\hashima-assets\data\tool\Textures\CCS_Hashima_Tool_Teddy_White_co.paa"
    };
};

class CCS_Hashima_Tool_Truck_Battery : TruckBattery
{
    displayName = "GS YUASA Truck Battery";

    descriptionShort = "12V rechargeable truck battery has higher capacity then regular car battery. It can be used to power other appliances, if connected properly.";

    hiddenSelections[] =
    {
        "zbytek"
    };

    hiddenSelectionsTextures[] =
    {
        "ccs\hashima-assets\data\tool\Textures\CCS_Hashima_Tool_Truck_Battery_co.paa"
    };
};

class CCS_Hashima_Tool_Weapon_Cleaning_Kit : WeaponCleaningKit
{
    displayName = "Bulldog Gun Cleaning Kit";

    descriptionShort = "A wooden box, containing complete and universal gun-care system. Used in firearm maintenance.";

    hiddenSelections[] =
    {
        "zbytek"
    };

    hiddenSelectionsTextures[] =
    {
        "ccs\hashima-assets\data\tool\Textures\CCS_Hashima_Tool_Weapon_Cleaning_Kit_co.paa"
    };

    hiddenSelectionsMaterials[] =
    {
        "ccs\hashima-assets\data\tool\Textures\CCS_Hashima_Tool_Weapon_Cleaning_Kit.rvmat"
    };

    class DamageSystem
    {
        class GlobalHealth
        {
            class Health
            {
                hitpoints = 100;

                healthLevels[] =
                {
                    {
                        1.0,
                        {
                            "ccs\hashima-assets\data\tool\Textures\CCS_Hashima_Tool_Weapon_Cleaning_Kit.rvmat"
                        }
                    },
                    {
                        0.7,
                        {
                            "ccs\hashima-assets\data\tool\Textures\CCS_Hashima_Tool_Weapon_Cleaning_Kit.rvmat"
                        }
                    },
                    {
                        0.5,
                        {
                            "ccs\hashima-assets\data\tool\Textures\CCS_Hashima_Tool_Weapon_Cleaning_Kit_damage.rvmat"
                        }
                    },
                    {
                        0.3,
                        {
                            "ccs\hashima-assets\data\tool\Textures\CCS_Hashima_Tool_Weapon_Cleaning_Kit_damage.rvmat"
                        }
                    },
                    {
                        0.0,
                        {
                            "ccs\hashima-assets\data\tool\Textures\CCS_Hashima_Tool_Weapon_Cleaning_Kit_destruct.rvmat"
                        }
                    }
                };
            };
        };
    };
};
