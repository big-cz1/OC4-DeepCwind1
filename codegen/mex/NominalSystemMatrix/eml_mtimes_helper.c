/*
 * eml_mtimes_helper.c
 *
 * Code generation for function 'eml_mtimes_helper'
 *
 */

/* Include files */
#include "eml_mtimes_helper.h"
#include "NominalSystemMatrix_emxutil.h"
#include "NominalSystemMatrix_types.h"
#include "rt_nonfinite.h"
#include <emmintrin.h>

/* Variable Definitions */
static emlrtRTEInfo wk_emlrtRTEI =
    {
        76,                  /* lineNo */
        13,                  /* colNo */
        "eml_mtimes_helper", /* fName */
        "D:\\Program "
        "Files\\MATLAB\\R2025b\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_"
        "helper.m" /* pName */
};

/* Function Definitions */
void binary_expand_op_82(const emlrtStack *sp, emxArray_real_T *in1,
                         const emxArray_real_T *in2, const real_T in3[68])
{
  emxArray_real_T *b_in1;
  const real_T *in2_data;
  real_T b_in3;
  real_T *b_in1_data;
  real_T *in1_data;
  int32_T aux_0_2;
  int32_T aux_1_2;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_2;
  int32_T stride_1_2;
  in2_data = in2->data;
  in1_data = in1->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  b_in3 = in3[46];
  emxInit_real_T(sp, &b_in1, 3, &wk_emlrtRTEI);
  stride_0_2 = b_in1->size[0] * b_in1->size[1] * b_in1->size[2];
  b_in1->size[0] = 1;
  b_in1->size[1] = 3;
  if (in2->size[2] == 1) {
    loop_ub = in1->size[2];
  } else {
    loop_ub = in2->size[2];
  }
  b_in1->size[2] = loop_ub;
  emxEnsureCapacity_real_T(sp, b_in1, stride_0_2, &wk_emlrtRTEI);
  b_in1_data = b_in1->data;
  stride_0_2 = (in1->size[2] != 1);
  stride_1_2 = (in2->size[2] != 1);
  aux_0_2 = 0;
  aux_1_2 = 0;
  for (i = 0; i < loop_ub; i++) {
    __m128d r;
    __m128d r1;
    r = _mm_loadu_pd(&in1_data[3 * aux_0_2]);
    r1 = _mm_loadu_pd(&in2_data[3 * aux_1_2]);
    _mm_storeu_pd(&b_in1_data[3 * i],
                  _mm_mul_pd(_mm_add_pd(r, r1), _mm_set1_pd(b_in3)));
    b_in1_data[3 * i + 2] =
        (in1_data[3 * aux_0_2 + 2] + in2_data[3 * aux_1_2 + 2]) * b_in3;
    aux_1_2 += stride_1_2;
    aux_0_2 += stride_0_2;
  }
  stride_0_2 = in1->size[0] * in1->size[1] * in1->size[2];
  in1->size[0] = 1;
  in1->size[1] = 3;
  emxEnsureCapacity_real_T(sp, in1, stride_0_2, &wk_emlrtRTEI);
  stride_1_2 = b_in1->size[2];
  stride_0_2 = in1->size[0] * in1->size[1] * in1->size[2];
  in1->size[2] = b_in1->size[2];
  emxEnsureCapacity_real_T(sp, in1, stride_0_2, &wk_emlrtRTEI);
  in1_data = in1->data;
  for (i = 0; i < stride_1_2; i++) {
    in1_data[3 * i] = b_in1_data[3 * i];
    stride_0_2 = 3 * i + 1;
    in1_data[stride_0_2] = b_in1_data[stride_0_2];
    stride_0_2 = 3 * i + 2;
    in1_data[stride_0_2] = b_in1_data[stride_0_2];
  }
  emxFree_real_T(sp, &b_in1);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void binary_expand_op_83(const emlrtStack *sp, emxArray_real_T *in1,
                         const emxArray_real_T *in2, const real_T in3[68])
{
  emxArray_real_T *b_in1;
  const real_T *in2_data;
  real_T b_in3;
  real_T *b_in1_data;
  real_T *in1_data;
  int32_T aux_0_2;
  int32_T aux_1_2;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_2;
  int32_T stride_1_2;
  in2_data = in2->data;
  in1_data = in1->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  b_in3 = in3[45];
  emxInit_real_T(sp, &b_in1, 3, &wk_emlrtRTEI);
  stride_0_2 = b_in1->size[0] * b_in1->size[1] * b_in1->size[2];
  b_in1->size[0] = 1;
  b_in1->size[1] = 3;
  if (in2->size[2] == 1) {
    loop_ub = in1->size[2];
  } else {
    loop_ub = in2->size[2];
  }
  b_in1->size[2] = loop_ub;
  emxEnsureCapacity_real_T(sp, b_in1, stride_0_2, &wk_emlrtRTEI);
  b_in1_data = b_in1->data;
  stride_0_2 = (in1->size[2] != 1);
  stride_1_2 = (in2->size[2] != 1);
  aux_0_2 = 0;
  aux_1_2 = 0;
  for (i = 0; i < loop_ub; i++) {
    __m128d r;
    __m128d r1;
    r = _mm_loadu_pd(&in1_data[3 * aux_0_2]);
    r1 = _mm_loadu_pd(&in2_data[3 * aux_1_2]);
    _mm_storeu_pd(&b_in1_data[3 * i],
                  _mm_mul_pd(_mm_add_pd(r, r1), _mm_set1_pd(b_in3)));
    b_in1_data[3 * i + 2] =
        (in1_data[3 * aux_0_2 + 2] + in2_data[3 * aux_1_2 + 2]) * b_in3;
    aux_1_2 += stride_1_2;
    aux_0_2 += stride_0_2;
  }
  stride_0_2 = in1->size[0] * in1->size[1] * in1->size[2];
  in1->size[0] = 1;
  in1->size[1] = 3;
  emxEnsureCapacity_real_T(sp, in1, stride_0_2, &wk_emlrtRTEI);
  stride_1_2 = b_in1->size[2];
  stride_0_2 = in1->size[0] * in1->size[1] * in1->size[2];
  in1->size[2] = b_in1->size[2];
  emxEnsureCapacity_real_T(sp, in1, stride_0_2, &wk_emlrtRTEI);
  in1_data = in1->data;
  for (i = 0; i < stride_1_2; i++) {
    in1_data[3 * i] = b_in1_data[3 * i];
    stride_0_2 = 3 * i + 1;
    in1_data[stride_0_2] = b_in1_data[stride_0_2];
    stride_0_2 = 3 * i + 2;
    in1_data[stride_0_2] = b_in1_data[stride_0_2];
  }
  emxFree_real_T(sp, &b_in1);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void binary_expand_op_84(const emlrtStack *sp, emxArray_real_T *in1,
                         const emxArray_real_T *in2, const real_T in3[68])
{
  emxArray_real_T *b_in1;
  const real_T *in2_data;
  real_T b_in3;
  real_T *b_in1_data;
  real_T *in1_data;
  int32_T aux_0_2;
  int32_T aux_1_2;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_2;
  int32_T stride_1_2;
  in2_data = in2->data;
  in1_data = in1->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  b_in3 = in3[44];
  emxInit_real_T(sp, &b_in1, 3, &wk_emlrtRTEI);
  stride_0_2 = b_in1->size[0] * b_in1->size[1] * b_in1->size[2];
  b_in1->size[0] = 1;
  b_in1->size[1] = 3;
  if (in2->size[2] == 1) {
    loop_ub = in1->size[2];
  } else {
    loop_ub = in2->size[2];
  }
  b_in1->size[2] = loop_ub;
  emxEnsureCapacity_real_T(sp, b_in1, stride_0_2, &wk_emlrtRTEI);
  b_in1_data = b_in1->data;
  stride_0_2 = (in1->size[2] != 1);
  stride_1_2 = (in2->size[2] != 1);
  aux_0_2 = 0;
  aux_1_2 = 0;
  for (i = 0; i < loop_ub; i++) {
    __m128d r;
    __m128d r1;
    r = _mm_loadu_pd(&in1_data[3 * aux_0_2]);
    r1 = _mm_loadu_pd(&in2_data[3 * aux_1_2]);
    _mm_storeu_pd(&b_in1_data[3 * i],
                  _mm_mul_pd(_mm_add_pd(r, r1), _mm_set1_pd(b_in3)));
    b_in1_data[3 * i + 2] =
        (in1_data[3 * aux_0_2 + 2] + in2_data[3 * aux_1_2 + 2]) * b_in3;
    aux_1_2 += stride_1_2;
    aux_0_2 += stride_0_2;
  }
  stride_0_2 = in1->size[0] * in1->size[1] * in1->size[2];
  in1->size[0] = 1;
  in1->size[1] = 3;
  emxEnsureCapacity_real_T(sp, in1, stride_0_2, &wk_emlrtRTEI);
  stride_1_2 = b_in1->size[2];
  stride_0_2 = in1->size[0] * in1->size[1] * in1->size[2];
  in1->size[2] = b_in1->size[2];
  emxEnsureCapacity_real_T(sp, in1, stride_0_2, &wk_emlrtRTEI);
  in1_data = in1->data;
  for (i = 0; i < stride_1_2; i++) {
    in1_data[3 * i] = b_in1_data[3 * i];
    stride_0_2 = 3 * i + 1;
    in1_data[stride_0_2] = b_in1_data[stride_0_2];
    stride_0_2 = 3 * i + 2;
    in1_data[stride_0_2] = b_in1_data[stride_0_2];
  }
  emxFree_real_T(sp, &b_in1);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void binary_expand_op_85(const emlrtStack *sp, emxArray_real_T *in1,
                         const emxArray_real_T *in2, const real_T in3[68])
{
  emxArray_real_T *b_in1;
  const real_T *in2_data;
  real_T b_in3;
  real_T *b_in1_data;
  real_T *in1_data;
  int32_T aux_0_2;
  int32_T aux_1_2;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_2;
  int32_T stride_1_2;
  in2_data = in2->data;
  in1_data = in1->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  b_in3 = in3[43];
  emxInit_real_T(sp, &b_in1, 3, &wk_emlrtRTEI);
  stride_0_2 = b_in1->size[0] * b_in1->size[1] * b_in1->size[2];
  b_in1->size[0] = 1;
  b_in1->size[1] = 3;
  if (in2->size[2] == 1) {
    loop_ub = in1->size[2];
  } else {
    loop_ub = in2->size[2];
  }
  b_in1->size[2] = loop_ub;
  emxEnsureCapacity_real_T(sp, b_in1, stride_0_2, &wk_emlrtRTEI);
  b_in1_data = b_in1->data;
  stride_0_2 = (in1->size[2] != 1);
  stride_1_2 = (in2->size[2] != 1);
  aux_0_2 = 0;
  aux_1_2 = 0;
  for (i = 0; i < loop_ub; i++) {
    __m128d r;
    __m128d r1;
    r = _mm_loadu_pd(&in1_data[3 * aux_0_2]);
    r1 = _mm_loadu_pd(&in2_data[3 * aux_1_2]);
    _mm_storeu_pd(&b_in1_data[3 * i],
                  _mm_mul_pd(_mm_add_pd(r, r1), _mm_set1_pd(b_in3)));
    b_in1_data[3 * i + 2] =
        (in1_data[3 * aux_0_2 + 2] + in2_data[3 * aux_1_2 + 2]) * b_in3;
    aux_1_2 += stride_1_2;
    aux_0_2 += stride_0_2;
  }
  stride_0_2 = in1->size[0] * in1->size[1] * in1->size[2];
  in1->size[0] = 1;
  in1->size[1] = 3;
  emxEnsureCapacity_real_T(sp, in1, stride_0_2, &wk_emlrtRTEI);
  stride_1_2 = b_in1->size[2];
  stride_0_2 = in1->size[0] * in1->size[1] * in1->size[2];
  in1->size[2] = b_in1->size[2];
  emxEnsureCapacity_real_T(sp, in1, stride_0_2, &wk_emlrtRTEI);
  in1_data = in1->data;
  for (i = 0; i < stride_1_2; i++) {
    in1_data[3 * i] = b_in1_data[3 * i];
    stride_0_2 = 3 * i + 1;
    in1_data[stride_0_2] = b_in1_data[stride_0_2];
    stride_0_2 = 3 * i + 2;
    in1_data[stride_0_2] = b_in1_data[stride_0_2];
  }
  emxFree_real_T(sp, &b_in1);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void binary_expand_op_86(const emlrtStack *sp, emxArray_real_T *in1,
                         const emxArray_real_T *in2, const real_T in3[68])
{
  emxArray_real_T *b_in1;
  const real_T *in2_data;
  real_T b_in3;
  real_T *b_in1_data;
  real_T *in1_data;
  int32_T aux_0_2;
  int32_T aux_1_2;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_2;
  int32_T stride_1_2;
  in2_data = in2->data;
  in1_data = in1->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  b_in3 = in3[42];
  emxInit_real_T(sp, &b_in1, 3, &wk_emlrtRTEI);
  stride_0_2 = b_in1->size[0] * b_in1->size[1] * b_in1->size[2];
  b_in1->size[0] = 1;
  b_in1->size[1] = 3;
  if (in2->size[2] == 1) {
    loop_ub = in1->size[2];
  } else {
    loop_ub = in2->size[2];
  }
  b_in1->size[2] = loop_ub;
  emxEnsureCapacity_real_T(sp, b_in1, stride_0_2, &wk_emlrtRTEI);
  b_in1_data = b_in1->data;
  stride_0_2 = (in1->size[2] != 1);
  stride_1_2 = (in2->size[2] != 1);
  aux_0_2 = 0;
  aux_1_2 = 0;
  for (i = 0; i < loop_ub; i++) {
    __m128d r;
    __m128d r1;
    r = _mm_loadu_pd(&in1_data[3 * aux_0_2]);
    r1 = _mm_loadu_pd(&in2_data[3 * aux_1_2]);
    _mm_storeu_pd(&b_in1_data[3 * i],
                  _mm_mul_pd(_mm_add_pd(r, r1), _mm_set1_pd(b_in3)));
    b_in1_data[3 * i + 2] =
        (in1_data[3 * aux_0_2 + 2] + in2_data[3 * aux_1_2 + 2]) * b_in3;
    aux_1_2 += stride_1_2;
    aux_0_2 += stride_0_2;
  }
  stride_0_2 = in1->size[0] * in1->size[1] * in1->size[2];
  in1->size[0] = 1;
  in1->size[1] = 3;
  emxEnsureCapacity_real_T(sp, in1, stride_0_2, &wk_emlrtRTEI);
  stride_1_2 = b_in1->size[2];
  stride_0_2 = in1->size[0] * in1->size[1] * in1->size[2];
  in1->size[2] = b_in1->size[2];
  emxEnsureCapacity_real_T(sp, in1, stride_0_2, &wk_emlrtRTEI);
  in1_data = in1->data;
  for (i = 0; i < stride_1_2; i++) {
    in1_data[3 * i] = b_in1_data[3 * i];
    stride_0_2 = 3 * i + 1;
    in1_data[stride_0_2] = b_in1_data[stride_0_2];
    stride_0_2 = 3 * i + 2;
    in1_data[stride_0_2] = b_in1_data[stride_0_2];
  }
  emxFree_real_T(sp, &b_in1);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void binary_expand_op_87(const emlrtStack *sp, emxArray_real_T *in1,
                         const emxArray_real_T *in2, const real_T in3[68])
{
  emxArray_real_T *b_in1;
  const real_T *in2_data;
  real_T b_in3;
  real_T *b_in1_data;
  real_T *in1_data;
  int32_T aux_0_2;
  int32_T aux_1_2;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_2;
  int32_T stride_1_2;
  in2_data = in2->data;
  in1_data = in1->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  b_in3 = in3[41];
  emxInit_real_T(sp, &b_in1, 3, &wk_emlrtRTEI);
  stride_0_2 = b_in1->size[0] * b_in1->size[1] * b_in1->size[2];
  b_in1->size[0] = 1;
  b_in1->size[1] = 3;
  if (in2->size[2] == 1) {
    loop_ub = in1->size[2];
  } else {
    loop_ub = in2->size[2];
  }
  b_in1->size[2] = loop_ub;
  emxEnsureCapacity_real_T(sp, b_in1, stride_0_2, &wk_emlrtRTEI);
  b_in1_data = b_in1->data;
  stride_0_2 = (in1->size[2] != 1);
  stride_1_2 = (in2->size[2] != 1);
  aux_0_2 = 0;
  aux_1_2 = 0;
  for (i = 0; i < loop_ub; i++) {
    __m128d r;
    __m128d r1;
    r = _mm_loadu_pd(&in1_data[3 * aux_0_2]);
    r1 = _mm_loadu_pd(&in2_data[3 * aux_1_2]);
    _mm_storeu_pd(&b_in1_data[3 * i],
                  _mm_mul_pd(_mm_add_pd(r, r1), _mm_set1_pd(b_in3)));
    b_in1_data[3 * i + 2] =
        (in1_data[3 * aux_0_2 + 2] + in2_data[3 * aux_1_2 + 2]) * b_in3;
    aux_1_2 += stride_1_2;
    aux_0_2 += stride_0_2;
  }
  stride_0_2 = in1->size[0] * in1->size[1] * in1->size[2];
  in1->size[0] = 1;
  in1->size[1] = 3;
  emxEnsureCapacity_real_T(sp, in1, stride_0_2, &wk_emlrtRTEI);
  stride_1_2 = b_in1->size[2];
  stride_0_2 = in1->size[0] * in1->size[1] * in1->size[2];
  in1->size[2] = b_in1->size[2];
  emxEnsureCapacity_real_T(sp, in1, stride_0_2, &wk_emlrtRTEI);
  in1_data = in1->data;
  for (i = 0; i < stride_1_2; i++) {
    in1_data[3 * i] = b_in1_data[3 * i];
    stride_0_2 = 3 * i + 1;
    in1_data[stride_0_2] = b_in1_data[stride_0_2];
    stride_0_2 = 3 * i + 2;
    in1_data[stride_0_2] = b_in1_data[stride_0_2];
  }
  emxFree_real_T(sp, &b_in1);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void binary_expand_op_88(const emlrtStack *sp, emxArray_real_T *in1,
                         const emxArray_real_T *in2, const real_T in3[68])
{
  emxArray_real_T *b_in1;
  const real_T *in2_data;
  real_T b_in3;
  real_T *b_in1_data;
  real_T *in1_data;
  int32_T aux_0_2;
  int32_T aux_1_2;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_2;
  int32_T stride_1_2;
  in2_data = in2->data;
  in1_data = in1->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  b_in3 = in3[40];
  emxInit_real_T(sp, &b_in1, 3, &wk_emlrtRTEI);
  stride_0_2 = b_in1->size[0] * b_in1->size[1] * b_in1->size[2];
  b_in1->size[0] = 1;
  b_in1->size[1] = 3;
  if (in2->size[2] == 1) {
    loop_ub = in1->size[2];
  } else {
    loop_ub = in2->size[2];
  }
  b_in1->size[2] = loop_ub;
  emxEnsureCapacity_real_T(sp, b_in1, stride_0_2, &wk_emlrtRTEI);
  b_in1_data = b_in1->data;
  stride_0_2 = (in1->size[2] != 1);
  stride_1_2 = (in2->size[2] != 1);
  aux_0_2 = 0;
  aux_1_2 = 0;
  for (i = 0; i < loop_ub; i++) {
    __m128d r;
    __m128d r1;
    r = _mm_loadu_pd(&in1_data[3 * aux_0_2]);
    r1 = _mm_loadu_pd(&in2_data[3 * aux_1_2]);
    _mm_storeu_pd(&b_in1_data[3 * i],
                  _mm_mul_pd(_mm_add_pd(r, r1), _mm_set1_pd(b_in3)));
    b_in1_data[3 * i + 2] =
        (in1_data[3 * aux_0_2 + 2] + in2_data[3 * aux_1_2 + 2]) * b_in3;
    aux_1_2 += stride_1_2;
    aux_0_2 += stride_0_2;
  }
  stride_0_2 = in1->size[0] * in1->size[1] * in1->size[2];
  in1->size[0] = 1;
  in1->size[1] = 3;
  emxEnsureCapacity_real_T(sp, in1, stride_0_2, &wk_emlrtRTEI);
  stride_1_2 = b_in1->size[2];
  stride_0_2 = in1->size[0] * in1->size[1] * in1->size[2];
  in1->size[2] = b_in1->size[2];
  emxEnsureCapacity_real_T(sp, in1, stride_0_2, &wk_emlrtRTEI);
  in1_data = in1->data;
  for (i = 0; i < stride_1_2; i++) {
    in1_data[3 * i] = b_in1_data[3 * i];
    stride_0_2 = 3 * i + 1;
    in1_data[stride_0_2] = b_in1_data[stride_0_2];
    stride_0_2 = 3 * i + 2;
    in1_data[stride_0_2] = b_in1_data[stride_0_2];
  }
  emxFree_real_T(sp, &b_in1);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void binary_expand_op_89(const emlrtStack *sp, emxArray_real_T *in1,
                         const emxArray_real_T *in2, const real_T in3[68])
{
  emxArray_real_T *b_in1;
  const real_T *in2_data;
  real_T b_in3;
  real_T *b_in1_data;
  real_T *in1_data;
  int32_T aux_0_2;
  int32_T aux_1_2;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_2;
  int32_T stride_1_2;
  in2_data = in2->data;
  in1_data = in1->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  b_in3 = in3[39];
  emxInit_real_T(sp, &b_in1, 3, &wk_emlrtRTEI);
  stride_0_2 = b_in1->size[0] * b_in1->size[1] * b_in1->size[2];
  b_in1->size[0] = 1;
  b_in1->size[1] = 3;
  if (in2->size[2] == 1) {
    loop_ub = in1->size[2];
  } else {
    loop_ub = in2->size[2];
  }
  b_in1->size[2] = loop_ub;
  emxEnsureCapacity_real_T(sp, b_in1, stride_0_2, &wk_emlrtRTEI);
  b_in1_data = b_in1->data;
  stride_0_2 = (in1->size[2] != 1);
  stride_1_2 = (in2->size[2] != 1);
  aux_0_2 = 0;
  aux_1_2 = 0;
  for (i = 0; i < loop_ub; i++) {
    __m128d r;
    __m128d r1;
    r = _mm_loadu_pd(&in1_data[3 * aux_0_2]);
    r1 = _mm_loadu_pd(&in2_data[3 * aux_1_2]);
    _mm_storeu_pd(&b_in1_data[3 * i],
                  _mm_mul_pd(_mm_add_pd(r, r1), _mm_set1_pd(b_in3)));
    b_in1_data[3 * i + 2] =
        (in1_data[3 * aux_0_2 + 2] + in2_data[3 * aux_1_2 + 2]) * b_in3;
    aux_1_2 += stride_1_2;
    aux_0_2 += stride_0_2;
  }
  stride_0_2 = in1->size[0] * in1->size[1] * in1->size[2];
  in1->size[0] = 1;
  in1->size[1] = 3;
  emxEnsureCapacity_real_T(sp, in1, stride_0_2, &wk_emlrtRTEI);
  stride_1_2 = b_in1->size[2];
  stride_0_2 = in1->size[0] * in1->size[1] * in1->size[2];
  in1->size[2] = b_in1->size[2];
  emxEnsureCapacity_real_T(sp, in1, stride_0_2, &wk_emlrtRTEI);
  in1_data = in1->data;
  for (i = 0; i < stride_1_2; i++) {
    in1_data[3 * i] = b_in1_data[3 * i];
    stride_0_2 = 3 * i + 1;
    in1_data[stride_0_2] = b_in1_data[stride_0_2];
    stride_0_2 = 3 * i + 2;
    in1_data[stride_0_2] = b_in1_data[stride_0_2];
  }
  emxFree_real_T(sp, &b_in1);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void binary_expand_op_90(const emlrtStack *sp, emxArray_real_T *in1,
                         const emxArray_real_T *in2, const real_T in3[68])
{
  emxArray_real_T *b_in1;
  const real_T *in2_data;
  real_T b_in3;
  real_T *b_in1_data;
  real_T *in1_data;
  int32_T aux_0_2;
  int32_T aux_1_2;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_2;
  int32_T stride_1_2;
  in2_data = in2->data;
  in1_data = in1->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  b_in3 = in3[38];
  emxInit_real_T(sp, &b_in1, 3, &wk_emlrtRTEI);
  stride_0_2 = b_in1->size[0] * b_in1->size[1] * b_in1->size[2];
  b_in1->size[0] = 1;
  b_in1->size[1] = 3;
  if (in2->size[2] == 1) {
    loop_ub = in1->size[2];
  } else {
    loop_ub = in2->size[2];
  }
  b_in1->size[2] = loop_ub;
  emxEnsureCapacity_real_T(sp, b_in1, stride_0_2, &wk_emlrtRTEI);
  b_in1_data = b_in1->data;
  stride_0_2 = (in1->size[2] != 1);
  stride_1_2 = (in2->size[2] != 1);
  aux_0_2 = 0;
  aux_1_2 = 0;
  for (i = 0; i < loop_ub; i++) {
    __m128d r;
    __m128d r1;
    r = _mm_loadu_pd(&in1_data[3 * aux_0_2]);
    r1 = _mm_loadu_pd(&in2_data[3 * aux_1_2]);
    _mm_storeu_pd(&b_in1_data[3 * i],
                  _mm_mul_pd(_mm_add_pd(r, r1), _mm_set1_pd(b_in3)));
    b_in1_data[3 * i + 2] =
        (in1_data[3 * aux_0_2 + 2] + in2_data[3 * aux_1_2 + 2]) * b_in3;
    aux_1_2 += stride_1_2;
    aux_0_2 += stride_0_2;
  }
  stride_0_2 = in1->size[0] * in1->size[1] * in1->size[2];
  in1->size[0] = 1;
  in1->size[1] = 3;
  emxEnsureCapacity_real_T(sp, in1, stride_0_2, &wk_emlrtRTEI);
  stride_1_2 = b_in1->size[2];
  stride_0_2 = in1->size[0] * in1->size[1] * in1->size[2];
  in1->size[2] = b_in1->size[2];
  emxEnsureCapacity_real_T(sp, in1, stride_0_2, &wk_emlrtRTEI);
  in1_data = in1->data;
  for (i = 0; i < stride_1_2; i++) {
    in1_data[3 * i] = b_in1_data[3 * i];
    stride_0_2 = 3 * i + 1;
    in1_data[stride_0_2] = b_in1_data[stride_0_2];
    stride_0_2 = 3 * i + 2;
    in1_data[stride_0_2] = b_in1_data[stride_0_2];
  }
  emxFree_real_T(sp, &b_in1);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void binary_expand_op_91(const emlrtStack *sp, emxArray_real_T *in1,
                         const emxArray_real_T *in2, const real_T in3[68])
{
  emxArray_real_T *b_in1;
  const real_T *in2_data;
  real_T b_in3;
  real_T *b_in1_data;
  real_T *in1_data;
  int32_T aux_0_2;
  int32_T aux_1_2;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_2;
  int32_T stride_1_2;
  in2_data = in2->data;
  in1_data = in1->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  b_in3 = in3[37];
  emxInit_real_T(sp, &b_in1, 3, &wk_emlrtRTEI);
  stride_0_2 = b_in1->size[0] * b_in1->size[1] * b_in1->size[2];
  b_in1->size[0] = 1;
  b_in1->size[1] = 3;
  if (in2->size[2] == 1) {
    loop_ub = in1->size[2];
  } else {
    loop_ub = in2->size[2];
  }
  b_in1->size[2] = loop_ub;
  emxEnsureCapacity_real_T(sp, b_in1, stride_0_2, &wk_emlrtRTEI);
  b_in1_data = b_in1->data;
  stride_0_2 = (in1->size[2] != 1);
  stride_1_2 = (in2->size[2] != 1);
  aux_0_2 = 0;
  aux_1_2 = 0;
  for (i = 0; i < loop_ub; i++) {
    __m128d r;
    __m128d r1;
    r = _mm_loadu_pd(&in1_data[3 * aux_0_2]);
    r1 = _mm_loadu_pd(&in2_data[3 * aux_1_2]);
    _mm_storeu_pd(&b_in1_data[3 * i],
                  _mm_mul_pd(_mm_add_pd(r, r1), _mm_set1_pd(b_in3)));
    b_in1_data[3 * i + 2] =
        (in1_data[3 * aux_0_2 + 2] + in2_data[3 * aux_1_2 + 2]) * b_in3;
    aux_1_2 += stride_1_2;
    aux_0_2 += stride_0_2;
  }
  stride_0_2 = in1->size[0] * in1->size[1] * in1->size[2];
  in1->size[0] = 1;
  in1->size[1] = 3;
  emxEnsureCapacity_real_T(sp, in1, stride_0_2, &wk_emlrtRTEI);
  stride_1_2 = b_in1->size[2];
  stride_0_2 = in1->size[0] * in1->size[1] * in1->size[2];
  in1->size[2] = b_in1->size[2];
  emxEnsureCapacity_real_T(sp, in1, stride_0_2, &wk_emlrtRTEI);
  in1_data = in1->data;
  for (i = 0; i < stride_1_2; i++) {
    in1_data[3 * i] = b_in1_data[3 * i];
    stride_0_2 = 3 * i + 1;
    in1_data[stride_0_2] = b_in1_data[stride_0_2];
    stride_0_2 = 3 * i + 2;
    in1_data[stride_0_2] = b_in1_data[stride_0_2];
  }
  emxFree_real_T(sp, &b_in1);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

/* End of code generation (eml_mtimes_helper.c) */
