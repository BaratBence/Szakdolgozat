#ifndef TrainSimulation_UpHill__H
#define TrainSimulation_UpHill__H
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
real_array omc_TrainSimulation_UpHill_OnTrack(threadData_t *threadData, modelica_integer _size, real_array _TrainDistance, real_array _TrainLength);
DLLExport
modelica_metatype boxptr_TrainSimulation_UpHill_OnTrack(threadData_t *threadData, modelica_metatype _size, modelica_metatype _TrainDistance, modelica_metatype _TrainLength);
static const MMC_DEFSTRUCTLIT(boxvar_lit_TrainSimulation_UpHill_OnTrack,2,0) {(void*) boxptr_TrainSimulation_UpHill_OnTrack,0}};
#define boxvar_TrainSimulation_UpHill_OnTrack MMC_REFSTRUCTLIT(boxvar_lit_TrainSimulation_UpHill_OnTrack)


DLLExport
real_array omc_TrainSimulation_UpHill_SpeedCalculations(threadData_t *threadData, modelica_integer _size, modelica_real _value);
DLLExport
modelica_metatype boxptr_TrainSimulation_UpHill_SpeedCalculations(threadData_t *threadData, modelica_metatype _size, modelica_metatype _value);
static const MMC_DEFSTRUCTLIT(boxvar_lit_TrainSimulation_UpHill_SpeedCalculations,2,0) {(void*) boxptr_TrainSimulation_UpHill_SpeedCalculations,0}};
#define boxvar_TrainSimulation_UpHill_SpeedCalculations MMC_REFSTRUCTLIT(boxvar_lit_TrainSimulation_UpHill_SpeedCalculations)
#include "TrainSimulation_UpHill_model.h"


#ifdef __cplusplus
}
#endif
#endif

