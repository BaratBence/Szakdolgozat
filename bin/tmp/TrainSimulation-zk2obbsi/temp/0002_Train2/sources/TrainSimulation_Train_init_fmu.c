#include "simulation_data.h"

OMC_DISABLE_OPT
void TrainSimulation_Train_read_input_fmu(MODEL_DATA* modelData, SIMULATION_INFO* simulationInfo)
{
  simulationInfo->startTime = 0.0;
  simulationInfo->stopTime = 1.0;
  simulationInfo->stepSize = 0.002;
  simulationInfo->tolerance = 1e-006;
  simulationInfo->solverMethod = "dassl";
  simulationInfo->outputFormat = "mat";
  simulationInfo->variableFilter = ".*";
  simulationInfo->OPENMODELICAHOME = "E:/Modelica";
  modelData->realVarsData[0].info.id = 1000;
  modelData->realVarsData[0].info.name = "acceleration";
  modelData->realVarsData[0].info.comment = "";
  modelData->realVarsData[0].info.info.filename = "E:/Szakdoga/TrainSimulation.mo";
  modelData->realVarsData[0].info.info.lineStart = 75;
  modelData->realVarsData[0].info.info.colStart = 5;
  modelData->realVarsData[0].info.info.lineEnd = 75;
  modelData->realVarsData[0].info.info.colEnd = 35;
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
  modelData->realVarsData[1].info.name = "distance";
  modelData->realVarsData[1].info.comment = "";
  modelData->realVarsData[1].info.info.filename = "E:/Szakdoga/TrainSimulation.mo";
  modelData->realVarsData[1].info.info.lineStart = 73;
  modelData->realVarsData[1].info.info.colStart = 5;
  modelData->realVarsData[1].info.info.lineEnd = 73;
  modelData->realVarsData[1].info.info.colEnd = 41;
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
  modelData->realVarsData[2].info.name = "lapDistance";
  modelData->realVarsData[2].info.comment = "";
  modelData->realVarsData[2].info.info.filename = "E:/Szakdoga/TrainSimulation.mo";
  modelData->realVarsData[2].info.info.lineStart = 76;
  modelData->realVarsData[2].info.info.colStart = 5;
  modelData->realVarsData[2].info.info.lineEnd = 76;
  modelData->realVarsData[2].info.info.colEnd = 44;
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
  modelData->realVarsData[3].info.name = "speed";
  modelData->realVarsData[3].info.comment = "";
  modelData->realVarsData[3].info.info.filename = "E:/Szakdoga/TrainSimulation.mo";
  modelData->realVarsData[3].info.info.lineStart = 74;
  modelData->realVarsData[3].info.info.colStart = 5;
  modelData->realVarsData[3].info.info.lineEnd = 74;
  modelData->realVarsData[3].info.info.colEnd = 33;
  modelData->realVarsData[3].info.info.readonly = 0;
  modelData->realVarsData[3].attribute.unit = "";
  modelData->realVarsData[3].attribute.displayUnit = "";
  modelData->realVarsData[3].attribute.min = -DBL_MAX;
  modelData->realVarsData[3].attribute.max = DBL_MAX;
  modelData->realVarsData[3].attribute.fixed = 1;
  modelData->realVarsData[3].attribute.useNominal = 0;
  modelData->realVarsData[3].attribute.nominal = 1.0;
  modelData->realVarsData[3].attribute.start = 0.0;
  modelData->realVarsData[4].info.id = 1004;
  modelData->realVarsData[4].info.name = "der(acceleration)";
  modelData->realVarsData[4].info.comment = "";
  modelData->realVarsData[4].info.info.filename = "E:/Szakdoga/TrainSimulation.mo";
  modelData->realVarsData[4].info.info.lineStart = 75;
  modelData->realVarsData[4].info.info.colStart = 5;
  modelData->realVarsData[4].info.info.lineEnd = 75;
  modelData->realVarsData[4].info.info.colEnd = 35;
  modelData->realVarsData[4].info.info.readonly = 0;
  modelData->realVarsData[4].attribute.unit = "";
  modelData->realVarsData[4].attribute.displayUnit = "";
  modelData->realVarsData[4].attribute.min = -DBL_MAX;
  modelData->realVarsData[4].attribute.max = DBL_MAX;
  modelData->realVarsData[4].attribute.fixed = 0;
  modelData->realVarsData[4].attribute.useNominal = 0;
  modelData->realVarsData[4].attribute.nominal = 1.0;
  modelData->realVarsData[4].attribute.start = 0.0;
  modelData->realVarsData[5].info.id = 1005;
  modelData->realVarsData[5].info.name = "der(distance)";
  modelData->realVarsData[5].info.comment = "";
  modelData->realVarsData[5].info.info.filename = "E:/Szakdoga/TrainSimulation.mo";
  modelData->realVarsData[5].info.info.lineStart = 73;
  modelData->realVarsData[5].info.info.colStart = 5;
  modelData->realVarsData[5].info.info.lineEnd = 73;
  modelData->realVarsData[5].info.info.colEnd = 41;
  modelData->realVarsData[5].info.info.readonly = 0;
  modelData->realVarsData[5].attribute.unit = "";
  modelData->realVarsData[5].attribute.displayUnit = "";
  modelData->realVarsData[5].attribute.min = -DBL_MAX;
  modelData->realVarsData[5].attribute.max = DBL_MAX;
  modelData->realVarsData[5].attribute.fixed = 0;
  modelData->realVarsData[5].attribute.useNominal = 0;
  modelData->realVarsData[5].attribute.nominal = 1.0;
  modelData->realVarsData[5].attribute.start = 0.0;
  modelData->realVarsData[6].info.id = 1006;
  modelData->realVarsData[6].info.name = "der(lapDistance)";
  modelData->realVarsData[6].info.comment = "";
  modelData->realVarsData[6].info.info.filename = "E:/Szakdoga/TrainSimulation.mo";
  modelData->realVarsData[6].info.info.lineStart = 76;
  modelData->realVarsData[6].info.info.colStart = 5;
  modelData->realVarsData[6].info.info.lineEnd = 76;
  modelData->realVarsData[6].info.info.colEnd = 44;
  modelData->realVarsData[6].info.info.readonly = 0;
  modelData->realVarsData[6].attribute.unit = "";
  modelData->realVarsData[6].attribute.displayUnit = "";
  modelData->realVarsData[6].attribute.min = -DBL_MAX;
  modelData->realVarsData[6].attribute.max = DBL_MAX;
  modelData->realVarsData[6].attribute.fixed = 0;
  modelData->realVarsData[6].attribute.useNominal = 0;
  modelData->realVarsData[6].attribute.nominal = 1.0;
  modelData->realVarsData[6].attribute.start = 0.0;
  modelData->realVarsData[7].info.id = 1007;
  modelData->realVarsData[7].info.name = "der(speed)";
  modelData->realVarsData[7].info.comment = "";
  modelData->realVarsData[7].info.info.filename = "E:/Szakdoga/TrainSimulation.mo";
  modelData->realVarsData[7].info.info.lineStart = 74;
  modelData->realVarsData[7].info.info.colStart = 5;
  modelData->realVarsData[7].info.info.lineEnd = 74;
  modelData->realVarsData[7].info.info.colEnd = 33;
  modelData->realVarsData[7].info.info.readonly = 0;
  modelData->realVarsData[7].attribute.unit = "";
  modelData->realVarsData[7].attribute.displayUnit = "";
  modelData->realVarsData[7].attribute.min = -DBL_MAX;
  modelData->realVarsData[7].attribute.max = DBL_MAX;
  modelData->realVarsData[7].attribute.fixed = 0;
  modelData->realVarsData[7].attribute.useNominal = 0;
  modelData->realVarsData[7].attribute.nominal = 1.0;
  modelData->realVarsData[7].attribute.start = 0.0;
  modelData->realVarsData[8].info.id = 1008;
  modelData->realVarsData[8].info.name = "BreakingDistance";
  modelData->realVarsData[8].info.comment = "";
  modelData->realVarsData[8].info.info.filename = "E:/Szakdoga/TrainSimulation.mo";
  modelData->realVarsData[8].info.info.lineStart = 77;
  modelData->realVarsData[8].info.info.colStart = 5;
  modelData->realVarsData[8].info.info.lineEnd = 77;
  modelData->realVarsData[8].info.info.colEnd = 37;
  modelData->realVarsData[8].info.info.readonly = 0;
  modelData->realVarsData[8].attribute.unit = "";
  modelData->realVarsData[8].attribute.displayUnit = "";
  modelData->realVarsData[8].attribute.min = -DBL_MAX;
  modelData->realVarsData[8].attribute.max = DBL_MAX;
  modelData->realVarsData[8].attribute.fixed = 0;
  modelData->realVarsData[8].attribute.useNominal = 0;
  modelData->realVarsData[8].attribute.nominal = 1.0;
  modelData->realVarsData[8].attribute.start = 0.0;
  modelData->realVarsData[9].info.id = 1009;
  modelData->realVarsData[9].info.name = "Distance";
  modelData->realVarsData[9].info.comment = "";
  modelData->realVarsData[9].info.info.filename = "E:/Szakdoga/TrainSimulation.mo";
  modelData->realVarsData[9].info.info.lineStart = 52;
  modelData->realVarsData[9].info.info.colStart = 5;
  modelData->realVarsData[9].info.info.lineEnd = 52;
  modelData->realVarsData[9].info.info.colEnd = 51;
  modelData->realVarsData[9].info.info.readonly = 0;
  modelData->realVarsData[9].attribute.unit = "";
  modelData->realVarsData[9].attribute.displayUnit = "";
  modelData->realVarsData[9].attribute.min = -DBL_MAX;
  modelData->realVarsData[9].attribute.max = DBL_MAX;
  modelData->realVarsData[9].attribute.fixed = 0;
  modelData->realVarsData[9].attribute.useNominal = 0;
  modelData->realVarsData[9].attribute.nominal = 1.0;
  modelData->realVarsData[9].attribute.start = 0.0;
  modelData->realVarsData[10].info.id = 1010;
  modelData->realVarsData[10].info.name = "Length";
  modelData->realVarsData[10].info.comment = "";
  modelData->realVarsData[10].info.info.filename = "E:/Szakdoga/TrainSimulation.mo";
  modelData->realVarsData[10].info.info.lineStart = 53;
  modelData->realVarsData[10].info.info.colStart = 5;
  modelData->realVarsData[10].info.info.lineEnd = 53;
  modelData->realVarsData[10].info.info.colEnd = 49;
  modelData->realVarsData[10].info.info.readonly = 0;
  modelData->realVarsData[10].attribute.unit = "";
  modelData->realVarsData[10].attribute.displayUnit = "";
  modelData->realVarsData[10].attribute.min = -DBL_MAX;
  modelData->realVarsData[10].attribute.max = DBL_MAX;
  modelData->realVarsData[10].attribute.fixed = 0;
  modelData->realVarsData[10].attribute.useNominal = 0;
  modelData->realVarsData[10].attribute.nominal = 1.0;
  modelData->realVarsData[10].attribute.start = 0.0;
  modelData->realVarsData[11].info.id = 1011;
  modelData->realVarsData[11].info.name = "Sensor1Position";
  modelData->realVarsData[11].info.comment = "";
  modelData->realVarsData[11].info.info.filename = "E:/Szakdoga/TrainSimulation.mo";
  modelData->realVarsData[11].info.info.lineStart = 62;
  modelData->realVarsData[11].info.info.colStart = 5;
  modelData->realVarsData[11].info.info.lineEnd = 62;
  modelData->realVarsData[11].info.info.colEnd = 57;
  modelData->realVarsData[11].info.info.readonly = 0;
  modelData->realVarsData[11].attribute.unit = "";
  modelData->realVarsData[11].attribute.displayUnit = "";
  modelData->realVarsData[11].attribute.min = -DBL_MAX;
  modelData->realVarsData[11].attribute.max = DBL_MAX;
  modelData->realVarsData[11].attribute.fixed = 1;
  modelData->realVarsData[11].attribute.useNominal = 0;
  modelData->realVarsData[11].attribute.nominal = 1.0;
  modelData->realVarsData[11].attribute.start = 0.0;
  modelData->realVarsData[12].info.id = 1012;
  modelData->realVarsData[12].info.name = "Sensor2Position";
  modelData->realVarsData[12].info.comment = "";
  modelData->realVarsData[12].info.info.filename = "E:/Szakdoga/TrainSimulation.mo";
  modelData->realVarsData[12].info.info.lineStart = 63;
  modelData->realVarsData[12].info.info.colStart = 5;
  modelData->realVarsData[12].info.info.lineEnd = 63;
  modelData->realVarsData[12].info.info.colEnd = 57;
  modelData->realVarsData[12].info.info.readonly = 0;
  modelData->realVarsData[12].attribute.unit = "";
  modelData->realVarsData[12].attribute.displayUnit = "";
  modelData->realVarsData[12].attribute.min = -DBL_MAX;
  modelData->realVarsData[12].attribute.max = DBL_MAX;
  modelData->realVarsData[12].attribute.fixed = 1;
  modelData->realVarsData[12].attribute.useNominal = 0;
  modelData->realVarsData[12].attribute.nominal = 1.0;
  modelData->realVarsData[12].attribute.start = 0.0;
  modelData->realVarsData[13].info.id = 1013;
  modelData->realVarsData[13].info.name = "Station";
  modelData->realVarsData[13].info.comment = "";
  modelData->realVarsData[13].info.info.filename = "E:/Szakdoga/TrainSimulation.mo";
  modelData->realVarsData[13].info.info.lineStart = 61;
  modelData->realVarsData[13].info.info.colStart = 5;
  modelData->realVarsData[13].info.info.lineEnd = 61;
  modelData->realVarsData[13].info.info.colEnd = 49;
  modelData->realVarsData[13].info.info.readonly = 0;
  modelData->realVarsData[13].attribute.unit = "";
  modelData->realVarsData[13].attribute.displayUnit = "";
  modelData->realVarsData[13].attribute.min = -DBL_MAX;
  modelData->realVarsData[13].attribute.max = DBL_MAX;
  modelData->realVarsData[13].attribute.fixed = 1;
  modelData->realVarsData[13].attribute.useNominal = 0;
  modelData->realVarsData[13].attribute.nominal = 1.0;
  modelData->realVarsData[13].attribute.start = 0.0;
  modelData->realVarsData[14].info.id = 1014;
  modelData->realVarsData[14].info.name = "onCurveSpeed";
  modelData->realVarsData[14].info.comment = "";
  modelData->realVarsData[14].info.info.filename = "E:/Szakdoga/TrainSimulation.mo";
  modelData->realVarsData[14].info.info.lineStart = 55;
  modelData->realVarsData[14].info.info.colStart = 5;
  modelData->realVarsData[14].info.info.lineEnd = 55;
  modelData->realVarsData[14].info.info.colEnd = 54;
  modelData->realVarsData[14].info.info.readonly = 0;
  modelData->realVarsData[14].attribute.unit = "";
  modelData->realVarsData[14].attribute.displayUnit = "";
  modelData->realVarsData[14].attribute.min = -DBL_MAX;
  modelData->realVarsData[14].attribute.max = DBL_MAX;
  modelData->realVarsData[14].attribute.fixed = 1;
  modelData->realVarsData[14].attribute.useNominal = 0;
  modelData->realVarsData[14].attribute.nominal = 1.0;
  modelData->realVarsData[14].attribute.start = 0.0;
  modelData->realVarsData[15].info.id = 1015;
  modelData->realVarsData[15].info.name = "onUpHillAcc";
  modelData->realVarsData[15].info.comment = "";
  modelData->realVarsData[15].info.info.filename = "E:/Szakdoga/TrainSimulation.mo";
  modelData->realVarsData[15].info.info.lineStart = 57;
  modelData->realVarsData[15].info.info.colStart = 5;
  modelData->realVarsData[15].info.info.lineEnd = 57;
  modelData->realVarsData[15].info.info.colEnd = 53;
  modelData->realVarsData[15].info.info.readonly = 0;
  modelData->realVarsData[15].attribute.unit = "";
  modelData->realVarsData[15].attribute.displayUnit = "";
  modelData->realVarsData[15].attribute.min = -DBL_MAX;
  modelData->realVarsData[15].attribute.max = DBL_MAX;
  modelData->realVarsData[15].attribute.fixed = 1;
  modelData->realVarsData[15].attribute.useNominal = 0;
  modelData->realVarsData[15].attribute.nominal = 1.0;
  modelData->realVarsData[15].attribute.start = 0.0;
  modelData->realParameterData[0].info.id = 1016;
  modelData->realParameterData[0].info.name = "$outputAlias_Length";
  modelData->realParameterData[0].info.comment = "";
  modelData->realParameterData[0].info.info.filename = "E:/Szakdoga/TrainSimulation.mo";
  modelData->realParameterData[0].info.info.lineStart = 53;
  modelData->realParameterData[0].info.info.colStart = 5;
  modelData->realParameterData[0].info.info.lineEnd = 53;
  modelData->realParameterData[0].info.info.colEnd = 49;
  modelData->realParameterData[0].info.info.readonly = 0;
  modelData->realParameterData[0].attribute.unit = "";
  modelData->realParameterData[0].attribute.displayUnit = "";
  modelData->realParameterData[0].attribute.min = -DBL_MAX;
  modelData->realParameterData[0].attribute.max = DBL_MAX;
  modelData->realParameterData[0].attribute.fixed = 1;
  modelData->realParameterData[0].attribute.useNominal = 0;
  modelData->realParameterData[0].attribute.nominal = 1.0;
  modelData->realParameterData[0].attribute.start = 0.0;
  modelData->realParameterData[1].info.id = 1017;
  modelData->realParameterData[1].info.name = "breakingDeceleration";
  modelData->realParameterData[1].info.comment = "";
  modelData->realParameterData[1].info.info.filename = "E:/Szakdoga/TrainSimulation.mo";
  modelData->realParameterData[1].info.info.lineStart = 68;
  modelData->realParameterData[1].info.info.colStart = 5;
  modelData->realParameterData[1].info.info.lineEnd = 68;
  modelData->realParameterData[1].info.info.colEnd = 62;
  modelData->realParameterData[1].info.info.readonly = 0;
  modelData->realParameterData[1].attribute.unit = "m/s2";
  modelData->realParameterData[1].attribute.displayUnit = "";
  modelData->realParameterData[1].attribute.min = -DBL_MAX;
  modelData->realParameterData[1].attribute.max = DBL_MAX;
  modelData->realParameterData[1].attribute.fixed = 1;
  modelData->realParameterData[1].attribute.useNominal = 0;
  modelData->realParameterData[1].attribute.nominal = 1.0;
  modelData->realParameterData[1].attribute.start = 20.0;
  modelData->realParameterData[2].info.id = 1018;
  modelData->realParameterData[2].info.name = "distanceStart";
  modelData->realParameterData[2].info.comment = "";
  modelData->realParameterData[2].info.info.filename = "E:/Szakdoga/TrainSimulation.mo";
  modelData->realParameterData[2].info.info.lineStart = 71;
  modelData->realParameterData[2].info.info.colStart = 5;
  modelData->realParameterData[2].info.info.lineEnd = 71;
  modelData->realParameterData[2].info.info.colEnd = 49;
  modelData->realParameterData[2].info.info.readonly = 0;
  modelData->realParameterData[2].attribute.unit = "m";
  modelData->realParameterData[2].attribute.displayUnit = "";
  modelData->realParameterData[2].attribute.min = -DBL_MAX;
  modelData->realParameterData[2].attribute.max = DBL_MAX;
  modelData->realParameterData[2].attribute.fixed = 1;
  modelData->realParameterData[2].attribute.useNominal = 0;
  modelData->realParameterData[2].attribute.nominal = 1.0;
  modelData->realParameterData[2].attribute.start = 0.0;
  modelData->realParameterData[3].info.id = 1019;
  modelData->realParameterData[3].info.name = "lap";
  modelData->realParameterData[3].info.comment = "";
  modelData->realParameterData[3].info.info.filename = "E:/Szakdoga/TrainSimulation.mo";
  modelData->realParameterData[3].info.info.lineStart = 70;
  modelData->realParameterData[3].info.info.colStart = 5;
  modelData->realParameterData[3].info.info.lineEnd = 70;
  modelData->realParameterData[3].info.info.colEnd = 34;
  modelData->realParameterData[3].info.info.readonly = 0;
  modelData->realParameterData[3].attribute.unit = "";
  modelData->realParameterData[3].attribute.displayUnit = "";
  modelData->realParameterData[3].attribute.min = -DBL_MAX;
  modelData->realParameterData[3].attribute.max = DBL_MAX;
  modelData->realParameterData[3].attribute.fixed = 1;
  modelData->realParameterData[3].attribute.useNominal = 0;
  modelData->realParameterData[3].attribute.nominal = 1.0;
  modelData->realParameterData[3].attribute.start = 99999999.0;
  modelData->realParameterData[4].info.id = 1020;
  modelData->realParameterData[4].info.name = "length";
  modelData->realParameterData[4].info.comment = "";
  modelData->realParameterData[4].info.info.filename = "E:/Szakdoga/TrainSimulation.mo";
  modelData->realParameterData[4].info.info.lineStart = 69;
  modelData->realParameterData[4].info.info.colStart = 5;
  modelData->realParameterData[4].info.info.lineEnd = 69;
  modelData->realParameterData[4].info.info.colEnd = 43;
  modelData->realParameterData[4].info.info.readonly = 0;
  modelData->realParameterData[4].attribute.unit = "m";
  modelData->realParameterData[4].attribute.displayUnit = "";
  modelData->realParameterData[4].attribute.min = -DBL_MAX;
  modelData->realParameterData[4].attribute.max = DBL_MAX;
  modelData->realParameterData[4].attribute.fixed = 1;
  modelData->realParameterData[4].attribute.useNominal = 0;
  modelData->realParameterData[4].attribute.nominal = 1.0;
  modelData->realParameterData[4].attribute.start = 20.0;
  modelData->realParameterData[5].info.id = 1021;
  modelData->realParameterData[5].info.name = "maxSpeed";
  modelData->realParameterData[5].info.comment = "";
  modelData->realParameterData[5].info.info.filename = "E:/Szakdoga/TrainSimulation.mo";
  modelData->realParameterData[5].info.info.lineStart = 67;
  modelData->realParameterData[5].info.info.colStart = 5;
  modelData->realParameterData[5].info.info.lineEnd = 67;
  modelData->realParameterData[5].info.info.colEnd = 47;
  modelData->realParameterData[5].info.info.readonly = 0;
  modelData->realParameterData[5].attribute.unit = "m/s";
  modelData->realParameterData[5].attribute.displayUnit = "";
  modelData->realParameterData[5].attribute.min = -DBL_MAX;
  modelData->realParameterData[5].attribute.max = DBL_MAX;
  modelData->realParameterData[5].attribute.fixed = 1;
  modelData->realParameterData[5].attribute.useNominal = 0;
  modelData->realParameterData[5].attribute.nominal = 1.0;
  modelData->realParameterData[5].attribute.start = 75.0;
  modelData->integerVarsData[0].info.id = 1022;
  modelData->integerVarsData[0].info.name = "Lapcount";
  modelData->integerVarsData[0].info.comment = "";
  modelData->integerVarsData[0].info.info.filename = "E:/Szakdoga/TrainSimulation.mo";
  modelData->integerVarsData[0].info.info.lineStart = 72;
  modelData->integerVarsData[0].info.info.colStart = 5;
  modelData->integerVarsData[0].info.info.lineEnd = 72;
  modelData->integerVarsData[0].info.info.colEnd = 32;
  modelData->integerVarsData[0].info.info.readonly = 0;
  modelData->integerVarsData[0].attribute.min = -LONG_MAX;
  modelData->integerVarsData[0].attribute.max = LONG_MAX;
  modelData->integerVarsData[0].attribute.fixed = 0;
  modelData->integerVarsData[0].attribute.start = 0;
  modelData->integerVarsData[1].info.id = 1023;
  modelData->integerVarsData[1].info.name = "StationState";
  modelData->integerVarsData[1].info.comment = "";
  modelData->integerVarsData[1].info.info.filename = "E:/Szakdoga/TrainSimulation.mo";
  modelData->integerVarsData[1].info.info.lineStart = 60;
  modelData->integerVarsData[1].info.info.colStart = 5;
  modelData->integerVarsData[1].info.info.lineEnd = 60;
  modelData->integerVarsData[1].info.info.colEnd = 57;
  modelData->integerVarsData[1].info.info.readonly = 0;
  modelData->integerVarsData[1].attribute.min = -LONG_MAX;
  modelData->integerVarsData[1].attribute.max = LONG_MAX;
  modelData->integerVarsData[1].attribute.fixed = 1;
  modelData->integerVarsData[1].attribute.start = 0;
  modelData->integerVarsData[2].info.id = 1024;
  modelData->integerVarsData[2].info.name = "state";
  modelData->integerVarsData[2].info.comment = "";
  modelData->integerVarsData[2].info.info.filename = "E:/Szakdoga/TrainSimulation.mo";
  modelData->integerVarsData[2].info.info.lineStart = 65;
  modelData->integerVarsData[2].info.info.colStart = 5;
  modelData->integerVarsData[2].info.info.lineEnd = 65;
  modelData->integerVarsData[2].info.info.colEnd = 24;
  modelData->integerVarsData[2].info.info.readonly = 0;
  modelData->integerVarsData[2].attribute.min = 1;
  modelData->integerVarsData[2].attribute.max = 4;
  modelData->integerVarsData[2].attribute.fixed = 0;
  modelData->integerVarsData[2].attribute.start = 0;
  modelData->integerParameterData[0].info.id = 1025;
  modelData->integerParameterData[0].info.name = "size";
  modelData->integerParameterData[0].info.comment = "";
  modelData->integerParameterData[0].info.info.filename = "E:/Szakdoga/TrainSimulation.mo";
  modelData->integerParameterData[0].info.info.lineStart = 66;
  modelData->integerParameterData[0].info.info.colStart = 5;
  modelData->integerParameterData[0].info.info.lineEnd = 66;
  modelData->integerParameterData[0].info.info.colEnd = 32;
  modelData->integerParameterData[0].info.info.readonly = 0;
  modelData->integerParameterData[0].attribute.min = -LONG_MAX;
  modelData->integerParameterData[0].attribute.max = LONG_MAX;
  modelData->integerParameterData[0].attribute.fixed = 1;
  modelData->integerParameterData[0].attribute.start = 10;
  modelData->booleanVarsData[0].info.id = 1026;
  modelData->booleanVarsData[0].info.name = "$whenCondition1";
  modelData->booleanVarsData[0].info.comment = "lapDistance >= lap";
  modelData->booleanVarsData[0].info.info.filename = "E:/Szakdoga/TrainSimulation.mo";
  modelData->booleanVarsData[0].info.info.lineStart = 94;
  modelData->booleanVarsData[0].info.info.colStart = 7;
  modelData->booleanVarsData[0].info.info.lineEnd = 94;
  modelData->booleanVarsData[0].info.info.colEnd = 29;
  modelData->booleanVarsData[0].info.info.readonly = 0;
  modelData->booleanVarsData[0].attribute.fixed = 1;
  modelData->booleanVarsData[0].attribute.start = 0;
  modelData->booleanVarsData[1].info.id = 1027;
  modelData->booleanVarsData[1].info.name = "$whenCondition10";
  modelData->booleanVarsData[1].info.comment = "inStation and speed < 45.0 and lapDistance + BreakingDistance + 5.0 >= Sensor1Position - 10.0 and lapDistance + BreakingDistance - 5.0 <= Sensor1Position - 10.0 and state == TrainSimulation.StationSignal.green";
  modelData->booleanVarsData[1].info.info.filename = "E:/Szakdoga/TrainSimulation.mo";
  modelData->booleanVarsData[1].info.info.lineStart = 129;
  modelData->booleanVarsData[1].info.info.colStart = 7;
  modelData->booleanVarsData[1].info.info.lineEnd = 129;
  modelData->booleanVarsData[1].info.info.colEnd = 52;
  modelData->booleanVarsData[1].info.info.readonly = 0;
  modelData->booleanVarsData[1].attribute.fixed = 1;
  modelData->booleanVarsData[1].attribute.start = 0;
  modelData->booleanVarsData[2].info.id = 1028;
  modelData->booleanVarsData[2].info.name = "$whenCondition11";
  modelData->booleanVarsData[2].info.comment = "inStation and speed > 0.0 and lapDistance + BreakingDistance + 10.0 >= Station and lapDistance + BreakingDistance - 10.0 <= Station and not Arrived";
  modelData->booleanVarsData[2].info.info.filename = "E:/Szakdoga/TrainSimulation.mo";
  modelData->booleanVarsData[2].info.info.lineStart = 133;
  modelData->booleanVarsData[2].info.info.colStart = 7;
  modelData->booleanVarsData[2].info.info.lineEnd = 133;
  modelData->booleanVarsData[2].info.info.colEnd = 50;
  modelData->booleanVarsData[2].info.info.readonly = 0;
  modelData->booleanVarsData[2].attribute.fixed = 1;
  modelData->booleanVarsData[2].attribute.start = 0;
  modelData->booleanVarsData[3].info.id = 1029;
  modelData->booleanVarsData[3].info.name = "$whenCondition12";
  modelData->booleanVarsData[3].info.comment = "inStation and speed <= 0.0 and Arrived";
  modelData->booleanVarsData[3].info.info.filename = "E:/Szakdoga/TrainSimulation.mo";
  modelData->booleanVarsData[3].info.info.lineStart = 136;
  modelData->booleanVarsData[3].info.info.colStart = 7;
  modelData->booleanVarsData[3].info.info.lineEnd = 136;
  modelData->booleanVarsData[3].info.info.colEnd = 49;
  modelData->booleanVarsData[3].info.info.readonly = 0;
  modelData->booleanVarsData[3].attribute.fixed = 1;
  modelData->booleanVarsData[3].attribute.start = 0;
  modelData->booleanVarsData[4].info.id = 1030;
  modelData->booleanVarsData[4].info.name = "$whenCondition13";
  modelData->booleanVarsData[4].info.comment = "speed >= 45.0";
  modelData->booleanVarsData[4].info.info.filename = "E:/Szakdoga/TrainSimulation.mo";
  modelData->booleanVarsData[4].info.info.lineStart = 142;
  modelData->booleanVarsData[4].info.info.colStart = 5;
  modelData->booleanVarsData[4].info.info.lineEnd = 142;
  modelData->booleanVarsData[4].info.info.colEnd = 29;
  modelData->booleanVarsData[4].info.info.readonly = 0;
  modelData->booleanVarsData[4].attribute.fixed = 1;
  modelData->booleanVarsData[4].attribute.start = 0;
  modelData->booleanVarsData[5].info.id = 1031;
  modelData->booleanVarsData[5].info.name = "$whenCondition2";
  modelData->booleanVarsData[5].info.comment = "speed >= onCurveSpeed and ActiveCurve";
  modelData->booleanVarsData[5].info.info.filename = "E:/Szakdoga/TrainSimulation.mo";
  modelData->booleanVarsData[5].info.info.lineStart = 97;
  modelData->booleanVarsData[5].info.info.colStart = 7;
  modelData->booleanVarsData[5].info.info.lineEnd = 97;
  modelData->booleanVarsData[5].info.info.colEnd = 50;
  modelData->booleanVarsData[5].info.info.readonly = 0;
  modelData->booleanVarsData[5].attribute.fixed = 1;
  modelData->booleanVarsData[5].attribute.start = 0;
  modelData->booleanVarsData[6].info.id = 1032;
  modelData->booleanVarsData[6].info.name = "$whenCondition3";
  modelData->booleanVarsData[6].info.comment = "speed <= onCurveSpeed and ActiveCurve";
  modelData->booleanVarsData[6].info.info.filename = "E:/Szakdoga/TrainSimulation.mo";
  modelData->booleanVarsData[6].info.info.lineStart = 100;
  modelData->booleanVarsData[6].info.info.colStart = 7;
  modelData->booleanVarsData[6].info.info.lineEnd = 100;
  modelData->booleanVarsData[6].info.info.colEnd = 32;
  modelData->booleanVarsData[6].info.info.readonly = 0;
  modelData->booleanVarsData[6].attribute.fixed = 1;
  modelData->booleanVarsData[6].attribute.start = 0;
  modelData->booleanVarsData[7].info.id = 1033;
  modelData->booleanVarsData[7].info.name = "$whenCondition4";
  modelData->booleanVarsData[7].info.comment = "speed <= maxSpeed and not ActiveCurve and not ActiveUpHill and not inStation";
  modelData->booleanVarsData[7].info.info.filename = "E:/Szakdoga/TrainSimulation.mo";
  modelData->booleanVarsData[7].info.info.lineStart = 103;
  modelData->booleanVarsData[7].info.info.colStart = 7;
  modelData->booleanVarsData[7].info.info.lineEnd = 103;
  modelData->booleanVarsData[7].info.info.colEnd = 49;
  modelData->booleanVarsData[7].info.info.readonly = 0;
  modelData->booleanVarsData[7].attribute.fixed = 1;
  modelData->booleanVarsData[7].attribute.start = 0;
  modelData->booleanVarsData[8].info.id = 1034;
  modelData->booleanVarsData[8].info.name = "$whenCondition5";
  modelData->booleanVarsData[8].info.comment = "speed >= maxSpeed and not inStation";
  modelData->booleanVarsData[8].info.info.filename = "E:/Szakdoga/TrainSimulation.mo";
  modelData->booleanVarsData[8].info.info.lineStart = 106;
  modelData->booleanVarsData[8].info.info.colStart = 7;
  modelData->booleanVarsData[8].info.info.lineEnd = 106;
  modelData->booleanVarsData[8].info.info.colEnd = 32;
  modelData->booleanVarsData[8].info.info.readonly = 0;
  modelData->booleanVarsData[8].attribute.fixed = 1;
  modelData->booleanVarsData[8].attribute.start = 0;
  modelData->booleanVarsData[9].info.id = 1035;
  modelData->booleanVarsData[9].info.name = "$whenCondition6";
  modelData->booleanVarsData[9].info.comment = "ActiveUpHill";
  modelData->booleanVarsData[9].info.info.filename = "E:/Szakdoga/TrainSimulation.mo";
  modelData->booleanVarsData[9].info.info.lineStart = 116;
  modelData->booleanVarsData[9].info.info.colStart = 7;
  modelData->booleanVarsData[9].info.info.lineEnd = 116;
  modelData->booleanVarsData[9].info.info.colEnd = 40;
  modelData->booleanVarsData[9].info.info.readonly = 0;
  modelData->booleanVarsData[9].attribute.fixed = 1;
  modelData->booleanVarsData[9].attribute.start = 0;
  modelData->booleanVarsData[10].info.id = 1036;
  modelData->booleanVarsData[10].info.name = "$whenCondition7";
  modelData->booleanVarsData[10].info.comment = "ActiveUpHill <> pre(ActiveUpHill) and not ActiveUpHill";
  modelData->booleanVarsData[10].info.info.filename = "E:/Szakdoga/TrainSimulation.mo";
  modelData->booleanVarsData[10].info.info.lineStart = 119;
  modelData->booleanVarsData[10].info.info.colStart = 7;
  modelData->booleanVarsData[10].info.info.lineEnd = 119;
  modelData->booleanVarsData[10].info.info.colEnd = 49;
  modelData->booleanVarsData[10].info.info.readonly = 0;
  modelData->booleanVarsData[10].attribute.fixed = 1;
  modelData->booleanVarsData[10].attribute.start = 0;
  modelData->booleanVarsData[11].info.id = 1037;
  modelData->booleanVarsData[11].info.name = "$whenCondition8";
  modelData->booleanVarsData[11].info.comment = "inStation and speed > 0.0 and lapDistance + BreakingDistance + 5.0 >= Sensor1Position - 10.0 and lapDistance + BreakingDistance - 5.0 <= Sensor1Position - 10.0 and state == TrainSimulation.StationSignal.red";
  modelData->booleanVarsData[11].info.info.filename = "E:/Szakdoga/TrainSimulation.mo";
  modelData->booleanVarsData[11].info.info.lineStart = 123;
  modelData->booleanVarsData[11].info.info.colStart = 7;
  modelData->booleanVarsData[11].info.info.lineEnd = 123;
  modelData->booleanVarsData[11].info.info.colEnd = 50;
  modelData->booleanVarsData[11].info.info.readonly = 0;
  modelData->booleanVarsData[11].attribute.fixed = 1;
  modelData->booleanVarsData[11].attribute.start = 0;
  modelData->booleanVarsData[12].info.id = 1038;
  modelData->booleanVarsData[12].info.name = "$whenCondition9";
  modelData->booleanVarsData[12].info.comment = "inStation and speed <= 0.0 and lapDistance + BreakingDistance + 5.0 >= Sensor1Position - 10.0 and lapDistance + BreakingDistance - 5.0 <= Sensor1Position - 10.0 and state == TrainSimulation.StationSignal.red";
  modelData->booleanVarsData[12].info.info.filename = "E:/Szakdoga/TrainSimulation.mo";
  modelData->booleanVarsData[12].info.info.lineStart = 126;
  modelData->booleanVarsData[12].info.info.colStart = 7;
  modelData->booleanVarsData[12].info.info.lineEnd = 126;
  modelData->booleanVarsData[12].info.info.colEnd = 32;
  modelData->booleanVarsData[12].info.info.readonly = 0;
  modelData->booleanVarsData[12].attribute.fixed = 1;
  modelData->booleanVarsData[12].attribute.start = 0;
  modelData->booleanVarsData[13].info.id = 1039;
  modelData->booleanVarsData[13].info.name = "ActiveCurve";
  modelData->booleanVarsData[13].info.comment = "";
  modelData->booleanVarsData[13].info.info.filename = "E:/Szakdoga/TrainSimulation.mo";
  modelData->booleanVarsData[13].info.info.lineStart = 54;
  modelData->booleanVarsData[13].info.info.colStart = 5;
  modelData->booleanVarsData[13].info.info.lineEnd = 54;
  modelData->booleanVarsData[13].info.info.colEnd = 56;
  modelData->booleanVarsData[13].info.info.readonly = 0;
  modelData->booleanVarsData[13].attribute.fixed = 1;
  modelData->booleanVarsData[13].attribute.start = 0;
  modelData->booleanVarsData[14].info.id = 1040;
  modelData->booleanVarsData[14].info.name = "ActiveUpHill";
  modelData->booleanVarsData[14].info.comment = "";
  modelData->booleanVarsData[14].info.info.filename = "E:/Szakdoga/TrainSimulation.mo";
  modelData->booleanVarsData[14].info.info.lineStart = 56;
  modelData->booleanVarsData[14].info.info.colStart = 5;
  modelData->booleanVarsData[14].info.info.lineEnd = 56;
  modelData->booleanVarsData[14].info.info.colEnd = 57;
  modelData->booleanVarsData[14].info.info.readonly = 0;
  modelData->booleanVarsData[14].attribute.fixed = 1;
  modelData->booleanVarsData[14].attribute.start = 0;
  modelData->booleanVarsData[15].info.id = 1041;
  modelData->booleanVarsData[15].info.name = "Arrived";
  modelData->booleanVarsData[15].info.comment = "";
  modelData->booleanVarsData[15].info.info.filename = "E:/Szakdoga/TrainSimulation.mo";
  modelData->booleanVarsData[15].info.info.lineStart = 80;
  modelData->booleanVarsData[15].info.info.colStart = 5;
  modelData->booleanVarsData[15].info.info.lineEnd = 80;
  modelData->booleanVarsData[15].info.info.colEnd = 35;
  modelData->booleanVarsData[15].info.info.readonly = 0;
  modelData->booleanVarsData[15].attribute.fixed = 0;
  modelData->booleanVarsData[15].attribute.start = 0;
  modelData->booleanVarsData[16].info.id = 1042;
  modelData->booleanVarsData[16].info.name = "Decelerating";
  modelData->booleanVarsData[16].info.comment = "";
  modelData->booleanVarsData[16].info.info.filename = "E:/Szakdoga/TrainSimulation.mo";
  modelData->booleanVarsData[16].info.info.lineStart = 78;
  modelData->booleanVarsData[16].info.info.colStart = 5;
  modelData->booleanVarsData[16].info.info.lineEnd = 78;
  modelData->booleanVarsData[16].info.info.colEnd = 40;
  modelData->booleanVarsData[16].info.info.readonly = 0;
  modelData->booleanVarsData[16].attribute.fixed = 0;
  modelData->booleanVarsData[16].attribute.start = 0;
  modelData->booleanVarsData[17].info.id = 1043;
  modelData->booleanVarsData[17].info.name = "inStation";
  modelData->booleanVarsData[17].info.comment = "";
  modelData->booleanVarsData[17].info.info.filename = "E:/Szakdoga/TrainSimulation.mo";
  modelData->booleanVarsData[17].info.info.lineStart = 79;
  modelData->booleanVarsData[17].info.info.colStart = 5;
  modelData->booleanVarsData[17].info.info.lineEnd = 79;
  modelData->booleanVarsData[17].info.info.colEnd = 37;
  modelData->booleanVarsData[17].info.info.readonly = 0;
  modelData->booleanVarsData[17].attribute.fixed = 0;
  modelData->booleanVarsData[17].attribute.start = 0;
}