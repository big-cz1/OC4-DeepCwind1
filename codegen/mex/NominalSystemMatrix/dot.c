/*
 * dot.c
 *
 * Code generation for function 'dot'
 *
 */

/* Include files */
#include "dot.h"
#include "NominalSystemMatrix.h"
#include "NominalSystemMatrix_data.h"
#include "NominalSystemMatrix_emxutil.h"
#include "NominalSystemMatrix_types.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include "blas.h"
#include <stddef.h>

/* Variable Definitions */
static emlrtRSInfo ts_emlrtRSI = {
    67,    /* lineNo */
    "dot", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\R2025b\\toolbox\\eml\\lib\\matlab\\specfun\\dot.m" /* pathName
                                                                        */
};

static emlrtRTEInfo h_emlrtRTEI = {
    12,    /* lineNo */
    23,    /* colNo */
    "dot", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\R2025b\\toolbox\\eml\\lib\\matlab\\specfun\\dot.m" /* pName
                                                                        */
};

static emlrtRTEInfo lc_emlrtRTEI = {
    60,    /* lineNo */
    20,    /* colNo */
    "dot", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\R2025b\\toolbox\\eml\\lib\\matlab\\specfun\\dot.m" /* pName
                                                                        */
};

/* Function Definitions */
void b_dot(const emlrtStack *sp, const emxArray_real_T *a,
           const emxArray_real_T *b, emxArray_real_T *c)
{
  emlrtStack b_st;
  emlrtStack st;
  const real_T *a_data;
  const real_T *b_data;
  real_T *c_data;
  int32_T i;
  int32_T i2;
  int32_T npages;
  uint32_T sz[3];
  uint32_T varargin_2[3];
  boolean_T exitg1;
  boolean_T p;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  b_data = b->data;
  a_data = a->data;
  sz[0] = 1U;
  varargin_2[0] = 1U;
  sz[1] = 3U;
  varargin_2[1] = 3U;
  sz[2] = (uint32_T)a->size[2];
  varargin_2[2] = (uint32_T)b->size[2];
  p = true;
  npages = 0;
  exitg1 = false;
  while ((!exitg1) && (npages < 3)) {
    if ((int32_T)sz[npages] != (int32_T)varargin_2[npages]) {
      p = false;
      exitg1 = true;
    } else {
      npages++;
    }
  }
  if ((!p) && ((a->size[2] != 1) || (b->size[2] != 1))) {
    emlrtErrorWithMessageIdR2018a(sp, &h_emlrtRTEI,
                                  "MATLAB:dot:InputSizeMismatch",
                                  "MATLAB:dot:InputSizeMismatch", 0);
  }
  npages = c->size[0] * c->size[1] * c->size[2];
  c->size[0] = 1;
  c->size[1] = 1;
  c->size[2] = a->size[2];
  emxEnsureCapacity_real_T(sp, c, npages, &lc_emlrtRTEI);
  c_data = c->data;
  npages = a->size[2];
  i2 = 1;
  st.site = &ts_emlrtRSI;
  if (a->size[2] > 2147483646) {
    b_st.site = &hr_emlrtRSI;
    check_forloop_overflow_error(&b_st);
  }
  for (i = 0; i < npages; i++) {
    int32_T i1;
    i1 = i2 - 1;
    i2 += 3;
    c_data[i] = (a_data[i1] * b_data[i1] + a_data[i1 + 1] * b_data[i1 + 1]) +
                a_data[i1 + 2] * b_data[i1 + 2];
  }
}

real_T c_dot(const real_T b[3])
{
  ptrdiff_t incx_t;
  ptrdiff_t incy_t;
  ptrdiff_t n_t;
  real_T a_data[3];
  a_data[0] = 1.0;
  a_data[1] = 0.0;
  a_data[2] = 0.0;
  n_t = (ptrdiff_t)3;
  incx_t = (ptrdiff_t)1;
  incy_t = (ptrdiff_t)1;
  emlrt_checkEscapedGlobals();
  return ddot(&n_t, &a_data[0], &incx_t, (real_T *)&b[0], &incy_t);
}

real_T d_dot(const real_T b[3])
{
  ptrdiff_t incx_t;
  ptrdiff_t incy_t;
  ptrdiff_t n_t;
  real_T a_data[3];
  a_data[0] = 0.0;
  a_data[1] = 0.0;
  a_data[2] = -1.0;
  n_t = (ptrdiff_t)3;
  incx_t = (ptrdiff_t)1;
  incy_t = (ptrdiff_t)1;
  emlrt_checkEscapedGlobals();
  return ddot(&n_t, &a_data[0], &incx_t, (real_T *)&b[0], &incy_t);
}

void dot(const emlrtStack *sp, const real_T a[57], const emxArray_real_T *b,
         real_T c[19])
{
  static const int8_T b_iv[3] = {1, 3, 19};
  const real_T *b_data;
  int32_T i;
  int32_T i2;
  uint32_T varargin_2[3];
  boolean_T exitg1;
  boolean_T p;
  b_data = b->data;
  varargin_2[0] = 1U;
  varargin_2[1] = 3U;
  varargin_2[2] = (uint32_T)b->size[2];
  p = true;
  i2 = 0;
  exitg1 = false;
  while ((!exitg1) && (i2 < 3)) {
    if (b_iv[i2] != (int32_T)varargin_2[i2]) {
      p = false;
      exitg1 = true;
    } else {
      i2++;
    }
  }
  if (!p) {
    emlrtErrorWithMessageIdR2018a(sp, &h_emlrtRTEI,
                                  "MATLAB:dot:InputSizeMismatch",
                                  "MATLAB:dot:InputSizeMismatch", 0);
  }
  i2 = 1;
  for (i = 0; i < 19; i++) {
    int32_T i1;
    i1 = i2 - 1;
    i2 += 3;
    c[i] = (a[i1] * b_data[i1] + a[i1 + 1] * b_data[i1 + 1]) +
           a[i1 + 2] * b_data[i1 + 2];
  }
}

real_T e_dot(const real_T b[3])
{
  ptrdiff_t incx_t;
  ptrdiff_t incy_t;
  ptrdiff_t n_t;
  real_T a_data[3];
  a_data[0] = 0.0;
  a_data[1] = 1.0;
  a_data[2] = 0.0;
  n_t = (ptrdiff_t)3;
  incx_t = (ptrdiff_t)1;
  incy_t = (ptrdiff_t)1;
  emlrt_checkEscapedGlobals();
  return ddot(&n_t, &a_data[0], &incx_t, (real_T *)&b[0], &incy_t);
}

real_T f_dot(const real_T a[3], const real_T b[3])
{
  ptrdiff_t incx_t;
  ptrdiff_t incy_t;
  ptrdiff_t n_t;
  n_t = (ptrdiff_t)3;
  incx_t = (ptrdiff_t)1;
  incy_t = (ptrdiff_t)1;
  emlrt_checkEscapedGlobals();
  return ddot(&n_t, (real_T *)&a[0], &incx_t, (real_T *)&b[0], &incy_t);
}

void g_dot(const real_T a[57], const real_T b[57], real_T c[19])
{
  int32_T i;
  int32_T i2;
  i2 = 1;
  for (i = 0; i < 19; i++) {
    int32_T i1;
    i1 = i2 - 1;
    i2 += 3;
    c[i] = (a[i1] * b[i1] + a[i1 + 1] * b[i1 + 1]) + a[i1 + 2] * b[i1 + 2];
  }
}

void h_dot(const real_T a[33], const real_T b[33], real_T c[11])
{
  int32_T i;
  int32_T i2;
  i2 = 1;
  for (i = 0; i < 11; i++) {
    int32_T i1;
    i1 = i2 - 1;
    i2 += 3;
    c[i] = (a[i1] * b[i1] + a[i1 + 1] * b[i1 + 1]) + a[i1 + 2] * b[i1 + 2];
  }
}

void i_dot(const emlrtStack *sp, const real_T a[45], const emxArray_real_T *b,
           real_T c[15])
{
  static const int8_T b_iv[3] = {1, 3, 15};
  const real_T *b_data;
  int32_T i;
  int32_T i2;
  uint32_T varargin_2[3];
  boolean_T exitg1;
  boolean_T p;
  b_data = b->data;
  varargin_2[0] = 1U;
  varargin_2[1] = 3U;
  varargin_2[2] = (uint32_T)b->size[2];
  p = true;
  i2 = 0;
  exitg1 = false;
  while ((!exitg1) && (i2 < 3)) {
    if (b_iv[i2] != (int32_T)varargin_2[i2]) {
      p = false;
      exitg1 = true;
    } else {
      i2++;
    }
  }
  if (!p) {
    emlrtErrorWithMessageIdR2018a(sp, &h_emlrtRTEI,
                                  "MATLAB:dot:InputSizeMismatch",
                                  "MATLAB:dot:InputSizeMismatch", 0);
  }
  i2 = 1;
  for (i = 0; i < 15; i++) {
    int32_T i1;
    i1 = i2 - 1;
    i2 += 3;
    c[i] = (a[i1] * b_data[i1] + a[i1 + 1] * b_data[i1 + 1]) +
           a[i1 + 2] * b_data[i1 + 2];
  }
}

real_T j_dot(const real_T b[3])
{
  ptrdiff_t incx_t;
  ptrdiff_t incy_t;
  ptrdiff_t n_t;
  real_T a_data[3];
  a_data[0] = -0.0;
  a_data[1] = -9.80665;
  a_data[2] = -0.0;
  n_t = (ptrdiff_t)3;
  incx_t = (ptrdiff_t)1;
  incy_t = (ptrdiff_t)1;
  emlrt_checkEscapedGlobals();
  return ddot(&n_t, &a_data[0], &incx_t, (real_T *)&b[0], &incy_t);
}

/* End of code generation (dot.c) */
