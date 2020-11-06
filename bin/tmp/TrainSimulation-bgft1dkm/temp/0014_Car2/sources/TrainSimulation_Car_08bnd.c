/* update bound parameters and variable attributes (start, nominal, min, max) */
#include "TrainSimulation_Car_model.h"
#if defined(__cplusplus)
extern "C" {
#endif


/*
equation index: 29
type: SIMPLE_ASSIGN
$START.speed = maxSpeed
*/
OMC_DISABLE_OPT
static void TrainSimulation_Car_eqFunction_29(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,29};
  data->modelData->realVarsData[2].attribute /* speed STATE(1,acceleration) */.start = data->simulationInfo->realParameter[5] /* maxSpeed PARAM */;
    data->localData[0]->realVars[2] /* speed STATE(1,acceleration) */ = data->modelData->realVarsData[2].attribute /* speed STATE(1,acceleration) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[2].info /* speed */.name, (modelica_real) data->localData[0]->realVars[2] /* speed STATE(1,acceleration) */);
  TRACE_POP
}

/*
equation index: 30
type: SIMPLE_ASSIGN
$START.Distance = distanceStart
*/
OMC_DISABLE_OPT
static void TrainSimulation_Car_eqFunction_30(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,30};
  data->modelData->realVarsData[0].attribute /* Distance STATE(1,speed) */.start = data->simulationInfo->realParameter[1] /* distanceStart PARAM */;
    data->localData[0]->realVars[0] /* Distance STATE(1,speed) */ = data->modelData->realVarsData[0].attribute /* Distance STATE(1,speed) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[0].info /* Distance */.name, (modelica_real) data->localData[0]->realVars[0] /* Distance STATE(1,speed) */);
  TRACE_POP
}
OMC_DISABLE_OPT
int TrainSimulation_Car_updateBoundVariableAttributes(DATA *data, threadData_t *threadData)
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
  TrainSimulation_Car_eqFunction_29(data, threadData);

  TrainSimulation_Car_eqFunction_30(data, threadData);
  if (ACTIVE_STREAM(LOG_INIT)) messageClose(LOG_INIT);
  
  TRACE_POP
  return 0;
}

OMC_DISABLE_OPT
int TrainSimulation_Car_updateBoundParameters(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

