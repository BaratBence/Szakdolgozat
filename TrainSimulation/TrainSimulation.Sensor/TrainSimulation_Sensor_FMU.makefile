# FIXME: before you push into master...
RUNTIMEDIR=E:/Modelica/include/omc/c/
#COPY_RUNTIMEFILES=$(FMI_ME_OBJS:%= && (OMCFILE=% && cp $(RUNTIMEDIR)/$$OMCFILE.c $$OMCFILE.c))

fmu:
	rm -f TrainSimulation_Sensor.fmutmp/sources/TrainSimulation_Sensor_init.xml
	cp -a "E:/Modelica/share/omc/runtime/c/fmi/buildproject/"* TrainSimulation_Sensor.fmutmp/sources
	cp -a TrainSimulation_Sensor_FMU.libs TrainSimulation_Sensor.fmutmp/sources/

