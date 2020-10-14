#ifdef OMC_BASE_FILE
  #define OMC_FILE OMC_BASE_FILE
#else
  #define OMC_FILE "C:/Users/Bence/AppData/Local/Temp/OpenModelica/OMEdit/TrainSimulation.Curve/TrainSimulation.Curve_09alg.c"
#endif
/* Algebraic */
#include "TrainSimulation.Curve_model.h"

#ifdef __cplusplus
extern "C" {
#endif


/* forwarded equations */
extern void TrainSimulation_Curve_eqFunction_4(DATA* data, threadData_t *threadData);
extern void TrainSimulation_Curve_eqFunction_3(DATA* data, threadData_t *threadData);

static void functionAlg_system0(DATA *data, threadData_t *threadData)
{
    TrainSimulation_Curve_eqFunction_4(data, threadData);

    TrainSimulation_Curve_eqFunction_3(data, threadData);
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
