/*
 * trapz.c
 *
 * Code generation for function 'trapz'
 *
 */

/* Include files */
#include "trapz.h"
#include "NominalSystemMatrix.h"
#include "NominalSystemMatrix_emxutil.h"
#include "NominalSystemMatrix_types.h"
#include "rt_nonfinite.h"
#include "blas.h"
#include <emmintrin.h>
#include <stddef.h>

/* Variable Definitions */
static emlrtRSInfo xu_emlrtRSI = {
    12,      /* lineNo */
    "trapz", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\R2025b\\toolbox\\eml\\lib\\matlab\\datafun\\trapz.m" /* pathName
                                                                          */
};

static emlrtRSInfo yu_emlrtRSI = {
    106,        /* lineNo */
    "trapwork", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\R2025b\\toolbox\\eml\\lib\\matlab\\datafun\\trapz.m" /* pathName
                                                                          */
};

static emlrtRSInfo av_emlrtRSI = {
    142,         /* lineNo */
    "trapzFlat", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\R2025b\\toolbox\\eml\\lib\\matlab\\datafun\\trapz.m" /* pathName
                                                                          */
};

static emlrtRSInfo dv_emlrtRSI = {
    98,      /* lineNo */
    "xgemv", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\R2025b\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\xgemv."
    "m" /* pathName */
};

static emlrtRSInfo ev_emlrtRSI = {
    113,          /* lineNo */
    "xgemv_blas", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\R2025b\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\xgemv."
    "m" /* pathName */
};

static emlrtRSInfo hv_emlrtRSI = {
    37,      /* lineNo */
    "trapz", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\R2025b\\toolbox\\eml\\lib\\matlab\\datafun\\trapz.m" /* pathName
                                                                          */
};

static emlrtRTEInfo r_emlrtRTEI = {
    71,         /* lineNo */
    27,         /* colNo */
    "trapwork", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\R2025b\\toolbox\\eml\\lib\\matlab\\datafun\\trapz.m" /* pName
                                                                          */
};

static emlrtRTEInfo t_emlrtRTEI = {
    59,         /* lineNo */
    27,         /* colNo */
    "trapwork", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\R2025b\\toolbox\\eml\\lib\\matlab\\datafun\\trapz.m" /* pName
                                                                          */
};

static emlrtRTEInfo v_emlrtRTEI = {
    35,      /* lineNo */
    31,      /* colNo */
    "trapz", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\R2025b\\toolbox\\eml\\lib\\matlab\\datafun\\trapz.m" /* pName
                                                                          */
};

static emlrtRTEInfo nc_emlrtRTEI = {
    211,     /* lineNo */
    24,      /* colNo */
    "trapz", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\R2025b\\toolbox\\eml\\lib\\matlab\\datafun\\trapz.m" /* pName
                                                                          */
};

static emlrtRTEInfo oc_emlrtRTEI = {
    96,      /* lineNo */
    5,       /* colNo */
    "trapz", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\R2025b\\toolbox\\eml\\lib\\matlab\\datafun\\trapz.m" /* pName
                                                                          */
};

/* Function Definitions */
void b_trapz(const emlrtStack *sp, const real_T x[19], const emxArray_real_T *y,
             real_T z[3])
{
  ptrdiff_t incx_t;
  ptrdiff_t incy_t;
  ptrdiff_t lda_t;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  emxArray_real_T *c;
  const real_T *y_data;
  real_T alpha1;
  real_T beta1;
  real_T *c_data;
  int32_T i;
  int32_T k;
  char_T TRANSA;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  y_data = y->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  st.site = &xu_emlrtRSI;
  if (y->size[2] != 19) {
    emlrtErrorWithMessageIdR2018a(&st, &r_emlrtRTEI,
                                  "MATLAB:trapz:LengthXmismatchY",
                                  "MATLAB:trapz:LengthXmismatchY", 0);
  }
  emxInit_real_T(&st, &c, 1, &oc_emlrtRTEI);
  i = c->size[0];
  c->size[0] = 19;
  emxEnsureCapacity_real_T(&st, c, i, &nc_emlrtRTEI);
  c_data = c->data;
  c_data[0] = 0.5 * (x[1] - x[0]);
  for (k = 2; k <= 16; k += 2) {
    _mm_storeu_pd(
        &c_data[k - 1],
        _mm_mul_pd(_mm_set1_pd(0.5),
                   _mm_sub_pd(_mm_loadu_pd(&x[k]), _mm_loadu_pd(&x[k - 2]))));
  }
  c_data[17] = 0.5 * (x[18] - x[16]);
  c_data[18] = 0.5 * (x[18] - x[17]);
  b_st.site = &yu_emlrtRSI;
  z[0] = 0.0;
  z[1] = 0.0;
  z[2] = 0.0;
  c_st.site = &av_emlrtRSI;
  d_st.site = &dv_emlrtRSI;
  e_st.site = &ev_emlrtRSI;
  alpha1 = 1.0;
  beta1 = 0.0;
  TRANSA = 'N';
  m_t = (ptrdiff_t)3;
  n_t = (ptrdiff_t)19;
  lda_t = (ptrdiff_t)3;
  incx_t = (ptrdiff_t)1;
  incy_t = (ptrdiff_t)1;
  emlrt_checkEscapedGlobals();
  dgemv(&TRANSA, &m_t, &n_t, &alpha1, (real_T *)&y_data[0], &lda_t, &c_data[0],
        &incx_t, &beta1, &z[0], &incy_t);
  emxFree_real_T(&e_st, &c);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void c_trapz(const real_T x[11], const real_T y[33], real_T z[3])
{
  __m128d r;
  real_T c[11];
  int32_T ia;
  int32_T iac;
  int32_T ix;
  c[0] = 0.5 * (x[1] - x[0]);
  r = _mm_set1_pd(0.5);
  _mm_storeu_pd(&c[1], _mm_mul_pd(r, _mm_sub_pd(_mm_loadu_pd(&x[2]),
                                                _mm_loadu_pd(&x[0]))));
  _mm_storeu_pd(&c[3], _mm_mul_pd(r, _mm_sub_pd(_mm_loadu_pd(&x[4]),
                                                _mm_loadu_pd(&x[2]))));
  _mm_storeu_pd(&c[5], _mm_mul_pd(r, _mm_sub_pd(_mm_loadu_pd(&x[6]),
                                                _mm_loadu_pd(&x[4]))));
  _mm_storeu_pd(&c[7], _mm_mul_pd(r, _mm_sub_pd(_mm_loadu_pd(&x[8]),
                                                _mm_loadu_pd(&x[6]))));
  c[9] = 0.5 * (x[10] - x[8]);
  c[10] = 0.5 * (x[10] - x[9]);
  z[0] = 0.0;
  z[1] = 0.0;
  z[2] = 0.0;
  ix = 0;
  for (iac = 0; iac <= 30; iac += 3) {
    int32_T i;
    i = iac + 3;
    for (ia = iac + 1; ia <= i; ia++) {
      int32_T z_tmp;
      z_tmp = (ia - iac) - 1;
      z[z_tmp] += y[ia - 1] * c[ix];
    }
    ix++;
  }
}

real_T d_trapz(const real_T x[19], const real_T y[19])
{
  real_T c[19];
  real_T z;
  int32_T ia;
  int32_T ix;
  int32_T k;
  c[0] = 0.5 * (x[1] - x[0]);
  for (k = 0; k <= 14; k += 2) {
    _mm_storeu_pd(&c[k + 1], _mm_mul_pd(_mm_set1_pd(0.5),
                                        _mm_sub_pd(_mm_loadu_pd(&x[k + 2]),
                                                   _mm_loadu_pd(&x[k]))));
  }
  c[17] = 0.5 * (x[18] - x[16]);
  c[18] = 0.5 * (x[18] - x[17]);
  z = 0.0;
  ix = 0;
  for (k = 0; k < 19; k++) {
    int32_T iac;
    iac = k + 1;
    for (ia = iac; ia <= iac; ia++) {
      z += y[ia - 1] * c[ix];
    }
    ix++;
  }
  return z;
}

real_T e_trapz(const real_T x[11], const real_T y[11])
{
  __m128d r;
  real_T c[11];
  real_T z;
  int32_T ia;
  int32_T iac;
  int32_T ix;
  c[0] = 0.5 * (x[1] - x[0]);
  r = _mm_set1_pd(0.5);
  _mm_storeu_pd(&c[1], _mm_mul_pd(r, _mm_sub_pd(_mm_loadu_pd(&x[2]),
                                                _mm_loadu_pd(&x[0]))));
  _mm_storeu_pd(&c[3], _mm_mul_pd(r, _mm_sub_pd(_mm_loadu_pd(&x[4]),
                                                _mm_loadu_pd(&x[2]))));
  _mm_storeu_pd(&c[5], _mm_mul_pd(r, _mm_sub_pd(_mm_loadu_pd(&x[6]),
                                                _mm_loadu_pd(&x[4]))));
  _mm_storeu_pd(&c[7], _mm_mul_pd(r, _mm_sub_pd(_mm_loadu_pd(&x[8]),
                                                _mm_loadu_pd(&x[6]))));
  c[9] = 0.5 * (x[10] - x[8]);
  c[10] = 0.5 * (x[10] - x[9]);
  z = 0.0;
  ix = 0;
  for (iac = 0; iac < 11; iac++) {
    int32_T b_iac;
    b_iac = iac + 1;
    for (ia = b_iac; ia <= b_iac; ia++) {
      z += y[ia - 1] * c[ix];
    }
    ix++;
  }
  return z;
}

real_T f_trapz(const emlrtStack *sp, const real_T x[15], const real_T y_data[],
               int32_T y_size)
{
  ptrdiff_t incx_t;
  ptrdiff_t incy_t;
  ptrdiff_t lda_t;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  emlrtStack st;
  real_T c_data[15];
  real_T alpha1;
  real_T beta1;
  real_T z;
  int32_T k;
  char_T TRANSA;
  st.prev = sp;
  st.tls = sp->tls;
  if (y_size == 1) {
    emlrtErrorWithMessageIdR2018a(sp, &v_emlrtRTEI, "Coder:toolbox:dimNotConst",
                                  "Coder:toolbox:dimNotConst", 0);
  }
  st.site = &hv_emlrtRSI;
  if (y_size != 15) {
    emlrtErrorWithMessageIdR2018a(&st, &t_emlrtRTEI,
                                  "MATLAB:trapz:LengthXmismatchY",
                                  "MATLAB:trapz:LengthXmismatchY", 0);
  }
  z = 0.0;
  c_data[0] = 0.5 * (x[1] - x[0]);
  for (k = 2; k <= 12; k += 2) {
    _mm_storeu_pd(
        &c_data[k - 1],
        _mm_mul_pd(_mm_set1_pd(0.5),
                   _mm_sub_pd(_mm_loadu_pd(&x[k]), _mm_loadu_pd(&x[k - 2]))));
  }
  c_data[13] = 0.5 * (x[14] - x[12]);
  c_data[14] = 0.5 * (x[14] - x[13]);
  alpha1 = 1.0;
  beta1 = 0.0;
  TRANSA = 'T';
  m_t = (ptrdiff_t)15;
  n_t = (ptrdiff_t)1;
  lda_t = (ptrdiff_t)15;
  incx_t = (ptrdiff_t)1;
  incy_t = (ptrdiff_t)1;
  emlrt_checkEscapedGlobals();
  dgemv(&TRANSA, &m_t, &n_t, &alpha1, (real_T *)&y_data[0], &lda_t, &c_data[0],
        &incx_t, &beta1, &z, &incy_t);
  return z;
}

void trapz(const real_T x[19], const real_T y[57], real_T z[3])
{
  real_T c[19];
  int32_T ia;
  int32_T ix;
  int32_T k;
  c[0] = 0.5 * (x[1] - x[0]);
  for (k = 0; k <= 14; k += 2) {
    _mm_storeu_pd(&c[k + 1], _mm_mul_pd(_mm_set1_pd(0.5),
                                        _mm_sub_pd(_mm_loadu_pd(&x[k + 2]),
                                                   _mm_loadu_pd(&x[k]))));
  }
  c[17] = 0.5 * (x[18] - x[16]);
  c[18] = 0.5 * (x[18] - x[17]);
  z[0] = 0.0;
  z[1] = 0.0;
  z[2] = 0.0;
  ix = 0;
  for (k = 0; k <= 54; k += 3) {
    int32_T i;
    i = k + 3;
    for (ia = k + 1; ia <= i; ia++) {
      int32_T z_tmp;
      z_tmp = (ia - k) - 1;
      z[z_tmp] += y[ia - 1] * c[ix];
    }
    ix++;
  }
}

/* End of code generation (trapz.c) */
