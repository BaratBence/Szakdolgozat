# FIXME: before you push into master...
RUNTIMEDIR=E:/Modelica/include/omc/c/
#COPY_RUNTIMEFILES=$(FMI_ME_OBJS:%= && (OMCFILE=% && cp $(RUNTIMEDIR)/$$OMCFILE.c $$OMCFILE.c))

fmu:
	rm -f TrainSimulation_TrainStation.fmutmp/sources/TrainSimulation_TrainStation_init.xml
	cp -a "E:/Modelica/share/omc/runtime/c/fmi/buildproject/"* TrainSimulation_TrainStation.fmutmp/sources
	cp -a TrainSimulation_TrainStation_FMU.libs TrainSimulation_TrainStation.fmutmp/sources/

