/*
 * NominalSystemMatrix_emxutil.c
 *
 * Code generation for function 'NominalSystemMatrix_emxutil'
 *
 */

/* Include files */
#include "NominalSystemMatrix_emxutil.h"
#include "NominalSystemMatrix_types.h"
#include "rt_nonfinite.h"
#include <string.h>

/* Function Definitions */
void emxCopyStruct_cell_wrap_0(const emlrtStack *sp, cell_wrap_0 *dst,
                               const cell_wrap_0 *src,
                               const emlrtRTEInfo *srcLocation)
{
  emxCopy_real_T(sp, &dst->f1, &src->f1, srcLocation);
}

void emxCopy_real_T(const emlrtStack *sp, emxArray_real_T **dst,
                    emxArray_real_T *const *src,
                    const emlrtRTEInfo *srcLocation)
{
  int32_T i;
  int32_T numElDst;
  int32_T numElSrc;
  numElDst = 1;
  numElSrc = 1;
  for (i = 0; i < (*dst)->numDimensions; i++) {
    numElDst *= (*dst)->size[i];
    numElSrc *= (*src)->size[i];
  }
  for (i = 0; i < (*dst)->numDimensions; i++) {
    (*dst)->size[i] = (*src)->size[i];
  }
  emxEnsureCapacity_real_T(sp, *dst, numElDst, srcLocation);
  for (i = 0; i < numElSrc; i++) {
    (*dst)->data[i] = (*src)->data[i];
  }
}

void emxEnsureCapacity_real_T(const emlrtStack *sp, emxArray_real_T *emxArray,
                              int32_T oldNumel, const emlrtRTEInfo *srcLocation)
{
  int32_T i;
  int32_T newNumel;
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }
  newNumel = 1;
  for (i = 0; i < emxArray->numDimensions; i++) {
    newNumel = (int32_T)emlrtSizeMulR2012b((size_t)(uint32_T)newNumel,
                                           (size_t)(uint32_T)emxArray->size[i],
                                           srcLocation, (emlrtCTX)sp);
  }
  if (newNumel > emxArray->allocatedSize) {
    int32_T newCapacity;
    newCapacity = emxArray->allocatedSize;
    if (newCapacity < 16) {
      newCapacity = 16;
    }
    while (newCapacity < newNumel) {
      if (newCapacity > 1073741823) {
        newCapacity = MAX_int32_T;
      } else {
        newCapacity *= 2;
      }
    }
    newData = emlrtMallocMex((uint32_T)newCapacity * sizeof(real_T));
    if (newData == NULL) {
      emlrtHeapAllocationErrorR2012b(srcLocation, (emlrtCTX)sp);
    }
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, sizeof(real_T) * (uint32_T)oldNumel);
      if (emxArray->canFreeData) {
        emlrtFreeMex(emxArray->data);
      }
    }
    emxArray->data = (real_T *)newData;
    emxArray->allocatedSize = newCapacity;
    emxArray->canFreeData = true;
  }
}

void emxFreeMatrix_cell_wrap_0(const emlrtStack *sp, cell_wrap_0 pMatrix[3])
{
  int32_T i;
  for (i = 0; i < 3; i++) {
    emxFreeStruct_cell_wrap_0(sp, &pMatrix[i]);
  }
}

void emxFreeStruct_cell_wrap_0(const emlrtStack *sp, cell_wrap_0 *pStruct)
{
  emxFree_real_T(sp, &pStruct->f1);
}

void emxFree_real_T(const emlrtStack *sp, emxArray_real_T **pEmxArray)
{
  if (*pEmxArray != (emxArray_real_T *)NULL) {
    if (((*pEmxArray)->data != (real_T *)NULL) && (*pEmxArray)->canFreeData) {
      emlrtFreeMex((*pEmxArray)->data);
    }
    emlrtFreeMex((*pEmxArray)->size);
    emlrtRemoveHeapReference((emlrtCTX)sp, (void *)pEmxArray);
    emlrtFreeEmxArray(*pEmxArray);
    *pEmxArray = (emxArray_real_T *)NULL;
  }
}

void emxInitMatrix_cell_wrap_0(const emlrtStack *sp, cell_wrap_0 pMatrix[3],
                               const emlrtRTEInfo *srcLocation)
{
  int32_T i;
  for (i = 0; i < 3; i++) {
    emxInitStruct_cell_wrap_0(sp, &pMatrix[i], srcLocation);
  }
}

void emxInitStruct_cell_wrap_0(const emlrtStack *sp, cell_wrap_0 *pStruct,
                               const emlrtRTEInfo *srcLocation)
{
  emxInit_real_T(sp, &pStruct->f1, 3, srcLocation);
}

void emxInit_real_T(const emlrtStack *sp, emxArray_real_T **pEmxArray,
                    int32_T numDimensions, const emlrtRTEInfo *srcLocation)
{
  emxArray_real_T *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_real_T *)emlrtMallocEmxArray(sizeof(emxArray_real_T));
  if ((void *)*pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(srcLocation, (emlrtCTX)sp);
  }
  emlrtPushHeapReferenceStackEmxArray((emlrtCTX)sp, true, (void *)pEmxArray,
                                      (void *)&emxFree_real_T, NULL, NULL,
                                      NULL);
  emxArray = *pEmxArray;
  emxArray->data = (real_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size =
      (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)numDimensions);
  if ((void *)emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(srcLocation, (emlrtCTX)sp);
  }
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

void emxReserve_real_T(const emlrtStack *sp, emxArray_real_T *emxArray,
                       const emlrtRTEInfo *srcLocation)
{
  int32_T i;
  void *newData;
  if (emxArray->allocatedSize < 19) {
    int32_T numel;
    numel = 1;
    for (i = 0; i < emxArray->numDimensions; i++) {
      numel = (int32_T)emlrtSizeMulR2012b((size_t)(uint32_T)numel,
                                          (size_t)(uint32_T)emxArray->size[i],
                                          srcLocation, (emlrtCTX)sp);
    }
    newData = emlrtMallocMex(19U * sizeof(real_T));
    if (newData == NULL) {
      emlrtHeapAllocationErrorR2012b(srcLocation, (emlrtCTX)sp);
    }
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, sizeof(real_T) * (uint32_T)numel);
      if (emxArray->canFreeData) {
        emlrtFreeMex(emxArray->data);
      }
    }
    emxArray->data = (real_T *)newData;
    emxArray->allocatedSize = 19;
    emxArray->canFreeData = true;
  }
}

/* End of code generation (NominalSystemMatrix_emxutil.c) */
