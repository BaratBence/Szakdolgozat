/* Initialization */
#include "TrainSimulation_Train_model.h"
#include "TrainSimulation_Train_11mix.h"
#include "TrainSimulation_Train_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

void TrainSimulation_Train_functionInitialEquations_0(DATA *data, threadData_t *threadData);
extern void TrainSimulation_Train_eqFunction_58(DATA *data, threadData_t *threadData);


/*
equation index: 2
type: SIMPLE_ASSIGN
lapDistance = $START.lapDistance
*/
void TrainSimulation_Train_eqFunction_2(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2};
  data->localData[0]->realVars[2] /* lapDistance STATE(1,speed) */ = data->modelData->realVarsData[2].attribute /* lapDistance STATE(1,speed) */.start;
  TRACE_POP
}

/*
equation index: 3
type: SIMPLE_ASSIGN
speed = $START.speed
*/
void TrainSimulation_Train_eqFunction_3(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3};
  data->localData[0]->realVars[3] /* speed STATE(1,acceleration) */ = data->modelData->realVarsData[3].attribute /* speed STATE(1,acceleration) */.start;
  TRACE_POP
}

/*
equation index: 4
type: SIMPLE_ASSIGN
acceleration = $START.acceleration
*/
void TrainSimulation_Train_eqFunction_4(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4};
  data->localData[0]->realVars[0] /* acceleration STATE(1) */ = data->modelData->realVarsData[0].attribute /* acceleration STATE(1) */.start;
  TRACE_POP
}
extern void TrainSimulation_Train_eqFunction_33(DATA *data, threadData_t *threadData);

extern void TrainSimulation_Train_eqFunction_35(DATA *data, threadData_t *threadData);

extern void TrainSimulation_Train_eqFunction_36(DATA *data, threadData_t *threadData);

extern void TrainSimulation_Train_eqFunction_37(DATA *data, threadData_t *threadData);

extern void TrainSimulation_Train_eqFunction_39(DATA *data, threadData_t *threadData);

extern void TrainSimulation_Train_eqFunction_40(DATA *data, threadData_t *threadData);

extern void TrainSimulation_Train_eqFunction_45(DATA *data, threadData_t *threadData);

extern void TrainSimulation_Train_eqFunction_50(DATA *data, threadData_t *threadData);

extern void TrainSimulation_Train_eqFunction_51(DATA *data, threadData_t *threadData);

extern void TrainSimulation_Train_eqFunction_52(DATA *data, threadData_t *threadData);

extern void TrainSimulation_Train_eqFunction_53(DATA *data, threadData_t *threadData);

extern void TrainSimulation_Train_eqFunction_54(DATA *data, threadData_t *threadData);

extern void TrainSimulation_Train_eqFunction_46(DATA *data, threadData_t *threadData);

extern void TrainSimulation_Train_eqFunction_47(DATA *data, threadData_t *threadData);

extern void TrainSimulation_Train_eqFunction_48(DATA *data, threadData_t *threadData);

extern void TrainSimulation_Train_eqFunction_43(DATA *data, threadData_t *threadData);

extern void TrainSimulation_Train_eqFunction_44(DATA *data, threadData_t *threadData);

extern void TrainSimulation_Train_eqFunction_49(DATA *data, threadData_t *threadData);


/*
equation index: 23
type: SIMPLE_ASSIGN
$PRE.ActiveCurve = ActiveCurve
*/
void TrainSimulation_Train_eqFunction_23(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,23};
  data->simulationInfo->booleanVarsPre[14] /* ActiveCurve variable */ = data->localData[0]->booleanVars[14] /* ActiveCurve variable */;
  TRACE_POP
}

/*
equation index: 24
type: SIMPLE_ASSIGN
$whenCondition4 = ActiveCurve <> $PRE.ActiveCurve and not ActiveCurve
*/
void TrainSimulation_Train_eqFunction_24(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,24};
  data->localData[0]->booleanVars[8] /* $whenCondition4 DISCRETE */ = (((!data->localData[0]->booleanVars[14] /* ActiveCurve variable */ && data->simulationInfo->booleanVarsPre[14] /* ActiveCurve variable */) || (data->localData[0]->booleanVars[14] /* ActiveCurve variable */ && !data->simulationInfo->booleanVarsPre[14] /* ActiveCurve variable */)) && (!data->localData[0]->booleanVars[14] /* ActiveCurve variable */));
  TRACE_POP
}

/*
equation index: 25
type: SIMPLE_ASSIGN
$PRE.ActiveUpHill = ActiveUpHill
*/
void TrainSimulation_Train_eqFunction_25(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,25};
  data->simulationInfo->booleanVarsPre[15] /* ActiveUpHill variable */ = data->localData[0]->booleanVars[15] /* ActiveUpHill variable */;
  TRACE_POP
}

/*
equation index: 26
type: SIMPLE_ASSIGN
$whenCondition8 = ActiveUpHill <> $PRE.ActiveUpHill and not ActiveUpHill
*/
void TrainSimulation_Train_eqFunction_26(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,26};
  data->localData[0]->booleanVars[12] /* $whenCondition8 DISCRETE */ = (((!data->localData[0]->booleanVars[15] /* ActiveUpHill variable */ && data->simulationInfo->booleanVarsPre[15] /* ActiveUpHill variable */) || (data->localData[0]->booleanVars[15] /* ActiveUpHill variable */ && !data->simulationInfo->booleanVarsPre[15] /* ActiveUpHill variable */)) && (!data->localData[0]->booleanVars[15] /* ActiveUpHill variable */));
  TRACE_POP
}

/*
equation index: 27
type: SIMPLE_ASSIGN
$whenCondition6 = Decelerating and speed <= maxSpeed and not ActiveCurve and not ActiveUpHill and not ActiveCurve <> $PRE.ActiveCurve and not ActiveUpHill <> $PRE.ActiveUpHill and not inStation
*/
void TrainSimulation_Train_eqFunction_27(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,27};
  modelica_boolean tmp2;
  tmp2 = LessEq(data->localData[0]->realVars[3] /* speed STATE(1,acceleration) */,data->simulationInfo->realParameter[5] /* maxSpeed PARAM */);
  data->localData[0]->booleanVars[10] /* $whenCondition6 DISCRETE */ = ((((((data->localData[0]->booleanVars[17] /* Decelerating DISCRETE */ && tmp2) && (!data->localData[0]->booleanVars[14] /* ActiveCurve variable */)) && (!data->localData[0]->booleanVars[15] /* ActiveUpHill variable */)) && (!((!data->localData[0]->booleanVars[14] /* ActiveCurve variable */ && data->simulationInfo->booleanVarsPre[14] /* ActiveCurve variable */) || (data->localData[0]->booleanVars[14] /* ActiveCurve variable */ && !data->simulationInfo->booleanVarsPre[14] /* ActiveCurve variable */)))) && (!((!data->localData[0]->booleanVars[15] /* ActiveUpHill variable */ && data->simulationInfo->booleanVarsPre[15] /* ActiveUpHill variable */) || (data->localData[0]->booleanVars[15] /* ActiveUpHill variable */ && !data->simulationInfo->booleanVarsPre[15] /* ActiveUpHill variable */)))) && (!data->localData[0]->booleanVars[18] /* inStation DISCRETE */));
  TRACE_POP
}

/*
equation index: 28
type: SIMPLE_ASSIGN
$whenCondition5 = speed >= maxSpeed and not ActiveCurve and not ActiveUpHill and not ActiveCurve <> $PRE.ActiveCurve and not ActiveUpHill <> $PRE.ActiveUpHill and not Decelerating and not inStation
*/
void TrainSimulation_Train_eqFunction_28(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,28};
  modelica_boolean tmp5;
  tmp5 = GreaterEq(data->localData[0]->realVars[3] /* speed STATE(1,acceleration) */,data->simulationInfo->realParameter[5] /* maxSpeed PARAM */);
  data->localData[0]->booleanVars[9] /* $whenCondition5 DISCRETE */ = ((((((tmp5 && (!data->localData[0]->booleanVars[14] /* ActiveCurve variable */)) && (!data->localData[0]->booleanVars[15] /* ActiveUpHill variable */)) && (!((!data->localData[0]->booleanVars[14] /* ActiveCurve variable */ && data->simulationInfo->booleanVarsPre[14] /* ActiveCurve variable */) || (data->localData[0]->booleanVars[14] /* ActiveCurve variable */ && !data->simulationInfo->booleanVarsPre[14] /* ActiveCurve variable */)))) && (!((!data->localData[0]->booleanVars[15] /* ActiveUpHill variable */ && data->simulationInfo->booleanVarsPre[15] /* ActiveUpHill variable */) || (data->localData[0]->booleanVars[15] /* ActiveUpHill variable */ && !data->simulationInfo->booleanVarsPre[15] /* ActiveUpHill variable */)))) && (!data->localData[0]->booleanVars[17] /* Decelerating DISCRETE */)) && (!data->localData[0]->booleanVars[18] /* inStation DISCRETE */));
  TRACE_POP
}

/*
equation index: 29
type: SIMPLE_ASSIGN
distance = $START.distance
*/
void TrainSimulation_Train_eqFunction_29(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,29};
  data->localData[0]->realVars[1] /* distance STATE(1,speed) */ = data->modelData->realVarsData[1].attribute /* distance STATE(1,speed) */.start;
  TRACE_POP
}
extern void TrainSimulation_Train_eqFunction_34(DATA *data, threadData_t *threadData);

extern void TrainSimulation_Train_eqFunction_38(DATA *data, threadData_t *threadData);

extern void TrainSimulation_Train_eqFunction_56(DATA *data, threadData_t *threadData);

OMC_DISABLE_OPT
void TrainSimulation_Train_functionInitialEquations_0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  TrainSimulation_Train_eqFunction_58(data, threadData);
  TrainSimulation_Train_eqFunction_2(data, threadData);
  TrainSimulation_Train_eqFunction_3(data, threadData);
  TrainSimulation_Train_eqFunction_4(data, threadData);
  TrainSimulation_Train_eqFunction_33(data, threadData);
  TrainSimulation_Train_eqFunction_35(data, threadData);
  TrainSimulation_Train_eqFunction_36(data, threadData);
  TrainSimulation_Train_eqFunction_37(data, threadData);
  TrainSimulation_Train_eqFunction_39(data, threadData);
  TrainSimulation_Train_eqFunction_40(data, threadData);
  TrainSimulation_Train_eqFunction_45(data, threadData);
  TrainSimulation_Train_eqFunction_50(data, threadData);
  TrainSimulation_Train_eqFunction_51(data, threadData);
  TrainSimulation_Train_eqFunction_52(data, threadData);
  TrainSimulation_Train_eqFunction_53(data, threadData);
  TrainSimulation_Train_eqFunction_54(data, threadData);
  TrainSimulation_Train_eqFunction_46(data, threadData);
  TrainSimulation_Train_eqFunction_47(data, threadData);
  TrainSimulation_Train_eqFunction_48(data, threadData);
  TrainSimulation_Train_eqFunction_43(data, threadData);
  TrainSimulation_Train_eqFunction_44(data, threadData);
  TrainSimulation_Train_eqFunction_49(data, threadData);
  TrainSimulation_Train_eqFunction_23(data, threadData);
  TrainSimulation_Train_eqFunction_24(data, threadData);
  TrainSimulation_Train_eqFunction_25(data, threadData);
  TrainSimulation_Train_eqFunction_26(data, threadData);
  TrainSimulation_Train_eqFunction_27(data, threadData);
  TrainSimulation_Train_eqFunction_28(data, threadData);
  TrainSimulation_Train_eqFunction_29(data, threadData);
  TrainSimulation_Train_eqFunction_34(data, threadData);
  TrainSimulation_Train_eqFunction_38(data, threadData);
  TrainSimulation_Train_eqFunction_56(data, threadData);
  TRACE_POP
}


int TrainSimulation_Train_functionInitialEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->discreteCall = 1;
  TrainSimulation_Train_functionInitialEquations_0(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}


int TrainSimulation_Train_functionInitialEquations_lambda0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->discreteCall = 1;
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}
int TrainSimulation_Train_functionRemovedInitialEquations(DATA *data, threadData_t *threadData)
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

