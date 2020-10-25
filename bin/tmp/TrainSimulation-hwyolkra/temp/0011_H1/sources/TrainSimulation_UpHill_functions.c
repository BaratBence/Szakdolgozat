#include "omc_simulation_settings.h"
#include "TrainSimulation_UpHill_functions.h"
#ifdef __cplusplus
extern "C" {
#endif

#include "TrainSimulation_UpHill_includes.h"


DLLExport
real_array omc_TrainSimulation_UpHill_SpeedCalculations(threadData_t *threadData, modelica_integer _size, modelica_real _value)
{
  real_array _HillSpeedScale;
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  _tailrecursive: OMC_LABEL_UNUSED
  alloc_real_array(&(_HillSpeedScale), 1, _size); // _HillSpeedScale has no default value.
  tmp1 = ((modelica_integer) 1); tmp2 = 1; tmp3 = _size;
  if(!(((tmp2 > 0) && (tmp1 > tmp3)) || ((tmp2 < 0) && (tmp1 < tmp3))))
  {
    modelica_integer _i;
    for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp1, tmp3); _i += tmp2)
    {
      real_array_get(_HillSpeedScale, 1, _i) = _value;
    }
  }
  _return: OMC_LABEL_UNUSED
  return _HillSpeedScale;
}
modelica_metatype boxptr_TrainSimulation_UpHill_SpeedCalculations(threadData_t *threadData, modelica_metatype _size, modelica_metatype _value)
{
  modelica_integer tmp1;
  modelica_real tmp2;
  real_array _HillSpeedScale;
  modelica_metatype out_HillSpeedScale;
  tmp1 = mmc_unbox_integer(_size);
  tmp2 = mmc_unbox_real(_value);
  _HillSpeedScale = omc_TrainSimulation_UpHill_SpeedCalculations(threadData, tmp1, tmp2);
  out_HillSpeedScale = mmc_mk_modelica_array(_HillSpeedScale);
  return out_HillSpeedScale;
}

#ifdef __cplusplus
}
#endif
