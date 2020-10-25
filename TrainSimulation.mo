package TrainSimulation
  //Class representing a single curve on the train track
  class Curve
    //parameter for the curves radius
    parameter Real radius(unit = "m") = 1800;
    //parameter for the curve position's gravity value
    parameter Real Gravity(unit = "m/s^2") = 9.81;
    //parameter for the curve's track gauge
    parameter Real TrackGauge(unit = "mm") = 1475;
    //parameter for the cant value
    parameter Real cant(unit = "mm") = 160;
    //parameter for the curve's cantdeficiency
    parameter Real cantdeficiency(unit = "mm") = 100;
    //parameter for the start distance from the trains perspective
    parameter Real Start(unit = "m") = 40;
    //parameter for the end distance from the trains perspective
    parameter Real End(unit = "m") = 50;
    //legnth of the curves arrays
    parameter Integer size = 10;
    //the allowed speed in the corner
    Real CurveSpeedValue(start =0);
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
  end Curve;
//class to represent a train that can go around the train track
  class Train
    //interface for the trains collection's distance parameter
    Modelica.Blocks.Interfaces.RealOutput Distance;
    //interface for the trains collection's length parameter
    Modelica.Blocks.Interfaces.RealOutput Length;
    //interface to signal if the train is on a curve
    Modelica.Blocks.Interfaces.BooleanInput ActiveCurve;
    //interface to recieves the needed speed on the active curve
    Modelica.Blocks.Interfaces.RealInput onCurveSpeed;
    //interface to signal if the train is on an uphill
    Modelica.Blocks.Interfaces.BooleanInput ActiveUpHill;
    //interface to recieves the needed speed scale on the active curve
    Modelica.Blocks.Interfaces.RealInput onUpHillSpeedScale;
    //interface to recieve the station's light signals as an integer
    Modelica.Blocks.Interfaces.IntegerInput StationState;
    //interface to recieve the station's position on the train tracks
    Modelica.Blocks.Interfaces.RealInput Station;
    //interface to recieve the station's first Sensors position
    Modelica.Blocks.Interfaces.RealInput Sensor1Position;
    //interface to recieve the station's second Sensors position
    Modelica.Blocks.Interfaces.RealInput Sensor2Position;
    //stations signal as an enumeration
    StationSignal state;
    //trains maxspeed parameter that will not exceed
    parameter Real maxSpeed(unit = "m/s") = 75;
    //trains acceleration and deceleration value parameter
    parameter Real breakingDeceleration(unit = "m/s2") = 20.0;
    //trains length parameter
    parameter Real length(unit = "m") = 20;
    //trains 1 laps distance
    parameter Real lap = 99999999;
    //trains starting distance parameter
    parameter Real distanceStart(unit = "m") = 0;
    //number of laps the train did in the simulation
    Integer Lapcount(start = 0);
    //trains distance
    Real distance(start = distanceStart);
    //trains speed
    Real speed(start = maxSpeed);
    // trains acceleration
    Real acceleration(start = 0.0);
    //trains distance in a lap
    Real lapDistance(start = distanceStart);
    //trains required distance to stop
    Real BreakingDistance(start = 0);
    //value indicates if the train is in a station
    Boolean inStation(start = false);
    //value indicates if the train has arrived in the station
    Boolean Arrived(start = false);
    //value indicates if the train have crashed(for lua sim)
    Boolean Crashed =false;
  equation
    //creates an integer value form StationState
    Integer(state) = StationState;
    //calculate the breaking distance
    BreakingDistance = 1 / 2 * (speed / breakingDeceleration) ^ 2 * breakingDeceleration;
    //adds value to outgoing distance
    Distance = lapDistance;
    //adds value to outgoing length
    Length = length;
    //the train acceleration's derivate is 0 so doesnt change
    der(acceleration) = 0.0;
    //trains distance derivate is equals speed
    der(distance) = speed;
    //trains speed derivative is equals acceleration
    der(speed) = acceleration;
    //trains lapDistance changes as the distance
    der(lapDistance) = speed;
    //lapcount equals the trains distance divided with the lap distance
    Lapcount = distance / lap;
    inStation = if lapDistance + BreakingDistance + 10 >= Sensor1Position and lapDistance <= Sensor2Position then true else false;
    //train considered arrived when it reached the station in a lap (resets each lap)
    Arrived = if inStation and lapDistance > Sensor1Position and lapDistance < Sensor2Position and lapDistance + 11 >= Station then true else false;
    //trains lapdistance will reset each time its distance exceeds the lap distance
    when lapDistance >= lap then
      reinit(lapDistance, 0);
    end when;
   
  //train behaviour on curve
//when the train reaches curve slows down to the necessary speed
    when speed >= onCurveSpeed and ActiveCurve then
      reinit(acceleration, -breakingDeceleration);
    end when;
    //when the train reaches the required speed stops slowing down and keeps its speed
    when speed <= onCurveSpeed and ActiveCurve then
      reinit(acceleration, 0.0);
    end when;
//train accelerates after leaving the structures if its speed does not match the maxspeed
    when speed <= maxSpeed and not ActiveCurve and not ActiveUpHill and not inStation then
      reinit(acceleration, breakingDeceleration);
    end when;
//train does not exceeds its max speed after hitting it
    when speed >= maxSpeed and not inStation then
      reinit(acceleration, 0.0);
    end when;
    
    //train behaviour on hill
    //train slows down on hill
    when speed >= maxSpeed*onUpHillSpeedScale and ActiveUpHill then
      reinit(acceleration, -breakingDeceleration);
    end when;
    //when the train reaches the required speed stops slowing down and keeps its speed
    when speed <= maxSpeed*onUpHillSpeedScale and ActiveUpHill then
      reinit(acceleration, 0.0);
    end when;
    //upon leaving the hill the train accelerates
    when change(ActiveUpHill) and not ActiveUpHill then
      reinit(acceleration, breakingDeceleration);
    end when;
    
    
    //train behaviour on train around train station
    //train slows down if the station is taken
    when inStation and speed > 0 and lapDistance + BreakingDistance + 5 >= Sensor1Position - 10 and lapDistance + BreakingDistance - 5 <= Sensor1Position - 10 and state == StationSignal.red then
      reinit(acceleration, -breakingDeceleration);
    end when;
    //train stop if reached the sensor and the station is taken
    when inStation and speed <=0  and lapDistance + BreakingDistance + 5 >= Sensor1Position -10 and lapDistance + BreakingDistance - 5 <= Sensor1Position -10 and state == StationSignal.red then
      reinit(acceleration, 0.0);
    end when;
    //train starts moving when the station is free again
    when inStation and speed < 45 and lapDistance + BreakingDistance + 5 >= Sensor1Position -10 and lapDistance + BreakingDistance - 5 <= Sensor1Position -10 and state == StationSignal.green then
      reinit(acceleration, breakingDeceleration);
    end when;
    //train stops when reaches the station
    when inStation and speed > 0 and lapDistance + BreakingDistance + 10>= Station and lapDistance + BreakingDistance  -10 <= Station and not Arrived then
      reinit(acceleration, -breakingDeceleration);
    end when;
    //after stopping the trains leaves the station
    when inStation and speed <= 0 and Arrived then
      reinit(acceleration, breakingDeceleration);
    end when;
    //train only goes with 45 m/s until the second sensor
    when speed>=45 then 
    reinit(acceleration,0.0);
    end when;
  end Train;

  //Collection for only one trains Structures
  class StructureCollection
    //All structures value if its active
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
    //every structures allowed speed value
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
    //the needed speed value for the train
    Modelica.Blocks.Interfaces.RealOutput speed;
    //decided active value if the train is on any of the structure
    Modelica.Blocks.Interfaces.BooleanOutput Activated(start = false);
    //
    Integer number(start = -1);
    //creating arrays to make them searchable
    Real OnStructureArray[size] = {OnStructure1, OnStructure2, OnStructure3, OnStructure4, OnStructure5, OnStructure6, OnStructure7, OnStructure8, OnStructure9, OnStructure10};
    Real SpeedArray[size] = {Speed1, Speed2, Speed3, Speed4, Speed5, Speed6, Speed7, Speed8, Speed9, Speed10};
    //find's the single active track elements position

    //decide if there is any active structure and returns its index
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
    //recieves the index of the active element
    number = Active(size, OnStructureArray);
    if number > (-1) and number <= size then
      //find the right elements speed
      speed = SpeedArray[number];
      Activated = true;
    else
      //if none was found then there is no active structure
      speed = 0;
      Activated = false;
    end if;
  end StructureCollection;
//Collection for one vehicle's distance and length date
  class VehicleCollection
    //Collecting values from vehicles
    Modelica.Blocks.Interfaces.RealInput Distance1(start= 0);
    Modelica.Blocks.Interfaces.RealInput Distance2(start= 0);
    Modelica.Blocks.Interfaces.RealInput Distance3(start= 0);
    Modelica.Blocks.Interfaces.RealInput Distance4(start= 0);
    Modelica.Blocks.Interfaces.RealInput Distance5(start= 0);
    Modelica.Blocks.Interfaces.RealInput Distance6(start= 0);
    Modelica.Blocks.Interfaces.RealInput Distance7(start= 0);
    Modelica.Blocks.Interfaces.RealInput Distance8(start= 0);
    Modelica.Blocks.Interfaces.RealInput Distance9(start= 0);
    Modelica.Blocks.Interfaces.RealInput Distance10(start= 0);
    Modelica.Blocks.Interfaces.RealInput Length1(start= 0);
    Modelica.Blocks.Interfaces.RealInput Length2(start= 0);
    Modelica.Blocks.Interfaces.RealInput Length3(start= 0);
    Modelica.Blocks.Interfaces.RealInput Length4(start= 0);
    Modelica.Blocks.Interfaces.RealInput Length5(start= 0);
    Modelica.Blocks.Interfaces.RealInput Length6(start= 0);
    Modelica.Blocks.Interfaces.RealInput Length7(start= 0);
    Modelica.Blocks.Interfaces.RealInput Length8(start= 0);
    Modelica.Blocks.Interfaces.RealInput Length9(start= 0);
    Modelica.Blocks.Interfaces.RealInput Length10(start= 0);
    Modelica.Blocks.Interfaces.RealVectorOutput LengthVec[size];
    Modelica.Blocks.Interfaces.RealVectorOutput DistanceVec[size];
    parameter Integer size = 10;
    //creating arrays from recieved values
    Real lengthVec[size] = {Length1, Length2, Length3, Length4, Length5, Length6, Length7, Length8, Length9, Length10};
    Real distanceVec[size] = {Distance1, Distance2, Distance3, Distance4, Distance5, Distance6, Distance7, Distance8, Distance9, Distance10};
  equation
    LengthVec = lengthVec;
    DistanceVec = distanceVec;
  end VehicleCollection;
//class represent an uphill
  class UpHill
    //the angle of the hill parameter
    parameter Real angle(unit = "degree") = 30;
    //start of the hill from trains distance perspective
    parameter Real Start(unit = "m") = 40;
    //end of the hill from trains distance perspective
    parameter Real End(unit = "m") = 50;
    parameter Integer size = 10;
    //All trains distance(in a lap) as input
    Modelica.Blocks.Interfaces.RealVectorInput TrainDistance[size];
    //All trains length as input
    Modelica.Blocks.Interfaces.RealVectorInput TrainLength[size];
    //Data for each train to limit their speed
    Modelica.Blocks.Interfaces.RealVectorOutput HillSpeedScale[size];
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

    //multiply calculated data for interfaces
    function SpeedCalculations
      input Integer size;
      input Real value;
      output Real HillSpeedScale[size];
    algorithm
      for i in 1:size loop
        HillSpeedScale[i] := value;
      end for;
    end SpeedCalculations;
  equation
    HillSpeedScale = SpeedCalculations(size,cos(angle * 0.0174532925));
  end UpHill;
//class that represents a sensor system which can signal if theres anything in between them
  class Sensor
    //Train length vector input
    Modelica.Blocks.Interfaces.RealVectorInput LengthVec[size];
    //Train distance vector input
    Modelica.Blocks.Interfaces.RealVectorInput DistanceVec[size];
    //distance where the structure is placed
    Modelica.Blocks.Interfaces.RealOutput Intersection;
    //signal that signs if the passage is safe
    Modelica.Blocks.Interfaces.RealOutput Safe_Passage;
    //interface to share the distance where the first sensor is positioned
    Modelica.Blocks.Interfaces.RealOutput Sensor1PositionOut;
    //interface to share the distance where the second sensor is positioned
    Modelica.Blocks.Interfaces.RealOutput Sensor2PositionOut;
    //first sensors position
    parameter Real Sensor1Position(unit = "m") = 100;
    //second sensors position
    parameter Real Sensor2Position(unit = "m") = 500;
    //first sensors detection value for all 10 trains
    Boolean Train_Detected1[size];
    //second sensors detection value for all 10 trains
    Boolean Train_Detected2[size];
    parameter Integer size = 10;
    //value signals if the sensor1 is active
    Boolean Sensor1_Active;
    //value signals if the sensor2 is active
    Boolean Sensor2_Active;
    //number wich indicates the number of train between the sensors
    Integer Sensor1Input(start = 0);
    Integer Sensor2Output(start = 0);
  //function that decides if one sensor is active
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
//the target is always between in the middle of the sensors
    Intersection = (Sensor1Position + Sensor2Position) / 2;
    //if the train is in front of the sensors than they are active for one train
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
    //decide if one of the sensors are active
    Sensor1_Active = Active(size, Train_Detected1);
    Sensor2_Active = Active(size, Train_Detected2);
    //count the number of activations the sensors
    when Sensor1_Active and not pre(Sensor1_Active) then
      Sensor1Input = pre(Sensor1Input) + 1;
    end when;
    when change(Sensor2_Active) and not Sensor2_Active and pre(Sensor2_Active) then
      Sensor2Output = pre(Sensor2Output) + 1;
    end when;
//if the numbers macth than that means there is no train int the intersectio
    if Sensor1Input == Sensor2Output then
      Safe_Passage = 1.0;
    else
      Safe_Passage = 0.0;
    end if;
  end Sensor;
//class that represents a basic trainlight for cars
  class TrainLight
    //main control signal
    Modelica.Blocks.Interfaces.RealInput Safe_Passage;
    //State output
    Modelica.Blocks.Interfaces.IntegerOutput ColorState_output;
    //intersection gate's angle output
    Modelica.Blocks.Interfaces.RealOutput Gate_Angle_output;
    //intersection's position from the cars perspective
    Modelica.Blocks.Interfaces.RealOutput Intersection_output;
    //statechart of the trainlight
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
    //parameter value for the car perspective target distance
    parameter Real Intersection(unit = "m") = 50;
    //intersection's gate angle
    Real Gate_Angle(start = 90.0);
    //intersection's gate angle rotation speed
    Real Gate_Rotation(start = 0.0);
    //parameter to represent failure (lua sim)
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
//Class to represent a car
  class Car
    Modelica.Blocks.Interfaces.IntegerInput LightColor;
    //intersections gate angle output
    Modelica.Blocks.Interfaces.RealInput Gate_Angle;
    //Intersections position
    Modelica.Blocks.Interfaces.RealInput Target;
    //Car's distance output
    Modelica.Blocks.Interfaces.RealOutput Distance;
    //Car's Length output
    Modelica.Blocks.Interfaces.RealOutput Length;
    //light signals
    TrainLightColor state(start = TrainLightColor.on);
    //car's deceleration parameter
    parameter Real breakingDeceleration(unit = "m/s2") = 13.14;
    //car's maximum speed parameter
    parameter Real maxSpeed(unit = "m/s") = 16.7;
    //car's acceleration parameter
    parameter Real maxAcceleration(unit = "m/s") = 8.76;
    //car's length parameter
    parameter Real length(unit = "m") = 4.74;
    //car's starting distance parameter
    parameter Real distanceStart(unit = "m") = 0.0;
    //car's driver attribute
    parameter Real isClumsy(unit = "boolean") = 0.0;
    //distance for the car to stop
    Real BreakingDistance;
    //distance made by the car
    Real distance(start = distanceStart);
    //car's speed
    Real speed(start = maxSpeed);
    //car's acceleration
    Real acceleration(start = 0.0);
  
  equation
    Length = length;
    Distance = distance;
    Integer(state) = LightColor;
    der(acceleration) = 0.0;
    der(distance) = speed;
    der(speed) = acceleration;
  //distance for the car to stop
    BreakingDistance = 1 / 2 * (speed / breakingDeceleration) ^ 2 * breakingDeceleration;
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
    //in case of the driver is clumsy the car stops on the traintracks
    when isClumsy >= 1.0 and distance - Length <= Target and distance >= Target and speed > 0 then
      reinit(acceleration, -50);
    end when;
  end Car;
//class to represent a trainstation's lapsystem for trains
  class TrainStation
    //main control signal
    Modelica.Blocks.Interfaces.RealInput Safe_Passage;
    //State output
    Modelica.Blocks.Interfaces.IntegerOutput StationState;
    //statechart of the trainlight
    Modelica.StateGraph.InitialStep green;
    Modelica.StateGraph.Step red;
    Modelica.StateGraph.Transition GreenToRed(condition = Safe_Passage <= 0.9);
    Modelica.StateGraph.Transition RedToGreen(condition = Safe_Passage >= 0.9);
    inner Modelica.StateGraph.StateGraphRoot stateGraphRoot;
    StationSignal state;
  equation
    StationState = Integer(state);
    if green.active then
      state = StationSignal.green;
    else
      state = StationSignal.red;
    end if;
    //TrainStation light state transitions
    connect(green.outPort[1], GreenToRed.inPort);
    connect(GreenToRed.outPort, red.inPort[1]);
    connect(red.outPort[1], RedToGreen.inPort);
    connect(RedToGreen.outPort, green.inPort[1]);
  end TrainStation;

  type StationSignal = enumeration(green, red);
//basic example simulation on how to use these elements
  model TrainSimulationExample
    Train train(lap = 6500, length = 30);
    Train train2(lap = 6500, distanceStart = -1000, length=30);
    Curve c1(Start = 1, End = 500);
    Curve c2(Start = 900, End = 1400);
    Car Car1(distanceStart=800);
    Car Car2(distanceStart=0);
    TrainLight trainLight(Intersection = 1080);
    Sensor IntersectionSensor(Sensor1Position = 4000, Sensor2Position = 6000);
    UpHill h1(Start = 1900, End = 2100);
    //all unused values should be 0
    VehicleCollection TrainCollection(Distance3=0, Distance4=0, Distance5=0, Distance6=0, Distance7=0, Distance8=0, Distance9=0, Distance10=0,
    Length3=0,Length4=0,Length5=0,Length6=0,Length7=0,Length8=0,Length9=0,Length10=0);
    VehicleCollection CarCollection(Distance3=0, Distance4=0, Distance5=0, Distance6=0, Distance7=0, Distance8=0, Distance9=0, Distance10=0,
    Length3=0,Length4=0,Length5=0,Length6=0,Length7=0,Length8=0,Length9=0,Length10=0);
    Sensor StationSensor(Sensor1Position = 3050, Sensor2Position = 3750);
    TrainStation station;
  
    StructureCollection CurveCollection(
    OnStructure3 = 0, OnStructure4 = 0, OnStructure5 = 0, OnStructure6 = 0, OnStructure7 = 0, OnStructure8 = 0, OnStructure9 = 0, OnStructure10 = 0, 
    Speed3 = 0, Speed4 = 0, Speed5 = 0, Speed6 = 0, Speed7 = 0, Speed8 = 0, Speed9 = 0, Speed10 = 0);
    StructureCollection UpHillCollection(
    OnStructure2 =0, OnStructure3 = 0, OnStructure4 = 0, OnStructure5 = 0, OnStructure6 = 0, OnStructure7 = 0, OnStructure8 = 0, OnStructure9 = 0, OnStructure10 = 0,
    Speed2=0, Speed3 = 0, Speed4 = 0, Speed5 = 0, Speed6 = 0, Speed7 = 0, Speed8 = 0, Speed9 = 0, Speed10 = 0);
    StructureCollection CurveCollection2(
    OnStructure3 = 0, OnStructure4 = 0, OnStructure5 = 0, OnStructure6 = 0, OnStructure7 = 0, OnStructure8 = 0, OnStructure9 = 0, OnStructure10 = 0, 
    Speed3 = 0, Speed4 = 0, Speed5 = 0, Speed6 = 0, Speed7 = 0, Speed8 = 0, Speed9 = 0, Speed10 = 0);
    StructureCollection UpHillCollection2(
    OnStructure2 =0, OnStructure3 = 0, OnStructure4 = 0, OnStructure5 = 0, OnStructure6 = 0, OnStructure7 = 0, OnStructure8 = 0, OnStructure9 = 0, OnStructure10 = 0,
    Speed2=0, Speed3 = 0, Speed4 = 0, Speed5 = 0, Speed6 = 0, Speed7 = 0, Speed8 = 0, Speed9 = 0, Speed10 = 0);
  equation
    connect(train.Distance, TrainCollection.Distance1);
    connect(train.Length, TrainCollection.Length1);
    connect(train.onCurveSpeed, CurveCollection.speed);
    connect(train.ActiveCurve, CurveCollection.Activated);
    connect(train.onUpHillSpeedScale, UpHillCollection.speed);
    connect(train.ActiveUpHill, UpHillCollection.Activated);
    connect(station.StationState, train.StationState);
    connect(train.Sensor1Position, StationSensor.Sensor1PositionOut);
    connect(train.Sensor2Position, StationSensor.Sensor2PositionOut);
    connect(StationSensor.Intersection, train.Station);
    
    connect(train2.Distance, TrainCollection.Distance2);
    connect(train2.Length, TrainCollection.Length2);
    connect(train2.onCurveSpeed, CurveCollection2.speed);
    connect(train2.ActiveCurve, CurveCollection2.Activated);
    connect(train2.onUpHillSpeedScale, UpHillCollection2.speed);
    connect(train2.ActiveUpHill, UpHillCollection2.Activated);
    connect(station.StationState, train2.StationState);
    connect(train2.Sensor1Position, StationSensor.Sensor1PositionOut);
    connect(train2.Sensor2Position, StationSensor.Sensor2PositionOut);
    connect(StationSensor.Intersection, train2.Station);
    
    connect(Car1.Distance,CarCollection.Distance1);
    connect(Car1.Length,CarCollection.Length1);
    connect(Car1.LightColor,trainLight.ColorState_output);
    connect(Car1.Gate_Angle,trainLight.Gate_Angle_output);
    connect(Car1.Target,trainLight.Intersection_output);
    
    connect(Car2.Distance,CarCollection.Distance2);
    connect(Car2.Length,CarCollection.Length2);
    connect(Car2.LightColor,trainLight.ColorState_output);
    connect(Car2.Gate_Angle,trainLight.Gate_Angle_output);
    connect(Car2.Target,trainLight.Intersection_output);
    
    connect(TrainCollection.LengthVec, c1.TrainLength);
    connect(TrainCollection.LengthVec, c2.TrainLength);
    connect(TrainCollection.LengthVec, h1.TrainLength);
  
    connect(TrainCollection.DistanceVec, c1.TrainDistance);
    connect(TrainCollection.DistanceVec, c2.TrainDistance);
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
    
    connect(h1.HillSpeedScale[1], UpHillCollection.Speed1);
    connect(h1.HillSpeedScale[2], UpHillCollection2.Speed1);
    connect(h1.onHill[1], UpHillCollection.OnStructure1);
    connect(h1.onHill[2], UpHillCollection2.OnStructure1);
    
    connect(StationSensor.LengthVec, TrainCollection.LengthVec);
    connect(StationSensor.DistanceVec, TrainCollection.DistanceVec);
    connect(StationSensor.Safe_Passage, station.Safe_Passage);
    
    connect(trainLight.Safe_Passage,IntersectionSensor.Safe_Passage);
    connect(TrainCollection.LengthVec, IntersectionSensor.LengthVec);
    connect(TrainCollection.DistanceVec,IntersectionSensor.DistanceVec);
  
  end TrainSimulationExample;
end TrainSimulation;
