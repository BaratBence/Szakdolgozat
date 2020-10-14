/* Initialization */
#include "TrainSimulation_Curve_model.h"
#include "TrainSimulation_Curve_11mix.h"
#include "TrainSimulation_Curve_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

void TrainSimulation_Curve_functionInitialEquations_0(DATA *data, threadData_t *threadData);

/*
equation index: 1
type: SIMPLE_ASSIGN
CurveSpeedValue = sqrt(radius * Gravity * (cant + cantdeficiency) / TrackGauge)
*/
void TrainSimulation_Curve_eqFunction_1(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1};
  modelica_real tmp0;
  tmp0 = DIVISION_SIM(((data->simulationInfo->realParameter[6] /* radius PARAM */) * (data->simulationInfo->realParameter[1] /* Gravity PARAM */)) * (data->simulationInfo->realParameter[4] /* cant PARAM */ + data->simulationInfo->realParameter[5] /* cantdeficiency PARAM */),data->simulationInfo->realParameter[3] /* TrackGauge PARAM */,"TrackGauge",equationIndexes);
  if(!(tmp0 >= 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of sqrt(radius * Gravity * (cant + cantdeficiency) / TrackGauge) was %g should be >= 0", tmp0);
  }
  data->localData[0]->realVars[19] /* CurveSpeedValue variable */ = sqrt(tmp0);
  TRACE_POP
}
extern void TrainSimulation_Curve_eqFunction_31(DATA *data, threadData_t *threadData);

extern void TrainSimulation_Curve_eqFunction_32(DATA *data, threadData_t *threadData);

extern void TrainSimulation_Curve_eqFunction_33(DATA *data, threadData_t *threadData);

extern void TrainSimulation_Curve_eqFunction_34(DATA *data, threadData_t *threadData);

extern void TrainSimulation_Curve_eqFunction_35(DATA *data, threadData_t *threadData);

extern void TrainSimulation_Curve_eqFunction_36(DATA *data, threadData_t *threadData);

extern void TrainSimulation_Curve_eqFunction_37(DATA *data, threadData_t *threadData);

extern void TrainSimulation_Curve_eqFunction_38(DATA *data, threadData_t *threadData);

extern void TrainSimulation_Curve_eqFunction_39(DATA *data, threadData_t *threadData);

extern void TrainSimulation_Curve_eqFunction_40(DATA *data, threadData_t *threadData);


/*
equation index: 12
type: SIMPLE_ASSIGN
$outputAlias_onCurve[2] = 0.0
*/
void TrainSimulation_Curve_eqFunction_12(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12};
  data->localData[0]->realVars[0] /* $outputAlias_onCurve[2] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 13
type: SIMPLE_ASSIGN
$outputAlias_onCurve[3] = 0.0
*/
void TrainSimulation_Curve_eqFunction_13(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13};
  data->localData[0]->realVars[1] /* $outputAlias_onCurve[3] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 14
type: SIMPLE_ASSIGN
$outputAlias_onCurve[4] = 0.0
*/
void TrainSimulation_Curve_eqFunction_14(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14};
  data->localData[0]->realVars[2] /* $outputAlias_onCurve[4] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 15
type: SIMPLE_ASSIGN
$outputAlias_onCurve[5] = 0.0
*/
void TrainSimulation_Curve_eqFunction_15(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,15};
  data->localData[0]->realVars[3] /* $outputAlias_onCurve[5] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 16
type: SIMPLE_ASSIGN
$outputAlias_onCurve[6] = 0.0
*/
void TrainSimulation_Curve_eqFunction_16(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,16};
  data->localData[0]->realVars[4] /* $outputAlias_onCurve[6] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 17
type: SIMPLE_ASSIGN
$outputAlias_onCurve[7] = 0.0
*/
void TrainSimulation_Curve_eqFunction_17(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,17};
  data->localData[0]->realVars[5] /* $outputAlias_onCurve[7] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 18
type: SIMPLE_ASSIGN
$outputAlias_onCurve[8] = 0.0
*/
void TrainSimulation_Curve_eqFunction_18(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,18};
  data->localData[0]->realVars[6] /* $outputAlias_onCurve[8] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 19
type: SIMPLE_ASSIGN
$outputAlias_onCurve[9] = 0.0
*/
void TrainSimulation_Curve_eqFunction_19(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,19};
  data->localData[0]->realVars[7] /* $outputAlias_onCurve[9] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 20
type: SIMPLE_ASSIGN
$outputAlias_onCurve[10] = 0.0
*/
void TrainSimulation_Curve_eqFunction_20(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,20};
  data->localData[0]->realVars[8] /* $outputAlias_onCurve[10] variable */ = 0.0;
  TRACE_POP
}
extern void TrainSimulation_Curve_eqFunction_50(DATA *data, threadData_t *threadData);

extern void TrainSimulation_Curve_eqFunction_49(DATA *data, threadData_t *threadData);

extern void TrainSimulation_Curve_eqFunction_48(DATA *data, threadData_t *threadData);

extern void TrainSimulation_Curve_eqFunction_47(DATA *data, threadData_t *threadData);

extern void TrainSimulation_Curve_eqFunction_46(DATA *data, threadData_t *threadData);

extern void TrainSimulation_Curve_eqFunction_45(DATA *data, threadData_t *threadData);

extern void TrainSimulation_Curve_eqFunction_44(DATA *data, threadData_t *threadData);

extern void TrainSimulation_Curve_eqFunction_43(DATA *data, threadData_t *threadData);

extern void TrainSimulation_Curve_eqFunction_42(DATA *data, threadData_t *threadData);

extern void TrainSimulation_Curve_eqFunction_41(DATA *data, threadData_t *threadData);

OMC_DISABLE_OPT
void TrainSimulation_Curve_functionInitialEquations_0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  TrainSimulation_Curve_eqFunction_1(data, threadData);
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
  TrainSimulation_Curve_eqFunction_12(data, threadData);
  TrainSimulation_Curve_eqFunction_13(data, threadData);
  TrainSimulation_Curve_eqFunction_14(data, threadData);
  TrainSimulation_Curve_eqFunction_15(data, threadData);
  TrainSimulation_Curve_eqFunction_16(data, threadData);
  TrainSimulation_Curve_eqFunction_17(data, threadData);
  TrainSimulation_Curve_eqFunction_18(data, threadData);
  TrainSimulation_Curve_eqFunction_19(data, threadData);
  TrainSimulation_Curve_eqFunction_20(data, threadData);
  TrainSimulation_Curve_eqFunction_50(data, threadData);
  TrainSimulation_Curve_eqFunction_49(data, threadData);
  TrainSimulation_Curve_eqFunction_48(data, threadData);
  TrainSimulation_Curve_eqFunction_47(data, threadData);
  TrainSimulation_Curve_eqFunction_46(data, threadData);
  TrainSimulation_Curve_eqFunction_45(data, threadData);
  TrainSimulation_Curve_eqFunction_44(data, threadData);
  TrainSimulation_Curve_eqFunction_43(data, threadData);
  TrainSimulation_Curve_eqFunction_42(data, threadData);
  TrainSimulation_Curve_eqFunction_41(data, threadData);
  TRACE_POP
}


int TrainSimulation_Curve_functionInitialEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->discreteCall = 1;
  TrainSimulation_Curve_functionInitialEquations_0(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}


int TrainSimulation_Curve_functionInitialEquations_lambda0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->discreteCall = 1;
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}
int TrainSimulation_Curve_functionRemovedInitialEquations(DATA *data, threadData_t *threadData)
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

