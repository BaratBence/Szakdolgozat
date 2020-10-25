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
real_array omc_TrainSimulation_Curve_SpeedCalculations(threadData_t *threadData, modelica_integer _size, modelica_real _value);
DLLExport
modelica_metatype boxptr_TrainSimulation_Curve_SpeedCalculations(threadData_t *threadData, modelica_metatype _size, modelica_metatype _value);
static const MMC_DEFSTRUCTLIT(boxvar_lit_TrainSimulation_Curve_SpeedCalculations,2,0) {(void*) boxptr_TrainSimulation_Curve_SpeedCalculations,0}};
#define boxvar_TrainSimulation_Curve_SpeedCalculations MMC_REFSTRUCTLIT(boxvar_lit_TrainSimulation_Curve_SpeedCalculations)
#include "TrainSimulation_Curve_model.h"


#ifdef __cplusplus
}
#endif
#endif

