/*
 * Transform3.h
 *
 * Code generation for function 'Transform3'
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
void Transform3(const emlrtStack *sp, const real_T RotMat[171],
                const real_T BasisVec_data[], const int32_T BasisVec_size[3],
                real_T Out[171]);

void b_Transform3(const emlrtStack *sp, const real_T RotMat_data[],
                  const int32_T RotMat_size[3], const real_T BasisVec[171],
                  real_T Out_data[], int32_T Out_size[3]);

/* End of code generation (Transform3.h) */
