/*
 * CheckInterpPoints.h
 *
 * Code generation for function 'CheckInterpPoints'
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
void CheckInterpPoints(const emlrtStack *sp, const real_T GridZ[31],
                       const real_T GridY[31], const emxArray_real_T *ZBlNode_Y,
                       const emxArray_real_T *ZBlNode_Z);

/* End of code generation (CheckInterpPoints.h) */
