/* Linearization */
#include "TrainSimulation_Sensor_model.h"
#if defined(__cplusplus)
extern "C" {
#endif
const char *TrainSimulation_Sensor_linear_model_frame()
{
  return "model linear_TrainSimulation_Sensor\n  parameter Integer n = 0 \"number of states\";\n  parameter Integer m = 20 \"number of inputs\";\n  parameter Integer p = 4 \"number of outputs\";\n"
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
  "  Real 'u_DistanceVec[1]' = u[1];\n""  Real 'u_DistanceVec[2]' = u[2];\n""  Real 'u_DistanceVec[3]' = u[3];\n""  Real 'u_DistanceVec[4]' = u[4];\n""  Real 'u_DistanceVec[5]' = u[5];\n""  Real 'u_DistanceVec[6]' = u[6];\n""  Real 'u_DistanceVec[7]' = u[7];\n""  Real 'u_DistanceVec[8]' = u[8];\n""  Real 'u_DistanceVec[9]' = u[9];\n""  Real 'u_DistanceVec[10]' = u[10];\n""  Real 'u_LengthVec[1]' = u[11];\n""  Real 'u_LengthVec[2]' = u[12];\n""  Real 'u_LengthVec[3]' = u[13];\n""  Real 'u_LengthVec[4]' = u[14];\n""  Real 'u_LengthVec[5]' = u[15];\n""  Real 'u_LengthVec[6]' = u[16];\n""  Real 'u_LengthVec[7]' = u[17];\n""  Real 'u_LengthVec[8]' = u[18];\n""  Real 'u_LengthVec[9]' = u[19];\n""  Real 'u_LengthVec[10]' = u[20];\n"
  "  Real 'y_Intersection' = y[1];\n""  Real 'y_Safe_Passage' = y[2];\n""  Real 'y_Sensor1PositionOut' = y[3];\n""  Real 'y_Sensor2PositionOut' = y[4];\n"
  "equation\n  der(x) = A * x + B * u;\n  y = C * x + D * u;\nend linear_TrainSimulation_Sensor;\n";
}
const char *TrainSimulation_Sensor_linear_model_datarecovery_frame()
{
  return "model linear_TrainSimulation_Sensor\n  parameter Integer n = 0 \"number of states\";\n  parameter Integer m = 20 \"number of inputs\";\n  parameter Integer p = 4 \"number of outputs\";\n  parameter Integer nz = 25 \"data recovery variables\";\n"
  "\n"
  "  parameter Real x0[0] = %s;\n"
  "  parameter Real u0[20] = %s;\n"
  "  parameter Real z0[25] = %s;\n"
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
  "  Real 'u_DistanceVec[1]' = u[1];\n""  Real 'u_DistanceVec[2]' = u[2];\n""  Real 'u_DistanceVec[3]' = u[3];\n""  Real 'u_DistanceVec[4]' = u[4];\n""  Real 'u_DistanceVec[5]' = u[5];\n""  Real 'u_DistanceVec[6]' = u[6];\n""  Real 'u_DistanceVec[7]' = u[7];\n""  Real 'u_DistanceVec[8]' = u[8];\n""  Real 'u_DistanceVec[9]' = u[9];\n""  Real 'u_DistanceVec[10]' = u[10];\n""  Real 'u_LengthVec[1]' = u[11];\n""  Real 'u_LengthVec[2]' = u[12];\n""  Real 'u_LengthVec[3]' = u[13];\n""  Real 'u_LengthVec[4]' = u[14];\n""  Real 'u_LengthVec[5]' = u[15];\n""  Real 'u_LengthVec[6]' = u[16];\n""  Real 'u_LengthVec[7]' = u[17];\n""  Real 'u_LengthVec[8]' = u[18];\n""  Real 'u_LengthVec[9]' = u[19];\n""  Real 'u_LengthVec[10]' = u[20];\n"
  "  Real 'y_Intersection' = y[1];\n""  Real 'y_Safe_Passage' = y[2];\n""  Real 'y_Sensor1PositionOut' = y[3];\n""  Real 'y_Sensor2PositionOut' = y[4];\n"
  "  Real 'z_$outputAlias_Intersection' = z[1];\n""  Real 'z_DistanceVec[1]' = z[2];\n""  Real 'z_DistanceVec[2]' = z[3];\n""  Real 'z_DistanceVec[3]' = z[4];\n""  Real 'z_DistanceVec[4]' = z[5];\n""  Real 'z_DistanceVec[5]' = z[6];\n""  Real 'z_DistanceVec[6]' = z[7];\n""  Real 'z_DistanceVec[7]' = z[8];\n""  Real 'z_DistanceVec[8]' = z[9];\n""  Real 'z_DistanceVec[9]' = z[10];\n""  Real 'z_DistanceVec[10]' = z[11];\n""  Real 'z_Intersection' = z[12];\n""  Real 'z_LengthVec[1]' = z[13];\n""  Real 'z_LengthVec[2]' = z[14];\n""  Real 'z_LengthVec[3]' = z[15];\n""  Real 'z_LengthVec[4]' = z[16];\n""  Real 'z_LengthVec[5]' = z[17];\n""  Real 'z_LengthVec[6]' = z[18];\n""  Real 'z_LengthVec[7]' = z[19];\n""  Real 'z_LengthVec[8]' = z[20];\n""  Real 'z_LengthVec[9]' = z[21];\n""  Real 'z_LengthVec[10]' = z[22];\n""  Real 'z_Safe_Passage' = z[23];\n""  Real 'z_Sensor1PositionOut' = z[24];\n""  Real 'z_Sensor2PositionOut' = z[25];\n"
  "equation\n  der(x) = A * x + B * u;\n  y = C * x + D * u;\n  z = Cz * x + Dz * u;\nend linear_TrainSimulation_Sensor;\n";
}
#if defined(__cplusplus)
}
#endif

