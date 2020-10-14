/* Linearization */
#include "TrainSimulation_Curve_model.h"
#if defined(__cplusplus)
extern "C" {
#endif
const char *TrainSimulation_Curve_linear_model_frame()
{
  return "model linear_TrainSimulation_Curve\n  parameter Integer n = 0 \"number of states\";\n  parameter Integer m = 20 \"number of inputs\";\n  parameter Integer p = 20 \"number of outputs\";\n"
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
  "  Real 'u_TrainDistance[1]' = u[1];\n""  Real 'u_TrainDistance[2]' = u[2];\n""  Real 'u_TrainDistance[3]' = u[3];\n""  Real 'u_TrainDistance[4]' = u[4];\n""  Real 'u_TrainDistance[5]' = u[5];\n""  Real 'u_TrainDistance[6]' = u[6];\n""  Real 'u_TrainDistance[7]' = u[7];\n""  Real 'u_TrainDistance[8]' = u[8];\n""  Real 'u_TrainDistance[9]' = u[9];\n""  Real 'u_TrainDistance[10]' = u[10];\n""  Real 'u_TrainLength[1]' = u[11];\n""  Real 'u_TrainLength[2]' = u[12];\n""  Real 'u_TrainLength[3]' = u[13];\n""  Real 'u_TrainLength[4]' = u[14];\n""  Real 'u_TrainLength[5]' = u[15];\n""  Real 'u_TrainLength[6]' = u[16];\n""  Real 'u_TrainLength[7]' = u[17];\n""  Real 'u_TrainLength[8]' = u[18];\n""  Real 'u_TrainLength[9]' = u[19];\n""  Real 'u_TrainLength[10]' = u[20];\n"
  "  Real 'y_CurveSpeed[1]' = y[1];\n""  Real 'y_CurveSpeed[2]' = y[2];\n""  Real 'y_CurveSpeed[3]' = y[3];\n""  Real 'y_CurveSpeed[4]' = y[4];\n""  Real 'y_CurveSpeed[5]' = y[5];\n""  Real 'y_CurveSpeed[6]' = y[6];\n""  Real 'y_CurveSpeed[7]' = y[7];\n""  Real 'y_CurveSpeed[8]' = y[8];\n""  Real 'y_CurveSpeed[9]' = y[9];\n""  Real 'y_CurveSpeed[10]' = y[10];\n""  Real 'y_onCurve[1]' = y[11];\n""  Real 'y_onCurve[2]' = y[12];\n""  Real 'y_onCurve[3]' = y[13];\n""  Real 'y_onCurve[4]' = y[14];\n""  Real 'y_onCurve[5]' = y[15];\n""  Real 'y_onCurve[6]' = y[16];\n""  Real 'y_onCurve[7]' = y[17];\n""  Real 'y_onCurve[8]' = y[18];\n""  Real 'y_onCurve[9]' = y[19];\n""  Real 'y_onCurve[10]' = y[20];\n"
  "equation\n  der(x) = A * x + B * u;\n  y = C * x + D * u;\nend linear_TrainSimulation_Curve;\n";
}
const char *TrainSimulation_Curve_linear_model_datarecovery_frame()
{
  return "model linear_TrainSimulation_Curve\n  parameter Integer n = 0 \"number of states\";\n  parameter Integer m = 20 \"number of inputs\";\n  parameter Integer p = 20 \"number of outputs\";\n  parameter Integer nz = 50 \"data recovery variables\";\n"
  "\n"
  "  parameter Real x0[0] = %s;\n"
  "  parameter Real u0[20] = %s;\n"
  "  parameter Real z0[50] = %s;\n"
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
  "  Real 'u_TrainDistance[1]' = u[1];\n""  Real 'u_TrainDistance[2]' = u[2];\n""  Real 'u_TrainDistance[3]' = u[3];\n""  Real 'u_TrainDistance[4]' = u[4];\n""  Real 'u_TrainDistance[5]' = u[5];\n""  Real 'u_TrainDistance[6]' = u[6];\n""  Real 'u_TrainDistance[7]' = u[7];\n""  Real 'u_TrainDistance[8]' = u[8];\n""  Real 'u_TrainDistance[9]' = u[9];\n""  Real 'u_TrainDistance[10]' = u[10];\n""  Real 'u_TrainLength[1]' = u[11];\n""  Real 'u_TrainLength[2]' = u[12];\n""  Real 'u_TrainLength[3]' = u[13];\n""  Real 'u_TrainLength[4]' = u[14];\n""  Real 'u_TrainLength[5]' = u[15];\n""  Real 'u_TrainLength[6]' = u[16];\n""  Real 'u_TrainLength[7]' = u[17];\n""  Real 'u_TrainLength[8]' = u[18];\n""  Real 'u_TrainLength[9]' = u[19];\n""  Real 'u_TrainLength[10]' = u[20];\n"
  "  Real 'y_CurveSpeed[1]' = y[1];\n""  Real 'y_CurveSpeed[2]' = y[2];\n""  Real 'y_CurveSpeed[3]' = y[3];\n""  Real 'y_CurveSpeed[4]' = y[4];\n""  Real 'y_CurveSpeed[5]' = y[5];\n""  Real 'y_CurveSpeed[6]' = y[6];\n""  Real 'y_CurveSpeed[7]' = y[7];\n""  Real 'y_CurveSpeed[8]' = y[8];\n""  Real 'y_CurveSpeed[9]' = y[9];\n""  Real 'y_CurveSpeed[10]' = y[10];\n""  Real 'y_onCurve[1]' = y[11];\n""  Real 'y_onCurve[2]' = y[12];\n""  Real 'y_onCurve[3]' = y[13];\n""  Real 'y_onCurve[4]' = y[14];\n""  Real 'y_onCurve[5]' = y[15];\n""  Real 'y_onCurve[6]' = y[16];\n""  Real 'y_onCurve[7]' = y[17];\n""  Real 'y_onCurve[8]' = y[18];\n""  Real 'y_onCurve[9]' = y[19];\n""  Real 'y_onCurve[10]' = y[20];\n"
  "  Real 'z_$outputAlias_onCurve[2]' = z[1];\n""  Real 'z_$outputAlias_onCurve[3]' = z[2];\n""  Real 'z_$outputAlias_onCurve[4]' = z[3];\n""  Real 'z_$outputAlias_onCurve[5]' = z[4];\n""  Real 'z_$outputAlias_onCurve[6]' = z[5];\n""  Real 'z_$outputAlias_onCurve[7]' = z[6];\n""  Real 'z_$outputAlias_onCurve[8]' = z[7];\n""  Real 'z_$outputAlias_onCurve[9]' = z[8];\n""  Real 'z_$outputAlias_onCurve[10]' = z[9];\n""  Real 'z_CurveSpeed[1]' = z[10];\n""  Real 'z_CurveSpeed[2]' = z[11];\n""  Real 'z_CurveSpeed[3]' = z[12];\n""  Real 'z_CurveSpeed[4]' = z[13];\n""  Real 'z_CurveSpeed[5]' = z[14];\n""  Real 'z_CurveSpeed[6]' = z[15];\n""  Real 'z_CurveSpeed[7]' = z[16];\n""  Real 'z_CurveSpeed[8]' = z[17];\n""  Real 'z_CurveSpeed[9]' = z[18];\n""  Real 'z_CurveSpeed[10]' = z[19];\n""  Real 'z_CurveSpeedValue' = z[20];\n""  Real 'z_TrainDistance[1]' = z[21];\n""  Real 'z_TrainDistance[2]' = z[22];\n""  Real 'z_TrainDistance[3]' = z[23];\n""  Real 'z_TrainDistance[4]' = z[24];\n""  Real 'z_TrainDistance[5]' = z[25];\n""  Real 'z_TrainDistance[6]' = z[26];\n""  Real 'z_TrainDistance[7]' = z[27];\n""  Real 'z_TrainDistance[8]' = z[28];\n""  Real 'z_TrainDistance[9]' = z[29];\n""  Real 'z_TrainDistance[10]' = z[30];\n""  Real 'z_TrainLength[1]' = z[31];\n""  Real 'z_TrainLength[2]' = z[32];\n""  Real 'z_TrainLength[3]' = z[33];\n""  Real 'z_TrainLength[4]' = z[34];\n""  Real 'z_TrainLength[5]' = z[35];\n""  Real 'z_TrainLength[6]' = z[36];\n""  Real 'z_TrainLength[7]' = z[37];\n""  Real 'z_TrainLength[8]' = z[38];\n""  Real 'z_TrainLength[9]' = z[39];\n""  Real 'z_TrainLength[10]' = z[40];\n""  Real 'z_onCurve[1]' = z[41];\n""  Real 'z_onCurve[2]' = z[42];\n""  Real 'z_onCurve[3]' = z[43];\n""  Real 'z_onCurve[4]' = z[44];\n""  Real 'z_onCurve[5]' = z[45];\n""  Real 'z_onCurve[6]' = z[46];\n""  Real 'z_onCurve[7]' = z[47];\n""  Real 'z_onCurve[8]' = z[48];\n""  Real 'z_onCurve[9]' = z[49];\n""  Real 'z_onCurve[10]' = z[50];\n"
  "equation\n  der(x) = A * x + B * u;\n  y = C * x + D * u;\n  z = Cz * x + Dz * u;\nend linear_TrainSimulation_Curve;\n";
}
#if defined(__cplusplus)
}
#endif

