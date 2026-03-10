/*
 * NominalSystemMatrix_initialize.c
 *
 * Code generation for function 'NominalSystemMatrix_initialize'
 *
 */

/* Include files */
#include "NominalSystemMatrix_initialize.h"
#include "NominalSystemMatrix_data.h"
#include "_coder_NominalSystemMatrix_api.h"
#include "_coder_NominalSystemMatrix_mex.h"
#include "rt_nonfinite.h"

/* Function Declarations */
static void NominalSystemMatrix_once(const emlrtStack *sp);

/* Function Definitions */
static void NominalSystemMatrix_once(const emlrtStack *sp)
{
  mex_InitInfAndNan();
  FLUIDDENSITY = 1025.0;
  FLUIDDENSITY_dirty = 1U;
  emlrtSetGlobalSyncFcn((emlrtCTX)sp, (void *)&emlrt_synchGlobalsToML);
}

void NominalSystemMatrix_initialize(void)
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtBreakCheckR2012bFlagVar = emlrtGetBreakCheckFlagAddressR2022b(&st);
  emlrtClearAllocCountR2012b(&st, false, 0U, NULL);
  emlrtEnterRtStackR2012b(&st);
  if (emlrtFirstTimeR2012b(emlrtRootTLSGlobal)) {
    NominalSystemMatrix_once(&st);
  }
}

/* End of code generation (NominalSystemMatrix_initialize.c) */
