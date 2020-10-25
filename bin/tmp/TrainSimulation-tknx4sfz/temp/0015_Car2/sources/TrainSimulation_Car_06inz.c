/* Initialization */
#include "TrainSimulation_Car_model.h"
#include "TrainSimulation_Car_11mix.h"
#include "TrainSimulation_Car_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

void TrainSimulation_Car_functionInitialEquations_0(DATA *data, threadData_t *threadData);

/*
equation index: 1
type: SIMPLE_ASSIGN
distance = $START.distance
*/
void TrainSimulation_Car_eqFunction_1(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1};
  data->localData[0]->realVars[1] /* distance STATE(1,speed) */ = data->modelData->realVarsData[1].attribute /* distance STATE(1,speed) */.start;
  TRACE_POP
}

/*
equation index: 2
type: SIMPLE_ASSIGN
speed = $START.speed
*/
void TrainSimulation_Car_eqFunction_2(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2};
  data->localData[0]->realVars[2] /* speed STATE(1,acceleration) */ = data->modelData->realVarsData[2].attribute /* speed STATE(1,acceleration) */.start;
  TRACE_POP
}
extern void TrainSimulation_Car_eqFunction_16(DATA *data, threadData_t *threadData);

extern void TrainSimulation_Car_eqFunction_19(DATA *data, threadData_t *threadData);

extern void TrainSimulation_Car_eqFunction_21(DATA *data, threadData_t *threadData);

extern void TrainSimulation_Car_eqFunction_23(DATA *data, threadData_t *threadData);

extern void TrainSimulation_Car_eqFunction_25(DATA *data, threadData_t *threadData);

extern void TrainSimulation_Car_eqFunction_26(DATA *data, threadData_t *threadData);

extern void TrainSimulation_Car_eqFunction_22(DATA *data, threadData_t *threadData);

extern void TrainSimulation_Car_eqFunction_17(DATA *data, threadData_t *threadData);

extern void TrainSimulation_Car_eqFunction_27(DATA *data, threadData_t *threadData);

extern void TrainSimulation_Car_eqFunction_24(DATA *data, threadData_t *threadData);

extern void TrainSimulation_Car_eqFunction_18(DATA *data, threadData_t *threadData);


/*
equation index: 14
type: SIMPLE_ASSIGN
acceleration = $START.acceleration
*/
void TrainSimulation_Car_eqFunction_14(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14};
  data->localData[0]->realVars[0] /* acceleration STATE(1) */ = data->modelData->realVarsData[0].attribute /* acceleration STATE(1) */.start;
  TRACE_POP
}
extern void TrainSimulation_Car_eqFunction_20(DATA *data, threadData_t *threadData);

OMC_DISABLE_OPT
void TrainSimulation_Car_functionInitialEquations_0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  TrainSimulation_Car_eqFunction_1(data, threadData);
  TrainSimulation_Car_eqFunction_2(data, threadData);
  TrainSimulation_Car_eqFunction_16(data, threadData);
  TrainSimulation_Car_eqFunction_19(data, threadData);
  TrainSimulation_Car_eqFunction_21(data, threadData);
  TrainSimulation_Car_eqFunction_23(data, threadData);
  TrainSimulation_Car_eqFunction_25(data, threadData);
  TrainSimulation_Car_eqFunction_26(data, threadData);
  TrainSimulation_Car_eqFunction_22(data, threadData);
  TrainSimulation_Car_eqFunction_17(data, threadData);
  TrainSimulation_Car_eqFunction_27(data, threadData);
  TrainSimulation_Car_eqFunction_24(data, threadData);
  TrainSimulation_Car_eqFunction_18(data, threadData);
  TrainSimulation_Car_eqFunction_14(data, threadData);
  TrainSimulation_Car_eqFunction_20(data, threadData);
  TRACE_POP
}


int TrainSimulation_Car_functionInitialEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->discreteCall = 1;
  TrainSimulation_Car_functionInitialEquations_0(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}


int TrainSimulation_Car_functionInitialEquations_lambda0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->discreteCall = 1;
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}
int TrainSimulation_Car_functionRemovedInitialEquations(DATA *data, threadData_t *threadData)
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

