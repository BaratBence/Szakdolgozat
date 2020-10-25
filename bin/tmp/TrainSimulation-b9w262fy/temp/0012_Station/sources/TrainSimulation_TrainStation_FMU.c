// define class name and unique id
#define MODEL_IDENTIFIER TrainSimulation_TrainStation
#define MODEL_GUID "{934bf6e5-8b56-49f9-bc0a-ad38f42bcef8}"

// include fmu header files, typedefs and macros
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include "openmodelica.h"
#include "openmodelica_func.h"
#include "simulation_data.h"
#include "util/omc_error.h"
#include "TrainSimulation_TrainStation_functions.h"
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
#define NUMBER_OF_STATES 0
#define NUMBER_OF_EVENT_INDICATORS 3
#define NUMBER_OF_REALS 15
#define NUMBER_OF_INTEGERS 8
#define NUMBER_OF_STRINGS 0
#define NUMBER_OF_BOOLEANS 46
#define NUMBER_OF_EXTERNALFUNCTIONS 0

// define initial state vector as vector of value references
#define STATES {  }
#define STATESDERIVATIVES {  }


// implementation of the Model Exchange functions
extern void TrainSimulation_TrainStation_setupDataStruc(DATA *data, threadData_t *threadData);
#define fmu2_model_interface_setupDataStruc TrainSimulation_TrainStation_setupDataStruc
#include "fmi-export/fmu2_model_interface.c.inc"

// Set values for all variables that define a start value
OMC_DISABLE_OPT
void setDefaultStartValues(ModelInstance *comp) {
  comp->fmuData->modelData->realVarsData[0].attribute.start = 0.0;
  comp->fmuData->modelData->realVarsData[1].attribute.start = 0.0;
  comp->fmuData->modelData->realVarsData[2].attribute.start = 0.0;
  comp->fmuData->modelData->realVarsData[3].attribute.start = 0.0;
  comp->fmuData->modelData->realVarsData[4].attribute.start = 0.0;
  comp->fmuData->modelData->realVarsData[5].attribute.start = 0.0;
  comp->fmuData->modelData->realVarsData[6].attribute.start = 0.0;
  comp->fmuData->modelData->realVarsData[7].attribute.start = 0;
  comp->fmuData->modelData->realVarsData[8].attribute.start = 0;
  comp->fmuData->modelData->realVarsData[9].attribute.start = 0;
  comp->fmuData->modelData->realVarsData[10].attribute.start = 0.0;
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
  comp->fmuData->modelData->realParameterData[0].attribute.start = 0.0;
  comp->fmuData->modelData->realParameterData[1].attribute.start = 0.0;
  comp->fmuData->modelData->integerParameterData[0].attribute.start = 0;
  comp->fmuData->modelData->integerParameterData[1].attribute.start = 0;
  comp->fmuData->modelData->integerParameterData[2].attribute.start = 0;
  comp->fmuData->modelData->integerParameterData[3].attribute.start = 0;
  comp->fmuData->modelData->booleanParameterData[0].attribute.start = 0;
  comp->fmuData->modelData->booleanParameterData[1].attribute.start = 0;
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
  comp->fmuData->modelData->realParameterData[0].attribute.start = comp->fmuData->simulationInfo->realParameter[0];
  comp->fmuData->modelData->realParameterData[1].attribute.start = comp->fmuData->simulationInfo->realParameter[1];
  comp->fmuData->modelData->integerParameterData[0].attribute.start = comp->fmuData->simulationInfo->integerParameter[0];
  comp->fmuData->modelData->integerParameterData[1].attribute.start = comp->fmuData->simulationInfo->integerParameter[1];
  comp->fmuData->modelData->integerParameterData[2].attribute.start = comp->fmuData->simulationInfo->integerParameter[2];
  comp->fmuData->modelData->integerParameterData[3].attribute.start = comp->fmuData->simulationInfo->integerParameter[3];
  comp->fmuData->modelData->booleanParameterData[0].attribute.start = comp->fmuData->simulationInfo->booleanParameter[0];
  comp->fmuData->modelData->booleanParameterData[1].attribute.start = comp->fmuData->simulationInfo->booleanParameter[1];
}

// Used to set the next time event, if any.
void eventUpdate(ModelInstance* comp, fmi2EventInfo* eventInfo) {
}

static const int realAliasIndexes[2] = {
  10, 10
};

fmi2Real getReal(ModelInstance* comp, const fmi2ValueReference vr) {
  if (vr < 11) {
    return comp->fmuData->localData[0]->realVars[vr];
  }
  if (vr < 13) {
    return comp->fmuData->simulationInfo->realParameter[vr-11];
  }
  if (vr < 15) {
    int ix = realAliasIndexes[vr-13];
    return ix>=0 ? getReal(comp, ix) : -getReal(comp, -(ix+1));
  }
  return NAN;
}

fmi2Status setReal(ModelInstance* comp, const fmi2ValueReference vr, const fmi2Real value) {
  if (vr < 11) {
    comp->fmuData->localData[0]->realVars[vr] = value;
    return fmi2OK;
  }
  if (vr < 13) {
    comp->fmuData->simulationInfo->realParameter[vr-11] = value;
    return fmi2OK;
  }
  if (vr < 15) {
    int ix = realAliasIndexes[vr-13];
    return ix >= 0 ? setReal(comp, ix, value) : setReal(comp, -(ix+1), -value);
  }
  return fmi2Error;
}

static const int intAliasIndexes[1] = {
  0
};

fmi2Integer getInteger(ModelInstance* comp, const fmi2ValueReference vr) {
  if (vr < 3) {
    return comp->fmuData->localData[0]->integerVars[vr];
  }
  if (vr < 7) {
    return comp->fmuData->simulationInfo->integerParameter[vr-3];
  }
  if (vr < 8) {
    int ix = intAliasIndexes[vr-7];
    return ix>=0 ? getInteger(comp, ix) : -getInteger(comp, -(ix+1));
  }
  return 0;
}

fmi2Status setInteger(ModelInstance* comp, const fmi2ValueReference vr, const fmi2Integer value) {
  if (vr < 3) {
    comp->fmuData->localData[0]->integerVars[vr] = value;
    return fmi2OK;
  }
  if (vr < 7) {
    comp->fmuData->simulationInfo->integerParameter[vr-3] = value;
    return fmi2OK;
  }
  if (vr < 8) {
    int ix = intAliasIndexes[vr-7];
    return ix >= 0 ? setInteger(comp, ix, value) : setInteger(comp, -(ix+1), -value);
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
    case 16 : return comp->fmuData->simulationInfo->booleanParameter[0]; break;
    case 17 : return comp->fmuData->simulationInfo->booleanParameter[1]; break;
    case 18 : return getBoolean(comp, 3); break;
    case 19 : return getBoolean(comp, 6); break;
    case 20 : return getBoolean(comp, 3); break;
    case 21 : return getBoolean(comp, 2); break;
    case 22 : return getBoolean(comp, 10); break;
    case 23 : return getBoolean(comp, 3); break;
    case 24 : return getBoolean(comp, 5); break;
    case 25 : return getBoolean(comp, 10); break;
    case 26 : return getBoolean(comp, 5); break;
    case 27 : return getBoolean(comp, 4); break;
    case 28 : return getBoolean(comp, 6); break;
    case 29 : return getBoolean(comp, 5); break;
    case 30 : return getBoolean(comp, 6); break;
    case 31 : return getBoolean(comp, 5); break;
    case 32 : return getBoolean(comp, 6); break;
    case 33 : return getBoolean(comp, 3); break;
    case 34 : return getBoolean(comp, 6); break;
    case 35 : return getBoolean(comp, 14); break;
    case 36 : return getBoolean(comp, 15); break;
    case 37 : return getBoolean(comp, 10); break;
    case 38 : return getBoolean(comp, 3); break;
    case 39 : return getBoolean(comp, 10); break;
    case 40 : return getBoolean(comp, 5); break;
    case 41 : return getBoolean(comp, 10); break;
    case 42 : return getBoolean(comp, 14); break;
    case 43 : return getBoolean(comp, 15); break;
    case 44 : return getBoolean(comp, 14); break;
    case 45 : return getBoolean(comp, 15); break;
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
    case 16 : comp->fmuData->simulationInfo->booleanParameter[0] = value; break;
    case 17 : comp->fmuData->simulationInfo->booleanParameter[1] = value; break;
    case 18 : return setBoolean(comp, 3, value); break;
    case 19 : return setBoolean(comp, 6, value); break;
    case 20 : return setBoolean(comp, 3, value); break;
    case 21 : return setBoolean(comp, 2, value); break;
    case 22 : return setBoolean(comp, 10, value); break;
    case 23 : return setBoolean(comp, 3, value); break;
    case 24 : return setBoolean(comp, 5, value); break;
    case 25 : return setBoolean(comp, 10, value); break;
    case 26 : return setBoolean(comp, 5, value); break;
    case 27 : return setBoolean(comp, 4, value); break;
    case 28 : return setBoolean(comp, 6, value); break;
    case 29 : return setBoolean(comp, 5, value); break;
    case 30 : return setBoolean(comp, 6, value); break;
    case 31 : return setBoolean(comp, 5, value); break;
    case 32 : return setBoolean(comp, 6, value); break;
    case 33 : return setBoolean(comp, 3, value); break;
    case 34 : return setBoolean(comp, 6, value); break;
    case 35 : return setBoolean(comp, 14, value); break;
    case 36 : return setBoolean(comp, 15, value); break;
    case 37 : return setBoolean(comp, 10, value); break;
    case 38 : return setBoolean(comp, 3, value); break;
    case 39 : return setBoolean(comp, 10, value); break;
    case 40 : return setBoolean(comp, 5, value); break;
    case 41 : return setBoolean(comp, 10, value); break;
    case 42 : return setBoolean(comp, 14, value); break;
    case 43 : return setBoolean(comp, 15, value); break;
    case 44 : return setBoolean(comp, 14, value); break;
    case 45 : return setBoolean(comp, 15, value); break;
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
      case 6: return 0; break;
      default:
        return -1;
    }
}
/* function maps output references to a input index used in partialDerivatives */
fmi2ValueReference mapOutputReference2OutputNumber(const fmi2ValueReference vr) {
    switch (vr) {
      default:
        return -1;
    }
}

#ifdef __cplusplus
}
#endif

