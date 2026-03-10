/*
 * Transform3.c
 *
 * Code generation for function 'Transform3'
 *
 */

/* Include files */
#include "Transform3.h"
#include "NominalSystemMatrix_data.h"
#include "rt_nonfinite.h"
#include <string.h>

/* Variable Definitions */
static emlrtBCInfo ec_emlrtBCI =
    {
        -1,           /* iFirst */
        -1,           /* iLast */
        9,            /* lineNo */
        45,           /* colNo */
        "BasisVec",   /* aName */
        "Transform3", /* fName */
        "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\Transform3."
        "m", /* pName */
        0    /* checkKind */
};

static emlrtBCInfo fc_emlrtBCI =
    {
        -1,           /* iFirst */
        -1,           /* iLast */
        8,            /* lineNo */
        45,           /* colNo */
        "BasisVec",   /* aName */
        "Transform3", /* fName */
        "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\Transform3."
        "m", /* pName */
        0    /* checkKind */
};

static emlrtBCInfo gc_emlrtBCI =
    {
        -1,           /* iFirst */
        -1,           /* iLast */
        7,            /* lineNo */
        45,           /* colNo */
        "BasisVec",   /* aName */
        "Transform3", /* fName */
        "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\Transform3."
        "m", /* pName */
        0    /* checkKind */
};

static emlrtBCInfo hc_emlrtBCI =
    {
        -1,           /* iFirst */
        -1,           /* iLast */
        7,            /* lineNo */
        13,           /* colNo */
        "Out",        /* aName */
        "Transform3", /* fName */
        "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\Transform3."
        "m", /* pName */
        0    /* checkKind */
};

static emlrtBCInfo ic_emlrtBCI =
    {
        -1,           /* iFirst */
        -1,           /* iLast */
        8,            /* lineNo */
        13,           /* colNo */
        "Out",        /* aName */
        "Transform3", /* fName */
        "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\Transform3."
        "m", /* pName */
        0    /* checkKind */
};

static emlrtBCInfo jc_emlrtBCI =
    {
        -1,           /* iFirst */
        -1,           /* iLast */
        9,            /* lineNo */
        13,           /* colNo */
        "Out",        /* aName */
        "Transform3", /* fName */
        "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\Transform3."
        "m", /* pName */
        0    /* checkKind */
};

static emlrtBCInfo kc_emlrtBCI =
    {
        -1,           /* iFirst */
        -1,           /* iLast */
        7,            /* lineNo */
        29,           /* colNo */
        "RotMat",     /* aName */
        "Transform3", /* fName */
        "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\Transform3."
        "m", /* pName */
        0    /* checkKind */
};

static emlrtBCInfo lc_emlrtBCI =
    {
        -1,           /* iFirst */
        -1,           /* iLast */
        7,            /* lineNo */
        61,           /* colNo */
        "RotMat",     /* aName */
        "Transform3", /* fName */
        "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\Transform3."
        "m", /* pName */
        0    /* checkKind */
};

static emlrtBCInfo mc_emlrtBCI =
    {
        -1,           /* iFirst */
        -1,           /* iLast */
        7,            /* lineNo */
        93,           /* colNo */
        "RotMat",     /* aName */
        "Transform3", /* fName */
        "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\Transform3."
        "m", /* pName */
        0    /* checkKind */
};

static emlrtBCInfo nc_emlrtBCI =
    {
        -1,           /* iFirst */
        -1,           /* iLast */
        8,            /* lineNo */
        29,           /* colNo */
        "RotMat",     /* aName */
        "Transform3", /* fName */
        "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\Transform3."
        "m", /* pName */
        0    /* checkKind */
};

static emlrtBCInfo oc_emlrtBCI =
    {
        -1,           /* iFirst */
        -1,           /* iLast */
        8,            /* lineNo */
        61,           /* colNo */
        "RotMat",     /* aName */
        "Transform3", /* fName */
        "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\Transform3."
        "m", /* pName */
        0    /* checkKind */
};

static emlrtBCInfo pc_emlrtBCI =
    {
        -1,           /* iFirst */
        -1,           /* iLast */
        8,            /* lineNo */
        93,           /* colNo */
        "RotMat",     /* aName */
        "Transform3", /* fName */
        "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\Transform3."
        "m", /* pName */
        0    /* checkKind */
};

static emlrtBCInfo qc_emlrtBCI =
    {
        -1,           /* iFirst */
        -1,           /* iLast */
        9,            /* lineNo */
        29,           /* colNo */
        "RotMat",     /* aName */
        "Transform3", /* fName */
        "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\Transform3."
        "m", /* pName */
        0    /* checkKind */
};

static emlrtBCInfo rc_emlrtBCI =
    {
        -1,           /* iFirst */
        -1,           /* iLast */
        9,            /* lineNo */
        61,           /* colNo */
        "RotMat",     /* aName */
        "Transform3", /* fName */
        "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\Transform3."
        "m", /* pName */
        0    /* checkKind */
};

static emlrtBCInfo sc_emlrtBCI =
    {
        -1,           /* iFirst */
        -1,           /* iLast */
        9,            /* lineNo */
        93,           /* colNo */
        "RotMat",     /* aName */
        "Transform3", /* fName */
        "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\Transform3."
        "m", /* pName */
        0    /* checkKind */
};

/* Function Definitions */
void Transform3(const emlrtStack *sp, const real_T RotMat[171],
                const real_T BasisVec_data[], const int32_T BasisVec_size[3],
                real_T Out[171])
{
  int32_T b_i;
  int32_T i;
  /* #Codegen */
  /*  RotMat : Rotation  matrix (3 x 3 x N) */
  /*  BasisVec : Matrix (3 x 3 x N) with basis vectors, each row containing a
   * basis vector */
  i = BasisVec_size[2];
  for (b_i = 0; b_i < 19; b_i++) {
    real_T b_RotMat;
    real_T c_RotMat;
    real_T d;
    real_T d1;
    real_T d2;
    real_T d3;
    real_T d4;
    real_T d5;
    real_T d6;
    real_T d7;
    real_T d8;
    real_T d_RotMat;
    int32_T RotMat_tmp;
    int32_T b_RotMat_tmp;
    int32_T c_RotMat_tmp;
    int32_T d_RotMat_tmp;
    int32_T e_RotMat_tmp;
    int32_T f_RotMat_tmp;
    int32_T g_RotMat_tmp;
    if (b_i + 1 > i) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, i, &gc_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    b_RotMat = RotMat[9 * b_i];
    RotMat_tmp = 9 * b_i + 3;
    c_RotMat = RotMat[RotMat_tmp];
    b_RotMat_tmp = 9 * b_i + 6;
    d_RotMat = RotMat[b_RotMat_tmp];
    d = BasisVec_data[9 * b_i];
    c_RotMat_tmp = 9 * b_i + 1;
    d1 = BasisVec_data[c_RotMat_tmp];
    d_RotMat_tmp = 9 * b_i + 2;
    d2 = BasisVec_data[d_RotMat_tmp];
    Out[9 * b_i] = (b_RotMat * d + c_RotMat * d1) + d_RotMat * d2;
    d3 = BasisVec_data[RotMat_tmp];
    e_RotMat_tmp = 9 * b_i + 4;
    d4 = BasisVec_data[e_RotMat_tmp];
    f_RotMat_tmp = 9 * b_i + 5;
    d5 = BasisVec_data[f_RotMat_tmp];
    Out[RotMat_tmp] = (b_RotMat * d3 + c_RotMat * d4) + d_RotMat * d5;
    d6 = BasisVec_data[b_RotMat_tmp];
    RotMat_tmp = 9 * b_i + 7;
    d7 = BasisVec_data[RotMat_tmp];
    g_RotMat_tmp = 9 * b_i + 8;
    d8 = BasisVec_data[g_RotMat_tmp];
    Out[b_RotMat_tmp] = (b_RotMat * d6 + c_RotMat * d7) + d_RotMat * d8;
    if (b_i + 1 > i) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, i, &fc_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    b_RotMat = RotMat[c_RotMat_tmp];
    c_RotMat = RotMat[e_RotMat_tmp];
    d_RotMat = RotMat[RotMat_tmp];
    Out[c_RotMat_tmp] = (d * b_RotMat + c_RotMat * d1) + d_RotMat * d2;
    Out[e_RotMat_tmp] = (d3 * b_RotMat + c_RotMat * d4) + d_RotMat * d5;
    Out[RotMat_tmp] = (d6 * b_RotMat + c_RotMat * d7) + d_RotMat * d8;
    if (b_i + 1 > i) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, i, &ec_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    b_RotMat = RotMat[d_RotMat_tmp];
    c_RotMat = RotMat[f_RotMat_tmp];
    d_RotMat = RotMat[g_RotMat_tmp];
    Out[d_RotMat_tmp] = (d * b_RotMat + d1 * c_RotMat) + d_RotMat * d2;
    Out[f_RotMat_tmp] = (d3 * b_RotMat + d4 * c_RotMat) + d_RotMat * d5;
    Out[g_RotMat_tmp] = (d6 * b_RotMat + d7 * c_RotMat) + d_RotMat * d8;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
}

void b_Transform3(const emlrtStack *sp, const real_T RotMat_data[],
                  const int32_T RotMat_size[3], const real_T BasisVec[171],
                  real_T Out_data[], int32_T Out_size[3])
{
  int32_T b_i;
  int32_T i;
  int32_T loop_ub;
  /* #Codegen */
  /*  RotMat : Rotation  matrix (3 x 3 x N) */
  /*  BasisVec : Matrix (3 x 3 x N) with basis vectors, each row containing a
   * basis vector */
  Out_size[0] = 3;
  Out_size[1] = 3;
  Out_size[2] = (int8_T)RotMat_size[2];
  loop_ub = 9 * (int8_T)RotMat_size[2];
  if (loop_ub - 1 >= 0) {
    memset(&Out_data[0], 0, (uint32_T)loop_ub * sizeof(real_T));
  }
  i = RotMat_size[2];
  for (b_i = 0; b_i < i; b_i++) {
    real_T Out_tmp;
    real_T a;
    real_T b_Out_tmp;
    real_T b_a;
    real_T c_Out_tmp;
    real_T c_a;
    real_T d_Out_tmp;
    real_T e_Out_tmp;
    real_T f_Out_tmp;
    real_T g_Out_tmp;
    real_T h_Out_tmp;
    real_T i_Out_tmp;
    int32_T Out_tmp_tmp;
    int32_T a_tmp;
    int32_T b_Out_tmp_tmp;
    int32_T c_Out_tmp_tmp;
    int32_T d_Out_tmp_tmp;
    int32_T e_Out_tmp_tmp;
    if (b_i + 1 > i) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, i, &kc_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    a = RotMat_data[9 * b_i];
    if (b_i + 1 > i) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, i, &lc_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    loop_ub = 9 * b_i + 3;
    b_a = RotMat_data[loop_ub];
    if (b_i + 1 > i) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, i, &mc_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    a_tmp = 9 * b_i + 6;
    c_a = RotMat_data[a_tmp];
    if (b_i + 1 > Out_size[2]) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, Out_size[2], &hc_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    Out_tmp = BasisVec[9 * b_i];
    Out_tmp_tmp = 9 * b_i + 1;
    b_Out_tmp = BasisVec[Out_tmp_tmp];
    b_Out_tmp_tmp = 9 * b_i + 2;
    c_Out_tmp = BasisVec[b_Out_tmp_tmp];
    Out_data[9 * b_i] = (a * Out_tmp + b_a * b_Out_tmp) + c_a * c_Out_tmp;
    d_Out_tmp = BasisVec[loop_ub];
    c_Out_tmp_tmp = 9 * b_i + 4;
    e_Out_tmp = BasisVec[c_Out_tmp_tmp];
    d_Out_tmp_tmp = 9 * b_i + 5;
    f_Out_tmp = BasisVec[d_Out_tmp_tmp];
    Out_data[loop_ub] = (a * d_Out_tmp + b_a * e_Out_tmp) + c_a * f_Out_tmp;
    g_Out_tmp = BasisVec[a_tmp];
    loop_ub = 9 * b_i + 7;
    h_Out_tmp = BasisVec[loop_ub];
    e_Out_tmp_tmp = 9 * b_i + 8;
    i_Out_tmp = BasisVec[e_Out_tmp_tmp];
    Out_data[a_tmp] = (a * g_Out_tmp + b_a * h_Out_tmp) + c_a * i_Out_tmp;
    if (b_i + 1 > i) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, i, &nc_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    a = RotMat_data[Out_tmp_tmp];
    if (b_i + 1 > i) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, i, &oc_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    b_a = RotMat_data[c_Out_tmp_tmp];
    if (b_i + 1 > i) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, i, &pc_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    c_a = RotMat_data[loop_ub];
    if (b_i + 1 > Out_size[2]) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, Out_size[2], &ic_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    Out_data[Out_tmp_tmp] = (a * Out_tmp + b_a * b_Out_tmp) + c_a * c_Out_tmp;
    Out_data[c_Out_tmp_tmp] =
        (a * d_Out_tmp + b_a * e_Out_tmp) + c_a * f_Out_tmp;
    Out_data[loop_ub] = (a * g_Out_tmp + b_a * h_Out_tmp) + c_a * i_Out_tmp;
    if (b_i + 1 > i) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, i, &qc_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    a = RotMat_data[b_Out_tmp_tmp];
    if (b_i + 1 > i) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, i, &rc_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    b_a = RotMat_data[d_Out_tmp_tmp];
    if (b_i + 1 > i) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, i, &sc_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    c_a = RotMat_data[e_Out_tmp_tmp];
    if (b_i + 1 > Out_size[2]) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, Out_size[2], &jc_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    Out_data[b_Out_tmp_tmp] = (a * Out_tmp + b_a * b_Out_tmp) + c_a * c_Out_tmp;
    Out_data[d_Out_tmp_tmp] =
        (a * d_Out_tmp + b_a * e_Out_tmp) + c_a * f_Out_tmp;
    Out_data[e_Out_tmp_tmp] =
        (a * g_Out_tmp + b_a * h_Out_tmp) + c_a * i_Out_tmp;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
}

/* End of code generation (Transform3.c) */
