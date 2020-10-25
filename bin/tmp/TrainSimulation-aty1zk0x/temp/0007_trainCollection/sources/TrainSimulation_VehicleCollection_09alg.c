/* Algebraic */
#include "TrainSimulation_VehicleCollection_model.h"

#ifdef __cplusplus
extern "C" {
#endif


/* forwarded equations */
extern void TrainSimulation_VehicleCollection_eqFunction_40(DATA* data, threadData_t *threadData);
extern void TrainSimulation_VehicleCollection_eqFunction_39(DATA* data, threadData_t *threadData);
extern void TrainSimulation_VehicleCollection_eqFunction_38(DATA* data, threadData_t *threadData);
extern void TrainSimulation_VehicleCollection_eqFunction_37(DATA* data, threadData_t *threadData);
extern void TrainSimulation_VehicleCollection_eqFunction_36(DATA* data, threadData_t *threadData);
extern void TrainSimulation_VehicleCollection_eqFunction_35(DATA* data, threadData_t *threadData);
extern void TrainSimulation_VehicleCollection_eqFunction_34(DATA* data, threadData_t *threadData);
extern void TrainSimulation_VehicleCollection_eqFunction_33(DATA* data, threadData_t *threadData);
extern void TrainSimulation_VehicleCollection_eqFunction_32(DATA* data, threadData_t *threadData);
extern void TrainSimulation_VehicleCollection_eqFunction_31(DATA* data, threadData_t *threadData);
extern void TrainSimulation_VehicleCollection_eqFunction_30(DATA* data, threadData_t *threadData);
extern void TrainSimulation_VehicleCollection_eqFunction_29(DATA* data, threadData_t *threadData);
extern void TrainSimulation_VehicleCollection_eqFunction_28(DATA* data, threadData_t *threadData);
extern void TrainSimulation_VehicleCollection_eqFunction_27(DATA* data, threadData_t *threadData);
extern void TrainSimulation_VehicleCollection_eqFunction_26(DATA* data, threadData_t *threadData);
extern void TrainSimulation_VehicleCollection_eqFunction_25(DATA* data, threadData_t *threadData);
extern void TrainSimulation_VehicleCollection_eqFunction_24(DATA* data, threadData_t *threadData);
extern void TrainSimulation_VehicleCollection_eqFunction_23(DATA* data, threadData_t *threadData);
extern void TrainSimulation_VehicleCollection_eqFunction_22(DATA* data, threadData_t *threadData);
extern void TrainSimulation_VehicleCollection_eqFunction_21(DATA* data, threadData_t *threadData);

static void functionAlg_system0(DATA *data, threadData_t *threadData)
{
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
}
/* for continuous time variables */
int TrainSimulation_VehicleCollection_functionAlgebraics(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_ALGEBRAICS);
#endif
  data->simulationInfo->callStatistics.functionAlgebraics++;

  functionAlg_system0(data, threadData);

  TrainSimulation_VehicleCollection_function_savePreSynchronous(data, threadData);
  
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_ALGEBRAICS);
#endif

  TRACE_POP
  return 0;
}

#ifdef __cplusplus
}
#endif
