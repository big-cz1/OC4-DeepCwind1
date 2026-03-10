/*
 * Coordinate_systems.h
 *
 * Code generation for function 'Coordinate_systems'
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
void Coordinate_systems(
    const emlrtStack *sp, const real_T q_Nom[68], const real_T BlPitch[3],
    const real_T ElastoDyn_PreCone[3], real_T ElastoDyn_ShftTilt,
    real_T Twr_dO1_TFA, real_T Twr_dO1_TSS, real_T Twr_dO2_TFA,
    real_T Twr_dO2_TSS, const struct3_T *Bld, const struct4_T *Platform,
    real_T A[9], real_T D[9], real_T C[9], real_T E[9], real_T J1[9],
    real_T J2[9], real_T J3[9], real_T NB1[171], real_T NB2[171],
    real_T NB3[171], real_T MB1_data[], int32_T MB1_size[3], real_T MB2_data[],
    int32_T MB2_size[3], real_T MB3_data[], int32_T MB3_size[3], real_T BP1[9],
    real_T BP2[9], real_T BP3[9], real_T TP1[9], real_T TP2[9], real_T TP3[9],
    real_T rP1[45], real_T rP2[45], real_T rP3[45], real_T rP1_tip[3],
    real_T rP2_tip[3], real_T rP3_tip[3]);

/* End of code generation (Coordinate_systems.h) */
