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

oms_addConnection("TrainSimulation.root.Curve.CurveSpeed","TrainSimulation.root.curveCollection.Speed1")
oms_addConnection("TrainSimulation.root.Curve.onCurve[1]","TrainSimulation.root.curveCollection.OnStructure1")


simulationEnd=10.0 
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
oms_setReal("TrainSimulation.root.Train.breakingDeceleration", 7)

oms_setReal("TrainSimulation.root.Curve.Start",320)
oms_setReal("TrainSimulation.root.Curve.End",400)

oms_initialize("TrainSimulation")

cornersEnd = {oms_getReal("TrainSimulation.root.Curve.End")}
cornersStart = {oms_getReal("TrainSimulation.root.Curve.Start")}
cornerSpeed = {oms_getReal("TrainSimulation.root.Curve.CurveSpeed")}
cornerCrashId = 0
cornerCount=1
trainCount=1 
function crashInCorner()
	trainsSpeed = {oms_getReal("TrainSimulation.root.Train.speed")}
	trainCrashed={oms_getBoolean("TrainSimulation.root.Train.Crashed")}
	for i=1,cornerCount do
		corner = (cornersEnd[i] - cornersStart[i])/2 + cornersStart[i]
		for j=1,trainCount do
			distance = oms_getReal("TrainSimulation.root.trainCollection.DistanceVec["..j.."]")
			if trainCrashed[j] < 1 and distance>=corner and distance<cornersEnd[i] and trainsSpeed[j]>cornerSpeed[i]
			then
				cornerCrashId=i
				trainCrashId=j
				--should set all of them
				oms_setBoolean("TrainSimulation.root.Train.Crashed",1)
				crashed = true
			end
		end
	end
	if crashed then print("Crash happend at Corner" .. cornerCrashId .. " at ".. time .. " with train number " .. trainCrashId) crashed =false end 
end
while(time<simulationEnd)
  do
	crashInCorner()
        stepsize=0.001
        oms_setFixedStepSize("TrainSimulation.root",stepsize)
        time=time+stepsize
        oms_stepUntil("TrainSimulation",time)
end

oms_terminate("TrainSimulation")
oms_delete("TrainSimulation")
