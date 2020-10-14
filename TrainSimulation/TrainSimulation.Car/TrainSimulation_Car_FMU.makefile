# FIXME: before you push into master...
RUNTIMEDIR=E:/Modelica/include/omc/c/
#COPY_RUNTIMEFILES=$(FMI_ME_OBJS:%= && (OMCFILE=% && cp $(RUNTIMEDIR)/$$OMCFILE.c $$OMCFILE.c))

fmu:
	rm -f TrainSimulation_Car.fmutmp/sources/TrainSimulation_Car_init.xml
	cp -a "E:/Modelica/share/omc/runtime/c/fmi/buildproject/"* TrainSimulation_Car.fmutmp/sources
	cp -a TrainSimulation_Car_FMU.libs TrainSimulation_Car.fmutmp/sources/

