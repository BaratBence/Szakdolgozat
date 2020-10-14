#ifdef OMC_BASE_FILE
  #define OMC_FILE OMC_BASE_FILE
#else
  #define OMC_FILE "C:/Users/Bence/AppData/Local/Temp/OpenModelica/OMEdit/TrainSimulation.Curve/TrainSimulation.Curve_functions.c"
#endif
#include "omc_simulation_settings.h"
#include "TrainSimulation.Curve_functions.h"
#ifdef __cplusplus
extern "C" {
#endif

#include "TrainSimulation.Curve_includes.h"


DLLExport
real_array omc_TrainSimulation_Curve_OnTrack(threadData_t *threadData, modelica_integer _size, real_array _TrainDistance, real_array _TrainLength)
{
  real_array _Active;
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  _tailrecursive: OMC_LABEL_UNUSED
  alloc_real_array(&(_Active), 1, _size); // _Active has no default value.
#line 29 "E:/Szakdoga/TrainSimulation.mo"
  tmp1 = ((modelica_integer) 1); tmp2 = 1; tmp3 = _size;
#line 29 "E:/Szakdoga/TrainSimulation.mo"
  if(!(((tmp2 > 0) && (tmp1 > tmp3)) || ((tmp2 < 0) && (tmp1 < tmp3))))
#line 29 "E:/Szakdoga/TrainSimulation.mo"
  {
#line 29 "E:/Szakdoga/TrainSimulation.mo"
    modelica_integer _i;
#line 29 "E:/Szakdoga/TrainSimulation.mo"
    for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp1, tmp3); _i += tmp2)
#line 29 "E:/Szakdoga/TrainSimulation.mo"
    {
#line 30 "E:/Szakdoga/TrainSimulation.mo"
      if((((*real_array_element_addr1(&_TrainDistance, 1, _i)) >= 40.0) && ((*real_array_element_addr1(&_TrainDistance, 1, _i)) <= 50.0 + (*real_array_element_addr1(&_TrainLength, 1, _i)))))
#line 30 "E:/Szakdoga/TrainSimulation.mo"
      {
#line 30 "E:/Szakdoga/TrainSimulation.mo"
        real_array_get(_Active, 1, _i) = 1.0;
#line 42 OMC_FILE
      }
      else
      {
#line 31 "E:/Szakdoga/TrainSimulation.mo"
        real_array_get(_Active, 1, _i) = 0.0;
#line 48 OMC_FILE
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return _Active;
}
modelica_metatype boxptr_TrainSimulation_Curve_OnTrack(threadData_t *threadData, modelica_metatype _size, modelica_metatype _TrainDistance, modelica_metatype _TrainLength)
{
  modelica_integer tmp1;
  real_array _Active;
  modelica_metatype out_Active;
  tmp1 = mmc_unbox_integer(_size);
  _Active = omc_TrainSimulation_Curve_OnTrack(threadData, tmp1, *((base_array_t*)_TrainDistance), *((base_array_t*)_TrainLength));
  out_Active = mmc_mk_modelica_array(_Active);
  return out_Active;
}

DLLExport
real_array omc_TrainSimulation_Curve_SpeedCalculations(threadData_t *threadData, modelica_integer _size, modelica_real _value)
{
  real_array _curvespeed;
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  _tailrecursive: OMC_LABEL_UNUSED
  alloc_real_array(&(_curvespeed), 1, _size); // _curvespeed has no default value.
#line 41 "E:/Szakdoga/TrainSimulation.mo"
  tmp1 = ((modelica_integer) 1); tmp2 = 1; tmp3 = _size;
#line 41 "E:/Szakdoga/TrainSimulation.mo"
  if(!(((tmp2 > 0) && (tmp1 > tmp3)) || ((tmp2 < 0) && (tmp1 < tmp3))))
#line 41 "E:/Szakdoga/TrainSimulation.mo"
  {
#line 41 "E:/Szakdoga/TrainSimulation.mo"
    modelica_integer _i;
#line 41 "E:/Szakdoga/TrainSimulation.mo"
    for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp1, tmp3); _i += tmp2)
#line 41 "E:/Szakdoga/TrainSimulation.mo"
    {
#line 42 "E:/Szakdoga/TrainSimulation.mo"
      real_array_get(_curvespeed, 1, _i) = _value;
#line 89 OMC_FILE
    }
  }
  _return: OMC_LABEL_UNUSED
  return _curvespeed;
}
modelica_metatype boxptr_TrainSimulation_Curve_SpeedCalculations(threadData_t *threadData, modelica_metatype _size, modelica_metatype _value)
{
  modelica_integer tmp1;
  modelica_real tmp2;
  real_array _curvespeed;
  modelica_metatype out_curvespeed;
  tmp1 = mmc_unbox_integer(_size);
  tmp2 = mmc_unbox_real(_value);
  _curvespeed = omc_TrainSimulation_Curve_SpeedCalculations(threadData, tmp1, tmp2);
  out_curvespeed = mmc_mk_modelica_array(_curvespeed);
  return out_curvespeed;
}

#ifdef __cplusplus
}
#endif
