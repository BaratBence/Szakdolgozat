# FIXME: before you push into master...
RUNTIMEDIR=E:/Modelica/include/omc/c/
#COPY_RUNTIMEFILES=$(FMI_ME_OBJS:%= && (OMCFILE=% && cp $(RUNTIMEDIR)/$$OMCFILE.c $$OMCFILE.c))

fmu:
	rm -f TrainSimulation_Curve.fmutmp/sources/TrainSimulation_Curve_init.xml
	cp -a "E:/Modelica/share/omc/runtime/c/fmi/buildproject/"* TrainSimulation_Curve.fmutmp/sources
	cp -a TrainSimulation_Curve_FMU.libs TrainSimulation_Curve.fmutmp/sources/

