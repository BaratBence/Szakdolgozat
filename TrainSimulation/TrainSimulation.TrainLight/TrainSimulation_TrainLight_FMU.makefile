# FIXME: before you push into master...
RUNTIMEDIR=E:/Modelica/include/omc/c/
#COPY_RUNTIMEFILES=$(FMI_ME_OBJS:%= && (OMCFILE=% && cp $(RUNTIMEDIR)/$$OMCFILE.c $$OMCFILE.c))

fmu:
	rm -f TrainSimulation_TrainLight.fmutmp/sources/TrainSimulation_TrainLight_init.xml
	cp -a "E:/Modelica/share/omc/runtime/c/fmi/buildproject/"* TrainSimulation_TrainLight.fmutmp/sources
	cp -a TrainSimulation_TrainLight_FMU.libs TrainSimulation_TrainLight.fmutmp/sources/

