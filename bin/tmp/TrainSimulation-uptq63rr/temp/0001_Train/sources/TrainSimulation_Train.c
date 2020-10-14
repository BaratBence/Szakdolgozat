/* Main Simulation File */

#if defined(__cplusplus)
extern "C" {
#endif

#include "TrainSimulation_Train_model.h"
#include "simulation/solver/events.h"


/* dummy VARINFO and FILEINFO */
const FILE_INFO dummyFILE_INFO = omc_dummyFileInfo;
const VAR_INFO dummyVAR_INFO = omc_dummyVarInfo;

int TrainSimulation_Train_input_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->localData[0]->realVars[11] /* Sensor1Position variable */ = data->simulationInfo->inputVars[0];
  data->localData[0]->realVars[12] /* Sensor2Position variable */ = data->simulationInfo->inputVars[1];
  data->localData[0]->realVars[13] /* Station variable */ = data->simulationInfo->inputVars[2];
  data->localData[0]->realVars[14] /* onCurveSpeed variable */ = data->simulationInfo->inputVars[3];
  data->localData[0]->realVars[15] /* onUpHillAcc variable */ = data->simulationInfo->inputVars[4];
  
  TRACE_POP
  return 0;
}

int TrainSimulation_Train_input_function_init(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->inputVars[0] = data->modelData->realVarsData[11].attribute.start;
  data->simulationInfo->inputVars[1] = data->modelData->realVarsData[12].attribute.start;
  data->simulationInfo->inputVars[2] = data->modelData->realVarsData[13].attribute.start;
  data->simulationInfo->inputVars[3] = data->modelData->realVarsData[14].attribute.start;
  data->simulationInfo->inputVars[4] = data->modelData->realVarsData[15].attribute.start;
  
  TRACE_POP
  return 0;
}

int TrainSimulation_Train_input_function_updateStartValues(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->modelData->realVarsData[11].attribute.start = data->simulationInfo->inputVars[0];
  data->modelData->realVarsData[12].attribute.start = data->simulationInfo->inputVars[1];
  data->modelData->realVarsData[13].attribute.start = data->simulationInfo->inputVars[2];
  data->modelData->realVarsData[14].attribute.start = data->simulationInfo->inputVars[3];
  data->modelData->realVarsData[15].attribute.start = data->simulationInfo->inputVars[4];
  
  TRACE_POP
  return 0;
}

int TrainSimulation_Train_inputNames(DATA *data, char ** names){
  TRACE_PUSH

  names[0] = (char *) data->modelData->booleanVarsData[13].info.name;
  names[1] = (char *) data->modelData->booleanVarsData[14].info.name;
  names[2] = (char *) data->modelData->realVarsData[11].info.name;
  names[3] = (char *) data->modelData->realVarsData[12].info.name;
  names[4] = (char *) data->modelData->realVarsData[13].info.name;
  names[5] = (char *) data->modelData->integerVarsData[1].info.name;
  names[6] = (char *) data->modelData->realVarsData[14].info.name;
  names[7] = (char *) data->modelData->realVarsData[15].info.name;
  
  TRACE_POP
  return 0;
}

int TrainSimulation_Train_data_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  TRACE_POP
  return 0;
}

int TrainSimulation_Train_output_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->outputVars[0] = data->localData[0]->realVars[9] /* Distance variable */;
  data->simulationInfo->outputVars[1] = data->localData[0]->realVars[10] /* Length variable */;
  
  TRACE_POP
  return 0;
}

int TrainSimulation_Train_setc_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}


/*
equation index: 31
type: SIMPLE_ASSIGN
Decelerating = acceleration < 0.0
*/
void TrainSimulation_Train_eqFunction_31(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,31};
  modelica_boolean tmp0;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[0] /* acceleration STATE(1) */, 0.0, 5, Less);
  data->localData[0]->booleanVars[16] /* Decelerating DISCRETE */ = tmp0;
  TRACE_POP
}
/*
equation index: 32
type: SIMPLE_ASSIGN
Lapcount = distance / lap
*/
void TrainSimulation_Train_eqFunction_32(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,32};
  data->localData[0]->integerVars[0] /* Lapcount DISCRETE */ = DIVISION_SIM(data->localData[0]->realVars[1] /* distance STATE(1,speed) */,data->simulationInfo->realParameter[3] /* lap PARAM */,"lap",equationIndexes);
  TRACE_POP
}
/*
equation index: 33
type: SIMPLE_ASSIGN
$DER.lapDistance = speed
*/
void TrainSimulation_Train_eqFunction_33(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,33};
  data->localData[0]->realVars[6] /* der(lapDistance) STATE_DER */ = data->localData[0]->realVars[3] /* speed STATE(1,acceleration) */;
  TRACE_POP
}
/*
equation index: 34
type: SIMPLE_ASSIGN
$DER.speed = acceleration
*/
void TrainSimulation_Train_eqFunction_34(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,34};
  data->localData[0]->realVars[7] /* der(speed) STATE_DER */ = data->localData[0]->realVars[0] /* acceleration STATE(1) */;
  TRACE_POP
}
/*
equation index: 35
type: SIMPLE_ASSIGN
$DER.distance = speed
*/
void TrainSimulation_Train_eqFunction_35(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,35};
  data->localData[0]->realVars[5] /* der(distance) STATE_DER */ = data->localData[0]->realVars[3] /* speed STATE(1,acceleration) */;
  TRACE_POP
}
/*
equation index: 36
type: SIMPLE_ASSIGN
$DER.acceleration = 0.0
*/
void TrainSimulation_Train_eqFunction_36(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,36};
  data->localData[0]->realVars[4] /* der(acceleration) STATE_DER */ = 0.0;
  TRACE_POP
}
/*
equation index: 37
type: SIMPLE_ASSIGN
BreakingDistance = 0.5 * (speed / breakingDeceleration) ^ 2.0 * breakingDeceleration
*/
void TrainSimulation_Train_eqFunction_37(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,37};
  modelica_real tmp1;
  tmp1 = DIVISION_SIM(data->localData[0]->realVars[3] /* speed STATE(1,acceleration) */,data->simulationInfo->realParameter[1] /* breakingDeceleration PARAM */,"breakingDeceleration",equationIndexes);
  data->localData[0]->realVars[8] /* BreakingDistance variable */ = (0.5) * (((tmp1 * tmp1)) * (data->simulationInfo->realParameter[1] /* breakingDeceleration PARAM */));
  TRACE_POP
}
/*
equation index: 38
type: SIMPLE_ASSIGN
inStation = lapDistance + BreakingDistance + 10.0 >= Sensor1Position and lapDistance <= Sensor2Position
*/
void TrainSimulation_Train_eqFunction_38(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,38};
  modelica_boolean tmp2;
  modelica_boolean tmp3;
  RELATIONHYSTERESIS(tmp2, data->localData[0]->realVars[2] /* lapDistance STATE(1,speed) */ + data->localData[0]->realVars[8] /* BreakingDistance variable */ + 10.0, data->localData[0]->realVars[11] /* Sensor1Position variable */, 6, GreaterEq);
  RELATIONHYSTERESIS(tmp3, data->localData[0]->realVars[2] /* lapDistance STATE(1,speed) */, data->localData[0]->realVars[12] /* Sensor2Position variable */, 7, LessEq);
  data->localData[0]->booleanVars[17] /* inStation DISCRETE */ = (tmp2 && tmp3);
  TRACE_POP
}
/*
equation index: 39
type: SIMPLE_ASSIGN
$whenCondition11 = inStation and speed <= 0.0
*/
void TrainSimulation_Train_eqFunction_39(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,39};
  modelica_boolean tmp4;
  RELATIONHYSTERESIS(tmp4, data->localData[0]->realVars[3] /* speed STATE(1,acceleration) */, 0.0, 14, LessEq);
  data->localData[0]->booleanVars[2] /* $whenCondition11 DISCRETE */ = (data->localData[0]->booleanVars[17] /* inStation DISCRETE */ && tmp4);
  TRACE_POP
}
/*
equation index: 40
type: SIMPLE_ASSIGN
$whenCondition12 = inStation and speed >= maxSpeed
*/
void TrainSimulation_Train_eqFunction_40(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,40};
  modelica_boolean tmp5;
  RELATIONHYSTERESIS(tmp5, data->localData[0]->realVars[3] /* speed STATE(1,acceleration) */, data->simulationInfo->realParameter[5] /* maxSpeed PARAM */, 0, GreaterEq);
  data->localData[0]->booleanVars[3] /* $whenCondition12 DISCRETE */ = (data->localData[0]->booleanVars[17] /* inStation DISCRETE */ && tmp5);
  TRACE_POP
}
/*
equation index: 41
type: SIMPLE_ASSIGN
state = (*TrainSimulation.StationSignal*)(StationState)
*/
void TrainSimulation_Train_eqFunction_41(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,41};
  data->localData[0]->integerVars[2] /* state DISCRETE */ = ((modelica_integer)data->localData[0]->integerVars[1] /* StationState variable */);
  TRACE_POP
}
/*
equation index: 42
type: SIMPLE_ASSIGN
$whenCondition8 = inStation and speed > 0.0 and lapDistance + BreakingDistance + 5.0 >= Sensor1Position and lapDistance + BreakingDistance - 5.0 <= Sensor1Position and not state == TrainSimulation.StationSignal.green
*/
void TrainSimulation_Train_eqFunction_42(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,42};
  modelica_boolean tmp6;
  modelica_boolean tmp7;
  modelica_boolean tmp8;
  RELATIONHYSTERESIS(tmp6, data->localData[0]->realVars[3] /* speed STATE(1,acceleration) */, 0.0, 8, Greater);
  RELATIONHYSTERESIS(tmp7, data->localData[0]->realVars[2] /* lapDistance STATE(1,speed) */ + data->localData[0]->realVars[8] /* BreakingDistance variable */ + 5.0, data->localData[0]->realVars[11] /* Sensor1Position variable */, 9, GreaterEq);
  RELATIONHYSTERESIS(tmp8, data->localData[0]->realVars[2] /* lapDistance STATE(1,speed) */ + data->localData[0]->realVars[8] /* BreakingDistance variable */ - 5.0, data->localData[0]->realVars[11] /* Sensor1Position variable */, 10, LessEq);
  data->localData[0]->booleanVars[11] /* $whenCondition8 DISCRETE */ = ((((data->localData[0]->booleanVars[17] /* inStation DISCRETE */ && tmp6) && tmp7) && tmp8) && (!(data->localData[0]->integerVars[2] /* state DISCRETE */ == 1)));
  TRACE_POP
}
/*
equation index: 43
type: SIMPLE_ASSIGN
$whenCondition9 = inStation and speed < maxSpeed and lapDistance + BreakingDistance + 5.0 >= Sensor1Position and lapDistance + BreakingDistance - 5.0 <= Sensor1Position and state == TrainSimulation.StationSignal.green
*/
void TrainSimulation_Train_eqFunction_43(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,43};
  modelica_boolean tmp10;
  modelica_boolean tmp11;
  modelica_boolean tmp12;
  RELATIONHYSTERESIS(tmp10, data->localData[0]->realVars[3] /* speed STATE(1,acceleration) */, data->simulationInfo->realParameter[5] /* maxSpeed PARAM */, 11, Less);
  RELATIONHYSTERESIS(tmp11, data->localData[0]->realVars[2] /* lapDistance STATE(1,speed) */ + data->localData[0]->realVars[8] /* BreakingDistance variable */ + 5.0, data->localData[0]->realVars[11] /* Sensor1Position variable */, 9, GreaterEq);
  RELATIONHYSTERESIS(tmp12, data->localData[0]->realVars[2] /* lapDistance STATE(1,speed) */ + data->localData[0]->realVars[8] /* BreakingDistance variable */ - 5.0, data->localData[0]->realVars[11] /* Sensor1Position variable */, 10, LessEq);
  data->localData[0]->booleanVars[12] /* $whenCondition9 DISCRETE */ = ((((data->localData[0]->booleanVars[17] /* inStation DISCRETE */ && tmp10) && tmp11) && tmp12) && (data->localData[0]->integerVars[2] /* state DISCRETE */ == 1));
  TRACE_POP
}
/*
equation index: 44
type: SIMPLE_ASSIGN
$whenCondition10 = inStation and speed > 0.0 and lapDistance + BreakingDistance + 5.0 >= Station and lapDistance + BreakingDistance - 5.0 <= Station and state == TrainSimulation.StationSignal.red
*/
void TrainSimulation_Train_eqFunction_44(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,44};
  modelica_boolean tmp14;
  modelica_boolean tmp15;
  modelica_boolean tmp16;
  RELATIONHYSTERESIS(tmp14, data->localData[0]->realVars[3] /* speed STATE(1,acceleration) */, 0.0, 8, Greater);
  RELATIONHYSTERESIS(tmp15, data->localData[0]->realVars[2] /* lapDistance STATE(1,speed) */ + data->localData[0]->realVars[8] /* BreakingDistance variable */ + 5.0, data->localData[0]->realVars[13] /* Station variable */, 12, GreaterEq);
  RELATIONHYSTERESIS(tmp16, data->localData[0]->realVars[2] /* lapDistance STATE(1,speed) */ + data->localData[0]->realVars[8] /* BreakingDistance variable */ - 5.0, data->localData[0]->realVars[13] /* Station variable */, 13, LessEq);
  data->localData[0]->booleanVars[1] /* $whenCondition10 DISCRETE */ = ((((data->localData[0]->booleanVars[17] /* inStation DISCRETE */ && tmp14) && tmp15) && tmp16) && (data->localData[0]->integerVars[2] /* state DISCRETE */ == 2));
  TRACE_POP
}
/*
equation index: 45
type: SIMPLE_ASSIGN
$whenCondition13 = inStation and state == TrainSimulation.StationSignal.redReady and lapDistance + BreakingDistance + 5.0 >= Station
*/
void TrainSimulation_Train_eqFunction_45(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,45};
  modelica_boolean tmp19;
  RELATIONHYSTERESIS(tmp19, data->localData[0]->realVars[2] /* lapDistance STATE(1,speed) */ + data->localData[0]->realVars[8] /* BreakingDistance variable */ + 5.0, data->localData[0]->realVars[13] /* Station variable */, 12, GreaterEq);
  data->localData[0]->booleanVars[4] /* $whenCondition13 DISCRETE */ = ((data->localData[0]->booleanVars[17] /* inStation DISCRETE */ && (data->localData[0]->integerVars[2] /* state DISCRETE */ == 4)) && tmp19);
  TRACE_POP
}
/*
equation index: 46
type: SIMPLE_ASSIGN
Arrived = inStation and speed <= 0.0 and lapDistance + 10.0 >= Station and not state == TrainSimulation.StationSignal.redReady
*/
void TrainSimulation_Train_eqFunction_46(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,46};
  modelica_boolean tmp20;
  modelica_boolean tmp21;
  RELATIONHYSTERESIS(tmp20, data->localData[0]->realVars[3] /* speed STATE(1,acceleration) */, 0.0, 14, LessEq);
  RELATIONHYSTERESIS(tmp21, data->localData[0]->realVars[2] /* lapDistance STATE(1,speed) */ + 10.0, data->localData[0]->realVars[13] /* Station variable */, 15, GreaterEq);
  data->localData[0]->booleanVars[15] /* Arrived variable */ = (((data->localData[0]->booleanVars[17] /* inStation DISCRETE */ && tmp20) && tmp21) && (!(data->localData[0]->integerVars[2] /* state DISCRETE */ == 4)));
  TRACE_POP
}
/*
equation index: 47
type: SIMPLE_ASSIGN
Distance = lapDistance
*/
void TrainSimulation_Train_eqFunction_47(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,47};
  data->localData[0]->realVars[9] /* Distance variable */ = data->localData[0]->realVars[2] /* lapDistance STATE(1,speed) */;
  TRACE_POP
}
/*
equation index: 48
type: SIMPLE_ASSIGN
$whenCondition1 = lapDistance >= lap
*/
void TrainSimulation_Train_eqFunction_48(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,48};
  modelica_boolean tmp23;
  RELATIONHYSTERESIS(tmp23, data->localData[0]->realVars[2] /* lapDistance STATE(1,speed) */, data->simulationInfo->realParameter[3] /* lap PARAM */, 4, GreaterEq);
  data->localData[0]->booleanVars[0] /* $whenCondition1 DISCRETE */ = tmp23;
  TRACE_POP
}
/*
equation index: 49
type: SIMPLE_ASSIGN
$whenCondition2 = speed >= onCurveSpeed and ActiveCurve
*/
void TrainSimulation_Train_eqFunction_49(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,49};
  modelica_boolean tmp24;
  RELATIONHYSTERESIS(tmp24, data->localData[0]->realVars[3] /* speed STATE(1,acceleration) */, data->localData[0]->realVars[14] /* onCurveSpeed variable */, 3, GreaterEq);
  data->localData[0]->booleanVars[5] /* $whenCondition2 DISCRETE */ = (tmp24 && data->localData[0]->booleanVars[13] /* ActiveCurve variable */);
  TRACE_POP
}
/*
equation index: 50
type: SIMPLE_ASSIGN
$whenCondition3 = speed <= onCurveSpeed and ActiveCurve
*/
void TrainSimulation_Train_eqFunction_50(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,50};
  modelica_boolean tmp25;
  RELATIONHYSTERESIS(tmp25, data->localData[0]->realVars[3] /* speed STATE(1,acceleration) */, data->localData[0]->realVars[14] /* onCurveSpeed variable */, 2, LessEq);
  data->localData[0]->booleanVars[6] /* $whenCondition3 DISCRETE */ = (tmp25 && data->localData[0]->booleanVars[13] /* ActiveCurve variable */);
  TRACE_POP
}
/*
equation index: 51
type: SIMPLE_ASSIGN
$whenCondition4 = speed <= maxSpeed and not ActiveCurve
*/
void TrainSimulation_Train_eqFunction_51(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,51};
  modelica_boolean tmp26;
  RELATIONHYSTERESIS(tmp26, data->localData[0]->realVars[3] /* speed STATE(1,acceleration) */, data->simulationInfo->realParameter[5] /* maxSpeed PARAM */, 1, LessEq);
  data->localData[0]->booleanVars[7] /* $whenCondition4 DISCRETE */ = (tmp26 && (!data->localData[0]->booleanVars[13] /* ActiveCurve variable */));
  TRACE_POP
}
/*
equation index: 52
type: SIMPLE_ASSIGN
$whenCondition5 = speed >= maxSpeed
*/
void TrainSimulation_Train_eqFunction_52(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,52};
  modelica_boolean tmp27;
  RELATIONHYSTERESIS(tmp27, data->localData[0]->realVars[3] /* speed STATE(1,acceleration) */, data->simulationInfo->realParameter[5] /* maxSpeed PARAM */, 0, GreaterEq);
  data->localData[0]->booleanVars[8] /* $whenCondition5 DISCRETE */ = tmp27;
  TRACE_POP
}
/*
equation index: 53
type: SIMPLE_ASSIGN
$whenCondition6 = ActiveUpHill
*/
void TrainSimulation_Train_eqFunction_53(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,53};
  data->localData[0]->booleanVars[9] /* $whenCondition6 DISCRETE */ = data->localData[0]->booleanVars[14] /* ActiveUpHill variable */;
  TRACE_POP
}
/*
equation index: 54
type: SIMPLE_ASSIGN
$whenCondition7 = false
*/
void TrainSimulation_Train_eqFunction_54(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,54};
  data->localData[0]->booleanVars[10] /* $whenCondition7 DISCRETE */ = 0;
  TRACE_POP
}
/*
equation index: 55
type: SIMPLE_ASSIGN
Length = length
*/
void TrainSimulation_Train_eqFunction_55(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,55};
  data->localData[0]->realVars[10] /* Length variable */ = data->simulationInfo->realParameter[4] /* length PARAM */;
  TRACE_POP
}
/*
equation index: 68
type: WHEN

when {$whenCondition1} then
  reinit(lapDistance,  0.0);
end when;
*/
void TrainSimulation_Train_eqFunction_68(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,68};
  if((data->localData[0]->booleanVars[0] /* $whenCondition1 DISCRETE */ && !data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */ /* edge */))
  {
    data->localData[0]->realVars[2] /* lapDistance STATE(1,speed) */ = 0.0;
    infoStreamPrint(LOG_EVENTS, 0, "reinit lapDistance = %g", data->localData[0]->realVars[2] /* lapDistance STATE(1,speed) */);
    data->simulationInfo->needToIterate = 1;
  }
  TRACE_POP
}
/*
equation index: 67
type: WHEN

when {$whenCondition2} then
  reinit(acceleration,  -breakingDeceleration);
end when;
*/
void TrainSimulation_Train_eqFunction_67(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,67};
  if((data->localData[0]->booleanVars[5] /* $whenCondition2 DISCRETE */ && !data->simulationInfo->booleanVarsPre[5] /* $whenCondition2 DISCRETE */ /* edge */))
  {
    data->localData[0]->realVars[0] /* acceleration STATE(1) */ = (-data->simulationInfo->realParameter[1] /* breakingDeceleration PARAM */);
    infoStreamPrint(LOG_EVENTS, 0, "reinit acceleration = %g", data->localData[0]->realVars[0] /* acceleration STATE(1) */);
    data->simulationInfo->needToIterate = 1;
  }
  TRACE_POP
}
/*
equation index: 66
type: WHEN

when {$whenCondition3} then
  reinit(acceleration,  0.0);
end when;
*/
void TrainSimulation_Train_eqFunction_66(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,66};
  if((data->localData[0]->booleanVars[6] /* $whenCondition3 DISCRETE */ && !data->simulationInfo->booleanVarsPre[6] /* $whenCondition3 DISCRETE */ /* edge */))
  {
    data->localData[0]->realVars[0] /* acceleration STATE(1) */ = 0.0;
    infoStreamPrint(LOG_EVENTS, 0, "reinit acceleration = %g", data->localData[0]->realVars[0] /* acceleration STATE(1) */);
    data->simulationInfo->needToIterate = 1;
  }
  TRACE_POP
}
/*
equation index: 65
type: WHEN

when {$whenCondition4} then
  reinit(acceleration,  breakingDeceleration);
end when;
*/
void TrainSimulation_Train_eqFunction_65(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,65};
  if((data->localData[0]->booleanVars[7] /* $whenCondition4 DISCRETE */ && !data->simulationInfo->booleanVarsPre[7] /* $whenCondition4 DISCRETE */ /* edge */))
  {
    data->localData[0]->realVars[0] /* acceleration STATE(1) */ = data->simulationInfo->realParameter[1] /* breakingDeceleration PARAM */;
    infoStreamPrint(LOG_EVENTS, 0, "reinit acceleration = %g", data->localData[0]->realVars[0] /* acceleration STATE(1) */);
    data->simulationInfo->needToIterate = 1;
  }
  TRACE_POP
}
/*
equation index: 64
type: WHEN

when {$whenCondition5} then
  reinit(acceleration,  0.0);
end when;
*/
void TrainSimulation_Train_eqFunction_64(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,64};
  if((data->localData[0]->booleanVars[8] /* $whenCondition5 DISCRETE */ && !data->simulationInfo->booleanVarsPre[8] /* $whenCondition5 DISCRETE */ /* edge */))
  {
    data->localData[0]->realVars[0] /* acceleration STATE(1) */ = 0.0;
    infoStreamPrint(LOG_EVENTS, 0, "reinit acceleration = %g", data->localData[0]->realVars[0] /* acceleration STATE(1) */);
    data->simulationInfo->needToIterate = 1;
  }
  TRACE_POP
}
/*
equation index: 63
type: WHEN

when {$whenCondition6} then
  reinit(acceleration,  onUpHillAcc);
end when;
*/
void TrainSimulation_Train_eqFunction_63(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,63};
  if((data->localData[0]->booleanVars[9] /* $whenCondition6 DISCRETE */ && !data->simulationInfo->booleanVarsPre[9] /* $whenCondition6 DISCRETE */ /* edge */))
  {
    data->localData[0]->realVars[0] /* acceleration STATE(1) */ = data->localData[0]->realVars[15] /* onUpHillAcc variable */;
    infoStreamPrint(LOG_EVENTS, 0, "reinit acceleration = %g", data->localData[0]->realVars[0] /* acceleration STATE(1) */);
    data->simulationInfo->needToIterate = 1;
  }
  TRACE_POP
}
/*
equation index: 62
type: WHEN

when {$whenCondition7} then
  reinit(acceleration,  breakingDeceleration);
end when;
*/
void TrainSimulation_Train_eqFunction_62(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,62};
  if((data->localData[0]->booleanVars[10] /* $whenCondition7 DISCRETE */ && !data->simulationInfo->booleanVarsPre[10] /* $whenCondition7 DISCRETE */ /* edge */))
  {
    data->localData[0]->realVars[0] /* acceleration STATE(1) */ = data->simulationInfo->realParameter[1] /* breakingDeceleration PARAM */;
    infoStreamPrint(LOG_EVENTS, 0, "reinit acceleration = %g", data->localData[0]->realVars[0] /* acceleration STATE(1) */);
    data->simulationInfo->needToIterate = 1;
  }
  TRACE_POP
}
/*
equation index: 61
type: WHEN

when {$whenCondition8} then
  reinit(acceleration,  -breakingDeceleration);
end when;
*/
void TrainSimulation_Train_eqFunction_61(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,61};
  if((data->localData[0]->booleanVars[11] /* $whenCondition8 DISCRETE */ && !data->simulationInfo->booleanVarsPre[11] /* $whenCondition8 DISCRETE */ /* edge */))
  {
    data->localData[0]->realVars[0] /* acceleration STATE(1) */ = (-data->simulationInfo->realParameter[1] /* breakingDeceleration PARAM */);
    infoStreamPrint(LOG_EVENTS, 0, "reinit acceleration = %g", data->localData[0]->realVars[0] /* acceleration STATE(1) */);
    data->simulationInfo->needToIterate = 1;
  }
  TRACE_POP
}
/*
equation index: 60
type: WHEN

when {$whenCondition9} then
  reinit(acceleration,  breakingDeceleration);
end when;
*/
void TrainSimulation_Train_eqFunction_60(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,60};
  if((data->localData[0]->booleanVars[12] /* $whenCondition9 DISCRETE */ && !data->simulationInfo->booleanVarsPre[12] /* $whenCondition9 DISCRETE */ /* edge */))
  {
    data->localData[0]->realVars[0] /* acceleration STATE(1) */ = data->simulationInfo->realParameter[1] /* breakingDeceleration PARAM */;
    infoStreamPrint(LOG_EVENTS, 0, "reinit acceleration = %g", data->localData[0]->realVars[0] /* acceleration STATE(1) */);
    data->simulationInfo->needToIterate = 1;
  }
  TRACE_POP
}
/*
equation index: 59
type: WHEN

when {$whenCondition10} then
  reinit(acceleration,  -breakingDeceleration);
end when;
*/
void TrainSimulation_Train_eqFunction_59(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,59};
  if((data->localData[0]->booleanVars[1] /* $whenCondition10 DISCRETE */ && !data->simulationInfo->booleanVarsPre[1] /* $whenCondition10 DISCRETE */ /* edge */))
  {
    data->localData[0]->realVars[0] /* acceleration STATE(1) */ = (-data->simulationInfo->realParameter[1] /* breakingDeceleration PARAM */);
    infoStreamPrint(LOG_EVENTS, 0, "reinit acceleration = %g", data->localData[0]->realVars[0] /* acceleration STATE(1) */);
    data->simulationInfo->needToIterate = 1;
  }
  TRACE_POP
}
/*
equation index: 58
type: WHEN

when {$whenCondition11} then
  reinit(acceleration,  0.0);
end when;
*/
void TrainSimulation_Train_eqFunction_58(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,58};
  if((data->localData[0]->booleanVars[2] /* $whenCondition11 DISCRETE */ && !data->simulationInfo->booleanVarsPre[2] /* $whenCondition11 DISCRETE */ /* edge */))
  {
    data->localData[0]->realVars[0] /* acceleration STATE(1) */ = 0.0;
    infoStreamPrint(LOG_EVENTS, 0, "reinit acceleration = %g", data->localData[0]->realVars[0] /* acceleration STATE(1) */);
    data->simulationInfo->needToIterate = 1;
  }
  TRACE_POP
}
/*
equation index: 57
type: WHEN

when {$whenCondition12} then
  reinit(acceleration,  0.0);
end when;
*/
void TrainSimulation_Train_eqFunction_57(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,57};
  if((data->localData[0]->booleanVars[3] /* $whenCondition12 DISCRETE */ && !data->simulationInfo->booleanVarsPre[3] /* $whenCondition12 DISCRETE */ /* edge */))
  {
    data->localData[0]->realVars[0] /* acceleration STATE(1) */ = 0.0;
    infoStreamPrint(LOG_EVENTS, 0, "reinit acceleration = %g", data->localData[0]->realVars[0] /* acceleration STATE(1) */);
    data->simulationInfo->needToIterate = 1;
  }
  TRACE_POP
}
/*
equation index: 56
type: WHEN

when {$whenCondition13} then
  reinit(acceleration,  breakingDeceleration);
end when;
*/
void TrainSimulation_Train_eqFunction_56(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,56};
  if((data->localData[0]->booleanVars[4] /* $whenCondition13 DISCRETE */ && !data->simulationInfo->booleanVarsPre[4] /* $whenCondition13 DISCRETE */ /* edge */))
  {
    data->localData[0]->realVars[0] /* acceleration STATE(1) */ = data->simulationInfo->realParameter[1] /* breakingDeceleration PARAM */;
    infoStreamPrint(LOG_EVENTS, 0, "reinit acceleration = %g", data->localData[0]->realVars[0] /* acceleration STATE(1) */);
    data->simulationInfo->needToIterate = 1;
  }
  TRACE_POP
}

OMC_DISABLE_OPT
int TrainSimulation_Train_functionDAE(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  int equationIndexes[1] = {0};
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_DAE);
#endif

  data->simulationInfo->needToIterate = 0;
  data->simulationInfo->discreteCall = 1;
  TrainSimulation_Train_functionLocalKnownVars(data, threadData);
  TrainSimulation_Train_eqFunction_31(data, threadData);

  TrainSimulation_Train_eqFunction_32(data, threadData);

  TrainSimulation_Train_eqFunction_33(data, threadData);

  TrainSimulation_Train_eqFunction_34(data, threadData);

  TrainSimulation_Train_eqFunction_35(data, threadData);

  TrainSimulation_Train_eqFunction_36(data, threadData);

  TrainSimulation_Train_eqFunction_37(data, threadData);

  TrainSimulation_Train_eqFunction_38(data, threadData);

  TrainSimulation_Train_eqFunction_39(data, threadData);

  TrainSimulation_Train_eqFunction_40(data, threadData);

  TrainSimulation_Train_eqFunction_41(data, threadData);

  TrainSimulation_Train_eqFunction_42(data, threadData);

  TrainSimulation_Train_eqFunction_43(data, threadData);

  TrainSimulation_Train_eqFunction_44(data, threadData);

  TrainSimulation_Train_eqFunction_45(data, threadData);

  TrainSimulation_Train_eqFunction_46(data, threadData);

  TrainSimulation_Train_eqFunction_47(data, threadData);

  TrainSimulation_Train_eqFunction_48(data, threadData);

  TrainSimulation_Train_eqFunction_49(data, threadData);

  TrainSimulation_Train_eqFunction_50(data, threadData);

  TrainSimulation_Train_eqFunction_51(data, threadData);

  TrainSimulation_Train_eqFunction_52(data, threadData);

  TrainSimulation_Train_eqFunction_53(data, threadData);

  TrainSimulation_Train_eqFunction_54(data, threadData);

  TrainSimulation_Train_eqFunction_55(data, threadData);

  TrainSimulation_Train_eqFunction_68(data, threadData);

  TrainSimulation_Train_eqFunction_67(data, threadData);

  TrainSimulation_Train_eqFunction_66(data, threadData);

  TrainSimulation_Train_eqFunction_65(data, threadData);

  TrainSimulation_Train_eqFunction_64(data, threadData);

  TrainSimulation_Train_eqFunction_63(data, threadData);

  TrainSimulation_Train_eqFunction_62(data, threadData);

  TrainSimulation_Train_eqFunction_61(data, threadData);

  TrainSimulation_Train_eqFunction_60(data, threadData);

  TrainSimulation_Train_eqFunction_59(data, threadData);

  TrainSimulation_Train_eqFunction_58(data, threadData);

  TrainSimulation_Train_eqFunction_57(data, threadData);

  TrainSimulation_Train_eqFunction_56(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_DAE);
#endif
  TRACE_POP
  return 0;
}


int TrainSimulation_Train_functionLocalKnownVars(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}


/* forwarded equations */
extern void TrainSimulation_Train_eqFunction_33(DATA* data, threadData_t *threadData);
extern void TrainSimulation_Train_eqFunction_34(DATA* data, threadData_t *threadData);
extern void TrainSimulation_Train_eqFunction_35(DATA* data, threadData_t *threadData);
extern void TrainSimulation_Train_eqFunction_36(DATA* data, threadData_t *threadData);

static void functionODE_system0(DATA *data, threadData_t *threadData)
{
    TrainSimulation_Train_eqFunction_33(data, threadData);

    TrainSimulation_Train_eqFunction_34(data, threadData);

    TrainSimulation_Train_eqFunction_35(data, threadData);

    TrainSimulation_Train_eqFunction_36(data, threadData);
}

int TrainSimulation_Train_functionODE(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_FUNCTION_ODE);
#endif

  
  data->simulationInfo->callStatistics.functionODE++;
  
  TrainSimulation_Train_functionLocalKnownVars(data, threadData);
  functionODE_system0(data, threadData);

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_FUNCTION_ODE);
#endif

  TRACE_POP
  return 0;
}

/* forward the main in the simulation runtime */
extern int _main_SimulationRuntime(int argc, char**argv, DATA *data, threadData_t *threadData);

#include "TrainSimulation_Train_12jac.h"
#include "TrainSimulation_Train_13opt.h"

struct OpenModelicaGeneratedFunctionCallbacks TrainSimulation_Train_callback = {
   NULL,
   NULL,
   NULL,
   TrainSimulation_Train_callExternalObjectDestructors,
   NULL,
   NULL,
   NULL,
   #if !defined(OMC_NO_STATESELECTION)
   TrainSimulation_Train_initializeStateSets,
   #else
   NULL,
   #endif
   TrainSimulation_Train_initializeDAEmodeData,
   TrainSimulation_Train_functionODE,
   TrainSimulation_Train_functionAlgebraics,
   TrainSimulation_Train_functionDAE,
   TrainSimulation_Train_functionLocalKnownVars,
   TrainSimulation_Train_input_function,
   TrainSimulation_Train_input_function_init,
   TrainSimulation_Train_input_function_updateStartValues,
   TrainSimulation_Train_data_function,
   TrainSimulation_Train_output_function,
   TrainSimulation_Train_setc_function,
   TrainSimulation_Train_function_storeDelayed,
   TrainSimulation_Train_updateBoundVariableAttributes,
   TrainSimulation_Train_functionInitialEquations,
   1, /* useHomotopy - 0: local homotopy (equidistant lambda), 1: global homotopy (equidistant lambda), 2: new global homotopy approach (adaptive lambda), 3: new local homotopy approach (adaptive lambda)*/
   TrainSimulation_Train_functionInitialEquations_lambda0,
   TrainSimulation_Train_functionRemovedInitialEquations,
   TrainSimulation_Train_updateBoundParameters,
   TrainSimulation_Train_checkForAsserts,
   TrainSimulation_Train_function_ZeroCrossingsEquations,
   TrainSimulation_Train_function_ZeroCrossings,
   TrainSimulation_Train_function_updateRelations,
   TrainSimulation_Train_zeroCrossingDescription,
   TrainSimulation_Train_relationDescription,
   TrainSimulation_Train_function_initSample,
   TrainSimulation_Train_INDEX_JAC_A,
   TrainSimulation_Train_INDEX_JAC_B,
   TrainSimulation_Train_INDEX_JAC_C,
   TrainSimulation_Train_INDEX_JAC_D,
   TrainSimulation_Train_INDEX_JAC_F,
   TrainSimulation_Train_initialAnalyticJacobianA,
   TrainSimulation_Train_initialAnalyticJacobianB,
   TrainSimulation_Train_initialAnalyticJacobianC,
   TrainSimulation_Train_initialAnalyticJacobianD,
   TrainSimulation_Train_initialAnalyticJacobianF,
   TrainSimulation_Train_functionJacA_column,
   TrainSimulation_Train_functionJacB_column,
   TrainSimulation_Train_functionJacC_column,
   TrainSimulation_Train_functionJacD_column,
   TrainSimulation_Train_functionJacF_column,
   TrainSimulation_Train_linear_model_frame,
   TrainSimulation_Train_linear_model_datarecovery_frame,
   TrainSimulation_Train_mayer,
   TrainSimulation_Train_lagrange,
   TrainSimulation_Train_pickUpBoundsForInputsInOptimization,
   TrainSimulation_Train_setInputData,
   TrainSimulation_Train_getTimeGrid,
   TrainSimulation_Train_symbolicInlineSystem,
   TrainSimulation_Train_function_initSynchronous,
   TrainSimulation_Train_function_updateSynchronous,
   TrainSimulation_Train_function_equationsSynchronous,
   TrainSimulation_Train_inputNames,
   TrainSimulation_Train_read_input_fmu,
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
void TrainSimulation_Train_setupDataStruc(DATA *data, threadData_t *threadData)
{
  assertStreamPrint(threadData,0!=data, "Error while initialize Data");
  threadData->localRoots[LOCAL_ROOT_SIMULATION_DATA] = data;
  data->callback = &TrainSimulation_Train_callback;
  OpenModelica_updateUriMapping(threadData, MMC_REFSTRUCTLIT(_OMC_LIT_RESOURCES));
  data->modelData->modelName = "TrainSimulation.Train";
  data->modelData->modelFilePrefix = "TrainSimulation_Train";
  data->modelData->resultFileName = NULL;
  data->modelData->modelDir = "E:/Szakdoga";
  data->modelData->modelGUID = "{aad94790-1bc6-4d72-b23f-849e6962a6a7}";
  data->modelData->initXMLData = NULL;
  data->modelData->modelDataXml.infoXMLData = NULL;
  data->modelData->runTestsuite = 0;
  
  data->modelData->nStates = 4;
  data->modelData->nVariablesReal = 16;
  data->modelData->nDiscreteReal = 0;
  data->modelData->nVariablesInteger = 3;
  data->modelData->nVariablesBoolean = 18;
  data->modelData->nVariablesString = 0;
  data->modelData->nParametersReal = 6;
  data->modelData->nParametersInteger = 1;
  data->modelData->nParametersBoolean = 0;
  data->modelData->nParametersString = 0;
  data->modelData->nInputVars = 8;
  data->modelData->nOutputVars = 3;
  
  data->modelData->nAliasReal = 1;
  data->modelData->nAliasInteger = 0;
  data->modelData->nAliasBoolean = 1;
  data->modelData->nAliasString = 0;
  
  data->modelData->nZeroCrossings = 13;
  data->modelData->nSamples = 0;
  data->modelData->nRelations = 16;
  data->modelData->nMathEvents = 0;
  data->modelData->nExtObjs = 0;
  
  GC_asprintf(&data->modelData->modelDataXml.fileName, "%s/TrainSimulation_Train_info.json", data->modelData->resourcesDir);
  data->modelData->modelDataXml.modelInfoXmlLength = 0;
  data->modelData->modelDataXml.nFunctions = 0;
  data->modelData->modelDataXml.nProfileBlocks = 0;
  data->modelData->modelDataXml.nEquations = 74;
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

