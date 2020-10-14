oms_setTempDirectory("./tmp")
oms_newModel("TrainSimulation")
oms_addSystem("TrainSimulation.root", oms_system_wc)

oms_addSubModel("TrainSimulation.root.Train1", "/Szakdoga/TrainSimulation/TrainSimulation.Train/TrainSimulation.Train.fmu")
oms_addSubModel("TrainSimulation.root.Train2", "/Szakdoga/TrainSimulation/TrainSimulation.Train/TrainSimulation.Train.fmu")
oms_addSubModel("TrainSimulation.root.curveCollection1", "/Szakdoga/TrainSimulation/TrainSimulation.StructureCollection/TrainSimulation.StructureCollection.fmu")
oms_addSubModel("TrainSimulation.root.curveCollection2", "/Szakdoga/TrainSimulation/TrainSimulation.StructureCollection/TrainSimulation.StructureCollection.fmu")
oms_addSubModel("TrainSimulation.root.HillCollection1", "/Szakdoga/TrainSimulation/TrainSimulation.StructureCollection/TrainSimulation.StructureCollection.fmu")
oms_addSubModel("TrainSimulation.root.HillCollection2", "/Szakdoga/TrainSimulation/TrainSimulation.StructureCollection/TrainSimulation.StructureCollection.fmu")
oms_addSubModel("TrainSimulation.root.trainCollection", "/Szakdoga/TrainSimulation/TrainSimulation.VehicleCollection/TrainSimulation.VehicleCollection.fmu")
oms_addSubModel("TrainSimulation.root.carCollection", "/Szakdoga/TrainSimulation/TrainSimulation.VehicleCollection/TrainSimulation.VehicleCollection.fmu")
oms_addSubModel("TrainSimulation.root.C1", "/Szakdoga/TrainSimulation/TrainSimulation.Curve/TrainSimulation.Curve.fmu")
oms_addSubModel("TrainSimulation.root.C2", "/Szakdoga/TrainSimulation/TrainSimulation.Curve/TrainSimulation.Curve.fmu")
--oms_addSubModel("TrainSimulation.root.C3", "/Szakdoga/TrainSimulation/TrainSimulation.Curve/TrainSimulation.Curve.fmu")
--oms_addSubModel("TrainSimulation.root.C4", "/Szakdoga/TrainSimulation/TrainSimulation.Curve/TrainSimulation.Curve.fmu")
oms_addSubModel("TrainSimulation.root.H1","/Szakdoga/TrainSimulation/TrainSimulation.UpHill/TrainSimulation.UpHill.fmu")
oms_addSubModel("TrainSimulation.root.Station", "/Szakdoga/TrainSimulation/TrainSimulation.TrainStation/TrainSimulation.TrainStation.fmu")
oms_addSubModel("TrainSimulation.root.StationSensor", "/Szakdoga/TrainSimulation/TrainSimulation.Sensor/TrainSimulation.Sensor.fmu")
oms_addSubModel("TrainSimulation.root.Car1", "/Szakdoga/TrainSimulation/TrainSimulation.Car/TrainSimulation.Car.fmu")
oms_addSubModel("TrainSimulation.root.Car2", "/Szakdoga/TrainSimulation/TrainSimulation.Car/TrainSimulation.Car.fmu")
oms_addSubModel("TrainSimulation.root.TrainLight", "/Szakdoga/TrainSimulation/TrainSimulation.TrainLight/TrainSimulation.TrainLight.fmu")
oms_addSubModel("TrainSimulation.root.IntersectionSensors", "/Szakdoga/TrainSimulation/TrainSimulation.Sensor/TrainSimulation.Sensor.fmu")

oms_instantiate("TrainSimulation")

--Making the connection between variables
--Train1 connections
oms_addConnection("TrainSimulation.root.Train1.Distance","TrainSimulation.root.trainCollection.Distance1")
oms_addConnection("TrainSimulation.root.Train1.Length","TrainSimulation.root.trainCollection.Length1")
oms_addConnection("TrainSimulation.root.Train1.onCurveSpeed","TrainSimulation.root.curveCollection1.speed")
oms_addConnection("TrainSimulation.root.Train1.ActiveCurve","TrainSimulation.root.curveCollection1.Activated")
oms_addConnection("TrainSimulation.root.Train1.onUpHillAcc","TrainSimulation.root.HillCollection1.speed")
oms_addConnection("TrainSimulation.root.Train1.ActiveUpHill", "TrainSimulation.root.HillCollection1.Activated")
oms_addConnection("TrainSimulation.root.Train1.StationState","TrainSimulation.root.Station.StationState")
oms_addConnection("TrainSimulation.root.Train1.Sensor1Position","TrainSimulation.root.StationSensor.Sensor1PositionOut")
oms_addConnection("TrainSimulation.root.Train1.Sensor2Position","TrainSimulation.root.StationSensor.Sensor2PositionOut")
oms_addConnection("TrainSimulation.root.Train1.Station","TrainSimulation.root.StationSensor.Intersection")

--Train2 connections
oms_addConnection("TrainSimulation.root.Train2.Distance","TrainSimulation.root.trainCollection.Distance2")
oms_addConnection("TrainSimulation.root.Train2.Length","TrainSimulation.root.trainCollection.Length2")
oms_addConnection("TrainSimulation.root.Train2.onCurveSpeed","TrainSimulation.root.curveCollection2.speed")
oms_addConnection("TrainSimulation.root.Train2.ActiveCurve","TrainSimulation.root.curveCollection2.Activated")
oms_addConnection("TrainSimulation.root.Train2.onUpHillAcc","TrainSimulation.root.HillCollection2.speed")
oms_addConnection("TrainSimulation.root.Train2.ActiveUpHill", "TrainSimulation.root.HillCollection2.Activated")
oms_addConnection("TrainSimulation.root.Train2.StationState","TrainSimulation.root.Station.StationState")
oms_addConnection("TrainSimulation.root.Train2.Sensor1Position","TrainSimulation.root.StationSensor.Sensor1PositionOut")
oms_addConnection("TrainSimulation.root.Train2.Sensor2Position","TrainSimulation.root.StationSensor.Sensor2PositionOut")
oms_addConnection("TrainSimulation.root.Train2.Station","TrainSimulation.root.StationSensor.Intersection")

--Car1 connection
oms_addConnection("TrainSimulation.root.Car1.Distance","TrainSimulation.root.carCollection.Distance1")
oms_addConnection("TrainSimulation.root.Car1.Length","TrainSimulation.root.carCollection.Length1")
oms_addConnection("TrainSimulation.root.Car1.LightColor", "TrainSimulation.root.TrainLight.ColorState_output")
oms_addConnection("TrainSimulation.root.Car1.Gate_Angle","TrainSimulation.root.TrainLight.Gate_Angle_output")
oms_addConnection("TrainSimulation.root.Car1.Target", "TrainSimulation.root.TrainLight.Intersection_output")
--oms_addConnection("TrainSimulation.root.carCollection.LengthVec[1]", "TrainSimulation.root.Car1.LengthVec[1]")
--oms_addConnection("TrainSimulation.root.carCollection.DistanceVec[1]", "TrainSimulation.root.Car1.DistanceVec[1]")
--oms_addConnection("TrainSimulation.root.carCollection.LengthVec[2]", "TrainSimulation.root.Car1.LengthVec[2]")
--oms_addConnection("TrainSimulation.root.carCollection.DistanceVec[2]", "TrainSimulation.root.Car1.DistanceVec[2]")

--Car2 connection
oms_addConnection("TrainSimulation.root.Car2.Distance","TrainSimulation.root.carCollection.Distance2")
oms_addConnection("TrainSimulation.root.Car2.Length","TrainSimulation.root.carCollection.Length2")
oms_addConnection("TrainSimulation.root.Car2.LightColor", "TrainSimulation.root.TrainLight.ColorState_output")
oms_addConnection("TrainSimulation.root.Car2.Gate_Angle","TrainSimulation.root.TrainLight.Gate_Angle_output")
oms_addConnection("TrainSimulation.root.Car2.Target", "TrainSimulation.root.TrainLight.Intersection_output")
--oms_addConnection("TrainSimulation.root.carCollection.LengthVec[1]", "TrainSimulation.root.Car2.LengthVec[1]")
--oms_addConnection("TrainSimulation.root.carCollection.DistanceVec[1]", "TrainSimulation.root.Car2.DistanceVec[1]")
--oms_addConnection("TrainSimulation.root.carCollection.LengthVec[2]", "TrainSimulation.root.Car2.LengthVec[2]")
--oms_addConnection("TrainSimulation.root.carCollection.DistanceVec[2]", "TrainSimulation.root.Car2.DistanceVec[2]")

--Adding TrainCollection's value to structures
--Train1
oms_addConnection("TrainSimulation.root.trainCollection.LengthVec[1]", "TrainSimulation.root.C1.TrainLength[1]")
oms_addConnection("TrainSimulation.root.trainCollection.DistanceVec[1]", "TrainSimulation.root.C1.TrainDistance[1]")
oms_addConnection("TrainSimulation.root.trainCollection.LengthVec[1]", "TrainSimulation.root.C2.TrainLength[1]")
oms_addConnection("TrainSimulation.root.trainCollection.DistanceVec[1]", "TrainSimulation.root.C2.TrainDistance[1]")
oms_addConnection("TrainSimulation.root.trainCollection.LengthVec[1]", "TrainSimulation.root.H1.TrainLength[1]")
oms_addConnection("TrainSimulation.root.trainCollection.DistanceVec[1]", "TrainSimulation.root.H1.TrainDistance[1]")

--Train2
oms_addConnection("TrainSimulation.root.trainCollection.LengthVec[2]", "TrainSimulation.root.C1.TrainLength[2]")
oms_addConnection("TrainSimulation.root.trainCollection.DistanceVec[2]", "TrainSimulation.root.C1.TrainDistance[2]")
oms_addConnection("TrainSimulation.root.trainCollection.LengthVec[2]", "TrainSimulation.root.C2.TrainLength[2]")
oms_addConnection("TrainSimulation.root.trainCollection.DistanceVec[2]", "TrainSimulation.root.C2.TrainDistance[2]")
oms_addConnection("TrainSimulation.root.trainCollection.LengthVec[2]", "TrainSimulation.root.H1.TrainLength[2]")
oms_addConnection("TrainSimulation.root.trainCollection.DistanceVec[2]", "TrainSimulation.root.H1.TrainDistance[2]")

--Adding structures to their collection
oms_addConnection("TrainSimulation.root.C1.CurveSpeed[1]","TrainSimulation.root.curveCollection1.Speed1")
oms_addConnection("TrainSimulation.root.C1.CurveSpeed[2]","TrainSimulation.root.curveCollection2.Speed1")
oms_addConnection("TrainSimulation.root.C2.CurveSpeed[1]","TrainSimulation.root.curveCollection1.Speed2")
oms_addConnection("TrainSimulation.root.C2.CurveSpeed[2]","TrainSimulation.root.curveCollection2.Speed2")

oms_addConnection("TrainSimulation.root.C1.onCurve[1]","TrainSimulation.root.curveCollection1.OnStructure1")
oms_addConnection("TrainSimulation.root.C1.onCurve[2]","TrainSimulation.root.curveCollection2.OnStructure1")
oms_addConnection("TrainSimulation.root.C2.onCurve[1]","TrainSimulation.root.curveCollection1.OnStructure2")
oms_addConnection("TrainSimulation.root.C2.onCurve[2]","TrainSimulation.root.curveCollection2.OnStructure2")

oms_addConnection("TrainSimulation.root.H1.HillAcc[1]","TrainSimulation.root.HillCollection1.Speed1")
oms_addConnection("TrainSimulation.root.H1.HillAcc[2]","TrainSimulation.root.HillCollection2.Speed1")
oms_addConnection("TrainSimulation.root.H1.onHill[1]","TrainSimulation.root.HillCollection1.OnStructure1")
oms_addConnection("TrainSimulation.root.H1.onHill[2]","TrainSimulation.root.HillCollection2.OnStructure1")

--Structures connections
oms_addConnection("TrainSimulation.root.StationSensor.Safe_Passage","TrainSimulation.root.Station.Safe_Passage")
oms_addConnection("TrainSimulation.root.TrainLight.Safe_Passage", "TrainSimulation.root.IntersectionSensors.Safe_Passage")
oms_addConnection("TrainSimulation.root.trainCollection.LengthVec[1]", "TrainCrossing.root.IntersectionSensors.LengthVec[1]")
oms_addConnection("TrainSimulation.root.trainCollection.LengthVec[2]", "TrainCrossing.root.IntersectionSensors.LengthVec[2]")
oms_addConnection("TrainSimulation.root.trainCollection.DistanceVec[1]", "TrainCrossing.root.IntersectionSensors.DistanceVec[1]")
oms_addConnection("TrainSimulation.root.trainCollection.DistanceVec[2]", "TrainCrossing.root.IntersectionSensors.DistanceVec[2]")

--Setting up simulation parameters
simulationEnd=250.0 
stepsize=0.01 
oms_setResultFile("TrainSimulation", "/Szakdoga/HappyPathSim.mat")
oms_setStopTime("TrainSimulation", simulationEnd) 
oms_setFixedStepSize("TrainSimulation.root",stepsize) 
time=0.0
crashed=false


--Making the starting parameters 
oms_setReal("TrainSimulation.root.Train1.length",30)
oms_setReal("TrainSimulation.root.Train1.distanceStart", 0)
oms_setReal("TrainSimulation.root.Train1.lap", 44230.36)

oms_setReal("TrainSimulation.root.Train2.length",30)
oms_setReal("TrainSimulation.root.Train2.distanceStart", -5000000)
oms_setReal("TrainSimulation.root.Train2.lap", 44230.36)


oms_setReal("TrainSimulation.root.C1.Start",1)
oms_setReal("TrainSimulation.root.C1.End",400)

oms_setReal("TrainSimulation.root.C2.Start",900)
oms_setReal("TrainSimulation.root.C2.End",1400)

oms_setReal("TrainSimulation.root.H1.Start", 1900)
oms_setReal("TrainSimulation.root.H1.End", 2100)

oms_setReal("TrainSimulation.root.StationSensor.Sensor1Position",3000)
oms_setReal("TrainSimulation.root.StationSensor.Sensor2Position",3500)

oms_setReal("TrainSimulation.root.Car1.distanceStart", 800)
oms_setReal("TrainSimulation.root.Car2.distanceStart", 0)

oms_setReal("TrainSimulation.root.TrainLight.Intersection",1080)
oms_setReal("TrainSimulation.root.IntersectionSensors.Sensor1Position",4000)
oms_setReal("TrainSimulation.root.IntersectionSensors.Sensor2Position",6000)

oms_initialize("TrainSimulation")

function crash()
	corner = (oms_getReal("TrainSimulation.root.Curve.End") - oms_getReal("TrainSimulation.root.Curve.Start"))/2 + oms_getReal("TrainSimulation.root.Curve.Start")
	if oms_getReal("TrainSimulation.root.trainCollection.DistanceVec[1]")>=corner and oms_getReal("TrainSimulation.root.trainCollection.DistanceVec[1]")<oms_getReal("TrainSimulation.root.Curve.End") and oms_getReal("TrainSimulation.root.Train.speed")>oms_getReal("TrainSimulation.root.Curve.CurveSpeedValue") 
	then 
		oms_setReal("TrainSimulation.root.Train.speed",0.0)
		crashed= true;
		stopped=true;
	end
	if crashed then print("Crash happend at " .. time) crashed = false end
end
while(time<simulationEnd)
  do
	--crash()
        stepsize=0.01
        oms_setFixedStepSize("TrainSimulation.root",stepsize)
        time=time+stepsize
        oms_stepUntil("TrainSimulation",time)
end

oms_terminate("TrainSimulation")
oms_delete("TrainSimulation")
