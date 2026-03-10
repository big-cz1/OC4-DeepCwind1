/*
 * NominalSystemMatrix.h
 *
 * Code generation for function 'NominalSystemMatrix'
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
void NominalSystemMatrix(const emlrtStack *sp, const real_T q_Nom[68],
                         real_T Controls[61], const struct0_T *ElastoDyn,
                         const struct1_T *Airfoils, const struct2_T *Twr,
                         const struct3_T *Bld, const struct4_T *Platform,
                         const struct6_T *WindNom, const real_T mooring_load[6],
                         const real_T f_Morison[6], real_T IM_nom[1156],
                         real_T f_nom[34]);

emlrtCTX emlrtGetRootTLSGlobal(void);

void emlrtLockerFunction(EmlrtLockeeFunction aLockee, emlrtConstCTX aTLS,
                         void *aData);

void emlrt_checkEscapedGlobals(void);

/* End of code generation (NominalSystemMatrix.h) */
