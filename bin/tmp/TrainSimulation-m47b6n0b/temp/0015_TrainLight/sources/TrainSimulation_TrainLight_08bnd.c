/* update bound parameters and variable attributes (start, nominal, min, max) */
#include "TrainSimulation_TrainLight_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

OMC_DISABLE_OPT
int TrainSimulation_TrainLight_updateBoundVariableAttributes(DATA *data, threadData_t *threadData)
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

void TrainSimulation_TrainLight_updateBoundParameters_0(DATA *data, threadData_t *threadData);

/*
equation index: 121
type: SIMPLE_ASSIGN
OnToOff.localCondition = Failure
*/
OMC_DISABLE_OPT
static void TrainSimulation_TrainLight_eqFunction_121(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,121};
  data->simulationInfo->booleanParameter[6] /* OnToOff.localCondition PARAM */ = data->simulationInfo->booleanParameter[0] /* Failure PARAM */;
  TRACE_POP
}

/*
equation index: 122
type: SIMPLE_ASSIGN
OnToOff.condition = Failure
*/
OMC_DISABLE_OPT
static void TrainSimulation_TrainLight_eqFunction_122(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,122};
  data->simulationInfo->booleanParameter[4] /* OnToOff.condition PARAM */ = data->simulationInfo->booleanParameter[0] /* Failure PARAM */;
  TRACE_POP
}

/*
equation index: 123
type: SIMPLE_ASSIGN
OffToOn.localCondition = not Failure
*/
OMC_DISABLE_OPT
static void TrainSimulation_TrainLight_eqFunction_123(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,123};
  data->simulationInfo->booleanParameter[3] /* OffToOn.localCondition PARAM */ = (!data->simulationInfo->booleanParameter[0] /* Failure PARAM */);
  TRACE_POP
}

/*
equation index: 124
type: SIMPLE_ASSIGN
OffToOn.condition = not Failure
*/
OMC_DISABLE_OPT
static void TrainSimulation_TrainLight_eqFunction_124(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,124};
  data->simulationInfo->booleanParameter[1] /* OffToOn.condition PARAM */ = (!data->simulationInfo->booleanParameter[0] /* Failure PARAM */);
  TRACE_POP
}

/*
equation index: 125
type: SIMPLE_ASSIGN
RedToOff.localCondition = Failure
*/
OMC_DISABLE_OPT
static void TrainSimulation_TrainLight_eqFunction_125(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,125};
  data->simulationInfo->booleanParameter[10] /* RedToOff.localCondition PARAM */ = data->simulationInfo->booleanParameter[0] /* Failure PARAM */;
  TRACE_POP
}

/*
equation index: 126
type: SIMPLE_ASSIGN
RedToOff.condition = Failure
*/
OMC_DISABLE_OPT
static void TrainSimulation_TrainLight_eqFunction_126(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,126};
  data->simulationInfo->booleanParameter[8] /* RedToOff.condition PARAM */ = data->simulationInfo->booleanParameter[0] /* Failure PARAM */;
  TRACE_POP
}

/*
equation index: 127
type: SIMPLE_ASSIGN
$outputAlias_Intersection_output = Intersection
*/
OMC_DISABLE_OPT
static void TrainSimulation_TrainLight_eqFunction_127(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,127};
  data->simulationInfo->realParameter[0] /* $outputAlias_Intersection_output PARAM */ = data->simulationInfo->realParameter[1] /* Intersection PARAM */;
  TRACE_POP
}
extern void TrainSimulation_TrainLight_eqFunction_18(DATA *data, threadData_t *threadData);

extern void TrainSimulation_TrainLight_eqFunction_17(DATA *data, threadData_t *threadData);

extern void TrainSimulation_TrainLight_eqFunction_16(DATA *data, threadData_t *threadData);

extern void TrainSimulation_TrainLight_eqFunction_15(DATA *data, threadData_t *threadData);

extern void TrainSimulation_TrainLight_eqFunction_14(DATA *data, threadData_t *threadData);

extern void TrainSimulation_TrainLight_eqFunction_13(DATA *data, threadData_t *threadData);

extern void TrainSimulation_TrainLight_eqFunction_12(DATA *data, threadData_t *threadData);

extern void TrainSimulation_TrainLight_eqFunction_11(DATA *data, threadData_t *threadData);

extern void TrainSimulation_TrainLight_eqFunction_10(DATA *data, threadData_t *threadData);

extern void TrainSimulation_TrainLight_eqFunction_9(DATA *data, threadData_t *threadData);

extern void TrainSimulation_TrainLight_eqFunction_8(DATA *data, threadData_t *threadData);

extern void TrainSimulation_TrainLight_eqFunction_7(DATA *data, threadData_t *threadData);

extern void TrainSimulation_TrainLight_eqFunction_6(DATA *data, threadData_t *threadData);

extern void TrainSimulation_TrainLight_eqFunction_5(DATA *data, threadData_t *threadData);

extern void TrainSimulation_TrainLight_eqFunction_4(DATA *data, threadData_t *threadData);

extern void TrainSimulation_TrainLight_eqFunction_3(DATA *data, threadData_t *threadData);

extern void TrainSimulation_TrainLight_eqFunction_2(DATA *data, threadData_t *threadData);

extern void TrainSimulation_TrainLight_eqFunction_1(DATA *data, threadData_t *threadData);


/*
equation index: 157
type: ALGORITHM

  assert(RedToOff.waitTime >= 0.0, "Variable violating min constraint: 0.0 <= RedToOff.waitTime, has value: " + String(RedToOff.waitTime, "g"));
*/
OMC_DISABLE_OPT
static void TrainSimulation_TrainLight_eqFunction_157(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,157};
  modelica_boolean tmp0;
  static const MMC_DEFSTRINGLIT(tmp1,72,"Variable violating min constraint: 0.0 <= RedToOff.waitTime, has value: ");
  modelica_string tmp2;
  static int tmp3 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp3)
  {
    tmp0 = GreaterEq(data->simulationInfo->realParameter[5] /* RedToOff.waitTime PARAM */,0.0);
    if(!tmp0)
    {
      tmp2 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[5] /* RedToOff.waitTime PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp1),tmp2);
      {
        FILE_INFO info = {"E:/Modelica/lib/omlibrary/Modelica 3.2.3/StateGraph.mo",2022,5,2024,61,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nRedToOff.waitTime >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp3 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 158
type: ALGORITHM

  assert(RedToOn.waitTime >= 0.0, "Variable violating min constraint: 0.0 <= RedToOn.waitTime, has value: " + String(RedToOn.waitTime, "g"));
*/
OMC_DISABLE_OPT
static void TrainSimulation_TrainLight_eqFunction_158(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,158};
  modelica_boolean tmp4;
  static const MMC_DEFSTRINGLIT(tmp5,71,"Variable violating min constraint: 0.0 <= RedToOn.waitTime, has value: ");
  modelica_string tmp6;
  static int tmp7 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp7)
  {
    tmp4 = GreaterEq(data->simulationInfo->realParameter[6] /* RedToOn.waitTime PARAM */,0.0);
    if(!tmp4)
    {
      tmp6 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[6] /* RedToOn.waitTime PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp5),tmp6);
      {
        FILE_INFO info = {"E:/Modelica/lib/omlibrary/Modelica 3.2.3/StateGraph.mo",2022,5,2024,61,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nRedToOn.waitTime >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp7 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 159
type: ALGORITHM

  assert(OffToOn.waitTime >= 0.0, "Variable violating min constraint: 0.0 <= OffToOn.waitTime, has value: " + String(OffToOn.waitTime, "g"));
*/
OMC_DISABLE_OPT
static void TrainSimulation_TrainLight_eqFunction_159(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,159};
  modelica_boolean tmp8;
  static const MMC_DEFSTRINGLIT(tmp9,71,"Variable violating min constraint: 0.0 <= OffToOn.waitTime, has value: ");
  modelica_string tmp10;
  static int tmp11 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp11)
  {
    tmp8 = GreaterEq(data->simulationInfo->realParameter[2] /* OffToOn.waitTime PARAM */,0.0);
    if(!tmp8)
    {
      tmp10 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[2] /* OffToOn.waitTime PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp9),tmp10);
      {
        FILE_INFO info = {"E:/Modelica/lib/omlibrary/Modelica 3.2.3/StateGraph.mo",2022,5,2024,61,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nOffToOn.waitTime >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp11 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 160
type: ALGORITHM

  assert(OnToOff.waitTime >= 0.0, "Variable violating min constraint: 0.0 <= OnToOff.waitTime, has value: " + String(OnToOff.waitTime, "g"));
*/
OMC_DISABLE_OPT
static void TrainSimulation_TrainLight_eqFunction_160(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,160};
  modelica_boolean tmp12;
  static const MMC_DEFSTRINGLIT(tmp13,71,"Variable violating min constraint: 0.0 <= OnToOff.waitTime, has value: ");
  modelica_string tmp14;
  static int tmp15 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp15)
  {
    tmp12 = GreaterEq(data->simulationInfo->realParameter[3] /* OnToOff.waitTime PARAM */,0.0);
    if(!tmp12)
    {
      tmp14 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[3] /* OnToOff.waitTime PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp13),tmp14);
      {
        FILE_INFO info = {"E:/Modelica/lib/omlibrary/Modelica 3.2.3/StateGraph.mo",2022,5,2024,61,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nOnToOff.waitTime >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp15 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 161
type: ALGORITHM

  assert(OnToRed.waitTime >= 0.0, "Variable violating min constraint: 0.0 <= OnToRed.waitTime, has value: " + String(OnToRed.waitTime, "g"));
*/
OMC_DISABLE_OPT
static void TrainSimulation_TrainLight_eqFunction_161(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,161};
  modelica_boolean tmp16;
  static const MMC_DEFSTRINGLIT(tmp17,71,"Variable violating min constraint: 0.0 <= OnToRed.waitTime, has value: ");
  modelica_string tmp18;
  static int tmp19 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp19)
  {
    tmp16 = GreaterEq(data->simulationInfo->realParameter[4] /* OnToRed.waitTime PARAM */,0.0);
    if(!tmp16)
    {
      tmp18 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[4] /* OnToRed.waitTime PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp17),tmp18);
      {
        FILE_INFO info = {"E:/Modelica/lib/omlibrary/Modelica 3.2.3/StateGraph.mo",2022,5,2024,61,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nOnToRed.waitTime >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp19 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 162
type: ALGORITHM

  assert(Off.nOut >= 0, "Variable violating min constraint: 0 <= Off.nOut, has value: " + String(Off.nOut, "d"));
*/
OMC_DISABLE_OPT
static void TrainSimulation_TrainLight_eqFunction_162(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,162};
  modelica_boolean tmp20;
  static const MMC_DEFSTRINGLIT(tmp21,61,"Variable violating min constraint: 0 <= Off.nOut, has value: ");
  modelica_string tmp22;
  static int tmp23 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp23)
  {
    tmp20 = GreaterEq(data->simulationInfo->integerParameter[1] /* Off.nOut PARAM */,((modelica_integer) 0));
    if(!tmp20)
    {
      tmp22 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[1] /* Off.nOut PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp21),tmp22);
      {
        FILE_INFO info = {"E:/Modelica/lib/omlibrary/Modelica 3.2.3/StateGraph.mo",1930,5,1930,69,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nOff.nOut >= 0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp23 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 163
type: ALGORITHM

  assert(Off.nIn >= 0, "Variable violating min constraint: 0 <= Off.nIn, has value: " + String(Off.nIn, "d"));
*/
OMC_DISABLE_OPT
static void TrainSimulation_TrainLight_eqFunction_163(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,163};
  modelica_boolean tmp24;
  static const MMC_DEFSTRINGLIT(tmp25,60,"Variable violating min constraint: 0 <= Off.nIn, has value: ");
  modelica_string tmp26;
  static int tmp27 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp27)
  {
    tmp24 = GreaterEq(data->simulationInfo->integerParameter[0] /* Off.nIn PARAM */,((modelica_integer) 0));
    if(!tmp24)
    {
      tmp26 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[0] /* Off.nIn PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp25),tmp26);
      {
        FILE_INFO info = {"E:/Modelica/lib/omlibrary/Modelica 3.2.3/StateGraph.mo",1929,5,1929,67,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nOff.nIn >= 0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp27 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 164
type: ALGORITHM

  assert(Red.nOut >= 0, "Variable violating min constraint: 0 <= Red.nOut, has value: " + String(Red.nOut, "d"));
*/
OMC_DISABLE_OPT
static void TrainSimulation_TrainLight_eqFunction_164(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,164};
  modelica_boolean tmp28;
  static const MMC_DEFSTRINGLIT(tmp29,61,"Variable violating min constraint: 0 <= Red.nOut, has value: ");
  modelica_string tmp30;
  static int tmp31 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp31)
  {
    tmp28 = GreaterEq(data->simulationInfo->integerParameter[5] /* Red.nOut PARAM */,((modelica_integer) 0));
    if(!tmp28)
    {
      tmp30 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[5] /* Red.nOut PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp29),tmp30);
      {
        FILE_INFO info = {"E:/Modelica/lib/omlibrary/Modelica 3.2.3/StateGraph.mo",1930,5,1930,69,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nRed.nOut >= 0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp31 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 165
type: ALGORITHM

  assert(Red.nIn >= 0, "Variable violating min constraint: 0 <= Red.nIn, has value: " + String(Red.nIn, "d"));
*/
OMC_DISABLE_OPT
static void TrainSimulation_TrainLight_eqFunction_165(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,165};
  modelica_boolean tmp32;
  static const MMC_DEFSTRINGLIT(tmp33,60,"Variable violating min constraint: 0 <= Red.nIn, has value: ");
  modelica_string tmp34;
  static int tmp35 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp35)
  {
    tmp32 = GreaterEq(data->simulationInfo->integerParameter[4] /* Red.nIn PARAM */,((modelica_integer) 0));
    if(!tmp32)
    {
      tmp34 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[4] /* Red.nIn PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp33),tmp34);
      {
        FILE_INFO info = {"E:/Modelica/lib/omlibrary/Modelica 3.2.3/StateGraph.mo",1929,5,1929,67,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nRed.nIn >= 0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp35 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 166
type: ALGORITHM

  assert(On.nOut >= 0, "Variable violating min constraint: 0 <= On.nOut, has value: " + String(On.nOut, "d"));
*/
OMC_DISABLE_OPT
static void TrainSimulation_TrainLight_eqFunction_166(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,166};
  modelica_boolean tmp36;
  static const MMC_DEFSTRINGLIT(tmp37,60,"Variable violating min constraint: 0 <= On.nOut, has value: ");
  modelica_string tmp38;
  static int tmp39 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp39)
  {
    tmp36 = GreaterEq(data->simulationInfo->integerParameter[3] /* On.nOut PARAM */,((modelica_integer) 0));
    if(!tmp36)
    {
      tmp38 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[3] /* On.nOut PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp37),tmp38);
      {
        FILE_INFO info = {"E:/Modelica/lib/omlibrary/Modelica 3.2.3/StateGraph.mo",1930,5,1930,69,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nOn.nOut >= 0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp39 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 167
type: ALGORITHM

  assert(On.nIn >= 0, "Variable violating min constraint: 0 <= On.nIn, has value: " + String(On.nIn, "d"));
*/
OMC_DISABLE_OPT
static void TrainSimulation_TrainLight_eqFunction_167(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,167};
  modelica_boolean tmp40;
  static const MMC_DEFSTRINGLIT(tmp41,59,"Variable violating min constraint: 0 <= On.nIn, has value: ");
  modelica_string tmp42;
  static int tmp43 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp43)
  {
    tmp40 = GreaterEq(data->simulationInfo->integerParameter[2] /* On.nIn PARAM */,((modelica_integer) 0));
    if(!tmp40)
    {
      tmp42 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[2] /* On.nIn PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp41),tmp42);
      {
        FILE_INFO info = {"E:/Modelica/lib/omlibrary/Modelica 3.2.3/StateGraph.mo",1929,5,1929,67,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nOn.nIn >= 0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp43 = 1;
    }
  }
  TRACE_POP
}
OMC_DISABLE_OPT
void TrainSimulation_TrainLight_updateBoundParameters_0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  TrainSimulation_TrainLight_eqFunction_121(data, threadData);
  TrainSimulation_TrainLight_eqFunction_122(data, threadData);
  TrainSimulation_TrainLight_eqFunction_123(data, threadData);
  TrainSimulation_TrainLight_eqFunction_124(data, threadData);
  TrainSimulation_TrainLight_eqFunction_125(data, threadData);
  TrainSimulation_TrainLight_eqFunction_126(data, threadData);
  TrainSimulation_TrainLight_eqFunction_127(data, threadData);
  TrainSimulation_TrainLight_eqFunction_18(data, threadData);
  TrainSimulation_TrainLight_eqFunction_17(data, threadData);
  TrainSimulation_TrainLight_eqFunction_16(data, threadData);
  TrainSimulation_TrainLight_eqFunction_15(data, threadData);
  TrainSimulation_TrainLight_eqFunction_14(data, threadData);
  TrainSimulation_TrainLight_eqFunction_13(data, threadData);
  TrainSimulation_TrainLight_eqFunction_12(data, threadData);
  TrainSimulation_TrainLight_eqFunction_11(data, threadData);
  TrainSimulation_TrainLight_eqFunction_10(data, threadData);
  TrainSimulation_TrainLight_eqFunction_9(data, threadData);
  TrainSimulation_TrainLight_eqFunction_8(data, threadData);
  TrainSimulation_TrainLight_eqFunction_7(data, threadData);
  TrainSimulation_TrainLight_eqFunction_6(data, threadData);
  TrainSimulation_TrainLight_eqFunction_5(data, threadData);
  TrainSimulation_TrainLight_eqFunction_4(data, threadData);
  TrainSimulation_TrainLight_eqFunction_3(data, threadData);
  TrainSimulation_TrainLight_eqFunction_2(data, threadData);
  TrainSimulation_TrainLight_eqFunction_1(data, threadData);
  TrainSimulation_TrainLight_eqFunction_157(data, threadData);
  TrainSimulation_TrainLight_eqFunction_158(data, threadData);
  TrainSimulation_TrainLight_eqFunction_159(data, threadData);
  TrainSimulation_TrainLight_eqFunction_160(data, threadData);
  TrainSimulation_TrainLight_eqFunction_161(data, threadData);
  TrainSimulation_TrainLight_eqFunction_162(data, threadData);
  TrainSimulation_TrainLight_eqFunction_163(data, threadData);
  TrainSimulation_TrainLight_eqFunction_164(data, threadData);
  TrainSimulation_TrainLight_eqFunction_165(data, threadData);
  TrainSimulation_TrainLight_eqFunction_166(data, threadData);
  TrainSimulation_TrainLight_eqFunction_167(data, threadData);
  TRACE_POP
}
OMC_DISABLE_OPT
int TrainSimulation_TrainLight_updateBoundParameters(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  data->simulationInfo->integerParameter[0] /* Off.nIn PARAM */ = ((modelica_integer) 2);
  data->modelData->integerParameterData[0].time_unvarying = 1;
  data->simulationInfo->integerParameter[1] /* Off.nOut PARAM */ = ((modelica_integer) 1);
  data->modelData->integerParameterData[1].time_unvarying = 1;
  data->simulationInfo->integerParameter[2] /* On.nIn PARAM */ = ((modelica_integer) 2);
  data->modelData->integerParameterData[2].time_unvarying = 1;
  data->simulationInfo->integerParameter[3] /* On.nOut PARAM */ = ((modelica_integer) 2);
  data->modelData->integerParameterData[3].time_unvarying = 1;
  data->simulationInfo->integerParameter[4] /* Red.nIn PARAM */ = ((modelica_integer) 1);
  data->modelData->integerParameterData[4].time_unvarying = 1;
  data->simulationInfo->integerParameter[5] /* Red.nOut PARAM */ = ((modelica_integer) 2);
  data->modelData->integerParameterData[5].time_unvarying = 1;
  data->simulationInfo->booleanParameter[2] /* OffToOn.enableTimer PARAM */ = 0;
  data->modelData->booleanParameterData[2].time_unvarying = 1;
  data->simulationInfo->booleanParameter[5] /* OnToOff.enableTimer PARAM */ = 0;
  data->modelData->booleanParameterData[5].time_unvarying = 1;
  data->simulationInfo->booleanParameter[7] /* OnToRed.enableTimer PARAM */ = 0;
  data->modelData->booleanParameterData[7].time_unvarying = 1;
  data->simulationInfo->booleanParameter[9] /* RedToOff.enableTimer PARAM */ = 0;
  data->modelData->booleanParameterData[9].time_unvarying = 1;
  data->simulationInfo->booleanParameter[11] /* RedToOn.enableTimer PARAM */ = 0;
  data->modelData->booleanParameterData[11].time_unvarying = 1;
  TrainSimulation_TrainLight_updateBoundParameters_0(data, threadData);
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

