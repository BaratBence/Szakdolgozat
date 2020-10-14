/* Simulation code for TrainSimulation.VehicleCollection generated by the OpenModelica Compiler OpenModelica v1.16.0-dev.03 (64-bit). */
#if !defined(TrainSimulation_VehicleCollection__MODEL_H)
#define TrainSimulation_VehicleCollection__MODEL_H

#include "openmodelica.h"
#include "openmodelica_func.h"
#include "simulation_data.h"
#include "simulation/simulation_info_json.h"
#include "simulation/simulation_runtime.h"
#include "util/omc_error.h"
#include "util/parallel_helper.h"
#include "simulation/solver/model_help.h"
#include "simulation/solver/delay.h"
#include "simulation/solver/linearSystem.h"
#include "simulation/solver/nonlinearSystem.h"
#include "simulation/solver/mixedSystem.h"

#if defined(__cplusplus)
extern "C" {
#endif

#include <string.h>

#include "TrainSimulation_VehicleCollection_functions.h"


extern void TrainSimulation_VehicleCollection_callExternalObjectDestructors(DATA *_data, threadData_t *threadData);
#if !defined(OMC_NUM_NONLINEAR_SYSTEMS) || OMC_NUM_NONLINEAR_SYSTEMS>0
#endif
#if !defined(OMC_NUM_LINEAR_SYSTEMS) || OMC_NUM_LINEAR_SYSTEMS>0
#endif
#if !defined(OMC_NUM_MIXED_SYSTEMS) || OMC_NUM_MIXED_SYSTEMS>0
#endif
#if !defined(OMC_NO_STATESELECTION)
extern void TrainSimulation_VehicleCollection_initializeStateSets(int nStateSets, STATE_SET_DATA* statesetData, DATA *data);
#endif
extern int TrainSimulation_VehicleCollection_functionAlgebraics(DATA *data, threadData_t *threadData);
extern int TrainSimulation_VehicleCollection_function_storeDelayed(DATA *data, threadData_t *threadData);
extern int TrainSimulation_VehicleCollection_updateBoundVariableAttributes(DATA *data, threadData_t *threadData);
extern int TrainSimulation_VehicleCollection_functionInitialEquations(DATA *data, threadData_t *threadData);
extern int TrainSimulation_VehicleCollection_functionInitialEquations_lambda0(DATA *data, threadData_t *threadData);
extern int TrainSimulation_VehicleCollection_functionRemovedInitialEquations(DATA *data, threadData_t *threadData);
extern int TrainSimulation_VehicleCollection_updateBoundParameters(DATA *data, threadData_t *threadData);
extern int TrainSimulation_VehicleCollection_checkForAsserts(DATA *data, threadData_t *threadData);
extern int TrainSimulation_VehicleCollection_function_ZeroCrossingsEquations(DATA *data, threadData_t *threadData);
extern int TrainSimulation_VehicleCollection_function_ZeroCrossings(DATA *data, threadData_t *threadData, double* gout);
extern int TrainSimulation_VehicleCollection_function_updateRelations(DATA *data, threadData_t *threadData, int evalZeroCross);
extern const char* TrainSimulation_VehicleCollection_zeroCrossingDescription(int i, int **out_EquationIndexes);
extern const char* TrainSimulation_VehicleCollection_relationDescription(int i);
extern void TrainSimulation_VehicleCollection_function_initSample(DATA *data, threadData_t *threadData);
extern int TrainSimulation_VehicleCollection_initialAnalyticJacobianG(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian);
extern int TrainSimulation_VehicleCollection_initialAnalyticJacobianA(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian);
extern int TrainSimulation_VehicleCollection_initialAnalyticJacobianB(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian);
extern int TrainSimulation_VehicleCollection_initialAnalyticJacobianC(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian);
extern int TrainSimulation_VehicleCollection_initialAnalyticJacobianD(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian);
extern int TrainSimulation_VehicleCollection_initialAnalyticJacobianF(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian);
extern int TrainSimulation_VehicleCollection_functionJacG_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *thisJacobian, ANALYTIC_JACOBIAN *parentJacobian);
extern int TrainSimulation_VehicleCollection_functionJacA_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *thisJacobian, ANALYTIC_JACOBIAN *parentJacobian);
extern int TrainSimulation_VehicleCollection_functionJacB_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *thisJacobian, ANALYTIC_JACOBIAN *parentJacobian);
extern int TrainSimulation_VehicleCollection_functionJacC_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *thisJacobian, ANALYTIC_JACOBIAN *parentJacobian);
extern int TrainSimulation_VehicleCollection_functionJacD_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *thisJacobian, ANALYTIC_JACOBIAN *parentJacobian);
extern int TrainSimulation_VehicleCollection_functionJacF_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *thisJacobian, ANALYTIC_JACOBIAN *parentJacobian);
extern const char* TrainSimulation_VehicleCollection_linear_model_frame(void);
extern const char* TrainSimulation_VehicleCollection_linear_model_datarecovery_frame(void);
extern int TrainSimulation_VehicleCollection_mayer(DATA* data, modelica_real** res, short *);
extern int TrainSimulation_VehicleCollection_lagrange(DATA* data, modelica_real** res, short *, short *);
extern int TrainSimulation_VehicleCollection_pickUpBoundsForInputsInOptimization(DATA* data, modelica_real* min, modelica_real* max, modelica_real*nominal, modelica_boolean *useNominal, char ** name, modelica_real * start, modelica_real * startTimeOpt);
extern int TrainSimulation_VehicleCollection_setInputData(DATA *data, const modelica_boolean file);
extern int TrainSimulation_VehicleCollection_getTimeGrid(DATA *data, modelica_integer * nsi, modelica_real**t);
extern void TrainSimulation_VehicleCollection_function_initSynchronous(DATA * data, threadData_t *threadData);
extern void TrainSimulation_VehicleCollection_function_updateSynchronous(DATA * data, threadData_t *threadData, long i);
extern int TrainSimulation_VehicleCollection_function_equationsSynchronous(DATA * data, threadData_t *threadData, long i);
extern void TrainSimulation_VehicleCollection_read_input_fmu(MODEL_DATA* modelData, SIMULATION_INFO* simulationData);
extern void TrainSimulation_VehicleCollection_function_savePreSynchronous(DATA *data, threadData_t *threadData);
extern int TrainSimulation_VehicleCollection_inputNames(DATA* data, char ** names);
extern int TrainSimulation_VehicleCollection_initializeDAEmodeData(DATA *data, DAEMODE_DATA*);
extern int TrainSimulation_VehicleCollection_functionLocalKnownVars(DATA*, threadData_t*);
extern int TrainSimulation_VehicleCollection_symbolicInlineSystem(DATA*, threadData_t*);

#include "TrainSimulation_VehicleCollection_literals.h"




#if defined(HPCOM) && !defined(_OPENMP)
  #error "HPCOM requires OpenMP or the results are wrong"
#endif
#if defined(_OPENMP)
  #include <omp.h>
#else
  /* dummy omp defines */
  #define omp_get_max_threads() 1
#endif

#if defined(__cplusplus)
}
#endif

#endif /* !defined(TrainSimulation_VehicleCollection__MODEL_H) */


