/* Main Simulation File */

#if defined(__cplusplus)
extern "C" {
#endif

#include "TrainSimulation_Curve_model.h"
#include "simulation/solver/events.h"


/* dummy VARINFO and FILEINFO */
const FILE_INFO dummyFILE_INFO = omc_dummyFileInfo;
const VAR_INFO dummyVAR_INFO = omc_dummyVarInfo;

int TrainSimulation_Curve_input_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->localData[0]->realVars[11] /* TrainDistance[1] variable */ = data->simulationInfo->inputVars[0];
  data->localData[0]->realVars[12] /* TrainDistance[2] variable */ = data->simulationInfo->inputVars[1];
  data->localData[0]->realVars[13] /* TrainDistance[3] variable */ = data->simulationInfo->inputVars[2];
  data->localData[0]->realVars[14] /* TrainDistance[4] variable */ = data->simulationInfo->inputVars[3];
  data->localData[0]->realVars[15] /* TrainDistance[5] variable */ = data->simulationInfo->inputVars[4];
  data->localData[0]->realVars[16] /* TrainDistance[6] variable */ = data->simulationInfo->inputVars[5];
  data->localData[0]->realVars[17] /* TrainDistance[7] variable */ = data->simulationInfo->inputVars[6];
  data->localData[0]->realVars[18] /* TrainDistance[8] variable */ = data->simulationInfo->inputVars[7];
  data->localData[0]->realVars[19] /* TrainDistance[9] variable */ = data->simulationInfo->inputVars[8];
  data->localData[0]->realVars[20] /* TrainDistance[10] variable */ = data->simulationInfo->inputVars[9];
  data->localData[0]->realVars[21] /* TrainLength[1] variable */ = data->simulationInfo->inputVars[10];
  data->localData[0]->realVars[22] /* TrainLength[2] variable */ = data->simulationInfo->inputVars[11];
  data->localData[0]->realVars[23] /* TrainLength[3] variable */ = data->simulationInfo->inputVars[12];
  data->localData[0]->realVars[24] /* TrainLength[4] variable */ = data->simulationInfo->inputVars[13];
  data->localData[0]->realVars[25] /* TrainLength[5] variable */ = data->simulationInfo->inputVars[14];
  data->localData[0]->realVars[26] /* TrainLength[6] variable */ = data->simulationInfo->inputVars[15];
  data->localData[0]->realVars[27] /* TrainLength[7] variable */ = data->simulationInfo->inputVars[16];
  data->localData[0]->realVars[28] /* TrainLength[8] variable */ = data->simulationInfo->inputVars[17];
  data->localData[0]->realVars[29] /* TrainLength[9] variable */ = data->simulationInfo->inputVars[18];
  data->localData[0]->realVars[30] /* TrainLength[10] variable */ = data->simulationInfo->inputVars[19];
  
  TRACE_POP
  return 0;
}

int TrainSimulation_Curve_input_function_init(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->inputVars[0] = data->modelData->realVarsData[11].attribute.start;
  data->simulationInfo->inputVars[1] = data->modelData->realVarsData[12].attribute.start;
  data->simulationInfo->inputVars[2] = data->modelData->realVarsData[13].attribute.start;
  data->simulationInfo->inputVars[3] = data->modelData->realVarsData[14].attribute.start;
  data->simulationInfo->inputVars[4] = data->modelData->realVarsData[15].attribute.start;
  data->simulationInfo->inputVars[5] = data->modelData->realVarsData[16].attribute.start;
  data->simulationInfo->inputVars[6] = data->modelData->realVarsData[17].attribute.start;
  data->simulationInfo->inputVars[7] = data->modelData->realVarsData[18].attribute.start;
  data->simulationInfo->inputVars[8] = data->modelData->realVarsData[19].attribute.start;
  data->simulationInfo->inputVars[9] = data->modelData->realVarsData[20].attribute.start;
  data->simulationInfo->inputVars[10] = data->modelData->realVarsData[21].attribute.start;
  data->simulationInfo->inputVars[11] = data->modelData->realVarsData[22].attribute.start;
  data->simulationInfo->inputVars[12] = data->modelData->realVarsData[23].attribute.start;
  data->simulationInfo->inputVars[13] = data->modelData->realVarsData[24].attribute.start;
  data->simulationInfo->inputVars[14] = data->modelData->realVarsData[25].attribute.start;
  data->simulationInfo->inputVars[15] = data->modelData->realVarsData[26].attribute.start;
  data->simulationInfo->inputVars[16] = data->modelData->realVarsData[27].attribute.start;
  data->simulationInfo->inputVars[17] = data->modelData->realVarsData[28].attribute.start;
  data->simulationInfo->inputVars[18] = data->modelData->realVarsData[29].attribute.start;
  data->simulationInfo->inputVars[19] = data->modelData->realVarsData[30].attribute.start;
  
  TRACE_POP
  return 0;
}

int TrainSimulation_Curve_input_function_updateStartValues(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->modelData->realVarsData[11].attribute.start = data->simulationInfo->inputVars[0];
  data->modelData->realVarsData[12].attribute.start = data->simulationInfo->inputVars[1];
  data->modelData->realVarsData[13].attribute.start = data->simulationInfo->inputVars[2];
  data->modelData->realVarsData[14].attribute.start = data->simulationInfo->inputVars[3];
  data->modelData->realVarsData[15].attribute.start = data->simulationInfo->inputVars[4];
  data->modelData->realVarsData[16].attribute.start = data->simulationInfo->inputVars[5];
  data->modelData->realVarsData[17].attribute.start = data->simulationInfo->inputVars[6];
  data->modelData->realVarsData[18].attribute.start = data->simulationInfo->inputVars[7];
  data->modelData->realVarsData[19].attribute.start = data->simulationInfo->inputVars[8];
  data->modelData->realVarsData[20].attribute.start = data->simulationInfo->inputVars[9];
  data->modelData->realVarsData[21].attribute.start = data->simulationInfo->inputVars[10];
  data->modelData->realVarsData[22].attribute.start = data->simulationInfo->inputVars[11];
  data->modelData->realVarsData[23].attribute.start = data->simulationInfo->inputVars[12];
  data->modelData->realVarsData[24].attribute.start = data->simulationInfo->inputVars[13];
  data->modelData->realVarsData[25].attribute.start = data->simulationInfo->inputVars[14];
  data->modelData->realVarsData[26].attribute.start = data->simulationInfo->inputVars[15];
  data->modelData->realVarsData[27].attribute.start = data->simulationInfo->inputVars[16];
  data->modelData->realVarsData[28].attribute.start = data->simulationInfo->inputVars[17];
  data->modelData->realVarsData[29].attribute.start = data->simulationInfo->inputVars[18];
  data->modelData->realVarsData[30].attribute.start = data->simulationInfo->inputVars[19];
  
  TRACE_POP
  return 0;
}

int TrainSimulation_Curve_inputNames(DATA *data, char ** names){
  TRACE_PUSH

  names[0] = (char *) data->modelData->realVarsData[11].info.name;
  names[1] = (char *) data->modelData->realVarsData[12].info.name;
  names[2] = (char *) data->modelData->realVarsData[13].info.name;
  names[3] = (char *) data->modelData->realVarsData[14].info.name;
  names[4] = (char *) data->modelData->realVarsData[15].info.name;
  names[5] = (char *) data->modelData->realVarsData[16].info.name;
  names[6] = (char *) data->modelData->realVarsData[17].info.name;
  names[7] = (char *) data->modelData->realVarsData[18].info.name;
  names[8] = (char *) data->modelData->realVarsData[19].info.name;
  names[9] = (char *) data->modelData->realVarsData[20].info.name;
  names[10] = (char *) data->modelData->realVarsData[21].info.name;
  names[11] = (char *) data->modelData->realVarsData[22].info.name;
  names[12] = (char *) data->modelData->realVarsData[23].info.name;
  names[13] = (char *) data->modelData->realVarsData[24].info.name;
  names[14] = (char *) data->modelData->realVarsData[25].info.name;
  names[15] = (char *) data->modelData->realVarsData[26].info.name;
  names[16] = (char *) data->modelData->realVarsData[27].info.name;
  names[17] = (char *) data->modelData->realVarsData[28].info.name;
  names[18] = (char *) data->modelData->realVarsData[29].info.name;
  names[19] = (char *) data->modelData->realVarsData[30].info.name;
  
  TRACE_POP
  return 0;
}

int TrainSimulation_Curve_data_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  TRACE_POP
  return 0;
}

int TrainSimulation_Curve_output_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->outputVars[0] = data->localData[0]->realVars[0] /* CurveSpeed[1] variable */;
  data->simulationInfo->outputVars[1] = data->localData[0]->realVars[1] /* CurveSpeed[2] variable */;
  data->simulationInfo->outputVars[2] = data->localData[0]->realVars[2] /* CurveSpeed[3] variable */;
  data->simulationInfo->outputVars[3] = data->localData[0]->realVars[3] /* CurveSpeed[4] variable */;
  data->simulationInfo->outputVars[4] = data->localData[0]->realVars[4] /* CurveSpeed[5] variable */;
  data->simulationInfo->outputVars[5] = data->localData[0]->realVars[5] /* CurveSpeed[6] variable */;
  data->simulationInfo->outputVars[6] = data->localData[0]->realVars[6] /* CurveSpeed[7] variable */;
  data->simulationInfo->outputVars[7] = data->localData[0]->realVars[7] /* CurveSpeed[8] variable */;
  data->simulationInfo->outputVars[8] = data->localData[0]->realVars[8] /* CurveSpeed[9] variable */;
  data->simulationInfo->outputVars[9] = data->localData[0]->realVars[9] /* CurveSpeed[10] variable */;
  data->simulationInfo->outputVars[10] = data->localData[0]->realVars[31] /* onCurve[1] variable */;
  data->simulationInfo->outputVars[11] = data->localData[0]->realVars[32] /* onCurve[2] variable */;
  data->simulationInfo->outputVars[12] = data->localData[0]->realVars[33] /* onCurve[3] variable */;
  data->simulationInfo->outputVars[13] = data->localData[0]->realVars[34] /* onCurve[4] variable */;
  data->simulationInfo->outputVars[14] = data->localData[0]->realVars[35] /* onCurve[5] variable */;
  data->simulationInfo->outputVars[15] = data->localData[0]->realVars[36] /* onCurve[6] variable */;
  data->simulationInfo->outputVars[16] = data->localData[0]->realVars[37] /* onCurve[7] variable */;
  data->simulationInfo->outputVars[17] = data->localData[0]->realVars[38] /* onCurve[8] variable */;
  data->simulationInfo->outputVars[18] = data->localData[0]->realVars[39] /* onCurve[9] variable */;
  data->simulationInfo->outputVars[19] = data->localData[0]->realVars[40] /* onCurve[10] variable */;
  
  TRACE_POP
  return 0;
}

int TrainSimulation_Curve_setc_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}


/*
equation index: 13
type: SIMPLE_ASSIGN
onCurve[10] = if TrainDistance[10] >= Start and TrainDistance[10] <= End + TrainLength[10] then 1.0 else 0.0
*/
void TrainSimulation_Curve_eqFunction_13(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[20] /* TrainDistance[10] variable */, data->simulationInfo->realParameter[2] /* Start PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp1, data->localData[0]->realVars[20] /* TrainDistance[10] variable */, data->simulationInfo->realParameter[0] /* End PARAM */ + data->localData[0]->realVars[30] /* TrainLength[10] variable */, 1, LessEq);
  data->localData[0]->realVars[40] /* onCurve[10] variable */ = ((tmp0 && tmp1)?1.0:0.0);
  TRACE_POP
}
/*
equation index: 14
type: SIMPLE_ASSIGN
onCurve[9] = if TrainDistance[9] >= Start and TrainDistance[9] <= End + TrainLength[9] then 1.0 else 0.0
*/
void TrainSimulation_Curve_eqFunction_14(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14};
  modelica_boolean tmp2;
  modelica_boolean tmp3;
  RELATIONHYSTERESIS(tmp2, data->localData[0]->realVars[19] /* TrainDistance[9] variable */, data->simulationInfo->realParameter[2] /* Start PARAM */, 2, GreaterEq);
  RELATIONHYSTERESIS(tmp3, data->localData[0]->realVars[19] /* TrainDistance[9] variable */, data->simulationInfo->realParameter[0] /* End PARAM */ + data->localData[0]->realVars[29] /* TrainLength[9] variable */, 3, LessEq);
  data->localData[0]->realVars[39] /* onCurve[9] variable */ = ((tmp2 && tmp3)?1.0:0.0);
  TRACE_POP
}
/*
equation index: 15
type: SIMPLE_ASSIGN
onCurve[8] = if TrainDistance[8] >= Start and TrainDistance[8] <= End + TrainLength[8] then 1.0 else 0.0
*/
void TrainSimulation_Curve_eqFunction_15(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,15};
  modelica_boolean tmp4;
  modelica_boolean tmp5;
  RELATIONHYSTERESIS(tmp4, data->localData[0]->realVars[18] /* TrainDistance[8] variable */, data->simulationInfo->realParameter[2] /* Start PARAM */, 4, GreaterEq);
  RELATIONHYSTERESIS(tmp5, data->localData[0]->realVars[18] /* TrainDistance[8] variable */, data->simulationInfo->realParameter[0] /* End PARAM */ + data->localData[0]->realVars[28] /* TrainLength[8] variable */, 5, LessEq);
  data->localData[0]->realVars[38] /* onCurve[8] variable */ = ((tmp4 && tmp5)?1.0:0.0);
  TRACE_POP
}
/*
equation index: 16
type: SIMPLE_ASSIGN
onCurve[7] = if TrainDistance[7] >= Start and TrainDistance[7] <= End + TrainLength[7] then 1.0 else 0.0
*/
void TrainSimulation_Curve_eqFunction_16(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,16};
  modelica_boolean tmp6;
  modelica_boolean tmp7;
  RELATIONHYSTERESIS(tmp6, data->localData[0]->realVars[17] /* TrainDistance[7] variable */, data->simulationInfo->realParameter[2] /* Start PARAM */, 6, GreaterEq);
  RELATIONHYSTERESIS(tmp7, data->localData[0]->realVars[17] /* TrainDistance[7] variable */, data->simulationInfo->realParameter[0] /* End PARAM */ + data->localData[0]->realVars[27] /* TrainLength[7] variable */, 7, LessEq);
  data->localData[0]->realVars[37] /* onCurve[7] variable */ = ((tmp6 && tmp7)?1.0:0.0);
  TRACE_POP
}
/*
equation index: 17
type: SIMPLE_ASSIGN
onCurve[6] = if TrainDistance[6] >= Start and TrainDistance[6] <= End + TrainLength[6] then 1.0 else 0.0
*/
void TrainSimulation_Curve_eqFunction_17(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,17};
  modelica_boolean tmp8;
  modelica_boolean tmp9;
  RELATIONHYSTERESIS(tmp8, data->localData[0]->realVars[16] /* TrainDistance[6] variable */, data->simulationInfo->realParameter[2] /* Start PARAM */, 8, GreaterEq);
  RELATIONHYSTERESIS(tmp9, data->localData[0]->realVars[16] /* TrainDistance[6] variable */, data->simulationInfo->realParameter[0] /* End PARAM */ + data->localData[0]->realVars[26] /* TrainLength[6] variable */, 9, LessEq);
  data->localData[0]->realVars[36] /* onCurve[6] variable */ = ((tmp8 && tmp9)?1.0:0.0);
  TRACE_POP
}
/*
equation index: 18
type: SIMPLE_ASSIGN
onCurve[5] = if TrainDistance[5] >= Start and TrainDistance[5] <= End + TrainLength[5] then 1.0 else 0.0
*/
void TrainSimulation_Curve_eqFunction_18(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,18};
  modelica_boolean tmp10;
  modelica_boolean tmp11;
  RELATIONHYSTERESIS(tmp10, data->localData[0]->realVars[15] /* TrainDistance[5] variable */, data->simulationInfo->realParameter[2] /* Start PARAM */, 10, GreaterEq);
  RELATIONHYSTERESIS(tmp11, data->localData[0]->realVars[15] /* TrainDistance[5] variable */, data->simulationInfo->realParameter[0] /* End PARAM */ + data->localData[0]->realVars[25] /* TrainLength[5] variable */, 11, LessEq);
  data->localData[0]->realVars[35] /* onCurve[5] variable */ = ((tmp10 && tmp11)?1.0:0.0);
  TRACE_POP
}
/*
equation index: 19
type: SIMPLE_ASSIGN
onCurve[4] = if TrainDistance[4] >= Start and TrainDistance[4] <= End + TrainLength[4] then 1.0 else 0.0
*/
void TrainSimulation_Curve_eqFunction_19(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,19};
  modelica_boolean tmp12;
  modelica_boolean tmp13;
  RELATIONHYSTERESIS(tmp12, data->localData[0]->realVars[14] /* TrainDistance[4] variable */, data->simulationInfo->realParameter[2] /* Start PARAM */, 12, GreaterEq);
  RELATIONHYSTERESIS(tmp13, data->localData[0]->realVars[14] /* TrainDistance[4] variable */, data->simulationInfo->realParameter[0] /* End PARAM */ + data->localData[0]->realVars[24] /* TrainLength[4] variable */, 13, LessEq);
  data->localData[0]->realVars[34] /* onCurve[4] variable */ = ((tmp12 && tmp13)?1.0:0.0);
  TRACE_POP
}
/*
equation index: 20
type: SIMPLE_ASSIGN
onCurve[3] = if TrainDistance[3] >= Start and TrainDistance[3] <= End + TrainLength[3] then 1.0 else 0.0
*/
void TrainSimulation_Curve_eqFunction_20(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,20};
  modelica_boolean tmp14;
  modelica_boolean tmp15;
  RELATIONHYSTERESIS(tmp14, data->localData[0]->realVars[13] /* TrainDistance[3] variable */, data->simulationInfo->realParameter[2] /* Start PARAM */, 14, GreaterEq);
  RELATIONHYSTERESIS(tmp15, data->localData[0]->realVars[13] /* TrainDistance[3] variable */, data->simulationInfo->realParameter[0] /* End PARAM */ + data->localData[0]->realVars[23] /* TrainLength[3] variable */, 15, LessEq);
  data->localData[0]->realVars[33] /* onCurve[3] variable */ = ((tmp14 && tmp15)?1.0:0.0);
  TRACE_POP
}
/*
equation index: 21
type: SIMPLE_ASSIGN
onCurve[2] = if TrainDistance[2] >= Start and TrainDistance[2] <= End + TrainLength[2] then 1.0 else 0.0
*/
void TrainSimulation_Curve_eqFunction_21(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,21};
  modelica_boolean tmp16;
  modelica_boolean tmp17;
  RELATIONHYSTERESIS(tmp16, data->localData[0]->realVars[12] /* TrainDistance[2] variable */, data->simulationInfo->realParameter[2] /* Start PARAM */, 16, GreaterEq);
  RELATIONHYSTERESIS(tmp17, data->localData[0]->realVars[12] /* TrainDistance[2] variable */, data->simulationInfo->realParameter[0] /* End PARAM */ + data->localData[0]->realVars[22] /* TrainLength[2] variable */, 17, LessEq);
  data->localData[0]->realVars[32] /* onCurve[2] variable */ = ((tmp16 && tmp17)?1.0:0.0);
  TRACE_POP
}
/*
equation index: 22
type: SIMPLE_ASSIGN
onCurve[1] = if TrainDistance[1] >= Start and TrainDistance[1] <= End + TrainLength[1] then 1.0 else 0.0
*/
void TrainSimulation_Curve_eqFunction_22(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,22};
  modelica_boolean tmp18;
  modelica_boolean tmp19;
  RELATIONHYSTERESIS(tmp18, data->localData[0]->realVars[11] /* TrainDistance[1] variable */, data->simulationInfo->realParameter[2] /* Start PARAM */, 18, GreaterEq);
  RELATIONHYSTERESIS(tmp19, data->localData[0]->realVars[11] /* TrainDistance[1] variable */, data->simulationInfo->realParameter[0] /* End PARAM */ + data->localData[0]->realVars[21] /* TrainLength[1] variable */, 19, LessEq);
  data->localData[0]->realVars[31] /* onCurve[1] variable */ = ((tmp18 && tmp19)?1.0:0.0);
  TRACE_POP
}
/*
equation index: 23
type: ARRAY_CALL_ASSIGN

CurveSpeed = TrainSimulation.Curve.SpeedCalculations(10, CurveSpeedValue)
*/
void TrainSimulation_Curve_eqFunction_23(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,23};
  real_array tmp20;
  real_array_create(&tmp20, ((modelica_real*)&((&data->localData[0]->realVars[0] /* CurveSpeed[1] variable */)[calc_base_index_dims_subs(1, 10, ((modelica_integer) 1))])), 1, 10);
  copy_real_array_data(omc_TrainSimulation_Curve_SpeedCalculations(threadData, ((modelica_integer) 10), data->localData[0]->realVars[10] /* CurveSpeedValue variable */), &tmp20);
  TRACE_POP
}

OMC_DISABLE_OPT
int TrainSimulation_Curve_functionDAE(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  int equationIndexes[1] = {0};
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_DAE);
#endif

  data->simulationInfo->needToIterate = 0;
  data->simulationInfo->discreteCall = 1;
  TrainSimulation_Curve_functionLocalKnownVars(data, threadData);
  TrainSimulation_Curve_eqFunction_13(data, threadData);

  TrainSimulation_Curve_eqFunction_14(data, threadData);

  TrainSimulation_Curve_eqFunction_15(data, threadData);

  TrainSimulation_Curve_eqFunction_16(data, threadData);

  TrainSimulation_Curve_eqFunction_17(data, threadData);

  TrainSimulation_Curve_eqFunction_18(data, threadData);

  TrainSimulation_Curve_eqFunction_19(data, threadData);

  TrainSimulation_Curve_eqFunction_20(data, threadData);

  TrainSimulation_Curve_eqFunction_21(data, threadData);

  TrainSimulation_Curve_eqFunction_22(data, threadData);

  TrainSimulation_Curve_eqFunction_23(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_DAE);
#endif
  TRACE_POP
  return 0;
}


int TrainSimulation_Curve_functionLocalKnownVars(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}


int TrainSimulation_Curve_functionODE(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_FUNCTION_ODE);
#endif

  
  data->simulationInfo->callStatistics.functionODE++;
  
  TrainSimulation_Curve_functionLocalKnownVars(data, threadData);
  /* no ODE systems */

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_FUNCTION_ODE);
#endif

  TRACE_POP
  return 0;
}

/* forward the main in the simulation runtime */
extern int _main_SimulationRuntime(int argc, char**argv, DATA *data, threadData_t *threadData);

#include "TrainSimulation_Curve_12jac.h"
#include "TrainSimulation_Curve_13opt.h"

struct OpenModelicaGeneratedFunctionCallbacks TrainSimulation_Curve_callback = {
   NULL,
   NULL,
   NULL,
   TrainSimulation_Curve_callExternalObjectDestructors,
   NULL,
   NULL,
   NULL,
   #if !defined(OMC_NO_STATESELECTION)
   TrainSimulation_Curve_initializeStateSets,
   #else
   NULL,
   #endif
   TrainSimulation_Curve_initializeDAEmodeData,
   TrainSimulation_Curve_functionODE,
   TrainSimulation_Curve_functionAlgebraics,
   TrainSimulation_Curve_functionDAE,
   TrainSimulation_Curve_functionLocalKnownVars,
   TrainSimulation_Curve_input_function,
   TrainSimulation_Curve_input_function_init,
   TrainSimulation_Curve_input_function_updateStartValues,
   TrainSimulation_Curve_data_function,
   TrainSimulation_Curve_output_function,
   TrainSimulation_Curve_setc_function,
   TrainSimulation_Curve_function_storeDelayed,
   TrainSimulation_Curve_updateBoundVariableAttributes,
   TrainSimulation_Curve_functionInitialEquations,
   1, /* useHomotopy - 0: local homotopy (equidistant lambda), 1: global homotopy (equidistant lambda), 2: new global homotopy approach (adaptive lambda), 3: new local homotopy approach (adaptive lambda)*/
   TrainSimulation_Curve_functionInitialEquations_lambda0,
   TrainSimulation_Curve_functionRemovedInitialEquations,
   TrainSimulation_Curve_updateBoundParameters,
   TrainSimulation_Curve_checkForAsserts,
   TrainSimulation_Curve_function_ZeroCrossingsEquations,
   TrainSimulation_Curve_function_ZeroCrossings,
   TrainSimulation_Curve_function_updateRelations,
   TrainSimulation_Curve_zeroCrossingDescription,
   TrainSimulation_Curve_relationDescription,
   TrainSimulation_Curve_function_initSample,
   TrainSimulation_Curve_INDEX_JAC_A,
   TrainSimulation_Curve_INDEX_JAC_B,
   TrainSimulation_Curve_INDEX_JAC_C,
   TrainSimulation_Curve_INDEX_JAC_D,
   TrainSimulation_Curve_INDEX_JAC_F,
   TrainSimulation_Curve_initialAnalyticJacobianA,
   TrainSimulation_Curve_initialAnalyticJacobianB,
   TrainSimulation_Curve_initialAnalyticJacobianC,
   TrainSimulation_Curve_initialAnalyticJacobianD,
   TrainSimulation_Curve_initialAnalyticJacobianF,
   TrainSimulation_Curve_functionJacA_column,
   TrainSimulation_Curve_functionJacB_column,
   TrainSimulation_Curve_functionJacC_column,
   TrainSimulation_Curve_functionJacD_column,
   TrainSimulation_Curve_functionJacF_column,
   TrainSimulation_Curve_linear_model_frame,
   TrainSimulation_Curve_linear_model_datarecovery_frame,
   TrainSimulation_Curve_mayer,
   TrainSimulation_Curve_lagrange,
   TrainSimulation_Curve_pickUpBoundsForInputsInOptimization,
   TrainSimulation_Curve_setInputData,
   TrainSimulation_Curve_getTimeGrid,
   TrainSimulation_Curve_symbolicInlineSystem,
   TrainSimulation_Curve_function_initSynchronous,
   TrainSimulation_Curve_function_updateSynchronous,
   TrainSimulation_Curve_function_equationsSynchronous,
   TrainSimulation_Curve_inputNames,
   TrainSimulation_Curve_read_input_fmu,
   NULL,
   NULL,
   -1

};

#define _OMC_LIT_RESOURCE_0_name_data "Complex"
#define _OMC_LIT_RESOURCE_0_dir_data "E:/Modelica/lib/omlibrary"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_0_name,7,_OMC_LIT_RESOURCE_0_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_0_dir,25,_OMC_LIT_RESOURCE_0_dir_data);

#define _OMC_LIT_RESOURCE_1_name_data "Modelica"
#define _OMC_LIT_RESOURCE_1_dir_data "E:/Modelica/lib/omlibrary/Modelica 3.2.3"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_1_name,8,_OMC_LIT_RESOURCE_1_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_1_dir,40,_OMC_LIT_RESOURCE_1_dir_data);

#define _OMC_LIT_RESOURCE_2_name_data "ModelicaReference"
#define _OMC_LIT_RESOURCE_2_dir_data "E:/Modelica/lib/omlibrary/ModelicaReference 3.2.3"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_2_name,17,_OMC_LIT_RESOURCE_2_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_2_dir,49,_OMC_LIT_RESOURCE_2_dir_data);

#define _OMC_LIT_RESOURCE_3_name_data "ModelicaServices"
#define _OMC_LIT_RESOURCE_3_dir_data "E:/Modelica/lib/omlibrary/ModelicaServices 3.2.3"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_3_name,16,_OMC_LIT_RESOURCE_3_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_3_dir,48,_OMC_LIT_RESOURCE_3_dir_data);

#define _OMC_LIT_RESOURCE_4_name_data "TrainSimulation"
#define _OMC_LIT_RESOURCE_4_dir_data "E:/Szakdoga"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_4_name,15,_OMC_LIT_RESOURCE_4_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_4_dir,11,_OMC_LIT_RESOURCE_4_dir_data);

static const MMC_DEFSTRUCTLIT(_OMC_LIT_RESOURCES,10,MMC_ARRAY_TAG) {MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_0_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_0_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_1_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_1_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_2_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_2_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_3_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_3_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_4_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_4_dir)}};
void TrainSimulation_Curve_setupDataStruc(DATA *data, threadData_t *threadData)
{
  assertStreamPrint(threadData,0!=data, "Error while initialize Data");
  threadData->localRoots[LOCAL_ROOT_SIMULATION_DATA] = data;
  data->callback = &TrainSimulation_Curve_callback;
  OpenModelica_updateUriMapping(threadData, MMC_REFSTRUCTLIT(_OMC_LIT_RESOURCES));
  data->modelData->modelName = "TrainSimulation.Curve";
  data->modelData->modelFilePrefix = "TrainSimulation_Curve";
  data->modelData->resultFileName = NULL;
  data->modelData->modelDir = "E:/Szakdoga";
  data->modelData->modelGUID = "{8617e45e-ce71-4ce7-a06d-74fa194473f7}";
  data->modelData->initXMLData = NULL;
  data->modelData->modelDataXml.infoXMLData = NULL;
  data->modelData->runTestsuite = 0;
  
  data->modelData->nStates = 0;
  data->modelData->nVariablesReal = 41;
  data->modelData->nDiscreteReal = 0;
  data->modelData->nVariablesInteger = 0;
  data->modelData->nVariablesBoolean = 0;
  data->modelData->nVariablesString = 0;
  data->modelData->nParametersReal = 7;
  data->modelData->nParametersInteger = 1;
  data->modelData->nParametersBoolean = 0;
  data->modelData->nParametersString = 0;
  data->modelData->nInputVars = 20;
  data->modelData->nOutputVars = 20;
  
  data->modelData->nAliasReal = 20;
  data->modelData->nAliasInteger = 0;
  data->modelData->nAliasBoolean = 0;
  data->modelData->nAliasString = 0;
  
  data->modelData->nZeroCrossings = 10;
  data->modelData->nSamples = 0;
  data->modelData->nRelations = 20;
  data->modelData->nMathEvents = 0;
  data->modelData->nExtObjs = 0;
  
  GC_asprintf(&data->modelData->modelDataXml.fileName, "%s/TrainSimulation_Curve_info.json", data->modelData->resourcesDir);
  data->modelData->modelDataXml.modelInfoXmlLength = 0;
  data->modelData->modelDataXml.nFunctions = 1;
  data->modelData->modelDataXml.nProfileBlocks = 0;
  data->modelData->modelDataXml.nEquations = 26;
  data->modelData->nMixedSystems = 0;
  data->modelData->nLinearSystems = 0;
  data->modelData->nNonLinearSystems = 0;
  data->modelData->nStateSets = 0;
  data->modelData->nJacobians = 5;
  data->modelData->nOptimizeConstraints = 0;
  data->modelData->nOptimizeFinalConstraints = 0;
  
  data->modelData->nDelayExpressions = 0;
  
  data->modelData->nClocks = 0;
  data->modelData->nSubClocks = 0;
  
  data->modelData->nSensitivityVars = 0;
  data->modelData->nSensitivityParamVars = 0;
  data->modelData->nSetcVars = 0;
  data->modelData->ndataReconVars = 0;
  data->modelData->linearizationDumpLanguage =
  OMC_LINEARIZE_DUMP_LANGUAGE_MODELICA;
}

static int rml_execution_failed()
{
  fflush(NULL);
  fprintf(stderr, "Execution failed!\n");
  fflush(NULL);
  return 1;
}

