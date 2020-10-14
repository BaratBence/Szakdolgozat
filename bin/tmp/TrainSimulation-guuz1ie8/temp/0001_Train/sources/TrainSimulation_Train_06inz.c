/* Initialization */
#include "TrainSimulation_Train_model.h"
#include "TrainSimulation_Train_11mix.h"
#include "TrainSimulation_Train_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

void TrainSimulation_Train_functionInitialEquations_0(DATA *data, threadData_t *threadData);
extern void TrainSimulation_Train_eqFunction_55(DATA *data, threadData_t *threadData);


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
extern void TrainSimulation_Train_eqFunction_33(DATA *data, threadData_t *threadData);

extern void TrainSimulation_Train_eqFunction_35(DATA *data, threadData_t *threadData);

extern void TrainSimulation_Train_eqFunction_37(DATA *data, threadData_t *threadData);

extern void TrainSimulation_Train_eqFunction_38(DATA *data, threadData_t *threadData);

extern void TrainSimulation_Train_eqFunction_41(DATA *data, threadData_t *threadData);

extern void TrainSimulation_Train_eqFunction_46(DATA *data, threadData_t *threadData);

extern void TrainSimulation_Train_eqFunction_47(DATA *data, threadData_t *threadData);

extern void TrainSimulation_Train_eqFunction_48(DATA *data, threadData_t *threadData);

extern void TrainSimulation_Train_eqFunction_49(DATA *data, threadData_t *threadData);

extern void TrainSimulation_Train_eqFunction_50(DATA *data, threadData_t *threadData);

extern void TrainSimulation_Train_eqFunction_51(DATA *data, threadData_t *threadData);

extern void TrainSimulation_Train_eqFunction_52(DATA *data, threadData_t *threadData);

extern void TrainSimulation_Train_eqFunction_42(DATA *data, threadData_t *threadData);

extern void TrainSimulation_Train_eqFunction_43(DATA *data, threadData_t *threadData);

extern void TrainSimulation_Train_eqFunction_44(DATA *data, threadData_t *threadData);

extern void TrainSimulation_Train_eqFunction_39(DATA *data, threadData_t *threadData);

extern void TrainSimulation_Train_eqFunction_40(DATA *data, threadData_t *threadData);

extern void TrainSimulation_Train_eqFunction_45(DATA *data, threadData_t *threadData);


/*
equation index: 22
type: SIMPLE_ASSIGN
acceleration = $START.acceleration
*/
void TrainSimulation_Train_eqFunction_22(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,22};
  data->localData[0]->realVars[0] /* acceleration STATE(1) */ = data->modelData->realVarsData[0].attribute /* acceleration STATE(1) */.start;
  TRACE_POP
}
extern void TrainSimulation_Train_eqFunction_31(DATA *data, threadData_t *threadData);

extern void TrainSimulation_Train_eqFunction_34(DATA *data, threadData_t *threadData);


/*
equation index: 25
type: SIMPLE_ASSIGN
distance = $START.distance
*/
void TrainSimulation_Train_eqFunction_25(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,25};
  data->localData[0]->realVars[1] /* distance STATE(1,speed) */ = data->modelData->realVarsData[1].attribute /* distance STATE(1,speed) */.start;
  TRACE_POP
}
extern void TrainSimulation_Train_eqFunction_32(DATA *data, threadData_t *threadData);

extern void TrainSimulation_Train_eqFunction_36(DATA *data, threadData_t *threadData);

extern void TrainSimulation_Train_eqFunction_53(DATA *data, threadData_t *threadData);


/*
equation index: 29
type: SIMPLE_ASSIGN
$PRE.ActiveUpHill = ActiveUpHill
*/
void TrainSimulation_Train_eqFunction_29(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,29};
  data->simulationInfo->booleanVarsPre[14] /* ActiveUpHill variable */ = data->localData[0]->booleanVars[14] /* ActiveUpHill variable */;
  TRACE_POP
}

/*
equation index: 30
type: SIMPLE_ASSIGN
$whenCondition7 = ActiveUpHill <> $PRE.ActiveUpHill and not ActiveUpHill
*/
void TrainSimulation_Train_eqFunction_30(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,30};
  data->localData[0]->booleanVars[10] /* $whenCondition7 DISCRETE */ = (((!data->localData[0]->booleanVars[14] /* ActiveUpHill variable */ && data->simulationInfo->booleanVarsPre[14] /* ActiveUpHill variable */) || (data->localData[0]->booleanVars[14] /* ActiveUpHill variable */ && !data->simulationInfo->booleanVarsPre[14] /* ActiveUpHill variable */)) && (!data->localData[0]->booleanVars[14] /* ActiveUpHill variable */));
  TRACE_POP
}
OMC_DISABLE_OPT
void TrainSimulation_Train_functionInitialEquations_0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  TrainSimulation_Train_eqFunction_55(data, threadData);
  TrainSimulation_Train_eqFunction_2(data, threadData);
  TrainSimulation_Train_eqFunction_3(data, threadData);
  TrainSimulation_Train_eqFunction_33(data, threadData);
  TrainSimulation_Train_eqFunction_35(data, threadData);
  TrainSimulation_Train_eqFunction_37(data, threadData);
  TrainSimulation_Train_eqFunction_38(data, threadData);
  TrainSimulation_Train_eqFunction_41(data, threadData);
  TrainSimulation_Train_eqFunction_46(data, threadData);
  TrainSimulation_Train_eqFunction_47(data, threadData);
  TrainSimulation_Train_eqFunction_48(data, threadData);
  TrainSimulation_Train_eqFunction_49(data, threadData);
  TrainSimulation_Train_eqFunction_50(data, threadData);
  TrainSimulation_Train_eqFunction_51(data, threadData);
  TrainSimulation_Train_eqFunction_52(data, threadData);
  TrainSimulation_Train_eqFunction_42(data, threadData);
  TrainSimulation_Train_eqFunction_43(data, threadData);
  TrainSimulation_Train_eqFunction_44(data, threadData);
  TrainSimulation_Train_eqFunction_39(data, threadData);
  TrainSimulation_Train_eqFunction_40(data, threadData);
  TrainSimulation_Train_eqFunction_45(data, threadData);
  TrainSimulation_Train_eqFunction_22(data, threadData);
  TrainSimulation_Train_eqFunction_31(data, threadData);
  TrainSimulation_Train_eqFunction_34(data, threadData);
  TrainSimulation_Train_eqFunction_25(data, threadData);
  TrainSimulation_Train_eqFunction_32(data, threadData);
  TrainSimulation_Train_eqFunction_36(data, threadData);
  TrainSimulation_Train_eqFunction_53(data, threadData);
  TrainSimulation_Train_eqFunction_29(data, threadData);
  TrainSimulation_Train_eqFunction_30(data, threadData);
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

