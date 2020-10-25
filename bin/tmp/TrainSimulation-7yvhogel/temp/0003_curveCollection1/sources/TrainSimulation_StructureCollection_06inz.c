/* Initialization */
#include "TrainSimulation_StructureCollection_model.h"
#include "TrainSimulation_StructureCollection_11mix.h"
#include "TrainSimulation_StructureCollection_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

void TrainSimulation_StructureCollection_functionInitialEquations_0(DATA *data, threadData_t *threadData);
extern void TrainSimulation_StructureCollection_eqFunction_24(DATA *data, threadData_t *threadData);

extern void TrainSimulation_StructureCollection_eqFunction_26(DATA *data, threadData_t *threadData);

extern void TrainSimulation_StructureCollection_eqFunction_14(DATA *data, threadData_t *threadData);

extern void TrainSimulation_StructureCollection_eqFunction_15(DATA *data, threadData_t *threadData);

extern void TrainSimulation_StructureCollection_eqFunction_16(DATA *data, threadData_t *threadData);

extern void TrainSimulation_StructureCollection_eqFunction_17(DATA *data, threadData_t *threadData);

extern void TrainSimulation_StructureCollection_eqFunction_18(DATA *data, threadData_t *threadData);

extern void TrainSimulation_StructureCollection_eqFunction_19(DATA *data, threadData_t *threadData);

extern void TrainSimulation_StructureCollection_eqFunction_20(DATA *data, threadData_t *threadData);

extern void TrainSimulation_StructureCollection_eqFunction_21(DATA *data, threadData_t *threadData);

extern void TrainSimulation_StructureCollection_eqFunction_22(DATA *data, threadData_t *threadData);

extern void TrainSimulation_StructureCollection_eqFunction_23(DATA *data, threadData_t *threadData);

extern void TrainSimulation_StructureCollection_eqFunction_25(DATA *data, threadData_t *threadData);

OMC_DISABLE_OPT
void TrainSimulation_StructureCollection_functionInitialEquations_0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  TrainSimulation_StructureCollection_eqFunction_24(data, threadData);
  TrainSimulation_StructureCollection_eqFunction_26(data, threadData);
  TrainSimulation_StructureCollection_eqFunction_14(data, threadData);
  TrainSimulation_StructureCollection_eqFunction_15(data, threadData);
  TrainSimulation_StructureCollection_eqFunction_16(data, threadData);
  TrainSimulation_StructureCollection_eqFunction_17(data, threadData);
  TrainSimulation_StructureCollection_eqFunction_18(data, threadData);
  TrainSimulation_StructureCollection_eqFunction_19(data, threadData);
  TrainSimulation_StructureCollection_eqFunction_20(data, threadData);
  TrainSimulation_StructureCollection_eqFunction_21(data, threadData);
  TrainSimulation_StructureCollection_eqFunction_22(data, threadData);
  TrainSimulation_StructureCollection_eqFunction_23(data, threadData);
  TrainSimulation_StructureCollection_eqFunction_25(data, threadData);
  TRACE_POP
}


int TrainSimulation_StructureCollection_functionInitialEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->discreteCall = 1;
  TrainSimulation_StructureCollection_functionInitialEquations_0(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}


int TrainSimulation_StructureCollection_functionInitialEquations_lambda0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->discreteCall = 1;
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}
int TrainSimulation_StructureCollection_functionRemovedInitialEquations(DATA *data, threadData_t *threadData)
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

