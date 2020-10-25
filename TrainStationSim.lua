oms_setTempDirectory("./tmp")
oms_newModel("TrainSimulation")
oms_addSystem("TrainSimulation.root", oms_system_wc)

oms_addSubModel("TrainSimulation.root.Train", "/Szakdoga/TrainSimulation/TrainSimulation.Train/TrainSimulation.Train.fmu")
oms_addSubModel("TrainSimulation.root.Train2", "/Szakdoga/TrainSimulation/TrainSimulation.Train/TrainSimulation.Train.fmu")
oms_addSubModel("TrainSimulation.root.Sensor", "/Szakdoga/TrainSimulation/TrainSimulation.Sensor/TrainSimulation.Sensor.fmu")
oms_addSubModel("TrainSimulation.root.trainCollection", "/Szakdoga/TrainSimulation/TrainSimulation.VehicleCollection/TrainSimulation.VehicleCollection.fmu")
oms_addSubModel("TrainSimulation.root.Station", "/Szakdoga/TrainSimulation/TrainSimulation.TrainStation/TrainSimulation.TrainStation.fmu")

oms_instantiate("TrainSimulation")

--Making the connection between variables
oms_addConnection("TrainSimulation.root.Train.Distance","TrainSimulation.root.trainCollection.Distance1")
oms_addConnection("TrainSimulation.root.Train.Length","TrainSimulation.root.trainCollection.Length1")
oms_addConnection("TrainSimulation.root.Train.StationState","TrainSimulation.root.Station.StationState")
oms_addConnection("TrainSimulation.root.Train.Sensor1Position","TrainSimulation.root.Sensor.Sensor1PositionOut")
oms_addConnection("TrainSimulation.root.Train.Sensor2Position","TrainSimulation.root.Sensor.Sensor2PositionOut")
oms_addConnection("TrainSimulation.root.Train.Station","TrainSimulation.root.Sensor.Intersection")

oms_addConnection("TrainSimulation.root.Train2.Distance","TrainSimulation.root.trainCollection.Distance2")
oms_addConnection("TrainSimulation.root.Train2.Length","TrainSimulation.root.trainCollection.Length2")
oms_addConnection("TrainSimulation.root.Train2.StationState","TrainSimulation.root.Station.StationState")
oms_addConnection("TrainSimulation.root.Train2.Sensor1Position","TrainSimulation.root.Sensor.Sensor1PositionOut")
oms_addConnection("TrainSimulation.root.Train2.Sensor2Position","TrainSimulation.root.Sensor.Sensor2PositionOut")
oms_addConnection("TrainSimulation.root.Train2.Station","TrainSimulation.root.Sensor.Intersection")

oms_addConnection("TrainSimulation.root.trainCollection.LengthVec[1]", "TrainSimulation.root.Sensor.LengthVec[1]")
oms_addConnection("TrainSimulation.root.trainCollection.DistanceVec[1]", "TrainSimulation.root.Sensor.DistanceVec[1]")
oms_addConnection("TrainSimulation.root.trainCollection.LengthVec[2]", "TrainSimulation.root.Sensor.LengthVec[2]")
oms_addConnection("TrainSimulation.root.trainCollection.DistanceVec[2]", "TrainSimulation.root.Sensor.DistanceVec[2]")

oms_addConnection("TrainSimulation.root.Sensor.Safe_Passage","TrainSimulation.root.Station.Safe_Passage")


simulationEnd=125.0 
stepsize=0.01 
oms_setResultFile("TrainSimulation", "/Szakdoga/TrainStationSim.mat")
oms_setStopTime("TrainSimulation", simulationEnd) 
oms_setFixedStepSize("TrainSimulation.root",stepsize) 
time=0.0
crashed=false;
stopped=false;

--Making the starting parameters 
oms_setReal("TrainSimulation.root.Train.length",30)
oms_setReal("TrainSimulation.root.Train.distanceStart", 0)
oms_setReal("TrainSimulation.root.Train.breakingDeceleration", 5)

--oms_setReal("TrainSimulation.root.Train2.length",30)
--oms_setReal("TrainSimulation.root.Train2.maxSpeed",125)
oms_setReal("TrainSimulation.root.Train2.distanceStart", -500)
--oms_setReal("TrainSimulation.root.Train2.breakingDeceleration", 7)

oms_setReal("TrainSimulation.root.Sensor.Sensor1Position",2000)
oms_setReal("TrainSimulation.root.Sensor.Sensor2Position",4500)

oms_initialize("TrainSimulation")
happend = false
function fail()
	if time>30.0 then 
		oms_faultInjection("TrainSimulation.root.Sensor.Safe_Passage", oms_fault_type_const, 1.0)
		if not happend then print("Sensor 1 Failed") happend=true end
	end 
end

trainCount = 2
hillNumber =0
train1=0
train2=0
trainLapCount = {oms_getReal("TrainSimulation.root.Train.lap"),oms_getReal("TrainSimulation.root.Train2.lap")}
function crash()
	trainCrashed = {oms_getBoolean("TrainSimulation.root.Train.Crashed"),oms_getBoolean("TrainSimulation.root.Train2.Crashed")}
	for i=1,trainCount do
		trainCurrentDistance = oms_getReal("TrainSimulation.root.trainCollection.DistanceVec[".. i .."]")
		trainCurrentLenght = oms_getReal("TrainSimulation.root.trainCollection.LengthVec[".. i .."]")
		for j=1,trainCount do
			trainDistance = oms_getReal("TrainSimulation.root.trainCollection.DistanceVec[".. j .."]")
			if trainCurrentDistance - trainCurrentLenght <= trainDistance and trainCurrentDistance > trainDistance and trainCrashed[i] < 1 and trainLapCount[i] == trainLapCount[j] then
				--for all the trains
				oms_setBoolean("TrainSimulation.root.Train.Crashed",1)
				oms_setBoolean("TrainSimulation.root.Train2.Crashed",1)
				crashed = true
				train1=i
				train2=j
			end
		end
	end
	if crashed then print("Crash happend with train" .. train1 .. " and train".. train2 .." at " .. time) crashed = false end
end
while(time<simulationEnd)
  do
	fail()
	crash()
        stepsize=0.001
        oms_setFixedStepSize("TrainSimulation.root",stepsize)
        time=time+stepsize
        oms_stepUntil("TrainSimulation",time)
end

oms_terminate("TrainSimulation")
oms_delete("TrainSimulation")
