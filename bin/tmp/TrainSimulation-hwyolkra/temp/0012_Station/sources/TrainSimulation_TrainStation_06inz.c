/* Initialization */
#include "TrainSimulation_TrainStation_model.h"
#include "TrainSimulation_TrainStation_11mix.h"
#include "TrainSimulation_TrainStation_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

void TrainSimulation_TrainStation_functionInitialEquations_0(DATA *data, threadData_t *threadData);

/*
equation index: 1
type: SIMPLE_ASSIGN
GreenToRed.t_start = 0.0
*/
void TrainSimulation_TrainStation_eqFunction_1(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1};
  data->localData[0]->realVars[2] /* GreenToRed.t_start variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 2
type: SIMPLE_ASSIGN
GreenToRed.t_dummy = 0.0
*/
void TrainSimulation_TrainStation_eqFunction_2(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2};
  data->localData[0]->realVars[1] /* GreenToRed.t_dummy variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 3
type: SIMPLE_ASSIGN
GreenToRed.t = 0.0
*/
void TrainSimulation_TrainStation_eqFunction_3(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3};
  data->localData[0]->realVars[0] /* GreenToRed.t variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 4
type: SIMPLE_ASSIGN
RedToGreen.t_start = 0.0
*/
void TrainSimulation_TrainStation_eqFunction_4(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4};
  data->localData[0]->realVars[5] /* RedToGreen.t_start variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 5
type: SIMPLE_ASSIGN
RedToGreen.t_dummy = 0.0
*/
void TrainSimulation_TrainStation_eqFunction_5(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5};
  data->localData[0]->realVars[4] /* RedToGreen.t_dummy variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 6
type: SIMPLE_ASSIGN
RedToGreen.t = 0.0
*/
void TrainSimulation_TrainStation_eqFunction_6(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6};
  data->localData[0]->realVars[3] /* RedToGreen.t variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 7
type: SIMPLE_ASSIGN
stateGraphRoot.subgraphStatePort.activeStepsDummy = 0.0
*/
void TrainSimulation_TrainStation_eqFunction_7(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7};
  data->localData[0]->realVars[10] /* stateGraphRoot.subgraphStatePort.activeStepsDummy variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 8
type: SIMPLE_ASSIGN
stateGraphRoot.suspend = false
*/
void TrainSimulation_TrainStation_eqFunction_8(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,8};
  data->localData[0]->booleanVars[15] /* stateGraphRoot.suspend DISCRETE */ = 0;
  TRACE_POP
}

/*
equation index: 9
type: SIMPLE_ASSIGN
stateGraphRoot.resume = false
*/
void TrainSimulation_TrainStation_eqFunction_9(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,9};
  data->localData[0]->booleanVars[14] /* stateGraphRoot.resume DISCRETE */ = 0;
  TRACE_POP
}
extern void TrainSimulation_TrainStation_eqFunction_36(DATA *data, threadData_t *threadData);

extern void TrainSimulation_TrainStation_eqFunction_37(DATA *data, threadData_t *threadData);


/*
equation index: 12
type: SIMPLE_ASSIGN
red.active = false
*/
void TrainSimulation_TrainStation_eqFunction_12(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12};
  data->localData[0]->booleanVars[10] /* red.active DISCRETE */ = 0;
  TRACE_POP
}
extern void TrainSimulation_TrainStation_eqFunction_41(DATA *data, threadData_t *threadData);


/*
equation index: 14
type: SIMPLE_ASSIGN
red.outerStatePort.subgraphStatePort.activeSteps = if red.localActive then 1.0 else 0.0
*/
void TrainSimulation_TrainStation_eqFunction_14(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14};
  data->localData[0]->realVars[8] /* red.outerStatePort.subgraphStatePort.activeSteps variable */ = (data->localData[0]->booleanVars[11] /* red.localActive DISCRETE */?1.0:0.0);
  TRACE_POP
}

/*
equation index: 15
type: SIMPLE_ASSIGN
$PRE.red.newActive = red.localActive
*/
void TrainSimulation_TrainStation_eqFunction_15(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,15};
  data->simulationInfo->booleanVarsPre[12] /* red.newActive DISCRETE */ = data->localData[0]->booleanVars[11] /* red.localActive DISCRETE */;
  TRACE_POP
}

/*
equation index: 16
type: SIMPLE_ASSIGN
$PRE.red.localActive = $PRE.red.newActive
*/
void TrainSimulation_TrainStation_eqFunction_16(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,16};
  data->simulationInfo->booleanVarsPre[11] /* red.localActive DISCRETE */ = data->simulationInfo->booleanVarsPre[12] /* red.newActive DISCRETE */;
  TRACE_POP
}

/*
equation index: 17
type: SIMPLE_ASSIGN
$PRE.red.oldActive = $PRE.red.localActive
*/
void TrainSimulation_TrainStation_eqFunction_17(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,17};
  data->simulationInfo->booleanVarsPre[13] /* red.oldActive DISCRETE */ = data->simulationInfo->booleanVarsPre[11] /* red.localActive DISCRETE */;
  TRACE_POP
}

/*
equation index: 18
type: SIMPLE_ASSIGN
red.oldActive = $PRE.red.oldActive
*/
void TrainSimulation_TrainStation_eqFunction_18(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,18};
  data->localData[0]->booleanVars[13] /* red.oldActive DISCRETE */ = data->simulationInfo->booleanVarsPre[13] /* red.oldActive DISCRETE */;
  TRACE_POP
}

/*
equation index: 19
type: SIMPLE_ASSIGN
green.active = true
*/
void TrainSimulation_TrainStation_eqFunction_19(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,19};
  data->localData[0]->booleanVars[6] /* green.active DISCRETE */ = 1;
  TRACE_POP
}
extern void TrainSimulation_TrainStation_eqFunction_55(DATA *data, threadData_t *threadData);


/*
equation index: 21
type: SIMPLE_ASSIGN
green.outerStatePort.subgraphStatePort.activeSteps = if green.localActive then 1.0 else 0.0
*/
void TrainSimulation_TrainStation_eqFunction_21(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,21};
  data->localData[0]->realVars[7] /* green.outerStatePort.subgraphStatePort.activeSteps variable */ = (data->localData[0]->booleanVars[7] /* green.localActive DISCRETE */?1.0:0.0);
  TRACE_POP
}
extern void TrainSimulation_TrainStation_eqFunction_44(DATA *data, threadData_t *threadData);


/*
equation index: 23
type: SIMPLE_ASSIGN
stateGraphRoot.activeSteps = -integer(stateGraphRoot.subgraphStatePort.activeSteps)
*/
void TrainSimulation_TrainStation_eqFunction_23(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,23};
  data->localData[0]->integerVars[2] /* stateGraphRoot.activeSteps DISCRETE */ = (-((modelica_integer)floor(data->localData[0]->realVars[9] /* stateGraphRoot.subgraphStatePort.activeSteps variable */)));
  TRACE_POP
}

/*
equation index: 24
type: SIMPLE_ASSIGN
$PRE.green.newActive = green.localActive
*/
void TrainSimulation_TrainStation_eqFunction_24(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,24};
  data->simulationInfo->booleanVarsPre[8] /* green.newActive DISCRETE */ = data->localData[0]->booleanVars[7] /* green.localActive DISCRETE */;
  TRACE_POP
}

/*
equation index: 25
type: SIMPLE_ASSIGN
$PRE.green.localActive = $PRE.green.newActive
*/
void TrainSimulation_TrainStation_eqFunction_25(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,25};
  data->simulationInfo->booleanVarsPre[7] /* green.localActive DISCRETE */ = data->simulationInfo->booleanVarsPre[8] /* green.newActive DISCRETE */;
  TRACE_POP
}

/*
equation index: 26
type: SIMPLE_ASSIGN
$PRE.green.oldActive = $PRE.green.localActive
*/
void TrainSimulation_TrainStation_eqFunction_26(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,26};
  data->simulationInfo->booleanVarsPre[9] /* green.oldActive DISCRETE */ = data->simulationInfo->booleanVarsPre[7] /* green.localActive DISCRETE */;
  TRACE_POP
}

/*
equation index: 27
type: SIMPLE_ASSIGN
green.oldActive = $PRE.green.oldActive
*/
void TrainSimulation_TrainStation_eqFunction_27(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,27};
  data->localData[0]->booleanVars[9] /* green.oldActive DISCRETE */ = data->simulationInfo->booleanVarsPre[9] /* green.oldActive DISCRETE */;
  TRACE_POP
}

/*
equation index: 28
type: SIMPLE_ASSIGN
GreenToRed.enableFire = GreenToRed.condition and green.localActive and not red.localActive
*/
void TrainSimulation_TrainStation_eqFunction_28(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,28};
  data->localData[0]->booleanVars[3] /* GreenToRed.enableFire DISCRETE */ = ((data->localData[0]->booleanVars[2] /* GreenToRed.condition DISCRETE */ && data->localData[0]->booleanVars[7] /* green.localActive DISCRETE */) && (!data->localData[0]->booleanVars[11] /* red.localActive DISCRETE */));
  TRACE_POP
}

/*
equation index: 29
type: SIMPLE_ASSIGN
RedToGreen.enableFire = RedToGreen.condition and red.localActive and not green.localActive
*/
void TrainSimulation_TrainStation_eqFunction_29(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,29};
  data->localData[0]->booleanVars[5] /* RedToGreen.enableFire DISCRETE */ = ((data->localData[0]->booleanVars[4] /* RedToGreen.condition DISCRETE */ && data->localData[0]->booleanVars[11] /* red.localActive DISCRETE */) && (!data->localData[0]->booleanVars[7] /* green.localActive DISCRETE */));
  TRACE_POP
}

/*
equation index: 30
type: SIMPLE_ASSIGN
green.newActive = Modelica.StateGraph.Temporary.anyTrue({RedToGreen.enableFire}) or green.localActive and not Modelica.StateGraph.Temporary.anyTrue({GreenToRed.enableFire})
*/
void TrainSimulation_TrainStation_eqFunction_30(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,30};
  boolean_array tmp0;
  boolean_array tmp1;
  array_alloc_scalar_boolean_array(&tmp0, 1, (modelica_boolean)data->localData[0]->booleanVars[5] /* RedToGreen.enableFire DISCRETE */);
  array_alloc_scalar_boolean_array(&tmp1, 1, (modelica_boolean)data->localData[0]->booleanVars[3] /* GreenToRed.enableFire DISCRETE */);
  data->localData[0]->booleanVars[8] /* green.newActive DISCRETE */ = (omc_Modelica_StateGraph_Temporary_anyTrue(threadData, tmp0) || (data->localData[0]->booleanVars[7] /* green.localActive DISCRETE */ && (!omc_Modelica_StateGraph_Temporary_anyTrue(threadData, tmp1))));
  TRACE_POP
}

/*
equation index: 31
type: SIMPLE_ASSIGN
red.newActive = Modelica.StateGraph.Temporary.anyTrue({GreenToRed.enableFire}) or red.localActive and not Modelica.StateGraph.Temporary.anyTrue({RedToGreen.enableFire})
*/
void TrainSimulation_TrainStation_eqFunction_31(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,31};
  boolean_array tmp2;
  boolean_array tmp3;
  array_alloc_scalar_boolean_array(&tmp2, 1, (modelica_boolean)data->localData[0]->booleanVars[3] /* GreenToRed.enableFire DISCRETE */);
  array_alloc_scalar_boolean_array(&tmp3, 1, (modelica_boolean)data->localData[0]->booleanVars[5] /* RedToGreen.enableFire DISCRETE */);
  data->localData[0]->booleanVars[12] /* red.newActive DISCRETE */ = (omc_Modelica_StateGraph_Temporary_anyTrue(threadData, tmp2) || (data->localData[0]->booleanVars[11] /* red.localActive DISCRETE */ && (!omc_Modelica_StateGraph_Temporary_anyTrue(threadData, tmp3))));
  TRACE_POP
}
extern void TrainSimulation_TrainStation_eqFunction_46(DATA *data, threadData_t *threadData);

extern void TrainSimulation_TrainStation_eqFunction_47(DATA *data, threadData_t *threadData);


/*
equation index: 34
type: SIMPLE_ASSIGN
$PRE.RedToGreen.enableFire = false
*/
void TrainSimulation_TrainStation_eqFunction_34(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,34};
  data->simulationInfo->booleanVarsPre[5] /* RedToGreen.enableFire DISCRETE */ = 0;
  TRACE_POP
}

/*
equation index: 35
type: SIMPLE_ASSIGN
$PRE.GreenToRed.enableFire = false
*/
void TrainSimulation_TrainStation_eqFunction_35(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,35};
  data->simulationInfo->booleanVarsPre[3] /* GreenToRed.enableFire DISCRETE */ = 0;
  TRACE_POP
}
OMC_DISABLE_OPT
void TrainSimulation_TrainStation_functionInitialEquations_0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  TrainSimulation_TrainStation_eqFunction_1(data, threadData);
  TrainSimulation_TrainStation_eqFunction_2(data, threadData);
  TrainSimulation_TrainStation_eqFunction_3(data, threadData);
  TrainSimulation_TrainStation_eqFunction_4(data, threadData);
  TrainSimulation_TrainStation_eqFunction_5(data, threadData);
  TrainSimulation_TrainStation_eqFunction_6(data, threadData);
  TrainSimulation_TrainStation_eqFunction_7(data, threadData);
  TrainSimulation_TrainStation_eqFunction_8(data, threadData);
  TrainSimulation_TrainStation_eqFunction_9(data, threadData);
  TrainSimulation_TrainStation_eqFunction_36(data, threadData);
  TrainSimulation_TrainStation_eqFunction_37(data, threadData);
  TrainSimulation_TrainStation_eqFunction_12(data, threadData);
  TrainSimulation_TrainStation_eqFunction_41(data, threadData);
  TrainSimulation_TrainStation_eqFunction_14(data, threadData);
  TrainSimulation_TrainStation_eqFunction_15(data, threadData);
  TrainSimulation_TrainStation_eqFunction_16(data, threadData);
  TrainSimulation_TrainStation_eqFunction_17(data, threadData);
  TrainSimulation_TrainStation_eqFunction_18(data, threadData);
  TrainSimulation_TrainStation_eqFunction_19(data, threadData);
  TrainSimulation_TrainStation_eqFunction_55(data, threadData);
  TrainSimulation_TrainStation_eqFunction_21(data, threadData);
  TrainSimulation_TrainStation_eqFunction_44(data, threadData);
  TrainSimulation_TrainStation_eqFunction_23(data, threadData);
  TrainSimulation_TrainStation_eqFunction_24(data, threadData);
  TrainSimulation_TrainStation_eqFunction_25(data, threadData);
  TrainSimulation_TrainStation_eqFunction_26(data, threadData);
  TrainSimulation_TrainStation_eqFunction_27(data, threadData);
  TrainSimulation_TrainStation_eqFunction_28(data, threadData);
  TrainSimulation_TrainStation_eqFunction_29(data, threadData);
  TrainSimulation_TrainStation_eqFunction_30(data, threadData);
  TrainSimulation_TrainStation_eqFunction_31(data, threadData);
  TrainSimulation_TrainStation_eqFunction_46(data, threadData);
  TrainSimulation_TrainStation_eqFunction_47(data, threadData);
  TrainSimulation_TrainStation_eqFunction_34(data, threadData);
  TrainSimulation_TrainStation_eqFunction_35(data, threadData);
  TRACE_POP
}


int TrainSimulation_TrainStation_functionInitialEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->discreteCall = 1;
  TrainSimulation_TrainStation_functionInitialEquations_0(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}


int TrainSimulation_TrainStation_functionInitialEquations_lambda0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->discreteCall = 1;
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}
int TrainSimulation_TrainStation_functionRemovedInitialEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int *equationIndexes = NULL;
  double res = 0.0;

  
  TRACE_POP
  return 0;
}


#if defined(__cplusplus)
}
#endif

