/* Main Simulation File */

#if defined(__cplusplus)
extern "C" {
#endif

#include "TrainSimulation_TrainStation_model.h"
#include "simulation/solver/events.h"


/* dummy VARINFO and FILEINFO */
const FILE_INFO dummyFILE_INFO = omc_dummyFileInfo;
const VAR_INFO dummyVAR_INFO = omc_dummyVarInfo;

int TrainSimulation_TrainStation_input_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->localData[0]->realVars[6] /* Safe_Passage variable */ = data->simulationInfo->inputVars[0];
  
  TRACE_POP
  return 0;
}

int TrainSimulation_TrainStation_input_function_init(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->inputVars[0] = data->modelData->realVarsData[6].attribute.start;
  
  TRACE_POP
  return 0;
}

int TrainSimulation_TrainStation_input_function_updateStartValues(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->modelData->realVarsData[6].attribute.start = data->simulationInfo->inputVars[0];
  
  TRACE_POP
  return 0;
}

int TrainSimulation_TrainStation_inputNames(DATA *data, char ** names){
  TRACE_PUSH

  names[0] = (char *) data->modelData->realVarsData[6].info.name;
  
  TRACE_POP
  return 0;
}

int TrainSimulation_TrainStation_data_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  TRACE_POP
  return 0;
}

int TrainSimulation_TrainStation_output_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int TrainSimulation_TrainStation_setc_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}


/*
equation index: 36
type: SIMPLE_ASSIGN
RedToGreen.condition = Safe_Passage >= 0.9
*/
void TrainSimulation_TrainStation_eqFunction_36(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,36};
  modelica_boolean tmp0;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[6] /* Safe_Passage variable */, 0.9, 1, GreaterEq);
  data->localData[0]->booleanVars[4] /* RedToGreen.condition DISCRETE */ = tmp0;
  TRACE_POP
}
/*
equation index: 37
type: SIMPLE_ASSIGN
GreenToRed.condition = Safe_Passage <= 0.9
*/
void TrainSimulation_TrainStation_eqFunction_37(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,37};
  modelica_boolean tmp1;
  RELATIONHYSTERESIS(tmp1, data->localData[0]->realVars[6] /* Safe_Passage variable */, 0.9, 0, LessEq);
  data->localData[0]->booleanVars[2] /* GreenToRed.condition DISCRETE */ = tmp1;
  TRACE_POP
}
/*
equation index: 38
type: SIMPLE_ASSIGN
red.active = pre(red.newActive)
*/
void TrainSimulation_TrainStation_eqFunction_38(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,38};
  data->localData[0]->booleanVars[10] /* red.active DISCRETE */ = data->simulationInfo->booleanVarsPre[12] /* red.newActive DISCRETE */;
  TRACE_POP
}
/*
equation index: 39
type: SIMPLE_ASSIGN
red.outerStatePort.subgraphStatePort.activeSteps = if red.active then 1.0 else 0.0
*/
void TrainSimulation_TrainStation_eqFunction_39(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,39};
  data->localData[0]->realVars[8] /* red.outerStatePort.subgraphStatePort.activeSteps variable */ = (data->localData[0]->booleanVars[10] /* red.active DISCRETE */?1.0:0.0);
  TRACE_POP
}
/*
equation index: 40
type: WHEN

when {} then
  red.oldActive = red.active;
end when;
*/
void TrainSimulation_TrainStation_eqFunction_40(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,40};
  if(0)
  {
    data->localData[0]->booleanVars[13] /* red.oldActive DISCRETE */ = data->localData[0]->booleanVars[10] /* red.active DISCRETE */;
  }
  TRACE_POP
}
/*
equation index: 41
type: SIMPLE_ASSIGN
red.localActive = red.active
*/
void TrainSimulation_TrainStation_eqFunction_41(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,41};
  data->localData[0]->booleanVars[11] /* red.localActive DISCRETE */ = data->localData[0]->booleanVars[10] /* red.active DISCRETE */;
  TRACE_POP
}
/*
equation index: 42
type: SIMPLE_ASSIGN
green.active = pre(green.newActive)
*/
void TrainSimulation_TrainStation_eqFunction_42(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,42};
  data->localData[0]->booleanVars[6] /* green.active DISCRETE */ = data->simulationInfo->booleanVarsPre[8] /* green.newActive DISCRETE */;
  TRACE_POP
}
/*
equation index: 43
type: SIMPLE_ASSIGN
green.outerStatePort.subgraphStatePort.activeSteps = if green.active then 1.0 else 0.0
*/
void TrainSimulation_TrainStation_eqFunction_43(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,43};
  data->localData[0]->realVars[7] /* green.outerStatePort.subgraphStatePort.activeSteps variable */ = (data->localData[0]->booleanVars[6] /* green.active DISCRETE */?1.0:0.0);
  TRACE_POP
}
/*
equation index: 44
type: SIMPLE_ASSIGN
stateGraphRoot.subgraphStatePort.activeSteps = (-red.outerStatePort.subgraphStatePort.activeSteps) - green.outerStatePort.subgraphStatePort.activeSteps
*/
void TrainSimulation_TrainStation_eqFunction_44(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,44};
  data->localData[0]->realVars[9] /* stateGraphRoot.subgraphStatePort.activeSteps variable */ = (-data->localData[0]->realVars[8] /* red.outerStatePort.subgraphStatePort.activeSteps variable */) - data->localData[0]->realVars[7] /* green.outerStatePort.subgraphStatePort.activeSteps variable */;
  TRACE_POP
}
/*
equation index: 45
type: SIMPLE_ASSIGN
stateGraphRoot.activeSteps = -integer(stateGraphRoot.subgraphStatePort.activeSteps, 0)
*/
void TrainSimulation_TrainStation_eqFunction_45(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,45};
  data->localData[0]->integerVars[2] /* stateGraphRoot.activeSteps DISCRETE */ = (-(_event_integer(data->localData[0]->realVars[9] /* stateGraphRoot.subgraphStatePort.activeSteps variable */, ((modelica_integer) 0), data)));
  TRACE_POP
}
/*
equation index: 46
type: SIMPLE_ASSIGN
state = if green.active then TrainSimulation.StationSignal.green else TrainSimulation.StationSignal.red
*/
void TrainSimulation_TrainStation_eqFunction_46(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,46};
  data->localData[0]->integerVars[1] /* state DISCRETE */ = (data->localData[0]->booleanVars[6] /* green.active DISCRETE */?1:2);
  TRACE_POP
}
/*
equation index: 47
type: SIMPLE_ASSIGN
StationState = Integer(state)
*/
void TrainSimulation_TrainStation_eqFunction_47(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,47};
  data->localData[0]->integerVars[0] /* StationState variable */ = ((modelica_integer)(data->localData[0]->integerVars[1] /* state DISCRETE */));
  TRACE_POP
}
/*
equation index: 48
type: SIMPLE_ASSIGN
GreenToRed.enableFire = GreenToRed.condition and green.active and not red.active
*/
void TrainSimulation_TrainStation_eqFunction_48(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,48};
  data->localData[0]->booleanVars[3] /* GreenToRed.enableFire DISCRETE */ = ((data->localData[0]->booleanVars[2] /* GreenToRed.condition DISCRETE */ && data->localData[0]->booleanVars[6] /* green.active DISCRETE */) && (!data->localData[0]->booleanVars[10] /* red.active DISCRETE */));
  TRACE_POP
}
/*
equation index: 49
type: SIMPLE_ASSIGN
$cse1 = Modelica.StateGraph.Temporary.anyTrue({GreenToRed.enableFire})
*/
void TrainSimulation_TrainStation_eqFunction_49(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,49};
  boolean_array tmp2;
  array_alloc_scalar_boolean_array(&tmp2, 1, (modelica_boolean)data->localData[0]->booleanVars[3] /* GreenToRed.enableFire DISCRETE */);
  data->localData[0]->booleanVars[0] /* $cse1 DISCRETE */ = omc_Modelica_StateGraph_Temporary_anyTrue(threadData, tmp2);
  TRACE_POP
}
/*
equation index: 50
type: SIMPLE_ASSIGN
RedToGreen.enableFire = RedToGreen.condition and red.active and not green.active
*/
void TrainSimulation_TrainStation_eqFunction_50(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,50};
  data->localData[0]->booleanVars[5] /* RedToGreen.enableFire DISCRETE */ = ((data->localData[0]->booleanVars[4] /* RedToGreen.condition DISCRETE */ && data->localData[0]->booleanVars[10] /* red.active DISCRETE */) && (!data->localData[0]->booleanVars[6] /* green.active DISCRETE */));
  TRACE_POP
}
/*
equation index: 51
type: SIMPLE_ASSIGN
$cse2 = Modelica.StateGraph.Temporary.anyTrue({RedToGreen.enableFire})
*/
void TrainSimulation_TrainStation_eqFunction_51(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,51};
  boolean_array tmp3;
  array_alloc_scalar_boolean_array(&tmp3, 1, (modelica_boolean)data->localData[0]->booleanVars[5] /* RedToGreen.enableFire DISCRETE */);
  data->localData[0]->booleanVars[1] /* $cse2 DISCRETE */ = omc_Modelica_StateGraph_Temporary_anyTrue(threadData, tmp3);
  TRACE_POP
}
/*
equation index: 52
type: SIMPLE_ASSIGN
red.newActive = $cse1 or red.active and not $cse2
*/
void TrainSimulation_TrainStation_eqFunction_52(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,52};
  data->localData[0]->booleanVars[12] /* red.newActive DISCRETE */ = (data->localData[0]->booleanVars[0] /* $cse1 DISCRETE */ || (data->localData[0]->booleanVars[10] /* red.active DISCRETE */ && (!data->localData[0]->booleanVars[1] /* $cse2 DISCRETE */)));
  TRACE_POP
}
/*
equation index: 53
type: SIMPLE_ASSIGN
green.newActive = $cse2 or green.active and not $cse1
*/
void TrainSimulation_TrainStation_eqFunction_53(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,53};
  data->localData[0]->booleanVars[8] /* green.newActive DISCRETE */ = (data->localData[0]->booleanVars[1] /* $cse2 DISCRETE */ || (data->localData[0]->booleanVars[6] /* green.active DISCRETE */ && (!data->localData[0]->booleanVars[0] /* $cse1 DISCRETE */)));
  TRACE_POP
}
/*
equation index: 54
type: WHEN

when {} then
  green.oldActive = green.active;
end when;
*/
void TrainSimulation_TrainStation_eqFunction_54(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,54};
  if(0)
  {
    data->localData[0]->booleanVars[9] /* green.oldActive DISCRETE */ = data->localData[0]->booleanVars[6] /* green.active DISCRETE */;
  }
  TRACE_POP
}
/*
equation index: 55
type: SIMPLE_ASSIGN
green.localActive = green.active
*/
void TrainSimulation_TrainStation_eqFunction_55(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,55};
  data->localData[0]->booleanVars[7] /* green.localActive DISCRETE */ = data->localData[0]->booleanVars[6] /* green.active DISCRETE */;
  TRACE_POP
}

OMC_DISABLE_OPT
int TrainSimulation_TrainStation_functionDAE(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  int equationIndexes[1] = {0};
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_DAE);
#endif

  data->simulationInfo->needToIterate = 0;
  data->simulationInfo->discreteCall = 1;
  TrainSimulation_TrainStation_functionLocalKnownVars(data, threadData);
  TrainSimulation_TrainStation_eqFunction_36(data, threadData);

  TrainSimulation_TrainStation_eqFunction_37(data, threadData);

  TrainSimulation_TrainStation_eqFunction_38(data, threadData);

  TrainSimulation_TrainStation_eqFunction_39(data, threadData);

  TrainSimulation_TrainStation_eqFunction_40(data, threadData);

  TrainSimulation_TrainStation_eqFunction_41(data, threadData);

  TrainSimulation_TrainStation_eqFunction_42(data, threadData);

  TrainSimulation_TrainStation_eqFunction_43(data, threadData);

  TrainSimulation_TrainStation_eqFunction_44(data, threadData);

  TrainSimulation_TrainStation_eqFunction_45(data, threadData);

  TrainSimulation_TrainStation_eqFunction_46(data, threadData);

  TrainSimulation_TrainStation_eqFunction_47(data, threadData);

  TrainSimulation_TrainStation_eqFunction_48(data, threadData);

  TrainSimulation_TrainStation_eqFunction_49(data, threadData);

  TrainSimulation_TrainStation_eqFunction_50(data, threadData);

  TrainSimulation_TrainStation_eqFunction_51(data, threadData);

  TrainSimulation_TrainStation_eqFunction_52(data, threadData);

  TrainSimulation_TrainStation_eqFunction_53(data, threadData);

  TrainSimulation_TrainStation_eqFunction_54(data, threadData);

  TrainSimulation_TrainStation_eqFunction_55(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_DAE);
#endif
  TRACE_POP
  return 0;
}


int TrainSimulation_TrainStation_functionLocalKnownVars(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}


int TrainSimulation_TrainStation_functionODE(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_FUNCTION_ODE);
#endif

  
  data->simulationInfo->callStatistics.functionODE++;
  
  TrainSimulation_TrainStation_functionLocalKnownVars(data, threadData);
  /* no ODE systems */

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_FUNCTION_ODE);
#endif

  TRACE_POP
  return 0;
}

/* forward the main in the simulation runtime */
extern int _main_SimulationRuntime(int argc, char**argv, DATA *data, threadData_t *threadData);

#include "TrainSimulation_TrainStation_12jac.h"
#include "TrainSimulation_TrainStation_13opt.h"

struct OpenModelicaGeneratedFunctionCallbacks TrainSimulation_TrainStation_callback = {
   NULL,
   NULL,
   NULL,
   TrainSimulation_TrainStation_callExternalObjectDestructors,
   NULL,
   NULL,
   NULL,
   #if !defined(OMC_NO_STATESELECTION)
   TrainSimulation_TrainStation_initializeStateSets,
   #else
   NULL,
   #endif
   TrainSimulation_TrainStation_initializeDAEmodeData,
   TrainSimulation_TrainStation_functionODE,
   TrainSimulation_TrainStation_functionAlgebraics,
   TrainSimulation_TrainStation_functionDAE,
   TrainSimulation_TrainStation_functionLocalKnownVars,
   TrainSimulation_TrainStation_input_function,
   TrainSimulation_TrainStation_input_function_init,
   TrainSimulation_TrainStation_input_function_updateStartValues,
   TrainSimulation_TrainStation_data_function,
   TrainSimulation_TrainStation_output_function,
   TrainSimulation_TrainStation_setc_function,
   TrainSimulation_TrainStation_function_storeDelayed,
   TrainSimulation_TrainStation_updateBoundVariableAttributes,
   TrainSimulation_TrainStation_functionInitialEquations,
   1, /* useHomotopy - 0: local homotopy (equidistant lambda), 1: global homotopy (equidistant lambda), 2: new global homotopy approach (adaptive lambda), 3: new local homotopy approach (adaptive lambda)*/
   TrainSimulation_TrainStation_functionInitialEquations_lambda0,
   TrainSimulation_TrainStation_functionRemovedInitialEquations,
   TrainSimulation_TrainStation_updateBoundParameters,
   TrainSimulation_TrainStation_checkForAsserts,
   TrainSimulation_TrainStation_function_ZeroCrossingsEquations,
   TrainSimulation_TrainStation_function_ZeroCrossings,
   TrainSimulation_TrainStation_function_updateRelations,
   TrainSimulation_TrainStation_zeroCrossingDescription,
   TrainSimulation_TrainStation_relationDescription,
   TrainSimulation_TrainStation_function_initSample,
   TrainSimulation_TrainStation_INDEX_JAC_A,
   TrainSimulation_TrainStation_INDEX_JAC_B,
   TrainSimulation_TrainStation_INDEX_JAC_C,
   TrainSimulation_TrainStation_INDEX_JAC_D,
   TrainSimulation_TrainStation_INDEX_JAC_F,
   TrainSimulation_TrainStation_initialAnalyticJacobianA,
   TrainSimulation_TrainStation_initialAnalyticJacobianB,
   TrainSimulation_TrainStation_initialAnalyticJacobianC,
   TrainSimulation_TrainStation_initialAnalyticJacobianD,
   TrainSimulation_TrainStation_initialAnalyticJacobianF,
   TrainSimulation_TrainStation_functionJacA_column,
   TrainSimulation_TrainStation_functionJacB_column,
   TrainSimulation_TrainStation_functionJacC_column,
   TrainSimulation_TrainStation_functionJacD_column,
   TrainSimulation_TrainStation_functionJacF_column,
   TrainSimulation_TrainStation_linear_model_frame,
   TrainSimulation_TrainStation_linear_model_datarecovery_frame,
   TrainSimulation_TrainStation_mayer,
   TrainSimulation_TrainStation_lagrange,
   TrainSimulation_TrainStation_pickUpBoundsForInputsInOptimization,
   TrainSimulation_TrainStation_setInputData,
   TrainSimulation_TrainStation_getTimeGrid,
   TrainSimulation_TrainStation_symbolicInlineSystem,
   TrainSimulation_TrainStation_function_initSynchronous,
   TrainSimulation_TrainStation_function_updateSynchronous,
   TrainSimulation_TrainStation_function_equationsSynchronous,
   TrainSimulation_TrainStation_inputNames,
   TrainSimulation_TrainStation_read_input_fmu,
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
void TrainSimulation_TrainStation_setupDataStruc(DATA *data, threadData_t *threadData)
{
  assertStreamPrint(threadData,0!=data, "Error while initialize Data");
  threadData->localRoots[LOCAL_ROOT_SIMULATION_DATA] = data;
  data->callback = &TrainSimulation_TrainStation_callback;
  OpenModelica_updateUriMapping(threadData, MMC_REFSTRUCTLIT(_OMC_LIT_RESOURCES));
  data->modelData->modelName = "TrainSimulation.TrainStation";
  data->modelData->modelFilePrefix = "TrainSimulation_TrainStation";
  data->modelData->resultFileName = NULL;
  data->modelData->modelDir = "E:/Szakdoga";
  data->modelData->modelGUID = "{934bf6e5-8b56-49f9-bc0a-ad38f42bcef8}";
  data->modelData->initXMLData = NULL;
  data->modelData->modelDataXml.infoXMLData = NULL;
  data->modelData->runTestsuite = 0;
  
  data->modelData->nStates = 0;
  data->modelData->nVariablesReal = 11;
  data->modelData->nDiscreteReal = 0;
  data->modelData->nVariablesInteger = 3;
  data->modelData->nVariablesBoolean = 16;
  data->modelData->nVariablesString = 0;
  data->modelData->nParametersReal = 2;
  data->modelData->nParametersInteger = 4;
  data->modelData->nParametersBoolean = 2;
  data->modelData->nParametersString = 0;
  data->modelData->nInputVars = 1;
  data->modelData->nOutputVars = 1;
  
  data->modelData->nAliasReal = 2;
  data->modelData->nAliasInteger = 1;
  data->modelData->nAliasBoolean = 28;
  data->modelData->nAliasString = 0;
  
  data->modelData->nZeroCrossings = 3;
  data->modelData->nSamples = 0;
  data->modelData->nRelations = 2;
  data->modelData->nMathEvents = 1;
  data->modelData->nExtObjs = 0;
  
  GC_asprintf(&data->modelData->modelDataXml.fileName, "%s/TrainSimulation_TrainStation_info.json", data->modelData->resourcesDir);
  data->modelData->modelDataXml.modelInfoXmlLength = 0;
  data->modelData->modelDataXml.nFunctions = 1;
  data->modelData->modelDataXml.nProfileBlocks = 0;
  data->modelData->modelDataXml.nEquations = 78;
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

