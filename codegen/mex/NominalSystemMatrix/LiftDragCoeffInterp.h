/*
 * LiftDragCoeffInterp.h
 *
 * Code generation for function 'LiftDragCoeffInterp'
 *
 */

#pragma once

/* Include files */
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
real_T LiftDragCoeffInterp(const emlrtStack *sp, real_T AOA, real_T FoilNo,
                           const real_T Airfoils_Cylinder1[12],
                           const real_T Airfoils_Cylinder2[12],
                           const real_T Airfoils_DU21_A17[568],
                           const real_T Airfoils_DU25_A17[560],
                           const real_T Airfoils_DU30_A17[572],
                           const real_T Airfoils_DU35_A17[540],
                           const real_T Airfoils_DU40_A17[544],
                           const real_T Airfoils_NACA64_A17[508], real_T *Cd);

/* End of code generation (LiftDragCoeffInterp.h) */
