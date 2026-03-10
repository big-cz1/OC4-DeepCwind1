/*
 * Transform2.c
 *
 * Code generation for function 'Transform2'
 *
 */

/* Include files */
#include "Transform2.h"
#include "NominalSystemMatrix_data.h"
#include "rt_nonfinite.h"
#include <string.h>

/* Variable Definitions */
static emlrtBCInfo emlrtBCI =
    {
        -1,           /* iFirst */
        -1,           /* iLast */
        7,            /* lineNo */
        13,           /* colNo */
        "Out",        /* aName */
        "Transform2", /* fName */
        "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\Transform2."
        "m", /* pName */
        0    /* checkKind */
};

static emlrtBCInfo b_emlrtBCI =
    {
        -1,           /* iFirst */
        -1,           /* iLast */
        8,            /* lineNo */
        13,           /* colNo */
        "Out",        /* aName */
        "Transform2", /* fName */
        "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\Transform2."
        "m", /* pName */
        0    /* checkKind */
};

static emlrtBCInfo c_emlrtBCI =
    {
        -1,           /* iFirst */
        -1,           /* iLast */
        9,            /* lineNo */
        13,           /* colNo */
        "Out",        /* aName */
        "Transform2", /* fName */
        "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\Transform2."
        "m", /* pName */
        0    /* checkKind */
};

static emlrtBCInfo d_emlrtBCI =
    {
        -1,           /* iFirst */
        -1,           /* iLast */
        7,            /* lineNo */
        29,           /* colNo */
        "RotMat",     /* aName */
        "Transform2", /* fName */
        "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\Transform2."
        "m", /* pName */
        0    /* checkKind */
};

static emlrtBCInfo e_emlrtBCI =
    {
        -1,           /* iFirst */
        -1,           /* iLast */
        7,            /* lineNo */
        59,           /* colNo */
        "RotMat",     /* aName */
        "Transform2", /* fName */
        "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\Transform2."
        "m", /* pName */
        0    /* checkKind */
};

static emlrtBCInfo f_emlrtBCI =
    {
        -1,           /* iFirst */
        -1,           /* iLast */
        7,            /* lineNo */
        89,           /* colNo */
        "RotMat",     /* aName */
        "Transform2", /* fName */
        "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\Transform2."
        "m", /* pName */
        0    /* checkKind */
};

static emlrtBCInfo g_emlrtBCI =
    {
        -1,           /* iFirst */
        -1,           /* iLast */
        8,            /* lineNo */
        29,           /* colNo */
        "RotMat",     /* aName */
        "Transform2", /* fName */
        "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\Transform2."
        "m", /* pName */
        0    /* checkKind */
};

static emlrtBCInfo h_emlrtBCI =
    {
        -1,           /* iFirst */
        -1,           /* iLast */
        8,            /* lineNo */
        59,           /* colNo */
        "RotMat",     /* aName */
        "Transform2", /* fName */
        "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\Transform2."
        "m", /* pName */
        0    /* checkKind */
};

static emlrtBCInfo i_emlrtBCI =
    {
        -1,           /* iFirst */
        -1,           /* iLast */
        8,            /* lineNo */
        89,           /* colNo */
        "RotMat",     /* aName */
        "Transform2", /* fName */
        "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\Transform2."
        "m", /* pName */
        0    /* checkKind */
};

static emlrtBCInfo j_emlrtBCI =
    {
        -1,           /* iFirst */
        -1,           /* iLast */
        9,            /* lineNo */
        29,           /* colNo */
        "RotMat",     /* aName */
        "Transform2", /* fName */
        "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\Transform2."
        "m", /* pName */
        0    /* checkKind */
};

static emlrtBCInfo k_emlrtBCI =
    {
        -1,           /* iFirst */
        -1,           /* iLast */
        9,            /* lineNo */
        59,           /* colNo */
        "RotMat",     /* aName */
        "Transform2", /* fName */
        "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\Transform2."
        "m", /* pName */
        0    /* checkKind */
};

static emlrtBCInfo l_emlrtBCI =
    {
        -1,           /* iFirst */
        -1,           /* iLast */
        9,            /* lineNo */
        89,           /* colNo */
        "RotMat",     /* aName */
        "Transform2", /* fName */
        "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\Transform2."
        "m", /* pName */
        0    /* checkKind */
};

/* Function Definitions */
void Transform2(const emlrtStack *sp, const real_T RotMat_data[],
                const int32_T RotMat_size[3], const real_T BasisVec[9],
                real_T Out_data[], int32_T Out_size[3])
{
  int32_T b_i;
  int32_T i;
  int32_T loop_ub;
  /* #Codegen */
  /*  RotMat : Rotation  matrix (3 x 3 x N) */
  /*  BasisVec : Matrix (3 x 3) with basis vectors, each row containing a basis
   * vector */
  Out_size[0] = 3;
  Out_size[1] = 3;
  Out_size[2] = (int8_T)RotMat_size[2];
  loop_ub = 9 * (int8_T)RotMat_size[2];
  if (loop_ub - 1 >= 0) {
    memset(&Out_data[0], 0, (uint32_T)loop_ub * sizeof(real_T));
  }
  i = RotMat_size[2];
  for (b_i = 0; b_i < i; b_i++) {
    real_T a;
    real_T b_a;
    real_T c_a;
    int32_T a_tmp;
    int32_T b_a_tmp;
    if (b_i + 1 > i) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, i, &d_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    a = RotMat_data[9 * b_i];
    if (b_i + 1 > i) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, i, &e_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    loop_ub = 9 * b_i + 3;
    b_a = RotMat_data[loop_ub];
    if (b_i + 1 > i) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, i, &f_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    a_tmp = 9 * b_i + 6;
    c_a = RotMat_data[a_tmp];
    if (b_i + 1 > Out_size[2]) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, Out_size[2], &emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    Out_data[9 * b_i] =
        (a * BasisVec[0] + b_a * BasisVec[1]) + c_a * BasisVec[2];
    Out_data[loop_ub] =
        (a * BasisVec[3] + b_a * BasisVec[4]) + c_a * BasisVec[5];
    Out_data[a_tmp] = (a * BasisVec[6] + b_a * BasisVec[7]) + c_a * BasisVec[8];
    if (b_i + 1 > i) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, i, &g_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    loop_ub = 9 * b_i + 1;
    a = RotMat_data[loop_ub];
    if (b_i + 1 > i) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, i, &h_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    a_tmp = 9 * b_i + 4;
    b_a = RotMat_data[a_tmp];
    if (b_i + 1 > i) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, i, &i_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    b_a_tmp = 9 * b_i + 7;
    c_a = RotMat_data[b_a_tmp];
    if (b_i + 1 > Out_size[2]) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, Out_size[2], &b_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    Out_data[loop_ub] =
        (a * BasisVec[0] + b_a * BasisVec[1]) + c_a * BasisVec[2];
    Out_data[a_tmp] = (a * BasisVec[3] + b_a * BasisVec[4]) + c_a * BasisVec[5];
    Out_data[b_a_tmp] =
        (a * BasisVec[6] + b_a * BasisVec[7]) + c_a * BasisVec[8];
    if (b_i + 1 > i) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, i, &j_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    loop_ub = 9 * b_i + 2;
    a = RotMat_data[loop_ub];
    if (b_i + 1 > i) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, i, &k_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    a_tmp = 9 * b_i + 5;
    b_a = RotMat_data[a_tmp];
    if (b_i + 1 > i) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, i, &l_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    b_a_tmp = 9 * b_i + 8;
    c_a = RotMat_data[b_a_tmp];
    if (b_i + 1 > Out_size[2]) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, Out_size[2], &c_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    Out_data[loop_ub] =
        (a * BasisVec[0] + b_a * BasisVec[1]) + c_a * BasisVec[2];
    Out_data[a_tmp] = (a * BasisVec[3] + b_a * BasisVec[4]) + c_a * BasisVec[5];
    Out_data[b_a_tmp] =
        (a * BasisVec[6] + b_a * BasisVec[7]) + c_a * BasisVec[8];
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
}

/* End of code generation (Transform2.c) */
