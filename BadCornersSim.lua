oms_setTempDirectory("./tmp")
oms_newModel("TrainSimulation")
oms_addSystem("TrainSimulation.root", oms_system_wc)

oms_addSubModel("TrainSimulation.root.Train", "/Szakdoga/TrainSimulation/TrainSimulation.Train/TrainSimulation.Train.fmu")
oms_addSubModel("TrainSimulation.root.curveCollection", "/Szakdoga/TrainSimulation/TrainSimulation.StructureCollection/TrainSimulation.StructureCollection.fmu")
oms_addSubModel("TrainSimulation.root.trainCollection", "/Szakdoga/TrainSimulation/TrainSimulation.VehicleCollection/TrainSimulation.VehicleCollection.fmu")
oms_addSubModel("TrainSimulation.root.Curve", "/Szakdoga/TrainSimulation/TrainSimulation.Curve/TrainSimulation.Curve.fmu")

oms_instantiate("TrainSimulation")

--Making the connection between variables
oms_addConnection("TrainSimulation.root.Train.Distance","TrainSimulation.root.trainCollection.Distance1")
oms_addConnection("TrainSimulation.root.Train.Length","TrainSimulation.root.trainCollection.Length1")
oms_addConnection("TrainSimulation.root.Train.onCurveSpeed","TrainSimulation.root.curveCollection.speed")
oms_addConnection("TrainSimulation.root.Train.ActiveCurve","TrainSimulation.root.curveCollection.Activated")

oms_addConnection("TrainSimulation.root.trainCollection.LengthVec[1]", "TrainSimulation.root.Curve.TrainLength[1]")
oms_addConnection("TrainSimulation.root.trainCollection.DistanceVec[1]", "TrainSimulation.root.Curve.TrainDistance[1]")

oms_addConnection("TrainSimulation.root.Curve.CurveSpeed[1]",
"TrainSimulation.root.curveCollection.Speed1")
oms_addConnection("TrainSimulation.root.Curve.onCurve[1]",
"TrainSimulation.root.curveCollection.OnStructure1")


simulationEnd=20.0 
stepsize=0.01 
oms_setResultFile("TrainSimulation", "/Szakdoga/BadCornersSim.mat")
oms_setStopTime("TrainSimulation", simulationEnd) 
oms_setFixedStepSize("TrainSimulation.root",stepsize) 
time=0.0
crashed=false


--Making the starting parameters 
oms_setReal("TrainSimulation.root.Train.length",30)
oms_setReal("TrainSimulation.root.Train.distanceStart", 0)
oms_setReal("TrainSimulation.root.Train.lap", 700)
oms_setReal("TrainSimulation.root.Train.onUpHillAcc", 0)
oms_setBoolean("TrainSimulation.root.Train.ActiveUpHill", 0)
oms_setReal("TrainSimulation.root.Train.breakingDeceleration", 7)

oms_setReal("TrainSimulation.root.Curve.Start",320)
oms_setReal("TrainSimulation.root.Curve.End",400)

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
	crash()
        stepsize=0.001
        oms_setFixedStepSize("TrainSimulation.root",stepsize)
        time=time+stepsize
        oms_stepUntil("TrainSimulation",time)
end

oms_terminate("TrainSimulation")
oms_delete("TrainSimulation")
