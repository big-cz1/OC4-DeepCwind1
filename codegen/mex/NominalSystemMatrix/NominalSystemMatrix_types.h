/*
 * NominalSystemMatrix_types.h
 *
 * Code generation for function 'NominalSystemMatrix'
 *
 */

#pragma once

/* Include files */
#include "rtwtypes.h"
#include "emlrt.h"

/* Type Definitions */
#ifndef typedef_struct5_T
#define typedef_struct5_T
typedef struct {
  real_T Dia;
  real_T Draft;
} struct5_T;
#endif /* typedef_struct5_T */

#ifndef typedef_struct0_T
#define typedef_struct0_T
typedef struct {
  real_T OoPDefl;
  real_T IPDefl;
  real_T BlPitch[3];
  real_T Azimuth;
  real_T RotSpeed;
  real_T NacYaw;
  real_T TTDspFA;
  real_T TTDspSS;
  real_T PtfmSurge;
  real_T PtfmSway;
  real_T PtfmHeave;
  real_T PtfmRoll;
  real_T PtfmPitch;
  real_T PtfmYaw;
  real_T NumBl;
  real_T TipRad;
  real_T HubRad;
  real_T PreCone[3];
  real_T HubCM;
  real_T OverHang;
  real_T ShftGagL;
  real_T ShftTilt;
  real_T NacCMxn;
  real_T NacCMyn;
  real_T NacCMzn;
  real_T NcIMUxn;
  real_T NcIMUyn;
  real_T NcIMUzn;
  real_T Twr2Shft;
  real_T TwrHt;
  real_T TowerBsHt;
  real_T PtfmCMxt;
  real_T PtfmCMyt;
  real_T PtfmCMzt;
  real_T PtfmRefzt;
  real_T HubMass;
  real_T HubIner;
  real_T GenIner;
  real_T NacMass;
  real_T NacYIner;
  real_T YawBrMass;
  real_T PtfmMass;
  real_T PtfmRIner;
  real_T PtfmPIner;
  real_T PtfmYIner;
  real_T GBoxEff;
  real_T GBRatio;
  real_T DTTorSpr;
  real_T DTTorDmp;
} struct0_T;
#endif /* typedef_struct0_T */

#ifndef typedef_struct1_T
#define typedef_struct1_T
typedef struct {
  real_T Cylinder1[12];
  real_T Cylinder2[12];
  real_T DU21_A17[568];
  real_T DU25_A17[560];
  real_T DU30_A17[572];
  real_T DU35_A17[540];
  real_T DU40_A17[544];
  real_T NACA64_A17[508];
} struct1_T;
#endif /* typedef_struct1_T */

#ifndef typedef_struct2_T
#define typedef_struct2_T
typedef struct {
  real_T nt;
  real_T TwrSec[11];
  real_T O1_TFA[11];
  real_T O2_TFA[11];
  real_T O1_TSS[11];
  real_T O2_TSS[11];
  real_T s11_TFA[11];
  real_T s12_TFA[11];
  real_T s22_TFA[11];
  real_T S11_TFA;
  real_T S12_TFA;
  real_T S22_TFA;
  real_T s11_TSS[11];
  real_T s12_TSS[11];
  real_T s22_TSS[11];
  real_T S11_TSS;
  real_T S12_TSS;
  real_T S22_TSS;
  real_T dO1_TFA;
  real_T dO1_TSS;
  real_T dO2_TFA;
  real_T dO2_TSS;
  real_T mT[11];
  real_T k11_TFA;
  real_T k12_TFA;
  real_T k11_TSS;
  real_T k12_TSS;
  real_T k21_TFA;
  real_T k22_TFA;
  real_T k21_TSS;
  real_T k22_TSS;
  real_T f1_TFA;
  real_T f2_TFA;
  real_T f1_TSS;
  real_T f2_TSS;
  real_T zeta1_TFA;
  real_T zeta2_TFA;
  real_T zeta1_TSS;
  real_T zeta2_TSS;
} struct2_T;
#endif /* typedef_struct2_T */

#ifndef typedef_struct3_T
#define typedef_struct3_T
typedef struct {
  real_T BldSec[19];
  real_T Twist[19];
  real_T nb;
  real_T O1_B1[19];
  real_T O2_B1[19];
  real_T O3_B1[19];
  real_T W1_B1[19];
  real_T W2_B1[19];
  real_T W3_B1[19];
  real_T s11_B1[19];
  real_T s22_B1[19];
  real_T s33_B1[19];
  real_T s12_B1[19];
  real_T s13_B1[19];
  real_T s23_B1[19];
  real_T mB1[19];
  real_T k11_B1F;
  real_T k12_B1F;
  real_T k22_B1F;
  real_T k11_B1E;
  real_T f1_B1F;
  real_T f2_B1F;
  real_T f1_B1E;
  real_T zeta1_B1F;
  real_T zeta2_B1F;
  real_T zeta1_B1E;
  real_T Cord[19];
  real_T FoilNo[19];
  real_T PitchAxis[19];
  real_T AeroCentJ1[19];
  real_T AeroCentJ2[19];
  real_T dO1_B1[19];
  real_T dO2_B1[19];
  real_T dO3_B1[19];
  real_T dW1_B1[19];
  real_T dW2_B1[19];
  real_T dW3_B1[19];
} struct3_T;
#endif /* typedef_struct3_T */

#ifndef typedef_struct4_T
#define typedef_struct4_T
typedef struct {
  struct5_T MainCol;
  real_T nStrips;
  real_T StripWidth;
  real_T StripDepths[100];
  real_T StripDia[100];
  real_T AM[36];
  real_T nBeams;
  real_T BeamLen;
  real_T Angles[3];
  real_T nt;
  real_T BeamSec[15];
  real_T dm_struct[15];
  real_T dm_add_V[15];
  real_T dm_add_H[15];
  real_T O1_V[15];
  real_T O2_V[15];
  real_T O1_H[15];
  real_T O2_H[15];
  real_T s11_V[15];
  real_T s12_V[15];
  real_T s22_V[15];
  real_T S11_V;
  real_T S12_V;
  real_T S22_V;
  real_T s11_H[15];
  real_T s12_H[15];
  real_T s22_H[15];
  real_T S11_H;
  real_T S12_H;
  real_T S22_H;
  real_T dO1_V;
  real_T dO2_V;
  real_T dO1_H;
  real_T dO2_H;
  real_T M11_V;
  real_T M22_V;
  real_T M11_H;
  real_T M22_H;
  real_T K11_V;
  real_T K22_V;
  real_T K11_H;
  real_T K22_H;
  real_T zeta1_V;
  real_T zeta2_V;
  real_T zeta1_H;
  real_T zeta2_H;
  real_T dm_V[15];
  real_T dm_H[15];
  real_T Target_Struct_Mass;
  real_T M_Tip_Struct;
  real_T AM_Tip_V;
  real_T AM_Tip_H;
  real_T Total_Appendage_Mass;
  real_T TipMass_V;
  real_T TipMass_H;
  real_T TipInertia[9];
  real_T M11_V_tot;
  real_T M22_V_tot;
  real_T M11_H_tot;
  real_T M22_H_tot;
  real_T Mooring;
  real_T WaveLoads;
} struct4_T;
#endif /* typedef_struct4_T */

#ifndef struct_emxArray_real_T
#define struct_emxArray_real_T
struct emxArray_real_T {
  real_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};
#endif /* struct_emxArray_real_T */
#ifndef typedef_emxArray_real_T
#define typedef_emxArray_real_T
typedef struct emxArray_real_T emxArray_real_T;
#endif /* typedef_emxArray_real_T */

#ifndef typedef_cell_wrap_0
#define typedef_cell_wrap_0
typedef struct {
  emxArray_real_T *f1;
} cell_wrap_0;
#endif /* typedef_cell_wrap_0 */

#ifndef typedef_struct6_T
#define typedef_struct6_T
typedef struct {
  boolean_T PitchControl;
  boolean_T AeroElastic;
  real_T y[31];
  real_T z[31];
  real_T velocity[2883];
} struct6_T;
#endif /* typedef_struct6_T */

#ifndef c_typedef_b_NominalSystemMatrix
#define c_typedef_b_NominalSystemMatrix
typedef struct {
  struct1_T Airfoils;
} b_NominalSystemMatrix_api;
#endif /* c_typedef_b_NominalSystemMatrix */

#ifndef c_typedef_NominalSystemMatrixSt
#define c_typedef_NominalSystemMatrixSt
typedef struct {
  b_NominalSystemMatrix_api f0;
} NominalSystemMatrixStackData;
#endif /* c_typedef_NominalSystemMatrixSt */

/* End of code generation (NominalSystemMatrix_types.h) */
