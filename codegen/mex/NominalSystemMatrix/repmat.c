/*
 * repmat.c
 *
 * Code generation for function 'repmat'
 *
 */

/* Include files */
#include "repmat.h"
#include "NominalSystemMatrix_data.h"
#include "NominalSystemMatrix_emxutil.h"
#include "NominalSystemMatrix_types.h"
#include "assertValidSizeArg.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo lr_emlrtRSI = {
    34,       /* lineNo */
    "repmat", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\R2025b\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m" /* pathName
                                                                         */
};

static emlrtRSInfo mr_emlrtRSI = {
    78,       /* lineNo */
    "repmat", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\R2025b\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m" /* pathName
                                                                         */
};

static emlrtDCInfo e_emlrtDCI = {
    37,       /* lineNo */
    14,       /* colNo */
    "repmat", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\R2025b\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m", /* pName
                                                                          */
    4 /* checkKind */
};

static emlrtRTEInfo jc_emlrtRTEI = {
    73,       /* lineNo */
    28,       /* colNo */
    "repmat", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\R2025b\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m" /* pName
                                                                         */
};

/* Function Definitions */
void b_repmat(const emlrtStack *sp, real_T varargin_3, emxArray_real_T *b)
{
  emlrtStack b_st;
  emlrtStack st;
  const mxArray *m;
  real_T d;
  real_T *b_data;
  int32_T i;
  int32_T ibtile;
  int32_T jtilecol;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  m = NULL;
  st.site = &lr_emlrtRSI;
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
  if (!(varargin_3 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(varargin_3, &e_emlrtDCI, (emlrtConstCTX)sp);
  }
  ibtile = b->size[0] * b->size[1] * b->size[2];
  b->size[0] = 1;
  b->size[1] = 3;
  i = (int32_T)varargin_3;
  b->size[2] = (int32_T)varargin_3;
  emxEnsureCapacity_real_T(sp, b, ibtile, &jc_emlrtRTEI);
  b_data = b->data;
  st.site = &mr_emlrtRSI;
  if ((int32_T)varargin_3 > 2147483646) {
    b_st.site = &hr_emlrtRSI;
    check_forloop_overflow_error(&b_st);
  }
  for (jtilecol = 0; jtilecol < i; jtilecol++) {
    ibtile = jtilecol * 3;
    b_data[ibtile] = 0.0;
    b_data[ibtile + 1] = 1.0;
    b_data[ibtile + 2] = 0.0;
  }
  emlrtDestroyArray(&m);
}

void c_repmat(const emlrtStack *sp, real_T varargin_3, emxArray_real_T *b)
{
  emlrtStack b_st;
  emlrtStack st;
  const mxArray *m;
  real_T d;
  real_T *b_data;
  int32_T i;
  int32_T ibtile;
  int32_T jtilecol;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  m = NULL;
  st.site = &lr_emlrtRSI;
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
  ibtile = b->size[0] * b->size[1] * b->size[2];
  b->size[0] = 1;
  b->size[1] = 3;
  i = (int32_T)varargin_3;
  b->size[2] = (int32_T)varargin_3;
  emxEnsureCapacity_real_T(sp, b, ibtile, &jc_emlrtRTEI);
  b_data = b->data;
  st.site = &mr_emlrtRSI;
  if ((int32_T)varargin_3 > 2147483646) {
    b_st.site = &hr_emlrtRSI;
    check_forloop_overflow_error(&b_st);
  }
  for (jtilecol = 0; jtilecol < i; jtilecol++) {
    ibtile = jtilecol * 3;
    b_data[ibtile] = 0.0;
    b_data[ibtile + 1] = 0.0;
    b_data[ibtile + 2] = 1.0;
  }
  emlrtDestroyArray(&m);
}

void d_repmat(const emlrtStack *sp, const real_T varargin_1[3],
              emxArray_real_T *b)
{
  emlrtStack b_st;
  emlrtStack st;
  const mxArray *m;
  real_T *b_data;
  int32_T i;
  int32_T ibtile;
  int32_T jtilecol;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  m = NULL;
  st.site = &lr_emlrtRSI;
  b_assertValidSizeArg(&st, varargin_1);
  ibtile = b->size[0] * b->size[1] * b->size[2];
  b->size[0] = 1;
  b->size[1] = 3;
  i = (int32_T)varargin_1[2];
  b->size[2] = (int32_T)varargin_1[2];
  emxEnsureCapacity_real_T(sp, b, ibtile, &jc_emlrtRTEI);
  b_data = b->data;
  st.site = &mr_emlrtRSI;
  if ((int32_T)varargin_1[2] > 2147483646) {
    b_st.site = &hr_emlrtRSI;
    check_forloop_overflow_error(&b_st);
  }
  for (jtilecol = 0; jtilecol < i; jtilecol++) {
    ibtile = jtilecol * 3;
    b_data[ibtile] = 1.0;
    b_data[ibtile + 1] = 0.0;
    b_data[ibtile + 2] = 0.0;
  }
  emlrtDestroyArray(&m);
}

void e_repmat(const emlrtStack *sp, const real_T varargin_1[3],
              emxArray_real_T *b)
{
  emlrtStack b_st;
  emlrtStack st;
  const mxArray *m;
  real_T *b_data;
  int32_T i;
  int32_T ibtile;
  int32_T jtilecol;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  m = NULL;
  st.site = &lr_emlrtRSI;
  b_assertValidSizeArg(&st, varargin_1);
  ibtile = b->size[0] * b->size[1] * b->size[2];
  b->size[0] = 1;
  b->size[1] = 3;
  i = (int32_T)varargin_1[2];
  b->size[2] = (int32_T)varargin_1[2];
  emxEnsureCapacity_real_T(sp, b, ibtile, &jc_emlrtRTEI);
  b_data = b->data;
  st.site = &mr_emlrtRSI;
  if ((int32_T)varargin_1[2] > 2147483646) {
    b_st.site = &hr_emlrtRSI;
    check_forloop_overflow_error(&b_st);
  }
  for (jtilecol = 0; jtilecol < i; jtilecol++) {
    ibtile = jtilecol * 3;
    b_data[ibtile] = 0.0;
    b_data[ibtile + 1] = 0.0;
    b_data[ibtile + 2] = -1.0;
  }
  emlrtDestroyArray(&m);
}

void f_repmat(const emlrtStack *sp, const real_T varargin_1[3],
              emxArray_real_T *b)
{
  emlrtStack b_st;
  emlrtStack st;
  const mxArray *m;
  real_T *b_data;
  int32_T i;
  int32_T ibtile;
  int32_T jtilecol;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  m = NULL;
  st.site = &lr_emlrtRSI;
  b_assertValidSizeArg(&st, varargin_1);
  ibtile = b->size[0] * b->size[1] * b->size[2];
  b->size[0] = 1;
  b->size[1] = 3;
  i = (int32_T)varargin_1[2];
  b->size[2] = (int32_T)varargin_1[2];
  emxEnsureCapacity_real_T(sp, b, ibtile, &jc_emlrtRTEI);
  b_data = b->data;
  st.site = &mr_emlrtRSI;
  if ((int32_T)varargin_1[2] > 2147483646) {
    b_st.site = &hr_emlrtRSI;
    check_forloop_overflow_error(&b_st);
  }
  for (jtilecol = 0; jtilecol < i; jtilecol++) {
    ibtile = jtilecol * 3;
    b_data[ibtile] = 0.0;
    b_data[ibtile + 1] = 1.0;
    b_data[ibtile + 2] = 0.0;
  }
  emlrtDestroyArray(&m);
}

void g_repmat(const emlrtStack *sp, real_T varargin_3, emxArray_real_T *b)
{
  emlrtStack b_st;
  emlrtStack st;
  const mxArray *m;
  real_T d;
  real_T *b_data;
  int32_T i;
  int32_T ibtile;
  int32_T jtilecol;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  m = NULL;
  st.site = &lr_emlrtRSI;
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
  if (!(varargin_3 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(varargin_3, &e_emlrtDCI, (emlrtConstCTX)sp);
  }
  ibtile = b->size[0] * b->size[1] * b->size[2];
  b->size[0] = 1;
  b->size[1] = 3;
  i = (int32_T)varargin_3;
  b->size[2] = (int32_T)varargin_3;
  emxEnsureCapacity_real_T(sp, b, ibtile, &jc_emlrtRTEI);
  b_data = b->data;
  st.site = &mr_emlrtRSI;
  if ((int32_T)varargin_3 > 2147483646) {
    b_st.site = &hr_emlrtRSI;
    check_forloop_overflow_error(&b_st);
  }
  for (jtilecol = 0; jtilecol < i; jtilecol++) {
    ibtile = jtilecol * 3;
    b_data[ibtile] = 1.0;
    b_data[ibtile + 1] = 0.0;
    b_data[ibtile + 2] = 0.0;
  }
  emlrtDestroyArray(&m);
}

void h_repmat(const emlrtStack *sp, real_T varargin_3, emxArray_real_T *b)
{
  emlrtStack b_st;
  emlrtStack st;
  const mxArray *m;
  real_T d;
  real_T *b_data;
  int32_T i;
  int32_T ibtile;
  int32_T jtilecol;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  m = NULL;
  st.site = &lr_emlrtRSI;
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
  if (!(varargin_3 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(varargin_3, &e_emlrtDCI, (emlrtConstCTX)sp);
  }
  ibtile = b->size[0] * b->size[1] * b->size[2];
  b->size[0] = 1;
  b->size[1] = 3;
  i = (int32_T)varargin_3;
  b->size[2] = (int32_T)varargin_3;
  emxEnsureCapacity_real_T(sp, b, ibtile, &jc_emlrtRTEI);
  b_data = b->data;
  st.site = &mr_emlrtRSI;
  if ((int32_T)varargin_3 > 2147483646) {
    b_st.site = &hr_emlrtRSI;
    check_forloop_overflow_error(&b_st);
  }
  for (jtilecol = 0; jtilecol < i; jtilecol++) {
    ibtile = jtilecol * 3;
    b_data[ibtile] = 0.0;
    b_data[ibtile + 1] = 0.0;
    b_data[ibtile + 2] = -1.0;
  }
  emlrtDestroyArray(&m);
}

void i_repmat(const emlrtStack *sp, const real_T a[3],
              const real_T varargin_1[3], emxArray_real_T *b)
{
  emlrtStack b_st;
  emlrtStack st;
  const mxArray *m;
  real_T *b_data;
  int32_T i;
  int32_T ibtile;
  int32_T jtilecol;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  m = NULL;
  st.site = &lr_emlrtRSI;
  b_assertValidSizeArg(&st, varargin_1);
  ibtile = b->size[0] * b->size[1] * b->size[2];
  b->size[0] = 1;
  b->size[1] = 3;
  i = (int32_T)varargin_1[2];
  b->size[2] = (int32_T)varargin_1[2];
  emxEnsureCapacity_real_T(sp, b, ibtile, &jc_emlrtRTEI);
  b_data = b->data;
  st.site = &mr_emlrtRSI;
  if ((int32_T)varargin_1[2] > 2147483646) {
    b_st.site = &hr_emlrtRSI;
    check_forloop_overflow_error(&b_st);
  }
  for (jtilecol = 0; jtilecol < i; jtilecol++) {
    ibtile = jtilecol * 3;
    b_data[ibtile] = a[0];
    b_data[ibtile + 1] = a[1];
    b_data[ibtile + 2] = a[2];
  }
  emlrtDestroyArray(&m);
}

void j_repmat(const emlrtStack *sp, real_T varargin_3, emxArray_real_T *b)
{
  emlrtStack b_st;
  emlrtStack st;
  const mxArray *m;
  real_T d;
  real_T *b_data;
  int32_T i;
  int32_T ibtile;
  int32_T jtilecol;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  m = NULL;
  st.site = &lr_emlrtRSI;
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
  if (!(varargin_3 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(varargin_3, &e_emlrtDCI, (emlrtConstCTX)sp);
  }
  ibtile = b->size[0] * b->size[1] * b->size[2];
  b->size[0] = 1;
  b->size[1] = 3;
  i = (int32_T)varargin_3;
  b->size[2] = (int32_T)varargin_3;
  emxEnsureCapacity_real_T(sp, b, ibtile, &jc_emlrtRTEI);
  b_data = b->data;
  st.site = &mr_emlrtRSI;
  if ((int32_T)varargin_3 > 2147483646) {
    b_st.site = &hr_emlrtRSI;
    check_forloop_overflow_error(&b_st);
  }
  for (jtilecol = 0; jtilecol < i; jtilecol++) {
    ibtile = jtilecol * 3;
    b_data[ibtile] = 0.0;
    b_data[ibtile + 1] = 0.0;
    b_data[ibtile + 2] = 0.0;
  }
  emlrtDestroyArray(&m);
}

void repmat(const emlrtStack *sp, const real_T a[3], real_T varargin_3,
            emxArray_real_T *b)
{
  emlrtStack b_st;
  emlrtStack st;
  const mxArray *m;
  real_T d;
  real_T *b_data;
  int32_T i;
  int32_T ibtile;
  int32_T jtilecol;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  m = NULL;
  st.site = &lr_emlrtRSI;
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
  if (!(varargin_3 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(varargin_3, &e_emlrtDCI, (emlrtConstCTX)sp);
  }
  ibtile = b->size[0] * b->size[1] * b->size[2];
  b->size[0] = 1;
  b->size[1] = 3;
  i = (int32_T)varargin_3;
  b->size[2] = (int32_T)varargin_3;
  emxEnsureCapacity_real_T(sp, b, ibtile, &jc_emlrtRTEI);
  b_data = b->data;
  st.site = &mr_emlrtRSI;
  if ((int32_T)varargin_3 > 2147483646) {
    b_st.site = &hr_emlrtRSI;
    check_forloop_overflow_error(&b_st);
  }
  for (jtilecol = 0; jtilecol < i; jtilecol++) {
    ibtile = jtilecol * 3;
    b_data[ibtile] = a[0];
    b_data[ibtile + 1] = a[1];
    b_data[ibtile + 2] = a[2];
  }
  emlrtDestroyArray(&m);
}

/* End of code generation (repmat.c) */
