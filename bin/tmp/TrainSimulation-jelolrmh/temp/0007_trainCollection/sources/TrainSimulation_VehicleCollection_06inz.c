/* Initialization */
#include "TrainSimulation_VehicleCollection_model.h"
#include "TrainSimulation_VehicleCollection_11mix.h"
#include "TrainSimulation_VehicleCollection_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

void TrainSimulation_VehicleCollection_functionInitialEquations_0(DATA *data, threadData_t *threadData);
extern void TrainSimulation_VehicleCollection_eqFunction_40(DATA *data, threadData_t *threadData);

extern void TrainSimulation_VehicleCollection_eqFunction_39(DATA *data, threadData_t *threadData);

extern void TrainSimulation_VehicleCollection_eqFunction_38(DATA *data, threadData_t *threadData);

extern void TrainSimulation_VehicleCollection_eqFunction_37(DATA *data, threadData_t *threadData);

extern void TrainSimulation_VehicleCollection_eqFunction_36(DATA *data, threadData_t *threadData);

extern void TrainSimulation_VehicleCollection_eqFunction_35(DATA *data, threadData_t *threadData);

extern void TrainSimulation_VehicleCollection_eqFunction_34(DATA *data, threadData_t *threadData);

extern void TrainSimulation_VehicleCollection_eqFunction_33(DATA *data, threadData_t *threadData);

extern void TrainSimulation_VehicleCollection_eqFunction_32(DATA *data, threadData_t *threadData);

extern void TrainSimulation_VehicleCollection_eqFunction_31(DATA *data, threadData_t *threadData);

extern void TrainSimulation_VehicleCollection_eqFunction_30(DATA *data, threadData_t *threadData);

extern void TrainSimulation_VehicleCollection_eqFunction_29(DATA *data, threadData_t *threadData);

extern void TrainSimulation_VehicleCollection_eqFunction_28(DATA *data, threadData_t *threadData);

extern void TrainSimulation_VehicleCollection_eqFunction_27(DATA *data, threadData_t *threadData);

extern void TrainSimulation_VehicleCollection_eqFunction_26(DATA *data, threadData_t *threadData);

extern void TrainSimulation_VehicleCollection_eqFunction_25(DATA *data, threadData_t *threadData);

extern void TrainSimulation_VehicleCollection_eqFunction_24(DATA *data, threadData_t *threadData);

extern void TrainSimulation_VehicleCollection_eqFunction_23(DATA *data, threadData_t *threadData);

extern void TrainSimulation_VehicleCollection_eqFunction_22(DATA *data, threadData_t *threadData);

extern void TrainSimulation_VehicleCollection_eqFunction_21(DATA *data, threadData_t *threadData);

OMC_DISABLE_OPT
void TrainSimulation_VehicleCollection_functionInitialEquations_0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  TrainSimulation_VehicleCollection_eqFunction_40(data, threadData);
  TrainSimulation_VehicleCollection_eqFunction_39(data, threadData);
  TrainSimulation_VehicleCollection_eqFunction_38(data, threadData);
  TrainSimulation_VehicleCollection_eqFunction_37(data, threadData);
  TrainSimulation_VehicleCollection_eqFunction_36(data, threadData);
  TrainSimulation_VehicleCollection_eqFunction_35(data, threadData);
  TrainSimulation_VehicleCollection_eqFunction_34(data, threadData);
  TrainSimulation_VehicleCollection_eqFunction_33(data, threadData);
  TrainSimulation_VehicleCollection_eqFunction_32(data, threadData);
  TrainSimulation_VehicleCollection_eqFunction_31(data, threadData);
  TrainSimulation_VehicleCollection_eqFunction_30(data, threadData);
  TrainSimulation_VehicleCollection_eqFunction_29(data, threadData);
  TrainSimulation_VehicleCollection_eqFunction_28(data, threadData);
  TrainSimulation_VehicleCollection_eqFunction_27(data, threadData);
  TrainSimulation_VehicleCollection_eqFunction_26(data, threadData);
  TrainSimulation_VehicleCollection_eqFunction_25(data, threadData);
  TrainSimulation_VehicleCollection_eqFunction_24(data, threadData);
  TrainSimulation_VehicleCollection_eqFunction_23(data, threadData);
  TrainSimulation_VehicleCollection_eqFunction_22(data, threadData);
  TrainSimulation_VehicleCollection_eqFunction_21(data, threadData);
  TRACE_POP
}


int TrainSimulation_VehicleCollection_functionInitialEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->discreteCall = 1;
  TrainSimulation_VehicleCollection_functionInitialEquations_0(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}


int TrainSimulation_VehicleCollection_functionInitialEquations_lambda0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->discreteCall = 1;
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}
int TrainSimulation_VehicleCollection_functionRemovedInitialEquations(DATA *data, threadData_t *threadData)
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

