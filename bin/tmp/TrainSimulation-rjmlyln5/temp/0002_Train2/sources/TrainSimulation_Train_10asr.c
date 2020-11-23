/* Asserts */
#include "TrainSimulation_Train_model.h"
#if defined(__cplusplus)
extern "C" {
#endif


/*
equation index: 73
type: ALGORITHM

  assert(state >= TrainSimulation.StationSignal.green and state <= TrainSimulation.StationSignal.red, "Variable violating min/max constraint: TrainSimulation.StationSignal.green <= state <= TrainSimulation.StationSignal.red, has value: " + String(state, "d"));
*/
void TrainSimulation_Train_eqFunction_73(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,73};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  static const MMC_DEFSTRINGLIT(tmp2,133,"Variable violating min/max constraint: TrainSimulation.StationSignal.green <= state <= TrainSimulation.StationSignal.red, has value: ");
  modelica_string tmp3;
  static int tmp4 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp4)
  {
    tmp0 = GreaterEq(data->localData[0]->integerVars[2] /* state DISCRETE */,1);
    tmp1 = LessEq(data->localData[0]->integerVars[2] /* state DISCRETE */,2);
    if(!(tmp0 && tmp1))
    {
      tmp3 = modelica_integer_to_modelica_string_format(data->localData[0]->integerVars[2] /* state DISCRETE */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp2),tmp3);
      {
        FILE_INFO info = {"E:/Szakdoga/TrainSimulation.mo",65,5,65,24,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nstate >= TrainSimulation.StationSignal.green and state <= TrainSimulation.StationSignal.red", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp4 = 1;
    }
  }
  TRACE_POP
}
/* function to check assert after a step is done */
OMC_DISABLE_OPT
int TrainSimulation_Train_checkForAsserts(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  TrainSimulation_Train_eqFunction_73(data, threadData);
  
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

