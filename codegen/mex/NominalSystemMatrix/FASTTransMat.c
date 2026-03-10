/*
 * FASTTransMat.c
 *
 * Code generation for function 'FASTTransMat'
 *
 */

/* Include files */
#include "FASTTransMat.h"
#include "NominalSystemMatrix_data.h"
#include "NominalSystemMatrix_types.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"
#include <emmintrin.h>

/* Variable Definitions */
static emlrtRSInfo tq_emlrtRSI =
    {
        11,             /* lineNo */
        "FASTTransMat", /* fcnName */
        "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-"
        "DeepCwind1\\src\\FASTTransMat.m" /* pathName */
};

static emlrtRSInfo uq_emlrtRSI =
    {
        12,             /* lineNo */
        "FASTTransMat", /* fcnName */
        "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-"
        "DeepCwind1\\src\\FASTTransMat.m" /* pathName */
};

static emlrtRSInfo vq_emlrtRSI =
    {
        13,             /* lineNo */
        "FASTTransMat", /* fcnName */
        "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-"
        "DeepCwind1\\src\\FASTTransMat.m" /* pathName */
};

static emlrtRSInfo wq_emlrtRSI =
    {
        14,             /* lineNo */
        "FASTTransMat", /* fcnName */
        "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-"
        "DeepCwind1\\src\\FASTTransMat.m" /* pathName */
};

static emlrtRSInfo xq_emlrtRSI =
    {
        15,             /* lineNo */
        "FASTTransMat", /* fcnName */
        "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-"
        "DeepCwind1\\src\\FASTTransMat.m" /* pathName */
};

static emlrtRSInfo yq_emlrtRSI =
    {
        16,             /* lineNo */
        "FASTTransMat", /* fcnName */
        "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-"
        "DeepCwind1\\src\\FASTTransMat.m" /* pathName */
};

static emlrtRSInfo ar_emlrtRSI =
    {
        17,             /* lineNo */
        "FASTTransMat", /* fcnName */
        "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-"
        "DeepCwind1\\src\\FASTTransMat.m" /* pathName */
};

static emlrtRSInfo br_emlrtRSI =
    {
        18,             /* lineNo */
        "FASTTransMat", /* fcnName */
        "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-"
        "DeepCwind1\\src\\FASTTransMat.m" /* pathName */
};

static emlrtRSInfo cr_emlrtRSI =
    {
        19,             /* lineNo */
        "FASTTransMat", /* fcnName */
        "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-"
        "DeepCwind1\\src\\FASTTransMat.m" /* pathName */
};

static emlrtBCInfo m_emlrtBCI =
    {
        -1,             /* iFirst */
        -1,             /* iLast */
        11,             /* lineNo */
        45,             /* colNo */
        "O3",           /* aName */
        "FASTTransMat", /* fName */
        "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-"
        "DeepCwind1\\src\\FASTTransMat.m", /* pName */
        0                                  /* checkKind */
};

static emlrtBCInfo n_emlrtBCI =
    {
        -1,             /* iFirst */
        -1,             /* iLast */
        11,             /* lineNo */
        62,             /* colNo */
        "O3",           /* aName */
        "FASTTransMat", /* fName */
        "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-"
        "DeepCwind1\\src\\FASTTransMat.m", /* pName */
        0                                  /* checkKind */
};

static emlrtBCInfo o_emlrtBCI =
    {
        -1,             /* iFirst */
        -1,             /* iLast */
        11,             /* lineNo */
        89,             /* colNo */
        "O3",           /* aName */
        "FASTTransMat", /* fName */
        "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-"
        "DeepCwind1\\src\\FASTTransMat.m", /* pName */
        0                                  /* checkKind */
};

static emlrtBCInfo p_emlrtBCI =
    {
        -1,             /* iFirst */
        -1,             /* iLast */
        11,             /* lineNo */
        121,            /* colNo */
        "O3",           /* aName */
        "FASTTransMat", /* fName */
        "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-"
        "DeepCwind1\\src\\FASTTransMat.m", /* pName */
        0                                  /* checkKind */
};

static emlrtBCInfo q_emlrtBCI =
    {
        -1,             /* iFirst */
        -1,             /* iLast */
        12,             /* lineNo */
        14,             /* colNo */
        "O3",           /* aName */
        "FASTTransMat", /* fName */
        "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-"
        "DeepCwind1\\src\\FASTTransMat.m", /* pName */
        0                                  /* checkKind */
};

static emlrtBCInfo r_emlrtBCI =
    {
        -1,             /* iFirst */
        -1,             /* iLast */
        12,             /* lineNo */
        37,             /* colNo */
        "O3",           /* aName */
        "FASTTransMat", /* fName */
        "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-"
        "DeepCwind1\\src\\FASTTransMat.m", /* pName */
        0                                  /* checkKind */
};

static emlrtBCInfo s_emlrtBCI =
    {
        -1,             /* iFirst */
        -1,             /* iLast */
        12,             /* lineNo */
        82,             /* colNo */
        "O3",           /* aName */
        "FASTTransMat", /* fName */
        "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-"
        "DeepCwind1\\src\\FASTTransMat.m", /* pName */
        0                                  /* checkKind */
};

static emlrtBCInfo t_emlrtBCI =
    {
        -1,             /* iFirst */
        -1,             /* iLast */
        12,             /* lineNo */
        113,            /* colNo */
        "O3",           /* aName */
        "FASTTransMat", /* fName */
        "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-"
        "DeepCwind1\\src\\FASTTransMat.m", /* pName */
        0                                  /* checkKind */
};

static emlrtBCInfo u_emlrtBCI =
    {
        -1,             /* iFirst */
        -1,             /* iLast */
        12,             /* lineNo */
        145,            /* colNo */
        "O3",           /* aName */
        "FASTTransMat", /* fName */
        "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-"
        "DeepCwind1\\src\\FASTTransMat.m", /* pName */
        0                                  /* checkKind */
};

static emlrtBCInfo v_emlrtBCI =
    {
        -1,             /* iFirst */
        -1,             /* iLast */
        13,             /* lineNo */
        38,             /* colNo */
        "O3",           /* aName */
        "FASTTransMat", /* fName */
        "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-"
        "DeepCwind1\\src\\FASTTransMat.m", /* pName */
        0                                  /* checkKind */
};

static emlrtBCInfo w_emlrtBCI =
    {
        -1,             /* iFirst */
        -1,             /* iLast */
        13,             /* lineNo */
        53,             /* colNo */
        "O3",           /* aName */
        "FASTTransMat", /* fName */
        "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-"
        "DeepCwind1\\src\\FASTTransMat.m", /* pName */
        0                                  /* checkKind */
};

static emlrtBCInfo x_emlrtBCI =
    {
        -1,             /* iFirst */
        -1,             /* iLast */
        13,             /* lineNo */
        83,             /* colNo */
        "O3",           /* aName */
        "FASTTransMat", /* fName */
        "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-"
        "DeepCwind1\\src\\FASTTransMat.m", /* pName */
        0                                  /* checkKind */
};

static emlrtBCInfo y_emlrtBCI =
    {
        -1,             /* iFirst */
        -1,             /* iLast */
        13,             /* lineNo */
        114,            /* colNo */
        "O3",           /* aName */
        "FASTTransMat", /* fName */
        "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-"
        "DeepCwind1\\src\\FASTTransMat.m", /* pName */
        0                                  /* checkKind */
};

static emlrtBCInfo ab_emlrtBCI =
    {
        -1,             /* iFirst */
        -1,             /* iLast */
        13,             /* lineNo */
        146,            /* colNo */
        "O3",           /* aName */
        "FASTTransMat", /* fName */
        "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-"
        "DeepCwind1\\src\\FASTTransMat.m", /* pName */
        0                                  /* checkKind */
};

static emlrtBCInfo bb_emlrtBCI =
    {
        -1,             /* iFirst */
        -1,             /* iLast */
        14,             /* lineNo */
        15,             /* colNo */
        "O3",           /* aName */
        "FASTTransMat", /* fName */
        "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-"
        "DeepCwind1\\src\\FASTTransMat.m", /* pName */
        0                                  /* checkKind */
};

static emlrtBCInfo cb_emlrtBCI =
    {
        -1,             /* iFirst */
        -1,             /* iLast */
        14,             /* lineNo */
        38,             /* colNo */
        "O3",           /* aName */
        "FASTTransMat", /* fName */
        "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-"
        "DeepCwind1\\src\\FASTTransMat.m", /* pName */
        0                                  /* checkKind */
};

static emlrtBCInfo db_emlrtBCI =
    {
        -1,             /* iFirst */
        -1,             /* iLast */
        14,             /* lineNo */
        83,             /* colNo */
        "O3",           /* aName */
        "FASTTransMat", /* fName */
        "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-"
        "DeepCwind1\\src\\FASTTransMat.m", /* pName */
        0                                  /* checkKind */
};

static emlrtBCInfo eb_emlrtBCI =
    {
        -1,             /* iFirst */
        -1,             /* iLast */
        14,             /* lineNo */
        114,            /* colNo */
        "O3",           /* aName */
        "FASTTransMat", /* fName */
        "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-"
        "DeepCwind1\\src\\FASTTransMat.m", /* pName */
        0                                  /* checkKind */
};

static emlrtBCInfo fb_emlrtBCI =
    {
        -1,             /* iFirst */
        -1,             /* iLast */
        14,             /* lineNo */
        146,            /* colNo */
        "O3",           /* aName */
        "FASTTransMat", /* fName */
        "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-"
        "DeepCwind1\\src\\FASTTransMat.m", /* pName */
        0                                  /* checkKind */
};

static emlrtBCInfo gb_emlrtBCI =
    {
        -1,             /* iFirst */
        -1,             /* iLast */
        15,             /* lineNo */
        53,             /* colNo */
        "O3",           /* aName */
        "FASTTransMat", /* fName */
        "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-"
        "DeepCwind1\\src\\FASTTransMat.m", /* pName */
        0                                  /* checkKind */
};

static emlrtBCInfo hb_emlrtBCI =
    {
        -1,             /* iFirst */
        -1,             /* iLast */
        15,             /* lineNo */
        62,             /* colNo */
        "O3",           /* aName */
        "FASTTransMat", /* fName */
        "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-"
        "DeepCwind1\\src\\FASTTransMat.m", /* pName */
        0                                  /* checkKind */
};

static emlrtBCInfo ib_emlrtBCI =
    {
        -1,             /* iFirst */
        -1,             /* iLast */
        15,             /* lineNo */
        89,             /* colNo */
        "O3",           /* aName */
        "FASTTransMat", /* fName */
        "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-"
        "DeepCwind1\\src\\FASTTransMat.m", /* pName */
        0                                  /* checkKind */
};

static emlrtBCInfo jb_emlrtBCI =
    {
        -1,             /* iFirst */
        -1,             /* iLast */
        15,             /* lineNo */
        121,            /* colNo */
        "O3",           /* aName */
        "FASTTransMat", /* fName */
        "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-"
        "DeepCwind1\\src\\FASTTransMat.m", /* pName */
        0                                  /* checkKind */
};

static emlrtBCInfo kb_emlrtBCI =
    {
        -1,             /* iFirst */
        -1,             /* iLast */
        16,             /* lineNo */
        37,             /* colNo */
        "O3",           /* aName */
        "FASTTransMat", /* fName */
        "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-"
        "DeepCwind1\\src\\FASTTransMat.m", /* pName */
        0                                  /* checkKind */
};

static emlrtBCInfo lb_emlrtBCI =
    {
        -1,             /* iFirst */
        -1,             /* iLast */
        16,             /* lineNo */
        52,             /* colNo */
        "O3",           /* aName */
        "FASTTransMat", /* fName */
        "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-"
        "DeepCwind1\\src\\FASTTransMat.m", /* pName */
        0                                  /* checkKind */
};

static emlrtBCInfo mb_emlrtBCI =
    {
        -1,             /* iFirst */
        -1,             /* iLast */
        16,             /* lineNo */
        82,             /* colNo */
        "O3",           /* aName */
        "FASTTransMat", /* fName */
        "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-"
        "DeepCwind1\\src\\FASTTransMat.m", /* pName */
        0                                  /* checkKind */
};

static emlrtBCInfo nb_emlrtBCI =
    {
        -1,             /* iFirst */
        -1,             /* iLast */
        16,             /* lineNo */
        113,            /* colNo */
        "O3",           /* aName */
        "FASTTransMat", /* fName */
        "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-"
        "DeepCwind1\\src\\FASTTransMat.m", /* pName */
        0                                  /* checkKind */
};

static emlrtBCInfo ob_emlrtBCI =
    {
        -1,             /* iFirst */
        -1,             /* iLast */
        16,             /* lineNo */
        145,            /* colNo */
        "O3",           /* aName */
        "FASTTransMat", /* fName */
        "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-"
        "DeepCwind1\\src\\FASTTransMat.m", /* pName */
        0                                  /* checkKind */
};

static emlrtBCInfo pb_emlrtBCI =
    {
        -1,             /* iFirst */
        -1,             /* iLast */
        17,             /* lineNo */
        37,             /* colNo */
        "O3",           /* aName */
        "FASTTransMat", /* fName */
        "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-"
        "DeepCwind1\\src\\FASTTransMat.m", /* pName */
        0                                  /* checkKind */
};

static emlrtBCInfo qb_emlrtBCI =
    {
        -1,             /* iFirst */
        -1,             /* iLast */
        17,             /* lineNo */
        52,             /* colNo */
        "O3",           /* aName */
        "FASTTransMat", /* fName */
        "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-"
        "DeepCwind1\\src\\FASTTransMat.m", /* pName */
        0                                  /* checkKind */
};

static emlrtBCInfo rb_emlrtBCI =
    {
        -1,             /* iFirst */
        -1,             /* iLast */
        17,             /* lineNo */
        82,             /* colNo */
        "O3",           /* aName */
        "FASTTransMat", /* fName */
        "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-"
        "DeepCwind1\\src\\FASTTransMat.m", /* pName */
        0                                  /* checkKind */
};

static emlrtBCInfo sb_emlrtBCI =
    {
        -1,             /* iFirst */
        -1,             /* iLast */
        17,             /* lineNo */
        113,            /* colNo */
        "O3",           /* aName */
        "FASTTransMat", /* fName */
        "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-"
        "DeepCwind1\\src\\FASTTransMat.m", /* pName */
        0                                  /* checkKind */
};

static emlrtBCInfo tb_emlrtBCI =
    {
        -1,             /* iFirst */
        -1,             /* iLast */
        17,             /* lineNo */
        145,            /* colNo */
        "O3",           /* aName */
        "FASTTransMat", /* fName */
        "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-"
        "DeepCwind1\\src\\FASTTransMat.m", /* pName */
        0                                  /* checkKind */
};

static emlrtBCInfo ub_emlrtBCI =
    {
        -1,             /* iFirst */
        -1,             /* iLast */
        18,             /* lineNo */
        38,             /* colNo */
        "O3",           /* aName */
        "FASTTransMat", /* fName */
        "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-"
        "DeepCwind1\\src\\FASTTransMat.m", /* pName */
        0                                  /* checkKind */
};

static emlrtBCInfo vb_emlrtBCI =
    {
        -1,             /* iFirst */
        -1,             /* iLast */
        18,             /* lineNo */
        53,             /* colNo */
        "O3",           /* aName */
        "FASTTransMat", /* fName */
        "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-"
        "DeepCwind1\\src\\FASTTransMat.m", /* pName */
        0                                  /* checkKind */
};

static emlrtBCInfo wb_emlrtBCI =
    {
        -1,             /* iFirst */
        -1,             /* iLast */
        18,             /* lineNo */
        83,             /* colNo */
        "O3",           /* aName */
        "FASTTransMat", /* fName */
        "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-"
        "DeepCwind1\\src\\FASTTransMat.m", /* pName */
        0                                  /* checkKind */
};

static emlrtBCInfo xb_emlrtBCI =
    {
        -1,             /* iFirst */
        -1,             /* iLast */
        18,             /* lineNo */
        114,            /* colNo */
        "O3",           /* aName */
        "FASTTransMat", /* fName */
        "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-"
        "DeepCwind1\\src\\FASTTransMat.m", /* pName */
        0                                  /* checkKind */
};

static emlrtBCInfo yb_emlrtBCI =
    {
        -1,             /* iFirst */
        -1,             /* iLast */
        18,             /* lineNo */
        146,            /* colNo */
        "O3",           /* aName */
        "FASTTransMat", /* fName */
        "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-"
        "DeepCwind1\\src\\FASTTransMat.m", /* pName */
        0                                  /* checkKind */
};

static emlrtBCInfo ac_emlrtBCI =
    {
        -1,             /* iFirst */
        -1,             /* iLast */
        19,             /* lineNo */
        30,             /* colNo */
        "O3",           /* aName */
        "FASTTransMat", /* fName */
        "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-"
        "DeepCwind1\\src\\FASTTransMat.m", /* pName */
        0                                  /* checkKind */
};

static emlrtBCInfo bc_emlrtBCI =
    {
        -1,             /* iFirst */
        -1,             /* iLast */
        19,             /* lineNo */
        61,             /* colNo */
        "O3",           /* aName */
        "FASTTransMat", /* fName */
        "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-"
        "DeepCwind1\\src\\FASTTransMat.m", /* pName */
        0                                  /* checkKind */
};

static emlrtBCInfo cc_emlrtBCI =
    {
        -1,             /* iFirst */
        -1,             /* iLast */
        19,             /* lineNo */
        89,             /* colNo */
        "O3",           /* aName */
        "FASTTransMat", /* fName */
        "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-"
        "DeepCwind1\\src\\FASTTransMat.m", /* pName */
        0                                  /* checkKind */
};

static emlrtBCInfo dc_emlrtBCI =
    {
        -1,             /* iFirst */
        -1,             /* iLast */
        19,             /* lineNo */
        121,            /* colNo */
        "O3",           /* aName */
        "FASTTransMat", /* fName */
        "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-"
        "DeepCwind1\\src\\FASTTransMat.m", /* pName */
        0                                  /* checkKind */
};

/* Function Definitions */
void FASTTransMat(real_T O1, real_T O2, real_T O3, real_T T[9])
{
  real_T T_tmp;
  real_T T_tmp_tmp;
  real_T b_T_tmp;
  real_T b_x_tmp;
  real_T c_T_tmp;
  real_T c_x_tmp;
  real_T d_T_tmp;
  real_T x;
  real_T x_tmp;
  O1 += 1.0E-15;
  O2 += 1.0E-15;
  O3 += 1.0E-15;
  x_tmp = O1 * O1;
  b_x_tmp = O2 * O2;
  c_x_tmp = O3 * O3;
  x = muDoubleScalarSqrt(((x_tmp + 1.0) + b_x_tmp) + c_x_tmp);
  T_tmp_tmp = x_tmp + b_x_tmp;
  T_tmp = T_tmp_tmp + c_x_tmp;
  b_T_tmp = T_tmp * x;
  T[0] = ((x_tmp * x + b_x_tmp) + c_x_tmp) / b_T_tmp;
  c_T_tmp = O1 * O2 * (x - 1.0);
  T[3] = (O3 * T_tmp + c_T_tmp) / b_T_tmp;
  d_T_tmp = O1 * O3 * (x - 1.0);
  T[6] = (-O2 * T_tmp + d_T_tmp) / b_T_tmp;
  T[1] = (-O3 * T_tmp + c_T_tmp) / b_T_tmp;
  T[4] = ((x_tmp + b_x_tmp * x) + c_x_tmp) / b_T_tmp;
  O3 = O2 * O3 * (x - 1.0);
  T[7] = (O1 * T_tmp + O3) / b_T_tmp;
  T[2] = (O2 * T_tmp + d_T_tmp) / b_T_tmp;
  T[5] = (-O1 * T_tmp + O3) / b_T_tmp;
  T[8] = (T_tmp_tmp + c_x_tmp * x) / b_T_tmp;
}

void b_FASTTransMat(const emlrtStack *sp, real_T O1[19], real_T O2[19],
                    const emxArray_real_T *O3, real_T T[171])
{
  __m128d r;
  emlrtStack st;
  int32_T b_O3;
  int32_T i;
  st.prev = sp;
  st.tls = sp->tls;
  r = _mm_set1_pd(1.0E-15);
  for (i = 0; i <= 16; i += 2) {
    __m128d r1;
    r1 = _mm_loadu_pd(&O1[i]);
    _mm_storeu_pd(&O1[i], _mm_add_pd(r1, r));
    r1 = _mm_loadu_pd(&O2[i]);
    _mm_storeu_pd(&O2[i], _mm_add_pd(r1, r));
  }
  O1[18] += 1.0E-15;
  O2[18] += 1.0E-15;
  b_O3 = O3->size[2];
  for (i = 0; i < 19; i++) {
    real_T T_tmp;
    real_T T_tmp_tmp;
    real_T b_T_tmp;
    real_T b_x_tmp;
    real_T c_T_tmp;
    real_T d;
    real_T d1;
    real_T x;
    real_T x_tmp;
    st.site = &tq_emlrtRSI;
    if (i + 1 > b_O3) {
      emlrtDynamicBoundsCheckR2012b(i + 1, 1, b_O3, &m_emlrtBCI, &st);
    }
    st.site = &tq_emlrtRSI;
    if (i + 1 > b_O3) {
      emlrtDynamicBoundsCheckR2012b(i + 1, 1, b_O3, &n_emlrtBCI, &st);
    }
    st.site = &tq_emlrtRSI;
    if (i + 1 > b_O3) {
      emlrtDynamicBoundsCheckR2012b(i + 1, 1, b_O3, &o_emlrtBCI, &st);
    }
    st.site = &tq_emlrtRSI;
    if (i + 1 > b_O3) {
      emlrtDynamicBoundsCheckR2012b(i + 1, 1, b_O3, &p_emlrtBCI, &st);
    }
    d = O1[i];
    x_tmp = d * d;
    d1 = O2[i];
    b_x_tmp = d1 * d1;
    x = muDoubleScalarSqrt(((x_tmp + 1.0) + b_x_tmp) + 1.0E-30);
    if (i + 1 > b_O3) {
      emlrtDynamicBoundsCheckR2012b(i + 1, 1, b_O3, &q_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    st.site = &uq_emlrtRSI;
    if (i + 1 > b_O3) {
      emlrtDynamicBoundsCheckR2012b(i + 1, 1, b_O3, &r_emlrtBCI, &st);
    }
    st.site = &uq_emlrtRSI;
    if (i + 1 > b_O3) {
      emlrtDynamicBoundsCheckR2012b(i + 1, 1, b_O3, &s_emlrtBCI, &st);
    }
    st.site = &uq_emlrtRSI;
    if (i + 1 > b_O3) {
      emlrtDynamicBoundsCheckR2012b(i + 1, 1, b_O3, &t_emlrtBCI, &st);
    }
    st.site = &uq_emlrtRSI;
    if (i + 1 > b_O3) {
      emlrtDynamicBoundsCheckR2012b(i + 1, 1, b_O3, &u_emlrtBCI, &st);
    }
    st.site = &vq_emlrtRSI;
    if (i + 1 > b_O3) {
      emlrtDynamicBoundsCheckR2012b(i + 1, 1, b_O3, &v_emlrtBCI, &st);
    }
    if (i + 1 > b_O3) {
      emlrtDynamicBoundsCheckR2012b(i + 1, 1, b_O3, &w_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    st.site = &vq_emlrtRSI;
    if (i + 1 > b_O3) {
      emlrtDynamicBoundsCheckR2012b(i + 1, 1, b_O3, &x_emlrtBCI, &st);
    }
    st.site = &vq_emlrtRSI;
    if (i + 1 > b_O3) {
      emlrtDynamicBoundsCheckR2012b(i + 1, 1, b_O3, &y_emlrtBCI, &st);
    }
    st.site = &vq_emlrtRSI;
    if (i + 1 > b_O3) {
      emlrtDynamicBoundsCheckR2012b(i + 1, 1, b_O3, &ab_emlrtBCI, &st);
    }
    if (i + 1 > b_O3) {
      emlrtDynamicBoundsCheckR2012b(i + 1, 1, b_O3, &bb_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    st.site = &wq_emlrtRSI;
    if (i + 1 > b_O3) {
      emlrtDynamicBoundsCheckR2012b(i + 1, 1, b_O3, &cb_emlrtBCI, &st);
    }
    st.site = &wq_emlrtRSI;
    if (i + 1 > b_O3) {
      emlrtDynamicBoundsCheckR2012b(i + 1, 1, b_O3, &db_emlrtBCI, &st);
    }
    st.site = &wq_emlrtRSI;
    if (i + 1 > b_O3) {
      emlrtDynamicBoundsCheckR2012b(i + 1, 1, b_O3, &eb_emlrtBCI, &st);
    }
    st.site = &wq_emlrtRSI;
    if (i + 1 > b_O3) {
      emlrtDynamicBoundsCheckR2012b(i + 1, 1, b_O3, &fb_emlrtBCI, &st);
    }
    st.site = &xq_emlrtRSI;
    if (i + 1 > b_O3) {
      emlrtDynamicBoundsCheckR2012b(i + 1, 1, b_O3, &gb_emlrtBCI, &st);
    }
    st.site = &xq_emlrtRSI;
    if (i + 1 > b_O3) {
      emlrtDynamicBoundsCheckR2012b(i + 1, 1, b_O3, &hb_emlrtBCI, &st);
    }
    st.site = &xq_emlrtRSI;
    if (i + 1 > b_O3) {
      emlrtDynamicBoundsCheckR2012b(i + 1, 1, b_O3, &ib_emlrtBCI, &st);
    }
    st.site = &xq_emlrtRSI;
    if (i + 1 > b_O3) {
      emlrtDynamicBoundsCheckR2012b(i + 1, 1, b_O3, &jb_emlrtBCI, &st);
    }
    st.site = &yq_emlrtRSI;
    if (i + 1 > b_O3) {
      emlrtDynamicBoundsCheckR2012b(i + 1, 1, b_O3, &kb_emlrtBCI, &st);
    }
    if (i + 1 > b_O3) {
      emlrtDynamicBoundsCheckR2012b(i + 1, 1, b_O3, &lb_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    st.site = &yq_emlrtRSI;
    if (i + 1 > b_O3) {
      emlrtDynamicBoundsCheckR2012b(i + 1, 1, b_O3, &mb_emlrtBCI, &st);
    }
    st.site = &yq_emlrtRSI;
    if (i + 1 > b_O3) {
      emlrtDynamicBoundsCheckR2012b(i + 1, 1, b_O3, &nb_emlrtBCI, &st);
    }
    st.site = &yq_emlrtRSI;
    if (i + 1 > b_O3) {
      emlrtDynamicBoundsCheckR2012b(i + 1, 1, b_O3, &ob_emlrtBCI, &st);
    }
    st.site = &ar_emlrtRSI;
    if (i + 1 > b_O3) {
      emlrtDynamicBoundsCheckR2012b(i + 1, 1, b_O3, &pb_emlrtBCI, &st);
    }
    if (i + 1 > b_O3) {
      emlrtDynamicBoundsCheckR2012b(i + 1, 1, b_O3, &qb_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    st.site = &ar_emlrtRSI;
    if (i + 1 > b_O3) {
      emlrtDynamicBoundsCheckR2012b(i + 1, 1, b_O3, &rb_emlrtBCI, &st);
    }
    st.site = &ar_emlrtRSI;
    if (i + 1 > b_O3) {
      emlrtDynamicBoundsCheckR2012b(i + 1, 1, b_O3, &sb_emlrtBCI, &st);
    }
    st.site = &ar_emlrtRSI;
    if (i + 1 > b_O3) {
      emlrtDynamicBoundsCheckR2012b(i + 1, 1, b_O3, &tb_emlrtBCI, &st);
    }
    st.site = &br_emlrtRSI;
    if (i + 1 > b_O3) {
      emlrtDynamicBoundsCheckR2012b(i + 1, 1, b_O3, &ub_emlrtBCI, &st);
    }
    if (i + 1 > b_O3) {
      emlrtDynamicBoundsCheckR2012b(i + 1, 1, b_O3, &vb_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    st.site = &br_emlrtRSI;
    if (i + 1 > b_O3) {
      emlrtDynamicBoundsCheckR2012b(i + 1, 1, b_O3, &wb_emlrtBCI, &st);
    }
    st.site = &br_emlrtRSI;
    if (i + 1 > b_O3) {
      emlrtDynamicBoundsCheckR2012b(i + 1, 1, b_O3, &xb_emlrtBCI, &st);
    }
    st.site = &br_emlrtRSI;
    if (i + 1 > b_O3) {
      emlrtDynamicBoundsCheckR2012b(i + 1, 1, b_O3, &yb_emlrtBCI, &st);
    }
    st.site = &cr_emlrtRSI;
    if (i + 1 > b_O3) {
      emlrtDynamicBoundsCheckR2012b(i + 1, 1, b_O3, &ac_emlrtBCI, &st);
    }
    st.site = &cr_emlrtRSI;
    if (i + 1 > b_O3) {
      emlrtDynamicBoundsCheckR2012b(i + 1, 1, b_O3, &bc_emlrtBCI, &st);
    }
    st.site = &cr_emlrtRSI;
    if (i + 1 > b_O3) {
      emlrtDynamicBoundsCheckR2012b(i + 1, 1, b_O3, &cc_emlrtBCI, &st);
    }
    st.site = &cr_emlrtRSI;
    if (i + 1 > b_O3) {
      emlrtDynamicBoundsCheckR2012b(i + 1, 1, b_O3, &dc_emlrtBCI, &st);
    }
    T_tmp_tmp = x_tmp + b_x_tmp;
    T_tmp = (T_tmp_tmp + 1.0E-30) * x;
    T[9 * i] = ((x_tmp * x + b_x_tmp) + 1.0E-30) / T_tmp;
    b_T_tmp = d * d1 * (x - 1.0);
    T[9 * i + 3] = (1.0E-15 * (T_tmp_tmp + 1.0E-30) + b_T_tmp) / T_tmp;
    c_T_tmp = d * 1.0E-15 * (x - 1.0);
    T[9 * i + 6] = (-d1 * (T_tmp_tmp + 1.0E-30) + c_T_tmp) / T_tmp;
    T[9 * i + 1] = (-1.0E-15 * (T_tmp_tmp + 1.0E-30) + b_T_tmp) / T_tmp;
    T[9 * i + 4] = ((x_tmp + b_x_tmp * x) + 1.0E-30) / T_tmp;
    x_tmp = d1 * 1.0E-15 * (x - 1.0);
    T[9 * i + 7] = (d * (T_tmp_tmp + 1.0E-30) + x_tmp) / T_tmp;
    T[9 * i + 2] = (d1 * (T_tmp_tmp + 1.0E-30) + c_T_tmp) / T_tmp;
    T[9 * i + 5] = (-d * (T_tmp_tmp + 1.0E-30) + x_tmp) / T_tmp;
    T[9 * i + 8] = (T_tmp_tmp + 1.0E-30 * x) / T_tmp;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
}

/* End of code generation (FASTTransMat.c) */
