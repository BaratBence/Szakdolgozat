#if defined(__cplusplus)
  extern "C" {
#endif
  int TrainSimulation_VehicleCollection_mayer(DATA* data, modelica_real** res, short*);
  int TrainSimulation_VehicleCollection_lagrange(DATA* data, modelica_real** res, short *, short *);
  int TrainSimulation_VehicleCollection_pickUpBoundsForInputsInOptimization(DATA* data, modelica_real* min, modelica_real* max, modelica_real*nominal, modelica_boolean *useNominal, char ** name, modelica_real * start, modelica_real * startTimeOpt);
  int TrainSimulation_VehicleCollection_setInputData(DATA *data, const modelica_boolean file);
  int TrainSimulation_VehicleCollection_getTimeGrid(DATA *data, modelica_integer * nsi, modelica_real**t);
#if defined(__cplusplus)
}
#endif