oms_setTempDirectory("./tmp")
oms_newModel("TrainSimulation")
oms_addSystem("TrainSimulation.root", oms_system_wc)

oms_addSubModel("TrainSimulation.root.Train1", "../TrainSimulation.Train/TrainSimulation.Train.fmu")
oms_addSubModel("TrainSimulation.root.Train2", "../TrainSimulation.Train/TrainSimulation.Train.fmu")
oms_addSubModel("TrainSimulation.root.curveCollection1", "../TrainSimulation/TrainSimulation.StructureCollection/TrainSimulation.StructureCollection.fmu")
oms_addSubModel("TrainSimulation.root.curveCollection2", "../TrainSimulation/TrainSimulation.StructureCollection/TrainSimulation.StructureCollection.fmu")
oms_addSubModel("TrainSimulation.root.HillCollection1", "../TrainSimulation/TrainSimulation.StructureCollection/TrainSimulation.StructureCollection.fmu")
oms_addSubModel("TrainSimulation.root.HillCollection2", "../TrainSimulation/TrainSimulation.StructureCollection/TrainSimulation.StructureCollection.fmu")
oms_addSubModel("TrainSimulation.root.trainCollection", "../TrainSimulation/TrainSimulation.VehicleCollection/TrainSimulation.VehicleCollection.fmu")
oms_addSubModel("TrainSimulation.root.C1", "../TrainSimulation/TrainSimulation.Curve/TrainSimulation.Curve.fmu")
oms_addSubModel("TrainSimulation.root.C2", "../TrainSimulation/TrainSimulation.Curve/TrainSimulation.Curve.fmu")
oms_addSubModel("TrainSimulation.root.H1","../TrainSimulation/TrainSimulation.UpHill/TrainSimulation.UpHill.fmu")
oms_addSubModel("TrainSimulation.root.Station", "../TrainSimulation/TrainSimulation.TrainStation/TrainSimulation.TrainStation.fmu")
oms_addSubModel("TrainSimulation.root.StationSensor", "../TrainSimulation/TrainSimulation.Sensor/TrainSimulation.Sensor.fmu")
oms_addSubModel("TrainSimulation.root.Car1", "../TrainSimulation/TrainSimulation.Car/TrainSimulation.Car.fmu")
oms_addSubModel("TrainSimulation.root.Car2", "../TrainSimulation/TrainSimulation.Car/TrainSimulation.Car.fmu")
oms_addSubModel("TrainSimulation.root.TrainLight", "../TrainSimulation/TrainSimulation.TrainLight/TrainSimulation.TrainLight.fmu")
oms_addSubModel("TrainSimulation.root.IntersectionSensors", "../TrainSimulation/TrainSimulation.Sensor/TrainSimulation.Sensor.fmu")

oms_instantiate("TrainSimulation")

--Making the connection between variables
--Train1 connections
oms_addConnection("TrainSimulation.root.Train1.Distance","TrainSimulation.root.trainCollection.Distance1")
oms_addConnection("TrainSimulation.root.Train1.Length","TrainSimulation.root.trainCollection.Length1")
oms_addConnection("TrainSimulation.root.Train1.onCurveSpeed","TrainSimulation.root.curveCollection1.speed")
oms_addConnection("TrainSimulation.root.Train1.ActiveCurve","TrainSimulation.root.curveCollection1.Activated")
oms_addConnection("TrainSimulation.root.Train1.onUpHillSpeedScale","TrainSimulation.root.HillCollection1.speed")
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
oms_addConnection("TrainSimulation.root.Train2.onUpHillSpeedScale","TrainSimulation.root.HillCollection2.speed")
oms_addConnection("TrainSimulation.root.Train2.ActiveUpHill", "TrainSimulation.root.HillCollection2.Activated")
oms_addConnection("TrainSimulation.root.Train2.StationState","TrainSimulation.root.Station.StationState")
oms_addConnection("TrainSimulation.root.Train2.Sensor1Position","TrainSimulation.root.StationSensor.Sensor1PositionOut")
oms_addConnection("TrainSimulation.root.Train2.Sensor2Position","TrainSimulation.root.StationSensor.Sensor2PositionOut")
oms_addConnection("TrainSimulation.root.Train2.Station","TrainSimulation.root.StationSensor.Intersection")

--Car1 connection
oms_addConnection("TrainSimulation.root.Car1.LightColor", "TrainSimulation.root.TrainLight.ColorState_output")
oms_addConnection("TrainSimulation.root.Car1.Gate_Angle","TrainSimulation.root.TrainLight.Gate_Angle_output")
oms_addConnection("TrainSimulation.root.Car1.Target", "TrainSimulation.root.TrainLight.Intersection_output")

--Car2 connection
oms_addConnection("TrainSimulation.root.Car2.LightColor", "TrainSimulation.root.TrainLight.ColorState_output")
oms_addConnection("TrainSimulation.root.Car2.Gate_Angle","TrainSimulation.root.TrainLight.Gate_Angle_output")
oms_addConnection("TrainSimulation.root.Car2.Target", "TrainSimulation.root.TrainLight.Intersection_output")

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
oms_addConnection("TrainSimulation.root.C1.CurveSpeed","TrainSimulation.root.curveCollection1.Speed1")
oms_addConnection("TrainSimulation.root.C1.CurveSpeed","TrainSimulation.root.curveCollection2.Speed1")
oms_addConnection("TrainSimulation.root.C2.CurveSpeed","TrainSimulation.root.curveCollection1.Speed2")
oms_addConnection("TrainSimulation.root.C2.CurveSpeed","TrainSimulation.root.curveCollection2.Speed2")

oms_addConnection("TrainSimulation.root.C1.onCurve[1]","TrainSimulation.root.curveCollection1.OnStructure1")
oms_addConnection("TrainSimulation.root.C1.onCurve[2]","TrainSimulation.root.curveCollection2.OnStructure1")
oms_addConnection("TrainSimulation.root.C2.onCurve[1]","TrainSimulation.root.curveCollection1.OnStructure2")
oms_addConnection("TrainSimulation.root.C2.onCurve[2]","TrainSimulation.root.curveCollection2.OnStructure2")

oms_addConnection("TrainSimulation.root.H1.HillSpeedScale","TrainSimulation.root.HillCollection1.Speed1")
oms_addConnection("TrainSimulation.root.H1.HillSpeedScale","TrainSimulation.root.HillCollection2.Speed1")
oms_addConnection("TrainSimulation.root.H1.onHill[1]","TrainSimulation.root.HillCollection1.OnStructure1")
oms_addConnection("TrainSimulation.root.H1.onHill[2]","TrainSimulation.root.HillCollection2.OnStructure1")

--Structures connections
oms_addConnection("TrainSimulation.root.StationSensor.Safe_Passage","TrainSimulation.root.Station.Safe_Passage")
oms_addConnection("TrainSimulation.root.trainCollection.LengthVec[1]", "TrainCrossing.root.StationSensor.LengthVec[1]")
oms_addConnection("TrainSimulation.root.trainCollection.LengthVec[2]", "TrainCrossing.root.StationSensor.LengthVec[2]")
oms_addConnection("TrainSimulation.root.trainCollection.DistanceVec[1]", "TrainCrossing.root.StationSensor.DistanceVec[1]")
oms_addConnection("TrainSimulation.root.trainCollection.DistanceVec[2]", "TrainCrossing.root.StationSensor.DistanceVec[2]")
oms_addConnection("TrainSimulation.root.TrainLight.Safe_Passage", "TrainSimulation.root.IntersectionSensors.Safe_Passage")
oms_addConnection("TrainSimulation.root.trainCollection.LengthVec[1]", "TrainCrossing.root.IntersectionSensors.LengthVec[1]")
oms_addConnection("TrainSimulation.root.trainCollection.LengthVec[2]", "TrainCrossing.root.IntersectionSensors.LengthVec[2]")
oms_addConnection("TrainSimulation.root.trainCollection.DistanceVec[1]", "TrainCrossing.root.IntersectionSensors.DistanceVec[1]")
oms_addConnection("TrainSimulation.root.trainCollection.DistanceVec[2]", "TrainCrossing.root.IntersectionSensors.DistanceVec[2]")

--Setting up simulation parameters
simulationEnd=220.0 
stepsize=0.01 
oms_setResultFile("TrainSimulation", "HappyPathSim.mat")
oms_setStopTime("TrainSimulation", simulationEnd) 
oms_setFixedStepSize("TrainSimulation.root",stepsize) 
time=0.0
crashed=false


--Making the starting parameters 
oms_setReal("TrainSimulation.root.Train1.length",30)
oms_setReal("TrainSimulation.root.Train1.distanceStart", 0)
oms_setReal("TrainSimulation.root.Train1.lap", 6500)

oms_setReal("TrainSimulation.root.Train2.length",30)
oms_setReal("TrainSimulation.root.Train2.distanceStart", -1000)
oms_setReal("TrainSimulation.root.Train2.lap", 6500)


oms_setReal("TrainSimulation.root.C1.Start",1)
oms_setReal("TrainSimulation.root.C1.End",500)

oms_setReal("TrainSimulation.root.C2.Start",900)
oms_setReal("TrainSimulation.root.C2.End",1400)

oms_setReal("TrainSimulation.root.H1.Start", 1900)
oms_setReal("TrainSimulation.root.H1.End", 2100)

oms_setReal("TrainSimulation.root.StationSensor.Sensor1Position",3000)
oms_setReal("TrainSimulation.root.StationSensor.Sensor2Position",3750)

oms_setReal("TrainSimulation.root.Car1.distanceStart", 800)
oms_setReal("TrainSimulation.root.Car2.distanceStart", -40)

oms_setReal("TrainSimulation.root.TrainLight.Intersection",1080)
oms_setReal("TrainSimulation.root.IntersectionSensors.Sensor1Position",4000)
oms_setReal("TrainSimulation.root.IntersectionSensors.Sensor2Position",6000)

oms_initialize("TrainSimulation")

criticalSection = true
critical=false
trainCount = 2
train1 = 0
train2 = 0
trainCrashId = 0
cornersEnd = {oms_getReal("TrainSimulation.root.C1.End"),oms_getReal("TrainSimulation.root.C2.End")}
cornersStart = {oms_getReal("TrainSimulation.root.C1.Start"),oms_getReal("TrainSimulation.root.C2.Start")}
cornerSpeed = {oms_getReal("TrainSimulation.root.C1.CurveSpeed"),oms_getReal("TrainSimulation.root.C2.CurveSpeed")}
hillsEnd = {oms_getReal("TrainSimulation.root.H1.End")}
hillsStart = {oms_getReal("TrainSimulation.root.H1.Start")}
stationSensors = { oms_getReal("TrainSimulation.root.IntersectionSensors.Sensor1Position"),oms_getReal("TrainSimulation.root.IntersectionSensors.Sensor1Position")}
cornerCrashId = 0
cornerCount = 2
hillCount = 1
stationCount = 1
carCount = 2 
trainLapCount = {oms_getReal("TrainSimulation.root.Train1.lap"),oms_getReal("TrainSimulation.root.Train2.lap")}
function crashToOther()
	trainCrashed = {oms_getBoolean("TrainSimulation.root.Train1.Crashed"),oms_getBoolean("TrainSimulation.root.Train2.Crashed")}
	for i=1,trainCount do
		trainCurrentDistance = oms_getReal("TrainSimulation.root.trainCollection.DistanceVec[".. i .."]")
		trainCurrentLenght = oms_getReal("TrainSimulation.root.trainCollection.LengthVec[".. i .."]")
		for j=1,trainCount do
			trainDistance = oms_getReal("TrainSimulation.root.trainCollection.DistanceVec[".. j .."]")
			if trainCurrentDistance - trainCurrentLenght <= trainDistance and trainCurrentDistance > trainDistance and trainCrashed[i] < 1 and trainLapCount[i] == trainLapCount[j] then
				--for all the trains
				oms_setBoolean("TrainSimulation.root.Train1.Crashed",1)
				oms_setBoolean("TrainSimulation.root.Train2.Crashed",1)
				crashed = true
				train1=i
				train2=j
			end
		end
	end
	if crashed then print("Crash happend with train" .. train1 .. " and train".. train2 .." at " .. time) crashed = false end
end
function crashInCorner()
	-- update on train addition
	trainsSpeed = {oms_getReal("TrainSimulation.root.Train1.speed"),oms_getReal("TrainSimulation.root.Train2.speed")}
	for i=1,cornerCount do
		corner = (cornersEnd[i] - cornersStart[i])/2 + cornersStart[i]
		for j=1,trainCount do
			distance = oms_getReal("TrainSimulation.root.trainCollection.DistanceVec["..j.."]")
			if trainCrashed[j] < 1 and distance>=corner and distance<cornersEnd[i] and trainsSpeed[j]>cornerSpeed[i]
			then
				print(corner .. " " .. trainsSpeed[j] .. " " .. cornerSpeed[i])
				cornerCrashId=i
				trainCrashId=j
				--should set all of them
				oms_setBoolean("TrainSimulation.root.Train1.Crashed",1)
				oms_setBoolean("TrainSimulation.root.Train2.Crashed",1)
				crashed = true
			end
		end
	end
	if crashed then print("Crash happend at Corner" .. cornerCrashId .. " at ".. time .. " with train number " .. trainCrashId) crashed =false end 
end
function crashInIntersection()
	carCollectionDistance = {oms_getReal("TrainSimulation.root.Car1.Distance"),oms_getReal("TrainSimulation.root.Car2.Distance")}
	carCollectionLength = {oms_getReal("TrainSimulation.root.Car1.length"),oms_getReal("TrainSimulation.root.Car2.length")}
	trainCrashed = {oms_getBoolean("TrainSimulation.root.Train1.Crashed"),oms_getBoolean("TrainSimulation.root.Train2.Crashed")}
	trainDanger = false
	carDanger=false
	car = 0
	train = 0
	for i=1,trainCount do
	if oms_getReal("TrainSimulation.root.trainCollection.DistanceVec[".. i .."]")>=oms_getReal("TrainSimulation.root.IntersectionSensors.Intersection") and 
	oms_getReal("TrainSimulation.root.trainCollection.DistanceVec[".. i .."]")-oms_getReal("TrainSimulation.root.trainCollection.LengthVec[".. i .."]")<oms_getReal("TrainSimulation.root.IntersectionSensors.Intersection") and trainCrashed[i] < 1
	then 
		trainDanger=true
		train=i
	end
	end
	for i=1,carCount do
		if carCollectionDistance[i] + 3 >=oms_getReal("TrainSimulation.root.TrainLight.Intersection") and carCollectionDistance[i]- carCollectionLength[i] - 10 <oms_getReal("TrainSimulation.root.TrainLight.Intersection") then 
			carDanger=true
			car=i
	 	end
	end
	if trainDanger and carDanger then crashed=true end
	if crashed then 
		print("Crash happend at " .. time .. " between train number " .. train .. " and car number " .. car) 
		crashed=false
		--should set all of them
		oms_setBoolean("TrainSimulation.root.Train1.Crashed",1)
		oms_setBoolean("TrainSimulation.root.Train2.Crashed",1)
	end
end
function InStructure()
	stepInCorner = false
	stepInHill = false
	stepInStation = false
	for j=1, trainCount do
		onElement =false
		for i=1, cornerCount do
			if oms_getReal("TrainSimulation.root.trainCollection.DistanceVec["..j.."]") + 15 >cornersStart[i] and oms_getReal("TrainSimulation.root.trainCollection.DistanceVec["..j.."]")<cornersEnd[i] +150 then
				stepInCorner = true
				break
			end 
		end
		for i=1, hillCount do
			if oms_getReal("TrainSimulation.root.trainCollection.DistanceVec["..j.."]") + 15 >hillsStart[i] and oms_getReal("TrainSimulation.root.trainCollection.DistanceVec["..j.."]")<hillsEnd[i] +150 then
				stepInHill = true
				break
			end 
		end
		for i=1, stationCount do
			if oms_getReal("TrainSimulation.root.trainCollection.DistanceVec["..j.."]") + 150 >stationSensors[i] and oms_getReal("TrainSimulation.root.trainCollection.DistanceVec["..j.."]")<stationSensors[i+1] +250 then
				stepInStation = true
				break
			end 
		end
		if stepInHill or stepInCorner or stationInStation then break end
	end
	stepInIntersection = oms_getReal("TrainSimulation.root.IntersectionSensors.Safe_Passage")
	if stepInHill or stepInCorner or stationInStation or stepInIntersection<1 then critical = true 
	else critical =false end
end
local startTime= os.clock()
while(time<simulationEnd) do
	crashToOther()
	crashInCorner()
	crashInIntersection()
	InStructure()
	if critical then
		if criticalSection then print("critical section reached at " ..time) criticalSection=false end
		stepsize = 0.01
		oms_setFixedStepSize("TrainSimulation.root",stepsize)
          	time=time+stepsize
          	oms_stepUntil("TrainSimulation",time)
        else
		if not criticalSection then print("normal section reached at " ..time) criticalSection=true end
		stepsize=0.1
        	oms_setFixedStepSize("TrainSimulation.root",stepsize)
        	time=time+stepsize
        	oms_stepUntil("TrainSimulation",time)
	end
end
print(string.format("elapsed time: %.2f\n", os.clock() - startTime))
oms_terminate("TrainSimulation")
oms_delete("TrainSimulation")
