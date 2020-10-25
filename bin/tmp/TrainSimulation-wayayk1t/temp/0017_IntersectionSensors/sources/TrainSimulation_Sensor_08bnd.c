/* update bound parameters and variable attributes (start, nominal, min, max) */
#include "TrainSimulation_Sensor_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

OMC_DISABLE_OPT
int TrainSimulation_Sensor_updateBoundVariableAttributes(DATA *data, threadData_t *threadData)
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

void TrainSimulation_Sensor_updateBoundParameters_0(DATA *data, threadData_t *threadData);

/*
equation index: 66
type: SIMPLE_ASSIGN
$outputAlias_Sensor1PositionOut = Sensor1Position
*/
OMC_DISABLE_OPT
static void TrainSimulation_Sensor_eqFunction_66(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,66};
  data->simulationInfo->realParameter[0] /* $outputAlias_Sensor1PositionOut PARAM */ = data->simulationInfo->realParameter[2] /* Sensor1Position PARAM */;
  TRACE_POP
}

/*
equation index: 67
type: SIMPLE_ASSIGN
$outputAlias_Sensor2PositionOut = Sensor2Position
*/
OMC_DISABLE_OPT
static void TrainSimulation_Sensor_eqFunction_67(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,67};
  data->simulationInfo->realParameter[1] /* $outputAlias_Sensor2PositionOut PARAM */ = data->simulationInfo->realParameter[3] /* Sensor2Position PARAM */;
  TRACE_POP
}
extern void TrainSimulation_Sensor_eqFunction_1(DATA *data, threadData_t *threadData);

OMC_DISABLE_OPT
void TrainSimulation_Sensor_updateBoundParameters_0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  TrainSimulation_Sensor_eqFunction_66(data, threadData);
  TrainSimulation_Sensor_eqFunction_67(data, threadData);
  TrainSimulation_Sensor_eqFunction_1(data, threadData);
  TRACE_POP
}
OMC_DISABLE_OPT
int TrainSimulation_Sensor_updateBoundParameters(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  data->simulationInfo->integerParameter[0] /* size PARAM */ = ((modelica_integer) 10);
  data->modelData->integerParameterData[0].time_unvarying = 1;
  TrainSimulation_Sensor_updateBoundParameters_0(data, threadData);
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

