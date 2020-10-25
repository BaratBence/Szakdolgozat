/* Linearization */
#include "TrainSimulation_TrainStation_model.h"
#if defined(__cplusplus)
extern "C" {
#endif
const char *TrainSimulation_TrainStation_linear_model_frame()
{
  return "model linear_TrainSimulation_TrainStation\n  parameter Integer n = 0 \"number of states\";\n  parameter Integer m = 1 \"number of inputs\";\n  parameter Integer p = 1 \"number of outputs\";\n"
  "\n"
  "  parameter Real x0[n] = %s;\n"
  "  parameter Real u0[m] = %s;\n"
  "\n"
  "  parameter Real A[n, n] = zeros(n, n);%s\n\n"
  "  parameter Real B[n, m] = zeros(n, m);%s\n\n"
  "  parameter Real C[p, n] = zeros(p, n);%s\n\n"
  "  parameter Real D[p, m] =\n\t[%s];\n\n"
  "\n"
  "  Real x[n];\n"
  "  input Real u[m](start=u0);\n"
  "  output Real y[p];\n"
  "\n"
  "  Real 'u_Safe_Passage' = u[1];\n"
  "  Real 'y_StationState' = y[1];\n"
  "equation\n  der(x) = A * x + B * u;\n  y = C * x + D * u;\nend linear_TrainSimulation_TrainStation;\n";
}
const char *TrainSimulation_TrainStation_linear_model_datarecovery_frame()
{
  return "model linear_TrainSimulation_TrainStation\n  parameter Integer n = 0 \"number of states\";\n  parameter Integer m = 1 \"number of inputs\";\n  parameter Integer p = 1 \"number of outputs\";\n  parameter Integer nz = 11 \"data recovery variables\";\n"
  "\n"
  "  parameter Real x0[0] = %s;\n"
  "  parameter Real u0[1] = %s;\n"
  "  parameter Real z0[11] = %s;\n"
  "\n"
  "  parameter Real A[n, n] = zeros(n, n);%s\n\n"
  "  parameter Real B[n, m] = zeros(n, m);%s\n\n"
  "  parameter Real C[p, n] = zeros(p, n);%s\n\n"
  "  parameter Real D[p, m] =\n\t[%s];\n\n"
  "  parameter Real Cz[nz, n] = zeros(nz, n);%s\n\n"
  "  parameter Real Dz[nz, m] =\n\t[%s];\n\n"
  "\n"
  "  Real x[n];\n"
  "  input Real u[m](start=u0);\n"
  "  output Real y[p];\n"
  "  output Real z[nz];\n"
  "\n"
  "  Real 'u_Safe_Passage' = u[1];\n"
  "  Real 'y_StationState' = y[1];\n"
  "  Real 'z_GreenToRed.t' = z[1];\n""  Real 'z_GreenToRed.t_dummy' = z[2];\n""  Real 'z_GreenToRed.t_start' = z[3];\n""  Real 'z_RedToGreen.t' = z[4];\n""  Real 'z_RedToGreen.t_dummy' = z[5];\n""  Real 'z_RedToGreen.t_start' = z[6];\n""  Real 'z_Safe_Passage' = z[7];\n""  Real 'z_green.outerStatePort.subgraphStatePort.activeSteps' = z[8];\n""  Real 'z_red.outerStatePort.subgraphStatePort.activeSteps' = z[9];\n""  Real 'z_stateGraphRoot.subgraphStatePort.activeSteps' = z[10];\n""  Real 'z_stateGraphRoot.subgraphStatePort.activeStepsDummy' = z[11];\n"
  "equation\n  der(x) = A * x + B * u;\n  y = C * x + D * u;\n  z = Cz * x + Dz * u;\nend linear_TrainSimulation_TrainStation;\n";
}
#if defined(__cplusplus)
}
#endif

