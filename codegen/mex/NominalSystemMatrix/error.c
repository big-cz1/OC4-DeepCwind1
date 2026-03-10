/*
 * error.c
 *
 * Code generation for function 'error'
 *
 */

/* Include files */
#include "error.h"
#include "NominalSystemMatrix_data.h"
#include "NominalSystemMatrix_mexutil.h"
#include "_coder_NominalSystemMatrix_api.h"
#include "rt_nonfinite.h"

/* Function Declarations */
static void f_error(const emlrtStack *sp, const mxArray *m, const mxArray *m1,
                    emlrtMCInfo *location);

/* Function Definitions */
static void f_error(const emlrtStack *sp, const mxArray *m, const mxArray *m1,
                    emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  pArrays[0] = m;
  pArrays[1] = m1;
  emlrtCallMATLABR2012b((emlrtConstCTX)sp, 0, NULL, 2, &pArrays[0], "error",
                        true, location);
}

void b_error(const emlrtStack *sp, real_T varargin_2)
{
  static const int32_T b_iv[2] = {1, 73};
  static const char_T varargin_1[73] = {
      'H', 'i', 'g', 'h', 'e', 's', 't', ' ', 'v', 'e', 'r', 't', 'i', 'c', 'a',
      'l', ' ', 'i', 'n', 't', 'e', 'r', 'p', 'o', 'l', 'a', 't', 'i', 'o', 'n',
      ' ', 'p', 'o', 'i', 'n', 't', ' ', '%', 'f', ' ', 'b', 'e', 'y', 'o', 'n',
      'd', ' ', 'g', 'r', 'i', 'd', '.', ' ', 'I', 'n', 'c', 'r', 'e', 'a', 's',
      'e', ' ', 'g', 'r', 'i', 'd', ' ', 'h', 'e', 'i', 'g', 'h', 't'};
  emlrtStack st;
  const mxArray *m;
  const mxArray *m1;
  const mxArray *m2;
  const mxArray *y;
  st.prev = sp;
  st.tls = sp->tls;
  m = NULL;
  m1 = NULL;
  y = NULL;
  m2 = emlrtCreateCharArray(2, &b_iv[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 73, m2, &varargin_1[0]);
  emlrtAssign(&y, m2);
  emlrtAssign(&m, y);
  emlrtAssign(&m1, emlrt_marshallOut(varargin_2));
  emlrt_synchGlobalsToML(sp);
  st.site = &jv_emlrtRSI;
  f_error(&st, emlrtAlias(m), emlrtAlias(m1), &emlrtMCI);
  emlrt_synchGlobalsFromML(sp);
  emlrtDestroyArray(&m);
  emlrtDestroyArray(&m1);
}

void c_error(const emlrtStack *sp, real_T varargin_2)
{
  static const int32_T b_iv[2] = {1, 72};
  static const char_T varargin_1[72] = {
      'L', 'o', 'w', 'e', 's', 't', ' ', 'v', 'e', 'r', 't', 'i', 'c', 'a', 'l',
      ' ', 'i', 'n', 't', 'e', 'r', 'p', 'o', 'l', 'a', 't', 'i', 'o', 'n', ' ',
      'p', 'o', 'i', 'n', 't', ' ', '%', 'f', ' ', 'b', 'e', 'y', 'o', 'n', 'd',
      ' ', 'g', 'r', 'i', 'd', '.', ' ', 'I', 'n', 'c', 'r', 'e', 'a', 's', 'e',
      ' ', 'g', 'r', 'i', 'd', ' ', 'h', 'e', 'i', 'g', 'h', 't'};
  emlrtStack st;
  const mxArray *m;
  const mxArray *m1;
  const mxArray *m2;
  const mxArray *y;
  st.prev = sp;
  st.tls = sp->tls;
  m = NULL;
  m1 = NULL;
  y = NULL;
  m2 = emlrtCreateCharArray(2, &b_iv[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 72, m2, &varargin_1[0]);
  emlrtAssign(&y, m2);
  emlrtAssign(&m, y);
  emlrtAssign(&m1, emlrt_marshallOut(varargin_2));
  emlrt_synchGlobalsToML(sp);
  st.site = &jv_emlrtRSI;
  f_error(&st, emlrtAlias(m), emlrtAlias(m1), &emlrtMCI);
  emlrt_synchGlobalsFromML(sp);
  emlrtDestroyArray(&m);
  emlrtDestroyArray(&m1);
}

void d_error(const emlrtStack *sp, real_T varargin_2)
{
  static const int32_T b_iv[2] = {1, 66};
  static const char_T varargin_1[66] = {
      'H', 'o', 'r', 'i', 'z', 'o', 'n', 't', 'a', 'l', ' ', 'i', 'n', 't',
      'e', 'r', 'p', 'o', 'l', 'a', 't', 'i', 'o', 'n', ' ', 'p', 'o', 'i',
      'n', 't', ' ', 'b', 'e', 'y', 'o', 'n', 'd', ' ', '%', 'f', ' ', 'g',
      'r', 'i', 'd', '.', ' ', 'I', 'n', 'c', 'r', 'e', 'a', 's', 'e', ' ',
      'g', 'r', 'i', 'd', ' ', 'w', 'i', 'd', 't', 'h'};
  emlrtStack st;
  const mxArray *m;
  const mxArray *m1;
  const mxArray *m2;
  const mxArray *y;
  st.prev = sp;
  st.tls = sp->tls;
  m = NULL;
  m1 = NULL;
  y = NULL;
  m2 = emlrtCreateCharArray(2, &b_iv[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 66, m2, &varargin_1[0]);
  emlrtAssign(&y, m2);
  emlrtAssign(&m, y);
  emlrtAssign(&m1, emlrt_marshallOut(varargin_2));
  emlrt_synchGlobalsToML(sp);
  st.site = &jv_emlrtRSI;
  f_error(&st, emlrtAlias(m), emlrtAlias(m1), &emlrtMCI);
  emlrt_synchGlobalsFromML(sp);
  emlrtDestroyArray(&m);
  emlrtDestroyArray(&m1);
}

/* End of code generation (error.c) */
