/* update bound parameters and variable attributes (start, nominal, min, max) */
#include "TrainSimulation_Car_model.h"
#if defined(__cplusplus)
extern "C" {
#endif


/*
equation index: 33
type: SIMPLE_ASSIGN
$START.speed = maxSpeed
*/
OMC_DISABLE_OPT
static void TrainSimulation_Car_eqFunction_33(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,33};
  data->modelData->realVarsData[2].attribute /* speed STATE(1,acceleration) */.start = data->simulationInfo->realParameter[6] /* maxSpeed PARAM */;
    data->localData[0]->realVars[2] /* speed STATE(1,acceleration) */ = data->modelData->realVarsData[2].attribute /* speed STATE(1,acceleration) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[2].info /* speed */.name, (modelica_real) data->localData[0]->realVars[2] /* speed STATE(1,acceleration) */);
  TRACE_POP
}

/*
equation index: 34
type: SIMPLE_ASSIGN
$START.distance = distanceStart
*/
OMC_DISABLE_OPT
static void TrainSimulation_Car_eqFunction_34(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,34};
  data->modelData->realVarsData[1].attribute /* distance STATE(1,speed) */.start = data->simulationInfo->realParameter[2] /* distanceStart PARAM */;
    data->localData[0]->realVars[1] /* distance STATE(1,speed) */ = data->modelData->realVarsData[1].attribute /* distance STATE(1,speed) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[1].info /* distance */.name, (modelica_real) data->localData[0]->realVars[1] /* distance STATE(1,speed) */);
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
  TrainSimulation_Car_eqFunction_33(data, threadData);

  TrainSimulation_Car_eqFunction_34(data, threadData);
  if (ACTIVE_STREAM(LOG_INIT)) messageClose(LOG_INIT);
  
  TRACE_POP
  return 0;
}

void TrainSimulation_Car_updateBoundParameters_0(DATA *data, threadData_t *threadData);

/*
equation index: 35
type: SIMPLE_ASSIGN
$outputAlias_Length = length
*/
OMC_DISABLE_OPT
static void TrainSimulation_Car_eqFunction_35(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,35};
  data->simulationInfo->realParameter[0] /* $outputAlias_Length PARAM */ = data->simulationInfo->realParameter[4] /* length PARAM */;
  TRACE_POP
}
OMC_DISABLE_OPT
void TrainSimulation_Car_updateBoundParameters_0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  TrainSimulation_Car_eqFunction_35(data, threadData);
  TRACE_POP
}
OMC_DISABLE_OPT
int TrainSimulation_Car_updateBoundParameters(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  TrainSimulation_Car_updateBoundParameters_0(data, threadData);
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

