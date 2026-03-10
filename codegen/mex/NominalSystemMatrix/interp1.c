/*
 * interp1.c
 *
 * Code generation for function 'interp1'
 *
 */

/* Include files */
#include "interp1.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo yt_emlrtRSI = {
    54,        /* lineNo */
    "interp1", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\R2025b\\toolbox\\eml\\lib\\matlab\\polyfun\\interp1.m" /* pathName
                                                                            */
};

static emlrtRTEInfo n_emlrtRTEI = {
    165,            /* lineNo */
    5,              /* colNo */
    "interp1_work", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\R2025b\\toolbox\\eml\\lib\\matlab\\polyfun\\interp1.m" /* pName
                                                                            */
};

static emlrtRTEInfo o_emlrtRTEI = {
    204,            /* lineNo */
    13,             /* colNo */
    "interp1_work", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\R2025b\\toolbox\\eml\\lib\\matlab\\polyfun\\interp1.m" /* pName
                                                                            */
};

/* Function Definitions */
real_T b_interp1(const emlrtStack *sp, const real_T varargin_1[142],
                 const real_T varargin_2[142], real_T varargin_3)
{
  emlrtStack st;
  real_T x[142];
  real_T y[142];
  real_T Vq;
  int32_T k;
  boolean_T tf;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &yt_emlrtRSI;
  memcpy(&y[0], &varargin_2[0], 142U * sizeof(real_T));
  memcpy(&x[0], &varargin_1[0], 142U * sizeof(real_T));
  tf = false;
  for (k = 0; k < 142; k++) {
    if (tf || muDoubleScalarIsNaN(varargin_1[k])) {
      tf = true;
    }
  }
  if (tf) {
    emlrtErrorWithMessageIdR2018a(&st, &n_emlrtRTEI, "MATLAB:interp1:NaNinX",
                                  "MATLAB:interp1:NaNinX", 0);
  }
  if (varargin_1[1] < varargin_1[0]) {
    for (k = 0; k < 71; k++) {
      Vq = x[k];
      x[k] = x[141 - k];
      x[141 - k] = Vq;
      Vq = y[k];
      y[k] = y[141 - k];
      y[141 - k] = Vq;
    }
  }
  for (k = 0; k < 141; k++) {
    if (x[k + 1] <= x[k]) {
      emlrtErrorWithMessageIdR2018a(&st, &o_emlrtRTEI,
                                    "Coder:toolbox:interp1_nonMonotonicX",
                                    "Coder:toolbox:interp1_nonMonotonicX", 0);
    }
  }
  if (muDoubleScalarIsNaN(varargin_3)) {
    Vq = rtNaN;
  } else if (varargin_3 > x[141]) {
    Vq = y[141] + (varargin_3 - x[141]) / (x[141] - x[140]) * (y[141] - y[140]);
  } else if (varargin_3 < x[0]) {
    Vq = y[0] + (varargin_3 - x[0]) / (x[1] - x[0]) * (y[1] - y[0]);
  } else {
    real_T r;
    int32_T high_i;
    int32_T low_i;
    int32_T low_ip1;
    low_i = 1;
    low_ip1 = 2;
    high_i = 142;
    while (high_i > low_ip1) {
      int32_T mid_i;
      mid_i = (low_i + high_i) >> 1;
      if (varargin_3 >= x[mid_i - 1]) {
        low_i = mid_i;
        low_ip1 = mid_i + 1;
      } else {
        high_i = mid_i;
      }
    }
    Vq = x[low_i - 1];
    r = (varargin_3 - Vq) / (x[low_i] - Vq);
    if (r == 0.0) {
      Vq = y[low_i - 1];
    } else if (r == 1.0) {
      Vq = y[low_i];
    } else {
      Vq = y[low_i - 1];
      if (!(Vq == y[low_i])) {
        Vq = (1.0 - r) * Vq + r * y[low_i];
      }
    }
  }
  return Vq;
}

real_T c_interp1(const emlrtStack *sp, const real_T varargin_1[140],
                 const real_T varargin_2[140], real_T varargin_3)
{
  emlrtStack st;
  real_T x[140];
  real_T y[140];
  real_T Vq;
  int32_T k;
  boolean_T tf;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &yt_emlrtRSI;
  memcpy(&y[0], &varargin_2[0], 140U * sizeof(real_T));
  memcpy(&x[0], &varargin_1[0], 140U * sizeof(real_T));
  tf = false;
  for (k = 0; k < 140; k++) {
    if (tf || muDoubleScalarIsNaN(varargin_1[k])) {
      tf = true;
    }
  }
  if (tf) {
    emlrtErrorWithMessageIdR2018a(&st, &n_emlrtRTEI, "MATLAB:interp1:NaNinX",
                                  "MATLAB:interp1:NaNinX", 0);
  }
  if (varargin_1[1] < varargin_1[0]) {
    for (k = 0; k < 70; k++) {
      Vq = x[k];
      x[k] = x[139 - k];
      x[139 - k] = Vq;
      Vq = y[k];
      y[k] = y[139 - k];
      y[139 - k] = Vq;
    }
  }
  for (k = 0; k < 139; k++) {
    if (x[k + 1] <= x[k]) {
      emlrtErrorWithMessageIdR2018a(&st, &o_emlrtRTEI,
                                    "Coder:toolbox:interp1_nonMonotonicX",
                                    "Coder:toolbox:interp1_nonMonotonicX", 0);
    }
  }
  if (muDoubleScalarIsNaN(varargin_3)) {
    Vq = rtNaN;
  } else if (varargin_3 > x[139]) {
    Vq = y[139] + (varargin_3 - x[139]) / (x[139] - x[138]) * (y[139] - y[138]);
  } else if (varargin_3 < x[0]) {
    Vq = y[0] + (varargin_3 - x[0]) / (x[1] - x[0]) * (y[1] - y[0]);
  } else {
    real_T r;
    int32_T high_i;
    int32_T low_i;
    int32_T low_ip1;
    low_i = 1;
    low_ip1 = 2;
    high_i = 140;
    while (high_i > low_ip1) {
      int32_T mid_i;
      mid_i = (low_i + high_i) >> 1;
      if (varargin_3 >= x[mid_i - 1]) {
        low_i = mid_i;
        low_ip1 = mid_i + 1;
      } else {
        high_i = mid_i;
      }
    }
    Vq = x[low_i - 1];
    r = (varargin_3 - Vq) / (x[low_i] - Vq);
    if (r == 0.0) {
      Vq = y[low_i - 1];
    } else if (r == 1.0) {
      Vq = y[low_i];
    } else {
      Vq = y[low_i - 1];
      if (!(Vq == y[low_i])) {
        Vq = (1.0 - r) * Vq + r * y[low_i];
      }
    }
  }
  return Vq;
}

real_T d_interp1(const emlrtStack *sp, const real_T varargin_1[143],
                 const real_T varargin_2[143], real_T varargin_3)
{
  emlrtStack st;
  real_T x[143];
  real_T y[143];
  real_T Vq;
  int32_T k;
  boolean_T tf;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &yt_emlrtRSI;
  memcpy(&y[0], &varargin_2[0], 143U * sizeof(real_T));
  memcpy(&x[0], &varargin_1[0], 143U * sizeof(real_T));
  tf = false;
  for (k = 0; k < 143; k++) {
    if (tf || muDoubleScalarIsNaN(varargin_1[k])) {
      tf = true;
    }
  }
  if (tf) {
    emlrtErrorWithMessageIdR2018a(&st, &n_emlrtRTEI, "MATLAB:interp1:NaNinX",
                                  "MATLAB:interp1:NaNinX", 0);
  }
  if (varargin_1[1] < varargin_1[0]) {
    for (k = 0; k < 71; k++) {
      Vq = x[k];
      x[k] = x[142 - k];
      x[142 - k] = Vq;
      Vq = y[k];
      y[k] = y[142 - k];
      y[142 - k] = Vq;
    }
  }
  for (k = 0; k < 142; k++) {
    if (x[k + 1] <= x[k]) {
      emlrtErrorWithMessageIdR2018a(&st, &o_emlrtRTEI,
                                    "Coder:toolbox:interp1_nonMonotonicX",
                                    "Coder:toolbox:interp1_nonMonotonicX", 0);
    }
  }
  if (muDoubleScalarIsNaN(varargin_3)) {
    Vq = rtNaN;
  } else if (varargin_3 > x[142]) {
    Vq = y[142] + (varargin_3 - x[142]) / (x[142] - x[141]) * (y[142] - y[141]);
  } else if (varargin_3 < x[0]) {
    Vq = y[0] + (varargin_3 - x[0]) / (x[1] - x[0]) * (y[1] - y[0]);
  } else {
    real_T r;
    int32_T high_i;
    int32_T low_i;
    int32_T low_ip1;
    low_i = 1;
    low_ip1 = 2;
    high_i = 143;
    while (high_i > low_ip1) {
      int32_T mid_i;
      mid_i = (low_i + high_i) >> 1;
      if (varargin_3 >= x[mid_i - 1]) {
        low_i = mid_i;
        low_ip1 = mid_i + 1;
      } else {
        high_i = mid_i;
      }
    }
    Vq = x[low_i - 1];
    r = (varargin_3 - Vq) / (x[low_i] - Vq);
    if (r == 0.0) {
      Vq = y[low_i - 1];
    } else if (r == 1.0) {
      Vq = y[low_i];
    } else {
      Vq = y[low_i - 1];
      if (!(Vq == y[low_i])) {
        Vq = (1.0 - r) * Vq + r * y[low_i];
      }
    }
  }
  return Vq;
}

real_T e_interp1(const emlrtStack *sp, const real_T varargin_1[135],
                 const real_T varargin_2[135], real_T varargin_3)
{
  emlrtStack st;
  real_T x[135];
  real_T y[135];
  real_T Vq;
  int32_T k;
  boolean_T tf;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &yt_emlrtRSI;
  memcpy(&y[0], &varargin_2[0], 135U * sizeof(real_T));
  memcpy(&x[0], &varargin_1[0], 135U * sizeof(real_T));
  tf = false;
  for (k = 0; k < 135; k++) {
    if (tf || muDoubleScalarIsNaN(varargin_1[k])) {
      tf = true;
    }
  }
  if (tf) {
    emlrtErrorWithMessageIdR2018a(&st, &n_emlrtRTEI, "MATLAB:interp1:NaNinX",
                                  "MATLAB:interp1:NaNinX", 0);
  }
  if (varargin_1[1] < varargin_1[0]) {
    for (k = 0; k < 67; k++) {
      Vq = x[k];
      x[k] = x[134 - k];
      x[134 - k] = Vq;
      Vq = y[k];
      y[k] = y[134 - k];
      y[134 - k] = Vq;
    }
  }
  for (k = 0; k < 134; k++) {
    if (x[k + 1] <= x[k]) {
      emlrtErrorWithMessageIdR2018a(&st, &o_emlrtRTEI,
                                    "Coder:toolbox:interp1_nonMonotonicX",
                                    "Coder:toolbox:interp1_nonMonotonicX", 0);
    }
  }
  if (muDoubleScalarIsNaN(varargin_3)) {
    Vq = rtNaN;
  } else if (varargin_3 > x[134]) {
    Vq = y[134] + (varargin_3 - x[134]) / (x[134] - x[133]) * (y[134] - y[133]);
  } else if (varargin_3 < x[0]) {
    Vq = y[0] + (varargin_3 - x[0]) / (x[1] - x[0]) * (y[1] - y[0]);
  } else {
    real_T r;
    int32_T high_i;
    int32_T low_i;
    int32_T low_ip1;
    low_i = 1;
    low_ip1 = 2;
    high_i = 135;
    while (high_i > low_ip1) {
      int32_T mid_i;
      mid_i = (low_i + high_i) >> 1;
      if (varargin_3 >= x[mid_i - 1]) {
        low_i = mid_i;
        low_ip1 = mid_i + 1;
      } else {
        high_i = mid_i;
      }
    }
    Vq = x[low_i - 1];
    r = (varargin_3 - Vq) / (x[low_i] - Vq);
    if (r == 0.0) {
      Vq = y[low_i - 1];
    } else if (r == 1.0) {
      Vq = y[low_i];
    } else {
      Vq = y[low_i - 1];
      if (!(Vq == y[low_i])) {
        Vq = (1.0 - r) * Vq + r * y[low_i];
      }
    }
  }
  return Vq;
}

real_T f_interp1(const emlrtStack *sp, const real_T varargin_1[136],
                 const real_T varargin_2[136], real_T varargin_3)
{
  emlrtStack st;
  real_T x[136];
  real_T y[136];
  real_T Vq;
  int32_T k;
  boolean_T tf;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &yt_emlrtRSI;
  memcpy(&y[0], &varargin_2[0], 136U * sizeof(real_T));
  memcpy(&x[0], &varargin_1[0], 136U * sizeof(real_T));
  tf = false;
  for (k = 0; k < 136; k++) {
    if (tf || muDoubleScalarIsNaN(varargin_1[k])) {
      tf = true;
    }
  }
  if (tf) {
    emlrtErrorWithMessageIdR2018a(&st, &n_emlrtRTEI, "MATLAB:interp1:NaNinX",
                                  "MATLAB:interp1:NaNinX", 0);
  }
  if (varargin_1[1] < varargin_1[0]) {
    for (k = 0; k < 68; k++) {
      Vq = x[k];
      x[k] = x[135 - k];
      x[135 - k] = Vq;
      Vq = y[k];
      y[k] = y[135 - k];
      y[135 - k] = Vq;
    }
  }
  for (k = 0; k < 135; k++) {
    if (x[k + 1] <= x[k]) {
      emlrtErrorWithMessageIdR2018a(&st, &o_emlrtRTEI,
                                    "Coder:toolbox:interp1_nonMonotonicX",
                                    "Coder:toolbox:interp1_nonMonotonicX", 0);
    }
  }
  if (muDoubleScalarIsNaN(varargin_3)) {
    Vq = rtNaN;
  } else if (varargin_3 > x[135]) {
    Vq = y[135] + (varargin_3 - x[135]) / (x[135] - x[134]) * (y[135] - y[134]);
  } else if (varargin_3 < x[0]) {
    Vq = y[0] + (varargin_3 - x[0]) / (x[1] - x[0]) * (y[1] - y[0]);
  } else {
    real_T r;
    int32_T high_i;
    int32_T low_i;
    int32_T low_ip1;
    low_i = 1;
    low_ip1 = 2;
    high_i = 136;
    while (high_i > low_ip1) {
      int32_T mid_i;
      mid_i = (low_i + high_i) >> 1;
      if (varargin_3 >= x[mid_i - 1]) {
        low_i = mid_i;
        low_ip1 = mid_i + 1;
      } else {
        high_i = mid_i;
      }
    }
    Vq = x[low_i - 1];
    r = (varargin_3 - Vq) / (x[low_i] - Vq);
    if (r == 0.0) {
      Vq = y[low_i - 1];
    } else if (r == 1.0) {
      Vq = y[low_i];
    } else {
      Vq = y[low_i - 1];
      if (!(Vq == y[low_i])) {
        Vq = (1.0 - r) * Vq + r * y[low_i];
      }
    }
  }
  return Vq;
}

real_T g_interp1(const emlrtStack *sp, const real_T varargin_1[127],
                 const real_T varargin_2[127], real_T varargin_3)
{
  emlrtStack st;
  real_T x[127];
  real_T y[127];
  real_T Vq;
  int32_T k;
  boolean_T tf;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &yt_emlrtRSI;
  memcpy(&y[0], &varargin_2[0], 127U * sizeof(real_T));
  memcpy(&x[0], &varargin_1[0], 127U * sizeof(real_T));
  tf = false;
  for (k = 0; k < 127; k++) {
    if (tf || muDoubleScalarIsNaN(varargin_1[k])) {
      tf = true;
    }
  }
  if (tf) {
    emlrtErrorWithMessageIdR2018a(&st, &n_emlrtRTEI, "MATLAB:interp1:NaNinX",
                                  "MATLAB:interp1:NaNinX", 0);
  }
  if (varargin_1[1] < varargin_1[0]) {
    for (k = 0; k < 63; k++) {
      Vq = x[k];
      x[k] = x[126 - k];
      x[126 - k] = Vq;
      Vq = y[k];
      y[k] = y[126 - k];
      y[126 - k] = Vq;
    }
  }
  for (k = 0; k < 126; k++) {
    if (x[k + 1] <= x[k]) {
      emlrtErrorWithMessageIdR2018a(&st, &o_emlrtRTEI,
                                    "Coder:toolbox:interp1_nonMonotonicX",
                                    "Coder:toolbox:interp1_nonMonotonicX", 0);
    }
  }
  if (muDoubleScalarIsNaN(varargin_3)) {
    Vq = rtNaN;
  } else if (varargin_3 > x[126]) {
    Vq = y[126] + (varargin_3 - x[126]) / (x[126] - x[125]) * (y[126] - y[125]);
  } else if (varargin_3 < x[0]) {
    Vq = y[0] + (varargin_3 - x[0]) / (x[1] - x[0]) * (y[1] - y[0]);
  } else {
    real_T r;
    int32_T high_i;
    int32_T low_i;
    int32_T low_ip1;
    low_i = 1;
    low_ip1 = 2;
    high_i = 127;
    while (high_i > low_ip1) {
      int32_T mid_i;
      mid_i = (low_i + high_i) >> 1;
      if (varargin_3 >= x[mid_i - 1]) {
        low_i = mid_i;
        low_ip1 = mid_i + 1;
      } else {
        high_i = mid_i;
      }
    }
    Vq = x[low_i - 1];
    r = (varargin_3 - Vq) / (x[low_i] - Vq);
    if (r == 0.0) {
      Vq = y[low_i - 1];
    } else if (r == 1.0) {
      Vq = y[low_i];
    } else {
      Vq = y[low_i - 1];
      if (!(Vq == y[low_i])) {
        Vq = (1.0 - r) * Vq + r * y[low_i];
      }
    }
  }
  return Vq;
}

real_T interp1(const emlrtStack *sp, const real_T varargin_1[3],
               const real_T varargin_2[3], real_T varargin_3)
{
  emlrtStack st;
  real_T x[3];
  real_T y[3];
  real_T Vq;
  int32_T k;
  boolean_T tf;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &yt_emlrtRSI;
  y[0] = varargin_2[0];
  x[0] = varargin_1[0];
  y[1] = varargin_2[1];
  x[1] = varargin_1[1];
  y[2] = varargin_2[2];
  x[2] = varargin_1[2];
  tf = false;
  for (k = 0; k < 3; k++) {
    if (tf || muDoubleScalarIsNaN(varargin_1[k])) {
      tf = true;
    }
  }
  if (tf) {
    emlrtErrorWithMessageIdR2018a(&st, &n_emlrtRTEI, "MATLAB:interp1:NaNinX",
                                  "MATLAB:interp1:NaNinX", 0);
  }
  if (varargin_1[1] < varargin_1[0]) {
    x[0] = varargin_1[2];
    x[2] = varargin_1[0];
    y[0] = varargin_2[2];
    y[2] = varargin_2[0];
  }
  if (varargin_1[1] <= x[0]) {
    emlrtErrorWithMessageIdR2018a(&st, &o_emlrtRTEI,
                                  "Coder:toolbox:interp1_nonMonotonicX",
                                  "Coder:toolbox:interp1_nonMonotonicX", 0);
  }
  if (x[2] <= varargin_1[1]) {
    emlrtErrorWithMessageIdR2018a(&st, &o_emlrtRTEI,
                                  "Coder:toolbox:interp1_nonMonotonicX",
                                  "Coder:toolbox:interp1_nonMonotonicX", 0);
  }
  if (muDoubleScalarIsNaN(varargin_3)) {
    Vq = rtNaN;
  } else if (varargin_3 > x[2]) {
    Vq = y[2] +
         (varargin_3 - x[2]) / (x[2] - varargin_1[1]) * (y[2] - varargin_2[1]);
  } else if (varargin_3 < x[0]) {
    Vq = y[0] +
         (varargin_3 - x[0]) / (varargin_1[1] - x[0]) * (varargin_2[1] - y[0]);
  } else {
    int32_T n;
    n = 0;
    if (varargin_3 >= varargin_1[1]) {
      n = 1;
    }
    Vq = (varargin_3 - x[n]) / (x[n + 1] - x[n]);
    if (Vq == 0.0) {
      Vq = y[n];
    } else if (Vq == 1.0) {
      Vq = y[n + 1];
    } else {
      real_T Vq_tmp;
      Vq_tmp = y[n + 1];
      if (y[n] == Vq_tmp) {
        Vq = y[n];
      } else {
        Vq = (1.0 - Vq) * y[n] + Vq * Vq_tmp;
      }
    }
  }
  return Vq;
}

/* End of code generation (interp1.c) */
