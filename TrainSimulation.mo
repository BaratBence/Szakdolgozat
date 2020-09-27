package TrainSimulation
  class Curve
    parameter Real radius(unit = "m")=1800;
    parameter Real Gravity(unit = "m/s^2")=9.81;
    parameter Real TrackGauge(unit = "mm") = 1475;
    parameter Real cant(unit = "mm") = 160 ;
    parameter Real cantdeficiency(unit = "mm")= 100;
    parameter Real Start(unit ="m") =40;
    parameter Real End(unit = "m") = 50;
    Real CurveSpeed;
    Modelica.Blocks.Interfaces.RealInput TrainDistance;
    Modelica.Blocks.Interfaces.RealInput TrainLength;
    Modelica.Blocks.Interfaces.RealOutput CurveSpeedout;
    Modelica.Blocks.Interfaces.BooleanOutput onCurve;
  equation
    if(TrainDistance>=Start and TrainDistance<=End+TrainLength) then onCurve=true;
    else onCurve=false; end if; 
    CurveSpeed=sqrt((radius*Gravity*(cant+cantdeficiency))/TrackGauge);
    CurveSpeedout = CurveSpeed;
  end Curve;

  class Train
    Modelica.Blocks.Interfaces.RealOutput Distance;
    Modelica.Blocks.Interfaces.RealOutput Length;
    
    Modelica.Blocks.Interfaces.BooleanInput OnCurve1;
    Modelica.Blocks.Interfaces.BooleanInput OnCurve2;
    Modelica.Blocks.Interfaces.BooleanInput OnCurve3; 
    Modelica.Blocks.Interfaces.BooleanInput OnCurve4;
    Modelica.Blocks.Interfaces.BooleanInput OnCurve5 =false;
    Modelica.Blocks.Interfaces.BooleanInput OnCurve6 =false;
    Modelica.Blocks.Interfaces.BooleanInput OnCurve7 =false;
    Modelica.Blocks.Interfaces.BooleanInput OnCurve8 =false;
    Modelica.Blocks.Interfaces.BooleanInput OnCurve9 =false;
    Modelica.Blocks.Interfaces.BooleanInput OnCurve10 =false;
    
    Modelica.Blocks.Interfaces.RealInput onCurveSpeed;
    parameter Integer size = 10;
    parameter Real Target(unit = "m");
    parameter Real maxSpeed(unit = "m/s")=75;
    parameter Real breakingDeceleration(unit = "m/s2") = 20.0;
    parameter Real length (unit ="m") = 20;
    Boolean onCurve(start=false);
    parameter Real lap = 250;
    Integer Lapcount  (start = 0);
    Real distance (start = 0);
    Real speed (start = maxSpeed);
    Real acceleration (start = 0.0);
    Real lapDistance (start = 0);
    Boolean onCurveArray[size] = { OnCurve1, OnCurve2, OnCurve3, OnCurve4, OnCurve5, OnCurve6 ,OnCurve7, OnCurve8, OnCurve9, OnCurve10};
    
  function Active
    input Integer size;
    input Boolean Array[size];
    output Boolean Activated(start=false);
  algorithm
    for i in 1:size loop
      Activated := Array[i] or Activated;
    end for;
  end Active;
  
  equation
    Distance = lapDistance;
    Length=length;
    der(acceleration)=0.0;
    der(distance) = speed;
    der(speed) = acceleration;
    der(lapDistance) = speed;
    when(lapDistance >= lap) then reinit(lapDistance,0); end when;
    Lapcount = distance / lap;
    onCurve = Active(size, onCurveArray);
    when(speed>=onCurveSpeed and onCurve) then reinit(acceleration, -breakingDeceleration); end when;
    when(speed<=onCurveSpeed and onCurve) then reinit(acceleration,0.0); end when;
    when(change(onCurve) and onCurve==false) then reinit(acceleration, breakingDeceleration); end when;
    
    when(speed>=maxSpeed) then reinit(acceleration, 0.0); end when;
  end Train;

  model Sim
   Train train(lap=4023.36);
   Curve c1(Start= 1, End=402.366);
   Curve c2(Start = 603.504, End= 1005.84);
   Curve c3(Start = 2011.68 ,End= 2414.016);
   Curve c4(Start = 2615.184,End= 3017.52);
  equation
  connect(train.Distance, c1.TrainDistance);
  connect(train.Length, c1.TrainLength);
  connect(c1.onCurve, train.OnCurve1);
  connect(c1.CurveSpeedout, train.onCurveSpeed);
  
  connect(train.Distance, c2.TrainDistance);
  connect(train.Length, c2.TrainLength);
  connect(c2.onCurve, train.OnCurve2);
  //connect(c2.CurveSpeedout, train.onCurveSpeed);
  
  connect(train.Distance, c3.TrainDistance);
  connect(train.Length, c3.TrainLength);
  connect(c3.onCurve, train.OnCurve3);
  //connect(c3.CurveSpeedout, train.onCurveSpeed);
  
  connect(train.Distance, c4.TrainDistance);
  connect(train.Length, c4.TrainLength);
  connect(c4.onCurve, train.OnCurve4);
  //connect(c3.CurveSpeedout, train.onCurveSpeed);
  end Sim;
end TrainSimulation;
