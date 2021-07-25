
_logic = _this select 0;
_units = _this select 1;
_activated = _this select 2;

//--- Terminate on client (unless it's curator who created the module)
if (!isserver && {local _x} count (objectcurators _logic) == 0) exitwith {};


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


	_posATL = getposatl _logic;	
	_pos = +_posATL;
	_pos set [2,(_pos select 2) + getterrainheightasl _pos];
	
	_dir = direction _logic;

	_dis = 1;
	_alt = 7000;
	_pitch = atan (_alt / _dis);
	_speed = 800 / 3.6;
	_duration = ([0,0] distance [_dis,_alt]) / _speed;

	//--- Create plane
	_planePos = [_pos,_dis,_dir + 180] call bis_fnc_relpos;
	_planePos set [2,(_pos select 2) + _alt];
	_planeSide = (getnumber (_planeCfg >> "side")) call bis_fnc_sideType;
	_planeArray = [_planePos,_dir,_planeClass,_planeSide] call bis_fnc_spawnVehicle;
	_plane = _planeArray select 0;
	_plane setposasl _planePos;
	_plane spawn {sleep 3; _this spawn WBK_DropPodLaunchSequance;};
	{ _x addCuratorEditableObjects [[_plane],true] } forEach (allCurators);
	
	private ["_grp2","_man1","_man2","_jumpDelay","_side"];

    _jumpDelay = param [10,0.1];
    private _groupType = if (_planeSide getfriend west > 0.6) then {west} else {east};	
	_grp2 = createGroup _groupType;	
	
	_veh = _this select 0;
    _veh_type = (typeOf _veh); 
	
	for "_i" from 1 to param [9,9] step 1 do
	{
	    //tiow2
	    if (typeOf _plane == "TIOW_Drop_Pod_UM") then { _man1 = selectRandom ["TIOW_Tactical_UM_2", "TIOW_HeavyBolter_UM_4"]; };	
	    if (typeOf _plane == "TIOW_Drop_Pod_BT") then { _man1 = selectRandom ["TIOW_Tactical_BT_2", "TIOW_HeavyBolter_BT_4"]; };
	    if (typeOf _plane == "TIOW_Drop_Pod_BA") then { _man1 = selectRandom ["TIOW_Tactical_BA_2", "TIOW_HeavyBolter_BA_4"]; };
	    if (typeOf _plane == "TIOW_Drop_Pod_BR") then { _man1 = selectRandom ["TIOW_Tactical_BR_2", "TIOW_HeavyBolter_BR_4"]; };
	    if (typeOf _plane == "TIOW_Drop_Pod_DA") then { _man1 = selectRandom ["TIOW_Tactical_DA_2", "TIOW_HeavyBolter_DA_4"]; };
	    if (typeOf _plane == "TIOW_Drop_Pod_DA_HH") then { _man1 = selectRandom ["TIOW_Tactical_DA_HH_7", "TIOW_HeavyBolter_DA_HH_4"]; };
	    if (typeOf _plane == "TIOW_Drop_Pod_IF") then { _man1 = selectRandom ["TIOW_Tactical_IF_2", "TIOW_HeavyBolter_IF_4"]; };
	    if (typeOf _plane == "TIOW_Drop_Pod_IH") then { _man1 = selectRandom ["TIOW_Tactical_IH_2", "TIOW_HeavyBolter_IH_4"]; };
	    if (typeOf _plane == "TIOW_Drop_Pod_RG") then { _man1 = selectRandom ["TIOW_Tactical_RG_2", "TIOW_HeavyBolter_RG_4"]; };
	    if (typeOf _plane == "TIOW_Drop_Pod_SAL") then { _man1 = selectRandom ["TIOW_Tactical_SL_2", "TIOW_HeavyBolter_SL_4"]; };
	    if (typeOf _plane == "TIOW_Drop_Pod_SW") then { _man1 = selectRandom ["TIOW_Tactical_SW_2", "TIOW_HeavyBolter_SW_4"]; };
	    if (typeOf _plane == "TIOW_Drop_Pod_WS") then { _man1 = selectRandom ["TIOW_Tactical_WS_2", "TIOW_HeavyBolter_WS_4"]; };

	    if (typeOf _plane == "TIOW_Drop_Pod_AL") then { _man1 = selectRandom ["TIOW_Tactical_AL_2", "TIOW_HeavyBolter_AL_4"]; };	
	    if (typeOf _plane == "TIOW_Drop_Pod_BL") then { _man1 = selectRandom ["TIOW_Tactical_BL_2", "TIOW_HeavyBolter_BL_4"]; };
	    if (typeOf _plane == "TIOW_Drop_Pod_DG") then { _man1 = selectRandom ["TIOW_Tactical_DG_2", "TIOW_HeavyBolter_DG_4"]; };
	    if (typeOf _plane == "TIOW_Drop_Pod_EC") then { _man1 = selectRandom ["TIOW_Tactical_EC_2", "TIOW_HeavyBolter_EC_4"]; };
	    if (typeOf _plane == "TIOW_Drop_Pod_IW") then { _man1 = selectRandom ["TIOW_Tactical_IW_2", "TIOW_HeavyBolter_IW_4"]; };
	    if (typeOf _plane == "TIOW_Drop_Pod_NL") then { _man1 = selectRandom ["TIOW_Tactical_NL_7", "TIOW_HeavyBolter_NL_4"]; };	
	    if (typeOf _plane == "TIOW_Drop_Pod_TS") then { _man1 = selectRandom ["TIOW_Tactical_TS_2", "TIOW_HeavyBolter_TS_4"]; };
	    if (typeOf _plane == "TIOW_Drop_Pod_WB") then { _man1 = selectRandom ["TIOW_Tactical_WB_2", "TIOW_HeavyBolter_WB_4"]; };
	    if (typeOf _plane == "TIOW_Drop_Pod_WE") then { _man1 = selectRandom ["TIOW_Tactical_WE_2", "TIOW_HeavyBolter_WE_4"]; };		
	
	    _man2 = _grp2 createUnit [_man1, [(getPos _plane) select 0,(getPos _plane) select 1, ((getPos _plane) select 2) - 3], [], 0, "NONE"];
		_man2 moveInAny _plane;	    
		_man2 allowFleeing 0;
		_placed = _man2;
    	{ _x addCuratorEditableObjects [[_placed],true] } forEach (allCurators);	
	    sleep _jumpDelay;
	};		
	
	//_plane setPos [_plane select 0,_logic select 1,(_plane select 2) + 7000];  _plane spawn {sleep 3; _this spawn WBK_DropPodLaunchSequance;};

	_plane setvariable ["logic",_logic];
	_logic setvariable ["plane",_plane];	

	//--- Show hint
	[[["Curator","PlaceOrdnance"],nil,nil,nil,nil,nil,nil,true],"bis_fnc_advHint",objectcurators _logic] call bis_fnc_mp;

	//--- Play radio
	[_plane,"CuratorModuleCAS"] call bis_fnc_curatorSayMessage;

	
	if !(isnull _logic) then {
		sleep 1;
		deletevehicle _logic;
		waituntil {_plane distance _pos < _dis || !alive _plane};
	};
/*
	//--- Delete plane
	if (alive _plane) then {
		_group = group _plane;
		_crew = crew _plane;
		deletevehicle _plane;
		{deletevehicle _x} foreach _crew;
		deletegroup _group;
	};
	*/
};



