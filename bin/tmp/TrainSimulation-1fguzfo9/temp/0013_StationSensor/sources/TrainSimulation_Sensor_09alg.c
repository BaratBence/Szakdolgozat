/* Algebraic */
#include "TrainSimulation_Sensor_model.h"

#ifdef __cplusplus
extern "C" {
#endif


/* forwarded equations */
extern void TrainSimulation_Sensor_eqFunction_65(DATA* data, threadData_t *threadData);
extern void TrainSimulation_Sensor_eqFunction_38(DATA* data, threadData_t *threadData);
extern void TrainSimulation_Sensor_eqFunction_39(DATA* data, threadData_t *threadData);
extern void TrainSimulation_Sensor_eqFunction_40(DATA* data, threadData_t *threadData);
extern void TrainSimulation_Sensor_eqFunction_41(DATA* data, threadData_t *threadData);
extern void TrainSimulation_Sensor_eqFunction_42(DATA* data, threadData_t *threadData);
extern void TrainSimulation_Sensor_eqFunction_43(DATA* data, threadData_t *threadData);
extern void TrainSimulation_Sensor_eqFunction_44(DATA* data, threadData_t *threadData);
extern void TrainSimulation_Sensor_eqFunction_45(DATA* data, threadData_t *threadData);
extern void TrainSimulation_Sensor_eqFunction_46(DATA* data, threadData_t *threadData);
extern void TrainSimulation_Sensor_eqFunction_47(DATA* data, threadData_t *threadData);
extern void TrainSimulation_Sensor_eqFunction_48(DATA* data, threadData_t *threadData);
extern void TrainSimulation_Sensor_eqFunction_49(DATA* data, threadData_t *threadData);
extern void TrainSimulation_Sensor_eqFunction_50(DATA* data, threadData_t *threadData);
extern void TrainSimulation_Sensor_eqFunction_51(DATA* data, threadData_t *threadData);
extern void TrainSimulation_Sensor_eqFunction_52(DATA* data, threadData_t *threadData);
extern void TrainSimulation_Sensor_eqFunction_53(DATA* data, threadData_t *threadData);
extern void TrainSimulation_Sensor_eqFunction_54(DATA* data, threadData_t *threadData);
extern void TrainSimulation_Sensor_eqFunction_55(DATA* data, threadData_t *threadData);
extern void TrainSimulation_Sensor_eqFunction_56(DATA* data, threadData_t *threadData);
extern void TrainSimulation_Sensor_eqFunction_57(DATA* data, threadData_t *threadData);
extern void TrainSimulation_Sensor_eqFunction_58(DATA* data, threadData_t *threadData);
extern void TrainSimulation_Sensor_eqFunction_59(DATA* data, threadData_t *threadData);
extern void TrainSimulation_Sensor_eqFunction_60(DATA* data, threadData_t *threadData);
extern void TrainSimulation_Sensor_eqFunction_61(DATA* data, threadData_t *threadData);
extern void TrainSimulation_Sensor_eqFunction_64(DATA* data, threadData_t *threadData);
extern void TrainSimulation_Sensor_eqFunction_37(DATA* data, threadData_t *threadData);
extern void TrainSimulation_Sensor_eqFunction_36(DATA* data, threadData_t *threadData);

static void functionAlg_system0(DATA *data, threadData_t *threadData)
{
    TrainSimulation_Sensor_eqFunction_65(data, threadData);

    TrainSimulation_Sensor_eqFunction_38(data, threadData);

    TrainSimulation_Sensor_eqFunction_39(data, threadData);

    TrainSimulation_Sensor_eqFunction_40(data, threadData);

    TrainSimulation_Sensor_eqFunction_41(data, threadData);

    TrainSimulation_Sensor_eqFunction_42(data, threadData);

    TrainSimulation_Sensor_eqFunction_43(data, threadData);

    TrainSimulation_Sensor_eqFunction_44(data, threadData);

    TrainSimulation_Sensor_eqFunction_45(data, threadData);

    TrainSimulation_Sensor_eqFunction_46(data, threadData);

    TrainSimulation_Sensor_eqFunction_47(data, threadData);

    TrainSimulation_Sensor_eqFunction_48(data, threadData);

    TrainSimulation_Sensor_eqFunction_49(data, threadData);

    TrainSimulation_Sensor_eqFunction_50(data, threadData);

    TrainSimulation_Sensor_eqFunction_51(data, threadData);

    TrainSimulation_Sensor_eqFunction_52(data, threadData);

    TrainSimulation_Sensor_eqFunction_53(data, threadData);

    TrainSimulation_Sensor_eqFunction_54(data, threadData);

    TrainSimulation_Sensor_eqFunction_55(data, threadData);

    TrainSimulation_Sensor_eqFunction_56(data, threadData);

    TrainSimulation_Sensor_eqFunction_57(data, threadData);

    TrainSimulation_Sensor_eqFunction_58(data, threadData);

    TrainSimulation_Sensor_eqFunction_59(data, threadData);

    TrainSimulation_Sensor_eqFunction_60(data, threadData);

    TrainSimulation_Sensor_eqFunction_61(data, threadData);

    TrainSimulation_Sensor_eqFunction_64(data, threadData);

    TrainSimulation_Sensor_eqFunction_37(data, threadData);

    TrainSimulation_Sensor_eqFunction_36(data, threadData);
}
/* for continuous time variables */
int TrainSimulation_Sensor_functionAlgebraics(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_ALGEBRAICS);
#endif
  data->simulationInfo->callStatistics.functionAlgebraics++;

  functionAlg_system0(data, threadData);

  TrainSimulation_Sensor_function_savePreSynchronous(data, threadData);
  
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_ALGEBRAICS);
#endif

  TRACE_POP
  return 0;
}

#ifdef __cplusplus
}
#endif
