#ifndef TrainSimulation_Sensor__H
#define TrainSimulation_Sensor__H
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
modelica_boolean omc_TrainSimulation_Sensor_Active(threadData_t *threadData, modelica_integer _size, boolean_array _Train_Detected);
DLLExport
modelica_metatype boxptr_TrainSimulation_Sensor_Active(threadData_t *threadData, modelica_metatype _size, modelica_metatype _Train_Detected);
static const MMC_DEFSTRUCTLIT(boxvar_lit_TrainSimulation_Sensor_Active,2,0) {(void*) boxptr_TrainSimulation_Sensor_Active,0}};
#define boxvar_TrainSimulation_Sensor_Active MMC_REFSTRUCTLIT(boxvar_lit_TrainSimulation_Sensor_Active)
#include "TrainSimulation_Sensor_model.h"


#ifdef __cplusplus
}
#endif
#endif

