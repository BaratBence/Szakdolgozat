/* Events: Sample, Zero Crossings, Relations, Discrete Changes */
#include "TrainSimulation_TrainStation_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* Initializes the raw time events of the simulation using the now
   calcualted parameters. */
void TrainSimulation_TrainStation_function_initSample(DATA *data, threadData_t *threadData)
{
  long i=0;
}

const char *TrainSimulation_TrainStation_zeroCrossingDescription(int i, int **out_EquationIndexes)
{
  static const char *res[] = {"integer(stateGraphRoot.subgraphStatePort.activeSteps, 0)",
  "Safe_Passage <= 0.9",
  "Safe_Passage >= 0.9"};
  static const int occurEqs0[] = {1,45};
  static const int occurEqs1[] = {1,37};
  static const int occurEqs2[] = {1,36};
  static const int *occurEqs[] = {occurEqs0,occurEqs1,occurEqs2};
  *out_EquationIndexes = (int*) occurEqs[i];
  return res[i];
}

/* forwarded equations */
extern void TrainSimulation_TrainStation_eqFunction_38(DATA* data, threadData_t *threadData);
extern void TrainSimulation_TrainStation_eqFunction_39(DATA* data, threadData_t *threadData);
extern void TrainSimulation_TrainStation_eqFunction_42(DATA* data, threadData_t *threadData);
extern void TrainSimulation_TrainStation_eqFunction_43(DATA* data, threadData_t *threadData);
extern void TrainSimulation_TrainStation_eqFunction_44(DATA* data, threadData_t *threadData);

int TrainSimulation_TrainStation_function_ZeroCrossingsEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->callStatistics.functionZeroCrossingsEquations++;

  TrainSimulation_TrainStation_eqFunction_38(data, threadData);

  TrainSimulation_TrainStation_eqFunction_39(data, threadData);

  TrainSimulation_TrainStation_eqFunction_42(data, threadData);

  TrainSimulation_TrainStation_eqFunction_43(data, threadData);

  TrainSimulation_TrainStation_eqFunction_44(data, threadData);
  
  TRACE_POP
  return 0;
}

int TrainSimulation_TrainStation_function_ZeroCrossings(DATA *data, threadData_t *threadData, double *gout)
{
  TRACE_PUSH
  modelica_boolean tmp0;
  modelica_boolean tmp1;

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_ZC);
#endif
  data->simulationInfo->callStatistics.functionZeroCrossings++;

  gout[0] = (floor(data->localData[0]->realVars[9] /* stateGraphRoot.subgraphStatePort.activeSteps variable */) != floor(data->simulationInfo->mathEventsValuePre[((modelica_integer) 0)])) ? 1 : -1;
  tmp0 = LessEqZC(data->localData[0]->realVars[6] /* Safe_Passage variable */, 0.9, data->simulationInfo->storedRelations[0]);
  gout[1] = (tmp0) ? 1 : -1;
  tmp1 = GreaterEqZC(data->localData[0]->realVars[6] /* Safe_Passage variable */, 0.9, data->simulationInfo->storedRelations[1]);
  gout[2] = (tmp1) ? 1 : -1;

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_ZC);
#endif

  TRACE_POP
  return 0;
}

const char *TrainSimulation_TrainStation_relationDescription(int i)
{
  const char *res[] = {"Safe_Passage <= 0.9",
  "Safe_Passage >= 0.9"};
  return res[i];
}

int TrainSimulation_TrainStation_function_updateRelations(DATA *data, threadData_t *threadData, int evalforZeroCross)
{
  TRACE_PUSH
  modelica_boolean tmp2;
  modelica_boolean tmp3;
  
  if(evalforZeroCross) {
    tmp2 = LessEqZC(data->localData[0]->realVars[6] /* Safe_Passage variable */, 0.9, data->simulationInfo->storedRelations[0]);
    data->simulationInfo->relations[0] = tmp2;
    tmp3 = GreaterEqZC(data->localData[0]->realVars[6] /* Safe_Passage variable */, 0.9, data->simulationInfo->storedRelations[1]);
    data->simulationInfo->relations[1] = tmp3;
  } else {
    data->simulationInfo->relations[0] = (data->localData[0]->realVars[6] /* Safe_Passage variable */ <= 0.9);
    data->simulationInfo->relations[1] = (data->localData[0]->realVars[6] /* Safe_Passage variable */ >= 0.9);
  }
  
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

