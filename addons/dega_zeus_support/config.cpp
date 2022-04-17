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
		units[] = {"ModuleParadrop_F","ModuleFastrope_F","ModuleDroppod_F","ModuleSupplydrop_F","ModuleVehicledrop_F","ModuleUGVdrop_F"};		
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
			file = "dega_zeus_support\data\Functions";
			class moduleParadrop;
			class moduleDroppod;
			class moduleSupplydrop;
			class moduleVehicledrop;
			class moduleUGVdrop;
			class moduleFastrope;
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
			class Vehicle
			{
				displayName = "Vehicle Drop - Aircraft Selection";
				description = "";
				class values
				{
					//vanilla
					class B_T_VTOL_01_infantry_F //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "B_T_VTOL_01_infantry_F"; //B_Plane_CAS_01_F
						default = 1;
					};
					class O_T_VTOL_02_infantry_dynamicLoadout_F
					{
						//name = "$STR_A3_CfgVehicles_O_Plane_CAS_02_F0";
						value = "O_T_VTOL_02_infantry_dynamicLoadout_F";
					};				
					//rhs
					class RHS_C130J 
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "RHS_C130J"; 
					};	
					class RHS_TU95MS_vvs_old 
					{
						//name = "$STR_A3_CfgVehicles_O_Plane_CAS_02_F0";
						value = "RHS_TU95MS_vvs_old"; 
					};	
                    //gm					
					class gm_ge_airforce_do28d2
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "gm_ge_airforce_do28d2";
					};						
					class gm_gc_airforce_l410t
					{
						//name = "$STR_A3_CfgVehicles_O_Plane_CAS_02_F0";
						value = "gm_gc_airforce_l410t";
					};
					//ifa3	
					class LIB_C47_RAF_snafu
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "LIB_C47_RAF_snafu";
					};					
					class LIB_C47_RAF
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "LIB_C47_RAF";
					};
					class LIB_HORSA
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "LIB_HORSA";
					};	
					class LIB_HORSA_RAF
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "LIB_HORSA_RAF";
					};
					class LIB_CG4_WACO
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "LIB_CG4_WACO";
					};	
					class LIB_MKI_HADRIAN_raf2
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "LIB_MKI_HADRIAN_raf2";
					};					
					class LIB_Li2
					{
						//name = "$STR_A3_CfgVehicles_O_Plane_CAS_02_F0";
						value = "LIB_Li2";
					};
					//CUP
					class CUP_B_MV22_USMC
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "CUP_B_MV22_USMC";
					};
					class CUP_B_C130J_USMC
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "CUP_B_C130J_USMC";
					};
					class CUP_B_C47_USA
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "CUP_B_C47_USA";
					};
					class CUP_B_C130J_GB
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "CUP_B_C130J_GB";
					};		
					class CUP_O_C47_SLA
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "CUP_O_C47_SLA";
					};
					class CUP_O_C130J_TKA
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "CUP_O_C130J_TKA";
					};																
				};
			};
			class GROUP
			{
				displayName = "Group Drop - Group Selection";
				description = "";
				class values
				{
					//vanilla
					//nato
					class BUS_InfSquad //B_Plane_CAS_01_F
					{
			            side = "West";
						faction = "BLU_F";
						type_type = "Infantry";
						value_type = "BUS_InfSquad"; //B_Plane_CAS_01_F	
					};	
					class HAF_InfSquad //B_Plane_CAS_01_F
					{
			            side = "Indep";
						faction = "IND_F";
						type_type = "Infantry";
						value_type = "HAF_InfSquad"; //B_Plane_CAS_01_F					
						default = 1;
					};		
					class OIA_InfSquad //B_Plane_CAS_01_F
					{
			            side = "East";
						faction = "OPF_F";
						type_type = "Infantry";
						value_type = "OIA_InfSquad"; //B_Plane_CAS_01_F					
						default = 1;
					};		
					class BUS_InfTeam_AT //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
			            side = "West";
						faction = "BLU_F";
						type_type = "Infantry";
						value_type = "BUS_InfTeam_AT"; //B_Plane_CAS_01_F					
						default = 1;
					};
					class HAF_InfTeam_AT //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
			            side = "Indep";
						faction = "IND_F";
						type_type = "Infantry";
						value_type = "HAF_InfTeam_AT"; //B_Plane_CAS_01_F					
						default = 1;
					};
					class OIA_InfTeam_AT //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
			            side = "East";
						faction = "OPF_F";
						type_type = "Infantry";
						value_type = "OIA_InfTeam_AT"; //B_Plane_CAS_01_F					
						default = 1;
					};						
					class BUS_InfTeam_AA //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
			            side = "West";
						faction = "BLU_F";
						type_type = "Infantry";
						value_type = "BUS_InfTeam_AA"; //B_Plane_CAS_01_F					
						default = 1;
					};
					class HAF_InfTeam_AA //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
			            side = "Indep";
						faction = "IND_F";
						type_type = "Infantry";
						value_type = "HAF_InfTeam_AA"; //B_Plane_CAS_01_F					
						default = 1;
					};					
					class OIA_InfTeam_AA //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
			            side = "East";
						faction = "OPF_F";
						type_type = "Infantry";
						value_type = "OIA_InfTeam_AA"; //B_Plane_CAS_01_F					
						default = 1;
					};
					class BUS_SniperTeam //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
			            side = "West";
						faction = "BLU_F";
						type_type = "Infantry";
						value_type = "BUS_SniperTeam"; //B_Plane_CAS_01_F					
						default = 1;
					};	
					class HAF_SniperTeam //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
			            side = "Indep";
						faction = "IND_F";
						type_type = "Infantry";
						value_type = "HAF_SniperTeam"; //B_Plane_CAS_01_F					
						default = 1;
					};						
					class OI_SniperTeam //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
			            side = "East";
						faction = "OPF_F";
						type_type = "Infantry";
						value_type = "OI_SniperTeam"; //B_Plane_CAS_01_F					
						default = 1;
					};	
					class BUS_Support_EOD //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
			            side = "West";
						faction = "BLU_F";
						type_type = "Support";
						value_type = "BUS_Support_EOD"; //B_Plane_CAS_01_F					
						default = 1;
					};		
					class HAF_Support_EOD //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
			            side = "Indep";
						faction = "IND_F";
						type_type = "Support";
						value_type = "HAF_Support_EOD"; //B_Plane_CAS_01_F					
						default = 1;
					};	
					class OI_support_EOD //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
			            side = "East";
						faction = "OPF_F";
						type_type = "Support";
						value_type = "OI_support_EOD"; //B_Plane_CAS_01_F					
						default = 1;
					};						
					class BUS_DiverTeam //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
			            side = "West";
						faction = "BLU_F";
						type_type = "SpecOps";
						value_type = "BUS_DiverTeam"; //B_Plane_CAS_01_F					
						default = 1;
					};
					class HAF_DiverTeam //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
			            side = "Indep";
						faction = "IND_F";
						type_type = "SpecOps";
						value_type = "HAF_DiverTeam"; //B_Plane_CAS_01_F					
						default = 1;
					};	
					class OI_diverTeam //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
			            side = "East";
						faction = "OPF_F";
						type_type = "SpecOps";
						value_type = "OI_diverTeam"; //B_Plane_CAS_01_F					
						default = 1;
					};					
					class CTRG_InfTeam //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
			            side = "West";
						faction = "BLU_CTRG_F";
						type_type = "Infantry";
						value_type = "CTRG_InfTeam"; //B_Plane_CAS_01_F					
						default = 1;
					};	
					class I_E_InfTeam //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
			            side = "Indep";
						faction = "IND_E_F";
						type_type = "Infantry";
						value_type = "I_E_InfTeam"; //B_Plane_CAS_01_F					
						default = 1;
					};	
					class O_R_InfTeam //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
			            side = "East";
						faction = "OPF_R_F";
						type_type = "SpecOps";
						value_type = "O_R_InfTeam"; //B_Plane_CAS_01_F					
						default = 1;
					};						
                    //VN DLC	
					
                    //GM DLC 
					//80 wdl
					class gm_ge_army_infantry_aagroup_80_ols //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
			            side = "West";
						faction = "gm_ge_army";
						type_type = "gm_infantry_80";
						value_type = "gm_ge_army_infantry_aagroup_80_ols"; //B_Plane_CAS_01_F					
						default = 1;
					};	
					class gm_ge_army_infantry_atgroup_80_ols //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
			            side = "West";
						faction = "gm_ge_army";
						type_type = "gm_infantry_80";
						value_type = "gm_ge_army_infantry_atgroup_80_ols"; //B_Plane_CAS_01_F					
						default = 1;
					};	
					class gm_ge_army_infantry_mggroup_80_ols //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
			            side = "West";
						faction = "gm_ge_army";
						type_type = "gm_infantry_80";
						value_type = "gm_ge_army_infantry_mggroup_80_ols"; //B_Plane_CAS_01_F					
						default = 1;
					};
					class gm_ge_army_infantry_squad_80_ols //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
			            side = "West";
						faction = "gm_ge_army";
						type_type = "gm_infantry_80";
						value_type = "gm_ge_army_infantry_squad_80_ols"; //B_Plane_CAS_01_F					
						default = 1;
					};	
                    //90 wdl
					class gm_ge_army_infantry_aagroup_90_flk //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
			            side = "West";
						faction = "gm_ge_army";
						type_type = "gm_infantry_90";
						value_type = "gm_ge_army_infantry_aagroup_90_flk"; //B_Plane_CAS_01_F					
						default = 1;
					};	
					class gm_ge_army_infantry_atgroup_90_flk //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
			            side = "West";
						faction = "gm_ge_army";
						type_type = "gm_infantry_90";
						value_type = "gm_ge_army_infantry_atgroup_90_flk"; //B_Plane_CAS_01_F					
						default = 1;
					};	
					class gm_ge_army_infantry_mggroup_90_flk //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
			            side = "West";
						faction = "gm_ge_army";
						type_type = "gm_infantry_90";
						value_type = "gm_ge_army_infantry_mggroup_90_flk"; //B_Plane_CAS_01_F					
						default = 1;
					};
					class gm_ge_army_infantry_squad_90_flk //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
			            side = "West";
						faction = "gm_ge_army";
						type_type = "gm_infantry_90";
						value_type = "gm_ge_army_infantry_squad_90_flk"; //B_Plane_CAS_01_F					
						default = 1;
					};	
					//80 winter
					class gm_ge_army_infantry_aagroup_parka_80_win //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
			            side = "West";
						faction = "gm_ge_army_win";
						type_type = "gm_infantry_80";
						value_type = "gm_ge_army_infantry_aagroup_parka_80_win"; //B_Plane_CAS_01_F					
						default = 1;
					};	
					class gm_ge_army_infantry_atgroup_parka_80_win //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
			            side = "West";
						faction = "gm_ge_army_win";
						type_type = "gm_infantry_80";
						value_type = "gm_ge_army_infantry_atgroup_parka_80_win"; //B_Plane_CAS_01_F					
						default = 1;
					};	
					class gm_ge_army_infantry_mggroup_parka_80_win //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
			            side = "West";
						faction = "gm_ge_army_win";
						type_type = "gm_infantry_80";
						value_type = "gm_ge_army_infantry_mggroup_parka_80_win"; //B_Plane_CAS_01_F					
						default = 1;
					};
					class gm_ge_army_infantry_squad_parka_80_win //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
			            side = "West";
						faction = "gm_ge_army_win";
						type_type = "gm_infantry_80";
						value_type = "gm_ge_army_infantry_squad_parka_80_win"; //B_Plane_CAS_01_F					
						default = 1;
					};	
                    //90 winter
					class gm_ge_army_infantry_aagroup_90_win //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
			            side = "West";
						faction = "gm_ge_army_win";
						type_type = "gm_infantry_90";
						value_type = "gm_ge_army_infantry_aagroup_90_win"; //B_Plane_CAS_01_F					
						default = 1;
					};	
					class gm_ge_army_infantry_atgroup_90_win //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
			            side = "West";
						faction = "gm_ge_army_win";
						type_type = "gm_infantry_90";
						value_type = "gm_ge_army_infantry_atgroup_90_win"; //B_Plane_CAS_01_F					
						default = 1;
					};	
					class gm_ge_army_infantry_mggroup_90_win //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
			            side = "West";
						faction = "gm_ge_army_win";
						type_type = "gm_infantry_90";
						value_type = "gm_ge_army_infantry_mggroup_90_win"; //B_Plane_CAS_01_F					
						default = 1;
					};
					class gm_ge_army_infantry_squad_90_win //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
			            side = "West";
						faction = "gm_ge_army_win";
						type_type = "gm_infantry_90";
						value_type = "gm_ge_army_infantry_squad_90_win"; //B_Plane_CAS_01_F					
						default = 1;
					};	
					//80 wdl
					class gm_dk_army_infantry_aagroup_84_m84 //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
			            side = "West";
						faction = "gm_dk_army";
						type_type = "gm_infantry_80";
						value_type = "gm_dk_army_infantry_aagroup_84_m84"; //B_Plane_CAS_01_F					
						default = 1;
					};	
					class gm_dk_army_infantry_atgroup_84_m84 //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
			            side = "West";
						faction = "gm_dk_army";
						type_type = "gm_infantry_80";
						value_type = "gm_dk_army_infantry_atgroup_84_m84"; //B_Plane_CAS_01_F					
						default = 1;
					};	
					class gm_dk_army_infantry_mggroup_84_m84 //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
			            side = "West";
						faction = "gm_dk_army";
						type_type = "gm_infantry_80";
						value_type = "gm_dk_army_infantry_mggroup_84_m84"; //B_Plane_CAS_01_F					
						default = 1;
					};
					class gm_dk_army_infantry_squad_84_m84 //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
			            side = "West";
						faction = "gm_dk_army";
						type_type = "gm_infantry_80";
						value_type = "gm_dk_army_infantry_squad_84_m84"; //B_Plane_CAS_01_F					
						default = 1;
					};	
                    //90 wdl
					class gm_dk_army_infantry_aagroup_90_m84 //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
			            side = "West";
						faction = "gm_dk_army";
						type_type = "gm_infantry_90";
						value_type = "gm_dk_army_infantry_aagroup_90_m84"; //B_Plane_CAS_01_F					
						default = 1;
					};	
					class gm_dk_army_infantry_atgroup_90_m84 //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
			            side = "West";
						faction = "gm_dk_army";
						type_type = "gm_infantry_90";
						value_type = "gm_dk_army_infantry_atgroup_90_m84"; //B_Plane_CAS_01_F					
						default = 1;
					};	
					class gm_dk_army_infantry_mggroup_90_m84 //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
			            side = "West";
						faction = "gm_dk_army";
						type_type = "gm_infantry_90";
						value_type = "gm_dk_army_infantry_mggroup_90_m84"; //B_Plane_CAS_01_F					
						default = 1;
					};
					class gm_dk_army_infantry_squad_90_m84 //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
			            side = "West";
						faction = "gm_dk_army";
						type_type = "gm_infantry_90";
						value_type = "gm_dk_army_infantry_squad_90_m84"; //B_Plane_CAS_01_F					
						default = 1;
					};	
					//80 winter
					class gm_dk_army_infantry_aagroup_84_win //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
			            side = "West";
						faction = "gm_dk_army_win";
						type_type = "gm_infantry_80";
						value_type = "gm_dk_army_infantry_aagroup_84_win"; //B_Plane_CAS_01_F					
						default = 1;
					};	
					class gm_dk_army_infantry_atgroup_84_win //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
			            side = "West";
						faction = "gm_dk_army_win";
						type_type = "gm_infantry_80";
						value_type = "gm_dk_army_infantry_atgroup_84_win"; //B_Plane_CAS_01_F					
						default = 1;
					};	
					class gm_dk_army_infantry_mggroup_84_win //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
			            side = "West";
						faction = "gm_dk_army_win";
						type_type = "gm_infantry_80";
						value_type = "gm_dk_army_infantry_mggroup_84_win"; //B_Plane_CAS_01_F					
						default = 1;
					};
					class gm_dk_army_infantry_squad_84_win //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
			            side = "West";
						faction = "gm_dk_army_win";
						type_type = "gm_infantry_80";
						value_type = "gm_dk_army_infantry_squad_84_win"; //B_Plane_CAS_01_F					
						default = 1;
					};	
                    //90 winter
					class gm_dk_army_infantry_aagroup_90_win //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
			            side = "West";
						faction = "gm_dk_army_win";
						type_type = "gm_infantry_90";
						value_type = "gm_dk_army_infantry_aagroup_90_win"; //B_Plane_CAS_01_F					
						default = 1;
					};	
					class gm_dk_army_infantry_atgroup_90_win //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
			            side = "West";
						faction = "gm_dk_army_win";
						type_type = "gm_infantry_90";
						value_type = "gm_dk_army_infantry_atgroup_90_win"; //B_Plane_CAS_01_F					
						default = 1;
					};	
					class gm_dk_army_infantry_mggroup_90_win //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
			            side = "West";
						faction = "gm_dk_army_win";
						type_type = "gm_infantry_90";
						value_type = "gm_dk_army_infantry_mggroup_90_win"; //B_Plane_CAS_01_F					
						default = 1;
					};
					class gm_dk_army_infantry_squad_90_win //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
			            side = "West";
						faction = "gm_dk_army_win";
						type_type = "gm_infantry_90";
						value_type = "gm_dk_army_infantry_squad_90_win"; //B_Plane_CAS_01_F					
						default = 1;
					};
					//EAST
                    //80 wdl
					class gm_gc_army_sf_infantry_specops_str //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
			            side = "East";
						faction = "gm_gc_army";
						type_type = "gm_infantry_80";
						value_type = "gm_gc_army_sf_infantry_specops_str"; //B_Plane_CAS_01_F					
						default = 1;
					};
					class gm_ge_army_infantry_aagroup_str //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
			            side = "East";
						faction = "gm_gc_army";
						type_type = "gm_infantry_80";
						value_type = "gm_ge_army_infantry_aagroup_str"; //B_Plane_CAS_01_F					
						default = 1;
					};	
					class gm_ge_army_infantry_atgroup_str //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
			            side = "East";
						faction = "gm_gc_army";
						type_type = "gm_infantry_80";
						value_type = "gm_ge_army_infantry_atgroup_str"; //B_Plane_CAS_01_F					
						default = 1;
					};	
					class gm_ge_army_infantry_mggroup_str //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
			            side = "East";
						faction = "gm_gc_army";
						type_type = "gm_infantry_80";
						value_type = "gm_ge_army_infantry_mggroup_str"; //B_Plane_CAS_01_F					
						default = 1;
					};
                    //80 Winter
					class gm_gc_army_sf_infantry_specops_win //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
			            side = "East";
						faction = "gm_gc_army_win";
						type_type = "gm_infantry_80";
						value_type = "gm_gc_army_sf_infantry_specops_win"; //B_Plane_CAS_01_F					
						default = 1;
					};
					class gm_ge_army_infantry_aagroup_win //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
			            side = "East";
						faction = "gm_gc_army_win";
						type_type = "gm_infantry_80";
						value_type = "gm_ge_army_infantry_aagroup_win"; //B_Plane_CAS_01_F					
						default = 1;
					};	
					class gm_ge_army_infantry_atgroup_win //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
			            side = "East";
						faction = "gm_gc_army_win";
						type_type = "gm_infantry_80";
						value_type = "gm_ge_army_infantry_atgroup_win"; //B_Plane_CAS_01_F					
						default = 1;
					};	
					class gm_ge_army_infantry_mggroup_win //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
			            side = "East";
						faction = "gm_gc_army_win";
						type_type = "gm_infantry_80";
						value_type = "gm_ge_army_infantry_mggroup_win"; //B_Plane_CAS_01_F					
						default = 1;
					};	
                    //80 wdl
					class gm_pl_army_infantry_aagroup_80_moro //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
			            side = "East";
						faction = "gm_pl_army";
						type_type = "gm_infantry_80";
						value_type = "gm_pl_army_infantry_aagroup_80_moro"; //B_Plane_CAS_01_F					
						default = 1;
					};
					class gm_pl_army_infantry_atgroup_80_moro //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
			            side = "East";
						faction = "gm_pl_army";
						type_type = "gm_infantry_80";
						value_type = "gm_pl_army_infantry_atgroup_80_moro"; //B_Plane_CAS_01_F					
						default = 1;
					};	
					class gm_pl_army_infantry_mggroup_80_moro //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
			            side = "East";
						faction = "gm_pl_army";
						type_type = "gm_infantry_80";
						value_type = "gm_pl_army_infantry_mggroup_80_moro"; //B_Plane_CAS_01_F					
						default = 1;
					};	
					class gm_pl_army_sf_infantry_specops_80_moro //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
			            side = "East";
						faction = "gm_pl_army";
						type_type = "gm_infantry_80";
						value_type = "gm_pl_army_sf_infantry_specops_80_moro"; //B_Plane_CAS_01_F					
						default = 1;
					};
                    //80 Winter
					class gm_pl_army_infantry_aagroup_80_win //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
			            side = "East";
						faction = "gm_pl_army_win";
						type_type = "gm_infantry_80";
						value_type = "gm_pl_army_infantry_aagroup_80_win"; //B_Plane_CAS_01_F					
						default = 1;
					};
					class gm_pl_army_infantry_atgroup_80_win //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
			            side = "East";
						faction = "gm_pl_army_win";
						type_type = "gm_infantry_80";
						value_type = "gm_pl_army_infantry_atgroup_80_win"; //B_Plane_CAS_01_F					
						default = 1;
					};	
					class gm_pl_army_infantry_mggroup_80_win //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
			            side = "East";
						faction = "gm_pl_army_win";
						type_type = "gm_infantry_80";
						value_type = "gm_pl_army_infantry_mggroup_80_win"; //B_Plane_CAS_01_F					
						default = 1;
					};	
					class gm_pl_army_sf_infantry_specops_80_win //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
			            side = "East";
						faction = "gm_pl_army_win";
						type_type = "gm_infantry_80";
						value_type = "gm_pl_army_sf_infantry_specops_80_win"; //B_Plane_CAS_01_F					
						default = 1;
					};	
                    //csla
					class US85_abDtmt //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
			            side = "West";
						faction = "US85";
						type_type = "US85_AirbornUnits";
						value_type = "US85_abDtmt"; //B_Plane_CAS_01_F					
						default = 1;
					};	
					class US85_abSqd //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
			            side = "West";
						faction = "US85";
						type_type = "US85_AirbornUnits";
						value_type = "US85_abSqd"; //B_Plane_CAS_01_F					
						default = 1;
					};	
					class CSLA_abDtmt //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
			            side = "East";
						faction = "CSLA";
						type_type = "CSLA_AirbornUnits";
						value_type = "CSLA_abDtmt"; //B_Plane_CAS_01_F					
						default = 1;
					};	
					class CSLA_abSqd //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
			            side = "East";
						faction = "CSLA";
						type_type = "CSLA_AirbornUnits";
						value_type = "CSLA_abSqd"; //B_Plane_CAS_01_F					
						default = 1;
					};
                    //ifa3
					class LIB_UK_AB_AT_squad //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
			            side = "Indep";
						faction = "LIB_UK_AB";
						type_type = "Infantry";
						value_type = "LIB_UK_AB_AT_squad"; //B_Plane_CAS_01_F					
						default = 1;
					};
					class LIB_UK_AB_infantry_squad //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
			            side = "Indep";
						faction = "LIB_UK_AB";
						type_type = "Infantry";
						value_type = "LIB_UK_AB_infantry_squad"; //B_Plane_CAS_01_F					
						default = 1;
					};	
					class LIB_UK_AB_machine_gun_team //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
			            side = "Indep";
						faction = "LIB_UK_AB";
						type_type = "Infantry";
						value_type = "LIB_UK_AB_machine_gun_team"; //B_Plane_CAS_01_F					
						default = 1;
					};	
					class LIB_UK_AB_AT_squad_w //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
			            side = "Indep";
						faction = "LIB_UK_AB_w";
						type_type = "Infantry";
						value_type = "LIB_UK_AB_AT_squad_w"; //B_Plane_CAS_01_F					
						default = 1;
					};	
					class LIB_UK_AB_infantry_squad_w //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
			            side = "Indep";
						faction = "LIB_UK_AB_w";
						type_type = "Infantry";
						value_type = "LIB_UK_AB_infantry_squad_w"; //B_Plane_CAS_01_F					
						default = 1;
					};		
					class LIB_UK_AB_machine_gun_team_w //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
			            side = "Indep";
						faction = "LIB_UK_AB_w";
						type_type = "Infantry";
						value_type = "LIB_UK_AB_machine_gun_team_w"; //B_Plane_CAS_01_F					
						default = 1;
					};	
					class LIB_US_101AB_HQ_squad //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
			            side = "Indep";
						faction = "LIB_US_101AB";
						type_type = "Infantry";
						value_type = "LIB_US_101AB_HQ_squad"; //B_Plane_CAS_01_F					
						default = 1;
					};		
					class LIB_US_101AB_Infantry_squad //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
			            side = "Indep";
						faction = "LIB_US_101AB";
						type_type = "Infantry";
						value_type = "LIB_US_101AB_Infantry_squad"; //B_Plane_CAS_01_F					
						default = 1;
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
	/*
	class Base_ModuleFastrope_F: Module_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "Base_ModuleFastrope_F";
		scope = 10;
		scopeCurator = 0;
		isGlobal = 1;
		isTriggerActivated = 1;
		category = "DEGA_Zeus_Airdrop";
		displayName = "DEGA Airdrops (Module - 0)";
		icon = "\a3\Modules_F_Curator\Data\iconCAS_ca.paa";
		portrait = "\a3\Modules_F_Curator\Data\portraitCAS_ca.paa";
		function = "DEGA_fnc_moduleFastrope";
		curatorCost = 5;
		class Arguments
		{
			class Vehicle
			{
				displayName = "Vehicle Drop - Aircraft Selection";
				description = "";
				class values
				{
					//vanilla
					class B_Heli_Transport_01_camo_F //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "B_Heli_Transport_01_camo_F"; //B_Plane_CAS_01_F
						default = 1;
					};
					class B_Heli_Transport_03_F //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "B_Heli_Transport_03_F"; //B_Plane_CAS_01_F
						default = 1;
					};					
					class RHS_CH_47F //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "RHS_CH_47F"; //B_Plane_CAS_01_F
						default = 1;
					};
					class RHS_UH60M //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "RHS_UH60M"; //B_Plane_CAS_01_F
						default = 1;
					};	
					class RHS_UH1Y //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "RHS_UH1Y"; //B_Plane_CAS_01_F
						default = 1;
					};	
					class rhsgref_cdf_b_reg_Mi8amt //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "rhsgref_cdf_b_reg_Mi8amt"; //B_Plane_CAS_01_F
						default = 1;
					};						
				};
			};
			class GROUP
			{
				displayName = "Group Drop - Group Selection";
				description = "";
				class values
				{
					//vanilla
					//nato
					class BUS_InfSquad //B_Plane_CAS_01_F
					{
			            side = "West";
						faction = "BLU_F";
						type_type = "Infantry";
						value_type = "BUS_InfSquad"; //B_Plane_CAS_01_F	
					};	
					class HAF_InfSquad //B_Plane_CAS_01_F
					{
			            side = "Indep";
						faction = "IND_F";
						type_type = "Infantry";
						value_type = "HAF_InfSquad"; //B_Plane_CAS_01_F					
						default = 1;
					};		
					class OIA_InfSquad //B_Plane_CAS_01_F
					{
			            side = "East";
						faction = "OPF_F";
						type_type = "Infantry";
						value_type = "OIA_InfSquad"; //B_Plane_CAS_01_F					
						default = 1;
					};		
					class BUS_InfTeam_AT //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
			            side = "West";
						faction = "BLU_F";
						type_type = "Infantry";
						value_type = "BUS_InfTeam_AT"; //B_Plane_CAS_01_F					
						default = 1;
					};
					class HAF_InfTeam_AT //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
			            side = "Indep";
						faction = "IND_F";
						type_type = "Infantry";
						value_type = "HAF_InfTeam_AT"; //B_Plane_CAS_01_F					
						default = 1;
					};
					class OIA_InfTeam_AT //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
			            side = "East";
						faction = "OPF_F";
						type_type = "Infantry";
						value_type = "OIA_InfTeam_AT"; //B_Plane_CAS_01_F					
						default = 1;
					};						
					class BUS_InfTeam_AA //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
			            side = "West";
						faction = "BLU_F";
						type_type = "Infantry";
						value_type = "BUS_InfTeam_AA"; //B_Plane_CAS_01_F					
						default = 1;
					};
					class HAF_InfTeam_AA //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
			            side = "Indep";
						faction = "IND_F";
						type_type = "Infantry";
						value_type = "HAF_InfTeam_AA"; //B_Plane_CAS_01_F					
						default = 1;
					};					
					class OIA_InfTeam_AA //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
			            side = "East";
						faction = "OPF_F";
						type_type = "Infantry";
						value_type = "OIA_InfTeam_AA"; //B_Plane_CAS_01_F					
						default = 1;
					};
					class BUS_SniperTeam //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
			            side = "West";
						faction = "BLU_F";
						type_type = "Infantry";
						value_type = "BUS_SniperTeam"; //B_Plane_CAS_01_F					
						default = 1;
					};	
					class HAF_SniperTeam //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
			            side = "Indep";
						faction = "IND_F";
						type_type = "Infantry";
						value_type = "HAF_SniperTeam"; //B_Plane_CAS_01_F					
						default = 1;
					};						
					class OI_SniperTeam //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
			            side = "East";
						faction = "OPF_F";
						type_type = "Infantry";
						value_type = "OI_SniperTeam"; //B_Plane_CAS_01_F					
						default = 1;
					};	
					class BUS_Support_EOD //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
			            side = "West";
						faction = "BLU_F";
						type_type = "Support";
						value_type = "BUS_Support_EOD"; //B_Plane_CAS_01_F					
						default = 1;
					};		
					class HAF_Support_EOD //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
			            side = "Indep";
						faction = "IND_F";
						type_type = "Support";
						value_type = "HAF_Support_EOD"; //B_Plane_CAS_01_F					
						default = 1;
					};	
					class OI_support_EOD //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
			            side = "East";
						faction = "OPF_F";
						type_type = "Support";
						value_type = "OI_support_EOD"; //B_Plane_CAS_01_F					
						default = 1;
					};						
					class BUS_DiverTeam //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
			            side = "West";
						faction = "BLU_F";
						type_type = "SpecOps";
						value_type = "BUS_DiverTeam"; //B_Plane_CAS_01_F					
						default = 1;
					};
					class HAF_DiverTeam //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
			            side = "Indep";
						faction = "IND_F";
						type_type = "SpecOps";
						value_type = "HAF_DiverTeam"; //B_Plane_CAS_01_F					
						default = 1;
					};	
					class OI_diverTeam //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
			            side = "East";
						faction = "OPF_F";
						type_type = "SpecOps";
						value_type = "OI_diverTeam"; //B_Plane_CAS_01_F					
						default = 1;
					};					
					class CTRG_InfTeam //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
			            side = "West";
						faction = "BLU_CTRG_F";
						type_type = "Infantry";
						value_type = "CTRG_InfTeam"; //B_Plane_CAS_01_F					
						default = 1;
					};	
					class I_E_InfTeam //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
			            side = "Indep";
						faction = "IND_E_F";
						type_type = "Infantry";
						value_type = "I_E_InfTeam"; //B_Plane_CAS_01_F					
						default = 1;
					};	
					class O_R_InfTeam //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
			            side = "East";
						faction = "OPF_R_F";
						type_type = "SpecOps";
						value_type = "O_R_InfTeam"; //B_Plane_CAS_01_F					
						default = 1;
					};						
                    //VN DLC	
					
                    //GM DLC 
					//80 wdl
					class gm_ge_army_infantry_aagroup_80_ols //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
			            side = "West";
						faction = "gm_ge_army";
						type_type = "gm_infantry_80";
						value_type = "gm_ge_army_infantry_aagroup_80_ols"; //B_Plane_CAS_01_F					
						default = 1;
					};	
					class gm_ge_army_infantry_atgroup_80_ols //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
			            side = "West";
						faction = "gm_ge_army";
						type_type = "gm_infantry_80";
						value_type = "gm_ge_army_infantry_atgroup_80_ols"; //B_Plane_CAS_01_F					
						default = 1;
					};	
					class gm_ge_army_infantry_mggroup_80_ols //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
			            side = "West";
						faction = "gm_ge_army";
						type_type = "gm_infantry_80";
						value_type = "gm_ge_army_infantry_mggroup_80_ols"; //B_Plane_CAS_01_F					
						default = 1;
					};
					class gm_ge_army_infantry_squad_80_ols //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
			            side = "West";
						faction = "gm_ge_army";
						type_type = "gm_infantry_80";
						value_type = "gm_ge_army_infantry_squad_80_ols"; //B_Plane_CAS_01_F					
						default = 1;
					};	
                    //90 wdl
					class gm_ge_army_infantry_aagroup_90_flk //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
			            side = "West";
						faction = "gm_ge_army";
						type_type = "gm_infantry_90";
						value_type = "gm_ge_army_infantry_aagroup_90_flk"; //B_Plane_CAS_01_F					
						default = 1;
					};	
					class gm_ge_army_infantry_atgroup_90_flk //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
			            side = "West";
						faction = "gm_ge_army";
						type_type = "gm_infantry_90";
						value_type = "gm_ge_army_infantry_atgroup_90_flk"; //B_Plane_CAS_01_F					
						default = 1;
					};	
					class gm_ge_army_infantry_mggroup_90_flk //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
			            side = "West";
						faction = "gm_ge_army";
						type_type = "gm_infantry_90";
						value_type = "gm_ge_army_infantry_mggroup_90_flk"; //B_Plane_CAS_01_F					
						default = 1;
					};
					class gm_ge_army_infantry_squad_90_flk //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
			            side = "West";
						faction = "gm_ge_army";
						type_type = "gm_infantry_90";
						value_type = "gm_ge_army_infantry_squad_90_flk"; //B_Plane_CAS_01_F					
						default = 1;
					};	
					//80 winter
					class gm_ge_army_infantry_aagroup_parka_80_win //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
			            side = "West";
						faction = "gm_ge_army_win";
						type_type = "gm_infantry_80";
						value_type = "gm_ge_army_infantry_aagroup_parka_80_win"; //B_Plane_CAS_01_F					
						default = 1;
					};	
					class gm_ge_army_infantry_atgroup_parka_80_win //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
			            side = "West";
						faction = "gm_ge_army_win";
						type_type = "gm_infantry_80";
						value_type = "gm_ge_army_infantry_atgroup_parka_80_win"; //B_Plane_CAS_01_F					
						default = 1;
					};	
					class gm_ge_army_infantry_mggroup_parka_80_win //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
			            side = "West";
						faction = "gm_ge_army_win";
						type_type = "gm_infantry_80";
						value_type = "gm_ge_army_infantry_mggroup_parka_80_win"; //B_Plane_CAS_01_F					
						default = 1;
					};
					class gm_ge_army_infantry_squad_parka_80_win //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
			            side = "West";
						faction = "gm_ge_army_win";
						type_type = "gm_infantry_80";
						value_type = "gm_ge_army_infantry_squad_parka_80_win"; //B_Plane_CAS_01_F					
						default = 1;
					};	
                    //90 winter
					class gm_ge_army_infantry_aagroup_90_win //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
			            side = "West";
						faction = "gm_ge_army_win";
						type_type = "gm_infantry_90";
						value_type = "gm_ge_army_infantry_aagroup_90_win"; //B_Plane_CAS_01_F					
						default = 1;
					};	
					class gm_ge_army_infantry_atgroup_90_win //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
			            side = "West";
						faction = "gm_ge_army_win";
						type_type = "gm_infantry_90";
						value_type = "gm_ge_army_infantry_atgroup_90_win"; //B_Plane_CAS_01_F					
						default = 1;
					};	
					class gm_ge_army_infantry_mggroup_90_win //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
			            side = "West";
						faction = "gm_ge_army_win";
						type_type = "gm_infantry_90";
						value_type = "gm_ge_army_infantry_mggroup_90_win"; //B_Plane_CAS_01_F					
						default = 1;
					};
					class gm_ge_army_infantry_squad_90_win //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
			            side = "West";
						faction = "gm_ge_army_win";
						type_type = "gm_infantry_90";
						value_type = "gm_ge_army_infantry_squad_90_win"; //B_Plane_CAS_01_F					
						default = 1;
					};	
					//80 wdl
					class gm_dk_army_infantry_aagroup_84_m84 //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
			            side = "West";
						faction = "gm_dk_army";
						type_type = "gm_infantry_80";
						value_type = "gm_dk_army_infantry_aagroup_84_m84"; //B_Plane_CAS_01_F					
						default = 1;
					};	
					class gm_dk_army_infantry_atgroup_84_m84 //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
			            side = "West";
						faction = "gm_dk_army";
						type_type = "gm_infantry_80";
						value_type = "gm_dk_army_infantry_atgroup_84_m84"; //B_Plane_CAS_01_F					
						default = 1;
					};	
					class gm_dk_army_infantry_mggroup_84_m84 //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
			            side = "West";
						faction = "gm_dk_army";
						type_type = "gm_infantry_80";
						value_type = "gm_dk_army_infantry_mggroup_84_m84"; //B_Plane_CAS_01_F					
						default = 1;
					};
					class gm_dk_army_infantry_squad_84_m84 //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
			            side = "West";
						faction = "gm_dk_army";
						type_type = "gm_infantry_80";
						value_type = "gm_dk_army_infantry_squad_84_m84"; //B_Plane_CAS_01_F					
						default = 1;
					};	
                    //90 wdl
					class gm_dk_army_infantry_aagroup_90_m84 //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
			            side = "West";
						faction = "gm_dk_army";
						type_type = "gm_infantry_90";
						value_type = "gm_dk_army_infantry_aagroup_90_m84"; //B_Plane_CAS_01_F					
						default = 1;
					};	
					class gm_dk_army_infantry_atgroup_90_m84 //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
			            side = "West";
						faction = "gm_dk_army";
						type_type = "gm_infantry_90";
						value_type = "gm_dk_army_infantry_atgroup_90_m84"; //B_Plane_CAS_01_F					
						default = 1;
					};	
					class gm_dk_army_infantry_mggroup_90_m84 //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
			            side = "West";
						faction = "gm_dk_army";
						type_type = "gm_infantry_90";
						value_type = "gm_dk_army_infantry_mggroup_90_m84"; //B_Plane_CAS_01_F					
						default = 1;
					};
					class gm_dk_army_infantry_squad_90_m84 //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
			            side = "West";
						faction = "gm_dk_army";
						type_type = "gm_infantry_90";
						value_type = "gm_dk_army_infantry_squad_90_m84"; //B_Plane_CAS_01_F					
						default = 1;
					};	
					//80 winter
					class gm_dk_army_infantry_aagroup_84_win //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
			            side = "West";
						faction = "gm_dk_army_win";
						type_type = "gm_infantry_80";
						value_type = "gm_dk_army_infantry_aagroup_84_win"; //B_Plane_CAS_01_F					
						default = 1;
					};	
					class gm_dk_army_infantry_atgroup_84_win //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
			            side = "West";
						faction = "gm_dk_army_win";
						type_type = "gm_infantry_80";
						value_type = "gm_dk_army_infantry_atgroup_84_win"; //B_Plane_CAS_01_F					
						default = 1;
					};	
					class gm_dk_army_infantry_mggroup_84_win //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
			            side = "West";
						faction = "gm_dk_army_win";
						type_type = "gm_infantry_80";
						value_type = "gm_dk_army_infantry_mggroup_84_win"; //B_Plane_CAS_01_F					
						default = 1;
					};
					class gm_dk_army_infantry_squad_84_win //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
			            side = "West";
						faction = "gm_dk_army_win";
						type_type = "gm_infantry_80";
						value_type = "gm_dk_army_infantry_squad_84_win"; //B_Plane_CAS_01_F					
						default = 1;
					};	
                    //90 winter
					class gm_dk_army_infantry_aagroup_90_win //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
			            side = "West";
						faction = "gm_dk_army_win";
						type_type = "gm_infantry_90";
						value_type = "gm_dk_army_infantry_aagroup_90_win"; //B_Plane_CAS_01_F					
						default = 1;
					};	
					class gm_dk_army_infantry_atgroup_90_win //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
			            side = "West";
						faction = "gm_dk_army_win";
						type_type = "gm_infantry_90";
						value_type = "gm_dk_army_infantry_atgroup_90_win"; //B_Plane_CAS_01_F					
						default = 1;
					};	
					class gm_dk_army_infantry_mggroup_90_win //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
			            side = "West";
						faction = "gm_dk_army_win";
						type_type = "gm_infantry_90";
						value_type = "gm_dk_army_infantry_mggroup_90_win"; //B_Plane_CAS_01_F					
						default = 1;
					};
					class gm_dk_army_infantry_squad_90_win //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
			            side = "West";
						faction = "gm_dk_army_win";
						type_type = "gm_infantry_90";
						value_type = "gm_dk_army_infantry_squad_90_win"; //B_Plane_CAS_01_F					
						default = 1;
					};
					//EAST
                    //80 wdl
					class gm_gc_army_sf_infantry_specops_str //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
			            side = "East";
						faction = "gm_gc_army";
						type_type = "gm_infantry_80";
						value_type = "gm_gc_army_sf_infantry_specops_str"; //B_Plane_CAS_01_F					
						default = 1;
					};
					class gm_ge_army_infantry_aagroup_str //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
			            side = "East";
						faction = "gm_gc_army";
						type_type = "gm_infantry_80";
						value_type = "gm_ge_army_infantry_aagroup_str"; //B_Plane_CAS_01_F					
						default = 1;
					};	
					class gm_ge_army_infantry_atgroup_str //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
			            side = "East";
						faction = "gm_gc_army";
						type_type = "gm_infantry_80";
						value_type = "gm_ge_army_infantry_atgroup_str"; //B_Plane_CAS_01_F					
						default = 1;
					};	
					class gm_ge_army_infantry_mggroup_str //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
			            side = "East";
						faction = "gm_gc_army";
						type_type = "gm_infantry_80";
						value_type = "gm_ge_army_infantry_mggroup_str"; //B_Plane_CAS_01_F					
						default = 1;
					};
                    //80 Winter
					class gm_gc_army_sf_infantry_specops_win //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
			            side = "East";
						faction = "gm_gc_army_win";
						type_type = "gm_infantry_80";
						value_type = "gm_gc_army_sf_infantry_specops_win"; //B_Plane_CAS_01_F					
						default = 1;
					};
					class gm_ge_army_infantry_aagroup_win //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
			            side = "East";
						faction = "gm_gc_army_win";
						type_type = "gm_infantry_80";
						value_type = "gm_ge_army_infantry_aagroup_win"; //B_Plane_CAS_01_F					
						default = 1;
					};	
					class gm_ge_army_infantry_atgroup_win //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
			            side = "East";
						faction = "gm_gc_army_win";
						type_type = "gm_infantry_80";
						value_type = "gm_ge_army_infantry_atgroup_win"; //B_Plane_CAS_01_F					
						default = 1;
					};	
					class gm_ge_army_infantry_mggroup_win //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
			            side = "East";
						faction = "gm_gc_army_win";
						type_type = "gm_infantry_80";
						value_type = "gm_ge_army_infantry_mggroup_win"; //B_Plane_CAS_01_F					
						default = 1;
					};	
                    //80 wdl
					class gm_pl_army_infantry_aagroup_80_moro //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
			            side = "East";
						faction = "gm_pl_army";
						type_type = "gm_infantry_80";
						value_type = "gm_pl_army_infantry_aagroup_80_moro"; //B_Plane_CAS_01_F					
						default = 1;
					};
					class gm_pl_army_infantry_atgroup_80_moro //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
			            side = "East";
						faction = "gm_pl_army";
						type_type = "gm_infantry_80";
						value_type = "gm_pl_army_infantry_atgroup_80_moro"; //B_Plane_CAS_01_F					
						default = 1;
					};	
					class gm_pl_army_infantry_mggroup_80_moro //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
			            side = "East";
						faction = "gm_pl_army";
						type_type = "gm_infantry_80";
						value_type = "gm_pl_army_infantry_mggroup_80_moro"; //B_Plane_CAS_01_F					
						default = 1;
					};	
					class gm_pl_army_sf_infantry_specops_80_moro //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
			            side = "East";
						faction = "gm_pl_army";
						type_type = "gm_infantry_80";
						value_type = "gm_pl_army_sf_infantry_specops_80_moro"; //B_Plane_CAS_01_F					
						default = 1;
					};
                    //80 Winter
					class gm_pl_army_infantry_aagroup_80_win //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
			            side = "East";
						faction = "gm_pl_army_win";
						type_type = "gm_infantry_80";
						value_type = "gm_pl_army_infantry_aagroup_80_win"; //B_Plane_CAS_01_F					
						default = 1;
					};
					class gm_pl_army_infantry_atgroup_80_win //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
			            side = "East";
						faction = "gm_pl_army_win";
						type_type = "gm_infantry_80";
						value_type = "gm_pl_army_infantry_atgroup_80_win"; //B_Plane_CAS_01_F					
						default = 1;
					};	
					class gm_pl_army_infantry_mggroup_80_win //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
			            side = "East";
						faction = "gm_pl_army_win";
						type_type = "gm_infantry_80";
						value_type = "gm_pl_army_infantry_mggroup_80_win"; //B_Plane_CAS_01_F					
						default = 1;
					};	
					class gm_pl_army_sf_infantry_specops_80_win //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
			            side = "East";
						faction = "gm_pl_army_win";
						type_type = "gm_infantry_80";
						value_type = "gm_pl_army_sf_infantry_specops_80_win"; //B_Plane_CAS_01_F					
						default = 1;
					};	
                    //csla
					class US85_abDtmt //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
			            side = "West";
						faction = "US85";
						type_type = "US85_AirbornUnits";
						value_type = "US85_abDtmt"; //B_Plane_CAS_01_F					
						default = 1;
					};	
					class US85_abSqd //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
			            side = "West";
						faction = "US85";
						type_type = "US85_AirbornUnits";
						value_type = "US85_abSqd"; //B_Plane_CAS_01_F					
						default = 1;
					};	
					class CSLA_abDtmt //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
			            side = "East";
						faction = "CSLA";
						type_type = "CSLA_AirbornUnits";
						value_type = "CSLA_abDtmt"; //B_Plane_CAS_01_F					
						default = 1;
					};	
					class CSLA_abSqd //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
			            side = "East";
						faction = "CSLA";
						type_type = "CSLA_AirbornUnits";
						value_type = "CSLA_abSqd"; //B_Plane_CAS_01_F					
						default = 1;
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
	};	*/
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
					class JMSFALL_B_Droppod_imc //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "JMSFALL_B_Droppod_imc"; //B_Plane_CAS_01_F
						default = 1;
					};					
					class TIOW_Drop_Pod_BT //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "TIOW_Drop_Pod_BT"; //B_Plane_CAS_01_F
						default = 1;
					};
					class TIOW_Drop_Pod_BA //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "TIOW_Drop_Pod_BA"; //B_Plane_CAS_01_F
						default = 1;
					};
					class TIOW_Drop_Pod_BR //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "TIOW_Drop_Pod_BR"; //B_Plane_CAS_01_F
						default = 1;
					};
					class TIOW_Drop_Pod_DA //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "TIOW_Drop_Pod_DA"; //B_Plane_CAS_01_F
						default = 1;
					};
					class TIOW_Drop_Pod_DA_HH //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "TIOW_Drop_Pod_DA_HH"; //B_Plane_CAS_01_F
						default = 1;
					};
					class TIOW_Drop_Pod_IF //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "TIOW_Drop_Pod_IF"; //B_Plane_CAS_01_F
						default = 1;
					};
					class TIOW_Drop_Pod_IH //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "TIOW_Drop_Pod_IH"; //B_Plane_CAS_01_F
						default = 1;
					};
					class TIOW_Drop_Pod_RG //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "TIOW_Drop_Pod_RG"; //B_Plane_CAS_01_F
						default = 1;
					};
					class TIOW_Drop_Pod_SAL //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "TIOW_Drop_Pod_SAL"; //B_Plane_CAS_01_F
						default = 1;
					};	
					class TIOW_Drop_Pod_SW //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "TIOW_Drop_Pod_SW"; //B_Plane_CAS_01_F
						default = 1;
					};	
					class TIOW_Drop_Pod_UM //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "TIOW_Drop_Pod_UM"; //B_Plane_CAS_01_F
						default = 1;
					};	
					class TIOW_Drop_Pod_WS //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "TIOW_Drop_Pod_WS"; //B_Plane_CAS_01_F
						default = 1;
					};						
					//opfor
					class JMSFALL_O_Droppod_mil
					{
						name = "$STR_A3_CfgVehicles_O_Plane_CAS_02_F0";
						value = "JMSFALL_O_Droppod_mil";
					};					
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
			class GROUP
			{
				displayName = "Group Drop - Group Selection";
				description = "";
				class values
				{
					//vanilla
					//nato
					class JMSFALL_group_imc_inf_marines_fireteam //B_Plane_CAS_01_F
					{
			            side = "West";
						faction = "JMSFALL_imc_fact";
						type_type = "JMSFALL_group_imc_inf_marines";
						value_type = "JMSFALL_group_imc_inf_marines_fireteam"; //B_Plane_CAS_01_F	
					};						
					class TIOW_Group_SM_BA_Tact_1 //B_Plane_CAS_01_F
					{
			            side = "West";
						faction = "TIOW_SpaceMarines";
						type_type = "TIOW_SM_BA_Squads";
						value_type = "TIOW_Group_SM_BA_Tact_1"; //B_Plane_CAS_01_F	
					};	
					class TIOW_Group_SM_BR_Tact_1 //B_Plane_CAS_01_F
					{
			            side = "West";
						faction = "TIOW_SpaceMarines";
						type_type = "TIOW_SM_BR_Squads";
						value_type = "TIOW_Group_SM_BR_Tact_1"; //B_Plane_CAS_01_F	
					};
					class TIOW_Group_SM_BT_Tact_1 //B_Plane_CAS_01_F
					{
			            side = "West";
						faction = "TIOW_SpaceMarines";
						type_type = "TIOW_SM_BT_Squads";
						value_type = "TIOW_Group_SM_BT_Tact_1"; //B_Plane_CAS_01_F	
					};
					class TIOW_Group_SM_DA_Tact_1 //B_Plane_CAS_01_F
					{
			            side = "West";
						faction = "TIOW_SpaceMarines";
						type_type = "TIOW_SM_DA_Squads";
						value_type = "TIOW_Group_SM_DA_Tact_1"; //B_Plane_CAS_01_F	
					};
					class TIOW_Group_SM_IF_Tact_1 //B_Plane_CAS_01_F
					{
			            side = "West";
						faction = "TIOW_SpaceMarines";
						type_type = "TIOW_SM_IF_Squads";
						value_type = "TIOW_Group_SM_IF_Tact_1"; //B_Plane_CAS_01_F	
					};
					class TIOW_Group_SM_IH_Tact_1 //B_Plane_CAS_01_F
					{
			            side = "West";
						faction = "TIOW_SpaceMarines";
						type_type = "TIOW_SM_IH_Squads";
						value_type = "TIOW_Group_SM_IH_Tact_1"; //B_Plane_CAS_01_F	
					};
					class TIOW_Group_SM_RG_Tact_1 //B_Plane_CAS_01_F
					{
			            side = "West";
						faction = "TIOW_SpaceMarines";
						type_type = "TIOW_SM_RG_Squads";
						value_type = "TIOW_Group_SM_RG_Tact_1"; //B_Plane_CAS_01_F	
					};
					class TIOW_Group_SM_SL_Tact_1 //B_Plane_CAS_01_F
					{
			            side = "West";
						faction = "TIOW_SpaceMarines";
						type_type = "TIOW_SM_SL_Squads";
						value_type = "TIOW_Group_SM_SL_Tact_1"; //B_Plane_CAS_01_F	
					};	
					class TIOW_Group_SM_SW_Tact_1 //B_Plane_CAS_01_F
					{
			            side = "West";
						faction = "TIOW_SpaceMarines";
						type_type = "TIOW_SM_SW_Squads";
						value_type = "TIOW_Group_SM_SW_Tact_1"; //B_Plane_CAS_01_F	
					};	
					class TIOW_Group_SM_UM_Tact_1 //B_Plane_CAS_01_F
					{
			            side = "West";
						faction = "TIOW_SpaceMarines";
						type_type = "TIOW_SM_UM_Squads";
						value_type = "TIOW_Group_SM_UM_Tact_1"; //B_Plane_CAS_01_F	
					};
					class TIOW_Group_SM_WS_Tact_1 //B_Plane_CAS_01_F
					{
			            side = "West";
						faction = "TIOW_SpaceMarines";
						type_type = "TIOW_SM_WS_Squads";
						value_type = "TIOW_Group_SM_WS_Tact_1"; //B_Plane_CAS_01_F	
					};	
					//opfor
					class JMSFALL_group_mil_inf_grunts_fireteam //B_Plane_CAS_01_F
					{
			            side = "West";
						faction = "JMSFALL_militia_fact";
						type_type = "JMSFALL_group_mil_inf_grunts";
						value_type = "JMSFALL_group_mil_inf_grunts_fireteam"; //B_Plane_CAS_01_F	
					};						
					class TIOW_Group_SM_AL_Tact_1 //B_Plane_CAS_01_F
					{
			            side = "East";
						faction = "TIOW_ChaosSpaceMarines";
						type_type = "TIOW_CSM_AL_Squads";
						value_type = "TIOW_Group_SM_AL_Tact_1"; //B_Plane_CAS_01_F	
					};	
					class TIOW_Group_SM_BL_Tact_1 //B_Plane_CAS_01_F
					{
			            side = "East";
						faction = "TIOW_ChaosSpaceMarines";
						type_type = "TIOW_CSM_BL_Squads";
						value_type = "TIOW_Group_SM_BL_Tact_1"; //B_Plane_CAS_01_F	
					};	
					class TIOW_Group_SM_DG_Tact_1 //B_Plane_CAS_01_F
					{
			            side = "East";
						faction = "TIOW_ChaosSpaceMarines";
						type_type = "TIOW_CSM_DG_Squads";
						value_type = "TIOW_Group_SM_DG_Tact_1"; //B_Plane_CAS_01_F	
					};	
					class TIOW_Group_SM_EC_Tact_1 //B_Plane_CAS_01_F
					{
			            side = "East";
						faction = "TIOW_ChaosSpaceMarines";
						type_type = "TIOW_CSM_EC_Squads";
						value_type = "TIOW_Group_SM_EC_Tact_1"; //B_Plane_CAS_01_F	
					};	
					class TIOW_Group_SM_IW_Tact_1 //B_Plane_CAS_01_F
					{
			            side = "East";
						faction = "TIOW_ChaosSpaceMarines";
						type_type = "TIOW_CSM_IW_Squads";
						value_type = "TIOW_Group_SM_IW_Tact_1"; //B_Plane_CAS_01_F	
					};	
					class TIOW_Group_SM_NL_Tact_1 //B_Plane_CAS_01_F
					{
			            side = "East";
						faction = "TIOW_ChaosSpaceMarines";
						type_type = "TIOW_CSM_NL_Squads";
						value_type = "TIOW_Group_SM_NL_Tact_1"; //B_Plane_CAS_01_F	
					};	
					class TIOW_Group_SM_TS_Tact_1 //B_Plane_CAS_01_F
					{
			            side = "East";
						faction = "TIOW_ChaosSpaceMarines";
						type_type = "TIOW_CSM_TS_Squads";
						value_type = "TIOW_Group_SM_TS_Tact_1"; //B_Plane_CAS_01_F	
					};	
					class TIOW_Group_SM_WB_Tact_1 //B_Plane_CAS_01_F
					{
			            side = "East";
						faction = "TIOW_ChaosSpaceMarines";
						type_type = "TIOW_CSM_WB_Squads";
						value_type = "TIOW_Group_SM_WB_Tact_1"; //B_Plane_CAS_01_F	
					};	
					class TIOW_Group_SM_WE_Tact_1 //B_Plane_CAS_01_F
					{
			            side = "East";
						faction = "TIOW_ChaosSpaceMarines";
						type_type = "TIOW_CSM_WE_Squads";
						value_type = "TIOW_Group_SM_WE_Tact_1"; //B_Plane_CAS_01_F	
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
				displayName = "Supply Drop - Aircraft Selection";
				description = "";
				class values
				{
					//vanilla
					class B_T_VTOL_01_infantry_F //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "B_T_VTOL_01_infantry_F"; //B_Plane_CAS_01_F
						default = 1;
					};
					class O_T_VTOL_02_infantry_dynamicLoadout_F
					{
						//name = "$STR_A3_CfgVehicles_O_Plane_CAS_02_F0";
						value = "O_T_VTOL_02_infantry_dynamicLoadout_F";
						default = 1;						
					};
					//rhs
					class RHS_C130J 
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "RHS_C130J"; 
					};	
					class RHS_TU95MS_vvs_old 
					{
						//name = "$STR_A3_CfgVehicles_O_Plane_CAS_02_F0";
						value = "RHS_TU95MS_vvs_old"; 
					};	
                    //gm					
					class gm_ge_airforce_do28d2
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "gm_ge_airforce_do28d2";
					};						
					class gm_gc_airforce_l410t
					{
						//name = "$STR_A3_CfgVehicles_O_Plane_CAS_02_F0";
						value = "gm_gc_airforce_l410t";
					};
					//ifa3
					class LIB_C47_RAF_snafu
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "LIB_C47_RAF_snafu";
					};					
					class LIB_C47_RAF
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "LIB_C47_RAF";
					};	
					class LIB_Li2
					{
						//name = "$STR_A3_CfgVehicles_O_Plane_CAS_02_F0";
						value = "LIB_Li2";
					};				
				};
			};
			class UGV
			{
				displayName = "Supply Drop - Box Selection";
				description = "";
				class values
				{
					//vanilla
					class Box_NATO_AmmoVeh_F //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "Box_NATO_AmmoVeh_F"; //B_Plane_CAS_01_F
						default = 1;
					};						
					class Box_East_AmmoVeh_F
					{
						//name = "$STR_A3_CfgVehicles_O_Plane_CAS_02_F0";
						value = "Box_East_AmmoVeh_F";
						default = 1;						
					};
					class Box_IND_AmmoVeh_F 
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "Box_IND_AmmoVeh_F"; 
						default = 1;						
					};	
					class Box_EAF_AmmoVeh_F 
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "Box_EAF_AmmoVeh_F"; 
						default = 1;						
					};	
					class B_supplyCrate_F //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "B_supplyCrate_F"; //B_Plane_CAS_01_F
						default = 1;
					};						
					class I_supplyCrate_F
					{
						//name = "$STR_A3_CfgVehicles_O_Plane_CAS_02_F0";
						value = "I_supplyCrate_F";
						default = 1;						
					};
					class O_supplyCrate_F 
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "O_supplyCrate_F"; 
						default = 1;						
					};
					class I_EAF_supplyCrate_F 
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "I_EAF_supplyCrate_F"; 
						default = 1;						
					};		
					class C_supplyCrate_F 
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "C_supplyCrate_F"; 
						default = 1;						
					};		
					class C_IDAP_supplyCrate_F 
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "C_IDAP_supplyCrate_F"; 
						default = 1;						
					};
					class IG_supplyCrate_F 
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "IG_supplyCrate_F"; 
						default = 1;						
					};	
					class C_T_supplyCrate_F 
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "C_T_supplyCrate_F"; 
						default = 1;						
					};
					class CargoNet_01_barrels_F 
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "CargoNet_01_barrels_F"; 
						default = 1;						
					};	
					class B_CargoNet_01_ammo_F 
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "B_CargoNet_01_ammo_F"; 
						default = 1;						
					};	
					class I_CargoNet_01_ammo_F 
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "I_CargoNet_01_ammo_F"; 
						default = 1;						
					};	
					class O_CargoNet_01_ammo_F 
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "O_CargoNet_01_ammo_F"; 
						default = 1;						
					};	
					class I_E_CargoNet_01_ammo_F 
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "I_E_CargoNet_01_ammo_F"; 
						default = 1;						
					};	
					class C_IDAP_CargoNet_01_supplies_F 
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "C_IDAP_CargoNet_01_supplies_F"; 
						default = 1;						
					};
					class CargoNet_01_box_F 
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "CargoNet_01_box_F"; 
						default = 1;						
					};	
					class B_Slingload_01_Ammo_F 
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "B_Slingload_01_Ammo_F"; 
						default = 1;						
					};	
					class B_Slingload_01_Fuel_F 
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "B_Slingload_01_Fuel_F"; 
						default = 1;						
					};
					class B_Slingload_01_Medevac_F 
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "B_Slingload_01_Medevac_F"; 
						default = 1;						
					};	
					class B_Slingload_01_Repair_F 
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "B_Slingload_01_Repair_F"; 
						default = 1;						
					};	
					class B_Slingload_01_Cargo_F 
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "B_Slingload_01_Cargo_F"; 
						default = 1;						
					};
					class Land_RepairDepot_01_green_F 
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "Land_RepairDepot_01_green_F"; 
						default = 1;						
					};	
					class Land_RepairDepot_01_tan_F 
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "Land_RepairDepot_01_tan_F"; 
						default = 1;						
					};	
					class Land_Pod_Heli_Transport_04_ammo_F 
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "Land_Pod_Heli_Transport_04_ammo_F"; 
						default = 1;						
					};	
					class Land_Pod_Heli_Transport_04_box_F 
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "Land_Pod_Heli_Transport_04_box_F"; 
						default = 1;						
					};	
					class Land_Pod_Heli_Transport_04_fuel_F 
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "Land_Pod_Heli_Transport_04_fuel_F"; 
						default = 1;						
					};	
					class Land_Pod_Heli_Transport_04_repair_F 
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "Land_Pod_Heli_Transport_04_repair_F"; 
						default = 1;						
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
				displayName = "Vehicle Drop - Aircraft Selection";
				description = "";
				class values
				{
					//vanilla
					class B_T_VTOL_01_infantry_F //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "B_T_VTOL_01_infantry_F"; //B_Plane_CAS_01_F
						default = 1;
					};
					class O_T_VTOL_02_infantry_dynamicLoadout_F
					{
						//name = "$STR_A3_CfgVehicles_O_Plane_CAS_02_F0";
						value = "O_T_VTOL_02_infantry_dynamicLoadout_F";
					};
					//rhs
					class RHS_C130J 
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "RHS_C130J"; 
					};	
					class RHS_TU95MS_vvs_old 
					{
						//name = "$STR_A3_CfgVehicles_O_Plane_CAS_02_F0";
						value = "RHS_TU95MS_vvs_old"; 
					};	
                    //gm					
					class gm_ge_airforce_do28d2
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "gm_ge_airforce_do28d2";
					};						
					class gm_gc_airforce_l410t
					{
						//name = "$STR_A3_CfgVehicles_O_Plane_CAS_02_F0";
						value = "gm_gc_airforce_l410t";
					};
					//ifa3	
					class LIB_C47_RAF_snafu
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "LIB_C47_RAF_snafu";
					};					
					class LIB_C47_RAF
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "LIB_C47_RAF";
					};
					class LIB_HORSA
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "LIB_HORSA";
					};	
					class LIB_HORSA_RAF
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "LIB_HORSA_RAF";
					};
					class LIB_CG4_WACO
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "LIB_CG4_WACO";
					};	
					class LIB_MKI_HADRIAN_raf2
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "LIB_MKI_HADRIAN_raf2";
					};					
					class LIB_Li2
					{
						//name = "$STR_A3_CfgVehicles_O_Plane_CAS_02_F0";
						value = "LIB_Li2";
					};
					//CUP
					class CUP_B_MV22_USMC
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "CUP_B_MV22_USMC";
					};
					class CUP_B_C130J_USMC
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "CUP_B_C130J_USMC";
					};
					class CUP_B_C47_USA
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "CUP_B_C47_USA";
					};
					class CUP_B_C130J_GB
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "CUP_B_C130J_GB";
					};		
					class CUP_O_C47_SLA
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "CUP_O_C47_SLA";
					};
					class CUP_O_C130J_TKA
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "CUP_O_C130J_TKA";
					};																
				};
			};
			class UGV
			{
				displayName = "Vehicle Drop - Vehicle Selection";
				description = "";
				class values
				{
					//vanilla
					class B_LSV_01_unarmed_F //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "B_LSV_01_unarmed_F"; //B_Plane_CAS_01_F
						default = 1;
					};	
					class B_LSV_01_armed_F //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "B_LSV_01_armed_F"; //B_Plane_CAS_01_F
					};
					class B_LSV_01_AT_F //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "B_LSV_01_AT_F"; //B_Plane_CAS_01_F
					};
					class B_Boat_Transport_01_F //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "B_Boat_Transport_01_F"; //B_Plane_CAS_01_F
					};
					class B_SDV_01_F //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "B_SDV_01_F"; //B_Plane_CAS_01_F
					};
					class O_T_LSV_02_unarmed_F //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "O_T_LSV_02_unarmed_F"; //B_Plane_CAS_01_F
					};
					class O_T_LSV_02_armed_F //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "O_T_LSV_02_armed_F"; //B_Plane_CAS_01_F
					};					
					class O_T_LSV_02_AT_F
					{
						//name = "$STR_A3_CfgVehicles_O_Plane_CAS_02_F0";
						value = "O_T_LSV_02_AT_F";						
					};
					class B_UGV_01_rcws_F //B_Plane_CAS_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "B_UGV_01_rcws_F"; //B_Plane_CAS_01_F
					};						
					class O_UGV_01_rcws_F
					{
						//name = "$STR_A3_CfgVehicles_O_Plane_CAS_02_F0";
						value = "O_UGV_01_rcws_F";						
					};
					class I_UGV_01_rcws_F 
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "I_UGV_01_rcws_F"; 						
					};					
					// RHS
					class rhsusf_m998_w_s_4dr 
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "rhsusf_m998_w_s_4dr"; 						
					};	
					class rhsusf_m1043_w_s_m2 
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "rhsusf_m1043_w_s_m2"; 						
					};	
					class rhsusf_m1043_w_s_mk19 
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "rhsusf_m1043_w_s_mk19"; 						
					};	
					class rhsusf_m1045_w_s 
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "rhsusf_m1045_w_s"; 						
					};	
					class rhs_bmd1p 
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "rhs_bmd1p"; 						
					};	
					class rhs_bmd1r 
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "rhs_bmd1r"; 						
					};	
					class rhs_bmd2m 
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "rhs_bmd2m"; 						
					};
					class rhs_bmd4m_vdv 
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "rhs_bmd4m_vdv"; 						
					};	
					class rhs_sprut_vdv 
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "rhs_sprut_vdv"; 						
					};	
					// GM
					class gm_ge_army_iltis_cargo 
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "gm_ge_army_iltis_cargo"; 						
					};	
					class gm_ge_army_iltis_mg3 
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "gm_ge_army_iltis_mg3"; 						
					};	
					class gm_ge_army_iltis_milan 
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "gm_ge_army_iltis_milan"; 						
					};	
					class gm_gc_army_uaz469_cargo 
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "gm_gc_army_uaz469_cargo"; 						
					};
					class gm_gc_army_uaz469_dshkm 
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "gm_gc_army_uaz469_dshkm"; 						
					};	
					class gm_gc_army_uaz469_spg9 
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "gm_gc_army_uaz469_spg9"; 						
					};	
					// IFA3
					class LIB_M8_Greyhound 
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "LIB_M8_Greyhound"; 						
					};	
					class LIB_US_Willys_MB 
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "LIB_US_Willys_MB"; 						
					};	
					class LIB_US_Willys_MB_M1919 
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "LIB_US_Willys_MB_M1919"; 						
					};	
					class LIB_US_Willys_MB_Ambulance 
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "LIB_US_Willys_MB_Ambulance"; 						
					};							
					class LIB_UniversalCarrier 
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "LIB_UniversalCarrier"; 						
					};					
					class LIB_UK_Willys_MB 
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "LIB_UK_Willys_MB"; 						
					};						
					class LIB_UK_Willys_MB_M1919 
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "LIB_UK_Willys_MB_M1919"; 						
					};	
					class LIB_UK_Willys_MB_Ambulance 
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "LIB_UK_Willys_MB_Ambulance"; 						
					};	
					class US85_M998SFGT 
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "US85_M998SFGT"; 						
					};
					class US85_M1043_M60 
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "US85_M1043_M60"; 						
					};
					class US85_M1043_ua 
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "US85_M1043_ua"; 						
					};
					class CSLA_AZU_para 
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "CSLA_AZU_para"; 						
					};	
					class CSLA_AZU_R2 
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "CSLA_AZU_R2"; 						
					};
					class CSLA_lodka 
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "CSLA_lodka"; 						
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
		displayName = "Airborne Unit Reinforcements";
		portrait = "\a3\Modules_F_Curator\Data\portraitCASGun_ca.paa";
		model = "\a3\Modules_F_Curator\CAS\surfaceGunMissile.p3d";
		curatorInfoType = "RscDisplayAttributesModuleParadrop";
		curatorCost = 1;
		moduleCAStype = 0;
		function = "DEGA_fnc_moduleParadrop";		
		delete Arguments;
	};	
	/*
	class ModuleFastrope_F: Base_ModuleFastrope_F
	{
		author = "Deltagamer";
		_generalMacro = "ModuleFastrope_F";
		scope = 1;
		scopeCurator = 2;
		simulation = "house";
		category = "DEGA_Zeus_Airdrop";
		displayName = "Fastrope Unit Reinforcements";
		portrait = "\a3\Modules_F_Curator\Data\portraitCASGun_ca.paa";
		model = "\a3\Modules_F_Curator\CAS\surfaceMissile.p3d";
		curatorInfoType = "RscDisplayAttributesModuleParadrop";
		curatorCost = 1;
		moduleCAStype = 0;
		function = "DEGA_fnc_moduleFastrope";		
		delete Arguments;
	};		*/
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
		curatorInfoType = "RscDisplayAttributesModuleParadrop";
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
		displayName = "Airdrop Ammobox";
		portrait = "\a3\Modules_F_Curator\Data\portraitCASGun_ca.paa";
		model = "\a3\Modules_F_Curator\CAS\surfaceGunMissile.p3d";
		curatorInfoType = "RscDisplayAttributesModuleObjectdrop";
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
		displayName = "Airdrop Vehicle";
		portrait = "\a3\Modules_F_Curator\Data\portraitCASGun_ca.paa";
		model = "\a3\Modules_F_Curator\CAS\surfaceGunMissile.p3d";
		curatorInfoType = "RscDisplayAttributesModuleVehicledrop";
		curatorCost = 1;
		moduleCAStype = 0;
		function = "DEGA_fnc_moduleVehicledrop";		
		delete Arguments;
	};
};
class CfgScriptPaths
{
    Dega_CuratorCommon = "dega_zeus_support\data\RscCommon\";
};
class RscControlsGroupNoScrollbars;
class RscAttributeCAS;
class RscText;
class RscButton;
class TabSide;
class RscCheckbox;
class RscListNBox;
class RscActivePicture;
class RscButtonMenuOK;
class RscButtonMenuCancel;
class RscToolboxButton;
class RscCombo;
class RscDisplayAttributes
{
	class Controls
	{
		class Background;
		class Title;
		class Content
		{
			class Controls;
		};
		class ButtonOK;
		class ButtonCancel;		
	};
};

class RscDisplayAttributesModuleParadrop: RscDisplayAttributes
{
	idd = 1900;
	scriptName = "RscDisplayAttributesModuleCAS";
	scriptPath = "CuratorDisplays";
	onLoad = "[""onLoad"",_this,""RscDisplayAttributesModuleParadrop"",'CuratorDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""RscDisplayAttributesModuleParadrop"",'CuratorDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	class Controls: Controls
	{		
		class Background: Background
		{
			colorBackground[] = {0,0,0,0.7};
			idc = 30001;
			x = "6.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "27 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "26 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Title1: Title
		{
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.13])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.54])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.21])","(profilenamespace getvariable ['GUI_BCG_RGB_A',0.8])"};
			idc = 30002;
			text = "Object Selection Menu";
			x = "6.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "27 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};	
		class CAS: RscControlsGroupNoScrollbars 
		{
			onSetFocus = "[_this,""DEGA_RscAttributeCAS"",'Dega_CuratorCommon'] call (uinamespace getvariable ""BIS_fnc_initCuratorAttribute"")";
			idc = 12190; //12190
			x = "7 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "26 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "11 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			class controls
			{
				class Title: RscText
				{
					style = 16;
					idc = 1892; //10890
					text = "Aircraft Selection";
					x = "0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "26 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					colorBackground[] = {0,0,0,0.5};
				};
				class Value: RscListNBox
				{
					columns[] = {0.0,0.1,0.25,0.6};
					colorSelect[] = {0.95,0.95,0.95,1};
					colorSelect2[] = {0.95,0.95,0.95,1};
					colorSelectBackground[] = {1,1,1,0.25};
					colorSelectBackground2[] = {1,1,1,0.25};
					idc = 1893; //11390
					x = "0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "26 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "9 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					sizeEx = "1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};						
			};					
		};
		class GROUP: RscControlsGroupNoScrollbars 
	    {
		    onSetFocus = "[_this,""DEGA_RscAttributeGROUP"",'Dega_CuratorCommon'] call (uinamespace getvariable ""BIS_fnc_initCuratorAttribute"")";
			idc = 12190;
			x = "7 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
			w = "26 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "11 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			class controls
			{
				class Title: RscText
				{
					style = 16;
					idc = 1901;
					text = "Group Drop Selection";
					x = "0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "26 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					colorBackground[] = {0,0,0,0.5};
			    };
				class Value: RscListNBox
				{
					columns[] = {0.0,0.1,0.25,0.6};
					colorSelect[] = {0.95,0.95,0.95,1};
					colorSelect2[] = {0.95,0.95,0.95,1};
					colorSelectBackground[] = {1,1,1,0.25};
					colorSelectBackground2[] = {1,1,1,0.25};
					idc = 1902;
					x = "0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "26 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "9 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					sizeEx = "1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};						
			};			
		};
		class ButtonOK: RscButtonMenuOK
		{
			x = "28.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "27.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class ButtonCancel: RscButtonMenuCancel
		{
			x = "6.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "27.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};		
	};
};
class RscDisplayAttributesModuleObjectdrop: RscDisplayAttributes
{
	idd = 1890;
	scriptName = "RscDisplayAttributesModuleCAS";
	scriptPath = "CuratorDisplays";
	onLoad = "[""onLoad"",_this,""RscDisplayAttributesModuleObjectdrop"",'CuratorDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""RscDisplayAttributesModuleObjectdrop"",'CuratorDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	class Controls: Controls
	{
		class Background: Background
		{
			colorBackground[] = {0,0,0,0.7};
			idc = 30001;
			x = "6.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "27 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "26 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Title: Title
		{
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.13])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.54])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.21])","(profilenamespace getvariable ['GUI_BCG_RGB_A',0.8])"};
			idc = 30002;
			text = "Object Selection Menu";
			x = "6.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "27 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class CAS: RscControlsGroupNoScrollbars 
		{
			onSetFocus = "[_this,""DEGA_RscAttributeCAS"",'Dega_CuratorCommon'] call (uinamespace getvariable ""BIS_fnc_initCuratorAttribute"")";
			idc = 12190; //12190
			x = "7 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "26 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "11 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			class controls
			{
				class Title: RscText
				{
					style = 16;
					idc = 1892; //10890
					text = "Aircraft Selection";
					x = "0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "26 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					colorBackground[] = {0,0,0,0.5};
				};
				class Value: RscListNBox
				{
					columns[] = {0.0,0.1,0.25,0.6};
					colorSelect[] = {0.95,0.95,0.95,1};
					colorSelect2[] = {0.95,0.95,0.95,1};
					colorSelectBackground[] = {1,1,1,0.25};
					colorSelectBackground2[] = {1,1,1,0.25};
					idc = 1893; //11390
					x = "0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "26 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "9 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					sizeEx = "1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};						
			};					
		};						
		class UGV: RscControlsGroupNoScrollbars 
		{
		    onSetFocus = "[_this,""DEGA_RscAttributeOBJECT"",'Dega_CuratorCommon'] call (uinamespace getvariable ""BIS_fnc_initCuratorAttribute"")";
		    idc = 12190;
			x = "7 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
			w = "26 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "11 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		    class controls
		    {
			    class Title: RscText
				{
					style = 16;
					idc = 1895;
					text = "Object Drop Selection";
					x = "0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "26 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					colorBackground[] = {0,0,0,0.5};
				};
				class Value: RscListNBox
				{
					columns[] = {0.0,0.1,0.25};
					colorSelect[] = {0.95,0.95,0.95,1};
					colorSelect2[] = {0.95,0.95,0.95,1};
					colorSelectBackground[] = {1,1,1,0.25};
					colorSelectBackground2[] = {1,1,1,0.25};							
					idc = 1896;
					x = "0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "26 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "9 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					sizeEx = "1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};						
			};					
		};				
		class Yes_No_Title: RscText
		{
			idc = 1898;
			text = "Object Has Arsenal?";
			x = "12 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "25.7 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "9 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.13])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.54])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.21])","(profilenamespace getvariable ['GUI_BCG_RGB_A',0.8])"};
		};						
		class Yes_No: RscCheckbox
		{
			idc = 1899;
			//onCheckedChanged = "";
			//onLoad = "myDisplay_CHECKED = (_this select 0)";
			checked = 0;
			x = "20 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "25.7 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "1 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};			
		class ButtonOK: RscButtonMenuOK
		{
			x = "28.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "27.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class ButtonCancel: RscButtonMenuCancel
		{
			x = "6.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "27.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};		
	};
};
class RscDisplayAttributesModuleVehicledrop: RscDisplayAttributes
{
	idd = 1890;
	scriptName = "RscDisplayAttributesModuleCAS";
	scriptPath = "CuratorDisplays";
	onLoad = "[""onLoad"",_this,""RscDisplayAttributesModuleVehicledrop"",'CuratorDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""RscDisplayAttributesModuleVehicledrop"",'CuratorDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	class Controls: Controls
	{
		class Background: Background
		{
			colorBackground[] = {0,0,0,0.7};
			idc = 30001;
			x = "6.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "27 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "26 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Title: Title
		{
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.13])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.54])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.21])","(profilenamespace getvariable ['GUI_BCG_RGB_A',0.8])"};
			idc = 30002;
			text = "Object Selection Menu";
			x = "6.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "27 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};	
		class CAS: RscControlsGroupNoScrollbars 
		{
			onSetFocus = "[_this,""DEGA_RscAttributeCAS"",'Dega_CuratorCommon'] call (uinamespace getvariable ""BIS_fnc_initCuratorAttribute"");[_this,""DEGA_RscAttributeUGV"",'Dega_CuratorCommon'] call (uinamespace getvariable ""BIS_fnc_initCuratorAttribute"")";
			idc = 12190; //12190
			x = "7 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "26 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "11 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			class controls
			{
				class Title: RscText
				{
					style = 16;
					idc = 1892; //10890
					text = "Aircraft Selection";
					x = "0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "26 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					colorBackground[] = {0,0,0,0.5};
				};
				class Value: RscListNBox
				{
					columns[] = {0.0,0.1,0.25,0.6};
					colorSelect[] = {0.95,0.95,0.95,1};
					colorSelect2[] = {0.95,0.95,0.95,1};
					colorSelectBackground[] = {1,1,1,0.25};
					colorSelectBackground2[] = {1,1,1,0.25};
					idc = 1893; //11390
					x = "0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "26 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "9 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					sizeEx = "1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};						
			};					
		};						
		class UGV: RscControlsGroupNoScrollbars 
		{
		   onSetFocus = "[_this,""DEGA_RscAttributeUGV"",'Dega_CuratorCommon'] call (uinamespace getvariable ""BIS_fnc_initCuratorAttribute"")";
			idc = 12190;
			x = "7 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
			w = "26 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "11 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			class controls
			{
				class Title: RscText
				{
					style = 16;
					idc = 1895;
					text = "Object Drop Selection";
					x = "0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "26 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					colorBackground[] = {0,0,0,0.5};
				};
				class Value: RscListNBox
				{
					columns[] = {0.0,0.1,0.25};
					colorSelect[] = {0.95,0.95,0.95,1};
					colorSelect2[] = {0.95,0.95,0.95,1};
					colorSelectBackground[] = {1,1,1,0.25};
					colorSelectBackground2[] = {1,1,1,0.25};
					idc = 1896;
					x = "0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "26 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "9 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					sizeEx = "1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};						
			};					
		};				
		class Yes_No_Title: RscText
		{
			idc = 1898;
			text = "Object Has Crew?";
			x = "12 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "25.7 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "9 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.13])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.54])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.21])","(profilenamespace getvariable ['GUI_BCG_RGB_A',0.8])"};
		};						
		class Yes_No: RscCheckbox
		{
			idc = 1899;
			//onCheckedChanged = "";
			//onLoad = "myDisplay_CHECKED = (_this select 0)";
			checked = 0;
			x = "20 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "25.7 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "1 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};			
		class ButtonOK: RscButtonMenuOK
		{
			x = "28.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "27.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class ButtonCancel: RscButtonMenuCancel
		{
			x = "6.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "27.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};		
	};
};
