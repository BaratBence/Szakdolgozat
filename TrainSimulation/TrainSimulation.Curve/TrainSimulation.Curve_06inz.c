#ifdef OMC_BASE_FILE
  #define OMC_FILE OMC_BASE_FILE
#else
  #define OMC_FILE "C:/Users/Bence/AppData/Local/Temp/OpenModelica/OMEdit/TrainSimulation.Curve/TrainSimulation.Curve_06inz.c"
#endif
/* Initialization */
#include "TrainSimulation.Curve_model.h"
#include "TrainSimulation.Curve_11mix.h"
#include "TrainSimulation.Curve_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

void TrainSimulation_Curve_functionInitialEquations_0(DATA *data, threadData_t *threadData);
extern void TrainSimulation_Curve_eqFunction_3(DATA *data, threadData_t *threadData);

extern void TrainSimulation_Curve_eqFunction_4(DATA *data, threadData_t *threadData);

OMC_DISABLE_OPT
void TrainSimulation_Curve_functionInitialEquations_0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  TrainSimulation_Curve_eqFunction_3(data, threadData);
  TrainSimulation_Curve_eqFunction_4(data, threadData);
  TRACE_POP
}


int TrainSimulation_Curve_functionInitialEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->discreteCall = 1;
  TrainSimulation_Curve_functionInitialEquations_0(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}


int TrainSimulation_Curve_functionInitialEquations_lambda0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->discreteCall = 1;
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}
int TrainSimulation_Curve_functionRemovedInitialEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int *equationIndexes = NULL;
  double res = 0.0;

  
  TRACE_POP
  return 0;
}


#if defined(__cplusplus)
}
#endif

