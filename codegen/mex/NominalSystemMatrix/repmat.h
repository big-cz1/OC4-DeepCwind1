/*
 * repmat.h
 *
 * Code generation for function 'repmat'
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
void b_repmat(const emlrtStack *sp, real_T varargin_3, emxArray_real_T *b);

void c_repmat(const emlrtStack *sp, real_T varargin_3, emxArray_real_T *b);

void d_repmat(const emlrtStack *sp, const real_T varargin_1[3],
              emxArray_real_T *b);

void e_repmat(const emlrtStack *sp, const real_T varargin_1[3],
              emxArray_real_T *b);

void f_repmat(const emlrtStack *sp, const real_T varargin_1[3],
              emxArray_real_T *b);

void g_repmat(const emlrtStack *sp, real_T varargin_3, emxArray_real_T *b);

void h_repmat(const emlrtStack *sp, real_T varargin_3, emxArray_real_T *b);

void i_repmat(const emlrtStack *sp, const real_T a[3],
              const real_T varargin_1[3], emxArray_real_T *b);

void j_repmat(const emlrtStack *sp, real_T varargin_3, emxArray_real_T *b);

void repmat(const emlrtStack *sp, const real_T a[3], real_T varargin_3,
            emxArray_real_T *b);

/* End of code generation (repmat.h) */
