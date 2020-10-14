# FIXME: before you push into master...
RUNTIMEDIR=E:/Modelica/include/omc/c/
#COPY_RUNTIMEFILES=$(FMI_ME_OBJS:%= && (OMCFILE=% && cp $(RUNTIMEDIR)/$$OMCFILE.c $$OMCFILE.c))

fmu:
	rm -f TrainSimulation_VehicleCollection.fmutmp/sources/TrainSimulation_VehicleCollection_init.xml
	cp -a "E:/Modelica/share/omc/runtime/c/fmi/buildproject/"* TrainSimulation_VehicleCollection.fmutmp/sources
	cp -a TrainSimulation_VehicleCollection_FMU.libs TrainSimulation_VehicleCollection.fmutmp/sources/

