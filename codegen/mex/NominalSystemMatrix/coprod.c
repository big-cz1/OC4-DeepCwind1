/*
 * coprod.c
 *
 * Code generation for function 'coprod'
 *
 */

/* Include files */
#include "coprod.h"
#include "NominalSystemMatrix_data.h"
#include "NominalSystemMatrix_emxutil.h"
#include "NominalSystemMatrix_types.h"
#include "_coder_NominalSystemMatrix_api.h"
#include "rt_nonfinite.h"
#include "omp.h"
#include <emmintrin.h>

/* Variable Definitions */
static emlrtRSInfo wu_emlrtRSI = {
    11,       /* lineNo */
    "coprod", /* fcnName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\coprod.m" /* pathName
                                                                           */
};

static emlrtBCInfo tc_emlrtBCI = {
    -1,           /* iFirst */
    -1,           /* iLast */
    14,           /* lineNo */
    50,           /* colNo */
    "Coordinate", /* aName */
    "coprod",     /* fName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\coprod.m", /* pName
                                                                            */
    0 /* checkKind */
};

static emlrtBCInfo vc_emlrtBCI = {
    -1,       /* iFirst */
    -1,       /* iLast */
    14,       /* lineNo */
    17,       /* colNo */
    "out",    /* aName */
    "coprod", /* fName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\coprod.m", /* pName
                                                                            */
    0 /* checkKind */
};

static emlrtBCInfo xc_emlrtBCI = {
    -1,       /* iFirst */
    -1,       /* iLast */
    14,       /* lineNo */
    31,       /* colNo */
    "vec",    /* aName */
    "coprod", /* fName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\coprod.m", /* pName
                                                                            */
    0 /* checkKind */
};

static emlrtRTEInfo mc_emlrtRTEI = {
    3,        /* lineNo */
    1,        /* colNo */
    "coprod", /* fName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\coprod.m" /* pName
                                                                           */
};

static const char_T cv[28] = {'S', 'i', 'z', 'e', ' ', 'o', 'f', ' ', 'v', 'e',
                              'c', 't', 'o', 'r', 's', ' ', 'd', 'o', ' ', 'n',
                              'o', 't', ' ', 'm', 'a', 't', 'c', 'h'};

/* Function Declarations */
static void e_error(const emlrtStack *sp, const mxArray *m,
                    emlrtMCInfo *location);

/* Function Definitions */
static void e_error(const emlrtStack *sp, const mxArray *m,
                    emlrtMCInfo *location)
{
  emlrtCallMATLABR2012b((emlrtConstCTX)sp, 0, NULL, 1, &m, "error", true,
                        location);
}

void b_coprod(const emlrtStack *sp, const emxArray_real_T *vec,
              const real_T Coordinate[3], emxArray_real_T *out)
{
  __m128d r;
  jmp_buf emlrtJBEnviron;
  jmp_buf *volatile emlrtJBStack;
  emlrtStack st;
  real_T *out_data;
  int32_T b_coprod_numThreads;
  int32_T i;
  int32_T i1;
  int32_T it;
  int32_T loop_ub;
  boolean_T emlrtHadParallelError = false;
  loop_ub = out->size[0] * out->size[1] * out->size[2];
  out->size[0] = 1;
  out->size[1] = 3;
  i = vec->size[2];
  out->size[2] = vec->size[2];
  emxEnsureCapacity_real_T(sp, out, loop_ub, &mc_emlrtRTEI);
  out_data = out->data;
  loop_ub = 3 * vec->size[2];
  for (i1 = 0; i1 < loop_ub; i1++) {
    out_data[i1] = 0.0;
  }
  loop_ub = vec->size[2];
  if (vec->size[2] < 2000) {
    for (it = 0; it < i; it++) {
      if (it + 1 > i) {
        emlrtDynamicBoundsCheckR2012b(it + 1, 1, i, &wc_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      if (it + 1 > out->size[2]) {
        emlrtDynamicBoundsCheckR2012b(it + 1, 1, out->size[2], &uc_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      _mm_storeu_pd(&out_data[3 * it],
                    _mm_mul_pd(_mm_set1_pd(0.0), _mm_loadu_pd(&Coordinate[0])));
      out_data[3 * it + 2] = 0.0 * Coordinate[2];
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtConstCTX)sp);
      }
    }
  } else {
    emlrtEnterParallelRegion((emlrtCTX)sp, omp_in_parallel());
    emlrtPushJmpBuf((emlrtCTX)sp, &emlrtJBStack);
    b_coprod_numThreads = emlrtAllocRegionTLSs(
        sp->tls, omp_in_parallel(), omp_get_max_threads(), omp_get_num_procs());
#pragma omp parallel num_threads(b_coprod_numThreads) private(                 \
        r, st, emlrtJBEnviron) firstprivate(emlrtHadParallelError)
    {
      if (setjmp(emlrtJBEnviron) == 0) {
        st.prev = sp;
        st.tls = emlrtAllocTLS((emlrtCTX)sp, omp_get_thread_num());
        st.site = NULL;
        emlrtSetJmpBuf(&st, &emlrtJBEnviron);
      } else {
        emlrtHadParallelError = true;
      }
#pragma omp for nowait
      for (it = 0; it < loop_ub; it++) {
        if (emlrtHadParallelError) {
          continue;
        }
        if (setjmp(emlrtJBEnviron) == 0) {
          if (it + 1 > vec->size[2]) {
            emlrtDynamicBoundsCheckR2012b(it + 1, 1, vec->size[2], &wc_emlrtBCI,
                                          &st);
          }
          if (it + 1 > out->size[2]) {
            emlrtDynamicBoundsCheckR2012b(it + 1, 1, out->size[2], &uc_emlrtBCI,
                                          &st);
          }
          r = _mm_loadu_pd(&Coordinate[0]);
          r = _mm_mul_pd(_mm_set1_pd(0.0), r);
          _mm_storeu_pd(&out_data[3 * it], r);
          out_data[3 * it + 2] = 0.0 * Coordinate[2];
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b(&st);
          }
        } else {
          emlrtHadParallelError = true;
        }
      }
    }
    emlrtPopJmpBuf((emlrtCTX)sp, &emlrtJBStack);
    emlrtExitParallelRegion((emlrtCTX)sp, omp_in_parallel());
  }
}

void c_coprod(const emlrtStack *sp, const real_T vec[19],
              const emxArray_real_T *Coordinate, real_T out[57])
{
  static const int32_T b_iv[2] = {1, 28};
  emlrtStack b_st;
  emlrtStack st;
  const mxArray *m;
  const mxArray *m1;
  const mxArray *y;
  const real_T *Coordinate_data;
  int32_T it;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  Coordinate_data = Coordinate->data;
  if (Coordinate->size[2] == 1) {
    for (it = 0; it < 19; it++) {
      real_T d;
      d = vec[it];
      _mm_storeu_pd(
          &out[3 * it],
          _mm_mul_pd(_mm_set1_pd(d), _mm_loadu_pd(&Coordinate_data[0])));
      out[3 * it + 2] = d * Coordinate_data[2];
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtConstCTX)sp);
      }
    }
  } else {
    if (Coordinate->size[2] != 19) {
      st.site = &wu_emlrtRSI;
      m = NULL;
      y = NULL;
      m1 = emlrtCreateCharArray(2, &b_iv[0]);
      emlrtInitCharArrayR2013a(&st, 28, m1, &cv[0]);
      emlrtAssign(&y, m1);
      emlrtAssign(&m, y);
      emlrt_synchGlobalsToML(&st);
      b_st.site = &jv_emlrtRSI;
      e_error(&b_st, emlrtAlias(m), &emlrtMCI);
      emlrt_synchGlobalsFromML(&st);
      emlrtDestroyArray(&m);
    }
    for (it = 0; it < 19; it++) {
      real_T d;
      int32_T out_tmp;
      d = vec[it];
      _mm_storeu_pd(
          &out[3 * it],
          _mm_mul_pd(_mm_set1_pd(d), _mm_loadu_pd(&Coordinate_data[3 * it])));
      out_tmp = 3 * it + 2;
      out[out_tmp] = d * Coordinate_data[out_tmp];
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtConstCTX)sp);
      }
    }
  }
}

void coprod(const emlrtStack *sp, const emxArray_real_T *vec,
            const real_T Coordinate_data[], const int32_T Coordinate_size[3],
            emxArray_real_T *out)
{
  static const int32_T b_iv[2] = {1, 28};
  __m128d r;
  __m128d r1;
  jmp_buf emlrtJBEnviron;
  jmp_buf *volatile emlrtJBStack;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  const mxArray *m;
  const mxArray *m1;
  const mxArray *y;
  const real_T *vec_data;
  real_T a;
  real_T b_a;
  real_T *out_data;
  int32_T b_it;
  int32_T coprod_numThreads;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T it;
  int32_T loop_ub;
  boolean_T emlrtHadParallelError = false;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  vec_data = vec->data;
  loop_ub = out->size[0] * out->size[1] * out->size[2];
  out->size[0] = 1;
  out->size[1] = 3;
  i = vec->size[2];
  out->size[2] = vec->size[2];
  emxEnsureCapacity_real_T(sp, out, loop_ub, &mc_emlrtRTEI);
  out_data = out->data;
  loop_ub = 3 * vec->size[2];
  for (i1 = 0; i1 < loop_ub; i1++) {
    out_data[i1] = 0.0;
  }
  if (Coordinate_size[2] == 1) {
    loop_ub = vec->size[2];
    if (vec->size[2] < 2000) {
      for (it = 0; it < i; it++) {
        if (it + 1 > i) {
          emlrtDynamicBoundsCheckR2012b(it + 1, 1, i, &wc_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        a = vec_data[it];
        if (it + 1 > out->size[2]) {
          emlrtDynamicBoundsCheckR2012b(it + 1, 1, out->size[2], &uc_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        _mm_storeu_pd(
            &out_data[3 * it],
            _mm_mul_pd(_mm_set1_pd(a), _mm_loadu_pd(&Coordinate_data[0])));
        out_data[3 * it + 2] = a * Coordinate_data[2];
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b((emlrtConstCTX)sp);
        }
      }
    } else {
      emlrtEnterParallelRegion((emlrtCTX)sp, omp_in_parallel());
      emlrtPushJmpBuf((emlrtCTX)sp, &emlrtJBStack);
      coprod_numThreads =
          emlrtAllocRegionTLSs(sp->tls, omp_in_parallel(),
                               omp_get_max_threads(), omp_get_num_procs());
#pragma omp parallel num_threads(coprod_numThreads) private(                   \
        r, a, d_st, emlrtJBEnviron) firstprivate(emlrtHadParallelError)
      {
        if (setjmp(emlrtJBEnviron) == 0) {
          d_st.prev = sp;
          d_st.tls = emlrtAllocTLS((emlrtCTX)sp, omp_get_thread_num());
          d_st.site = NULL;
          emlrtSetJmpBuf(&d_st, &emlrtJBEnviron);
        } else {
          emlrtHadParallelError = true;
        }
#pragma omp for nowait
        for (it = 0; it < loop_ub; it++) {
          if (emlrtHadParallelError) {
            continue;
          }
          if (setjmp(emlrtJBEnviron) == 0) {
            if (it + 1 > vec->size[2]) {
              emlrtDynamicBoundsCheckR2012b(it + 1, 1, vec->size[2],
                                            &wc_emlrtBCI, &d_st);
            }
            a = vec_data[it];
            if (it + 1 > out->size[2]) {
              emlrtDynamicBoundsCheckR2012b(it + 1, 1, out->size[2],
                                            &uc_emlrtBCI, &d_st);
            }
            r = _mm_loadu_pd(&Coordinate_data[0]);
            r = _mm_mul_pd(_mm_set1_pd(a), r);
            _mm_storeu_pd(&out_data[3 * it], r);
            out_data[3 * it + 2] = a * Coordinate_data[2];
            if (*emlrtBreakCheckR2012bFlagVar != 0) {
              emlrtBreakCheckR2012b(&d_st);
            }
          } else {
            emlrtHadParallelError = true;
          }
        }
      }
      emlrtPopJmpBuf((emlrtCTX)sp, &emlrtJBStack);
      emlrtExitParallelRegion((emlrtCTX)sp, omp_in_parallel());
    }
  } else {
    if (Coordinate_size[2] != vec->size[2]) {
      st.site = &wu_emlrtRSI;
      m = NULL;
      y = NULL;
      m1 = emlrtCreateCharArray(2, &b_iv[0]);
      emlrtInitCharArrayR2013a(&st, 28, m1, &cv[0]);
      emlrtAssign(&y, m1);
      emlrtAssign(&m, y);
      emlrt_synchGlobalsToML(&st);
      b_st.site = &jv_emlrtRSI;
      e_error(&b_st, emlrtAlias(m), &emlrtMCI);
      emlrt_synchGlobalsFromML(&st);
      emlrtDestroyArray(&m);
    }
    loop_ub = vec->size[2];
    if (vec->size[2] < 2000) {
      for (b_it = 0; b_it < i; b_it++) {
        if (b_it + 1 > i) {
          emlrtDynamicBoundsCheckR2012b(b_it + 1, 1, i, &xc_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        b_a = vec_data[b_it];
        if (b_it + 1 > Coordinate_size[2]) {
          emlrtDynamicBoundsCheckR2012b(b_it + 1, 1, Coordinate_size[2],
                                        &tc_emlrtBCI, (emlrtConstCTX)sp);
        }
        if (b_it + 1 > out->size[2]) {
          emlrtDynamicBoundsCheckR2012b(b_it + 1, 1, out->size[2], &vc_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        _mm_storeu_pd(&out_data[3 * b_it],
                      _mm_mul_pd(_mm_set1_pd(b_a),
                                 _mm_loadu_pd(&Coordinate_data[3 * b_it])));
        loop_ub = 3 * b_it + 2;
        out_data[loop_ub] = b_a * Coordinate_data[loop_ub];
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b((emlrtConstCTX)sp);
        }
      }
    } else {
      emlrtEnterParallelRegion((emlrtCTX)sp, omp_in_parallel());
      emlrtPushJmpBuf((emlrtCTX)sp, &emlrtJBStack);
      coprod_numThreads =
          emlrtAllocRegionTLSs(sp->tls, omp_in_parallel(),
                               omp_get_max_threads(), omp_get_num_procs());
#pragma omp parallel num_threads(coprod_numThreads) private(                   \
        r1, b_a, c_st, emlrtJBEnviron, i2) firstprivate(emlrtHadParallelError)
      {
        if (setjmp(emlrtJBEnviron) == 0) {
          c_st.prev = sp;
          c_st.tls = emlrtAllocTLS((emlrtCTX)sp, omp_get_thread_num());
          c_st.site = NULL;
          emlrtSetJmpBuf(&c_st, &emlrtJBEnviron);
        } else {
          emlrtHadParallelError = true;
        }
#pragma omp for nowait
        for (b_it = 0; b_it < loop_ub; b_it++) {
          if (emlrtHadParallelError) {
            continue;
          }
          if (setjmp(emlrtJBEnviron) == 0) {
            if (b_it + 1 > vec->size[2]) {
              emlrtDynamicBoundsCheckR2012b(b_it + 1, 1, vec->size[2],
                                            &xc_emlrtBCI, &c_st);
            }
            b_a = vec_data[b_it];
            if (b_it + 1 > Coordinate_size[2]) {
              emlrtDynamicBoundsCheckR2012b(b_it + 1, 1, Coordinate_size[2],
                                            &tc_emlrtBCI, &c_st);
            }
            if (b_it + 1 > out->size[2]) {
              emlrtDynamicBoundsCheckR2012b(b_it + 1, 1, out->size[2],
                                            &vc_emlrtBCI, &c_st);
            }
            r1 = _mm_loadu_pd(&Coordinate_data[3 * b_it]);
            r1 = _mm_mul_pd(_mm_set1_pd(b_a), r1);
            _mm_storeu_pd(&out_data[3 * b_it], r1);
            i2 = 3 * b_it + 2;
            out_data[i2] = b_a * Coordinate_data[i2];
            if (*emlrtBreakCheckR2012bFlagVar != 0) {
              emlrtBreakCheckR2012b(&c_st);
            }
          } else {
            emlrtHadParallelError = true;
          }
        }
      }
      emlrtPopJmpBuf((emlrtCTX)sp, &emlrtJBStack);
      emlrtExitParallelRegion((emlrtCTX)sp, omp_in_parallel());
    }
  }
}

void d_coprod(const emlrtStack *sp, const real_T vec[11],
              const emxArray_real_T *Coordinate, real_T out[33])
{
  static const int32_T b_iv[2] = {1, 28};
  emlrtStack b_st;
  emlrtStack st;
  const mxArray *m;
  const mxArray *m1;
  const mxArray *y;
  const real_T *Coordinate_data;
  int32_T it;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  Coordinate_data = Coordinate->data;
  if (Coordinate->size[2] == 1) {
    for (it = 0; it < 11; it++) {
      real_T d;
      d = vec[it];
      _mm_storeu_pd(
          &out[3 * it],
          _mm_mul_pd(_mm_set1_pd(d), _mm_loadu_pd(&Coordinate_data[0])));
      out[3 * it + 2] = d * Coordinate_data[2];
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtConstCTX)sp);
      }
    }
  } else {
    if (Coordinate->size[2] != 11) {
      st.site = &wu_emlrtRSI;
      m = NULL;
      y = NULL;
      m1 = emlrtCreateCharArray(2, &b_iv[0]);
      emlrtInitCharArrayR2013a(&st, 28, m1, &cv[0]);
      emlrtAssign(&y, m1);
      emlrtAssign(&m, y);
      emlrt_synchGlobalsToML(&st);
      b_st.site = &jv_emlrtRSI;
      e_error(&b_st, emlrtAlias(m), &emlrtMCI);
      emlrt_synchGlobalsFromML(&st);
      emlrtDestroyArray(&m);
    }
    for (it = 0; it < 11; it++) {
      real_T d;
      int32_T out_tmp;
      d = vec[it];
      _mm_storeu_pd(
          &out[3 * it],
          _mm_mul_pd(_mm_set1_pd(d), _mm_loadu_pd(&Coordinate_data[3 * it])));
      out_tmp = 3 * it + 2;
      out[out_tmp] = d * Coordinate_data[out_tmp];
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtConstCTX)sp);
      }
    }
  }
}

/* End of code generation (coprod.c) */
