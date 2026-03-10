/*
 * dot.h
 *
 * Code generation for function 'dot'
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
void b_dot(const emlrtStack *sp, const emxArray_real_T *a,
           const emxArray_real_T *b, emxArray_real_T *c);

real_T c_dot(const real_T b[3]);

real_T d_dot(const real_T b[3]);

void dot(const emlrtStack *sp, const real_T a[57], const emxArray_real_T *b,
         real_T c[19]);

real_T e_dot(const real_T b[3]);

real_T f_dot(const real_T a[3], const real_T b[3]);

void g_dot(const real_T a[57], const real_T b[57], real_T c[19]);

void h_dot(const real_T a[33], const real_T b[33], real_T c[11]);

void i_dot(const emlrtStack *sp, const real_T a[45], const emxArray_real_T *b,
           real_T c[15]);

real_T j_dot(const real_T b[3]);

/* End of code generation (dot.h) */
