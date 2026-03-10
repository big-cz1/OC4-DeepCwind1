/*
 * NominalSystemMatrix_terminate.c
 *
 * Code generation for function 'NominalSystemMatrix_terminate'
 *
 */

/* Include files */
#include "NominalSystemMatrix_terminate.h"
#include "NominalSystemMatrix_data.h"
#include "_coder_NominalSystemMatrix_api.h"
#include "_coder_NominalSystemMatrix_mex.h"
#include "rt_nonfinite.h"
#include "omp.h"

/* Function Declarations */
static void emlrtExitTimeCleanupDtorFcn(const void *r);

/* Function Definitions */
static void emlrtExitTimeCleanupDtorFcn(const void *r)
{
  emlrtExitTimeCleanup(&emlrtContextGlobal);
}

void NominalSystemMatrix_atexit(void)
{
  static jmp_buf emlrtJBEnviron;
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  mexFunctionCreateRootTLS();
  /* Initialize the memory manager. */
  omp_init_lock(&emlrtLockGlobal);
  omp_init_nest_lock(&NominalSystemMatrix_nestLockGlobal);
  st.tls = emlrtRootTLSGlobal;
  emlrtSetJmpBuf(&st, &emlrtJBEnviron);
  if (setjmp(emlrtJBEnviron) == 0) {
    emlrtPushHeapReferenceStackR2021a(&st, false, NULL,
                                      (void *)&emlrtExitTimeCleanupDtorFcn,
                                      NULL, NULL, NULL);
    emlrtEnterRtStackR2012b(&st);
    emlrt_synchGlobalsFromML(&st);
    emlrt_synchGlobalsToML(&st);
    emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
    emlrtExitTimeCleanup(&emlrtContextGlobal);
    omp_destroy_lock(&emlrtLockGlobal);
    omp_destroy_nest_lock(&NominalSystemMatrix_nestLockGlobal);
  } else {
    omp_destroy_lock(&emlrtLockGlobal);
    omp_destroy_nest_lock(&NominalSystemMatrix_nestLockGlobal);
    emlrtReportParallelRunTimeError(&st);
  }
}

void NominalSystemMatrix_terminate(void)
{
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (NominalSystemMatrix_terminate.c) */
