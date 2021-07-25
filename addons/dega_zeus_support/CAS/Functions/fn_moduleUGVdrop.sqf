
_logic = _this select 0;
_units = _this select 1;
_activated = _this select 2;

//--- Terminate on client (unless it's curator who created the module)
if (!isserver && {local _x} count (objectcurators _logic) == 0) exitwith {};


_veh = _this select 0;
_veh_type = (typeOf _veh);

Supported_UK = ["LIB_HORSA_RAF"];
Supported_US = ["LIB_HORSA"];
Supported_ALL = Supported_US + Supported_UK;


//Paradropping

if (_activated) then {

	//--- Wait for params to be set
	if (_logic call bis_fnc_isCuratorEditable) then {
		waituntil {!isnil {_logic getvariable "vehicle"} || isnull _logic};
	};
	if (isnull _logic) exitwith {};

	//--- Show decal
	if ({local _x} count (objectcurators _logic) > 0) then {
		//--- Reveal the circle to curators
		_logic hideobject false;
		_logic setpos position _logic;
		//_logic setPosATL [(getPos _logic) select 0, (getPos _logic) select 1, 210];
	};
	if !(isserver) exitwith {};

	_planeClass = _logic getvariable ["vehicle","B_T_VTOL_01_infantry_F"];
	_planeCfg = configfile >> "cfgvehicles" >> _planeClass;
	if !(isclass _planeCfg) exitwith {["Vehicle class '%1' not found",_planeClass] call bis_fnc_error; false};

	//--- Restore custom direction
	_dirVar = _fnc_scriptname + typeof _logic;
	_logic setdir (missionnamespace getvariable [_dirVar,direction _logic]);


	//--- Detect gun
	_weaponTypesID = _logic getvariable ["type",getnumber (configfile >> "cfgvehicles" >> typeof _logic >> "moduleCAStype")];
	_weaponTypes = switch _weaponTypesID do {
		case 0: {["machinegun"]};
		case 1: {["missilelauncher"]};
		case 2: {["machinegun","missilelauncher"]};
		case 3: {["bomblauncher"]};
		default {[]};
	};
	_weapons = [];
	{
		if (tolower ((_x call bis_fnc_itemType) select 1) in _weaponTypes) then {
			_modes = getarray (configfile >> "cfgweapons" >> _x >> "modes");
			if (count _modes > 0) then {
				_mode = _modes select 0;
				if (_mode == "this") then {_mode = _x;};
				_weapons set [count _weapons,[_x,_mode]];
			};
		};
	} foreach (_planeClass call bis_fnc_weaponsEntityType);//getarray (_planeCfg >> "weapons");
	//if (count _weapons == 0) exitwith {["No weapon of types %2 wound on '%1'",_planeClass,_weaponTypes] call bis_fnc_error; false};


	_posATL = getposatl _logic;	
	_pos = +_posATL;
	_pos set [2,(_pos select 2) + getterrainheightasl _pos];
	
	_dir = direction _logic;

	_dis = 3000;
	_alt = 800;
	_pitch = atan (_alt / _dis);
	_speed = 320 / 3.6;
	_duration = ([0,0] distance [_dis,_alt]) / _speed;

	//--- Create plane
	_planePos = [_pos,_dis,_dir + 180] call bis_fnc_relpos;
	_planePos set [2,(_pos select 2) + _alt];
	_planeSide = (getnumber (_planeCfg >> "side")) call bis_fnc_sideType;
	_planeArray = [_planePos,_dir,_planeClass,_planeSide] call bis_fnc_spawnVehicle;
	_plane = _planeArray select 0;
	_plane setposasl _planePos;
	_plane move ([_pos,_dis,_dir] call bis_fnc_relpos);
		
	_plane disableai "move";
	_plane disableai "target";
	_plane disableai "autotarget";
	_plane setcombatmode "blue";

	_vectorDir = [_planePos,_pos] call bis_fnc_vectorFromXtoY; //[_pos select 0,_pos select 1,(_pos select 2) +  * 200]
	_velocity = [_vectorDir,_speed] call bis_fnc_vectorMultiply;
	_plane setvectordir _vectorDir;
	[_plane,-90 + atan (_dis / _alt),0] call bis_fnc_setpitchbank;
	_vectorUp = vectorup _plane;

	//--- Remove all other weapons;
	_currentWeapons = weapons _plane;
	{
		if !(tolower ((_x call bis_fnc_itemType) select 1) in (_weaponTypes + ["countermeasureslauncher"])) then {
			_plane removeweapon _x;
		};
	} foreach _currentWeapons;


	//--- Cam shake
	_ehFired = _plane addeventhandler [
		"fired",
		{
			_this spawn {
				_plane = _this select 0;
				_plane removeeventhandler ["fired",_plane getvariable ["ehFired",-1]];
				_projectile = _this select 6;
				waituntil {isnull _projectile};
				[[0.005,4,[_plane getvariable ["logic",objnull],200]],"bis_fnc_shakeCuratorCamera"] call bis_fnc_mp;
			};
		}
	];
	_plane setvariable ["ehFired",_ehFired];


	_plane setvariable ["logic",_logic];
	_logic setvariable ["plane",_plane];	

	//--- Show hint
	[[["Curator","PlaceOrdnance"],nil,nil,nil,nil,nil,nil,true],"bis_fnc_advHint",objectcurators _logic] call bis_fnc_mp;

	//--- Play radio
	[_plane,"CuratorModuleCAS"] call bis_fnc_curatorSayMessage;

	//--- Approach
	_fire = [] spawn {waituntil {false}};
	_fireNull = true;
	_time = time;
	//_offset = if ({_x == "missilelauncher"} count _weaponTypes > 0) then {20} else {200};  //Defo Changes height
	_offset = if ((typeOf _plane) in Supported_ALL) then {0} else {160};  //Defo Changes height
	waituntil {
		_fireProgress = _plane getvariable ["fireProgress",0];

		//--- Update plane position when module was moved / rotated
		if ((getposatl _logic distance _posATL > 0 || direction _logic != _dir) && _fireProgress == 0) then {
			_posATL = getposatl _logic;
			_pos = +_posATL;
			_pos set [2,(_pos select 2) + getterrainheightasl _pos];
			_dir = direction _logic;
			missionnamespace setvariable [_dirVar,_dir];

			_planePos = [_pos,_dis,_dir + 180] call bis_fnc_relpos;
			_planePos set [2,(_pos select 2) + _alt];
			_vectorDir = [_planePos,_pos] call bis_fnc_vectorFromXtoY;
			_velocity = [_vectorDir,_speed] call bis_fnc_vectorMultiply;
			_plane setvectordir _vectorDir;
			_vectorUp = vectorup _plane;

			_plane move ([_pos,_dis,_dir] call bis_fnc_relpos);
		};

		//--- Set the plane approach vector
		_plane setVelocityTransformation [
			_planePos, [_pos select 0,_pos select 1,(_pos select 2) + _offset + _fireProgress * 20], //changes height
			_velocity, _velocity,
			_vectorDir,_vectorDir,
			_vectorUp, _vectorUp,
			(time - _time) / _duration
		];
		_plane setvelocity velocity _plane;
		//_plane flyinheight _alt; //maybe remove

		//--- Fire!
		if ((getposasl _plane) distance _pos < 500 && _fireNull) then 
		{
			//--- Create laser target
			private _targetType = if (_planeSide getfriend west > 0.6) then {"LaserTargetW"} else {"LaserTargetE"};
			_target = ((position _logic nearEntities [_targetType,250])) param [0,objnull];
			if (isnull _target) then {
				_target = createvehicle [_targetType,position _logic,[],0,"none"];
			};
			_plane reveal lasertarget _target;
			_plane dowatch lasertarget _target;
			_plane dotarget lasertarget _target;

			_fireNull = false;
			terminate _fire;
			_fire = [_plane,_weapons,_target,_weaponTypesID] spawn 
			{
				_plane = _this select 0;
				_planeDriver = driver _plane;
				_weapons = _this select 1;
				_target = _this select 2;
				_weaponTypesID = _this select 3;
				_duration = 1;
				_time = time + _duration;
				waituntil 
				{
					{
						//_plane selectweapon (_x select 0);
						//_planeDriver forceweaponfire _x;
						_planeDriver fireattarget [_target,(_x select 0)];
					} foreach _weapons;
					_plane setvariable ["fireProgress",(1 - ((_time - time) / _duration)) max 0 min 1];
					sleep 0.1;
					time > _time || _weaponTypesID == 3 || isnull _plane //--- Shoot only for specific period or only one bomb
				};
				sleep 1;
			};			
		};

		sleep 0.01;
		scriptdone _fire || isnull _logic || isnull _plane
	};
	_plane setvelocity velocity _plane;
	_plane flyinheight _alt;

	//--- Fire CM
	if ({_x == "bomblauncher"} count _weaponTypes == 0) then {
		for "_i" from 0 to 1 do {
			driver _plane forceweaponfire ["CMFlareLauncher","Burst"];
			_time = time + 1.1;
			waituntil {time > _time || isnull _logic || isnull _plane};
		};
	};
	
	private ["_grp2","_man1","_man2","_openHeight","_jumpDelay","_jumperAmount","_side"];

    _jumperAmount = param [9,1];
    _jumpDelay = param [10,0.1];
    _openHeight = param [11,200];
    private _groupType = if (_planeSide getfriend west > 0.6) then {west} else {east};	
	_grp2 = createGroup _groupType;	
	_veh = _this select 0;
    _veh_type = (typeOf _veh);
	
	for "_i" from 1 to _jumperAmount step 1 do
	{
		//vanilla
    	if (typeOf _plane == "B_T_VTOL_01_infantry_F") then { _man1 = selectRandom ["B_T_UGV_01_rcws_olive_F"]; }; 
		if (typeOf _plane == "O_T_VTOL_02_infantry_dynamicLoadout_F") then { _man1 = selectRandom ["O_T_UGV_01_rcws_ghex_F"]; };
		//rhs
		if (typeOf _plane == "RHS_C130J") then { _man1 = selectRandom ["B_UGV_01_rcws_F"]; };
		if (typeOf _plane == "RHS_TU95MS_vvs_old") then { _man1 = selectRandom ["O_UGV_01_rcws_F"]; };			
		//cup
		/*
		if (typeOf _plane == "CUP_B_MV22_USMC") then { _man1 = selectRandom ["CUP_B_USMC_MARSOC_Medic_DA", "CUP_B_USMC_MARSOC_AR_DA"]; }; //maybe ''
		if (typeOf _plane == "CUP_B_C130J_USMC") then { _man1 = selectRandom ["CUP_B_USMC_Soldier", "CUP_B_USMC_Soldier_LAT"]; };
		if (typeOf _plane == "CUP_B_C47_USA") then { _man1 = selectRandom ["CUP_B_US_Soldier_OCP", "CUP_B_US_Soldier_LAT_OCP"]; };
		if (typeOf _plane == "CUP_B_C130J_GB") then { _man1 = selectRandom ["CUP_B_BAF_Soldier_Rifleman_MTP", "CUP_B_BAF_Soldier_RiflemanAT_MTP"]; };
		if (typeOf _plane == "CUP_O_C47_SLA") then { _man1 = selectRandom ["CUP_O_TK_Soldier", "CUP_O_TK_Soldier_AT"]; };
		if (typeOf _plane == "CUP_O_C130J_TKA") then { _man1 = selectRandom ["CUP_O_TK_Soldier", "CUP_O_TK_Soldier_AT"]; };
		*/
		_man2 = createVehicle [_man1, [(getPos _logic) select 0,(getPos _logic) select 1, ((getPos _logic) select 2) - 3], [], 0, "NONE"];
		_man2 setPos [(getPos _logic) select 0,(getPos _logic) select 1, 150]; //(getPos _logic) select 0,(getPos _logic) select 1, ((getPos _logic) select 2) - 3
		private ["_para","_paras","_p","_veh","_vel","_time"];
		[_man2,_openHeight] spawn
		{
		    params ["_man2","_openHeight","_para"];
		    waitUntil{((getPos _man2)select 2)<_openHeight};
     		if (isClass(configFile >> "CfgVehicles" >> "vn_b_wheeled_m54_03")) then
     	    {
           		_para = "vn_b_parachute_02" createVehicle position _man2;
     	  	} else {
    	        _para = "B_Parachute_02_F" createVehicle position _man2;
    	    };
			//_para = "gm_parachute_t10" createVehicle position _man2;
			_para setPos (getPos _man2);
			//_man2 attachTo [_para, [0, 0, -1]];	
				
            private ["_paras","_p","_veh","_vel","_time"];

            _paras =  [_para];
            _man2 attachTo [_para, [0,0,-1]];
            {
     			if (isClass(configFile >> "CfgVehicles" >> "vn_b_wheeled_m54_03")) then
   		  	    {
    	       		_p = "vn_b_parachute_02" createVehicle position _para;
 	    	  	} else {
		   	        _p = "B_Parachute_02_F" createVehicle position _para;
    	    	};
                _paras set [count _paras, _p];
                _p attachTo [_para, [0,0,0]];
                _p setVectorUp _x;
            } count [
                [0.5,0.4,0.6],[-0.5,0.4,0.6],[0.5,-0.4,0.6],[-0.5,-0.4,0.6]
            ];				
        };		
		_man2 allowFleeing 0;
		_placed = _man2;
	    createVehicleCrew _man2;		
 		{ _x addCuratorEditableObjects [[_placed],true] } forEach (allCurators);	
		sleep _jumpDelay; 		
	};

	if !(isnull _logic) then {
		sleep 1;
		deletevehicle _logic;
		
	    waitUntil {position _man2 select 2 < 3}; 
        detach _man2;		
		
		waituntil {_plane distance _pos > _dis || !alive _plane};
	};

	//--- Delete plane
	if (alive _plane) then {
		_group = group _plane;
		_crew = crew _plane;
		deletevehicle _plane;
		{deletevehicle _x} foreach _crew;
		deletegroup _group;
	};
};


// Paradropping


