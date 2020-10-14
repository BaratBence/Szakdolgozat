# FIXME: before you push into master...
RUNTIMEDIR=E:/Modelica/include/omc/c/
#COPY_RUNTIMEFILES=$(FMI_ME_OBJS:%= && (OMCFILE=% && cp $(RUNTIMEDIR)/$$OMCFILE.c $$OMCFILE.c))

fmu:
	rm -f TrainSimulation_StructureCollection.fmutmp/sources/TrainSimulation_StructureCollection_init.xml
	cp -a "E:/Modelica/share/omc/runtime/c/fmi/buildproject/"* TrainSimulation_StructureCollection.fmutmp/sources
	cp -a TrainSimulation_StructureCollection_FMU.libs TrainSimulation_StructureCollection.fmutmp/sources/

