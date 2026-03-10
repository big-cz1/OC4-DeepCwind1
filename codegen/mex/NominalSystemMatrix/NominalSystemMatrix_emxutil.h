/*
 * NominalSystemMatrix_emxutil.h
 *
 * Code generation for function 'NominalSystemMatrix_emxutil'
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
void emxCopyStruct_cell_wrap_0(const emlrtStack *sp, cell_wrap_0 *dst,
                               const cell_wrap_0 *src,
                               const emlrtRTEInfo *srcLocation);

void emxCopy_real_T(const emlrtStack *sp, emxArray_real_T **dst,
                    emxArray_real_T *const *src,
                    const emlrtRTEInfo *srcLocation);

void emxEnsureCapacity_real_T(const emlrtStack *sp, emxArray_real_T *emxArray,
                              int32_T oldNumel,
                              const emlrtRTEInfo *srcLocation);

void emxFreeMatrix_cell_wrap_0(const emlrtStack *sp, cell_wrap_0 pMatrix[3]);

void emxFreeStruct_cell_wrap_0(const emlrtStack *sp, cell_wrap_0 *pStruct);

void emxFree_real_T(const emlrtStack *sp, emxArray_real_T **pEmxArray);

void emxInitMatrix_cell_wrap_0(const emlrtStack *sp, cell_wrap_0 pMatrix[3],
                               const emlrtRTEInfo *srcLocation);

void emxInitStruct_cell_wrap_0(const emlrtStack *sp, cell_wrap_0 *pStruct,
                               const emlrtRTEInfo *srcLocation);

void emxInit_real_T(const emlrtStack *sp, emxArray_real_T **pEmxArray,
                    int32_T numDimensions, const emlrtRTEInfo *srcLocation);

void emxReserve_real_T(const emlrtStack *sp, emxArray_real_T *emxArray,
                       const emlrtRTEInfo *srcLocation);

/* End of code generation (NominalSystemMatrix_emxutil.h) */
