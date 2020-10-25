#ifndef TrainSimulation_StructureCollection__H
#define TrainSimulation_StructureCollection__H
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
modelica_integer omc_TrainSimulation_StructureCollection_Active(threadData_t *threadData, modelica_integer _size, real_array _Array);
DLLExport
modelica_metatype boxptr_TrainSimulation_StructureCollection_Active(threadData_t *threadData, modelica_metatype _size, modelica_metatype _Array);
static const MMC_DEFSTRUCTLIT(boxvar_lit_TrainSimulation_StructureCollection_Active,2,0) {(void*) boxptr_TrainSimulation_StructureCollection_Active,0}};
#define boxvar_TrainSimulation_StructureCollection_Active MMC_REFSTRUCTLIT(boxvar_lit_TrainSimulation_StructureCollection_Active)
#include "TrainSimulation_StructureCollection_model.h"


#ifdef __cplusplus
}
#endif
#endif

