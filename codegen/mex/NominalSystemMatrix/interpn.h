/*
 * interpn.h
 *
 * Code generation for function 'interpn'
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
real_T b_interpn(const emlrtStack *sp, const real_T varargin_2[31],
                 const real_T varargin_3[31], const real_T varargin_4[2883],
                 real_T varargin_6, real_T varargin_7);

real_T c_interpn(const emlrtStack *sp, const real_T varargin_2[31],
                 const real_T varargin_3[31], const real_T varargin_4[2883],
                 real_T varargin_6, real_T varargin_7);

real_T interpn(const emlrtStack *sp, const real_T varargin_2[31],
               const real_T varargin_3[31], const real_T varargin_4[2883],
               real_T varargin_6, real_T varargin_7);

/* End of code generation (interpn.h) */
