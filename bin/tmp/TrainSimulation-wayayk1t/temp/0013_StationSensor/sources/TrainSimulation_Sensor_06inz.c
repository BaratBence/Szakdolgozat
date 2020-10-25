/* Initialization */
#include "TrainSimulation_Sensor_model.h"
#include "TrainSimulation_Sensor_11mix.h"
#include "TrainSimulation_Sensor_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

void TrainSimulation_Sensor_functionInitialEquations_0(DATA *data, threadData_t *threadData);

/*
equation index: 1
type: SIMPLE_ASSIGN
$outputAlias_Intersection = 0.5 * (Sensor1Position + Sensor2Position)
*/
void TrainSimulation_Sensor_eqFunction_1(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1};
  data->localData[0]->realVars[0] /* $outputAlias_Intersection variable */ = (0.5) * (data->simulationInfo->realParameter[2] /* Sensor1Position PARAM */ + data->simulationInfo->realParameter[3] /* Sensor2Position PARAM */);
  TRACE_POP
}
extern void TrainSimulation_Sensor_eqFunction_65(DATA *data, threadData_t *threadData);


/*
equation index: 3
type: SIMPLE_ASSIGN
$PRE.Sensor2Output = $START.Sensor2Output
*/
void TrainSimulation_Sensor_eqFunction_3(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3};
  data->simulationInfo->integerVarsPre[1] /* Sensor2Output DISCRETE */ = data->modelData->integerVarsData[1].attribute /* Sensor2Output DISCRETE */.start;
  TRACE_POP
}

/*
equation index: 4
type: SIMPLE_ASSIGN
$PRE.Sensor1Input = $START.Sensor1Input
*/
void TrainSimulation_Sensor_eqFunction_4(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4};
  data->simulationInfo->integerVarsPre[0] /* Sensor1Input DISCRETE */ = data->modelData->integerVarsData[0].attribute /* Sensor1Input DISCRETE */.start;
  TRACE_POP
}

/*
equation index: 5
type: SIMPLE_ASSIGN
Sensor1Input = $PRE.Sensor1Input
*/
void TrainSimulation_Sensor_eqFunction_5(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5};
  data->localData[0]->integerVars[0] /* Sensor1Input DISCRETE */ = data->simulationInfo->integerVarsPre[0] /* Sensor1Input DISCRETE */;
  TRACE_POP
}

/*
equation index: 6
type: SIMPLE_ASSIGN
Sensor2Output = $PRE.Sensor2Output
*/
void TrainSimulation_Sensor_eqFunction_6(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6};
  data->localData[0]->integerVars[1] /* Sensor2Output DISCRETE */ = data->simulationInfo->integerVarsPre[1] /* Sensor2Output DISCRETE */;
  TRACE_POP
}
extern void TrainSimulation_Sensor_eqFunction_64(DATA *data, threadData_t *threadData);


/*
equation index: 8
type: SIMPLE_ASSIGN
$PRE.Sensor2_Active = $START.Sensor2_Active
*/
void TrainSimulation_Sensor_eqFunction_8(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,8};
  data->simulationInfo->booleanVarsPre[3] /* Sensor2_Active DISCRETE */ = data->modelData->booleanVarsData[3].attribute /* Sensor2_Active DISCRETE */.start;
  TRACE_POP
}
extern void TrainSimulation_Sensor_eqFunction_59(DATA *data, threadData_t *threadData);

extern void TrainSimulation_Sensor_eqFunction_55(DATA *data, threadData_t *threadData);

extern void TrainSimulation_Sensor_eqFunction_53(DATA *data, threadData_t *threadData);

extern void TrainSimulation_Sensor_eqFunction_51(DATA *data, threadData_t *threadData);

extern void TrainSimulation_Sensor_eqFunction_49(DATA *data, threadData_t *threadData);

extern void TrainSimulation_Sensor_eqFunction_47(DATA *data, threadData_t *threadData);

extern void TrainSimulation_Sensor_eqFunction_45(DATA *data, threadData_t *threadData);

extern void TrainSimulation_Sensor_eqFunction_43(DATA *data, threadData_t *threadData);

extern void TrainSimulation_Sensor_eqFunction_41(DATA *data, threadData_t *threadData);

extern void TrainSimulation_Sensor_eqFunction_39(DATA *data, threadData_t *threadData);

extern void TrainSimulation_Sensor_eqFunction_60(DATA *data, threadData_t *threadData);


/*
equation index: 20
type: SIMPLE_ASSIGN
$whenCondition2 = Sensor2_Active <> $PRE.Sensor2_Active and not Sensor2_Active and $PRE.Sensor2_Active
*/
void TrainSimulation_Sensor_eqFunction_20(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,20};
  data->localData[0]->booleanVars[1] /* $whenCondition2 DISCRETE */ = ((((!data->localData[0]->booleanVars[3] /* Sensor2_Active DISCRETE */ && data->simulationInfo->booleanVarsPre[3] /* Sensor2_Active DISCRETE */) || (data->localData[0]->booleanVars[3] /* Sensor2_Active DISCRETE */ && !data->simulationInfo->booleanVarsPre[3] /* Sensor2_Active DISCRETE */)) && (!data->localData[0]->booleanVars[3] /* Sensor2_Active DISCRETE */)) && data->simulationInfo->booleanVarsPre[3] /* Sensor2_Active DISCRETE */);
  TRACE_POP
}

/*
equation index: 21
type: SIMPLE_ASSIGN
$PRE.Sensor1_Active = $START.Sensor1_Active
*/
void TrainSimulation_Sensor_eqFunction_21(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,21};
  data->simulationInfo->booleanVarsPre[2] /* Sensor1_Active DISCRETE */ = data->modelData->booleanVarsData[2].attribute /* Sensor1_Active DISCRETE */.start;
  TRACE_POP
}
extern void TrainSimulation_Sensor_eqFunction_56(DATA *data, threadData_t *threadData);

extern void TrainSimulation_Sensor_eqFunction_54(DATA *data, threadData_t *threadData);

extern void TrainSimulation_Sensor_eqFunction_52(DATA *data, threadData_t *threadData);

extern void TrainSimulation_Sensor_eqFunction_50(DATA *data, threadData_t *threadData);

extern void TrainSimulation_Sensor_eqFunction_48(DATA *data, threadData_t *threadData);

extern void TrainSimulation_Sensor_eqFunction_46(DATA *data, threadData_t *threadData);

extern void TrainSimulation_Sensor_eqFunction_44(DATA *data, threadData_t *threadData);

extern void TrainSimulation_Sensor_eqFunction_42(DATA *data, threadData_t *threadData);

extern void TrainSimulation_Sensor_eqFunction_40(DATA *data, threadData_t *threadData);

extern void TrainSimulation_Sensor_eqFunction_38(DATA *data, threadData_t *threadData);

extern void TrainSimulation_Sensor_eqFunction_57(DATA *data, threadData_t *threadData);


/*
equation index: 33
type: SIMPLE_ASSIGN
$whenCondition1 = Sensor1_Active and not $PRE.Sensor1_Active
*/
void TrainSimulation_Sensor_eqFunction_33(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,33};
  data->localData[0]->booleanVars[0] /* $whenCondition1 DISCRETE */ = (data->localData[0]->booleanVars[2] /* Sensor1_Active DISCRETE */ && (!data->simulationInfo->booleanVarsPre[2] /* Sensor1_Active DISCRETE */));
  TRACE_POP
}
extern void TrainSimulation_Sensor_eqFunction_37(DATA *data, threadData_t *threadData);

extern void TrainSimulation_Sensor_eqFunction_36(DATA *data, threadData_t *threadData);

OMC_DISABLE_OPT
void TrainSimulation_Sensor_functionInitialEquations_0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  TrainSimulation_Sensor_eqFunction_1(data, threadData);
  TrainSimulation_Sensor_eqFunction_65(data, threadData);
  TrainSimulation_Sensor_eqFunction_3(data, threadData);
  TrainSimulation_Sensor_eqFunction_4(data, threadData);
  TrainSimulation_Sensor_eqFunction_5(data, threadData);
  TrainSimulation_Sensor_eqFunction_6(data, threadData);
  TrainSimulation_Sensor_eqFunction_64(data, threadData);
  TrainSimulation_Sensor_eqFunction_8(data, threadData);
  TrainSimulation_Sensor_eqFunction_59(data, threadData);
  TrainSimulation_Sensor_eqFunction_55(data, threadData);
  TrainSimulation_Sensor_eqFunction_53(data, threadData);
  TrainSimulation_Sensor_eqFunction_51(data, threadData);
  TrainSimulation_Sensor_eqFunction_49(data, threadData);
  TrainSimulation_Sensor_eqFunction_47(data, threadData);
  TrainSimulation_Sensor_eqFunction_45(data, threadData);
  TrainSimulation_Sensor_eqFunction_43(data, threadData);
  TrainSimulation_Sensor_eqFunction_41(data, threadData);
  TrainSimulation_Sensor_eqFunction_39(data, threadData);
  TrainSimulation_Sensor_eqFunction_60(data, threadData);
  TrainSimulation_Sensor_eqFunction_20(data, threadData);
  TrainSimulation_Sensor_eqFunction_21(data, threadData);
  TrainSimulation_Sensor_eqFunction_56(data, threadData);
  TrainSimulation_Sensor_eqFunction_54(data, threadData);
  TrainSimulation_Sensor_eqFunction_52(data, threadData);
  TrainSimulation_Sensor_eqFunction_50(data, threadData);
  TrainSimulation_Sensor_eqFunction_48(data, threadData);
  TrainSimulation_Sensor_eqFunction_46(data, threadData);
  TrainSimulation_Sensor_eqFunction_44(data, threadData);
  TrainSimulation_Sensor_eqFunction_42(data, threadData);
  TrainSimulation_Sensor_eqFunction_40(data, threadData);
  TrainSimulation_Sensor_eqFunction_38(data, threadData);
  TrainSimulation_Sensor_eqFunction_57(data, threadData);
  TrainSimulation_Sensor_eqFunction_33(data, threadData);
  TrainSimulation_Sensor_eqFunction_37(data, threadData);
  TrainSimulation_Sensor_eqFunction_36(data, threadData);
  TRACE_POP
}


int TrainSimulation_Sensor_functionInitialEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->discreteCall = 1;
  TrainSimulation_Sensor_functionInitialEquations_0(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}


int TrainSimulation_Sensor_functionInitialEquations_lambda0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->discreteCall = 1;
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}
int TrainSimulation_Sensor_functionRemovedInitialEquations(DATA *data, threadData_t *threadData)
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

