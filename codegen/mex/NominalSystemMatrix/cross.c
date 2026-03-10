/*
 * cross.c
 *
 * Code generation for function 'cross'
 *
 */

/* Include files */
#include "cross.h"
#include "NominalSystemMatrix_data.h"
#include "NominalSystemMatrix_emxutil.h"
#include "NominalSystemMatrix_types.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include <emmintrin.h>

/* Variable Definitions */
static emlrtRSInfo nr_emlrtRSI = {
    67,      /* lineNo */
    "cross", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\R2025b\\toolbox\\eml\\lib\\matlab\\specfun\\cross.m" /* pathName
                                                                          */
};

static emlrtRSInfo or_emlrtRSI = {
    69,      /* lineNo */
    "cross", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\R2025b\\toolbox\\eml\\lib\\matlab\\specfun\\cross.m" /* pathName
                                                                          */
};

static emlrtRTEInfo g_emlrtRTEI = {
    36,      /* lineNo */
    19,      /* colNo */
    "cross", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\R2025b\\toolbox\\eml\\lib\\matlab\\specfun\\cross.m" /* pName
                                                                          */
};

static emlrtRTEInfo kc_emlrtRTEI = {
    38,      /* lineNo */
    24,      /* colNo */
    "cross", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\R2025b\\toolbox\\eml\\lib\\matlab\\specfun\\cross.m" /* pName
                                                                          */
};

/* Function Definitions */
void b_cross(const emlrtStack *sp, const emxArray_real_T *a, const real_T b[45],
             emxArray_real_T *c)
{
  static const int8_T b_iv[3] = {1, 3, 15};
  emlrtStack b_st;
  emlrtStack st;
  const real_T *a_data;
  real_T *c_data;
  int32_T i1;
  int32_T iStart;
  int32_T k;
  uint32_T uv[3];
  boolean_T exitg1;
  boolean_T p;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  a_data = a->data;
  uv[0] = 1U;
  uv[1] = 3U;
  uv[2] = (uint32_T)a->size[2];
  p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 3)) {
    if ((int32_T)uv[k] != b_iv[k]) {
      p = false;
      exitg1 = true;
    } else {
      k++;
    }
  }
  if (!p) {
    emlrtErrorWithMessageIdR2018a(sp, &g_emlrtRTEI,
                                  "MATLAB:cross:InputSizeMismatch",
                                  "MATLAB:cross:InputSizeMismatch", 0);
  }
  k = c->size[0] * c->size[1] * c->size[2];
  c->size[0] = 1;
  c->size[1] = 3;
  c->size[2] = (int32_T)uv[2];
  emxEnsureCapacity_real_T(sp, c, k, &kc_emlrtRTEI);
  c_data = c->data;
  if (a->size[2] != 0) {
    k = 3;
    if (a->size[2] == 1) {
      k = 2;
    }
    if (k <= 2) {
      k = 1;
    } else {
      k = 3 * (a->size[2] - 1) + 1;
    }
    st.site = &nr_emlrtRSI;
    if (k > 2147483644) {
      b_st.site = &hr_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }
    for (iStart = 1; iStart <= k; iStart += 3) {
      int32_T vectorUB;
      st.site = &or_emlrtRSI;
      vectorUB = iStart - 2;
      for (i1 = iStart; i1 <= vectorUB; i1 += 2) {
        __m128d r;
        __m128d r1;
        __m128d r2;
        r = _mm_loadu_pd(&b[i1 + 1]);
        r1 = _mm_loadu_pd(&b[i1]);
        _mm_storeu_pd(
            &c_data[i1 - 1],
            _mm_sub_pd(_mm_mul_pd(_mm_loadu_pd(&a_data[i1]), r),
                       _mm_mul_pd(_mm_loadu_pd(&a_data[i1 + 1]), r1)));
        r2 = _mm_loadu_pd(&b[i1 - 1]);
        _mm_storeu_pd(&c_data[i1],
                      _mm_sub_pd(_mm_mul_pd(_mm_loadu_pd(&a_data[i1 + 1]), r2),
                                 _mm_mul_pd(_mm_loadu_pd(&a_data[i1 - 1]), r)));
        _mm_storeu_pd(&c_data[i1 + 1],
                      _mm_sub_pd(_mm_mul_pd(_mm_loadu_pd(&a_data[i1 - 1]), r1),
                                 _mm_mul_pd(_mm_loadu_pd(&a_data[i1]), r2)));
      }
      for (i1 = iStart; i1 <= iStart; i1++) {
        real_T d;
        real_T d1;
        real_T d2;
        real_T d3;
        real_T d4;
        d = a_data[i1 + 1];
        d1 = b[i1 + 1];
        d2 = b[i1];
        c_data[i1 - 1] = a_data[i1] * d1 - d * d2;
        d3 = a_data[i1 - 1];
        d4 = b[i1 - 1];
        c_data[i1] = d * d4 - d3 * d1;
        c_data[i1 + 1] = d3 * d2 - a_data[i1] * d4;
      }
    }
  }
}

void c_cross(const emlrtStack *sp, const emxArray_real_T *a, const real_T b[33],
             emxArray_real_T *c)
{
  static const int8_T b_iv[3] = {1, 3, 11};
  emlrtStack b_st;
  emlrtStack st;
  const real_T *a_data;
  real_T *c_data;
  int32_T i1;
  int32_T iStart;
  int32_T k;
  uint32_T uv[3];
  boolean_T exitg1;
  boolean_T p;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  a_data = a->data;
  uv[0] = 1U;
  uv[1] = 3U;
  uv[2] = (uint32_T)a->size[2];
  p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 3)) {
    if ((int32_T)uv[k] != b_iv[k]) {
      p = false;
      exitg1 = true;
    } else {
      k++;
    }
  }
  if (!p) {
    emlrtErrorWithMessageIdR2018a(sp, &g_emlrtRTEI,
                                  "MATLAB:cross:InputSizeMismatch",
                                  "MATLAB:cross:InputSizeMismatch", 0);
  }
  k = c->size[0] * c->size[1] * c->size[2];
  c->size[0] = 1;
  c->size[1] = 3;
  c->size[2] = (int32_T)uv[2];
  emxEnsureCapacity_real_T(sp, c, k, &kc_emlrtRTEI);
  c_data = c->data;
  if (a->size[2] != 0) {
    k = 3;
    if (a->size[2] == 1) {
      k = 2;
    }
    if (k <= 2) {
      k = 1;
    } else {
      k = 3 * (a->size[2] - 1) + 1;
    }
    st.site = &nr_emlrtRSI;
    if (k > 2147483644) {
      b_st.site = &hr_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }
    for (iStart = 1; iStart <= k; iStart += 3) {
      int32_T vectorUB;
      st.site = &or_emlrtRSI;
      vectorUB = iStart - 2;
      for (i1 = iStart; i1 <= vectorUB; i1 += 2) {
        __m128d r;
        __m128d r1;
        __m128d r2;
        r = _mm_loadu_pd(&b[i1 + 1]);
        r1 = _mm_loadu_pd(&b[i1]);
        _mm_storeu_pd(
            &c_data[i1 - 1],
            _mm_sub_pd(_mm_mul_pd(_mm_loadu_pd(&a_data[i1]), r),
                       _mm_mul_pd(_mm_loadu_pd(&a_data[i1 + 1]), r1)));
        r2 = _mm_loadu_pd(&b[i1 - 1]);
        _mm_storeu_pd(&c_data[i1],
                      _mm_sub_pd(_mm_mul_pd(_mm_loadu_pd(&a_data[i1 + 1]), r2),
                                 _mm_mul_pd(_mm_loadu_pd(&a_data[i1 - 1]), r)));
        _mm_storeu_pd(&c_data[i1 + 1],
                      _mm_sub_pd(_mm_mul_pd(_mm_loadu_pd(&a_data[i1 - 1]), r1),
                                 _mm_mul_pd(_mm_loadu_pd(&a_data[i1]), r2)));
      }
      for (i1 = iStart; i1 <= iStart; i1++) {
        real_T d;
        real_T d1;
        real_T d2;
        real_T d3;
        real_T d4;
        d = a_data[i1 + 1];
        d1 = b[i1 + 1];
        d2 = b[i1];
        c_data[i1 - 1] = a_data[i1] * d1 - d * d2;
        d3 = a_data[i1 - 1];
        d4 = b[i1 - 1];
        c_data[i1] = d * d4 - d3 * d1;
        c_data[i1 + 1] = d3 * d2 - a_data[i1] * d4;
      }
    }
  }
}

void cross(const emlrtStack *sp, const emxArray_real_T *a, const real_T b[57],
           emxArray_real_T *c)
{
  static const int8_T b_iv[3] = {1, 3, 19};
  emlrtStack b_st;
  emlrtStack st;
  const real_T *a_data;
  real_T *c_data;
  int32_T i1;
  int32_T iStart;
  int32_T k;
  uint32_T uv[3];
  boolean_T exitg1;
  boolean_T p;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  a_data = a->data;
  uv[0] = 1U;
  uv[1] = 3U;
  uv[2] = (uint32_T)a->size[2];
  p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 3)) {
    if ((int32_T)uv[k] != b_iv[k]) {
      p = false;
      exitg1 = true;
    } else {
      k++;
    }
  }
  if (!p) {
    emlrtErrorWithMessageIdR2018a(sp, &g_emlrtRTEI,
                                  "MATLAB:cross:InputSizeMismatch",
                                  "MATLAB:cross:InputSizeMismatch", 0);
  }
  k = c->size[0] * c->size[1] * c->size[2];
  c->size[0] = 1;
  c->size[1] = 3;
  c->size[2] = (int32_T)uv[2];
  emxEnsureCapacity_real_T(sp, c, k, &kc_emlrtRTEI);
  c_data = c->data;
  if (a->size[2] != 0) {
    k = 3;
    if (a->size[2] == 1) {
      k = 2;
    }
    if (k <= 2) {
      k = 1;
    } else {
      k = 3 * (a->size[2] - 1) + 1;
    }
    st.site = &nr_emlrtRSI;
    if (k > 2147483644) {
      b_st.site = &hr_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }
    for (iStart = 1; iStart <= k; iStart += 3) {
      int32_T vectorUB;
      st.site = &or_emlrtRSI;
      vectorUB = iStart - 2;
      for (i1 = iStart; i1 <= vectorUB; i1 += 2) {
        __m128d r;
        __m128d r1;
        __m128d r2;
        r = _mm_loadu_pd(&b[i1 + 1]);
        r1 = _mm_loadu_pd(&b[i1]);
        _mm_storeu_pd(
            &c_data[i1 - 1],
            _mm_sub_pd(_mm_mul_pd(_mm_loadu_pd(&a_data[i1]), r),
                       _mm_mul_pd(_mm_loadu_pd(&a_data[i1 + 1]), r1)));
        r2 = _mm_loadu_pd(&b[i1 - 1]);
        _mm_storeu_pd(&c_data[i1],
                      _mm_sub_pd(_mm_mul_pd(_mm_loadu_pd(&a_data[i1 + 1]), r2),
                                 _mm_mul_pd(_mm_loadu_pd(&a_data[i1 - 1]), r)));
        _mm_storeu_pd(&c_data[i1 + 1],
                      _mm_sub_pd(_mm_mul_pd(_mm_loadu_pd(&a_data[i1 - 1]), r1),
                                 _mm_mul_pd(_mm_loadu_pd(&a_data[i1]), r2)));
      }
      for (i1 = iStart; i1 <= iStart; i1++) {
        real_T d;
        real_T d1;
        real_T d2;
        real_T d3;
        real_T d4;
        d = a_data[i1 + 1];
        d1 = b[i1 + 1];
        d2 = b[i1];
        c_data[i1 - 1] = a_data[i1] * d1 - d * d2;
        d3 = a_data[i1 - 1];
        d4 = b[i1 - 1];
        c_data[i1] = d * d4 - d3 * d1;
        c_data[i1 + 1] = d3 * d2 - a_data[i1] * d4;
      }
    }
  }
}

void d_cross(const emlrtStack *sp, const emxArray_real_T *a,
             const emxArray_real_T *b, emxArray_real_T *c)
{
  emlrtStack b_st;
  emlrtStack st;
  const real_T *a_data;
  const real_T *b_data;
  real_T *c_data;
  int32_T i1;
  int32_T iStart;
  int32_T k;
  uint32_T uv[3];
  uint32_T varargin_2[3];
  boolean_T exitg1;
  boolean_T p;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  b_data = b->data;
  a_data = a->data;
  uv[0] = 1U;
  varargin_2[0] = 1U;
  uv[1] = 3U;
  varargin_2[1] = 3U;
  uv[2] = (uint32_T)a->size[2];
  varargin_2[2] = (uint32_T)b->size[2];
  p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 3)) {
    if ((int32_T)uv[k] != (int32_T)varargin_2[k]) {
      p = false;
      exitg1 = true;
    } else {
      k++;
    }
  }
  if (!p) {
    emlrtErrorWithMessageIdR2018a(sp, &g_emlrtRTEI,
                                  "MATLAB:cross:InputSizeMismatch",
                                  "MATLAB:cross:InputSizeMismatch", 0);
  }
  k = c->size[0] * c->size[1] * c->size[2];
  c->size[0] = 1;
  c->size[1] = 3;
  c->size[2] = (int32_T)uv[2];
  emxEnsureCapacity_real_T(sp, c, k, &kc_emlrtRTEI);
  c_data = c->data;
  if (a->size[2] != 0) {
    k = 3;
    if (a->size[2] == 1) {
      k = 2;
    }
    if (k <= 2) {
      k = 1;
    } else {
      k = 3 * (a->size[2] - 1) + 1;
    }
    st.site = &nr_emlrtRSI;
    if (k > 2147483644) {
      b_st.site = &hr_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }
    for (iStart = 1; iStart <= k; iStart += 3) {
      int32_T vectorUB;
      st.site = &or_emlrtRSI;
      vectorUB = iStart - 2;
      for (i1 = iStart; i1 <= vectorUB; i1 += 2) {
        _mm_storeu_pd(&c_data[i1 - 1],
                      _mm_sub_pd(_mm_mul_pd(_mm_loadu_pd(&a_data[i1]),
                                            _mm_loadu_pd(&b_data[i1 + 1])),
                                 _mm_mul_pd(_mm_loadu_pd(&a_data[i1 + 1]),
                                            _mm_loadu_pd(&b_data[i1]))));
        _mm_storeu_pd(&c_data[i1],
                      _mm_sub_pd(_mm_mul_pd(_mm_loadu_pd(&a_data[i1 + 1]),
                                            _mm_loadu_pd(&b_data[i1 - 1])),
                                 _mm_mul_pd(_mm_loadu_pd(&a_data[i1 - 1]),
                                            _mm_loadu_pd(&b_data[i1 + 1]))));
        _mm_storeu_pd(&c_data[i1 + 1],
                      _mm_sub_pd(_mm_mul_pd(_mm_loadu_pd(&a_data[i1 - 1]),
                                            _mm_loadu_pd(&b_data[i1])),
                                 _mm_mul_pd(_mm_loadu_pd(&a_data[i1]),
                                            _mm_loadu_pd(&b_data[i1 - 1]))));
      }
      for (i1 = iStart; i1 <= iStart; i1++) {
        real_T d;
        real_T d1;
        real_T d2;
        real_T d3;
        d = a_data[i1 + 1];
        d1 = b_data[i1 + 1];
        c_data[i1 - 1] = a_data[i1] * d1 - d * b_data[i1];
        d2 = a_data[i1 - 1];
        d3 = b_data[i1 - 1];
        c_data[i1] = d * d3 - d2 * d1;
        c_data[i1 + 1] = d2 * b_data[i1] - a_data[i1] * d3;
      }
    }
  }
}

void e_cross(const real_T a[57], const real_T b[57], real_T c[57])
{
  int32_T i1;
  int32_T iStart;
  for (iStart = 0; iStart <= 54; iStart += 3) {
    int32_T scalarLB;
    int32_T vectorUB;
    scalarLB = iStart + 1;
    vectorUB = iStart - 1;
    for (i1 = iStart + 1; i1 <= vectorUB; i1 += 2) {
      __m128d r;
      __m128d r1;
      __m128d r2;
      __m128d r3;
      __m128d r4;
      __m128d r5;
      r = _mm_loadu_pd(&a[i1]);
      r1 = _mm_loadu_pd(&b[i1 + 1]);
      r2 = _mm_loadu_pd(&a[i1 + 1]);
      r3 = _mm_loadu_pd(&b[i1]);
      _mm_storeu_pd(&c[i1 - 1],
                    _mm_sub_pd(_mm_mul_pd(r, r1), _mm_mul_pd(r2, r3)));
      r4 = _mm_loadu_pd(&b[i1 - 1]);
      r5 = _mm_loadu_pd(&a[i1 - 1]);
      _mm_storeu_pd(&c[i1], _mm_sub_pd(_mm_mul_pd(r2, r4), _mm_mul_pd(r5, r1)));
      _mm_storeu_pd(&c[i1 + 1],
                    _mm_sub_pd(_mm_mul_pd(r5, r3), _mm_mul_pd(r, r4)));
    }
    for (i1 = scalarLB; i1 <= iStart + 1; i1++) {
      real_T b_c_tmp;
      real_T c_c_tmp;
      real_T c_tmp;
      real_T d;
      real_T d1;
      real_T d_c_tmp;
      c_tmp = a[i1 + 1];
      b_c_tmp = b[i1 + 1];
      d = a[i1];
      d1 = b[i1];
      c[i1 - 1] = d * b_c_tmp - c_tmp * d1;
      c_c_tmp = a[i1 - 1];
      d_c_tmp = b[i1 - 1];
      c[i1] = c_tmp * d_c_tmp - c_c_tmp * b_c_tmp;
      c[i1 + 1] = c_c_tmp * d1 - d * d_c_tmp;
    }
  }
}

void f_cross(const real_T a[33], const real_T b[33], real_T c[33])
{
  int32_T i1;
  int32_T iStart;
  for (iStart = 0; iStart <= 30; iStart += 3) {
    int32_T scalarLB;
    int32_T vectorUB;
    scalarLB = iStart + 1;
    vectorUB = iStart - 1;
    for (i1 = iStart + 1; i1 <= vectorUB; i1 += 2) {
      __m128d r;
      __m128d r1;
      __m128d r2;
      __m128d r3;
      __m128d r4;
      __m128d r5;
      r = _mm_loadu_pd(&a[i1]);
      r1 = _mm_loadu_pd(&b[i1 + 1]);
      r2 = _mm_loadu_pd(&a[i1 + 1]);
      r3 = _mm_loadu_pd(&b[i1]);
      _mm_storeu_pd(&c[i1 - 1],
                    _mm_sub_pd(_mm_mul_pd(r, r1), _mm_mul_pd(r2, r3)));
      r4 = _mm_loadu_pd(&b[i1 - 1]);
      r5 = _mm_loadu_pd(&a[i1 - 1]);
      _mm_storeu_pd(&c[i1], _mm_sub_pd(_mm_mul_pd(r2, r4), _mm_mul_pd(r5, r1)));
      _mm_storeu_pd(&c[i1 + 1],
                    _mm_sub_pd(_mm_mul_pd(r5, r3), _mm_mul_pd(r, r4)));
    }
    for (i1 = scalarLB; i1 <= iStart + 1; i1++) {
      real_T b_c_tmp;
      real_T c_c_tmp;
      real_T c_tmp;
      real_T d;
      real_T d1;
      real_T d_c_tmp;
      c_tmp = a[i1 + 1];
      b_c_tmp = b[i1 + 1];
      d = a[i1];
      d1 = b[i1];
      c[i1 - 1] = d * b_c_tmp - c_tmp * d1;
      c_c_tmp = a[i1 - 1];
      d_c_tmp = b[i1 - 1];
      c[i1] = c_tmp * d_c_tmp - c_c_tmp * b_c_tmp;
      c[i1 + 1] = c_c_tmp * d1 - d * d_c_tmp;
    }
  }
}

/* End of code generation (cross.c) */
