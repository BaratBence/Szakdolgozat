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

  data->localData[0]->realVars[20] /* TrainDistance[1] variable */ = data->simulationInfo->inputVars[0];
  data->localData[0]->realVars[21] /* TrainDistance[2] variable */ = data->simulationInfo->inputVars[1];
  data->localData[0]->realVars[22] /* TrainDistance[3] variable */ = data->simulationInfo->inputVars[2];
  data->localData[0]->realVars[23] /* TrainDistance[4] variable */ = data->simulationInfo->inputVars[3];
  data->localData[0]->realVars[24] /* TrainDistance[5] variable */ = data->simulationInfo->inputVars[4];
  data->localData[0]->realVars[25] /* TrainDistance[6] variable */ = data->simulationInfo->inputVars[5];
  data->localData[0]->realVars[26] /* TrainDistance[7] variable */ = data->simulationInfo->inputVars[6];
  data->localData[0]->realVars[27] /* TrainDistance[8] variable */ = data->simulationInfo->inputVars[7];
  data->localData[0]->realVars[28] /* TrainDistance[9] variable */ = data->simulationInfo->inputVars[8];
  data->localData[0]->realVars[29] /* TrainDistance[10] variable */ = data->simulationInfo->inputVars[9];
  data->localData[0]->realVars[30] /* TrainLength[1] variable */ = data->simulationInfo->inputVars[10];
  data->localData[0]->realVars[31] /* TrainLength[2] variable */ = data->simulationInfo->inputVars[11];
  data->localData[0]->realVars[32] /* TrainLength[3] variable */ = data->simulationInfo->inputVars[12];
  data->localData[0]->realVars[33] /* TrainLength[4] variable */ = data->simulationInfo->inputVars[13];
  data->localData[0]->realVars[34] /* TrainLength[5] variable */ = data->simulationInfo->inputVars[14];
  data->localData[0]->realVars[35] /* TrainLength[6] variable */ = data->simulationInfo->inputVars[15];
  data->localData[0]->realVars[36] /* TrainLength[7] variable */ = data->simulationInfo->inputVars[16];
  data->localData[0]->realVars[37] /* TrainLength[8] variable */ = data->simulationInfo->inputVars[17];
  data->localData[0]->realVars[38] /* TrainLength[9] variable */ = data->simulationInfo->inputVars[18];
  data->localData[0]->realVars[39] /* TrainLength[10] variable */ = data->simulationInfo->inputVars[19];
  
  TRACE_POP
  return 0;
}

int TrainSimulation_Curve_input_function_init(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->inputVars[0] = data->modelData->realVarsData[20].attribute.start;
  data->simulationInfo->inputVars[1] = data->modelData->realVarsData[21].attribute.start;
  data->simulationInfo->inputVars[2] = data->modelData->realVarsData[22].attribute.start;
  data->simulationInfo->inputVars[3] = data->modelData->realVarsData[23].attribute.start;
  data->simulationInfo->inputVars[4] = data->modelData->realVarsData[24].attribute.start;
  data->simulationInfo->inputVars[5] = data->modelData->realVarsData[25].attribute.start;
  data->simulationInfo->inputVars[6] = data->modelData->realVarsData[26].attribute.start;
  data->simulationInfo->inputVars[7] = data->modelData->realVarsData[27].attribute.start;
  data->simulationInfo->inputVars[8] = data->modelData->realVarsData[28].attribute.start;
  data->simulationInfo->inputVars[9] = data->modelData->realVarsData[29].attribute.start;
  data->simulationInfo->inputVars[10] = data->modelData->realVarsData[30].attribute.start;
  data->simulationInfo->inputVars[11] = data->modelData->realVarsData[31].attribute.start;
  data->simulationInfo->inputVars[12] = data->modelData->realVarsData[32].attribute.start;
  data->simulationInfo->inputVars[13] = data->modelData->realVarsData[33].attribute.start;
  data->simulationInfo->inputVars[14] = data->modelData->realVarsData[34].attribute.start;
  data->simulationInfo->inputVars[15] = data->modelData->realVarsData[35].attribute.start;
  data->simulationInfo->inputVars[16] = data->modelData->realVarsData[36].attribute.start;
  data->simulationInfo->inputVars[17] = data->modelData->realVarsData[37].attribute.start;
  data->simulationInfo->inputVars[18] = data->modelData->realVarsData[38].attribute.start;
  data->simulationInfo->inputVars[19] = data->modelData->realVarsData[39].attribute.start;
  
  TRACE_POP
  return 0;
}

int TrainSimulation_Curve_input_function_updateStartValues(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->modelData->realVarsData[20].attribute.start = data->simulationInfo->inputVars[0];
  data->modelData->realVarsData[21].attribute.start = data->simulationInfo->inputVars[1];
  data->modelData->realVarsData[22].attribute.start = data->simulationInfo->inputVars[2];
  data->modelData->realVarsData[23].attribute.start = data->simulationInfo->inputVars[3];
  data->modelData->realVarsData[24].attribute.start = data->simulationInfo->inputVars[4];
  data->modelData->realVarsData[25].attribute.start = data->simulationInfo->inputVars[5];
  data->modelData->realVarsData[26].attribute.start = data->simulationInfo->inputVars[6];
  data->modelData->realVarsData[27].attribute.start = data->simulationInfo->inputVars[7];
  data->modelData->realVarsData[28].attribute.start = data->simulationInfo->inputVars[8];
  data->modelData->realVarsData[29].attribute.start = data->simulationInfo->inputVars[9];
  data->modelData->realVarsData[30].attribute.start = data->simulationInfo->inputVars[10];
  data->modelData->realVarsData[31].attribute.start = data->simulationInfo->inputVars[11];
  data->modelData->realVarsData[32].attribute.start = data->simulationInfo->inputVars[12];
  data->modelData->realVarsData[33].attribute.start = data->simulationInfo->inputVars[13];
  data->modelData->realVarsData[34].attribute.start = data->simulationInfo->inputVars[14];
  data->modelData->realVarsData[35].attribute.start = data->simulationInfo->inputVars[15];
  data->modelData->realVarsData[36].attribute.start = data->simulationInfo->inputVars[16];
  data->modelData->realVarsData[37].attribute.start = data->simulationInfo->inputVars[17];
  data->modelData->realVarsData[38].attribute.start = data->simulationInfo->inputVars[18];
  data->modelData->realVarsData[39].attribute.start = data->simulationInfo->inputVars[19];
  
  TRACE_POP
  return 0;
}

int TrainSimulation_Curve_inputNames(DATA *data, char ** names){
  TRACE_PUSH

  names[0] = (char *) data->modelData->realVarsData[20].info.name;
  names[1] = (char *) data->modelData->realVarsData[21].info.name;
  names[2] = (char *) data->modelData->realVarsData[22].info.name;
  names[3] = (char *) data->modelData->realVarsData[23].info.name;
  names[4] = (char *) data->modelData->realVarsData[24].info.name;
  names[5] = (char *) data->modelData->realVarsData[25].info.name;
  names[6] = (char *) data->modelData->realVarsData[26].info.name;
  names[7] = (char *) data->modelData->realVarsData[27].info.name;
  names[8] = (char *) data->modelData->realVarsData[28].info.name;
  names[9] = (char *) data->modelData->realVarsData[29].info.name;
  names[10] = (char *) data->modelData->realVarsData[30].info.name;
  names[11] = (char *) data->modelData->realVarsData[31].info.name;
  names[12] = (char *) data->modelData->realVarsData[32].info.name;
  names[13] = (char *) data->modelData->realVarsData[33].info.name;
  names[14] = (char *) data->modelData->realVarsData[34].info.name;
  names[15] = (char *) data->modelData->realVarsData[35].info.name;
  names[16] = (char *) data->modelData->realVarsData[36].info.name;
  names[17] = (char *) data->modelData->realVarsData[37].info.name;
  names[18] = (char *) data->modelData->realVarsData[38].info.name;
  names[19] = (char *) data->modelData->realVarsData[39].info.name;
  
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

  data->simulationInfo->outputVars[0] = data->localData[0]->realVars[9] /* CurveSpeed[1] variable */;
  data->simulationInfo->outputVars[1] = data->localData[0]->realVars[10] /* CurveSpeed[2] variable */;
  data->simulationInfo->outputVars[2] = data->localData[0]->realVars[11] /* CurveSpeed[3] variable */;
  data->simulationInfo->outputVars[3] = data->localData[0]->realVars[12] /* CurveSpeed[4] variable */;
  data->simulationInfo->outputVars[4] = data->localData[0]->realVars[13] /* CurveSpeed[5] variable */;
  data->simulationInfo->outputVars[5] = data->localData[0]->realVars[14] /* CurveSpeed[6] variable */;
  data->simulationInfo->outputVars[6] = data->localData[0]->realVars[15] /* CurveSpeed[7] variable */;
  data->simulationInfo->outputVars[7] = data->localData[0]->realVars[16] /* CurveSpeed[8] variable */;
  data->simulationInfo->outputVars[8] = data->localData[0]->realVars[17] /* CurveSpeed[9] variable */;
  data->simulationInfo->outputVars[9] = data->localData[0]->realVars[18] /* CurveSpeed[10] variable */;
  data->simulationInfo->outputVars[10] = data->localData[0]->realVars[40] /* onCurve[1] variable */;
  data->simulationInfo->outputVars[11] = data->localData[0]->realVars[41] /* onCurve[2] variable */;
  data->simulationInfo->outputVars[12] = data->localData[0]->realVars[42] /* onCurve[3] variable */;
  data->simulationInfo->outputVars[13] = data->localData[0]->realVars[43] /* onCurve[4] variable */;
  data->simulationInfo->outputVars[14] = data->localData[0]->realVars[44] /* onCurve[5] variable */;
  data->simulationInfo->outputVars[15] = data->localData[0]->realVars[45] /* onCurve[6] variable */;
  data->simulationInfo->outputVars[16] = data->localData[0]->realVars[46] /* onCurve[7] variable */;
  data->simulationInfo->outputVars[17] = data->localData[0]->realVars[47] /* onCurve[8] variable */;
  data->simulationInfo->outputVars[18] = data->localData[0]->realVars[48] /* onCurve[9] variable */;
  data->simulationInfo->outputVars[19] = data->localData[0]->realVars[49] /* onCurve[10] variable */;
  
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
equation index: 31
type: SIMPLE_ASSIGN
CurveSpeed[10] = CurveSpeedValue
*/
void TrainSimulation_Curve_eqFunction_31(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,31};
  data->localData[0]->realVars[18] /* CurveSpeed[10] variable */ = data->localData[0]->realVars[19] /* CurveSpeedValue variable */;
  TRACE_POP
}
/*
equation index: 32
type: SIMPLE_ASSIGN
CurveSpeed[9] = CurveSpeedValue
*/
void TrainSimulation_Curve_eqFunction_32(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,32};
  data->localData[0]->realVars[17] /* CurveSpeed[9] variable */ = data->localData[0]->realVars[19] /* CurveSpeedValue variable */;
  TRACE_POP
}
/*
equation index: 33
type: SIMPLE_ASSIGN
CurveSpeed[8] = CurveSpeedValue
*/
void TrainSimulation_Curve_eqFunction_33(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,33};
  data->localData[0]->realVars[16] /* CurveSpeed[8] variable */ = data->localData[0]->realVars[19] /* CurveSpeedValue variable */;
  TRACE_POP
}
/*
equation index: 34
type: SIMPLE_ASSIGN
CurveSpeed[7] = CurveSpeedValue
*/
void TrainSimulation_Curve_eqFunction_34(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,34};
  data->localData[0]->realVars[15] /* CurveSpeed[7] variable */ = data->localData[0]->realVars[19] /* CurveSpeedValue variable */;
  TRACE_POP
}
/*
equation index: 35
type: SIMPLE_ASSIGN
CurveSpeed[6] = CurveSpeedValue
*/
void TrainSimulation_Curve_eqFunction_35(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,35};
  data->localData[0]->realVars[14] /* CurveSpeed[6] variable */ = data->localData[0]->realVars[19] /* CurveSpeedValue variable */;
  TRACE_POP
}
/*
equation index: 36
type: SIMPLE_ASSIGN
CurveSpeed[5] = CurveSpeedValue
*/
void TrainSimulation_Curve_eqFunction_36(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,36};
  data->localData[0]->realVars[13] /* CurveSpeed[5] variable */ = data->localData[0]->realVars[19] /* CurveSpeedValue variable */;
  TRACE_POP
}
/*
equation index: 37
type: SIMPLE_ASSIGN
CurveSpeed[4] = CurveSpeedValue
*/
void TrainSimulation_Curve_eqFunction_37(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,37};
  data->localData[0]->realVars[12] /* CurveSpeed[4] variable */ = data->localData[0]->realVars[19] /* CurveSpeedValue variable */;
  TRACE_POP
}
/*
equation index: 38
type: SIMPLE_ASSIGN
CurveSpeed[3] = CurveSpeedValue
*/
void TrainSimulation_Curve_eqFunction_38(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,38};
  data->localData[0]->realVars[11] /* CurveSpeed[3] variable */ = data->localData[0]->realVars[19] /* CurveSpeedValue variable */;
  TRACE_POP
}
/*
equation index: 39
type: SIMPLE_ASSIGN
CurveSpeed[2] = CurveSpeedValue
*/
void TrainSimulation_Curve_eqFunction_39(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,39};
  data->localData[0]->realVars[10] /* CurveSpeed[2] variable */ = data->localData[0]->realVars[19] /* CurveSpeedValue variable */;
  TRACE_POP
}
/*
equation index: 40
type: SIMPLE_ASSIGN
CurveSpeed[1] = CurveSpeedValue
*/
void TrainSimulation_Curve_eqFunction_40(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,40};
  data->localData[0]->realVars[9] /* CurveSpeed[1] variable */ = data->localData[0]->realVars[19] /* CurveSpeedValue variable */;
  TRACE_POP
}
/*
equation index: 41
type: SIMPLE_ASSIGN
onCurve[1] = TrainSimulation.Curve.TrainOnTrack(10, 1, TrainDistance, TrainLength)
*/
void TrainSimulation_Curve_eqFunction_41(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,41};
  real_array tmp0;
  real_array tmp1;
  real_array_create(&tmp0, ((modelica_real*)&((&data->localData[0]->realVars[20] /* TrainDistance[1] variable */)[calc_base_index_dims_subs(1, 10, ((modelica_integer) 1))])), 1, 10);
  real_array_create(&tmp1, ((modelica_real*)&((&data->localData[0]->realVars[30] /* TrainLength[1] variable */)[calc_base_index_dims_subs(1, 10, ((modelica_integer) 1))])), 1, 10);
  data->localData[0]->realVars[40] /* onCurve[1] variable */ = omc_TrainSimulation_Curve_TrainOnTrack(threadData, ((modelica_integer) 10), ((modelica_integer) 1), tmp0, tmp1);
  TRACE_POP
}
/*
equation index: 42
type: SIMPLE_ASSIGN
onCurve[2] = 0.0
*/
void TrainSimulation_Curve_eqFunction_42(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,42};
  data->localData[0]->realVars[41] /* onCurve[2] variable */ = 0.0;
  TRACE_POP
}
/*
equation index: 43
type: SIMPLE_ASSIGN
onCurve[3] = 0.0
*/
void TrainSimulation_Curve_eqFunction_43(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,43};
  data->localData[0]->realVars[42] /* onCurve[3] variable */ = 0.0;
  TRACE_POP
}
/*
equation index: 44
type: SIMPLE_ASSIGN
onCurve[4] = 0.0
*/
void TrainSimulation_Curve_eqFunction_44(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,44};
  data->localData[0]->realVars[43] /* onCurve[4] variable */ = 0.0;
  TRACE_POP
}
/*
equation index: 45
type: SIMPLE_ASSIGN
onCurve[5] = 0.0
*/
void TrainSimulation_Curve_eqFunction_45(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,45};
  data->localData[0]->realVars[44] /* onCurve[5] variable */ = 0.0;
  TRACE_POP
}
/*
equation index: 46
type: SIMPLE_ASSIGN
onCurve[6] = 0.0
*/
void TrainSimulation_Curve_eqFunction_46(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,46};
  data->localData[0]->realVars[45] /* onCurve[6] variable */ = 0.0;
  TRACE_POP
}
/*
equation index: 47
type: SIMPLE_ASSIGN
onCurve[7] = 0.0
*/
void TrainSimulation_Curve_eqFunction_47(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,47};
  data->localData[0]->realVars[46] /* onCurve[7] variable */ = 0.0;
  TRACE_POP
}
/*
equation index: 48
type: SIMPLE_ASSIGN
onCurve[8] = 0.0
*/
void TrainSimulation_Curve_eqFunction_48(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,48};
  data->localData[0]->realVars[47] /* onCurve[8] variable */ = 0.0;
  TRACE_POP
}
/*
equation index: 49
type: SIMPLE_ASSIGN
onCurve[9] = 0.0
*/
void TrainSimulation_Curve_eqFunction_49(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,49};
  data->localData[0]->realVars[48] /* onCurve[9] variable */ = 0.0;
  TRACE_POP
}
/*
equation index: 50
type: SIMPLE_ASSIGN
onCurve[10] = 0.0
*/
void TrainSimulation_Curve_eqFunction_50(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,50};
  data->localData[0]->realVars[49] /* onCurve[10] variable */ = 0.0;
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

  TrainSimulation_Curve_eqFunction_41(data, threadData);

  TrainSimulation_Curve_eqFunction_42(data, threadData);

  TrainSimulation_Curve_eqFunction_43(data, threadData);

  TrainSimulation_Curve_eqFunction_44(data, threadData);

  TrainSimulation_Curve_eqFunction_45(data, threadData);

  TrainSimulation_Curve_eqFunction_46(data, threadData);

  TrainSimulation_Curve_eqFunction_47(data, threadData);

  TrainSimulation_Curve_eqFunction_48(data, threadData);

  TrainSimulation_Curve_eqFunction_49(data, threadData);

  TrainSimulation_Curve_eqFunction_50(data, threadData);
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
  data->modelData->modelGUID = "{1de4e5a2-4a87-4545-976d-0a742ae48c37}";
  data->modelData->initXMLData = NULL;
  data->modelData->modelDataXml.infoXMLData = NULL;
  data->modelData->runTestsuite = 0;
  
  data->modelData->nStates = 0;
  data->modelData->nVariablesReal = 50;
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
  
  data->modelData->nAliasReal = 11;
  data->modelData->nAliasInteger = 0;
  data->modelData->nAliasBoolean = 0;
  data->modelData->nAliasString = 0;
  
  data->modelData->nZeroCrossings = 0;
  data->modelData->nSamples = 0;
  data->modelData->nRelations = 0;
  data->modelData->nMathEvents = 0;
  data->modelData->nExtObjs = 0;
  
  GC_asprintf(&data->modelData->modelDataXml.fileName, "%s/TrainSimulation_Curve_info.json", data->modelData->resourcesDir);
  data->modelData->modelDataXml.modelInfoXmlLength = 0;
  data->modelData->modelDataXml.nFunctions = 1;
  data->modelData->modelDataXml.nProfileBlocks = 0;
  data->modelData->modelDataXml.nEquations = 62;
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

