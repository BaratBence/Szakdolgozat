oms_setTempDirectory("./tmp")
oms_newModel("TrainSimulation")
oms_addSystem("TrainSimulation.root", oms_system_wc)

oms_addSubModel("TrainSimulation.root.Train", "/Szakdoga/TrainSimulation/TrainSimulation.Train/TrainSimulation.Train.fmu")
oms_addSubModel("TrainSimulation.root.Train2", "/Szakdoga/TrainSimulation/TrainSimulation.Train/TrainSimulation.Train.fmu")
oms_addSubModel("TrainSimulation.root.HillCollection", "/Szakdoga/TrainSimulation/TrainSimulation.StructureCollection/TrainSimulation.StructureCollection.fmu")
oms_addSubModel("TrainSimulation.root.HillCollection2", "/Szakdoga/TrainSimulation/TrainSimulation.StructureCollection/TrainSimulation.StructureCollection.fmu")
oms_addSubModel("TrainSimulation.root.trainCollection", "/Szakdoga/TrainSimulation/TrainSimulation.VehicleCollection/TrainSimulation.VehicleCollection.fmu")
oms_addSubModel("TrainSimulation.root.UpHill", "/Szakdoga/TrainSimulation/TrainSimulation.UpHill/TrainSimulation.Uphill.fmu")

oms_instantiate("TrainSimulation")

--Making the connection between variables
oms_addConnection("TrainSimulation.root.Train.Distance","TrainSimulation.root.trainCollection.Distance1")
oms_addConnection("TrainSimulation.root.Train.Length","TrainSimulation.root.trainCollection.Length1")
oms_addConnection("TrainSimulation.root.Train.onUpHillAcc","TrainSimulation.root.HillCollection.speed")
oms_addConnection("TrainSimulation.root.Train.ActiveUpHill","TrainSimulation.root.HillCollection.Activated")

oms_addConnection("TrainSimulation.root.Train2.Distance","TrainSimulation.root.trainCollection.Distance2")
oms_addConnection("TrainSimulation.root.Train2.Length","TrainSimulation.root.trainCollection.Length2")
oms_addConnection("TrainSimulation.root.Train2.onUpHillAcc","TrainSimulation.root.HillCollection2.speed")
oms_addConnection("TrainSimulation.root.Train2.ActiveUpHill","TrainSimulation.root.HillCollection2.Activated")

oms_addConnection("TrainSimulation.root.trainCollection.LengthVec[1]", "TrainSimulation.root.UpHill.TrainLength[1]")
oms_addConnection("TrainSimulation.root.trainCollection.DistanceVec[1]", "TrainSimulation.root.UpHill.TrainDistance[1]")
oms_addConnection("TrainSimulation.root.trainCollection.LengthVec[2]", "TrainSimulation.root.UpHill.TrainLength[2]")
oms_addConnection("TrainSimulation.root.trainCollection.DistanceVec[2]", "TrainSimulation.root.UpHill.TrainDistance[2]")

oms_addConnection("TrainSimulation.root.UpHill.HillAcc[1]","TrainSimulation.root.HillCollection.Speed1")
oms_addConnection("TrainSimulation.root.UpHill.onHill[1]","TrainSimulation.root.HillCollection.OnStructure1")

oms_addConnection("TrainSimulation.root.UpHill.HillAcc[2]","TrainSimulation.root.HillCollection2.Speed1")
oms_addConnection("TrainSimulation.root.UpHill.onHill[2]","TrainSimulation.root.HillCollection2.OnStructure1")


simulationEnd=10.0 
stepsize=0.01 
oms_setResultFile("TrainSimulation", "/Szakdoga/UpHillSim.mat")
oms_setStopTime("TrainSimulation", simulationEnd) 
oms_setFixedStepSize("TrainSimulation.root",stepsize) 
time=0.0
crashed=false;
stopped=false;

--Making the starting parameters 
oms_setReal("TrainSimulation.root.Train.length",30)
oms_setReal("TrainSimulation.root.Train.distanceStart", 0)
oms_setReal("TrainSimulation.root.Train.lap", 1000)
oms_setReal("TrainSimulation.root.Train.breakingDeceleration", 7)

oms_setReal("TrainSimulation.root.Train2.length",30)
oms_setReal("TrainSimulation.root.Train2.maxSpeed",125)
oms_setReal("TrainSimulation.root.Train2.distanceStart", -275)
oms_setReal("TrainSimulation.root.Train2.lap", 1000)
oms_setReal("TrainSimulation.root.Train2.breakingDeceleration", 7)

oms_setReal("TrainSimulation.root.UpHill.Start",300)
oms_setReal("TrainSimulation.root.UpHill.End",900)

oms_initialize("TrainSimulation")

function crash()
	if  oms_getReal("TrainSimulation.root.Train.lapDistance") - oms_getReal("TrainSimulation.root.Train.length") <= oms_getReal("TrainSimulation.root.Train2.lapDistance")
	then
		oms_setReal("TrainSimulation.root.Train.lapDistance",oms_getReal("TrainSimulation.root.Train.lapDistance")+1)
		crashed = true;
		stopped=true
	end 
	if crashed then print("Crash happend at " .. time) crashed = false end
	if stopped 
	then 
		oms_setReal("TrainSimulation.root.Train2.speed",0.0)
		oms_setReal("TrainSimulation.root.Train.speed",0.0)
	end
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
