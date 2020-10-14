/* update bound parameters and variable attributes (start, nominal, min, max) */
#include "TrainSimulation.Train_model.h"
#if defined(__cplusplus)
extern "C" {
#endif


/*
equation index: 73
type: SIMPLE_ASSIGN
$START.lapDistance = distanceStart
*/
OMC_DISABLE_OPT
static void TrainSimulation_Train_eqFunction_73(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,73};
  data->modelData->realVarsData[2].attribute /* lapDistance STATE(1,speed) */.start = data->simulationInfo->realParameter[1] /* distanceStart PARAM */;
    data->localData[0]->realVars[2] /* lapDistance STATE(1,speed) */ = data->modelData->realVarsData[2].attribute /* lapDistance STATE(1,speed) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[2].info /* lapDistance */.name, (modelica_real) data->localData[0]->realVars[2] /* lapDistance STATE(1,speed) */);
  TRACE_POP
}

/*
equation index: 74
type: SIMPLE_ASSIGN
$START.speed = maxSpeed
*/
OMC_DISABLE_OPT
static void TrainSimulation_Train_eqFunction_74(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,74};
  data->modelData->realVarsData[3].attribute /* speed STATE(1,acceleration) */.start = data->simulationInfo->realParameter[4] /* maxSpeed PARAM */;
    data->localData[0]->realVars[3] /* speed STATE(1,acceleration) */ = data->modelData->realVarsData[3].attribute /* speed STATE(1,acceleration) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[3].info /* speed */.name, (modelica_real) data->localData[0]->realVars[3] /* speed STATE(1,acceleration) */);
  TRACE_POP
}

/*
equation index: 75
type: SIMPLE_ASSIGN
$START.distance = distanceStart
*/
OMC_DISABLE_OPT
static void TrainSimulation_Train_eqFunction_75(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,75};
  data->modelData->realVarsData[1].attribute /* distance STATE(1,speed) */.start = data->simulationInfo->realParameter[1] /* distanceStart PARAM */;
    data->localData[0]->realVars[1] /* distance STATE(1,speed) */ = data->modelData->realVarsData[1].attribute /* distance STATE(1,speed) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[1].info /* distance */.name, (modelica_real) data->localData[0]->realVars[1] /* distance STATE(1,speed) */);
  TRACE_POP
}
OMC_DISABLE_OPT
int TrainSimulation_Train_updateBoundVariableAttributes(DATA *data, threadData_t *threadData)
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
  TrainSimulation_Train_eqFunction_73(data, threadData);

  TrainSimulation_Train_eqFunction_74(data, threadData);

  TrainSimulation_Train_eqFunction_75(data, threadData);
  if (ACTIVE_STREAM(LOG_INIT)) messageClose(LOG_INIT);
  
  TRACE_POP
  return 0;
}

OMC_DISABLE_OPT
int TrainSimulation_Train_updateBoundParameters(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

