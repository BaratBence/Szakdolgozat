/* Algebraic */
#include "TrainSimulation_Curve_model.h"

#ifdef __cplusplus
extern "C" {
#endif


/* forwarded equations */
extern void TrainSimulation_Curve_eqFunction_50(DATA* data, threadData_t *threadData);
extern void TrainSimulation_Curve_eqFunction_49(DATA* data, threadData_t *threadData);
extern void TrainSimulation_Curve_eqFunction_48(DATA* data, threadData_t *threadData);
extern void TrainSimulation_Curve_eqFunction_47(DATA* data, threadData_t *threadData);
extern void TrainSimulation_Curve_eqFunction_46(DATA* data, threadData_t *threadData);
extern void TrainSimulation_Curve_eqFunction_45(DATA* data, threadData_t *threadData);
extern void TrainSimulation_Curve_eqFunction_44(DATA* data, threadData_t *threadData);
extern void TrainSimulation_Curve_eqFunction_43(DATA* data, threadData_t *threadData);
extern void TrainSimulation_Curve_eqFunction_42(DATA* data, threadData_t *threadData);
extern void TrainSimulation_Curve_eqFunction_41(DATA* data, threadData_t *threadData);
extern void TrainSimulation_Curve_eqFunction_31(DATA* data, threadData_t *threadData);
extern void TrainSimulation_Curve_eqFunction_32(DATA* data, threadData_t *threadData);
extern void TrainSimulation_Curve_eqFunction_33(DATA* data, threadData_t *threadData);
extern void TrainSimulation_Curve_eqFunction_34(DATA* data, threadData_t *threadData);
extern void TrainSimulation_Curve_eqFunction_35(DATA* data, threadData_t *threadData);
extern void TrainSimulation_Curve_eqFunction_36(DATA* data, threadData_t *threadData);
extern void TrainSimulation_Curve_eqFunction_37(DATA* data, threadData_t *threadData);
extern void TrainSimulation_Curve_eqFunction_38(DATA* data, threadData_t *threadData);
extern void TrainSimulation_Curve_eqFunction_39(DATA* data, threadData_t *threadData);
extern void TrainSimulation_Curve_eqFunction_40(DATA* data, threadData_t *threadData);

static void functionAlg_system0(DATA *data, threadData_t *threadData)
{
    TrainSimulation_Curve_eqFunction_50(data, threadData);

    TrainSimulation_Curve_eqFunction_49(data, threadData);

    TrainSimulation_Curve_eqFunction_48(data, threadData);

    TrainSimulation_Curve_eqFunction_47(data, threadData);

    TrainSimulation_Curve_eqFunction_46(data, threadData);

    TrainSimulation_Curve_eqFunction_45(data, threadData);

    TrainSimulation_Curve_eqFunction_44(data, threadData);

    TrainSimulation_Curve_eqFunction_43(data, threadData);

    TrainSimulation_Curve_eqFunction_42(data, threadData);

    TrainSimulation_Curve_eqFunction_41(data, threadData);

    TrainSimulation_Curve_eqFunction_31(data, threadData);

    TrainSimulation_Curve_eqFunction_32(data, threadData);

    TrainSimulation_Curve_eqFunction_33(data, threadData);

    TrainSimulation_Curve_eqFunction_34(data, threadData);

    TrainSimulation_Curve_eqFunction_35(data, threadData);

    TrainSimulation_Curve_eqFunction_36(data, threadData);

    TrainSimulation_Curve_eqFunction_37(data, threadData);

    TrainSimulation_Curve_eqFunction_38(data, threadData);

    TrainSimulation_Curve_eqFunction_39(data, threadData);

    TrainSimulation_Curve_eqFunction_40(data, threadData);
}
/* for continuous time variables */
int TrainSimulation_Curve_functionAlgebraics(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_ALGEBRAICS);
#endif
  data->simulationInfo->callStatistics.functionAlgebraics++;

  functionAlg_system0(data, threadData);

  TrainSimulation_Curve_function_savePreSynchronous(data, threadData);
  
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_ALGEBRAICS);
#endif

  TRACE_POP
  return 0;
}

#ifdef __cplusplus
}
#endif
