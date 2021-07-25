////////////////////////////////////////////////////////////////////
//DeRap: modules_f_curator\config.bin
//Produced from mikero's Dos Tools Dll version 7.95
//https://mikero.bytex.digital/Downloads
//'now' is Mon Jul 19 19:25:52 2021 : 'file' last modified on Mon Jun 24 10:41:21 2019
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class DEGA_Zeus_Support
	{
		author = "Deltagamer";
		name = "DEGA Zeus Support - Scripted Modules";
		url = "";
		requiredAddons[] = {"A3_Data_F_Curator"};
		requiredVersion = 0.1;
		units[] = {"ModuleParadrop_F","ModuleDroppod_F","ModuleSupplydrop_F","ModuleVehicledrop_F","ModuleUGVdrop_F"};		
		weapons[] = {};
	};
};
class CfgFactionClasses
{
	class DEGA_Zeus_Airdrop
	{
		displayName = "DEGA Air Support";
		priority = 8;
		side = 7;
	};
};
class CfgFunctions
{
	class DEGA_Zeus_Support
	{
		tag = "DEGA";
		project = "arma3";		
		class Airdrop
		{
			file = "dega_zeus_support\CAS\Functions";
			class moduleParadrop;
			class moduleDroppod;
			class moduleSupplydrop;
			class moduleVehicledrop;
			class moduleUGVdrop;
		};
	};
};
class PreloadTextures
{
	class CfgVehicles
	{
		class ModuleCASGun_F
		{
			model = "@*";
		};
		class ModuleCASMissile_F
		{
			model = "@*";
		};
		class ModuleCASGunMissile_F
		{
			model = "@*";
		};		
	};
};
class CfgVehicles
{
	class All;
	class Logic: All
	{
		scopeCurator = 0;
	};
	class Module_F: Logic
	{
		curatorInfoType = "";
		curatorInfoTypeEmpty = "";
		class ModuleDescription
		{
			class AnyPlayer;
		};		
	};
	class Base_ModuleParadrop_F: Module_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "Base_ModuleParadrop_F";
		scope = 1;
		scopeCurator = 0;
		isGlobal = 1;
		isTriggerActivated = 1;
		category = "DEGA_Zeus_Airdrop";
		displayName = "DEGA Airdrops (Module - 0)";
		icon = "\a3\Modules_F_Curator\Data\iconCAS_ca.paa";
		portrait = "\a3\Modules_F_Curator\Data\portraitCAS_ca.paa";
		function = "DEGA_fnc_moduleParadrop";
		curatorCost = 5;
		class Arguments
		{
			/*
			class Type
			{
				displayName = "$STR_A3_CfgVehicles_ModuleOrdnance_F_Arguments_Type";
				description = "";
				typeName = "NUMBER";
				class values
				{
					class Gun
					{
						name = "$STR_A3_CfgVehicles_ModuleCAS_F_Arguments_Type_values_Gun";
						value = 0;
						default = 1;
					};
					class Missiles
					{
						name = "$STR_A3_CfgVehicles_ModuleCAS_F_Arguments_Type_values_Missiles";
						value = 1;
					};
					class GunMissiles
					{
						name = "$STR_A3_CfgVehicles_ModuleCAS_F_Arguments_Type_values_GunMissiles";
						value = 2;
					};
				};
			};*/
			class Vehicle
			{
				displayName = "Paradrop Unit Aircraft Selection";
				description = "";
				class values
				{
					//vanilla
					class B_T_VTOL_01_infantry_F //B_Plane_CAS_01_F
					{
						name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "B_T_VTOL_01_infantry_F"; //B_Plane_CAS_01_F
						default = 1;
					};
					class O_T_VTOL_02_infantry_dynamicLoadout_F
					{
						name = "$STR_A3_CfgVehicles_O_Plane_CAS_02_F0";
						value = "O_T_VTOL_02_infantry_dynamicLoadout_F";
					};
					//rhs
					class RHS_C130J 
					{
						name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "RHS_C130J"; 
					};	
					class RHS_TU95MS_vvs_old 
					{
						name = "$STR_A3_CfgVehicles_O_Plane_CAS_02_F0";
						value = "RHS_TU95MS_vvs_old"; 
					};	
                    //gm					
					class gm_ge_airforce_do28d2
					{
						name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "gm_ge_airforce_do28d2";
					};						
					class gm_gc_airforce_l410t
					{
						name = "$STR_A3_CfgVehicles_O_Plane_CAS_02_F0";
						value = "gm_gc_airforce_l410t";
					};
					//ifa3
					class LIB_CG4_WACO
					{
						name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "LIB_CG4_WACO";
					};						
					class LIB_HORSA
					{
						name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "LIB_HORSA";
					};	
					class LIB_C47_RAF_snafu
					{
						name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "LIB_C47_RAF_snafu";
					};
					class LIB_MKI_HADRIAN_raf2
					{
						name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "LIB_MKI_HADRIAN_raf2";
					};						
					class LIB_HORSA_RAF
					{
						name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "LIB_HORSA_RAF";
					};	
					class LIB_C47_RAF
					{
						name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "LIB_C47_RAF";
					};	
					class LIB_Li2
					{
						name = "$STR_A3_CfgVehicles_O_Plane_CAS_02_F0";
						value = "LIB_Li2";
					};	
					/*
					//CUP
					class CUP_B_MV22_USMC
					{
						name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "CUP_B_MV22_USMC";
					};
					class CUP_B_C130J_USMC
					{
						name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "CUP_B_C130J_USMC";
					};
					class CUP_B_C47_USA
					{
						name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "CUP_B_C47_USA";
					};
					class CUP_B_C130J_GB
					{
						name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "CUP_B_C130J_GB";
					};		
					class CUP_O_C47_SLA
					{
						name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "CUP_O_C47_SLA";
					};
					class CUP_O_C130J_TKA
					{
						name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "CUP_O_C130J_TKA";
					};	*/				
				};
			};
		};
		class ModuleDescription: ModuleDescription
		{
			description = "$STR_A3_CfgVehicles_ModuleCAS_F_ModuleDescription";
			position = 1;
			direction = 1;
		};
	};
	class Base_ModuleDroppod_F: Module_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "Base_ModuleParadrop_F";
		scope = 1;
		scopeCurator = 0;
		isGlobal = 1;
		isTriggerActivated = 1;
		category = "DEGA_Zeus_Airdrop";
		displayName = "DEGA Airdrops (Module - 0)";
		icon = "\a3\Modules_F_Curator\Data\iconCAS_ca.paa";
		portrait = "\a3\Modules_F_Curator\Data\portraitCAS_ca.paa";
		function = "DEGA_fnc_moduleDroppod";
		curatorCost = 5;
		class Arguments
		{
			class Vehicle
			{
				displayName = "TIOW2 - Drop Pod Selection";
				description = "";
				class values
				{
					//blufor
					class TIOW_Drop_Pod_UM //B_Plane_CAS_01_F
					{
						name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "TIOW_Drop_Pod_UM"; //B_Plane_CAS_01_F
						default = 1;
					};
					class TIOW_Drop_Pod_BT
					{
						name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "TIOW_Drop_Pod_BT";
					};	
					class TIOW_Drop_Pod_BA
					{
						name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "TIOW_Drop_Pod_BA";
					};	
					class TIOW_Drop_Pod_BR
					{
						name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "TIOW_Drop_Pod_BR";
					};	
					class TIOW_Drop_Pod_DA
					{
						name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "TIOW_Drop_Pod_DA";
					};	
					class TIOW_Drop_Pod_DA_HH
					{
						name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "TIOW_Drop_Pod_DA_HH";
					};	
					class TIOW_Drop_Pod_IF
					{
						name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "TIOW_Drop_Pod_IF";
					};	
					class TIOW_Drop_Pod_IH
					{
						name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "TIOW_Drop_Pod_IH";
					};	
					class TIOW_Drop_Pod_RG
					{
						name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "TIOW_Drop_Pod_RG";
					};	
					class TIOW_Drop_Pod_SAL
					{
						name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "TIOW_Drop_Pod_SAL";
					};	
					class TIOW_Drop_Pod_SW
					{
						name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "TIOW_Drop_Pod_SW";
					};
					class TIOW_Drop_Pod_WS
					{
						name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "TIOW_Drop_Pod_WS";
					};	
					//opfor
					class TIOW_Drop_Pod_AL
					{
						name = "$STR_A3_CfgVehicles_O_Plane_CAS_02_F0";
						value = "TIOW_Drop_Pod_AL";
					};	
					class TIOW_Drop_Pod_BL
					{
						name = "$STR_A3_CfgVehicles_O_Plane_CAS_02_F0";
						value = "TIOW_Drop_Pod_BL";
					};	
					class TIOW_Drop_Pod_DG
					{
						name = "$STR_A3_CfgVehicles_O_Plane_CAS_02_F0";
						value = "TIOW_Drop_Pod_DG";
					};	
					class TIOW_Drop_Pod_EC
					{
						name = "$STR_A3_CfgVehicles_O_Plane_CAS_02_F0";
						value = "TIOW_Drop_Pod_EC";
					};	
					class TIOW_Drop_Pod_IW
					{
						name = "$STR_A3_CfgVehicles_O_Plane_CAS_02_F0";
						value = "TIOW_Drop_Pod_IW";
					};	
					class TIOW_Drop_Pod_NL
					{
						name = "$STR_A3_CfgVehicles_O_Plane_CAS_02_F0";
						value = "TIOW_Drop_Pod_NL";
					};	
					class TIOW_Drop_Pod_TS
					{
						name = "$STR_A3_CfgVehicles_O_Plane_CAS_02_F0";
						value = "TIOW_Drop_Pod_TS";
					};	
					class TIOW_Drop_Pod_WB
					{
						name = "$STR_A3_CfgVehicles_O_Plane_CAS_02_F0";
						value = "TIOW_Drop_Pod_WB";
					};	
					class TIOW_Drop_Pod_WE
					{
						name = "$STR_A3_CfgVehicles_O_Plane_CAS_02_F0";
						value = "TIOW_Drop_Pod_WE";
					};							
				};
			};
		};		
		class ModuleDescription: ModuleDescription
		{
			description = "$STR_A3_CfgVehicles_ModuleCAS_F_ModuleDescription";
			position = 1;
			direction = 1;
		};
	};	
	class Base_ModuleSupplydrop_F: Module_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "Base_ModuleSupplydrop_F";
		scope = 1;
		scopeCurator = 0;
		isGlobal = 1;
		isTriggerActivated = 1;
		category = "DEGA_Zeus_Airdrop";
		displayName = "DEGA Airdrops (Module - 0)";
		icon = "\a3\Modules_F_Curator\Data\iconCAS_ca.paa";
		portrait = "\a3\Modules_F_Curator\Data\portraitCAS_ca.paa";
		function = "DEGA_fnc_moduleSupplydrop";
		curatorCost = 5;
		class Arguments
		{
			class Vehicle
			{
				displayName = "Supply Box Aircraft Selection";
				description = "";
				class values
				{
					//vanilla
					class B_T_VTOL_01_infantry_F //B_Plane_CAS_01_F
					{
						name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "B_T_VTOL_01_infantry_F"; //B_Plane_CAS_01_F
						default = 1;
					};
					class O_T_VTOL_02_infantry_dynamicLoadout_F
					{
						name = "$STR_A3_CfgVehicles_O_Plane_CAS_02_F0";
						value = "O_T_VTOL_02_infantry_dynamicLoadout_F";
					};
					//rhs
					class RHS_C130J 
					{
						name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "RHS_C130J"; 
					};	
					class RHS_TU95MS_vvs_old 
					{
						name = "$STR_A3_CfgVehicles_O_Plane_CAS_02_F0";
						value = "RHS_TU95MS_vvs_old"; 
					};	
                    //gm					
					class gm_ge_airforce_do28d2
					{
						name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "gm_ge_airforce_do28d2";
					};						
					class gm_gc_airforce_l410t
					{
						name = "$STR_A3_CfgVehicles_O_Plane_CAS_02_F0";
						value = "gm_gc_airforce_l410t";
					};
					//ifa3
					class LIB_C47_RAF
					{
						name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "LIB_C47_RAF";
					};	
					class LIB_Li2
					{
						name = "$STR_A3_CfgVehicles_O_Plane_CAS_02_F0";
						value = "LIB_Li2";
					};				
				};
			};
		};
		class ModuleDescription: ModuleDescription
		{
			description = "$STR_A3_CfgVehicles_ModuleCAS_F_ModuleDescription";
			position = 1;
			direction = 1;
		};
	};	
	class Base_ModuleVehicledrop_F: Module_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "Base_ModuleVehicledrop_F";
		scope = 1;
		scopeCurator = 0;
		isGlobal = 1;
		isTriggerActivated = 1;
		category = "DEGA_Zeus_Airdrop";
		displayName = "DEGA Airdrops (Module - 0)";
		icon = "\a3\Modules_F_Curator\Data\iconCAS_ca.paa";
		portrait = "\a3\Modules_F_Curator\Data\portraitCAS_ca.paa";
		function = "DEGA_fnc_moduleSupplydrop";
		curatorCost = 5;
		class Arguments
		{
			class Vehicle
			{
				displayName = "Vehicle Drop Aircraft Selection";
				description = "";
				class values
				{
					//vanilla
					class B_T_VTOL_01_infantry_F //B_Plane_CAS_01_F
					{
						name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "B_T_VTOL_01_infantry_F"; //B_Plane_CAS_01_F
						default = 1;
					};
					class O_T_VTOL_02_infantry_dynamicLoadout_F
					{
						name = "$STR_A3_CfgVehicles_O_Plane_CAS_02_F0";
						value = "O_T_VTOL_02_infantry_dynamicLoadout_F";
					};
					//rhs
					class RHS_C130J 
					{
						name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "RHS_C130J"; 
					};	
					class RHS_TU95MS_vvs_old 
					{
						name = "$STR_A3_CfgVehicles_O_Plane_CAS_02_F0";
						value = "RHS_TU95MS_vvs_old"; 
					};	
                    //gm					
					class gm_ge_airforce_do28d2
					{
						name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "gm_ge_airforce_do28d2";
					};						
					class gm_gc_airforce_l410t
					{
						name = "$STR_A3_CfgVehicles_O_Plane_CAS_02_F0";
						value = "gm_gc_airforce_l410t";
					};
					//ifa3				
					class LIB_C47_RAF
					{
						name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "LIB_C47_RAF";
					};	
					class LIB_Li2
					{
						name = "$STR_A3_CfgVehicles_O_Plane_CAS_02_F0";
						value = "LIB_Li2";
					};						
					class LIB_HORSA
					{
						name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "LIB_HORSA";
					};											
				};
			};
		};
		class ModuleDescription: ModuleDescription
		{
			description = "$STR_A3_CfgVehicles_ModuleCAS_F_ModuleDescription";
			position = 1;
			direction = 1;
		};
	};
	class Base_ModuleUGVdrop_F: Module_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "Base_ModuleSupplydrop_F";
		scope = 1;
		scopeCurator = 0;
		isGlobal = 1;
		isTriggerActivated = 1;
		category = "DEGA_Zeus_Airdrop";
		displayName = "DEGA Airdrops (Module - 0)";
		icon = "\a3\Modules_F_Curator\Data\iconCAS_ca.paa";
		portrait = "\a3\Modules_F_Curator\Data\portraitCAS_ca.paa";
		function = "DEGA_fnc_moduleUGVdrop";
		curatorCost = 5;
		class Arguments
		{
			class Vehicle
			{
				displayName = "UGV drop Aircraft Selection";
				description = "";
				class values
				{
					//vanilla
					class B_T_VTOL_01_infantry_F //B_Plane_CAS_01_F
					{
						name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "B_T_VTOL_01_infantry_F"; //B_Plane_CAS_01_F
						default = 1;
					};
					class O_T_VTOL_02_infantry_dynamicLoadout_F
					{
						name = "$STR_A3_CfgVehicles_O_Plane_CAS_02_F0";
						value = "O_T_VTOL_02_infantry_dynamicLoadout_F";
					};
					//rhs
					class RHS_C130J 
					{
						name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "RHS_C130J"; 
					};	
					class RHS_TU95MS_vvs_old 
					{
						name = "$STR_A3_CfgVehicles_O_Plane_CAS_02_F0";
						value = "RHS_TU95MS_vvs_old"; 
					};	
				};
			};
		};
		class ModuleDescription: ModuleDescription
		{
			description = "$STR_A3_CfgVehicles_ModuleCAS_F_ModuleDescription";
			position = 1;
			direction = 1;
		};
	};		
	class ModuleParadrop_F: Base_ModuleParadrop_F
	{
		author = "Deltagamer";
		_generalMacro = "ModuleParadrop_F";
		scope = 1;
		scopeCurator = 2;
		simulation = "house";
		category = "DEGA_Zeus_Airdrop";
		displayName = "Paradrop Unit Reinforcements";
		portrait = "\a3\Modules_F_Curator\Data\portraitCASGun_ca.paa";
		model = "\a3\Modules_F_Curator\CAS\surfaceGunMissile.p3d";
		curatorInfoType = "RscDisplayAttributesModuleCAS";
		curatorCost = 1;
		moduleCAStype = 0;
		function = "DEGA_fnc_moduleParadrop";		
		delete Arguments;
	};	
	class ModuleDroppod_F: Base_ModuleDroppod_F
	{
		author = "Deltagamer";
		_generalMacro = "ModuleDroppod_F";
		scope = 1;
		scopeCurator = 2;
		simulation = "house";
		category = "DEGA_Zeus_Airdrop";
		displayName = "Drop Pod Reinforcements";
		portrait = "\a3\Modules_F_Curator\Data\portraitCASGun_ca.paa";
		model = "\a3\Modules_F_Curator\CAS\surfaceMissile.p3d";
		curatorInfoType = "RscDisplayAttributesModuleCAS";
		curatorCost = 1;
		moduleCAStype = 0;
		function = "DEGA_fnc_moduleDroppod";		
		delete Arguments;
	};	
	class ModuleSupplydrop_F: Base_ModuleSupplydrop_F
	{
		author = "Deltagamer";
		_generalMacro = "ModuleSupplydrop_F";
		scope = 1;
		scopeCurator = 2;
		simulation = "house";
		category = "DEGA_Zeus_Airdrop";
		displayName = "Airdrop Virtual Supply Box";
		portrait = "\a3\Modules_F_Curator\Data\portraitCASGun_ca.paa";
		model = "\a3\Modules_F_Curator\CAS\surfaceGunMissile.p3d";
		curatorInfoType = "RscDisplayAttributesModuleCAS";
		curatorCost = 1;
		moduleCAStype = 0;
		function = "DEGA_fnc_moduleSupplydrop";		
		delete Arguments;
	};	
	class ModuleVehicledrop_F: Base_ModuleVehicledrop_F
	{
		author = "Deltagamer";
		_generalMacro = "ModuleVehicledrop_F";
		scope = 1;
		scopeCurator = 2;
		simulation = "house";
		category = "DEGA_Zeus_Airdrop";
		displayName = "Airdrop Empty Vehicle";
		portrait = "\a3\Modules_F_Curator\Data\portraitCASGun_ca.paa";
		model = "\a3\Modules_F_Curator\CAS\surfaceGunMissile.p3d";
		curatorInfoType = "RscDisplayAttributesModuleCAS";
		curatorCost = 1;
		moduleCAStype = 0;
		function = "DEGA_fnc_moduleVehicledrop";		
		delete Arguments;
	};	
	class ModuleUGVdrop_F: Base_ModuleUGVdrop_F
	{
		author = "Deltagamer";
		_generalMacro = "ModuleVehicledrop_F";
		scope = 1;
		scopeCurator = 2;
		simulation = "house";
		category = "DEGA_Zeus_Airdrop";
		displayName = "UGV Airdrop Insertion";
		portrait = "\a3\Modules_F_Curator\Data\portraitCASGun_ca.paa";
		model = "\a3\Modules_F_Curator\CAS\surfaceGunMissile.p3d";
		curatorInfoType = "RscDisplayAttributesModuleCAS";
		curatorCost = 1;
		moduleCAStype = 0;
		function = "DEGA_fnc_moduleUGVdrop";		
		delete Arguments;
	};	
};
