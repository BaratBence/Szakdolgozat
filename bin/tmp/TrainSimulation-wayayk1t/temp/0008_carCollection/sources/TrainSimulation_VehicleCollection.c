/* Main Simulation File */

#if defined(__cplusplus)
extern "C" {
#endif

#include "TrainSimulation_VehicleCollection_model.h"
#include "simulation/solver/events.h"


/* dummy VARINFO and FILEINFO */
const FILE_INFO dummyFILE_INFO = omc_dummyFileInfo;
const VAR_INFO dummyVAR_INFO = omc_dummyVarInfo;

int TrainSimulation_VehicleCollection_input_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->localData[0]->realVars[0] /* Distance1 variable */ = data->simulationInfo->inputVars[0];
  data->localData[0]->realVars[1] /* Distance10 variable */ = data->simulationInfo->inputVars[1];
  data->localData[0]->realVars[2] /* Distance2 variable */ = data->simulationInfo->inputVars[2];
  data->localData[0]->realVars[3] /* Distance3 variable */ = data->simulationInfo->inputVars[3];
  data->localData[0]->realVars[4] /* Distance4 variable */ = data->simulationInfo->inputVars[4];
  data->localData[0]->realVars[5] /* Distance5 variable */ = data->simulationInfo->inputVars[5];
  data->localData[0]->realVars[6] /* Distance6 variable */ = data->simulationInfo->inputVars[6];
  data->localData[0]->realVars[7] /* Distance7 variable */ = data->simulationInfo->inputVars[7];
  data->localData[0]->realVars[8] /* Distance8 variable */ = data->simulationInfo->inputVars[8];
  data->localData[0]->realVars[9] /* Distance9 variable */ = data->simulationInfo->inputVars[9];
  data->localData[0]->realVars[20] /* Length1 variable */ = data->simulationInfo->inputVars[10];
  data->localData[0]->realVars[21] /* Length10 variable */ = data->simulationInfo->inputVars[11];
  data->localData[0]->realVars[22] /* Length2 variable */ = data->simulationInfo->inputVars[12];
  data->localData[0]->realVars[23] /* Length3 variable */ = data->simulationInfo->inputVars[13];
  data->localData[0]->realVars[24] /* Length4 variable */ = data->simulationInfo->inputVars[14];
  data->localData[0]->realVars[25] /* Length5 variable */ = data->simulationInfo->inputVars[15];
  data->localData[0]->realVars[26] /* Length6 variable */ = data->simulationInfo->inputVars[16];
  data->localData[0]->realVars[27] /* Length7 variable */ = data->simulationInfo->inputVars[17];
  data->localData[0]->realVars[28] /* Length8 variable */ = data->simulationInfo->inputVars[18];
  data->localData[0]->realVars[29] /* Length9 variable */ = data->simulationInfo->inputVars[19];
  
  TRACE_POP
  return 0;
}

int TrainSimulation_VehicleCollection_input_function_init(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->inputVars[0] = data->modelData->realVarsData[0].attribute.start;
  data->simulationInfo->inputVars[1] = data->modelData->realVarsData[1].attribute.start;
  data->simulationInfo->inputVars[2] = data->modelData->realVarsData[2].attribute.start;
  data->simulationInfo->inputVars[3] = data->modelData->realVarsData[3].attribute.start;
  data->simulationInfo->inputVars[4] = data->modelData->realVarsData[4].attribute.start;
  data->simulationInfo->inputVars[5] = data->modelData->realVarsData[5].attribute.start;
  data->simulationInfo->inputVars[6] = data->modelData->realVarsData[6].attribute.start;
  data->simulationInfo->inputVars[7] = data->modelData->realVarsData[7].attribute.start;
  data->simulationInfo->inputVars[8] = data->modelData->realVarsData[8].attribute.start;
  data->simulationInfo->inputVars[9] = data->modelData->realVarsData[9].attribute.start;
  data->simulationInfo->inputVars[10] = data->modelData->realVarsData[20].attribute.start;
  data->simulationInfo->inputVars[11] = data->modelData->realVarsData[21].attribute.start;
  data->simulationInfo->inputVars[12] = data->modelData->realVarsData[22].attribute.start;
  data->simulationInfo->inputVars[13] = data->modelData->realVarsData[23].attribute.start;
  data->simulationInfo->inputVars[14] = data->modelData->realVarsData[24].attribute.start;
  data->simulationInfo->inputVars[15] = data->modelData->realVarsData[25].attribute.start;
  data->simulationInfo->inputVars[16] = data->modelData->realVarsData[26].attribute.start;
  data->simulationInfo->inputVars[17] = data->modelData->realVarsData[27].attribute.start;
  data->simulationInfo->inputVars[18] = data->modelData->realVarsData[28].attribute.start;
  data->simulationInfo->inputVars[19] = data->modelData->realVarsData[29].attribute.start;
  
  TRACE_POP
  return 0;
}

int TrainSimulation_VehicleCollection_input_function_updateStartValues(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->modelData->realVarsData[0].attribute.start = data->simulationInfo->inputVars[0];
  data->modelData->realVarsData[1].attribute.start = data->simulationInfo->inputVars[1];
  data->modelData->realVarsData[2].attribute.start = data->simulationInfo->inputVars[2];
  data->modelData->realVarsData[3].attribute.start = data->simulationInfo->inputVars[3];
  data->modelData->realVarsData[4].attribute.start = data->simulationInfo->inputVars[4];
  data->modelData->realVarsData[5].attribute.start = data->simulationInfo->inputVars[5];
  data->modelData->realVarsData[6].attribute.start = data->simulationInfo->inputVars[6];
  data->modelData->realVarsData[7].attribute.start = data->simulationInfo->inputVars[7];
  data->modelData->realVarsData[8].attribute.start = data->simulationInfo->inputVars[8];
  data->modelData->realVarsData[9].attribute.start = data->simulationInfo->inputVars[9];
  data->modelData->realVarsData[20].attribute.start = data->simulationInfo->inputVars[10];
  data->modelData->realVarsData[21].attribute.start = data->simulationInfo->inputVars[11];
  data->modelData->realVarsData[22].attribute.start = data->simulationInfo->inputVars[12];
  data->modelData->realVarsData[23].attribute.start = data->simulationInfo->inputVars[13];
  data->modelData->realVarsData[24].attribute.start = data->simulationInfo->inputVars[14];
  data->modelData->realVarsData[25].attribute.start = data->simulationInfo->inputVars[15];
  data->modelData->realVarsData[26].attribute.start = data->simulationInfo->inputVars[16];
  data->modelData->realVarsData[27].attribute.start = data->simulationInfo->inputVars[17];
  data->modelData->realVarsData[28].attribute.start = data->simulationInfo->inputVars[18];
  data->modelData->realVarsData[29].attribute.start = data->simulationInfo->inputVars[19];
  
  TRACE_POP
  return 0;
}

int TrainSimulation_VehicleCollection_inputNames(DATA *data, char ** names){
  TRACE_PUSH

  names[0] = (char *) data->modelData->realVarsData[0].info.name;
  names[1] = (char *) data->modelData->realVarsData[1].info.name;
  names[2] = (char *) data->modelData->realVarsData[2].info.name;
  names[3] = (char *) data->modelData->realVarsData[3].info.name;
  names[4] = (char *) data->modelData->realVarsData[4].info.name;
  names[5] = (char *) data->modelData->realVarsData[5].info.name;
  names[6] = (char *) data->modelData->realVarsData[6].info.name;
  names[7] = (char *) data->modelData->realVarsData[7].info.name;
  names[8] = (char *) data->modelData->realVarsData[8].info.name;
  names[9] = (char *) data->modelData->realVarsData[9].info.name;
  names[10] = (char *) data->modelData->realVarsData[20].info.name;
  names[11] = (char *) data->modelData->realVarsData[21].info.name;
  names[12] = (char *) data->modelData->realVarsData[22].info.name;
  names[13] = (char *) data->modelData->realVarsData[23].info.name;
  names[14] = (char *) data->modelData->realVarsData[24].info.name;
  names[15] = (char *) data->modelData->realVarsData[25].info.name;
  names[16] = (char *) data->modelData->realVarsData[26].info.name;
  names[17] = (char *) data->modelData->realVarsData[27].info.name;
  names[18] = (char *) data->modelData->realVarsData[28].info.name;
  names[19] = (char *) data->modelData->realVarsData[29].info.name;
  
  TRACE_POP
  return 0;
}

int TrainSimulation_VehicleCollection_data_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  TRACE_POP
  return 0;
}

int TrainSimulation_VehicleCollection_output_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->outputVars[0] = data->localData[0]->realVars[10] /* DistanceVec[1] variable */;
  data->simulationInfo->outputVars[1] = data->localData[0]->realVars[11] /* DistanceVec[2] variable */;
  data->simulationInfo->outputVars[2] = data->localData[0]->realVars[12] /* DistanceVec[3] variable */;
  data->simulationInfo->outputVars[3] = data->localData[0]->realVars[13] /* DistanceVec[4] variable */;
  data->simulationInfo->outputVars[4] = data->localData[0]->realVars[14] /* DistanceVec[5] variable */;
  data->simulationInfo->outputVars[5] = data->localData[0]->realVars[15] /* DistanceVec[6] variable */;
  data->simulationInfo->outputVars[6] = data->localData[0]->realVars[16] /* DistanceVec[7] variable */;
  data->simulationInfo->outputVars[7] = data->localData[0]->realVars[17] /* DistanceVec[8] variable */;
  data->simulationInfo->outputVars[8] = data->localData[0]->realVars[18] /* DistanceVec[9] variable */;
  data->simulationInfo->outputVars[9] = data->localData[0]->realVars[19] /* DistanceVec[10] variable */;
  data->simulationInfo->outputVars[10] = data->localData[0]->realVars[30] /* LengthVec[1] variable */;
  data->simulationInfo->outputVars[11] = data->localData[0]->realVars[31] /* LengthVec[2] variable */;
  data->simulationInfo->outputVars[12] = data->localData[0]->realVars[32] /* LengthVec[3] variable */;
  data->simulationInfo->outputVars[13] = data->localData[0]->realVars[33] /* LengthVec[4] variable */;
  data->simulationInfo->outputVars[14] = data->localData[0]->realVars[34] /* LengthVec[5] variable */;
  data->simulationInfo->outputVars[15] = data->localData[0]->realVars[35] /* LengthVec[6] variable */;
  data->simulationInfo->outputVars[16] = data->localData[0]->realVars[36] /* LengthVec[7] variable */;
  data->simulationInfo->outputVars[17] = data->localData[0]->realVars[37] /* LengthVec[8] variable */;
  data->simulationInfo->outputVars[18] = data->localData[0]->realVars[38] /* LengthVec[9] variable */;
  data->simulationInfo->outputVars[19] = data->localData[0]->realVars[39] /* LengthVec[10] variable */;
  
  TRACE_POP
  return 0;
}

int TrainSimulation_VehicleCollection_setc_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}


/*
equation index: 21
type: SIMPLE_ASSIGN
LengthVec[1] = Length1
*/
void TrainSimulation_VehicleCollection_eqFunction_21(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,21};
  data->localData[0]->realVars[30] /* LengthVec[1] variable */ = data->localData[0]->realVars[20] /* Length1 variable */;
  TRACE_POP
}
/*
equation index: 22
type: SIMPLE_ASSIGN
LengthVec[2] = Length2
*/
void TrainSimulation_VehicleCollection_eqFunction_22(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,22};
  data->localData[0]->realVars[31] /* LengthVec[2] variable */ = data->localData[0]->realVars[22] /* Length2 variable */;
  TRACE_POP
}
/*
equation index: 23
type: SIMPLE_ASSIGN
LengthVec[3] = Length3
*/
void TrainSimulation_VehicleCollection_eqFunction_23(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,23};
  data->localData[0]->realVars[32] /* LengthVec[3] variable */ = data->localData[0]->realVars[23] /* Length3 variable */;
  TRACE_POP
}
/*
equation index: 24
type: SIMPLE_ASSIGN
LengthVec[4] = Length4
*/
void TrainSimulation_VehicleCollection_eqFunction_24(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,24};
  data->localData[0]->realVars[33] /* LengthVec[4] variable */ = data->localData[0]->realVars[24] /* Length4 variable */;
  TRACE_POP
}
/*
equation index: 25
type: SIMPLE_ASSIGN
LengthVec[5] = Length5
*/
void TrainSimulation_VehicleCollection_eqFunction_25(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,25};
  data->localData[0]->realVars[34] /* LengthVec[5] variable */ = data->localData[0]->realVars[25] /* Length5 variable */;
  TRACE_POP
}
/*
equation index: 26
type: SIMPLE_ASSIGN
LengthVec[6] = Length6
*/
void TrainSimulation_VehicleCollection_eqFunction_26(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,26};
  data->localData[0]->realVars[35] /* LengthVec[6] variable */ = data->localData[0]->realVars[26] /* Length6 variable */;
  TRACE_POP
}
/*
equation index: 27
type: SIMPLE_ASSIGN
LengthVec[7] = Length7
*/
void TrainSimulation_VehicleCollection_eqFunction_27(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,27};
  data->localData[0]->realVars[36] /* LengthVec[7] variable */ = data->localData[0]->realVars[27] /* Length7 variable */;
  TRACE_POP
}
/*
equation index: 28
type: SIMPLE_ASSIGN
LengthVec[8] = Length8
*/
void TrainSimulation_VehicleCollection_eqFunction_28(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,28};
  data->localData[0]->realVars[37] /* LengthVec[8] variable */ = data->localData[0]->realVars[28] /* Length8 variable */;
  TRACE_POP
}
/*
equation index: 29
type: SIMPLE_ASSIGN
LengthVec[9] = Length9
*/
void TrainSimulation_VehicleCollection_eqFunction_29(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,29};
  data->localData[0]->realVars[38] /* LengthVec[9] variable */ = data->localData[0]->realVars[29] /* Length9 variable */;
  TRACE_POP
}
/*
equation index: 30
type: SIMPLE_ASSIGN
LengthVec[10] = Length10
*/
void TrainSimulation_VehicleCollection_eqFunction_30(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,30};
  data->localData[0]->realVars[39] /* LengthVec[10] variable */ = data->localData[0]->realVars[21] /* Length10 variable */;
  TRACE_POP
}
/*
equation index: 31
type: SIMPLE_ASSIGN
DistanceVec[1] = Distance1
*/
void TrainSimulation_VehicleCollection_eqFunction_31(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,31};
  data->localData[0]->realVars[10] /* DistanceVec[1] variable */ = data->localData[0]->realVars[0] /* Distance1 variable */;
  TRACE_POP
}
/*
equation index: 32
type: SIMPLE_ASSIGN
DistanceVec[2] = Distance2
*/
void TrainSimulation_VehicleCollection_eqFunction_32(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,32};
  data->localData[0]->realVars[11] /* DistanceVec[2] variable */ = data->localData[0]->realVars[2] /* Distance2 variable */;
  TRACE_POP
}
/*
equation index: 33
type: SIMPLE_ASSIGN
DistanceVec[3] = Distance3
*/
void TrainSimulation_VehicleCollection_eqFunction_33(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,33};
  data->localData[0]->realVars[12] /* DistanceVec[3] variable */ = data->localData[0]->realVars[3] /* Distance3 variable */;
  TRACE_POP
}
/*
equation index: 34
type: SIMPLE_ASSIGN
DistanceVec[4] = Distance4
*/
void TrainSimulation_VehicleCollection_eqFunction_34(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,34};
  data->localData[0]->realVars[13] /* DistanceVec[4] variable */ = data->localData[0]->realVars[4] /* Distance4 variable */;
  TRACE_POP
}
/*
equation index: 35
type: SIMPLE_ASSIGN
DistanceVec[5] = Distance5
*/
void TrainSimulation_VehicleCollection_eqFunction_35(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,35};
  data->localData[0]->realVars[14] /* DistanceVec[5] variable */ = data->localData[0]->realVars[5] /* Distance5 variable */;
  TRACE_POP
}
/*
equation index: 36
type: SIMPLE_ASSIGN
DistanceVec[6] = Distance6
*/
void TrainSimulation_VehicleCollection_eqFunction_36(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,36};
  data->localData[0]->realVars[15] /* DistanceVec[6] variable */ = data->localData[0]->realVars[6] /* Distance6 variable */;
  TRACE_POP
}
/*
equation index: 37
type: SIMPLE_ASSIGN
DistanceVec[7] = Distance7
*/
void TrainSimulation_VehicleCollection_eqFunction_37(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,37};
  data->localData[0]->realVars[16] /* DistanceVec[7] variable */ = data->localData[0]->realVars[7] /* Distance7 variable */;
  TRACE_POP
}
/*
equation index: 38
type: SIMPLE_ASSIGN
DistanceVec[8] = Distance8
*/
void TrainSimulation_VehicleCollection_eqFunction_38(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,38};
  data->localData[0]->realVars[17] /* DistanceVec[8] variable */ = data->localData[0]->realVars[8] /* Distance8 variable */;
  TRACE_POP
}
/*
equation index: 39
type: SIMPLE_ASSIGN
DistanceVec[9] = Distance9
*/
void TrainSimulation_VehicleCollection_eqFunction_39(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,39};
  data->localData[0]->realVars[18] /* DistanceVec[9] variable */ = data->localData[0]->realVars[9] /* Distance9 variable */;
  TRACE_POP
}
/*
equation index: 40
type: SIMPLE_ASSIGN
DistanceVec[10] = Distance10
*/
void TrainSimulation_VehicleCollection_eqFunction_40(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,40};
  data->localData[0]->realVars[19] /* DistanceVec[10] variable */ = data->localData[0]->realVars[1] /* Distance10 variable */;
  TRACE_POP
}

OMC_DISABLE_OPT
int TrainSimulation_VehicleCollection_functionDAE(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  int equationIndexes[1] = {0};
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_DAE);
#endif

  data->simulationInfo->needToIterate = 0;
  data->simulationInfo->discreteCall = 1;
  TrainSimulation_VehicleCollection_functionLocalKnownVars(data, threadData);
  TrainSimulation_VehicleCollection_eqFunction_21(data, threadData);

  TrainSimulation_VehicleCollection_eqFunction_22(data, threadData);

  TrainSimulation_VehicleCollection_eqFunction_23(data, threadData);

  TrainSimulation_VehicleCollection_eqFunction_24(data, threadData);

  TrainSimulation_VehicleCollection_eqFunction_25(data, threadData);

  TrainSimulation_VehicleCollection_eqFunction_26(data, threadData);

  TrainSimulation_VehicleCollection_eqFunction_27(data, threadData);

  TrainSimulation_VehicleCollection_eqFunction_28(data, threadData);

  TrainSimulation_VehicleCollection_eqFunction_29(data, threadData);

  TrainSimulation_VehicleCollection_eqFunction_30(data, threadData);

  TrainSimulation_VehicleCollection_eqFunction_31(data, threadData);

  TrainSimulation_VehicleCollection_eqFunction_32(data, threadData);

  TrainSimulation_VehicleCollection_eqFunction_33(data, threadData);

  TrainSimulation_VehicleCollection_eqFunction_34(data, threadData);

  TrainSimulation_VehicleCollection_eqFunction_35(data, threadData);

  TrainSimulation_VehicleCollection_eqFunction_36(data, threadData);

  TrainSimulation_VehicleCollection_eqFunction_37(data, threadData);

  TrainSimulation_VehicleCollection_eqFunction_38(data, threadData);

  TrainSimulation_VehicleCollection_eqFunction_39(data, threadData);

  TrainSimulation_VehicleCollection_eqFunction_40(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_DAE);
#endif
  TRACE_POP
  return 0;
}


int TrainSimulation_VehicleCollection_functionLocalKnownVars(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}


int TrainSimulation_VehicleCollection_functionODE(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_FUNCTION_ODE);
#endif

  
  data->simulationInfo->callStatistics.functionODE++;
  
  TrainSimulation_VehicleCollection_functionLocalKnownVars(data, threadData);
  /* no ODE systems */

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_FUNCTION_ODE);
#endif

  TRACE_POP
  return 0;
}

/* forward the main in the simulation runtime */
extern int _main_SimulationRuntime(int argc, char**argv, DATA *data, threadData_t *threadData);

#include "TrainSimulation_VehicleCollection_12jac.h"
#include "TrainSimulation_VehicleCollection_13opt.h"

struct OpenModelicaGeneratedFunctionCallbacks TrainSimulation_VehicleCollection_callback = {
   NULL,
   NULL,
   NULL,
   TrainSimulation_VehicleCollection_callExternalObjectDestructors,
   NULL,
   NULL,
   NULL,
   #if !defined(OMC_NO_STATESELECTION)
   TrainSimulation_VehicleCollection_initializeStateSets,
   #else
   NULL,
   #endif
   TrainSimulation_VehicleCollection_initializeDAEmodeData,
   TrainSimulation_VehicleCollection_functionODE,
   TrainSimulation_VehicleCollection_functionAlgebraics,
   TrainSimulation_VehicleCollection_functionDAE,
   TrainSimulation_VehicleCollection_functionLocalKnownVars,
   TrainSimulation_VehicleCollection_input_function,
   TrainSimulation_VehicleCollection_input_function_init,
   TrainSimulation_VehicleCollection_input_function_updateStartValues,
   TrainSimulation_VehicleCollection_data_function,
   TrainSimulation_VehicleCollection_output_function,
   TrainSimulation_VehicleCollection_setc_function,
   TrainSimulation_VehicleCollection_function_storeDelayed,
   TrainSimulation_VehicleCollection_updateBoundVariableAttributes,
   TrainSimulation_VehicleCollection_functionInitialEquations,
   1, /* useHomotopy - 0: local homotopy (equidistant lambda), 1: global homotopy (equidistant lambda), 2: new global homotopy approach (adaptive lambda), 3: new local homotopy approach (adaptive lambda)*/
   TrainSimulation_VehicleCollection_functionInitialEquations_lambda0,
   TrainSimulation_VehicleCollection_functionRemovedInitialEquations,
   TrainSimulation_VehicleCollection_updateBoundParameters,
   TrainSimulation_VehicleCollection_checkForAsserts,
   TrainSimulation_VehicleCollection_function_ZeroCrossingsEquations,
   TrainSimulation_VehicleCollection_function_ZeroCrossings,
   TrainSimulation_VehicleCollection_function_updateRelations,
   TrainSimulation_VehicleCollection_zeroCrossingDescription,
   TrainSimulation_VehicleCollection_relationDescription,
   TrainSimulation_VehicleCollection_function_initSample,
   TrainSimulation_VehicleCollection_INDEX_JAC_A,
   TrainSimulation_VehicleCollection_INDEX_JAC_B,
   TrainSimulation_VehicleCollection_INDEX_JAC_C,
   TrainSimulation_VehicleCollection_INDEX_JAC_D,
   TrainSimulation_VehicleCollection_INDEX_JAC_F,
   TrainSimulation_VehicleCollection_initialAnalyticJacobianA,
   TrainSimulation_VehicleCollection_initialAnalyticJacobianB,
   TrainSimulation_VehicleCollection_initialAnalyticJacobianC,
   TrainSimulation_VehicleCollection_initialAnalyticJacobianD,
   TrainSimulation_VehicleCollection_initialAnalyticJacobianF,
   TrainSimulation_VehicleCollection_functionJacA_column,
   TrainSimulation_VehicleCollection_functionJacB_column,
   TrainSimulation_VehicleCollection_functionJacC_column,
   TrainSimulation_VehicleCollection_functionJacD_column,
   TrainSimulation_VehicleCollection_functionJacF_column,
   TrainSimulation_VehicleCollection_linear_model_frame,
   TrainSimulation_VehicleCollection_linear_model_datarecovery_frame,
   TrainSimulation_VehicleCollection_mayer,
   TrainSimulation_VehicleCollection_lagrange,
   TrainSimulation_VehicleCollection_pickUpBoundsForInputsInOptimization,
   TrainSimulation_VehicleCollection_setInputData,
   TrainSimulation_VehicleCollection_getTimeGrid,
   TrainSimulation_VehicleCollection_symbolicInlineSystem,
   TrainSimulation_VehicleCollection_function_initSynchronous,
   TrainSimulation_VehicleCollection_function_updateSynchronous,
   TrainSimulation_VehicleCollection_function_equationsSynchronous,
   TrainSimulation_VehicleCollection_inputNames,
   TrainSimulation_VehicleCollection_read_input_fmu,
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
void TrainSimulation_VehicleCollection_setupDataStruc(DATA *data, threadData_t *threadData)
{
  assertStreamPrint(threadData,0!=data, "Error while initialize Data");
  threadData->localRoots[LOCAL_ROOT_SIMULATION_DATA] = data;
  data->callback = &TrainSimulation_VehicleCollection_callback;
  OpenModelica_updateUriMapping(threadData, MMC_REFSTRUCTLIT(_OMC_LIT_RESOURCES));
  data->modelData->modelName = "TrainSimulation.VehicleCollection";
  data->modelData->modelFilePrefix = "TrainSimulation_VehicleCollection";
  data->modelData->resultFileName = NULL;
  data->modelData->modelDir = "E:/Szakdoga";
  data->modelData->modelGUID = "{1d3af18a-3cb4-4418-a57e-a9dcfe5fbea8}";
  data->modelData->initXMLData = NULL;
  data->modelData->modelDataXml.infoXMLData = NULL;
  data->modelData->runTestsuite = 0;
  
  data->modelData->nStates = 0;
  data->modelData->nVariablesReal = 40;
  data->modelData->nDiscreteReal = 0;
  data->modelData->nVariablesInteger = 0;
  data->modelData->nVariablesBoolean = 0;
  data->modelData->nVariablesString = 0;
  data->modelData->nParametersReal = 0;
  data->modelData->nParametersInteger = 1;
  data->modelData->nParametersBoolean = 0;
  data->modelData->nParametersString = 0;
  data->modelData->nInputVars = 20;
  data->modelData->nOutputVars = 20;
  
  data->modelData->nAliasReal = 40;
  data->modelData->nAliasInteger = 0;
  data->modelData->nAliasBoolean = 0;
  data->modelData->nAliasString = 0;
  
  data->modelData->nZeroCrossings = 0;
  data->modelData->nSamples = 0;
  data->modelData->nRelations = 0;
  data->modelData->nMathEvents = 0;
  data->modelData->nExtObjs = 0;
  
  GC_asprintf(&data->modelData->modelDataXml.fileName, "%s/TrainSimulation_VehicleCollection_info.json", data->modelData->resourcesDir);
  data->modelData->modelDataXml.modelInfoXmlLength = 0;
  data->modelData->modelDataXml.nFunctions = 0;
  data->modelData->modelDataXml.nProfileBlocks = 0;
  data->modelData->modelDataXml.nEquations = 42;
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

