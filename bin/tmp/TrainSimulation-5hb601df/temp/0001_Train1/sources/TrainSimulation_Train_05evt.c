/* Events: Sample, Zero Crossings, Relations, Discrete Changes */
#include "TrainSimulation_Train_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* Initializes the raw time events of the simulation using the now
   calcualted parameters. */
void TrainSimulation_Train_function_initSample(DATA *data, threadData_t *threadData)
{
  long i=0;
}

const char *TrainSimulation_Train_zeroCrossingDescription(int i, int **out_EquationIndexes)
{
  static const char *res[] = {"speed >= 45.0",
  "speed <= onCurveSpeed and ActiveCurve",
  "speed >= onCurveSpeed and ActiveCurve",
  "lapDistance >= lap",
  "acceleration < 0.0",
  "lapDistance + BreakingDistance + 10.0 >= Sensor1Position and lapDistance <= Sensor2Position",
  "inStation and lapDistance > Sensor1Position and lapDistance < Sensor2Position and lapDistance + 11.0 >= Station",
  "speed <= maxSpeed and not ActiveCurve and not ActiveUpHill and not inStation",
  "speed >= maxSpeed and not inStation",
  "inStation and speed <= 0.0 and Arrived",
  "inStation and speed > 0.0 and lapDistance + BreakingDistance + 10.0 >= Station and lapDistance + BreakingDistance - 10.0 <= Station and not Arrived",
  "inStation and speed > 0.0 and lapDistance + BreakingDistance + 5.0 >= Sensor1Position - 10.0 and lapDistance + BreakingDistance - 5.0 <= Sensor1Position - 10.0 and state == TrainSimulation.StationSignal.red",
  "speed <= 0.0",
  "lapDistance + BreakingDistance + 5.0 >= Sensor1Position - 10.0",
  "lapDistance + BreakingDistance - 5.0 <= Sensor1Position - 10.0",
  "inStation and speed < 45.0 and lapDistance + BreakingDistance + 5.0 >= Sensor1Position - 10.0 and lapDistance + BreakingDistance - 5.0 <= Sensor1Position - 10.0 and state == TrainSimulation.StationSignal.green"};
  static const int occurEqs0[] = {1,32};
  static const int occurEqs1[] = {1,53};
  static const int occurEqs2[] = {1,52};
  static const int occurEqs3[] = {1,51};
  static const int occurEqs4[] = {1,49};
  static const int occurEqs5[] = {1,35};
  static const int occurEqs6[] = {1,36};
  static const int occurEqs7[] = {1,37};
  static const int occurEqs8[] = {1,38};
  static const int occurEqs9[] = {1,39};
  static const int occurEqs10[] = {1,40};
  static const int occurEqs11[] = {1,41};
  static const int occurEqs12[] = {1,42};
  static const int occurEqs13[] = {1,42};
  static const int occurEqs14[] = {1,42};
  static const int occurEqs15[] = {1,43};
  static const int *occurEqs[] = {occurEqs0,occurEqs1,occurEqs2,occurEqs3,occurEqs4,occurEqs5,occurEqs6,occurEqs7,occurEqs8,occurEqs9,occurEqs10,occurEqs11,occurEqs12,occurEqs13,occurEqs14,occurEqs15};
  *out_EquationIndexes = (int*) occurEqs[i];
  return res[i];
}

/* forwarded equations */
extern void TrainSimulation_Train_eqFunction_33(DATA* data, threadData_t *threadData);
extern void TrainSimulation_Train_eqFunction_34(DATA* data, threadData_t *threadData);
extern void TrainSimulation_Train_eqFunction_35(DATA* data, threadData_t *threadData);
extern void TrainSimulation_Train_eqFunction_36(DATA* data, threadData_t *threadData);
extern void TrainSimulation_Train_eqFunction_44(DATA* data, threadData_t *threadData);
extern void TrainSimulation_Train_eqFunction_46(DATA* data, threadData_t *threadData);
extern void TrainSimulation_Train_eqFunction_47(DATA* data, threadData_t *threadData);

int TrainSimulation_Train_function_ZeroCrossingsEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->callStatistics.functionZeroCrossingsEquations++;

  TrainSimulation_Train_eqFunction_33(data, threadData);

  TrainSimulation_Train_eqFunction_34(data, threadData);

  TrainSimulation_Train_eqFunction_35(data, threadData);

  TrainSimulation_Train_eqFunction_36(data, threadData);

  TrainSimulation_Train_eqFunction_44(data, threadData);

  TrainSimulation_Train_eqFunction_46(data, threadData);

  TrainSimulation_Train_eqFunction_47(data, threadData);
  
  TRACE_POP
  return 0;
}

int TrainSimulation_Train_function_ZeroCrossings(DATA *data, threadData_t *threadData, double *gout)
{
  TRACE_PUSH
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_boolean tmp3;
  modelica_boolean tmp4;
  modelica_boolean tmp5;
  modelica_boolean tmp6;
  modelica_boolean tmp7;
  modelica_boolean tmp8;
  modelica_boolean tmp9;
  modelica_boolean tmp10;
  modelica_boolean tmp11;
  modelica_boolean tmp12;
  modelica_boolean tmp13;
  modelica_boolean tmp14;
  modelica_boolean tmp15;
  modelica_boolean tmp16;
  modelica_boolean tmp17;
  modelica_boolean tmp18;
  modelica_boolean tmp20;
  modelica_boolean tmp21;
  modelica_boolean tmp22;
  modelica_boolean tmp23;
  modelica_boolean tmp24;
  modelica_boolean tmp25;

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_ZC);
#endif
  data->simulationInfo->callStatistics.functionZeroCrossings++;

  tmp0 = GreaterEqZC(data->localData[0]->realVars[3] /* speed STATE(1,acceleration) */, 45.0, data->simulationInfo->storedRelations[0]);
  gout[0] = (tmp0) ? 1 : -1;
  tmp1 = LessEqZC(data->localData[0]->realVars[3] /* speed STATE(1,acceleration) */, data->localData[0]->realVars[14] /* onCurveSpeed variable */, data->simulationInfo->storedRelations[1]);
  gout[1] = ((tmp1 && data->localData[0]->booleanVars[13] /* ActiveCurve variable */)) ? 1 : -1;
  tmp2 = GreaterEqZC(data->localData[0]->realVars[3] /* speed STATE(1,acceleration) */, data->localData[0]->realVars[14] /* onCurveSpeed variable */, data->simulationInfo->storedRelations[2]);
  gout[2] = ((tmp2 && data->localData[0]->booleanVars[13] /* ActiveCurve variable */)) ? 1 : -1;
  tmp3 = GreaterEqZC(data->localData[0]->realVars[2] /* lapDistance STATE(1,speed) */, data->simulationInfo->realParameter[3] /* lap PARAM */, data->simulationInfo->storedRelations[3]);
  gout[3] = (tmp3) ? 1 : -1;
  tmp4 = LessZC(data->localData[0]->realVars[0] /* acceleration STATE(1) */, 0.0, data->simulationInfo->storedRelations[4]);
  gout[4] = (tmp4) ? 1 : -1;
  tmp5 = GreaterEqZC(data->localData[0]->realVars[2] /* lapDistance STATE(1,speed) */ + data->localData[0]->realVars[8] /* BreakingDistance variable */ + 10.0, data->localData[0]->realVars[11] /* Sensor1Position variable */, data->simulationInfo->storedRelations[5]);
  tmp6 = LessEqZC(data->localData[0]->realVars[2] /* lapDistance STATE(1,speed) */, data->localData[0]->realVars[12] /* Sensor2Position variable */, data->simulationInfo->storedRelations[6]);
  gout[5] = ((tmp5 && tmp6)) ? 1 : -1;
  tmp7 = GreaterZC(data->localData[0]->realVars[2] /* lapDistance STATE(1,speed) */, data->localData[0]->realVars[11] /* Sensor1Position variable */, data->simulationInfo->storedRelations[7]);
  tmp8 = LessZC(data->localData[0]->realVars[2] /* lapDistance STATE(1,speed) */, data->localData[0]->realVars[12] /* Sensor2Position variable */, data->simulationInfo->storedRelations[8]);
  tmp9 = GreaterEqZC(data->localData[0]->realVars[2] /* lapDistance STATE(1,speed) */ + 11.0, data->localData[0]->realVars[13] /* Station variable */, data->simulationInfo->storedRelations[9]);
  gout[6] = ((((data->localData[0]->booleanVars[18] /* inStation DISCRETE */ && tmp7) && tmp8) && tmp9)) ? 1 : -1;
  tmp10 = LessEqZC(data->localData[0]->realVars[3] /* speed STATE(1,acceleration) */, data->simulationInfo->realParameter[5] /* maxSpeed PARAM */, data->simulationInfo->storedRelations[10]);
  gout[7] = ((((tmp10 && (!data->localData[0]->booleanVars[13] /* ActiveCurve variable */)) && (!data->localData[0]->booleanVars[14] /* ActiveUpHill variable */)) && (!data->localData[0]->booleanVars[18] /* inStation DISCRETE */))) ? 1 : -1;
  tmp11 = GreaterEqZC(data->localData[0]->realVars[3] /* speed STATE(1,acceleration) */, data->simulationInfo->realParameter[5] /* maxSpeed PARAM */, data->simulationInfo->storedRelations[11]);
  gout[8] = ((tmp11 && (!data->localData[0]->booleanVars[18] /* inStation DISCRETE */))) ? 1 : -1;
  tmp12 = LessEqZC(data->localData[0]->realVars[3] /* speed STATE(1,acceleration) */, 0.0, data->simulationInfo->storedRelations[12]);
  gout[9] = (((data->localData[0]->booleanVars[18] /* inStation DISCRETE */ && tmp12) && data->localData[0]->booleanVars[15] /* Arrived DISCRETE */)) ? 1 : -1;
  tmp13 = GreaterZC(data->localData[0]->realVars[3] /* speed STATE(1,acceleration) */, 0.0, data->simulationInfo->storedRelations[13]);
  tmp14 = GreaterEqZC(data->localData[0]->realVars[2] /* lapDistance STATE(1,speed) */ + data->localData[0]->realVars[8] /* BreakingDistance variable */ + 10.0, data->localData[0]->realVars[13] /* Station variable */, data->simulationInfo->storedRelations[14]);
  tmp15 = LessEqZC(data->localData[0]->realVars[2] /* lapDistance STATE(1,speed) */ + data->localData[0]->realVars[8] /* BreakingDistance variable */ - 10.0, data->localData[0]->realVars[13] /* Station variable */, data->simulationInfo->storedRelations[15]);
  gout[10] = (((((data->localData[0]->booleanVars[18] /* inStation DISCRETE */ && tmp13) && tmp14) && tmp15) && (!data->localData[0]->booleanVars[15] /* Arrived DISCRETE */))) ? 1 : -1;
  tmp16 = GreaterZC(data->localData[0]->realVars[3] /* speed STATE(1,acceleration) */, 0.0, data->simulationInfo->storedRelations[13]);
  tmp17 = GreaterEqZC(data->localData[0]->realVars[2] /* lapDistance STATE(1,speed) */ + data->localData[0]->realVars[8] /* BreakingDistance variable */ + 5.0, data->localData[0]->realVars[11] /* Sensor1Position variable */ - 10.0, data->simulationInfo->storedRelations[16]);
  tmp18 = LessEqZC(data->localData[0]->realVars[2] /* lapDistance STATE(1,speed) */ + data->localData[0]->realVars[8] /* BreakingDistance variable */ - 5.0, data->localData[0]->realVars[11] /* Sensor1Position variable */ - 10.0, data->simulationInfo->storedRelations[17]);
  gout[11] = (((((data->localData[0]->booleanVars[18] /* inStation DISCRETE */ && tmp16) && tmp17) && tmp18) && (data->localData[0]->integerVars[2] /* state DISCRETE */ == 2))) ? 1 : -1;
  tmp20 = LessEqZC(data->localData[0]->realVars[3] /* speed STATE(1,acceleration) */, 0.0, data->simulationInfo->storedRelations[12]);
  gout[12] = (tmp20) ? 1 : -1;
  tmp21 = GreaterEqZC(data->localData[0]->realVars[2] /* lapDistance STATE(1,speed) */ + data->localData[0]->realVars[8] /* BreakingDistance variable */ + 5.0, data->localData[0]->realVars[11] /* Sensor1Position variable */ - 10.0, data->simulationInfo->storedRelations[16]);
  gout[13] = (tmp21) ? 1 : -1;
  tmp22 = LessEqZC(data->localData[0]->realVars[2] /* lapDistance STATE(1,speed) */ + data->localData[0]->realVars[8] /* BreakingDistance variable */ - 5.0, data->localData[0]->realVars[11] /* Sensor1Position variable */ - 10.0, data->simulationInfo->storedRelations[17]);
  gout[14] = (tmp22) ? 1 : -1;
  tmp23 = LessZC(data->localData[0]->realVars[3] /* speed STATE(1,acceleration) */, 45.0, data->simulationInfo->storedRelations[18]);
  tmp24 = GreaterEqZC(data->localData[0]->realVars[2] /* lapDistance STATE(1,speed) */ + data->localData[0]->realVars[8] /* BreakingDistance variable */ + 5.0, data->localData[0]->realVars[11] /* Sensor1Position variable */ - 10.0, data->simulationInfo->storedRelations[16]);
  tmp25 = LessEqZC(data->localData[0]->realVars[2] /* lapDistance STATE(1,speed) */ + data->localData[0]->realVars[8] /* BreakingDistance variable */ - 5.0, data->localData[0]->realVars[11] /* Sensor1Position variable */ - 10.0, data->simulationInfo->storedRelations[17]);
  gout[15] = (((((data->localData[0]->booleanVars[18] /* inStation DISCRETE */ && tmp23) && tmp24) && tmp25) && (data->localData[0]->integerVars[2] /* state DISCRETE */ == 1))) ? 1 : -1;

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_ZC);
#endif

  TRACE_POP
  return 0;
}

const char *TrainSimulation_Train_relationDescription(int i)
{
  const char *res[] = {"speed >= 45.0",
  "speed <= onCurveSpeed",
  "speed >= onCurveSpeed",
  "lapDistance >= lap",
  "acceleration < 0.0",
  "lapDistance + BreakingDistance + 10.0 >= Sensor1Position",
  "lapDistance <= Sensor2Position",
  "lapDistance > Sensor1Position",
  "lapDistance < Sensor2Position",
  "lapDistance + 11.0 >= Station",
  "speed <= maxSpeed",
  "speed >= maxSpeed",
  "speed <= 0.0",
  "speed > 0.0",
  "lapDistance + BreakingDistance + 10.0 >= Station",
  "lapDistance + BreakingDistance - 10.0 <= Station",
  "lapDistance + BreakingDistance + 5.0 >= Sensor1Position - 10.0",
  "lapDistance + BreakingDistance - 5.0 <= Sensor1Position - 10.0",
  "speed < 45.0"};
  return res[i];
}

int TrainSimulation_Train_function_updateRelations(DATA *data, threadData_t *threadData, int evalforZeroCross)
{
  TRACE_PUSH
  modelica_boolean tmp27;
  modelica_boolean tmp28;
  modelica_boolean tmp29;
  modelica_boolean tmp30;
  modelica_boolean tmp31;
  modelica_boolean tmp32;
  modelica_boolean tmp33;
  modelica_boolean tmp34;
  modelica_boolean tmp35;
  modelica_boolean tmp36;
  modelica_boolean tmp37;
  modelica_boolean tmp38;
  modelica_boolean tmp39;
  modelica_boolean tmp40;
  modelica_boolean tmp41;
  modelica_boolean tmp42;
  modelica_boolean tmp43;
  modelica_boolean tmp44;
  modelica_boolean tmp45;
  
  if(evalforZeroCross) {
    tmp27 = GreaterEqZC(data->localData[0]->realVars[3] /* speed STATE(1,acceleration) */, 45.0, data->simulationInfo->storedRelations[0]);
    data->simulationInfo->relations[0] = tmp27;
    tmp28 = LessEqZC(data->localData[0]->realVars[3] /* speed STATE(1,acceleration) */, data->localData[0]->realVars[14] /* onCurveSpeed variable */, data->simulationInfo->storedRelations[1]);
    data->simulationInfo->relations[1] = tmp28;
    tmp29 = GreaterEqZC(data->localData[0]->realVars[3] /* speed STATE(1,acceleration) */, data->localData[0]->realVars[14] /* onCurveSpeed variable */, data->simulationInfo->storedRelations[2]);
    data->simulationInfo->relations[2] = tmp29;
    tmp30 = GreaterEqZC(data->localData[0]->realVars[2] /* lapDistance STATE(1,speed) */, data->simulationInfo->realParameter[3] /* lap PARAM */, data->simulationInfo->storedRelations[3]);
    data->simulationInfo->relations[3] = tmp30;
    tmp31 = LessZC(data->localData[0]->realVars[0] /* acceleration STATE(1) */, 0.0, data->simulationInfo->storedRelations[4]);
    data->simulationInfo->relations[4] = tmp31;
    tmp32 = GreaterEqZC(data->localData[0]->realVars[2] /* lapDistance STATE(1,speed) */ + data->localData[0]->realVars[8] /* BreakingDistance variable */ + 10.0, data->localData[0]->realVars[11] /* Sensor1Position variable */, data->simulationInfo->storedRelations[5]);
    data->simulationInfo->relations[5] = tmp32;
    tmp33 = LessEqZC(data->localData[0]->realVars[2] /* lapDistance STATE(1,speed) */, data->localData[0]->realVars[12] /* Sensor2Position variable */, data->simulationInfo->storedRelations[6]);
    data->simulationInfo->relations[6] = tmp33;
    tmp34 = GreaterZC(data->localData[0]->realVars[2] /* lapDistance STATE(1,speed) */, data->localData[0]->realVars[11] /* Sensor1Position variable */, data->simulationInfo->storedRelations[7]);
    data->simulationInfo->relations[7] = tmp34;
    tmp35 = LessZC(data->localData[0]->realVars[2] /* lapDistance STATE(1,speed) */, data->localData[0]->realVars[12] /* Sensor2Position variable */, data->simulationInfo->storedRelations[8]);
    data->simulationInfo->relations[8] = tmp35;
    tmp36 = GreaterEqZC(data->localData[0]->realVars[2] /* lapDistance STATE(1,speed) */ + 11.0, data->localData[0]->realVars[13] /* Station variable */, data->simulationInfo->storedRelations[9]);
    data->simulationInfo->relations[9] = tmp36;
    tmp37 = LessEqZC(data->localData[0]->realVars[3] /* speed STATE(1,acceleration) */, data->simulationInfo->realParameter[5] /* maxSpeed PARAM */, data->simulationInfo->storedRelations[10]);
    data->simulationInfo->relations[10] = tmp37;
    tmp38 = GreaterEqZC(data->localData[0]->realVars[3] /* speed STATE(1,acceleration) */, data->simulationInfo->realParameter[5] /* maxSpeed PARAM */, data->simulationInfo->storedRelations[11]);
    data->simulationInfo->relations[11] = tmp38;
    tmp39 = LessEqZC(data->localData[0]->realVars[3] /* speed STATE(1,acceleration) */, 0.0, data->simulationInfo->storedRelations[12]);
    data->simulationInfo->relations[12] = tmp39;
    tmp40 = GreaterZC(data->localData[0]->realVars[3] /* speed STATE(1,acceleration) */, 0.0, data->simulationInfo->storedRelations[13]);
    data->simulationInfo->relations[13] = tmp40;
    tmp41 = GreaterEqZC(data->localData[0]->realVars[2] /* lapDistance STATE(1,speed) */ + data->localData[0]->realVars[8] /* BreakingDistance variable */ + 10.0, data->localData[0]->realVars[13] /* Station variable */, data->simulationInfo->storedRelations[14]);
    data->simulationInfo->relations[14] = tmp41;
    tmp42 = LessEqZC(data->localData[0]->realVars[2] /* lapDistance STATE(1,speed) */ + data->localData[0]->realVars[8] /* BreakingDistance variable */ - 10.0, data->localData[0]->realVars[13] /* Station variable */, data->simulationInfo->storedRelations[15]);
    data->simulationInfo->relations[15] = tmp42;
    tmp43 = GreaterEqZC(data->localData[0]->realVars[2] /* lapDistance STATE(1,speed) */ + data->localData[0]->realVars[8] /* BreakingDistance variable */ + 5.0, data->localData[0]->realVars[11] /* Sensor1Position variable */ - 10.0, data->simulationInfo->storedRelations[16]);
    data->simulationInfo->relations[16] = tmp43;
    tmp44 = LessEqZC(data->localData[0]->realVars[2] /* lapDistance STATE(1,speed) */ + data->localData[0]->realVars[8] /* BreakingDistance variable */ - 5.0, data->localData[0]->realVars[11] /* Sensor1Position variable */ - 10.0, data->simulationInfo->storedRelations[17]);
    data->simulationInfo->relations[17] = tmp44;
    tmp45 = LessZC(data->localData[0]->realVars[3] /* speed STATE(1,acceleration) */, 45.0, data->simulationInfo->storedRelations[18]);
    data->simulationInfo->relations[18] = tmp45;
  } else {
    data->simulationInfo->relations[0] = (data->localData[0]->realVars[3] /* speed STATE(1,acceleration) */ >= 45.0);
    data->simulationInfo->relations[1] = (data->localData[0]->realVars[3] /* speed STATE(1,acceleration) */ <= data->localData[0]->realVars[14] /* onCurveSpeed variable */);
    data->simulationInfo->relations[2] = (data->localData[0]->realVars[3] /* speed STATE(1,acceleration) */ >= data->localData[0]->realVars[14] /* onCurveSpeed variable */);
    data->simulationInfo->relations[3] = (data->localData[0]->realVars[2] /* lapDistance STATE(1,speed) */ >= data->simulationInfo->realParameter[3] /* lap PARAM */);
    data->simulationInfo->relations[4] = (data->localData[0]->realVars[0] /* acceleration STATE(1) */ < 0.0);
    data->simulationInfo->relations[5] = (data->localData[0]->realVars[2] /* lapDistance STATE(1,speed) */ + data->localData[0]->realVars[8] /* BreakingDistance variable */ + 10.0 >= data->localData[0]->realVars[11] /* Sensor1Position variable */);
    data->simulationInfo->relations[6] = (data->localData[0]->realVars[2] /* lapDistance STATE(1,speed) */ <= data->localData[0]->realVars[12] /* Sensor2Position variable */);
    data->simulationInfo->relations[7] = (data->localData[0]->realVars[2] /* lapDistance STATE(1,speed) */ > data->localData[0]->realVars[11] /* Sensor1Position variable */);
    data->simulationInfo->relations[8] = (data->localData[0]->realVars[2] /* lapDistance STATE(1,speed) */ < data->localData[0]->realVars[12] /* Sensor2Position variable */);
    data->simulationInfo->relations[9] = (data->localData[0]->realVars[2] /* lapDistance STATE(1,speed) */ + 11.0 >= data->localData[0]->realVars[13] /* Station variable */);
    data->simulationInfo->relations[10] = (data->localData[0]->realVars[3] /* speed STATE(1,acceleration) */ <= data->simulationInfo->realParameter[5] /* maxSpeed PARAM */);
    data->simulationInfo->relations[11] = (data->localData[0]->realVars[3] /* speed STATE(1,acceleration) */ >= data->simulationInfo->realParameter[5] /* maxSpeed PARAM */);
    data->simulationInfo->relations[12] = (data->localData[0]->realVars[3] /* speed STATE(1,acceleration) */ <= 0.0);
    data->simulationInfo->relations[13] = (data->localData[0]->realVars[3] /* speed STATE(1,acceleration) */ > 0.0);
    data->simulationInfo->relations[14] = (data->localData[0]->realVars[2] /* lapDistance STATE(1,speed) */ + data->localData[0]->realVars[8] /* BreakingDistance variable */ + 10.0 >= data->localData[0]->realVars[13] /* Station variable */);
    data->simulationInfo->relations[15] = (data->localData[0]->realVars[2] /* lapDistance STATE(1,speed) */ + data->localData[0]->realVars[8] /* BreakingDistance variable */ - 10.0 <= data->localData[0]->realVars[13] /* Station variable */);
    data->simulationInfo->relations[16] = (data->localData[0]->realVars[2] /* lapDistance STATE(1,speed) */ + data->localData[0]->realVars[8] /* BreakingDistance variable */ + 5.0 >= data->localData[0]->realVars[11] /* Sensor1Position variable */ - 10.0);
    data->simulationInfo->relations[17] = (data->localData[0]->realVars[2] /* lapDistance STATE(1,speed) */ + data->localData[0]->realVars[8] /* BreakingDistance variable */ - 5.0 <= data->localData[0]->realVars[11] /* Sensor1Position variable */ - 10.0);
    data->simulationInfo->relations[18] = (data->localData[0]->realVars[3] /* speed STATE(1,acceleration) */ < 45.0);
  }
  
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

