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
    //All trains distance(in a lap) as input
    Modelica.Blocks.Interfaces.RealVectorInput TrainDistance[size];
    //All trains length as input
    Modelica.Blocks.Interfaces.RealVectorInput TrainLength[size];
    //Data for each train to limit their speed
    Modelica.Blocks.Interfaces.RealVectorOutput CurveSpeed[size];
    //Data for each train if they are on the rail
    Modelica.Blocks.Interfaces.RealVectorOutput onCurve[size];
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
      output Real curvespeed[size];
    algorithm
      for i in 1:size loop
        curvespeed[i] := value;
      end for;
    end SpeedCalculations;
  equation
    CurveSpeed = SpeedCalculations(size, sqrt(radius * Gravity * (cant + cantdeficiency) / TrackGauge));
    onCurve = OnTrack(size, TrainDistance, TrainLength);
  end Curve;

  class Train
    Modelica.Blocks.Interfaces.RealOutput Distance;
    Modelica.Blocks.Interfaces.RealOutput Length;
    Modelica.Blocks.Interfaces.BooleanInput ActiveCurve;
    Modelica.Blocks.Interfaces.BooleanInput ActiveUpHill;
    Modelica.Blocks.Interfaces.BooleanInput ActiveDownHill;
    Modelica.Blocks.Interfaces.RealInput onCurveSpeed;
    Modelica.Blocks.Interfaces.RealInput onUpHillAcc;
    Modelica.Blocks.Interfaces.RealInput onDownHillAcc;
    parameter Integer size = 10;
    parameter Real Target(unit = "m");
    parameter Real maxSpeed(unit = "m/s") = 75;
    parameter Real breakingDeceleration(unit = "m/s2") = 20.0;
    parameter Real length(unit = "m") = 20;
    parameter Real lap = 250;
    parameter Real distanceStart(unit="m") = 0;
    Integer Lapcount(start = 0);
    Real distance(start = distanceStart);
    Real speed(start = maxSpeed);
    Real acceleration(start = 0.0);
    Real lapDistance(start = distanceStart);
    Integer Accelerating(start=0) =0;
    Integer Decelerating(start=0) =0;
    Boolean b;
  equation
    Distance = lapDistance;
    Length = length;
    der(acceleration) = 0.0;
    der(distance) = speed;
    der(speed) = acceleration;
    der(lapDistance) = speed;
    Lapcount = distance / lap;
    
    when speed >= maxSpeed and Accelerating>0 then
      reinit(Accelerating,0);
      reinit(acceleration, 0.0);
    end when;
    
    when(Decelerating>=0 and speed<=maxSpeed) then
      reinit(acceleration, 0.0);
      reinit(Decelerating,0);
    end when;
    
    when speed >= onCurveSpeed and ActiveCurve then
      reinit(acceleration, -breakingDeceleration);
    end when;
    when speed <= onCurveSpeed and ActiveCurve then
      reinit(acceleration, 0.0);
    end when;
    
    when change(ActiveCurve) and ActiveCurve == false then
      reinit(acceleration, breakingDeceleration);
      reinit(Accelerating,1);
    end when;
    
    when lapDistance >= lap then
      reinit(lapDistance, 0);
    end when;
    
    if change(ActiveCurve) and ActiveCurve == false then b=true;
    else b=false; end if;
    
    when pre(b) then reinit(Accelerating,1); end when; 
  
    /*when speed >= maxSpeed then
      reinit(acceleration, 0.0);
    end when;*/
    
    /*when speed <=maxSpeed then
      reinit(acceleration, 0.0);
    end when;*/
    
    /*when ActiveUpHill then
      reinit(acceleration,onUpHillAcc); 
    end when;   
    when change(ActiveUpHill) and ActiveUpHill == false then
      reinit(acceleration, breakingDeceleration);
      reinit(Accelerating,1);
    end when;
    */
    when ActiveDownHill then 
        reinit(acceleration,onDownHillAcc); 
    end when; 
    when change(ActiveDownHill) and ActiveDownHill == false then
      reinit(acceleration, -breakingDeceleration);
       reinit(Decelerating,1);
    end when;
  end Train;

  model Sim
    Train train(lap = 4423.36, length = 30);
    Train train2(lap = 4423.36, distanceStart = -2000); 
    Curve c1(Start = 1, End = 402.366);
    //Curve c2(Start = 603.504, End = 1005.84);
    //Curve c3(Start = 2011.68, End = 2414.016);
    //Curve c4(Start = 2615.184, End = 3017.52);
    UpHill h1(Start = 3500, End=3700);
    DownHill h2(Start = 4000, End=4100);
    VehicleCollection TrainCollection;
    StructureCollection CurveCollection( 
    OnStructure2=0,OnStructure3=0,OnStructure4=0,OnStructure5=0,OnStructure6=0,OnStructure7=0,OnStructure8=0,OnStructure9=0,OnStructure10=0,
    Speed2=0,Speed3=0,Speed4=0,Speed5=0,Speed6=0,Speed7=0,Speed8=0,Speed9=0,Speed10=0);
    
    StructureCollection UpHillCollection(
    OnStructure2=0,OnStructure3=0,OnStructure4=0,OnStructure5=0,OnStructure6=0,OnStructure7=0,OnStructure8=0,OnStructure9=0,OnStructure10=0,
    Speed2=0,Speed3=0,Speed4=0,Speed5=0,Speed6=0,Speed7=0,Speed8=0,Speed9=0,Speed10=0);
    
    StructureCollection DownHillCollection(
    OnStructure2=0,OnStructure3=0,OnStructure4=0,OnStructure5=0,OnStructure6=0,OnStructure7=0,OnStructure8=0,OnStructure9=0,OnStructure10=0,
    Speed2=0,Speed3=0,Speed4=0,Speed5=0,Speed6=0,Speed7=0,Speed8=0,Speed9=0,Speed10=0);
    
    StructureCollection CurveCollection2( 
    OnStructure2=0,OnStructure3=0,OnStructure4=0,OnStructure5=0,OnStructure6=0,OnStructure7=0,OnStructure8=0,OnStructure9=0,OnStructure10=0,
    Speed2=0,Speed3=0,Speed4=0,Speed5=0,Speed6=0,Speed7=0,Speed8=0,Speed9=0,Speed10=0);
    
    StructureCollection UpHillCollection2(
    OnStructure2=0,OnStructure3=0,OnStructure4=0,OnStructure5=0,OnStructure6=0,OnStructure7=0,OnStructure8=0,OnStructure9=0,OnStructure10=0,
    Speed2=0,Speed3=0,Speed4=0,Speed5=0,Speed6=0,Speed7=0,Speed8=0,Speed9=0,Speed10=0);
    
    StructureCollection DownHillCollection2(
    OnStructure2=0,OnStructure3=0,OnStructure4=0,OnStructure5=0,OnStructure6=0,OnStructure7=0,OnStructure8=0,OnStructure9=0,OnStructure10=0,
    Speed2=0,Speed3=0,Speed4=0,Speed5=0,Speed6=0,Speed7=0,Speed8=0,Speed9=0,Speed10=0);
    
  equation
    connect(train.Distance, TrainCollection.Distance1);
    connect(train.Length, TrainCollection.Length1);
    connect(train.onCurveSpeed, CurveCollection.speed);
    connect(train.ActiveCurve, CurveCollection.Activated);
    connect(train.onUpHillAcc, UpHillCollection.speed);
    connect(train.ActiveUpHill, UpHillCollection.Activated);
    connect(train.onDownHillAcc, DownHillCollection.speed);
    connect(train.ActiveDownHill, DownHillCollection.Activated);
    
    connect(train2.Distance, TrainCollection.Distance2);
    connect(train2.Length, TrainCollection.Length2);
    connect(train2.onCurveSpeed, CurveCollection2.speed);
    connect(train2.ActiveCurve, CurveCollection2.Activated);
    connect(train2.onUpHillAcc, UpHillCollection2.speed);
    connect(train2.ActiveUpHill, UpHillCollection2.Activated);
    connect(train2.onDownHillAcc, DownHillCollection2.speed);
    connect(train2.ActiveDownHill, DownHillCollection2.Activated);
    
    connect(TrainCollection.LengthVec, c1.TrainLength);
    //connect(TrainCollection.LengthVec, c2.TrainLength);
    //connect(TrainCollection.LengthVec, c3.TrainLength);
    //connect(TrainCollection.LengthVec, c4.TrainLength);
    connect(TrainCollection.LengthVec, h1.TrainLength);
    connect(TrainCollection.LengthVec, h2.TrainLength);
    connect(TrainCollection.DistanceVec, c1.TrainDistance);
    //connect(TrainCollection.DistanceVec, c2.TrainDistance);
    //connect(TrainCollection.DistanceVec, c3.TrainDistance);
    //connect(TrainCollection.DistanceVec, c4.TrainDistance);
    connect(TrainCollection.DistanceVec, h1.TrainDistance);
    connect(TrainCollection.DistanceVec, h2.TrainDistance);
    
    //setting the corners speed for each train to their structure collection corner number
    //connect(cornername.CurveSpeed[number of the train], trains CurveCollection.Speed + number of corner
    connect(c1.CurveSpeed[1], CurveCollection.Speed1);
    connect(c1.CurveSpeed[2], CurveCollection2.Speed1);
    //setting the corners activeness for each train to their structure collection corner number
    //connect(cornername.onCurve[number of the train], trains CurveCollection.OnStructure + number of corner
    connect(c1.onCurve[1], CurveCollection.OnStructure1);
    connect(c1.onCurve[2], CurveCollection2.OnStructure1);
    
    /*connect(c2.CurveSpeed[1], CurveCollection.Speed2);
    connect(c2.CurveSpeed[2], CurveCollection2.Speed2);
    connect(c2.onCurve[1], CurveCollection.OnStructure2);
    connect(c2.onCurve[2], CurveCollection2.OnStructure2);
    
    connect(c3.CurveSpeed[1], CurveCollection.Speed3);
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
    
    connect(h2.HillAcc[1], DownHillCollection.Speed1);
    connect(h2.HillAcc[2], DownHillCollection2.Speed1);
    connect(h2.onHill[1], DownHillCollection.OnStructure1);
    connect(h2.onHill[2], DownHillCollection2.OnStructure1);
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
    Modelica.Blocks.Interfaces.RealInput Distance2(start =0);
    Modelica.Blocks.Interfaces.RealInput Distance3 = 0;
    Modelica.Blocks.Interfaces.RealInput Distance4 = 0;
    Modelica.Blocks.Interfaces.RealInput Distance5 = 0;
    Modelica.Blocks.Interfaces.RealInput Distance6 = 0;
    Modelica.Blocks.Interfaces.RealInput Distance7 = 0;
    Modelica.Blocks.Interfaces.RealInput Distance8 = 0;
    Modelica.Blocks.Interfaces.RealInput Distance9 = 0;
    Modelica.Blocks.Interfaces.RealInput Distance10 = 0;
    Modelica.Blocks.Interfaces.RealInput Length1(start = 0);
    Modelica.Blocks.Interfaces.RealInput Length2(start= 0);
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

  class DownHill
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
    Modelica.Blocks.Interfaces.RealVectorOutput onHill[size];
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
    HillAcc = SpeedCalculations(size, 9.81 * sin(angle*0.0174532925));
    onHill = OnTrack(size, TrainDistance, TrainLength);
  end DownHill;

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
    Modelica.Blocks.Interfaces.RealVectorOutput onHill[size];
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
    HillAcc = SpeedCalculations(size, 9.81 * sin(angle*0.0174532925));
    onHill = OnTrack(size, TrainDistance, TrainLength);
  end UpHill;
end TrainSimulation;
