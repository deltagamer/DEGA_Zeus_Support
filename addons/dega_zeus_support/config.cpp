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
		units[] = {"ModuleParadrop_F","ModuleFastrope_F","ModuleDroppod_F","ModulePlayerDroppod_F","ModuleSupplydrop_F","ModuleVehicledrop_F","ModuleUgvdrop_F"};		
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
			class moduleUgvdrop;
			class moduleFastrope;
			class modulePlayerDroppod;
		};
	};
};
class PreloadTextures
{
	class CfgVehicles
	{
		class ModuleCasGun_F
		{
			model = "@*";
		};
		class ModuleCasMissile_F
		{
			model = "@*";
		};
		class ModuleCasGunMissile_F
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
		icon = "\a3\Modules_F_Curator\Data\iconCas_ca.paa";
		portrait = "\a3\Modules_F_Curator\Data\portraitCas_ca.paa";
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
					class B_T_VTOL_01_infantry_F //B_Plane_Cas_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_Cas_01_F0";
						value = "B_T_VTOL_01_infantry_F"; //B_Plane_Cas_01_F
						default = 1;
					};														
				};
			};
			class Group
			{
				displayName = "Group Drop - Group Selection";
				description = "";
				class values
				{
					//vanilla
					//nato
					class BUS_InfSquad //B_Plane_Cas_01_F
					{
			            side = "West";
						faction = "BLU_F";
						type_type = "Infantry";
						value_type = "BUS_InfSquad"; //B_Plane_Cas_01_F	
					};				
				};
			};			
		};
		class ModuleDescription: ModuleDescription
		{
			description = "$STR_A3_CfgVehicles_ModuleCas_F_ModuleDescription";
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
		icon = "\a3\Modules_F_Curator\Data\iconCas_ca.paa";
		portrait = "\a3\Modules_F_Curator\Data\portraitCas_ca.paa";
		function = "DEGA_fnc_moduleDroppod";
		curatorCost = 5;
		class Arguments
		{
			class Vehicle
			{
				displayName = "Drop Pod Selection";
				description = "";
				class values
				{
					//blufor
					class JMSFALL_B_Droppod_imc //B_Plane_Cas_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_Cas_01_F0";
						value = "JMSFALL_B_Droppod_imc"; //B_Plane_Cas_01_F
						default = 1;
					};
					class TIOW_Drop_Pod_BT //B_Plane_Cas_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_Cas_01_F0";
						value = "TIOW_Drop_Pod_BT"; //B_Plane_Cas_01_F
						default = 1;
					};					
					//Opfor
					class JMSFALL_O_Droppod_mil //B_Plane_Cas_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_Cas_01_F0";
						value = "JMSFALL_O_Droppod_mil"; //B_Plane_Cas_01_F
						default = 1;
					};
					class TIOW_Drop_Pod_WE //B_Plane_Cas_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_Cas_01_F0";
						value = "TIOW_Drop_Pod_WE"; //B_Plane_Cas_01_F
						default = 1;
					};					
				};
			};			
		};		
		class ModuleDescription: ModuleDescription
		{
			description = "$STR_A3_CfgVehicles_ModuleCas_F_ModuleDescription";
			position = 1;
			direction = 1;
		};
	};	
	class Base_ModulePlayerDroppod_F: Module_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "Base_ModuleParadrop_F";
		scope = 1;
		scopeCurator = 0;
		isGlobal = 1;
		isTriggerActivated = 1;
		category = "DEGA_Zeus_Airdrop";
		displayName = "DEGA Airdrops (Module - 0)";
		icon = "\a3\Modules_F_Curator\Data\iconCas_ca.paa";
		portrait = "\a3\Modules_F_Curator\Data\portraitCas_ca.paa";
		function = "DEGA_fnc_modulePlayerDroppod";
		curatorCost = 5;
		class Arguments
		{
			class Vehicle
			{
				displayName = "Drop Pod Selection";
				description = "";
				class values
				{
					//blufor
					class JMSFALL_B_Droppod_imc //B_Plane_Cas_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_Cas_01_F0";
						value = "JMSFALL_B_Droppod_imc"; //B_Plane_Cas_01_F
						default = 1;
					};
					//Opfor
					class JMSFALL_O_Droppod_mil //B_Plane_Cas_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_Cas_01_F0";
						value = "JMSFALL_O_Droppod_mil"; //B_Plane_Cas_01_F
						default = 1;
					};					
				};
			};			
		};		
		class ModuleDescription: ModuleDescription
		{
			description = "$STR_A3_CfgVehicles_ModuleCas_F_ModuleDescription";
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
		icon = "\a3\Modules_F_Curator\Data\iconCas_ca.paa";
		portrait = "\a3\Modules_F_Curator\Data\portraitCas_ca.paa";
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
					class B_T_VTOL_01_infantry_F //B_Plane_Cas_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_Cas_01_F0";
						value = "B_T_VTOL_01_infantry_F"; //B_Plane_Cas_01_F
						default = 1;
					};			
				};
			};
			class Ugv
			{
				displayName = "Supply Drop - Box Selection";
				description = "";
				class values
				{
					//vanilla
					class Box_NATO_AmmoVeh_F //B_Plane_Cas_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_Cas_01_F0";
						value = "Box_NATO_AmmoVeh_F"; //B_Plane_Cas_01_F
						default = 1;
					};											
				};
			};			
		};
		class ModuleDescription: ModuleDescription
		{
			description = "$STR_A3_CfgVehicles_ModuleCas_F_ModuleDescription";
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
		icon = "\a3\Modules_F_Curator\Data\iconCas_ca.paa";
		portrait = "\a3\Modules_F_Curator\Data\portraitCas_ca.paa";
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
					class B_T_VTOL_01_infantry_F //B_Plane_Cas_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_Cas_01_F0";
						value = "B_T_VTOL_01_infantry_F"; //B_Plane_Cas_01_F
						default = 1;
					};															
				};
			};
			class Ugv
			{
				displayName = "Vehicle Drop - Vehicle Selection";
				description = "";
				class values
				{
					//vanilla
					class B_LSV_01_unarmed_F //B_Plane_Cas_01_F
					{
						//name = "$STR_A3_CfgVehicles_B_Plane_Cas_01_F0";
						value = "B_LSV_01_unarmed_F"; //B_Plane_Cas_01_F
						default = 1;
					};						
				};
			};			
		};
		class ModuleDescription: ModuleDescription
		{
			description = "$STR_A3_CfgVehicles_ModuleCas_F_ModuleDescription";
			position = 1;
			direction = 1;
		};
	};	
/*	class ModuleParadrop_F: Base_ModuleParadrop_F
	{
		author = "Deltagamer";
		_generalMacro = "ModuleParadrop_F";
		scope = 1;
		scopeCurator = 2;
		simulation = "house";
		category = "DEGA_Zeus_Airdrop";
		displayName = "Airborne Unit Reinforcements";
		portrait = "\a3\Modules_F_Curator\Data\portraitCasGun_ca.paa";
		model = "\a3\Modules_F_Curator\Cas\surfaceGunMissile.p3d";
		curatorInfoType = "RscDisplayAttributesModuleParadrop";
		curatorCost = 1;
		moduleCastype = 0;
		function = "DEGA_fnc_moduleParadrop";		
		delete Arguments;
	};	*/
	class ModuleDroppod_F: Base_ModuleDroppod_F
	{
		author = "Deltagamer";
		_generalMacro = "ModuleDroppod_F";
		scope = 1;
		scopeCurator = 2;
		simulation = "house";
		category = "DEGA_Zeus_Airdrop";
		displayName = "Drop Pod Reinforcements";
		portrait = "\a3\Modules_F_Curator\Data\portraitCasGun_ca.paa";
		model = "\a3\Modules_F_Curator\Cas\surfaceMissile.p3d";
		curatorInfoType = "RscDisplayAttributesModuleParadrop";
		curatorCost = 1;
		moduleCastype = 0;
		function = "DEGA_fnc_moduleDroppod";		
		delete Arguments;
	};	
	class ModulePlayerDroppod_F: Base_ModulePlayerDroppod_F
	{
		author = "Deltagamer";
		_generalMacro = "ModuleDroppod_F";
		scope = 1;
		scopeCurator = 2;
		simulation = "house";
		category = "DEGA_Zeus_Airdrop";
		displayName = "Player or Arsenal Drop Pod";
		portrait = "\a3\Modules_F_Curator\Data\portraitCasGun_ca.paa";
		model = "\a3\Modules_F_Curator\Cas\surfaceMissile.p3d";
		curatorInfoType = "RscDisplayAttributesModulePLAYERDP";
		curatorCost = 1;
		moduleCastype = 0;
		function = "DEGA_fnc_modulePlayerDroppod";		
		delete Arguments;
	};		
/*	class ModuleSupplydrop_F: Base_ModuleSupplydrop_F
	{
		author = "Deltagamer";
		_generalMacro = "ModuleSupplydrop_F";
		scope = 1;
		scopeCurator = 2;
		simulation = "house";
		category = "DEGA_Zeus_Airdrop";
		displayName = "Airdrop Ammobox";
		portrait = "\a3\Modules_F_Curator\Data\portraitCasGun_ca.paa";
		model = "\a3\Modules_F_Curator\Cas\surfaceGunMissile.p3d";
		curatorInfoType = "RscDisplayAttributesModuleObjectdrop";
		curatorCost = 1;
		moduleCastype = 0;
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
		portrait = "\a3\Modules_F_Curator\Data\portraitCasGun_ca.paa";
		model = "\a3\Modules_F_Curator\Cas\surfaceGunMissile.p3d";
		curatorInfoType = "RscDisplayAttributesModuleVehicledrop";
		curatorCost = 1;
		moduleCastype = 0;
		function = "DEGA_fnc_moduleVehicledrop";		
		delete Arguments;
	};*/
};
class CfgScriptPaths
{
    Dega_CuratorCommon = "dega_zeus_support\data\RscCommon\";
};
class RscControlsGroupNoScrollbars;
class RscAttributeCas;
class RscText;
class RscButton;
class TabSide;
class RscCheckbox;
class RscListNBox;
class RscShortcutButton;
class RscActivePicture;
class RscButtonMenuOK;
class RscListBox;
class RscMapControl;
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
class DEGA_Background_GUI
{
	type = 0;
	idc = 124;
	style = 128;
	text = "";
	colorText[] = 
	{
		0,
		0,
		0,
		0
	};
	font = "PuristaMedium";
	sizeEx = 0;
	shadow = 0;
	x = 0.1;
	y = 0.1;
	w = 0.1;
	h = 0.1;

	colorbackground[] = 
	{
		"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])",
		"(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])",
		"(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])",
		"(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"
	};
};
class RscDisplayAttributesModuleParadrop
{
	idd = 1900;
	scriptName = "RscDisplayAttributesModuleCas";
	scriptPath = "CuratorDisplays";
	onLoad = "[""onLoad"",_this,""RscDisplayAttributesModuleParadrop"",'CuratorDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""RscDisplayAttributesModuleParadrop"",'CuratorDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	controlsBackground[]=
	{
		Background,
		Title,
		Title1,
		Title2
	};
	controls[]={
		Value1,
		Value2,
		btnWest,
		btnEast,
		ButtonOK,
		ButtonCancel
	};
////////////////////////////////////////////////////////
// GUI EDITOR OUTPUT START (by Alex, v1.063, #Juludi)
////////////////////////////////////////////////////////

	class Background: DEGA_Background_GUI
	{
		idc = 30001;

		x = 0.151437 * safezoneW + safezoneX;
		y = 0.0996 * safezoneH + safezoneY;
		w = 0.696094 * safezoneW;
		h = 0.825 * safezoneH;
		colorBackground[] = {0,0,0,0.7};
	};
	class Title: RscText
	{
		idc = 30002;

		text = "Object Selection Menu"; //--- ToDo: Localize;
		x = 0.151437 * safezoneW + safezoneX;
		y = 0.0754 * safezoneH + safezoneY;
		w = 0.696094 * safezoneW;
		h = 0.022 * safezoneH;
		colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.13])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.54])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.21])","(profilenamespace getvariable ['GUI_BCG_RGB_A',0.8])"};
	};
	class Title1: RscText
	{
		style = 16;
		idc = 1892;

		text = "Aircraft Selection"; //--- ToDo: Localize;
		x = 0.154531 * safezoneW + safezoneX;
		y = 0.1876 * safezoneH + safezoneY;
		w = 0.180469 * safezoneW;
		h = 0.022 * safezoneH;
		colorBackground[] = {0,0,0,0.5};
	};
	class Value1: RscListNBox
	{
		columns[] = {0,0.1,0.25};
		colorSelect[] = {0.95,0.95,0.95,1};
		colorSelect2[] = {0.95,0.95,0.95,1};
		colorSelectBackground[] = {1,1,1,0.25};
		colorSelectBackground2[] = {1,1,1,0.25};
		idc = 1893;
		onLoad = "lbClear _this; [_this,""DEGA_RscAttributeCas"",'Dega_CuratorCommon'] call (uinamespace getvariable ""BIS_fnc_initCuratorAttribute"");"; // AIRCRAFT

		x = 0.157625 * safezoneW + safezoneX;
		y = 0.2206 * safezoneH + safezoneY;
		w = 0.175313 * safezoneW;
		h = 0.693 * safezoneH;
		sizeEx = "1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
	};
	class Title2: RscText
	{
		style = 16;
		idc = 1895;

		text = "Object Drop Selection"; //--- ToDo: Localize;
		x = 0.339125 * safezoneW + safezoneX;
		y = 0.104 * safezoneH + safezoneY;
		w = 0.505313 * safezoneW;
		h = 0.022 * safezoneH;
		colorBackground[] = {0,0,0,0.5};
	};
	class Value2: RscListBox
	{
		columns[] = {0};
		colorSelect[] = {0.95,0.95,0.95,1};
		colorSelect2[] = {0.95,0.95,0.95,1};
		colorSelectBackground[] = {1,1,1,0.25};
		colorSelectBackground2[] = {1,1,1,0.25};
		idc = 1896;
		onLoad = "lbClear _this; missionNamespace setVariable [""SideDropPod"", ""West""]; [_this,""DEGA_RscAttributeGROUP"",'Dega_CuratorCommon'] call (uinamespace getvariable ""BIS_fnc_initCuratorAttribute"");"; // GROUP

		x = 0.341187 * safezoneW + safezoneX;
		y = 0.1326 * safezoneH + safezoneY;
		w = 0.500156 * safezoneW;
		h = 0.781 * safezoneH;
		sizeEx = "1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
	};
	class btnWest: RscShortcutButton
	{
		idc = 12;
		colorBackground2[] = {0.4,0.4,0.4,1};
		colorBackgroundFocused[] = {0.4,0.4,0.4,1};
		onButtonClick = "missionNamespace setVariable [""SideDropPod"", ""West""]; lbClear 1896; lbClear 1893; [_this,""DEGA_RscAttributeGROUP"",'Dega_CuratorCommon'] call (uinamespace getvariable ""BIS_fnc_initCuratorAttribute""); [_this,""DEGA_RscAttributeCas"",'Dega_CuratorCommon'] call (uinamespace getvariable ""BIS_fnc_initCuratorAttribute"");";

		text = "Blufor"; //--- ToDo: Localize;
		x = 0.154531 * safezoneW + safezoneX;
		y = 0.104 * safezoneH + safezoneY;
		w = 0.0876563 * safezoneW;
		h = 0.077 * safezoneH;
		colorBackground[] = {0.4,0.4,0.4,1};
	};
	class btnEast: RscShortcutButton
	{
		idc = 13;
		colorBackground2[] = {0.4,0.4,0.4,1};
		colorBackgroundFocused[] = {0.4,0.4,0.4,1};
		onButtonClick = "missionNamespace setVariable [""SideDropPod"", ""East""]; lbClear 1896; lbClear 1893; [_this,""DEGA_RscAttributeGROUP"",'Dega_CuratorCommon'] call (uinamespace getvariable ""BIS_fnc_initCuratorAttribute""); [_this,""DEGA_RscAttributeCas"",'Dega_CuratorCommon'] call (uinamespace getvariable ""BIS_fnc_initCuratorAttribute"");";

		text = "Opfor"; //--- ToDo: Localize;
		x = 0.247344 * safezoneW + safezoneX;
		y = 0.104 * safezoneH + safezoneY;
		w = 0.0876563 * safezoneW;
		h = 0.077 * safezoneH;
		colorBackground[] = {0.4,0.4,0.4,1};
	};
	class ButtonOK: RscButtonMenuOK
	{
		x = 0.759875 * safezoneW + safezoneX;
		y = 0.9268 * safezoneH + safezoneY;
		w = 0.0876563 * safezoneW;
		h = 0.022 * safezoneH;
		colorText[] = {1,1,1,1};
		colorBackground[] = {0,0,0,0.8};
	};
	class ButtonCancel: RscButtonMenuCancel
	{
		x = 0.670156 * safezoneW + safezoneX;
		y = 0.9268 * safezoneH + safezoneY;
		w = 0.0876563 * safezoneW;
		h = 0.022 * safezoneH;
		colorText[] = {1,1,1,1};
		colorBackground[] = {0,0,0,0.8};
	};
////////////////////////////////////////////////////////
// GUI EDITOR OUTPUT END
////////////////////////////////////////////////////////
};


class RscDisplayAttributesModuleObjectdrop: RscDisplayAttributes
{
	idd = 1890;
	scriptName = "RscDisplayAttributesModuleCas";
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
		class Cas: RscControlsGroupNoScrollbars 
		{
			onSetFocus = "[_this,""DEGA_RscAttributeCas"",'Dega_CuratorCommon'] call (uinamespace getvariable ""BIS_fnc_initCuratorAttribute"")";
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
		class Ugv: RscControlsGroupNoScrollbars 
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
	scriptName = "RscDisplayAttributesModuleCas";
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
		class Cas: RscControlsGroupNoScrollbars 
		{
			onSetFocus = "[_this,""DEGA_RscAttributeCas"",'Dega_CuratorCommon'] call (uinamespace getvariable ""BIS_fnc_initCuratorAttribute"");[_this,""DEGA_RscAttributeUgv"",'Dega_CuratorCommon'] call (uinamespace getvariable ""BIS_fnc_initCuratorAttribute"")";
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
		class Ugv: RscControlsGroupNoScrollbars 
		{
		   onSetFocus = "[_this,""DEGA_RscAttributeUgv"",'Dega_CuratorCommon'] call (uinamespace getvariable ""BIS_fnc_initCuratorAttribute"")";
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

class RscDisplayAttributesModulePLAYERDP: RscDisplayAttributes
{
	idd = 1900;
	scriptName = "RscDisplayAttributesModuleCas";
	scriptPath = "CuratorDisplays";
	onLoad = "[""onLoad"",_this,""RscDisplayAttributesModulePLAYERDP"",'CuratorDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""RscDisplayAttributesModulePLAYERDP"",'CuratorDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
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
		class Cas: RscControlsGroupNoScrollbars 
		{
			onSetFocus = "[_this,""DEGA_RscAttributeCas"",'Dega_CuratorCommon'] call (uinamespace getvariable ""BIS_fnc_initCuratorAttribute"")";
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
		class Group: RscControlsGroupNoScrollbars 
	    {
		    onSetFocus = "[_this,""DEGA_RscAttributePLAYERDP"",'Dega_CuratorCommon'] call (uinamespace getvariable ""BIS_fnc_initCuratorAttribute"")";
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
					text = "Player Selection";
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
					idc = 1905;
					style = LB_MULTI;
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
