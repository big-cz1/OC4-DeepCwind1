/*
 * trapz.h
 *
 * Code generation for function 'trapz'
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
void b_trapz(const emlrtStack *sp, const real_T x[19], const emxArray_real_T *y,
             real_T z[3]);

void c_trapz(const real_T x[11], const real_T y[33], real_T z[3]);

real_T d_trapz(const real_T x[19], const real_T y[19]);

real_T e_trapz(const real_T x[11], const real_T y[11]);

real_T f_trapz(const emlrtStack *sp, const real_T x[15], const real_T y_data[],
               int32_T y_size);

void trapz(const real_T x[19], const real_T y[57], real_T z[3]);

/* End of code generation (trapz.h) */
