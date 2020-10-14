#include "simulation_data.h"

OMC_DISABLE_OPT
void TrainSimulation_TrainStation_read_input_fmu(MODEL_DATA* modelData, SIMULATION_INFO* simulationInfo)
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
  modelData->realVarsData[0].info.name = "GreenToRed.t";
  modelData->realVarsData[0].info.comment = "= actual waiting time (transition will fire when t > waitTime)";
  modelData->realVarsData[0].info.info.filename = "E:/Modelica/lib/omlibrary/Modelica 3.2.3/StateGraph.mo";
  modelData->realVarsData[0].info.info.lineStart = 2025;
  modelData->realVarsData[0].info.info.colStart = 5;
  modelData->realVarsData[0].info.info.lineEnd = 2026;
  modelData->realVarsData[0].info.info.colEnd = 73;
  modelData->realVarsData[0].info.info.readonly = 0;
  modelData->realVarsData[0].attribute.unit = "s";
  modelData->realVarsData[0].attribute.displayUnit = "";
  modelData->realVarsData[0].attribute.min = -DBL_MAX;
  modelData->realVarsData[0].attribute.max = DBL_MAX;
  modelData->realVarsData[0].attribute.fixed = 1;
  modelData->realVarsData[0].attribute.useNominal = 0;
  modelData->realVarsData[0].attribute.nominal = 1.0;
  modelData->realVarsData[0].attribute.start = 0.0;
  modelData->realVarsData[1].info.id = 1001;
  modelData->realVarsData[1].info.name = "GreenToRed.t_dummy";
  modelData->realVarsData[1].info.comment = "";
  modelData->realVarsData[1].info.info.filename = "E:/Modelica/lib/omlibrary/Modelica 3.2.3/StateGraph.mo";
  modelData->realVarsData[1].info.info.lineStart = 2039;
  modelData->realVarsData[1].info.info.colStart = 5;
  modelData->realVarsData[1].info.info.lineEnd = 2039;
  modelData->realVarsData[1].info.info.colEnd = 17;
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
  modelData->realVarsData[2].info.name = "GreenToRed.t_start";
  modelData->realVarsData[2].info.comment = "Time instant at which the transition would fire, if waitTime would be zero";
  modelData->realVarsData[2].info.info.filename = "E:/Modelica/lib/omlibrary/Modelica 3.2.3/StateGraph.mo";
  modelData->realVarsData[2].info.info.lineStart = 2037;
  modelData->realVarsData[2].info.info.colStart = 5;
  modelData->realVarsData[2].info.info.lineEnd = 2038;
  modelData->realVarsData[2].info.info.colEnd = 85;
  modelData->realVarsData[2].info.info.readonly = 0;
  modelData->realVarsData[2].attribute.unit = "s";
  modelData->realVarsData[2].attribute.displayUnit = "";
  modelData->realVarsData[2].attribute.min = -DBL_MAX;
  modelData->realVarsData[2].attribute.max = DBL_MAX;
  modelData->realVarsData[2].attribute.fixed = 1;
  modelData->realVarsData[2].attribute.useNominal = 0;
  modelData->realVarsData[2].attribute.nominal = 1.0;
  modelData->realVarsData[2].attribute.start = 0.0;
  modelData->realVarsData[3].info.id = 1003;
  modelData->realVarsData[3].info.name = "RedToGreen.t";
  modelData->realVarsData[3].info.comment = "= actual waiting time (transition will fire when t > waitTime)";
  modelData->realVarsData[3].info.info.filename = "E:/Modelica/lib/omlibrary/Modelica 3.2.3/StateGraph.mo";
  modelData->realVarsData[3].info.info.lineStart = 2025;
  modelData->realVarsData[3].info.info.colStart = 5;
  modelData->realVarsData[3].info.info.lineEnd = 2026;
  modelData->realVarsData[3].info.info.colEnd = 73;
  modelData->realVarsData[3].info.info.readonly = 0;
  modelData->realVarsData[3].attribute.unit = "s";
  modelData->realVarsData[3].attribute.displayUnit = "";
  modelData->realVarsData[3].attribute.min = -DBL_MAX;
  modelData->realVarsData[3].attribute.max = DBL_MAX;
  modelData->realVarsData[3].attribute.fixed = 1;
  modelData->realVarsData[3].attribute.useNominal = 0;
  modelData->realVarsData[3].attribute.nominal = 1.0;
  modelData->realVarsData[3].attribute.start = 0.0;
  modelData->realVarsData[4].info.id = 1004;
  modelData->realVarsData[4].info.name = "RedToGreen.t_dummy";
  modelData->realVarsData[4].info.comment = "";
  modelData->realVarsData[4].info.info.filename = "E:/Modelica/lib/omlibrary/Modelica 3.2.3/StateGraph.mo";
  modelData->realVarsData[4].info.info.lineStart = 2039;
  modelData->realVarsData[4].info.info.colStart = 5;
  modelData->realVarsData[4].info.info.lineEnd = 2039;
  modelData->realVarsData[4].info.info.colEnd = 17;
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
  modelData->realVarsData[5].info.name = "RedToGreen.t_start";
  modelData->realVarsData[5].info.comment = "Time instant at which the transition would fire, if waitTime would be zero";
  modelData->realVarsData[5].info.info.filename = "E:/Modelica/lib/omlibrary/Modelica 3.2.3/StateGraph.mo";
  modelData->realVarsData[5].info.info.lineStart = 2037;
  modelData->realVarsData[5].info.info.colStart = 5;
  modelData->realVarsData[5].info.info.lineEnd = 2038;
  modelData->realVarsData[5].info.info.colEnd = 85;
  modelData->realVarsData[5].info.info.readonly = 0;
  modelData->realVarsData[5].attribute.unit = "s";
  modelData->realVarsData[5].attribute.displayUnit = "";
  modelData->realVarsData[5].attribute.min = -DBL_MAX;
  modelData->realVarsData[5].attribute.max = DBL_MAX;
  modelData->realVarsData[5].attribute.fixed = 1;
  modelData->realVarsData[5].attribute.useNominal = 0;
  modelData->realVarsData[5].attribute.nominal = 1.0;
  modelData->realVarsData[5].attribute.start = 0.0;
  modelData->realVarsData[6].info.id = 1006;
  modelData->realVarsData[6].info.name = "Safe_Passage";
  modelData->realVarsData[6].info.comment = "";
  modelData->realVarsData[6].info.info.filename = "E:/Szakdoga/TrainSimulation.mo";
  modelData->realVarsData[6].info.info.lineStart = 644;
  modelData->realVarsData[6].info.info.colStart = 5;
  modelData->realVarsData[6].info.info.lineEnd = 644;
  modelData->realVarsData[6].info.info.colEnd = 54;
  modelData->realVarsData[6].info.info.readonly = 0;
  modelData->realVarsData[6].attribute.unit = "";
  modelData->realVarsData[6].attribute.displayUnit = "";
  modelData->realVarsData[6].attribute.min = -DBL_MAX;
  modelData->realVarsData[6].attribute.max = DBL_MAX;
  modelData->realVarsData[6].attribute.fixed = 1;
  modelData->realVarsData[6].attribute.useNominal = 0;
  modelData->realVarsData[6].attribute.nominal = 1.0;
  modelData->realVarsData[6].attribute.start = 0.0;
  modelData->realVarsData[7].info.id = 1007;
  modelData->realVarsData[7].info.name = "green.outerStatePort.subgraphStatePort.activeSteps";
  modelData->realVarsData[7].info.comment = "Number of active steps in the CompositeStep";
  modelData->realVarsData[7].info.info.filename = "E:/Modelica/lib/omlibrary/Modelica 3.2.3/StateGraph.mo";
  modelData->realVarsData[7].info.info.lineStart = 1911;
  modelData->realVarsData[7].info.info.colStart = 5;
  modelData->realVarsData[7].info.info.lineEnd = 1911;
  modelData->realVarsData[7].info.info.colEnd = 72;
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
  modelData->realVarsData[8].info.name = "red.outerStatePort.subgraphStatePort.activeSteps";
  modelData->realVarsData[8].info.comment = "Number of active steps in the CompositeStep";
  modelData->realVarsData[8].info.info.filename = "E:/Modelica/lib/omlibrary/Modelica 3.2.3/StateGraph.mo";
  modelData->realVarsData[8].info.info.lineStart = 1911;
  modelData->realVarsData[8].info.info.colStart = 5;
  modelData->realVarsData[8].info.info.lineEnd = 1911;
  modelData->realVarsData[8].info.info.colEnd = 72;
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
  modelData->realVarsData[9].info.name = "stateGraphRoot.subgraphStatePort.activeSteps";
  modelData->realVarsData[9].info.comment = "Number of active steps in the CompositeStep";
  modelData->realVarsData[9].info.info.filename = "E:/Modelica/lib/omlibrary/Modelica 3.2.3/StateGraph.mo";
  modelData->realVarsData[9].info.info.lineStart = 1923;
  modelData->realVarsData[9].info.info.colStart = 5;
  modelData->realVarsData[9].info.info.lineEnd = 1923;
  modelData->realVarsData[9].info.info.colEnd = 72;
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
  modelData->realVarsData[10].info.name = "stateGraphRoot.subgraphStatePort.activeStepsDummy";
  modelData->realVarsData[10].info.comment = "Dummy variable in order that connector fulfills restriction of connector";
  modelData->realVarsData[10].info.info.filename = "E:/Modelica/lib/omlibrary/Modelica 3.2.3/StateGraph.mo";
  modelData->realVarsData[10].info.info.lineStart = 1920;
  modelData->realVarsData[10].info.info.colStart = 5;
  modelData->realVarsData[10].info.info.lineEnd = 1922;
  modelData->realVarsData[10].info.info.colEnd = 109;
  modelData->realVarsData[10].info.info.readonly = 0;
  modelData->realVarsData[10].attribute.unit = "";
  modelData->realVarsData[10].attribute.displayUnit = "";
  modelData->realVarsData[10].attribute.min = -DBL_MAX;
  modelData->realVarsData[10].attribute.max = DBL_MAX;
  modelData->realVarsData[10].attribute.fixed = 1;
  modelData->realVarsData[10].attribute.useNominal = 0;
  modelData->realVarsData[10].attribute.nominal = 1.0;
  modelData->realVarsData[10].attribute.start = 0.0;
  modelData->realParameterData[0].info.id = 1011;
  modelData->realParameterData[0].info.name = "GreenToRed.waitTime";
  modelData->realParameterData[0].info.comment = "Wait time before transition fires";
  modelData->realParameterData[0].info.info.filename = "E:/Modelica/lib/omlibrary/Modelica 3.2.3/StateGraph.mo";
  modelData->realParameterData[0].info.info.lineStart = 2022;
  modelData->realParameterData[0].info.info.colStart = 5;
  modelData->realParameterData[0].info.info.lineEnd = 2024;
  modelData->realParameterData[0].info.info.colEnd = 61;
  modelData->realParameterData[0].info.info.readonly = 0;
  modelData->realParameterData[0].attribute.unit = "s";
  modelData->realParameterData[0].attribute.displayUnit = "";
  modelData->realParameterData[0].attribute.min = 0.0;
  modelData->realParameterData[0].attribute.max = DBL_MAX;
  modelData->realParameterData[0].attribute.fixed = 1;
  modelData->realParameterData[0].attribute.useNominal = 0;
  modelData->realParameterData[0].attribute.nominal = 1.0;
  modelData->realParameterData[0].attribute.start = 0.0;
  modelData->realParameterData[1].info.id = 1012;
  modelData->realParameterData[1].info.name = "RedToGreen.waitTime";
  modelData->realParameterData[1].info.comment = "Wait time before transition fires";
  modelData->realParameterData[1].info.info.filename = "E:/Modelica/lib/omlibrary/Modelica 3.2.3/StateGraph.mo";
  modelData->realParameterData[1].info.info.lineStart = 2022;
  modelData->realParameterData[1].info.info.colStart = 5;
  modelData->realParameterData[1].info.info.lineEnd = 2024;
  modelData->realParameterData[1].info.info.colEnd = 61;
  modelData->realParameterData[1].info.info.readonly = 0;
  modelData->realParameterData[1].attribute.unit = "s";
  modelData->realParameterData[1].attribute.displayUnit = "";
  modelData->realParameterData[1].attribute.min = 0.0;
  modelData->realParameterData[1].attribute.max = DBL_MAX;
  modelData->realParameterData[1].attribute.fixed = 1;
  modelData->realParameterData[1].attribute.useNominal = 0;
  modelData->realParameterData[1].attribute.nominal = 1.0;
  modelData->realParameterData[1].attribute.start = 0.0;
  modelData->integerVarsData[0].info.id = 1013;
  modelData->integerVarsData[0].info.name = "StationState";
  modelData->integerVarsData[0].info.comment = "";
  modelData->integerVarsData[0].info.info.filename = "E:/Szakdoga/TrainSimulation.mo";
  modelData->integerVarsData[0].info.info.lineStart = 645;
  modelData->integerVarsData[0].info.info.colStart = 5;
  modelData->integerVarsData[0].info.info.lineEnd = 645;
  modelData->integerVarsData[0].info.info.colEnd = 58;
  modelData->integerVarsData[0].info.info.readonly = 0;
  modelData->integerVarsData[0].attribute.min = -LONG_MAX;
  modelData->integerVarsData[0].attribute.max = LONG_MAX;
  modelData->integerVarsData[0].attribute.fixed = 0;
  modelData->integerVarsData[0].attribute.start = 0;
  modelData->integerVarsData[1].info.id = 1014;
  modelData->integerVarsData[1].info.name = "state";
  modelData->integerVarsData[1].info.comment = "";
  modelData->integerVarsData[1].info.info.filename = "E:/Szakdoga/TrainSimulation.mo";
  modelData->integerVarsData[1].info.info.lineStart = 660;
  modelData->integerVarsData[1].info.info.colStart = 5;
  modelData->integerVarsData[1].info.info.lineEnd = 660;
  modelData->integerVarsData[1].info.info.colEnd = 24;
  modelData->integerVarsData[1].info.info.readonly = 0;
  modelData->integerVarsData[1].attribute.min = 1;
  modelData->integerVarsData[1].attribute.max = 4;
  modelData->integerVarsData[1].attribute.fixed = 0;
  modelData->integerVarsData[1].attribute.start = 0;
  modelData->integerVarsData[2].info.id = 1015;
  modelData->integerVarsData[2].info.name = "stateGraphRoot.activeSteps";
  modelData->integerVarsData[2].info.comment = "Number of active steps within the stategraph";
  modelData->integerVarsData[2].info.info.filename = "E:/Modelica/lib/omlibrary/Modelica 3.2.3/StateGraph.mo";
  modelData->integerVarsData[2].info.info.lineStart = 2731;
  modelData->integerVarsData[2].info.info.colStart = 3;
  modelData->integerVarsData[2].info.info.lineEnd = 2731;
  modelData->integerVarsData[2].info.info.colEnd = 76;
  modelData->integerVarsData[2].info.info.readonly = 0;
  modelData->integerVarsData[2].attribute.min = -LONG_MAX;
  modelData->integerVarsData[2].attribute.max = LONG_MAX;
  modelData->integerVarsData[2].attribute.fixed = 0;
  modelData->integerVarsData[2].attribute.start = 0;
  modelData->integerParameterData[0].info.id = 1016;
  modelData->integerParameterData[0].info.name = "green.nIn";
  modelData->integerParameterData[0].info.comment = "Number of input connections";
  modelData->integerParameterData[0].info.info.filename = "E:/Modelica/lib/omlibrary/Modelica 3.2.3/StateGraph.mo";
  modelData->integerParameterData[0].info.info.lineStart = 1929;
  modelData->integerParameterData[0].info.info.colStart = 5;
  modelData->integerParameterData[0].info.info.lineEnd = 1929;
  modelData->integerParameterData[0].info.info.colEnd = 67;
  modelData->integerParameterData[0].info.info.readonly = 0;
  modelData->integerParameterData[0].attribute.min = -LONG_MAX;
  modelData->integerParameterData[0].attribute.max = LONG_MAX;
  modelData->integerParameterData[0].attribute.fixed = 1;
  modelData->integerParameterData[0].attribute.start = 0;
  modelData->integerParameterData[1].info.id = 1017;
  modelData->integerParameterData[1].info.name = "green.nOut";
  modelData->integerParameterData[1].info.comment = "Number of output connections";
  modelData->integerParameterData[1].info.info.filename = "E:/Modelica/lib/omlibrary/Modelica 3.2.3/StateGraph.mo";
  modelData->integerParameterData[1].info.info.lineStart = 1930;
  modelData->integerParameterData[1].info.info.colStart = 5;
  modelData->integerParameterData[1].info.info.lineEnd = 1930;
  modelData->integerParameterData[1].info.info.colEnd = 69;
  modelData->integerParameterData[1].info.info.readonly = 0;
  modelData->integerParameterData[1].attribute.min = -LONG_MAX;
  modelData->integerParameterData[1].attribute.max = LONG_MAX;
  modelData->integerParameterData[1].attribute.fixed = 1;
  modelData->integerParameterData[1].attribute.start = 0;
  modelData->integerParameterData[2].info.id = 1018;
  modelData->integerParameterData[2].info.name = "red.nIn";
  modelData->integerParameterData[2].info.comment = "Number of input connections";
  modelData->integerParameterData[2].info.info.filename = "E:/Modelica/lib/omlibrary/Modelica 3.2.3/StateGraph.mo";
  modelData->integerParameterData[2].info.info.lineStart = 1929;
  modelData->integerParameterData[2].info.info.colStart = 5;
  modelData->integerParameterData[2].info.info.lineEnd = 1929;
  modelData->integerParameterData[2].info.info.colEnd = 67;
  modelData->integerParameterData[2].info.info.readonly = 0;
  modelData->integerParameterData[2].attribute.min = -LONG_MAX;
  modelData->integerParameterData[2].attribute.max = LONG_MAX;
  modelData->integerParameterData[2].attribute.fixed = 1;
  modelData->integerParameterData[2].attribute.start = 0;
  modelData->integerParameterData[3].info.id = 1019;
  modelData->integerParameterData[3].info.name = "red.nOut";
  modelData->integerParameterData[3].info.comment = "Number of output connections";
  modelData->integerParameterData[3].info.info.filename = "E:/Modelica/lib/omlibrary/Modelica 3.2.3/StateGraph.mo";
  modelData->integerParameterData[3].info.info.lineStart = 1930;
  modelData->integerParameterData[3].info.info.colStart = 5;
  modelData->integerParameterData[3].info.info.lineEnd = 1930;
  modelData->integerParameterData[3].info.info.colEnd = 69;
  modelData->integerParameterData[3].info.info.readonly = 0;
  modelData->integerParameterData[3].attribute.min = -LONG_MAX;
  modelData->integerParameterData[3].attribute.max = LONG_MAX;
  modelData->integerParameterData[3].attribute.fixed = 1;
  modelData->integerParameterData[3].attribute.start = 0;
  modelData->booleanVarsData[0].info.id = 1020;
  modelData->booleanVarsData[0].info.name = "$cse1";
  modelData->booleanVarsData[0].info.comment = "";
  modelData->booleanVarsData[0].info.info.filename = "";
  modelData->booleanVarsData[0].info.info.lineStart = 0;
  modelData->booleanVarsData[0].info.info.colStart = 0;
  modelData->booleanVarsData[0].info.info.lineEnd = 0;
  modelData->booleanVarsData[0].info.info.colEnd = 0;
  modelData->booleanVarsData[0].info.info.readonly = 0;
  modelData->booleanVarsData[0].attribute.fixed = 0;
  modelData->booleanVarsData[0].attribute.start = 0;
  modelData->booleanVarsData[1].info.id = 1021;
  modelData->booleanVarsData[1].info.name = "$cse2";
  modelData->booleanVarsData[1].info.comment = "";
  modelData->booleanVarsData[1].info.info.filename = "";
  modelData->booleanVarsData[1].info.info.lineStart = 0;
  modelData->booleanVarsData[1].info.info.colStart = 0;
  modelData->booleanVarsData[1].info.info.lineEnd = 0;
  modelData->booleanVarsData[1].info.info.colEnd = 0;
  modelData->booleanVarsData[1].info.info.readonly = 0;
  modelData->booleanVarsData[1].attribute.fixed = 0;
  modelData->booleanVarsData[1].attribute.start = 0;
  modelData->booleanVarsData[2].info.id = 1022;
  modelData->booleanVarsData[2].info.name = "GreenToRed.condition";
  modelData->booleanVarsData[2].info.comment = "= true, if transition may fire (time varying expression)";
  modelData->booleanVarsData[2].info.info.filename = "E:/Modelica/lib/omlibrary/Modelica 3.2.3/StateGraph.mo";
  modelData->booleanVarsData[2].info.info.lineStart = 2229;
  modelData->booleanVarsData[2].info.info.colStart = 3;
  modelData->booleanVarsData[2].info.info.lineEnd = 2231;
  modelData->booleanVarsData[2].info.info.colEnd = 48;
  modelData->booleanVarsData[2].info.info.readonly = 0;
  modelData->booleanVarsData[2].attribute.fixed = 0;
  modelData->booleanVarsData[2].attribute.start = 0;
  modelData->booleanVarsData[3].info.id = 1023;
  modelData->booleanVarsData[3].info.name = "GreenToRed.enableFire";
  modelData->booleanVarsData[3].info.comment = "= true, if all firing conditions are true";
  modelData->booleanVarsData[3].info.info.filename = "E:/Modelica/lib/omlibrary/Modelica 3.2.3/StateGraph.mo";
  modelData->booleanVarsData[3].info.info.lineStart = 2027;
  modelData->booleanVarsData[3].info.info.colStart = 5;
  modelData->booleanVarsData[3].info.info.lineEnd = 2027;
  modelData->booleanVarsData[3].info.info.colEnd = 74;
  modelData->booleanVarsData[3].info.info.readonly = 0;
  modelData->booleanVarsData[3].attribute.fixed = 0;
  modelData->booleanVarsData[3].attribute.start = 0;
  modelData->booleanVarsData[4].info.id = 1024;
  modelData->booleanVarsData[4].info.name = "RedToGreen.condition";
  modelData->booleanVarsData[4].info.comment = "= true, if transition may fire (time varying expression)";
  modelData->booleanVarsData[4].info.info.filename = "E:/Modelica/lib/omlibrary/Modelica 3.2.3/StateGraph.mo";
  modelData->booleanVarsData[4].info.info.lineStart = 2229;
  modelData->booleanVarsData[4].info.info.colStart = 3;
  modelData->booleanVarsData[4].info.info.lineEnd = 2231;
  modelData->booleanVarsData[4].info.info.colEnd = 48;
  modelData->booleanVarsData[4].info.info.readonly = 0;
  modelData->booleanVarsData[4].attribute.fixed = 0;
  modelData->booleanVarsData[4].attribute.start = 0;
  modelData->booleanVarsData[5].info.id = 1025;
  modelData->booleanVarsData[5].info.name = "RedToGreen.enableFire";
  modelData->booleanVarsData[5].info.comment = "= true, if all firing conditions are true";
  modelData->booleanVarsData[5].info.info.filename = "E:/Modelica/lib/omlibrary/Modelica 3.2.3/StateGraph.mo";
  modelData->booleanVarsData[5].info.info.lineStart = 2027;
  modelData->booleanVarsData[5].info.info.colStart = 5;
  modelData->booleanVarsData[5].info.info.lineEnd = 2027;
  modelData->booleanVarsData[5].info.info.colEnd = 74;
  modelData->booleanVarsData[5].info.info.readonly = 0;
  modelData->booleanVarsData[5].attribute.fixed = 0;
  modelData->booleanVarsData[5].attribute.start = 0;
  modelData->booleanVarsData[6].info.id = 1026;
  modelData->booleanVarsData[6].info.name = "green.active";
  modelData->booleanVarsData[6].info.comment = "= true if step is active, otherwise the step is not active";
  modelData->booleanVarsData[6].info.info.filename = "E:/Modelica/lib/omlibrary/Modelica 3.2.3/StateGraph.mo";
  modelData->booleanVarsData[6].info.info.lineStart = 2110;
  modelData->booleanVarsData[6].info.info.colStart = 3;
  modelData->booleanVarsData[6].info.info.lineEnd = 2111;
  modelData->booleanVarsData[6].info.info.colEnd = 67;
  modelData->booleanVarsData[6].info.info.readonly = 0;
  modelData->booleanVarsData[6].attribute.fixed = 0;
  modelData->booleanVarsData[6].attribute.start = 0;
  modelData->booleanVarsData[7].info.id = 1027;
  modelData->booleanVarsData[7].info.name = "green.localActive";
  modelData->booleanVarsData[7].info.comment = "= true if step is active, otherwise the step is not active";
  modelData->booleanVarsData[7].info.info.filename = "E:/Modelica/lib/omlibrary/Modelica 3.2.3/StateGraph.mo";
  modelData->booleanVarsData[7].info.info.lineStart = 1936;
  modelData->booleanVarsData[7].info.info.colStart = 5;
  modelData->booleanVarsData[7].info.info.lineEnd = 1938;
  modelData->booleanVarsData[7].info.info.colEnd = 35;
  modelData->booleanVarsData[7].info.info.readonly = 0;
  modelData->booleanVarsData[7].attribute.fixed = 0;
  modelData->booleanVarsData[7].attribute.start = 0;
  modelData->booleanVarsData[8].info.id = 1028;
  modelData->booleanVarsData[8].info.name = "green.newActive";
  modelData->booleanVarsData[8].info.comment = "Value of active in the next iteration";
  modelData->booleanVarsData[8].info.info.filename = "E:/Modelica/lib/omlibrary/Modelica 3.2.3/StateGraph.mo";
  modelData->booleanVarsData[8].info.info.lineStart = 1953;
  modelData->booleanVarsData[8].info.info.colStart = 5;
  modelData->booleanVarsData[8].info.info.lineEnd = 1954;
  modelData->booleanVarsData[8].info.info.colEnd = 35;
  modelData->booleanVarsData[8].info.info.readonly = 0;
  modelData->booleanVarsData[8].attribute.fixed = 0;
  modelData->booleanVarsData[8].attribute.start = 0;
  modelData->booleanVarsData[9].info.id = 1029;
  modelData->booleanVarsData[9].info.name = "green.oldActive";
  modelData->booleanVarsData[9].info.comment = "Value of active when CompositeStep was aborted";
  modelData->booleanVarsData[9].info.info.filename = "E:/Modelica/lib/omlibrary/Modelica 3.2.3/StateGraph.mo";
  modelData->booleanVarsData[9].info.info.lineStart = 1955;
  modelData->booleanVarsData[9].info.info.colStart = 5;
  modelData->booleanVarsData[9].info.info.lineEnd = 1955;
  modelData->booleanVarsData[9].info.info.colEnd = 71;
  modelData->booleanVarsData[9].info.info.readonly = 0;
  modelData->booleanVarsData[9].attribute.fixed = 0;
  modelData->booleanVarsData[9].attribute.start = 0;
  modelData->booleanVarsData[10].info.id = 1030;
  modelData->booleanVarsData[10].info.name = "red.active";
  modelData->booleanVarsData[10].info.comment = "= true if step is active, otherwise the step is not active";
  modelData->booleanVarsData[10].info.info.filename = "E:/Modelica/lib/omlibrary/Modelica 3.2.3/StateGraph.mo";
  modelData->booleanVarsData[10].info.info.lineStart = 2171;
  modelData->booleanVarsData[10].info.info.colStart = 3;
  modelData->booleanVarsData[10].info.info.lineEnd = 2172;
  modelData->booleanVarsData[10].info.info.colEnd = 67;
  modelData->booleanVarsData[10].info.info.readonly = 0;
  modelData->booleanVarsData[10].attribute.fixed = 0;
  modelData->booleanVarsData[10].attribute.start = 0;
  modelData->booleanVarsData[11].info.id = 1031;
  modelData->booleanVarsData[11].info.name = "red.localActive";
  modelData->booleanVarsData[11].info.comment = "= true if step is active, otherwise the step is not active";
  modelData->booleanVarsData[11].info.info.filename = "E:/Modelica/lib/omlibrary/Modelica 3.2.3/StateGraph.mo";
  modelData->booleanVarsData[11].info.info.lineStart = 1936;
  modelData->booleanVarsData[11].info.info.colStart = 5;
  modelData->booleanVarsData[11].info.info.lineEnd = 1938;
  modelData->booleanVarsData[11].info.info.colEnd = 35;
  modelData->booleanVarsData[11].info.info.readonly = 0;
  modelData->booleanVarsData[11].attribute.fixed = 0;
  modelData->booleanVarsData[11].attribute.start = 0;
  modelData->booleanVarsData[12].info.id = 1032;
  modelData->booleanVarsData[12].info.name = "red.newActive";
  modelData->booleanVarsData[12].info.comment = "Value of active in the next iteration";
  modelData->booleanVarsData[12].info.info.filename = "E:/Modelica/lib/omlibrary/Modelica 3.2.3/StateGraph.mo";
  modelData->booleanVarsData[12].info.info.lineStart = 1953;
  modelData->booleanVarsData[12].info.info.colStart = 5;
  modelData->booleanVarsData[12].info.info.lineEnd = 1954;
  modelData->booleanVarsData[12].info.info.colEnd = 35;
  modelData->booleanVarsData[12].info.info.readonly = 0;
  modelData->booleanVarsData[12].attribute.fixed = 0;
  modelData->booleanVarsData[12].attribute.start = 0;
  modelData->booleanVarsData[13].info.id = 1033;
  modelData->booleanVarsData[13].info.name = "red.oldActive";
  modelData->booleanVarsData[13].info.comment = "Value of active when CompositeStep was aborted";
  modelData->booleanVarsData[13].info.info.filename = "E:/Modelica/lib/omlibrary/Modelica 3.2.3/StateGraph.mo";
  modelData->booleanVarsData[13].info.info.lineStart = 1955;
  modelData->booleanVarsData[13].info.info.colStart = 5;
  modelData->booleanVarsData[13].info.info.lineEnd = 1955;
  modelData->booleanVarsData[13].info.info.colEnd = 71;
  modelData->booleanVarsData[13].info.info.readonly = 0;
  modelData->booleanVarsData[13].attribute.fixed = 0;
  modelData->booleanVarsData[13].attribute.start = 0;
  modelData->booleanVarsData[14].info.id = 1034;
  modelData->booleanVarsData[14].info.name = "stateGraphRoot.resume";
  modelData->booleanVarsData[14].info.comment = "";
  modelData->booleanVarsData[14].info.info.filename = "E:/Modelica/lib/omlibrary/Modelica 3.2.3/StateGraph.mo";
  modelData->booleanVarsData[14].info.info.lineStart = 2088;
  modelData->booleanVarsData[14].info.info.colStart = 5;
  modelData->booleanVarsData[14].info.info.lineEnd = 2088;
  modelData->booleanVarsData[14].info.info.colEnd = 35;
  modelData->booleanVarsData[14].info.info.readonly = 0;
  modelData->booleanVarsData[14].attribute.fixed = 1;
  modelData->booleanVarsData[14].attribute.start = 0;
  modelData->booleanVarsData[15].info.id = 1035;
  modelData->booleanVarsData[15].info.name = "stateGraphRoot.suspend";
  modelData->booleanVarsData[15].info.comment = "";
  modelData->booleanVarsData[15].info.info.filename = "E:/Modelica/lib/omlibrary/Modelica 3.2.3/StateGraph.mo";
  modelData->booleanVarsData[15].info.info.lineStart = 2087;
  modelData->booleanVarsData[15].info.info.colStart = 5;
  modelData->booleanVarsData[15].info.info.lineEnd = 2087;
  modelData->booleanVarsData[15].info.info.colEnd = 35;
  modelData->booleanVarsData[15].info.info.readonly = 0;
  modelData->booleanVarsData[15].attribute.fixed = 1;
  modelData->booleanVarsData[15].attribute.start = 0;
  modelData->booleanParameterData[0].info.id = 1036;
  modelData->booleanParameterData[0].info.name = "GreenToRed.enableTimer";
  modelData->booleanParameterData[0].info.comment = "= true, if timer is enabled";
  modelData->booleanParameterData[0].info.info.filename = "E:/Modelica/lib/omlibrary/Modelica 3.2.3/StateGraph.mo";
  modelData->booleanParameterData[0].info.info.lineStart = 2020;
  modelData->booleanParameterData[0].info.info.colStart = 5;
  modelData->booleanParameterData[0].info.info.lineEnd = 2021;
  modelData->booleanParameterData[0].info.info.colEnd = 56;
  modelData->booleanParameterData[0].info.info.readonly = 0;
  modelData->booleanParameterData[0].attribute.fixed = 1;
  modelData->booleanParameterData[0].attribute.start = 0;
  modelData->booleanParameterData[1].info.id = 1037;
  modelData->booleanParameterData[1].info.name = "RedToGreen.enableTimer";
  modelData->booleanParameterData[1].info.comment = "= true, if timer is enabled";
  modelData->booleanParameterData[1].info.info.filename = "E:/Modelica/lib/omlibrary/Modelica 3.2.3/StateGraph.mo";
  modelData->booleanParameterData[1].info.info.lineStart = 2020;
  modelData->booleanParameterData[1].info.info.colStart = 5;
  modelData->booleanParameterData[1].info.info.lineEnd = 2021;
  modelData->booleanParameterData[1].info.info.colEnd = 56;
  modelData->booleanParameterData[1].info.info.readonly = 0;
  modelData->booleanParameterData[1].attribute.fixed = 1;
  modelData->booleanParameterData[1].attribute.start = 0;
}