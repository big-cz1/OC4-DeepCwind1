/*
 * cross.h
 *
 * Code generation for function 'cross'
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
void b_cross(const emlrtStack *sp, const emxArray_real_T *a, const real_T b[45],
             emxArray_real_T *c);

void c_cross(const emlrtStack *sp, const emxArray_real_T *a, const real_T b[33],
             emxArray_real_T *c);

void cross(const emlrtStack *sp, const emxArray_real_T *a, const real_T b[57],
           emxArray_real_T *c);

void d_cross(const emlrtStack *sp, const emxArray_real_T *a,
             const emxArray_real_T *b, emxArray_real_T *c);

void e_cross(const real_T a[57], const real_T b[57], real_T c[57]);

void f_cross(const real_T a[33], const real_T b[33], real_T c[33]);

/* End of code generation (cross.h) */
