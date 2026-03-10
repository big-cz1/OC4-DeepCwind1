/*
 * reshapeSizeChecks.c
 *
 * Code generation for function 'reshapeSizeChecks'
 *
 */

/* Include files */
#include "reshapeSizeChecks.h"
#include "NominalSystemMatrix_data.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo er_emlrtRSI = {
    114,               /* lineNo */
    "computeDimsData", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\R2025b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\reshapeSizeChecks.m" /* pathName */
};

/* Function Definitions */
void computeDimsData(const emlrtStack *sp, real_T varargin_3)
{
  emlrtStack st;
  real_T d;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &er_emlrtRSI;
  if ((varargin_3 != muDoubleScalarFloor(varargin_3)) ||
      muDoubleScalarIsInf(varargin_3) || (varargin_3 < -2.147483648E+9) ||
      (varargin_3 > 2.147483647E+9)) {
    emlrtErrorWithMessageIdR2018a(
        &st, &e_emlrtRTEI, "Coder:MATLAB:NonIntegerInput",
        "Coder:MATLAB:NonIntegerInput", 4, 12, MIN_int32_T, 12, MAX_int32_T);
  }
  if (varargin_3 <= 0.0) {
    d = 0.0;
  } else {
    d = varargin_3;
  }
  if (!(d <= 2.147483647E+9)) {
    emlrtErrorWithMessageIdR2018a(&st, &f_emlrtRTEI, "Coder:MATLAB:pmaxsize",
                                  "Coder:MATLAB:pmaxsize", 0);
  }
}

/* End of code generation (reshapeSizeChecks.c) */
