class cfgVehicles {
	class boxloader_flatrack_base;
	class boxloader_flatrack_m7frs: boxloader_flatrack_base
	{
		transportRepair = 0;
		ace_repair_canrepair = 1;
	};

	class ThingX;
	class HBarrier_base_F;
	class Land_Boxloader_Fort_Base;
	class land_boxloader_temper_base; 
	class Land_Boxloader_Temper_Flat_Base: Land_Boxloader_Fort_Base{
		class ACE_Actions {
			class ACE_MainActions {
				selection = "";
                distance = 5;
                condition = "(true)";
				};
		};
		ace_dragging_canDrag = 1;
		ace_dragging_dragPosition[] = {0, 1.5, 0};
		ace_dragging_canCarry = 1;
		ace_dragging_carryPosition[] = {0, 2, 0.5};
	};

	class Land_Boxloader_Temper_Door_Flat_Green: Land_Boxloader_Temper_Flat_Base{
		class ACE_Actions {
			class ACE_MainActions {
				selection = "";
                distance = 5;
                condition = "(true)";
				};
		};
		ace_dragging_canDrag = 1;
		ace_dragging_canCarry = 1;
	};

	class land_boxloader_temper_window_flat_green: Land_Boxloader_Temper_Flat_Base{
		class ACE_Actions {
			class ACE_MainActions {
				selection = "";
                distance = 5;
                condition = "(true)";
				};
		};
		
	};

	class Land_Boxloader_Temper_End_Flat_Green: Land_Boxloader_Temper_Flat_Base{
		class ACE_Actions {
			class ACE_MainActions {
				selection = "";
                distance = 5;
                condition = "(true)";
				};
		};
	};

	class Land_Boxloader_Temper_Vestibule_Flat_Green: Land_Boxloader_Temper_Flat_Base{
		class ACE_Actions {
			class ACE_MainActions {
				selection = "";
                distance = 5;
                condition = "(true)";
				};
		};
		ace_dragging_canDrag = 1;
		ace_dragging_dragPosition[] = {0, 1.5, 0};
		ace_dragging_canCarry = 1;
		ace_dragging_carryPosition[] = {0, 2, 0.5};
	};

	class Land_Boxloader_LME_Flat_Green: Land_Boxloader_Temper_Flat_Base{
		class ACE_Actions {
			class ACE_MainActions {
				selection = "";
                distance = 5;
                condition = "(true)";
				};
		};
		ace_dragging_canDrag = 1;
		ace_dragging_dragPosition[] = {0, 1.5, 0};
		ace_dragging_canCarry = 1;
		ace_dragging_carryPosition[] = {0, 2, 0.5};
	};

	class Land_Boxloader_Temper_Divider_Flat: Land_Boxloader_Temper_Flat_Base{
		class ACE_Actions {
			class ACE_MainActions {
				selection = "";
                distance = 5;
                condition = "(true)";
				};
		};
		ace_dragging_canDrag = 1;
		ace_dragging_dragPosition[] = {0, 1.5, 0};
		ace_dragging_canCarry = 1;
		ace_dragging_carryPosition[] = {0, 2, 0.5};
	};

	class Land_Boxloader_Temper_Lights_Flat: Land_Boxloader_Temper_Flat_Base{
		class ACE_Actions {
			class ACE_MainActions {
				selection = "";
                distance = 5;
                condition = "(true)";
				};
		};
		ace_dragging_canDrag = 1;
		ace_dragging_dragPosition[] = {0, 1.5, 0};
		ace_dragging_canCarry = 1;
		ace_dragging_carryPosition[] = {0, 2, 0.5};
	};

	class Land_Boxloader_Temper_Medsign_Flat: Land_Boxloader_Temper_Flat_Base{
		class ACE_Actions {
			class ACE_MainActions {
				selection = "";
                distance = 5;
                condition = "(true)";
				};
		};
		ace_dragging_canDrag = 1;
		ace_dragging_dragPosition[] = {0, 1.5, 0};
		ace_dragging_canCarry = 1;
		ace_dragging_carryPosition[] = {0, 2, 0.5};
	};

	class Land_Boxloader_Hesco_Flat: Land_Boxloader_Fort_Base{
		class ACE_Actions {
			class ACE_MainActions {
				selection = "";
                distance = 5;
                condition = "(true)";
				};
		};
		ace_dragging_canDrag = 1;
		ace_dragging_dragPosition[] = {0, 3, 0};
		ace_dragging_canCarry = 1;
		ace_dragging_carryPosition[] = {0, 4, 0.5};
	};

	class Land_Boxloader_Fort_Roof_Flat: Land_Boxloader_Fort_Base{
		class ACE_Actions {
			class ACE_MainActions {
				selection = "";
                distance = 5;
                condition = "(true)";
				};
		};
		ace_dragging_canDrag = 1;
		ace_dragging_dragPosition[] = {0, 1.5, 0};
		ace_dragging_canCarry = 1;
		ace_dragging_carryPosition[] = {0, 2, 1.5};
	};

	class Land_Boxloader_Fort_Plat_Flat: Land_Boxloader_Fort_Base{
		class ACE_Actions {
			class ACE_MainActions {
				selection = "";
                distance = 5;
                condition = "(true)";
				};
		};
		ace_dragging_canDrag = 1;
		ace_dragging_dragPosition[] = {0, 1.5, 0};
		ace_dragging_canCarry = 1;
		ace_dragging_carryPosition[] = {0, 2, 0.5};
	};

	class Land_Boxloader_Fort_Wire_Flat: Land_Boxloader_Fort_Base{
		class ACE_Actions {
			class ACE_MainActions {
				selection = "";
                distance = 5;
                condition = "(true)";
				};
		};
		ace_dragging_canDrag = 1;
		ace_dragging_dragPosition[] = {0, 1.2, 0};
		ace_dragging_canCarry = 1;
		ace_dragging_carryPosition[] = {0, 2, 0.5};
	};

	class Land_Boxloader_Fort_Tent_Flat_Base: Land_Boxloader_Fort_Base{
		class ACE_Actions {
			class ACE_MainActions {
				selection = "";
                distance = 5;
                condition = "(true)";
				};
		};
		ace_dragging_canDrag = 1;
		ace_dragging_dragPosition[] = {0, 1.5, 0};
		ace_dragging_canCarry = 1;
		ace_dragging_carryPosition[] = {0, 2, 0.5};
	};

	class Land_Boxloader_Camonet_Green_Flat: Land_Boxloader_Fort_Base{
		class ACE_Actions {
			class ACE_MainActions {
				selection = "";
                distance = 5;
                condition = "(true)";
				};
		};
		ace_dragging_canDrag = 1;
		ace_dragging_dragPosition[] = {0, 1.5, 0};
		ace_dragging_canCarry = 1;
		ace_dragging_carryPosition[] = {0, 2, 0.5};
	};

	class Land_Boxloader_Fort_Helipad_Tarp_Flat: Land_Boxloader_Fort_Base{
		class ACE_Actions {
			class ACE_MainActions {
				selection = "";
                distance = 5;
                condition = "(true)";
				};
		};
		ace_dragging_canDrag = 1;
		ace_dragging_dragPosition[] = {0, 1.5, 0};
		ace_dragging_canCarry = 1;
		ace_dragging_carryPosition[] = {0, 2, 0.5};
	};

	class Reammobox_F: ThingX
	{
		class ACE_Actions
		{
			class ACE_MainActions {
				selection = "";
                distance = 5;
                condition = "(true)";
				};
		};
	};

	class Boxloader_sixcon_fuel: Reammobox_F
	{
		transportFuel = 0;
		ace_refuel_fuelcargo = 3406;
	};

	class Boxloader_BigPallet_Repair: Reammobox_F
	{
		transportRepair = 0;
		ace_repair_canRepair = 1;
		class ACE_Actions: ACE_Actions
		{
			class ACE_MainActions: ACE_MainActions
			{
				distance = 5;
			};
		};
	};

	class Boxloader_Ammo_West: Reammobox_F
	{
		class ACE_Actions: ACE_Actions
		{
			class ACE_MainActions: ACE_MainActions
			{
				distance = 5;
			};
		};
	};

	class Boxloader_VehicleAmmo_West: Boxloader_Ammo_West
	{
		transportAmmo = 0;
		ace_rearm_defaultSupply = 1200;
	};

	class boxloader_drumpallet_empty;
	class Boxloader_drumpallet_fuel: boxloader_drumpallet_empty
	{
		transportFuel = 0;
		ace_refuel_fuelcargo = 830;
	};
};