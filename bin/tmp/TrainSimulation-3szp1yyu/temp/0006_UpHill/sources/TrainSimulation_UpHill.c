/* Main Simulation File */

#if defined(__cplusplus)
extern "C" {
#endif

#include "TrainSimulation_UpHill_model.h"
#include "simulation/solver/events.h"


/* dummy VARINFO and FILEINFO */
const FILE_INFO dummyFILE_INFO = omc_dummyFileInfo;
const VAR_INFO dummyVAR_INFO = omc_dummyVarInfo;

int TrainSimulation_UpHill_input_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->localData[0]->realVars[10] /* TrainDistance[1] variable */ = data->simulationInfo->inputVars[0];
  data->localData[0]->realVars[11] /* TrainDistance[2] variable */ = data->simulationInfo->inputVars[1];
  data->localData[0]->realVars[12] /* TrainDistance[3] variable */ = data->simulationInfo->inputVars[2];
  data->localData[0]->realVars[13] /* TrainDistance[4] variable */ = data->simulationInfo->inputVars[3];
  data->localData[0]->realVars[14] /* TrainDistance[5] variable */ = data->simulationInfo->inputVars[4];
  data->localData[0]->realVars[15] /* TrainDistance[6] variable */ = data->simulationInfo->inputVars[5];
  data->localData[0]->realVars[16] /* TrainDistance[7] variable */ = data->simulationInfo->inputVars[6];
  data->localData[0]->realVars[17] /* TrainDistance[8] variable */ = data->simulationInfo->inputVars[7];
  data->localData[0]->realVars[18] /* TrainDistance[9] variable */ = data->simulationInfo->inputVars[8];
  data->localData[0]->realVars[19] /* TrainDistance[10] variable */ = data->simulationInfo->inputVars[9];
  data->localData[0]->realVars[20] /* TrainLength[1] variable */ = data->simulationInfo->inputVars[10];
  data->localData[0]->realVars[21] /* TrainLength[2] variable */ = data->simulationInfo->inputVars[11];
  data->localData[0]->realVars[22] /* TrainLength[3] variable */ = data->simulationInfo->inputVars[12];
  data->localData[0]->realVars[23] /* TrainLength[4] variable */ = data->simulationInfo->inputVars[13];
  data->localData[0]->realVars[24] /* TrainLength[5] variable */ = data->simulationInfo->inputVars[14];
  data->localData[0]->realVars[25] /* TrainLength[6] variable */ = data->simulationInfo->inputVars[15];
  data->localData[0]->realVars[26] /* TrainLength[7] variable */ = data->simulationInfo->inputVars[16];
  data->localData[0]->realVars[27] /* TrainLength[8] variable */ = data->simulationInfo->inputVars[17];
  data->localData[0]->realVars[28] /* TrainLength[9] variable */ = data->simulationInfo->inputVars[18];
  data->localData[0]->realVars[29] /* TrainLength[10] variable */ = data->simulationInfo->inputVars[19];
  
  TRACE_POP
  return 0;
}

int TrainSimulation_UpHill_input_function_init(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->inputVars[0] = data->modelData->realVarsData[10].attribute.start;
  data->simulationInfo->inputVars[1] = data->modelData->realVarsData[11].attribute.start;
  data->simulationInfo->inputVars[2] = data->modelData->realVarsData[12].attribute.start;
  data->simulationInfo->inputVars[3] = data->modelData->realVarsData[13].attribute.start;
  data->simulationInfo->inputVars[4] = data->modelData->realVarsData[14].attribute.start;
  data->simulationInfo->inputVars[5] = data->modelData->realVarsData[15].attribute.start;
  data->simulationInfo->inputVars[6] = data->modelData->realVarsData[16].attribute.start;
  data->simulationInfo->inputVars[7] = data->modelData->realVarsData[17].attribute.start;
  data->simulationInfo->inputVars[8] = data->modelData->realVarsData[18].attribute.start;
  data->simulationInfo->inputVars[9] = data->modelData->realVarsData[19].attribute.start;
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

int TrainSimulation_UpHill_input_function_updateStartValues(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->modelData->realVarsData[10].attribute.start = data->simulationInfo->inputVars[0];
  data->modelData->realVarsData[11].attribute.start = data->simulationInfo->inputVars[1];
  data->modelData->realVarsData[12].attribute.start = data->simulationInfo->inputVars[2];
  data->modelData->realVarsData[13].attribute.start = data->simulationInfo->inputVars[3];
  data->modelData->realVarsData[14].attribute.start = data->simulationInfo->inputVars[4];
  data->modelData->realVarsData[15].attribute.start = data->simulationInfo->inputVars[5];
  data->modelData->realVarsData[16].attribute.start = data->simulationInfo->inputVars[6];
  data->modelData->realVarsData[17].attribute.start = data->simulationInfo->inputVars[7];
  data->modelData->realVarsData[18].attribute.start = data->simulationInfo->inputVars[8];
  data->modelData->realVarsData[19].attribute.start = data->simulationInfo->inputVars[9];
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

int TrainSimulation_UpHill_inputNames(DATA *data, char ** names){
  TRACE_PUSH

  names[0] = (char *) data->modelData->realVarsData[10].info.name;
  names[1] = (char *) data->modelData->realVarsData[11].info.name;
  names[2] = (char *) data->modelData->realVarsData[12].info.name;
  names[3] = (char *) data->modelData->realVarsData[13].info.name;
  names[4] = (char *) data->modelData->realVarsData[14].info.name;
  names[5] = (char *) data->modelData->realVarsData[15].info.name;
  names[6] = (char *) data->modelData->realVarsData[16].info.name;
  names[7] = (char *) data->modelData->realVarsData[17].info.name;
  names[8] = (char *) data->modelData->realVarsData[18].info.name;
  names[9] = (char *) data->modelData->realVarsData[19].info.name;
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

int TrainSimulation_UpHill_data_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  TRACE_POP
  return 0;
}

int TrainSimulation_UpHill_output_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->outputVars[0] = data->localData[0]->realVars[0] /* HillAcc[1] variable */;
  data->simulationInfo->outputVars[1] = data->localData[0]->realVars[1] /* HillAcc[2] variable */;
  data->simulationInfo->outputVars[2] = data->localData[0]->realVars[2] /* HillAcc[3] variable */;
  data->simulationInfo->outputVars[3] = data->localData[0]->realVars[3] /* HillAcc[4] variable */;
  data->simulationInfo->outputVars[4] = data->localData[0]->realVars[4] /* HillAcc[5] variable */;
  data->simulationInfo->outputVars[5] = data->localData[0]->realVars[5] /* HillAcc[6] variable */;
  data->simulationInfo->outputVars[6] = data->localData[0]->realVars[6] /* HillAcc[7] variable */;
  data->simulationInfo->outputVars[7] = data->localData[0]->realVars[7] /* HillAcc[8] variable */;
  data->simulationInfo->outputVars[8] = data->localData[0]->realVars[8] /* HillAcc[9] variable */;
  data->simulationInfo->outputVars[9] = data->localData[0]->realVars[9] /* HillAcc[10] variable */;
  data->simulationInfo->outputVars[10] = data->localData[0]->realVars[30] /* onHill[1] variable */;
  data->simulationInfo->outputVars[11] = data->localData[0]->realVars[31] /* onHill[2] variable */;
  data->simulationInfo->outputVars[12] = data->localData[0]->realVars[32] /* onHill[3] variable */;
  data->simulationInfo->outputVars[13] = data->localData[0]->realVars[33] /* onHill[4] variable */;
  data->simulationInfo->outputVars[14] = data->localData[0]->realVars[34] /* onHill[5] variable */;
  data->simulationInfo->outputVars[15] = data->localData[0]->realVars[35] /* onHill[6] variable */;
  data->simulationInfo->outputVars[16] = data->localData[0]->realVars[36] /* onHill[7] variable */;
  data->simulationInfo->outputVars[17] = data->localData[0]->realVars[37] /* onHill[8] variable */;
  data->simulationInfo->outputVars[18] = data->localData[0]->realVars[38] /* onHill[9] variable */;
  data->simulationInfo->outputVars[19] = data->localData[0]->realVars[39] /* onHill[10] variable */;
  
  TRACE_POP
  return 0;
}

int TrainSimulation_UpHill_setc_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}


/*
equation index: 3
type: ARRAY_CALL_ASSIGN

onHill = TrainSimulation.UpHill.OnTrack(10, TrainDistance, TrainLength)
*/
void TrainSimulation_UpHill_eqFunction_3(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3};
  real_array tmp0;
  real_array tmp1;
  real_array tmp2;
  real_array_create(&tmp0, ((modelica_real*)&((&data->localData[0]->realVars[10] /* TrainDistance[1] variable */)[calc_base_index_dims_subs(1, 10, ((modelica_integer) 1))])), 1, 10);
  real_array_create(&tmp1, ((modelica_real*)&((&data->localData[0]->realVars[20] /* TrainLength[1] variable */)[calc_base_index_dims_subs(1, 10, ((modelica_integer) 1))])), 1, 10);
  real_array_create(&tmp2, ((modelica_real*)&((&data->localData[0]->realVars[30] /* onHill[1] variable */)[calc_base_index_dims_subs(1, 10, ((modelica_integer) 1))])), 1, 10);
  copy_real_array_data(omc_TrainSimulation_UpHill_OnTrack(threadData, ((modelica_integer) 10), tmp0, tmp1), &tmp2);
  TRACE_POP
}
/*
equation index: 4
type: ARRAY_CALL_ASSIGN

HillAcc = -TrainSimulation.UpHill.SpeedCalculations(10, 9.810000000000001 * sin(angle * 0.0174532925)) * 1.0
*/
void TrainSimulation_UpHill_eqFunction_4(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4};
  real_array tmp3;
  real_array tmp4;
  usub_alloc_real_array(mul_alloc_real_array_scalar(omc_TrainSimulation_UpHill_SpeedCalculations(threadData, ((modelica_integer) 10), (9.810000000000001) * (sin((data->simulationInfo->realParameter[2] /* angle PARAM */) * (0.0174532925)))), 1.0),&tmp3);
  real_array_create(&tmp4, ((modelica_real*)&((&data->localData[0]->realVars[0] /* HillAcc[1] variable */)[calc_base_index_dims_subs(1, 10, ((modelica_integer) 1))])), 1, 10);
  copy_real_array_data(tmp3, &tmp4);
  TRACE_POP
}

OMC_DISABLE_OPT
int TrainSimulation_UpHill_functionDAE(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  int equationIndexes[1] = {0};
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_DAE);
#endif

  data->simulationInfo->needToIterate = 0;
  data->simulationInfo->discreteCall = 1;
  TrainSimulation_UpHill_functionLocalKnownVars(data, threadData);
  TrainSimulation_UpHill_eqFunction_3(data, threadData);

  TrainSimulation_UpHill_eqFunction_4(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_DAE);
#endif
  TRACE_POP
  return 0;
}


int TrainSimulation_UpHill_functionLocalKnownVars(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}


int TrainSimulation_UpHill_functionODE(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_FUNCTION_ODE);
#endif

  
  data->simulationInfo->callStatistics.functionODE++;
  
  TrainSimulation_UpHill_functionLocalKnownVars(data, threadData);
  /* no ODE systems */

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_FUNCTION_ODE);
#endif

  TRACE_POP
  return 0;
}

/* forward the main in the simulation runtime */
extern int _main_SimulationRuntime(int argc, char**argv, DATA *data, threadData_t *threadData);

#include "TrainSimulation_UpHill_12jac.h"
#include "TrainSimulation_UpHill_13opt.h"

struct OpenModelicaGeneratedFunctionCallbacks TrainSimulation_UpHill_callback = {
   NULL,
   NULL,
   NULL,
   TrainSimulation_UpHill_callExternalObjectDestructors,
   NULL,
   NULL,
   NULL,
   #if !defined(OMC_NO_STATESELECTION)
   TrainSimulation_UpHill_initializeStateSets,
   #else
   NULL,
   #endif
   TrainSimulation_UpHill_initializeDAEmodeData,
   TrainSimulation_UpHill_functionODE,
   TrainSimulation_UpHill_functionAlgebraics,
   TrainSimulation_UpHill_functionDAE,
   TrainSimulation_UpHill_functionLocalKnownVars,
   TrainSimulation_UpHill_input_function,
   TrainSimulation_UpHill_input_function_init,
   TrainSimulation_UpHill_input_function_updateStartValues,
   TrainSimulation_UpHill_data_function,
   TrainSimulation_UpHill_output_function,
   TrainSimulation_UpHill_setc_function,
   TrainSimulation_UpHill_function_storeDelayed,
   TrainSimulation_UpHill_updateBoundVariableAttributes,
   TrainSimulation_UpHill_functionInitialEquations,
   1, /* useHomotopy - 0: local homotopy (equidistant lambda), 1: global homotopy (equidistant lambda), 2: new global homotopy approach (adaptive lambda), 3: new local homotopy approach (adaptive lambda)*/
   TrainSimulation_UpHill_functionInitialEquations_lambda0,
   TrainSimulation_UpHill_functionRemovedInitialEquations,
   TrainSimulation_UpHill_updateBoundParameters,
   TrainSimulation_UpHill_checkForAsserts,
   TrainSimulation_UpHill_function_ZeroCrossingsEquations,
   TrainSimulation_UpHill_function_ZeroCrossings,
   TrainSimulation_UpHill_function_updateRelations,
   TrainSimulation_UpHill_zeroCrossingDescription,
   TrainSimulation_UpHill_relationDescription,
   TrainSimulation_UpHill_function_initSample,
   TrainSimulation_UpHill_INDEX_JAC_A,
   TrainSimulation_UpHill_INDEX_JAC_B,
   TrainSimulation_UpHill_INDEX_JAC_C,
   TrainSimulation_UpHill_INDEX_JAC_D,
   TrainSimulation_UpHill_INDEX_JAC_F,
   TrainSimulation_UpHill_initialAnalyticJacobianA,
   TrainSimulation_UpHill_initialAnalyticJacobianB,
   TrainSimulation_UpHill_initialAnalyticJacobianC,
   TrainSimulation_UpHill_initialAnalyticJacobianD,
   TrainSimulation_UpHill_initialAnalyticJacobianF,
   TrainSimulation_UpHill_functionJacA_column,
   TrainSimulation_UpHill_functionJacB_column,
   TrainSimulation_UpHill_functionJacC_column,
   TrainSimulation_UpHill_functionJacD_column,
   TrainSimulation_UpHill_functionJacF_column,
   TrainSimulation_UpHill_linear_model_frame,
   TrainSimulation_UpHill_linear_model_datarecovery_frame,
   TrainSimulation_UpHill_mayer,
   TrainSimulation_UpHill_lagrange,
   TrainSimulation_UpHill_pickUpBoundsForInputsInOptimization,
   TrainSimulation_UpHill_setInputData,
   TrainSimulation_UpHill_getTimeGrid,
   TrainSimulation_UpHill_symbolicInlineSystem,
   TrainSimulation_UpHill_function_initSynchronous,
   TrainSimulation_UpHill_function_updateSynchronous,
   TrainSimulation_UpHill_function_equationsSynchronous,
   TrainSimulation_UpHill_inputNames,
   TrainSimulation_UpHill_read_input_fmu,
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
void TrainSimulation_UpHill_setupDataStruc(DATA *data, threadData_t *threadData)
{
  assertStreamPrint(threadData,0!=data, "Error while initialize Data");
  threadData->localRoots[LOCAL_ROOT_SIMULATION_DATA] = data;
  data->callback = &TrainSimulation_UpHill_callback;
  OpenModelica_updateUriMapping(threadData, MMC_REFSTRUCTLIT(_OMC_LIT_RESOURCES));
  data->modelData->modelName = "TrainSimulation.UpHill";
  data->modelData->modelFilePrefix = "TrainSimulation_UpHill";
  data->modelData->resultFileName = NULL;
  data->modelData->modelDir = "E:/Szakdoga";
  data->modelData->modelGUID = "{5dcadf7a-8a96-47c7-b8d2-4150f8d01b0a}";
  data->modelData->initXMLData = NULL;
  data->modelData->modelDataXml.infoXMLData = NULL;
  data->modelData->runTestsuite = 0;
  
  data->modelData->nStates = 0;
  data->modelData->nVariablesReal = 40;
  data->modelData->nDiscreteReal = 0;
  data->modelData->nVariablesInteger = 0;
  data->modelData->nVariablesBoolean = 0;
  data->modelData->nVariablesString = 0;
  data->modelData->nParametersReal = 3;
  data->modelData->nParametersInteger = 1;
  data->modelData->nParametersBoolean = 0;
  data->modelData->nParametersString = 0;
  data->modelData->nInputVars = 20;
  data->modelData->nOutputVars = 20;
  
  data->modelData->nAliasReal = 20;
  data->modelData->nAliasInteger = 0;
  data->modelData->nAliasBoolean = 0;
  data->modelData->nAliasString = 0;
  
  data->modelData->nZeroCrossings = 0;
  data->modelData->nSamples = 0;
  data->modelData->nRelations = 0;
  data->modelData->nMathEvents = 0;
  data->modelData->nExtObjs = 0;
  
  GC_asprintf(&data->modelData->modelDataXml.fileName, "%s/TrainSimulation_UpHill_info.json", data->modelData->resourcesDir);
  data->modelData->modelDataXml.modelInfoXmlLength = 0;
  data->modelData->modelDataXml.nFunctions = 2;
  data->modelData->modelDataXml.nProfileBlocks = 0;
  data->modelData->modelDataXml.nEquations = 6;
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

