/* Algebraic */
#include "TrainSimulation_UpHill_model.h"

#ifdef __cplusplus
extern "C" {
#endif


/* forwarded equations */
extern void TrainSimulation_UpHill_eqFunction_23(DATA* data, threadData_t *threadData);
extern void TrainSimulation_UpHill_eqFunction_22(DATA* data, threadData_t *threadData);
extern void TrainSimulation_UpHill_eqFunction_21(DATA* data, threadData_t *threadData);
extern void TrainSimulation_UpHill_eqFunction_20(DATA* data, threadData_t *threadData);
extern void TrainSimulation_UpHill_eqFunction_19(DATA* data, threadData_t *threadData);
extern void TrainSimulation_UpHill_eqFunction_18(DATA* data, threadData_t *threadData);
extern void TrainSimulation_UpHill_eqFunction_17(DATA* data, threadData_t *threadData);
extern void TrainSimulation_UpHill_eqFunction_16(DATA* data, threadData_t *threadData);
extern void TrainSimulation_UpHill_eqFunction_15(DATA* data, threadData_t *threadData);
extern void TrainSimulation_UpHill_eqFunction_14(DATA* data, threadData_t *threadData);
extern void TrainSimulation_UpHill_eqFunction_13(DATA* data, threadData_t *threadData);

static void functionAlg_system0(DATA *data, threadData_t *threadData)
{
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

    TrainSimulation_UpHill_eqFunction_13(data, threadData);
}
/* for continuous time variables */
int TrainSimulation_UpHill_functionAlgebraics(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_ALGEBRAICS);
#endif
  data->simulationInfo->callStatistics.functionAlgebraics++;

  functionAlg_system0(data, threadData);

  TrainSimulation_UpHill_function_savePreSynchronous(data, threadData);
  
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_ALGEBRAICS);
#endif

  TRACE_POP
  return 0;
}

#ifdef __cplusplus
}
#endif
