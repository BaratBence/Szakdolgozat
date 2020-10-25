/* update bound parameters and variable attributes (start, nominal, min, max) */
#include "TrainSimulation_TrainStation_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

OMC_DISABLE_OPT
int TrainSimulation_TrainStation_updateBoundVariableAttributes(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  /* min ******************************************************** */
  
  infoStreamPrint(LOG_INIT, 1, "updating min-values");
  if (ACTIVE_STREAM(LOG_INIT)) messageClose(LOG_INIT);
  
  /* max ******************************************************** */
  
  infoStreamPrint(LOG_INIT, 1, "updating max-values");
  if (ACTIVE_STREAM(LOG_INIT)) messageClose(LOG_INIT);
  
  /* nominal **************************************************** */
  
  infoStreamPrint(LOG_INIT, 1, "updating nominal-values");
  if (ACTIVE_STREAM(LOG_INIT)) messageClose(LOG_INIT);
  
  /* start ****************************************************** */
  infoStreamPrint(LOG_INIT, 1, "updating primary start-values");
  if (ACTIVE_STREAM(LOG_INIT)) messageClose(LOG_INIT);
  
  TRACE_POP
  return 0;
}

void TrainSimulation_TrainStation_updateBoundParameters_0(DATA *data, threadData_t *threadData);
extern void TrainSimulation_TrainStation_eqFunction_9(DATA *data, threadData_t *threadData);

extern void TrainSimulation_TrainStation_eqFunction_8(DATA *data, threadData_t *threadData);

extern void TrainSimulation_TrainStation_eqFunction_7(DATA *data, threadData_t *threadData);

extern void TrainSimulation_TrainStation_eqFunction_6(DATA *data, threadData_t *threadData);

extern void TrainSimulation_TrainStation_eqFunction_5(DATA *data, threadData_t *threadData);

extern void TrainSimulation_TrainStation_eqFunction_4(DATA *data, threadData_t *threadData);

extern void TrainSimulation_TrainStation_eqFunction_3(DATA *data, threadData_t *threadData);

extern void TrainSimulation_TrainStation_eqFunction_2(DATA *data, threadData_t *threadData);

extern void TrainSimulation_TrainStation_eqFunction_1(DATA *data, threadData_t *threadData);


/*
equation index: 71
type: ALGORITHM

  assert(RedToGreen.waitTime >= 0.0, "Variable violating min constraint: 0.0 <= RedToGreen.waitTime, has value: " + String(RedToGreen.waitTime, "g"));
*/
OMC_DISABLE_OPT
static void TrainSimulation_TrainStation_eqFunction_71(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,71};
  modelica_boolean tmp0;
  static const MMC_DEFSTRINGLIT(tmp1,74,"Variable violating min constraint: 0.0 <= RedToGreen.waitTime, has value: ");
  modelica_string tmp2;
  static int tmp3 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp3)
  {
    tmp0 = GreaterEq(data->simulationInfo->realParameter[1] /* RedToGreen.waitTime PARAM */,0.0);
    if(!tmp0)
    {
      tmp2 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[1] /* RedToGreen.waitTime PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp1),tmp2);
      {
        FILE_INFO info = {"E:/Modelica/lib/omlibrary/Modelica 3.2.3/StateGraph.mo",2022,5,2024,61,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nRedToGreen.waitTime >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp3 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 72
type: ALGORITHM

  assert(GreenToRed.waitTime >= 0.0, "Variable violating min constraint: 0.0 <= GreenToRed.waitTime, has value: " + String(GreenToRed.waitTime, "g"));
*/
OMC_DISABLE_OPT
static void TrainSimulation_TrainStation_eqFunction_72(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,72};
  modelica_boolean tmp4;
  static const MMC_DEFSTRINGLIT(tmp5,74,"Variable violating min constraint: 0.0 <= GreenToRed.waitTime, has value: ");
  modelica_string tmp6;
  static int tmp7 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp7)
  {
    tmp4 = GreaterEq(data->simulationInfo->realParameter[0] /* GreenToRed.waitTime PARAM */,0.0);
    if(!tmp4)
    {
      tmp6 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[0] /* GreenToRed.waitTime PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp5),tmp6);
      {
        FILE_INFO info = {"E:/Modelica/lib/omlibrary/Modelica 3.2.3/StateGraph.mo",2022,5,2024,61,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nGreenToRed.waitTime >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp7 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 73
type: ALGORITHM

  assert(red.nOut >= 0, "Variable violating min constraint: 0 <= red.nOut, has value: " + String(red.nOut, "d"));
*/
OMC_DISABLE_OPT
static void TrainSimulation_TrainStation_eqFunction_73(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,73};
  modelica_boolean tmp8;
  static const MMC_DEFSTRINGLIT(tmp9,61,"Variable violating min constraint: 0 <= red.nOut, has value: ");
  modelica_string tmp10;
  static int tmp11 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp11)
  {
    tmp8 = GreaterEq(data->simulationInfo->integerParameter[3] /* red.nOut PARAM */,((modelica_integer) 0));
    if(!tmp8)
    {
      tmp10 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[3] /* red.nOut PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp9),tmp10);
      {
        FILE_INFO info = {"E:/Modelica/lib/omlibrary/Modelica 3.2.3/StateGraph.mo",1930,5,1930,69,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nred.nOut >= 0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp11 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 74
type: ALGORITHM

  assert(red.nIn >= 0, "Variable violating min constraint: 0 <= red.nIn, has value: " + String(red.nIn, "d"));
*/
OMC_DISABLE_OPT
static void TrainSimulation_TrainStation_eqFunction_74(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,74};
  modelica_boolean tmp12;
  static const MMC_DEFSTRINGLIT(tmp13,60,"Variable violating min constraint: 0 <= red.nIn, has value: ");
  modelica_string tmp14;
  static int tmp15 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp15)
  {
    tmp12 = GreaterEq(data->simulationInfo->integerParameter[2] /* red.nIn PARAM */,((modelica_integer) 0));
    if(!tmp12)
    {
      tmp14 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[2] /* red.nIn PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp13),tmp14);
      {
        FILE_INFO info = {"E:/Modelica/lib/omlibrary/Modelica 3.2.3/StateGraph.mo",1929,5,1929,67,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nred.nIn >= 0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp15 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 75
type: ALGORITHM

  assert(green.nOut >= 0, "Variable violating min constraint: 0 <= green.nOut, has value: " + String(green.nOut, "d"));
*/
OMC_DISABLE_OPT
static void TrainSimulation_TrainStation_eqFunction_75(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,75};
  modelica_boolean tmp16;
  static const MMC_DEFSTRINGLIT(tmp17,63,"Variable violating min constraint: 0 <= green.nOut, has value: ");
  modelica_string tmp18;
  static int tmp19 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp19)
  {
    tmp16 = GreaterEq(data->simulationInfo->integerParameter[1] /* green.nOut PARAM */,((modelica_integer) 0));
    if(!tmp16)
    {
      tmp18 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[1] /* green.nOut PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp17),tmp18);
      {
        FILE_INFO info = {"E:/Modelica/lib/omlibrary/Modelica 3.2.3/StateGraph.mo",1930,5,1930,69,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\ngreen.nOut >= 0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp19 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 76
type: ALGORITHM

  assert(green.nIn >= 0, "Variable violating min constraint: 0 <= green.nIn, has value: " + String(green.nIn, "d"));
*/
OMC_DISABLE_OPT
static void TrainSimulation_TrainStation_eqFunction_76(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,76};
  modelica_boolean tmp20;
  static const MMC_DEFSTRINGLIT(tmp21,62,"Variable violating min constraint: 0 <= green.nIn, has value: ");
  modelica_string tmp22;
  static int tmp23 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp23)
  {
    tmp20 = GreaterEq(data->simulationInfo->integerParameter[0] /* green.nIn PARAM */,((modelica_integer) 0));
    if(!tmp20)
    {
      tmp22 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[0] /* green.nIn PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp21),tmp22);
      {
        FILE_INFO info = {"E:/Modelica/lib/omlibrary/Modelica 3.2.3/StateGraph.mo",1929,5,1929,67,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\ngreen.nIn >= 0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp23 = 1;
    }
  }
  TRACE_POP
}
OMC_DISABLE_OPT
void TrainSimulation_TrainStation_updateBoundParameters_0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  TrainSimulation_TrainStation_eqFunction_9(data, threadData);
  TrainSimulation_TrainStation_eqFunction_8(data, threadData);
  TrainSimulation_TrainStation_eqFunction_7(data, threadData);
  TrainSimulation_TrainStation_eqFunction_6(data, threadData);
  TrainSimulation_TrainStation_eqFunction_5(data, threadData);
  TrainSimulation_TrainStation_eqFunction_4(data, threadData);
  TrainSimulation_TrainStation_eqFunction_3(data, threadData);
  TrainSimulation_TrainStation_eqFunction_2(data, threadData);
  TrainSimulation_TrainStation_eqFunction_1(data, threadData);
  TrainSimulation_TrainStation_eqFunction_71(data, threadData);
  TrainSimulation_TrainStation_eqFunction_72(data, threadData);
  TrainSimulation_TrainStation_eqFunction_73(data, threadData);
  TrainSimulation_TrainStation_eqFunction_74(data, threadData);
  TrainSimulation_TrainStation_eqFunction_75(data, threadData);
  TrainSimulation_TrainStation_eqFunction_76(data, threadData);
  TRACE_POP
}
OMC_DISABLE_OPT
int TrainSimulation_TrainStation_updateBoundParameters(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  data->simulationInfo->integerParameter[0] /* green.nIn PARAM */ = ((modelica_integer) 1);
  data->modelData->integerParameterData[0].time_unvarying = 1;
  data->simulationInfo->integerParameter[1] /* green.nOut PARAM */ = ((modelica_integer) 1);
  data->modelData->integerParameterData[1].time_unvarying = 1;
  data->simulationInfo->integerParameter[2] /* red.nIn PARAM */ = ((modelica_integer) 1);
  data->modelData->integerParameterData[2].time_unvarying = 1;
  data->simulationInfo->integerParameter[3] /* red.nOut PARAM */ = ((modelica_integer) 1);
  data->modelData->integerParameterData[3].time_unvarying = 1;
  data->simulationInfo->booleanParameter[0] /* GreenToRed.enableTimer PARAM */ = 0;
  data->modelData->booleanParameterData[0].time_unvarying = 1;
  data->simulationInfo->booleanParameter[1] /* RedToGreen.enableTimer PARAM */ = 0;
  data->modelData->booleanParameterData[1].time_unvarying = 1;
  TrainSimulation_TrainStation_updateBoundParameters_0(data, threadData);
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

