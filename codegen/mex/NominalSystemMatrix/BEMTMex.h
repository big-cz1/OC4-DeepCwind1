/*
 * BEMTMex.h
 *
 * Code generation for function 'BEMTMex'
 *
 */

#pragma once

/* Include files */
#include "NominalSystemMatrix_types.h"
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
void BEMTMex(const emlrtStack *sp, real_T q_GeAz, const emxArray_real_T *VMB,
             const emxArray_real_T *UMB, real_T phi_data[],
             const int32_T phi_size[2], real_T nb_Load, const real_T BlSpn[19],
             const emxArray_real_T *FlexBlSpn, real_T TipRad, real_T HubRad,
             const real_T Cord[19], const real_T Twist[19],
             const real_T Pitch[3], const real_T FoilNo[19],
             const struct1_T *Airfoils, const real_T AeroCentJ1[19],
             const real_T AeroCentJ2[19], emxArray_real_T *px,
             emxArray_real_T *py, emxArray_real_T *Mz);

real_T CallStateResidual(
    const emlrtStack *sp, real_T phi, real_T theta, real_T Vx, real_T Vy,
    real_T FoilNo, const real_T Airfoils_Cylinder1[12],
    const real_T Airfoils_Cylinder2[12], const real_T Airfoils_DU21_A17[568],
    const real_T Airfoils_DU25_A17[560], const real_T Airfoils_DU30_A17[572],
    const real_T Airfoils_DU35_A17[540], const real_T Airfoils_DU40_A17[544],
    const real_T Airfoils_NACA64_A17[508], real_T TipRad, real_T HubRad,
    real_T BlSpn, real_T Solid, real_T Azimuth);

real_T UpdateInflowAngle_anonFcn1(
    const emlrtStack *sp, real_T theta, real_T Vx, real_T Vy, real_T FoilNo,
    const real_T Airfoils_Cylinder1[12], const real_T Airfoils_Cylinder2[12],
    const real_T Airfoils_DU21_A17[568], const real_T Airfoils_DU25_A17[560],
    const real_T Airfoils_DU30_A17[572], const real_T Airfoils_DU35_A17[540],
    const real_T Airfoils_DU40_A17[544], const real_T Airfoils_NACA64_A17[508],
    real_T TipRad, real_T HubRad, real_T BlSpn, real_T Solid, real_T Azimuth);

/* End of code generation (BEMTMex.h) */
