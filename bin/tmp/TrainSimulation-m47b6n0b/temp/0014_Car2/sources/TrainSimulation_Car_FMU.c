// define class name and unique id
#define MODEL_IDENTIFIER TrainSimulation_Car
#define MODEL_GUID "{7da837f4-6098-49ac-89fb-17d76d03c40b}"

// include fmu header files, typedefs and macros
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include "openmodelica.h"
#include "openmodelica_func.h"
#include "simulation_data.h"
#include "util/omc_error.h"
#include "TrainSimulation_Car_functions.h"
#include "simulation/solver/initialization/initialization.h"
#include "simulation/solver/events.h"
#include "fmi-export/fmu2_model_interface.h"

#ifdef __cplusplus
extern "C" {
#endif

void setStartValues(ModelInstance *comp);
void setDefaultStartValues(ModelInstance *comp);
void eventUpdate(ModelInstance* comp, fmi2EventInfo* eventInfo);
fmi2Real getReal(ModelInstance* comp, const fmi2ValueReference vr);
fmi2Status setReal(ModelInstance* comp, const fmi2ValueReference vr, const fmi2Real value);
fmi2Integer getInteger(ModelInstance* comp, const fmi2ValueReference vr);
fmi2Status setInteger(ModelInstance* comp, const fmi2ValueReference vr, const fmi2Integer value);
fmi2Boolean getBoolean(ModelInstance* comp, const fmi2ValueReference vr);
fmi2Status setBoolean(ModelInstance* comp, const fmi2ValueReference vr, const fmi2Boolean value);
fmi2String getString(ModelInstance* comp, const fmi2ValueReference vr);
fmi2Status setString(ModelInstance* comp, const fmi2ValueReference vr, fmi2String value);
fmi2Status setExternalFunction(ModelInstance* c, const fmi2ValueReference vr, const void* value);
fmi2ValueReference mapInputReference2InputNumber(const fmi2ValueReference vr);
fmi2ValueReference mapOutputReference2OutputNumber(const fmi2ValueReference vr);

// define model size
#define NUMBER_OF_STATES 3
#define NUMBER_OF_EVENT_INDICATORS 5
#define NUMBER_OF_REALS 19
#define NUMBER_OF_INTEGERS 2
#define NUMBER_OF_STRINGS 0
#define NUMBER_OF_BOOLEANS 5
#define NUMBER_OF_EXTERNALFUNCTIONS 0

// define initial state vector as vector of value references
#define STATES { 0, 1, 2 }
#define STATESDERIVATIVES { 3, 4, 5 }


// implementation of the Model Exchange functions
extern void TrainSimulation_Car_setupDataStruc(DATA *data, threadData_t *threadData);
#define fmu2_model_interface_setupDataStruc TrainSimulation_Car_setupDataStruc
#include "fmi-export/fmu2_model_interface.c.inc"

// Set values for all variables that define a start value
OMC_DISABLE_OPT
void setDefaultStartValues(ModelInstance *comp) {
  comp->fmuData->modelData->realVarsData[0].attribute.start = 0.0;
  comp->fmuData->modelData->realVarsData[1].attribute.start = 0;
  comp->fmuData->modelData->realVarsData[2].attribute.start = 0;
  comp->fmuData->modelData->realVarsData[3].attribute.start = 0;
  comp->fmuData->modelData->realVarsData[4].attribute.start = 0;
  comp->fmuData->modelData->realVarsData[5].attribute.start = 0;
  comp->fmuData->modelData->realVarsData[6].attribute.start = 0;
  comp->fmuData->modelData->realVarsData[7].attribute.start = 0;
  comp->fmuData->modelData->realVarsData[8].attribute.start = 0.0;
  comp->fmuData->modelData->realVarsData[9].attribute.start = 0;
  comp->fmuData->modelData->realVarsData[10].attribute.start = 0.0;
  comp->fmuData->modelData->integerVarsData[0].attribute.start = 0;
  comp->fmuData->modelData->integerVarsData[1].attribute.start = 0;
  comp->fmuData->modelData->booleanVarsData[0].attribute.start = 0;
  comp->fmuData->modelData->booleanVarsData[1].attribute.start = 0;
  comp->fmuData->modelData->booleanVarsData[2].attribute.start = 0;
  comp->fmuData->modelData->booleanVarsData[3].attribute.start = 0;
  comp->fmuData->modelData->booleanVarsData[4].attribute.start = 0;
  comp->fmuData->modelData->realParameterData[0].attribute.start = 0;
  comp->fmuData->modelData->realParameterData[1].attribute.start = 13.14;
  comp->fmuData->modelData->realParameterData[2].attribute.start = 0.0;
  comp->fmuData->modelData->realParameterData[3].attribute.start = 0.0;
  comp->fmuData->modelData->realParameterData[4].attribute.start = 4.74;
  comp->fmuData->modelData->realParameterData[5].attribute.start = 8.76;
  comp->fmuData->modelData->realParameterData[6].attribute.start = 16.7;
}
// Set values for all variables that define a start value
OMC_DISABLE_OPT
void setStartValues(ModelInstance *comp) {
  comp->fmuData->modelData->realVarsData[0].attribute.start =  comp->fmuData->localData[0]->realVars[0];
  comp->fmuData->modelData->realVarsData[1].attribute.start =  comp->fmuData->localData[0]->realVars[1];
  comp->fmuData->modelData->realVarsData[2].attribute.start =  comp->fmuData->localData[0]->realVars[2];
  comp->fmuData->modelData->realVarsData[3].attribute.start =  comp->fmuData->localData[0]->realVars[3];
  comp->fmuData->modelData->realVarsData[4].attribute.start =  comp->fmuData->localData[0]->realVars[4];
  comp->fmuData->modelData->realVarsData[5].attribute.start =  comp->fmuData->localData[0]->realVars[5];
  comp->fmuData->modelData->realVarsData[6].attribute.start =  comp->fmuData->localData[0]->realVars[6];
  comp->fmuData->modelData->realVarsData[7].attribute.start =  comp->fmuData->localData[0]->realVars[7];
  comp->fmuData->modelData->realVarsData[8].attribute.start =  comp->fmuData->localData[0]->realVars[8];
  comp->fmuData->modelData->realVarsData[9].attribute.start =  comp->fmuData->localData[0]->realVars[9];
  comp->fmuData->modelData->realVarsData[10].attribute.start =  comp->fmuData->localData[0]->realVars[10];
  comp->fmuData->modelData->integerVarsData[0].attribute.start =  comp->fmuData->localData[0]->integerVars[0];
  comp->fmuData->modelData->integerVarsData[1].attribute.start =  comp->fmuData->localData[0]->integerVars[1];
  comp->fmuData->modelData->booleanVarsData[0].attribute.start =  comp->fmuData->localData[0]->booleanVars[0];
  comp->fmuData->modelData->booleanVarsData[1].attribute.start =  comp->fmuData->localData[0]->booleanVars[1];
  comp->fmuData->modelData->booleanVarsData[2].attribute.start =  comp->fmuData->localData[0]->booleanVars[2];
  comp->fmuData->modelData->booleanVarsData[3].attribute.start =  comp->fmuData->localData[0]->booleanVars[3];
  comp->fmuData->modelData->booleanVarsData[4].attribute.start =  comp->fmuData->localData[0]->booleanVars[4];
  comp->fmuData->modelData->realParameterData[0].attribute.start = comp->fmuData->simulationInfo->realParameter[0];
  comp->fmuData->modelData->realParameterData[1].attribute.start = comp->fmuData->simulationInfo->realParameter[1];
  comp->fmuData->modelData->realParameterData[2].attribute.start = comp->fmuData->simulationInfo->realParameter[2];
  comp->fmuData->modelData->realParameterData[3].attribute.start = comp->fmuData->simulationInfo->realParameter[3];
  comp->fmuData->modelData->realParameterData[4].attribute.start = comp->fmuData->simulationInfo->realParameter[4];
  comp->fmuData->modelData->realParameterData[5].attribute.start = comp->fmuData->simulationInfo->realParameter[5];
  comp->fmuData->modelData->realParameterData[6].attribute.start = comp->fmuData->simulationInfo->realParameter[6];
}

// Used to set the next time event, if any.
void eventUpdate(ModelInstance* comp, fmi2EventInfo* eventInfo) {
}

static const int realAliasIndexes[1] = {
  1
};

fmi2Real getReal(ModelInstance* comp, const fmi2ValueReference vr) {
  if (vr < 11) {
    return comp->fmuData->localData[0]->realVars[vr];
  }
  if (vr < 18) {
    return comp->fmuData->simulationInfo->realParameter[vr-11];
  }
  if (vr < 19) {
    int ix = realAliasIndexes[vr-18];
    return ix>=0 ? getReal(comp, ix) : -getReal(comp, -(ix+1));
  }
  return NAN;
}

fmi2Status setReal(ModelInstance* comp, const fmi2ValueReference vr, const fmi2Real value) {
  if (vr < 11) {
    comp->fmuData->localData[0]->realVars[vr] = value;
    return fmi2OK;
  }
  if (vr < 18) {
    comp->fmuData->simulationInfo->realParameter[vr-11] = value;
    return fmi2OK;
  }
  if (vr < 19) {
    int ix = realAliasIndexes[vr-18];
    return ix >= 0 ? setReal(comp, ix, value) : setReal(comp, -(ix+1), -value);
  }
  return fmi2Error;
}

fmi2Integer getInteger(ModelInstance* comp, const fmi2ValueReference vr) {
  if (vr < 2) {
    return comp->fmuData->localData[0]->integerVars[vr];
  }
  if (vr < 2) {
    return comp->fmuData->simulationInfo->integerParameter[vr-2];
  }
  return 0;
}

fmi2Status setInteger(ModelInstance* comp, const fmi2ValueReference vr, const fmi2Integer value) {
  if (vr < 2) {
    comp->fmuData->localData[0]->integerVars[vr] = value;
    return fmi2OK;
  }
  if (vr < 2) {
    comp->fmuData->simulationInfo->integerParameter[vr-2] = value;
    return fmi2OK;
  }
  return fmi2Error;
}
fmi2Boolean getBoolean(ModelInstance* comp, const fmi2ValueReference vr) {
  switch (vr) {
    case 0 : return comp->fmuData->localData[0]->booleanVars[0]; break;
    case 1 : return comp->fmuData->localData[0]->booleanVars[1]; break;
    case 2 : return comp->fmuData->localData[0]->booleanVars[2]; break;
    case 3 : return comp->fmuData->localData[0]->booleanVars[3]; break;
    case 4 : return comp->fmuData->localData[0]->booleanVars[4]; break;
    default:
      return fmi2False;
  }
}

fmi2Status setBoolean(ModelInstance* comp, const fmi2ValueReference vr, const fmi2Boolean value) {
  switch (vr) {
    case 0 : comp->fmuData->localData[0]->booleanVars[0] = value; break;
    case 1 : comp->fmuData->localData[0]->booleanVars[1] = value; break;
    case 2 : comp->fmuData->localData[0]->booleanVars[2] = value; break;
    case 3 : comp->fmuData->localData[0]->booleanVars[3] = value; break;
    case 4 : comp->fmuData->localData[0]->booleanVars[4] = value; break;
    default:
      return fmi2Error;
  }
  return fmi2OK;
}

fmi2String getString(ModelInstance* comp, const fmi2ValueReference vr) {
  switch (vr) {
    default:
      return "";
  }
}

fmi2Status setString(ModelInstance* comp, const fmi2ValueReference vr, fmi2String value) {
  switch (vr) {
    default:
      return fmi2Error;
  }
  return fmi2OK;
}

fmi2Status setExternalFunction(ModelInstance* c, const fmi2ValueReference vr, const void* value){
  switch (vr) {
    default:
      return fmi2Error;
  }
  return fmi2OK;
}

/* function maps input references to a input index used in partialDerivatives */
fmi2ValueReference mapInputReference2InputNumber(const fmi2ValueReference vr) {
    switch (vr) {
      case 8: return 0; break;
      case 10: return 1; break;
      default:
        return -1;
    }
}
/* function maps output references to a input index used in partialDerivatives */
fmi2ValueReference mapOutputReference2OutputNumber(const fmi2ValueReference vr) {
    switch (vr) {
      case 7: return 0; break;
      case 9: return 1; break;
      default:
        return -1;
    }
}

#ifdef __cplusplus
}
#endif

