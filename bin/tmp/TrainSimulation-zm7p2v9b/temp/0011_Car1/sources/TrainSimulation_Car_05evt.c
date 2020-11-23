/* Events: Sample, Zero Crossings, Relations, Discrete Changes */
#include "TrainSimulation_Car_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* Initializes the raw time events of the simulation using the now
   calcualted parameters. */
void TrainSimulation_Car_function_initSample(DATA *data, threadData_t *threadData)
{
  long i=0;
}

const char *TrainSimulation_Car_zeroCrossingDescription(int i, int **out_EquationIndexes)
{
  static const char *res[] = {"isClumsy >= 1.0 and Distance - length <= Target and Distance >= Target and speed > 0.0",
  "speed <= 0.0",
  "Distance < Target and state == TrainSimulation.TrainLightColor.on and Gate_Angle >= 90.0 and speed < maxSpeed",
  "Distance + BreakingDistance + 5.0 >= Target and Distance + BreakingDistance - 5.0 <= Target and speed > 0.0 and state == TrainSimulation.TrainLightColor.red",
  "speed >= maxSpeed"};
  static const int occurEqs0[] = {1,16};
  static const int occurEqs1[] = {1,15};
  static const int occurEqs2[] = {1,22};
  static const int occurEqs3[] = {1,23};
  static const int occurEqs4[] = {1,14};
  static const int *occurEqs[] = {occurEqs0,occurEqs1,occurEqs2,occurEqs3,occurEqs4};
  *out_EquationIndexes = (int*) occurEqs[i];
  return res[i];
}

/* forwarded equations */
extern void TrainSimulation_Car_eqFunction_17(DATA* data, threadData_t *threadData);
extern void TrainSimulation_Car_eqFunction_18(DATA* data, threadData_t *threadData);
extern void TrainSimulation_Car_eqFunction_19(DATA* data, threadData_t *threadData);
extern void TrainSimulation_Car_eqFunction_20(DATA* data, threadData_t *threadData);
extern void TrainSimulation_Car_eqFunction_21(DATA* data, threadData_t *threadData);

int TrainSimulation_Car_function_ZeroCrossingsEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->callStatistics.functionZeroCrossingsEquations++;

  TrainSimulation_Car_eqFunction_17(data, threadData);

  TrainSimulation_Car_eqFunction_18(data, threadData);

  TrainSimulation_Car_eqFunction_19(data, threadData);

  TrainSimulation_Car_eqFunction_20(data, threadData);

  TrainSimulation_Car_eqFunction_21(data, threadData);
  
  TRACE_POP
  return 0;
}

int TrainSimulation_Car_function_ZeroCrossings(DATA *data, threadData_t *threadData, double *gout)
{
  TRACE_PUSH
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_boolean tmp3;
  modelica_boolean tmp4;
  modelica_boolean tmp5;
  modelica_boolean tmp7;
  modelica_boolean tmp8;
  modelica_boolean tmp9;
  modelica_boolean tmp10;
  modelica_boolean tmp11;
  modelica_boolean tmp13;

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_ZC);
#endif
  data->simulationInfo->callStatistics.functionZeroCrossings++;

  tmp0 = GreaterEq(data->simulationInfo->realParameter[2] /* isClumsy PARAM */,1.0);
  tmp1 = LessEqZC(data->localData[0]->realVars[0] /* Distance STATE(1,speed) */ - data->simulationInfo->realParameter[3] /* length PARAM */, data->localData[0]->realVars[8] /* Target variable */, data->simulationInfo->storedRelations[0]);
  tmp2 = GreaterEqZC(data->localData[0]->realVars[0] /* Distance STATE(1,speed) */, data->localData[0]->realVars[8] /* Target variable */, data->simulationInfo->storedRelations[1]);
  tmp3 = GreaterZC(data->localData[0]->realVars[2] /* speed STATE(1,acceleration) */, 0.0, data->simulationInfo->storedRelations[2]);
  gout[0] = ((((tmp0 && tmp1) && tmp2) && tmp3)) ? 1 : -1;
  tmp4 = LessEqZC(data->localData[0]->realVars[2] /* speed STATE(1,acceleration) */, 0.0, data->simulationInfo->storedRelations[3]);
  gout[1] = (tmp4) ? 1 : -1;
  tmp5 = LessZC(data->localData[0]->realVars[0] /* Distance STATE(1,speed) */, data->localData[0]->realVars[8] /* Target variable */, data->simulationInfo->storedRelations[4]);
  tmp7 = GreaterEqZC(data->localData[0]->realVars[7] /* Gate_Angle variable */, 90.0, data->simulationInfo->storedRelations[5]);
  tmp8 = LessZC(data->localData[0]->realVars[2] /* speed STATE(1,acceleration) */, data->simulationInfo->realParameter[5] /* maxSpeed PARAM */, data->simulationInfo->storedRelations[6]);
  gout[2] = ((((tmp5 && (data->localData[0]->integerVars[1] /* state DISCRETE */ == 1)) && tmp7) && tmp8)) ? 1 : -1;
  tmp9 = GreaterEqZC(data->localData[0]->realVars[0] /* Distance STATE(1,speed) */ + data->localData[0]->realVars[6] /* BreakingDistance variable */ + 5.0, data->localData[0]->realVars[8] /* Target variable */, data->simulationInfo->storedRelations[7]);
  tmp10 = LessEqZC(data->localData[0]->realVars[0] /* Distance STATE(1,speed) */ + data->localData[0]->realVars[6] /* BreakingDistance variable */ - 5.0, data->localData[0]->realVars[8] /* Target variable */, data->simulationInfo->storedRelations[8]);
  tmp11 = GreaterZC(data->localData[0]->realVars[2] /* speed STATE(1,acceleration) */, 0.0, data->simulationInfo->storedRelations[2]);
  gout[3] = ((((tmp9 && tmp10) && tmp11) && (data->localData[0]->integerVars[1] /* state DISCRETE */ == 2))) ? 1 : -1;
  tmp13 = GreaterEqZC(data->localData[0]->realVars[2] /* speed STATE(1,acceleration) */, data->simulationInfo->realParameter[5] /* maxSpeed PARAM */, data->simulationInfo->storedRelations[9]);
  gout[4] = (tmp13) ? 1 : -1;

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_ZC);
#endif

  TRACE_POP
  return 0;
}

const char *TrainSimulation_Car_relationDescription(int i)
{
  const char *res[] = {"Distance - length <= Target",
  "Distance >= Target",
  "speed > 0.0",
  "speed <= 0.0",
  "Distance < Target",
  "Gate_Angle >= 90.0",
  "speed < maxSpeed",
  "Distance + BreakingDistance + 5.0 >= Target",
  "Distance + BreakingDistance - 5.0 <= Target",
  "speed >= maxSpeed"};
  return res[i];
}

int TrainSimulation_Car_function_updateRelations(DATA *data, threadData_t *threadData, int evalforZeroCross)
{
  TRACE_PUSH
  modelica_boolean tmp14;
  modelica_boolean tmp15;
  modelica_boolean tmp16;
  modelica_boolean tmp17;
  modelica_boolean tmp18;
  modelica_boolean tmp19;
  modelica_boolean tmp20;
  modelica_boolean tmp21;
  modelica_boolean tmp22;
  modelica_boolean tmp23;
  
  if(evalforZeroCross) {
    tmp14 = LessEqZC(data->localData[0]->realVars[0] /* Distance STATE(1,speed) */ - data->simulationInfo->realParameter[3] /* length PARAM */, data->localData[0]->realVars[8] /* Target variable */, data->simulationInfo->storedRelations[0]);
    data->simulationInfo->relations[0] = tmp14;
    tmp15 = GreaterEqZC(data->localData[0]->realVars[0] /* Distance STATE(1,speed) */, data->localData[0]->realVars[8] /* Target variable */, data->simulationInfo->storedRelations[1]);
    data->simulationInfo->relations[1] = tmp15;
    tmp16 = GreaterZC(data->localData[0]->realVars[2] /* speed STATE(1,acceleration) */, 0.0, data->simulationInfo->storedRelations[2]);
    data->simulationInfo->relations[2] = tmp16;
    tmp17 = LessEqZC(data->localData[0]->realVars[2] /* speed STATE(1,acceleration) */, 0.0, data->simulationInfo->storedRelations[3]);
    data->simulationInfo->relations[3] = tmp17;
    tmp18 = LessZC(data->localData[0]->realVars[0] /* Distance STATE(1,speed) */, data->localData[0]->realVars[8] /* Target variable */, data->simulationInfo->storedRelations[4]);
    data->simulationInfo->relations[4] = tmp18;
    tmp19 = GreaterEqZC(data->localData[0]->realVars[7] /* Gate_Angle variable */, 90.0, data->simulationInfo->storedRelations[5]);
    data->simulationInfo->relations[5] = tmp19;
    tmp20 = LessZC(data->localData[0]->realVars[2] /* speed STATE(1,acceleration) */, data->simulationInfo->realParameter[5] /* maxSpeed PARAM */, data->simulationInfo->storedRelations[6]);
    data->simulationInfo->relations[6] = tmp20;
    tmp21 = GreaterEqZC(data->localData[0]->realVars[0] /* Distance STATE(1,speed) */ + data->localData[0]->realVars[6] /* BreakingDistance variable */ + 5.0, data->localData[0]->realVars[8] /* Target variable */, data->simulationInfo->storedRelations[7]);
    data->simulationInfo->relations[7] = tmp21;
    tmp22 = LessEqZC(data->localData[0]->realVars[0] /* Distance STATE(1,speed) */ + data->localData[0]->realVars[6] /* BreakingDistance variable */ - 5.0, data->localData[0]->realVars[8] /* Target variable */, data->simulationInfo->storedRelations[8]);
    data->simulationInfo->relations[8] = tmp22;
    tmp23 = GreaterEqZC(data->localData[0]->realVars[2] /* speed STATE(1,acceleration) */, data->simulationInfo->realParameter[5] /* maxSpeed PARAM */, data->simulationInfo->storedRelations[9]);
    data->simulationInfo->relations[9] = tmp23;
  } else {
    data->simulationInfo->relations[0] = (data->localData[0]->realVars[0] /* Distance STATE(1,speed) */ - data->simulationInfo->realParameter[3] /* length PARAM */ <= data->localData[0]->realVars[8] /* Target variable */);
    data->simulationInfo->relations[1] = (data->localData[0]->realVars[0] /* Distance STATE(1,speed) */ >= data->localData[0]->realVars[8] /* Target variable */);
    data->simulationInfo->relations[2] = (data->localData[0]->realVars[2] /* speed STATE(1,acceleration) */ > 0.0);
    data->simulationInfo->relations[3] = (data->localData[0]->realVars[2] /* speed STATE(1,acceleration) */ <= 0.0);
    data->simulationInfo->relations[4] = (data->localData[0]->realVars[0] /* Distance STATE(1,speed) */ < data->localData[0]->realVars[8] /* Target variable */);
    data->simulationInfo->relations[5] = (data->localData[0]->realVars[7] /* Gate_Angle variable */ >= 90.0);
    data->simulationInfo->relations[6] = (data->localData[0]->realVars[2] /* speed STATE(1,acceleration) */ < data->simulationInfo->realParameter[5] /* maxSpeed PARAM */);
    data->simulationInfo->relations[7] = (data->localData[0]->realVars[0] /* Distance STATE(1,speed) */ + data->localData[0]->realVars[6] /* BreakingDistance variable */ + 5.0 >= data->localData[0]->realVars[8] /* Target variable */);
    data->simulationInfo->relations[8] = (data->localData[0]->realVars[0] /* Distance STATE(1,speed) */ + data->localData[0]->realVars[6] /* BreakingDistance variable */ - 5.0 <= data->localData[0]->realVars[8] /* Target variable */);
    data->simulationInfo->relations[9] = (data->localData[0]->realVars[2] /* speed STATE(1,acceleration) */ >= data->simulationInfo->realParameter[5] /* maxSpeed PARAM */);
  }
  
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

