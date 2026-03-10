/*
 * interpn.c
 *
 * Code generation for function 'interpn'
 *
 */

/* Include files */
#include "interpn.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static emlrtRTEInfo k_emlrtRTEI = {
    90,        /* lineNo */
    39,        /* colNo */
    "interpn", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\R2025b\\toolbox\\eml\\lib\\matlab\\polyfun\\interpn.m" /* pName
                                                                            */
};

/* Function Definitions */
real_T b_interpn(const emlrtStack *sp, const real_T varargin_2[31],
                 const real_T varargin_3[31], const real_T varargin_4[2883],
                 real_T varargin_6, real_T varargin_7)
{
  static const int8_T vbbidx[8] = {1, 2, 4, 5, 94, 95, 97, 98};
  real_T Xq[3];
  real_T xmax[3];
  real_T xmin[3];
  real_T Vq;
  int32_T d;
  int32_T i;
  int32_T low_ip1;
  boolean_T b;
  boolean_T exitg1;
  low_ip1 = 0;
  exitg1 = false;
  while ((!exitg1) && (low_ip1 < 30)) {
    if (!(varargin_2[low_ip1] < varargin_2[low_ip1 + 1])) {
      emlrtErrorWithMessageIdR2018a(sp, &k_emlrtRTEI,
                                    "Coder:toolbox:NonIncreasing",
                                    "Coder:toolbox:NonIncreasing", 0);
    } else {
      low_ip1++;
    }
  }
  low_ip1 = 0;
  exitg1 = false;
  while ((!exitg1) && (low_ip1 < 30)) {
    if (!(varargin_3[low_ip1] < varargin_3[low_ip1 + 1])) {
      emlrtErrorWithMessageIdR2018a(sp, &k_emlrtRTEI,
                                    "Coder:toolbox:NonIncreasing",
                                    "Coder:toolbox:NonIncreasing", 0);
    } else {
      low_ip1++;
    }
  }
  Xq[1] = varargin_6;
  Xq[2] = varargin_7;
  xmin[0] = 1.0;
  xmax[0] = 3.0;
  xmin[1] = varargin_2[0];
  xmax[1] = varargin_2[30];
  xmin[2] = varargin_3[0];
  xmax[2] = varargin_3[30];
  Xq[0] = 2.0;
  b = true;
  for (i = 0; i < 3; i++) {
    if (b) {
      Vq = Xq[i];
      if ((!(Vq >= xmin[i])) || (!(Vq <= xmax[i]))) {
        b = false;
      }
    } else {
      b = false;
    }
  }
  if (!b) {
    Vq = rtNaN;
  } else {
    real_T vbox[8];
    real_T xbox[6];
    int32_T b_low_i;
    int32_T high_i;
    int32_T low_i;
    int32_T mid_i;
    xbox[0] = 2.0;
    xbox[1] = 3.0;
    low_i = 1;
    low_ip1 = 2;
    high_i = 31;
    while (high_i > low_ip1) {
      mid_i = (low_i + high_i) >> 1;
      if (varargin_6 >= varargin_2[mid_i - 1]) {
        low_i = mid_i;
        low_ip1 = mid_i + 1;
      } else {
        high_i = mid_i;
      }
    }
    xbox[2] = varargin_2[low_i - 1];
    xbox[3] = varargin_2[low_i];
    b_low_i = 1;
    low_ip1 = 2;
    high_i = 31;
    while (high_i > low_ip1) {
      mid_i = (b_low_i + high_i) >> 1;
      if (varargin_7 >= varargin_3[mid_i - 1]) {
        b_low_i = mid_i;
        low_ip1 = mid_i + 1;
      } else {
        high_i = mid_i;
      }
    }
    low_ip1 = (low_i - 1) * 3 + (b_low_i - 1) * 93;
    xbox[4] = varargin_3[b_low_i - 1];
    xbox[5] = varargin_3[b_low_i];
    for (i = 0; i < 8; i++) {
      vbox[i] = varargin_4[vbbidx[i] + low_ip1];
    }
    for (d = 0; d < 3; d++) {
      real_T b_d;
      high_i = 1 << (2 - d);
      low_ip1 = d << 1;
      Vq = xbox[low_ip1];
      b_d = Xq[d];
      if (b_d == Vq) {
        for (i = 0; i < high_i; i++) {
          vbox[i] = vbox[((i + 1) << 1) - 2];
        }
      } else {
        real_T d1;
        d1 = xbox[low_ip1 + 1];
        if (b_d == d1) {
          for (i = 0; i < high_i; i++) {
            vbox[i] = vbox[((i + 1) << 1) - 1];
          }
        } else {
          Vq = (b_d - Vq) / (d1 - Vq);
          for (i = 0; i < high_i; i++) {
            low_ip1 = ((i + 1) << 1) - 1;
            vbox[i] = (1.0 - Vq) * vbox[low_ip1 - 1] + Vq * vbox[low_ip1];
          }
        }
      }
    }
    Vq = vbox[0];
  }
  return Vq;
}

real_T c_interpn(const emlrtStack *sp, const real_T varargin_2[31],
                 const real_T varargin_3[31], const real_T varargin_4[2883],
                 real_T varargin_6, real_T varargin_7)
{
  static const int8_T vbbidx[8] = {1, 2, 4, 5, 94, 95, 97, 98};
  real_T Xq[3];
  real_T xmax[3];
  real_T xmin[3];
  real_T Vq;
  int32_T d;
  int32_T i;
  int32_T low_ip1;
  boolean_T b;
  boolean_T exitg1;
  low_ip1 = 0;
  exitg1 = false;
  while ((!exitg1) && (low_ip1 < 30)) {
    if (!(varargin_2[low_ip1] < varargin_2[low_ip1 + 1])) {
      emlrtErrorWithMessageIdR2018a(sp, &k_emlrtRTEI,
                                    "Coder:toolbox:NonIncreasing",
                                    "Coder:toolbox:NonIncreasing", 0);
    } else {
      low_ip1++;
    }
  }
  low_ip1 = 0;
  exitg1 = false;
  while ((!exitg1) && (low_ip1 < 30)) {
    if (!(varargin_3[low_ip1] < varargin_3[low_ip1 + 1])) {
      emlrtErrorWithMessageIdR2018a(sp, &k_emlrtRTEI,
                                    "Coder:toolbox:NonIncreasing",
                                    "Coder:toolbox:NonIncreasing", 0);
    } else {
      low_ip1++;
    }
  }
  Xq[1] = varargin_6;
  Xq[2] = varargin_7;
  xmin[0] = 1.0;
  xmax[0] = 3.0;
  xmin[1] = varargin_2[0];
  xmax[1] = varargin_2[30];
  xmin[2] = varargin_3[0];
  xmax[2] = varargin_3[30];
  Xq[0] = 3.0;
  b = true;
  for (i = 0; i < 3; i++) {
    if (b) {
      Vq = Xq[i];
      if ((!(Vq >= xmin[i])) || (!(Vq <= xmax[i]))) {
        b = false;
      }
    } else {
      b = false;
    }
  }
  if (!b) {
    Vq = rtNaN;
  } else {
    real_T vbox[8];
    real_T xbox[6];
    int32_T b_low_i;
    int32_T high_i;
    int32_T low_i;
    int32_T mid_i;
    xbox[0] = 2.0;
    xbox[1] = 3.0;
    low_i = 1;
    low_ip1 = 2;
    high_i = 31;
    while (high_i > low_ip1) {
      mid_i = (low_i + high_i) >> 1;
      if (varargin_6 >= varargin_2[mid_i - 1]) {
        low_i = mid_i;
        low_ip1 = mid_i + 1;
      } else {
        high_i = mid_i;
      }
    }
    xbox[2] = varargin_2[low_i - 1];
    xbox[3] = varargin_2[low_i];
    b_low_i = 1;
    low_ip1 = 2;
    high_i = 31;
    while (high_i > low_ip1) {
      mid_i = (b_low_i + high_i) >> 1;
      if (varargin_7 >= varargin_3[mid_i - 1]) {
        b_low_i = mid_i;
        low_ip1 = mid_i + 1;
      } else {
        high_i = mid_i;
      }
    }
    low_ip1 = (low_i - 1) * 3 + (b_low_i - 1) * 93;
    xbox[4] = varargin_3[b_low_i - 1];
    xbox[5] = varargin_3[b_low_i];
    for (i = 0; i < 8; i++) {
      vbox[i] = varargin_4[vbbidx[i] + low_ip1];
    }
    for (d = 0; d < 3; d++) {
      real_T b_d;
      high_i = 1 << (2 - d);
      low_ip1 = d << 1;
      Vq = xbox[low_ip1];
      b_d = Xq[d];
      if (b_d == Vq) {
        for (i = 0; i < high_i; i++) {
          vbox[i] = vbox[((i + 1) << 1) - 2];
        }
      } else {
        real_T d1;
        d1 = xbox[low_ip1 + 1];
        if (b_d == d1) {
          for (i = 0; i < high_i; i++) {
            vbox[i] = vbox[((i + 1) << 1) - 1];
          }
        } else {
          Vq = (b_d - Vq) / (d1 - Vq);
          for (i = 0; i < high_i; i++) {
            low_ip1 = ((i + 1) << 1) - 1;
            vbox[i] = (1.0 - Vq) * vbox[low_ip1 - 1] + Vq * vbox[low_ip1];
          }
        }
      }
    }
    Vq = vbox[0];
  }
  return Vq;
}

real_T interpn(const emlrtStack *sp, const real_T varargin_2[31],
               const real_T varargin_3[31], const real_T varargin_4[2883],
               real_T varargin_6, real_T varargin_7)
{
  static const int8_T vbbidx[8] = {1, 2, 4, 5, 94, 95, 97, 98};
  real_T xbox[6];
  real_T Xq[3];
  real_T xmax[3];
  real_T xmin[3];
  real_T Vq;
  int32_T d;
  int32_T i;
  int32_T low_ip1;
  boolean_T b;
  boolean_T exitg1;
  low_ip1 = 0;
  exitg1 = false;
  while ((!exitg1) && (low_ip1 < 30)) {
    if (!(varargin_2[low_ip1] < varargin_2[low_ip1 + 1])) {
      emlrtErrorWithMessageIdR2018a(sp, &k_emlrtRTEI,
                                    "Coder:toolbox:NonIncreasing",
                                    "Coder:toolbox:NonIncreasing", 0);
    } else {
      low_ip1++;
    }
  }
  low_ip1 = 0;
  exitg1 = false;
  while ((!exitg1) && (low_ip1 < 30)) {
    if (!(varargin_3[low_ip1] < varargin_3[low_ip1 + 1])) {
      emlrtErrorWithMessageIdR2018a(sp, &k_emlrtRTEI,
                                    "Coder:toolbox:NonIncreasing",
                                    "Coder:toolbox:NonIncreasing", 0);
    } else {
      low_ip1++;
    }
  }
  Xq[1] = varargin_6;
  Xq[2] = varargin_7;
  xmin[0] = 1.0;
  xmax[0] = 3.0;
  xmin[1] = varargin_2[0];
  xmax[1] = varargin_2[30];
  xmin[2] = varargin_3[0];
  xmax[2] = varargin_3[30];
  Xq[0] = 1.0;
  b = true;
  for (i = 0; i < 3; i++) {
    if (b) {
      Vq = Xq[i];
      if ((!(Vq >= xmin[i])) || (!(Vq <= xmax[i]))) {
        b = false;
      }
    } else {
      b = false;
    }
  }
  if (!b) {
    Vq = rtNaN;
  } else {
    real_T vbox[8];
    int32_T b_low_i;
    int32_T high_i;
    int32_T low_i;
    int32_T mid_i;
    xbox[0] = 1.0;
    xbox[1] = 2.0;
    low_i = 1;
    low_ip1 = 2;
    high_i = 31;
    while (high_i > low_ip1) {
      mid_i = (low_i + high_i) >> 1;
      if (varargin_6 >= varargin_2[mid_i - 1]) {
        low_i = mid_i;
        low_ip1 = mid_i + 1;
      } else {
        high_i = mid_i;
      }
    }
    xbox[2] = varargin_2[low_i - 1];
    xbox[3] = varargin_2[low_i];
    b_low_i = 1;
    low_ip1 = 2;
    high_i = 31;
    while (high_i > low_ip1) {
      mid_i = (b_low_i + high_i) >> 1;
      if (varargin_7 >= varargin_3[mid_i - 1]) {
        b_low_i = mid_i;
        low_ip1 = mid_i + 1;
      } else {
        high_i = mid_i;
      }
    }
    low_ip1 = (low_i - 1) * 3 + (b_low_i - 1) * 93;
    xbox[4] = varargin_3[b_low_i - 1];
    xbox[5] = varargin_3[b_low_i];
    for (i = 0; i < 8; i++) {
      vbox[i] = varargin_4[(vbbidx[i] + low_ip1) - 1];
    }
    for (d = 0; d < 3; d++) {
      real_T b_d;
      high_i = 1 << (2 - d);
      low_ip1 = d << 1;
      Vq = xbox[low_ip1];
      b_d = Xq[d];
      if (b_d == Vq) {
        for (i = 0; i < high_i; i++) {
          vbox[i] = vbox[((i + 1) << 1) - 2];
        }
      } else {
        real_T d1;
        d1 = xbox[low_ip1 + 1];
        if (b_d == d1) {
          for (i = 0; i < high_i; i++) {
            vbox[i] = vbox[((i + 1) << 1) - 1];
          }
        } else {
          Vq = (b_d - Vq) / (d1 - Vq);
          for (i = 0; i < high_i; i++) {
            low_ip1 = ((i + 1) << 1) - 1;
            vbox[i] = (1.0 - Vq) * vbox[low_ip1 - 1] + Vq * vbox[low_ip1];
          }
        }
      }
    }
    Vq = vbox[0];
  }
  return Vq;
}

/* End of code generation (interpn.c) */
