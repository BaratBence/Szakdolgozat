// define class name and unique id
#define MODEL_IDENTIFIER TrainSimulation_Train
#define MODEL_GUID "{c1ba5ed3-09e1-4b85-a2e5-4e37201fc420}"

// include fmu header files, typedefs and macros
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include "openmodelica.h"
#include "openmodelica_func.h"
#include "simulation_data.h"
#include "util/omc_error.h"
#include "TrainSimulation_Train_functions.h"
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
#define NUMBER_OF_STATES 4
#define NUMBER_OF_EVENT_INDICATORS 14
#define NUMBER_OF_REALS 23
#define NUMBER_OF_INTEGERS 4
#define NUMBER_OF_STRINGS 0
#define NUMBER_OF_BOOLEANS 20
#define NUMBER_OF_EXTERNALFUNCTIONS 0

// define initial state vector as vector of value references
#define STATES { 0, 1, 2, 3 }
#define STATESDERIVATIVES { 4, 5, 6, 7 }


// implementation of the Model Exchange functions
extern void TrainSimulation_Train_setupDataStruc(DATA *data, threadData_t *threadData);
#define fmu2_model_interface_setupDataStruc TrainSimulation_Train_setupDataStruc
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
  comp->fmuData->modelData->realVarsData[8].attribute.start = 0;
  comp->fmuData->modelData->realVarsData[9].attribute.start = 0;
  comp->fmuData->modelData->realVarsData[10].attribute.start = 0;
  comp->fmuData->modelData->realVarsData[11].attribute.start = 0.0;
  comp->fmuData->modelData->realVarsData[12].attribute.start = 0.0;
  comp->fmuData->modelData->realVarsData[13].attribute.start = 0.0;
  comp->fmuData->modelData->realVarsData[14].attribute.start = 0.0;
  comp->fmuData->modelData->realVarsData[15].attribute.start = 0.0;
  comp->fmuData->modelData->integerVarsData[0].attribute.start = 0;
  comp->fmuData->modelData->integerVarsData[1].attribute.start = 0;
  comp->fmuData->modelData->integerVarsData[2].attribute.start = 0;
  comp->fmuData->modelData->booleanVarsData[0].attribute.start = 0;
  comp->fmuData->modelData->booleanVarsData[1].attribute.start = 0;
  comp->fmuData->modelData->booleanVarsData[2].attribute.start = 0;
  comp->fmuData->modelData->booleanVarsData[3].attribute.start = 0;
  comp->fmuData->modelData->booleanVarsData[4].attribute.start = 0;
  comp->fmuData->modelData->booleanVarsData[5].attribute.start = 0;
  comp->fmuData->modelData->booleanVarsData[6].attribute.start = 0;
  comp->fmuData->modelData->booleanVarsData[7].attribute.start = 0;
  comp->fmuData->modelData->booleanVarsData[8].attribute.start = 0;
  comp->fmuData->modelData->booleanVarsData[9].attribute.start = 0;
  comp->fmuData->modelData->booleanVarsData[10].attribute.start = 0;
  comp->fmuData->modelData->booleanVarsData[11].attribute.start = 0;
  comp->fmuData->modelData->booleanVarsData[12].attribute.start = 0;
  comp->fmuData->modelData->booleanVarsData[13].attribute.start = 0;
  comp->fmuData->modelData->booleanVarsData[14].attribute.start = 0;
  comp->fmuData->modelData->booleanVarsData[15].attribute.start = 0;
  comp->fmuData->modelData->booleanVarsData[16].attribute.start = 0;
  comp->fmuData->modelData->booleanVarsData[17].attribute.start = 0;
  comp->fmuData->modelData->booleanVarsData[18].attribute.start = 0;
  comp->fmuData->modelData->realParameterData[0].attribute.start = 0;
  comp->fmuData->modelData->realParameterData[1].attribute.start = 20.0;
  comp->fmuData->modelData->realParameterData[2].attribute.start = 0.0;
  comp->fmuData->modelData->realParameterData[3].attribute.start = 99999999.0;
  comp->fmuData->modelData->realParameterData[4].attribute.start = 20.0;
  comp->fmuData->modelData->realParameterData[5].attribute.start = 75.0;
  comp->fmuData->modelData->integerParameterData[0].attribute.start = 10;
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
  comp->fmuData->modelData->realVarsData[11].attribute.start =  comp->fmuData->localData[0]->realVars[11];
  comp->fmuData->modelData->realVarsData[12].attribute.start =  comp->fmuData->localData[0]->realVars[12];
  comp->fmuData->modelData->realVarsData[13].attribute.start =  comp->fmuData->localData[0]->realVars[13];
  comp->fmuData->modelData->realVarsData[14].attribute.start =  comp->fmuData->localData[0]->realVars[14];
  comp->fmuData->modelData->realVarsData[15].attribute.start =  comp->fmuData->localData[0]->realVars[15];
  comp->fmuData->modelData->integerVarsData[0].attribute.start =  comp->fmuData->localData[0]->integerVars[0];
  comp->fmuData->modelData->integerVarsData[1].attribute.start =  comp->fmuData->localData[0]->integerVars[1];
  comp->fmuData->modelData->integerVarsData[2].attribute.start =  comp->fmuData->localData[0]->integerVars[2];
  comp->fmuData->modelData->booleanVarsData[0].attribute.start =  comp->fmuData->localData[0]->booleanVars[0];
  comp->fmuData->modelData->booleanVarsData[1].attribute.start =  comp->fmuData->localData[0]->booleanVars[1];
  comp->fmuData->modelData->booleanVarsData[2].attribute.start =  comp->fmuData->localData[0]->booleanVars[2];
  comp->fmuData->modelData->booleanVarsData[3].attribute.start =  comp->fmuData->localData[0]->booleanVars[3];
  comp->fmuData->modelData->booleanVarsData[4].attribute.start =  comp->fmuData->localData[0]->booleanVars[4];
  comp->fmuData->modelData->booleanVarsData[5].attribute.start =  comp->fmuData->localData[0]->booleanVars[5];
  comp->fmuData->modelData->booleanVarsData[6].attribute.start =  comp->fmuData->localData[0]->booleanVars[6];
  comp->fmuData->modelData->booleanVarsData[7].attribute.start =  comp->fmuData->localData[0]->booleanVars[7];
  comp->fmuData->modelData->booleanVarsData[8].attribute.start =  comp->fmuData->localData[0]->booleanVars[8];
  comp->fmuData->modelData->booleanVarsData[9].attribute.start =  comp->fmuData->localData[0]->booleanVars[9];
  comp->fmuData->modelData->booleanVarsData[10].attribute.start =  comp->fmuData->localData[0]->booleanVars[10];
  comp->fmuData->modelData->booleanVarsData[11].attribute.start =  comp->fmuData->localData[0]->booleanVars[11];
  comp->fmuData->modelData->booleanVarsData[12].attribute.start =  comp->fmuData->localData[0]->booleanVars[12];
  comp->fmuData->modelData->booleanVarsData[13].attribute.start =  comp->fmuData->localData[0]->booleanVars[13];
  comp->fmuData->modelData->booleanVarsData[14].attribute.start =  comp->fmuData->localData[0]->booleanVars[14];
  comp->fmuData->modelData->booleanVarsData[15].attribute.start =  comp->fmuData->localData[0]->booleanVars[15];
  comp->fmuData->modelData->booleanVarsData[16].attribute.start =  comp->fmuData->localData[0]->booleanVars[16];
  comp->fmuData->modelData->booleanVarsData[17].attribute.start =  comp->fmuData->localData[0]->booleanVars[17];
  comp->fmuData->modelData->booleanVarsData[18].attribute.start =  comp->fmuData->localData[0]->booleanVars[18];
  comp->fmuData->modelData->realParameterData[0].attribute.start = comp->fmuData->simulationInfo->realParameter[0];
  comp->fmuData->modelData->realParameterData[1].attribute.start = comp->fmuData->simulationInfo->realParameter[1];
  comp->fmuData->modelData->realParameterData[2].attribute.start = comp->fmuData->simulationInfo->realParameter[2];
  comp->fmuData->modelData->realParameterData[3].attribute.start = comp->fmuData->simulationInfo->realParameter[3];
  comp->fmuData->modelData->realParameterData[4].attribute.start = comp->fmuData->simulationInfo->realParameter[4];
  comp->fmuData->modelData->realParameterData[5].attribute.start = comp->fmuData->simulationInfo->realParameter[5];
  comp->fmuData->modelData->integerParameterData[0].attribute.start = comp->fmuData->simulationInfo->integerParameter[0];
}

// Used to set the next time event, if any.
void eventUpdate(ModelInstance* comp, fmi2EventInfo* eventInfo) {
}

static const int realAliasIndexes[1] = {
  2
};

fmi2Real getReal(ModelInstance* comp, const fmi2ValueReference vr) {
  if (vr < 16) {
    return comp->fmuData->localData[0]->realVars[vr];
  }
  if (vr < 22) {
    return comp->fmuData->simulationInfo->realParameter[vr-16];
  }
  if (vr < 23) {
    int ix = realAliasIndexes[vr-22];
    return ix>=0 ? getReal(comp, ix) : -getReal(comp, -(ix+1));
  }
  return NAN;
}

fmi2Status setReal(ModelInstance* comp, const fmi2ValueReference vr, const fmi2Real value) {
  if (vr < 16) {
    comp->fmuData->localData[0]->realVars[vr] = value;
    return fmi2OK;
  }
  if (vr < 22) {
    comp->fmuData->simulationInfo->realParameter[vr-16] = value;
    return fmi2OK;
  }
  if (vr < 23) {
    int ix = realAliasIndexes[vr-22];
    return ix >= 0 ? setReal(comp, ix, value) : setReal(comp, -(ix+1), -value);
  }
  return fmi2Error;
}

fmi2Integer getInteger(ModelInstance* comp, const fmi2ValueReference vr) {
  if (vr < 3) {
    return comp->fmuData->localData[0]->integerVars[vr];
  }
  if (vr < 4) {
    return comp->fmuData->simulationInfo->integerParameter[vr-3];
  }
  return 0;
}

fmi2Status setInteger(ModelInstance* comp, const fmi2ValueReference vr, const fmi2Integer value) {
  if (vr < 3) {
    comp->fmuData->localData[0]->integerVars[vr] = value;
    return fmi2OK;
  }
  if (vr < 4) {
    comp->fmuData->simulationInfo->integerParameter[vr-3] = value;
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
    case 5 : return comp->fmuData->localData[0]->booleanVars[5]; break;
    case 6 : return comp->fmuData->localData[0]->booleanVars[6]; break;
    case 7 : return comp->fmuData->localData[0]->booleanVars[7]; break;
    case 8 : return comp->fmuData->localData[0]->booleanVars[8]; break;
    case 9 : return comp->fmuData->localData[0]->booleanVars[9]; break;
    case 10 : return comp->fmuData->localData[0]->booleanVars[10]; break;
    case 11 : return comp->fmuData->localData[0]->booleanVars[11]; break;
    case 12 : return comp->fmuData->localData[0]->booleanVars[12]; break;
    case 13 : return comp->fmuData->localData[0]->booleanVars[13]; break;
    case 14 : return comp->fmuData->localData[0]->booleanVars[14]; break;
    case 15 : return comp->fmuData->localData[0]->booleanVars[15]; break;
    case 16 : return comp->fmuData->localData[0]->booleanVars[16]; break;
    case 17 : return comp->fmuData->localData[0]->booleanVars[17]; break;
    case 18 : return comp->fmuData->localData[0]->booleanVars[18]; break;
    case 19 : return getBoolean(comp, 16); break;
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
    case 5 : comp->fmuData->localData[0]->booleanVars[5] = value; break;
    case 6 : comp->fmuData->localData[0]->booleanVars[6] = value; break;
    case 7 : comp->fmuData->localData[0]->booleanVars[7] = value; break;
    case 8 : comp->fmuData->localData[0]->booleanVars[8] = value; break;
    case 9 : comp->fmuData->localData[0]->booleanVars[9] = value; break;
    case 10 : comp->fmuData->localData[0]->booleanVars[10] = value; break;
    case 11 : comp->fmuData->localData[0]->booleanVars[11] = value; break;
    case 12 : comp->fmuData->localData[0]->booleanVars[12] = value; break;
    case 13 : comp->fmuData->localData[0]->booleanVars[13] = value; break;
    case 14 : comp->fmuData->localData[0]->booleanVars[14] = value; break;
    case 15 : comp->fmuData->localData[0]->booleanVars[15] = value; break;
    case 16 : comp->fmuData->localData[0]->booleanVars[16] = value; break;
    case 17 : comp->fmuData->localData[0]->booleanVars[17] = value; break;
    case 18 : comp->fmuData->localData[0]->booleanVars[18] = value; break;
    case 19 : return setBoolean(comp, 16, value); break;
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
      case 11: return 0; break;
      case 12: return 1; break;
      case 13: return 2; break;
      case 14: return 3; break;
      case 15: return 4; break;
      default:
        return -1;
    }
}
/* function maps output references to a input index used in partialDerivatives */
fmi2ValueReference mapOutputReference2OutputNumber(const fmi2ValueReference vr) {
    switch (vr) {
      case 9: return 0; break;
      case 10: return 1; break;
      default:
        return -1;
    }
}

#ifdef __cplusplus
}
#endif

