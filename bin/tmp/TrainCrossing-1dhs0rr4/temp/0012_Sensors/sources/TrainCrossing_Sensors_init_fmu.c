#include "simulation_data.h"

OMC_DISABLE_OPT
void TrainCrossing_Sensors_read_input_fmu(MODEL_DATA* modelData, SIMULATION_INFO* simulationInfo)
{
  simulationInfo->startTime = 0.0;
  simulationInfo->stopTime = 1.0;
  simulationInfo->stepSize = 0.002;
  simulationInfo->tolerance = 1e-006;
  simulationInfo->solverMethod = "dassl";
  simulationInfo->outputFormat = "mat";
  simulationInfo->variableFilter = ".*";
  simulationInfo->OPENMODELICAHOME = "E:/Modelica/";
  modelData->realVarsData[0].info.id = 1000;
  modelData->realVarsData[0].info.name = "$outputAlias_Intersection";
  modelData->realVarsData[0].info.comment = "";
  modelData->realVarsData[0].info.info.filename = "E:/Onlab/TrainCrossing/TrainCrossing.mo";
  modelData->realVarsData[0].info.info.lineStart = 247;
  modelData->realVarsData[0].info.info.colStart = 5;
  modelData->realVarsData[0].info.info.lineEnd = 247;
  modelData->realVarsData[0].info.info.colEnd = 55;
  modelData->realVarsData[0].info.info.readonly = 0;
  modelData->realVarsData[0].attribute.unit = "";
  modelData->realVarsData[0].attribute.displayUnit = "";
  modelData->realVarsData[0].attribute.min = -DBL_MAX;
  modelData->realVarsData[0].attribute.max = DBL_MAX;
  modelData->realVarsData[0].attribute.fixed = 1;
  modelData->realVarsData[0].attribute.useNominal = 0;
  modelData->realVarsData[0].attribute.nominal = 1.0;
  modelData->realVarsData[0].attribute.start = 0.0;
  modelData->realVarsData[1].info.id = 1001;
  modelData->realVarsData[1].info.name = "DistanceVec[1]";
  modelData->realVarsData[1].info.comment = "";
  modelData->realVarsData[1].info.info.filename = "E:/Onlab/TrainCrossing/TrainCrossing.mo";
  modelData->realVarsData[1].info.info.lineStart = 243;
  modelData->realVarsData[1].info.info.colStart = 5;
  modelData->realVarsData[1].info.info.lineEnd = 243;
  modelData->realVarsData[1].info.info.colEnd = 65;
  modelData->realVarsData[1].info.info.readonly = 0;
  modelData->realVarsData[1].attribute.unit = "";
  modelData->realVarsData[1].attribute.displayUnit = "";
  modelData->realVarsData[1].attribute.min = -DBL_MAX;
  modelData->realVarsData[1].attribute.max = DBL_MAX;
  modelData->realVarsData[1].attribute.fixed = 1;
  modelData->realVarsData[1].attribute.useNominal = 0;
  modelData->realVarsData[1].attribute.nominal = 1.0;
  modelData->realVarsData[1].attribute.start = 0.0;
  modelData->realVarsData[2].info.id = 1002;
  modelData->realVarsData[2].info.name = "DistanceVec[2]";
  modelData->realVarsData[2].info.comment = "";
  modelData->realVarsData[2].info.info.filename = "E:/Onlab/TrainCrossing/TrainCrossing.mo";
  modelData->realVarsData[2].info.info.lineStart = 243;
  modelData->realVarsData[2].info.info.colStart = 5;
  modelData->realVarsData[2].info.info.lineEnd = 243;
  modelData->realVarsData[2].info.info.colEnd = 65;
  modelData->realVarsData[2].info.info.readonly = 0;
  modelData->realVarsData[2].attribute.unit = "";
  modelData->realVarsData[2].attribute.displayUnit = "";
  modelData->realVarsData[2].attribute.min = -DBL_MAX;
  modelData->realVarsData[2].attribute.max = DBL_MAX;
  modelData->realVarsData[2].attribute.fixed = 1;
  modelData->realVarsData[2].attribute.useNominal = 0;
  modelData->realVarsData[2].attribute.nominal = 1.0;
  modelData->realVarsData[2].attribute.start = 0.0;
  modelData->realVarsData[3].info.id = 1003;
  modelData->realVarsData[3].info.name = "Intersection";
  modelData->realVarsData[3].info.comment = "";
  modelData->realVarsData[3].info.info.filename = "E:/Onlab/TrainCrossing/TrainCrossing.mo";
  modelData->realVarsData[3].info.info.lineStart = 247;
  modelData->realVarsData[3].info.info.colStart = 5;
  modelData->realVarsData[3].info.info.lineEnd = 247;
  modelData->realVarsData[3].info.info.colEnd = 55;
  modelData->realVarsData[3].info.info.readonly = 0;
  modelData->realVarsData[3].attribute.unit = "";
  modelData->realVarsData[3].attribute.displayUnit = "";
  modelData->realVarsData[3].attribute.min = -DBL_MAX;
  modelData->realVarsData[3].attribute.max = DBL_MAX;
  modelData->realVarsData[3].attribute.fixed = 0;
  modelData->realVarsData[3].attribute.useNominal = 0;
  modelData->realVarsData[3].attribute.nominal = 1.0;
  modelData->realVarsData[3].attribute.start = 300.0;
  modelData->realVarsData[4].info.id = 1004;
  modelData->realVarsData[4].info.name = "LengthVec[1]";
  modelData->realVarsData[4].info.comment = "";
  modelData->realVarsData[4].info.info.filename = "E:/Onlab/TrainCrossing/TrainCrossing.mo";
  modelData->realVarsData[4].info.info.lineStart = 242;
  modelData->realVarsData[4].info.info.colStart = 5;
  modelData->realVarsData[4].info.info.lineEnd = 242;
  modelData->realVarsData[4].info.info.colEnd = 63;
  modelData->realVarsData[4].info.info.readonly = 0;
  modelData->realVarsData[4].attribute.unit = "";
  modelData->realVarsData[4].attribute.displayUnit = "";
  modelData->realVarsData[4].attribute.min = -DBL_MAX;
  modelData->realVarsData[4].attribute.max = DBL_MAX;
  modelData->realVarsData[4].attribute.fixed = 1;
  modelData->realVarsData[4].attribute.useNominal = 0;
  modelData->realVarsData[4].attribute.nominal = 1.0;
  modelData->realVarsData[4].attribute.start = 0.0;
  modelData->realVarsData[5].info.id = 1005;
  modelData->realVarsData[5].info.name = "LengthVec[2]";
  modelData->realVarsData[5].info.comment = "";
  modelData->realVarsData[5].info.info.filename = "E:/Onlab/TrainCrossing/TrainCrossing.mo";
  modelData->realVarsData[5].info.info.lineStart = 242;
  modelData->realVarsData[5].info.info.colStart = 5;
  modelData->realVarsData[5].info.info.lineEnd = 242;
  modelData->realVarsData[5].info.info.colEnd = 63;
  modelData->realVarsData[5].info.info.readonly = 0;
  modelData->realVarsData[5].attribute.unit = "";
  modelData->realVarsData[5].attribute.displayUnit = "";
  modelData->realVarsData[5].attribute.min = -DBL_MAX;
  modelData->realVarsData[5].attribute.max = DBL_MAX;
  modelData->realVarsData[5].attribute.fixed = 1;
  modelData->realVarsData[5].attribute.useNominal = 0;
  modelData->realVarsData[5].attribute.nominal = 1.0;
  modelData->realVarsData[5].attribute.start = 0.0;
  modelData->realParameterData[0].info.id = 1006;
  modelData->realParameterData[0].info.name = "Sensor1Position";
  modelData->realParameterData[0].info.comment = "";
  modelData->realParameterData[0].info.info.filename = "E:/Onlab/TrainCrossing/TrainCrossing.mo";
  modelData->realParameterData[0].info.info.lineStart = 248;
  modelData->realParameterData[0].info.info.colStart = 5;
  modelData->realParameterData[0].info.info.lineEnd = 248;
  modelData->realParameterData[0].info.info.colEnd = 52;
  modelData->realParameterData[0].info.info.readonly = 0;
  modelData->realParameterData[0].attribute.unit = "m";
  modelData->realParameterData[0].attribute.displayUnit = "";
  modelData->realParameterData[0].attribute.min = -DBL_MAX;
  modelData->realParameterData[0].attribute.max = DBL_MAX;
  modelData->realParameterData[0].attribute.fixed = 1;
  modelData->realParameterData[0].attribute.useNominal = 0;
  modelData->realParameterData[0].attribute.nominal = 1.0;
  modelData->realParameterData[0].attribute.start = 100.0;
  modelData->realParameterData[1].info.id = 1007;
  modelData->realParameterData[1].info.name = "Sensor2Position";
  modelData->realParameterData[1].info.comment = "";
  modelData->realParameterData[1].info.info.filename = "E:/Onlab/TrainCrossing/TrainCrossing.mo";
  modelData->realParameterData[1].info.info.lineStart = 249;
  modelData->realParameterData[1].info.info.colStart = 5;
  modelData->realParameterData[1].info.info.lineEnd = 249;
  modelData->realParameterData[1].info.info.colEnd = 52;
  modelData->realParameterData[1].info.info.readonly = 0;
  modelData->realParameterData[1].attribute.unit = "m";
  modelData->realParameterData[1].attribute.displayUnit = "";
  modelData->realParameterData[1].attribute.min = -DBL_MAX;
  modelData->realParameterData[1].attribute.max = DBL_MAX;
  modelData->realParameterData[1].attribute.fixed = 1;
  modelData->realParameterData[1].attribute.useNominal = 0;
  modelData->realParameterData[1].attribute.nominal = 1.0;
  modelData->realParameterData[1].attribute.start = 500.0;
  modelData->integerParameterData[0].info.id = 1008;
  modelData->integerParameterData[0].info.name = "size";
  modelData->integerParameterData[0].info.comment = "";
  modelData->integerParameterData[0].info.info.filename = "E:/Onlab/TrainCrossing/TrainCrossing.mo";
  modelData->integerParameterData[0].info.info.lineStart = 252;
  modelData->integerParameterData[0].info.info.colStart = 5;
  modelData->integerParameterData[0].info.info.lineEnd = 252;
  modelData->integerParameterData[0].info.info.colEnd = 31;
  modelData->integerParameterData[0].info.info.readonly = 0;
  modelData->integerParameterData[0].attribute.min = -LONG_MAX;
  modelData->integerParameterData[0].attribute.max = LONG_MAX;
  modelData->integerParameterData[0].attribute.fixed = 1;
  modelData->integerParameterData[0].attribute.start = 2;
  modelData->booleanVarsData[0].info.id = 1009;
  modelData->booleanVarsData[0].info.name = "Sensor1_Active";
  modelData->booleanVarsData[0].info.comment = "";
  modelData->booleanVarsData[0].info.info.filename = "E:/Onlab/TrainCrossing/TrainCrossing.mo";
  modelData->booleanVarsData[0].info.info.lineStart = 244;
  modelData->booleanVarsData[0].info.info.colStart = 5;
  modelData->booleanVarsData[0].info.info.lineEnd = 244;
  modelData->booleanVarsData[0].info.info.colEnd = 60;
  modelData->booleanVarsData[0].info.info.readonly = 0;
  modelData->booleanVarsData[0].attribute.fixed = 0;
  modelData->booleanVarsData[0].attribute.start = 0;
  modelData->booleanVarsData[1].info.id = 1010;
  modelData->booleanVarsData[1].info.name = "Sensor2_Active";
  modelData->booleanVarsData[1].info.comment = "";
  modelData->booleanVarsData[1].info.info.filename = "E:/Onlab/TrainCrossing/TrainCrossing.mo";
  modelData->booleanVarsData[1].info.info.lineStart = 245;
  modelData->booleanVarsData[1].info.info.colStart = 5;
  modelData->booleanVarsData[1].info.info.lineEnd = 245;
  modelData->booleanVarsData[1].info.info.colEnd = 60;
  modelData->booleanVarsData[1].info.info.readonly = 0;
  modelData->booleanVarsData[1].attribute.fixed = 0;
  modelData->booleanVarsData[1].attribute.start = 0;
  modelData->booleanVarsData[2].info.id = 1011;
  modelData->booleanVarsData[2].info.name = "SensorFail";
  modelData->booleanVarsData[2].info.comment = "";
  modelData->booleanVarsData[2].info.info.filename = "E:/Onlab/TrainCrossing/TrainCrossing.mo";
  modelData->booleanVarsData[2].info.info.lineStart = 246;
  modelData->booleanVarsData[2].info.info.colStart = 5;
  modelData->booleanVarsData[2].info.info.lineEnd = 246;
  modelData->booleanVarsData[2].info.info.colEnd = 55;
  modelData->booleanVarsData[2].info.info.readonly = 0;
  modelData->booleanVarsData[2].attribute.fixed = 1;
  modelData->booleanVarsData[2].attribute.start = 0;
  modelData->booleanVarsData[3].info.id = 1012;
  modelData->booleanVarsData[3].info.name = "Train_Detected1[1]";
  modelData->booleanVarsData[3].info.comment = "";
  modelData->booleanVarsData[3].info.info.filename = "E:/Onlab/TrainCrossing/TrainCrossing.mo";
  modelData->booleanVarsData[3].info.info.lineStart = 250;
  modelData->booleanVarsData[3].info.info.colStart = 5;
  modelData->booleanVarsData[3].info.info.lineEnd = 250;
  modelData->booleanVarsData[3].info.info.colEnd = 34;
  modelData->booleanVarsData[3].info.info.readonly = 0;
  modelData->booleanVarsData[3].attribute.fixed = 0;
  modelData->booleanVarsData[3].attribute.start = 0;
  modelData->booleanVarsData[4].info.id = 1013;
  modelData->booleanVarsData[4].info.name = "Train_Detected1[2]";
  modelData->booleanVarsData[4].info.comment = "";
  modelData->booleanVarsData[4].info.info.filename = "E:/Onlab/TrainCrossing/TrainCrossing.mo";
  modelData->booleanVarsData[4].info.info.lineStart = 250;
  modelData->booleanVarsData[4].info.info.colStart = 5;
  modelData->booleanVarsData[4].info.info.lineEnd = 250;
  modelData->booleanVarsData[4].info.info.colEnd = 34;
  modelData->booleanVarsData[4].info.info.readonly = 0;
  modelData->booleanVarsData[4].attribute.fixed = 0;
  modelData->booleanVarsData[4].attribute.start = 0;
  modelData->booleanVarsData[5].info.id = 1014;
  modelData->booleanVarsData[5].info.name = "Train_Detected2[1]";
  modelData->booleanVarsData[5].info.comment = "";
  modelData->booleanVarsData[5].info.info.filename = "E:/Onlab/TrainCrossing/TrainCrossing.mo";
  modelData->booleanVarsData[5].info.info.lineStart = 251;
  modelData->booleanVarsData[5].info.info.colStart = 5;
  modelData->booleanVarsData[5].info.info.lineEnd = 251;
  modelData->booleanVarsData[5].info.info.colEnd = 34;
  modelData->booleanVarsData[5].info.info.readonly = 0;
  modelData->booleanVarsData[5].attribute.fixed = 0;
  modelData->booleanVarsData[5].attribute.start = 0;
  modelData->booleanVarsData[6].info.id = 1015;
  modelData->booleanVarsData[6].info.name = "Train_Detected2[2]";
  modelData->booleanVarsData[6].info.comment = "";
  modelData->booleanVarsData[6].info.info.filename = "E:/Onlab/TrainCrossing/TrainCrossing.mo";
  modelData->booleanVarsData[6].info.info.lineStart = 251;
  modelData->booleanVarsData[6].info.info.colStart = 5;
  modelData->booleanVarsData[6].info.info.lineEnd = 251;
  modelData->booleanVarsData[6].info.info.colEnd = 34;
  modelData->booleanVarsData[6].info.info.readonly = 0;
  modelData->booleanVarsData[6].attribute.fixed = 0;
  modelData->booleanVarsData[6].attribute.start = 0;
}