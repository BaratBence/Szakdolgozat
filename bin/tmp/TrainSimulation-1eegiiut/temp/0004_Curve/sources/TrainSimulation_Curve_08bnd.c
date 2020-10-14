/* update bound parameters and variable attributes (start, nominal, min, max) */
#include "TrainSimulation_Curve_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

OMC_DISABLE_OPT
int TrainSimulation_Curve_updateBoundVariableAttributes(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  /* min ******************************************************** */
  
  infoStreamPrint(LOG_INIT, 1, "updating min-values");
  if (ACTIVE_STREAM(LOG_INIT)) messageClose(LOG_INIT);
  
  /* max ******************************************************** */
  
  infoStreamPrint(LOG_INIT, 1, "updating max-values");
  if (ACTIVE_STREAM(LOG_INIT)) messageClose(LOG_INIT);
  
  /* nominal **************************************************** */
  
  infoStreamPrint(LOG_INIT, 1, "updating nominal-values");
  if (ACTIVE_STREAM(LOG_INIT)) messageClose(LOG_INIT);
  
  /* start ****************************************************** */
  infoStreamPrint(LOG_INIT, 1, "updating primary start-values");
  if (ACTIVE_STREAM(LOG_INIT)) messageClose(LOG_INIT);
  
  TRACE_POP
  return 0;
}

void TrainSimulation_Curve_updateBoundParameters_0(DATA *data, threadData_t *threadData);
extern void TrainSimulation_Curve_eqFunction_20(DATA *data, threadData_t *threadData);

extern void TrainSimulation_Curve_eqFunction_19(DATA *data, threadData_t *threadData);

extern void TrainSimulation_Curve_eqFunction_18(DATA *data, threadData_t *threadData);

extern void TrainSimulation_Curve_eqFunction_17(DATA *data, threadData_t *threadData);

extern void TrainSimulation_Curve_eqFunction_16(DATA *data, threadData_t *threadData);

extern void TrainSimulation_Curve_eqFunction_15(DATA *data, threadData_t *threadData);

extern void TrainSimulation_Curve_eqFunction_14(DATA *data, threadData_t *threadData);

extern void TrainSimulation_Curve_eqFunction_13(DATA *data, threadData_t *threadData);

extern void TrainSimulation_Curve_eqFunction_12(DATA *data, threadData_t *threadData);

extern void TrainSimulation_Curve_eqFunction_1(DATA *data, threadData_t *threadData);

OMC_DISABLE_OPT
void TrainSimulation_Curve_updateBoundParameters_0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  TrainSimulation_Curve_eqFunction_20(data, threadData);
  TrainSimulation_Curve_eqFunction_19(data, threadData);
  TrainSimulation_Curve_eqFunction_18(data, threadData);
  TrainSimulation_Curve_eqFunction_17(data, threadData);
  TrainSimulation_Curve_eqFunction_16(data, threadData);
  TrainSimulation_Curve_eqFunction_15(data, threadData);
  TrainSimulation_Curve_eqFunction_14(data, threadData);
  TrainSimulation_Curve_eqFunction_13(data, threadData);
  TrainSimulation_Curve_eqFunction_12(data, threadData);
  TrainSimulation_Curve_eqFunction_1(data, threadData);
  TRACE_POP
}
OMC_DISABLE_OPT
int TrainSimulation_Curve_updateBoundParameters(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  data->simulationInfo->integerParameter[0] /* size PARAM */ = ((modelica_integer) 10);
  data->modelData->integerParameterData[0].time_unvarying = 1;
  TrainSimulation_Curve_updateBoundParameters_0(data, threadData);
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

