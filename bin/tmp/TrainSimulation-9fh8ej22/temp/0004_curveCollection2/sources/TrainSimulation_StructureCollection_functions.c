#include "omc_simulation_settings.h"
#include "TrainSimulation_StructureCollection_functions.h"
#ifdef __cplusplus
extern "C" {
#endif

#include "TrainSimulation_StructureCollection_includes.h"


DLLExport
modelica_integer omc_TrainSimulation_StructureCollection_Active(threadData_t *threadData, modelica_integer _size, real_array _Array)
{
  modelica_integer _Activatedout;
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  _tailrecursive: OMC_LABEL_UNUSED
  // _Activatedout has no default value.
  tmp1 = ((modelica_integer) 1); tmp2 = 1; tmp3 = _size;
  if(!(((tmp2 > 0) && (tmp1 > tmp3)) || ((tmp2 < 0) && (tmp1 < tmp3))))
  {
    modelica_integer _i;
    for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp1, tmp3); _i += tmp2)
    {
      if(((*real_array_element_addr1(&_Array, 1, _i)) > 0.5))
      {
        _Activatedout = _i;
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return _Activatedout;
}
modelica_metatype boxptr_TrainSimulation_StructureCollection_Active(threadData_t *threadData, modelica_metatype _size, modelica_metatype _Array)
{
  modelica_integer tmp1;
  modelica_integer _Activatedout;
  modelica_metatype out_Activatedout;
  tmp1 = mmc_unbox_integer(_size);
  _Activatedout = omc_TrainSimulation_StructureCollection_Active(threadData, tmp1, *((base_array_t*)_Array));
  out_Activatedout = mmc_mk_icon(_Activatedout);
  return out_Activatedout;
}

#ifdef __cplusplus
}
#endif
