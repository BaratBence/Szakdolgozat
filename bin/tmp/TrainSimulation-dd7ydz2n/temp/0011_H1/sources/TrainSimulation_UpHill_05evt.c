/* Events: Sample, Zero Crossings, Relations, Discrete Changes */
#include "TrainSimulation_UpHill_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* Initializes the raw time events of the simulation using the now
   calcualted parameters. */
void TrainSimulation_UpHill_function_initSample(DATA *data, threadData_t *threadData)
{
  long i=0;
}

const char *TrainSimulation_UpHill_zeroCrossingDescription(int i, int **out_EquationIndexes)
{
  static const char *res[] = {"TrainDistance[10] >= Start and TrainDistance[10] <= End + TrainLength[10]",
  "TrainDistance[9] >= Start and TrainDistance[9] <= End + TrainLength[9]",
  "TrainDistance[8] >= Start and TrainDistance[8] <= End + TrainLength[8]",
  "TrainDistance[7] >= Start and TrainDistance[7] <= End + TrainLength[7]",
  "TrainDistance[6] >= Start and TrainDistance[6] <= End + TrainLength[6]",
  "TrainDistance[5] >= Start and TrainDistance[5] <= End + TrainLength[5]",
  "TrainDistance[4] >= Start and TrainDistance[4] <= End + TrainLength[4]",
  "TrainDistance[3] >= Start and TrainDistance[3] <= End + TrainLength[3]",
  "TrainDistance[2] >= Start and TrainDistance[2] <= End + TrainLength[2]",
  "TrainDistance[1] >= Start and TrainDistance[1] <= End + TrainLength[1]"};
  static const int occurEqs0[] = {1,12};
  static const int occurEqs1[] = {1,12};
  static const int occurEqs2[] = {1,12};
  static const int occurEqs3[] = {1,12};
  static const int occurEqs4[] = {1,12};
  static const int occurEqs5[] = {1,12};
  static const int occurEqs6[] = {1,12};
  static const int occurEqs7[] = {1,12};
  static const int occurEqs8[] = {1,12};
  static const int occurEqs9[] = {1,12};
  static const int *occurEqs[] = {occurEqs0,occurEqs1,occurEqs2,occurEqs3,occurEqs4,occurEqs5,occurEqs6,occurEqs7,occurEqs8,occurEqs9};
  *out_EquationIndexes = (int*) occurEqs[i];
  return res[i];
}

/* forwarded equations */

int TrainSimulation_UpHill_function_ZeroCrossingsEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->callStatistics.functionZeroCrossingsEquations++;

  
  TRACE_POP
  return 0;
}

int TrainSimulation_UpHill_function_ZeroCrossings(DATA *data, threadData_t *threadData, double *gout)
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
  modelica_boolean tmp19;

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_ZC);
#endif
  data->simulationInfo->callStatistics.functionZeroCrossings++;

  tmp0 = GreaterEqZC(data->localData[0]->realVars[19] /* TrainDistance[10] variable */, data->simulationInfo->realParameter[1] /* Start PARAM */, data->simulationInfo->storedRelations[0]);
  tmp1 = LessEqZC(data->localData[0]->realVars[19] /* TrainDistance[10] variable */, data->simulationInfo->realParameter[0] /* End PARAM */ + data->localData[0]->realVars[29] /* TrainLength[10] variable */, data->simulationInfo->storedRelations[1]);
  gout[0] = ((tmp0 && tmp1)) ? 1 : -1;
  tmp2 = GreaterEqZC(data->localData[0]->realVars[18] /* TrainDistance[9] variable */, data->simulationInfo->realParameter[1] /* Start PARAM */, data->simulationInfo->storedRelations[2]);
  tmp3 = LessEqZC(data->localData[0]->realVars[18] /* TrainDistance[9] variable */, data->simulationInfo->realParameter[0] /* End PARAM */ + data->localData[0]->realVars[28] /* TrainLength[9] variable */, data->simulationInfo->storedRelations[3]);
  gout[1] = ((tmp2 && tmp3)) ? 1 : -1;
  tmp4 = GreaterEqZC(data->localData[0]->realVars[17] /* TrainDistance[8] variable */, data->simulationInfo->realParameter[1] /* Start PARAM */, data->simulationInfo->storedRelations[4]);
  tmp5 = LessEqZC(data->localData[0]->realVars[17] /* TrainDistance[8] variable */, data->simulationInfo->realParameter[0] /* End PARAM */ + data->localData[0]->realVars[27] /* TrainLength[8] variable */, data->simulationInfo->storedRelations[5]);
  gout[2] = ((tmp4 && tmp5)) ? 1 : -1;
  tmp6 = GreaterEqZC(data->localData[0]->realVars[16] /* TrainDistance[7] variable */, data->simulationInfo->realParameter[1] /* Start PARAM */, data->simulationInfo->storedRelations[6]);
  tmp7 = LessEqZC(data->localData[0]->realVars[16] /* TrainDistance[7] variable */, data->simulationInfo->realParameter[0] /* End PARAM */ + data->localData[0]->realVars[26] /* TrainLength[7] variable */, data->simulationInfo->storedRelations[7]);
  gout[3] = ((tmp6 && tmp7)) ? 1 : -1;
  tmp8 = GreaterEqZC(data->localData[0]->realVars[15] /* TrainDistance[6] variable */, data->simulationInfo->realParameter[1] /* Start PARAM */, data->simulationInfo->storedRelations[8]);
  tmp9 = LessEqZC(data->localData[0]->realVars[15] /* TrainDistance[6] variable */, data->simulationInfo->realParameter[0] /* End PARAM */ + data->localData[0]->realVars[25] /* TrainLength[6] variable */, data->simulationInfo->storedRelations[9]);
  gout[4] = ((tmp8 && tmp9)) ? 1 : -1;
  tmp10 = GreaterEqZC(data->localData[0]->realVars[14] /* TrainDistance[5] variable */, data->simulationInfo->realParameter[1] /* Start PARAM */, data->simulationInfo->storedRelations[10]);
  tmp11 = LessEqZC(data->localData[0]->realVars[14] /* TrainDistance[5] variable */, data->simulationInfo->realParameter[0] /* End PARAM */ + data->localData[0]->realVars[24] /* TrainLength[5] variable */, data->simulationInfo->storedRelations[11]);
  gout[5] = ((tmp10 && tmp11)) ? 1 : -1;
  tmp12 = GreaterEqZC(data->localData[0]->realVars[13] /* TrainDistance[4] variable */, data->simulationInfo->realParameter[1] /* Start PARAM */, data->simulationInfo->storedRelations[12]);
  tmp13 = LessEqZC(data->localData[0]->realVars[13] /* TrainDistance[4] variable */, data->simulationInfo->realParameter[0] /* End PARAM */ + data->localData[0]->realVars[23] /* TrainLength[4] variable */, data->simulationInfo->storedRelations[13]);
  gout[6] = ((tmp12 && tmp13)) ? 1 : -1;
  tmp14 = GreaterEqZC(data->localData[0]->realVars[12] /* TrainDistance[3] variable */, data->simulationInfo->realParameter[1] /* Start PARAM */, data->simulationInfo->storedRelations[14]);
  tmp15 = LessEqZC(data->localData[0]->realVars[12] /* TrainDistance[3] variable */, data->simulationInfo->realParameter[0] /* End PARAM */ + data->localData[0]->realVars[22] /* TrainLength[3] variable */, data->simulationInfo->storedRelations[15]);
  gout[7] = ((tmp14 && tmp15)) ? 1 : -1;
  tmp16 = GreaterEqZC(data->localData[0]->realVars[11] /* TrainDistance[2] variable */, data->simulationInfo->realParameter[1] /* Start PARAM */, data->simulationInfo->storedRelations[16]);
  tmp17 = LessEqZC(data->localData[0]->realVars[11] /* TrainDistance[2] variable */, data->simulationInfo->realParameter[0] /* End PARAM */ + data->localData[0]->realVars[21] /* TrainLength[2] variable */, data->simulationInfo->storedRelations[17]);
  gout[8] = ((tmp16 && tmp17)) ? 1 : -1;
  tmp18 = GreaterEqZC(data->localData[0]->realVars[10] /* TrainDistance[1] variable */, data->simulationInfo->realParameter[1] /* Start PARAM */, data->simulationInfo->storedRelations[18]);
  tmp19 = LessEqZC(data->localData[0]->realVars[10] /* TrainDistance[1] variable */, data->simulationInfo->realParameter[0] /* End PARAM */ + data->localData[0]->realVars[20] /* TrainLength[1] variable */, data->simulationInfo->storedRelations[19]);
  gout[9] = ((tmp18 && tmp19)) ? 1 : -1;

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_ZC);
#endif

  TRACE_POP
  return 0;
}

const char *TrainSimulation_UpHill_relationDescription(int i)
{
  const char *res[] = {"TrainDistance[10] >= Start",
  "TrainDistance[10] <= End + TrainLength[10]",
  "TrainDistance[9] >= Start",
  "TrainDistance[9] <= End + TrainLength[9]",
  "TrainDistance[8] >= Start",
  "TrainDistance[8] <= End + TrainLength[8]",
  "TrainDistance[7] >= Start",
  "TrainDistance[7] <= End + TrainLength[7]",
  "TrainDistance[6] >= Start",
  "TrainDistance[6] <= End + TrainLength[6]",
  "TrainDistance[5] >= Start",
  "TrainDistance[5] <= End + TrainLength[5]",
  "TrainDistance[4] >= Start",
  "TrainDistance[4] <= End + TrainLength[4]",
  "TrainDistance[3] >= Start",
  "TrainDistance[3] <= End + TrainLength[3]",
  "TrainDistance[2] >= Start",
  "TrainDistance[2] <= End + TrainLength[2]",
  "TrainDistance[1] >= Start",
  "TrainDistance[1] <= End + TrainLength[1]"};
  return res[i];
}

int TrainSimulation_UpHill_function_updateRelations(DATA *data, threadData_t *threadData, int evalforZeroCross)
{
  TRACE_PUSH
  modelica_boolean tmp20;
  modelica_boolean tmp21;
  modelica_boolean tmp22;
  modelica_boolean tmp23;
  modelica_boolean tmp24;
  modelica_boolean tmp25;
  modelica_boolean tmp26;
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
  
  if(evalforZeroCross) {
    tmp20 = GreaterEqZC(data->localData[0]->realVars[19] /* TrainDistance[10] variable */, data->simulationInfo->realParameter[1] /* Start PARAM */, data->simulationInfo->storedRelations[0]);
    data->simulationInfo->relations[0] = tmp20;
    tmp21 = LessEqZC(data->localData[0]->realVars[19] /* TrainDistance[10] variable */, data->simulationInfo->realParameter[0] /* End PARAM */ + data->localData[0]->realVars[29] /* TrainLength[10] variable */, data->simulationInfo->storedRelations[1]);
    data->simulationInfo->relations[1] = tmp21;
    tmp22 = GreaterEqZC(data->localData[0]->realVars[18] /* TrainDistance[9] variable */, data->simulationInfo->realParameter[1] /* Start PARAM */, data->simulationInfo->storedRelations[2]);
    data->simulationInfo->relations[2] = tmp22;
    tmp23 = LessEqZC(data->localData[0]->realVars[18] /* TrainDistance[9] variable */, data->simulationInfo->realParameter[0] /* End PARAM */ + data->localData[0]->realVars[28] /* TrainLength[9] variable */, data->simulationInfo->storedRelations[3]);
    data->simulationInfo->relations[3] = tmp23;
    tmp24 = GreaterEqZC(data->localData[0]->realVars[17] /* TrainDistance[8] variable */, data->simulationInfo->realParameter[1] /* Start PARAM */, data->simulationInfo->storedRelations[4]);
    data->simulationInfo->relations[4] = tmp24;
    tmp25 = LessEqZC(data->localData[0]->realVars[17] /* TrainDistance[8] variable */, data->simulationInfo->realParameter[0] /* End PARAM */ + data->localData[0]->realVars[27] /* TrainLength[8] variable */, data->simulationInfo->storedRelations[5]);
    data->simulationInfo->relations[5] = tmp25;
    tmp26 = GreaterEqZC(data->localData[0]->realVars[16] /* TrainDistance[7] variable */, data->simulationInfo->realParameter[1] /* Start PARAM */, data->simulationInfo->storedRelations[6]);
    data->simulationInfo->relations[6] = tmp26;
    tmp27 = LessEqZC(data->localData[0]->realVars[16] /* TrainDistance[7] variable */, data->simulationInfo->realParameter[0] /* End PARAM */ + data->localData[0]->realVars[26] /* TrainLength[7] variable */, data->simulationInfo->storedRelations[7]);
    data->simulationInfo->relations[7] = tmp27;
    tmp28 = GreaterEqZC(data->localData[0]->realVars[15] /* TrainDistance[6] variable */, data->simulationInfo->realParameter[1] /* Start PARAM */, data->simulationInfo->storedRelations[8]);
    data->simulationInfo->relations[8] = tmp28;
    tmp29 = LessEqZC(data->localData[0]->realVars[15] /* TrainDistance[6] variable */, data->simulationInfo->realParameter[0] /* End PARAM */ + data->localData[0]->realVars[25] /* TrainLength[6] variable */, data->simulationInfo->storedRelations[9]);
    data->simulationInfo->relations[9] = tmp29;
    tmp30 = GreaterEqZC(data->localData[0]->realVars[14] /* TrainDistance[5] variable */, data->simulationInfo->realParameter[1] /* Start PARAM */, data->simulationInfo->storedRelations[10]);
    data->simulationInfo->relations[10] = tmp30;
    tmp31 = LessEqZC(data->localData[0]->realVars[14] /* TrainDistance[5] variable */, data->simulationInfo->realParameter[0] /* End PARAM */ + data->localData[0]->realVars[24] /* TrainLength[5] variable */, data->simulationInfo->storedRelations[11]);
    data->simulationInfo->relations[11] = tmp31;
    tmp32 = GreaterEqZC(data->localData[0]->realVars[13] /* TrainDistance[4] variable */, data->simulationInfo->realParameter[1] /* Start PARAM */, data->simulationInfo->storedRelations[12]);
    data->simulationInfo->relations[12] = tmp32;
    tmp33 = LessEqZC(data->localData[0]->realVars[13] /* TrainDistance[4] variable */, data->simulationInfo->realParameter[0] /* End PARAM */ + data->localData[0]->realVars[23] /* TrainLength[4] variable */, data->simulationInfo->storedRelations[13]);
    data->simulationInfo->relations[13] = tmp33;
    tmp34 = GreaterEqZC(data->localData[0]->realVars[12] /* TrainDistance[3] variable */, data->simulationInfo->realParameter[1] /* Start PARAM */, data->simulationInfo->storedRelations[14]);
    data->simulationInfo->relations[14] = tmp34;
    tmp35 = LessEqZC(data->localData[0]->realVars[12] /* TrainDistance[3] variable */, data->simulationInfo->realParameter[0] /* End PARAM */ + data->localData[0]->realVars[22] /* TrainLength[3] variable */, data->simulationInfo->storedRelations[15]);
    data->simulationInfo->relations[15] = tmp35;
    tmp36 = GreaterEqZC(data->localData[0]->realVars[11] /* TrainDistance[2] variable */, data->simulationInfo->realParameter[1] /* Start PARAM */, data->simulationInfo->storedRelations[16]);
    data->simulationInfo->relations[16] = tmp36;
    tmp37 = LessEqZC(data->localData[0]->realVars[11] /* TrainDistance[2] variable */, data->simulationInfo->realParameter[0] /* End PARAM */ + data->localData[0]->realVars[21] /* TrainLength[2] variable */, data->simulationInfo->storedRelations[17]);
    data->simulationInfo->relations[17] = tmp37;
    tmp38 = GreaterEqZC(data->localData[0]->realVars[10] /* TrainDistance[1] variable */, data->simulationInfo->realParameter[1] /* Start PARAM */, data->simulationInfo->storedRelations[18]);
    data->simulationInfo->relations[18] = tmp38;
    tmp39 = LessEqZC(data->localData[0]->realVars[10] /* TrainDistance[1] variable */, data->simulationInfo->realParameter[0] /* End PARAM */ + data->localData[0]->realVars[20] /* TrainLength[1] variable */, data->simulationInfo->storedRelations[19]);
    data->simulationInfo->relations[19] = tmp39;
  } else {
    data->simulationInfo->relations[0] = (data->localData[0]->realVars[19] /* TrainDistance[10] variable */ >= data->simulationInfo->realParameter[1] /* Start PARAM */);
    data->simulationInfo->relations[1] = (data->localData[0]->realVars[19] /* TrainDistance[10] variable */ <= data->simulationInfo->realParameter[0] /* End PARAM */ + data->localData[0]->realVars[29] /* TrainLength[10] variable */);
    data->simulationInfo->relations[2] = (data->localData[0]->realVars[18] /* TrainDistance[9] variable */ >= data->simulationInfo->realParameter[1] /* Start PARAM */);
    data->simulationInfo->relations[3] = (data->localData[0]->realVars[18] /* TrainDistance[9] variable */ <= data->simulationInfo->realParameter[0] /* End PARAM */ + data->localData[0]->realVars[28] /* TrainLength[9] variable */);
    data->simulationInfo->relations[4] = (data->localData[0]->realVars[17] /* TrainDistance[8] variable */ >= data->simulationInfo->realParameter[1] /* Start PARAM */);
    data->simulationInfo->relations[5] = (data->localData[0]->realVars[17] /* TrainDistance[8] variable */ <= data->simulationInfo->realParameter[0] /* End PARAM */ + data->localData[0]->realVars[27] /* TrainLength[8] variable */);
    data->simulationInfo->relations[6] = (data->localData[0]->realVars[16] /* TrainDistance[7] variable */ >= data->simulationInfo->realParameter[1] /* Start PARAM */);
    data->simulationInfo->relations[7] = (data->localData[0]->realVars[16] /* TrainDistance[7] variable */ <= data->simulationInfo->realParameter[0] /* End PARAM */ + data->localData[0]->realVars[26] /* TrainLength[7] variable */);
    data->simulationInfo->relations[8] = (data->localData[0]->realVars[15] /* TrainDistance[6] variable */ >= data->simulationInfo->realParameter[1] /* Start PARAM */);
    data->simulationInfo->relations[9] = (data->localData[0]->realVars[15] /* TrainDistance[6] variable */ <= data->simulationInfo->realParameter[0] /* End PARAM */ + data->localData[0]->realVars[25] /* TrainLength[6] variable */);
    data->simulationInfo->relations[10] = (data->localData[0]->realVars[14] /* TrainDistance[5] variable */ >= data->simulationInfo->realParameter[1] /* Start PARAM */);
    data->simulationInfo->relations[11] = (data->localData[0]->realVars[14] /* TrainDistance[5] variable */ <= data->simulationInfo->realParameter[0] /* End PARAM */ + data->localData[0]->realVars[24] /* TrainLength[5] variable */);
    data->simulationInfo->relations[12] = (data->localData[0]->realVars[13] /* TrainDistance[4] variable */ >= data->simulationInfo->realParameter[1] /* Start PARAM */);
    data->simulationInfo->relations[13] = (data->localData[0]->realVars[13] /* TrainDistance[4] variable */ <= data->simulationInfo->realParameter[0] /* End PARAM */ + data->localData[0]->realVars[23] /* TrainLength[4] variable */);
    data->simulationInfo->relations[14] = (data->localData[0]->realVars[12] /* TrainDistance[3] variable */ >= data->simulationInfo->realParameter[1] /* Start PARAM */);
    data->simulationInfo->relations[15] = (data->localData[0]->realVars[12] /* TrainDistance[3] variable */ <= data->simulationInfo->realParameter[0] /* End PARAM */ + data->localData[0]->realVars[22] /* TrainLength[3] variable */);
    data->simulationInfo->relations[16] = (data->localData[0]->realVars[11] /* TrainDistance[2] variable */ >= data->simulationInfo->realParameter[1] /* Start PARAM */);
    data->simulationInfo->relations[17] = (data->localData[0]->realVars[11] /* TrainDistance[2] variable */ <= data->simulationInfo->realParameter[0] /* End PARAM */ + data->localData[0]->realVars[21] /* TrainLength[2] variable */);
    data->simulationInfo->relations[18] = (data->localData[0]->realVars[10] /* TrainDistance[1] variable */ >= data->simulationInfo->realParameter[1] /* Start PARAM */);
    data->simulationInfo->relations[19] = (data->localData[0]->realVars[10] /* TrainDistance[1] variable */ <= data->simulationInfo->realParameter[0] /* End PARAM */ + data->localData[0]->realVars[20] /* TrainLength[1] variable */);
  }
  
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

