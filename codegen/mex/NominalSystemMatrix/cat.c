/*
 * cat.c
 *
 * Code generation for function 'cat'
 *
 */

/* Include files */
#include "cat.h"
#include "NominalSystemMatrix_data.h"
#include "NominalSystemMatrix_emxutil.h"
#include "NominalSystemMatrix_types.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include "omp.h"

/* Variable Definitions */
static emlrtRSInfo fv_emlrtRSI =
    {
        152,   /* lineNo */
        "cat", /* fcnName */
        "D:\\Program "
        "Files\\MATLAB\\R2025b\\toolbox\\eml\\lib\\matlab\\elmat\\cat.m" /* pathName
                                                                          */
};

static emlrtRSInfo gv_emlrtRSI =
    {
        181,      /* lineNo */
        "looper", /* fcnName */
        "D:\\Program "
        "Files\\MATLAB\\R2025b\\toolbox\\eml\\lib\\matlab\\elmat\\cat.m" /* pathName
                                                                          */
};

static emlrtRTEInfo s_emlrtRTEI =
    {
        93,    /* lineNo */
        27,    /* colNo */
        "cat", /* fName */
        "D:\\Program "
        "Files\\MATLAB\\R2025b\\toolbox\\eml\\lib\\matlab\\elmat\\cat.m" /* pName
                                                                          */
};

static emlrtRTEInfo pc_emlrtRTEI =
    {
        107,   /* lineNo */
        28,    /* colNo */
        "cat", /* fName */
        "D:\\Program "
        "Files\\MATLAB\\R2025b\\toolbox\\eml\\lib\\matlab\\elmat\\cat.m" /* pName
                                                                          */
};

/* Function Definitions */
void cat(const emlrtStack *sp, const emxArray_real_T *varargin_1,
         const emxArray_real_T *varargin_2, const emxArray_real_T *varargin_3,
         const emxArray_real_T *varargin_4, const emxArray_real_T *varargin_5,
         const emxArray_real_T *varargin_6, const real_T varargin_7[45],
         const real_T varargin_8[45], const real_T varargin_9[45],
         const real_T varargin_10[45], emxArray_real_T *y)
{
  static const int8_T b_iv[3] = {1, 3, 15};
  jmp_buf *volatile emlrtJBStack;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  const real_T *varargin_1_data;
  const real_T *varargin_2_data;
  const real_T *varargin_3_data;
  const real_T *varargin_4_data;
  const real_T *varargin_5_data;
  const real_T *varargin_6_data;
  real_T *y_data;
  int32_T ysize[3];
  int32_T cat_numThreads;
  int32_T j;
  int32_T k;
  int32_T y_tmp;
  int32_T ysize_tmp;
  boolean_T exitg1;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  varargin_6_data = varargin_6->data;
  varargin_5_data = varargin_5->data;
  varargin_4_data = varargin_4->data;
  varargin_3_data = varargin_3->data;
  varargin_2_data = varargin_2->data;
  varargin_1_data = varargin_1->data;
  ysize[0] = 10;
  ysize[1] = 3;
  ysize_tmp = varargin_1->size[2];
  ysize[2] = varargin_1->size[2];
  j = 0;
  exitg1 = false;
  while ((!exitg1) && (j < 3)) {
    if ((j != 0) && (ysize[j] != varargin_1->size[j])) {
      emlrtErrorWithMessageIdR2018a(
          sp, &s_emlrtRTEI, "Coder:MATLAB:catenate_dimensionMismatch",
          "Coder:MATLAB:catenate_dimensionMismatch", 0);
    } else {
      j++;
    }
  }
  j = 0;
  exitg1 = false;
  while ((!exitg1) && (j < 3)) {
    if ((j != 0) && (ysize[j] != varargin_2->size[j])) {
      emlrtErrorWithMessageIdR2018a(
          sp, &s_emlrtRTEI, "Coder:MATLAB:catenate_dimensionMismatch",
          "Coder:MATLAB:catenate_dimensionMismatch", 0);
    } else {
      j++;
    }
  }
  j = 0;
  exitg1 = false;
  while ((!exitg1) && (j < 3)) {
    if ((j != 0) && (ysize[j] != varargin_3->size[j])) {
      emlrtErrorWithMessageIdR2018a(
          sp, &s_emlrtRTEI, "Coder:MATLAB:catenate_dimensionMismatch",
          "Coder:MATLAB:catenate_dimensionMismatch", 0);
    } else {
      j++;
    }
  }
  j = 0;
  exitg1 = false;
  while ((!exitg1) && (j < 3)) {
    if ((j != 0) && (ysize[j] != varargin_4->size[j])) {
      emlrtErrorWithMessageIdR2018a(
          sp, &s_emlrtRTEI, "Coder:MATLAB:catenate_dimensionMismatch",
          "Coder:MATLAB:catenate_dimensionMismatch", 0);
    } else {
      j++;
    }
  }
  j = 0;
  exitg1 = false;
  while ((!exitg1) && (j < 3)) {
    if ((j != 0) && (ysize[j] != varargin_5->size[j])) {
      emlrtErrorWithMessageIdR2018a(
          sp, &s_emlrtRTEI, "Coder:MATLAB:catenate_dimensionMismatch",
          "Coder:MATLAB:catenate_dimensionMismatch", 0);
    } else {
      j++;
    }
  }
  j = 0;
  exitg1 = false;
  while ((!exitg1) && (j < 3)) {
    if ((j != 0) && (ysize[j] != varargin_6->size[j])) {
      emlrtErrorWithMessageIdR2018a(
          sp, &s_emlrtRTEI, "Coder:MATLAB:catenate_dimensionMismatch",
          "Coder:MATLAB:catenate_dimensionMismatch", 0);
    } else {
      j++;
    }
  }
  j = 0;
  exitg1 = false;
  while ((!exitg1) && (j < 3)) {
    if ((j != 0) && (ysize[j] != b_iv[j])) {
      emlrtErrorWithMessageIdR2018a(
          sp, &s_emlrtRTEI, "Coder:MATLAB:catenate_dimensionMismatch",
          "Coder:MATLAB:catenate_dimensionMismatch", 0);
    } else {
      j++;
    }
  }
  j = y->size[0] * y->size[1] * y->size[2];
  y->size[0] = 10;
  y->size[1] = 3;
  y->size[2] = varargin_1->size[2];
  emxEnsureCapacity_real_T(sp, y, j, &pc_emlrtRTEI);
  y_data = y->data;
  st.site = &fv_emlrtRSI;
  j = varargin_1->size[2];
  b_st.site = &gv_emlrtRSI;
  if (varargin_1->size[2] > 2147483646) {
    c_st.site = &hr_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }
  if (varargin_1->size[2] * 3 < 2000) {
    for (k = 0; k < ysize_tmp; k++) {
      y_data[30 * k] = varargin_1_data[3 * k];
      y_data[30 * k + 1] = varargin_2_data[3 * k];
      y_data[30 * k + 2] = varargin_3_data[3 * k];
      y_data[30 * k + 3] = varargin_4_data[3 * k];
      y_data[30 * k + 4] = varargin_5_data[3 * k];
      y_data[30 * k + 5] = varargin_6_data[3 * k];
      y_data[30 * k + 6] = varargin_7[3 * k];
      y_data[30 * k + 7] = varargin_8[3 * k];
      y_data[30 * k + 8] = varargin_9[3 * k];
      y_data[30 * k + 9] = varargin_10[3 * k];
      j = 3 * k + 1;
      y_data[30 * k + 10] = varargin_1_data[j];
      y_data[30 * k + 11] = varargin_2_data[j];
      y_data[30 * k + 12] = varargin_3_data[j];
      y_data[30 * k + 13] = varargin_4_data[j];
      y_data[30 * k + 14] = varargin_5_data[j];
      y_data[30 * k + 15] = varargin_6_data[j];
      y_data[30 * k + 16] = varargin_7[j];
      y_data[30 * k + 17] = varargin_8[j];
      y_data[30 * k + 18] = varargin_9[j];
      y_data[30 * k + 19] = varargin_10[j];
      j = 3 * k + 2;
      y_data[30 * k + 20] = varargin_1_data[j];
      y_data[30 * k + 21] = varargin_2_data[j];
      y_data[30 * k + 22] = varargin_3_data[j];
      y_data[30 * k + 23] = varargin_4_data[j];
      y_data[30 * k + 24] = varargin_5_data[j];
      y_data[30 * k + 25] = varargin_6_data[j];
      y_data[30 * k + 26] = varargin_7[j];
      y_data[30 * k + 27] = varargin_8[j];
      y_data[30 * k + 28] = varargin_9[j];
      y_data[30 * k + 29] = varargin_10[j];
    }
  } else {
    emlrtEnterParallelRegion(&st, omp_in_parallel());
    emlrtPushJmpBuf(&st, &emlrtJBStack);
    cat_numThreads = emlrtAllocRegionTLSs(
        st.tls, omp_in_parallel(), omp_get_max_threads(), omp_get_num_procs());
#pragma omp parallel for num_threads(cat_numThreads) private(ysize, y_tmp)

    for (k = 0; k < j; k++) {
      y_data[30 * k] = varargin_1_data[3 * k];
      y_data[30 * k + 1] = varargin_2_data[3 * k];
      y_data[30 * k + 2] = varargin_3_data[3 * k];
      y_data[30 * k + 3] = varargin_4_data[3 * k];
      y_data[30 * k + 4] = varargin_5_data[3 * k];
      y_data[30 * k + 5] = varargin_6_data[3 * k];
      y_data[30 * k + 6] = varargin_7[3 * k];
      y_data[30 * k + 7] = varargin_8[3 * k];
      y_data[30 * k + 8] = varargin_9[3 * k];
      y_data[30 * k + 9] = varargin_10[3 * k];
      y_tmp = 3 * k + 1;
      y_data[30 * k + 10] = varargin_1_data[y_tmp];
      y_data[30 * k + 11] = varargin_2_data[y_tmp];
      y_data[30 * k + 12] = varargin_3_data[y_tmp];
      y_data[30 * k + 13] = varargin_4_data[y_tmp];
      y_data[30 * k + 14] = varargin_5_data[y_tmp];
      y_data[30 * k + 15] = varargin_6_data[y_tmp];
      y_data[30 * k + 16] = varargin_7[y_tmp];
      y_data[30 * k + 17] = varargin_8[y_tmp];
      y_data[30 * k + 18] = varargin_9[y_tmp];
      y_data[30 * k + 19] = varargin_10[y_tmp];
      y_tmp = 3 * k + 2;
      y_data[30 * k + 20] = varargin_1_data[y_tmp];
      y_data[30 * k + 21] = varargin_2_data[y_tmp];
      y_data[30 * k + 22] = varargin_3_data[y_tmp];
      y_data[30 * k + 23] = varargin_4_data[y_tmp];
      y_data[30 * k + 24] = varargin_5_data[y_tmp];
      y_data[30 * k + 25] = varargin_6_data[y_tmp];
      y_data[30 * k + 26] = varargin_7[y_tmp];
      y_data[30 * k + 27] = varargin_8[y_tmp];
      y_data[30 * k + 28] = varargin_9[y_tmp];
      y_data[30 * k + 29] = varargin_10[y_tmp];
    }
    emlrtPopJmpBuf(&st, &emlrtJBStack);
    emlrtExitParallelRegion(&st, omp_in_parallel());
  }
}

/* End of code generation (cat.c) */
