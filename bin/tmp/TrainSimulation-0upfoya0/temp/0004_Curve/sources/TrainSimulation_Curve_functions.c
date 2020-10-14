#include "omc_simulation_settings.h"
#include "TrainSimulation_Curve_functions.h"
#ifdef __cplusplus
extern "C" {
#endif

#include "TrainSimulation_Curve_includes.h"


DLLExport
modelica_real omc_TrainSimulation_Curve_TrainOnTrack(threadData_t *threadData, modelica_integer _size, modelica_integer _pos, real_array _TrainDistance, real_array _TrainLength)
{
  modelica_real _Active;
  _tailrecursive: OMC_LABEL_UNUSED
  // _Active has no default value.
  _Active = ((((*real_array_element_addr1(&_TrainDistance, 1, _pos)) >= 40.0) && ((*real_array_element_addr1(&_TrainDistance, 1, _pos)) <= 50.0 + (*real_array_element_addr1(&_TrainLength, 1, _pos))))?1.0:0.0);
  _return: OMC_LABEL_UNUSED
  return _Active;
}
modelica_metatype boxptr_TrainSimulation_Curve_TrainOnTrack(threadData_t *threadData, modelica_metatype _size, modelica_metatype _pos, modelica_metatype _TrainDistance, modelica_metatype _TrainLength)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_real _Active;
  modelica_metatype out_Active;
  tmp1 = mmc_unbox_integer(_size);
  tmp2 = mmc_unbox_integer(_pos);
  _Active = omc_TrainSimulation_Curve_TrainOnTrack(threadData, tmp1, tmp2, *((base_array_t*)_TrainDistance), *((base_array_t*)_TrainLength));
  out_Active = mmc_mk_rcon(_Active);
  return out_Active;
}

#ifdef __cplusplus
}
#endif
