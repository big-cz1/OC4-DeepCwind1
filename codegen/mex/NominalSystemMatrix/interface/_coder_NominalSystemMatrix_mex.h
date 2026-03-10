/*
 * _coder_NominalSystemMatrix_mex.h
 *
 * Code generation for function '_coder_NominalSystemMatrix_mex'
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
void NominalSystemMatrix_mexFunction(NominalSystemMatrixStackData *SD,
                                     int32_T nlhs, mxArray *plhs[3],
                                     int32_T nrhs, const mxArray *prhs[10]);

MEXFUNCTION_LINKAGE void mexFunction(int32_T nlhs, mxArray *plhs[],
                                     int32_T nrhs, const mxArray *prhs[]);

emlrtCTX mexFunctionCreateRootTLS(void);

/* End of code generation (_coder_NominalSystemMatrix_mex.h) */
