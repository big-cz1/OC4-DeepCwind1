/*
 * _coder_NominalSystemMatrix_api.h
 *
 * Code generation for function '_coder_NominalSystemMatrix_api'
 *
 */

#pragma once

/* Include files */
#include "NominalSystemMatrix_types.h"
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
void MEXGlobalSyncInFunction(const emlrtStack *sp);

void MEXGlobalSyncOutFunction(boolean_T skipDirtyCheck);

void NominalSystemMatrix_api(NominalSystemMatrixStackData *SD,
                             const mxArray *const prhs[10], int32_T nlhs,
                             const mxArray *plhs[3]);

void emlrt_synchGlobalsFromML(const emlrtStack *sp);

void emlrt_synchGlobalsToML(const emlrtStack *sp);

/* End of code generation (_coder_NominalSystemMatrix_api.h) */
