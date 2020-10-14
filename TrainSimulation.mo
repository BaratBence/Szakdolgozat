package TrainSimulation
  //Class representing a single curve on the train track

  class Curve
    parameter Real radius(unit = "m") = 1800;
    parameter Real Gravity(unit = "m/s^2") = 9.81;
    parameter Real TrackGauge(unit = "mm") = 1475;
    parameter Real cant(unit = "mm") = 160;
    parameter Real cantdeficiency(unit = "mm") = 100;
    parameter Real Start(unit = "m") = 40;
    parameter Real End(unit = "m") = 50;
    parameter Integer size = 10;
    Real CurveSpeedValue(start =0);
    //Real onCurveValue(start =0);
    //All trains distance(in a lap) as input
    Modelica.Blocks.Interfaces.RealVectorInput TrainDistance[size];
    //All trains length as input
    Modelica.Blocks.Interfaces.RealVectorInput TrainLength[size];
    //Data for each train to limit their speed
    Modelica.Blocks.Interfaces.RealVectorOutput CurveSpeed[size];
    //Data for each train if they are on the rail
    Modelica.Blocks.Interfaces.RealVectorOutput onCurve[size] = {
    if TrainDistance[1] >= Start and TrainDistance[1] <= End + TrainLength[1] then 1 else 0, 
    if TrainDistance[2] >= Start and TrainDistance[2] <= End + TrainLength[2] then 1 else 0,
    if TrainDistance[3] >= Start and TrainDistance[3] <= End + TrainLength[3] then 1 else 0,
    if TrainDistance[4] >= Start and TrainDistance[4] <= End + TrainLength[4] then 1 else 0,
    if TrainDistance[5] >= Start and TrainDistance[5] <= End + TrainLength[5] then 1 else 0,
    if TrainDistance[6] >= Start and TrainDistance[6] <= End + TrainLength[6] then 1 else 0,
    if TrainDistance[7] >= Start and TrainDistance[7] <= End + TrainLength[7] then 1 else 0,
    if TrainDistance[8] >= Start and TrainDistance[8] <= End + TrainLength[8] then 1 else 0,
    if TrainDistance[9] >= Start and TrainDistance[9] <= End + TrainLength[9] then 1 else 0,
    if TrainDistance[10] >= Start and TrainDistance[10] <= End + TrainLength[10] then 1 else 0} ;

//multiply calculated data for interfaces

    function SpeedCalculations
      input Integer size;
      input Real value;
      output Real curvespeed[size];
    algorithm
      for i in 1:size loop
        curvespeed[i] := value;
      end for;
    end SpeedCalculations;
    
  equation
    CurveSpeedValue = sqrt(radius * Gravity * (cant + cantdeficiency) / TrackGauge);
    CurveSpeed = SpeedCalculations(size,CurveSpeedValue);
//onCurve = OnTrack(size, TrainDistance, TrainLength);
  end Curve;

  class Train
    Modelica.Blocks.Interfaces.RealOutput Distance;
    Modelica.Blocks.Interfaces.RealOutput Length;
    Modelica.Blocks.Interfaces.BooleanInput ActiveCurve;
    Modelica.Blocks.Interfaces.RealInput onCurveSpeed;
    Modelica.Blocks.Interfaces.BooleanInput ActiveUpHill;
    Modelica.Blocks.Interfaces.RealInput onUpHillAcc;
    //Modelica.Blocks.Interfaces.BooleanInput ActiveDownHill;
    //Modelica.Blocks.Interfaces.RealInput onDownHillAcc;
    Modelica.Blocks.Interfaces.IntegerInput StationState;
    Modelica.Blocks.Interfaces.RealInput Station;
    Modelica.Blocks.Interfaces.RealInput Sensor1Position;
    Modelica.Blocks.Interfaces.RealInput Sensor2Position;
    //Modelica.Blocks.Interfaces.BooleanOutput Arrived;
    StationSignal state;
    parameter Integer size = 10;
    parameter Real maxSpeed(unit = "m/s") = 75;
    parameter Real breakingDeceleration(unit = "m/s2") = 20.0;
    parameter Real length(unit = "m") = 20;
    parameter Real lap = 99999999;
    parameter Real distanceStart(unit = "m") = 0;
    Integer Lapcount(start = 0);
    Real distance(start = distanceStart);
    Real speed(start = maxSpeed);
    Real acceleration(start = 0.0);
    Real lapDistance(start = distanceStart);
    Real BreakingDistance(start = 0);
    Boolean Decelerating(start = false);
    Boolean inStation(start = false);
    Boolean Arrived(start = false);
    Boolean Crashed =false;
  equation
    Integer(state) = StationState;
    BreakingDistance = 1 / 2 * (speed / breakingDeceleration) ^ 2 * breakingDeceleration;
    Distance = lapDistance;
    Length = length;
    der(acceleration) = 0.0;
    der(distance) = speed;
    der(speed) = acceleration;
    der(lapDistance) = speed;
    Lapcount = distance / lap;
    Decelerating = if acceleration < 0 then true else false;
    inStation = if lapDistance + BreakingDistance + 10 >= Sensor1Position and lapDistance <= Sensor2Position then true else false;
    when lapDistance >= lap then
      reinit(lapDistance, 0);
    end when;
    when speed >= onCurveSpeed and ActiveCurve then
      reinit(acceleration, -breakingDeceleration);
    end when;
    when speed <= onCurveSpeed and ActiveCurve then
      reinit(acceleration, 0.0);
    end when;
    when speed<=maxSpeed and not ActiveCurve and not ActiveUpHill and not inStation then
//change(ActiveCurve) and not ActiveCurve then
      reinit(acceleration, breakingDeceleration);
    end when;
    when speed>=maxSpeed and not inStation then
      reinit(acceleration, 0.0);
    end when;
    /*when speed >= maxSpeed and not ActiveCurve and not ActiveUpHill and not change(ActiveCurve) and not change(ActiveUpHill) and not Decelerating and not inStation then
      reinit(acceleration, 0.0);
    end when;*/
    /*when Decelerating and speed <= maxSpeed and not ActiveCurve and not ActiveUpHill and not change(ActiveCurve) and not change(ActiveUpHill) and not inStation then
//and not ActiveDownHill and not change(ActiveDownHill)
      reinit(acceleration, 0.0);
    end when;*/
    when ActiveUpHill then
      reinit(acceleration, onUpHillAcc);
    end when;
    when change(ActiveUpHill) and not ActiveUpHill then
      reinit(acceleration, breakingDeceleration);
    end when;
  
    when inStation and speed > 0 and lapDistance + BreakingDistance + 5 >= Sensor1Position - 10 and lapDistance + BreakingDistance - 5 <= Sensor1Position - 10 and state == StationSignal.red then
      reinit(acceleration, -breakingDeceleration);
    end when;
    when inStation and speed <=0  and lapDistance + BreakingDistance + 5 >= Sensor1Position -10 and lapDistance + BreakingDistance - 5 <= Sensor1Position -10 and state == StationSignal.red then
      reinit(acceleration, 0.0);
    end when;
    when inStation and speed < 45 and lapDistance + BreakingDistance + 5 >= Sensor1Position -10 and lapDistance + BreakingDistance - 5 <= Sensor1Position -10 and state == StationSignal.green then
      reinit(acceleration, breakingDeceleration+10);
    end when;
    
    when inStation and speed > 0 and lapDistance + BreakingDistance + 10>= Station and lapDistance + BreakingDistance  -10 <= Station and not Arrived then
      reinit(acceleration, -breakingDeceleration);
    end when;
    when inStation and speed <= 0 and Arrived then
      reinit(acceleration, breakingDeceleration);
    end when;
    /*when inStation and speed <= 0 and lapDistance <= Sensor1Position then
      reinit(acceleration, 0.0);
    end when;*/
    when speed>=45 then 
    reinit(acceleration,0.0);
    end when; 
    Arrived = if inStation and lapDistance > Sensor1Position and lapDistance< Sensor2Position and lapDistance + 11 >=Station then true else false;
    /*if inStation and speed <= 0 and lapDistance + 10 >= Station and state == StationSignal.red then
      Arrived = true;
    else
      Arrived = false;
    end if;*/
  end Train;

  model Sim
    Train train(lap = 44230.36, length = 30, StationState = 1, Sensor1Position = 100000000, Sensor2Position = 1000000, Station = 10000000);
    Train train2(lap = 4423.36, distanceStart = -2000, StationState = -1, Sensor1Position = 10000, Sensor2Position = 10000, Station = 100000);
    Curve c1(Start = 1, End = 402.366);
    Curve c2(Start = 603.504, End = 1005.84);
    //Curve c3(Start = 2011.68, End = 2414.016);
    //Curve c4(Start = 2615.184, End = 3017.52);
    UpHill h1(Start = 1500, End = 1700);
    VehicleCollection TrainCollection;
    StructureCollection CurveCollection(OnStructure3 = 0, OnStructure4 = 0, OnStructure5 = 0, OnStructure6 = 0, OnStructure7 = 0, OnStructure8 = 0, OnStructure9 = 0, OnStructure10 = 0, Speed3 = 0, Speed4 = 0, Speed5 = 0, Speed6 = 0, Speed7 = 0, Speed8 = 0, Speed9 = 0, Speed10 = 0);
    StructureCollection UpHillCollection(OnStructure2 =0, OnStructure3 = 0, OnStructure4 = 0, OnStructure5 = 0, OnStructure6 = 0, OnStructure7 = 0, OnStructure8 = 0, OnStructure9 = 0, OnStructure10 = 0,Speed2=0, Speed3 = 0, Speed4 = 0, Speed5 = 0, Speed6 = 0, Speed7 = 0, Speed8 = 0, Speed9 = 0, Speed10 = 0);
    
    StructureCollection CurveCollection2(OnStructure3 = 0, OnStructure4 = 0, OnStructure5 = 0, OnStructure6 = 0, OnStructure7 = 0, OnStructure8 = 0, OnStructure9 = 0, OnStructure10 = 0, Speed3 = 0, Speed4 = 0, Speed5 = 0, Speed6 = 0, Speed7 = 0, Speed8 = 0, Speed9 = 0, Speed10 = 0);
    StructureCollection UpHillCollection2(OnStructure2 =0, OnStructure3 = 0, OnStructure4 = 0, OnStructure5 = 0, OnStructure6 = 0, OnStructure7 = 0, OnStructure8 = 0, OnStructure9 = 0, OnStructure10 = 0,Speed2=0, Speed3 = 0, Speed4 = 0, Speed5 = 0, Speed6 = 0, Speed7 = 0, Speed8 = 0, Speed9 = 0, Speed10 = 0);
  equation
    connect(train.Distance, TrainCollection.Distance1);
    connect(train.Length, TrainCollection.Length1);
    connect(train.onCurveSpeed, CurveCollection.speed);
    connect(train.ActiveCurve, CurveCollection.Activated);
    connect(train.onUpHillAcc, UpHillCollection.speed);
    connect(train.ActiveUpHill, UpHillCollection.Activated);
    
    connect(train2.Distance, TrainCollection.Distance2);
    connect(train2.Length, TrainCollection.Length2);
    connect(train2.onCurveSpeed, CurveCollection2.speed);
    connect(train2.ActiveCurve, CurveCollection2.Activated);
    connect(train2.onUpHillAcc, UpHillCollection2.speed);
    connect(train2.ActiveUpHill, UpHillCollection2.Activated);
    
    connect(TrainCollection.LengthVec, c1.TrainLength);
  connect(TrainCollection.LengthVec, c2.TrainLength);
//connect(TrainCollection.LengthVec, c3.TrainLength);
//connect(TrainCollection.LengthVec, c4.TrainLength);
    connect(TrainCollection.LengthVec, h1.TrainLength);
    connect(TrainCollection.DistanceVec, c1.TrainDistance);
  connect(TrainCollection.DistanceVec, c2.TrainDistance);
//connect(TrainCollection.DistanceVec, c3.TrainDistance);
//connect(TrainCollection.DistanceVec, c4.TrainDistance);
    connect(TrainCollection.DistanceVec, h1.TrainDistance);
    
//setting the corners speed for each train to their structure collection corner number
//connect(cornername.CurveSpeed[number of the train], trains CurveCollection.Speed + number of corner
    connect(c1.CurveSpeed[1], CurveCollection.Speed1);
    connect(c1.CurveSpeed[2], CurveCollection2.Speed1);
//setting the corners activeness for each train to their structure collection corner number
//connect(cornername.onCurve[number of the train], trains CurveCollection.OnStructure + number of corner
    connect(c1.onCurve[1], CurveCollection.OnStructure1);
    connect(c1.onCurve[2], CurveCollection2.OnStructure1);
    connect(c2.CurveSpeed[1], CurveCollection.Speed2);
    connect(c2.CurveSpeed[2], CurveCollection2.Speed2);
    connect(c2.onCurve[1], CurveCollection.OnStructure2);
    connect(c2.onCurve[2], CurveCollection2.OnStructure2);
    
  /*  connect(c3.CurveSpeed[1], CurveCollection.Speed3);
    connect(c3.CurveSpeed[2], CurveCollection2.Speed3);
    connect(c3.onCurve[1], CurveCollection.OnStructure3);
    connect(c3.onCurve[2], CurveCollection2.OnStructure3);
    
    connect(c4.CurveSpeed[1], CurveCollection.Speed4);
    connect(c4.CurveSpeed[2], CurveCollection2.Speed4);
    connect(c4.onCurve[1], CurveCollection.OnStructure4);
    connect(c3.onCurve[2], CurveCollection2.OnStructure4);*/
    connect(h1.HillAcc[1], UpHillCollection.Speed1);
    connect(h1.HillAcc[2], UpHillCollection2.Speed1);
    connect(h1.onHill[1], UpHillCollection.OnStructure1);
    connect(h1.onHill[2], UpHillCollection2.OnStructure1);
  end Sim;

  //Collection for only one trains Structures
  //For one train all structure instances

  class StructureCollection
    Modelica.Blocks.Interfaces.RealInput OnStructure1(start = 0);
    Modelica.Blocks.Interfaces.RealInput OnStructure2(start = 0);
    Modelica.Blocks.Interfaces.RealInput OnStructure3(start = 0);
    Modelica.Blocks.Interfaces.RealInput OnStructure4(start = 0);
    Modelica.Blocks.Interfaces.RealInput OnStructure5(start = 0);
    Modelica.Blocks.Interfaces.RealInput OnStructure6(start = 0);
    Modelica.Blocks.Interfaces.RealInput OnStructure7(start = 0);
    Modelica.Blocks.Interfaces.RealInput OnStructure8(start = 0);
    Modelica.Blocks.Interfaces.RealInput OnStructure9(start = 0);
    Modelica.Blocks.Interfaces.RealInput OnStructure10(start = 0);
    parameter Integer size = 10;
    Modelica.Blocks.Interfaces.RealInput Speed1(start = 0);
    Modelica.Blocks.Interfaces.RealInput Speed2(start = 0);
    Modelica.Blocks.Interfaces.RealInput Speed3(start = 0);
    Modelica.Blocks.Interfaces.RealInput Speed4(start = 0);
    Modelica.Blocks.Interfaces.RealInput Speed5(start = 0);
    Modelica.Blocks.Interfaces.RealInput Speed6(start = 0);
    Modelica.Blocks.Interfaces.RealInput Speed7(start = 0);
    Modelica.Blocks.Interfaces.RealInput Speed8(start = 0);
    Modelica.Blocks.Interfaces.RealInput Speed9(start = 0);
    Modelica.Blocks.Interfaces.RealInput Speed10(start = 0);
    Modelica.Blocks.Interfaces.RealOutput speed;
    Modelica.Blocks.Interfaces.BooleanOutput Activated(start = false);
    Integer number(start = -1);
    Real OnStructureArray[size] = {OnStructure1, OnStructure2, OnStructure3, OnStructure4, OnStructure5, OnStructure6, OnStructure7, OnStructure8, OnStructure9, OnStructure10};
    Real SpeedArray[size] = {Speed1, Speed2, Speed3, Speed4, Speed5, Speed6, Speed7, Speed8, Speed9, Speed10};
    //find's the single active track elements position

    function Active
      input Integer size;
      input Real Array[size];
      output Integer Activatedout(start = -1);
    algorithm
      for i in 1:size loop
        if Array[i] > 0.5 then
          Activatedout := i;
        end if;
      end for;
    end Active;
  equation
    number = Active(size, OnStructureArray);
    if number > (-1) and number <= size then
      speed = SpeedArray[number];
      Activated = true;
    else
      speed = 0;
      Activated = false;
    end if;
  end StructureCollection;

  class VehicleCollection
    Modelica.Blocks.Interfaces.RealInput Distance1(start = 0);
    Modelica.Blocks.Interfaces.RealInput Distance2(start = 0);
    Modelica.Blocks.Interfaces.RealInput Distance3 = 0;
    Modelica.Blocks.Interfaces.RealInput Distance4 = 0;
    Modelica.Blocks.Interfaces.RealInput Distance5 = 0;
    Modelica.Blocks.Interfaces.RealInput Distance6 = 0;
    Modelica.Blocks.Interfaces.RealInput Distance7 = 0;
    Modelica.Blocks.Interfaces.RealInput Distance8 = 0;
    Modelica.Blocks.Interfaces.RealInput Distance9 = 0;
    Modelica.Blocks.Interfaces.RealInput Distance10 = 0;
    Modelica.Blocks.Interfaces.RealInput Length1(start = 0);
    Modelica.Blocks.Interfaces.RealInput Length2(start = 0);
    Modelica.Blocks.Interfaces.RealInput Length3 = 0;
    Modelica.Blocks.Interfaces.RealInput Length4 = 0;
    Modelica.Blocks.Interfaces.RealInput Length5 = 0;
    Modelica.Blocks.Interfaces.RealInput Length6 = 0;
    Modelica.Blocks.Interfaces.RealInput Length7 = 0;
    Modelica.Blocks.Interfaces.RealInput Length8 = 0;
    Modelica.Blocks.Interfaces.RealInput Length9 = 0;
    Modelica.Blocks.Interfaces.RealInput Length10 = 0;
    Modelica.Blocks.Interfaces.RealVectorOutput LengthVec[size];
    Modelica.Blocks.Interfaces.RealVectorOutput DistanceVec[size];
    parameter Integer size = 10;
    Real lengthVec[size] = {Length1, Length2, Length3, Length4, Length5, Length6, Length7, Length8, Length9, Length10};
    Real distanceVec[size] = {Distance1, Distance2, Distance3, Distance4, Distance5, Distance6, Distance7, Distance8, Distance9, Distance10};
  equation
    LengthVec = lengthVec;
    DistanceVec = distanceVec;
  end VehicleCollection;

  class UpHill
  parameter Real angle(unit = "degree") = 30;
    parameter Real Start(unit = "m") = 40;
    parameter Real End(unit = "m") = 50;
    parameter Integer size = 10;
    //All trains distance(in a lap) as input
    Modelica.Blocks.Interfaces.RealVectorInput TrainDistance[size];
    //All trains length as input
    Modelica.Blocks.Interfaces.RealVectorInput TrainLength[size];
    //Data for each train to limit their speed
    Modelica.Blocks.Interfaces.RealVectorOutput HillAcc[size];
    //Data for each train if they are on the rail
    Modelica.Blocks.Interfaces.RealVectorOutput onHill[size] = {
    if TrainDistance[1] >= Start and TrainDistance[1] <= End + TrainLength[1] then 1 else 0,
    if TrainDistance[2] >= Start and TrainDistance[2] <= End + TrainLength[2] then 1 else 0,
    if TrainDistance[3] >= Start and TrainDistance[3] <= End + TrainLength[3] then 1 else 0,
    if TrainDistance[4] >= Start and TrainDistance[4] <= End + TrainLength[4] then 1 else 0,
    if TrainDistance[5] >= Start and TrainDistance[5] <= End + TrainLength[5] then 1 else 0,
    if TrainDistance[6] >= Start and TrainDistance[6] <= End + TrainLength[6] then 1 else 0,
    if TrainDistance[7] >= Start and TrainDistance[7] <= End + TrainLength[7] then 1 else 0,
    if TrainDistance[8] >= Start and TrainDistance[8] <= End + TrainLength[8] then 1 else 0,
    if TrainDistance[9] >= Start and TrainDistance[9] <= End + TrainLength[9] then 1 else 0,
    if TrainDistance[10] >= Start and TrainDistance[10] <= End + TrainLength[10] then 1 else 0};
    //All trains on the curve

    function OnTrack
      input Integer size;
      input Real TrainDistance[size];
      input Real TrainLength[size];
      output Real Active[size];
    algorithm
      for i in 1:size loop
        if TrainDistance[i] >= Start and TrainDistance[i] <= End + TrainLength[i] then
          Active[i] := 1;
        else
          Active[i] := 0;
        end if;
      end for;
    end OnTrack;

    //multiply calculated data for interfaces

    function SpeedCalculations
      input Integer size;
      input Real value;
      output Real hillacc[size];
    algorithm
      for i in 1:size loop
        hillacc[i] := value;
      end for;
    end SpeedCalculations;
  equation
    HillAcc = -1 * SpeedCalculations(size, 9.81 * sin(angle * 0.0174532925));
  end UpHill;

  class Sensor
    Modelica.Blocks.Interfaces.RealVectorInput LengthVec[size];
    Modelica.Blocks.Interfaces.RealVectorInput DistanceVec[size];
    Modelica.Blocks.Interfaces.RealOutput Intersection;
    Modelica.Blocks.Interfaces.RealOutput Safe_Passage;
    Modelica.Blocks.Interfaces.RealOutput Sensor1PositionOut;
    Modelica.Blocks.Interfaces.RealOutput Sensor2PositionOut;
    parameter Real Sensor1Position(unit = "m") = 100;
    parameter Real Sensor2Position(unit = "m") = 500;
    Boolean Train_Detected1[size];
    Boolean Train_Detected2[size];
    parameter Integer size = 10;
    Boolean Sensor1_Active;
    Boolean Sensor2_Active;
    Integer Sensor1Input(start = 0);
    Integer Sensor2Output(start = 0);

    function Active
      input Integer size;
      input Boolean Train_Detected[size];
      output Boolean Activated(start = false);
    algorithm
      for i in 1:size loop
        Activated := Train_Detected[i] or Activated;
      end for;
    end Active;
  equation
    Sensor1PositionOut = Sensor1Position;
    Sensor2PositionOut = Sensor2Position;
    Intersection = (Sensor1Position + Sensor2Position) / 2;
    for i in 1:size loop
      if DistanceVec[i] >= Sensor1Position and DistanceVec[i] - LengthVec[i] <= Sensor1Position + 1 then
        Train_Detected1[i] = true;
      else
        Train_Detected1[i] = false;
      end if;
      if DistanceVec[i] >= Sensor2Position + 1 and DistanceVec[i] - LengthVec[i] <= Sensor2Position then
        Train_Detected2[i] = true;
      else
        Train_Detected2[i] = false;
      end if;
    end for;
    Sensor1_Active = Active(size, Train_Detected1);
    Sensor2_Active = Active(size, Train_Detected2);
    when Sensor1_Active and not pre(Sensor1_Active) then
      Sensor1Input = pre(Sensor1Input) + 1;
    end when;
    when change(Sensor2_Active) and not Sensor2_Active and pre(Sensor2_Active) then
      Sensor2Output = pre(Sensor2Output) + 1;
    end when;
    if Sensor1Input == Sensor2Output then
      Safe_Passage = 1.0;
    else
      Safe_Passage = 0.0;
    end if;
  end Sensor;

  class TrainLight
  Modelica.Blocks.Interfaces.RealInput Safe_Passage;
    Modelica.Blocks.Interfaces.IntegerOutput ColorState_output;
    Modelica.Blocks.Interfaces.RealOutput Gate_Angle_output;
    Modelica.Blocks.Interfaces.RealOutput Intersection_output;
    //statechart of the trainlamp
    inner Modelica.StateGraph.StateGraphRoot stateGraphRoot;
    Modelica.StateGraph.InitialStep On(nOut = 2, nIn = 2);
    Modelica.StateGraph.Step Red(nOut = 2);
    Modelica.StateGraph.Step Off(nIn = 2);
    Modelica.StateGraph.Transition OnToRed(condition = Safe_Passage < 0.9);
    Modelica.StateGraph.Transition OnToOff(condition = Failure);
    Modelica.StateGraph.Transition OffToOn(condition = not Failure);
    Modelica.StateGraph.Transition RedToOn(condition = Safe_Passage >= 0.9);
    Modelica.StateGraph.Transition RedToOff(condition = Failure);
    TrainLightColor state(start = TrainLightColor.on);
    parameter Real Intersection(unit = "m") = 50;
    Real Gate_Angle(start = 90.0);
    Real Gate_Rotation(start = 0.0);
    parameter Boolean Failure = false;
  equation
    Intersection_output = Intersection;
    der(Gate_Rotation) = 0.0;
    der(Gate_Angle) = Gate_Rotation;
    Gate_Angle_output = Gate_Angle;
    ColorState_output = Integer(state);
    if Red.active then
      state = TrainLightColor.red;
    elseif On.active then
      state = TrainLightColor.on;
    else
      state = TrainLightColor.off;
    end if;
//trainlight state transitions
    connect(On.outPort[1], OnToRed.inPort);
    connect(OnToRed.outPort, Red.inPort[1]);
    connect(Red.outPort[1], RedToOn.inPort);
    connect(RedToOn.outPort, On.inPort[1]);
    connect(On.outPort[2], OnToOff.inPort);
    connect(OnToOff.outPort, Off.inPort[1]);
    connect(Off.outPort[1], OffToOn.inPort);
    connect(OffToOn.outPort, On.inPort[2]);
    connect(Red.outPort[2], RedToOff.inPort);
    connect(RedToOff.outPort, Off.inPort[2]);
//Rail intersections gate controlls
    when Red.active then
      reinit(Gate_Rotation, -50);
    end when;
    when Gate_Angle <= 0 then
      reinit(Gate_Rotation, 0.0);
    end when;
    when On.active or Off.active then
      reinit(Gate_Rotation, 50);
    end when;
    when Gate_Angle >= 90 then
      reinit(Gate_Rotation, 0.0);
    end when;
  end TrainLight;

  type TrainLightColor = enumeration(on, red, off);

  class Car
  Modelica.Blocks.Interfaces.IntegerInput LightColor;
    Modelica.Blocks.Interfaces.RealInput Gate_Angle;
    Modelica.Blocks.Interfaces.RealInput Target;
    //Modelica.Blocks.Interfaces.RealVectorInput LengthVec[size];
    //Modelica.Blocks.Interfaces.RealVectorInput DistanceVec[size];
    Modelica.Blocks.Interfaces.RealOutput Distance;
    Modelica.Blocks.Interfaces.RealOutput Length;
    TrainLightColor state(start = TrainLightColor.on);
    //real data based on the 2019 Mclaren Senna specs
    parameter Real breakingDeceleration(unit = "m/s2") = 13.14;
    parameter Real maxSpeed(unit = "m/s") = 16.7;
    parameter Real maxAcceleration(unit = "m/s") = 8.76;
    parameter Real length(unit = "m") = 4.74;
    parameter Real distanceStart(unit = "m") = 0.0;
    parameter Real isClumsy(unit = "boolean") = 0.0;
    parameter Integer size = 10;
    Real BreakingDistance;
    Real distance(start = distanceStart);
    Real speed(start = maxSpeed);
    Real acceleration(start = 0.0);
  
    /*function BreakCheck
      input Integer size;
      input Real ThisCarDistance;
      input Real Target;
      input Real CarDistance[size];
      input Real CarLength[size];
      output Real Distance(start = 0.0);
    algorithm
      for i in 1:size loop
        if CarDistance[i] > ThisCarDistance and CarDistance[i] <= Target then
          Distance := Distance + CarLength[i] + 2;
        end if;
      end for;
    end BreakCheck;*/
  equation
    Length = length;
    Distance = distance;
    Integer(state) = LightColor;
    der(acceleration) = 0.0;
    der(distance) = speed;
    der(speed) = acceleration;
//distance for the car to stop
    BreakingDistance = 1 / 2 * (speed / breakingDeceleration) ^ 2 * breakingDeceleration; /*+ BreakCheck(size, distance, Target, DistanceVec, LengthVec);*/
//car can not acceed the speed limit
    when speed >= maxSpeed then
      reinit(acceleration, 0.0);
    end when;
//car reaches light + its breaking distance and if its speed is not 0 than the car will slow down
    when distance + BreakingDistance + 5 >= Target and distance + BreakingDistance - 5 <= Target and speed > 0 and state == TrainLightColor.red then
      reinit(acceleration, -breakingDeceleration);
    end when;
//the accelerates when the light turn to on
    when distance < Target and state == TrainLightColor.on and Gate_Angle >= 90 and speed < maxSpeed then
      reinit(acceleration, maxAcceleration);
    end when;
//car stop and wait
    when speed <= 0 then
      reinit(acceleration, 0.0);
    end when;
    when isClumsy >= 1.0 and distance - Length <= Target and distance >= Target and speed > 0 then
      reinit(acceleration, -50);
    end when;
  end Car;

  model CornersGood
  Train train(lap = 4423.36, length = 30, onUpHillAcc = 0, ActiveUpHill = false, breakingDeceleration = 40, ActiveDownHill = false, onDownHillAcc = 0, StationState = -1, Sensor1Position = 10000, Sensor2Position = 10000, Station = 100000);
    Curve c1(Start = 1, End = 402.366);
    Curve c2(Start = 603.504, End = 1005.84);
    Curve c3(Start = 2011.68, End = 2414.016);
    Curve c4(Start = 2615.184, End = 3017.52);
    VehicleCollection TrainCollection(Distance2 = 0, Length2 = 0);
    StructureCollection CurveCollection(OnStructure5 = 0, OnStructure6 = 0, OnStructure7 = 0, OnStructure8 = 0, OnStructure9 = 0, OnStructure10 = 0, Speed5 = 0, Speed6 = 0, Speed7 = 0, Speed8 = 0, Speed9 = 0, Speed10 = 0);
  equation
    connect(train.Distance, TrainCollection.Distance1);
    connect(train.Length, TrainCollection.Length1);
    connect(train.onCurveSpeed, CurveCollection.speed);
    connect(train.ActiveCurve, CurveCollection.Activated);
    connect(TrainCollection.LengthVec, c1.TrainLength);
    connect(TrainCollection.LengthVec, c2.TrainLength);
    connect(TrainCollection.LengthVec, c3.TrainLength);
    connect(TrainCollection.LengthVec, c4.TrainLength);
    connect(TrainCollection.DistanceVec, c1.TrainDistance);
    connect(TrainCollection.DistanceVec, c2.TrainDistance);
    connect(TrainCollection.DistanceVec, c3.TrainDistance);
    connect(TrainCollection.DistanceVec, c4.TrainDistance);
//setting the corners speed for each train to their structure collection corner number
//connect(cornername.CurveSpeed[number of the train], trains CurveCollection.Speed + number of corner
    connect(c1.CurveSpeed[1], CurveCollection.Speed1);
//setting the corners activeness for each train to their structure collection corner number
//connect(cornername.onCurve[number of the train], trains CurveCollection.OnStructure + number of corner
    connect(c1.onCurve[1], CurveCollection.OnStructure1);
    connect(c2.CurveSpeed[1], CurveCollection.Speed2);
    connect(c2.onCurve[1], CurveCollection.OnStructure2);
    connect(c3.CurveSpeed[1], CurveCollection.Speed3);
    connect(c3.onCurve[1], CurveCollection.OnStructure3);
    connect(c4.CurveSpeed[1], CurveCollection.Speed4);
    connect(c4.onCurve[1], CurveCollection.OnStructure4);
  end CornersGood;

  model CornersBad
  Train train(lap = 4423.36, length = 30, onUpHillAcc = 0, ActiveUpHill = false, breakingDeceleration = 7, StationState = -1, Sensor1Position = 10000, Sensor2Position = 10000, Station = 100000);
    Curve c1(Start = 310, End = 402.366);
    VehicleCollection TrainCollection(Distance2 = 0, Length2 = 0);
    StructureCollection CurveCollection(OnStructure2 = 0, OnStructure3 = 0, OnStructure4 = 0, OnStructure5 = 0, OnStructure6 = 0, OnStructure7 = 0, OnStructure8 = 0, OnStructure9 = 0, OnStructure10 = 0, Speed2 = 0, Speed3 = 0, Speed4 = 0, Speed5 = 0, Speed6 = 0, Speed7 = 0, Speed8 = 0, Speed9 = 0, Speed10 = 0);
  equation
    connect(train.Distance, TrainCollection.Distance1);
    connect(train.Length, TrainCollection.Length1);
    connect(train.onCurveSpeed, CurveCollection.speed);
    connect(train.ActiveCurve, CurveCollection.Activated);
    connect(TrainCollection.LengthVec, c1.TrainLength);
    connect(TrainCollection.DistanceVec, c1.TrainDistance);
//setting the corners speed for each train to their structure collection corner number
//connect(cornername.CurveSpeed[number of the train], trains CurveCollection.Speed + number of corner
    connect(c1.CurveSpeed[1], CurveCollection.Speed1);
//setting the corners activeness for each train to their structure collection corner number
//connect(cornername.onCurve[number of the train], trains CurveCollection.OnStructure + number of corner
    connect(c1.onCurve[1], CurveCollection.OnStructure1);
  end CornersBad;

  class TrainStation
  Modelica.Blocks.Interfaces.RealInput Safe_Passage;
    Modelica.Blocks.Interfaces.IntegerOutput StationState;
    //Modelica.Blocks.Interfaces.BooleanInput Arrived1;
    //Modelica.Blocks.Interfaces.BooleanInput Arrived2;
    //parameter Integer size = 2;
    //Boolean ArrivedVec[size] = {Arrived1, Arrived2};
    //Boolean Arrived(start = false);
    Modelica.StateGraph.InitialStep green;
    Modelica.StateGraph.Step red;
    //Modelica.StateGraph.Step redWaiting;
    //Modelica.StateGraph.Step redReady;
    Modelica.StateGraph.Transition GreenToRed(condition = Safe_Passage <= 0.9);
    // Modelica.StateGraph.Transition RedToRedWait(condition = Arrived);
    // Modelica.StateGraph.Transition RedWaitToRedReady(enableTimer = true, waitTime = 10.0);
    Modelica.StateGraph.Transition RedToGreen(condition = Safe_Passage >= 0.9);
    inner Modelica.StateGraph.StateGraphRoot stateGraphRoot;
    StationSignal state;
    /*function ArrivedTrain
          input Integer size;
          input Boolean ArrivedVec[size];
          output Boolean isArrived(start = false);
        algorithm
          for i in 1:size loop
            isArrived := ArrivedVec[i] or isArrived;
          end for;
        end ArrivedTrain;*/
  equation
//Arrived = ArrivedTrain(size, ArrivedVec);
    StationState = Integer(state);
    if green.active then
      state = StationSignal.green;
    else
/*if red.active then*/
      state = StationSignal.red;
/*elseif redWaiting.active then
      state = StationSignal.redWaiting;
    else
      state = StationSignal.redReady;*/
    end if;
    connect(green.outPort[1], GreenToRed.inPort);
    connect(GreenToRed.outPort, red.inPort[1]);
/*connect(red.outPort[1], RedToRedWait.inPort);
    connect(RedToRedWait.outPort, redWaiting.inPort[1]);
    connect(redWaiting.outPort[1], RedWaitToRedReady.inPort);
    connect(RedWaitToRedReady.outPort, redReady.inPort[1]);*/
    connect(red.outPort[1], RedToGreen.inPort);
    connect(RedToGreen.outPort, green.inPort[1]);
  end TrainStation;

  type StationSignal = enumeration(green, red);

  model TrainStationSim
  Train train(lap = 44230.36, length = 30, onCurveSpeed = 0, ActiveCurve = false, onUpHillAcc = 0, ActiveUpHill = false);
    Train train2(lap = 44230.36, distanceStart = -1500, onCurveSpeed = 0, ActiveCurve = false, onUpHillAcc = 0, ActiveUpHill = false);
    VehicleCollection TrainCollection;
    Sensor sensor(Sensor1Position = 2000, Sensor2Position = 4500);
    TrainStation station;
  equation
    connect(train.Distance, TrainCollection.Distance1);
    connect(train.Length, TrainCollection.Length1);
    connect(station.StationState, train.StationState);
    connect(train.Sensor1Position, sensor.Sensor1PositionOut);
    connect(train.Sensor2Position, sensor.Sensor2PositionOut);
//connect(train.Arrived, station.Arrived1);
    connect(train2.Distance, TrainCollection.Distance2);
    connect(train2.Length, TrainCollection.Length2);
    connect(station.StationState, train2.StationState);
    connect(train2.Sensor1Position, sensor.Sensor1PositionOut);
    connect(train2.Sensor2Position, sensor.Sensor2PositionOut);
//connect(train2.Arrived, station.Arrived2);
    connect(sensor.LengthVec, TrainCollection.LengthVec);
    connect(sensor.DistanceVec, TrainCollection.DistanceVec);
    connect(sensor.Safe_Passage, station.Safe_Passage);
    connect(sensor.Intersection, train.Station);
    connect(sensor.Intersection, train2.Station);
  end TrainStationSim;
end TrainSimulation;
