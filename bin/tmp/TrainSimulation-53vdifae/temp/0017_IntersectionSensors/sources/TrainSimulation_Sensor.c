/* Main Simulation File */

#if defined(__cplusplus)
extern "C" {
#endif

#include "TrainSimulation_Sensor_model.h"
#include "simulation/solver/events.h"


/* dummy VARINFO and FILEINFO */
const FILE_INFO dummyFILE_INFO = omc_dummyFileInfo;
const VAR_INFO dummyVAR_INFO = omc_dummyVarInfo;

int TrainSimulation_Sensor_input_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->localData[0]->realVars[1] /* DistanceVec[1] variable */ = data->simulationInfo->inputVars[0];
  data->localData[0]->realVars[2] /* DistanceVec[2] variable */ = data->simulationInfo->inputVars[1];
  data->localData[0]->realVars[3] /* DistanceVec[3] variable */ = data->simulationInfo->inputVars[2];
  data->localData[0]->realVars[4] /* DistanceVec[4] variable */ = data->simulationInfo->inputVars[3];
  data->localData[0]->realVars[5] /* DistanceVec[5] variable */ = data->simulationInfo->inputVars[4];
  data->localData[0]->realVars[6] /* DistanceVec[6] variable */ = data->simulationInfo->inputVars[5];
  data->localData[0]->realVars[7] /* DistanceVec[7] variable */ = data->simulationInfo->inputVars[6];
  data->localData[0]->realVars[8] /* DistanceVec[8] variable */ = data->simulationInfo->inputVars[7];
  data->localData[0]->realVars[9] /* DistanceVec[9] variable */ = data->simulationInfo->inputVars[8];
  data->localData[0]->realVars[10] /* DistanceVec[10] variable */ = data->simulationInfo->inputVars[9];
  data->localData[0]->realVars[12] /* LengthVec[1] variable */ = data->simulationInfo->inputVars[10];
  data->localData[0]->realVars[13] /* LengthVec[2] variable */ = data->simulationInfo->inputVars[11];
  data->localData[0]->realVars[14] /* LengthVec[3] variable */ = data->simulationInfo->inputVars[12];
  data->localData[0]->realVars[15] /* LengthVec[4] variable */ = data->simulationInfo->inputVars[13];
  data->localData[0]->realVars[16] /* LengthVec[5] variable */ = data->simulationInfo->inputVars[14];
  data->localData[0]->realVars[17] /* LengthVec[6] variable */ = data->simulationInfo->inputVars[15];
  data->localData[0]->realVars[18] /* LengthVec[7] variable */ = data->simulationInfo->inputVars[16];
  data->localData[0]->realVars[19] /* LengthVec[8] variable */ = data->simulationInfo->inputVars[17];
  data->localData[0]->realVars[20] /* LengthVec[9] variable */ = data->simulationInfo->inputVars[18];
  data->localData[0]->realVars[21] /* LengthVec[10] variable */ = data->simulationInfo->inputVars[19];
  
  TRACE_POP
  return 0;
}

int TrainSimulation_Sensor_input_function_init(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->inputVars[0] = data->modelData->realVarsData[1].attribute.start;
  data->simulationInfo->inputVars[1] = data->modelData->realVarsData[2].attribute.start;
  data->simulationInfo->inputVars[2] = data->modelData->realVarsData[3].attribute.start;
  data->simulationInfo->inputVars[3] = data->modelData->realVarsData[4].attribute.start;
  data->simulationInfo->inputVars[4] = data->modelData->realVarsData[5].attribute.start;
  data->simulationInfo->inputVars[5] = data->modelData->realVarsData[6].attribute.start;
  data->simulationInfo->inputVars[6] = data->modelData->realVarsData[7].attribute.start;
  data->simulationInfo->inputVars[7] = data->modelData->realVarsData[8].attribute.start;
  data->simulationInfo->inputVars[8] = data->modelData->realVarsData[9].attribute.start;
  data->simulationInfo->inputVars[9] = data->modelData->realVarsData[10].attribute.start;
  data->simulationInfo->inputVars[10] = data->modelData->realVarsData[12].attribute.start;
  data->simulationInfo->inputVars[11] = data->modelData->realVarsData[13].attribute.start;
  data->simulationInfo->inputVars[12] = data->modelData->realVarsData[14].attribute.start;
  data->simulationInfo->inputVars[13] = data->modelData->realVarsData[15].attribute.start;
  data->simulationInfo->inputVars[14] = data->modelData->realVarsData[16].attribute.start;
  data->simulationInfo->inputVars[15] = data->modelData->realVarsData[17].attribute.start;
  data->simulationInfo->inputVars[16] = data->modelData->realVarsData[18].attribute.start;
  data->simulationInfo->inputVars[17] = data->modelData->realVarsData[19].attribute.start;
  data->simulationInfo->inputVars[18] = data->modelData->realVarsData[20].attribute.start;
  data->simulationInfo->inputVars[19] = data->modelData->realVarsData[21].attribute.start;
  
  TRACE_POP
  return 0;
}

int TrainSimulation_Sensor_input_function_updateStartValues(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->modelData->realVarsData[1].attribute.start = data->simulationInfo->inputVars[0];
  data->modelData->realVarsData[2].attribute.start = data->simulationInfo->inputVars[1];
  data->modelData->realVarsData[3].attribute.start = data->simulationInfo->inputVars[2];
  data->modelData->realVarsData[4].attribute.start = data->simulationInfo->inputVars[3];
  data->modelData->realVarsData[5].attribute.start = data->simulationInfo->inputVars[4];
  data->modelData->realVarsData[6].attribute.start = data->simulationInfo->inputVars[5];
  data->modelData->realVarsData[7].attribute.start = data->simulationInfo->inputVars[6];
  data->modelData->realVarsData[8].attribute.start = data->simulationInfo->inputVars[7];
  data->modelData->realVarsData[9].attribute.start = data->simulationInfo->inputVars[8];
  data->modelData->realVarsData[10].attribute.start = data->simulationInfo->inputVars[9];
  data->modelData->realVarsData[12].attribute.start = data->simulationInfo->inputVars[10];
  data->modelData->realVarsData[13].attribute.start = data->simulationInfo->inputVars[11];
  data->modelData->realVarsData[14].attribute.start = data->simulationInfo->inputVars[12];
  data->modelData->realVarsData[15].attribute.start = data->simulationInfo->inputVars[13];
  data->modelData->realVarsData[16].attribute.start = data->simulationInfo->inputVars[14];
  data->modelData->realVarsData[17].attribute.start = data->simulationInfo->inputVars[15];
  data->modelData->realVarsData[18].attribute.start = data->simulationInfo->inputVars[16];
  data->modelData->realVarsData[19].attribute.start = data->simulationInfo->inputVars[17];
  data->modelData->realVarsData[20].attribute.start = data->simulationInfo->inputVars[18];
  data->modelData->realVarsData[21].attribute.start = data->simulationInfo->inputVars[19];
  
  TRACE_POP
  return 0;
}

int TrainSimulation_Sensor_inputNames(DATA *data, char ** names){
  TRACE_PUSH

  names[0] = (char *) data->modelData->realVarsData[1].info.name;
  names[1] = (char *) data->modelData->realVarsData[2].info.name;
  names[2] = (char *) data->modelData->realVarsData[3].info.name;
  names[3] = (char *) data->modelData->realVarsData[4].info.name;
  names[4] = (char *) data->modelData->realVarsData[5].info.name;
  names[5] = (char *) data->modelData->realVarsData[6].info.name;
  names[6] = (char *) data->modelData->realVarsData[7].info.name;
  names[7] = (char *) data->modelData->realVarsData[8].info.name;
  names[8] = (char *) data->modelData->realVarsData[9].info.name;
  names[9] = (char *) data->modelData->realVarsData[10].info.name;
  names[10] = (char *) data->modelData->realVarsData[12].info.name;
  names[11] = (char *) data->modelData->realVarsData[13].info.name;
  names[12] = (char *) data->modelData->realVarsData[14].info.name;
  names[13] = (char *) data->modelData->realVarsData[15].info.name;
  names[14] = (char *) data->modelData->realVarsData[16].info.name;
  names[15] = (char *) data->modelData->realVarsData[17].info.name;
  names[16] = (char *) data->modelData->realVarsData[18].info.name;
  names[17] = (char *) data->modelData->realVarsData[19].info.name;
  names[18] = (char *) data->modelData->realVarsData[20].info.name;
  names[19] = (char *) data->modelData->realVarsData[21].info.name;
  
  TRACE_POP
  return 0;
}

int TrainSimulation_Sensor_data_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  TRACE_POP
  return 0;
}

int TrainSimulation_Sensor_output_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->outputVars[0] = data->localData[0]->realVars[11] /* Intersection variable */;
  data->simulationInfo->outputVars[1] = data->localData[0]->realVars[22] /* Safe_Passage variable */;
  data->simulationInfo->outputVars[2] = data->localData[0]->realVars[23] /* Sensor1PositionOut variable */;
  data->simulationInfo->outputVars[3] = data->localData[0]->realVars[24] /* Sensor2PositionOut variable */;
  
  TRACE_POP
  return 0;
}

int TrainSimulation_Sensor_setc_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}


/*
equation index: 36
type: SIMPLE_ASSIGN
Sensor2PositionOut = Sensor2Position
*/
void TrainSimulation_Sensor_eqFunction_36(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,36};
  data->localData[0]->realVars[24] /* Sensor2PositionOut variable */ = data->simulationInfo->realParameter[3] /* Sensor2Position PARAM */;
  TRACE_POP
}
/*
equation index: 37
type: SIMPLE_ASSIGN
Sensor1PositionOut = Sensor1Position
*/
void TrainSimulation_Sensor_eqFunction_37(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,37};
  data->localData[0]->realVars[23] /* Sensor1PositionOut variable */ = data->simulationInfo->realParameter[2] /* Sensor1Position PARAM */;
  TRACE_POP
}
/*
equation index: 38
type: SIMPLE_ASSIGN
Train_Detected1[1] = DistanceVec[1] >= Sensor1Position and DistanceVec[1] - LengthVec[1] <= Sensor1Position + 1.0
*/
void TrainSimulation_Sensor_eqFunction_38(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,38};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[1] /* DistanceVec[1] variable */, data->simulationInfo->realParameter[2] /* Sensor1Position PARAM */, 38, GreaterEq);
  RELATIONHYSTERESIS(tmp1, data->localData[0]->realVars[1] /* DistanceVec[1] variable */ - data->localData[0]->realVars[12] /* LengthVec[1] variable */, data->simulationInfo->realParameter[2] /* Sensor1Position PARAM */ + 1.0, 39, LessEq);
  data->localData[0]->booleanVars[4] /* Train_Detected1[1] DISCRETE */ = (tmp0 && tmp1);
  TRACE_POP
}
/*
equation index: 39
type: SIMPLE_ASSIGN
Train_Detected2[1] = DistanceVec[1] >= Sensor2Position + 1.0 and DistanceVec[1] - LengthVec[1] <= Sensor2Position
*/
void TrainSimulation_Sensor_eqFunction_39(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,39};
  modelica_boolean tmp2;
  modelica_boolean tmp3;
  RELATIONHYSTERESIS(tmp2, data->localData[0]->realVars[1] /* DistanceVec[1] variable */, data->simulationInfo->realParameter[3] /* Sensor2Position PARAM */ + 1.0, 36, GreaterEq);
  RELATIONHYSTERESIS(tmp3, data->localData[0]->realVars[1] /* DistanceVec[1] variable */ - data->localData[0]->realVars[12] /* LengthVec[1] variable */, data->simulationInfo->realParameter[3] /* Sensor2Position PARAM */, 37, LessEq);
  data->localData[0]->booleanVars[14] /* Train_Detected2[1] DISCRETE */ = (tmp2 && tmp3);
  TRACE_POP
}
/*
equation index: 40
type: SIMPLE_ASSIGN
Train_Detected1[2] = DistanceVec[2] >= Sensor1Position and DistanceVec[2] - LengthVec[2] <= Sensor1Position + 1.0
*/
void TrainSimulation_Sensor_eqFunction_40(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,40};
  modelica_boolean tmp4;
  modelica_boolean tmp5;
  RELATIONHYSTERESIS(tmp4, data->localData[0]->realVars[2] /* DistanceVec[2] variable */, data->simulationInfo->realParameter[2] /* Sensor1Position PARAM */, 34, GreaterEq);
  RELATIONHYSTERESIS(tmp5, data->localData[0]->realVars[2] /* DistanceVec[2] variable */ - data->localData[0]->realVars[13] /* LengthVec[2] variable */, data->simulationInfo->realParameter[2] /* Sensor1Position PARAM */ + 1.0, 35, LessEq);
  data->localData[0]->booleanVars[5] /* Train_Detected1[2] DISCRETE */ = (tmp4 && tmp5);
  TRACE_POP
}
/*
equation index: 41
type: SIMPLE_ASSIGN
Train_Detected2[2] = DistanceVec[2] >= Sensor2Position + 1.0 and DistanceVec[2] - LengthVec[2] <= Sensor2Position
*/
void TrainSimulation_Sensor_eqFunction_41(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,41};
  modelica_boolean tmp6;
  modelica_boolean tmp7;
  RELATIONHYSTERESIS(tmp6, data->localData[0]->realVars[2] /* DistanceVec[2] variable */, data->simulationInfo->realParameter[3] /* Sensor2Position PARAM */ + 1.0, 32, GreaterEq);
  RELATIONHYSTERESIS(tmp7, data->localData[0]->realVars[2] /* DistanceVec[2] variable */ - data->localData[0]->realVars[13] /* LengthVec[2] variable */, data->simulationInfo->realParameter[3] /* Sensor2Position PARAM */, 33, LessEq);
  data->localData[0]->booleanVars[15] /* Train_Detected2[2] DISCRETE */ = (tmp6 && tmp7);
  TRACE_POP
}
/*
equation index: 42
type: SIMPLE_ASSIGN
Train_Detected1[3] = DistanceVec[3] >= Sensor1Position and DistanceVec[3] - LengthVec[3] <= Sensor1Position + 1.0
*/
void TrainSimulation_Sensor_eqFunction_42(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,42};
  modelica_boolean tmp8;
  modelica_boolean tmp9;
  RELATIONHYSTERESIS(tmp8, data->localData[0]->realVars[3] /* DistanceVec[3] variable */, data->simulationInfo->realParameter[2] /* Sensor1Position PARAM */, 30, GreaterEq);
  RELATIONHYSTERESIS(tmp9, data->localData[0]->realVars[3] /* DistanceVec[3] variable */ - data->localData[0]->realVars[14] /* LengthVec[3] variable */, data->simulationInfo->realParameter[2] /* Sensor1Position PARAM */ + 1.0, 31, LessEq);
  data->localData[0]->booleanVars[6] /* Train_Detected1[3] DISCRETE */ = (tmp8 && tmp9);
  TRACE_POP
}
/*
equation index: 43
type: SIMPLE_ASSIGN
Train_Detected2[3] = DistanceVec[3] >= Sensor2Position + 1.0 and DistanceVec[3] - LengthVec[3] <= Sensor2Position
*/
void TrainSimulation_Sensor_eqFunction_43(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,43};
  modelica_boolean tmp10;
  modelica_boolean tmp11;
  RELATIONHYSTERESIS(tmp10, data->localData[0]->realVars[3] /* DistanceVec[3] variable */, data->simulationInfo->realParameter[3] /* Sensor2Position PARAM */ + 1.0, 28, GreaterEq);
  RELATIONHYSTERESIS(tmp11, data->localData[0]->realVars[3] /* DistanceVec[3] variable */ - data->localData[0]->realVars[14] /* LengthVec[3] variable */, data->simulationInfo->realParameter[3] /* Sensor2Position PARAM */, 29, LessEq);
  data->localData[0]->booleanVars[16] /* Train_Detected2[3] DISCRETE */ = (tmp10 && tmp11);
  TRACE_POP
}
/*
equation index: 44
type: SIMPLE_ASSIGN
Train_Detected1[4] = DistanceVec[4] >= Sensor1Position and DistanceVec[4] - LengthVec[4] <= Sensor1Position + 1.0
*/
void TrainSimulation_Sensor_eqFunction_44(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,44};
  modelica_boolean tmp12;
  modelica_boolean tmp13;
  RELATIONHYSTERESIS(tmp12, data->localData[0]->realVars[4] /* DistanceVec[4] variable */, data->simulationInfo->realParameter[2] /* Sensor1Position PARAM */, 26, GreaterEq);
  RELATIONHYSTERESIS(tmp13, data->localData[0]->realVars[4] /* DistanceVec[4] variable */ - data->localData[0]->realVars[15] /* LengthVec[4] variable */, data->simulationInfo->realParameter[2] /* Sensor1Position PARAM */ + 1.0, 27, LessEq);
  data->localData[0]->booleanVars[7] /* Train_Detected1[4] DISCRETE */ = (tmp12 && tmp13);
  TRACE_POP
}
/*
equation index: 45
type: SIMPLE_ASSIGN
Train_Detected2[4] = DistanceVec[4] >= Sensor2Position + 1.0 and DistanceVec[4] - LengthVec[4] <= Sensor2Position
*/
void TrainSimulation_Sensor_eqFunction_45(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,45};
  modelica_boolean tmp14;
  modelica_boolean tmp15;
  RELATIONHYSTERESIS(tmp14, data->localData[0]->realVars[4] /* DistanceVec[4] variable */, data->simulationInfo->realParameter[3] /* Sensor2Position PARAM */ + 1.0, 24, GreaterEq);
  RELATIONHYSTERESIS(tmp15, data->localData[0]->realVars[4] /* DistanceVec[4] variable */ - data->localData[0]->realVars[15] /* LengthVec[4] variable */, data->simulationInfo->realParameter[3] /* Sensor2Position PARAM */, 25, LessEq);
  data->localData[0]->booleanVars[17] /* Train_Detected2[4] DISCRETE */ = (tmp14 && tmp15);
  TRACE_POP
}
/*
equation index: 46
type: SIMPLE_ASSIGN
Train_Detected1[5] = DistanceVec[5] >= Sensor1Position and DistanceVec[5] - LengthVec[5] <= Sensor1Position + 1.0
*/
void TrainSimulation_Sensor_eqFunction_46(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,46};
  modelica_boolean tmp16;
  modelica_boolean tmp17;
  RELATIONHYSTERESIS(tmp16, data->localData[0]->realVars[5] /* DistanceVec[5] variable */, data->simulationInfo->realParameter[2] /* Sensor1Position PARAM */, 22, GreaterEq);
  RELATIONHYSTERESIS(tmp17, data->localData[0]->realVars[5] /* DistanceVec[5] variable */ - data->localData[0]->realVars[16] /* LengthVec[5] variable */, data->simulationInfo->realParameter[2] /* Sensor1Position PARAM */ + 1.0, 23, LessEq);
  data->localData[0]->booleanVars[8] /* Train_Detected1[5] DISCRETE */ = (tmp16 && tmp17);
  TRACE_POP
}
/*
equation index: 47
type: SIMPLE_ASSIGN
Train_Detected2[5] = DistanceVec[5] >= Sensor2Position + 1.0 and DistanceVec[5] - LengthVec[5] <= Sensor2Position
*/
void TrainSimulation_Sensor_eqFunction_47(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,47};
  modelica_boolean tmp18;
  modelica_boolean tmp19;
  RELATIONHYSTERESIS(tmp18, data->localData[0]->realVars[5] /* DistanceVec[5] variable */, data->simulationInfo->realParameter[3] /* Sensor2Position PARAM */ + 1.0, 20, GreaterEq);
  RELATIONHYSTERESIS(tmp19, data->localData[0]->realVars[5] /* DistanceVec[5] variable */ - data->localData[0]->realVars[16] /* LengthVec[5] variable */, data->simulationInfo->realParameter[3] /* Sensor2Position PARAM */, 21, LessEq);
  data->localData[0]->booleanVars[18] /* Train_Detected2[5] DISCRETE */ = (tmp18 && tmp19);
  TRACE_POP
}
/*
equation index: 48
type: SIMPLE_ASSIGN
Train_Detected1[6] = DistanceVec[6] >= Sensor1Position and DistanceVec[6] - LengthVec[6] <= Sensor1Position + 1.0
*/
void TrainSimulation_Sensor_eqFunction_48(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,48};
  modelica_boolean tmp20;
  modelica_boolean tmp21;
  RELATIONHYSTERESIS(tmp20, data->localData[0]->realVars[6] /* DistanceVec[6] variable */, data->simulationInfo->realParameter[2] /* Sensor1Position PARAM */, 18, GreaterEq);
  RELATIONHYSTERESIS(tmp21, data->localData[0]->realVars[6] /* DistanceVec[6] variable */ - data->localData[0]->realVars[17] /* LengthVec[6] variable */, data->simulationInfo->realParameter[2] /* Sensor1Position PARAM */ + 1.0, 19, LessEq);
  data->localData[0]->booleanVars[9] /* Train_Detected1[6] DISCRETE */ = (tmp20 && tmp21);
  TRACE_POP
}
/*
equation index: 49
type: SIMPLE_ASSIGN
Train_Detected2[6] = DistanceVec[6] >= Sensor2Position + 1.0 and DistanceVec[6] - LengthVec[6] <= Sensor2Position
*/
void TrainSimulation_Sensor_eqFunction_49(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,49};
  modelica_boolean tmp22;
  modelica_boolean tmp23;
  RELATIONHYSTERESIS(tmp22, data->localData[0]->realVars[6] /* DistanceVec[6] variable */, data->simulationInfo->realParameter[3] /* Sensor2Position PARAM */ + 1.0, 16, GreaterEq);
  RELATIONHYSTERESIS(tmp23, data->localData[0]->realVars[6] /* DistanceVec[6] variable */ - data->localData[0]->realVars[17] /* LengthVec[6] variable */, data->simulationInfo->realParameter[3] /* Sensor2Position PARAM */, 17, LessEq);
  data->localData[0]->booleanVars[19] /* Train_Detected2[6] DISCRETE */ = (tmp22 && tmp23);
  TRACE_POP
}
/*
equation index: 50
type: SIMPLE_ASSIGN
Train_Detected1[7] = DistanceVec[7] >= Sensor1Position and DistanceVec[7] - LengthVec[7] <= Sensor1Position + 1.0
*/
void TrainSimulation_Sensor_eqFunction_50(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,50};
  modelica_boolean tmp24;
  modelica_boolean tmp25;
  RELATIONHYSTERESIS(tmp24, data->localData[0]->realVars[7] /* DistanceVec[7] variable */, data->simulationInfo->realParameter[2] /* Sensor1Position PARAM */, 14, GreaterEq);
  RELATIONHYSTERESIS(tmp25, data->localData[0]->realVars[7] /* DistanceVec[7] variable */ - data->localData[0]->realVars[18] /* LengthVec[7] variable */, data->simulationInfo->realParameter[2] /* Sensor1Position PARAM */ + 1.0, 15, LessEq);
  data->localData[0]->booleanVars[10] /* Train_Detected1[7] DISCRETE */ = (tmp24 && tmp25);
  TRACE_POP
}
/*
equation index: 51
type: SIMPLE_ASSIGN
Train_Detected2[7] = DistanceVec[7] >= Sensor2Position + 1.0 and DistanceVec[7] - LengthVec[7] <= Sensor2Position
*/
void TrainSimulation_Sensor_eqFunction_51(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,51};
  modelica_boolean tmp26;
  modelica_boolean tmp27;
  RELATIONHYSTERESIS(tmp26, data->localData[0]->realVars[7] /* DistanceVec[7] variable */, data->simulationInfo->realParameter[3] /* Sensor2Position PARAM */ + 1.0, 12, GreaterEq);
  RELATIONHYSTERESIS(tmp27, data->localData[0]->realVars[7] /* DistanceVec[7] variable */ - data->localData[0]->realVars[18] /* LengthVec[7] variable */, data->simulationInfo->realParameter[3] /* Sensor2Position PARAM */, 13, LessEq);
  data->localData[0]->booleanVars[20] /* Train_Detected2[7] DISCRETE */ = (tmp26 && tmp27);
  TRACE_POP
}
/*
equation index: 52
type: SIMPLE_ASSIGN
Train_Detected1[8] = DistanceVec[8] >= Sensor1Position and DistanceVec[8] - LengthVec[8] <= Sensor1Position + 1.0
*/
void TrainSimulation_Sensor_eqFunction_52(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,52};
  modelica_boolean tmp28;
  modelica_boolean tmp29;
  RELATIONHYSTERESIS(tmp28, data->localData[0]->realVars[8] /* DistanceVec[8] variable */, data->simulationInfo->realParameter[2] /* Sensor1Position PARAM */, 10, GreaterEq);
  RELATIONHYSTERESIS(tmp29, data->localData[0]->realVars[8] /* DistanceVec[8] variable */ - data->localData[0]->realVars[19] /* LengthVec[8] variable */, data->simulationInfo->realParameter[2] /* Sensor1Position PARAM */ + 1.0, 11, LessEq);
  data->localData[0]->booleanVars[11] /* Train_Detected1[8] DISCRETE */ = (tmp28 && tmp29);
  TRACE_POP
}
/*
equation index: 53
type: SIMPLE_ASSIGN
Train_Detected2[8] = DistanceVec[8] >= Sensor2Position + 1.0 and DistanceVec[8] - LengthVec[8] <= Sensor2Position
*/
void TrainSimulation_Sensor_eqFunction_53(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,53};
  modelica_boolean tmp30;
  modelica_boolean tmp31;
  RELATIONHYSTERESIS(tmp30, data->localData[0]->realVars[8] /* DistanceVec[8] variable */, data->simulationInfo->realParameter[3] /* Sensor2Position PARAM */ + 1.0, 8, GreaterEq);
  RELATIONHYSTERESIS(tmp31, data->localData[0]->realVars[8] /* DistanceVec[8] variable */ - data->localData[0]->realVars[19] /* LengthVec[8] variable */, data->simulationInfo->realParameter[3] /* Sensor2Position PARAM */, 9, LessEq);
  data->localData[0]->booleanVars[21] /* Train_Detected2[8] DISCRETE */ = (tmp30 && tmp31);
  TRACE_POP
}
/*
equation index: 54
type: SIMPLE_ASSIGN
Train_Detected1[9] = DistanceVec[9] >= Sensor1Position and DistanceVec[9] - LengthVec[9] <= Sensor1Position + 1.0
*/
void TrainSimulation_Sensor_eqFunction_54(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,54};
  modelica_boolean tmp32;
  modelica_boolean tmp33;
  RELATIONHYSTERESIS(tmp32, data->localData[0]->realVars[9] /* DistanceVec[9] variable */, data->simulationInfo->realParameter[2] /* Sensor1Position PARAM */, 6, GreaterEq);
  RELATIONHYSTERESIS(tmp33, data->localData[0]->realVars[9] /* DistanceVec[9] variable */ - data->localData[0]->realVars[20] /* LengthVec[9] variable */, data->simulationInfo->realParameter[2] /* Sensor1Position PARAM */ + 1.0, 7, LessEq);
  data->localData[0]->booleanVars[12] /* Train_Detected1[9] DISCRETE */ = (tmp32 && tmp33);
  TRACE_POP
}
/*
equation index: 55
type: SIMPLE_ASSIGN
Train_Detected2[9] = DistanceVec[9] >= Sensor2Position + 1.0 and DistanceVec[9] - LengthVec[9] <= Sensor2Position
*/
void TrainSimulation_Sensor_eqFunction_55(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,55};
  modelica_boolean tmp34;
  modelica_boolean tmp35;
  RELATIONHYSTERESIS(tmp34, data->localData[0]->realVars[9] /* DistanceVec[9] variable */, data->simulationInfo->realParameter[3] /* Sensor2Position PARAM */ + 1.0, 4, GreaterEq);
  RELATIONHYSTERESIS(tmp35, data->localData[0]->realVars[9] /* DistanceVec[9] variable */ - data->localData[0]->realVars[20] /* LengthVec[9] variable */, data->simulationInfo->realParameter[3] /* Sensor2Position PARAM */, 5, LessEq);
  data->localData[0]->booleanVars[22] /* Train_Detected2[9] DISCRETE */ = (tmp34 && tmp35);
  TRACE_POP
}
/*
equation index: 56
type: SIMPLE_ASSIGN
Train_Detected1[10] = DistanceVec[10] >= Sensor1Position and DistanceVec[10] - LengthVec[10] <= Sensor1Position + 1.0
*/
void TrainSimulation_Sensor_eqFunction_56(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,56};
  modelica_boolean tmp36;
  modelica_boolean tmp37;
  RELATIONHYSTERESIS(tmp36, data->localData[0]->realVars[10] /* DistanceVec[10] variable */, data->simulationInfo->realParameter[2] /* Sensor1Position PARAM */, 2, GreaterEq);
  RELATIONHYSTERESIS(tmp37, data->localData[0]->realVars[10] /* DistanceVec[10] variable */ - data->localData[0]->realVars[21] /* LengthVec[10] variable */, data->simulationInfo->realParameter[2] /* Sensor1Position PARAM */ + 1.0, 3, LessEq);
  data->localData[0]->booleanVars[13] /* Train_Detected1[10] DISCRETE */ = (tmp36 && tmp37);
  TRACE_POP
}
/*
equation index: 57
type: SIMPLE_ASSIGN
Sensor1_Active = TrainSimulation.Sensor.Active(10, Train_Detected1)
*/
void TrainSimulation_Sensor_eqFunction_57(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,57};
  boolean_array tmp38;
  boolean_array_create(&tmp38, ((modelica_boolean*)&((&data->localData[0]->booleanVars[4] /* Train_Detected1[1] DISCRETE */)[calc_base_index_dims_subs(1, 10, ((modelica_integer) 1))])), 1, 10);
  data->localData[0]->booleanVars[2] /* Sensor1_Active DISCRETE */ = omc_TrainSimulation_Sensor_Active(threadData, ((modelica_integer) 10), tmp38);
  TRACE_POP
}
/*
equation index: 58
type: SIMPLE_ASSIGN
$whenCondition1 = Sensor1_Active and not pre(Sensor1_Active)
*/
void TrainSimulation_Sensor_eqFunction_58(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,58};
  data->localData[0]->booleanVars[0] /* $whenCondition1 DISCRETE */ = (data->localData[0]->booleanVars[2] /* Sensor1_Active DISCRETE */ && (!data->simulationInfo->booleanVarsPre[2] /* Sensor1_Active DISCRETE */));
  TRACE_POP
}
/*
equation index: 59
type: SIMPLE_ASSIGN
Train_Detected2[10] = DistanceVec[10] >= Sensor2Position + 1.0 and DistanceVec[10] - LengthVec[10] <= Sensor2Position
*/
void TrainSimulation_Sensor_eqFunction_59(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,59};
  modelica_boolean tmp39;
  modelica_boolean tmp40;
  RELATIONHYSTERESIS(tmp39, data->localData[0]->realVars[10] /* DistanceVec[10] variable */, data->simulationInfo->realParameter[3] /* Sensor2Position PARAM */ + 1.0, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp40, data->localData[0]->realVars[10] /* DistanceVec[10] variable */ - data->localData[0]->realVars[21] /* LengthVec[10] variable */, data->simulationInfo->realParameter[3] /* Sensor2Position PARAM */, 1, LessEq);
  data->localData[0]->booleanVars[23] /* Train_Detected2[10] DISCRETE */ = (tmp39 && tmp40);
  TRACE_POP
}
/*
equation index: 60
type: SIMPLE_ASSIGN
Sensor2_Active = TrainSimulation.Sensor.Active(10, Train_Detected2)
*/
void TrainSimulation_Sensor_eqFunction_60(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,60};
  boolean_array tmp41;
  boolean_array_create(&tmp41, ((modelica_boolean*)&((&data->localData[0]->booleanVars[14] /* Train_Detected2[1] DISCRETE */)[calc_base_index_dims_subs(1, 10, ((modelica_integer) 1))])), 1, 10);
  data->localData[0]->booleanVars[3] /* Sensor2_Active DISCRETE */ = omc_TrainSimulation_Sensor_Active(threadData, ((modelica_integer) 10), tmp41);
  TRACE_POP
}
/*
equation index: 61
type: SIMPLE_ASSIGN
$whenCondition2 = Sensor2_Active <> pre(Sensor2_Active) and not Sensor2_Active and pre(Sensor2_Active)
*/
void TrainSimulation_Sensor_eqFunction_61(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,61};
  data->localData[0]->booleanVars[1] /* $whenCondition2 DISCRETE */ = ((((!data->localData[0]->booleanVars[3] /* Sensor2_Active DISCRETE */ && data->simulationInfo->booleanVarsPre[3] /* Sensor2_Active DISCRETE */) || (data->localData[0]->booleanVars[3] /* Sensor2_Active DISCRETE */ && !data->simulationInfo->booleanVarsPre[3] /* Sensor2_Active DISCRETE */)) && (!data->localData[0]->booleanVars[3] /* Sensor2_Active DISCRETE */)) && data->simulationInfo->booleanVarsPre[3] /* Sensor2_Active DISCRETE */);
  TRACE_POP
}
/*
equation index: 62
type: WHEN

when {$whenCondition2} then
  Sensor2Output = 1 + pre(Sensor2Output);
end when;
*/
void TrainSimulation_Sensor_eqFunction_62(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,62};
  if((data->localData[0]->booleanVars[1] /* $whenCondition2 DISCRETE */ && !data->simulationInfo->booleanVarsPre[1] /* $whenCondition2 DISCRETE */ /* edge */))
  {
    data->localData[0]->integerVars[1] /* Sensor2Output DISCRETE */ = ((modelica_integer) 1) + data->simulationInfo->integerVarsPre[1] /* Sensor2Output DISCRETE */;
  }
  TRACE_POP
}
/*
equation index: 63
type: WHEN

when {$whenCondition1} then
  Sensor1Input = 1 + pre(Sensor1Input);
end when;
*/
void TrainSimulation_Sensor_eqFunction_63(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,63};
  if((data->localData[0]->booleanVars[0] /* $whenCondition1 DISCRETE */ && !data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */ /* edge */))
  {
    data->localData[0]->integerVars[0] /* Sensor1Input DISCRETE */ = ((modelica_integer) 1) + data->simulationInfo->integerVarsPre[0] /* Sensor1Input DISCRETE */;
  }
  TRACE_POP
}
/*
equation index: 64
type: SIMPLE_ASSIGN
Safe_Passage = if Sensor1Input == Sensor2Output then 1.0 else 0.0
*/
void TrainSimulation_Sensor_eqFunction_64(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,64};
  data->localData[0]->realVars[22] /* Safe_Passage variable */ = ((data->localData[0]->integerVars[0] /* Sensor1Input DISCRETE */ == data->localData[0]->integerVars[1] /* Sensor2Output DISCRETE */)?1.0:0.0);
  TRACE_POP
}
/*
equation index: 65
type: SIMPLE_ASSIGN
Intersection = $outputAlias_Intersection
*/
void TrainSimulation_Sensor_eqFunction_65(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,65};
  data->localData[0]->realVars[11] /* Intersection variable */ = data->localData[0]->realVars[0] /* $outputAlias_Intersection variable */;
  TRACE_POP
}

OMC_DISABLE_OPT
int TrainSimulation_Sensor_functionDAE(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  int equationIndexes[1] = {0};
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_DAE);
#endif

  data->simulationInfo->needToIterate = 0;
  data->simulationInfo->discreteCall = 1;
  TrainSimulation_Sensor_functionLocalKnownVars(data, threadData);
  TrainSimulation_Sensor_eqFunction_36(data, threadData);

  TrainSimulation_Sensor_eqFunction_37(data, threadData);

  TrainSimulation_Sensor_eqFunction_38(data, threadData);

  TrainSimulation_Sensor_eqFunction_39(data, threadData);

  TrainSimulation_Sensor_eqFunction_40(data, threadData);

  TrainSimulation_Sensor_eqFunction_41(data, threadData);

  TrainSimulation_Sensor_eqFunction_42(data, threadData);

  TrainSimulation_Sensor_eqFunction_43(data, threadData);

  TrainSimulation_Sensor_eqFunction_44(data, threadData);

  TrainSimulation_Sensor_eqFunction_45(data, threadData);

  TrainSimulation_Sensor_eqFunction_46(data, threadData);

  TrainSimulation_Sensor_eqFunction_47(data, threadData);

  TrainSimulation_Sensor_eqFunction_48(data, threadData);

  TrainSimulation_Sensor_eqFunction_49(data, threadData);

  TrainSimulation_Sensor_eqFunction_50(data, threadData);

  TrainSimulation_Sensor_eqFunction_51(data, threadData);

  TrainSimulation_Sensor_eqFunction_52(data, threadData);

  TrainSimulation_Sensor_eqFunction_53(data, threadData);

  TrainSimulation_Sensor_eqFunction_54(data, threadData);

  TrainSimulation_Sensor_eqFunction_55(data, threadData);

  TrainSimulation_Sensor_eqFunction_56(data, threadData);

  TrainSimulation_Sensor_eqFunction_57(data, threadData);

  TrainSimulation_Sensor_eqFunction_58(data, threadData);

  TrainSimulation_Sensor_eqFunction_59(data, threadData);

  TrainSimulation_Sensor_eqFunction_60(data, threadData);

  TrainSimulation_Sensor_eqFunction_61(data, threadData);

  TrainSimulation_Sensor_eqFunction_62(data, threadData);

  TrainSimulation_Sensor_eqFunction_63(data, threadData);

  TrainSimulation_Sensor_eqFunction_64(data, threadData);

  TrainSimulation_Sensor_eqFunction_65(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_DAE);
#endif
  TRACE_POP
  return 0;
}


int TrainSimulation_Sensor_functionLocalKnownVars(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}


int TrainSimulation_Sensor_functionODE(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_FUNCTION_ODE);
#endif

  
  data->simulationInfo->callStatistics.functionODE++;
  
  TrainSimulation_Sensor_functionLocalKnownVars(data, threadData);
  /* no ODE systems */

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_FUNCTION_ODE);
#endif

  TRACE_POP
  return 0;
}

/* forward the main in the simulation runtime */
extern int _main_SimulationRuntime(int argc, char**argv, DATA *data, threadData_t *threadData);

#include "TrainSimulation_Sensor_12jac.h"
#include "TrainSimulation_Sensor_13opt.h"

struct OpenModelicaGeneratedFunctionCallbacks TrainSimulation_Sensor_callback = {
   NULL,
   NULL,
   NULL,
   TrainSimulation_Sensor_callExternalObjectDestructors,
   NULL,
   NULL,
   NULL,
   #if !defined(OMC_NO_STATESELECTION)
   TrainSimulation_Sensor_initializeStateSets,
   #else
   NULL,
   #endif
   TrainSimulation_Sensor_initializeDAEmodeData,
   TrainSimulation_Sensor_functionODE,
   TrainSimulation_Sensor_functionAlgebraics,
   TrainSimulation_Sensor_functionDAE,
   TrainSimulation_Sensor_functionLocalKnownVars,
   TrainSimulation_Sensor_input_function,
   TrainSimulation_Sensor_input_function_init,
   TrainSimulation_Sensor_input_function_updateStartValues,
   TrainSimulation_Sensor_data_function,
   TrainSimulation_Sensor_output_function,
   TrainSimulation_Sensor_setc_function,
   TrainSimulation_Sensor_function_storeDelayed,
   TrainSimulation_Sensor_updateBoundVariableAttributes,
   TrainSimulation_Sensor_functionInitialEquations,
   1, /* useHomotopy - 0: local homotopy (equidistant lambda), 1: global homotopy (equidistant lambda), 2: new global homotopy approach (adaptive lambda), 3: new local homotopy approach (adaptive lambda)*/
   TrainSimulation_Sensor_functionInitialEquations_lambda0,
   TrainSimulation_Sensor_functionRemovedInitialEquations,
   TrainSimulation_Sensor_updateBoundParameters,
   TrainSimulation_Sensor_checkForAsserts,
   TrainSimulation_Sensor_function_ZeroCrossingsEquations,
   TrainSimulation_Sensor_function_ZeroCrossings,
   TrainSimulation_Sensor_function_updateRelations,
   TrainSimulation_Sensor_zeroCrossingDescription,
   TrainSimulation_Sensor_relationDescription,
   TrainSimulation_Sensor_function_initSample,
   TrainSimulation_Sensor_INDEX_JAC_A,
   TrainSimulation_Sensor_INDEX_JAC_B,
   TrainSimulation_Sensor_INDEX_JAC_C,
   TrainSimulation_Sensor_INDEX_JAC_D,
   TrainSimulation_Sensor_INDEX_JAC_F,
   TrainSimulation_Sensor_initialAnalyticJacobianA,
   TrainSimulation_Sensor_initialAnalyticJacobianB,
   TrainSimulation_Sensor_initialAnalyticJacobianC,
   TrainSimulation_Sensor_initialAnalyticJacobianD,
   TrainSimulation_Sensor_initialAnalyticJacobianF,
   TrainSimulation_Sensor_functionJacA_column,
   TrainSimulation_Sensor_functionJacB_column,
   TrainSimulation_Sensor_functionJacC_column,
   TrainSimulation_Sensor_functionJacD_column,
   TrainSimulation_Sensor_functionJacF_column,
   TrainSimulation_Sensor_linear_model_frame,
   TrainSimulation_Sensor_linear_model_datarecovery_frame,
   TrainSimulation_Sensor_mayer,
   TrainSimulation_Sensor_lagrange,
   TrainSimulation_Sensor_pickUpBoundsForInputsInOptimization,
   TrainSimulation_Sensor_setInputData,
   TrainSimulation_Sensor_getTimeGrid,
   TrainSimulation_Sensor_symbolicInlineSystem,
   TrainSimulation_Sensor_function_initSynchronous,
   TrainSimulation_Sensor_function_updateSynchronous,
   TrainSimulation_Sensor_function_equationsSynchronous,
   TrainSimulation_Sensor_inputNames,
   TrainSimulation_Sensor_read_input_fmu,
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
void TrainSimulation_Sensor_setupDataStruc(DATA *data, threadData_t *threadData)
{
  assertStreamPrint(threadData,0!=data, "Error while initialize Data");
  threadData->localRoots[LOCAL_ROOT_SIMULATION_DATA] = data;
  data->callback = &TrainSimulation_Sensor_callback;
  OpenModelica_updateUriMapping(threadData, MMC_REFSTRUCTLIT(_OMC_LIT_RESOURCES));
  data->modelData->modelName = "TrainSimulation.Sensor";
  data->modelData->modelFilePrefix = "TrainSimulation_Sensor";
  data->modelData->resultFileName = NULL;
  data->modelData->modelDir = "E:/Szakdoga";
  data->modelData->modelGUID = "{30c7124c-152e-42c3-ab2d-fdc76b5beb93}";
  data->modelData->initXMLData = NULL;
  data->modelData->modelDataXml.infoXMLData = NULL;
  data->modelData->runTestsuite = 0;
  
  data->modelData->nStates = 0;
  data->modelData->nVariablesReal = 25;
  data->modelData->nDiscreteReal = 0;
  data->modelData->nVariablesInteger = 2;
  data->modelData->nVariablesBoolean = 24;
  data->modelData->nVariablesString = 0;
  data->modelData->nParametersReal = 4;
  data->modelData->nParametersInteger = 1;
  data->modelData->nParametersBoolean = 0;
  data->modelData->nParametersString = 0;
  data->modelData->nInputVars = 20;
  data->modelData->nOutputVars = 4;
  
  data->modelData->nAliasReal = 1;
  data->modelData->nAliasInteger = 0;
  data->modelData->nAliasBoolean = 0;
  data->modelData->nAliasString = 0;
  
  data->modelData->nZeroCrossings = 20;
  data->modelData->nSamples = 0;
  data->modelData->nRelations = 40;
  data->modelData->nMathEvents = 0;
  data->modelData->nExtObjs = 0;
  
  GC_asprintf(&data->modelData->modelDataXml.fileName, "%s/TrainSimulation_Sensor_info.json", data->modelData->resourcesDir);
  data->modelData->modelDataXml.modelInfoXmlLength = 0;
  data->modelData->modelDataXml.nFunctions = 1;
  data->modelData->modelDataXml.nProfileBlocks = 0;
  data->modelData->modelDataXml.nEquations = 70;
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

