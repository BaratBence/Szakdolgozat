/* Algebraic */
#include "TrainSimulation_TrainStation_model.h"

#ifdef __cplusplus
extern "C" {
#endif


/* forwarded equations */
extern void TrainSimulation_TrainStation_eqFunction_36(DATA* data, threadData_t *threadData);
extern void TrainSimulation_TrainStation_eqFunction_37(DATA* data, threadData_t *threadData);
extern void TrainSimulation_TrainStation_eqFunction_38(DATA* data, threadData_t *threadData);
extern void TrainSimulation_TrainStation_eqFunction_39(DATA* data, threadData_t *threadData);
extern void TrainSimulation_TrainStation_eqFunction_41(DATA* data, threadData_t *threadData);
extern void TrainSimulation_TrainStation_eqFunction_42(DATA* data, threadData_t *threadData);
extern void TrainSimulation_TrainStation_eqFunction_43(DATA* data, threadData_t *threadData);
extern void TrainSimulation_TrainStation_eqFunction_44(DATA* data, threadData_t *threadData);
extern void TrainSimulation_TrainStation_eqFunction_45(DATA* data, threadData_t *threadData);
extern void TrainSimulation_TrainStation_eqFunction_46(DATA* data, threadData_t *threadData);
extern void TrainSimulation_TrainStation_eqFunction_47(DATA* data, threadData_t *threadData);
extern void TrainSimulation_TrainStation_eqFunction_48(DATA* data, threadData_t *threadData);
extern void TrainSimulation_TrainStation_eqFunction_49(DATA* data, threadData_t *threadData);
extern void TrainSimulation_TrainStation_eqFunction_50(DATA* data, threadData_t *threadData);
extern void TrainSimulation_TrainStation_eqFunction_51(DATA* data, threadData_t *threadData);
extern void TrainSimulation_TrainStation_eqFunction_52(DATA* data, threadData_t *threadData);
extern void TrainSimulation_TrainStation_eqFunction_53(DATA* data, threadData_t *threadData);
extern void TrainSimulation_TrainStation_eqFunction_55(DATA* data, threadData_t *threadData);

static void functionAlg_system0(DATA *data, threadData_t *threadData)
{
    TrainSimulation_TrainStation_eqFunction_36(data, threadData);

    TrainSimulation_TrainStation_eqFunction_37(data, threadData);

    TrainSimulation_TrainStation_eqFunction_38(data, threadData);

    TrainSimulation_TrainStation_eqFunction_39(data, threadData);

    TrainSimulation_TrainStation_eqFunction_41(data, threadData);

    TrainSimulation_TrainStation_eqFunction_42(data, threadData);

    TrainSimulation_TrainStation_eqFunction_43(data, threadData);

    TrainSimulation_TrainStation_eqFunction_44(data, threadData);

    TrainSimulation_TrainStation_eqFunction_45(data, threadData);

    TrainSimulation_TrainStation_eqFunction_46(data, threadData);

    TrainSimulation_TrainStation_eqFunction_47(data, threadData);

    TrainSimulation_TrainStation_eqFunction_48(data, threadData);

    TrainSimulation_TrainStation_eqFunction_49(data, threadData);

    TrainSimulation_TrainStation_eqFunction_50(data, threadData);

    TrainSimulation_TrainStation_eqFunction_51(data, threadData);

    TrainSimulation_TrainStation_eqFunction_52(data, threadData);

    TrainSimulation_TrainStation_eqFunction_53(data, threadData);

    TrainSimulation_TrainStation_eqFunction_55(data, threadData);
}
/* for continuous time variables */
int TrainSimulation_TrainStation_functionAlgebraics(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_ALGEBRAICS);
#endif
  data->simulationInfo->callStatistics.functionAlgebraics++;

  functionAlg_system0(data, threadData);

  TrainSimulation_TrainStation_function_savePreSynchronous(data, threadData);
  
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_ALGEBRAICS);
#endif

  TRACE_POP
  return 0;
}

#ifdef __cplusplus
}
#endif
