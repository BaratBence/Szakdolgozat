#ifndef TrainSimulation_Curve__H
#define TrainSimulation_Curve__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#include "simulation/simulation_runtime.h"
#ifdef __cplusplus
extern "C" {
#endif


DLLExport
modelica_real omc_TrainSimulation_Curve_TrainOnTrack(threadData_t *threadData, modelica_integer _size, modelica_integer _pos, real_array _TrainDistance, real_array _TrainLength);
DLLExport
modelica_metatype boxptr_TrainSimulation_Curve_TrainOnTrack(threadData_t *threadData, modelica_metatype _size, modelica_metatype _pos, modelica_metatype _TrainDistance, modelica_metatype _TrainLength);
static const MMC_DEFSTRUCTLIT(boxvar_lit_TrainSimulation_Curve_TrainOnTrack,2,0) {(void*) boxptr_TrainSimulation_Curve_TrainOnTrack,0}};
#define boxvar_TrainSimulation_Curve_TrainOnTrack MMC_REFSTRUCTLIT(boxvar_lit_TrainSimulation_Curve_TrainOnTrack)
#include "TrainSimulation_Curve_model.h"


#ifdef __cplusplus
}
#endif
#endif

