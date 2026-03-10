/*
 * assertValidSizeArg.c
 *
 * Code generation for function 'assertValidSizeArg'
 *
 */

/* Include files */
#include "assertValidSizeArg.h"
#include "NominalSystemMatrix_data.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRTEInfo l_emlrtRTEI = {
    49,                   /* lineNo */
    19,                   /* colNo */
    "assertValidSizeArg", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\R2025b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\assertValidSizeArg.m" /* pName */
};

/* Function Definitions */
void assertValidSizeArg(const emlrtStack *sp, const real_T varargin_1[2])
{
  real_T d;
  int32_T exitg2;
  int32_T k;
  k = 0;
  do {
    exitg2 = 0;
    if (k < 2) {
      if ((varargin_1[k] != varargin_1[k]) ||
          muDoubleScalarIsInf(varargin_1[k])) {
        emlrtErrorWithMessageIdR2018a(
            sp, &l_emlrtRTEI,
            "Coder:toolbox:eml_assert_valid_size_arg_invalidSizeVector",
            "Coder:toolbox:eml_assert_valid_size_arg_invalidSizeVector", 4, 12,
            MIN_int32_T, 12, MAX_int32_T);
      } else {
        k++;
      }
    } else {
      k = 0;
      exitg2 = 2;
    }
  } while (exitg2 == 0);
  if (exitg2 != 1) {
    boolean_T exitg1;
    exitg1 = false;
    while ((!exitg1) && (k < 2)) {
      if (varargin_1[k] > 2.147483647E+9) {
        emlrtErrorWithMessageIdR2018a(
            sp, &l_emlrtRTEI,
            "Coder:toolbox:eml_assert_valid_size_arg_invalidSizeVector",
            "Coder:toolbox:eml_assert_valid_size_arg_invalidSizeVector", 4, 12,
            MIN_int32_T, 12, MAX_int32_T);
      } else {
        k++;
      }
    }
  }
  if (varargin_1[0] <= 0.0) {
    d = 0.0;
  } else {
    d = varargin_1[0];
  }
  if (varargin_1[1] <= 0.0) {
    d = 0.0;
  } else {
    d *= varargin_1[1];
  }
  if (!(d <= 2.147483647E+9)) {
    emlrtErrorWithMessageIdR2018a(sp, &f_emlrtRTEI, "Coder:MATLAB:pmaxsize",
                                  "Coder:MATLAB:pmaxsize", 0);
  }
}

void b_assertValidSizeArg(const emlrtStack *sp, const real_T varargin_1[3])
{
  real_T d;
  int32_T exitg2;
  int32_T k;
  k = 0;
  do {
    exitg2 = 0;
    if (k < 3) {
      if ((varargin_1[k] != varargin_1[k]) ||
          muDoubleScalarIsInf(varargin_1[k])) {
        emlrtErrorWithMessageIdR2018a(
            sp, &l_emlrtRTEI,
            "Coder:toolbox:eml_assert_valid_size_arg_invalidSizeVector",
            "Coder:toolbox:eml_assert_valid_size_arg_invalidSizeVector", 4, 12,
            MIN_int32_T, 12, MAX_int32_T);
      } else {
        k++;
      }
    } else {
      k = 0;
      exitg2 = 2;
    }
  } while (exitg2 == 0);
  if (exitg2 != 1) {
    boolean_T exitg1;
    exitg1 = false;
    while ((!exitg1) && (k < 3)) {
      if (varargin_1[k] > 2.147483647E+9) {
        emlrtErrorWithMessageIdR2018a(
            sp, &l_emlrtRTEI,
            "Coder:toolbox:eml_assert_valid_size_arg_invalidSizeVector",
            "Coder:toolbox:eml_assert_valid_size_arg_invalidSizeVector", 4, 12,
            MIN_int32_T, 12, MAX_int32_T);
      } else {
        k++;
      }
    }
  }
  if (varargin_1[0] <= 0.0) {
    d = 0.0;
  } else {
    d = varargin_1[0];
  }
  if (varargin_1[1] <= 0.0) {
    d = 0.0;
  } else {
    d *= varargin_1[1];
  }
  if (varargin_1[2] <= 0.0) {
    d = 0.0;
  } else {
    d *= varargin_1[2];
  }
  if (!(d <= 2.147483647E+9)) {
    emlrtErrorWithMessageIdR2018a(sp, &f_emlrtRTEI, "Coder:MATLAB:pmaxsize",
                                  "Coder:MATLAB:pmaxsize", 0);
  }
}

/* End of code generation (assertValidSizeArg.c) */
