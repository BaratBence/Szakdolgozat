/* Initialization */
#include "TrainSimulation_UpHill_model.h"
#include "TrainSimulation_UpHill_11mix.h"
#include "TrainSimulation_UpHill_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

void TrainSimulation_UpHill_functionInitialEquations_0(DATA *data, threadData_t *threadData);

/*
equation index: 1
type: SIMPLE_ASSIGN
$outputAlias_HillSpeedScale = cos(angle * 0.0174532925)
*/
void TrainSimulation_UpHill_eqFunction_1(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1};
  data->localData[0]->realVars[0] /* $outputAlias_HillSpeedScale variable */ = cos((data->simulationInfo->realParameter[2] /* angle PARAM */) * (0.0174532925));
  TRACE_POP
}
extern void TrainSimulation_UpHill_eqFunction_13(DATA *data, threadData_t *threadData);

extern void TrainSimulation_UpHill_eqFunction_23(DATA *data, threadData_t *threadData);

extern void TrainSimulation_UpHill_eqFunction_22(DATA *data, threadData_t *threadData);

extern void TrainSimulation_UpHill_eqFunction_21(DATA *data, threadData_t *threadData);

extern void TrainSimulation_UpHill_eqFunction_20(DATA *data, threadData_t *threadData);

extern void TrainSimulation_UpHill_eqFunction_19(DATA *data, threadData_t *threadData);

extern void TrainSimulation_UpHill_eqFunction_18(DATA *data, threadData_t *threadData);

extern void TrainSimulation_UpHill_eqFunction_17(DATA *data, threadData_t *threadData);

extern void TrainSimulation_UpHill_eqFunction_16(DATA *data, threadData_t *threadData);

extern void TrainSimulation_UpHill_eqFunction_15(DATA *data, threadData_t *threadData);

extern void TrainSimulation_UpHill_eqFunction_14(DATA *data, threadData_t *threadData);

OMC_DISABLE_OPT
void TrainSimulation_UpHill_functionInitialEquations_0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  TrainSimulation_UpHill_eqFunction_1(data, threadData);
  TrainSimulation_UpHill_eqFunction_13(data, threadData);
  TrainSimulation_UpHill_eqFunction_23(data, threadData);
  TrainSimulation_UpHill_eqFunction_22(data, threadData);
  TrainSimulation_UpHill_eqFunction_21(data, threadData);
  TrainSimulation_UpHill_eqFunction_20(data, threadData);
  TrainSimulation_UpHill_eqFunction_19(data, threadData);
  TrainSimulation_UpHill_eqFunction_18(data, threadData);
  TrainSimulation_UpHill_eqFunction_17(data, threadData);
  TrainSimulation_UpHill_eqFunction_16(data, threadData);
  TrainSimulation_UpHill_eqFunction_15(data, threadData);
  TrainSimulation_UpHill_eqFunction_14(data, threadData);
  TRACE_POP
}


int TrainSimulation_UpHill_functionInitialEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->discreteCall = 1;
  TrainSimulation_UpHill_functionInitialEquations_0(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}


int TrainSimulation_UpHill_functionInitialEquations_lambda0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->discreteCall = 1;
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}
int TrainSimulation_UpHill_functionRemovedInitialEquations(DATA *data, threadData_t *threadData)
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

