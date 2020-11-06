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
$outputAlias_CurveSpeed = sqrt(radius * Gravity * (cant + cantdeficiency) / TrackGauge)
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
  data->localData[0]->realVars[0] /* $outputAlias_CurveSpeed variable */ = sqrt(tmp0);
  TRACE_POP
}
extern void TrainSimulation_Curve_eqFunction_13(DATA *data, threadData_t *threadData);

extern void TrainSimulation_Curve_eqFunction_23(DATA *data, threadData_t *threadData);

extern void TrainSimulation_Curve_eqFunction_22(DATA *data, threadData_t *threadData);

extern void TrainSimulation_Curve_eqFunction_21(DATA *data, threadData_t *threadData);

extern void TrainSimulation_Curve_eqFunction_20(DATA *data, threadData_t *threadData);

extern void TrainSimulation_Curve_eqFunction_19(DATA *data, threadData_t *threadData);

extern void TrainSimulation_Curve_eqFunction_18(DATA *data, threadData_t *threadData);

extern void TrainSimulation_Curve_eqFunction_17(DATA *data, threadData_t *threadData);

extern void TrainSimulation_Curve_eqFunction_16(DATA *data, threadData_t *threadData);

extern void TrainSimulation_Curve_eqFunction_15(DATA *data, threadData_t *threadData);

extern void TrainSimulation_Curve_eqFunction_14(DATA *data, threadData_t *threadData);

OMC_DISABLE_OPT
void TrainSimulation_Curve_functionInitialEquations_0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  TrainSimulation_Curve_eqFunction_1(data, threadData);
  TrainSimulation_Curve_eqFunction_13(data, threadData);
  TrainSimulation_Curve_eqFunction_23(data, threadData);
  TrainSimulation_Curve_eqFunction_22(data, threadData);
  TrainSimulation_Curve_eqFunction_21(data, threadData);
  TrainSimulation_Curve_eqFunction_20(data, threadData);
  TrainSimulation_Curve_eqFunction_19(data, threadData);
  TrainSimulation_Curve_eqFunction_18(data, threadData);
  TrainSimulation_Curve_eqFunction_17(data, threadData);
  TrainSimulation_Curve_eqFunction_16(data, threadData);
  TrainSimulation_Curve_eqFunction_15(data, threadData);
  TrainSimulation_Curve_eqFunction_14(data, threadData);
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

