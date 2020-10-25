/* Main Simulation File */

#if defined(__cplusplus)
extern "C" {
#endif

#include "TrainSimulation_StructureCollection_model.h"
#include "simulation/solver/events.h"


/* dummy VARINFO and FILEINFO */
const FILE_INFO dummyFILE_INFO = omc_dummyFileInfo;
const VAR_INFO dummyVAR_INFO = omc_dummyVarInfo;

int TrainSimulation_StructureCollection_input_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->localData[0]->realVars[0] /* OnStructure1 variable */ = data->simulationInfo->inputVars[0];
  data->localData[0]->realVars[1] /* OnStructure10 variable */ = data->simulationInfo->inputVars[1];
  data->localData[0]->realVars[2] /* OnStructure2 variable */ = data->simulationInfo->inputVars[2];
  data->localData[0]->realVars[3] /* OnStructure3 variable */ = data->simulationInfo->inputVars[3];
  data->localData[0]->realVars[4] /* OnStructure4 variable */ = data->simulationInfo->inputVars[4];
  data->localData[0]->realVars[5] /* OnStructure5 variable */ = data->simulationInfo->inputVars[5];
  data->localData[0]->realVars[6] /* OnStructure6 variable */ = data->simulationInfo->inputVars[6];
  data->localData[0]->realVars[7] /* OnStructure7 variable */ = data->simulationInfo->inputVars[7];
  data->localData[0]->realVars[8] /* OnStructure8 variable */ = data->simulationInfo->inputVars[8];
  data->localData[0]->realVars[9] /* OnStructure9 variable */ = data->simulationInfo->inputVars[9];
  data->localData[0]->realVars[10] /* Speed1 variable */ = data->simulationInfo->inputVars[10];
  data->localData[0]->realVars[11] /* Speed10 variable */ = data->simulationInfo->inputVars[11];
  data->localData[0]->realVars[12] /* Speed2 variable */ = data->simulationInfo->inputVars[12];
  data->localData[0]->realVars[13] /* Speed3 variable */ = data->simulationInfo->inputVars[13];
  data->localData[0]->realVars[14] /* Speed4 variable */ = data->simulationInfo->inputVars[14];
  data->localData[0]->realVars[15] /* Speed5 variable */ = data->simulationInfo->inputVars[15];
  data->localData[0]->realVars[16] /* Speed6 variable */ = data->simulationInfo->inputVars[16];
  data->localData[0]->realVars[17] /* Speed7 variable */ = data->simulationInfo->inputVars[17];
  data->localData[0]->realVars[18] /* Speed8 variable */ = data->simulationInfo->inputVars[18];
  data->localData[0]->realVars[19] /* Speed9 variable */ = data->simulationInfo->inputVars[19];
  
  TRACE_POP
  return 0;
}

int TrainSimulation_StructureCollection_input_function_init(DATA *data, threadData_t *threadData)
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
  data->simulationInfo->inputVars[10] = data->modelData->realVarsData[10].attribute.start;
  data->simulationInfo->inputVars[11] = data->modelData->realVarsData[11].attribute.start;
  data->simulationInfo->inputVars[12] = data->modelData->realVarsData[12].attribute.start;
  data->simulationInfo->inputVars[13] = data->modelData->realVarsData[13].attribute.start;
  data->simulationInfo->inputVars[14] = data->modelData->realVarsData[14].attribute.start;
  data->simulationInfo->inputVars[15] = data->modelData->realVarsData[15].attribute.start;
  data->simulationInfo->inputVars[16] = data->modelData->realVarsData[16].attribute.start;
  data->simulationInfo->inputVars[17] = data->modelData->realVarsData[17].attribute.start;
  data->simulationInfo->inputVars[18] = data->modelData->realVarsData[18].attribute.start;
  data->simulationInfo->inputVars[19] = data->modelData->realVarsData[19].attribute.start;
  
  TRACE_POP
  return 0;
}

int TrainSimulation_StructureCollection_input_function_updateStartValues(DATA *data, threadData_t *threadData)
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
  data->modelData->realVarsData[10].attribute.start = data->simulationInfo->inputVars[10];
  data->modelData->realVarsData[11].attribute.start = data->simulationInfo->inputVars[11];
  data->modelData->realVarsData[12].attribute.start = data->simulationInfo->inputVars[12];
  data->modelData->realVarsData[13].attribute.start = data->simulationInfo->inputVars[13];
  data->modelData->realVarsData[14].attribute.start = data->simulationInfo->inputVars[14];
  data->modelData->realVarsData[15].attribute.start = data->simulationInfo->inputVars[15];
  data->modelData->realVarsData[16].attribute.start = data->simulationInfo->inputVars[16];
  data->modelData->realVarsData[17].attribute.start = data->simulationInfo->inputVars[17];
  data->modelData->realVarsData[18].attribute.start = data->simulationInfo->inputVars[18];
  data->modelData->realVarsData[19].attribute.start = data->simulationInfo->inputVars[19];
  
  TRACE_POP
  return 0;
}

int TrainSimulation_StructureCollection_inputNames(DATA *data, char ** names){
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
  names[10] = (char *) data->modelData->realVarsData[10].info.name;
  names[11] = (char *) data->modelData->realVarsData[11].info.name;
  names[12] = (char *) data->modelData->realVarsData[12].info.name;
  names[13] = (char *) data->modelData->realVarsData[13].info.name;
  names[14] = (char *) data->modelData->realVarsData[14].info.name;
  names[15] = (char *) data->modelData->realVarsData[15].info.name;
  names[16] = (char *) data->modelData->realVarsData[16].info.name;
  names[17] = (char *) data->modelData->realVarsData[17].info.name;
  names[18] = (char *) data->modelData->realVarsData[18].info.name;
  names[19] = (char *) data->modelData->realVarsData[19].info.name;
  
  TRACE_POP
  return 0;
}

int TrainSimulation_StructureCollection_data_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  TRACE_POP
  return 0;
}

int TrainSimulation_StructureCollection_output_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->outputVars[0] = data->localData[0]->realVars[30] /* speed variable */;
  
  TRACE_POP
  return 0;
}

int TrainSimulation_StructureCollection_setc_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}


/*
equation index: 14
type: SIMPLE_ASSIGN
SpeedArray[10] = Speed10
*/
void TrainSimulation_StructureCollection_eqFunction_14(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14};
  data->localData[0]->realVars[29] /* SpeedArray[10] variable */ = data->localData[0]->realVars[11] /* Speed10 variable */;
  TRACE_POP
}
/*
equation index: 15
type: SIMPLE_ASSIGN
SpeedArray[9] = Speed9
*/
void TrainSimulation_StructureCollection_eqFunction_15(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,15};
  data->localData[0]->realVars[28] /* SpeedArray[9] variable */ = data->localData[0]->realVars[19] /* Speed9 variable */;
  TRACE_POP
}
/*
equation index: 16
type: SIMPLE_ASSIGN
SpeedArray[8] = Speed8
*/
void TrainSimulation_StructureCollection_eqFunction_16(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,16};
  data->localData[0]->realVars[27] /* SpeedArray[8] variable */ = data->localData[0]->realVars[18] /* Speed8 variable */;
  TRACE_POP
}
/*
equation index: 17
type: SIMPLE_ASSIGN
SpeedArray[7] = Speed7
*/
void TrainSimulation_StructureCollection_eqFunction_17(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,17};
  data->localData[0]->realVars[26] /* SpeedArray[7] variable */ = data->localData[0]->realVars[17] /* Speed7 variable */;
  TRACE_POP
}
/*
equation index: 18
type: SIMPLE_ASSIGN
SpeedArray[6] = Speed6
*/
void TrainSimulation_StructureCollection_eqFunction_18(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,18};
  data->localData[0]->realVars[25] /* SpeedArray[6] variable */ = data->localData[0]->realVars[16] /* Speed6 variable */;
  TRACE_POP
}
/*
equation index: 19
type: SIMPLE_ASSIGN
SpeedArray[5] = Speed5
*/
void TrainSimulation_StructureCollection_eqFunction_19(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,19};
  data->localData[0]->realVars[24] /* SpeedArray[5] variable */ = data->localData[0]->realVars[15] /* Speed5 variable */;
  TRACE_POP
}
/*
equation index: 20
type: SIMPLE_ASSIGN
SpeedArray[4] = Speed4
*/
void TrainSimulation_StructureCollection_eqFunction_20(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,20};
  data->localData[0]->realVars[23] /* SpeedArray[4] variable */ = data->localData[0]->realVars[14] /* Speed4 variable */;
  TRACE_POP
}
/*
equation index: 21
type: SIMPLE_ASSIGN
SpeedArray[3] = Speed3
*/
void TrainSimulation_StructureCollection_eqFunction_21(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,21};
  data->localData[0]->realVars[22] /* SpeedArray[3] variable */ = data->localData[0]->realVars[13] /* Speed3 variable */;
  TRACE_POP
}
/*
equation index: 22
type: SIMPLE_ASSIGN
SpeedArray[2] = Speed2
*/
void TrainSimulation_StructureCollection_eqFunction_22(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,22};
  data->localData[0]->realVars[21] /* SpeedArray[2] variable */ = data->localData[0]->realVars[12] /* Speed2 variable */;
  TRACE_POP
}
/*
equation index: 23
type: SIMPLE_ASSIGN
SpeedArray[1] = Speed1
*/
void TrainSimulation_StructureCollection_eqFunction_23(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,23};
  data->localData[0]->realVars[20] /* SpeedArray[1] variable */ = data->localData[0]->realVars[10] /* Speed1 variable */;
  TRACE_POP
}
/*
equation index: 24
type: SIMPLE_ASSIGN
number = TrainSimulation.StructureCollection.Active(10, {OnStructure1, OnStructure2, OnStructure3, OnStructure4, OnStructure5, OnStructure6, OnStructure7, OnStructure8, OnStructure9, OnStructure10})
*/
void TrainSimulation_StructureCollection_eqFunction_24(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,24};
  real_array tmp0;
  array_alloc_scalar_real_array(&tmp0, 10, (modelica_real)data->localData[0]->realVars[0] /* OnStructure1 variable */, (modelica_real)data->localData[0]->realVars[2] /* OnStructure2 variable */, (modelica_real)data->localData[0]->realVars[3] /* OnStructure3 variable */, (modelica_real)data->localData[0]->realVars[4] /* OnStructure4 variable */, (modelica_real)data->localData[0]->realVars[5] /* OnStructure5 variable */, (modelica_real)data->localData[0]->realVars[6] /* OnStructure6 variable */, (modelica_real)data->localData[0]->realVars[7] /* OnStructure7 variable */, (modelica_real)data->localData[0]->realVars[8] /* OnStructure8 variable */, (modelica_real)data->localData[0]->realVars[9] /* OnStructure9 variable */, (modelica_real)data->localData[0]->realVars[1] /* OnStructure10 variable */);
  data->localData[0]->integerVars[0] /* number DISCRETE */ = omc_TrainSimulation_StructureCollection_Active(threadData, ((modelica_integer) 10), tmp0);
  TRACE_POP
}
/*
equation index: 25
type: SIMPLE_ASSIGN
speed = if number > -1 and number <= 10 then SpeedArray[number] else 0.0
*/
void TrainSimulation_StructureCollection_eqFunction_25(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,25};
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  tmp1 = Greater(data->localData[0]->integerVars[0] /* number DISCRETE */,((modelica_integer) -1));
  tmp2 = LessEq(data->localData[0]->integerVars[0] /* number DISCRETE */,((modelica_integer) 10));
  data->localData[0]->realVars[30] /* speed variable */ = ((tmp1 && tmp2)?(&data->localData[0]->realVars[20] /* SpeedArray[1] variable */)[calc_base_index_dims_subs(1, 10, data->localData[0]->integerVars[0] /* number DISCRETE */)]:0.0);
  TRACE_POP
}
/*
equation index: 26
type: SIMPLE_ASSIGN
Activated = number > -1 and number <= 10
*/
void TrainSimulation_StructureCollection_eqFunction_26(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,26};
  modelica_boolean tmp3;
  modelica_boolean tmp4;
  tmp3 = Greater(data->localData[0]->integerVars[0] /* number DISCRETE */,((modelica_integer) -1));
  tmp4 = LessEq(data->localData[0]->integerVars[0] /* number DISCRETE */,((modelica_integer) 10));
  data->localData[0]->booleanVars[0] /* Activated variable */ = (tmp3 && tmp4);
  TRACE_POP
}

OMC_DISABLE_OPT
int TrainSimulation_StructureCollection_functionDAE(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  int equationIndexes[1] = {0};
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_DAE);
#endif

  data->simulationInfo->needToIterate = 0;
  data->simulationInfo->discreteCall = 1;
  TrainSimulation_StructureCollection_functionLocalKnownVars(data, threadData);
  TrainSimulation_StructureCollection_eqFunction_14(data, threadData);

  TrainSimulation_StructureCollection_eqFunction_15(data, threadData);

  TrainSimulation_StructureCollection_eqFunction_16(data, threadData);

  TrainSimulation_StructureCollection_eqFunction_17(data, threadData);

  TrainSimulation_StructureCollection_eqFunction_18(data, threadData);

  TrainSimulation_StructureCollection_eqFunction_19(data, threadData);

  TrainSimulation_StructureCollection_eqFunction_20(data, threadData);

  TrainSimulation_StructureCollection_eqFunction_21(data, threadData);

  TrainSimulation_StructureCollection_eqFunction_22(data, threadData);

  TrainSimulation_StructureCollection_eqFunction_23(data, threadData);

  TrainSimulation_StructureCollection_eqFunction_24(data, threadData);

  TrainSimulation_StructureCollection_eqFunction_25(data, threadData);

  TrainSimulation_StructureCollection_eqFunction_26(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_DAE);
#endif
  TRACE_POP
  return 0;
}


int TrainSimulation_StructureCollection_functionLocalKnownVars(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}


int TrainSimulation_StructureCollection_functionODE(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_FUNCTION_ODE);
#endif

  
  data->simulationInfo->callStatistics.functionODE++;
  
  TrainSimulation_StructureCollection_functionLocalKnownVars(data, threadData);
  /* no ODE systems */

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_FUNCTION_ODE);
#endif

  TRACE_POP
  return 0;
}

/* forward the main in the simulation runtime */
extern int _main_SimulationRuntime(int argc, char**argv, DATA *data, threadData_t *threadData);

#include "TrainSimulation_StructureCollection_12jac.h"
#include "TrainSimulation_StructureCollection_13opt.h"

struct OpenModelicaGeneratedFunctionCallbacks TrainSimulation_StructureCollection_callback = {
   NULL,
   NULL,
   NULL,
   TrainSimulation_StructureCollection_callExternalObjectDestructors,
   NULL,
   NULL,
   NULL,
   #if !defined(OMC_NO_STATESELECTION)
   TrainSimulation_StructureCollection_initializeStateSets,
   #else
   NULL,
   #endif
   TrainSimulation_StructureCollection_initializeDAEmodeData,
   TrainSimulation_StructureCollection_functionODE,
   TrainSimulation_StructureCollection_functionAlgebraics,
   TrainSimulation_StructureCollection_functionDAE,
   TrainSimulation_StructureCollection_functionLocalKnownVars,
   TrainSimulation_StructureCollection_input_function,
   TrainSimulation_StructureCollection_input_function_init,
   TrainSimulation_StructureCollection_input_function_updateStartValues,
   TrainSimulation_StructureCollection_data_function,
   TrainSimulation_StructureCollection_output_function,
   TrainSimulation_StructureCollection_setc_function,
   TrainSimulation_StructureCollection_function_storeDelayed,
   TrainSimulation_StructureCollection_updateBoundVariableAttributes,
   TrainSimulation_StructureCollection_functionInitialEquations,
   1, /* useHomotopy - 0: local homotopy (equidistant lambda), 1: global homotopy (equidistant lambda), 2: new global homotopy approach (adaptive lambda), 3: new local homotopy approach (adaptive lambda)*/
   TrainSimulation_StructureCollection_functionInitialEquations_lambda0,
   TrainSimulation_StructureCollection_functionRemovedInitialEquations,
   TrainSimulation_StructureCollection_updateBoundParameters,
   TrainSimulation_StructureCollection_checkForAsserts,
   TrainSimulation_StructureCollection_function_ZeroCrossingsEquations,
   TrainSimulation_StructureCollection_function_ZeroCrossings,
   TrainSimulation_StructureCollection_function_updateRelations,
   TrainSimulation_StructureCollection_zeroCrossingDescription,
   TrainSimulation_StructureCollection_relationDescription,
   TrainSimulation_StructureCollection_function_initSample,
   TrainSimulation_StructureCollection_INDEX_JAC_A,
   TrainSimulation_StructureCollection_INDEX_JAC_B,
   TrainSimulation_StructureCollection_INDEX_JAC_C,
   TrainSimulation_StructureCollection_INDEX_JAC_D,
   TrainSimulation_StructureCollection_INDEX_JAC_F,
   TrainSimulation_StructureCollection_initialAnalyticJacobianA,
   TrainSimulation_StructureCollection_initialAnalyticJacobianB,
   TrainSimulation_StructureCollection_initialAnalyticJacobianC,
   TrainSimulation_StructureCollection_initialAnalyticJacobianD,
   TrainSimulation_StructureCollection_initialAnalyticJacobianF,
   TrainSimulation_StructureCollection_functionJacA_column,
   TrainSimulation_StructureCollection_functionJacB_column,
   TrainSimulation_StructureCollection_functionJacC_column,
   TrainSimulation_StructureCollection_functionJacD_column,
   TrainSimulation_StructureCollection_functionJacF_column,
   TrainSimulation_StructureCollection_linear_model_frame,
   TrainSimulation_StructureCollection_linear_model_datarecovery_frame,
   TrainSimulation_StructureCollection_mayer,
   TrainSimulation_StructureCollection_lagrange,
   TrainSimulation_StructureCollection_pickUpBoundsForInputsInOptimization,
   TrainSimulation_StructureCollection_setInputData,
   TrainSimulation_StructureCollection_getTimeGrid,
   TrainSimulation_StructureCollection_symbolicInlineSystem,
   TrainSimulation_StructureCollection_function_initSynchronous,
   TrainSimulation_StructureCollection_function_updateSynchronous,
   TrainSimulation_StructureCollection_function_equationsSynchronous,
   TrainSimulation_StructureCollection_inputNames,
   TrainSimulation_StructureCollection_read_input_fmu,
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
void TrainSimulation_StructureCollection_setupDataStruc(DATA *data, threadData_t *threadData)
{
  assertStreamPrint(threadData,0!=data, "Error while initialize Data");
  threadData->localRoots[LOCAL_ROOT_SIMULATION_DATA] = data;
  data->callback = &TrainSimulation_StructureCollection_callback;
  OpenModelica_updateUriMapping(threadData, MMC_REFSTRUCTLIT(_OMC_LIT_RESOURCES));
  data->modelData->modelName = "TrainSimulation.StructureCollection";
  data->modelData->modelFilePrefix = "TrainSimulation_StructureCollection";
  data->modelData->resultFileName = NULL;
  data->modelData->modelDir = "E:/Szakdoga";
  data->modelData->modelGUID = "{a04d284f-0154-4037-b983-5e2a9c82486d}";
  data->modelData->initXMLData = NULL;
  data->modelData->modelDataXml.infoXMLData = NULL;
  data->modelData->runTestsuite = 0;
  
  data->modelData->nStates = 0;
  data->modelData->nVariablesReal = 31;
  data->modelData->nDiscreteReal = 0;
  data->modelData->nVariablesInteger = 1;
  data->modelData->nVariablesBoolean = 1;
  data->modelData->nVariablesString = 0;
  data->modelData->nParametersReal = 0;
  data->modelData->nParametersInteger = 1;
  data->modelData->nParametersBoolean = 0;
  data->modelData->nParametersString = 0;
  data->modelData->nInputVars = 20;
  data->modelData->nOutputVars = 2;
  
  data->modelData->nAliasReal = 11;
  data->modelData->nAliasInteger = 0;
  data->modelData->nAliasBoolean = 1;
  data->modelData->nAliasString = 0;
  
  data->modelData->nZeroCrossings = 0;
  data->modelData->nSamples = 0;
  data->modelData->nRelations = 0;
  data->modelData->nMathEvents = 0;
  data->modelData->nExtObjs = 0;
  
  GC_asprintf(&data->modelData->modelDataXml.fileName, "%s/TrainSimulation_StructureCollection_info.json", data->modelData->resourcesDir);
  data->modelData->modelDataXml.modelInfoXmlLength = 0;
  data->modelData->modelDataXml.nFunctions = 1;
  data->modelData->modelDataXml.nProfileBlocks = 0;
  data->modelData->modelDataXml.nEquations = 28;
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

