#include "omc_simulation_settings.h"
#include "TrainSimulation_UpHill_functions.h"
#ifdef __cplusplus
extern "C" {
#endif

#include "TrainSimulation_UpHill_includes.h"


DLLExport
real_array omc_TrainSimulation_UpHill_OnTrack(threadData_t *threadData, modelica_integer _size, real_array _TrainDistance, real_array _TrainLength)
{
  real_array _Active;
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  _tailrecursive: OMC_LABEL_UNUSED
  alloc_real_array(&(_Active), 1, _size); // _Active has no default value.
  tmp1 = ((modelica_integer) 1); tmp2 = 1; tmp3 = _size;
  if(!(((tmp2 > 0) && (tmp1 > tmp3)) || ((tmp2 < 0) && (tmp1 < tmp3))))
  {
    modelica_integer _i;
    for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp1, tmp3); _i += tmp2)
    {
      if((((*real_array_element_addr1(&_TrainDistance, 1, _i)) >= 40.0) && ((*real_array_element_addr1(&_TrainDistance, 1, _i)) <= 50.0 + (*real_array_element_addr1(&_TrainLength, 1, _i)))))
      {
        real_array_get(_Active, 1, _i) = 1.0;
      }
      else
      {
        real_array_get(_Active, 1, _i) = 0.0;
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return _Active;
}
modelica_metatype boxptr_TrainSimulation_UpHill_OnTrack(threadData_t *threadData, modelica_metatype _size, modelica_metatype _TrainDistance, modelica_metatype _TrainLength)
{
  modelica_integer tmp1;
  real_array _Active;
  modelica_metatype out_Active;
  tmp1 = mmc_unbox_integer(_size);
  _Active = omc_TrainSimulation_UpHill_OnTrack(threadData, tmp1, *((base_array_t*)_TrainDistance), *((base_array_t*)_TrainLength));
  out_Active = mmc_mk_modelica_array(_Active);
  return out_Active;
}

DLLExport
real_array omc_TrainSimulation_UpHill_SpeedCalculations(threadData_t *threadData, modelica_integer _size, modelica_real _value)
{
  real_array _hillacc;
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  _tailrecursive: OMC_LABEL_UNUSED
  alloc_real_array(&(_hillacc), 1, _size); // _hillacc has no default value.
  tmp1 = ((modelica_integer) 1); tmp2 = 1; tmp3 = _size;
  if(!(((tmp2 > 0) && (tmp1 > tmp3)) || ((tmp2 < 0) && (tmp1 < tmp3))))
  {
    modelica_integer _i;
    for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp1, tmp3); _i += tmp2)
    {
      real_array_get(_hillacc, 1, _i) = _value;
    }
  }
  _return: OMC_LABEL_UNUSED
  return _hillacc;
}
modelica_metatype boxptr_TrainSimulation_UpHill_SpeedCalculations(threadData_t *threadData, modelica_metatype _size, modelica_metatype _value)
{
  modelica_integer tmp1;
  modelica_real tmp2;
  real_array _hillacc;
  modelica_metatype out_hillacc;
  tmp1 = mmc_unbox_integer(_size);
  tmp2 = mmc_unbox_real(_value);
  _hillacc = omc_TrainSimulation_UpHill_SpeedCalculations(threadData, tmp1, tmp2);
  out_hillacc = mmc_mk_modelica_array(_hillacc);
  return out_hillacc;
}

#ifdef __cplusplus
}
#endif
