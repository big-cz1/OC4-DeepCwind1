/*
 * coprod.h
 *
 * Code generation for function 'coprod'
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
void b_coprod(const emlrtStack *sp, const emxArray_real_T *vec,
              const real_T Coordinate[3], emxArray_real_T *out);

void c_coprod(const emlrtStack *sp, const real_T vec[19],
              const emxArray_real_T *Coordinate, real_T out[57]);

void coprod(const emlrtStack *sp, const emxArray_real_T *vec,
            const real_T Coordinate_data[], const int32_T Coordinate_size[3],
            emxArray_real_T *out);

void d_coprod(const emlrtStack *sp, const real_T vec[11],
              const emxArray_real_T *Coordinate, real_T out[33]);

/* End of code generation (coprod.h) */
