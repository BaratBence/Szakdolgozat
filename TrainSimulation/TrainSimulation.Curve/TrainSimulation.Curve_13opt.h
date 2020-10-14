#ifdef OMC_BASE_FILE
  #define OMC_FILE OMC_BASE_FILE
#else
  #define OMC_FILE "C:/Users/Bence/AppData/Local/Temp/OpenModelica/OMEdit/TrainSimulation.Curve/TrainSimulation.Curve_13opt.h"
#endif
#if defined(__cplusplus)
  extern "C" {
#endif
  int TrainSimulation_Curve_mayer(DATA* data, modelica_real** res, short*);
  int TrainSimulation_Curve_lagrange(DATA* data, modelica_real** res, short *, short *);
  int TrainSimulation_Curve_pickUpBoundsForInputsInOptimization(DATA* data, modelica_real* min, modelica_real* max, modelica_real*nominal, modelica_boolean *useNominal, char ** name, modelica_real * start, modelica_real * startTimeOpt);
  int TrainSimulation_Curve_setInputData(DATA *data, const modelica_boolean file);
  int TrainSimulation_Curve_getTimeGrid(DATA *data, modelica_integer * nsi, modelica_real**t);
#if defined(__cplusplus)
}
#endif