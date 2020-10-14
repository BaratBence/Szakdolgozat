# FIXME: before you push into master...
RUNTIMEDIR=E:/Modelica/include/omc/c/
#COPY_RUNTIMEFILES=$(FMI_ME_OBJS:%= && (OMCFILE=% && cp $(RUNTIMEDIR)/$$OMCFILE.c $$OMCFILE.c))

fmu:
	rm -f TrainSimulation_UpHill.fmutmp/sources/TrainSimulation_UpHill_init.xml
	cp -a "E:/Modelica/share/omc/runtime/c/fmi/buildproject/"* TrainSimulation_UpHill.fmutmp/sources
	cp -a TrainSimulation_UpHill_FMU.libs TrainSimulation_UpHill.fmutmp/sources/

