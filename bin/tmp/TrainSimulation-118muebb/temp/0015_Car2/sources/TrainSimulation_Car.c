/* Main Simulation File */

#if defined(__cplusplus)
extern "C" {
#endif

#include "TrainSimulation_Car_model.h"
#include "simulation/solver/events.h"


/* dummy VARINFO and FILEINFO */
const FILE_INFO dummyFILE_INFO = omc_dummyFileInfo;
const VAR_INFO dummyVAR_INFO = omc_dummyVarInfo;

int TrainSimulation_Car_input_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->localData[0]->realVars[8] /* Gate_Angle variable */ = data->simulationInfo->inputVars[0];
  data->localData[0]->realVars[10] /* Target variable */ = data->simulationInfo->inputVars[1];
  
  TRACE_POP
  return 0;
}

int TrainSimulation_Car_input_function_init(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->inputVars[0] = data->modelData->realVarsData[8].attribute.start;
  data->simulationInfo->inputVars[1] = data->modelData->realVarsData[10].attribute.start;
  
  TRACE_POP
  return 0;
}

int TrainSimulation_Car_input_function_updateStartValues(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->modelData->realVarsData[8].attribute.start = data->simulationInfo->inputVars[0];
  data->modelData->realVarsData[10].attribute.start = data->simulationInfo->inputVars[1];
  
  TRACE_POP
  return 0;
}

int TrainSimulation_Car_inputNames(DATA *data, char ** names){
  TRACE_PUSH

  names[0] = (char *) data->modelData->realVarsData[8].info.name;
  names[1] = (char *) data->modelData->integerVarsData[0].info.name;
  names[2] = (char *) data->modelData->realVarsData[10].info.name;
  
  TRACE_POP
  return 0;
}

int TrainSimulation_Car_data_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  TRACE_POP
  return 0;
}

int TrainSimulation_Car_output_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->outputVars[0] = data->localData[0]->realVars[7] /* Distance variable */;
  data->simulationInfo->outputVars[1] = data->localData[0]->realVars[9] /* Length variable */;
  
  TRACE_POP
  return 0;
}

int TrainSimulation_Car_setc_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}


/*
equation index: 16
type: SIMPLE_ASSIGN
state = (*TrainSimulation.TrainLightColor*)(LightColor)
*/
void TrainSimulation_Car_eqFunction_16(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,16};
  data->localData[0]->integerVars[1] /* state DISCRETE */ = ((modelica_integer)data->localData[0]->integerVars[0] /* LightColor variable */);
  TRACE_POP
}
/*
equation index: 17
type: SIMPLE_ASSIGN
$whenCondition3 = distance < Target and state == TrainSimulation.TrainLightColor.on and Gate_Angle >= 90.0 and speed < maxSpeed
*/
void TrainSimulation_Car_eqFunction_17(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,17};
  modelica_boolean tmp0;
  modelica_boolean tmp2;
  modelica_boolean tmp3;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[1] /* distance STATE(1,speed) */, data->localData[0]->realVars[10] /* Target variable */, 7, Less);
  RELATIONHYSTERESIS(tmp2, data->localData[0]->realVars[8] /* Gate_Angle variable */, 90.0, 8, GreaterEq);
  RELATIONHYSTERESIS(tmp3, data->localData[0]->realVars[2] /* speed STATE(1,acceleration) */, data->simulationInfo->realParameter[6] /* maxSpeed PARAM */, 9, Less);
  data->localData[0]->booleanVars[2] /* $whenCondition3 DISCRETE */ = (((tmp0 && (data->localData[0]->integerVars[1] /* state DISCRETE */ == 1)) && tmp2) && tmp3);
  TRACE_POP
}
/*
equation index: 18
type: SIMPLE_ASSIGN
$DER.acceleration = 0.0
*/
void TrainSimulation_Car_eqFunction_18(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,18};
  data->localData[0]->realVars[3] /* der(acceleration) STATE_DER */ = 0.0;
  TRACE_POP
}
/*
equation index: 19
type: SIMPLE_ASSIGN
$DER.distance = speed
*/
void TrainSimulation_Car_eqFunction_19(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,19};
  data->localData[0]->realVars[4] /* der(distance) STATE_DER */ = data->localData[0]->realVars[2] /* speed STATE(1,acceleration) */;
  TRACE_POP
}
/*
equation index: 20
type: SIMPLE_ASSIGN
$DER.speed = acceleration
*/
void TrainSimulation_Car_eqFunction_20(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,20};
  data->localData[0]->realVars[5] /* der(speed) STATE_DER */ = data->localData[0]->realVars[0] /* acceleration STATE(1) */;
  TRACE_POP
}
/*
equation index: 21
type: SIMPLE_ASSIGN
BreakingDistance = 0.5 * (speed / breakingDeceleration) ^ 2.0 * breakingDeceleration
*/
void TrainSimulation_Car_eqFunction_21(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,21};
  modelica_real tmp4;
  tmp4 = DIVISION_SIM(data->localData[0]->realVars[2] /* speed STATE(1,acceleration) */,data->simulationInfo->realParameter[1] /* breakingDeceleration PARAM */,"breakingDeceleration",equationIndexes);
  data->localData[0]->realVars[6] /* BreakingDistance variable */ = (0.5) * (((tmp4 * tmp4)) * (data->simulationInfo->realParameter[1] /* breakingDeceleration PARAM */));
  TRACE_POP
}
/*
equation index: 22
type: SIMPLE_ASSIGN
$whenCondition2 = distance + BreakingDistance + 5.0 >= Target and distance + BreakingDistance - 5.0 <= Target and speed > 0.0 and state == TrainSimulation.TrainLightColor.red
*/
void TrainSimulation_Car_eqFunction_22(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,22};
  modelica_boolean tmp5;
  modelica_boolean tmp6;
  modelica_boolean tmp7;
  RELATIONHYSTERESIS(tmp5, data->localData[0]->realVars[1] /* distance STATE(1,speed) */ + data->localData[0]->realVars[6] /* BreakingDistance variable */ + 5.0, data->localData[0]->realVars[10] /* Target variable */, 5, GreaterEq);
  RELATIONHYSTERESIS(tmp6, data->localData[0]->realVars[1] /* distance STATE(1,speed) */ + data->localData[0]->realVars[6] /* BreakingDistance variable */ - 5.0, data->localData[0]->realVars[10] /* Target variable */, 6, LessEq);
  RELATIONHYSTERESIS(tmp7, data->localData[0]->realVars[2] /* speed STATE(1,acceleration) */, 0.0, 4, Greater);
  data->localData[0]->booleanVars[1] /* $whenCondition2 DISCRETE */ = (((tmp5 && tmp6) && tmp7) && (data->localData[0]->integerVars[1] /* state DISCRETE */ == 2));
  TRACE_POP
}
/*
equation index: 23
type: SIMPLE_ASSIGN
Length = length
*/
void TrainSimulation_Car_eqFunction_23(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,23};
  data->localData[0]->realVars[9] /* Length variable */ = data->simulationInfo->realParameter[4] /* length PARAM */;
  TRACE_POP
}
/*
equation index: 24
type: SIMPLE_ASSIGN
$whenCondition5 = isClumsy >= 1.0 and distance - Length <= Target and distance >= Target and speed > 0.0
*/
void TrainSimulation_Car_eqFunction_24(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,24};
  modelica_boolean tmp9;
  modelica_boolean tmp10;
  modelica_boolean tmp11;
  modelica_boolean tmp12;
  tmp9 = GreaterEq(data->simulationInfo->realParameter[3] /* isClumsy PARAM */,1.0);
  RELATIONHYSTERESIS(tmp10, data->localData[0]->realVars[1] /* distance STATE(1,speed) */ - data->localData[0]->realVars[9] /* Length variable */, data->localData[0]->realVars[10] /* Target variable */, 2, LessEq);
  RELATIONHYSTERESIS(tmp11, data->localData[0]->realVars[1] /* distance STATE(1,speed) */, data->localData[0]->realVars[10] /* Target variable */, 3, GreaterEq);
  RELATIONHYSTERESIS(tmp12, data->localData[0]->realVars[2] /* speed STATE(1,acceleration) */, 0.0, 4, Greater);
  data->localData[0]->booleanVars[4] /* $whenCondition5 DISCRETE */ = (((tmp9 && tmp10) && tmp11) && tmp12);
  TRACE_POP
}
/*
equation index: 25
type: SIMPLE_ASSIGN
Distance = distance
*/
void TrainSimulation_Car_eqFunction_25(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,25};
  data->localData[0]->realVars[7] /* Distance variable */ = data->localData[0]->realVars[1] /* distance STATE(1,speed) */;
  TRACE_POP
}
/*
equation index: 26
type: SIMPLE_ASSIGN
$whenCondition1 = speed >= maxSpeed
*/
void TrainSimulation_Car_eqFunction_26(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,26};
  modelica_boolean tmp13;
  RELATIONHYSTERESIS(tmp13, data->localData[0]->realVars[2] /* speed STATE(1,acceleration) */, data->simulationInfo->realParameter[6] /* maxSpeed PARAM */, 1, GreaterEq);
  data->localData[0]->booleanVars[0] /* $whenCondition1 DISCRETE */ = tmp13;
  TRACE_POP
}
/*
equation index: 27
type: SIMPLE_ASSIGN
$whenCondition4 = speed <= 0.0
*/
void TrainSimulation_Car_eqFunction_27(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,27};
  modelica_boolean tmp14;
  RELATIONHYSTERESIS(tmp14, data->localData[0]->realVars[2] /* speed STATE(1,acceleration) */, 0.0, 0, LessEq);
  data->localData[0]->booleanVars[3] /* $whenCondition4 DISCRETE */ = tmp14;
  TRACE_POP
}
/*
equation index: 32
type: WHEN

when {$whenCondition1} then
  reinit(acceleration,  0.0);
end when;
*/
void TrainSimulation_Car_eqFunction_32(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,32};
  if((data->localData[0]->booleanVars[0] /* $whenCondition1 DISCRETE */ && !data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */ /* edge */))
  {
    data->localData[0]->realVars[0] /* acceleration STATE(1) */ = 0.0;
    infoStreamPrint(LOG_EVENTS, 0, "reinit acceleration = %g", data->localData[0]->realVars[0] /* acceleration STATE(1) */);
    data->simulationInfo->needToIterate = 1;
  }
  TRACE_POP
}
/*
equation index: 31
type: WHEN

when {$whenCondition2} then
  reinit(acceleration,  -breakingDeceleration);
end when;
*/
void TrainSimulation_Car_eqFunction_31(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,31};
  if((data->localData[0]->booleanVars[1] /* $whenCondition2 DISCRETE */ && !data->simulationInfo->booleanVarsPre[1] /* $whenCondition2 DISCRETE */ /* edge */))
  {
    data->localData[0]->realVars[0] /* acceleration STATE(1) */ = (-data->simulationInfo->realParameter[1] /* breakingDeceleration PARAM */);
    infoStreamPrint(LOG_EVENTS, 0, "reinit acceleration = %g", data->localData[0]->realVars[0] /* acceleration STATE(1) */);
    data->simulationInfo->needToIterate = 1;
  }
  TRACE_POP
}
/*
equation index: 30
type: WHEN

when {$whenCondition3} then
  reinit(acceleration,  maxAcceleration);
end when;
*/
void TrainSimulation_Car_eqFunction_30(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,30};
  if((data->localData[0]->booleanVars[2] /* $whenCondition3 DISCRETE */ && !data->simulationInfo->booleanVarsPre[2] /* $whenCondition3 DISCRETE */ /* edge */))
  {
    data->localData[0]->realVars[0] /* acceleration STATE(1) */ = data->simulationInfo->realParameter[5] /* maxAcceleration PARAM */;
    infoStreamPrint(LOG_EVENTS, 0, "reinit acceleration = %g", data->localData[0]->realVars[0] /* acceleration STATE(1) */);
    data->simulationInfo->needToIterate = 1;
  }
  TRACE_POP
}
/*
equation index: 29
type: WHEN

when {$whenCondition4} then
  reinit(acceleration,  0.0);
end when;
*/
void TrainSimulation_Car_eqFunction_29(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,29};
  if((data->localData[0]->booleanVars[3] /* $whenCondition4 DISCRETE */ && !data->simulationInfo->booleanVarsPre[3] /* $whenCondition4 DISCRETE */ /* edge */))
  {
    data->localData[0]->realVars[0] /* acceleration STATE(1) */ = 0.0;
    infoStreamPrint(LOG_EVENTS, 0, "reinit acceleration = %g", data->localData[0]->realVars[0] /* acceleration STATE(1) */);
    data->simulationInfo->needToIterate = 1;
  }
  TRACE_POP
}
/*
equation index: 28
type: WHEN

when {$whenCondition5} then
  reinit(acceleration,  -50.0);
end when;
*/
void TrainSimulation_Car_eqFunction_28(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,28};
  if((data->localData[0]->booleanVars[4] /* $whenCondition5 DISCRETE */ && !data->simulationInfo->booleanVarsPre[4] /* $whenCondition5 DISCRETE */ /* edge */))
  {
    data->localData[0]->realVars[0] /* acceleration STATE(1) */ = -50.0;
    infoStreamPrint(LOG_EVENTS, 0, "reinit acceleration = %g", data->localData[0]->realVars[0] /* acceleration STATE(1) */);
    data->simulationInfo->needToIterate = 1;
  }
  TRACE_POP
}

OMC_DISABLE_OPT
int TrainSimulation_Car_functionDAE(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  int equationIndexes[1] = {0};
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_DAE);
#endif

  data->simulationInfo->needToIterate = 0;
  data->simulationInfo->discreteCall = 1;
  TrainSimulation_Car_functionLocalKnownVars(data, threadData);
  TrainSimulation_Car_eqFunction_16(data, threadData);

  TrainSimulation_Car_eqFunction_17(data, threadData);

  TrainSimulation_Car_eqFunction_18(data, threadData);

  TrainSimulation_Car_eqFunction_19(data, threadData);

  TrainSimulation_Car_eqFunction_20(data, threadData);

  TrainSimulation_Car_eqFunction_21(data, threadData);

  TrainSimulation_Car_eqFunction_22(data, threadData);

  TrainSimulation_Car_eqFunction_23(data, threadData);

  TrainSimulation_Car_eqFunction_24(data, threadData);

  TrainSimulation_Car_eqFunction_25(data, threadData);

  TrainSimulation_Car_eqFunction_26(data, threadData);

  TrainSimulation_Car_eqFunction_27(data, threadData);

  TrainSimulation_Car_eqFunction_32(data, threadData);

  TrainSimulation_Car_eqFunction_31(data, threadData);

  TrainSimulation_Car_eqFunction_30(data, threadData);

  TrainSimulation_Car_eqFunction_29(data, threadData);

  TrainSimulation_Car_eqFunction_28(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_DAE);
#endif
  TRACE_POP
  return 0;
}


int TrainSimulation_Car_functionLocalKnownVars(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}


/* forwarded equations */
extern void TrainSimulation_Car_eqFunction_18(DATA* data, threadData_t *threadData);
extern void TrainSimulation_Car_eqFunction_19(DATA* data, threadData_t *threadData);
extern void TrainSimulation_Car_eqFunction_20(DATA* data, threadData_t *threadData);

static void functionODE_system0(DATA *data, threadData_t *threadData)
{
    TrainSimulation_Car_eqFunction_18(data, threadData);

    TrainSimulation_Car_eqFunction_19(data, threadData);

    TrainSimulation_Car_eqFunction_20(data, threadData);
}

int TrainSimulation_Car_functionODE(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_FUNCTION_ODE);
#endif

  
  data->simulationInfo->callStatistics.functionODE++;
  
  TrainSimulation_Car_functionLocalKnownVars(data, threadData);
  functionODE_system0(data, threadData);

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_FUNCTION_ODE);
#endif

  TRACE_POP
  return 0;
}

/* forward the main in the simulation runtime */
extern int _main_SimulationRuntime(int argc, char**argv, DATA *data, threadData_t *threadData);

#include "TrainSimulation_Car_12jac.h"
#include "TrainSimulation_Car_13opt.h"

struct OpenModelicaGeneratedFunctionCallbacks TrainSimulation_Car_callback = {
   NULL,
   NULL,
   NULL,
   TrainSimulation_Car_callExternalObjectDestructors,
   NULL,
   NULL,
   NULL,
   #if !defined(OMC_NO_STATESELECTION)
   TrainSimulation_Car_initializeStateSets,
   #else
   NULL,
   #endif
   TrainSimulation_Car_initializeDAEmodeData,
   TrainSimulation_Car_functionODE,
   TrainSimulation_Car_functionAlgebraics,
   TrainSimulation_Car_functionDAE,
   TrainSimulation_Car_functionLocalKnownVars,
   TrainSimulation_Car_input_function,
   TrainSimulation_Car_input_function_init,
   TrainSimulation_Car_input_function_updateStartValues,
   TrainSimulation_Car_data_function,
   TrainSimulation_Car_output_function,
   TrainSimulation_Car_setc_function,
   TrainSimulation_Car_function_storeDelayed,
   TrainSimulation_Car_updateBoundVariableAttributes,
   TrainSimulation_Car_functionInitialEquations,
   1, /* useHomotopy - 0: local homotopy (equidistant lambda), 1: global homotopy (equidistant lambda), 2: new global homotopy approach (adaptive lambda), 3: new local homotopy approach (adaptive lambda)*/
   TrainSimulation_Car_functionInitialEquations_lambda0,
   TrainSimulation_Car_functionRemovedInitialEquations,
   TrainSimulation_Car_updateBoundParameters,
   TrainSimulation_Car_checkForAsserts,
   TrainSimulation_Car_function_ZeroCrossingsEquations,
   TrainSimulation_Car_function_ZeroCrossings,
   TrainSimulation_Car_function_updateRelations,
   TrainSimulation_Car_zeroCrossingDescription,
   TrainSimulation_Car_relationDescription,
   TrainSimulation_Car_function_initSample,
   TrainSimulation_Car_INDEX_JAC_A,
   TrainSimulation_Car_INDEX_JAC_B,
   TrainSimulation_Car_INDEX_JAC_C,
   TrainSimulation_Car_INDEX_JAC_D,
   TrainSimulation_Car_INDEX_JAC_F,
   TrainSimulation_Car_initialAnalyticJacobianA,
   TrainSimulation_Car_initialAnalyticJacobianB,
   TrainSimulation_Car_initialAnalyticJacobianC,
   TrainSimulation_Car_initialAnalyticJacobianD,
   TrainSimulation_Car_initialAnalyticJacobianF,
   TrainSimulation_Car_functionJacA_column,
   TrainSimulation_Car_functionJacB_column,
   TrainSimulation_Car_functionJacC_column,
   TrainSimulation_Car_functionJacD_column,
   TrainSimulation_Car_functionJacF_column,
   TrainSimulation_Car_linear_model_frame,
   TrainSimulation_Car_linear_model_datarecovery_frame,
   TrainSimulation_Car_mayer,
   TrainSimulation_Car_lagrange,
   TrainSimulation_Car_pickUpBoundsForInputsInOptimization,
   TrainSimulation_Car_setInputData,
   TrainSimulation_Car_getTimeGrid,
   TrainSimulation_Car_symbolicInlineSystem,
   TrainSimulation_Car_function_initSynchronous,
   TrainSimulation_Car_function_updateSynchronous,
   TrainSimulation_Car_function_equationsSynchronous,
   TrainSimulation_Car_inputNames,
   TrainSimulation_Car_read_input_fmu,
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
void TrainSimulation_Car_setupDataStruc(DATA *data, threadData_t *threadData)
{
  assertStreamPrint(threadData,0!=data, "Error while initialize Data");
  threadData->localRoots[LOCAL_ROOT_SIMULATION_DATA] = data;
  data->callback = &TrainSimulation_Car_callback;
  OpenModelica_updateUriMapping(threadData, MMC_REFSTRUCTLIT(_OMC_LIT_RESOURCES));
  data->modelData->modelName = "TrainSimulation.Car";
  data->modelData->modelFilePrefix = "TrainSimulation_Car";
  data->modelData->resultFileName = NULL;
  data->modelData->modelDir = "E:/Szakdoga";
  data->modelData->modelGUID = "{541a3ea7-19ec-40ed-87df-729181e54288}";
  data->modelData->initXMLData = NULL;
  data->modelData->modelDataXml.infoXMLData = NULL;
  data->modelData->runTestsuite = 0;
  
  data->modelData->nStates = 3;
  data->modelData->nVariablesReal = 11;
  data->modelData->nDiscreteReal = 0;
  data->modelData->nVariablesInteger = 2;
  data->modelData->nVariablesBoolean = 5;
  data->modelData->nVariablesString = 0;
  data->modelData->nParametersReal = 7;
  data->modelData->nParametersInteger = 0;
  data->modelData->nParametersBoolean = 0;
  data->modelData->nParametersString = 0;
  data->modelData->nInputVars = 3;
  data->modelData->nOutputVars = 2;
  
  data->modelData->nAliasReal = 1;
  data->modelData->nAliasInteger = 0;
  data->modelData->nAliasBoolean = 0;
  data->modelData->nAliasString = 0;
  
  data->modelData->nZeroCrossings = 5;
  data->modelData->nSamples = 0;
  data->modelData->nRelations = 10;
  data->modelData->nMathEvents = 0;
  data->modelData->nExtObjs = 0;
  
  GC_asprintf(&data->modelData->modelDataXml.fileName, "%s/TrainSimulation_Car_info.json", data->modelData->resourcesDir);
  data->modelData->modelDataXml.modelInfoXmlLength = 0;
  data->modelData->modelDataXml.nFunctions = 0;
  data->modelData->modelDataXml.nProfileBlocks = 0;
  data->modelData->modelDataXml.nEquations = 37;
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

