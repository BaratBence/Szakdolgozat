/* Linearization */
#include "TrainSimulation_Car_model.h"
#if defined(__cplusplus)
extern "C" {
#endif
const char *TrainSimulation_Car_linear_model_frame()
{
  return "model linear_TrainSimulation_Car\n  parameter Integer n = 3 \"number of states\";\n  parameter Integer m = 3 \"number of inputs\";\n  parameter Integer p = 0 \"number of outputs\";\n"
  "\n"
  "  parameter Real x0[n] = %s;\n"
  "  parameter Real u0[m] = %s;\n"
  "\n"
  "  parameter Real A[n, n] =\n\t[%s];\n\n"
  "  parameter Real B[n, m] =\n\t[%s];\n\n"
  "  parameter Real C[p, n] = zeros(p, n);%s\n\n"
  "  parameter Real D[p, m] = zeros(p, m);%s\n\n"
  "\n"
  "  Real x[n](start=x0);\n"
  "  input Real u[m](start=u0);\n"
  "  output Real y[p];\n"
  "\n"
  "  Real 'x_Distance' = x[1];\n""  Real 'x_acceleration' = x[2];\n""  Real 'x_speed' = x[3];\n"
  "  Real 'u_Gate_Angle' = u[1];\n""  Real 'u_LightColor' = u[2];\n""  Real 'u_Target' = u[3];\n"
  "equation\n  der(x) = A * x + B * u;\n  y = C * x + D * u;\nend linear_TrainSimulation_Car;\n";
}
const char *TrainSimulation_Car_linear_model_datarecovery_frame()
{
  return "model linear_TrainSimulation_Car\n  parameter Integer n = 3 \"number of states\";\n  parameter Integer m = 3 \"number of inputs\";\n  parameter Integer p = 0 \"number of outputs\";\n  parameter Integer nz = 3 \"data recovery variables\";\n"
  "\n"
  "  parameter Real x0[3] = %s;\n"
  "  parameter Real u0[3] = %s;\n"
  "  parameter Real z0[3] = %s;\n"
  "\n"
  "  parameter Real A[n, n] =\n\t[%s];\n\n"
  "  parameter Real B[n, m] =\n\t[%s];\n\n"
  "  parameter Real C[p, n] = zeros(p, n);%s\n\n"
  "  parameter Real D[p, m] = zeros(p, m);%s\n\n"
  "  parameter Real Cz[nz, n] =\n\t[%s];\n\n"
  "  parameter Real Dz[nz, m] =\n\t[%s];\n\n"
  "\n"
  "  Real x[n](start=x0);\n"
  "  input Real u[m](start=u0);\n"
  "  output Real y[p];\n"
  "  output Real z[nz];\n"
  "\n"
  "  Real 'x_Distance' = x[1];\n""  Real 'x_acceleration' = x[2];\n""  Real 'x_speed' = x[3];\n"
  "  Real 'u_Gate_Angle' = u[1];\n""  Real 'u_LightColor' = u[2];\n""  Real 'u_Target' = u[3];\n"
  "  Real 'z_BreakingDistance' = z[1];\n""  Real 'z_Gate_Angle' = z[2];\n""  Real 'z_Target' = z[3];\n"
  "equation\n  der(x) = A * x + B * u;\n  y = C * x + D * u;\n  z = Cz * x + Dz * u;\nend linear_TrainSimulation_Car;\n";
}
#if defined(__cplusplus)
}
#endif

