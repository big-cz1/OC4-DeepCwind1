/*
 * _coder_NominalSystemMatrix_mex.c
 *
 * Code generation for function '_coder_NominalSystemMatrix_mex'
 *
 */

/* Include files */
#include "_coder_NominalSystemMatrix_mex.h"
#include "NominalSystemMatrix.h"
#include "NominalSystemMatrix_data.h"
#include "NominalSystemMatrix_initialize.h"
#include "NominalSystemMatrix_terminate.h"
#include "NominalSystemMatrix_types.h"
#include "_coder_NominalSystemMatrix_api.h"
#include "rt_nonfinite.h"
#include "omp.h"

/* Function Definitions */
void NominalSystemMatrix_mexFunction(NominalSystemMatrixStackData *SD,
                                     int32_T nlhs, mxArray *plhs[3],
                                     int32_T nrhs, const mxArray *prhs[10])
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  const mxArray *outputs[3];
  int32_T i;
  st.tls = emlrtRootTLSGlobal;
  /* Check for proper number of arguments. */
  if (nrhs != 10) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 10, 4,
                        19, "NominalSystemMatrix");
  }
  if (nlhs > 3) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 19,
                        "NominalSystemMatrix");
  }
  /* Call the function. */
  NominalSystemMatrix_api(SD, prhs, nlhs, outputs);
  /* Copy over outputs to the caller. */
  if (nlhs < 1) {
    i = 1;
  } else {
    i = nlhs;
  }
  emlrtReturnArrays(i, &plhs[0], &outputs[0]);
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs,
                 const mxArray *prhs[])
{
  static jmp_buf emlrtJBEnviron;
  NominalSystemMatrixStackData *c_NominalSystemMatrixStackDataG = NULL;
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  c_NominalSystemMatrixStackDataG =
      (NominalSystemMatrixStackData *)emlrtMxCalloc(
          (size_t)1, (size_t)1U * sizeof(NominalSystemMatrixStackData));
  mexAtExit(&NominalSystemMatrix_atexit);
  /* Initialize the memory manager. */
  omp_init_lock(&emlrtLockGlobal);
  omp_init_nest_lock(&NominalSystemMatrix_nestLockGlobal);
  NominalSystemMatrix_initialize();
  st.tls = emlrtRootTLSGlobal;
  emlrtSetJmpBuf(&st, &emlrtJBEnviron);
  if (setjmp(emlrtJBEnviron) == 0) {
    NominalSystemMatrix_mexFunction(c_NominalSystemMatrixStackDataG, nlhs, plhs,
                                    nrhs, prhs);
    NominalSystemMatrix_terminate();
    omp_destroy_lock(&emlrtLockGlobal);
    omp_destroy_nest_lock(&NominalSystemMatrix_nestLockGlobal);
  } else {
    omp_destroy_lock(&emlrtLockGlobal);
    omp_destroy_nest_lock(&NominalSystemMatrix_nestLockGlobal);
    emlrtReportParallelRunTimeError(&st);
  }
  emlrtMxFree(c_NominalSystemMatrixStackDataG);
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLSR2022a(&emlrtRootTLSGlobal, &emlrtContextGlobal,
                           &emlrtLockerFunction, omp_get_num_procs(), NULL,
                           "GBK", true);
  return emlrtRootTLSGlobal;
}

/* End of code generation (_coder_NominalSystemMatrix_mex.c) */
