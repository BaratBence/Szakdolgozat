/* Linearization */
#include "TrainSimulation_StructureCollection_model.h"
#if defined(__cplusplus)
extern "C" {
#endif
const char *TrainSimulation_StructureCollection_linear_model_frame()
{
  return "model linear_TrainSimulation_StructureCollection\n  parameter Integer n = 0 \"number of states\";\n  parameter Integer m = 20 \"number of inputs\";\n  parameter Integer p = 2 \"number of outputs\";\n"
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
  "  Real 'u_OnStructure1' = u[1];\n""  Real 'u_OnStructure10' = u[2];\n""  Real 'u_OnStructure2' = u[3];\n""  Real 'u_OnStructure3' = u[4];\n""  Real 'u_OnStructure4' = u[5];\n""  Real 'u_OnStructure5' = u[6];\n""  Real 'u_OnStructure6' = u[7];\n""  Real 'u_OnStructure7' = u[8];\n""  Real 'u_OnStructure8' = u[9];\n""  Real 'u_OnStructure9' = u[10];\n""  Real 'u_Speed1' = u[11];\n""  Real 'u_Speed10' = u[12];\n""  Real 'u_Speed2' = u[13];\n""  Real 'u_Speed3' = u[14];\n""  Real 'u_Speed4' = u[15];\n""  Real 'u_Speed5' = u[16];\n""  Real 'u_Speed6' = u[17];\n""  Real 'u_Speed7' = u[18];\n""  Real 'u_Speed8' = u[19];\n""  Real 'u_Speed9' = u[20];\n"
  "  Real 'y_Activated' = y[1];\n""  Real 'y_speed' = y[2];\n"
  "equation\n  der(x) = A * x + B * u;\n  y = C * x + D * u;\nend linear_TrainSimulation_StructureCollection;\n";
}
const char *TrainSimulation_StructureCollection_linear_model_datarecovery_frame()
{
  return "model linear_TrainSimulation_StructureCollection\n  parameter Integer n = 0 \"number of states\";\n  parameter Integer m = 20 \"number of inputs\";\n  parameter Integer p = 2 \"number of outputs\";\n  parameter Integer nz = 31 \"data recovery variables\";\n"
  "\n"
  "  parameter Real x0[0] = %s;\n"
  "  parameter Real u0[20] = %s;\n"
  "  parameter Real z0[31] = %s;\n"
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
  "  Real 'u_OnStructure1' = u[1];\n""  Real 'u_OnStructure10' = u[2];\n""  Real 'u_OnStructure2' = u[3];\n""  Real 'u_OnStructure3' = u[4];\n""  Real 'u_OnStructure4' = u[5];\n""  Real 'u_OnStructure5' = u[6];\n""  Real 'u_OnStructure6' = u[7];\n""  Real 'u_OnStructure7' = u[8];\n""  Real 'u_OnStructure8' = u[9];\n""  Real 'u_OnStructure9' = u[10];\n""  Real 'u_Speed1' = u[11];\n""  Real 'u_Speed10' = u[12];\n""  Real 'u_Speed2' = u[13];\n""  Real 'u_Speed3' = u[14];\n""  Real 'u_Speed4' = u[15];\n""  Real 'u_Speed5' = u[16];\n""  Real 'u_Speed6' = u[17];\n""  Real 'u_Speed7' = u[18];\n""  Real 'u_Speed8' = u[19];\n""  Real 'u_Speed9' = u[20];\n"
  "  Real 'y_Activated' = y[1];\n""  Real 'y_speed' = y[2];\n"
  "  Real 'z_OnStructure1' = z[1];\n""  Real 'z_OnStructure10' = z[2];\n""  Real 'z_OnStructure2' = z[3];\n""  Real 'z_OnStructure3' = z[4];\n""  Real 'z_OnStructure4' = z[5];\n""  Real 'z_OnStructure5' = z[6];\n""  Real 'z_OnStructure6' = z[7];\n""  Real 'z_OnStructure7' = z[8];\n""  Real 'z_OnStructure8' = z[9];\n""  Real 'z_OnStructure9' = z[10];\n""  Real 'z_Speed1' = z[11];\n""  Real 'z_Speed10' = z[12];\n""  Real 'z_Speed2' = z[13];\n""  Real 'z_Speed3' = z[14];\n""  Real 'z_Speed4' = z[15];\n""  Real 'z_Speed5' = z[16];\n""  Real 'z_Speed6' = z[17];\n""  Real 'z_Speed7' = z[18];\n""  Real 'z_Speed8' = z[19];\n""  Real 'z_Speed9' = z[20];\n""  Real 'z_SpeedArray[1]' = z[21];\n""  Real 'z_SpeedArray[2]' = z[22];\n""  Real 'z_SpeedArray[3]' = z[23];\n""  Real 'z_SpeedArray[4]' = z[24];\n""  Real 'z_SpeedArray[5]' = z[25];\n""  Real 'z_SpeedArray[6]' = z[26];\n""  Real 'z_SpeedArray[7]' = z[27];\n""  Real 'z_SpeedArray[8]' = z[28];\n""  Real 'z_SpeedArray[9]' = z[29];\n""  Real 'z_SpeedArray[10]' = z[30];\n""  Real 'z_speed' = z[31];\n"
  "equation\n  der(x) = A * x + B * u;\n  y = C * x + D * u;\n  z = Cz * x + Dz * u;\nend linear_TrainSimulation_StructureCollection;\n";
}
#if defined(__cplusplus)
}
#endif

