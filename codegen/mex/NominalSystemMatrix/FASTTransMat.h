/*
 * FASTTransMat.h
 *
 * Code generation for function 'FASTTransMat'
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
void FASTTransMat(real_T O1, real_T O2, real_T O3, real_T T[9]);

void b_FASTTransMat(const emlrtStack *sp, real_T O1[19], real_T O2[19],
                    const emxArray_real_T *O3, real_T T[171]);

/* End of code generation (FASTTransMat.h) */
