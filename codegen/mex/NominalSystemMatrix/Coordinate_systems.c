/*
 * Coordinate_systems.c
 *
 * Code generation for function 'Coordinate_systems'
 *
 */

/* Include files */
#include "Coordinate_systems.h"
#include "FASTTransMat.h"
#include "NominalSystemMatrix_data.h"
#include "NominalSystemMatrix_emxutil.h"
#include "NominalSystemMatrix_types.h"
#include "Transform1.h"
#include "Transform2.h"
#include "Transform3.h"
#include "cos.h"
#include "repmat.h"
#include "reshapeSizeChecks.h"
#include "rt_nonfinite.h"
#include "sin.h"
#include "mwmathutil.h"
#include <emmintrin.h>
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo so_emlrtRSI = {
    88,                   /* lineNo */
    "Coordinate_systems", /* fcnName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\Coordinate_"
    "systems.m" /* pathName */
};

static emlrtRSInfo to_emlrtRSI = {
    93,                   /* lineNo */
    "Coordinate_systems", /* fcnName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\Coordinate_"
    "systems.m" /* pathName */
};

static emlrtRSInfo uo_emlrtRSI = {
    138,                  /* lineNo */
    "Coordinate_systems", /* fcnName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\Coordinate_"
    "systems.m" /* pathName */
};

static emlrtRSInfo vo_emlrtRSI = {
    140,                  /* lineNo */
    "Coordinate_systems", /* fcnName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\Coordinate_"
    "systems.m" /* pathName */
};

static emlrtRSInfo wo_emlrtRSI = {
    141,                  /* lineNo */
    "Coordinate_systems", /* fcnName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\Coordinate_"
    "systems.m" /* pathName */
};

static emlrtRSInfo xo_emlrtRSI = {
    142,                  /* lineNo */
    "Coordinate_systems", /* fcnName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\Coordinate_"
    "systems.m" /* pathName */
};

static emlrtRSInfo yo_emlrtRSI = {
    144,                  /* lineNo */
    "Coordinate_systems", /* fcnName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\Coordinate_"
    "systems.m" /* pathName */
};

static emlrtRSInfo ap_emlrtRSI = {
    145,                  /* lineNo */
    "Coordinate_systems", /* fcnName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\Coordinate_"
    "systems.m" /* pathName */
};

static emlrtRSInfo bp_emlrtRSI = {
    146,                  /* lineNo */
    "Coordinate_systems", /* fcnName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\Coordinate_"
    "systems.m" /* pathName */
};

static emlrtRSInfo cp_emlrtRSI = {
    148,                  /* lineNo */
    "Coordinate_systems", /* fcnName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\Coordinate_"
    "systems.m" /* pathName */
};

static emlrtRSInfo dp_emlrtRSI = {
    149,                  /* lineNo */
    "Coordinate_systems", /* fcnName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\Coordinate_"
    "systems.m" /* pathName */
};

static emlrtRSInfo ep_emlrtRSI = {
    150,                  /* lineNo */
    "Coordinate_systems", /* fcnName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\Coordinate_"
    "systems.m" /* pathName */
};

static emlrtRSInfo fp_emlrtRSI = {
    157,                  /* lineNo */
    "Coordinate_systems", /* fcnName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\Coordinate_"
    "systems.m" /* pathName */
};

static emlrtRSInfo gp_emlrtRSI = {
    158,                  /* lineNo */
    "Coordinate_systems", /* fcnName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\Coordinate_"
    "systems.m" /* pathName */
};

static emlrtRSInfo hp_emlrtRSI = {
    163,                  /* lineNo */
    "Coordinate_systems", /* fcnName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\Coordinate_"
    "systems.m" /* pathName */
};

static emlrtRSInfo ip_emlrtRSI = {
    164,                  /* lineNo */
    "Coordinate_systems", /* fcnName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\Coordinate_"
    "systems.m" /* pathName */
};

static emlrtRSInfo jp_emlrtRSI = {
    169,                  /* lineNo */
    "Coordinate_systems", /* fcnName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\Coordinate_"
    "systems.m" /* pathName */
};

static emlrtRSInfo kp_emlrtRSI = {
    170,                  /* lineNo */
    "Coordinate_systems", /* fcnName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\Coordinate_"
    "systems.m" /* pathName */
};

static emlrtRSInfo lp_emlrtRSI = {
    172,                  /* lineNo */
    "Coordinate_systems", /* fcnName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\Coordinate_"
    "systems.m" /* pathName */
};

static emlrtRSInfo mp_emlrtRSI = {
    173,                  /* lineNo */
    "Coordinate_systems", /* fcnName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\Coordinate_"
    "systems.m" /* pathName */
};

static emlrtRSInfo np_emlrtRSI = {
    174,                  /* lineNo */
    "Coordinate_systems", /* fcnName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\Coordinate_"
    "systems.m" /* pathName */
};

static emlrtRSInfo op_emlrtRSI = {
    178,                  /* lineNo */
    "Coordinate_systems", /* fcnName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\Coordinate_"
    "systems.m" /* pathName */
};

static emlrtRSInfo pp_emlrtRSI = {
    179,                  /* lineNo */
    "Coordinate_systems", /* fcnName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\Coordinate_"
    "systems.m" /* pathName */
};

static emlrtRSInfo qp_emlrtRSI = {
    180,                  /* lineNo */
    "Coordinate_systems", /* fcnName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\Coordinate_"
    "systems.m" /* pathName */
};

static emlrtRSInfo rp_emlrtRSI = {
    182,                  /* lineNo */
    "Coordinate_systems", /* fcnName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\Coordinate_"
    "systems.m" /* pathName */
};

static emlrtRSInfo sp_emlrtRSI = {
    183,                  /* lineNo */
    "Coordinate_systems", /* fcnName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\Coordinate_"
    "systems.m" /* pathName */
};

static emlrtRSInfo tp_emlrtRSI = {
    184,                  /* lineNo */
    "Coordinate_systems", /* fcnName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\Coordinate_"
    "systems.m" /* pathName */
};

static emlrtRSInfo up_emlrtRSI = {
    186,                  /* lineNo */
    "Coordinate_systems", /* fcnName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\Coordinate_"
    "systems.m" /* pathName */
};

static emlrtRSInfo vp_emlrtRSI = {
    187,                  /* lineNo */
    "Coordinate_systems", /* fcnName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\Coordinate_"
    "systems.m" /* pathName */
};

static emlrtRSInfo wp_emlrtRSI = {
    188,                  /* lineNo */
    "Coordinate_systems", /* fcnName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\Coordinate_"
    "systems.m" /* pathName */
};

static emlrtRSInfo xp_emlrtRSI = {
    224,                  /* lineNo */
    "Coordinate_systems", /* fcnName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\Coordinate_"
    "systems.m" /* pathName */
};

static emlrtRSInfo yp_emlrtRSI = {
    225,                  /* lineNo */
    "Coordinate_systems", /* fcnName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\Coordinate_"
    "systems.m" /* pathName */
};

static emlrtRSInfo aq_emlrtRSI = {
    226,                  /* lineNo */
    "Coordinate_systems", /* fcnName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\Coordinate_"
    "systems.m" /* pathName */
};

static emlrtRSInfo bq_emlrtRSI = {
    231,                  /* lineNo */
    "Coordinate_systems", /* fcnName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\Coordinate_"
    "systems.m" /* pathName */
};

static emlrtRSInfo cq_emlrtRSI = {
    234,                  /* lineNo */
    "Coordinate_systems", /* fcnName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\Coordinate_"
    "systems.m" /* pathName */
};

static emlrtRSInfo dq_emlrtRSI = {
    235,                  /* lineNo */
    "Coordinate_systems", /* fcnName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\Coordinate_"
    "systems.m" /* pathName */
};

static emlrtRSInfo eq_emlrtRSI = {
    236,                  /* lineNo */
    "Coordinate_systems", /* fcnName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\Coordinate_"
    "systems.m" /* pathName */
};

static emlrtRSInfo fq_emlrtRSI = {
    239,                  /* lineNo */
    "Coordinate_systems", /* fcnName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\Coordinate_"
    "systems.m" /* pathName */
};

static emlrtRSInfo gq_emlrtRSI = {
    242,                  /* lineNo */
    "Coordinate_systems", /* fcnName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\Coordinate_"
    "systems.m" /* pathName */
};

static emlrtRSInfo hq_emlrtRSI = {
    243,                  /* lineNo */
    "Coordinate_systems", /* fcnName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\Coordinate_"
    "systems.m" /* pathName */
};

static emlrtRSInfo iq_emlrtRSI = {
    244,                  /* lineNo */
    "Coordinate_systems", /* fcnName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\Coordinate_"
    "systems.m" /* pathName */
};

static emlrtRSInfo jq_emlrtRSI = {
    247,                  /* lineNo */
    "Coordinate_systems", /* fcnName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\Coordinate_"
    "systems.m" /* pathName */
};

static emlrtRSInfo kq_emlrtRSI = {
    253,                  /* lineNo */
    "Coordinate_systems", /* fcnName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\Coordinate_"
    "systems.m" /* pathName */
};

static emlrtRSInfo lq_emlrtRSI = {
    254,                  /* lineNo */
    "Coordinate_systems", /* fcnName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\Coordinate_"
    "systems.m" /* pathName */
};

static emlrtRSInfo mq_emlrtRSI = {
    257,                  /* lineNo */
    "Coordinate_systems", /* fcnName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\Coordinate_"
    "systems.m" /* pathName */
};

static emlrtRSInfo nq_emlrtRSI = {
    258,                  /* lineNo */
    "Coordinate_systems", /* fcnName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\Coordinate_"
    "systems.m" /* pathName */
};

static emlrtRSInfo oq_emlrtRSI = {
    261,                  /* lineNo */
    "Coordinate_systems", /* fcnName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\Coordinate_"
    "systems.m" /* pathName */
};

static emlrtRSInfo pq_emlrtRSI = {
    262,                  /* lineNo */
    "Coordinate_systems", /* fcnName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\Coordinate_"
    "systems.m" /* pathName */
};

static emlrtRSInfo qq_emlrtRSI = {
    270,                  /* lineNo */
    "Coordinate_systems", /* fcnName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\Coordinate_"
    "systems.m" /* pathName */
};

static emlrtRSInfo rq_emlrtRSI = {
    274,                  /* lineNo */
    "Coordinate_systems", /* fcnName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\Coordinate_"
    "systems.m" /* pathName */
};

static emlrtRSInfo sq_emlrtRSI = {
    278,                  /* lineNo */
    "Coordinate_systems", /* fcnName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\Coordinate_"
    "systems.m" /* pathName */
};

static emlrtRSInfo jr_emlrtRSI = {
    43,    /* lineNo */
    "cat", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\R2025b\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m" /* pathName
                                                                          */
};

static emlrtRSInfo kr_emlrtRSI = {
    65,         /* lineNo */
    "cat_impl", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\R2025b\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m" /* pathName
                                                                          */
};

static emlrtDCInfo emlrtDCI = {
    140,                  /* lineNo */
    54,                   /* colNo */
    "Coordinate_systems", /* fName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\Coordinate_"
    "systems.m", /* pName */
    4            /* checkKind */
};

static emlrtDCInfo b_emlrtDCI = {
    140,                  /* lineNo */
    54,                   /* colNo */
    "Coordinate_systems", /* fName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\Coordinate_"
    "systems.m", /* pName */
    1            /* checkKind */
};

static emlrtDCInfo c_emlrtDCI = {
    141,                  /* lineNo */
    55,                   /* colNo */
    "Coordinate_systems", /* fName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\Coordinate_"
    "systems.m", /* pName */
    1            /* checkKind */
};

static emlrtDCInfo d_emlrtDCI = {
    142,                  /* lineNo */
    55,                   /* colNo */
    "Coordinate_systems", /* fName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\Coordinate_"
    "systems.m", /* pName */
    1            /* checkKind */
};

static emlrtECInfo emlrtECI = {
    3,                    /* nDims */
    157,                  /* lineNo */
    13,                   /* colNo */
    "Coordinate_systems", /* fName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\Coordinate_"
    "systems.m" /* pName */
};

static emlrtECInfo b_emlrtECI = {
    3,                    /* nDims */
    157,                  /* lineNo */
    38,                   /* colNo */
    "Coordinate_systems", /* fName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\Coordinate_"
    "systems.m" /* pName */
};

static emlrtECInfo c_emlrtECI = {
    3,                    /* nDims */
    158,                  /* lineNo */
    13,                   /* colNo */
    "Coordinate_systems", /* fName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\Coordinate_"
    "systems.m" /* pName */
};

static emlrtECInfo d_emlrtECI = {
    3,                    /* nDims */
    158,                  /* lineNo */
    38,                   /* colNo */
    "Coordinate_systems", /* fName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\Coordinate_"
    "systems.m" /* pName */
};

static emlrtECInfo e_emlrtECI = {
    3,                    /* nDims */
    163,                  /* lineNo */
    13,                   /* colNo */
    "Coordinate_systems", /* fName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\Coordinate_"
    "systems.m" /* pName */
};

static emlrtECInfo f_emlrtECI = {
    3,                    /* nDims */
    163,                  /* lineNo */
    38,                   /* colNo */
    "Coordinate_systems", /* fName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\Coordinate_"
    "systems.m" /* pName */
};

static emlrtECInfo g_emlrtECI = {
    3,                    /* nDims */
    164,                  /* lineNo */
    13,                   /* colNo */
    "Coordinate_systems", /* fName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\Coordinate_"
    "systems.m" /* pName */
};

static emlrtECInfo h_emlrtECI = {
    3,                    /* nDims */
    164,                  /* lineNo */
    38,                   /* colNo */
    "Coordinate_systems", /* fName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\Coordinate_"
    "systems.m" /* pName */
};

static emlrtECInfo i_emlrtECI = {
    3,                    /* nDims */
    169,                  /* lineNo */
    13,                   /* colNo */
    "Coordinate_systems", /* fName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\Coordinate_"
    "systems.m" /* pName */
};

static emlrtECInfo j_emlrtECI = {
    3,                    /* nDims */
    169,                  /* lineNo */
    38,                   /* colNo */
    "Coordinate_systems", /* fName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\Coordinate_"
    "systems.m" /* pName */
};

static emlrtECInfo k_emlrtECI = {
    3,                    /* nDims */
    170,                  /* lineNo */
    13,                   /* colNo */
    "Coordinate_systems", /* fName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\Coordinate_"
    "systems.m" /* pName */
};

static emlrtECInfo l_emlrtECI = {
    3,                    /* nDims */
    170,                  /* lineNo */
    38,                   /* colNo */
    "Coordinate_systems", /* fName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\Coordinate_"
    "systems.m" /* pName */
};

static emlrtECInfo m_emlrtECI = {
    3,                    /* nDims */
    224,                  /* lineNo */
    9,                    /* colNo */
    "Coordinate_systems", /* fName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\Coordinate_"
    "systems.m" /* pName */
};

static emlrtECInfo n_emlrtECI = {
    3,                    /* nDims */
    231,                  /* lineNo */
    7,                    /* colNo */
    "Coordinate_systems", /* fName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\Coordinate_"
    "systems.m" /* pName */
};

static emlrtECInfo o_emlrtECI = {
    3,                    /* nDims */
    239,                  /* lineNo */
    7,                    /* colNo */
    "Coordinate_systems", /* fName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\Coordinate_"
    "systems.m" /* pName */
};

static emlrtECInfo p_emlrtECI = {
    3,                    /* nDims */
    247,                  /* lineNo */
    7,                    /* colNo */
    "Coordinate_systems", /* fName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\Coordinate_"
    "systems.m" /* pName */
};

static emlrtRTEInfo d_emlrtRTEI = {
    225,                   /* lineNo */
    27,                    /* colNo */
    "check_non_axis_size", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\R2025b\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m" /* pName
                                                                          */
};

static emlrtRTEInfo ab_emlrtRTEI = {
    141,                  /* lineNo */
    45,                   /* colNo */
    "Coordinate_systems", /* fName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\Coordinate_"
    "systems.m" /* pName */
};

static emlrtRTEInfo bb_emlrtRTEI = {
    140,                  /* lineNo */
    19,                   /* colNo */
    "Coordinate_systems", /* fName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\Coordinate_"
    "systems.m" /* pName */
};

static emlrtRTEInfo cb_emlrtRTEI = {
    140,                  /* lineNo */
    32,                   /* colNo */
    "Coordinate_systems", /* fName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\Coordinate_"
    "systems.m" /* pName */
};

static emlrtRTEInfo db_emlrtRTEI = {
    140,                  /* lineNo */
    31,                   /* colNo */
    "Coordinate_systems", /* fName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\Coordinate_"
    "systems.m" /* pName */
};

static emlrtRTEInfo eb_emlrtRTEI = {
    141,                  /* lineNo */
    20,                   /* colNo */
    "Coordinate_systems", /* fName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\Coordinate_"
    "systems.m" /* pName */
};

static emlrtRTEInfo fb_emlrtRTEI = {
    141,                  /* lineNo */
    33,                   /* colNo */
    "Coordinate_systems", /* fName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\Coordinate_"
    "systems.m" /* pName */
};

static emlrtRTEInfo gb_emlrtRTEI = {
    43,    /* lineNo */
    5,     /* colNo */
    "cat", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\R2025b\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m" /* pName
                                                                          */
};

static emlrtRTEInfo hb_emlrtRTEI = {
    144,                  /* lineNo */
    19,                   /* colNo */
    "Coordinate_systems", /* fName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\Coordinate_"
    "systems.m" /* pName */
};

static emlrtRTEInfo ib_emlrtRTEI = {
    144,                  /* lineNo */
    32,                   /* colNo */
    "Coordinate_systems", /* fName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\Coordinate_"
    "systems.m" /* pName */
};

static emlrtRTEInfo jb_emlrtRTEI = {
    144,                  /* lineNo */
    31,                   /* colNo */
    "Coordinate_systems", /* fName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\Coordinate_"
    "systems.m" /* pName */
};

static emlrtRTEInfo kb_emlrtRTEI = {
    145,                  /* lineNo */
    20,                   /* colNo */
    "Coordinate_systems", /* fName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\Coordinate_"
    "systems.m" /* pName */
};

static emlrtRTEInfo lb_emlrtRTEI = {
    145,                  /* lineNo */
    33,                   /* colNo */
    "Coordinate_systems", /* fName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\Coordinate_"
    "systems.m" /* pName */
};

static emlrtRTEInfo mb_emlrtRTEI = {
    148,                  /* lineNo */
    19,                   /* colNo */
    "Coordinate_systems", /* fName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\Coordinate_"
    "systems.m" /* pName */
};

static emlrtRTEInfo nb_emlrtRTEI = {
    148,                  /* lineNo */
    32,                   /* colNo */
    "Coordinate_systems", /* fName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\Coordinate_"
    "systems.m" /* pName */
};

static emlrtRTEInfo ob_emlrtRTEI = {
    148,                  /* lineNo */
    31,                   /* colNo */
    "Coordinate_systems", /* fName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\Coordinate_"
    "systems.m" /* pName */
};

static emlrtRTEInfo pb_emlrtRTEI = {
    149,                  /* lineNo */
    20,                   /* colNo */
    "Coordinate_systems", /* fName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\Coordinate_"
    "systems.m" /* pName */
};

static emlrtRTEInfo qb_emlrtRTEI = {
    149,                  /* lineNo */
    33,                   /* colNo */
    "Coordinate_systems", /* fName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\Coordinate_"
    "systems.m" /* pName */
};

static emlrtRTEInfo rb_emlrtRTEI = {
    157,                  /* lineNo */
    13,                   /* colNo */
    "Coordinate_systems", /* fName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\Coordinate_"
    "systems.m" /* pName */
};

static emlrtRTEInfo sb_emlrtRTEI = {
    178,                  /* lineNo */
    19,                   /* colNo */
    "Coordinate_systems", /* fName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\Coordinate_"
    "systems.m" /* pName */
};

static emlrtRTEInfo tb_emlrtRTEI = {
    178,                  /* lineNo */
    45,                   /* colNo */
    "Coordinate_systems", /* fName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\Coordinate_"
    "systems.m" /* pName */
};

static emlrtRTEInfo ub_emlrtRTEI = {
    179,                  /* lineNo */
    20,                   /* colNo */
    "Coordinate_systems", /* fName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\Coordinate_"
    "systems.m" /* pName */
};

static emlrtRTEInfo vb_emlrtRTEI = {
    179,                  /* lineNo */
    19,                   /* colNo */
    "Coordinate_systems", /* fName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\Coordinate_"
    "systems.m" /* pName */
};

static emlrtRTEInfo wb_emlrtRTEI = {
    179,                  /* lineNo */
    46,                   /* colNo */
    "Coordinate_systems", /* fName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\Coordinate_"
    "systems.m" /* pName */
};

static emlrtRTEInfo xb_emlrtRTEI = {
    182,                  /* lineNo */
    19,                   /* colNo */
    "Coordinate_systems", /* fName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\Coordinate_"
    "systems.m" /* pName */
};

static emlrtRTEInfo yb_emlrtRTEI = {
    182,                  /* lineNo */
    45,                   /* colNo */
    "Coordinate_systems", /* fName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\Coordinate_"
    "systems.m" /* pName */
};

static emlrtRTEInfo ac_emlrtRTEI = {
    183,                  /* lineNo */
    20,                   /* colNo */
    "Coordinate_systems", /* fName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\Coordinate_"
    "systems.m" /* pName */
};

static emlrtRTEInfo bc_emlrtRTEI = {
    183,                  /* lineNo */
    19,                   /* colNo */
    "Coordinate_systems", /* fName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\Coordinate_"
    "systems.m" /* pName */
};

static emlrtRTEInfo cc_emlrtRTEI = {
    183,                  /* lineNo */
    46,                   /* colNo */
    "Coordinate_systems", /* fName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\Coordinate_"
    "systems.m" /* pName */
};

static emlrtRTEInfo dc_emlrtRTEI = {
    186,                  /* lineNo */
    19,                   /* colNo */
    "Coordinate_systems", /* fName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\Coordinate_"
    "systems.m" /* pName */
};

static emlrtRTEInfo ec_emlrtRTEI = {
    186,                  /* lineNo */
    45,                   /* colNo */
    "Coordinate_systems", /* fName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\Coordinate_"
    "systems.m" /* pName */
};

static emlrtRTEInfo fc_emlrtRTEI = {
    187,                  /* lineNo */
    20,                   /* colNo */
    "Coordinate_systems", /* fName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\Coordinate_"
    "systems.m" /* pName */
};

static emlrtRTEInfo gc_emlrtRTEI = {
    187,                  /* lineNo */
    19,                   /* colNo */
    "Coordinate_systems", /* fName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\Coordinate_"
    "systems.m" /* pName */
};

static emlrtRTEInfo hc_emlrtRTEI = {
    187,                  /* lineNo */
    46,                   /* colNo */
    "Coordinate_systems", /* fName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\Coordinate_"
    "systems.m" /* pName */
};

static emlrtRTEInfo ic_emlrtRTEI = {
    142,                  /* lineNo */
    16,                   /* colNo */
    "Coordinate_systems", /* fName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\Coordinate_"
    "systems.m" /* pName */
};

/* Function Declarations */
static void binary_expand_op(real_T in1[45], const emxArray_real_T *in2,
                             const real_T in3[45], const real_T in4[45]);

static void binary_expand_op_1(real_T in1[15], const struct4_T *in2, real_T in3,
                               real_T in4, const real_T in5[68], real_T in6,
                               real_T in7, const real_T in8[15]);

static void binary_expand_op_3(real_T in1[15], const struct4_T *in2, real_T in3,
                               real_T in4, const real_T in5[15],
                               const real_T in6[68], real_T in7, real_T in8,
                               const real_T in9[15]);

static void binary_expand_op_5(real_T in1[15], const struct4_T *in2, real_T in3,
                               real_T in4, const real_T in5[15],
                               const real_T in6[68], real_T in7, real_T in8,
                               const real_T in9[15]);

static void binary_expand_op_6(
    const emlrtStack *sp, const emlrtRSInfo in2, const real_T in3_data[],
    const int32_T in3_size[3], const real_T in4[19], const real_T in5_data[],
    const int32_T in5_size[3], const real_T in6[19], const real_T in7_data[],
    const int32_T in7_size[3], const real_T in8_data[],
    const int32_T in8_size[3], const emxArray_real_T *in9, real_T in1[171]);

static void binary_expand_op_8(
    const emlrtStack *sp, const emlrtRSInfo in2, const emxArray_real_T *in3,
    const real_T in4[19], const real_T in5_data[], const int32_T in5_size[3],
    const real_T in6[19], const real_T in7_data[], const int32_T in7_size[3],
    const real_T in8_data[], const int32_T in8_size[3],
    const emxArray_real_T *in9, real_T in1[171]);

/* Function Definitions */
static void binary_expand_op(real_T in1[45], const emxArray_real_T *in2,
                             const real_T in3[45], const real_T in4[45])
{
  const real_T *in2_data;
  int32_T aux_0_2;
  int32_T i;
  int32_T stride_0_2;
  in2_data = in2->data;
  stride_0_2 = (in2->size[2] != 1);
  aux_0_2 = 0;
  for (i = 0; i < 15; i++) {
    __m128d r;
    __m128d r1;
    __m128d r2;
    __m128d r3;
    int32_T i1;
    r = _mm_loadu_pd(&in2_data[3 * aux_0_2]);
    r1 = _mm_loadu_pd(&in1[3 * i]);
    r2 = _mm_loadu_pd(&in3[3 * i]);
    r3 = _mm_loadu_pd(&in4[3 * i]);
    _mm_storeu_pd(&in1[3 * i],
                  _mm_add_pd(_mm_add_pd(_mm_add_pd(r, r1), r2), r3));
    i1 = 3 * i + 2;
    in1[i1] = ((in2_data[3 * aux_0_2 + 2] + in1[i1]) + in3[i1]) + in4[i1];
    aux_0_2 += stride_0_2;
  }
}

static void binary_expand_op_1(real_T in1[15], const struct4_T *in2, real_T in3,
                               real_T in4, const real_T in5[68], real_T in6,
                               real_T in7, const real_T in8[15])
{
  real_T b_in5;
  real_T c_in5;
  real_T d_in5;
  real_T e_in5;
  int32_T i;
  int32_T stride_0_2;
  b_in5 = in5[32];
  c_in5 = in5[33];
  d_in5 = in5[30];
  e_in5 = in5[31];
  stride_0_2 = ((int32_T)in2->nt != 1);
  for (i = 0; i < 15; i++) {
    in1[i] = in2->BeamSec[i * stride_0_2] -
             0.5 * (((((in2->s11_V[i] * in3 + in2->s22_V[i] * in4) +
                       in1[i] * b_in5 * c_in5) +
                      in2->s11_H[i] * in6) +
                     in2->s22_H[i] * in7) +
                    in8[i] * d_in5 * e_in5);
  }
}

static void binary_expand_op_3(real_T in1[15], const struct4_T *in2, real_T in3,
                               real_T in4, const real_T in5[15],
                               const real_T in6[68], real_T in7, real_T in8,
                               const real_T in9[15])
{
  real_T b_in6;
  real_T c_in6;
  real_T d_in6;
  real_T e_in6;
  int32_T i;
  int32_T stride_0_2;
  b_in6 = in6[28];
  c_in6 = in6[29];
  d_in6 = in6[26];
  e_in6 = in6[27];
  stride_0_2 = ((int32_T)in2->nt != 1);
  for (i = 0; i < 15; i++) {
    in1[i] = in2->BeamSec[i * stride_0_2] -
             0.5 * (((((in2->s11_V[i] * in3 + in2->s22_V[i] * in4) +
                       in5[i] * b_in6 * c_in6) +
                      in2->s11_H[i] * in7) +
                     in2->s22_H[i] * in8) +
                    in9[i] * d_in6 * e_in6);
  }
}

static void binary_expand_op_5(real_T in1[15], const struct4_T *in2, real_T in3,
                               real_T in4, const real_T in5[15],
                               const real_T in6[68], real_T in7, real_T in8,
                               const real_T in9[15])
{
  real_T b_in6;
  real_T c_in6;
  real_T d_in6;
  real_T e_in6;
  int32_T i;
  int32_T stride_0_2;
  b_in6 = in6[24];
  c_in6 = in6[25];
  d_in6 = in6[22];
  e_in6 = in6[23];
  stride_0_2 = ((int32_T)in2->nt != 1);
  for (i = 0; i < 15; i++) {
    in1[i] = in2->BeamSec[i * stride_0_2] -
             0.5 * (((((in2->s11_V[i] * in3 + in2->s22_V[i] * in4) +
                       in5[i] * b_in6 * c_in6) +
                      in2->s11_H[i] * in7) +
                     in2->s22_H[i] * in8) +
                    in9[i] * d_in6 * e_in6);
  }
}

static void binary_expand_op_6(
    const emlrtStack *sp, const emlrtRSInfo in2, const real_T in3_data[],
    const int32_T in3_size[3], const real_T in4[19], const real_T in5_data[],
    const int32_T in5_size[3], const real_T in6[19], const real_T in7_data[],
    const int32_T in7_size[3], const real_T in8_data[],
    const int32_T in8_size[3], const emxArray_real_T *in9, real_T in1[171])
{
  emlrtStack st;
  real_T in3[19];
  real_T in7[19];
  int32_T b_stride_0_2;
  int32_T b_stride_1_2;
  int32_T i;
  int32_T stride_0_2;
  int32_T stride_1_2;
  st.prev = sp;
  st.tls = sp->tls;
  stride_0_2 = (in3_size[2] != 1);
  stride_1_2 = (in5_size[2] != 1);
  b_stride_0_2 = (in7_size[2] != 1);
  b_stride_1_2 = (in8_size[2] != 1);
  for (i = 0; i < 19; i++) {
    real_T d;
    real_T d1;
    d = in4[i];
    d1 = in6[i];
    in3[i] = in3_data[i * stride_0_2] * d - in5_data[i * stride_1_2] * d1;
    in7[i] = in7_data[i * b_stride_0_2] * d + in8_data[i * b_stride_1_2] * d1;
  }
  st.site = (emlrtRSInfo *)&in2;
  b_FASTTransMat(&st, in3, in7, in9, in1);
}

static void binary_expand_op_8(
    const emlrtStack *sp, const emlrtRSInfo in2, const emxArray_real_T *in3,
    const real_T in4[19], const real_T in5_data[], const int32_T in5_size[3],
    const real_T in6[19], const real_T in7_data[], const int32_T in7_size[3],
    const real_T in8_data[], const int32_T in8_size[3],
    const emxArray_real_T *in9, real_T in1[171])
{
  emlrtStack st;
  real_T b_in3[19];
  real_T in7[19];
  const real_T *in3_data;
  int32_T b_stride_0_2;
  int32_T b_stride_1_2;
  int32_T i;
  int32_T stride_0_2;
  int32_T stride_1_2;
  st.prev = sp;
  st.tls = sp->tls;
  in3_data = in3->data;
  stride_0_2 = (in3->size[2] != 1);
  stride_1_2 = (in5_size[2] != 1);
  b_stride_0_2 = (in7_size[2] != 1);
  b_stride_1_2 = (in8_size[2] != 1);
  for (i = 0; i < 19; i++) {
    real_T d;
    real_T d1;
    d = in4[i];
    d1 = in6[i];
    b_in3[i] = in3_data[i * stride_0_2] * d - in5_data[i * stride_1_2] * d1;
    in7[i] = in7_data[i * b_stride_0_2] * d + in8_data[i * b_stride_1_2] * d1;
  }
  st.site = (emlrtRSInfo *)&in2;
  b_FASTTransMat(&st, b_in3, in7, in9, in1);
}

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
    real_T rP2_tip[3], real_T rP3_tip[3])
{
  static const real_T dv1[9] = {1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0};
  static const real_T dv2[9] = {1.0,
                                0.0,
                                0.0,
                                0.0,
                                6.123233995736766E-17,
                                1.0,
                                0.0,
                                -1.0,
                                6.123233995736766E-17};
  static const real_T dv3[9] = {1.0,
                                0.0,
                                0.0,
                                0.0,
                                0.86602540378443871,
                                -0.49999999999999983,
                                0.0,
                                0.49999999999999983,
                                0.86602540378443871};
  static const real_T dv4[9] = {1.0,
                                0.0,
                                0.0,
                                0.0,
                                -0.86602540378443849,
                                -0.50000000000000033,
                                0.0,
                                0.50000000000000033,
                                -0.86602540378443849};
  __m128d r;
  __m128d r1;
  __m128d r2;
  __m128d r3;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  emxArray_real_T *LB1_tmp;
  emxArray_real_T *b_varargin_1;
  emxArray_real_T *b_varargin_2;
  emxArray_real_T *result;
  emxArray_real_T *varargin_1;
  emxArray_real_T *varargin_2;
  real_T LB1_data[171];
  real_T LB2_data[171];
  real_T LB3_data[171];
  real_T c_varargin_1_data[171];
  real_T b_out[45];
  real_T out[45];
  real_T MB1_tmp_data[19];
  real_T b_tmp_data[19];
  real_T c_tmp_data[19];
  real_T c_varargin_2[19];
  real_T d_tmp_data[19];
  real_T e_tmp_data[19];
  real_T f_tmp_data[19];
  real_T g_tmp_data[19];
  real_T h_tmp_data[19];
  real_T i_tmp_data[19];
  real_T j_tmp_data[19];
  real_T thetaB1_IP[19];
  real_T thetaB1_Oop[19];
  real_T thetaB2_IP[19];
  real_T thetaB2_Oop[19];
  real_T thetaB3_IP[19];
  real_T thetaB3_Oop[19];
  real_T tmp_data[19];
  real_T rP1_X[15];
  real_T rP1_X_tmp[15];
  real_T rP1_Y[15];
  real_T rP1_Z[15];
  real_T rP3_X[15];
  real_T B[9];
  real_T c_D_tmp[9];
  real_T dv[9];
  real_T D_tmp;
  real_T I2_tmp;
  real_T I3_tmp;
  real_T J1_tmp;
  real_T b;
  real_T b_D_tmp;
  real_T b_I2_tmp;
  real_T b_I3_tmp;
  real_T b_J1_tmp;
  real_T b_b;
  real_T b_rP1_X_tmp;
  real_T b_rP1_Y_tmp;
  real_T b_rP1_Z_tmp;
  real_T c_b;
  real_T c_rP1_Y_tmp;
  real_T d;
  real_T d1;
  real_T d2;
  real_T d3;
  real_T d_b;
  real_T e_b;
  real_T f_b;
  real_T g_b;
  real_T h_b;
  real_T i_b;
  real_T j_b;
  real_T k_b;
  real_T l_b;
  real_T rP1_Y_tmp;
  real_T rP1_Z_tmp;
  real_T *LB1_tmp_data;
  real_T *b_varargin_1_data;
  real_T *result_data;
  real_T *varargin_1_data;
  real_T *varargin_2_data;
  int32_T LB1_size[3];
  int32_T LB2_size[3];
  int32_T LB3_size[3];
  int32_T b_tmp_size[3];
  int32_T c_tmp_size[3];
  int32_T d_tmp_size[3];
  int32_T e_tmp_size[3];
  int32_T f_tmp_size[3];
  int32_T g_tmp_size[3];
  int32_T h_tmp_size[3];
  int32_T i_tmp_size[3];
  int32_T j_tmp_size[3];
  int32_T tmp_size[3];
  int32_T varargin_1_size[3];
  int32_T b_loop_ub;
  int32_T b_scalarLB;
  int32_T c_loop_ub;
  int32_T d_loop_ub;
  int32_T it;
  int32_T loop_ub;
  int32_T scalarLB;
  int32_T vectorUB;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  /*  dO1_V = Platform.dO1_V; */
  /*  dO2_V = Platform.dO2_V; */
  /*  dO1_H = Platform.dO1_H; */
  /*  dO2_H = Platform.dO2_H; */
  /*  Dofs */
  /*  q_Sg   = q_Nom(1); */
  /*  q_Sw   = q_Nom(2); */
  /*  q_Hv   = q_Nom(3); */
  /*  --- 提取 OC4 平台新增的 12 个柔性位移自由度 --- */
  /*  紧跟在叶片自由度 q_B3F2 (索引 22) 之后 */
  /*  qd_Sg   = q_Nom(23+12); */
  /*  qd_Sw   = q_Nom(24); */
  /*  qd_Hv   = q_Nom(25); */
  /*  qd_R    = q_Nom(26); */
  /*  qd_P    = q_Nom(27); */
  /*  qd_Y    = q_Nom(28); */
  /*  qd_TFA1 = q_Nom(29); */
  /*  qd_TSS1 = q_Nom(30); */
  /*  qd_TFA2 = q_Nom(31); */
  /*  qd_TSS2 = q_Nom(32); */
  /*  qd_yaw  = q_Nom(33); */
  /*  qd_GeAz = q_Nom(34); */
  /*  qd_DrTr = q_Nom(35); */
  /*  qd_B1F1 = q_Nom(36); */
  /*  qd_B1E1 = q_Nom(37); */
  /*  qd_B1F2 = q_Nom(38); */
  /*  qd_B2F1 = q_Nom(39); */
  /*  qd_B2E1 = q_Nom(40); */
  /*  qd_B2F2 = q_Nom(41); */
  /*  qd_B3F1 = q_Nom(42); */
  /*  qd_B3E1 = q_Nom(43); */
  /*  qd_B3F2 = q_Nom(44); */
  /*  end of Update state */
  /*  Inertial/Earth coordinate system */
  st.site = &so_emlrtRSI;
  FASTTransMat(q_Nom[3], q_Nom[5], -q_Nom[4], dv);
  Transform1(dv, dv1, A);
  /*  Tower coordinate system */
  st.site = &to_emlrtRSI;
  FASTTransMat(Twr_dO1_TSS * q_Nom[7] + Twr_dO2_TSS * q_Nom[9], 0.0,
               -Twr_dO1_TFA * q_Nom[6] - Twr_dO2_TFA * q_Nom[8], dv);
  /*  Tower top/ Base plate coordinate system */
  D_tmp = muDoubleScalarSin(q_Nom[10]);
  b_D_tmp = muDoubleScalarCos(q_Nom[10]);
  c_D_tmp[0] = b_D_tmp;
  c_D_tmp[3] = 0.0;
  c_D_tmp[6] = -D_tmp;
  c_D_tmp[1] = 0.0;
  c_D_tmp[4] = 1.0;
  c_D_tmp[7] = 0.0;
  c_D_tmp[2] = D_tmp;
  c_D_tmp[5] = 0.0;
  c_D_tmp[8] = b_D_tmp;
  Transform1(dv, A, B);
  Transform1(c_D_tmp, B, D);
  /*  Nacelle coordinate system */
  D_tmp = muDoubleScalarCos(ElastoDyn_ShftTilt);
  b_D_tmp = muDoubleScalarSin(ElastoDyn_ShftTilt);
  c_D_tmp[0] = D_tmp;
  c_D_tmp[3] = b_D_tmp;
  c_D_tmp[6] = -0.0 * D_tmp;
  c_D_tmp[1] = -b_D_tmp;
  c_D_tmp[4] = D_tmp;
  c_D_tmp[7] = 0.0 * b_D_tmp;
  c_D_tmp[2] = 0.0;
  c_D_tmp[5] = 0.0;
  c_D_tmp[8] = 1.0;
  Transform1(c_D_tmp, D, C);
  /*  Shaft coordinate system */
  D_tmp = q_Nom[11] + q_Nom[12];
  b_D_tmp = muDoubleScalarSin(D_tmp);
  D_tmp = muDoubleScalarCos(D_tmp);
  dv[0] = 1.0;
  dv[3] = 0.0;
  dv[6] = 0.0;
  dv[1] = 0.0;
  dv[4] = D_tmp;
  dv[7] = b_D_tmp;
  dv[2] = 0.0;
  dv[5] = -b_D_tmp;
  dv[8] = D_tmp;
  Transform1(dv, C, E);
  /*  Azimuth coordinate system */
  /*  Coordinate system for blade 1 */
  D_tmp = muDoubleScalarSin(ElastoDyn_PreCone[0]);
  b_D_tmp = muDoubleScalarCos(ElastoDyn_PreCone[0]);
  /*  Coned coordinate system for blade 1 */
  I2_tmp = muDoubleScalarSin(ElastoDyn_PreCone[1]);
  b_I2_tmp = muDoubleScalarCos(ElastoDyn_PreCone[1]);
  /*  Coned coordinate system for blade 1 */
  I3_tmp = muDoubleScalarSin(ElastoDyn_PreCone[2]);
  b_I3_tmp = muDoubleScalarCos(ElastoDyn_PreCone[2]);
  /*  Coned coordinate system for blade 1 */
  J1_tmp = muDoubleScalarSin(BlPitch[0]);
  b_J1_tmp = muDoubleScalarCos(BlPitch[0]);
  c_D_tmp[0] = b_D_tmp;
  c_D_tmp[3] = 0.0;
  c_D_tmp[6] = -D_tmp;
  c_D_tmp[1] = 0.0;
  c_D_tmp[4] = 1.0;
  c_D_tmp[7] = 0.0;
  c_D_tmp[2] = D_tmp;
  c_D_tmp[5] = 0.0;
  c_D_tmp[8] = b_D_tmp;
  Transform1(dv2, E, dv);
  Transform1(c_D_tmp, dv, B);
  c_D_tmp[0] = b_J1_tmp;
  c_D_tmp[3] = -J1_tmp;
  c_D_tmp[6] = 0.0;
  c_D_tmp[1] = J1_tmp;
  c_D_tmp[4] = b_J1_tmp;
  c_D_tmp[7] = 0.0;
  c_D_tmp[2] = 0.0;
  c_D_tmp[5] = 0.0;
  c_D_tmp[8] = 1.0;
  Transform1(c_D_tmp, B, J1);
  /*  Pitched coordinate system for blade 1 */
  D_tmp = muDoubleScalarSin(BlPitch[1]);
  b_D_tmp = muDoubleScalarCos(BlPitch[1]);
  c_D_tmp[0] = b_I2_tmp;
  c_D_tmp[3] = 0.0;
  c_D_tmp[6] = -I2_tmp;
  c_D_tmp[1] = 0.0;
  c_D_tmp[4] = 1.0;
  c_D_tmp[7] = 0.0;
  c_D_tmp[2] = I2_tmp;
  c_D_tmp[5] = 0.0;
  c_D_tmp[8] = b_I2_tmp;
  Transform1(dv3, E, dv);
  Transform1(c_D_tmp, dv, B);
  c_D_tmp[0] = b_D_tmp;
  c_D_tmp[3] = -D_tmp;
  c_D_tmp[6] = 0.0;
  c_D_tmp[1] = D_tmp;
  c_D_tmp[4] = b_D_tmp;
  c_D_tmp[7] = 0.0;
  c_D_tmp[2] = 0.0;
  c_D_tmp[5] = 0.0;
  c_D_tmp[8] = 1.0;
  Transform1(c_D_tmp, B, J2);
  /*  Pitched coordinate system for blade 1 */
  D_tmp = muDoubleScalarSin(BlPitch[2]);
  b_D_tmp = muDoubleScalarCos(BlPitch[2]);
  c_D_tmp[0] = b_I3_tmp;
  c_D_tmp[3] = 0.0;
  c_D_tmp[6] = -I3_tmp;
  c_D_tmp[1] = 0.0;
  c_D_tmp[4] = 1.0;
  c_D_tmp[7] = 0.0;
  c_D_tmp[2] = I3_tmp;
  c_D_tmp[5] = 0.0;
  c_D_tmp[8] = b_I3_tmp;
  Transform1(dv4, E, dv);
  Transform1(c_D_tmp, dv, B);
  c_D_tmp[0] = b_D_tmp;
  c_D_tmp[3] = -D_tmp;
  c_D_tmp[6] = 0.0;
  c_D_tmp[1] = D_tmp;
  c_D_tmp[4] = b_D_tmp;
  c_D_tmp[7] = 0.0;
  c_D_tmp[2] = 0.0;
  c_D_tmp[5] = 0.0;
  c_D_tmp[8] = 1.0;
  Transform1(c_D_tmp, B, J3);
  /*  Pitched coordinate system for blade 1 */
  st.site = &uo_emlrtRSI;
  b_st.site = &dr_emlrtRSI;
  computeDimsData(&b_st, Bld->nb);
  if ((int32_T)Bld->nb > 19) {
    emlrtErrorWithMessageIdR2018a(&st, &emlrtRTEI,
                                  "Coder:toolbox:reshape_emptyReshapeLimit",
                                  "Coder:toolbox:reshape_emptyReshapeLimit", 0);
  }
  if ((int32_T)Bld->nb < 0) {
    emlrtErrorWithMessageIdR2018a(&st, &b_emlrtRTEI,
                                  "MATLAB:checkDimCommon:nonnegativeSize",
                                  "MATLAB:checkDimCommon:nonnegativeSize", 0);
  }
  if ((int32_T)Bld->nb != 19) {
    emlrtErrorWithMessageIdR2018a(
        &st, &c_emlrtRTEI, "Coder:MATLAB:getReshapeDims_notSameNumel",
        "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
  }
  loop_ub = (int32_T)muDoubleScalarFloor(Bld->nb);
  if (Bld->nb != loop_ub) {
    emlrtIntegerCheckR2012b(Bld->nb, &c_emlrtDCI, (emlrtConstCTX)sp);
  }
  emxInit_real_T(sp, &LB1_tmp, 3, &ab_emlrtRTEI);
  scalarLB = LB1_tmp->size[0] * LB1_tmp->size[1] * LB1_tmp->size[2];
  LB1_tmp->size[0] = 1;
  LB1_tmp->size[1] = 1;
  b_loop_ub = (int32_T)Bld->nb;
  LB1_tmp->size[2] = b_loop_ub;
  emxEnsureCapacity_real_T(sp, LB1_tmp, scalarLB, &ab_emlrtRTEI);
  LB1_tmp_data = LB1_tmp->data;
  for (it = 0; it < b_loop_ub; it++) {
    LB1_tmp_data[it] = 0.0;
  }
  if (b_loop_ub != loop_ub) {
    emlrtIntegerCheckR2012b(Bld->nb, &d_emlrtDCI, (emlrtConstCTX)sp);
  }
  st.site = &vo_emlrtRSI;
  emxInit_real_T(&st, &varargin_2, 3, &fb_emlrtRTEI);
  scalarLB = varargin_2->size[0] * varargin_2->size[1] * varargin_2->size[2];
  varargin_2->size[0] = 1;
  varargin_2->size[1] = 1;
  varargin_2->size[2] = b_loop_ub;
  emxEnsureCapacity_real_T(&st, varargin_2, scalarLB, &bb_emlrtRTEI);
  LB1_tmp_data = varargin_2->data;
  for (it = 0; it < b_loop_ub; it++) {
    LB1_tmp_data[it] = Bld->Twist[it];
  }
  emxReserve_real_T(&st, varargin_2, &bb_emlrtRTEI);
  LB1_tmp_data = varargin_2->data;
  b_st.site = &vo_emlrtRSI;
  b_cos((real_T *)varargin_2->data, varargin_2->size);
  emxInit_real_T(&st, &varargin_1, 3, &bb_emlrtRTEI);
  scalarLB = varargin_1->size[0] * varargin_1->size[1] * varargin_1->size[2];
  varargin_1->size[0] = 1;
  varargin_1->size[1] = 1;
  c_loop_ub = varargin_2->size[2];
  varargin_1->size[2] = varargin_2->size[2];
  emxEnsureCapacity_real_T(&st, varargin_1, scalarLB, &bb_emlrtRTEI);
  varargin_1_data = varargin_1->data;
  for (it = 0; it < c_loop_ub; it++) {
    varargin_1_data[it] = LB1_tmp_data[it];
  }
  scalarLB = varargin_2->size[0] * varargin_2->size[1] * varargin_2->size[2];
  varargin_2->size[0] = 1;
  varargin_2->size[1] = 1;
  varargin_2->size[2] = b_loop_ub;
  emxEnsureCapacity_real_T(&st, varargin_2, scalarLB, &cb_emlrtRTEI);
  LB1_tmp_data = varargin_2->data;
  for (it = 0; it < b_loop_ub; it++) {
    LB1_tmp_data[it] = Bld->Twist[it];
  }
  emxReserve_real_T(&st, varargin_2, &cb_emlrtRTEI);
  LB1_tmp_data = varargin_2->data;
  b_st.site = &vo_emlrtRSI;
  b_sin((real_T *)varargin_2->data, varargin_2->size);
  emxInit_real_T(&st, &b_varargin_2, 3, &db_emlrtRTEI);
  scalarLB =
      b_varargin_2->size[0] * b_varargin_2->size[1] * b_varargin_2->size[2];
  b_varargin_2->size[0] = 1;
  b_varargin_2->size[1] = 1;
  d_loop_ub = varargin_2->size[2];
  b_varargin_2->size[2] = varargin_2->size[2];
  emxEnsureCapacity_real_T(&st, b_varargin_2, scalarLB, &db_emlrtRTEI);
  varargin_2_data = b_varargin_2->data;
  scalarLB = (varargin_2->size[2] / 2) << 1;
  vectorUB = scalarLB - 2;
  for (it = 0; it <= vectorUB; it += 2) {
    r = _mm_loadu_pd(&LB1_tmp_data[it]);
    _mm_storeu_pd(&varargin_2_data[it], _mm_mul_pd(r, _mm_set1_pd(-1.0)));
  }
  for (it = scalarLB; it < d_loop_ub; it++) {
    varargin_2_data[it] = -LB1_tmp_data[it];
  }
  if (!(Bld->nb >= 0.0)) {
    emlrtNonNegativeCheckR2012b(Bld->nb, &emlrtDCI, &st);
  }
  if (b_loop_ub != loop_ub) {
    emlrtIntegerCheckR2012b(Bld->nb, &b_emlrtDCI, &st);
  }
  b_st.site = &jr_emlrtRSI;
  c_st.site = &kr_emlrtRSI;
  if (b_varargin_2->size[2] != varargin_1->size[2]) {
    emlrtErrorWithMessageIdR2018a(&c_st, &d_emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  if (b_loop_ub != varargin_1->size[2]) {
    emlrtErrorWithMessageIdR2018a(&c_st, &d_emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  st.site = &wo_emlrtRSI;
  scalarLB = varargin_2->size[0] * varargin_2->size[1] * varargin_2->size[2];
  varargin_2->size[0] = 1;
  varargin_2->size[1] = 1;
  varargin_2->size[2] = b_loop_ub;
  emxEnsureCapacity_real_T(&st, varargin_2, scalarLB, &eb_emlrtRTEI);
  LB1_tmp_data = varargin_2->data;
  for (it = 0; it < b_loop_ub; it++) {
    LB1_tmp_data[it] = Bld->Twist[it];
  }
  emxReserve_real_T(&st, varargin_2, &eb_emlrtRTEI);
  LB1_tmp_data = varargin_2->data;
  b_st.site = &wo_emlrtRSI;
  b_sin((real_T *)varargin_2->data, varargin_2->size);
  emxInit_real_T(&st, &b_varargin_1, 3, &eb_emlrtRTEI);
  scalarLB =
      b_varargin_1->size[0] * b_varargin_1->size[1] * b_varargin_1->size[2];
  b_varargin_1->size[0] = 1;
  b_varargin_1->size[1] = 1;
  vectorUB = varargin_2->size[2];
  b_varargin_1->size[2] = varargin_2->size[2];
  emxEnsureCapacity_real_T(&st, b_varargin_1, scalarLB, &eb_emlrtRTEI);
  b_varargin_1_data = b_varargin_1->data;
  for (it = 0; it < vectorUB; it++) {
    b_varargin_1_data[it] = LB1_tmp_data[it];
  }
  scalarLB = varargin_2->size[0] * varargin_2->size[1] * varargin_2->size[2];
  varargin_2->size[0] = 1;
  varargin_2->size[1] = 1;
  varargin_2->size[2] = b_loop_ub;
  emxEnsureCapacity_real_T(&st, varargin_2, scalarLB, &fb_emlrtRTEI);
  LB1_tmp_data = varargin_2->data;
  for (it = 0; it < b_loop_ub; it++) {
    LB1_tmp_data[it] = Bld->Twist[it];
  }
  emxReserve_real_T(&st, varargin_2, &fb_emlrtRTEI);
  LB1_tmp_data = varargin_2->data;
  b_st.site = &wo_emlrtRSI;
  b_cos((real_T *)varargin_2->data, varargin_2->size);
  b_st.site = &jr_emlrtRSI;
  c_st.site = &kr_emlrtRSI;
  if (varargin_2->size[2] != b_varargin_1->size[2]) {
    emlrtErrorWithMessageIdR2018a(&c_st, &d_emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  if (b_loop_ub != b_varargin_1->size[2]) {
    emlrtErrorWithMessageIdR2018a(&c_st, &d_emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  emxInit_real_T(sp, &result, 3, &ic_emlrtRTEI);
  st.site = &xo_emlrtRSI;
  b_st.site = &jr_emlrtRSI;
  scalarLB = result->size[0] * result->size[1] * result->size[2];
  result->size[0] = 1;
  result->size[1] = 3;
  result->size[2] = b_loop_ub;
  emxEnsureCapacity_real_T(&b_st, result, scalarLB, &gb_emlrtRTEI);
  result_data = result->data;
  for (it = 0; it < b_loop_ub; it++) {
    result_data[3 * it] = 0.0;
  }
  for (it = 0; it < b_loop_ub; it++) {
    result_data[3 * it + 1] = 0.0;
  }
  for (it = 0; it < b_loop_ub; it++) {
    result_data[3 * it + 2] = 1.0;
  }
  st.site = &vo_emlrtRSI;
  b_st.site = &jr_emlrtRSI;
  c_st.site = &kr_emlrtRSI;
  if (b_varargin_1->size[2] != (int8_T)varargin_1->size[2]) {
    emlrtErrorWithMessageIdR2018a(&c_st, &d_emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  if (result->size[2] != (int8_T)varargin_1->size[2]) {
    emlrtErrorWithMessageIdR2018a(&c_st, &d_emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  varargin_1_size[0] = 3;
  varargin_1_size[1] = 3;
  varargin_1_size[2] = c_loop_ub;
  for (it = 0; it < c_loop_ub; it++) {
    c_varargin_1_data[9 * it] = varargin_1_data[it];
  }
  scalarLB = b_varargin_2->size[2];
  for (it = 0; it < scalarLB; it++) {
    c_varargin_1_data[9 * it + 3] = varargin_2_data[it];
  }
  for (it = 0; it < b_loop_ub; it++) {
    c_varargin_1_data[9 * it + 6] = 0.0;
  }
  for (it = 0; it < vectorUB; it++) {
    c_varargin_1_data[9 * it + 1] = b_varargin_1_data[it];
  }
  scalarLB = varargin_2->size[2];
  for (it = 0; it < scalarLB; it++) {
    c_varargin_1_data[9 * it + 4] = LB1_tmp_data[it];
  }
  for (it = 0; it < b_loop_ub; it++) {
    c_varargin_1_data[9 * it + 7] = 0.0;
  }
  for (it = 0; it < b_loop_ub; it++) {
    c_varargin_1_data[9 * it + 2] = result_data[3 * it];
    c_varargin_1_data[9 * it + 5] = result_data[3 * it + 1];
    c_varargin_1_data[9 * it + 8] = result_data[3 * it + 2];
  }
  st.site = &vo_emlrtRSI;
  Transform2(&st, c_varargin_1_data, varargin_1_size, J1, LB1_data, LB1_size);
  st.site = &yo_emlrtRSI;
  scalarLB = varargin_2->size[0] * varargin_2->size[1] * varargin_2->size[2];
  varargin_2->size[0] = 1;
  varargin_2->size[1] = 1;
  varargin_2->size[2] = b_loop_ub;
  emxEnsureCapacity_real_T(&st, varargin_2, scalarLB, &hb_emlrtRTEI);
  LB1_tmp_data = varargin_2->data;
  for (it = 0; it < b_loop_ub; it++) {
    LB1_tmp_data[it] = Bld->Twist[it];
  }
  emxReserve_real_T(&st, varargin_2, &hb_emlrtRTEI);
  LB1_tmp_data = varargin_2->data;
  b_st.site = &yo_emlrtRSI;
  b_cos((real_T *)varargin_2->data, varargin_2->size);
  scalarLB = varargin_1->size[0] * varargin_1->size[1] * varargin_1->size[2];
  varargin_1->size[0] = 1;
  varargin_1->size[1] = 1;
  loop_ub = varargin_2->size[2];
  varargin_1->size[2] = varargin_2->size[2];
  emxEnsureCapacity_real_T(&st, varargin_1, scalarLB, &hb_emlrtRTEI);
  varargin_1_data = varargin_1->data;
  for (it = 0; it < loop_ub; it++) {
    varargin_1_data[it] = LB1_tmp_data[it];
  }
  scalarLB = varargin_2->size[0] * varargin_2->size[1] * varargin_2->size[2];
  varargin_2->size[0] = 1;
  varargin_2->size[1] = 1;
  varargin_2->size[2] = b_loop_ub;
  emxEnsureCapacity_real_T(&st, varargin_2, scalarLB, &ib_emlrtRTEI);
  LB1_tmp_data = varargin_2->data;
  for (it = 0; it < b_loop_ub; it++) {
    LB1_tmp_data[it] = Bld->Twist[it];
  }
  emxReserve_real_T(&st, varargin_2, &ib_emlrtRTEI);
  LB1_tmp_data = varargin_2->data;
  b_st.site = &yo_emlrtRSI;
  b_sin((real_T *)varargin_2->data, varargin_2->size);
  scalarLB =
      b_varargin_2->size[0] * b_varargin_2->size[1] * b_varargin_2->size[2];
  b_varargin_2->size[0] = 1;
  b_varargin_2->size[1] = 1;
  d_loop_ub = varargin_2->size[2];
  b_varargin_2->size[2] = varargin_2->size[2];
  emxEnsureCapacity_real_T(&st, b_varargin_2, scalarLB, &jb_emlrtRTEI);
  varargin_2_data = b_varargin_2->data;
  scalarLB = (varargin_2->size[2] / 2) << 1;
  vectorUB = scalarLB - 2;
  for (it = 0; it <= vectorUB; it += 2) {
    r = _mm_loadu_pd(&LB1_tmp_data[it]);
    _mm_storeu_pd(&varargin_2_data[it], _mm_mul_pd(r, _mm_set1_pd(-1.0)));
  }
  for (it = scalarLB; it < d_loop_ub; it++) {
    varargin_2_data[it] = -LB1_tmp_data[it];
  }
  b_st.site = &jr_emlrtRSI;
  c_st.site = &kr_emlrtRSI;
  if (b_varargin_2->size[2] != varargin_1->size[2]) {
    emlrtErrorWithMessageIdR2018a(&c_st, &d_emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  if (b_loop_ub != varargin_1->size[2]) {
    emlrtErrorWithMessageIdR2018a(&c_st, &d_emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  st.site = &ap_emlrtRSI;
  scalarLB = varargin_2->size[0] * varargin_2->size[1] * varargin_2->size[2];
  varargin_2->size[0] = 1;
  varargin_2->size[1] = 1;
  varargin_2->size[2] = b_loop_ub;
  emxEnsureCapacity_real_T(&st, varargin_2, scalarLB, &kb_emlrtRTEI);
  LB1_tmp_data = varargin_2->data;
  for (it = 0; it < b_loop_ub; it++) {
    LB1_tmp_data[it] = Bld->Twist[it];
  }
  emxReserve_real_T(&st, varargin_2, &kb_emlrtRTEI);
  LB1_tmp_data = varargin_2->data;
  b_st.site = &ap_emlrtRSI;
  b_sin((real_T *)varargin_2->data, varargin_2->size);
  scalarLB =
      b_varargin_1->size[0] * b_varargin_1->size[1] * b_varargin_1->size[2];
  b_varargin_1->size[0] = 1;
  b_varargin_1->size[1] = 1;
  vectorUB = varargin_2->size[2];
  b_varargin_1->size[2] = varargin_2->size[2];
  emxEnsureCapacity_real_T(&st, b_varargin_1, scalarLB, &kb_emlrtRTEI);
  b_varargin_1_data = b_varargin_1->data;
  for (it = 0; it < vectorUB; it++) {
    b_varargin_1_data[it] = LB1_tmp_data[it];
  }
  scalarLB = varargin_2->size[0] * varargin_2->size[1] * varargin_2->size[2];
  varargin_2->size[0] = 1;
  varargin_2->size[1] = 1;
  varargin_2->size[2] = b_loop_ub;
  emxEnsureCapacity_real_T(&st, varargin_2, scalarLB, &lb_emlrtRTEI);
  LB1_tmp_data = varargin_2->data;
  for (it = 0; it < b_loop_ub; it++) {
    LB1_tmp_data[it] = Bld->Twist[it];
  }
  emxReserve_real_T(&st, varargin_2, &lb_emlrtRTEI);
  LB1_tmp_data = varargin_2->data;
  b_st.site = &ap_emlrtRSI;
  b_cos((real_T *)varargin_2->data, varargin_2->size);
  b_st.site = &jr_emlrtRSI;
  c_st.site = &kr_emlrtRSI;
  if (varargin_2->size[2] != b_varargin_1->size[2]) {
    emlrtErrorWithMessageIdR2018a(&c_st, &d_emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  if (b_loop_ub != b_varargin_1->size[2]) {
    emlrtErrorWithMessageIdR2018a(&c_st, &d_emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  st.site = &bp_emlrtRSI;
  b_st.site = &jr_emlrtRSI;
  st.site = &yo_emlrtRSI;
  b_st.site = &jr_emlrtRSI;
  c_st.site = &kr_emlrtRSI;
  if (b_varargin_1->size[2] != (int8_T)varargin_1->size[2]) {
    emlrtErrorWithMessageIdR2018a(&c_st, &d_emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  if (result->size[2] != (int8_T)varargin_1->size[2]) {
    emlrtErrorWithMessageIdR2018a(&c_st, &d_emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  varargin_1_size[0] = 3;
  varargin_1_size[1] = 3;
  varargin_1_size[2] = loop_ub;
  for (it = 0; it < loop_ub; it++) {
    c_varargin_1_data[9 * it] = varargin_1_data[it];
  }
  scalarLB = b_varargin_2->size[2];
  for (it = 0; it < scalarLB; it++) {
    c_varargin_1_data[9 * it + 3] = varargin_2_data[it];
  }
  for (it = 0; it < b_loop_ub; it++) {
    c_varargin_1_data[9 * it + 6] = 0.0;
  }
  for (it = 0; it < vectorUB; it++) {
    c_varargin_1_data[9 * it + 1] = b_varargin_1_data[it];
  }
  scalarLB = varargin_2->size[2];
  for (it = 0; it < scalarLB; it++) {
    c_varargin_1_data[9 * it + 4] = LB1_tmp_data[it];
  }
  for (it = 0; it < b_loop_ub; it++) {
    c_varargin_1_data[9 * it + 7] = 0.0;
  }
  for (it = 0; it < b_loop_ub; it++) {
    c_varargin_1_data[9 * it + 2] = result_data[3 * it];
    c_varargin_1_data[9 * it + 5] = result_data[3 * it + 1];
    c_varargin_1_data[9 * it + 8] = result_data[3 * it + 2];
  }
  st.site = &yo_emlrtRSI;
  Transform2(&st, c_varargin_1_data, varargin_1_size, J2, LB2_data, LB2_size);
  st.site = &cp_emlrtRSI;
  scalarLB = varargin_2->size[0] * varargin_2->size[1] * varargin_2->size[2];
  varargin_2->size[0] = 1;
  varargin_2->size[1] = 1;
  varargin_2->size[2] = b_loop_ub;
  emxEnsureCapacity_real_T(&st, varargin_2, scalarLB, &mb_emlrtRTEI);
  LB1_tmp_data = varargin_2->data;
  for (it = 0; it < b_loop_ub; it++) {
    LB1_tmp_data[it] = Bld->Twist[it];
  }
  emxReserve_real_T(&st, varargin_2, &mb_emlrtRTEI);
  LB1_tmp_data = varargin_2->data;
  b_st.site = &cp_emlrtRSI;
  b_cos((real_T *)varargin_2->data, varargin_2->size);
  scalarLB = varargin_1->size[0] * varargin_1->size[1] * varargin_1->size[2];
  varargin_1->size[0] = 1;
  varargin_1->size[1] = 1;
  loop_ub = varargin_2->size[2];
  varargin_1->size[2] = varargin_2->size[2];
  emxEnsureCapacity_real_T(&st, varargin_1, scalarLB, &mb_emlrtRTEI);
  varargin_1_data = varargin_1->data;
  for (it = 0; it < loop_ub; it++) {
    varargin_1_data[it] = LB1_tmp_data[it];
  }
  scalarLB = varargin_2->size[0] * varargin_2->size[1] * varargin_2->size[2];
  varargin_2->size[0] = 1;
  varargin_2->size[1] = 1;
  varargin_2->size[2] = b_loop_ub;
  emxEnsureCapacity_real_T(&st, varargin_2, scalarLB, &nb_emlrtRTEI);
  LB1_tmp_data = varargin_2->data;
  for (it = 0; it < b_loop_ub; it++) {
    LB1_tmp_data[it] = Bld->Twist[it];
  }
  emxReserve_real_T(&st, varargin_2, &nb_emlrtRTEI);
  LB1_tmp_data = varargin_2->data;
  b_st.site = &cp_emlrtRSI;
  b_sin((real_T *)varargin_2->data, varargin_2->size);
  scalarLB =
      b_varargin_2->size[0] * b_varargin_2->size[1] * b_varargin_2->size[2];
  b_varargin_2->size[0] = 1;
  b_varargin_2->size[1] = 1;
  vectorUB = varargin_2->size[2];
  b_varargin_2->size[2] = varargin_2->size[2];
  emxEnsureCapacity_real_T(&st, b_varargin_2, scalarLB, &ob_emlrtRTEI);
  varargin_2_data = b_varargin_2->data;
  scalarLB = (varargin_2->size[2] / 2) << 1;
  d_loop_ub = scalarLB - 2;
  for (it = 0; it <= d_loop_ub; it += 2) {
    r = _mm_loadu_pd(&LB1_tmp_data[it]);
    _mm_storeu_pd(&varargin_2_data[it], _mm_mul_pd(r, _mm_set1_pd(-1.0)));
  }
  for (it = scalarLB; it < vectorUB; it++) {
    varargin_2_data[it] = -LB1_tmp_data[it];
  }
  b_st.site = &jr_emlrtRSI;
  c_st.site = &kr_emlrtRSI;
  if (b_varargin_2->size[2] != varargin_1->size[2]) {
    emlrtErrorWithMessageIdR2018a(&c_st, &d_emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  if (b_loop_ub != varargin_1->size[2]) {
    emlrtErrorWithMessageIdR2018a(&c_st, &d_emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  st.site = &dp_emlrtRSI;
  scalarLB = varargin_2->size[0] * varargin_2->size[1] * varargin_2->size[2];
  varargin_2->size[0] = 1;
  varargin_2->size[1] = 1;
  varargin_2->size[2] = b_loop_ub;
  emxEnsureCapacity_real_T(&st, varargin_2, scalarLB, &pb_emlrtRTEI);
  LB1_tmp_data = varargin_2->data;
  for (it = 0; it < b_loop_ub; it++) {
    LB1_tmp_data[it] = Bld->Twist[it];
  }
  emxReserve_real_T(&st, varargin_2, &pb_emlrtRTEI);
  LB1_tmp_data = varargin_2->data;
  b_st.site = &dp_emlrtRSI;
  b_sin((real_T *)varargin_2->data, varargin_2->size);
  scalarLB =
      b_varargin_1->size[0] * b_varargin_1->size[1] * b_varargin_1->size[2];
  b_varargin_1->size[0] = 1;
  b_varargin_1->size[1] = 1;
  vectorUB = varargin_2->size[2];
  b_varargin_1->size[2] = varargin_2->size[2];
  emxEnsureCapacity_real_T(&st, b_varargin_1, scalarLB, &pb_emlrtRTEI);
  b_varargin_1_data = b_varargin_1->data;
  for (it = 0; it < vectorUB; it++) {
    b_varargin_1_data[it] = LB1_tmp_data[it];
  }
  scalarLB = varargin_2->size[0] * varargin_2->size[1] * varargin_2->size[2];
  varargin_2->size[0] = 1;
  varargin_2->size[1] = 1;
  varargin_2->size[2] = b_loop_ub;
  emxEnsureCapacity_real_T(&st, varargin_2, scalarLB, &qb_emlrtRTEI);
  LB1_tmp_data = varargin_2->data;
  for (it = 0; it < b_loop_ub; it++) {
    LB1_tmp_data[it] = Bld->Twist[it];
  }
  emxReserve_real_T(&st, varargin_2, &qb_emlrtRTEI);
  LB1_tmp_data = varargin_2->data;
  b_st.site = &dp_emlrtRSI;
  b_cos((real_T *)varargin_2->data, varargin_2->size);
  b_st.site = &jr_emlrtRSI;
  c_st.site = &kr_emlrtRSI;
  if (varargin_2->size[2] != b_varargin_1->size[2]) {
    emlrtErrorWithMessageIdR2018a(&c_st, &d_emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  if (b_loop_ub != b_varargin_1->size[2]) {
    emlrtErrorWithMessageIdR2018a(&c_st, &d_emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  st.site = &ep_emlrtRSI;
  b_st.site = &jr_emlrtRSI;
  st.site = &cp_emlrtRSI;
  b_st.site = &jr_emlrtRSI;
  c_st.site = &kr_emlrtRSI;
  if (b_varargin_1->size[2] != (int8_T)varargin_1->size[2]) {
    emlrtErrorWithMessageIdR2018a(&c_st, &d_emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  if (result->size[2] != (int8_T)varargin_1->size[2]) {
    emlrtErrorWithMessageIdR2018a(&c_st, &d_emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  varargin_1_size[0] = 3;
  varargin_1_size[1] = 3;
  varargin_1_size[2] = loop_ub;
  for (it = 0; it < loop_ub; it++) {
    c_varargin_1_data[9 * it] = varargin_1_data[it];
  }
  scalarLB = b_varargin_2->size[2];
  for (it = 0; it < scalarLB; it++) {
    c_varargin_1_data[9 * it + 3] = varargin_2_data[it];
  }
  for (it = 0; it < b_loop_ub; it++) {
    c_varargin_1_data[9 * it + 6] = 0.0;
  }
  for (it = 0; it < vectorUB; it++) {
    c_varargin_1_data[9 * it + 1] = b_varargin_1_data[it];
  }
  scalarLB = varargin_2->size[2];
  for (it = 0; it < scalarLB; it++) {
    c_varargin_1_data[9 * it + 4] = LB1_tmp_data[it];
  }
  for (it = 0; it < b_loop_ub; it++) {
    c_varargin_1_data[9 * it + 7] = 0.0;
  }
  for (it = 0; it < b_loop_ub; it++) {
    c_varargin_1_data[9 * it + 2] = result_data[3 * it];
    c_varargin_1_data[9 * it + 5] = result_data[3 * it + 1];
    c_varargin_1_data[9 * it + 8] = result_data[3 * it + 2];
  }
  st.site = &cp_emlrtRSI;
  Transform2(&st, c_varargin_1_data, varargin_1_size, J3, LB3_data, LB3_size);
  /*  Blade Element Fixed Coordinate System */
  D_tmp = q_Nom[13];
  b_D_tmp = q_Nom[15];
  J1_tmp = q_Nom[14];
  r = _mm_set1_pd(D_tmp);
  r1 = _mm_set1_pd(b_D_tmp);
  r2 = _mm_set1_pd(J1_tmp);
  for (it = 0; it <= 16; it += 2) {
    _mm_storeu_pd(
        &thetaB1_IP[it],
        _mm_mul_pd(
            _mm_add_pd(
                _mm_add_pd(_mm_mul_pd(_mm_loadu_pd(&Bld->dW1_B1[it]), r),
                           _mm_mul_pd(_mm_loadu_pd(&Bld->dW2_B1[it]), r1)),
                _mm_mul_pd(_mm_loadu_pd(&Bld->dW3_B1[it]), r2)),
            _mm_set1_pd(-1.0)));
    _mm_storeu_pd(
        &thetaB1_Oop[it],
        _mm_add_pd(_mm_add_pd(_mm_mul_pd(_mm_loadu_pd(&Bld->dO1_B1[it]), r),
                              _mm_mul_pd(_mm_loadu_pd(&Bld->dO2_B1[it]), r1)),
                   _mm_mul_pd(_mm_loadu_pd(&Bld->dO3_B1[it]), r2)));
  }
  thetaB1_IP[18] =
      -((q_Nom[13] * Bld->dW1_B1[18] + q_Nom[15] * Bld->dW2_B1[18]) +
        q_Nom[14] * Bld->dW3_B1[18]);
  thetaB1_Oop[18] =
      (q_Nom[13] * Bld->dO1_B1[18] + q_Nom[15] * Bld->dO2_B1[18]) +
      q_Nom[14] * Bld->dO3_B1[18];
  scalarLB = varargin_2->size[0] * varargin_2->size[1] * varargin_2->size[2];
  varargin_2->size[0] = 1;
  varargin_2->size[1] = 1;
  varargin_2->size[2] = b_loop_ub;
  emxEnsureCapacity_real_T(sp, varargin_2, scalarLB, &rb_emlrtRTEI);
  LB1_tmp_data = varargin_2->data;
  for (it = 0; it < b_loop_ub; it++) {
    LB1_tmp_data[it] = Bld->Twist[it];
  }
  emxReserve_real_T(sp, varargin_2, &rb_emlrtRTEI);
  LB1_tmp_data = varargin_2->data;
  st.site = &fp_emlrtRSI;
  b_cos((real_T *)varargin_2->data, varargin_2->size);
  if ((varargin_2->size[2] != 19) && (varargin_2->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(varargin_2->size[2], 19, &emlrtECI,
                                (emlrtConstCTX)sp);
  }
  varargin_1_size[0] = 1;
  varargin_1_size[1] = 1;
  varargin_1_size[2] = b_loop_ub;
  if (b_loop_ub - 1 >= 0) {
    memcpy(&MB1_tmp_data[0], &Bld->Twist[0],
           (uint32_T)b_loop_ub * sizeof(real_T));
  }
  st.site = &fp_emlrtRSI;
  b_sin(MB1_tmp_data, varargin_1_size);
  if ((varargin_1_size[2] != 19) && (varargin_1_size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(varargin_1_size[2], 19, &b_emlrtECI,
                                (emlrtConstCTX)sp);
  }
  tmp_size[0] = 1;
  tmp_size[1] = 1;
  tmp_size[2] = b_loop_ub;
  if (b_loop_ub - 1 >= 0) {
    memcpy(&tmp_data[0], &Bld->Twist[0], (uint32_T)b_loop_ub * sizeof(real_T));
  }
  st.site = &gp_emlrtRSI;
  b_sin(tmp_data, tmp_size);
  if ((tmp_size[2] != 19) && (tmp_size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(tmp_size[2], 19, &c_emlrtECI,
                                (emlrtConstCTX)sp);
  }
  b_tmp_size[0] = 1;
  b_tmp_size[1] = 1;
  b_tmp_size[2] = b_loop_ub;
  if (b_loop_ub - 1 >= 0) {
    memcpy(&b_tmp_data[0], &Bld->Twist[0],
           (uint32_T)b_loop_ub * sizeof(real_T));
  }
  st.site = &gp_emlrtRSI;
  b_cos(b_tmp_data, b_tmp_size);
  if ((b_tmp_size[2] != 19) && (b_tmp_size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(b_tmp_size[2], 19, &d_emlrtECI,
                                (emlrtConstCTX)sp);
  }
  D_tmp = q_Nom[16];
  b_D_tmp = q_Nom[18];
  J1_tmp = q_Nom[17];
  r = _mm_set1_pd(D_tmp);
  r1 = _mm_set1_pd(b_D_tmp);
  r2 = _mm_set1_pd(J1_tmp);
  for (it = 0; it <= 16; it += 2) {
    _mm_storeu_pd(
        &thetaB2_IP[it],
        _mm_mul_pd(
            _mm_add_pd(
                _mm_add_pd(_mm_mul_pd(_mm_loadu_pd(&Bld->dW1_B1[it]), r),
                           _mm_mul_pd(_mm_loadu_pd(&Bld->dW2_B1[it]), r1)),
                _mm_mul_pd(_mm_loadu_pd(&Bld->dW3_B1[it]), r2)),
            _mm_set1_pd(-1.0)));
    _mm_storeu_pd(
        &thetaB2_Oop[it],
        _mm_add_pd(_mm_add_pd(_mm_mul_pd(_mm_loadu_pd(&Bld->dO1_B1[it]), r),
                              _mm_mul_pd(_mm_loadu_pd(&Bld->dO2_B1[it]), r1)),
                   _mm_mul_pd(_mm_loadu_pd(&Bld->dO3_B1[it]), r2)));
  }
  thetaB2_IP[18] =
      -((q_Nom[16] * Bld->dW1_B1[18] + Bld->dW2_B1[18] * q_Nom[18]) +
        q_Nom[17] * Bld->dW3_B1[18]);
  thetaB2_Oop[18] =
      (q_Nom[16] * Bld->dO1_B1[18] + Bld->dO2_B1[18] * q_Nom[18]) +
      q_Nom[17] * Bld->dO3_B1[18];
  c_tmp_size[0] = 1;
  c_tmp_size[1] = 1;
  c_tmp_size[2] = b_loop_ub;
  if (b_loop_ub - 1 >= 0) {
    memcpy(&c_tmp_data[0], &Bld->Twist[0],
           (uint32_T)b_loop_ub * sizeof(real_T));
  }
  st.site = &hp_emlrtRSI;
  b_cos(c_tmp_data, c_tmp_size);
  if ((c_tmp_size[2] != 19) && (c_tmp_size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(c_tmp_size[2], 19, &e_emlrtECI,
                                (emlrtConstCTX)sp);
  }
  d_tmp_size[0] = 1;
  d_tmp_size[1] = 1;
  d_tmp_size[2] = b_loop_ub;
  if (b_loop_ub - 1 >= 0) {
    memcpy(&d_tmp_data[0], &Bld->Twist[0],
           (uint32_T)b_loop_ub * sizeof(real_T));
  }
  st.site = &hp_emlrtRSI;
  b_sin(d_tmp_data, d_tmp_size);
  if ((d_tmp_size[2] != 19) && (d_tmp_size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(d_tmp_size[2], 19, &f_emlrtECI,
                                (emlrtConstCTX)sp);
  }
  e_tmp_size[0] = 1;
  e_tmp_size[1] = 1;
  e_tmp_size[2] = b_loop_ub;
  if (b_loop_ub - 1 >= 0) {
    memcpy(&e_tmp_data[0], &Bld->Twist[0],
           (uint32_T)b_loop_ub * sizeof(real_T));
  }
  st.site = &ip_emlrtRSI;
  b_sin(e_tmp_data, e_tmp_size);
  if ((e_tmp_size[2] != 19) && (e_tmp_size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(e_tmp_size[2], 19, &g_emlrtECI,
                                (emlrtConstCTX)sp);
  }
  f_tmp_size[0] = 1;
  f_tmp_size[1] = 1;
  f_tmp_size[2] = b_loop_ub;
  if (b_loop_ub - 1 >= 0) {
    memcpy(&f_tmp_data[0], &Bld->Twist[0],
           (uint32_T)b_loop_ub * sizeof(real_T));
  }
  st.site = &ip_emlrtRSI;
  b_cos(f_tmp_data, f_tmp_size);
  if ((f_tmp_size[2] != 19) && (f_tmp_size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(f_tmp_size[2], 19, &h_emlrtECI,
                                (emlrtConstCTX)sp);
  }
  D_tmp = q_Nom[19];
  b_D_tmp = q_Nom[21];
  J1_tmp = q_Nom[20];
  r = _mm_set1_pd(D_tmp);
  r1 = _mm_set1_pd(b_D_tmp);
  r2 = _mm_set1_pd(J1_tmp);
  for (it = 0; it <= 16; it += 2) {
    _mm_storeu_pd(
        &thetaB3_IP[it],
        _mm_mul_pd(
            _mm_add_pd(
                _mm_add_pd(_mm_mul_pd(_mm_loadu_pd(&Bld->dW1_B1[it]), r),
                           _mm_mul_pd(_mm_loadu_pd(&Bld->dW2_B1[it]), r1)),
                _mm_mul_pd(_mm_loadu_pd(&Bld->dW3_B1[it]), r2)),
            _mm_set1_pd(-1.0)));
    _mm_storeu_pd(
        &thetaB3_Oop[it],
        _mm_add_pd(_mm_add_pd(_mm_mul_pd(_mm_loadu_pd(&Bld->dO1_B1[it]), r),
                              _mm_mul_pd(_mm_loadu_pd(&Bld->dO2_B1[it]), r1)),
                   _mm_mul_pd(_mm_loadu_pd(&Bld->dO3_B1[it]), r2)));
  }
  thetaB3_IP[18] =
      -((Bld->dW1_B1[18] * q_Nom[19] + Bld->dW2_B1[18] * q_Nom[21]) +
        Bld->dW3_B1[18] * q_Nom[20]);
  thetaB3_Oop[18] =
      (Bld->dO1_B1[18] * q_Nom[19] + Bld->dO2_B1[18] * q_Nom[21]) +
      Bld->dO3_B1[18] * q_Nom[20];
  g_tmp_size[0] = 1;
  g_tmp_size[1] = 1;
  g_tmp_size[2] = b_loop_ub;
  if (b_loop_ub - 1 >= 0) {
    memcpy(&g_tmp_data[0], &Bld->Twist[0],
           (uint32_T)b_loop_ub * sizeof(real_T));
  }
  st.site = &jp_emlrtRSI;
  b_cos(g_tmp_data, g_tmp_size);
  if ((g_tmp_size[2] != 19) && (g_tmp_size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(g_tmp_size[2], 19, &i_emlrtECI,
                                (emlrtConstCTX)sp);
  }
  h_tmp_size[0] = 1;
  h_tmp_size[1] = 1;
  h_tmp_size[2] = b_loop_ub;
  if (b_loop_ub - 1 >= 0) {
    memcpy(&h_tmp_data[0], &Bld->Twist[0],
           (uint32_T)b_loop_ub * sizeof(real_T));
  }
  st.site = &jp_emlrtRSI;
  b_sin(h_tmp_data, h_tmp_size);
  if ((h_tmp_size[2] != 19) && (h_tmp_size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(h_tmp_size[2], 19, &j_emlrtECI,
                                (emlrtConstCTX)sp);
  }
  i_tmp_size[0] = 1;
  i_tmp_size[1] = 1;
  i_tmp_size[2] = b_loop_ub;
  if (b_loop_ub - 1 >= 0) {
    memcpy(&i_tmp_data[0], &Bld->Twist[0],
           (uint32_T)b_loop_ub * sizeof(real_T));
  }
  st.site = &kp_emlrtRSI;
  b_sin(i_tmp_data, i_tmp_size);
  if ((i_tmp_size[2] != 19) && (i_tmp_size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(i_tmp_size[2], 19, &k_emlrtECI,
                                (emlrtConstCTX)sp);
  }
  j_tmp_size[0] = 1;
  j_tmp_size[1] = 1;
  j_tmp_size[2] = b_loop_ub;
  if (b_loop_ub - 1 >= 0) {
    memcpy(&j_tmp_data[0], &Bld->Twist[0],
           (uint32_T)b_loop_ub * sizeof(real_T));
  }
  st.site = &kp_emlrtRSI;
  b_cos(j_tmp_data, j_tmp_size);
  if ((j_tmp_size[2] != 19) && (j_tmp_size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(j_tmp_size[2], 19, &l_emlrtECI,
                                (emlrtConstCTX)sp);
  }
  if ((varargin_2->size[2] == 19) && (varargin_1_size[2] == 19) &&
      (tmp_size[2] == 19) && (b_tmp_size[2] == 19)) {
    for (it = 0; it <= 16; it += 2) {
      r = _mm_loadu_pd(&LB1_tmp_data[it]);
      r1 = _mm_loadu_pd(&thetaB1_IP[it]);
      r2 = _mm_loadu_pd(&MB1_tmp_data[it]);
      r3 = _mm_loadu_pd(&thetaB1_Oop[it]);
      _mm_storeu_pd(&c_varargin_2[it],
                    _mm_sub_pd(_mm_mul_pd(r, r1), _mm_mul_pd(r2, r3)));
    }
    c_varargin_2[18] =
        LB1_tmp_data[18] * thetaB1_IP[18] - MB1_tmp_data[18] * thetaB1_Oop[18];
    for (it = 0; it <= 16; it += 2) {
      r = _mm_loadu_pd(&tmp_data[it]);
      r1 = _mm_loadu_pd(&thetaB1_IP[it]);
      r2 = _mm_loadu_pd(&b_tmp_data[it]);
      r3 = _mm_loadu_pd(&thetaB1_Oop[it]);
      _mm_storeu_pd(&thetaB1_IP[it],
                    _mm_add_pd(_mm_mul_pd(r, r1), _mm_mul_pd(r2, r3)));
    }
    thetaB1_IP[18] =
        tmp_data[18] * thetaB1_IP[18] + b_tmp_data[18] * thetaB1_Oop[18];
    st.site = &lp_emlrtRSI;
    b_FASTTransMat(&st, c_varargin_2, thetaB1_IP, LB1_tmp, c_varargin_1_data);
  } else {
    st.site = &lp_emlrtRSI;
    binary_expand_op_8(&st, lp_emlrtRSI, varargin_2, thetaB1_IP, MB1_tmp_data,
                       varargin_1_size, thetaB1_Oop, tmp_data, tmp_size,
                       b_tmp_data, b_tmp_size, LB1_tmp, c_varargin_1_data);
  }
  st.site = &lp_emlrtRSI;
  Transform3(&st, c_varargin_1_data, LB1_data, LB1_size, NB1);
  /*  FASTTransMat must return a 3D matrix for vectors thetaB1_x and thetaB1_y
   */
  if ((c_tmp_size[2] == 19) && (d_tmp_size[2] == 19) && (e_tmp_size[2] == 19) &&
      (f_tmp_size[2] == 19)) {
    for (it = 0; it <= 16; it += 2) {
      r = _mm_loadu_pd(&c_tmp_data[it]);
      r1 = _mm_loadu_pd(&thetaB2_IP[it]);
      r2 = _mm_loadu_pd(&d_tmp_data[it]);
      r3 = _mm_loadu_pd(&thetaB2_Oop[it]);
      _mm_storeu_pd(&thetaB1_IP[it],
                    _mm_sub_pd(_mm_mul_pd(r, r1), _mm_mul_pd(r2, r3)));
    }
    thetaB1_IP[18] =
        c_tmp_data[18] * thetaB2_IP[18] - d_tmp_data[18] * thetaB2_Oop[18];
    for (it = 0; it <= 16; it += 2) {
      r = _mm_loadu_pd(&e_tmp_data[it]);
      r1 = _mm_loadu_pd(&thetaB2_IP[it]);
      r2 = _mm_loadu_pd(&f_tmp_data[it]);
      r3 = _mm_loadu_pd(&thetaB2_Oop[it]);
      _mm_storeu_pd(&thetaB2_IP[it],
                    _mm_add_pd(_mm_mul_pd(r, r1), _mm_mul_pd(r2, r3)));
    }
    thetaB2_IP[18] =
        e_tmp_data[18] * thetaB2_IP[18] + f_tmp_data[18] * thetaB2_Oop[18];
    st.site = &mp_emlrtRSI;
    b_FASTTransMat(&st, thetaB1_IP, thetaB2_IP, LB1_tmp, c_varargin_1_data);
  } else {
    st.site = &mp_emlrtRSI;
    binary_expand_op_6(&st, mp_emlrtRSI, c_tmp_data, c_tmp_size, thetaB2_IP,
                       d_tmp_data, d_tmp_size, thetaB2_Oop, e_tmp_data,
                       e_tmp_size, f_tmp_data, f_tmp_size, LB1_tmp,
                       c_varargin_1_data);
  }
  st.site = &mp_emlrtRSI;
  Transform3(&st, c_varargin_1_data, LB2_data, LB2_size, NB2);
  if ((g_tmp_size[2] == 19) && (h_tmp_size[2] == 19) && (i_tmp_size[2] == 19) &&
      (j_tmp_size[2] == 19)) {
    for (it = 0; it <= 16; it += 2) {
      r = _mm_loadu_pd(&g_tmp_data[it]);
      r1 = _mm_loadu_pd(&thetaB3_IP[it]);
      r2 = _mm_loadu_pd(&h_tmp_data[it]);
      r3 = _mm_loadu_pd(&thetaB3_Oop[it]);
      _mm_storeu_pd(&thetaB1_IP[it],
                    _mm_sub_pd(_mm_mul_pd(r, r1), _mm_mul_pd(r2, r3)));
    }
    thetaB1_IP[18] =
        g_tmp_data[18] * thetaB3_IP[18] - h_tmp_data[18] * thetaB3_Oop[18];
    for (it = 0; it <= 16; it += 2) {
      r = _mm_loadu_pd(&i_tmp_data[it]);
      r1 = _mm_loadu_pd(&thetaB3_IP[it]);
      r2 = _mm_loadu_pd(&j_tmp_data[it]);
      r3 = _mm_loadu_pd(&thetaB3_Oop[it]);
      _mm_storeu_pd(&thetaB3_IP[it],
                    _mm_add_pd(_mm_mul_pd(r, r1), _mm_mul_pd(r2, r3)));
    }
    thetaB3_IP[18] =
        i_tmp_data[18] * thetaB3_IP[18] + j_tmp_data[18] * thetaB3_Oop[18];
    st.site = &np_emlrtRSI;
    b_FASTTransMat(&st, thetaB1_IP, thetaB3_IP, LB1_tmp, c_varargin_1_data);
  } else {
    st.site = &np_emlrtRSI;
    binary_expand_op_6(&st, np_emlrtRSI, g_tmp_data, g_tmp_size, thetaB3_IP,
                       h_tmp_data, h_tmp_size, thetaB3_Oop, i_tmp_data,
                       i_tmp_size, j_tmp_data, j_tmp_size, LB1_tmp,
                       c_varargin_1_data);
  }
  emxFree_real_T(sp, &LB1_tmp);
  st.site = &np_emlrtRSI;
  Transform3(&st, c_varargin_1_data, LB3_data, LB3_size, NB3);
  /*  Blade Element Fixed Coordinate System for Returning Aerodynamic Loads */
  varargin_1_size[0] = 1;
  varargin_1_size[1] = 1;
  varargin_1_size[2] = b_loop_ub;
  D_tmp = BlPitch[0];
  b_scalarLB = (b_loop_ub / 2) << 1;
  scalarLB = b_scalarLB - 2;
  for (it = 0; it <= scalarLB; it += 2) {
    _mm_storeu_pd(&MB1_tmp_data[it], _mm_add_pd(_mm_loadu_pd(&Bld->Twist[it]),
                                                _mm_set1_pd(D_tmp)));
  }
  for (it = b_scalarLB; it < b_loop_ub; it++) {
    MB1_tmp_data[it] = Bld->Twist[it] + D_tmp;
  }
  st.site = &op_emlrtRSI;
  scalarLB = varargin_2->size[0] * varargin_2->size[1] * varargin_2->size[2];
  varargin_2->size[0] = 1;
  varargin_2->size[1] = 1;
  varargin_2->size[2] = b_loop_ub;
  emxEnsureCapacity_real_T(&st, varargin_2, scalarLB, &sb_emlrtRTEI);
  LB1_tmp_data = varargin_2->data;
  for (it = 0; it < b_loop_ub; it++) {
    LB1_tmp_data[it] = MB1_tmp_data[it];
  }
  emxReserve_real_T(&st, varargin_2, &sb_emlrtRTEI);
  LB1_tmp_data = varargin_2->data;
  b_st.site = &op_emlrtRSI;
  b_cos((real_T *)varargin_2->data, varargin_2->size);
  scalarLB = varargin_1->size[0] * varargin_1->size[1] * varargin_1->size[2];
  varargin_1->size[0] = 1;
  varargin_1->size[1] = 1;
  c_loop_ub = varargin_2->size[2];
  varargin_1->size[2] = varargin_2->size[2];
  emxEnsureCapacity_real_T(&st, varargin_1, scalarLB, &sb_emlrtRTEI);
  varargin_1_data = varargin_1->data;
  for (it = 0; it < c_loop_ub; it++) {
    varargin_1_data[it] = LB1_tmp_data[it];
  }
  scalarLB = varargin_2->size[0] * varargin_2->size[1] * varargin_2->size[2];
  varargin_2->size[0] = 1;
  varargin_2->size[1] = 1;
  varargin_2->size[2] = b_loop_ub;
  emxEnsureCapacity_real_T(&st, varargin_2, scalarLB, &tb_emlrtRTEI);
  LB1_tmp_data = varargin_2->data;
  for (it = 0; it < b_loop_ub; it++) {
    LB1_tmp_data[it] = MB1_tmp_data[it];
  }
  emxReserve_real_T(&st, varargin_2, &tb_emlrtRTEI);
  LB1_tmp_data = varargin_2->data;
  b_st.site = &op_emlrtRSI;
  b_sin((real_T *)varargin_2->data, varargin_2->size);
  scalarLB =
      b_varargin_2->size[0] * b_varargin_2->size[1] * b_varargin_2->size[2];
  b_varargin_2->size[0] = 1;
  b_varargin_2->size[1] = 1;
  loop_ub = varargin_2->size[2];
  b_varargin_2->size[2] = varargin_2->size[2];
  emxEnsureCapacity_real_T(&st, b_varargin_2, scalarLB, &tb_emlrtRTEI);
  varargin_2_data = b_varargin_2->data;
  for (it = 0; it < loop_ub; it++) {
    varargin_2_data[it] = LB1_tmp_data[it];
  }
  b_st.site = &jr_emlrtRSI;
  c_st.site = &kr_emlrtRSI;
  if (b_varargin_2->size[2] != varargin_1->size[2]) {
    emlrtErrorWithMessageIdR2018a(&c_st, &d_emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  if (b_loop_ub != varargin_1->size[2]) {
    emlrtErrorWithMessageIdR2018a(&c_st, &d_emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  st.site = &pp_emlrtRSI;
  scalarLB = varargin_2->size[0] * varargin_2->size[1] * varargin_2->size[2];
  varargin_2->size[0] = 1;
  varargin_2->size[1] = 1;
  varargin_2->size[2] = b_loop_ub;
  emxEnsureCapacity_real_T(&st, varargin_2, scalarLB, &ub_emlrtRTEI);
  LB1_tmp_data = varargin_2->data;
  for (it = 0; it < b_loop_ub; it++) {
    LB1_tmp_data[it] = MB1_tmp_data[it];
  }
  emxReserve_real_T(&st, varargin_2, &ub_emlrtRTEI);
  LB1_tmp_data = varargin_2->data;
  b_st.site = &pp_emlrtRSI;
  b_sin((real_T *)varargin_2->data, varargin_2->size);
  scalarLB =
      b_varargin_1->size[0] * b_varargin_1->size[1] * b_varargin_1->size[2];
  b_varargin_1->size[0] = 1;
  b_varargin_1->size[1] = 1;
  d_loop_ub = varargin_2->size[2];
  b_varargin_1->size[2] = varargin_2->size[2];
  emxEnsureCapacity_real_T(&st, b_varargin_1, scalarLB, &vb_emlrtRTEI);
  b_varargin_1_data = b_varargin_1->data;
  scalarLB = (varargin_2->size[2] / 2) << 1;
  vectorUB = scalarLB - 2;
  for (it = 0; it <= vectorUB; it += 2) {
    r = _mm_loadu_pd(&LB1_tmp_data[it]);
    _mm_storeu_pd(&b_varargin_1_data[it], _mm_mul_pd(r, _mm_set1_pd(-1.0)));
  }
  for (it = scalarLB; it < d_loop_ub; it++) {
    b_varargin_1_data[it] = -LB1_tmp_data[it];
  }
  b_st.site = &pp_emlrtRSI;
  b_cos(MB1_tmp_data, varargin_1_size);
  scalarLB = varargin_2->size[0] * varargin_2->size[1] * varargin_2->size[2];
  varargin_2->size[0] = 1;
  varargin_2->size[1] = 1;
  vectorUB = varargin_1_size[2];
  varargin_2->size[2] = varargin_1_size[2];
  emxEnsureCapacity_real_T(&st, varargin_2, scalarLB, &wb_emlrtRTEI);
  LB1_tmp_data = varargin_2->data;
  for (it = 0; it < vectorUB; it++) {
    LB1_tmp_data[it] = MB1_tmp_data[it];
  }
  b_st.site = &jr_emlrtRSI;
  c_st.site = &kr_emlrtRSI;
  if (varargin_2->size[2] != b_varargin_1->size[2]) {
    emlrtErrorWithMessageIdR2018a(&c_st, &d_emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  if (b_loop_ub != b_varargin_1->size[2]) {
    emlrtErrorWithMessageIdR2018a(&c_st, &d_emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  st.site = &qp_emlrtRSI;
  b_st.site = &jr_emlrtRSI;
  st.site = &op_emlrtRSI;
  b_st.site = &jr_emlrtRSI;
  c_st.site = &kr_emlrtRSI;
  if (b_varargin_1->size[2] != (int8_T)varargin_1->size[2]) {
    emlrtErrorWithMessageIdR2018a(&c_st, &d_emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  if (result->size[2] != (int8_T)varargin_1->size[2]) {
    emlrtErrorWithMessageIdR2018a(&c_st, &d_emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  varargin_1_size[0] = 3;
  varargin_1_size[1] = 3;
  varargin_1_size[2] = c_loop_ub;
  for (it = 0; it < c_loop_ub; it++) {
    c_varargin_1_data[9 * it] = varargin_1_data[it];
  }
  for (it = 0; it < loop_ub; it++) {
    c_varargin_1_data[9 * it + 3] = varargin_2_data[it];
  }
  for (it = 0; it < b_loop_ub; it++) {
    c_varargin_1_data[9 * it + 6] = 0.0;
  }
  scalarLB = b_varargin_1->size[2];
  for (it = 0; it < scalarLB; it++) {
    c_varargin_1_data[9 * it + 1] = b_varargin_1_data[it];
  }
  for (it = 0; it < vectorUB; it++) {
    c_varargin_1_data[9 * it + 4] = LB1_tmp_data[it];
  }
  for (it = 0; it < b_loop_ub; it++) {
    c_varargin_1_data[9 * it + 7] = 0.0;
  }
  for (it = 0; it < b_loop_ub; it++) {
    c_varargin_1_data[9 * it + 2] = result_data[3 * it];
    c_varargin_1_data[9 * it + 5] = result_data[3 * it + 1];
    c_varargin_1_data[9 * it + 8] = result_data[3 * it + 2];
  }
  st.site = &op_emlrtRSI;
  b_Transform3(&st, c_varargin_1_data, varargin_1_size, NB1, MB1_data,
               MB1_size);
  varargin_1_size[0] = 1;
  varargin_1_size[1] = 1;
  varargin_1_size[2] = b_loop_ub;
  D_tmp = BlPitch[1];
  scalarLB = b_scalarLB - 2;
  for (it = 0; it <= scalarLB; it += 2) {
    _mm_storeu_pd(&MB1_tmp_data[it], _mm_add_pd(_mm_loadu_pd(&Bld->Twist[it]),
                                                _mm_set1_pd(D_tmp)));
  }
  for (it = b_scalarLB; it < b_loop_ub; it++) {
    MB1_tmp_data[it] = Bld->Twist[it] + D_tmp;
  }
  st.site = &rp_emlrtRSI;
  scalarLB = varargin_2->size[0] * varargin_2->size[1] * varargin_2->size[2];
  varargin_2->size[0] = 1;
  varargin_2->size[1] = 1;
  varargin_2->size[2] = b_loop_ub;
  emxEnsureCapacity_real_T(&st, varargin_2, scalarLB, &xb_emlrtRTEI);
  LB1_tmp_data = varargin_2->data;
  for (it = 0; it < b_loop_ub; it++) {
    LB1_tmp_data[it] = MB1_tmp_data[it];
  }
  emxReserve_real_T(&st, varargin_2, &xb_emlrtRTEI);
  LB1_tmp_data = varargin_2->data;
  b_st.site = &rp_emlrtRSI;
  b_cos((real_T *)varargin_2->data, varargin_2->size);
  scalarLB = varargin_1->size[0] * varargin_1->size[1] * varargin_1->size[2];
  varargin_1->size[0] = 1;
  varargin_1->size[1] = 1;
  c_loop_ub = varargin_2->size[2];
  varargin_1->size[2] = varargin_2->size[2];
  emxEnsureCapacity_real_T(&st, varargin_1, scalarLB, &xb_emlrtRTEI);
  varargin_1_data = varargin_1->data;
  for (it = 0; it < c_loop_ub; it++) {
    varargin_1_data[it] = LB1_tmp_data[it];
  }
  scalarLB = varargin_2->size[0] * varargin_2->size[1] * varargin_2->size[2];
  varargin_2->size[0] = 1;
  varargin_2->size[1] = 1;
  varargin_2->size[2] = b_loop_ub;
  emxEnsureCapacity_real_T(&st, varargin_2, scalarLB, &yb_emlrtRTEI);
  LB1_tmp_data = varargin_2->data;
  for (it = 0; it < b_loop_ub; it++) {
    LB1_tmp_data[it] = MB1_tmp_data[it];
  }
  emxReserve_real_T(&st, varargin_2, &yb_emlrtRTEI);
  LB1_tmp_data = varargin_2->data;
  b_st.site = &rp_emlrtRSI;
  b_sin((real_T *)varargin_2->data, varargin_2->size);
  scalarLB =
      b_varargin_2->size[0] * b_varargin_2->size[1] * b_varargin_2->size[2];
  b_varargin_2->size[0] = 1;
  b_varargin_2->size[1] = 1;
  loop_ub = varargin_2->size[2];
  b_varargin_2->size[2] = varargin_2->size[2];
  emxEnsureCapacity_real_T(&st, b_varargin_2, scalarLB, &yb_emlrtRTEI);
  varargin_2_data = b_varargin_2->data;
  for (it = 0; it < loop_ub; it++) {
    varargin_2_data[it] = LB1_tmp_data[it];
  }
  b_st.site = &jr_emlrtRSI;
  c_st.site = &kr_emlrtRSI;
  if (b_varargin_2->size[2] != varargin_1->size[2]) {
    emlrtErrorWithMessageIdR2018a(&c_st, &d_emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  if (b_loop_ub != varargin_1->size[2]) {
    emlrtErrorWithMessageIdR2018a(&c_st, &d_emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  st.site = &sp_emlrtRSI;
  scalarLB = varargin_2->size[0] * varargin_2->size[1] * varargin_2->size[2];
  varargin_2->size[0] = 1;
  varargin_2->size[1] = 1;
  varargin_2->size[2] = b_loop_ub;
  emxEnsureCapacity_real_T(&st, varargin_2, scalarLB, &ac_emlrtRTEI);
  LB1_tmp_data = varargin_2->data;
  for (it = 0; it < b_loop_ub; it++) {
    LB1_tmp_data[it] = MB1_tmp_data[it];
  }
  emxReserve_real_T(&st, varargin_2, &ac_emlrtRTEI);
  LB1_tmp_data = varargin_2->data;
  b_st.site = &sp_emlrtRSI;
  b_sin((real_T *)varargin_2->data, varargin_2->size);
  scalarLB =
      b_varargin_1->size[0] * b_varargin_1->size[1] * b_varargin_1->size[2];
  b_varargin_1->size[0] = 1;
  b_varargin_1->size[1] = 1;
  d_loop_ub = varargin_2->size[2];
  b_varargin_1->size[2] = varargin_2->size[2];
  emxEnsureCapacity_real_T(&st, b_varargin_1, scalarLB, &bc_emlrtRTEI);
  b_varargin_1_data = b_varargin_1->data;
  scalarLB = (varargin_2->size[2] / 2) << 1;
  vectorUB = scalarLB - 2;
  for (it = 0; it <= vectorUB; it += 2) {
    r = _mm_loadu_pd(&LB1_tmp_data[it]);
    _mm_storeu_pd(&b_varargin_1_data[it], _mm_mul_pd(r, _mm_set1_pd(-1.0)));
  }
  for (it = scalarLB; it < d_loop_ub; it++) {
    b_varargin_1_data[it] = -LB1_tmp_data[it];
  }
  b_st.site = &sp_emlrtRSI;
  b_cos(MB1_tmp_data, varargin_1_size);
  scalarLB = varargin_2->size[0] * varargin_2->size[1] * varargin_2->size[2];
  varargin_2->size[0] = 1;
  varargin_2->size[1] = 1;
  vectorUB = varargin_1_size[2];
  varargin_2->size[2] = varargin_1_size[2];
  emxEnsureCapacity_real_T(&st, varargin_2, scalarLB, &cc_emlrtRTEI);
  LB1_tmp_data = varargin_2->data;
  for (it = 0; it < vectorUB; it++) {
    LB1_tmp_data[it] = MB1_tmp_data[it];
  }
  b_st.site = &jr_emlrtRSI;
  c_st.site = &kr_emlrtRSI;
  if (varargin_2->size[2] != b_varargin_1->size[2]) {
    emlrtErrorWithMessageIdR2018a(&c_st, &d_emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  if (b_loop_ub != b_varargin_1->size[2]) {
    emlrtErrorWithMessageIdR2018a(&c_st, &d_emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  st.site = &tp_emlrtRSI;
  b_st.site = &jr_emlrtRSI;
  st.site = &rp_emlrtRSI;
  b_st.site = &jr_emlrtRSI;
  c_st.site = &kr_emlrtRSI;
  if (b_varargin_1->size[2] != (int8_T)varargin_1->size[2]) {
    emlrtErrorWithMessageIdR2018a(&c_st, &d_emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  if (result->size[2] != (int8_T)varargin_1->size[2]) {
    emlrtErrorWithMessageIdR2018a(&c_st, &d_emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  varargin_1_size[0] = 3;
  varargin_1_size[1] = 3;
  varargin_1_size[2] = c_loop_ub;
  for (it = 0; it < c_loop_ub; it++) {
    c_varargin_1_data[9 * it] = varargin_1_data[it];
  }
  for (it = 0; it < loop_ub; it++) {
    c_varargin_1_data[9 * it + 3] = varargin_2_data[it];
  }
  for (it = 0; it < b_loop_ub; it++) {
    c_varargin_1_data[9 * it + 6] = 0.0;
  }
  scalarLB = b_varargin_1->size[2];
  for (it = 0; it < scalarLB; it++) {
    c_varargin_1_data[9 * it + 1] = b_varargin_1_data[it];
  }
  for (it = 0; it < vectorUB; it++) {
    c_varargin_1_data[9 * it + 4] = LB1_tmp_data[it];
  }
  for (it = 0; it < b_loop_ub; it++) {
    c_varargin_1_data[9 * it + 7] = 0.0;
  }
  for (it = 0; it < b_loop_ub; it++) {
    c_varargin_1_data[9 * it + 2] = result_data[3 * it];
    c_varargin_1_data[9 * it + 5] = result_data[3 * it + 1];
    c_varargin_1_data[9 * it + 8] = result_data[3 * it + 2];
  }
  st.site = &rp_emlrtRSI;
  b_Transform3(&st, c_varargin_1_data, varargin_1_size, NB2, MB2_data,
               MB2_size);
  varargin_1_size[0] = 1;
  varargin_1_size[1] = 1;
  varargin_1_size[2] = b_loop_ub;
  D_tmp = BlPitch[2];
  scalarLB = b_scalarLB - 2;
  for (it = 0; it <= scalarLB; it += 2) {
    _mm_storeu_pd(&MB1_tmp_data[it], _mm_add_pd(_mm_loadu_pd(&Bld->Twist[it]),
                                                _mm_set1_pd(D_tmp)));
  }
  for (it = b_scalarLB; it < b_loop_ub; it++) {
    MB1_tmp_data[it] = Bld->Twist[it] + D_tmp;
  }
  st.site = &up_emlrtRSI;
  scalarLB = varargin_2->size[0] * varargin_2->size[1] * varargin_2->size[2];
  varargin_2->size[0] = 1;
  varargin_2->size[1] = 1;
  varargin_2->size[2] = b_loop_ub;
  emxEnsureCapacity_real_T(&st, varargin_2, scalarLB, &dc_emlrtRTEI);
  LB1_tmp_data = varargin_2->data;
  for (it = 0; it < b_loop_ub; it++) {
    LB1_tmp_data[it] = MB1_tmp_data[it];
  }
  emxReserve_real_T(&st, varargin_2, &dc_emlrtRTEI);
  LB1_tmp_data = varargin_2->data;
  b_st.site = &up_emlrtRSI;
  b_cos((real_T *)varargin_2->data, varargin_2->size);
  scalarLB = varargin_1->size[0] * varargin_1->size[1] * varargin_1->size[2];
  varargin_1->size[0] = 1;
  varargin_1->size[1] = 1;
  c_loop_ub = varargin_2->size[2];
  varargin_1->size[2] = varargin_2->size[2];
  emxEnsureCapacity_real_T(&st, varargin_1, scalarLB, &dc_emlrtRTEI);
  varargin_1_data = varargin_1->data;
  for (it = 0; it < c_loop_ub; it++) {
    varargin_1_data[it] = LB1_tmp_data[it];
  }
  scalarLB = varargin_2->size[0] * varargin_2->size[1] * varargin_2->size[2];
  varargin_2->size[0] = 1;
  varargin_2->size[1] = 1;
  varargin_2->size[2] = b_loop_ub;
  emxEnsureCapacity_real_T(&st, varargin_2, scalarLB, &ec_emlrtRTEI);
  LB1_tmp_data = varargin_2->data;
  for (it = 0; it < b_loop_ub; it++) {
    LB1_tmp_data[it] = MB1_tmp_data[it];
  }
  emxReserve_real_T(&st, varargin_2, &ec_emlrtRTEI);
  LB1_tmp_data = varargin_2->data;
  b_st.site = &up_emlrtRSI;
  b_sin((real_T *)varargin_2->data, varargin_2->size);
  scalarLB =
      b_varargin_2->size[0] * b_varargin_2->size[1] * b_varargin_2->size[2];
  b_varargin_2->size[0] = 1;
  b_varargin_2->size[1] = 1;
  loop_ub = varargin_2->size[2];
  b_varargin_2->size[2] = varargin_2->size[2];
  emxEnsureCapacity_real_T(&st, b_varargin_2, scalarLB, &ec_emlrtRTEI);
  varargin_2_data = b_varargin_2->data;
  for (it = 0; it < loop_ub; it++) {
    varargin_2_data[it] = LB1_tmp_data[it];
  }
  b_st.site = &jr_emlrtRSI;
  c_st.site = &kr_emlrtRSI;
  if (b_varargin_2->size[2] != varargin_1->size[2]) {
    emlrtErrorWithMessageIdR2018a(&c_st, &d_emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  if (b_loop_ub != varargin_1->size[2]) {
    emlrtErrorWithMessageIdR2018a(&c_st, &d_emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  st.site = &vp_emlrtRSI;
  scalarLB = varargin_2->size[0] * varargin_2->size[1] * varargin_2->size[2];
  varargin_2->size[0] = 1;
  varargin_2->size[1] = 1;
  varargin_2->size[2] = b_loop_ub;
  emxEnsureCapacity_real_T(&st, varargin_2, scalarLB, &fc_emlrtRTEI);
  LB1_tmp_data = varargin_2->data;
  for (it = 0; it < b_loop_ub; it++) {
    LB1_tmp_data[it] = MB1_tmp_data[it];
  }
  emxReserve_real_T(&st, varargin_2, &fc_emlrtRTEI);
  LB1_tmp_data = varargin_2->data;
  b_st.site = &vp_emlrtRSI;
  b_sin((real_T *)varargin_2->data, varargin_2->size);
  scalarLB =
      b_varargin_1->size[0] * b_varargin_1->size[1] * b_varargin_1->size[2];
  b_varargin_1->size[0] = 1;
  b_varargin_1->size[1] = 1;
  d_loop_ub = varargin_2->size[2];
  b_varargin_1->size[2] = varargin_2->size[2];
  emxEnsureCapacity_real_T(&st, b_varargin_1, scalarLB, &gc_emlrtRTEI);
  b_varargin_1_data = b_varargin_1->data;
  scalarLB = (varargin_2->size[2] / 2) << 1;
  vectorUB = scalarLB - 2;
  for (it = 0; it <= vectorUB; it += 2) {
    r = _mm_loadu_pd(&LB1_tmp_data[it]);
    _mm_storeu_pd(&b_varargin_1_data[it], _mm_mul_pd(r, _mm_set1_pd(-1.0)));
  }
  for (it = scalarLB; it < d_loop_ub; it++) {
    b_varargin_1_data[it] = -LB1_tmp_data[it];
  }
  b_st.site = &vp_emlrtRSI;
  b_cos(MB1_tmp_data, varargin_1_size);
  scalarLB = varargin_2->size[0] * varargin_2->size[1] * varargin_2->size[2];
  varargin_2->size[0] = 1;
  varargin_2->size[1] = 1;
  vectorUB = varargin_1_size[2];
  varargin_2->size[2] = varargin_1_size[2];
  emxEnsureCapacity_real_T(&st, varargin_2, scalarLB, &hc_emlrtRTEI);
  LB1_tmp_data = varargin_2->data;
  for (it = 0; it < vectorUB; it++) {
    LB1_tmp_data[it] = MB1_tmp_data[it];
  }
  b_st.site = &jr_emlrtRSI;
  c_st.site = &kr_emlrtRSI;
  if (varargin_2->size[2] != b_varargin_1->size[2]) {
    emlrtErrorWithMessageIdR2018a(&c_st, &d_emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  if (b_loop_ub != b_varargin_1->size[2]) {
    emlrtErrorWithMessageIdR2018a(&c_st, &d_emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  st.site = &wp_emlrtRSI;
  b_st.site = &jr_emlrtRSI;
  st.site = &up_emlrtRSI;
  b_st.site = &jr_emlrtRSI;
  c_st.site = &kr_emlrtRSI;
  if (b_varargin_1->size[2] != (int8_T)varargin_1->size[2]) {
    emlrtErrorWithMessageIdR2018a(&c_st, &d_emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  if (result->size[2] != (int8_T)varargin_1->size[2]) {
    emlrtErrorWithMessageIdR2018a(&c_st, &d_emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  varargin_1_size[0] = 3;
  varargin_1_size[1] = 3;
  varargin_1_size[2] = c_loop_ub;
  for (it = 0; it < c_loop_ub; it++) {
    c_varargin_1_data[9 * it] = varargin_1_data[it];
  }
  emxFree_real_T(sp, &varargin_1);
  for (it = 0; it < loop_ub; it++) {
    c_varargin_1_data[9 * it + 3] = varargin_2_data[it];
  }
  emxFree_real_T(sp, &b_varargin_2);
  for (it = 0; it < b_loop_ub; it++) {
    c_varargin_1_data[9 * it + 6] = 0.0;
  }
  scalarLB = b_varargin_1->size[2];
  for (it = 0; it < scalarLB; it++) {
    c_varargin_1_data[9 * it + 1] = b_varargin_1_data[it];
  }
  emxFree_real_T(sp, &b_varargin_1);
  for (it = 0; it < vectorUB; it++) {
    c_varargin_1_data[9 * it + 4] = LB1_tmp_data[it];
  }
  emxFree_real_T(sp, &varargin_2);
  for (it = 0; it < b_loop_ub; it++) {
    c_varargin_1_data[9 * it + 7] = 0.0;
  }
  for (it = 0; it < b_loop_ub; it++) {
    c_varargin_1_data[9 * it + 2] = result_data[3 * it];
    c_varargin_1_data[9 * it + 5] = result_data[3 * it + 1];
    c_varargin_1_data[9 * it + 8] = result_data[3 * it + 2];
  }
  st.site = &up_emlrtRSI;
  b_Transform3(&st, c_varargin_1_data, varargin_1_size, NB3, MB3_data,
               MB3_size);
  /*  ================== OC4 浮筒柔性坐标系统与位置向量 ================== */
  /*  注意：此代码段需确保 Coordinate_systems 函数的输入参数中加入了 Platform
   * 结构体 */
  /*  也就是：function [Z, A, ..., TP1, TP2, TP3, rP1, rP2, rP3, rP1_tip,
   * rP2_tip, rP3_tip] = Coordinate_systems(q_Nom, BlPitch, ElastoDyn, Twr, Bld,
   * Platform) */
  /*  1. 定义三根浮筒的无变形基准坐标系 (随平台 A 运动，安装角分别为 0, 120, 240
   * 度) */
  /*  构建新的旋转矩阵： */
  /*  BP(1,:) 在 A(1) 和 A(3) 构成的水平面内径向向外 */
  /*  BP(2,:) 在 A(1) 和 A(3) 构成的水平面内横向切向 */
  /*  BP(3,:) 强制对齐 A(2,:) 垂直向上 */
  D_tmp = muDoubleScalarSin(Platform->Angles[0]);
  b_D_tmp = muDoubleScalarCos(Platform->Angles[0]);
  c_D_tmp[0] = b_D_tmp;
  c_D_tmp[3] = 0.0;
  c_D_tmp[6] = D_tmp;
  c_D_tmp[1] = D_tmp;
  c_D_tmp[4] = 0.0;
  c_D_tmp[7] = -b_D_tmp;
  c_D_tmp[2] = 0.0;
  c_D_tmp[5] = 1.0;
  c_D_tmp[8] = 0.0;
  Transform1(c_D_tmp, A, BP1);
  D_tmp = muDoubleScalarSin(Platform->Angles[1]);
  b_D_tmp = muDoubleScalarCos(Platform->Angles[1]);
  c_D_tmp[0] = b_D_tmp;
  c_D_tmp[3] = 0.0;
  c_D_tmp[6] = D_tmp;
  c_D_tmp[1] = D_tmp;
  c_D_tmp[4] = 0.0;
  c_D_tmp[7] = -b_D_tmp;
  c_D_tmp[2] = 0.0;
  c_D_tmp[5] = 1.0;
  c_D_tmp[8] = 0.0;
  Transform1(c_D_tmp, A, BP2);
  D_tmp = muDoubleScalarSin(Platform->Angles[2]);
  b_D_tmp = muDoubleScalarCos(Platform->Angles[2]);
  c_D_tmp[0] = b_D_tmp;
  c_D_tmp[3] = 0.0;
  c_D_tmp[6] = D_tmp;
  c_D_tmp[1] = D_tmp;
  c_D_tmp[4] = 0.0;
  c_D_tmp[7] = -b_D_tmp;
  c_D_tmp[2] = 0.0;
  c_D_tmp[5] = 1.0;
  c_D_tmp[8] = 0.0;
  Transform1(c_D_tmp, A, BP3);
  /*  假设浮筒从吃水深度处水平向外延伸 (局部坐标根部位置) */
  rP3_tip[0] = -Platform->MainCol.Draft * A[1];
  rP3_tip[1] = -Platform->MainCol.Draft * A[4];
  rP3_tip[2] = -Platform->MainCol.Draft * A[7];
  /*  相对于平台参考点 rZ 的局部向量 */
  /*  2. 三根浮筒各节点的位置向量 (3D 张量形式，用于后续分布水动力和质量积分) */
  /*  -- 梁 1 -- */
  /*  局部 X 向：包含悬臂梁弯曲引起的轴向缩短效应 (Foreshortening) */
  st.site = &xp_emlrtRSI;
  b_st.site = &dr_emlrtRSI;
  computeDimsData(&b_st, Platform->nt);
  if ((int32_T)Platform->nt > 15) {
    emlrtErrorWithMessageIdR2018a(&st, &emlrtRTEI,
                                  "Coder:toolbox:reshape_emptyReshapeLimit",
                                  "Coder:toolbox:reshape_emptyReshapeLimit", 0);
  }
  if ((int32_T)Platform->nt < 0) {
    emlrtErrorWithMessageIdR2018a(&st, &b_emlrtRTEI,
                                  "MATLAB:checkDimCommon:nonnegativeSize",
                                  "MATLAB:checkDimCommon:nonnegativeSize", 0);
  }
  if ((int32_T)Platform->nt != 15) {
    emlrtErrorWithMessageIdR2018a(
        &st, &c_emlrtRTEI, "Coder:MATLAB:getReshapeDims_notSameNumel",
        "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
  }
  d_loop_ub = (int32_T)Platform->nt;
  if (((int32_T)Platform->nt != 15) && ((int32_T)Platform->nt != 1)) {
    emlrtDimSizeImpxCheckR2021b((int32_T)Platform->nt, 15, &m_emlrtECI,
                                (emlrtConstCTX)sp);
  }
  r = _mm_set1_pd(2.0);
  for (it = 0; it <= 12; it += 2) {
    _mm_storeu_pd(&rP3_X[it],
                  _mm_mul_pd(r, _mm_loadu_pd(&Platform->s12_V[it])));
    _mm_storeu_pd(&rP1_X_tmp[it],
                  _mm_mul_pd(r, _mm_loadu_pd(&Platform->s12_H[it])));
  }
  rP3_X[14] = 2.0 * Platform->s12_V[14];
  rP1_X_tmp[14] = 2.0 * Platform->s12_H[14];
  st.site = &yp_emlrtRSI;
  b_st.site = &qo_emlrtRSI;
  b = q_Nom[24] * q_Nom[24];
  st.site = &yp_emlrtRSI;
  b_st.site = &qo_emlrtRSI;
  b_b = q_Nom[25] * q_Nom[25];
  st.site = &aq_emlrtRSI;
  b_st.site = &qo_emlrtRSI;
  c_b = q_Nom[22] * q_Nom[22];
  st.site = &aq_emlrtRSI;
  b_st.site = &qo_emlrtRSI;
  d_b = q_Nom[23] * q_Nom[23];
  if ((int32_T)Platform->nt == 15) {
    D_tmp = q_Nom[24];
    b_D_tmp = q_Nom[25];
    J1_tmp = q_Nom[22];
    b_J1_tmp = q_Nom[23];
    scalarLB = ((int32_T)Platform->nt / 2) << 1;
    vectorUB = scalarLB - 2;
    for (it = 0; it <= vectorUB; it += 2) {
      r = _mm_loadu_pd(&rP3_X[it]);
      r1 = _mm_loadu_pd(&rP1_X_tmp[it]);
      _mm_storeu_pd(
          &rP1_X[it],
          _mm_sub_pd(
              _mm_loadu_pd(&Platform->BeamSec[it]),
              _mm_mul_pd(
                  _mm_set1_pd(0.5),
                  _mm_add_pd(
                      _mm_add_pd(
                          _mm_add_pd(
                              _mm_add_pd(
                                  _mm_add_pd(
                                      _mm_mul_pd(
                                          _mm_loadu_pd(&Platform->s11_V[it]),
                                          _mm_set1_pd(b)),
                                      _mm_mul_pd(
                                          _mm_loadu_pd(&Platform->s22_V[it]),
                                          _mm_set1_pd(b_b))),
                                  _mm_mul_pd(_mm_mul_pd(r, _mm_set1_pd(D_tmp)),
                                             _mm_set1_pd(b_D_tmp))),
                              _mm_mul_pd(_mm_loadu_pd(&Platform->s11_H[it]),
                                         _mm_set1_pd(c_b))),
                          _mm_mul_pd(_mm_loadu_pd(&Platform->s22_H[it]),
                                     _mm_set1_pd(d_b))),
                      _mm_mul_pd(_mm_mul_pd(r1, _mm_set1_pd(J1_tmp)),
                                 _mm_set1_pd(b_J1_tmp))))));
    }
    for (it = scalarLB; it < d_loop_ub; it++) {
      rP1_X[it] =
          Platform->BeamSec[it] -
          0.5 * (((((Platform->s11_V[it] * b + Platform->s22_V[it] * b_b) +
                    rP3_X[it] * D_tmp * b_D_tmp) +
                   Platform->s11_H[it] * c_b) +
                  Platform->s22_H[it] * d_b) +
                 rP1_X_tmp[it] * J1_tmp * b_J1_tmp);
    }
  } else {
    binary_expand_op_5(rP1_X, Platform, b, b_b, rP3_X, q_Nom, c_b, d_b,
                       rP1_X_tmp);
  }
  /*  局部 Y 向和 Z 向：直接由模态乘以广义坐标得到 */
  D_tmp = q_Nom[22];
  b_D_tmp = q_Nom[23];
  J1_tmp = q_Nom[24];
  b_J1_tmp = q_Nom[25];
  for (it = 0; it <= 12; it += 2) {
    _mm_storeu_pd(&rP1_Y[it],
                  _mm_add_pd(_mm_mul_pd(_mm_loadu_pd(&Platform->O1_H[it]),
                                        _mm_set1_pd(D_tmp)),
                             _mm_mul_pd(_mm_loadu_pd(&Platform->O2_H[it]),
                                        _mm_set1_pd(b_D_tmp))));
    _mm_storeu_pd(&rP1_Z[it],
                  _mm_add_pd(_mm_mul_pd(_mm_loadu_pd(&Platform->O1_V[it]),
                                        _mm_set1_pd(J1_tmp)),
                             _mm_mul_pd(_mm_loadu_pd(&Platform->O2_V[it]),
                                        _mm_set1_pd(b_J1_tmp))));
  }
  rP1_Y_tmp = Platform->O1_H[14] * q_Nom[22] + Platform->O2_H[14] * q_Nom[23];
  rP1_Y[14] = rP1_Y_tmp;
  rP1_Z_tmp = Platform->O1_V[14] * q_Nom[24] + Platform->O2_V[14] * q_Nom[25];
  rP1_Z[14] = rP1_Z_tmp;
  /*  组合成全局坐标系下的绝对位置 (repmat 拓展维度以匹配) */
  st.site = &bq_emlrtRSI;
  repmat(&st, rP3_tip, Platform->nt, result);
  result_data = result->data;
  if ((result->size[2] != 15) && (result->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(result->size[2], 15, &n_emlrtECI,
                                (emlrtConstCTX)sp);
  }
  D_tmp = BP1[0];
  b_D_tmp = BP1[1];
  J1_tmp = BP1[2];
  b_J1_tmp = BP1[3];
  I2_tmp = BP1[4];
  b_I2_tmp = BP1[5];
  I3_tmp = BP1[6];
  b_I3_tmp = BP1[7];
  d = BP1[8];
  for (it = 0; it < 15; it++) {
    d1 = rP1_X[it];
    rP1[3 * it] = d1 * D_tmp;
    d2 = rP1_Y[it];
    out[3 * it] = d2 * b_D_tmp;
    d3 = rP1_Z[it];
    b_out[3 * it] = d3 * J1_tmp;
    scalarLB = 3 * it + 1;
    rP1[scalarLB] = d1 * b_J1_tmp;
    out[scalarLB] = d2 * I2_tmp;
    b_out[scalarLB] = d3 * b_I2_tmp;
    scalarLB = 3 * it + 2;
    rP1[scalarLB] = d1 * I3_tmp;
    out[scalarLB] = d2 * b_I3_tmp;
    b_out[scalarLB] = d3 * d;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  if (result->size[2] == 15) {
    for (it = 0; it <= 42; it += 2) {
      r = _mm_loadu_pd(&result_data[it]);
      r1 = _mm_loadu_pd(&rP1[it]);
      r2 = _mm_loadu_pd(&out[it]);
      r3 = _mm_loadu_pd(&b_out[it]);
      _mm_storeu_pd(&rP1[it],
                    _mm_add_pd(_mm_add_pd(_mm_add_pd(r, r1), r2), r3));
    }
    rP1[44] = ((result_data[44] + rP1[44]) + out[44]) + b_out[44];
  } else {
    binary_expand_op(rP1, result, out, b_out);
  }
  /*  -- 梁 2 -- */
  st.site = &cq_emlrtRSI;
  b_st.site = &dr_emlrtRSI;
  computeDimsData(&b_st, Platform->nt);
  if ((int32_T)Platform->nt > 15) {
    emlrtErrorWithMessageIdR2018a(&st, &emlrtRTEI,
                                  "Coder:toolbox:reshape_emptyReshapeLimit",
                                  "Coder:toolbox:reshape_emptyReshapeLimit", 0);
  }
  if ((int32_T)Platform->nt < 0) {
    emlrtErrorWithMessageIdR2018a(&st, &b_emlrtRTEI,
                                  "MATLAB:checkDimCommon:nonnegativeSize",
                                  "MATLAB:checkDimCommon:nonnegativeSize", 0);
  }
  if ((int32_T)Platform->nt != 15) {
    emlrtErrorWithMessageIdR2018a(
        &st, &c_emlrtRTEI, "Coder:MATLAB:getReshapeDims_notSameNumel",
        "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
  }
  st.site = &dq_emlrtRSI;
  b_st.site = &qo_emlrtRSI;
  e_b = q_Nom[28] * q_Nom[28];
  st.site = &dq_emlrtRSI;
  b_st.site = &qo_emlrtRSI;
  f_b = q_Nom[29] * q_Nom[29];
  st.site = &eq_emlrtRSI;
  b_st.site = &qo_emlrtRSI;
  g_b = q_Nom[26] * q_Nom[26];
  st.site = &eq_emlrtRSI;
  b_st.site = &qo_emlrtRSI;
  h_b = q_Nom[27] * q_Nom[27];
  if ((int32_T)Platform->nt == 15) {
    D_tmp = q_Nom[28];
    b_D_tmp = q_Nom[29];
    J1_tmp = q_Nom[26];
    b_J1_tmp = q_Nom[27];
    scalarLB = ((int32_T)Platform->nt / 2) << 1;
    vectorUB = scalarLB - 2;
    for (it = 0; it <= vectorUB; it += 2) {
      r = _mm_loadu_pd(&rP3_X[it]);
      r1 = _mm_loadu_pd(&rP1_X_tmp[it]);
      _mm_storeu_pd(
          &rP1_X[it],
          _mm_sub_pd(
              _mm_loadu_pd(&Platform->BeamSec[it]),
              _mm_mul_pd(
                  _mm_set1_pd(0.5),
                  _mm_add_pd(
                      _mm_add_pd(
                          _mm_add_pd(
                              _mm_add_pd(
                                  _mm_add_pd(
                                      _mm_mul_pd(
                                          _mm_loadu_pd(&Platform->s11_V[it]),
                                          _mm_set1_pd(e_b)),
                                      _mm_mul_pd(
                                          _mm_loadu_pd(&Platform->s22_V[it]),
                                          _mm_set1_pd(f_b))),
                                  _mm_mul_pd(_mm_mul_pd(r, _mm_set1_pd(D_tmp)),
                                             _mm_set1_pd(b_D_tmp))),
                              _mm_mul_pd(_mm_loadu_pd(&Platform->s11_H[it]),
                                         _mm_set1_pd(g_b))),
                          _mm_mul_pd(_mm_loadu_pd(&Platform->s22_H[it]),
                                     _mm_set1_pd(h_b))),
                      _mm_mul_pd(_mm_mul_pd(r1, _mm_set1_pd(J1_tmp)),
                                 _mm_set1_pd(b_J1_tmp))))));
    }
    for (it = scalarLB; it < d_loop_ub; it++) {
      rP1_X[it] =
          Platform->BeamSec[it] -
          0.5 * (((((Platform->s11_V[it] * e_b + Platform->s22_V[it] * f_b) +
                    rP3_X[it] * D_tmp * b_D_tmp) +
                   Platform->s11_H[it] * g_b) +
                  Platform->s22_H[it] * h_b) +
                 rP1_X_tmp[it] * J1_tmp * b_J1_tmp);
    }
  } else {
    binary_expand_op_3(rP1_X, Platform, e_b, f_b, rP3_X, q_Nom, g_b, h_b,
                       rP1_X_tmp);
  }
  D_tmp = q_Nom[26];
  b_D_tmp = q_Nom[27];
  J1_tmp = q_Nom[28];
  b_J1_tmp = q_Nom[29];
  for (it = 0; it <= 12; it += 2) {
    _mm_storeu_pd(&rP1_Y[it],
                  _mm_add_pd(_mm_mul_pd(_mm_loadu_pd(&Platform->O1_H[it]),
                                        _mm_set1_pd(D_tmp)),
                             _mm_mul_pd(_mm_loadu_pd(&Platform->O2_H[it]),
                                        _mm_set1_pd(b_D_tmp))));
    _mm_storeu_pd(&rP1_Z[it],
                  _mm_add_pd(_mm_mul_pd(_mm_loadu_pd(&Platform->O1_V[it]),
                                        _mm_set1_pd(J1_tmp)),
                             _mm_mul_pd(_mm_loadu_pd(&Platform->O2_V[it]),
                                        _mm_set1_pd(b_J1_tmp))));
  }
  b_rP1_Y_tmp = Platform->O1_H[14] * q_Nom[26] + Platform->O2_H[14] * q_Nom[27];
  rP1_Y[14] = b_rP1_Y_tmp;
  b_rP1_Z_tmp = Platform->O1_V[14] * q_Nom[28] + Platform->O2_V[14] * q_Nom[29];
  rP1_Z[14] = b_rP1_Z_tmp;
  st.site = &fq_emlrtRSI;
  repmat(&st, rP3_tip, Platform->nt, result);
  result_data = result->data;
  if ((result->size[2] != 15) && (result->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(result->size[2], 15, &o_emlrtECI,
                                (emlrtConstCTX)sp);
  }
  D_tmp = BP2[0];
  b_D_tmp = BP2[1];
  J1_tmp = BP2[2];
  b_J1_tmp = BP2[3];
  I2_tmp = BP2[4];
  b_I2_tmp = BP2[5];
  I3_tmp = BP2[6];
  b_I3_tmp = BP2[7];
  d = BP2[8];
  for (it = 0; it < 15; it++) {
    d1 = rP1_X[it];
    rP2[3 * it] = d1 * D_tmp;
    d2 = rP1_Y[it];
    out[3 * it] = d2 * b_D_tmp;
    d3 = rP1_Z[it];
    b_out[3 * it] = d3 * J1_tmp;
    scalarLB = 3 * it + 1;
    rP2[scalarLB] = d1 * b_J1_tmp;
    out[scalarLB] = d2 * I2_tmp;
    b_out[scalarLB] = d3 * b_I2_tmp;
    scalarLB = 3 * it + 2;
    rP2[scalarLB] = d1 * I3_tmp;
    out[scalarLB] = d2 * b_I3_tmp;
    b_out[scalarLB] = d3 * d;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  if (result->size[2] == 15) {
    for (it = 0; it <= 42; it += 2) {
      r = _mm_loadu_pd(&result_data[it]);
      r1 = _mm_loadu_pd(&rP2[it]);
      r2 = _mm_loadu_pd(&out[it]);
      r3 = _mm_loadu_pd(&b_out[it]);
      _mm_storeu_pd(&rP2[it],
                    _mm_add_pd(_mm_add_pd(_mm_add_pd(r, r1), r2), r3));
    }
    rP2[44] = ((result_data[44] + rP2[44]) + out[44]) + b_out[44];
  } else {
    binary_expand_op(rP2, result, out, b_out);
  }
  /*  -- 梁 3 -- */
  st.site = &gq_emlrtRSI;
  b_st.site = &dr_emlrtRSI;
  computeDimsData(&b_st, Platform->nt);
  if ((int32_T)Platform->nt > 15) {
    emlrtErrorWithMessageIdR2018a(&st, &emlrtRTEI,
                                  "Coder:toolbox:reshape_emptyReshapeLimit",
                                  "Coder:toolbox:reshape_emptyReshapeLimit", 0);
  }
  if ((int32_T)Platform->nt < 0) {
    emlrtErrorWithMessageIdR2018a(&st, &b_emlrtRTEI,
                                  "MATLAB:checkDimCommon:nonnegativeSize",
                                  "MATLAB:checkDimCommon:nonnegativeSize", 0);
  }
  if ((int32_T)Platform->nt != 15) {
    emlrtErrorWithMessageIdR2018a(
        &st, &c_emlrtRTEI, "Coder:MATLAB:getReshapeDims_notSameNumel",
        "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
  }
  st.site = &hq_emlrtRSI;
  b_st.site = &qo_emlrtRSI;
  i_b = q_Nom[32] * q_Nom[32];
  st.site = &hq_emlrtRSI;
  b_st.site = &qo_emlrtRSI;
  j_b = q_Nom[33] * q_Nom[33];
  st.site = &iq_emlrtRSI;
  b_st.site = &qo_emlrtRSI;
  k_b = q_Nom[30] * q_Nom[30];
  st.site = &iq_emlrtRSI;
  b_st.site = &qo_emlrtRSI;
  l_b = q_Nom[31] * q_Nom[31];
  if ((int32_T)Platform->nt == 15) {
    D_tmp = q_Nom[32];
    b_D_tmp = q_Nom[33];
    J1_tmp = q_Nom[30];
    b_J1_tmp = q_Nom[31];
    scalarLB = (int32_T)Platform->nt - 1;
    vectorUB = ((int32_T)Platform->nt / 2) << 1;
    d_loop_ub = vectorUB - 2;
    for (it = 0; it <= d_loop_ub; it += 2) {
      r = _mm_loadu_pd(&rP3_X[it]);
      r1 = _mm_loadu_pd(&rP1_X_tmp[it]);
      _mm_storeu_pd(
          &rP3_X[it],
          _mm_sub_pd(
              _mm_loadu_pd(&Platform->BeamSec[it]),
              _mm_mul_pd(
                  _mm_set1_pd(0.5),
                  _mm_add_pd(
                      _mm_add_pd(
                          _mm_add_pd(
                              _mm_add_pd(
                                  _mm_add_pd(
                                      _mm_mul_pd(
                                          _mm_loadu_pd(&Platform->s11_V[it]),
                                          _mm_set1_pd(i_b)),
                                      _mm_mul_pd(
                                          _mm_loadu_pd(&Platform->s22_V[it]),
                                          _mm_set1_pd(j_b))),
                                  _mm_mul_pd(_mm_mul_pd(r, _mm_set1_pd(D_tmp)),
                                             _mm_set1_pd(b_D_tmp))),
                              _mm_mul_pd(_mm_loadu_pd(&Platform->s11_H[it]),
                                         _mm_set1_pd(k_b))),
                          _mm_mul_pd(_mm_loadu_pd(&Platform->s22_H[it]),
                                     _mm_set1_pd(l_b))),
                      _mm_mul_pd(_mm_mul_pd(r1, _mm_set1_pd(J1_tmp)),
                                 _mm_set1_pd(b_J1_tmp))))));
    }
    for (it = vectorUB; it <= scalarLB; it++) {
      rP3_X[it] =
          Platform->BeamSec[it] -
          0.5 * (((((Platform->s11_V[it] * i_b + Platform->s22_V[it] * j_b) +
                    rP3_X[it] * D_tmp * b_D_tmp) +
                   Platform->s11_H[it] * k_b) +
                  Platform->s22_H[it] * l_b) +
                 rP1_X_tmp[it] * J1_tmp * b_J1_tmp);
    }
  } else {
    binary_expand_op_1(rP3_X, Platform, i_b, j_b, q_Nom, k_b, l_b, rP1_X_tmp);
  }
  D_tmp = q_Nom[30];
  b_D_tmp = q_Nom[31];
  J1_tmp = q_Nom[32];
  b_J1_tmp = q_Nom[33];
  for (it = 0; it <= 12; it += 2) {
    _mm_storeu_pd(&rP1_X[it],
                  _mm_add_pd(_mm_mul_pd(_mm_loadu_pd(&Platform->O1_H[it]),
                                        _mm_set1_pd(D_tmp)),
                             _mm_mul_pd(_mm_loadu_pd(&Platform->O2_H[it]),
                                        _mm_set1_pd(b_D_tmp))));
    _mm_storeu_pd(&rP1_Y[it],
                  _mm_add_pd(_mm_mul_pd(_mm_loadu_pd(&Platform->O1_V[it]),
                                        _mm_set1_pd(J1_tmp)),
                             _mm_mul_pd(_mm_loadu_pd(&Platform->O2_V[it]),
                                        _mm_set1_pd(b_J1_tmp))));
  }
  b_rP1_X_tmp = Platform->O1_H[14] * q_Nom[30] + Platform->O2_H[14] * q_Nom[31];
  rP1_X[14] = b_rP1_X_tmp;
  c_rP1_Y_tmp = Platform->O1_V[14] * q_Nom[32] + Platform->O2_V[14] * q_Nom[33];
  rP1_Y[14] = c_rP1_Y_tmp;
  st.site = &jq_emlrtRSI;
  repmat(&st, rP3_tip, Platform->nt, result);
  result_data = result->data;
  if ((result->size[2] != 15) && (result->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(result->size[2], 15, &p_emlrtECI,
                                (emlrtConstCTX)sp);
  }
  D_tmp = BP3[0];
  b_D_tmp = BP3[1];
  J1_tmp = BP3[2];
  b_J1_tmp = BP3[3];
  I2_tmp = BP3[4];
  b_I2_tmp = BP3[5];
  I3_tmp = BP3[6];
  b_I3_tmp = BP3[7];
  d = BP3[8];
  for (it = 0; it < 15; it++) {
    d1 = rP3_X[it];
    rP3[3 * it] = d1 * D_tmp;
    d2 = rP1_X[it];
    out[3 * it] = d2 * b_D_tmp;
    d3 = rP1_Y[it];
    b_out[3 * it] = d3 * J1_tmp;
    scalarLB = 3 * it + 1;
    rP3[scalarLB] = d1 * b_J1_tmp;
    out[scalarLB] = d2 * I2_tmp;
    b_out[scalarLB] = d3 * b_I2_tmp;
    scalarLB = 3 * it + 2;
    rP3[scalarLB] = d1 * I3_tmp;
    out[scalarLB] = d2 * b_I3_tmp;
    b_out[scalarLB] = d3 * d;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  if (result->size[2] == 15) {
    for (it = 0; it <= 42; it += 2) {
      r = _mm_loadu_pd(&result_data[it]);
      r1 = _mm_loadu_pd(&rP3[it]);
      r2 = _mm_loadu_pd(&out[it]);
      r3 = _mm_loadu_pd(&b_out[it]);
      _mm_storeu_pd(&rP3[it],
                    _mm_add_pd(_mm_add_pd(_mm_add_pd(r, r1), r2), r3));
    }
    rP3[44] = ((result_data[44] + rP3[44]) + out[44]) + b_out[44];
  } else {
    binary_expand_op(rP3, result, out, b_out);
  }
  emxFree_real_T(sp, &result);
  /*  3. 端部偏置立柱 (集中质量) 的位置向量 (直接提取端点数据) */
  st.site = &kq_emlrtRSI;
  b_st.site = &qo_emlrtRSI;
  st.site = &kq_emlrtRSI;
  b_st.site = &qo_emlrtRSI;
  st.site = &lq_emlrtRSI;
  b_st.site = &qo_emlrtRSI;
  st.site = &lq_emlrtRSI;
  b_st.site = &qo_emlrtRSI;
  b_D_tmp = 2.0 * Platform->S12_V;
  J1_tmp = 2.0 * Platform->S12_H;
  D_tmp = Platform->BeamLen -
          0.5 * (((((Platform->S11_V * b + Platform->S22_V * b_b) +
                    b_D_tmp * q_Nom[24] * q_Nom[25]) +
                   Platform->S11_H * c_b) +
                  Platform->S22_H * d_b) +
                 J1_tmp * q_Nom[22] * q_Nom[23]);
  rP1_tip[0] =
      ((rP3_tip[0] + D_tmp * BP1[0]) + rP1_Y_tmp * BP1[1]) + rP1_Z_tmp * BP1[2];
  rP1_tip[1] =
      ((rP3_tip[1] + D_tmp * BP1[3]) + rP1_Y_tmp * BP1[4]) + rP1_Z_tmp * BP1[5];
  rP1_tip[2] =
      ((rP3_tip[2] + D_tmp * BP1[6]) + rP1_Y_tmp * BP1[7]) + rP1_Z_tmp * BP1[8];
  st.site = &mq_emlrtRSI;
  b_st.site = &qo_emlrtRSI;
  st.site = &mq_emlrtRSI;
  b_st.site = &qo_emlrtRSI;
  st.site = &nq_emlrtRSI;
  b_st.site = &qo_emlrtRSI;
  st.site = &nq_emlrtRSI;
  b_st.site = &qo_emlrtRSI;
  D_tmp = Platform->BeamLen -
          0.5 * (((((Platform->S11_V * e_b + Platform->S22_V * f_b) +
                    b_D_tmp * q_Nom[28] * q_Nom[29]) +
                   Platform->S11_H * g_b) +
                  Platform->S22_H * h_b) +
                 J1_tmp * q_Nom[26] * q_Nom[27]);
  rP2_tip[0] = ((rP3_tip[0] + D_tmp * BP2[0]) + b_rP1_Y_tmp * BP2[1]) +
               b_rP1_Z_tmp * BP2[2];
  rP2_tip[1] = ((rP3_tip[1] + D_tmp * BP2[3]) + b_rP1_Y_tmp * BP2[4]) +
               b_rP1_Z_tmp * BP2[5];
  rP2_tip[2] = ((rP3_tip[2] + D_tmp * BP2[6]) + b_rP1_Y_tmp * BP2[7]) +
               b_rP1_Z_tmp * BP2[8];
  st.site = &oq_emlrtRSI;
  b_st.site = &qo_emlrtRSI;
  st.site = &oq_emlrtRSI;
  b_st.site = &qo_emlrtRSI;
  st.site = &pq_emlrtRSI;
  b_st.site = &qo_emlrtRSI;
  st.site = &pq_emlrtRSI;
  b_st.site = &qo_emlrtRSI;
  D_tmp = Platform->BeamLen -
          0.5 * (((((Platform->S11_V * i_b + Platform->S22_V * j_b) +
                    b_D_tmp * q_Nom[32] * q_Nom[33]) +
                   Platform->S11_H * k_b) +
                  Platform->S22_H * l_b) +
                 J1_tmp * q_Nom[30] * q_Nom[31]);
  rP3_tip[0] = ((rP3_tip[0] + D_tmp * BP3[0]) + b_rP1_X_tmp * BP3[1]) +
               c_rP1_Y_tmp * BP3[2];
  rP3_tip[1] = ((rP3_tip[1] + D_tmp * BP3[3]) + b_rP1_X_tmp * BP3[4]) +
               c_rP1_Y_tmp * BP3[5];
  rP3_tip[2] = ((rP3_tip[2] + D_tmp * BP3[6]) + b_rP1_X_tmp * BP3[7]) +
               c_rP1_Y_tmp * BP3[8];
  /*  4. 端部偏置立柱的旋转坐标系矩阵 */
  /*  绕局部 Y 轴产生垂向弯曲转角 (负号是因为沿X向的正变形会导致负Y向旋转) */
  /*  绕局部 Z 轴产生水平弯曲转角 */
  st.site = &qq_emlrtRSI;
  FASTTransMat(0.0,
               -(Platform->dO1_V * q_Nom[24] + Platform->dO2_V * q_Nom[25]),
               Platform->dO1_H * q_Nom[22] + Platform->dO2_H * q_Nom[23], dv);
  Transform1(dv, BP1, TP1);
  st.site = &rq_emlrtRSI;
  FASTTransMat(0.0,
               -(Platform->dO1_V * q_Nom[28] + Platform->dO2_V * q_Nom[29]),
               Platform->dO1_H * q_Nom[26] + Platform->dO2_H * q_Nom[27], dv);
  Transform1(dv, BP2, TP2);
  st.site = &sq_emlrtRSI;
  FASTTransMat(0.0,
               -(Platform->dO1_V * q_Nom[32] + Platform->dO2_V * q_Nom[33]),
               Platform->dO1_H * q_Nom[30] + Platform->dO2_H * q_Nom[31], dv);
  Transform1(dv, BP3, TP3);
  /*  ================================================================= */
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

/* End of code generation (Coordinate_systems.c) */
