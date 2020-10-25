/* Linearization */
#include "TrainSimulation_Train_model.h"
#if defined(__cplusplus)
extern "C" {
#endif
const char *TrainSimulation_Train_linear_model_frame()
{
  return "model linear_TrainSimulation_Train\n  parameter Integer n = 4 \"number of states\";\n  parameter Integer m = 8 \"number of inputs\";\n  parameter Integer p = 2 \"number of outputs\";\n"
  "\n"
  "  parameter Real x0[n] = %s;\n"
  "  parameter Real u0[m] = %s;\n"
  "\n"
  "  parameter Real A[n, n] =\n\t[%s];\n\n"
  "  parameter Real B[n, m] =\n\t[%s];\n\n"
  "  parameter Real C[p, n] =\n\t[%s];\n\n"
  "  parameter Real D[p, m] =\n\t[%s];\n\n"
  "\n"
  "  Real x[n](start=x0);\n"
  "  input Real u[m](start=u0);\n"
  "  output Real y[p];\n"
  "\n"
  "  Real 'x_acceleration' = x[1];\n""  Real 'x_distance' = x[2];\n""  Real 'x_lapDistance' = x[3];\n""  Real 'x_speed' = x[4];\n"
  "  Real 'u_ActiveCurve' = u[1];\n""  Real 'u_ActiveUpHill' = u[2];\n""  Real 'u_Sensor1Position' = u[3];\n""  Real 'u_Sensor2Position' = u[4];\n""  Real 'u_Station' = u[5];\n""  Real 'u_StationState' = u[6];\n""  Real 'u_onCurveSpeed' = u[7];\n""  Real 'u_onUpHillSpeedScale' = u[8];\n"
  "  Real 'y_Distance' = y[1];\n""  Real 'y_Length' = y[2];\n"
  "equation\n  der(x) = A * x + B * u;\n  y = C * x + D * u;\nend linear_TrainSimulation_Train;\n";
}
const char *TrainSimulation_Train_linear_model_datarecovery_frame()
{
  return "model linear_TrainSimulation_Train\n  parameter Integer n = 4 \"number of states\";\n  parameter Integer m = 8 \"number of inputs\";\n  parameter Integer p = 2 \"number of outputs\";\n  parameter Integer nz = 8 \"data recovery variables\";\n"
  "\n"
  "  parameter Real x0[4] = %s;\n"
  "  parameter Real u0[8] = %s;\n"
  "  parameter Real z0[8] = %s;\n"
  "\n"
  "  parameter Real A[n, n] =\n\t[%s];\n\n"
  "  parameter Real B[n, m] =\n\t[%s];\n\n"
  "  parameter Real C[p, n] =\n\t[%s];\n\n"
  "  parameter Real D[p, m] =\n\t[%s];\n\n"
  "  parameter Real Cz[nz, n] =\n\t[%s];\n\n"
  "  parameter Real Dz[nz, m] =\n\t[%s];\n\n"
  "\n"
  "  Real x[n](start=x0);\n"
  "  input Real u[m](start=u0);\n"
  "  output Real y[p];\n"
  "  output Real z[nz];\n"
  "\n"
  "  Real 'x_acceleration' = x[1];\n""  Real 'x_distance' = x[2];\n""  Real 'x_lapDistance' = x[3];\n""  Real 'x_speed' = x[4];\n"
  "  Real 'u_ActiveCurve' = u[1];\n""  Real 'u_ActiveUpHill' = u[2];\n""  Real 'u_Sensor1Position' = u[3];\n""  Real 'u_Sensor2Position' = u[4];\n""  Real 'u_Station' = u[5];\n""  Real 'u_StationState' = u[6];\n""  Real 'u_onCurveSpeed' = u[7];\n""  Real 'u_onUpHillSpeedScale' = u[8];\n"
  "  Real 'y_Distance' = y[1];\n""  Real 'y_Length' = y[2];\n"
  "  Real 'z_BreakingDistance' = z[1];\n""  Real 'z_Distance' = z[2];\n""  Real 'z_Length' = z[3];\n""  Real 'z_Sensor1Position' = z[4];\n""  Real 'z_Sensor2Position' = z[5];\n""  Real 'z_Station' = z[6];\n""  Real 'z_onCurveSpeed' = z[7];\n""  Real 'z_onUpHillSpeedScale' = z[8];\n"
  "equation\n  der(x) = A * x + B * u;\n  y = C * x + D * u;\n  z = Cz * x + Dz * u;\nend linear_TrainSimulation_Train;\n";
}
#if defined(__cplusplus)
}
#endif

