/*
 * NominalSystemMatrix.c
 *
 * Code generation for function 'NominalSystemMatrix'
 *
 */

/* Include files */
#include "NominalSystemMatrix.h"
#include "BEMTMex.h"
#include "CheckInterpPoints.h"
#include "Coordinate_systems.h"
#include "NominalSystemMatrix_data.h"
#include "NominalSystemMatrix_emxutil.h"
#include "NominalSystemMatrix_types.h"
#include "assertValidSizeArg.h"
#include "cat.h"
#include "coprod.h"
#include "cross.h"
#include "dot.h"
#include "eml_mtimes_helper.h"
#include "interpn.h"
#include "repmat.h"
#include "reshapeSizeChecks.h"
#include "rt_nonfinite.h"
#include "trapz.h"
#include "triu.h"
#include "mwmathutil.h"
#include "omp.h"
#include <emmintrin.h>
#include <string.h>

/* Type Definitions */
#ifndef typedef_cell_wrap_1
#define typedef_cell_wrap_1

typedef struct {
  real_T f1[30];
} cell_wrap_1;

#endif                                 /* typedef_cell_wrap_1 */

#ifndef typedef_cell_wrap_2
#define typedef_cell_wrap_2

typedef struct {
  real_T f1[21];
} cell_wrap_2;

#endif                                 /* typedef_cell_wrap_2 */

#ifndef typedef_cell_wrap_3
#define typedef_cell_wrap_3

typedef struct {
  real_T f1[45];
} cell_wrap_3;

#endif                                 /* typedef_cell_wrap_3 */

#ifndef typedef_cell_wrap_4
#define typedef_cell_wrap_4

typedef struct {
  real_T f1[3];
} cell_wrap_4;

#endif                                 /* typedef_cell_wrap_4 */

#ifndef typedef_cell_wrap_5
#define typedef_cell_wrap_5

typedef struct {
  real_T f1[9];
} cell_wrap_5;

#endif                                 /* typedef_cell_wrap_5 */

#ifndef typedef_cell_wrap_6
#define typedef_cell_wrap_6

typedef struct {
  real_T f1[10];
} cell_wrap_6;

#endif                                 /* typedef_cell_wrap_6 */

#ifndef typedef_cell_wrap_7
#define typedef_cell_wrap_7

typedef struct {
  real_T f1[7];
} cell_wrap_7;

#endif                                 /* typedef_cell_wrap_7 */

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 114,   /* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo b_emlrtRSI = { 239, /* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo c_emlrtRSI = { 248, /* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo d_emlrtRSI = { 249, /* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo e_emlrtRSI = { 256, /* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo f_emlrtRSI = { 257, /* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo g_emlrtRSI = { 271, /* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo h_emlrtRSI = { 279, /* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo i_emlrtRSI = { 286, /* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo j_emlrtRSI = { 343, /* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo k_emlrtRSI = { 352, /* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo l_emlrtRSI = { 361, /* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo m_emlrtRSI = { 379, /* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo n_emlrtRSI = { 396, /* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo o_emlrtRSI = { 411, /* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo p_emlrtRSI = { 425, /* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo q_emlrtRSI = { 426, /* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo r_emlrtRSI = { 427, /* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo s_emlrtRSI = { 429, /* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo t_emlrtRSI = { 430, /* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo u_emlrtRSI = { 431, /* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo v_emlrtRSI = { 434, /* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo w_emlrtRSI = { 442, /* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo x_emlrtRSI = { 443, /* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo y_emlrtRSI = { 444, /* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo ab_emlrtRSI = { 448,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo bb_emlrtRSI = { 449,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo cb_emlrtRSI = { 450,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo db_emlrtRSI = { 456,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo eb_emlrtRSI = { 457,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo fb_emlrtRSI = { 458,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo gb_emlrtRSI = { 461,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo hb_emlrtRSI = { 462,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo ib_emlrtRSI = { 463,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo jb_emlrtRSI = { 465,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo kb_emlrtRSI = { 466,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo lb_emlrtRSI = { 467,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo mb_emlrtRSI = { 485,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo nb_emlrtRSI = { 486,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo ob_emlrtRSI = { 489,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo pb_emlrtRSI = { 490,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo qb_emlrtRSI = { 493,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo rb_emlrtRSI = { 494,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo sb_emlrtRSI = { 502,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo tb_emlrtRSI = { 503,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo ub_emlrtRSI = { 504,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo vb_emlrtRSI = { 509,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo wb_emlrtRSI = { 511,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo xb_emlrtRSI = { 517,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo yb_emlrtRSI = { 518,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo ac_emlrtRSI = { 519,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo bc_emlrtRSI = { 528,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo cc_emlrtRSI = { 709,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo dc_emlrtRSI = { 710,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo ec_emlrtRSI = { 711,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo fc_emlrtRSI = { 712,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo gc_emlrtRSI = { 713,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo hc_emlrtRSI = { 714,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo ic_emlrtRSI = { 780,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo jc_emlrtRSI = { 781,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo kc_emlrtRSI = { 782,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo lc_emlrtRSI = { 783,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo mc_emlrtRSI = { 784,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo nc_emlrtRSI = { 785,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo oc_emlrtRSI = { 786,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo pc_emlrtRSI = { 787,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo qc_emlrtRSI = { 788,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo rc_emlrtRSI = { 789,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo sc_emlrtRSI = { 790,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo tc_emlrtRSI = { 791,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo uc_emlrtRSI = { 792,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo vc_emlrtRSI = { 799,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo wc_emlrtRSI = { 800,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo xc_emlrtRSI = { 801,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo yc_emlrtRSI = { 802,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo ad_emlrtRSI = { 803,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo bd_emlrtRSI = { 804,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo cd_emlrtRSI = { 805,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo dd_emlrtRSI = { 806,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo ed_emlrtRSI = { 807,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo fd_emlrtRSI = { 808,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo gd_emlrtRSI = { 809,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo hd_emlrtRSI = { 810,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo id_emlrtRSI = { 811,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo jd_emlrtRSI = { 818,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo kd_emlrtRSI = { 819,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo ld_emlrtRSI = { 820,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo md_emlrtRSI = { 821,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo nd_emlrtRSI = { 822,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo od_emlrtRSI = { 823,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo pd_emlrtRSI = { 824,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo qd_emlrtRSI = { 825,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo rd_emlrtRSI = { 826,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo sd_emlrtRSI = { 827,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo td_emlrtRSI = { 828,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo ud_emlrtRSI = { 829,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo vd_emlrtRSI = { 830,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo wd_emlrtRSI = { 840,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo xd_emlrtRSI = { 841,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo yd_emlrtRSI = { 842,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo ae_emlrtRSI = { 843,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo be_emlrtRSI = { 844,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo ce_emlrtRSI = { 845,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo de_emlrtRSI = { 862,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo ee_emlrtRSI = { 863,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo fe_emlrtRSI = { 864,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo ge_emlrtRSI = { 865,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo he_emlrtRSI = { 866,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo ie_emlrtRSI = { 867,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo je_emlrtRSI = { 884,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo ke_emlrtRSI = { 885,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo le_emlrtRSI = { 886,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo me_emlrtRSI = { 887,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo ne_emlrtRSI = { 888,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo oe_emlrtRSI = { 889,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo pe_emlrtRSI = { 980,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo qe_emlrtRSI = { 981,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo re_emlrtRSI = { 982,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo se_emlrtRSI = { 983,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo te_emlrtRSI = { 984,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo ue_emlrtRSI = { 985,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo ve_emlrtRSI = { 986,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo we_emlrtRSI = { 1046,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo xe_emlrtRSI = { 1047,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo ye_emlrtRSI = { 1048,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo af_emlrtRSI = { 1049,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo bf_emlrtRSI = { 1050,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo cf_emlrtRSI = { 1051,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo df_emlrtRSI = { 1052,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo ef_emlrtRSI = { 1053,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo ff_emlrtRSI = { 1054,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo gf_emlrtRSI = { 1055,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo hf_emlrtRSI = { 1056,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo if_emlrtRSI = { 1057,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo jf_emlrtRSI = { 1058,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo kf_emlrtRSI = { 1065,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo lf_emlrtRSI = { 1066,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo mf_emlrtRSI = { 1067,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo nf_emlrtRSI = { 1068,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo of_emlrtRSI = { 1069,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo pf_emlrtRSI = { 1070,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo qf_emlrtRSI = { 1071,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo rf_emlrtRSI = { 1072,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo sf_emlrtRSI = { 1073,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo tf_emlrtRSI = { 1074,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo uf_emlrtRSI = { 1075,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo vf_emlrtRSI = { 1076,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo wf_emlrtRSI = { 1077,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo xf_emlrtRSI = { 1084,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo yf_emlrtRSI = { 1085,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo ag_emlrtRSI = { 1086,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo bg_emlrtRSI = { 1087,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo cg_emlrtRSI = { 1088,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo dg_emlrtRSI = { 1089,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo eg_emlrtRSI = { 1090,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo fg_emlrtRSI = { 1091,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo gg_emlrtRSI = { 1092,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo hg_emlrtRSI = { 1093,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo ig_emlrtRSI = { 1094,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo jg_emlrtRSI = { 1095,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo kg_emlrtRSI = { 1096,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo lg_emlrtRSI = { 1111,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo mg_emlrtRSI = { 1112,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo ng_emlrtRSI = { 1114,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo og_emlrtRSI = { 1115,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo pg_emlrtRSI = { 1116,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo qg_emlrtRSI = { 1118,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo rg_emlrtRSI = { 1119,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo sg_emlrtRSI = { 1126,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo tg_emlrtRSI = { 1127,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo ug_emlrtRSI = { 1129,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo vg_emlrtRSI = { 1130,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo wg_emlrtRSI = { 1131,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo xg_emlrtRSI = { 1133,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo yg_emlrtRSI = { 1134,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo ah_emlrtRSI = { 1141,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo bh_emlrtRSI = { 1142,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo ch_emlrtRSI = { 1144,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo dh_emlrtRSI = { 1145,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo eh_emlrtRSI = { 1146,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo fh_emlrtRSI = { 1148,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo gh_emlrtRSI = { 1149,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo hh_emlrtRSI = { 1157,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo ih_emlrtRSI = { 1164,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo jh_emlrtRSI = { 1165,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo kh_emlrtRSI = { 1166,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo lh_emlrtRSI = { 1167,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo mh_emlrtRSI = { 1168,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo nh_emlrtRSI = { 1169,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo oh_emlrtRSI = { 1170,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo ph_emlrtRSI = { 1171,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo qh_emlrtRSI = { 1172,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo rh_emlrtRSI = { 1173,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo sh_emlrtRSI = { 1174,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo th_emlrtRSI = { 1175,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo uh_emlrtRSI = { 1176,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo vh_emlrtRSI = { 1177,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo wh_emlrtRSI = { 1178,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo xh_emlrtRSI = { 1179,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo yh_emlrtRSI = { 1181,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo ai_emlrtRSI = { 1184,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo bi_emlrtRSI = { 1185,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo ci_emlrtRSI = { 1186,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo di_emlrtRSI = { 1187,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo ei_emlrtRSI = { 1188,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo fi_emlrtRSI = { 1189,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo gi_emlrtRSI = { 1190,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo hi_emlrtRSI = { 1191,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo ii_emlrtRSI = { 1192,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo ji_emlrtRSI = { 1193,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo ki_emlrtRSI = { 1194,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo li_emlrtRSI = { 1195,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo mi_emlrtRSI = { 1196,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo ni_emlrtRSI = { 1197,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo oi_emlrtRSI = { 1198,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo pi_emlrtRSI = { 1199,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo qi_emlrtRSI = { 1201,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo ri_emlrtRSI = { 1204,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo si_emlrtRSI = { 1205,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo ti_emlrtRSI = { 1206,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo ui_emlrtRSI = { 1207,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo vi_emlrtRSI = { 1208,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo wi_emlrtRSI = { 1209,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo xi_emlrtRSI = { 1210,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo yi_emlrtRSI = { 1211,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo aj_emlrtRSI = { 1212,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo bj_emlrtRSI = { 1213,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo cj_emlrtRSI = { 1214,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo dj_emlrtRSI = { 1215,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo ej_emlrtRSI = { 1216,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo fj_emlrtRSI = { 1217,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo gj_emlrtRSI = { 1218,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo hj_emlrtRSI = { 1219,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo ij_emlrtRSI = { 1221,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo jj_emlrtRSI = { 1227,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo kj_emlrtRSI = { 1228,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo lj_emlrtRSI = { 1229,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo mj_emlrtRSI = { 1230,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo nj_emlrtRSI = { 1231,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo oj_emlrtRSI = { 1232,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo pj_emlrtRSI = { 1233,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo qj_emlrtRSI = { 1234,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo rj_emlrtRSI = { 1235,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo sj_emlrtRSI = { 1236,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo tj_emlrtRSI = { 1237,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo uj_emlrtRSI = { 1238,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo vj_emlrtRSI = { 1239,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo wj_emlrtRSI = { 1241,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo xj_emlrtRSI = { 1247,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo yj_emlrtRSI = { 1248,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo ak_emlrtRSI = { 1249,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo bk_emlrtRSI = { 1250,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo ck_emlrtRSI = { 1251,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo dk_emlrtRSI = { 1252,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo ek_emlrtRSI = { 1253,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo fk_emlrtRSI = { 1254,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo gk_emlrtRSI = { 1255,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo hk_emlrtRSI = { 1256,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo ik_emlrtRSI = { 1257,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo jk_emlrtRSI = { 1258,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo kk_emlrtRSI = { 1259,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo lk_emlrtRSI = { 1261,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo mk_emlrtRSI = { 1267,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo nk_emlrtRSI = { 1268,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo ok_emlrtRSI = { 1269,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo pk_emlrtRSI = { 1270,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo qk_emlrtRSI = { 1271,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo rk_emlrtRSI = { 1272,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo sk_emlrtRSI = { 1273,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo tk_emlrtRSI = { 1274,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo uk_emlrtRSI = { 1275,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo vk_emlrtRSI = { 1276,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo wk_emlrtRSI = { 1277,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo xk_emlrtRSI = { 1278,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo yk_emlrtRSI = { 1279,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo al_emlrtRSI = { 1281,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo bl_emlrtRSI = { 1391,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo cl_emlrtRSI = { 1392,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo dl_emlrtRSI = { 1393,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo el_emlrtRSI = { 1394,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo fl_emlrtRSI = { 1395,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo gl_emlrtRSI = { 1396,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo hl_emlrtRSI = { 1397,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo il_emlrtRSI = { 1398,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo jl_emlrtRSI = { 1399,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo kl_emlrtRSI = { 1400,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo ll_emlrtRSI = { 1414,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo ml_emlrtRSI = { 1420,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo nl_emlrtRSI = { 1421,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo ol_emlrtRSI = { 1422,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo pl_emlrtRSI = { 1423,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo ql_emlrtRSI = { 1424,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo rl_emlrtRSI = { 1425,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo sl_emlrtRSI = { 1426,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo tl_emlrtRSI = { 1440,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo ul_emlrtRSI = { 1760,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo vl_emlrtRSI = { 1761,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo wl_emlrtRSI = { 1762,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo xl_emlrtRSI = { 1764,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo yl_emlrtRSI = { 1765,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo am_emlrtRSI = { 1767,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo bm_emlrtRSI = { 1773,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo cm_emlrtRSI = { 1774,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo dm_emlrtRSI = { 1775,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo em_emlrtRSI = { 1777,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo fm_emlrtRSI = { 1778,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo gm_emlrtRSI = { 1780,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo hm_emlrtRSI = { 1786,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo im_emlrtRSI = { 1787,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo jm_emlrtRSI = { 1788,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo km_emlrtRSI = { 1790,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo lm_emlrtRSI = { 1791,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo mm_emlrtRSI = { 1793,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo nm_emlrtRSI = { 1799,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo om_emlrtRSI = { 1800,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo pm_emlrtRSI = { 1801,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo qm_emlrtRSI = { 1802,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo rm_emlrtRSI = { 1804,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo sm_emlrtRSI = { 1805,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo tm_emlrtRSI = { 1806,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo um_emlrtRSI = { 1808,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo vm_emlrtRSI = { 1809,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo wm_emlrtRSI = { 1811,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo xm_emlrtRSI = { 1834,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo ym_emlrtRSI = { 1835,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo an_emlrtRSI = { 1836,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo bn_emlrtRSI = { 1847,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo cn_emlrtRSI = { 1848,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo dn_emlrtRSI = { 1849,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo en_emlrtRSI = { 1860,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo fn_emlrtRSI = { 1861,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo gn_emlrtRSI = { 1862,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo hn_emlrtRSI = { 1873,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo in_emlrtRSI = { 1874,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo jn_emlrtRSI = { 1875,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo kn_emlrtRSI = { 1876,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo ln_emlrtRSI = { 1905,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo mn_emlrtRSI = { 1906,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo nn_emlrtRSI = { 1907,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo on_emlrtRSI = { 1908,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo pn_emlrtRSI = { 1909,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo qn_emlrtRSI = { 1910,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo rn_emlrtRSI = { 1911,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo sn_emlrtRSI = { 1912,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo tn_emlrtRSI = { 1913,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo un_emlrtRSI = { 1914,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo vn_emlrtRSI = { 1915,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo wn_emlrtRSI = { 1916,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo xn_emlrtRSI = { 1919,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo yn_emlrtRSI = { 1920,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo ao_emlrtRSI = { 1921,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo bo_emlrtRSI = { 1944,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo co_emlrtRSI = { 1945,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo do_emlrtRSI = { 1961,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo eo_emlrtRSI = { 1962,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo fo_emlrtRSI = { 1963,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo go_emlrtRSI = { 1964,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo ho_emlrtRSI = { 1965,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo io_emlrtRSI = { 1966,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo jo_emlrtRSI = { 1983,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo ko_emlrtRSI = { 2003,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo lo_emlrtRSI = { 2004,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo mo_emlrtRSI = { 2005,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo no_emlrtRSI = { 2010,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo oo_emlrtRSI = { 2036,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo po_emlrtRSI = { 2052,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo us_emlrtRSI = { 41, /* lineNo */
  "reshapeSizeChecks",                 /* fcnName */
  "D:\\Program Files\\MATLAB\\R2025b\\toolbox\\eml\\eml\\+coder\\+internal\\reshapeSizeChecks.m"/* pathName */
};

static emlrtBCInfo yc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  444,                                 /* lineNo */
  8,                                   /* colNo */
  "Vz",                                /* aName */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ad_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  444,                                 /* lineNo */
  110,                                 /* colNo */
  "ZBlNode_Y",                         /* aName */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  443,                                 /* lineNo */
  8,                                   /* colNo */
  "Vy",                                /* aName */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  443,                                 /* lineNo */
  110,                                 /* colNo */
  "ZBlNode_Y",                         /* aName */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo dd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  442,                                 /* lineNo */
  8,                                   /* colNo */
  "Vx",                                /* aName */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ed_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  442,                                 /* lineNo */
  110,                                 /* colNo */
  "ZBlNode_Y",                         /* aName */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo f_emlrtDCI = { 436, /* lineNo */
  12,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m",/* pName */
  1                                    /* checkKind */
};

static emlrtECInfo q_emlrtECI = { 3,   /* nDims */
  248,                                 /* lineNo */
  9,                                   /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo r_emlrtECI = { 3,   /* nDims */
  271,                                 /* lineNo */
  10,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo s_emlrtECI = { 3,   /* nDims */
  343,                                 /* lineNo */
  11,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo t_emlrtECI = { 3,   /* nDims */
  352,                                 /* lineNo */
  11,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo u_emlrtECI = { 3,   /* nDims */
  361,                                 /* lineNo */
  11,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo v_emlrtECI = { 3,   /* nDims */
  379,                                 /* lineNo */
  10,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo w_emlrtECI = { 3,   /* nDims */
  396,                                 /* lineNo */
  10,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo x_emlrtECI = { 3,   /* nDims */
  411,                                 /* lineNo */
  10,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtDCInfo g_emlrtDCI = { 422, /* lineNo */
  19,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo h_emlrtDCI = { 422, /* lineNo */
  19,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo i_emlrtDCI = { 423, /* lineNo */
  19,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m",/* pName */
  1                                    /* checkKind */
};

static emlrtECInfo y_emlrtECI = { 3,   /* nDims */
  425,                                 /* lineNo */
  30,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo ab_emlrtECI = { 3,  /* nDims */
  426,                                 /* lineNo */
  30,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo bb_emlrtECI = { 3,  /* nDims */
  427,                                 /* lineNo */
  30,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo cb_emlrtECI = { 3,  /* nDims */
  429,                                 /* lineNo */
  30,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo db_emlrtECI = { 3,  /* nDims */
  430,                                 /* lineNo */
  30,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo eb_emlrtECI = { 3,  /* nDims */
  431,                                 /* lineNo */
  30,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo fb_emlrtECI = { -1, /* nDims */
  425,                                 /* lineNo */
  1,                                   /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo gb_emlrtECI = { -1, /* nDims */
  426,                                 /* lineNo */
  1,                                   /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo hb_emlrtECI = { -1, /* nDims */
  427,                                 /* lineNo */
  1,                                   /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo ib_emlrtECI = { -1, /* nDims */
  429,                                 /* lineNo */
  1,                                   /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo jb_emlrtECI = { -1, /* nDims */
  430,                                 /* lineNo */
  1,                                   /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo kb_emlrtECI = { -1, /* nDims */
  431,                                 /* lineNo */
  1,                                   /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo x_emlrtRTEI = { 441,/* lineNo */
  15,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo lb_emlrtECI = { 3,  /* nDims */
  448,                                 /* lineNo */
  8,                                   /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo mb_emlrtECI = { 3,  /* nDims */
  449,                                 /* lineNo */
  8,                                   /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo nb_emlrtECI = { 3,  /* nDims */
  450,                                 /* lineNo */
  8,                                   /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtDCInfo j_emlrtDCI = { 453, /* lineNo */
  13,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo k_emlrtDCI = { 483, /* lineNo */
  13,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo l_emlrtDCI = { 500, /* lineNo */
  19,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo fd_emlrtBCI = { 1,  /* iFirst */
  61,                                  /* iLast */
  509,                                 /* lineNo */
  26,                                  /* colNo */
  "Controls",                          /* aName */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo ob_emlrtECI = { -1, /* nDims */
  485,                                 /* lineNo */
  1,                                   /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo pb_emlrtECI = { -1, /* nDims */
  486,                                 /* lineNo */
  1,                                   /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo qb_emlrtECI = { -1, /* nDims */
  489,                                 /* lineNo */
  1,                                   /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo rb_emlrtECI = { -1, /* nDims */
  490,                                 /* lineNo */
  1,                                   /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo sb_emlrtECI = { -1, /* nDims */
  493,                                 /* lineNo */
  1,                                   /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo tb_emlrtECI = { -1, /* nDims */
  494,                                 /* lineNo */
  1,                                   /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo ub_emlrtECI = { -1, /* nDims */
  456,                                 /* lineNo */
  1,                                   /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo vb_emlrtECI = { -1, /* nDims */
  457,                                 /* lineNo */
  1,                                   /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo wb_emlrtECI = { -1, /* nDims */
  458,                                 /* lineNo */
  1,                                   /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo xb_emlrtECI = { -1, /* nDims */
  461,                                 /* lineNo */
  5,                                   /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo yb_emlrtECI = { -1, /* nDims */
  462,                                 /* lineNo */
  5,                                   /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo ac_emlrtECI = { -1, /* nDims */
  463,                                 /* lineNo */
  5,                                   /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo bc_emlrtECI = { -1, /* nDims */
  465,                                 /* lineNo */
  5,                                   /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo cc_emlrtECI = { -1, /* nDims */
  466,                                 /* lineNo */
  5,                                   /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo dc_emlrtECI = { -1, /* nDims */
  467,                                 /* lineNo */
  5,                                   /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo ec_emlrtECI = { -1, /* nDims */
  502,                                 /* lineNo */
  1,                                   /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo fc_emlrtECI = { -1, /* nDims */
  503,                                 /* lineNo */
  1,                                   /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo gc_emlrtECI = { -1, /* nDims */
  504,                                 /* lineNo */
  1,                                   /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo hc_emlrtECI = { 3,  /* nDims */
  517,                                 /* lineNo */
  12,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo ic_emlrtECI = { 3,  /* nDims */
  518,                                 /* lineNo */
  12,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo jc_emlrtECI = { 3,  /* nDims */
  519,                                 /* lineNo */
  12,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtDCInfo m_emlrtDCI = { 525, /* lineNo */
  22,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo n_emlrtDCI = { 527, /* lineNo */
  19,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo o_emlrtDCI = { 527, /* lineNo */
  19,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m",/* pName */
  1                                    /* checkKind */
};

static emlrtECInfo kc_emlrtECI = { 3,  /* nDims */
  528,                                 /* lineNo */
  11,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo lc_emlrtECI = { 3,  /* nDims */
  783,                                 /* lineNo */
  11,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo mc_emlrtECI = { 3,  /* nDims */
  784,                                 /* lineNo */
  11,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo nc_emlrtECI = { 3,  /* nDims */
  785,                                 /* lineNo */
  11,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo oc_emlrtECI = { 3,  /* nDims */
  786,                                 /* lineNo */
  14,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo pc_emlrtECI = { 3,  /* nDims */
  787,                                 /* lineNo */
  14,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo qc_emlrtECI = { 3,  /* nDims */
  788,                                 /* lineNo */
  14,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo rc_emlrtECI = { 3,  /* nDims */
  789,                                 /* lineNo */
  14,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo sc_emlrtECI = { 3,  /* nDims */
  790,                                 /* lineNo */
  14,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo tc_emlrtECI = { 3,  /* nDims */
  802,                                 /* lineNo */
  11,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo uc_emlrtECI = { 3,  /* nDims */
  803,                                 /* lineNo */
  11,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo vc_emlrtECI = { 3,  /* nDims */
  804,                                 /* lineNo */
  11,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo wc_emlrtECI = { 3,  /* nDims */
  805,                                 /* lineNo */
  14,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo xc_emlrtECI = { 3,  /* nDims */
  806,                                 /* lineNo */
  14,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo yc_emlrtECI = { 3,  /* nDims */
  807,                                 /* lineNo */
  14,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo ad_emlrtECI = { 3,  /* nDims */
  808,                                 /* lineNo */
  14,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo bd_emlrtECI = { 3,  /* nDims */
  809,                                 /* lineNo */
  14,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo cd_emlrtECI = { 3,  /* nDims */
  821,                                 /* lineNo */
  11,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo dd_emlrtECI = { 3,  /* nDims */
  822,                                 /* lineNo */
  11,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo ed_emlrtECI = { 3,  /* nDims */
  823,                                 /* lineNo */
  11,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo fd_emlrtECI = { 3,  /* nDims */
  824,                                 /* lineNo */
  14,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo gd_emlrtECI = { 3,  /* nDims */
  825,                                 /* lineNo */
  14,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo hd_emlrtECI = { 3,  /* nDims */
  826,                                 /* lineNo */
  14,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo id_emlrtECI = { 3,  /* nDims */
  827,                                 /* lineNo */
  14,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo jd_emlrtECI = { 3,  /* nDims */
  828,                                 /* lineNo */
  14,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo kd_emlrtECI = { 3,  /* nDims */
  980,                                 /* lineNo */
  42,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo ld_emlrtECI = { 3,  /* nDims */
  981,                                 /* lineNo */
  42,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo md_emlrtECI = { 3,  /* nDims */
  982,                                 /* lineNo */
  42,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo nd_emlrtECI = { 3,  /* nDims */
  983,                                 /* lineNo */
  13,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo od_emlrtECI = { 3,  /* nDims */
  984,                                 /* lineNo */
  13,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo pd_emlrtECI = { 3,  /* nDims */
  985,                                 /* lineNo */
  13,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo qd_emlrtECI = { 3,  /* nDims */
  986,                                 /* lineNo */
  13,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo rd_emlrtECI = { 3,  /* nDims */
  988,                                 /* lineNo */
  8,                                   /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo sd_emlrtECI = { 3,  /* nDims */
  1046,                                /* lineNo */
  65,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo td_emlrtECI = { 3,  /* nDims */
  1046,                                /* lineNo */
  11,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo ud_emlrtECI = { 3,  /* nDims */
  1047,                                /* lineNo */
  65,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo vd_emlrtECI = { 3,  /* nDims */
  1047,                                /* lineNo */
  11,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo wd_emlrtECI = { 3,  /* nDims */
  1048,                                /* lineNo */
  65,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo xd_emlrtECI = { 3,  /* nDims */
  1048,                                /* lineNo */
  11,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo yd_emlrtECI = { 3,  /* nDims */
  1049,                                /* lineNo */
  14,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo ae_emlrtECI = { 3,  /* nDims */
  1049,                                /* lineNo */
  117,                                 /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo be_emlrtECI = { 3,  /* nDims */
  1050,                                /* lineNo */
  14,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo ce_emlrtECI = { 3,  /* nDims */
  1050,                                /* lineNo */
  117,                                 /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo de_emlrtECI = { 3,  /* nDims */
  1051,                                /* lineNo */
  14,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo ee_emlrtECI = { 3,  /* nDims */
  1051,                                /* lineNo */
  117,                                 /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo fe_emlrtECI = { 3,  /* nDims */
  1052,                                /* lineNo */
  14,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo ge_emlrtECI = { 3,  /* nDims */
  1052,                                /* lineNo */
  117,                                 /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo he_emlrtECI = { 3,  /* nDims */
  1053,                                /* lineNo */
  14,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo ie_emlrtECI = { 3,  /* nDims */
  1053,                                /* lineNo */
  117,                                 /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo je_emlrtECI = { 3,  /* nDims */
  1054,                                /* lineNo */
  90,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo ke_emlrtECI = { 3,  /* nDims */
  1054,                                /* lineNo */
  14,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo le_emlrtECI = { 3,  /* nDims */
  1055,                                /* lineNo */
  90,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo me_emlrtECI = { 3,  /* nDims */
  1055,                                /* lineNo */
  14,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo ne_emlrtECI = { 3,  /* nDims */
  1056,                                /* lineNo */
  14,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo oe_emlrtECI = { 3,  /* nDims */
  1057,                                /* lineNo */
  14,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo pe_emlrtECI = { 3,  /* nDims */
  1058,                                /* lineNo */
  14,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo qe_emlrtECI = { 3,  /* nDims */
  1060,                                /* lineNo */
  9,                                   /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo re_emlrtECI = { 3,  /* nDims */
  1065,                                /* lineNo */
  65,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo se_emlrtECI = { 3,  /* nDims */
  1065,                                /* lineNo */
  11,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo te_emlrtECI = { 3,  /* nDims */
  1066,                                /* lineNo */
  65,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo ue_emlrtECI = { 3,  /* nDims */
  1066,                                /* lineNo */
  11,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo ve_emlrtECI = { 3,  /* nDims */
  1067,                                /* lineNo */
  65,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo we_emlrtECI = { 3,  /* nDims */
  1067,                                /* lineNo */
  11,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo xe_emlrtECI = { 3,  /* nDims */
  1068,                                /* lineNo */
  14,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo ye_emlrtECI = { 3,  /* nDims */
  1068,                                /* lineNo */
  117,                                 /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo af_emlrtECI = { 3,  /* nDims */
  1069,                                /* lineNo */
  14,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo bf_emlrtECI = { 3,  /* nDims */
  1069,                                /* lineNo */
  117,                                 /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo cf_emlrtECI = { 3,  /* nDims */
  1070,                                /* lineNo */
  14,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo df_emlrtECI = { 3,  /* nDims */
  1070,                                /* lineNo */
  117,                                 /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo ef_emlrtECI = { 3,  /* nDims */
  1071,                                /* lineNo */
  14,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo ff_emlrtECI = { 3,  /* nDims */
  1071,                                /* lineNo */
  117,                                 /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo gf_emlrtECI = { 3,  /* nDims */
  1072,                                /* lineNo */
  14,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo hf_emlrtECI = { 3,  /* nDims */
  1072,                                /* lineNo */
  117,                                 /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo if_emlrtECI = { 3,  /* nDims */
  1073,                                /* lineNo */
  90,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo jf_emlrtECI = { 3,  /* nDims */
  1073,                                /* lineNo */
  14,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo kf_emlrtECI = { 3,  /* nDims */
  1074,                                /* lineNo */
  90,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo lf_emlrtECI = { 3,  /* nDims */
  1074,                                /* lineNo */
  14,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo mf_emlrtECI = { 3,  /* nDims */
  1075,                                /* lineNo */
  14,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo nf_emlrtECI = { 3,  /* nDims */
  1076,                                /* lineNo */
  14,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo of_emlrtECI = { 3,  /* nDims */
  1077,                                /* lineNo */
  14,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo pf_emlrtECI = { 3,  /* nDims */
  1079,                                /* lineNo */
  9,                                   /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo qf_emlrtECI = { 3,  /* nDims */
  1084,                                /* lineNo */
  65,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo rf_emlrtECI = { 3,  /* nDims */
  1084,                                /* lineNo */
  11,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo sf_emlrtECI = { 3,  /* nDims */
  1085,                                /* lineNo */
  65,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo tf_emlrtECI = { 3,  /* nDims */
  1085,                                /* lineNo */
  11,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo uf_emlrtECI = { 3,  /* nDims */
  1086,                                /* lineNo */
  65,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo vf_emlrtECI = { 3,  /* nDims */
  1086,                                /* lineNo */
  11,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo wf_emlrtECI = { 3,  /* nDims */
  1087,                                /* lineNo */
  14,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo xf_emlrtECI = { 3,  /* nDims */
  1087,                                /* lineNo */
  117,                                 /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo yf_emlrtECI = { 3,  /* nDims */
  1088,                                /* lineNo */
  14,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo ag_emlrtECI = { 3,  /* nDims */
  1088,                                /* lineNo */
  117,                                 /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo bg_emlrtECI = { 3,  /* nDims */
  1089,                                /* lineNo */
  14,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo cg_emlrtECI = { 3,  /* nDims */
  1089,                                /* lineNo */
  117,                                 /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo dg_emlrtECI = { 3,  /* nDims */
  1090,                                /* lineNo */
  14,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo eg_emlrtECI = { 3,  /* nDims */
  1090,                                /* lineNo */
  117,                                 /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo fg_emlrtECI = { 3,  /* nDims */
  1091,                                /* lineNo */
  14,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo gg_emlrtECI = { 3,  /* nDims */
  1091,                                /* lineNo */
  117,                                 /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo hg_emlrtECI = { 3,  /* nDims */
  1092,                                /* lineNo */
  90,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo ig_emlrtECI = { 3,  /* nDims */
  1092,                                /* lineNo */
  14,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo jg_emlrtECI = { 3,  /* nDims */
  1093,                                /* lineNo */
  90,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo kg_emlrtECI = { 3,  /* nDims */
  1093,                                /* lineNo */
  14,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo lg_emlrtECI = { 3,  /* nDims */
  1094,                                /* lineNo */
  14,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo mg_emlrtECI = { 3,  /* nDims */
  1095,                                /* lineNo */
  14,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo ng_emlrtECI = { 3,  /* nDims */
  1096,                                /* lineNo */
  14,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo og_emlrtECI = { 3,  /* nDims */
  1098,                                /* lineNo */
  9,                                   /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo pg_emlrtECI = { 3,  /* nDims */
  1114,                                /* lineNo */
  9,                                   /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo qg_emlrtECI = { 3,  /* nDims */
  1129,                                /* lineNo */
  9,                                   /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo rg_emlrtECI = { 3,  /* nDims */
  1144,                                /* lineNo */
  9,                                   /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo sg_emlrtECI = { 3,  /* nDims */
  1181,                                /* lineNo */
  49,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo tg_emlrtECI = { 3,  /* nDims */
  1181,                                /* lineNo */
  26,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo ug_emlrtECI = { 3,  /* nDims */
  1201,                                /* lineNo */
  49,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo vg_emlrtECI = { 3,  /* nDims */
  1201,                                /* lineNo */
  26,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo wg_emlrtECI = { 3,  /* nDims */
  1221,                                /* lineNo */
  49,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo xg_emlrtECI = { 3,  /* nDims */
  1221,                                /* lineNo */
  26,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo yg_emlrtECI = { 3,  /* nDims */
  1227,                                /* lineNo */
  34,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo ah_emlrtECI = { 3,  /* nDims */
  1228,                                /* lineNo */
  34,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo bh_emlrtECI = { 3,  /* nDims */
  1229,                                /* lineNo */
  34,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo ch_emlrtECI = { 3,  /* nDims */
  1230,                                /* lineNo */
  34,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo dh_emlrtECI = { 3,  /* nDims */
  1231,                                /* lineNo */
  34,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo eh_emlrtECI = { 3,  /* nDims */
  1232,                                /* lineNo */
  34,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo fh_emlrtECI = { 3,  /* nDims */
  1233,                                /* lineNo */
  34,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo gh_emlrtECI = { 3,  /* nDims */
  1234,                                /* lineNo */
  34,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo hh_emlrtECI = { 3,  /* nDims */
  1235,                                /* lineNo */
  34,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo ih_emlrtECI = { 3,  /* nDims */
  1236,                                /* lineNo */
  34,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo jh_emlrtECI = { 3,  /* nDims */
  1237,                                /* lineNo */
  34,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo kh_emlrtECI = { 3,  /* nDims */
  1238,                                /* lineNo */
  34,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo lh_emlrtECI = { 3,  /* nDims */
  1239,                                /* lineNo */
  34,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo mh_emlrtECI = { 3,  /* nDims */
  1241,                                /* lineNo */
  32,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo nh_emlrtECI = { 3,  /* nDims */
  1241,                                /* lineNo */
  86,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo oh_emlrtECI = { 3,  /* nDims */
  1241,                                /* lineNo */
  63,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo ph_emlrtECI = { 3,  /* nDims */
  1247,                                /* lineNo */
  34,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo qh_emlrtECI = { 3,  /* nDims */
  1248,                                /* lineNo */
  34,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo rh_emlrtECI = { 3,  /* nDims */
  1249,                                /* lineNo */
  34,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo sh_emlrtECI = { 3,  /* nDims */
  1250,                                /* lineNo */
  34,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo th_emlrtECI = { 3,  /* nDims */
  1251,                                /* lineNo */
  34,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo uh_emlrtECI = { 3,  /* nDims */
  1252,                                /* lineNo */
  34,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo vh_emlrtECI = { 3,  /* nDims */
  1253,                                /* lineNo */
  34,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo wh_emlrtECI = { 3,  /* nDims */
  1254,                                /* lineNo */
  34,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo xh_emlrtECI = { 3,  /* nDims */
  1255,                                /* lineNo */
  34,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo yh_emlrtECI = { 3,  /* nDims */
  1256,                                /* lineNo */
  34,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo ai_emlrtECI = { 3,  /* nDims */
  1257,                                /* lineNo */
  34,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo bi_emlrtECI = { 3,  /* nDims */
  1258,                                /* lineNo */
  34,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo ci_emlrtECI = { 3,  /* nDims */
  1259,                                /* lineNo */
  34,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo di_emlrtECI = { 3,  /* nDims */
  1261,                                /* lineNo */
  32,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo ei_emlrtECI = { 3,  /* nDims */
  1261,                                /* lineNo */
  86,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo fi_emlrtECI = { 3,  /* nDims */
  1261,                                /* lineNo */
  63,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo gi_emlrtECI = { 3,  /* nDims */
  1267,                                /* lineNo */
  34,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo hi_emlrtECI = { 3,  /* nDims */
  1268,                                /* lineNo */
  34,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo ii_emlrtECI = { 3,  /* nDims */
  1269,                                /* lineNo */
  34,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo ji_emlrtECI = { 3,  /* nDims */
  1270,                                /* lineNo */
  34,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo ki_emlrtECI = { 3,  /* nDims */
  1271,                                /* lineNo */
  34,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo li_emlrtECI = { 3,  /* nDims */
  1272,                                /* lineNo */
  34,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo mi_emlrtECI = { 3,  /* nDims */
  1273,                                /* lineNo */
  34,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo ni_emlrtECI = { 3,  /* nDims */
  1274,                                /* lineNo */
  34,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo oi_emlrtECI = { 3,  /* nDims */
  1275,                                /* lineNo */
  34,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo pi_emlrtECI = { 3,  /* nDims */
  1276,                                /* lineNo */
  34,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo qi_emlrtECI = { 3,  /* nDims */
  1277,                                /* lineNo */
  34,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo ri_emlrtECI = { 3,  /* nDims */
  1278,                                /* lineNo */
  34,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo si_emlrtECI = { 3,  /* nDims */
  1279,                                /* lineNo */
  34,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo ti_emlrtECI = { 3,  /* nDims */
  1281,                                /* lineNo */
  32,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo ui_emlrtECI = { 3,  /* nDims */
  1281,                                /* lineNo */
  86,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo vi_emlrtECI = { 3,  /* nDims */
  1281,                                /* lineNo */
  63,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo wi_emlrtECI = { 3,  /* nDims */
  1414,                                /* lineNo */
  84,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo xi_emlrtECI = { 3,  /* nDims */
  1414,                                /* lineNo */
  63,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo yi_emlrtECI = { 3,  /* nDims */
  1420,                                /* lineNo */
  91,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo aj_emlrtECI = { 3,  /* nDims */
  1421,                                /* lineNo */
  91,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo bj_emlrtECI = { 3,  /* nDims */
  1422,                                /* lineNo */
  91,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo cj_emlrtECI = { 3,  /* nDims */
  1423,                                /* lineNo */
  91,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo dj_emlrtECI = { 3,  /* nDims */
  1424,                                /* lineNo */
  91,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo ej_emlrtECI = { 3,  /* nDims */
  1425,                                /* lineNo */
  91,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo fj_emlrtECI = { 3,  /* nDims */
  1426,                                /* lineNo */
  91,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo gj_emlrtECI = { 3,  /* nDims */
  1440,                                /* lineNo */
  94,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo hj_emlrtECI = { 3,  /* nDims */
  1440,                                /* lineNo */
  144,                                 /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo ij_emlrtECI = { 3,  /* nDims */
  1440,                                /* lineNo */
  123,                                 /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo jj_emlrtECI = { 3,  /* nDims */
  1834,                                /* lineNo */
  64,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo kj_emlrtECI = { 3,  /* nDims */
  1834,                                /* lineNo */
  41,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo lj_emlrtECI = { 3,  /* nDims */
  1835,                                /* lineNo */
  64,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo mj_emlrtECI = { 3,  /* nDims */
  1835,                                /* lineNo */
  41,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo nj_emlrtECI = { 3,  /* nDims */
  1836,                                /* lineNo */
  64,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo oj_emlrtECI = { 3,  /* nDims */
  1836,                                /* lineNo */
  41,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo pj_emlrtECI = { 3,  /* nDims */
  1847,                                /* lineNo */
  64,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo qj_emlrtECI = { 3,  /* nDims */
  1847,                                /* lineNo */
  41,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo rj_emlrtECI = { 3,  /* nDims */
  1848,                                /* lineNo */
  64,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo sj_emlrtECI = { 3,  /* nDims */
  1848,                                /* lineNo */
  41,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo tj_emlrtECI = { 3,  /* nDims */
  1849,                                /* lineNo */
  64,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo uj_emlrtECI = { 3,  /* nDims */
  1849,                                /* lineNo */
  41,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo vj_emlrtECI = { 3,  /* nDims */
  1860,                                /* lineNo */
  64,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo wj_emlrtECI = { 3,  /* nDims */
  1860,                                /* lineNo */
  41,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo xj_emlrtECI = { 3,  /* nDims */
  1861,                                /* lineNo */
  64,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo yj_emlrtECI = { 3,  /* nDims */
  1861,                                /* lineNo */
  41,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo ak_emlrtECI = { 3,  /* nDims */
  1862,                                /* lineNo */
  64,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo bk_emlrtECI = { 3,  /* nDims */
  1862,                                /* lineNo */
  41,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo ck_emlrtECI = { 3,  /* nDims */
  1873,                                /* lineNo */
  60,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo dk_emlrtECI = { 3,  /* nDims */
  1873,                                /* lineNo */
  39,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo ek_emlrtECI = { 3,  /* nDims */
  1874,                                /* lineNo */
  60,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo fk_emlrtECI = { 3,  /* nDims */
  1874,                                /* lineNo */
  39,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo gk_emlrtECI = { 3,  /* nDims */
  1875,                                /* lineNo */
  60,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo hk_emlrtECI = { 3,  /* nDims */
  1875,                                /* lineNo */
  39,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo ik_emlrtECI = { 3,  /* nDims */
  1876,                                /* lineNo */
  60,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo jk_emlrtECI = { 3,  /* nDims */
  1876,                                /* lineNo */
  39,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo kk_emlrtECI = { 3,  /* nDims */
  1979,                                /* lineNo */
  19,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo lk_emlrtECI = { 3,  /* nDims */
  1980,                                /* lineNo */
  19,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo mk_emlrtECI = { 3,  /* nDims */
  1981,                                /* lineNo */
  19,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo nk_emlrtECI = { 3,  /* nDims */
  2010,                                /* lineNo */
  73,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo ok_emlrtECI = { 3,  /* nDims */
  2010,                                /* lineNo */
  98,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtECInfo pk_emlrtECI = { 3,  /* nDims */
  2010,                                /* lineNo */
  123,                                 /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtBCInfo gd_emlrtBCI = { 1,  /* iFirst */
  61,                                  /* iLast */
  2036,                                /* lineNo */
  12,                                  /* colNo */
  "Controls",                          /* aName */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo qk_emlrtECI = { -1, /* nDims */
  2036,                                /* lineNo */
  1,                                   /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo qc_emlrtRTEI = { 422,/* lineNo */
  1,                                   /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo rc_emlrtRTEI = { 423,/* lineNo */
  1,                                   /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo sc_emlrtRTEI = { 425,/* lineNo */
  30,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo tc_emlrtRTEI = { 426,/* lineNo */
  30,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo uc_emlrtRTEI = { 427,/* lineNo */
  30,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo vc_emlrtRTEI = { 429,/* lineNo */
  30,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo wc_emlrtRTEI = { 430,/* lineNo */
  30,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo xc_emlrtRTEI = { 431,/* lineNo */
  30,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo yc_emlrtRTEI = { 436,/* lineNo */
  6,                                   /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo ad_emlrtRTEI = { 448,/* lineNo */
  8,                                   /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo bd_emlrtRTEI = { 448,/* lineNo */
  50,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo cd_emlrtRTEI = { 448,/* lineNo */
  92,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo dd_emlrtRTEI = { 448,/* lineNo */
  1,                                   /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo ed_emlrtRTEI = { 449,/* lineNo */
  8,                                   /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo fd_emlrtRTEI = { 449,/* lineNo */
  50,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo gd_emlrtRTEI = { 449,/* lineNo */
  92,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo hd_emlrtRTEI = { 449,/* lineNo */
  1,                                   /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo id_emlrtRTEI = { 450,/* lineNo */
  8,                                   /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo jd_emlrtRTEI = { 450,/* lineNo */
  50,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo kd_emlrtRTEI = { 450,/* lineNo */
  92,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo ld_emlrtRTEI = { 450,/* lineNo */
  1,                                   /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo md_emlrtRTEI = { 453,/* lineNo */
  1,                                   /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo nd_emlrtRTEI = { 483,/* lineNo */
  1,                                   /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo od_emlrtRTEI = { 500,/* lineNo */
  1,                                   /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo pd_emlrtRTEI = { 517,/* lineNo */
  19,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo qd_emlrtRTEI = { 517,/* lineNo */
  64,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo rd_emlrtRTEI = { 517,/* lineNo */
  1,                                   /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo sd_emlrtRTEI = { 518,/* lineNo */
  19,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo td_emlrtRTEI = { 518,/* lineNo */
  64,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo ud_emlrtRTEI = { 518,/* lineNo */
  1,                                   /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo vd_emlrtRTEI = { 519,/* lineNo */
  19,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo wd_emlrtRTEI = { 519,/* lineNo */
  64,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo xd_emlrtRTEI = { 519,/* lineNo */
  1,                                   /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo yd_emlrtRTEI = { 525,/* lineNo */
  1,                                   /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo ae_emlrtRTEI = { 527,/* lineNo */
  13,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo be_emlrtRTEI = { 528,/* lineNo */
  11,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo ce_emlrtRTEI = { 528,/* lineNo */
  1,                                   /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo de_emlrtRTEI = { 783,/* lineNo */
  1,                                   /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo ee_emlrtRTEI = { 784,/* lineNo */
  1,                                   /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo fe_emlrtRTEI = { 785,/* lineNo */
  1,                                   /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo ge_emlrtRTEI = { 786,/* lineNo */
  1,                                   /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo he_emlrtRTEI = { 787,/* lineNo */
  1,                                   /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo ie_emlrtRTEI = { 788,/* lineNo */
  1,                                   /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo je_emlrtRTEI = { 789,/* lineNo */
  1,                                   /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo ke_emlrtRTEI = { 790,/* lineNo */
  1,                                   /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo le_emlrtRTEI = { 802,/* lineNo */
  1,                                   /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo me_emlrtRTEI = { 803,/* lineNo */
  1,                                   /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo ne_emlrtRTEI = { 804,/* lineNo */
  1,                                   /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo oe_emlrtRTEI = { 805,/* lineNo */
  1,                                   /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo pe_emlrtRTEI = { 806,/* lineNo */
  1,                                   /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo qe_emlrtRTEI = { 807,/* lineNo */
  1,                                   /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo re_emlrtRTEI = { 808,/* lineNo */
  1,                                   /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo se_emlrtRTEI = { 809,/* lineNo */
  1,                                   /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo te_emlrtRTEI = { 821,/* lineNo */
  1,                                   /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo ue_emlrtRTEI = { 822,/* lineNo */
  1,                                   /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo ve_emlrtRTEI = { 823,/* lineNo */
  1,                                   /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo we_emlrtRTEI = { 824,/* lineNo */
  1,                                   /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo xe_emlrtRTEI = { 825,/* lineNo */
  1,                                   /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo ye_emlrtRTEI = { 826,/* lineNo */
  1,                                   /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo af_emlrtRTEI = { 827,/* lineNo */
  1,                                   /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo bf_emlrtRTEI = { 828,/* lineNo */
  1,                                   /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo cf_emlrtRTEI = { 988,/* lineNo */
  8,                                   /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo df_emlrtRTEI = { 988,/* lineNo */
  22,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo ef_emlrtRTEI = { 988,/* lineNo */
  36,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo ff_emlrtRTEI = { 1049,/* lineNo */
  14,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo gf_emlrtRTEI = { 1050,/* lineNo */
  14,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo hf_emlrtRTEI = { 1051,/* lineNo */
  14,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo if_emlrtRTEI = { 1052,/* lineNo */
  14,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo jf_emlrtRTEI = { 1053,/* lineNo */
  14,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo kf_emlrtRTEI = { 1060,/* lineNo */
  9,                                   /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo lf_emlrtRTEI = { 1060,/* lineNo */
  24,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo mf_emlrtRTEI = { 1060,/* lineNo */
  39,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo nf_emlrtRTEI = { 1060,/* lineNo */
  54,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo of_emlrtRTEI = { 1060,/* lineNo */
  75,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo pf_emlrtRTEI = { 1060,/* lineNo */
  96,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo qf_emlrtRTEI = { 1060,/* lineNo */
  117,                                 /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo rf_emlrtRTEI = { 1061,/* lineNo */
  9,                                   /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo sf_emlrtRTEI = { 1061,/* lineNo */
  28,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo tf_emlrtRTEI = { 1061,/* lineNo */
  49,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo uf_emlrtRTEI = { 1068,/* lineNo */
  14,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo vf_emlrtRTEI = { 1069,/* lineNo */
  14,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo wf_emlrtRTEI = { 1070,/* lineNo */
  14,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo xf_emlrtRTEI = { 1071,/* lineNo */
  14,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo yf_emlrtRTEI = { 1072,/* lineNo */
  14,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo ag_emlrtRTEI = { 1079,/* lineNo */
  9,                                   /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo bg_emlrtRTEI = { 1079,/* lineNo */
  24,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo cg_emlrtRTEI = { 1079,/* lineNo */
  39,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo dg_emlrtRTEI = { 1079,/* lineNo */
  54,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo eg_emlrtRTEI = { 1079,/* lineNo */
  75,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo fg_emlrtRTEI = { 1079,/* lineNo */
  96,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo gg_emlrtRTEI = { 1079,/* lineNo */
  117,                                 /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo hg_emlrtRTEI = { 1080,/* lineNo */
  9,                                   /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo ig_emlrtRTEI = { 1080,/* lineNo */
  28,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo jg_emlrtRTEI = { 1080,/* lineNo */
  49,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo kg_emlrtRTEI = { 1087,/* lineNo */
  14,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo lg_emlrtRTEI = { 1088,/* lineNo */
  14,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo mg_emlrtRTEI = { 1089,/* lineNo */
  14,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo ng_emlrtRTEI = { 1090,/* lineNo */
  14,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo og_emlrtRTEI = { 1091,/* lineNo */
  14,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo pg_emlrtRTEI = { 1098,/* lineNo */
  9,                                   /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo qg_emlrtRTEI = { 1098,/* lineNo */
  24,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo rg_emlrtRTEI = { 1098,/* lineNo */
  39,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo sg_emlrtRTEI = { 1098,/* lineNo */
  54,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo tg_emlrtRTEI = { 1098,/* lineNo */
  75,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo ug_emlrtRTEI = { 1098,/* lineNo */
  96,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo vg_emlrtRTEI = { 1098,/* lineNo */
  117,                                 /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo wg_emlrtRTEI = { 1099,/* lineNo */
  9,                                   /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo xg_emlrtRTEI = { 1099,/* lineNo */
  28,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo yg_emlrtRTEI = { 1099,/* lineNo */
  49,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo ah_emlrtRTEI = { 1116,/* lineNo */
  9,                                   /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo bh_emlrtRTEI = { 1131,/* lineNo */
  9,                                   /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo ch_emlrtRTEI = { 1146,/* lineNo */
  9,                                   /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo dh_emlrtRTEI = { 1181,/* lineNo */
  49,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo eh_emlrtRTEI = { 1201,/* lineNo */
  49,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo fh_emlrtRTEI = { 1221,/* lineNo */
  49,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo gh_emlrtRTEI = { 1241,/* lineNo */
  86,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo hh_emlrtRTEI = { 1261,/* lineNo */
  86,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo ih_emlrtRTEI = { 1281,/* lineNo */
  86,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo jh_emlrtRTEI = { 1414,/* lineNo */
  91,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo kh_emlrtRTEI = { 1440,/* lineNo */
  151,                                 /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo lh_emlrtRTEI = { 1834,/* lineNo */
  64,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo mh_emlrtRTEI = { 1835,/* lineNo */
  64,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo nh_emlrtRTEI = { 1836,/* lineNo */
  64,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo oh_emlrtRTEI = { 1847,/* lineNo */
  64,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo ph_emlrtRTEI = { 1848,/* lineNo */
  64,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo qh_emlrtRTEI = { 1849,/* lineNo */
  64,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo rh_emlrtRTEI = { 1860,/* lineNo */
  64,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo sh_emlrtRTEI = { 1861,/* lineNo */
  64,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo th_emlrtRTEI = { 1862,/* lineNo */
  64,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo uh_emlrtRTEI = { 1873,/* lineNo */
  60,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo vh_emlrtRTEI = { 1874,/* lineNo */
  60,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo wh_emlrtRTEI = { 1875,/* lineNo */
  60,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo xh_emlrtRTEI = { 1876,/* lineNo */
  60,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo yh_emlrtRTEI = { 1919,/* lineNo */
  16,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo ai_emlrtRTEI = { 1955,/* lineNo */
  9,                                   /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo bi_emlrtRTEI = { 2000,/* lineNo */
  13,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo ci_emlrtRTEI = { 2010,/* lineNo */
  73,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo di_emlrtRTEI = { 2010,/* lineNo */
  98,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo ei_emlrtRTEI = { 2010,/* lineNo */
  123,                                 /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo fi_emlrtRTEI = { 436,/* lineNo */
  1,                                   /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo gi_emlrtRTEI = { 437,/* lineNo */
  1,                                   /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo hi_emlrtRTEI = { 438,/* lineNo */
  1,                                   /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo ii_emlrtRTEI = { 709,/* lineNo */
  1,                                   /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo ji_emlrtRTEI = { 710,/* lineNo */
  1,                                   /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo ki_emlrtRTEI = { 711,/* lineNo */
  1,                                   /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo li_emlrtRTEI = { 712,/* lineNo */
  1,                                   /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo mi_emlrtRTEI = { 713,/* lineNo */
  1,                                   /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo ni_emlrtRTEI = { 714,/* lineNo */
  1,                                   /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo oi_emlrtRTEI = { 780,/* lineNo */
  1,                                   /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo pi_emlrtRTEI = { 781,/* lineNo */
  1,                                   /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo qi_emlrtRTEI = { 782,/* lineNo */
  1,                                   /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo ri_emlrtRTEI = { 791,/* lineNo */
  1,                                   /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo si_emlrtRTEI = { 792,/* lineNo */
  1,                                   /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo ti_emlrtRTEI = { 799,/* lineNo */
  1,                                   /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo ui_emlrtRTEI = { 800,/* lineNo */
  1,                                   /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo vi_emlrtRTEI = { 801,/* lineNo */
  1,                                   /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo wi_emlrtRTEI = { 810,/* lineNo */
  1,                                   /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo xi_emlrtRTEI = { 811,/* lineNo */
  1,                                   /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo yi_emlrtRTEI = { 818,/* lineNo */
  1,                                   /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo aj_emlrtRTEI = { 819,/* lineNo */
  1,                                   /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo bj_emlrtRTEI = { 820,/* lineNo */
  1,                                   /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo cj_emlrtRTEI = { 829,/* lineNo */
  1,                                   /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo dj_emlrtRTEI = { 830,/* lineNo */
  1,                                   /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo ej_emlrtRTEI = { 840,/* lineNo */
  1,                                   /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo fj_emlrtRTEI = { 841,/* lineNo */
  1,                                   /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo gj_emlrtRTEI = { 842,/* lineNo */
  1,                                   /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo hj_emlrtRTEI = { 843,/* lineNo */
  1,                                   /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo ij_emlrtRTEI = { 844,/* lineNo */
  1,                                   /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo jj_emlrtRTEI = { 845,/* lineNo */
  1,                                   /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo kj_emlrtRTEI = { 862,/* lineNo */
  1,                                   /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo lj_emlrtRTEI = { 863,/* lineNo */
  1,                                   /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo mj_emlrtRTEI = { 864,/* lineNo */
  1,                                   /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo nj_emlrtRTEI = { 865,/* lineNo */
  1,                                   /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo oj_emlrtRTEI = { 866,/* lineNo */
  1,                                   /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo pj_emlrtRTEI = { 867,/* lineNo */
  1,                                   /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo qj_emlrtRTEI = { 884,/* lineNo */
  1,                                   /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo rj_emlrtRTEI = { 885,/* lineNo */
  1,                                   /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo sj_emlrtRTEI = { 886,/* lineNo */
  1,                                   /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo tj_emlrtRTEI = { 887,/* lineNo */
  1,                                   /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo uj_emlrtRTEI = { 888,/* lineNo */
  1,                                   /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo vj_emlrtRTEI = { 889,/* lineNo */
  1,                                   /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo wj_emlrtRTEI = { 1961,/* lineNo */
  9,                                   /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo xj_emlrtRTEI = { 1962,/* lineNo */
  9,                                   /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo yj_emlrtRTEI = { 1963,/* lineNo */
  9,                                   /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo ak_emlrtRTEI = { 2003,/* lineNo */
  13,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo bk_emlrtRTEI = { 2004,/* lineNo */
  13,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo ck_emlrtRTEI = { 2005,/* lineNo */
  13,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo dk_emlrtRTEI = { 343,/* lineNo */
  11,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo ek_emlrtRTEI = { 985,/* lineNo */
  13,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo fk_emlrtRTEI = { 986,/* lineNo */
  13,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo gk_emlrtRTEI = { 1049,/* lineNo */
  117,                                 /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo hk_emlrtRTEI = { 1050,/* lineNo */
  117,                                 /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo ik_emlrtRTEI = { 1051,/* lineNo */
  117,                                 /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo jk_emlrtRTEI = { 1052,/* lineNo */
  117,                                 /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo kk_emlrtRTEI = { 1053,/* lineNo */
  117,                                 /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo lk_emlrtRTEI = { 1054,/* lineNo */
  14,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo mk_emlrtRTEI = { 1055,/* lineNo */
  90,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo nk_emlrtRTEI = { 1055,/* lineNo */
  14,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo ok_emlrtRTEI = { 1056,/* lineNo */
  14,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo pk_emlrtRTEI = { 1057,/* lineNo */
  14,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo qk_emlrtRTEI = { 1058,/* lineNo */
  14,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo rk_emlrtRTEI = { 1,/* lineNo */
  38,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRTEInfo sk_emlrtRTEI = { 343,/* lineNo */
  45,                                  /* colNo */
  "NominalSystemMatrix",               /* fName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pName */
};

static emlrtRSInfo mv_emlrtRSI = { 1098,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo nv_emlrtRSI = { 1079,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo ov_emlrtRSI = { 1060,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo pv_emlrtRSI = { 988,/* lineNo */
  "NominalSystemMatrix",               /* fcnName */
  "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\NominalSystemMatrix.m"/* pathName */
};

static emlrtRSInfo qv_emlrtRSI = { 76, /* lineNo */
  "eml_mtimes_helper",                 /* fcnName */
  "D:\\Program Files\\MATLAB\\R2025b\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"/* pathName */
};

/* Function Declarations */
static void b_plus(real_T in1[33], const emxArray_real_T *in2, const real_T in3
                   [33]);
static void binary_expand_op_10(const emlrtStack *sp, real_T in1[34], const
  cell_wrap_6 in2[3], int32_T in3, int32_T in4, const emlrtRSInfo in5, const
  struct4_T *in6, const emxArray_real_T *in7, const real_T in8[15], const real_T
  in9[15], real_T in10, const emxArray_real_T *in11, const real_T in12[15],
  real_T in13, const emxArray_real_T *in14, const real_T in15[15], const real_T
  in16[15], real_T in17);
static void binary_expand_op_102(real_T in1[57], const emxArray_real_T *in2,
  const emxArray_real_T *in3, const real_T in4[68], const real_T in5[57], const
  emxArray_real_T *in6, const real_T in7[57], const emxArray_real_T *in8);
static void binary_expand_op_11(const real_T in2[33], const emxArray_real_T *in3,
  const real_T in4[33], real_T in1[11]);
static void binary_expand_op_123(real_T in1[57], const emxArray_real_T *in2,
  const emxArray_real_T *in3, const real_T in4[68], const real_T in5[57], const
  emxArray_real_T *in6, const real_T in7[57], const emxArray_real_T *in8);
static void binary_expand_op_144(real_T in1[33], const emxArray_real_T *in2,
  const emxArray_real_T *in3, const real_T in4[68], const real_T in5[33], const
  emxArray_real_T *in6, const real_T in7[33], const emxArray_real_T *in8, const
  real_T in9[33], const emxArray_real_T *in10);
static void binary_expand_op_145(const emlrtStack *sp, emxArray_real_T *in1,
  const emlrtRSInfo in2, const emxArray_real_T *in3, const real_T in4[33], const
  emxArray_real_T *in5);
static void binary_expand_op_148(const emlrtStack *sp, const emlrtRSInfo in2,
  const emxArray_real_T *in3, const real_T in4[57], const emxArray_real_T *in5,
  real_T in1[19]);
static void binary_expand_op_15(const real_T in2[57], const emxArray_real_T *in3,
  const real_T in4[57], real_T in1[19]);
static void binary_expand_op_154(real_T in1[57], const emxArray_real_T *in2,
  const real_T in3[57], const emxArray_real_T *in4);
static void binary_expand_op_157(real_T in1[19], const struct3_T *in2, const
  struct0_T *in3, real_T in4, real_T in5, real_T in6, const real_T in7[68],
  const real_T in8[19], const real_T in9[19]);
static void binary_expand_op_158(real_T in1[19], const struct3_T *in2, const
  struct0_T *in3, real_T in4, real_T in5, real_T in6, const real_T in7[19],
  const real_T in8[68], const real_T in9[19], const real_T in10[19]);
static void binary_expand_op_159(real_T in1[19], const struct3_T *in2, const
  struct0_T *in3, real_T in4, real_T in5, real_T in6, const real_T in7[19],
  const real_T in8[68], const real_T in9[19], const real_T in10[19]);
static void binary_expand_op_160(real_T in1[11], const struct2_T *in2, const
  struct0_T *in3, real_T in4, real_T in5, const real_T in6[68], real_T in7,
  real_T in8);
static void binary_expand_op_24(const emlrtRSInfo in2, const real_T in3[33],
  const emxArray_real_T *in4, const emxArray_real_T *in5, const real_T in6[33],
  real_T in1[33]);
static void binary_expand_op_25(const emlrtRSInfo in2, const real_T in3[33],
  const emxArray_real_T *in4, const real_T in5[33], real_T in1[33]);
static void binary_expand_op_32(const emlrtRSInfo in2, const struct2_T *in3,
  const emxArray_real_T *in4, const real_T in5[33], real_T in1[3]);
static void binary_expand_op_33(const emlrtRSInfo in2, const real_T in3[57],
  const emxArray_real_T *in4, const emxArray_real_T *in5, const real_T in6[57],
  real_T in1[57]);
static void binary_expand_op_34(const emlrtRSInfo in2, const real_T in3[57],
  const emxArray_real_T *in4, const real_T in5[57], real_T in1[57]);
static void binary_expand_op_75(const emlrtRSInfo in2, const struct3_T *in3,
  const emxArray_real_T *in4, const real_T in5[57], real_T in1[3]);
static void binary_expand_op_78(cell_wrap_3 *in1, const emxArray_real_T *in2,
  const real_T in3[45], const emxArray_real_T *in4, const emxArray_real_T *in5,
  const emxArray_real_T *in6);
static void binary_expand_op_81(real_T in1[57], const emxArray_real_T *in2,
  const emxArray_real_T *in3, const real_T in4[68], const real_T in5[57], const
  emxArray_real_T *in6, const real_T in7[57], const emxArray_real_T *in8);
static void binary_expand_op_9(const emlrtStack *sp, real_T in1[1156], int32_T
  in2, const cell_wrap_6 in3[3], int32_T in4, int32_T in5, const emlrtRSInfo in6,
  const struct4_T *in7, const emxArray_real_T *in8, const real_T in9[15], const
  emxArray_real_T *in10, const emxArray_real_T *in11, const real_T in12[15]);
static void binary_expand_op_92(const emlrtStack *sp, emxArray_real_T *in1,
  const emlrtRSInfo in2, const emxArray_real_T *in3, const real_T in4[57]);
static void binary_expand_op_94(const emlrtStack *sp, emxArray_real_T *in1,
  const emlrtRSInfo in2, const emxArray_real_T *in3, const real_T in4[57], const
  emxArray_real_T *in5);
static void c_plus(real_T in1[57], const emxArray_real_T *in2);
static void d_plus(real_T in1[57], const emxArray_real_T *in2, const real_T in3
                   [57]);
static void e_plus(real_T in1[33], const real_T in2[33], const emxArray_real_T
                   *in3);
static void f_plus(const emlrtStack *sp, emxArray_real_T *in1, const
                   emxArray_real_T *in2);
static void plus(real_T in1[33], const emxArray_real_T *in2);
static void times(const emlrtStack *sp, emxArray_real_T *in1, const
                  emxArray_real_T *in2);

/* Function Definitions */
static void b_plus(real_T in1[33], const emxArray_real_T *in2, const real_T in3
                   [33])
{
  const real_T *in2_data;
  int32_T aux_0_2;
  int32_T i;
  int32_T stride_0_2;
  in2_data = in2->data;
  stride_0_2 = (in2->size[2] != 1);
  aux_0_2 = 0;
  for (i = 0; i < 11; i++) {
    __m128d r;
    __m128d r1;
    int32_T i1;
    r = _mm_loadu_pd(&in2_data[3 * aux_0_2]);
    r1 = _mm_loadu_pd(&in3[3 * i]);
    _mm_storeu_pd(&in1[3 * i], _mm_add_pd(r, r1));
    i1 = 3 * i + 2;
    in1[i1] = in2_data[3 * aux_0_2 + 2] + in3[i1];
    aux_0_2 += stride_0_2;
  }
}

static void binary_expand_op_10(const emlrtStack *sp, real_T in1[34], const
  cell_wrap_6 in2[3], int32_T in3, int32_T in4, const emlrtRSInfo in5, const
  struct4_T *in6, const emxArray_real_T *in7, const real_T in8[15], const real_T
  in9[15], real_T in10, const emxArray_real_T *in11, const real_T in12[15],
  real_T in13, const emxArray_real_T *in14, const real_T in15[15], const real_T
  in16[15], real_T in17)
{
  jmp_buf * volatile emlrtJBStack;
  emlrtStack st;
  real_T b_in7_data[15];
  const real_T *in11_data;
  const real_T *in14_data;
  const real_T *in7_data;
  real_T d;
  real_T d2;
  int32_T b_loop_ub;
  int32_T binary_expand_op_10_numThreads;
  int32_T i;
  int32_T in7_size;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  int32_T stride_2_0;
  st.prev = sp;
  st.tls = sp->tls;
  in14_data = in14->data;
  in11_data = in11->data;
  in7_data = in7->data;
  loop_ub = (int32_T)in6->nt;
  in7_size = (int32_T)in6->nt;
  stride_0_0 = (in7->size[2] != 1);
  stride_1_0 = (in11->size[2] != 1);
  stride_2_0 = (in14->size[2] != 1);
  b_loop_ub = (int32_T)in6->nt;
  if ((int32_T)in6->nt < 2000) {
    for (i = 0; i < loop_ub; i++) {
      real_T d1;
      d = in9[i];
      d1 = in6->dm_struct[i];
      b_in7_data[i] = (in7_data[i * stride_0_0] * (in8[i] * d + in10 * d1) +
                       in11_data[i * stride_1_0] * (in12[i] * d + in13 * d1)) +
        in14_data[i * stride_2_0] * (in15[i] * in16[i] + in17 * d1);
    }
  } else {
    emlrtEnterParallelRegion((emlrtCTX)sp, omp_in_parallel());
    emlrtPushJmpBuf((emlrtCTX)sp, &emlrtJBStack);
    binary_expand_op_10_numThreads = emlrtAllocRegionTLSs(sp->tls,
      omp_in_parallel(), omp_get_max_threads(), omp_get_num_procs());

#pragma omp parallel for \
 num_threads(binary_expand_op_10_numThreads) \
 private(d,d2)

    for (i = 0; i < b_loop_ub; i++) {
      d = in9[i];
      d2 = in6->dm_struct[i];
      b_in7_data[i] = (in7_data[i * stride_0_0] * (in8[i] * d + in10 * d2) +
                       in11_data[i * stride_1_0] * (in12[i] * d + in13 * d2)) +
        in14_data[i * stride_2_0] * (in15[i] * in16[i] + in17 * d2);
    }

    emlrtPopJmpBuf((emlrtCTX)sp, &emlrtJBStack);
    emlrtExitParallelRegion((emlrtCTX)sp, omp_in_parallel());
  }

  loop_ub = (int8_T)in2[in3].f1[in4] - 1;
  st.site = (emlrtRSInfo *)&in5;
  in1[loop_ub] += f_trapz(&st, in6->BeamSec, b_in7_data, in7_size);
}

static void binary_expand_op_102(real_T in1[57], const emxArray_real_T *in2,
  const emxArray_real_T *in3, const real_T in4[68], const real_T in5[57], const
  emxArray_real_T *in6, const real_T in7[57], const emxArray_real_T *in8)
{
  __m128d r;
  const real_T *in2_data;
  const real_T *in3_data;
  const real_T *in6_data;
  const real_T *in8_data;
  real_T b_in4;
  real_T c_in4;
  real_T d_in4;
  int32_T aux_0_2;
  int32_T aux_1_2;
  int32_T aux_2_2;
  int32_T aux_3_2;
  int32_T i;
  int32_T stride_0_2;
  int32_T stride_1_2;
  int32_T stride_2_2;
  int32_T stride_3_2;
  in8_data = in8->data;
  in6_data = in6->data;
  in3_data = in3->data;
  in2_data = in2->data;
  b_in4 = in4[50];
  c_in4 = in4[51];
  d_in4 = in4[52];
  stride_0_2 = (in2->size[2] != 1);
  stride_1_2 = (in3->size[2] != 1);
  stride_2_2 = (in6->size[2] != 1);
  stride_3_2 = (in8->size[2] != 1);
  aux_0_2 = 0;
  aux_1_2 = 0;
  aux_2_2 = 0;
  aux_3_2 = 0;
  r = _mm_set1_pd(-1.0);
  for (i = 0; i < 19; i++) {
    __m128d r1;
    __m128d r2;
    __m128d r3;
    __m128d r4;
    __m128d r5;
    __m128d r6;
    __m128d r7;
    int32_T i1;
    r1 = _mm_loadu_pd(&in1[3 * i]);
    r2 = _mm_loadu_pd(&in3_data[3 * aux_1_2]);
    r3 = _mm_loadu_pd(&in2_data[3 * aux_0_2]);
    r4 = _mm_loadu_pd(&in5[3 * i]);
    r5 = _mm_loadu_pd(&in6_data[3 * aux_2_2]);
    r6 = _mm_loadu_pd(&in7[3 * i]);
    r7 = _mm_loadu_pd(&in8_data[3 * aux_3_2]);
    _mm_storeu_pd(&in1[3 * i], _mm_add_pd(_mm_add_pd(_mm_add_pd(r3, _mm_mul_pd
      (_mm_add_pd(_mm_mul_pd(r1, r), r2), _mm_set1_pd(b_in4))), _mm_mul_pd
      (_mm_add_pd(_mm_mul_pd(r4, r), r5), _mm_set1_pd(c_in4))), _mm_mul_pd
      (_mm_add_pd(_mm_mul_pd(r6, r), r7), _mm_set1_pd(d_in4))));
    i1 = 3 * i + 2;
    in1[i1] = ((in2_data[3 * aux_0_2 + 2] + (-in1[i1] + in3_data[3 * aux_1_2 + 2])
                * b_in4) + (-in5[i1] + in6_data[3 * aux_2_2 + 2]) * c_in4) +
      (-in7[i1] + in8_data[3 * aux_3_2 + 2]) * d_in4;
    aux_3_2 += stride_3_2;
    aux_2_2 += stride_2_2;
    aux_1_2 += stride_1_2;
    aux_0_2 += stride_0_2;
  }
}

static void binary_expand_op_11(const real_T in2[33], const emxArray_real_T *in3,
  const real_T in4[33], real_T in1[11])
{
  real_T b_in3[33];
  const real_T *in3_data;
  int32_T aux_0_2;
  int32_T i;
  int32_T stride_0_2;
  in3_data = in3->data;
  stride_0_2 = (in3->size[2] != 1);
  aux_0_2 = 0;
  for (i = 0; i < 11; i++) {
    __m128d r;
    __m128d r1;
    int32_T in3_tmp;
    r = _mm_loadu_pd(&in3_data[3 * aux_0_2]);
    r1 = _mm_loadu_pd(&in4[3 * i]);
    _mm_storeu_pd(&b_in3[3 * i], _mm_sub_pd(r, r1));
    in3_tmp = 3 * i + 2;
    b_in3[in3_tmp] = in3_data[3 * aux_0_2 + 2] - in4[in3_tmp];
    aux_0_2 += stride_0_2;
  }

  h_dot(in2, b_in3, in1);
}

static void binary_expand_op_123(real_T in1[57], const emxArray_real_T *in2,
  const emxArray_real_T *in3, const real_T in4[68], const real_T in5[57], const
  emxArray_real_T *in6, const real_T in7[57], const emxArray_real_T *in8)
{
  __m128d r;
  const real_T *in2_data;
  const real_T *in3_data;
  const real_T *in6_data;
  const real_T *in8_data;
  real_T b_in4;
  real_T c_in4;
  real_T d_in4;
  int32_T aux_0_2;
  int32_T aux_1_2;
  int32_T aux_2_2;
  int32_T aux_3_2;
  int32_T i;
  int32_T stride_0_2;
  int32_T stride_1_2;
  int32_T stride_2_2;
  int32_T stride_3_2;
  in8_data = in8->data;
  in6_data = in6->data;
  in3_data = in3->data;
  in2_data = in2->data;
  b_in4 = in4[47];
  c_in4 = in4[48];
  d_in4 = in4[49];
  stride_0_2 = (in2->size[2] != 1);
  stride_1_2 = (in3->size[2] != 1);
  stride_2_2 = (in6->size[2] != 1);
  stride_3_2 = (in8->size[2] != 1);
  aux_0_2 = 0;
  aux_1_2 = 0;
  aux_2_2 = 0;
  aux_3_2 = 0;
  r = _mm_set1_pd(-1.0);
  for (i = 0; i < 19; i++) {
    __m128d r1;
    __m128d r2;
    __m128d r3;
    __m128d r4;
    __m128d r5;
    __m128d r6;
    __m128d r7;
    int32_T i1;
    r1 = _mm_loadu_pd(&in1[3 * i]);
    r2 = _mm_loadu_pd(&in3_data[3 * aux_1_2]);
    r3 = _mm_loadu_pd(&in2_data[3 * aux_0_2]);
    r4 = _mm_loadu_pd(&in5[3 * i]);
    r5 = _mm_loadu_pd(&in6_data[3 * aux_2_2]);
    r6 = _mm_loadu_pd(&in7[3 * i]);
    r7 = _mm_loadu_pd(&in8_data[3 * aux_3_2]);
    _mm_storeu_pd(&in1[3 * i], _mm_add_pd(_mm_add_pd(_mm_add_pd(r3, _mm_mul_pd
      (_mm_add_pd(_mm_mul_pd(r1, r), r2), _mm_set1_pd(b_in4))), _mm_mul_pd
      (_mm_add_pd(_mm_mul_pd(r4, r), r5), _mm_set1_pd(c_in4))), _mm_mul_pd
      (_mm_add_pd(_mm_mul_pd(r6, r), r7), _mm_set1_pd(d_in4))));
    i1 = 3 * i + 2;
    in1[i1] = ((in2_data[3 * aux_0_2 + 2] + (-in1[i1] + in3_data[3 * aux_1_2 + 2])
                * b_in4) + (-in5[i1] + in6_data[3 * aux_2_2 + 2]) * c_in4) +
      (-in7[i1] + in8_data[3 * aux_3_2 + 2]) * d_in4;
    aux_3_2 += stride_3_2;
    aux_2_2 += stride_2_2;
    aux_1_2 += stride_1_2;
    aux_0_2 += stride_0_2;
  }
}

static void binary_expand_op_144(real_T in1[33], const emxArray_real_T *in2,
  const emxArray_real_T *in3, const real_T in4[68], const real_T in5[33], const
  emxArray_real_T *in6, const real_T in7[33], const emxArray_real_T *in8, const
  real_T in9[33], const emxArray_real_T *in10)
{
  __m128d r;
  const real_T *in10_data;
  const real_T *in2_data;
  const real_T *in3_data;
  const real_T *in6_data;
  const real_T *in8_data;
  real_T b_in4;
  real_T c_in4;
  real_T d_in4;
  real_T e_in4;
  int32_T aux_0_2;
  int32_T aux_1_2;
  int32_T aux_2_2;
  int32_T aux_3_2;
  int32_T aux_4_2;
  int32_T i;
  int32_T stride_0_2;
  int32_T stride_1_2;
  int32_T stride_2_2;
  int32_T stride_3_2;
  int32_T stride_4_2;
  in10_data = in10->data;
  in8_data = in8->data;
  in6_data = in6->data;
  in3_data = in3->data;
  in2_data = in2->data;
  b_in4 = in4[40];
  c_in4 = in4[41];
  d_in4 = in4[42];
  e_in4 = in4[43];
  stride_0_2 = (in2->size[2] != 1);
  stride_1_2 = (in3->size[2] != 1);
  stride_2_2 = (in6->size[2] != 1);
  stride_3_2 = (in8->size[2] != 1);
  stride_4_2 = (in10->size[2] != 1);
  aux_0_2 = 0;
  aux_1_2 = 0;
  aux_2_2 = 0;
  aux_3_2 = 0;
  aux_4_2 = 0;
  r = _mm_set1_pd(-1.0);
  for (i = 0; i < 11; i++) {
    __m128d r1;
    __m128d r2;
    __m128d r3;
    __m128d r4;
    __m128d r5;
    __m128d r6;
    __m128d r7;
    __m128d r8;
    __m128d r9;
    int32_T i1;
    r1 = _mm_loadu_pd(&in1[3 * i]);
    r2 = _mm_loadu_pd(&in3_data[3 * aux_1_2]);
    r3 = _mm_loadu_pd(&in2_data[3 * aux_0_2]);
    r4 = _mm_loadu_pd(&in5[3 * i]);
    r5 = _mm_loadu_pd(&in6_data[3 * aux_2_2]);
    r6 = _mm_loadu_pd(&in7[3 * i]);
    r7 = _mm_loadu_pd(&in8_data[3 * aux_3_2]);
    r8 = _mm_loadu_pd(&in9[3 * i]);
    r9 = _mm_loadu_pd(&in10_data[3 * aux_4_2]);
    _mm_storeu_pd(&in1[3 * i], _mm_add_pd(_mm_add_pd(_mm_add_pd(_mm_add_pd(r3,
      _mm_mul_pd(_mm_add_pd(_mm_mul_pd(r1, r), r2), _mm_set1_pd(b_in4))),
      _mm_mul_pd(_mm_add_pd(_mm_mul_pd(r4, r), r5), _mm_set1_pd(c_in4))),
      _mm_mul_pd(_mm_add_pd(_mm_mul_pd(r6, r), r7), _mm_set1_pd(d_in4))),
      _mm_mul_pd(_mm_add_pd(_mm_mul_pd(r8, r), r9), _mm_set1_pd(e_in4))));
    i1 = 3 * i + 2;
    in1[i1] = (((in2_data[3 * aux_0_2 + 2] + (-in1[i1] + in3_data[3 * aux_1_2 +
      2]) * b_in4) + (-in5[i1] + in6_data[3 * aux_2_2 + 2]) * c_in4) + (-in7[i1]
                + in8_data[3 * aux_3_2 + 2]) * d_in4) + (-in9[i1] + in10_data[3 *
      aux_4_2 + 2]) * e_in4;
    aux_4_2 += stride_4_2;
    aux_3_2 += stride_3_2;
    aux_2_2 += stride_2_2;
    aux_1_2 += stride_1_2;
    aux_0_2 += stride_0_2;
  }
}

static void binary_expand_op_145(const emlrtStack *sp, emxArray_real_T *in1,
  const emlrtRSInfo in2, const emxArray_real_T *in3, const real_T in4[33], const
  emxArray_real_T *in5)
{
  emlrtStack st;
  real_T b_in4[33];
  const real_T *in5_data;
  int32_T aux_0_2;
  int32_T i;
  int32_T stride_0_2;
  st.prev = sp;
  st.tls = sp->tls;
  in5_data = in5->data;
  stride_0_2 = (in5->size[2] != 1);
  aux_0_2 = 0;
  for (i = 0; i < 11; i++) {
    __m128d r;
    __m128d r1;
    int32_T in4_tmp;
    r = _mm_loadu_pd(&in4[3 * i]);
    r1 = _mm_loadu_pd(&in5_data[3 * aux_0_2]);
    _mm_storeu_pd(&b_in4[3 * i], _mm_add_pd(r, r1));
    in4_tmp = 3 * i + 2;
    b_in4[in4_tmp] = in4[in4_tmp] + in5_data[3 * aux_0_2 + 2];
    aux_0_2 += stride_0_2;
  }

  st.site = (emlrtRSInfo *)&in2;
  c_cross(&st, in3, b_in4, in1);
}

static void binary_expand_op_148(const emlrtStack *sp, const emlrtRSInfo in2,
  const emxArray_real_T *in3, const real_T in4[57], const emxArray_real_T *in5,
  real_T in1[19])
{
  emlrtStack st;
  real_T b_in3[57];
  const real_T *in3_data;
  int32_T aux_0_2;
  int32_T i;
  int32_T stride_0_2;
  st.prev = sp;
  st.tls = sp->tls;
  in3_data = in3->data;
  stride_0_2 = (in3->size[2] != 1);
  aux_0_2 = 0;
  for (i = 0; i < 19; i++) {
    __m128d r;
    __m128d r1;
    int32_T in3_tmp;
    r = _mm_loadu_pd(&in3_data[3 * aux_0_2]);
    r1 = _mm_loadu_pd(&in4[3 * i]);
    _mm_storeu_pd(&b_in3[3 * i], _mm_add_pd(r, r1));
    in3_tmp = 3 * i + 2;
    b_in3[in3_tmp] = in3_data[3 * aux_0_2 + 2] + in4[in3_tmp];
    aux_0_2 += stride_0_2;
  }

  st.site = (emlrtRSInfo *)&in2;
  dot(&st, b_in3, in5, in1);
}

static void binary_expand_op_15(const real_T in2[57], const emxArray_real_T *in3,
  const real_T in4[57], real_T in1[19])
{
  real_T b_in3[57];
  const real_T *in3_data;
  int32_T aux_0_2;
  int32_T i;
  int32_T stride_0_2;
  in3_data = in3->data;
  stride_0_2 = (in3->size[2] != 1);
  aux_0_2 = 0;
  for (i = 0; i < 19; i++) {
    __m128d r;
    __m128d r1;
    int32_T in3_tmp;
    r = _mm_loadu_pd(&in3_data[3 * aux_0_2]);
    r1 = _mm_loadu_pd(&in4[3 * i]);
    _mm_storeu_pd(&b_in3[3 * i], _mm_sub_pd(r, r1));
    in3_tmp = 3 * i + 2;
    b_in3[in3_tmp] = in3_data[3 * aux_0_2 + 2] - in4[in3_tmp];
    aux_0_2 += stride_0_2;
  }

  g_dot(in2, b_in3, in1);
}

static void binary_expand_op_154(real_T in1[57], const emxArray_real_T *in2,
  const real_T in3[57], const emxArray_real_T *in4)
{
  const real_T *in2_data;
  const real_T *in4_data;
  int32_T aux_0_2;
  int32_T aux_1_2;
  int32_T i;
  int32_T stride_0_2;
  int32_T stride_1_2;
  in4_data = in4->data;
  in2_data = in2->data;
  stride_0_2 = (in2->size[2] != 1);
  stride_1_2 = (in4->size[2] != 1);
  aux_0_2 = 0;
  aux_1_2 = 0;
  for (i = 0; i < 19; i++) {
    __m128d r;
    __m128d r1;
    __m128d r2;
    int32_T i1;
    r = _mm_loadu_pd(&in2_data[3 * aux_0_2]);
    r1 = _mm_loadu_pd(&in3[3 * i]);
    r2 = _mm_loadu_pd(&in4_data[3 * aux_1_2]);
    _mm_storeu_pd(&in1[3 * i], _mm_add_pd(_mm_add_pd(r, r1), r2));
    i1 = 3 * i + 2;
    in1[i1] = (in2_data[3 * aux_0_2 + 2] + in3[i1]) + in4_data[3 * aux_1_2 + 2];
    aux_1_2 += stride_1_2;
    aux_0_2 += stride_0_2;
  }
}

static void binary_expand_op_157(real_T in1[19], const struct3_T *in2, const
  struct0_T *in3, real_T in4, real_T in5, real_T in6, const real_T in7[68],
  const real_T in8[19], const real_T in9[19])
{
  real_T b_in7;
  real_T c_in7;
  real_T d_in7;
  int32_T i;
  int32_T stride_0_2;
  b_in7 = in7[19];
  c_in7 = in7[21];
  d_in7 = in7[20];
  stride_0_2 = ((int32_T)in2->nb != 1);
  for (i = 0; i < 19; i++) {
    in1[i] = (in2->BldSec[i * stride_0_2] + in3->HubRad) - 0.5 *
      (((((in2->s11_B1[i] * in4 + in2->s22_B1[i] * in5) + in2->s33_B1[i] * in6)
         + in1[i] * b_in7 * c_in7) + in8[i] * c_in7 * d_in7) + in9[i] * b_in7 *
       d_in7);
  }
}

static void binary_expand_op_158(real_T in1[19], const struct3_T *in2, const
  struct0_T *in3, real_T in4, real_T in5, real_T in6, const real_T in7[19],
  const real_T in8[68], const real_T in9[19], const real_T in10[19])
{
  real_T b_in8;
  real_T c_in8;
  real_T d_in8;
  int32_T i;
  int32_T stride_0_2;
  b_in8 = in8[16];
  c_in8 = in8[18];
  d_in8 = in8[17];
  stride_0_2 = ((int32_T)in2->nb != 1);
  for (i = 0; i < 19; i++) {
    in1[i] = (in2->BldSec[i * stride_0_2] + in3->HubRad) - 0.5 *
      (((((in2->s11_B1[i] * in4 + in2->s22_B1[i] * in5) + in2->s33_B1[i] * in6)
         + in7[i] * b_in8 * c_in8) + in9[i] * c_in8 * d_in8) + in10[i] * b_in8 *
       d_in8);
  }
}

static void binary_expand_op_159(real_T in1[19], const struct3_T *in2, const
  struct0_T *in3, real_T in4, real_T in5, real_T in6, const real_T in7[19],
  const real_T in8[68], const real_T in9[19], const real_T in10[19])
{
  real_T b_in8;
  real_T c_in8;
  real_T d_in8;
  int32_T i;
  int32_T stride_0_2;
  b_in8 = in8[13];
  c_in8 = in8[15];
  d_in8 = in8[14];
  stride_0_2 = ((int32_T)in2->nb != 1);
  for (i = 0; i < 19; i++) {
    in1[i] = (in2->BldSec[i * stride_0_2] + in3->HubRad) - 0.5 *
      (((((in2->s11_B1[i] * in4 + in2->s22_B1[i] * in5) + in2->s33_B1[i] * in6)
         + in7[i] * b_in8 * c_in8) + in9[i] * c_in8 * d_in8) + in10[i] * b_in8 *
       d_in8);
  }
}

static void binary_expand_op_160(real_T in1[11], const struct2_T *in2, const
  struct0_T *in3, real_T in4, real_T in5, const real_T in6[68], real_T in7,
  real_T in8)
{
  real_T b_in6;
  real_T c_in6;
  real_T d_in6;
  real_T e_in6;
  int32_T i;
  int32_T stride_0_2;
  b_in6 = in6[6];
  c_in6 = in6[8];
  d_in6 = in6[7];
  e_in6 = in6[9];
  stride_0_2 = ((int32_T)in2->nt != 1);
  for (i = 0; i < 11; i++) {
    in1[i] = ((in2->TwrSec[i * stride_0_2] + in3->PtfmRefzt) + in3->TowerBsHt) -
      0.5 * (((((in2->s11_TFA[i] * in4 + in2->s22_TFA[i] * in5) + 2.0 *
                in2->s12_TFA[i] * b_in6 * c_in6) + in2->s11_TSS[i] * in7) +
              in2->s22_TSS[i] * in8) + 2.0 * in2->s12_TSS[i] * d_in6 * e_in6);
  }
}

static void binary_expand_op_24(const emlrtRSInfo in2, const real_T in3[33],
  const emxArray_real_T *in4, const emxArray_real_T *in5, const real_T in6[33],
  real_T in1[33])
{
  real_T b_in3[33];
  real_T b_in5[33];
  const real_T *in4_data;
  const real_T *in5_data;
  int32_T aux_0_2;
  int32_T b_aux_0_2;
  int32_T b_stride_0_2;
  int32_T i;
  int32_T stride_0_2;
  (void)in2;
  in5_data = in5->data;
  in4_data = in4->data;
  stride_0_2 = (in4->size[2] != 1);
  aux_0_2 = 0;
  b_stride_0_2 = (in5->size[2] != 1);
  b_aux_0_2 = 0;
  for (i = 0; i < 11; i++) {
    __m128d r;
    __m128d r1;
    int32_T in3_tmp;
    r = _mm_loadu_pd(&in3[3 * i]);
    r1 = _mm_loadu_pd(&in4_data[3 * aux_0_2]);
    _mm_storeu_pd(&b_in3[3 * i], _mm_sub_pd(r, r1));
    r = _mm_loadu_pd(&in5_data[3 * b_aux_0_2]);
    r1 = _mm_loadu_pd(&in6[3 * i]);
    _mm_storeu_pd(&b_in5[3 * i], _mm_sub_pd(r, r1));
    in3_tmp = 3 * i + 2;
    b_in3[in3_tmp] = in3[in3_tmp] - in4_data[3 * aux_0_2 + 2];
    b_in5[in3_tmp] = in5_data[3 * b_aux_0_2 + 2] - in6[in3_tmp];
    aux_0_2 += stride_0_2;
    b_aux_0_2 += b_stride_0_2;
  }

  f_cross(b_in3, b_in5, in1);
}

static void binary_expand_op_25(const emlrtRSInfo in2, const real_T in3[33],
  const emxArray_real_T *in4, const real_T in5[33], real_T in1[33])
{
  real_T b_in3[33];
  const real_T *in4_data;
  int32_T aux_0_2;
  int32_T i;
  int32_T stride_0_2;
  (void)in2;
  in4_data = in4->data;
  stride_0_2 = (in4->size[2] != 1);
  aux_0_2 = 0;
  for (i = 0; i < 11; i++) {
    __m128d r;
    __m128d r1;
    int32_T in3_tmp;
    r = _mm_loadu_pd(&in3[3 * i]);
    r1 = _mm_loadu_pd(&in4_data[3 * aux_0_2]);
    _mm_storeu_pd(&b_in3[3 * i], _mm_sub_pd(r, r1));
    in3_tmp = 3 * i + 2;
    b_in3[in3_tmp] = in3[in3_tmp] - in4_data[3 * aux_0_2 + 2];
    aux_0_2 += stride_0_2;
  }

  f_cross(b_in3, in5, in1);
}

static void binary_expand_op_32(const emlrtRSInfo in2, const struct2_T *in3,
  const emxArray_real_T *in4, const real_T in5[33], real_T in1[3])
{
  real_T b_in4[33];
  const real_T *in4_data;
  int32_T aux_0_2;
  int32_T i;
  int32_T stride_0_2;
  (void)in2;
  in4_data = in4->data;
  stride_0_2 = (in4->size[2] != 1);
  aux_0_2 = 0;
  for (i = 0; i < 11; i++) {
    __m128d r;
    __m128d r1;
    int32_T in4_tmp;
    r = _mm_loadu_pd(&in4_data[3 * aux_0_2]);
    r1 = _mm_loadu_pd(&in5[3 * i]);
    _mm_storeu_pd(&b_in4[3 * i], _mm_sub_pd(r, r1));
    in4_tmp = 3 * i + 2;
    b_in4[in4_tmp] = in4_data[3 * aux_0_2 + 2] - in5[in4_tmp];
    aux_0_2 += stride_0_2;
  }

  c_trapz(in3->TwrSec, b_in4, in1);
}

static void binary_expand_op_33(const emlrtRSInfo in2, const real_T in3[57],
  const emxArray_real_T *in4, const emxArray_real_T *in5, const real_T in6[57],
  real_T in1[57])
{
  real_T b_in3[57];
  real_T b_in5[57];
  const real_T *in4_data;
  const real_T *in5_data;
  int32_T aux_0_2;
  int32_T b_aux_0_2;
  int32_T b_stride_0_2;
  int32_T i;
  int32_T stride_0_2;
  (void)in2;
  in5_data = in5->data;
  in4_data = in4->data;
  stride_0_2 = (in4->size[2] != 1);
  aux_0_2 = 0;
  b_stride_0_2 = (in5->size[2] != 1);
  b_aux_0_2 = 0;
  for (i = 0; i < 19; i++) {
    __m128d r;
    __m128d r1;
    int32_T in3_tmp;
    r = _mm_loadu_pd(&in3[3 * i]);
    r1 = _mm_loadu_pd(&in4_data[3 * aux_0_2]);
    _mm_storeu_pd(&b_in3[3 * i], _mm_sub_pd(r, r1));
    r = _mm_loadu_pd(&in5_data[3 * b_aux_0_2]);
    r1 = _mm_loadu_pd(&in6[3 * i]);
    _mm_storeu_pd(&b_in5[3 * i], _mm_sub_pd(r, r1));
    in3_tmp = 3 * i + 2;
    b_in3[in3_tmp] = in3[in3_tmp] - in4_data[3 * aux_0_2 + 2];
    b_in5[in3_tmp] = in5_data[3 * b_aux_0_2 + 2] - in6[in3_tmp];
    aux_0_2 += stride_0_2;
    b_aux_0_2 += b_stride_0_2;
  }

  e_cross(b_in3, b_in5, in1);
}

static void binary_expand_op_34(const emlrtRSInfo in2, const real_T in3[57],
  const emxArray_real_T *in4, const real_T in5[57], real_T in1[57])
{
  real_T b_in3[57];
  const real_T *in4_data;
  int32_T aux_0_2;
  int32_T i;
  int32_T stride_0_2;
  (void)in2;
  in4_data = in4->data;
  stride_0_2 = (in4->size[2] != 1);
  aux_0_2 = 0;
  for (i = 0; i < 19; i++) {
    __m128d r;
    __m128d r1;
    int32_T in3_tmp;
    r = _mm_loadu_pd(&in3[3 * i]);
    r1 = _mm_loadu_pd(&in4_data[3 * aux_0_2]);
    _mm_storeu_pd(&b_in3[3 * i], _mm_sub_pd(r, r1));
    in3_tmp = 3 * i + 2;
    b_in3[in3_tmp] = in3[in3_tmp] - in4_data[3 * aux_0_2 + 2];
    aux_0_2 += stride_0_2;
  }

  e_cross(b_in3, in5, in1);
}

static void binary_expand_op_75(const emlrtRSInfo in2, const struct3_T *in3,
  const emxArray_real_T *in4, const real_T in5[57], real_T in1[3])
{
  real_T b_in4[57];
  const real_T *in4_data;
  int32_T aux_0_2;
  int32_T i;
  int32_T stride_0_2;
  (void)in2;
  in4_data = in4->data;
  stride_0_2 = (in4->size[2] != 1);
  aux_0_2 = 0;
  for (i = 0; i < 19; i++) {
    __m128d r;
    __m128d r1;
    int32_T in4_tmp;
    r = _mm_loadu_pd(&in4_data[3 * aux_0_2]);
    r1 = _mm_loadu_pd(&in5[3 * i]);
    _mm_storeu_pd(&b_in4[3 * i], _mm_sub_pd(r, r1));
    in4_tmp = 3 * i + 2;
    b_in4[in4_tmp] = in4_data[3 * aux_0_2 + 2] - in5[in4_tmp];
    aux_0_2 += stride_0_2;
  }

  trapz(in3->BldSec, b_in4, in1);
}

static void binary_expand_op_78(cell_wrap_3 *in1, const emxArray_real_T *in2,
  const real_T in3[45], const emxArray_real_T *in4, const emxArray_real_T *in5,
  const emxArray_real_T *in6)
{
  const real_T *in2_data;
  const real_T *in4_data;
  const real_T *in5_data;
  const real_T *in6_data;
  int32_T aux_0_2;
  int32_T aux_1_2;
  int32_T aux_2_2;
  int32_T aux_3_2;
  int32_T i;
  int32_T stride_0_2;
  int32_T stride_1_2;
  int32_T stride_2_2;
  int32_T stride_3_2;
  in6_data = in6->data;
  in5_data = in5->data;
  in4_data = in4->data;
  in2_data = in2->data;
  stride_0_2 = (in2->size[2] != 1);
  stride_1_2 = (in4->size[2] != 1);
  stride_2_2 = (in5->size[2] != 1);
  stride_3_2 = (in6->size[2] != 1);
  aux_0_2 = 0;
  aux_1_2 = 0;
  aux_2_2 = 0;
  aux_3_2 = 0;
  for (i = 0; i < 15; i++) {
    __m128d r;
    __m128d r1;
    __m128d r2;
    __m128d r3;
    __m128d r4;
    int32_T i1;
    r = _mm_loadu_pd(&in2_data[3 * aux_0_2]);
    r1 = _mm_loadu_pd(&in3[3 * i]);
    r2 = _mm_loadu_pd(&in4_data[3 * aux_1_2]);
    r3 = _mm_loadu_pd(&in5_data[3 * aux_2_2]);
    r4 = _mm_loadu_pd(&in6_data[3 * aux_3_2]);
    _mm_storeu_pd(&in1->f1[3 * i], _mm_add_pd(_mm_add_pd(_mm_add_pd(_mm_add_pd(r,
      r1), r2), r3), r4));
    i1 = 3 * i + 2;
    in1->f1[i1] = (((in2_data[3 * aux_0_2 + 2] + in3[i1]) + in4_data[3 * aux_1_2
                    + 2]) + in5_data[3 * aux_2_2 + 2]) + in6_data[3 * aux_3_2 +
      2];
    aux_3_2 += stride_3_2;
    aux_2_2 += stride_2_2;
    aux_1_2 += stride_1_2;
    aux_0_2 += stride_0_2;
  }
}

static void binary_expand_op_81(real_T in1[57], const emxArray_real_T *in2,
  const emxArray_real_T *in3, const real_T in4[68], const real_T in5[57], const
  emxArray_real_T *in6, const real_T in7[57], const emxArray_real_T *in8)
{
  __m128d r;
  const real_T *in2_data;
  const real_T *in3_data;
  const real_T *in6_data;
  const real_T *in8_data;
  real_T b_in4;
  real_T c_in4;
  real_T d_in4;
  int32_T aux_0_2;
  int32_T aux_1_2;
  int32_T aux_2_2;
  int32_T aux_3_2;
  int32_T i;
  int32_T stride_0_2;
  int32_T stride_1_2;
  int32_T stride_2_2;
  int32_T stride_3_2;
  in8_data = in8->data;
  in6_data = in6->data;
  in3_data = in3->data;
  in2_data = in2->data;
  b_in4 = in4[53];
  c_in4 = in4[54];
  d_in4 = in4[55];
  stride_0_2 = (in2->size[2] != 1);
  stride_1_2 = (in3->size[2] != 1);
  stride_2_2 = (in6->size[2] != 1);
  stride_3_2 = (in8->size[2] != 1);
  aux_0_2 = 0;
  aux_1_2 = 0;
  aux_2_2 = 0;
  aux_3_2 = 0;
  r = _mm_set1_pd(-1.0);
  for (i = 0; i < 19; i++) {
    __m128d r1;
    __m128d r2;
    __m128d r3;
    __m128d r4;
    __m128d r5;
    __m128d r6;
    __m128d r7;
    int32_T i1;
    r1 = _mm_loadu_pd(&in1[3 * i]);
    r2 = _mm_loadu_pd(&in3_data[3 * aux_1_2]);
    r3 = _mm_loadu_pd(&in2_data[3 * aux_0_2]);
    r4 = _mm_loadu_pd(&in5[3 * i]);
    r5 = _mm_loadu_pd(&in6_data[3 * aux_2_2]);
    r6 = _mm_loadu_pd(&in7[3 * i]);
    r7 = _mm_loadu_pd(&in8_data[3 * aux_3_2]);
    _mm_storeu_pd(&in1[3 * i], _mm_add_pd(_mm_add_pd(_mm_add_pd(r3, _mm_mul_pd
      (_mm_add_pd(_mm_mul_pd(r1, r), r2), _mm_set1_pd(b_in4))), _mm_mul_pd
      (_mm_add_pd(_mm_mul_pd(r4, r), r5), _mm_set1_pd(c_in4))), _mm_mul_pd
      (_mm_add_pd(_mm_mul_pd(r6, r), r7), _mm_set1_pd(d_in4))));
    i1 = 3 * i + 2;
    in1[i1] = ((in2_data[3 * aux_0_2 + 2] + (-in1[i1] + in3_data[3 * aux_1_2 + 2])
                * b_in4) + (-in5[i1] + in6_data[3 * aux_2_2 + 2]) * c_in4) +
      (-in7[i1] + in8_data[3 * aux_3_2 + 2]) * d_in4;
    aux_3_2 += stride_3_2;
    aux_2_2 += stride_2_2;
    aux_1_2 += stride_1_2;
    aux_0_2 += stride_0_2;
  }
}

static void binary_expand_op_9(const emlrtStack *sp, real_T in1[1156], int32_T
  in2, const cell_wrap_6 in3[3], int32_T in4, int32_T in5, const emlrtRSInfo in6,
  const struct4_T *in7, const emxArray_real_T *in8, const real_T in9[15], const
  emxArray_real_T *in10, const emxArray_real_T *in11, const real_T in12[15])
{
  jmp_buf * volatile emlrtJBStack;
  emlrtStack st;
  real_T b_in8_data[15];
  const real_T *in10_data;
  const real_T *in11_data;
  const real_T *in8_data;
  real_T d;
  int32_T b_loop_ub;
  int32_T binary_expand_op_9_numThreads;
  int32_T i;
  int32_T in8_size;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  int32_T stride_2_0;
  st.prev = sp;
  st.tls = sp->tls;
  in11_data = in11->data;
  in10_data = in10->data;
  in8_data = in8->data;
  loop_ub = (int32_T)in7->nt;
  in8_size = (int32_T)in7->nt;
  stride_0_0 = (in8->size[2] != 1);
  stride_1_0 = (in10->size[2] != 1);
  stride_2_0 = (in11->size[2] != 1);
  b_loop_ub = (int32_T)in7->nt;
  if ((int32_T)in7->nt < 2000) {
    for (i = 0; i < loop_ub; i++) {
      d = in9[i];
      b_in8_data[i] = (in8_data[i * stride_0_0] * d + in10_data[i * stride_1_0] *
                       d) + in11_data[i * stride_2_0] * in12[i];
    }
  } else {
    emlrtEnterParallelRegion((emlrtCTX)sp, omp_in_parallel());
    emlrtPushJmpBuf((emlrtCTX)sp, &emlrtJBStack);
    binary_expand_op_9_numThreads = emlrtAllocRegionTLSs(sp->tls,
      omp_in_parallel(), omp_get_max_threads(), omp_get_num_procs());

#pragma omp parallel for \
 num_threads(binary_expand_op_9_numThreads) \
 private(d)

    for (i = 0; i < b_loop_ub; i++) {
      d = in9[i];
      b_in8_data[i] = (in8_data[i * stride_0_0] * d + in10_data[i * stride_1_0] *
                       d) + in11_data[i * stride_2_0] * in12[i];
    }

    emlrtPopJmpBuf((emlrtCTX)sp, &emlrtJBStack);
    emlrtExitParallelRegion((emlrtCTX)sp, omp_in_parallel());
  }

  loop_ub = in2 + 34 * ((int8_T)in3[in4].f1[in5] - 1);
  st.site = (emlrtRSInfo *)&in6;
  in1[loop_ub] += f_trapz(&st, in7->BeamSec, b_in8_data, in8_size);
}

static void binary_expand_op_92(const emlrtStack *sp, emxArray_real_T *in1,
  const emlrtRSInfo in2, const emxArray_real_T *in3, const real_T in4[57])
{
  emlrtStack st;
  real_T b_in4[57];
  real_T *in1_data;
  int32_T aux_0_2;
  int32_T i;
  int32_T stride_0_2;
  st.prev = sp;
  st.tls = sp->tls;
  in1_data = in1->data;
  stride_0_2 = (in1->size[2] != 1);
  aux_0_2 = 0;
  for (i = 0; i < 19; i++) {
    __m128d r;
    __m128d r1;
    int32_T in4_tmp;
    r = _mm_loadu_pd(&in4[3 * i]);
    r1 = _mm_loadu_pd(&in1_data[3 * aux_0_2]);
    _mm_storeu_pd(&b_in4[3 * i], _mm_add_pd(r, r1));
    in4_tmp = 3 * i + 2;
    b_in4[in4_tmp] = in4[in4_tmp] + in1_data[3 * aux_0_2 + 2];
    aux_0_2 += stride_0_2;
  }

  st.site = (emlrtRSInfo *)&in2;
  cross(&st, in3, b_in4, in1);
}

static void binary_expand_op_94(const emlrtStack *sp, emxArray_real_T *in1,
  const emlrtRSInfo in2, const emxArray_real_T *in3, const real_T in4[57], const
  emxArray_real_T *in5)
{
  emlrtStack st;
  real_T b_in4[57];
  const real_T *in5_data;
  int32_T aux_0_2;
  int32_T i;
  int32_T stride_0_2;
  st.prev = sp;
  st.tls = sp->tls;
  in5_data = in5->data;
  stride_0_2 = (in5->size[2] != 1);
  aux_0_2 = 0;
  for (i = 0; i < 19; i++) {
    __m128d r;
    __m128d r1;
    int32_T in4_tmp;
    r = _mm_loadu_pd(&in4[3 * i]);
    r1 = _mm_loadu_pd(&in5_data[3 * aux_0_2]);
    _mm_storeu_pd(&b_in4[3 * i], _mm_add_pd(r, r1));
    in4_tmp = 3 * i + 2;
    b_in4[in4_tmp] = in4[in4_tmp] + in5_data[3 * aux_0_2 + 2];
    aux_0_2 += stride_0_2;
  }

  st.site = (emlrtRSInfo *)&in2;
  cross(&st, in3, b_in4, in1);
}

static void c_plus(real_T in1[57], const emxArray_real_T *in2)
{
  const real_T *in2_data;
  int32_T aux_0_2;
  int32_T i;
  int32_T stride_0_2;
  in2_data = in2->data;
  stride_0_2 = (in2->size[2] != 1);
  aux_0_2 = 0;
  for (i = 0; i < 19; i++) {
    __m128d r;
    __m128d r1;
    int32_T i1;
    r = _mm_loadu_pd(&in2_data[3 * aux_0_2]);
    r1 = _mm_loadu_pd(&in1[3 * i]);
    _mm_storeu_pd(&in1[3 * i], _mm_add_pd(r, r1));
    i1 = 3 * i + 2;
    in1[i1] += in2_data[3 * aux_0_2 + 2];
    aux_0_2 += stride_0_2;
  }
}

static void d_plus(real_T in1[57], const emxArray_real_T *in2, const real_T in3
                   [57])
{
  const real_T *in2_data;
  int32_T aux_0_2;
  int32_T i;
  int32_T stride_0_2;
  in2_data = in2->data;
  stride_0_2 = (in2->size[2] != 1);
  aux_0_2 = 0;
  for (i = 0; i < 19; i++) {
    __m128d r;
    __m128d r1;
    int32_T i1;
    r = _mm_loadu_pd(&in2_data[3 * aux_0_2]);
    r1 = _mm_loadu_pd(&in3[3 * i]);
    _mm_storeu_pd(&in1[3 * i], _mm_add_pd(r, r1));
    i1 = 3 * i + 2;
    in1[i1] = in2_data[3 * aux_0_2 + 2] + in3[i1];
    aux_0_2 += stride_0_2;
  }
}

static void e_plus(real_T in1[33], const real_T in2[33], const emxArray_real_T
                   *in3)
{
  const real_T *in3_data;
  int32_T aux_0_2;
  int32_T i;
  int32_T stride_0_2;
  in3_data = in3->data;
  stride_0_2 = (in3->size[2] != 1);
  aux_0_2 = 0;
  for (i = 0; i < 11; i++) {
    __m128d r;
    __m128d r1;
    int32_T i1;
    r = _mm_loadu_pd(&in2[3 * i]);
    r1 = _mm_loadu_pd(&in3_data[3 * aux_0_2]);
    _mm_storeu_pd(&in1[3 * i], _mm_add_pd(r, r1));
    i1 = 3 * i + 2;
    in1[i1] = in2[i1] + in3_data[3 * aux_0_2 + 2];
    aux_0_2 += stride_0_2;
  }
}

static void f_plus(const emlrtStack *sp, emxArray_real_T *in1, const
                   emxArray_real_T *in2)
{
  emxArray_real_T *b_in1;
  const real_T *in2_data;
  real_T *b_in1_data;
  real_T *in1_data;
  int32_T aux_0_2;
  int32_T aux_1_2;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_2;
  int32_T stride_1_2;
  in2_data = in2->data;
  in1_data = in1->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  emxInit_real_T(sp, &b_in1, 3, &pg_emlrtRTEI);
  stride_0_2 = b_in1->size[0] * b_in1->size[1] * b_in1->size[2];
  b_in1->size[0] = 1;
  b_in1->size[1] = 3;
  if (in2->size[2] == 1) {
    loop_ub = in1->size[2];
  } else {
    loop_ub = in2->size[2];
  }

  b_in1->size[2] = loop_ub;
  emxEnsureCapacity_real_T(sp, b_in1, stride_0_2, &pg_emlrtRTEI);
  b_in1_data = b_in1->data;
  stride_0_2 = (in1->size[2] != 1);
  stride_1_2 = (in2->size[2] != 1);
  aux_0_2 = 0;
  aux_1_2 = 0;
  for (i = 0; i < loop_ub; i++) {
    __m128d r;
    __m128d r1;
    r = _mm_loadu_pd(&in1_data[3 * aux_0_2]);
    r1 = _mm_loadu_pd(&in2_data[3 * aux_1_2]);
    _mm_storeu_pd(&b_in1_data[3 * i], _mm_add_pd(r, r1));
    b_in1_data[3 * i + 2] = in1_data[3 * aux_0_2 + 2] + in2_data[3 * aux_1_2 + 2];
    aux_1_2 += stride_1_2;
    aux_0_2 += stride_0_2;
  }

  stride_0_2 = in1->size[0] * in1->size[1] * in1->size[2];
  in1->size[0] = 1;
  in1->size[1] = 3;
  emxEnsureCapacity_real_T(sp, in1, stride_0_2, &pg_emlrtRTEI);
  stride_1_2 = b_in1->size[2];
  stride_0_2 = in1->size[0] * in1->size[1] * in1->size[2];
  in1->size[2] = b_in1->size[2];
  emxEnsureCapacity_real_T(sp, in1, stride_0_2, &pg_emlrtRTEI);
  in1_data = in1->data;
  for (i = 0; i < stride_1_2; i++) {
    in1_data[3 * i] = b_in1_data[3 * i];
    stride_0_2 = 3 * i + 1;
    in1_data[stride_0_2] = b_in1_data[stride_0_2];
    stride_0_2 = 3 * i + 2;
    in1_data[stride_0_2] = b_in1_data[stride_0_2];
  }

  emxFree_real_T(sp, &b_in1);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

static void plus(real_T in1[33], const emxArray_real_T *in2)
{
  const real_T *in2_data;
  int32_T aux_0_2;
  int32_T i;
  int32_T stride_0_2;
  in2_data = in2->data;
  stride_0_2 = (in2->size[2] != 1);
  aux_0_2 = 0;
  for (i = 0; i < 11; i++) {
    __m128d r;
    __m128d r1;
    int32_T i1;
    r = _mm_loadu_pd(&in2_data[3 * aux_0_2]);
    r1 = _mm_loadu_pd(&in1[3 * i]);
    _mm_storeu_pd(&in1[3 * i], _mm_add_pd(r, r1));
    i1 = 3 * i + 2;
    in1[i1] += in2_data[3 * aux_0_2 + 2];
    aux_0_2 += stride_0_2;
  }
}

static void times(const emlrtStack *sp, emxArray_real_T *in1, const
                  emxArray_real_T *in2)
{
  jmp_buf * volatile emlrtJBStack;
  emxArray_real_T *b_in2;
  const real_T *in2_data;
  real_T *b_in2_data;
  real_T *in1_data;
  int32_T i;
  int32_T i1;
  int32_T loop_ub;
  int32_T stride_0_2;
  int32_T stride_1_2;
  int32_T times_numThreads;
  in2_data = in2->data;
  in1_data = in1->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  emxInit_real_T(sp, &b_in2, 3, &ei_emlrtRTEI);
  stride_0_2 = b_in2->size[0] * b_in2->size[1] * b_in2->size[2];
  b_in2->size[0] = 1;
  b_in2->size[1] = 1;
  if (in1->size[2] == 1) {
    loop_ub = in2->size[2];
  } else {
    loop_ub = in1->size[2];
  }

  b_in2->size[2] = loop_ub;
  emxEnsureCapacity_real_T(sp, b_in2, stride_0_2, &ei_emlrtRTEI);
  b_in2_data = b_in2->data;
  stride_0_2 = (in2->size[2] != 1);
  stride_1_2 = (in1->size[2] != 1);
  if (loop_ub < 2000) {
    for (i = 0; i < loop_ub; i++) {
      b_in2_data[i] = in2_data[i * stride_0_2] * in1_data[i * stride_1_2];
    }
  } else {
    emlrtEnterParallelRegion((emlrtCTX)sp, omp_in_parallel());
    emlrtPushJmpBuf((emlrtCTX)sp, &emlrtJBStack);
    times_numThreads = emlrtAllocRegionTLSs(sp->tls, omp_in_parallel(),
      omp_get_max_threads(), omp_get_num_procs());

#pragma omp parallel for \
 num_threads(times_numThreads)

    for (i = 0; i < loop_ub; i++) {
      b_in2_data[i] = in2_data[i * stride_0_2] * in1_data[i * stride_1_2];
    }

    emlrtPopJmpBuf((emlrtCTX)sp, &emlrtJBStack);
    emlrtExitParallelRegion((emlrtCTX)sp, omp_in_parallel());
  }

  stride_0_2 = in1->size[0] * in1->size[1] * in1->size[2];
  in1->size[0] = 1;
  in1->size[1] = 1;
  in1->size[2] = loop_ub;
  emxEnsureCapacity_real_T(sp, in1, stride_0_2, &ei_emlrtRTEI);
  in1_data = in1->data;
  for (i1 = 0; i1 < loop_ub; i1++) {
    in1_data[i1] = b_in2_data[i1];
  }

  emxFree_real_T(sp, &b_in2);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void NominalSystemMatrix(const emlrtStack *sp, const real_T q_Nom[68], real_T
  Controls[61], const struct0_T *ElastoDyn, const struct1_T *Airfoils, const
  struct2_T *Twr, const struct3_T *Bld, const struct4_T *Platform, const
  struct6_T *WindNom, const real_T mooring_load[6], const real_T f_Morison[6],
  real_T IM_nom[1156], real_T f_nom[34])
{
  static const real_T FRotor_t_tmp_tmp[3] = { 0.0, 9.80665, 0.0 };

  static const int32_T j_a[36] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    3836000, 0, 0, 0, 0, 0, 0, -377600000, 0, 0, 0, 0, 0, 0, -377600000, 0, 0, 0,
    0, 0, 0, 0 };

  static const int32_T k_a[36] = { -100000, 0, 0, 0, 0, 0, 0, -100000, 0, 0, 0,
    0, 0, 0, -130000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -13000000 };

  static const int32_T b_iv[6] = { 0, 0, 139890000, 0, 0, 0 };

  static const int8_T iv1[10] = { 1, 2, 3, 4, 5, 6, 23, 24, 25, 26 };

  static const int8_T iv2[10] = { 1, 2, 3, 4, 5, 6, 27, 28, 29, 30 };

  static const int8_T iv3[10] = { 1, 2, 3, 4, 5, 6, 31, 32, 33, 34 };

  static const int8_T iv4[7] = { 4, 5, 6, 23, 24, 25, 26 };

  static const int8_T iv5[7] = { 4, 5, 6, 27, 28, 29, 30 };

  static const int8_T iv6[7] = { 4, 5, 6, 31, 32, 33, 34 };

  __m128d r;
  __m128d r1;
  __m128d r10;
  __m128d r11;
  __m128d r12;
  __m128d r13;
  __m128d r14;
  __m128d r17;
  __m128d r18;
  __m128d r19;
  __m128d r2;
  __m128d r20;
  __m128d r3;
  __m128d r4;
  __m128d r45;
  __m128d r46;
  __m128d r47;
  __m128d r48;
  __m128d r49;
  __m128d r5;
  __m128d r50;
  __m128d r51;
  __m128d r52;
  cell_wrap_0 P_Ev_all[3];
  cell_wrap_0 r53;
  cell_wrap_0 r54;
  cell_wrap_0 r55;
  cell_wrap_1 P_Ev_tip_all[3];
  cell_wrap_2 P_Ew_tip_all[3];
  cell_wrap_3 P_dEv[3];
  cell_wrap_4 P_Ew_tip[3];
  cell_wrap_4 P_dEv_tip[3];
  cell_wrap_4 P_dEw_tip[3];
  cell_wrap_5 P_BP[3];
  cell_wrap_6 P_idx[3];
  cell_wrap_7 P_idx_rot[3];
  emlrtStack b_st;
  emlrtStack st;
  emxArray_real_T c_MB1_data;
  emxArray_real_T *EvF_Hv;
  emxArray_real_T *EvF_P;
  emxArray_real_T *EvF_R;
  emxArray_real_T *EvF_Sg;
  emxArray_real_T *EvF_Sw;
  emxArray_real_T *EvF_Y;
  emxArray_real_T *EvP1_Hv;
  emxArray_real_T *EvP1_P;
  emxArray_real_T *EvP1_R;
  emxArray_real_T *EvP1_Sg;
  emxArray_real_T *EvP1_Sw;
  emxArray_real_T *EvP1_Y;
  emxArray_real_T *EvP2_Hv;
  emxArray_real_T *EvP2_P;
  emxArray_real_T *EvP2_R;
  emxArray_real_T *EvP2_Sg;
  emxArray_real_T *EvP2_Sw;
  emxArray_real_T *EvP2_Y;
  emxArray_real_T *EvP3_Hv;
  emxArray_real_T *EvP3_P;
  emxArray_real_T *EvP3_R;
  emxArray_real_T *EvP3_Sg;
  emxArray_real_T *EvP3_Sw;
  emxArray_real_T *EvP3_Y;
  emxArray_real_T *EvS1_DrTr;
  emxArray_real_T *EvS1_GeAz;
  emxArray_real_T *EvS1_Hv;
  emxArray_real_T *EvS1_P;
  emxArray_real_T *EvS1_R;
  emxArray_real_T *EvS1_Sg;
  emxArray_real_T *EvS1_Sw;
  emxArray_real_T *EvS1_TFA1;
  emxArray_real_T *EvS1_TFA2;
  emxArray_real_T *EvS1_TSS1;
  emxArray_real_T *EvS1_TSS2;
  emxArray_real_T *EvS1_Y;
  emxArray_real_T *EvS1_yaw;
  emxArray_real_T *EvS2_DrTr;
  emxArray_real_T *EvS2_GeAz;
  emxArray_real_T *EvS2_Hv;
  emxArray_real_T *EvS2_P;
  emxArray_real_T *EvS2_R;
  emxArray_real_T *EvS2_Sg;
  emxArray_real_T *EvS2_Sw;
  emxArray_real_T *EvS2_TFA1;
  emxArray_real_T *EvS2_TFA2;
  emxArray_real_T *EvS2_TSS1;
  emxArray_real_T *EvS2_TSS2;
  emxArray_real_T *EvS2_Y;
  emxArray_real_T *EvS2_yaw;
  emxArray_real_T *EvS3_DrTr;
  emxArray_real_T *EvS3_GeAz;
  emxArray_real_T *EvS3_Hv;
  emxArray_real_T *EvS3_P;
  emxArray_real_T *EvS3_R;
  emxArray_real_T *EvS3_Sg;
  emxArray_real_T *EvS3_Sw;
  emxArray_real_T *EvS3_TFA1;
  emxArray_real_T *EvS3_TFA2;
  emxArray_real_T *EvS3_TSS1;
  emxArray_real_T *EvS3_TSS2;
  emxArray_real_T *EvS3_Y;
  emxArray_real_T *EvS3_yaw;
  emxArray_real_T *F_AeroB1;
  emxArray_real_T *F_AeroB2;
  emxArray_real_T *F_AeroB3;
  emxArray_real_T *F_AeroT;
  emxArray_real_T *M_AeroB1;
  emxArray_real_T *UMB;
  emxArray_real_T *VMB;
  emxArray_real_T *Vx;
  emxArray_real_T *Vy;
  emxArray_real_T *Vz;
  emxArray_real_T *VzB1;
  emxArray_real_T *VzB2;
  emxArray_real_T *VzB3;
  emxArray_real_T *ZBlNode_Y;
  emxArray_real_T *ZBlNode_Z;
  emxArray_real_T *loop_ub_tmp;
  emxArray_real_T *r15;
  emxArray_real_T *r16;
  emxArray_real_T *r21;
  emxArray_real_T *r22;
  emxArray_real_T *r23;
  emxArray_real_T *r25;
  emxArray_real_T *r26;
  emxArray_real_T *r28;
  emxArray_real_T *r29;
  emxArray_real_T *r31;
  emxArray_real_T *r32;
  emxArray_real_T *r33;
  emxArray_real_T *r35;
  emxArray_real_T *r36;
  emxArray_real_T *r38;
  emxArray_real_T *r39;
  emxArray_real_T *r41;
  emxArray_real_T *r43;
  emxArray_real_T *r6;
  emxArray_real_T *r8;
  emxArray_real_T *vc_X;
  emxArray_real_T *vc_Y;
  emxArray_real_T *vc_Z;
  emxArray_real_T *vr_X;
  emxArray_real_T *vr_Y;
  emxArray_real_T *vr_Z;
  real_T C_B2[1156];
  real_T C_B3[1156];
  real_T C_Plat[1156];
  real_T C_T[1156];
  real_T C_com[1156];
  real_T dv1[1156];
  real_T dv2[1156];
  real_T phi_data[183];
  real_T MB1_data[171];
  real_T MB2_data[171];
  real_T MB3_data[171];
  real_T a__1[171];
  real_T a__2[171];
  real_T a__3[171];
  real_T Controls_data[61];
  real_T EvS1[57];
  real_T EvS1_B1E1[57];
  real_T EvS1_B1F1[57];
  real_T EvS1_B1F2[57];
  real_T EvS2[57];
  real_T EvS2_B2E1[57];
  real_T EvS2_B2F1[57];
  real_T EvS2_B2F2[57];
  real_T EvS3[57];
  real_T EvS3_B3E1[57];
  real_T EvS3_B3F1[57];
  real_T EvS3_B3F2[57];
  real_T FB2_B2E1_tmp[57];
  real_T FB2_B2F2_tmp[57];
  real_T FB3_B3E1_tmp[57];
  real_T FB3_B3F1_tmp[57];
  real_T FB3_B3F2_tmp[57];
  real_T HvS1[57];
  real_T HvS2[57];
  real_T HvS3[57];
  real_T ab_out[57];
  real_T b_HvS1[57];
  real_T b_MB1_data[57];
  real_T b_rQS1[57];
  real_T bb_out[57];
  real_T c_out[57];
  real_T cb_out[57];
  real_T dEvS1[57];
  real_T dEvS2[57];
  real_T dEvS3[57];
  real_T d_out[57];
  real_T db_out[57];
  real_T eb_out[57];
  real_T o_out[57];
  real_T p_out[57];
  real_T q_out[57];
  real_T rQS1[57];
  real_T rQS2[57];
  real_T rQS3[57];
  real_T r_out[57];
  real_T s_out[57];
  real_T t_out[57];
  real_T u_out[57];
  real_T v_out[57];
  real_T w_out[57];
  real_T x_out[57];
  real_T y_out[57];
  real_T ac_out[45];
  real_T bc_out[45];
  real_T cc_out[45];
  real_T dXvP1[45];
  real_T dXvP2[45];
  real_T dc_out[45];
  real_T e_out[45];
  real_T f_out[45];
  real_T fb_out[45];
  real_T g_out[45];
  real_T gb_out[45];
  real_T h_out[45];
  real_T hb_out[45];
  real_T i_out[45];
  real_T ib_out[45];
  real_T j_out[45];
  real_T jb_out[45];
  real_T k_out[45];
  real_T kb_out[45];
  real_T l_out[45];
  real_T lb_out[45];
  real_T m_out[45];
  real_T mb_out[45];
  real_T nb_out[45];
  real_T ob_out[45];
  real_T pb_out[45];
  real_T qb_out[45];
  real_T rP2[45];
  real_T rP3[45];
  real_T rb_out[45];
  real_T sb_out[45];
  real_T tb_out[45];
  real_T ub_out[45];
  real_T vb_out[45];
  real_T wb_out[45];
  real_T xb_out[45];
  real_T yb_out[45];
  real_T f_B1[34];
  real_T f_B2[34];
  real_T f_B3[34];
  real_T f_Brake[34];
  real_T f_DampDrive[34];
  real_T f_DampingB1[34];
  real_T f_DampingB2[34];
  real_T f_DampingB3[34];
  real_T f_DampingT[34];
  real_T f_ElasticB1[34];
  real_T f_ElasticB2[34];
  real_T f_ElasticB3[34];
  real_T f_ElasticDrive[34];
  real_T f_ElasticT[34];
  real_T f_G[34];
  real_T f_Gen[34];
  real_T f_Plat[34];
  real_T f_T[34];
  real_T f_Yaw[34];
  real_T EvF_TFA1[33];
  real_T EvF_TFA2[33];
  real_T EvF_TSS1[33];
  real_T EvF_TSS2[33];
  real_T FT_TFA1_tmp[33];
  real_T FT_TFA2_tmp[33];
  real_T FT_TSS1_tmp[33];
  real_T FT_TSS2_tmp[33];
  real_T XvT[33];
  real_T b_out[33];
  real_T b_rZT[33];
  real_T dEvF[33];
  real_T out[33];
  real_T rZT[33];
  real_T HvS1_3_tmp[19];
  real_T HvS2_3_tmp[19];
  real_T b_HvS1_3_tmp[19];
  real_T b_HvS2_3_tmp[19];
  real_T b_rQS1_3_tmp[19];
  real_T c_HvS1_3_tmp[19];
  real_T c_HvS2_3_tmp[19];
  real_T rQS1_1[19];
  real_T rQS1_3[19];
  real_T rQS1_3_tmp[19];
  real_T rQS3_3[19];
  real_T XvP1_1[15];
  real_T XvP1_2[15];
  real_T XvP1_3[15];
  real_T XvP2_1[15];
  real_T XvP2_1_tmp[15];
  real_T XvP2_2[15];
  real_T b_XvP1_1_tmp[15];
  real_T b_XvP2_1_tmp[15];
  real_T c_XvP1_1_tmp[15];
  real_T c_XvP2_1_tmp[15];
  real_T d_XvP1_1_tmp[15];
  real_T d_XvP2_1_tmp[15];
  real_T XvT_2_tmp[11];
  real_T b_XvT_2_tmp[11];
  real_T rZT_1[11];
  real_T rZT_2[11];
  real_T A[9];
  real_T C[9];
  real_T D[9];
  real_T E[9];
  real_T I_G[9];
  real_T I_H[9];
  real_T I_N[9];
  real_T I_X[9];
  real_T TP2[9];
  real_T TP3[9];
  real_T b_q_Nom[6];
  real_T ff_HydroStat[6];
  real_T EvC_GeAz[3];
  real_T EvO_P[3];
  real_T EvO_R[3];
  real_T EvO_TFA1[3];
  real_T EvO_TFA2[3];
  real_T EvO_TSS1[3];
  real_T EvO_TSS2[3];
  real_T EvO_Y[3];
  real_T EvQ[3];
  real_T EvQ_TFA1[3];
  real_T EvQ_TFA2[3];
  real_T EvQ_TSS1[3];
  real_T EvQ_TSS2[3];
  real_T EvQ_Y[3];
  real_T EvQ_yaw[3];
  real_T EvU_P[3];
  real_T EvU_TFA1[3];
  real_T EvU_TFA2[3];
  real_T EvU_TSS1[3];
  real_T EvU_TSS2[3];
  real_T EvU_Y[3];
  real_T EvU_yaw[3];
  real_T EvZ[3];
  real_T EwB[3];
  real_T EwB_TFA1[3];
  real_T EwB_TFA2[3];
  real_T EwB_TSS1[3];
  real_T EwB_TSS2[3];
  real_T EwG_GeAz[3];
  real_T EwL[3];
  real_T EwL_GeAz[3];
  real_T EwL_yaw[3];
  real_T EwN_yaw[3];
  real_T EwX[3];
  real_T FB1_B1E1[3];
  real_T FB1_B1F1[3];
  real_T FB1_B1F2[3];
  real_T FB1_Hv[3];
  real_T FB1_P[3];
  real_T FB1_R[3];
  real_T FB1_Sg[3];
  real_T FB1_Sw[3];
  real_T FB1_TFA1[3];
  real_T FB1_TFA2[3];
  real_T FB1_TSS1[3];
  real_T FB1_TSS2[3];
  real_T FB1_Y[3];
  real_T FB1_t[3];
  real_T FB1_yaw[3];
  real_T FB2_B2E1[3];
  real_T FB2_B2F1[3];
  real_T FB2_B2F2[3];
  real_T FB2_Hv[3];
  real_T FB2_P[3];
  real_T FB2_R[3];
  real_T FB2_Sg[3];
  real_T FB2_Sw[3];
  real_T FB2_TFA1[3];
  real_T FB2_TFA2[3];
  real_T FB2_TSS1[3];
  real_T FB2_TSS2[3];
  real_T FB2_Y[3];
  real_T FB2_t[3];
  real_T FB2_yaw[3];
  real_T FB3_B3E1[3];
  real_T FB3_B3F1[3];
  real_T FB3_B3F2[3];
  real_T FB3_Hv[3];
  real_T FB3_P[3];
  real_T FB3_R[3];
  real_T FB3_Sg[3];
  real_T FB3_Sw[3];
  real_T FB3_TFA1[3];
  real_T FB3_TFA2[3];
  real_T FB3_TSS1[3];
  real_T FB3_TSS2[3];
  real_T FB3_Y[3];
  real_T FB3_t[3];
  real_T FB3_yaw[3];
  real_T FO_TFA2[3];
  real_T FO_TSS1[3];
  real_T FO_TSS2[3];
  real_T FO_t[3];
  real_T FO_yaw[3];
  real_T FRotor_DrTr[3];
  real_T FRotor_GeAz[3];
  real_T FRotor_P[3];
  real_T FRotor_TFA1[3];
  real_T FRotor_TFA2[3];
  real_T FRotor_TSS1[3];
  real_T FRotor_TSS2[3];
  real_T FRotor_Y[3];
  real_T FRotor_yaw[3];
  real_T MB1_B1E1[3];
  real_T MB1_B1F1[3];
  real_T MB1_B1F2[3];
  real_T MB1_DrTr[3];
  real_T MB1_P[3];
  real_T MB1_R[3];
  real_T MB1_TFA1[3];
  real_T MB1_TFA2[3];
  real_T MB1_TSS1[3];
  real_T MB1_TSS2[3];
  real_T MB1_Y[3];
  real_T MB1_t[3];
  real_T MB1_yaw[3];
  real_T MB2_B2E1[3];
  real_T MB2_B2F1[3];
  real_T MB2_B2F2[3];
  real_T MB2_DrTr[3];
  real_T MB2_P[3];
  real_T MB2_R[3];
  real_T MB2_TFA1[3];
  real_T MB2_TFA2[3];
  real_T MB2_TSS1[3];
  real_T MB2_TSS2[3];
  real_T MB2_Y[3];
  real_T MB2_t[3];
  real_T MB2_yaw[3];
  real_T MB3_B3E1[3];
  real_T MB3_B3F1[3];
  real_T MB3_B3F2[3];
  real_T MB3_DrTr[3];
  real_T MB3_P[3];
  real_T MB3_R[3];
  real_T MB3_TFA1[3];
  real_T MB3_TFA2[3];
  real_T MB3_TSS1[3];
  real_T MB3_TSS2[3];
  real_T MB3_Y[3];
  real_T MB3_t[3];
  real_T MB3_yaw[3];
  real_T MRotor_B1E1[3];
  real_T MRotor_B1F1[3];
  real_T MRotor_B1F2[3];
  real_T MRotor_B2E1[3];
  real_T MRotor_B2F1[3];
  real_T MRotor_B2F2[3];
  real_T MRotor_B3E1[3];
  real_T MRotor_B3F1[3];
  real_T MRotor_B3F2[3];
  real_T MRotor_DrTr[3];
  real_T MRotor_GeAz[3];
  real_T MRotor_t[3];
  real_T XvO[3];
  real_T b_D[3];
  real_T b_EwB_TFA2[3];
  real_T b_EwB_TSS1[3];
  real_T b_EwB_TSS2[3];
  real_T b_EwX[3];
  real_T b_I_G[3];
  real_T b_I_H[3];
  real_T b_dEvQ_R[3];
  real_T b_dEvQ_TSS1[3];
  real_T dEvC_GeAz[3];
  real_T dEvO_P[3];
  real_T dEvO_R[3];
  real_T dEvO_TFA1[3];
  real_T dEvO_TFA2[3];
  real_T dEvO_TSS1[3];
  real_T dEvO_TSS2[3];
  real_T dEvO_Y[3];
  real_T dEvQ_P[3];
  real_T dEvQ_R[3];
  real_T dEvQ_TFA1[3];
  real_T dEvQ_TFA2[3];
  real_T dEvQ_TSS1[3];
  real_T dEvQ_TSS2[3];
  real_T dEvQ_Y[3];
  real_T dEvQ_yaw[3];
  real_T dEwB_TFA1[3];
  real_T dEwB_TFA2[3];
  real_T dEwB_TSS1[3];
  real_T dEwB_TSS2[3];
  real_T dEwL_GeAz[3];
  real_T dEwN[3];
  real_T dEwN_yaw[3];
  real_T g_b[3];
  real_T rOQ[3];
  real_T rP1_tip[3];
  real_T rP2_tip[3];
  real_T rP3_tip[3];
  real_T rZO[3];
  real_T dv[2];
  real_T EvC_P_idx_0;
  real_T EvC_P_idx_1;
  real_T EvC_P_idx_2;
  real_T EvC_R_idx_0;
  real_T EvC_R_idx_1;
  real_T EvC_R_idx_2;
  real_T EvC_TFA1_idx_1;
  real_T EvC_TFA1_idx_2;
  real_T EvC_TFA2_idx_0;
  real_T EvC_TFA2_idx_1;
  real_T EvC_TFA2_idx_2;
  real_T EvC_TSS1_idx_0;
  real_T EvC_TSS1_idx_1;
  real_T EvC_TSS1_idx_2;
  real_T EvC_TSS2_idx_0;
  real_T EvC_TSS2_idx_1;
  real_T EvC_TSS2_idx_2;
  real_T EvC_Y_idx_0;
  real_T EvC_Y_idx_1;
  real_T EvC_Y_idx_2;
  real_T EvC_yaw_idx_0;
  real_T EvC_yaw_idx_1;
  real_T EvC_yaw_idx_2;
  real_T EvU_R_idx_0;
  real_T EvU_R_idx_1;
  real_T EvU_R_idx_2;
  real_T EvY_P_idx_0;
  real_T EvY_P_idx_1;
  real_T EvY_P_idx_2;
  real_T EvY_R_idx_0;
  real_T EvY_R_idx_1;
  real_T EvY_R_idx_2;
  real_T EvY_Y_idx_0;
  real_T EvY_Y_idx_1;
  real_T EvY_Y_idx_2;
  real_T EvZ_tmp;
  real_T EwG_idx_0;
  real_T EwG_idx_1;
  real_T EwG_idx_2;
  real_T EwN_idx_0;
  real_T EwN_idx_1;
  real_T FRotor_R_idx_0;
  real_T FRotor_R_idx_1;
  real_T FRotor_R_idx_2;
  real_T I_pr_app;
  real_T I_yaw_app;
  real_T PtfmPIner;
  real_T PtfmRIner;
  real_T PtfmYIner;
  real_T XvP1_1_tmp;
  real_T a;
  real_T a_tmp;
  real_T ak_tip_Z;
  real_T b;
  real_T b_a;
  real_T b_a_tmp;
  real_T b_b;
  real_T b_rQS1_1;
  real_T b_rQS1_2;
  real_T b_rZT_1;
  real_T c_a;
  real_T c_a_tmp;
  real_T c_b;
  real_T c_rQS1_1;
  real_T d;
  real_T d1;
  real_T d2;
  real_T d3;
  real_T d4;
  real_T d5;
  real_T d6;
  real_T d7;
  real_T d8;
  real_T d9;
  real_T dEvQ_TSS1_tmp;
  real_T d_a;
  real_T d_a_tmp;
  real_T d_b;
  real_T d_rQS1_1;
  real_T e_a;
  real_T e_a_tmp;
  real_T e_b;
  real_T e_rQS1_1;
  real_T f_a;
  real_T f_a_tmp;
  real_T f_b;
  real_T g_a;
  real_T g_a_tmp;
  real_T g_proj_X;
  real_T g_proj_Y;
  real_T g_proj_Z;
  real_T h_a;
  real_T h_a_tmp;
  real_T i_a;
  real_T i_a_tmp;
  real_T j_a_tmp;
  real_T k_a_tmp;
  real_T mX;
  real_T nb;
  real_T rOU_idx_0;
  real_T rOU_idx_1;
  real_T rOU_idx_2;
  real_T rQC_idx_0;
  real_T rQC_idx_1;
  real_T rQC_idx_2;
  real_T rQS1_2;
  real_T rZT_3;
  real_T rZY_idx_0;
  real_T rZY_idx_1;
  real_T rZY_idx_2;
  real_T tip_mass_X_tot;
  real_T tip_mass_Z_tot;
  real_T v_c_tip_Z;
  real_T v_r_tip_X;
  real_T v_r_tip_Y;
  real_T v_r_tip_Z;
  real_T *F_AeroB1_data;
  real_T *F_AeroB2_data;
  real_T *F_AeroB3_data;
  real_T *F_AeroT_data;
  real_T *Vx_data;
  real_T *Vy_data;
  real_T *VzB1_data;
  real_T *Vz_data;
  real_T *ZBlNode_Y_data;
  real_T *ZBlNode_Z_data;
  real_T *r24;
  real_T *r27;
  real_T *r30;
  real_T *r34;
  real_T *r37;
  real_T *r40;
  real_T *r42;
  real_T *r44;
  real_T *r7;
  real_T *r9;
  real_T *vr_X_data;
  int32_T MB1_size[3];
  int32_T MB2_size[3];
  int32_T MB3_size[3];
  int32_T b_MB1_size[3];
  int32_T phi_size[2];
  int32_T b_i;
  int32_T b_it;
  int32_T b_loop_ub;
  int32_T b_n;
  int32_T b_nx;
  int32_T c_loop_ub;
  int32_T c_n;
  int32_T c_nx;
  int32_T d_loop_ub;
  int32_T e_loop_ub;
  int32_T i;
  int32_T i1;
  int32_T it;
  int32_T k;
  int32_T loop_ub;
  int32_T n;
  int32_T nx;
  boolean_T n_out;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);

  /* #Codegen */
  /*  Dofs */
  /* -------------------- */
  /*  end of Update state */
  /*  --- 提取 OC4 平台新增的 12 个柔性速度自由度 --- */
  /*  Sg, Sw, Hv, R, P, Y 现在的索引顺延到了 35-40 */
  /*  这里直接列出浮筒的广义速度提取 */
  /*  Read Data from Structure to Doubles */
  /*  ========================================================== */
  /*  【刚柔解耦修正】从总质量和惯量中剥离出柔性附属体结构 */
  /*  防止在后面的 Kane 积分中发生 Double Counting */
  /*  ========================================================== */
  mX = ElastoDyn->PtfmMass - Platform->Total_Appendage_Mass;
  if (mX < 10000.0) {
    mX = 10000.0;
  }

  /*  安全阈值，防止负质量 */
  /*  【修复维度报错】利用解析积分直接算出标量的转动惯量  */
  /*  纯结构质量的转动惯量：端部集中质量 m*L^2 + 均匀梁 m_total*L^2/3 */
  st.site = &emlrtRSI;
  st.site = &emlrtRSI;
  I_pr_app = Platform->BeamLen * Platform->BeamLen;
  I_yaw_app = 3.0 * (Platform->M_Tip_Struct * I_pr_app +
                     Platform->Target_Struct_Mass * I_pr_app / 3.0);
  I_pr_app = I_yaw_app / 2.0;

  /*  XY 平面对称布置时的 Pitch/Roll 近似惯量 */
  PtfmRIner = ElastoDyn->PtfmRIner - I_pr_app;
  PtfmPIner = ElastoDyn->PtfmPIner - I_pr_app;
  PtfmYIner = ElastoDyn->PtfmYIner - I_yaw_app;
  if (PtfmRIner < 1.0E+7) {
    PtfmRIner = 1.0E+7;
  }

  if (PtfmPIner < 1.0E+7) {
    PtfmPIner = 1.0E+7;
  }

  if (PtfmYIner < 1.0E+7) {
    PtfmYIner = 1.0E+7;
  }

  /*  ========================================================== */
  /* GBoxEff = ElastoDyn.GBoxEff; */
  nb = Bld->nb;

  /*  BlSpn = Load.BlSpn; */
  /*  nb = Load.nb; */
  /*  Since the blades are similar the same properties can be copied */
  /*  TMDzn    = TMD.TMDzn; */
  /*  end of reading */
  /*  Coordinate Systems */
  /*  [Z, A, D, C, E, J1, J2, J3, ~, ~, ~, MB1, MB2, MB3] = Coordinate_systems(q_Nom, BlPitch, ElastoDyn, Twr, Bld); */
  st.site = &b_emlrtRSI;
  Coordinate_systems(&st, q_Nom, &Controls[1], ElastoDyn->PreCone,
                     ElastoDyn->ShftTilt, Twr->dO1_TFA, Twr->dO1_TSS,
                     Twr->dO2_TFA, Twr->dO2_TSS, Bld, Platform, A, D, C, E, I_G,
                     I_N, I_H, a__1, a__2, a__3, MB1_data, MB1_size, MB2_data,
                     MB2_size, MB3_data, MB3_size, P_BP[0].f1, P_BP[1].f1, P_BP
                     [2].f1, I_X, TP2, TP3, dXvP2, rP2, rP3, rP1_tip, rP2_tip,
                     rP3_tip);

  /*  Position vectors */
  /*  Position Vectors */
  /*  rZ  = q_Sg*Z(1,:) + q_Hv*Z(2,:) - q_Sw*Z(3,:);                               % platform reference */
  I_pr_app = ElastoDyn->PtfmCMzt - ElastoDyn->PtfmRefzt;
  rZY_idx_0 = I_pr_app * A[1];
  rZY_idx_1 = I_pr_app * A[4];
  rZY_idx_2 = I_pr_app * A[7];

  /*  platform reference to platform C.M */
  I_pr_app = q_Nom[6];
  I_yaw_app = q_Nom[8];
  for (it = 0; it <= 8; it += 2) {
    _mm_storeu_pd(&rZT_1[it], _mm_add_pd(_mm_mul_pd(_mm_loadu_pd(&Twr->O1_TFA[it]),
      _mm_set1_pd(I_pr_app)), _mm_mul_pd(_mm_loadu_pd(&Twr->O2_TFA[it]),
      _mm_set1_pd(I_yaw_app))));
  }

  rZT_1[10] = q_Nom[6] * Twr->O1_TFA[10] + q_Nom[8] * Twr->O2_TFA[10];

  /*  O1_TF, O2_TF, s11_TFA, s12_TFA etc are vectors */
  st.site = &c_emlrtRSI;
  b_st.site = &dr_emlrtRSI;
  computeDimsData(&b_st, Twr->nt);
  if ((int32_T)Twr->nt > 11) {
    emlrtErrorWithMessageIdR2018a(&st, &emlrtRTEI,
      "Coder:toolbox:reshape_emptyReshapeLimit",
      "Coder:toolbox:reshape_emptyReshapeLimit", 0);
  }

  if ((int32_T)Twr->nt < 0) {
    emlrtErrorWithMessageIdR2018a(&st, &b_emlrtRTEI,
      "MATLAB:checkDimCommon:nonnegativeSize",
      "MATLAB:checkDimCommon:nonnegativeSize", 0);
  }

  if ((int32_T)Twr->nt != 11) {
    emlrtErrorWithMessageIdR2018a(&st, &c_emlrtRTEI,
      "Coder:MATLAB:getReshapeDims_notSameNumel",
      "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
  }

  loop_ub = (int32_T)Twr->nt;
  if (((int32_T)Twr->nt != 11) && ((int32_T)Twr->nt != 1)) {
    emlrtDimSizeImpxCheckR2021b((int32_T)Twr->nt, 11, &q_emlrtECI,
      (emlrtConstCTX)sp);
  }

  st.site = &c_emlrtRSI;
  FRotor_R_idx_1 = q_Nom[6] * q_Nom[6];
  st.site = &d_emlrtRSI;
  FRotor_R_idx_2 = q_Nom[8] * q_Nom[8];
  st.site = &d_emlrtRSI;
  b = q_Nom[7] * q_Nom[7];
  st.site = &d_emlrtRSI;
  b_b = q_Nom[9] * q_Nom[9];
  if ((int32_T)Twr->nt == 11) {
    v_c_tip_Z = q_Nom[7];
    ak_tip_Z = q_Nom[9];
    n = ((int32_T)Twr->nt / 2) << 1;
    b_n = n - 2;
    for (it = 0; it <= b_n; it += 2) {
      r = _mm_set1_pd(2.0);
      _mm_storeu_pd(&rZT_2[it], _mm_sub_pd(_mm_add_pd(_mm_add_pd(_mm_loadu_pd
        (&Twr->TwrSec[it]), _mm_set1_pd(ElastoDyn->PtfmRefzt)), _mm_set1_pd
        (ElastoDyn->TowerBsHt)), _mm_mul_pd(_mm_set1_pd(0.5), _mm_add_pd
        (_mm_add_pd(_mm_add_pd(_mm_add_pd(_mm_add_pd(_mm_mul_pd(_mm_loadu_pd
        (&Twr->s11_TFA[it]), _mm_set1_pd(FRotor_R_idx_1)), _mm_mul_pd
        (_mm_loadu_pd(&Twr->s22_TFA[it]), _mm_set1_pd(FRotor_R_idx_2))),
        _mm_mul_pd(_mm_mul_pd(_mm_mul_pd(r, _mm_loadu_pd(&Twr->s12_TFA[it])),
        _mm_set1_pd(I_pr_app)), _mm_set1_pd(I_yaw_app))), _mm_mul_pd
        (_mm_loadu_pd(&Twr->s11_TSS[it]), _mm_set1_pd(b))), _mm_mul_pd
                    (_mm_loadu_pd(&Twr->s22_TSS[it]), _mm_set1_pd(b_b))),
         _mm_mul_pd(_mm_mul_pd(_mm_mul_pd(r, _mm_loadu_pd(&Twr->s12_TSS[it])),
        _mm_set1_pd(v_c_tip_Z)), _mm_set1_pd(ak_tip_Z))))));
    }

    for (it = n; it < loop_ub; it++) {
      rZT_2[it] = ((Twr->TwrSec[it] + ElastoDyn->PtfmRefzt) +
                   ElastoDyn->TowerBsHt) - 0.5 * (((((Twr->s11_TFA[it] *
        FRotor_R_idx_1 + Twr->s22_TFA[it] * FRotor_R_idx_2) + 2.0 * Twr->
        s12_TFA[it] * I_pr_app * I_yaw_app) + Twr->s11_TSS[it] * b) +
        Twr->s22_TSS[it] * b_b) + 2.0 * Twr->s12_TSS[it] * v_c_tip_Z * ak_tip_Z);
    }
  } else {
    binary_expand_op_160(rZT_2, Twr, ElastoDyn, FRotor_R_idx_1, FRotor_R_idx_2,
                         q_Nom, b, b_b);
  }

  I_pr_app = q_Nom[7];
  I_yaw_app = q_Nom[9];
  v_c_tip_Z = A[0];
  ak_tip_Z = A[1];
  g_proj_X = A[2];
  g_proj_Y = A[3];
  g_proj_Z = A[4];
  v_r_tip_X = A[5];
  v_r_tip_Y = A[6];
  v_r_tip_Z = A[7];
  EvZ_tmp = A[8];
  for (it = 0; it < 11; it++) {
    rZT_3 = Twr->O1_TSS[it] * I_pr_app + Twr->O2_TSS[it] * I_yaw_app;
    rQS1_2 = rZT_1[it];
    rZT[3 * it] = rQS1_2 * v_c_tip_Z;
    FRotor_R_idx_0 = rZT_2[it];
    out[3 * it] = FRotor_R_idx_0 * ak_tip_Z;
    b_out[3 * it] = rZT_3 * g_proj_X;
    n = 3 * it + 1;
    rZT[n] = rQS1_2 * g_proj_Y;
    out[n] = FRotor_R_idx_0 * g_proj_Z;
    b_out[n] = rZT_3 * v_r_tip_X;
    n = 3 * it + 2;
    rZT[n] = rQS1_2 * v_r_tip_Y;
    out[n] = FRotor_R_idx_0 * v_r_tip_Z;
    b_out[n] = rZT_3 * EvZ_tmp;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }

  for (it = 0; it <= 30; it += 2) {
    r = _mm_loadu_pd(&rZT[it]);
    r1 = _mm_loadu_pd(&out[it]);
    r2 = _mm_loadu_pd(&b_out[it]);
    _mm_storeu_pd(&rZT[it], _mm_add_pd(_mm_add_pd(r, r1), r2));
  }

  rZT[32] = (rZT[32] + out[32]) + b_out[32];

  /*  rZT is a 3D matrix */
  g_proj_X = q_Nom[6] + q_Nom[8];

  /*  S11_TFA, S22_TF etc are scalars */
  st.site = &e_emlrtRSI;
  st.site = &f_emlrtRSI;
  st.site = &f_emlrtRSI;
  st.site = &f_emlrtRSI;
  I_pr_app = (ElastoDyn->PtfmRefzt + ElastoDyn->TwrHt) - 0.5 * (((((Twr->S11_TFA
    * FRotor_R_idx_1 + Twr->S22_TFA * FRotor_R_idx_2) + 2.0 * Twr->S12_TFA *
    q_Nom[6] * q_Nom[8]) + Twr->S11_TSS * b) + Twr->S22_TSS * b_b) + 2.0 *
    Twr->S12_TSS * q_Nom[7] * q_Nom[9]);
  I_yaw_app = q_Nom[7] + q_Nom[9];

  /*  rOIMU = NcIMUxn*D(1,:) + NcIMUzn*D(2,:) - NcIMUyn*D(3,:); */
  rZO[0] = (g_proj_X * A[0] + I_pr_app * A[1]) + I_yaw_app * A[2];
  rOU_idx_0 = (ElastoDyn->NacCMxn * D[0] + ElastoDyn->NacCMzn * D[1]) -
    ElastoDyn->NacCMyn * D[2];
  rOQ[0] = (ElastoDyn->OverHang * C[0] + ElastoDyn->Twr2Shft * D[1]) - 0.0 * D[2];
  rQC_idx_0 = ElastoDyn->HubCM * E[0];
  rZO[1] = (g_proj_X * A[3] + I_pr_app * A[4]) + I_yaw_app * A[5];
  rOU_idx_1 = (ElastoDyn->NacCMxn * D[3] + ElastoDyn->NacCMzn * D[4]) -
    ElastoDyn->NacCMyn * D[5];
  rOQ[1] = (ElastoDyn->OverHang * C[3] + ElastoDyn->Twr2Shft * D[4]) - 0.0 * D[5];
  rQC_idx_1 = ElastoDyn->HubCM * E[3];
  rZO[2] = (g_proj_X * A[6] + I_pr_app * A[7]) + I_yaw_app * A[8];
  rOU_idx_2 = (ElastoDyn->NacCMxn * D[6] + ElastoDyn->NacCMzn * D[7]) -
    ElastoDyn->NacCMyn * D[8];
  rOQ[2] = (ElastoDyn->OverHang * C[6] + ElastoDyn->Twr2Shft * D[7]) - 0.0 * D[8];
  rQC_idx_2 = ElastoDyn->HubCM * E[6];
  I_pr_app = q_Nom[13];
  I_yaw_app = q_Nom[15];
  v_r_tip_X = q_Nom[14];
  for (it = 0; it <= 16; it += 2) {
    _mm_storeu_pd(&rQS1_1[it], _mm_add_pd(_mm_add_pd(_mm_mul_pd(_mm_loadu_pd
      (&Bld->O1_B1[it]), _mm_set1_pd(I_pr_app)), _mm_mul_pd(_mm_loadu_pd
      (&Bld->O2_B1[it]), _mm_set1_pd(I_yaw_app))), _mm_mul_pd(_mm_loadu_pd
      (&Bld->O3_B1[it]), _mm_set1_pd(v_r_tip_X))));
  }

  rQS1_1[18] = (q_Nom[13] * Bld->O1_B1[18] + q_Nom[15] * Bld->O2_B1[18]) +
    q_Nom[14] * Bld->O3_B1[18];
  st.site = &g_emlrtRSI;
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
    emlrtErrorWithMessageIdR2018a(&st, &c_emlrtRTEI,
      "Coder:MATLAB:getReshapeDims_notSameNumel",
      "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
  }

  b_loop_ub = (int32_T)Bld->nb;
  if (((int32_T)Bld->nb != 19) && ((int32_T)Bld->nb != 1)) {
    emlrtDimSizeImpxCheckR2021b((int32_T)Bld->nb, 19, &r_emlrtECI,
      (emlrtConstCTX)sp);
  }

  r = _mm_set1_pd(2.0);
  for (it = 0; it <= 16; it += 2) {
    _mm_storeu_pd(&rQS3_3[it], _mm_mul_pd(r, _mm_loadu_pd(&Bld->s12_B1[it])));
    _mm_storeu_pd(&rQS1_3_tmp[it], _mm_mul_pd(r, _mm_loadu_pd(&Bld->s23_B1[it])));
    _mm_storeu_pd(&b_rQS1_3_tmp[it], _mm_mul_pd(r, _mm_loadu_pd(&Bld->s13_B1[it])));
  }

  rQS3_3[18] = 2.0 * Bld->s12_B1[18];
  rQS1_3_tmp[18] = 2.0 * Bld->s23_B1[18];
  b_rQS1_3_tmp[18] = 2.0 * Bld->s13_B1[18];
  st.site = &g_emlrtRSI;
  v_c_tip_Z = q_Nom[13] * q_Nom[13];
  st.site = &g_emlrtRSI;
  ak_tip_Z = q_Nom[15] * q_Nom[15];
  st.site = &g_emlrtRSI;
  v_r_tip_X = q_Nom[14] * q_Nom[14];
  if ((int32_T)Bld->nb == 19) {
    g_proj_Y = q_Nom[14];
    g_proj_Z = q_Nom[14];
    n = ((int32_T)Bld->nb / 2) << 1;
    b_n = n - 2;
    for (b_it = 0; b_it <= b_n; b_it += 2) {
      r = _mm_loadu_pd(&rQS3_3[b_it]);
      r1 = _mm_loadu_pd(&rQS1_3_tmp[b_it]);
      r2 = _mm_loadu_pd(&b_rQS1_3_tmp[b_it]);
      r3 = _mm_set1_pd(I_yaw_app);
      r4 = _mm_set1_pd(I_pr_app);
      r5 = _mm_set1_pd(g_proj_Y);
      _mm_storeu_pd(&rQS1_3[b_it], _mm_sub_pd(_mm_add_pd(_mm_loadu_pd
        (&Bld->BldSec[b_it]), _mm_set1_pd(ElastoDyn->HubRad)), _mm_mul_pd
        (_mm_set1_pd(0.5), _mm_add_pd(_mm_add_pd(_mm_add_pd(_mm_add_pd
        (_mm_add_pd(_mm_mul_pd(_mm_loadu_pd(&Bld->s11_B1[b_it]), _mm_set1_pd
        (v_c_tip_Z)), _mm_mul_pd(_mm_loadu_pd(&Bld->s22_B1[b_it]), _mm_set1_pd
        (ak_tip_Z))), _mm_mul_pd(_mm_loadu_pd(&Bld->s33_B1[b_it]), _mm_set1_pd
        (v_r_tip_X))), _mm_mul_pd(_mm_mul_pd(r, r4), r3)), _mm_mul_pd(_mm_mul_pd
        (r1, r3), r5)), _mm_mul_pd(_mm_mul_pd(r2, r4), r5)))));
    }

    for (b_it = n; b_it < b_loop_ub; b_it++) {
      rQS1_3[b_it] = (Bld->BldSec[b_it] + ElastoDyn->HubRad) - 0.5 *
        (((((Bld->s11_B1[b_it] * v_c_tip_Z + Bld->s22_B1[b_it] * ak_tip_Z) +
            Bld->s33_B1[b_it] * v_r_tip_X) + rQS3_3[b_it] * I_pr_app * I_yaw_app)
          + rQS1_3_tmp[b_it] * I_yaw_app * g_proj_Y) + b_rQS1_3_tmp[b_it] *
         I_pr_app * g_proj_Z);
    }
  } else {
    binary_expand_op_159(rQS1_3, Bld, ElastoDyn, v_c_tip_Z, ak_tip_Z, v_r_tip_X,
                         rQS3_3, q_Nom, rQS1_3_tmp, b_rQS1_3_tmp);
  }

  v_c_tip_Z = q_Nom[14];
  ak_tip_Z = I_G[0];
  g_proj_X = I_G[1];
  g_proj_Y = I_G[2];
  g_proj_Z = I_G[3];
  v_r_tip_X = I_G[4];
  v_r_tip_Y = I_G[5];
  v_r_tip_Z = I_G[6];
  EvZ_tmp = I_G[7];
  rZT_3 = I_G[8];
  for (b_it = 0; b_it < 19; b_it++) {
    rQS1_2 = (Bld->W1_B1[b_it] * I_pr_app + Bld->W2_B1[b_it] * I_yaw_app) +
      Bld->W3_B1[b_it] * v_c_tip_Z;
    FRotor_R_idx_0 = rQS1_1[b_it];
    rQS1[3 * b_it] = FRotor_R_idx_0 * ak_tip_Z;
    c_out[3 * b_it] = rQS1_2 * g_proj_X;
    FRotor_R_idx_1 = rQS1_3[b_it];
    d_out[3 * b_it] = FRotor_R_idx_1 * g_proj_Y;
    n = 3 * b_it + 1;
    rQS1[n] = FRotor_R_idx_0 * g_proj_Z;
    c_out[n] = rQS1_2 * v_r_tip_X;
    d_out[n] = FRotor_R_idx_1 * v_r_tip_Y;
    n = 3 * b_it + 2;
    rQS1[n] = FRotor_R_idx_0 * v_r_tip_Z;
    c_out[n] = rQS1_2 * EvZ_tmp;
    d_out[n] = FRotor_R_idx_1 * rZT_3;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }

  for (it = 0; it <= 54; it += 2) {
    r = _mm_loadu_pd(&rQS1[it]);
    r1 = _mm_loadu_pd(&c_out[it]);
    r2 = _mm_loadu_pd(&d_out[it]);
    _mm_storeu_pd(&rQS1[it], _mm_add_pd(_mm_add_pd(r, r1), r2));
  }

  rQS1[56] = (rQS1[56] + c_out[56]) + d_out[56];
  I_pr_app = q_Nom[16];
  I_yaw_app = q_Nom[18];
  v_r_tip_Y = q_Nom[17];
  for (it = 0; it <= 16; it += 2) {
    _mm_storeu_pd(&rQS1_1[it], _mm_add_pd(_mm_add_pd(_mm_mul_pd(_mm_loadu_pd
      (&Bld->O1_B1[it]), _mm_set1_pd(I_pr_app)), _mm_mul_pd(_mm_loadu_pd
      (&Bld->O2_B1[it]), _mm_set1_pd(I_yaw_app))), _mm_mul_pd(_mm_loadu_pd
      (&Bld->O3_B1[it]), _mm_set1_pd(v_r_tip_Y))));
  }

  rQS1_1[18] = (q_Nom[16] * Bld->O1_B1[18] + Bld->O2_B1[18] * q_Nom[18]) +
    q_Nom[17] * Bld->O3_B1[18];
  st.site = &h_emlrtRSI;
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
    emlrtErrorWithMessageIdR2018a(&st, &c_emlrtRTEI,
      "Coder:MATLAB:getReshapeDims_notSameNumel",
      "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
  }

  st.site = &h_emlrtRSI;
  ak_tip_Z = q_Nom[16] * q_Nom[16];
  st.site = &h_emlrtRSI;
  v_r_tip_Y = q_Nom[18] * q_Nom[18];
  st.site = &h_emlrtRSI;
  v_r_tip_Z = q_Nom[17] * q_Nom[17];
  if ((int32_T)Bld->nb == 19) {
    v_c_tip_Z = q_Nom[17];
    n = ((int32_T)Bld->nb / 2) << 1;
    b_n = n - 2;
    for (it = 0; it <= b_n; it += 2) {
      r = _mm_loadu_pd(&rQS3_3[it]);
      r1 = _mm_loadu_pd(&rQS1_3_tmp[it]);
      r2 = _mm_loadu_pd(&b_rQS1_3_tmp[it]);
      r3 = _mm_set1_pd(I_yaw_app);
      r4 = _mm_set1_pd(I_pr_app);
      r5 = _mm_set1_pd(v_c_tip_Z);
      _mm_storeu_pd(&rQS1_3[it], _mm_sub_pd(_mm_add_pd(_mm_loadu_pd(&Bld->
        BldSec[it]), _mm_set1_pd(ElastoDyn->HubRad)), _mm_mul_pd(_mm_set1_pd(0.5),
        _mm_add_pd(_mm_add_pd(_mm_add_pd(_mm_add_pd(_mm_add_pd(_mm_mul_pd
        (_mm_loadu_pd(&Bld->s11_B1[it]), _mm_set1_pd(ak_tip_Z)), _mm_mul_pd
        (_mm_loadu_pd(&Bld->s22_B1[it]), _mm_set1_pd(v_r_tip_Y))), _mm_mul_pd
        (_mm_loadu_pd(&Bld->s33_B1[it]), _mm_set1_pd(v_r_tip_Z))), _mm_mul_pd
        (_mm_mul_pd(r, r4), r3)), _mm_mul_pd(_mm_mul_pd(r1, r3), r5)),
                   _mm_mul_pd(_mm_mul_pd(r2, r4), r5)))));
    }

    for (it = n; it < b_loop_ub; it++) {
      rQS1_3[it] = (Bld->BldSec[it] + ElastoDyn->HubRad) - 0.5 *
        (((((Bld->s11_B1[it] * ak_tip_Z + Bld->s22_B1[it] * v_r_tip_Y) +
            Bld->s33_B1[it] * v_r_tip_Z) + rQS3_3[it] * I_pr_app * I_yaw_app) +
          rQS1_3_tmp[it] * I_yaw_app * v_c_tip_Z) + b_rQS1_3_tmp[it] * I_pr_app *
         v_c_tip_Z);
    }
  } else {
    binary_expand_op_158(rQS1_3, Bld, ElastoDyn, ak_tip_Z, v_r_tip_Y, v_r_tip_Z,
                         rQS3_3, q_Nom, rQS1_3_tmp, b_rQS1_3_tmp);
  }

  v_c_tip_Z = q_Nom[17];
  ak_tip_Z = I_N[0];
  g_proj_X = I_N[1];
  g_proj_Y = I_N[2];
  g_proj_Z = I_N[3];
  v_r_tip_X = I_N[4];
  v_r_tip_Y = I_N[5];
  v_r_tip_Z = I_N[6];
  EvZ_tmp = I_N[7];
  rZT_3 = I_N[8];
  for (it = 0; it < 19; it++) {
    FRotor_R_idx_0 = (Bld->W1_B1[it] * I_pr_app + Bld->W2_B1[it] * I_yaw_app) +
      Bld->W3_B1[it] * v_c_tip_Z;
    rQS1_2 = rQS1_1[it];
    rQS2[3 * it] = rQS1_2 * ak_tip_Z;
    c_out[3 * it] = FRotor_R_idx_0 * g_proj_X;
    FRotor_R_idx_1 = rQS1_3[it];
    d_out[3 * it] = FRotor_R_idx_1 * g_proj_Y;
    n = 3 * it + 1;
    rQS2[n] = rQS1_2 * g_proj_Z;
    c_out[n] = FRotor_R_idx_0 * v_r_tip_X;
    d_out[n] = FRotor_R_idx_1 * v_r_tip_Y;
    n = 3 * it + 2;
    rQS2[n] = rQS1_2 * v_r_tip_Z;
    c_out[n] = FRotor_R_idx_0 * EvZ_tmp;
    d_out[n] = FRotor_R_idx_1 * rZT_3;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }

  for (it = 0; it <= 54; it += 2) {
    r = _mm_loadu_pd(&rQS2[it]);
    r1 = _mm_loadu_pd(&c_out[it]);
    r2 = _mm_loadu_pd(&d_out[it]);
    _mm_storeu_pd(&rQS2[it], _mm_add_pd(_mm_add_pd(r, r1), r2));
  }

  rQS2[56] = (rQS2[56] + c_out[56]) + d_out[56];
  I_pr_app = q_Nom[19];
  I_yaw_app = q_Nom[21];
  v_r_tip_Z = q_Nom[20];
  for (it = 0; it <= 16; it += 2) {
    _mm_storeu_pd(&rQS1_3[it], _mm_add_pd(_mm_add_pd(_mm_mul_pd(_mm_loadu_pd
      (&Bld->O1_B1[it]), _mm_set1_pd(I_pr_app)), _mm_mul_pd(_mm_loadu_pd
      (&Bld->O2_B1[it]), _mm_set1_pd(I_yaw_app))), _mm_mul_pd(_mm_loadu_pd
      (&Bld->O3_B1[it]), _mm_set1_pd(v_r_tip_Z))));
  }

  rQS1_3[18] = (Bld->O1_B1[18] * q_Nom[19] + Bld->O2_B1[18] * q_Nom[21]) +
    Bld->O3_B1[18] * q_Nom[20];
  st.site = &i_emlrtRSI;
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
    emlrtErrorWithMessageIdR2018a(&st, &c_emlrtRTEI,
      "Coder:MATLAB:getReshapeDims_notSameNumel",
      "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
  }

  st.site = &i_emlrtRSI;
  ak_tip_Z = q_Nom[19] * q_Nom[19];
  st.site = &i_emlrtRSI;
  g_proj_X = q_Nom[21] * q_Nom[21];
  st.site = &i_emlrtRSI;
  g_proj_Y = q_Nom[20] * q_Nom[20];
  if ((int32_T)Bld->nb == 19) {
    v_c_tip_Z = q_Nom[20];
    n = (int32_T)Bld->nb - 1;
    b_n = ((int32_T)Bld->nb / 2) << 1;
    c_n = b_n - 2;
    for (it = 0; it <= c_n; it += 2) {
      r = _mm_loadu_pd(&rQS3_3[it]);
      r1 = _mm_loadu_pd(&rQS1_3_tmp[it]);
      r2 = _mm_loadu_pd(&b_rQS1_3_tmp[it]);
      r3 = _mm_set1_pd(I_yaw_app);
      r4 = _mm_set1_pd(I_pr_app);
      r5 = _mm_set1_pd(v_c_tip_Z);
      _mm_storeu_pd(&rQS3_3[it], _mm_sub_pd(_mm_add_pd(_mm_loadu_pd(&Bld->
        BldSec[it]), _mm_set1_pd(ElastoDyn->HubRad)), _mm_mul_pd(_mm_set1_pd(0.5),
        _mm_add_pd(_mm_add_pd(_mm_add_pd(_mm_add_pd(_mm_add_pd(_mm_mul_pd
        (_mm_loadu_pd(&Bld->s11_B1[it]), _mm_set1_pd(ak_tip_Z)), _mm_mul_pd
        (_mm_loadu_pd(&Bld->s22_B1[it]), _mm_set1_pd(g_proj_X))), _mm_mul_pd
        (_mm_loadu_pd(&Bld->s33_B1[it]), _mm_set1_pd(g_proj_Y))), _mm_mul_pd
        (_mm_mul_pd(r, r4), r3)), _mm_mul_pd(_mm_mul_pd(r1, r3), r5)),
                   _mm_mul_pd(_mm_mul_pd(r2, r4), r5)))));
    }

    for (it = b_n; it <= n; it++) {
      rQS3_3[it] = (Bld->BldSec[it] + ElastoDyn->HubRad) - 0.5 *
        (((((Bld->s11_B1[it] * ak_tip_Z + Bld->s22_B1[it] * g_proj_X) +
            Bld->s33_B1[it] * g_proj_Y) + rQS3_3[it] * I_pr_app * I_yaw_app) +
          rQS1_3_tmp[it] * I_yaw_app * v_c_tip_Z) + b_rQS1_3_tmp[it] * I_pr_app *
         v_c_tip_Z);
    }
  } else {
    binary_expand_op_157(rQS3_3, Bld, ElastoDyn, ak_tip_Z, g_proj_X, g_proj_Y,
                         q_Nom, rQS1_3_tmp, b_rQS1_3_tmp);
  }

  v_c_tip_Z = q_Nom[20];
  ak_tip_Z = I_H[0];
  g_proj_X = I_H[1];
  g_proj_Y = I_H[2];
  g_proj_Z = I_H[3];
  v_r_tip_X = I_H[4];
  v_r_tip_Y = I_H[5];
  v_r_tip_Z = I_H[6];
  EvZ_tmp = I_H[7];
  rZT_3 = I_H[8];
  for (it = 0; it < 19; it++) {
    rQS1_2 = (Bld->W1_B1[it] * I_pr_app + Bld->W2_B1[it] * I_yaw_app) +
      Bld->W3_B1[it] * v_c_tip_Z;
    FRotor_R_idx_1 = rQS1_3[it];
    rQS3[3 * it] = FRotor_R_idx_1 * ak_tip_Z;
    c_out[3 * it] = rQS1_2 * g_proj_X;
    FRotor_R_idx_0 = rQS3_3[it];
    d_out[3 * it] = FRotor_R_idx_0 * g_proj_Y;
    n = 3 * it + 1;
    rQS3[n] = FRotor_R_idx_1 * g_proj_Z;
    c_out[n] = rQS1_2 * v_r_tip_X;
    d_out[n] = FRotor_R_idx_0 * v_r_tip_Y;
    n = 3 * it + 2;
    rQS3[n] = FRotor_R_idx_1 * v_r_tip_Z;
    c_out[n] = rQS1_2 * EvZ_tmp;
    d_out[n] = FRotor_R_idx_0 * rZT_3;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }

  for (it = 0; it <= 54; it += 2) {
    r = _mm_loadu_pd(&rQS3[it]);
    r1 = _mm_loadu_pd(&c_out[it]);
    r2 = _mm_loadu_pd(&d_out[it]);
    _mm_storeu_pd(&rQS3[it], _mm_add_pd(_mm_add_pd(r, r1), r2));
  }

  rQS3[56] = (rQS3[56] + c_out[56]) + d_out[56];

  /*  end of Position Vectors */
  /*  Angular velocities */
  I_yaw_app = Twr->dO1_TSS * q_Nom[41] + Twr->dO2_TSS * q_Nom[43];
  v_r_tip_X = Twr->dO1_TFA * q_Nom[40] + Twr->dO2_TFA * q_Nom[42];
  v_r_tip_Y = ElastoDyn->GBRatio * q_Nom[45];

  /*  end of Angular velocities */
  /*  ================== OC4 浮筒端部角速度 ================== */
  /*  浮筒端部相对于基准系的角速度 (由柔性弯曲引起) */
  /*  绕 Y 轴的转动由垂向 (V) 弯曲引起，绕 Z 轴的转动由水平 (H) 弯曲引起 */
  rQS1_2 = -(Platform->dO1_V * q_Nom[58] + Platform->dO2_V * q_Nom[59]);
  FRotor_R_idx_0 = Platform->dO1_H * q_Nom[56] + Platform->dO2_H * q_Nom[57];
  FRotor_R_idx_1 = -(Platform->dO1_V * q_Nom[62] + Platform->dO2_V * q_Nom[63]);
  FRotor_R_idx_2 = Platform->dO1_H * q_Nom[60] + Platform->dO2_H * q_Nom[61];
  b = -(Platform->dO1_V * q_Nom[66] + Platform->dO2_V * q_Nom[67]);
  b_b = Platform->dO1_H * q_Nom[64] + Platform->dO2_H * q_Nom[65];

  /*  Velocity vectors */
  I_pr_app = q_Nom[38] * 0.0;
  v_r_tip_Z = q_Nom[39] * 0.0;
  d = (q_Nom[37] + v_r_tip_Z) - I_pr_app;
  EwX[0] = d;
  d1 = (d + I_yaw_app * A[0]) - v_r_tip_X * A[2];
  EwB[0] = d1;
  d2 = d1 + D[1] * q_Nom[44];
  EwN_idx_0 = d2;
  EwL[0] = (d2 + C[0] * q_Nom[46]) + C[0] * q_Nom[45];
  EwG_idx_0 = d2 + v_r_tip_Y * C[0];
  d3 = rQS1_2 * P_BP[0].f1[1];
  MB3_DrTr[0] = d3;
  d4 = FRotor_R_idx_0 * P_BP[0].f1[2];
  MB1_B1F1[0] = d4;
  P_Ew_tip[0].f1[0] = (d + d3) + d4;
  d5 = FRotor_R_idx_1 * P_BP[1].f1[1];
  MB1_B1E1[0] = d5;
  d6 = FRotor_R_idx_2 * P_BP[1].f1[2];
  MB1_B1F2[0] = d6;
  P_Ew_tip[1].f1[0] = (d + d5) + d6;
  d7 = b * P_BP[2].f1[1];
  MB2_B2F1[0] = d7;
  d8 = b_b * P_BP[2].f1[2];
  MB2_B2E1[0] = d8;
  P_Ew_tip[2].f1[0] = (d + d7) + d8;
  EvZ_tmp = q_Nom[35] * 0.0;
  v_c_tip_Z = q_Nom[36] * 0.0;
  EvZ[0] = (q_Nom[34] + v_c_tip_Z) - EvZ_tmp;
  rZT_3 = q_Nom[37] * 0.0;
  d = (rZT_3 + q_Nom[39]) - I_pr_app;
  EwX[1] = d;
  d1 = (d + I_yaw_app * A[3]) - v_r_tip_X * A[5];
  EwB[1] = d1;
  d2 = d1 + D[4] * q_Nom[44];
  EwN_idx_1 = d2;
  EwL[1] = (d2 + C[3] * q_Nom[46]) + C[3] * q_Nom[45];
  EwG_idx_1 = d2 + v_r_tip_Y * C[3];
  d3 = rQS1_2 * P_BP[0].f1[4];
  MB3_DrTr[1] = d3;
  d4 = FRotor_R_idx_0 * P_BP[0].f1[5];
  MB1_B1F1[1] = d4;
  P_Ew_tip[0].f1[1] = (d + d3) + d4;
  d5 = FRotor_R_idx_1 * P_BP[1].f1[4];
  MB1_B1E1[1] = d5;
  d6 = FRotor_R_idx_2 * P_BP[1].f1[5];
  MB1_B1F2[1] = d6;
  P_Ew_tip[1].f1[1] = (d + d5) + d6;
  d7 = b * P_BP[2].f1[4];
  MB2_B2F1[1] = d7;
  d8 = b_b * P_BP[2].f1[5];
  MB2_B2E1[1] = d8;
  P_Ew_tip[2].f1[1] = (d + d7) + d8;
  I_pr_app = q_Nom[34] * 0.0;
  EvZ[1] = (I_pr_app + q_Nom[36]) - EvZ_tmp;
  d = (rZT_3 + v_r_tip_Z) - q_Nom[38];
  EwX[2] = d;
  d1 = (d + I_yaw_app * A[6]) - v_r_tip_X * A[8];
  d2 = d1 + D[7] * q_Nom[44];
  EwL[2] = (d2 + C[6] * q_Nom[46]) + C[6] * q_Nom[45];
  EwG_idx_2 = d2 + v_r_tip_Y * C[6];
  d3 = rQS1_2 * P_BP[0].f1[7];
  d4 = FRotor_R_idx_0 * P_BP[0].f1[8];
  P_Ew_tip[0].f1[2] = (d + d3) + d4;
  d5 = FRotor_R_idx_1 * P_BP[1].f1[7];
  d6 = FRotor_R_idx_2 * P_BP[1].f1[8];
  P_Ew_tip[1].f1[2] = (d + d5) + d6;
  d7 = b * P_BP[2].f1[7];
  d8 = b_b * P_BP[2].f1[8];
  P_Ew_tip[2].f1[2] = (d + d7) + d8;
  EvZ[2] = (I_pr_app + v_c_tip_Z) - q_Nom[35];
  tip_mass_X_tot = q_Nom[8] * q_Nom[40] + q_Nom[6] * q_Nom[42];
  tip_mass_Z_tot = q_Nom[9] * q_Nom[41] + q_Nom[7] * q_Nom[43];
  FRotor_R_idx_0 = q_Nom[40];
  FRotor_R_idx_1 = q_Nom[42];
  FRotor_R_idx_2 = q_Nom[6];
  b = q_Nom[7];
  b_b = q_Nom[8];
  v_c_tip_Z = q_Nom[9];
  ak_tip_Z = q_Nom[41];
  g_proj_X = q_Nom[43];
  g_proj_Y = A[0];
  g_proj_Z = A[1];
  EvZ_tmp = A[2];
  v_r_tip_X = A[3];
  v_r_tip_Y = A[4];
  v_r_tip_Z = A[5];
  c_b = A[6];
  d_b = A[7];
  b_rQS1_1 = A[8];
  for (it = 0; it < 11; it++) {
    b_rZT_1 = Twr->O1_TFA[it] * FRotor_R_idx_0 + Twr->O2_TFA[it] *
      FRotor_R_idx_1;
    I_pr_app = Twr->s11_TFA[it] * FRotor_R_idx_2;
    rZT_2[it] = I_pr_app;
    I_yaw_app = Twr->s11_TSS[it] * b;
    rZT_1[it] = I_yaw_app;
    rZT_3 = Twr->s22_TFA[it] * b_b;
    XvT_2_tmp[it] = rZT_3;
    rQS1_2 = Twr->s22_TSS[it] * v_c_tip_Z;
    b_XvT_2_tmp[it] = rQS1_2;
    I_pr_app = -(((((I_pr_app * FRotor_R_idx_0 + rZT_3 * FRotor_R_idx_1) +
                    Twr->s12_TFA[it] * tip_mass_X_tot) + I_yaw_app * ak_tip_Z) +
                  rQS1_2 * g_proj_X) + Twr->s12_TSS[it] * tip_mass_Z_tot);
    I_yaw_app = Twr->O1_TSS[it] * ak_tip_Z + Twr->O2_TSS[it] * g_proj_X;
    XvT[3 * it] = b_rZT_1 * g_proj_Y;
    out[3 * it] = I_pr_app * g_proj_Z;
    b_out[3 * it] = I_yaw_app * EvZ_tmp;
    n = 3 * it + 1;
    XvT[n] = b_rZT_1 * v_r_tip_X;
    out[n] = I_pr_app * v_r_tip_Y;
    b_out[n] = I_yaw_app * v_r_tip_Z;
    n = 3 * it + 2;
    XvT[n] = b_rZT_1 * c_b;
    out[n] = I_pr_app * d_b;
    b_out[n] = I_yaw_app * b_rQS1_1;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }

  for (it = 0; it <= 30; it += 2) {
    r = _mm_loadu_pd(&XvT[it]);
    r1 = _mm_loadu_pd(&out[it]);
    r2 = _mm_loadu_pd(&b_out[it]);
    _mm_storeu_pd(&XvT[it], _mm_add_pd(_mm_add_pd(r, r1), r2));
  }

  XvT[32] = (XvT[32] + out[32]) + b_out[32];
  ak_tip_Z = q_Nom[40] + q_Nom[42];
  a_tmp = Twr->S11_TFA * q_Nom[6];
  b_a_tmp = Twr->S11_TSS * q_Nom[7];
  c_a_tmp = Twr->S22_TFA * q_Nom[8];
  d_a_tmp = Twr->S22_TSS * q_Nom[9];
  I_pr_app = -(((((a_tmp * q_Nom[40] + c_a_tmp * q_Nom[42]) + Twr->S12_TFA *
                  tip_mass_X_tot) + b_a_tmp * q_Nom[41]) + d_a_tmp * q_Nom[43])
               + Twr->S12_TSS * tip_mass_Z_tot);
  I_yaw_app = q_Nom[41] + q_Nom[43];
  MB1_DrTr[0] = EwX[1] * rZO[2] - rZO[1] * d;
  MB1_DrTr[1] = rZO[0] * d - EwX[0] * rZO[2];
  MB1_DrTr[2] = EwX[0] * rZO[1] - rZO[0] * EwX[1];
  MB2_DrTr[0] = EwN_idx_1 * rOQ[2] - rOQ[1] * d2;
  MB2_DrTr[1] = rOQ[0] * d2 - EwN_idx_0 * rOQ[2];
  MB2_DrTr[2] = EwN_idx_0 * rOQ[1] - rOQ[0] * EwN_idx_1;
  v_c_tip_Z = (ak_tip_Z * A[0] + I_pr_app * A[1]) + I_yaw_app * A[2];
  XvO[0] = v_c_tip_Z;
  EvQ[0] = ((v_c_tip_Z + EvZ[0]) + MB1_DrTr[0]) + MB2_DrTr[0];
  v_c_tip_Z = (ak_tip_Z * A[3] + I_pr_app * A[4]) + I_yaw_app * A[5];
  XvO[1] = v_c_tip_Z;
  EvQ[1] = ((v_c_tip_Z + EvZ[1]) + MB1_DrTr[1]) + MB2_DrTr[1];
  v_c_tip_Z = (ak_tip_Z * A[6] + I_pr_app * A[7]) + I_yaw_app * A[8];
  XvO[2] = v_c_tip_Z;
  EvQ[2] = ((v_c_tip_Z + EvZ[2]) + MB1_DrTr[2]) + MB2_DrTr[2];
  rQS1_2 = q_Nom[15] * q_Nom[47] + q_Nom[13] * q_Nom[49];
  FRotor_R_idx_0 = q_Nom[14] * q_Nom[49] + q_Nom[15] * q_Nom[48];
  FRotor_R_idx_1 = q_Nom[14] * q_Nom[47] + q_Nom[13] * q_Nom[48];
  FRotor_R_idx_2 = q_Nom[47];
  b = q_Nom[49];
  b_b = q_Nom[48];
  v_c_tip_Z = q_Nom[13];
  ak_tip_Z = q_Nom[14];
  g_proj_X = q_Nom[15];
  g_proj_Y = I_G[0];
  g_proj_Z = I_G[1];
  EvZ_tmp = I_G[2];
  v_r_tip_X = I_G[3];
  v_r_tip_Y = I_G[4];
  v_r_tip_Z = I_G[5];
  e_b = I_G[6];
  f_b = I_G[7];
  b_rQS1_2 = I_G[8];
  for (it = 0; it < 19; it++) {
    c_rQS1_1 = (Bld->O1_B1[it] * FRotor_R_idx_2 + Bld->O2_B1[it] * b) +
      Bld->O3_B1[it] * b_b;
    I_pr_app = Bld->s11_B1[it] * v_c_tip_Z;
    HvS1_3_tmp[it] = I_pr_app;
    I_yaw_app = Bld->s33_B1[it] * ak_tip_Z;
    b_HvS1_3_tmp[it] = I_yaw_app;
    rZT_3 = Bld->s22_B1[it] * g_proj_X;
    c_HvS1_3_tmp[it] = rZT_3;
    I_pr_app = -(((((I_pr_app * FRotor_R_idx_2 + rZT_3 * b) + I_yaw_app * b_b) +
                   Bld->s12_B1[it] * rQS1_2) + Bld->s23_B1[it] * FRotor_R_idx_0)
                 + Bld->s13_B1[it] * FRotor_R_idx_1);
    I_yaw_app = (Bld->W1_B1[it] * FRotor_R_idx_2 + Bld->W2_B1[it] * b) +
      Bld->W3_B1[it] * b_b;
    HvS1[3 * it] = c_rQS1_1 * g_proj_Y;
    c_out[3 * it] = I_yaw_app * g_proj_Z;
    d_out[3 * it] = I_pr_app * EvZ_tmp;
    n = 3 * it + 1;
    HvS1[n] = c_rQS1_1 * v_r_tip_X;
    c_out[n] = I_yaw_app * v_r_tip_Y;
    d_out[n] = I_pr_app * v_r_tip_Z;
    n = 3 * it + 2;
    HvS1[n] = c_rQS1_1 * e_b;
    c_out[n] = I_yaw_app * f_b;
    d_out[n] = I_pr_app * b_rQS1_2;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }

  for (it = 0; it <= 54; it += 2) {
    r = _mm_loadu_pd(&HvS1[it]);
    r1 = _mm_loadu_pd(&c_out[it]);
    r2 = _mm_loadu_pd(&d_out[it]);
    _mm_storeu_pd(&HvS1[it], _mm_add_pd(_mm_add_pd(r, r1), r2));
  }

  HvS1[56] = (HvS1[56] + c_out[56]) + d_out[56];
  emxInit_real_T(sp, &r6, 3, &dk_emlrtRTEI);
  st.site = &j_emlrtRSI;
  repmat(&st, EvQ, Bld->nb, r6);
  r7 = r6->data;
  if ((r6->size[2] != 19) && (r6->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(r6->size[2], 19, &s_emlrtECI, (emlrtConstCTX)sp);
  }

  emxInit_real_T(sp, &loop_ub_tmp, 3, &sk_emlrtRTEI);
  st.site = &j_emlrtRSI;
  repmat(&st, EwL, Bld->nb, loop_ub_tmp);
  emxInit_real_T(sp, &r8, 3, &dk_emlrtRTEI);
  st.site = &j_emlrtRSI;
  cross(&st, loop_ub_tmp, rQS1, r8);
  ZBlNode_Y_data = r8->data;
  if ((r8->size[2] != 19) && (r8->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(19, r8->size[2], &s_emlrtECI, (emlrtConstCTX)sp);
  }

  if ((r6->size[2] == 19) && (r8->size[2] == 19)) {
    for (it = 0; it <= 54; it += 2) {
      r = _mm_loadu_pd(&r7[it]);
      r1 = _mm_loadu_pd(&HvS1[it]);
      r2 = _mm_loadu_pd(&ZBlNode_Y_data[it]);
      _mm_storeu_pd(&EvS1[it], _mm_add_pd(_mm_add_pd(r, r1), r2));
    }

    EvS1[56] = (r7[56] + HvS1[56]) + ZBlNode_Y_data[56];
  } else {
    binary_expand_op_154(EvS1, r6, HvS1, r8);
  }

  rQS1_2 = q_Nom[18] * q_Nom[50] + q_Nom[16] * q_Nom[52];
  FRotor_R_idx_0 = q_Nom[17] * q_Nom[52] + q_Nom[18] * q_Nom[51];
  FRotor_R_idx_1 = q_Nom[17] * q_Nom[50] + q_Nom[16] * q_Nom[51];
  FRotor_R_idx_2 = q_Nom[50];
  b = q_Nom[52];
  b_b = q_Nom[51];
  v_c_tip_Z = q_Nom[16];
  ak_tip_Z = q_Nom[17];
  g_proj_X = q_Nom[18];
  g_proj_Y = I_N[0];
  g_proj_Z = I_N[1];
  EvZ_tmp = I_N[2];
  v_r_tip_X = I_N[3];
  v_r_tip_Y = I_N[4];
  v_r_tip_Z = I_N[5];
  dEvQ_TSS1_tmp = I_N[6];
  XvP1_1_tmp = I_N[7];
  e_a_tmp = I_N[8];
  for (it = 0; it < 19; it++) {
    d_rQS1_1 = (Bld->O1_B1[it] * FRotor_R_idx_2 + Bld->O2_B1[it] * b) +
      Bld->O3_B1[it] * b_b;
    I_pr_app = Bld->s11_B1[it] * v_c_tip_Z;
    HvS2_3_tmp[it] = I_pr_app;
    I_yaw_app = Bld->s33_B1[it] * ak_tip_Z;
    b_HvS2_3_tmp[it] = I_yaw_app;
    rZT_3 = Bld->s22_B1[it] * g_proj_X;
    c_HvS2_3_tmp[it] = rZT_3;
    I_pr_app = -(((((I_pr_app * FRotor_R_idx_2 + rZT_3 * b) + I_yaw_app * b_b) +
                   Bld->s12_B1[it] * rQS1_2) + Bld->s23_B1[it] * FRotor_R_idx_0)
                 + Bld->s13_B1[it] * FRotor_R_idx_1);
    I_yaw_app = (Bld->W1_B1[it] * FRotor_R_idx_2 + Bld->W2_B1[it] * b) +
      Bld->W3_B1[it] * b_b;
    HvS2[3 * it] = d_rQS1_1 * g_proj_Y;
    c_out[3 * it] = I_yaw_app * g_proj_Z;
    d_out[3 * it] = I_pr_app * EvZ_tmp;
    n = 3 * it + 1;
    HvS2[n] = d_rQS1_1 * v_r_tip_X;
    c_out[n] = I_yaw_app * v_r_tip_Y;
    d_out[n] = I_pr_app * v_r_tip_Z;
    n = 3 * it + 2;
    HvS2[n] = d_rQS1_1 * dEvQ_TSS1_tmp;
    c_out[n] = I_yaw_app * XvP1_1_tmp;
    d_out[n] = I_pr_app * e_a_tmp;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }

  for (it = 0; it <= 54; it += 2) {
    r = _mm_loadu_pd(&HvS2[it]);
    r1 = _mm_loadu_pd(&c_out[it]);
    r2 = _mm_loadu_pd(&d_out[it]);
    _mm_storeu_pd(&HvS2[it], _mm_add_pd(_mm_add_pd(r, r1), r2));
  }

  HvS2[56] = (HvS2[56] + c_out[56]) + d_out[56];
  st.site = &k_emlrtRSI;
  repmat(&st, EvQ, Bld->nb, r6);
  r7 = r6->data;
  if ((r6->size[2] != 19) && (r6->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(r6->size[2], 19, &t_emlrtECI, (emlrtConstCTX)sp);
  }

  st.site = &k_emlrtRSI;
  repmat(&st, EwL, Bld->nb, loop_ub_tmp);
  st.site = &k_emlrtRSI;
  cross(&st, loop_ub_tmp, rQS2, r8);
  ZBlNode_Y_data = r8->data;
  if ((r8->size[2] != 19) && (r8->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(19, r8->size[2], &t_emlrtECI, (emlrtConstCTX)sp);
  }

  if ((r6->size[2] == 19) && (r8->size[2] == 19)) {
    for (it = 0; it <= 54; it += 2) {
      r = _mm_loadu_pd(&r7[it]);
      r1 = _mm_loadu_pd(&HvS2[it]);
      r2 = _mm_loadu_pd(&ZBlNode_Y_data[it]);
      _mm_storeu_pd(&EvS2[it], _mm_add_pd(_mm_add_pd(r, r1), r2));
    }

    EvS2[56] = (r7[56] + HvS2[56]) + ZBlNode_Y_data[56];
  } else {
    binary_expand_op_154(EvS2, r6, HvS2, r8);
  }

  rQS1_2 = q_Nom[21] * q_Nom[53] + q_Nom[19] * q_Nom[55];
  FRotor_R_idx_0 = q_Nom[20] * q_Nom[55] + q_Nom[21] * q_Nom[54];
  FRotor_R_idx_1 = q_Nom[20] * q_Nom[53] + q_Nom[19] * q_Nom[54];
  FRotor_R_idx_2 = q_Nom[53];
  b = q_Nom[55];
  b_b = q_Nom[54];
  v_c_tip_Z = q_Nom[19];
  ak_tip_Z = q_Nom[20];
  g_proj_X = q_Nom[21];
  g_proj_Y = I_H[0];
  g_proj_Z = I_H[1];
  EvZ_tmp = I_H[2];
  v_r_tip_X = I_H[3];
  v_r_tip_Y = I_H[4];
  v_r_tip_Z = I_H[5];
  f_a_tmp = I_H[6];
  g_a_tmp = I_H[7];
  h_a_tmp = I_H[8];
  for (it = 0; it < 19; it++) {
    e_rQS1_1 = (Bld->O1_B1[it] * FRotor_R_idx_2 + Bld->O2_B1[it] * b) +
      Bld->O3_B1[it] * b_b;
    I_pr_app = Bld->s11_B1[it] * v_c_tip_Z;
    rQS1_3_tmp[it] = I_pr_app;
    I_yaw_app = Bld->s33_B1[it] * ak_tip_Z;
    b_rQS1_3_tmp[it] = I_yaw_app;
    rZT_3 = Bld->s22_B1[it] * g_proj_X;
    rQS3_3[it] = rZT_3;
    I_pr_app = -(((((I_pr_app * FRotor_R_idx_2 + rZT_3 * b) + I_yaw_app * b_b) +
                   Bld->s12_B1[it] * rQS1_2) + Bld->s23_B1[it] * FRotor_R_idx_0)
                 + Bld->s13_B1[it] * FRotor_R_idx_1);
    I_yaw_app = (Bld->W1_B1[it] * FRotor_R_idx_2 + Bld->W2_B1[it] * b) +
      Bld->W3_B1[it] * b_b;
    HvS3[3 * it] = e_rQS1_1 * g_proj_Y;
    c_out[3 * it] = I_yaw_app * g_proj_Z;
    d_out[3 * it] = I_pr_app * EvZ_tmp;
    n = 3 * it + 1;
    HvS3[n] = e_rQS1_1 * v_r_tip_X;
    c_out[n] = I_yaw_app * v_r_tip_Y;
    d_out[n] = I_pr_app * v_r_tip_Z;
    n = 3 * it + 2;
    HvS3[n] = e_rQS1_1 * f_a_tmp;
    c_out[n] = I_yaw_app * g_a_tmp;
    d_out[n] = I_pr_app * h_a_tmp;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }

  for (it = 0; it <= 54; it += 2) {
    r = _mm_loadu_pd(&HvS3[it]);
    r1 = _mm_loadu_pd(&c_out[it]);
    r2 = _mm_loadu_pd(&d_out[it]);
    _mm_storeu_pd(&HvS3[it], _mm_add_pd(_mm_add_pd(r, r1), r2));
  }

  HvS3[56] = (HvS3[56] + c_out[56]) + d_out[56];
  st.site = &l_emlrtRSI;
  repmat(&st, EvQ, Bld->nb, r6);
  r7 = r6->data;
  if ((r6->size[2] != 19) && (r6->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(r6->size[2], 19, &u_emlrtECI, (emlrtConstCTX)sp);
  }

  st.site = &l_emlrtRSI;
  repmat(&st, EwL, Bld->nb, loop_ub_tmp);
  st.site = &l_emlrtRSI;
  cross(&st, loop_ub_tmp, rQS3, r8);
  ZBlNode_Y_data = r8->data;
  if ((r8->size[2] != 19) && (r8->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(19, r8->size[2], &u_emlrtECI, (emlrtConstCTX)sp);
  }

  if ((r6->size[2] == 19) && (r8->size[2] == 19)) {
    for (it = 0; it <= 54; it += 2) {
      r = _mm_loadu_pd(&r7[it]);
      r1 = _mm_loadu_pd(&HvS3[it]);
      r2 = _mm_loadu_pd(&ZBlNode_Y_data[it]);
      _mm_storeu_pd(&EvS3[it], _mm_add_pd(_mm_add_pd(r, r1), r2));
    }

    EvS3[56] = (r7[56] + HvS3[56]) + ZBlNode_Y_data[56];
  } else {
    binary_expand_op_154(EvS3, r6, HvS3, r8);
  }

  /* end of Velocity Vectors */
  /*  ================== OC4 浮筒节点与端部线速度 ================== */
  /*  --- 补充提取浮筒端部振型值 (用于下面端部速度和加速度的计算) --- */
  /*  --- 梁 1 (指向 0 度) --- */
  /*  相对速度 X分量 (轴向缩短效应的全导数) */
  c_b = q_Nom[24] * q_Nom[59] + q_Nom[25] * q_Nom[58];
  d_b = q_Nom[22] * q_Nom[57] + q_Nom[23] * q_Nom[56];
  FRotor_R_idx_0 = q_Nom[22];
  FRotor_R_idx_1 = q_Nom[23];
  FRotor_R_idx_2 = q_Nom[24];
  b = q_Nom[25];
  b_b = q_Nom[58];
  v_c_tip_Z = q_Nom[59];
  ak_tip_Z = q_Nom[56];
  g_proj_X = q_Nom[57];
  g_proj_Y = P_BP[0].f1[0];
  g_proj_Z = P_BP[0].f1[1];
  EvZ_tmp = P_BP[0].f1[2];
  v_r_tip_X = P_BP[0].f1[3];
  v_r_tip_Y = P_BP[0].f1[4];
  v_r_tip_Z = P_BP[0].f1[5];
  i_a_tmp = P_BP[0].f1[6];
  j_a_tmp = P_BP[0].f1[7];
  k_a_tmp = P_BP[0].f1[8];
  for (it = 0; it < 15; it++) {
    I_pr_app = Platform->s11_H[it] * FRotor_R_idx_0;
    XvP2_2[it] = I_pr_app;
    I_yaw_app = Platform->s22_H[it] * FRotor_R_idx_1;
    b_XvP1_1_tmp[it] = I_yaw_app;
    rZT_3 = Platform->s11_V[it] * FRotor_R_idx_2;
    c_XvP1_1_tmp[it] = rZT_3;
    rQS1_2 = Platform->s22_V[it] * b;
    d_XvP1_1_tmp[it] = rQS1_2;
    I_pr_app = -(((((rZT_3 * b_b + rQS1_2 * v_c_tip_Z) + Platform->s12_V[it] *
                    c_b) + I_pr_app * ak_tip_Z) + I_yaw_app * g_proj_X) +
                 Platform->s12_H[it] * d_b);
    I_yaw_app = Platform->O1_H[it] * ak_tip_Z + Platform->O2_H[it] * g_proj_X;
    rZT_3 = Platform->O1_V[it] * b_b + Platform->O2_V[it] * v_c_tip_Z;
    e_out[3 * it] = I_pr_app * g_proj_Y;
    f_out[3 * it] = I_yaw_app * g_proj_Z;
    g_out[3 * it] = rZT_3 * EvZ_tmp;
    n = 3 * it + 1;
    e_out[n] = I_pr_app * v_r_tip_X;
    f_out[n] = I_yaw_app * v_r_tip_Y;
    g_out[n] = rZT_3 * v_r_tip_Z;
    n = 3 * it + 2;
    e_out[n] = I_pr_app * i_a_tmp;
    f_out[n] = I_yaw_app * j_a_tmp;
    g_out[n] = rZT_3 * k_a_tmp;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }

  /*  分布节点绝对速度 */
  st.site = &m_emlrtRSI;
  repmat(&st, EvZ, Platform->nt, r6);
  if ((r6->size[2] != 15) && (r6->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(r6->size[2], 15, &v_emlrtECI, (emlrtConstCTX)sp);
  }

  st.site = &m_emlrtRSI;
  repmat(&st, EwX, Platform->nt, r6);
  st.site = &m_emlrtRSI;
  b_cross(&st, r6, dXvP2, loop_ub_tmp);
  if ((loop_ub_tmp->size[2] != 15) && (loop_ub_tmp->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(15, loop_ub_tmp->size[2], &v_emlrtECI,
      (emlrtConstCTX)sp);
  }

  /*  端部集中质量相对速度 */
  d_rQS1_1 = Platform->S11_H * q_Nom[22];
  e_rQS1_1 = Platform->S22_H * q_Nom[23];
  e_a_tmp = Platform->S11_V * q_Nom[24];
  f_a_tmp = Platform->S22_V * q_Nom[25];
  a = -(((((e_a_tmp * q_Nom[58] + f_a_tmp * q_Nom[59]) + Platform->S12_V * c_b)
          + d_rQS1_1 * q_Nom[56]) + e_rQS1_1 * q_Nom[57]) + Platform->S12_H *
        d_b);
  b_a = Platform->O1_H[14] * q_Nom[56] + Platform->O2_H[14] * q_Nom[57];
  c_a = Platform->O1_V[14] * q_Nom[58] + Platform->O2_V[14] * q_Nom[59];

  /*  端部绝对速度 */
  /*  --- 梁 2 (指向 120 度) --- */
  tip_mass_Z_tot = q_Nom[28] * q_Nom[63] + q_Nom[29] * q_Nom[62];
  e_b = q_Nom[26] * q_Nom[61] + q_Nom[27] * q_Nom[60];
  FRotor_R_idx_0 = q_Nom[26];
  FRotor_R_idx_1 = q_Nom[27];
  FRotor_R_idx_2 = q_Nom[28];
  b = q_Nom[29];
  b_b = q_Nom[62];
  v_c_tip_Z = q_Nom[63];
  ak_tip_Z = q_Nom[60];
  g_proj_X = q_Nom[61];
  g_proj_Y = P_BP[1].f1[0];
  g_proj_Z = P_BP[1].f1[1];
  EvZ_tmp = P_BP[1].f1[2];
  v_r_tip_X = P_BP[1].f1[3];
  v_r_tip_Y = P_BP[1].f1[4];
  v_r_tip_Z = P_BP[1].f1[5];
  b_rQS1_1 = P_BP[1].f1[6];
  b_rZT_1 = P_BP[1].f1[7];
  tip_mass_X_tot = P_BP[1].f1[8];
  for (it = 0; it < 15; it++) {
    I_pr_app = Platform->s11_H[it] * FRotor_R_idx_0;
    XvP2_1_tmp[it] = I_pr_app;
    I_yaw_app = Platform->s22_H[it] * FRotor_R_idx_1;
    b_XvP2_1_tmp[it] = I_yaw_app;
    rZT_3 = Platform->s11_V[it] * FRotor_R_idx_2;
    c_XvP2_1_tmp[it] = rZT_3;
    rQS1_2 = Platform->s22_V[it] * b;
    d_XvP2_1_tmp[it] = rQS1_2;
    I_pr_app = -(((((rZT_3 * b_b + rQS1_2 * v_c_tip_Z) + Platform->s12_V[it] *
                    tip_mass_Z_tot) + I_pr_app * ak_tip_Z) + I_yaw_app *
                  g_proj_X) + Platform->s12_H[it] * e_b);
    I_yaw_app = Platform->O1_H[it] * ak_tip_Z + Platform->O2_H[it] * g_proj_X;
    rZT_3 = Platform->O1_V[it] * b_b + Platform->O2_V[it] * v_c_tip_Z;
    h_out[3 * it] = I_pr_app * g_proj_Y;
    i_out[3 * it] = I_yaw_app * g_proj_Z;
    j_out[3 * it] = rZT_3 * EvZ_tmp;
    n = 3 * it + 1;
    h_out[n] = I_pr_app * v_r_tip_X;
    i_out[n] = I_yaw_app * v_r_tip_Y;
    j_out[n] = rZT_3 * v_r_tip_Z;
    n = 3 * it + 2;
    h_out[n] = I_pr_app * b_rQS1_1;
    i_out[n] = I_yaw_app * b_rZT_1;
    j_out[n] = rZT_3 * tip_mass_X_tot;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }

  st.site = &n_emlrtRSI;
  repmat(&st, EvZ, Platform->nt, r6);
  if ((r6->size[2] != 15) && (r6->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(r6->size[2], 15, &w_emlrtECI, (emlrtConstCTX)sp);
  }

  st.site = &n_emlrtRSI;
  repmat(&st, EwX, Platform->nt, r6);
  st.site = &n_emlrtRSI;
  b_cross(&st, r6, rP2, loop_ub_tmp);
  if ((loop_ub_tmp->size[2] != 15) && (loop_ub_tmp->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(15, loop_ub_tmp->size[2], &w_emlrtECI,
      (emlrtConstCTX)sp);
  }

  c_b = Platform->S11_H * q_Nom[26];
  d_b = Platform->S22_H * q_Nom[27];
  g_a_tmp = Platform->S11_V * q_Nom[28];
  i_a_tmp = Platform->S22_V * q_Nom[29];
  d_a = -(((((g_a_tmp * q_Nom[62] + i_a_tmp * q_Nom[63]) + Platform->S12_V *
             tip_mass_Z_tot) + c_b * q_Nom[60]) + d_b * q_Nom[61]) +
          Platform->S12_H * e_b);
  e_a = Platform->O1_H[14] * q_Nom[60] + Platform->O2_H[14] * q_Nom[61];
  f_a = Platform->O1_V[14] * q_Nom[62] + Platform->O2_V[14] * q_Nom[63];

  /*  --- 梁 3 (指向 240 度) --- */
  tip_mass_Z_tot = q_Nom[32] * q_Nom[67] + q_Nom[33] * q_Nom[66];
  f_b = q_Nom[30] * q_Nom[65] + q_Nom[31] * q_Nom[64];
  FRotor_R_idx_0 = q_Nom[30];
  FRotor_R_idx_1 = q_Nom[31];
  FRotor_R_idx_2 = q_Nom[32];
  b = q_Nom[33];
  b_b = q_Nom[66];
  v_c_tip_Z = q_Nom[67];
  ak_tip_Z = q_Nom[64];
  g_proj_X = q_Nom[65];
  g_proj_Y = P_BP[2].f1[0];
  g_proj_Z = P_BP[2].f1[1];
  EvZ_tmp = P_BP[2].f1[2];
  v_r_tip_X = P_BP[2].f1[3];
  v_r_tip_Y = P_BP[2].f1[4];
  v_r_tip_Z = P_BP[2].f1[5];
  b_rQS1_1 = P_BP[2].f1[6];
  b_rZT_1 = P_BP[2].f1[7];
  tip_mass_X_tot = P_BP[2].f1[8];
  for (it = 0; it < 15; it++) {
    I_pr_app = Platform->s11_H[it] * FRotor_R_idx_0;
    XvP1_1[it] = I_pr_app;
    I_yaw_app = Platform->s22_H[it] * FRotor_R_idx_1;
    XvP1_2[it] = I_yaw_app;
    rZT_3 = Platform->s11_V[it] * FRotor_R_idx_2;
    XvP1_3[it] = rZT_3;
    rQS1_2 = Platform->s22_V[it] * b;
    XvP2_1[it] = rQS1_2;
    I_pr_app = -(((((rZT_3 * b_b + rQS1_2 * v_c_tip_Z) + Platform->s12_V[it] *
                    tip_mass_Z_tot) + I_pr_app * ak_tip_Z) + I_yaw_app *
                  g_proj_X) + Platform->s12_H[it] * f_b);
    I_yaw_app = Platform->O1_H[it] * ak_tip_Z + Platform->O2_H[it] * g_proj_X;
    rZT_3 = Platform->O1_V[it] * b_b + Platform->O2_V[it] * v_c_tip_Z;
    k_out[3 * it] = I_pr_app * g_proj_Y;
    l_out[3 * it] = I_yaw_app * g_proj_Z;
    m_out[3 * it] = rZT_3 * EvZ_tmp;
    n = 3 * it + 1;
    k_out[n] = I_pr_app * v_r_tip_X;
    l_out[n] = I_yaw_app * v_r_tip_Y;
    m_out[n] = rZT_3 * v_r_tip_Z;
    n = 3 * it + 2;
    k_out[n] = I_pr_app * b_rQS1_1;
    l_out[n] = I_yaw_app * b_rZT_1;
    m_out[n] = rZT_3 * tip_mass_X_tot;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }

  st.site = &o_emlrtRSI;
  repmat(&st, EvZ, Platform->nt, r6);
  if ((r6->size[2] != 15) && (r6->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(r6->size[2], 15, &x_emlrtECI, (emlrtConstCTX)sp);
  }

  st.site = &o_emlrtRSI;
  repmat(&st, EwX, Platform->nt, r6);
  st.site = &o_emlrtRSI;
  b_cross(&st, r6, rP3, loop_ub_tmp);
  if ((loop_ub_tmp->size[2] != 15) && (loop_ub_tmp->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(15, loop_ub_tmp->size[2], &x_emlrtECI,
      (emlrtConstCTX)sp);
  }

  e_b = Platform->S11_H * q_Nom[30];
  h_a_tmp = Platform->S22_H * q_Nom[31];
  j_a_tmp = Platform->S11_V * q_Nom[32];
  k_a_tmp = Platform->S22_V * q_Nom[33];
  g_a = -(((((j_a_tmp * q_Nom[66] + k_a_tmp * q_Nom[67]) + Platform->S12_V *
             tip_mass_Z_tot) + e_b * q_Nom[64]) + h_a_tmp * q_Nom[65]) +
          Platform->S12_H * f_b);
  h_a = Platform->O1_H[14] * q_Nom[64] + Platform->O2_H[14] * q_Nom[65];
  i_a = Platform->O1_V[14] * q_Nom[66] + Platform->O2_V[14] * q_Nom[67];

  /*  Aerodynamic Loads */
  /*  Wind Interpolation  */
  if (!(Bld->nb >= 0.0)) {
    emlrtNonNegativeCheckR2012b(Bld->nb, &g_emlrtDCI, (emlrtConstCTX)sp);
  }

  i = (int32_T)muDoubleScalarFloor(Bld->nb);
  if (Bld->nb != i) {
    emlrtIntegerCheckR2012b(Bld->nb, &h_emlrtDCI, (emlrtConstCTX)sp);
  }

  emxInit_real_T(sp, &ZBlNode_Y, 2, &qc_emlrtRTEI);
  n = ZBlNode_Y->size[0] * ZBlNode_Y->size[1];
  i1 = (int32_T)Bld->nb;
  ZBlNode_Y->size[0] = i1;
  ZBlNode_Y->size[1] = 3;
  emxEnsureCapacity_real_T(sp, ZBlNode_Y, n, &qc_emlrtRTEI);
  ZBlNode_Y_data = ZBlNode_Y->data;
  c_loop_ub = i1 * 3;
  for (it = 0; it < c_loop_ub; it++) {
    ZBlNode_Y_data[it] = 0.0;
  }

  if (i1 != i) {
    emlrtIntegerCheckR2012b(Bld->nb, &i_emlrtDCI, (emlrtConstCTX)sp);
  }

  emxInit_real_T(sp, &ZBlNode_Z, 2, &rc_emlrtRTEI);
  n = ZBlNode_Z->size[0] * ZBlNode_Z->size[1];
  ZBlNode_Z->size[0] = i1;
  ZBlNode_Z->size[1] = 3;
  emxEnsureCapacity_real_T(sp, ZBlNode_Z, n, &rc_emlrtRTEI);
  ZBlNode_Z_data = ZBlNode_Z->data;
  for (it = 0; it < c_loop_ub; it++) {
    ZBlNode_Z_data[it] = 0.0;
  }

  st.site = &p_emlrtRSI;
  repmat(&st, rZO, Bld->nb, r6);
  st.site = &p_emlrtRSI;
  repmat(&st, rOQ, Bld->nb, loop_ub_tmp);
  r9 = loop_ub_tmp->data;
  if ((r6->size[2] != loop_ub_tmp->size[2]) && ((r6->size[2] != 1) &&
       (loop_ub_tmp->size[2] != 1))) {
    emlrtDimSizeImpxCheckR2021b(r6->size[2], loop_ub_tmp->size[2], &y_emlrtECI,
      (emlrtConstCTX)sp);
  }

  if (r6->size[2] == loop_ub_tmp->size[2]) {
    c_n = 3 * r6->size[2];
    n = r6->size[0] * r6->size[1] * r6->size[2];
    r6->size[0] = 1;
    r6->size[1] = 3;
    emxEnsureCapacity_real_T(sp, r6, n, &sc_emlrtRTEI);
    r7 = r6->data;
    n = (c_n / 2) << 1;
    b_n = n - 2;
    for (it = 0; it <= b_n; it += 2) {
      r = _mm_loadu_pd(&r7[it]);
      r1 = _mm_loadu_pd(&r9[it]);
      _mm_storeu_pd(&r7[it], _mm_add_pd(r, r1));
    }

    for (it = n; it < c_n; it++) {
      r7[it] += r9[it];
    }
  } else {
    st.site = &p_emlrtRSI;
    f_plus(&st, r6, loop_ub_tmp);
    r7 = r6->data;
  }

  if ((r6->size[2] != 19) && (r6->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(r6->size[2], 19, &y_emlrtECI, (emlrtConstCTX)sp);
  }

  st.site = &p_emlrtRSI;
  b_repmat(&st, Bld->nb, loop_ub_tmp);
  if (r6->size[2] == 19) {
    for (it = 0; it <= 54; it += 2) {
      r = _mm_loadu_pd(&r7[it]);
      r1 = _mm_loadu_pd(&rQS1[it]);
      _mm_storeu_pd(&b_HvS1[it], _mm_add_pd(r, r1));
    }

    b_HvS1[56] = r7[56] + rQS1[56];
    st.site = &p_emlrtRSI;
    dot(&st, b_HvS1, loop_ub_tmp, rQS1_3);
  } else {
    st.site = &p_emlrtRSI;
    binary_expand_op_148(&st, p_emlrtRSI, r6, rQS1, loop_ub_tmp, rQS1_3);
  }

  st.site = &p_emlrtRSI;
  b_st.site = &dr_emlrtRSI;
  computeDimsData(&b_st, Bld->nb);
  if (Bld->nb > 19.0) {
    emlrtErrorWithMessageIdR2018a(&st, &emlrtRTEI,
      "Coder:toolbox:reshape_emptyReshapeLimit",
      "Coder:toolbox:reshape_emptyReshapeLimit", 0);
  }

  if (Bld->nb != 19.0) {
    emlrtErrorWithMessageIdR2018a(&st, &c_emlrtRTEI,
      "Coder:MATLAB:getReshapeDims_notSameNumel",
      "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
  }

  emlrtSubAssignSizeCheckR2012b(&b_loop_ub, 1, &b_loop_ub, 1, &fb_emlrtECI,
    (emlrtCTX)sp);
  for (it = 0; it < b_loop_ub; it++) {
    ZBlNode_Y_data[it] = rQS1_3[it];
  }

  st.site = &q_emlrtRSI;
  repmat(&st, rZO, Bld->nb, r6);
  st.site = &q_emlrtRSI;
  repmat(&st, rOQ, Bld->nb, loop_ub_tmp);
  r9 = loop_ub_tmp->data;
  if ((r6->size[2] != loop_ub_tmp->size[2]) && ((r6->size[2] != 1) &&
       (loop_ub_tmp->size[2] != 1))) {
    emlrtDimSizeImpxCheckR2021b(r6->size[2], loop_ub_tmp->size[2], &ab_emlrtECI,
      (emlrtConstCTX)sp);
  }

  if (r6->size[2] == loop_ub_tmp->size[2]) {
    c_n = 3 * r6->size[2];
    n = r6->size[0] * r6->size[1] * r6->size[2];
    r6->size[0] = 1;
    r6->size[1] = 3;
    emxEnsureCapacity_real_T(sp, r6, n, &tc_emlrtRTEI);
    r7 = r6->data;
    n = (c_n / 2) << 1;
    b_n = n - 2;
    for (it = 0; it <= b_n; it += 2) {
      r = _mm_loadu_pd(&r7[it]);
      r1 = _mm_loadu_pd(&r9[it]);
      _mm_storeu_pd(&r7[it], _mm_add_pd(r, r1));
    }

    for (it = n; it < c_n; it++) {
      r7[it] += r9[it];
    }
  } else {
    st.site = &q_emlrtRSI;
    f_plus(&st, r6, loop_ub_tmp);
    r7 = r6->data;
  }

  if ((r6->size[2] != 19) && (r6->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(r6->size[2], 19, &ab_emlrtECI, (emlrtConstCTX)sp);
  }

  st.site = &q_emlrtRSI;
  b_repmat(&st, Bld->nb, loop_ub_tmp);
  if (r6->size[2] == 19) {
    for (it = 0; it <= 54; it += 2) {
      r = _mm_loadu_pd(&r7[it]);
      r1 = _mm_loadu_pd(&rQS2[it]);
      _mm_storeu_pd(&b_HvS1[it], _mm_add_pd(r, r1));
    }

    b_HvS1[56] = r7[56] + rQS2[56];
    st.site = &q_emlrtRSI;
    dot(&st, b_HvS1, loop_ub_tmp, rQS1_3);
  } else {
    st.site = &q_emlrtRSI;
    binary_expand_op_148(&st, q_emlrtRSI, r6, rQS2, loop_ub_tmp, rQS1_3);
  }

  st.site = &q_emlrtRSI;
  b_st.site = &dr_emlrtRSI;
  computeDimsData(&b_st, Bld->nb);
  if (Bld->nb > 19.0) {
    emlrtErrorWithMessageIdR2018a(&st, &emlrtRTEI,
      "Coder:toolbox:reshape_emptyReshapeLimit",
      "Coder:toolbox:reshape_emptyReshapeLimit", 0);
  }

  if (Bld->nb != 19.0) {
    emlrtErrorWithMessageIdR2018a(&st, &c_emlrtRTEI,
      "Coder:MATLAB:getReshapeDims_notSameNumel",
      "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
  }

  emlrtSubAssignSizeCheckR2012b(&b_loop_ub, 1, &b_loop_ub, 1, &gb_emlrtECI,
    (emlrtCTX)sp);
  for (it = 0; it < b_loop_ub; it++) {
    ZBlNode_Y_data[it + ZBlNode_Y->size[0]] = rQS1_3[it];
  }

  st.site = &r_emlrtRSI;
  repmat(&st, rZO, Bld->nb, r6);
  st.site = &r_emlrtRSI;
  repmat(&st, rOQ, Bld->nb, loop_ub_tmp);
  r9 = loop_ub_tmp->data;
  if ((r6->size[2] != loop_ub_tmp->size[2]) && ((r6->size[2] != 1) &&
       (loop_ub_tmp->size[2] != 1))) {
    emlrtDimSizeImpxCheckR2021b(r6->size[2], loop_ub_tmp->size[2], &bb_emlrtECI,
      (emlrtConstCTX)sp);
  }

  if (r6->size[2] == loop_ub_tmp->size[2]) {
    c_n = 3 * r6->size[2];
    n = r6->size[0] * r6->size[1] * r6->size[2];
    r6->size[0] = 1;
    r6->size[1] = 3;
    emxEnsureCapacity_real_T(sp, r6, n, &uc_emlrtRTEI);
    r7 = r6->data;
    n = (c_n / 2) << 1;
    b_n = n - 2;
    for (it = 0; it <= b_n; it += 2) {
      r = _mm_loadu_pd(&r7[it]);
      r1 = _mm_loadu_pd(&r9[it]);
      _mm_storeu_pd(&r7[it], _mm_add_pd(r, r1));
    }

    for (it = n; it < c_n; it++) {
      r7[it] += r9[it];
    }
  } else {
    st.site = &r_emlrtRSI;
    f_plus(&st, r6, loop_ub_tmp);
    r7 = r6->data;
  }

  if ((r6->size[2] != 19) && (r6->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(r6->size[2], 19, &bb_emlrtECI, (emlrtConstCTX)sp);
  }

  st.site = &r_emlrtRSI;
  b_repmat(&st, Bld->nb, loop_ub_tmp);
  if (r6->size[2] == 19) {
    for (it = 0; it <= 54; it += 2) {
      r = _mm_loadu_pd(&r7[it]);
      r1 = _mm_loadu_pd(&rQS3[it]);
      _mm_storeu_pd(&b_HvS1[it], _mm_add_pd(r, r1));
    }

    b_HvS1[56] = r7[56] + rQS3[56];
    st.site = &r_emlrtRSI;
    dot(&st, b_HvS1, loop_ub_tmp, rQS1_3);
  } else {
    st.site = &r_emlrtRSI;
    binary_expand_op_148(&st, r_emlrtRSI, r6, rQS3, loop_ub_tmp, rQS1_3);
  }

  st.site = &r_emlrtRSI;
  b_st.site = &dr_emlrtRSI;
  computeDimsData(&b_st, Bld->nb);
  if (Bld->nb > 19.0) {
    emlrtErrorWithMessageIdR2018a(&st, &emlrtRTEI,
      "Coder:toolbox:reshape_emptyReshapeLimit",
      "Coder:toolbox:reshape_emptyReshapeLimit", 0);
  }

  if (Bld->nb != 19.0) {
    emlrtErrorWithMessageIdR2018a(&st, &c_emlrtRTEI,
      "Coder:MATLAB:getReshapeDims_notSameNumel",
      "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
  }

  emlrtSubAssignSizeCheckR2012b(&b_loop_ub, 1, &b_loop_ub, 1, &hb_emlrtECI,
    (emlrtCTX)sp);
  for (it = 0; it < b_loop_ub; it++) {
    ZBlNode_Y_data[it + ZBlNode_Y->size[0] * 2] = rQS1_3[it];
  }

  st.site = &s_emlrtRSI;
  repmat(&st, rZO, Bld->nb, r6);
  st.site = &s_emlrtRSI;
  repmat(&st, rOQ, Bld->nb, loop_ub_tmp);
  r9 = loop_ub_tmp->data;
  if ((r6->size[2] != loop_ub_tmp->size[2]) && ((r6->size[2] != 1) &&
       (loop_ub_tmp->size[2] != 1))) {
    emlrtDimSizeImpxCheckR2021b(r6->size[2], loop_ub_tmp->size[2], &cb_emlrtECI,
      (emlrtConstCTX)sp);
  }

  if (r6->size[2] == loop_ub_tmp->size[2]) {
    c_n = 3 * r6->size[2];
    n = r6->size[0] * r6->size[1] * r6->size[2];
    r6->size[0] = 1;
    r6->size[1] = 3;
    emxEnsureCapacity_real_T(sp, r6, n, &vc_emlrtRTEI);
    r7 = r6->data;
    n = (c_n / 2) << 1;
    b_n = n - 2;
    for (it = 0; it <= b_n; it += 2) {
      r = _mm_loadu_pd(&r7[it]);
      r1 = _mm_loadu_pd(&r9[it]);
      _mm_storeu_pd(&r7[it], _mm_add_pd(r, r1));
    }

    for (it = n; it < c_n; it++) {
      r7[it] += r9[it];
    }
  } else {
    st.site = &s_emlrtRSI;
    f_plus(&st, r6, loop_ub_tmp);
    r7 = r6->data;
  }

  if ((r6->size[2] != 19) && (r6->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(r6->size[2], 19, &cb_emlrtECI, (emlrtConstCTX)sp);
  }

  st.site = &s_emlrtRSI;
  c_repmat(&st, Bld->nb, loop_ub_tmp);
  if (r6->size[2] == 19) {
    for (it = 0; it <= 54; it += 2) {
      r = _mm_loadu_pd(&r7[it]);
      r1 = _mm_loadu_pd(&rQS1[it]);
      _mm_storeu_pd(&b_HvS1[it], _mm_add_pd(r, r1));
    }

    b_HvS1[56] = r7[56] + rQS1[56];
    st.site = &s_emlrtRSI;
    dot(&st, b_HvS1, loop_ub_tmp, rQS1_3);
  } else {
    st.site = &s_emlrtRSI;
    binary_expand_op_148(&st, s_emlrtRSI, r6, rQS1, loop_ub_tmp, rQS1_3);
  }

  st.site = &s_emlrtRSI;
  b_st.site = &dr_emlrtRSI;
  computeDimsData(&b_st, Bld->nb);
  if (Bld->nb > 19.0) {
    emlrtErrorWithMessageIdR2018a(&st, &emlrtRTEI,
      "Coder:toolbox:reshape_emptyReshapeLimit",
      "Coder:toolbox:reshape_emptyReshapeLimit", 0);
  }

  if (Bld->nb != 19.0) {
    emlrtErrorWithMessageIdR2018a(&st, &c_emlrtRTEI,
      "Coder:MATLAB:getReshapeDims_notSameNumel",
      "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
  }

  emlrtSubAssignSizeCheckR2012b(&b_loop_ub, 1, &b_loop_ub, 1, &ib_emlrtECI,
    (emlrtCTX)sp);
  for (it = 0; it < b_loop_ub; it++) {
    ZBlNode_Z_data[it] = rQS1_3[it];
  }

  st.site = &t_emlrtRSI;
  repmat(&st, rZO, Bld->nb, r6);
  st.site = &t_emlrtRSI;
  repmat(&st, rOQ, Bld->nb, loop_ub_tmp);
  r9 = loop_ub_tmp->data;
  if ((r6->size[2] != loop_ub_tmp->size[2]) && ((r6->size[2] != 1) &&
       (loop_ub_tmp->size[2] != 1))) {
    emlrtDimSizeImpxCheckR2021b(r6->size[2], loop_ub_tmp->size[2], &db_emlrtECI,
      (emlrtConstCTX)sp);
  }

  if (r6->size[2] == loop_ub_tmp->size[2]) {
    c_n = 3 * r6->size[2];
    n = r6->size[0] * r6->size[1] * r6->size[2];
    r6->size[0] = 1;
    r6->size[1] = 3;
    emxEnsureCapacity_real_T(sp, r6, n, &wc_emlrtRTEI);
    r7 = r6->data;
    n = (c_n / 2) << 1;
    b_n = n - 2;
    for (it = 0; it <= b_n; it += 2) {
      r = _mm_loadu_pd(&r7[it]);
      r1 = _mm_loadu_pd(&r9[it]);
      _mm_storeu_pd(&r7[it], _mm_add_pd(r, r1));
    }

    for (it = n; it < c_n; it++) {
      r7[it] += r9[it];
    }
  } else {
    st.site = &t_emlrtRSI;
    f_plus(&st, r6, loop_ub_tmp);
    r7 = r6->data;
  }

  if ((r6->size[2] != 19) && (r6->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(r6->size[2], 19, &db_emlrtECI, (emlrtConstCTX)sp);
  }

  st.site = &t_emlrtRSI;
  c_repmat(&st, Bld->nb, loop_ub_tmp);
  if (r6->size[2] == 19) {
    for (it = 0; it <= 54; it += 2) {
      r = _mm_loadu_pd(&r7[it]);
      r1 = _mm_loadu_pd(&rQS2[it]);
      _mm_storeu_pd(&b_HvS1[it], _mm_add_pd(r, r1));
    }

    b_HvS1[56] = r7[56] + rQS2[56];
    st.site = &t_emlrtRSI;
    dot(&st, b_HvS1, loop_ub_tmp, rQS1_3);
  } else {
    st.site = &t_emlrtRSI;
    binary_expand_op_148(&st, t_emlrtRSI, r6, rQS2, loop_ub_tmp, rQS1_3);
  }

  st.site = &t_emlrtRSI;
  b_st.site = &dr_emlrtRSI;
  computeDimsData(&b_st, Bld->nb);
  if (Bld->nb > 19.0) {
    emlrtErrorWithMessageIdR2018a(&st, &emlrtRTEI,
      "Coder:toolbox:reshape_emptyReshapeLimit",
      "Coder:toolbox:reshape_emptyReshapeLimit", 0);
  }

  if (Bld->nb != 19.0) {
    emlrtErrorWithMessageIdR2018a(&st, &c_emlrtRTEI,
      "Coder:MATLAB:getReshapeDims_notSameNumel",
      "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
  }

  emlrtSubAssignSizeCheckR2012b(&b_loop_ub, 1, &b_loop_ub, 1, &jb_emlrtECI,
    (emlrtCTX)sp);
  for (it = 0; it < b_loop_ub; it++) {
    ZBlNode_Z_data[it + ZBlNode_Z->size[0]] = rQS1_3[it];
  }

  st.site = &u_emlrtRSI;
  repmat(&st, rZO, Bld->nb, r6);
  st.site = &u_emlrtRSI;
  repmat(&st, rOQ, Bld->nb, loop_ub_tmp);
  r9 = loop_ub_tmp->data;
  if ((r6->size[2] != loop_ub_tmp->size[2]) && ((r6->size[2] != 1) &&
       (loop_ub_tmp->size[2] != 1))) {
    emlrtDimSizeImpxCheckR2021b(r6->size[2], loop_ub_tmp->size[2], &eb_emlrtECI,
      (emlrtConstCTX)sp);
  }

  if (r6->size[2] == loop_ub_tmp->size[2]) {
    c_n = 3 * r6->size[2];
    n = r6->size[0] * r6->size[1] * r6->size[2];
    r6->size[0] = 1;
    r6->size[1] = 3;
    emxEnsureCapacity_real_T(sp, r6, n, &xc_emlrtRTEI);
    r7 = r6->data;
    n = (c_n / 2) << 1;
    b_n = n - 2;
    for (it = 0; it <= b_n; it += 2) {
      r = _mm_loadu_pd(&r7[it]);
      r1 = _mm_loadu_pd(&r9[it]);
      _mm_storeu_pd(&r7[it], _mm_add_pd(r, r1));
    }

    for (it = n; it < c_n; it++) {
      r7[it] += r9[it];
    }
  } else {
    st.site = &u_emlrtRSI;
    f_plus(&st, r6, loop_ub_tmp);
    r7 = r6->data;
  }

  if ((r6->size[2] != 19) && (r6->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(r6->size[2], 19, &eb_emlrtECI, (emlrtConstCTX)sp);
  }

  st.site = &u_emlrtRSI;
  c_repmat(&st, Bld->nb, loop_ub_tmp);
  if (r6->size[2] == 19) {
    for (it = 0; it <= 54; it += 2) {
      r = _mm_loadu_pd(&r7[it]);
      r1 = _mm_loadu_pd(&rQS3[it]);
      _mm_storeu_pd(&b_HvS1[it], _mm_add_pd(r, r1));
    }

    b_HvS1[56] = r7[56] + rQS3[56];
    st.site = &u_emlrtRSI;
    dot(&st, b_HvS1, loop_ub_tmp, rQS1_3);
  } else {
    st.site = &u_emlrtRSI;
    binary_expand_op_148(&st, u_emlrtRSI, r6, rQS3, loop_ub_tmp, rQS1_3);
  }

  st.site = &u_emlrtRSI;
  b_st.site = &dr_emlrtRSI;
  computeDimsData(&b_st, Bld->nb);
  if (Bld->nb > 19.0) {
    emlrtErrorWithMessageIdR2018a(&st, &emlrtRTEI,
      "Coder:toolbox:reshape_emptyReshapeLimit",
      "Coder:toolbox:reshape_emptyReshapeLimit", 0);
  }

  if (Bld->nb != 19.0) {
    emlrtErrorWithMessageIdR2018a(&st, &c_emlrtRTEI,
      "Coder:MATLAB:getReshapeDims_notSameNumel",
      "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
  }

  emlrtSubAssignSizeCheckR2012b(&b_loop_ub, 1, &b_loop_ub, 1, &kb_emlrtECI,
    (emlrtCTX)sp);
  for (it = 0; it < b_loop_ub; it++) {
    ZBlNode_Z_data[it + ZBlNode_Z->size[0] * 2] = rQS1_3[it];
  }

  /*  Check whether interpolation points within grid. */
  st.site = &v_emlrtRSI;
  CheckInterpPoints(&st, WindNom->y, WindNom->z, ZBlNode_Y, ZBlNode_Z);
  if (i1 != i) {
    emlrtIntegerCheckR2012b(Bld->nb, &f_emlrtDCI, (emlrtConstCTX)sp);
  }

  emxInit_real_T(sp, &Vx, 2, &fi_emlrtRTEI);
  n = Vx->size[0] * Vx->size[1];
  Vx->size[0] = i1;
  Vx->size[1] = 3;
  emxEnsureCapacity_real_T(sp, Vx, n, &yc_emlrtRTEI);
  Vx_data = Vx->data;
  emxInit_real_T(sp, &Vy, 2, &gi_emlrtRTEI);
  n = Vy->size[0] * Vy->size[1];
  Vy->size[0] = i1;
  Vy->size[1] = 3;
  emxEnsureCapacity_real_T(sp, Vy, n, &yc_emlrtRTEI);
  Vy_data = Vy->data;
  emxInit_real_T(sp, &Vz, 2, &hi_emlrtRTEI);
  n = Vz->size[0] * Vz->size[1];
  Vz->size[0] = i1;
  Vz->size[1] = 3;
  emxEnsureCapacity_real_T(sp, Vz, n, &yc_emlrtRTEI);
  Vz_data = Vz->data;
  for (it = 0; it < 3; it++) {
    emlrtForLoopVectorCheckR2021a(1.0, 1.0, nb, mxDOUBLE_CLASS, (int32_T)nb,
      &x_emlrtRTEI, (emlrtConstCTX)sp);
    for (b_it = 0; b_it < b_loop_ub; b_it++) {
      if (((int32_T)((uint32_T)b_it + 1U) < 1) || ((int32_T)((uint32_T)b_it + 1U)
           > Vx->size[0])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)((uint32_T)b_it + 1U), 1,
          Vx->size[0], &dd_emlrtBCI, (emlrtConstCTX)sp);
      }

      n_out = (((int32_T)((uint32_T)b_it + 1U) < 1) || ((int32_T)((uint32_T)b_it
                 + 1U) > b_loop_ub));
      if (n_out) {
        emlrtDynamicBoundsCheckR2012b((int32_T)((uint32_T)b_it + 1U), 1,
          b_loop_ub, &ed_emlrtBCI, (emlrtConstCTX)sp);
      }

      I_pr_app = ZBlNode_Z_data[b_it + ZBlNode_Z->size[0] * it];
      I_yaw_app = ZBlNode_Y_data[b_it + ZBlNode_Y->size[0] * it];
      st.site = &w_emlrtRSI;
      Vx_data[b_it + Vx->size[0] * it] = interpn(&st, WindNom->y, WindNom->z,
        WindNom->velocity, I_pr_app, I_yaw_app);
      if (((int32_T)((uint32_T)b_it + 1U) < 1) || ((int32_T)((uint32_T)b_it + 1U)
           > Vy->size[0])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)((uint32_T)b_it + 1U), 1,
          Vy->size[0], &bd_emlrtBCI, (emlrtConstCTX)sp);
      }

      if (n_out) {
        emlrtDynamicBoundsCheckR2012b((int32_T)((uint32_T)b_it + 1U), 1,
          b_loop_ub, &cd_emlrtBCI, (emlrtConstCTX)sp);
      }

      st.site = &x_emlrtRSI;
      Vy_data[b_it + Vy->size[0] * it] = b_interpn(&st, WindNom->y, WindNom->z,
        WindNom->velocity, I_pr_app, I_yaw_app);
      if (((int32_T)((uint32_T)b_it + 1U) < 1) || ((int32_T)((uint32_T)b_it + 1U)
           > Vz->size[0])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)((uint32_T)b_it + 1U), 1,
          Vz->size[0], &yc_emlrtBCI, (emlrtConstCTX)sp);
      }

      if (n_out) {
        emlrtDynamicBoundsCheckR2012b((int32_T)((uint32_T)b_it + 1U), 1,
          b_loop_ub, &ad_emlrtBCI, (emlrtConstCTX)sp);
      }

      st.site = &y_emlrtRSI;
      Vz_data[b_it + Vz->size[0] * it] = c_interpn(&st, WindNom->y, WindNom->z,
        WindNom->velocity, I_pr_app, I_yaw_app);
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtConstCTX)sp);
      }
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }

  st.site = &ab_emlrtRSI;
  nx = Vx->size[0];
  b_st.site = &dr_emlrtRSI;
  computeDimsData(&b_st, Bld->nb);
  n = Vx->size[0];
  if (Vx->size[0] < 1) {
    n = 1;
  }

  if (i1 > muIntScalarMax_sint32(nx, n)) {
    emlrtErrorWithMessageIdR2018a(&st, &emlrtRTEI,
      "Coder:toolbox:reshape_emptyReshapeLimit",
      "Coder:toolbox:reshape_emptyReshapeLimit", 0);
  }

  if (i1 != Vx->size[0]) {
    emlrtErrorWithMessageIdR2018a(&st, &c_emlrtRTEI,
      "Coder:MATLAB:getReshapeDims_notSameNumel",
      "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
  }

  st.site = &ab_emlrtRSI;
  b_nx = Vy->size[0];
  b_st.site = &dr_emlrtRSI;
  computeDimsData(&b_st, Bld->nb);
  c_n = Vy->size[0];
  if (Vy->size[0] < 1) {
    c_n = 1;
  }

  if (i1 > muIntScalarMax_sint32(b_nx, c_n)) {
    emlrtErrorWithMessageIdR2018a(&st, &emlrtRTEI,
      "Coder:toolbox:reshape_emptyReshapeLimit",
      "Coder:toolbox:reshape_emptyReshapeLimit", 0);
  }

  if (i1 != Vy->size[0]) {
    emlrtErrorWithMessageIdR2018a(&st, &c_emlrtRTEI,
      "Coder:MATLAB:getReshapeDims_notSameNumel",
      "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
  }

  st.site = &ab_emlrtRSI;
  emxInit_real_T(&st, &VzB1, 3, &dd_emlrtRTEI);
  n = VzB1->size[0] * VzB1->size[1] * VzB1->size[2];
  VzB1->size[0] = 1;
  VzB1->size[1] = 3;
  VzB1->size[2] = i1;
  emxEnsureCapacity_real_T(&st, VzB1, n, &ad_emlrtRTEI);
  VzB1_data = VzB1->data;
  for (it = 0; it < c_loop_ub; it++) {
    VzB1_data[it] = 0.0;
  }

  for (it = 0; it < b_loop_ub; it++) {
    if (((int32_T)((uint32_T)it + 1U) < 1) || ((int32_T)((uint32_T)it + 1U) >
         (int32_T)nb)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)((uint32_T)it + 1U), 1, (int32_T)nb,
        &wc_emlrtBCI, &st);
    }

    I_pr_app = Vx_data[it];
    if (((int32_T)((uint32_T)it + 1U) < 1) || ((int32_T)((uint32_T)it + 1U) >
         VzB1->size[2])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)((uint32_T)it + 1U), 1, VzB1->size
        [2], &uc_emlrtBCI, &st);
    }

    VzB1_data[3 * it] = I_pr_app;
    I_pr_app *= 0.0;
    VzB1_data[3 * it + 1] = I_pr_app;
    VzB1_data[3 * it + 2] = I_pr_app;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }
  }

  st.site = &ab_emlrtRSI;
  n = r6->size[0] * r6->size[1] * r6->size[2];
  r6->size[0] = 1;
  r6->size[1] = 3;
  r6->size[2] = i1;
  emxEnsureCapacity_real_T(&st, r6, n, &bd_emlrtRTEI);
  r7 = r6->data;
  for (it = 0; it < c_loop_ub; it++) {
    r7[it] = 0.0;
  }

  for (it = 0; it < b_loop_ub; it++) {
    if (((int32_T)((uint32_T)it + 1U) < 1) || ((int32_T)((uint32_T)it + 1U) >
         (int32_T)nb)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)((uint32_T)it + 1U), 1, (int32_T)nb,
        &wc_emlrtBCI, &st);
    }

    I_pr_app = Vy_data[it];
    if (((int32_T)((uint32_T)it + 1U) < 1) || ((int32_T)((uint32_T)it + 1U) >
         r6->size[2])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)((uint32_T)it + 1U), 1, r6->size[2],
        &uc_emlrtBCI, &st);
    }

    I_yaw_app = I_pr_app * 0.0;
    r7[3 * it] = I_yaw_app;
    r7[3 * it + 1] = I_yaw_app;
    r7[3 * it + 2] = I_pr_app;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }
  }

  if ((VzB1->size[2] != r6->size[2]) && ((VzB1->size[2] != 1) && (r6->size[2] !=
        1))) {
    emlrtDimSizeImpxCheckR2021b(VzB1->size[2], r6->size[2], &lb_emlrtECI,
      (emlrtConstCTX)sp);
  }

  st.site = &ab_emlrtRSI;
  c_nx = Vz->size[0];
  b_st.site = &dr_emlrtRSI;
  computeDimsData(&b_st, Bld->nb);
  n = Vz->size[0];
  if (Vz->size[0] < 1) {
    n = 1;
  }

  if (i1 > muIntScalarMax_sint32(c_nx, n)) {
    emlrtErrorWithMessageIdR2018a(&st, &emlrtRTEI,
      "Coder:toolbox:reshape_emptyReshapeLimit",
      "Coder:toolbox:reshape_emptyReshapeLimit", 0);
  }

  if (i1 != Vz->size[0]) {
    emlrtErrorWithMessageIdR2018a(&st, &c_emlrtRTEI,
      "Coder:MATLAB:getReshapeDims_notSameNumel",
      "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
  }

  if (VzB1->size[2] == r6->size[2]) {
    c_n = 3 * VzB1->size[2];
    n = VzB1->size[0] * VzB1->size[1] * VzB1->size[2];
    VzB1->size[0] = 1;
    VzB1->size[1] = 3;
    emxEnsureCapacity_real_T(sp, VzB1, n, &ad_emlrtRTEI);
    VzB1_data = VzB1->data;
    n = (c_n / 2) << 1;
    b_n = n - 2;
    for (it = 0; it <= b_n; it += 2) {
      r = _mm_loadu_pd(&VzB1_data[it]);
      r1 = _mm_loadu_pd(&r7[it]);
      _mm_storeu_pd(&VzB1_data[it], _mm_add_pd(r, r1));
    }

    for (it = n; it < c_n; it++) {
      VzB1_data[it] += r7[it];
    }
  } else {
    st.site = &ab_emlrtRSI;
    f_plus(&st, VzB1, r6);
  }

  st.site = &ab_emlrtRSI;
  n = r6->size[0] * r6->size[1] * r6->size[2];
  r6->size[0] = 1;
  r6->size[1] = 3;
  r6->size[2] = i1;
  emxEnsureCapacity_real_T(&st, r6, n, &cd_emlrtRTEI);
  r7 = r6->data;
  for (it = 0; it < c_loop_ub; it++) {
    r7[it] = 0.0;
  }

  for (it = 0; it < b_loop_ub; it++) {
    if (((int32_T)((uint32_T)it + 1U) < 1) || ((int32_T)((uint32_T)it + 1U) >
         (int32_T)nb)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)((uint32_T)it + 1U), 1, (int32_T)nb,
        &wc_emlrtBCI, &st);
    }

    I_pr_app = Vz_data[it];
    if (((int32_T)((uint32_T)it + 1U) < 1) || ((int32_T)((uint32_T)it + 1U) >
         r6->size[2])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)((uint32_T)it + 1U), 1, r6->size[2],
        &uc_emlrtBCI, &st);
    }

    I_yaw_app = I_pr_app * 0.0;
    r7[3 * it] = I_yaw_app;
    r7[3 * it + 1] = I_pr_app;
    r7[3 * it + 2] = I_yaw_app;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }
  }

  if ((VzB1->size[2] != r6->size[2]) && ((VzB1->size[2] != 1) && (r6->size[2] !=
        1))) {
    emlrtDimSizeImpxCheckR2021b(VzB1->size[2], r6->size[2], &lb_emlrtECI,
      (emlrtConstCTX)sp);
  }

  if (VzB1->size[2] == r6->size[2]) {
    c_n = 3 * VzB1->size[2];
    n = VzB1->size[0] * VzB1->size[1] * VzB1->size[2];
    VzB1->size[0] = 1;
    VzB1->size[1] = 3;
    emxEnsureCapacity_real_T(sp, VzB1, n, &dd_emlrtRTEI);
    VzB1_data = VzB1->data;
    n = (c_n / 2) << 1;
    b_n = n - 2;
    for (it = 0; it <= b_n; it += 2) {
      r = _mm_loadu_pd(&VzB1_data[it]);
      r1 = _mm_loadu_pd(&r7[it]);
      _mm_storeu_pd(&VzB1_data[it], _mm_add_pd(r, r1));
    }

    for (it = n; it < c_n; it++) {
      VzB1_data[it] += r7[it];
    }
  } else {
    st.site = &ab_emlrtRSI;
    f_plus(&st, VzB1, r6);
  }

  st.site = &bb_emlrtRSI;
  b_st.site = &dr_emlrtRSI;
  computeDimsData(&b_st, Bld->nb);
  n = Vx->size[0];
  if (Vx->size[0] < 1) {
    n = 1;
  }

  if (i1 > muIntScalarMax_sint32(nx, n)) {
    emlrtErrorWithMessageIdR2018a(&st, &emlrtRTEI,
      "Coder:toolbox:reshape_emptyReshapeLimit",
      "Coder:toolbox:reshape_emptyReshapeLimit", 0);
  }

  if (i1 != Vx->size[0]) {
    emlrtErrorWithMessageIdR2018a(&st, &c_emlrtRTEI,
      "Coder:MATLAB:getReshapeDims_notSameNumel",
      "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
  }

  st.site = &bb_emlrtRSI;
  b_st.site = &dr_emlrtRSI;
  computeDimsData(&b_st, Bld->nb);
  n = Vy->size[0];
  if (Vy->size[0] < 1) {
    n = 1;
  }

  if (i1 > muIntScalarMax_sint32(b_nx, n)) {
    emlrtErrorWithMessageIdR2018a(&st, &emlrtRTEI,
      "Coder:toolbox:reshape_emptyReshapeLimit",
      "Coder:toolbox:reshape_emptyReshapeLimit", 0);
  }

  if (i1 != Vy->size[0]) {
    emlrtErrorWithMessageIdR2018a(&st, &c_emlrtRTEI,
      "Coder:MATLAB:getReshapeDims_notSameNumel",
      "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
  }

  st.site = &bb_emlrtRSI;
  emxInit_real_T(&st, &VzB2, 3, &hd_emlrtRTEI);
  n = VzB2->size[0] * VzB2->size[1] * VzB2->size[2];
  VzB2->size[0] = 1;
  VzB2->size[1] = 3;
  VzB2->size[2] = i1;
  emxEnsureCapacity_real_T(&st, VzB2, n, &ed_emlrtRTEI);
  ZBlNode_Z_data = VzB2->data;
  for (it = 0; it < c_loop_ub; it++) {
    ZBlNode_Z_data[it] = 0.0;
  }

  for (it = 0; it < b_loop_ub; it++) {
    if (((int32_T)((uint32_T)it + 1U) < 1) || ((int32_T)((uint32_T)it + 1U) >
         (int32_T)nb)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)((uint32_T)it + 1U), 1, (int32_T)nb,
        &wc_emlrtBCI, &st);
    }

    I_pr_app = Vx_data[it + Vx->size[0]];
    if (((int32_T)((uint32_T)it + 1U) < 1) || ((int32_T)((uint32_T)it + 1U) >
         VzB2->size[2])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)((uint32_T)it + 1U), 1, VzB2->size
        [2], &uc_emlrtBCI, &st);
    }

    ZBlNode_Z_data[3 * it] = I_pr_app;
    I_pr_app *= 0.0;
    ZBlNode_Z_data[3 * it + 1] = I_pr_app;
    ZBlNode_Z_data[3 * it + 2] = I_pr_app;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }
  }

  st.site = &bb_emlrtRSI;
  n = r6->size[0] * r6->size[1] * r6->size[2];
  r6->size[0] = 1;
  r6->size[1] = 3;
  r6->size[2] = i1;
  emxEnsureCapacity_real_T(&st, r6, n, &fd_emlrtRTEI);
  r7 = r6->data;
  for (it = 0; it < c_loop_ub; it++) {
    r7[it] = 0.0;
  }

  for (it = 0; it < b_loop_ub; it++) {
    if (((int32_T)((uint32_T)it + 1U) < 1) || ((int32_T)((uint32_T)it + 1U) >
         (int32_T)nb)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)((uint32_T)it + 1U), 1, (int32_T)nb,
        &wc_emlrtBCI, &st);
    }

    I_pr_app = Vy_data[it + Vy->size[0]];
    if (((int32_T)((uint32_T)it + 1U) < 1) || ((int32_T)((uint32_T)it + 1U) >
         r6->size[2])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)((uint32_T)it + 1U), 1, r6->size[2],
        &uc_emlrtBCI, &st);
    }

    I_yaw_app = I_pr_app * 0.0;
    r7[3 * it] = I_yaw_app;
    r7[3 * it + 1] = I_yaw_app;
    r7[3 * it + 2] = I_pr_app;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }
  }

  if ((VzB2->size[2] != r6->size[2]) && ((VzB2->size[2] != 1) && (r6->size[2] !=
        1))) {
    emlrtDimSizeImpxCheckR2021b(VzB2->size[2], r6->size[2], &mb_emlrtECI,
      (emlrtConstCTX)sp);
  }

  st.site = &bb_emlrtRSI;
  b_st.site = &dr_emlrtRSI;
  computeDimsData(&b_st, Bld->nb);
  n = Vz->size[0];
  if (Vz->size[0] < 1) {
    n = 1;
  }

  if (i1 > muIntScalarMax_sint32(c_nx, n)) {
    emlrtErrorWithMessageIdR2018a(&st, &emlrtRTEI,
      "Coder:toolbox:reshape_emptyReshapeLimit",
      "Coder:toolbox:reshape_emptyReshapeLimit", 0);
  }

  if (i1 != Vz->size[0]) {
    emlrtErrorWithMessageIdR2018a(&st, &c_emlrtRTEI,
      "Coder:MATLAB:getReshapeDims_notSameNumel",
      "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
  }

  if (VzB2->size[2] == r6->size[2]) {
    c_n = 3 * VzB2->size[2];
    n = VzB2->size[0] * VzB2->size[1] * VzB2->size[2];
    VzB2->size[0] = 1;
    VzB2->size[1] = 3;
    emxEnsureCapacity_real_T(sp, VzB2, n, &ed_emlrtRTEI);
    ZBlNode_Z_data = VzB2->data;
    n = (c_n / 2) << 1;
    b_n = n - 2;
    for (it = 0; it <= b_n; it += 2) {
      r = _mm_loadu_pd(&ZBlNode_Z_data[it]);
      r1 = _mm_loadu_pd(&r7[it]);
      _mm_storeu_pd(&ZBlNode_Z_data[it], _mm_add_pd(r, r1));
    }

    for (it = n; it < c_n; it++) {
      ZBlNode_Z_data[it] += r7[it];
    }
  } else {
    st.site = &bb_emlrtRSI;
    f_plus(&st, VzB2, r6);
  }

  st.site = &bb_emlrtRSI;
  n = r6->size[0] * r6->size[1] * r6->size[2];
  r6->size[0] = 1;
  r6->size[1] = 3;
  r6->size[2] = i1;
  emxEnsureCapacity_real_T(&st, r6, n, &gd_emlrtRTEI);
  r7 = r6->data;
  for (it = 0; it < c_loop_ub; it++) {
    r7[it] = 0.0;
  }

  for (it = 0; it < b_loop_ub; it++) {
    if (((int32_T)((uint32_T)it + 1U) < 1) || ((int32_T)((uint32_T)it + 1U) >
         (int32_T)nb)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)((uint32_T)it + 1U), 1, (int32_T)nb,
        &wc_emlrtBCI, &st);
    }

    I_pr_app = Vz_data[it + Vz->size[0]];
    if (((int32_T)((uint32_T)it + 1U) < 1) || ((int32_T)((uint32_T)it + 1U) >
         r6->size[2])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)((uint32_T)it + 1U), 1, r6->size[2],
        &uc_emlrtBCI, &st);
    }

    I_yaw_app = I_pr_app * 0.0;
    r7[3 * it] = I_yaw_app;
    r7[3 * it + 1] = I_pr_app;
    r7[3 * it + 2] = I_yaw_app;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }
  }

  if ((VzB2->size[2] != r6->size[2]) && ((VzB2->size[2] != 1) && (r6->size[2] !=
        1))) {
    emlrtDimSizeImpxCheckR2021b(VzB2->size[2], r6->size[2], &mb_emlrtECI,
      (emlrtConstCTX)sp);
  }

  if (VzB2->size[2] == r6->size[2]) {
    c_n = 3 * VzB2->size[2];
    n = VzB2->size[0] * VzB2->size[1] * VzB2->size[2];
    VzB2->size[0] = 1;
    VzB2->size[1] = 3;
    emxEnsureCapacity_real_T(sp, VzB2, n, &hd_emlrtRTEI);
    ZBlNode_Z_data = VzB2->data;
    n = (c_n / 2) << 1;
    b_n = n - 2;
    for (it = 0; it <= b_n; it += 2) {
      r = _mm_loadu_pd(&ZBlNode_Z_data[it]);
      r1 = _mm_loadu_pd(&r7[it]);
      _mm_storeu_pd(&ZBlNode_Z_data[it], _mm_add_pd(r, r1));
    }

    for (it = n; it < c_n; it++) {
      ZBlNode_Z_data[it] += r7[it];
    }
  } else {
    st.site = &bb_emlrtRSI;
    f_plus(&st, VzB2, r6);
  }

  st.site = &cb_emlrtRSI;
  b_st.site = &dr_emlrtRSI;
  computeDimsData(&b_st, Bld->nb);
  n = Vx->size[0];
  if (Vx->size[0] < 1) {
    n = 1;
  }

  if (i1 > muIntScalarMax_sint32(nx, n)) {
    emlrtErrorWithMessageIdR2018a(&st, &emlrtRTEI,
      "Coder:toolbox:reshape_emptyReshapeLimit",
      "Coder:toolbox:reshape_emptyReshapeLimit", 0);
  }

  if (i1 != Vx->size[0]) {
    emlrtErrorWithMessageIdR2018a(&st, &c_emlrtRTEI,
      "Coder:MATLAB:getReshapeDims_notSameNumel",
      "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
  }

  st.site = &cb_emlrtRSI;
  b_st.site = &dr_emlrtRSI;
  computeDimsData(&b_st, Bld->nb);
  n = Vy->size[0];
  if (Vy->size[0] < 1) {
    n = 1;
  }

  if (i1 > muIntScalarMax_sint32(b_nx, n)) {
    emlrtErrorWithMessageIdR2018a(&st, &emlrtRTEI,
      "Coder:toolbox:reshape_emptyReshapeLimit",
      "Coder:toolbox:reshape_emptyReshapeLimit", 0);
  }

  if (i1 != Vy->size[0]) {
    emlrtErrorWithMessageIdR2018a(&st, &c_emlrtRTEI,
      "Coder:MATLAB:getReshapeDims_notSameNumel",
      "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
  }

  st.site = &cb_emlrtRSI;
  emxInit_real_T(&st, &VzB3, 3, &ld_emlrtRTEI);
  b_n = VzB3->size[0] * VzB3->size[1] * VzB3->size[2];
  VzB3->size[0] = 1;
  VzB3->size[1] = 3;
  VzB3->size[2] = i1;
  emxEnsureCapacity_real_T(&st, VzB3, b_n, &id_emlrtRTEI);
  ZBlNode_Z_data = VzB3->data;
  for (it = 0; it < c_loop_ub; it++) {
    ZBlNode_Z_data[it] = 0.0;
  }

  for (it = 0; it < b_loop_ub; it++) {
    if (((int32_T)((uint32_T)it + 1U) < 1) || ((int32_T)((uint32_T)it + 1U) >
         (int32_T)nb)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)((uint32_T)it + 1U), 1, (int32_T)nb,
        &wc_emlrtBCI, &st);
    }

    I_pr_app = Vx_data[it + Vx->size[0] * 2];
    if (((int32_T)((uint32_T)it + 1U) < 1) || ((int32_T)((uint32_T)it + 1U) >
         VzB3->size[2])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)((uint32_T)it + 1U), 1, VzB3->size
        [2], &uc_emlrtBCI, &st);
    }

    ZBlNode_Z_data[3 * it] = I_pr_app;
    I_pr_app *= 0.0;
    ZBlNode_Z_data[3 * it + 1] = I_pr_app;
    ZBlNode_Z_data[3 * it + 2] = I_pr_app;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }
  }

  st.site = &cb_emlrtRSI;
  b_n = r6->size[0] * r6->size[1] * r6->size[2];
  r6->size[0] = 1;
  r6->size[1] = 3;
  r6->size[2] = i1;
  emxEnsureCapacity_real_T(&st, r6, b_n, &jd_emlrtRTEI);
  r7 = r6->data;
  for (it = 0; it < c_loop_ub; it++) {
    r7[it] = 0.0;
  }

  for (it = 0; it < b_loop_ub; it++) {
    if (((int32_T)((uint32_T)it + 1U) < 1) || ((int32_T)((uint32_T)it + 1U) >
         (int32_T)nb)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)((uint32_T)it + 1U), 1, (int32_T)nb,
        &wc_emlrtBCI, &st);
    }

    I_pr_app = Vy_data[it + Vy->size[0] * 2];
    if (((int32_T)((uint32_T)it + 1U) < 1) || ((int32_T)((uint32_T)it + 1U) >
         r6->size[2])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)((uint32_T)it + 1U), 1, r6->size[2],
        &uc_emlrtBCI, &st);
    }

    I_yaw_app = I_pr_app * 0.0;
    r7[3 * it] = I_yaw_app;
    r7[3 * it + 1] = I_yaw_app;
    r7[3 * it + 2] = I_pr_app;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }
  }

  if ((VzB3->size[2] != r6->size[2]) && ((VzB3->size[2] != 1) && (r6->size[2] !=
        1))) {
    emlrtDimSizeImpxCheckR2021b(VzB3->size[2], r6->size[2], &nb_emlrtECI,
      (emlrtConstCTX)sp);
  }

  st.site = &cb_emlrtRSI;
  b_st.site = &dr_emlrtRSI;
  computeDimsData(&b_st, Bld->nb);
  b_n = Vz->size[0];
  if (Vz->size[0] < 1) {
    b_n = 1;
  }

  if (i1 > muIntScalarMax_sint32(c_nx, b_n)) {
    emlrtErrorWithMessageIdR2018a(&st, &emlrtRTEI,
      "Coder:toolbox:reshape_emptyReshapeLimit",
      "Coder:toolbox:reshape_emptyReshapeLimit", 0);
  }

  if (i1 != Vz->size[0]) {
    emlrtErrorWithMessageIdR2018a(&st, &c_emlrtRTEI,
      "Coder:MATLAB:getReshapeDims_notSameNumel",
      "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
  }

  if (VzB3->size[2] == r6->size[2]) {
    nx = 3 * VzB3->size[2];
    c_n = VzB3->size[0] * VzB3->size[1] * VzB3->size[2];
    VzB3->size[0] = 1;
    VzB3->size[1] = 3;
    emxEnsureCapacity_real_T(sp, VzB3, c_n, &id_emlrtRTEI);
    ZBlNode_Z_data = VzB3->data;
    n = (nx / 2) << 1;
    b_n = n - 2;
    for (it = 0; it <= b_n; it += 2) {
      r = _mm_loadu_pd(&ZBlNode_Z_data[it]);
      r1 = _mm_loadu_pd(&r7[it]);
      _mm_storeu_pd(&ZBlNode_Z_data[it], _mm_add_pd(r, r1));
    }

    for (it = n; it < nx; it++) {
      ZBlNode_Z_data[it] += r7[it];
    }
  } else {
    st.site = &cb_emlrtRSI;
    f_plus(&st, VzB3, r6);
  }

  st.site = &cb_emlrtRSI;
  n = r6->size[0] * r6->size[1] * r6->size[2];
  r6->size[0] = 1;
  r6->size[1] = 3;
  r6->size[2] = i1;
  emxEnsureCapacity_real_T(&st, r6, n, &kd_emlrtRTEI);
  r7 = r6->data;
  for (it = 0; it < c_loop_ub; it++) {
    r7[it] = 0.0;
  }

  for (it = 0; it < b_loop_ub; it++) {
    if (((int32_T)((uint32_T)it + 1U) < 1) || ((int32_T)((uint32_T)it + 1U) >
         (int32_T)nb)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)((uint32_T)it + 1U), 1, (int32_T)nb,
        &wc_emlrtBCI, &st);
    }

    I_pr_app = Vz_data[it + Vz->size[0] * 2];
    if (((int32_T)((uint32_T)it + 1U) < 1) || ((int32_T)((uint32_T)it + 1U) >
         r6->size[2])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)((uint32_T)it + 1U), 1, r6->size[2],
        &uc_emlrtBCI, &st);
    }

    I_yaw_app = I_pr_app * 0.0;
    r7[3 * it] = I_yaw_app;
    r7[3 * it + 1] = I_pr_app;
    r7[3 * it + 2] = I_yaw_app;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }
  }

  emxFree_real_T(&st, &Vz);
  if ((VzB3->size[2] != r6->size[2]) && ((VzB3->size[2] != 1) && (r6->size[2] !=
        1))) {
    emlrtDimSizeImpxCheckR2021b(VzB3->size[2], r6->size[2], &nb_emlrtECI,
      (emlrtConstCTX)sp);
  }

  if (VzB3->size[2] == r6->size[2]) {
    nx = 3 * VzB3->size[2];
    c_n = VzB3->size[0] * VzB3->size[1] * VzB3->size[2];
    VzB3->size[0] = 1;
    VzB3->size[1] = 3;
    emxEnsureCapacity_real_T(sp, VzB3, c_n, &ld_emlrtRTEI);
    ZBlNode_Z_data = VzB3->data;
    n = (nx / 2) << 1;
    b_n = n - 2;
    for (it = 0; it <= b_n; it += 2) {
      r = _mm_loadu_pd(&ZBlNode_Z_data[it]);
      r1 = _mm_loadu_pd(&r7[it]);
      _mm_storeu_pd(&ZBlNode_Z_data[it], _mm_add_pd(r, r1));
    }

    for (it = n; it < nx; it++) {
      ZBlNode_Z_data[it] += r7[it];
    }
  } else {
    st.site = &cb_emlrtRSI;
    f_plus(&st, VzB3, r6);
  }

  /*  Blade velocities at blade local co-ordinates */
  if (i1 != i) {
    emlrtIntegerCheckR2012b(Bld->nb, &j_emlrtDCI, (emlrtConstCTX)sp);
  }

  emxInit_real_T(sp, &UMB, 3, &md_emlrtRTEI);
  n = UMB->size[0] * UMB->size[1] * UMB->size[2];
  UMB->size[0] = i1;
  UMB->size[1] = 2;
  UMB->size[2] = 3;
  emxEnsureCapacity_real_T(sp, UMB, n, &md_emlrtRTEI);
  ZBlNode_Y_data = UMB->data;
  b_n = (i1 << 1) * 3;
  for (it = 0; it < b_n; it++) {
    ZBlNode_Y_data[it] = 0.0;
  }

  emlrtSubAssignSizeCheckR2012b(&b_loop_ub, 1, &iv[0], 3, &ub_emlrtECI,
    (emlrtCTX)sp);
  b_MB1_size[0] = 1;
  b_MB1_size[1] = 3;
  c_nx = MB1_size[2];
  b_MB1_size[2] = MB1_size[2];
  for (it = 0; it < c_nx; it++) {
    b_MB1_data[3 * it] = MB1_data[9 * it];
    b_MB1_data[3 * it + 1] = MB1_data[9 * it + 3];
    b_MB1_data[3 * it + 2] = MB1_data[9 * it + 6];
  }

  c_MB1_data.data = &b_MB1_data[0];
  c_MB1_data.size = &b_MB1_size[0];
  c_MB1_data.allocatedSize = 57;
  c_MB1_data.numDimensions = 3;
  c_MB1_data.canFreeData = false;
  st.site = &db_emlrtRSI;
  dot(&st, EvS1, &c_MB1_data, rQS1_3);
  for (it = 0; it < b_loop_ub; it++) {
    ZBlNode_Y_data[it] = rQS1_3[it];
  }

  emlrtSubAssignSizeCheckR2012b(&b_loop_ub, 1, &iv[0], 3, &vb_emlrtECI,
    (emlrtCTX)sp);
  b_MB1_size[0] = 1;
  b_MB1_size[1] = 3;
  d_loop_ub = MB2_size[2];
  b_MB1_size[2] = MB2_size[2];
  for (it = 0; it < d_loop_ub; it++) {
    b_MB1_data[3 * it] = MB2_data[9 * it];
    b_MB1_data[3 * it + 1] = MB2_data[9 * it + 3];
    b_MB1_data[3 * it + 2] = MB2_data[9 * it + 6];
  }

  c_MB1_data.data = &b_MB1_data[0];
  c_MB1_data.size = &b_MB1_size[0];
  c_MB1_data.allocatedSize = 57;
  c_MB1_data.numDimensions = 3;
  c_MB1_data.canFreeData = false;
  st.site = &eb_emlrtRSI;
  dot(&st, EvS2, &c_MB1_data, rQS1_3);
  for (it = 0; it < b_loop_ub; it++) {
    ZBlNode_Y_data[it + UMB->size[0] * 2] = rQS1_3[it];
  }

  emlrtSubAssignSizeCheckR2012b(&b_loop_ub, 1, &iv[0], 3, &wb_emlrtECI,
    (emlrtCTX)sp);
  b_MB1_size[0] = 1;
  b_MB1_size[1] = 3;
  e_loop_ub = MB3_size[2];
  b_MB1_size[2] = MB3_size[2];
  for (it = 0; it < e_loop_ub; it++) {
    b_MB1_data[3 * it] = MB3_data[9 * it];
    b_MB1_data[3 * it + 1] = MB3_data[9 * it + 3];
    b_MB1_data[3 * it + 2] = MB3_data[9 * it + 6];
  }

  c_MB1_data.data = &b_MB1_data[0];
  c_MB1_data.size = &b_MB1_size[0];
  c_MB1_data.allocatedSize = 57;
  c_MB1_data.numDimensions = 3;
  c_MB1_data.canFreeData = false;
  st.site = &fb_emlrtRSI;
  dot(&st, EvS3, &c_MB1_data, rQS1_3);
  for (it = 0; it < b_loop_ub; it++) {
    ZBlNode_Y_data[it + UMB->size[0] * 2 * 2] = rQS1_3[it];
  }

  emxInit_real_T(sp, &vr_X, 3, &wj_emlrtRTEI);
  if (WindNom->AeroElastic) {
    emlrtSubAssignSizeCheckR2012b(&b_loop_ub, 1, &iv[0], 3, &xb_emlrtECI,
      (emlrtCTX)sp);
    b_MB1_size[0] = 1;
    b_MB1_size[1] = 3;
    b_MB1_size[2] = MB1_size[2];
    for (it = 0; it < c_nx; it++) {
      b_MB1_data[3 * it] = -MB1_data[9 * it + 1];
      b_MB1_data[3 * it + 1] = -MB1_data[9 * it + 4];
      b_MB1_data[3 * it + 2] = -MB1_data[9 * it + 7];
    }

    c_MB1_data.data = &b_MB1_data[0];
    c_MB1_data.size = &b_MB1_size[0];
    c_MB1_data.allocatedSize = 57;
    c_MB1_data.numDimensions = 3;
    c_MB1_data.canFreeData = false;
    st.site = &gb_emlrtRSI;
    dot(&st, EvS1, &c_MB1_data, rQS1_3);
    for (it = 0; it < b_loop_ub; it++) {
      ZBlNode_Y_data[it + UMB->size[0]] = rQS1_3[it];
    }

    emlrtSubAssignSizeCheckR2012b(&b_loop_ub, 1, &iv[0], 3, &yb_emlrtECI,
      (emlrtCTX)sp);
    b_MB1_size[0] = 1;
    b_MB1_size[1] = 3;
    b_MB1_size[2] = MB2_size[2];
    for (it = 0; it < d_loop_ub; it++) {
      b_MB1_data[3 * it] = -MB2_data[9 * it + 1];
      b_MB1_data[3 * it + 1] = -MB2_data[9 * it + 4];
      b_MB1_data[3 * it + 2] = -MB2_data[9 * it + 7];
    }

    c_MB1_data.data = &b_MB1_data[0];
    c_MB1_data.size = &b_MB1_size[0];
    c_MB1_data.allocatedSize = 57;
    c_MB1_data.numDimensions = 3;
    c_MB1_data.canFreeData = false;
    st.site = &hb_emlrtRSI;
    dot(&st, EvS2, &c_MB1_data, rQS1_3);
    for (it = 0; it < b_loop_ub; it++) {
      ZBlNode_Y_data[(it + UMB->size[0]) + UMB->size[0] * 2] = rQS1_3[it];
    }

    emlrtSubAssignSizeCheckR2012b(&b_loop_ub, 1, &iv[0], 3, &ac_emlrtECI,
      (emlrtCTX)sp);
    b_MB1_size[0] = 1;
    b_MB1_size[1] = 3;
    b_MB1_size[2] = MB3_size[2];
    for (it = 0; it < e_loop_ub; it++) {
      b_MB1_data[3 * it] = -MB3_data[9 * it + 1];
      b_MB1_data[3 * it + 1] = -MB3_data[9 * it + 4];
      b_MB1_data[3 * it + 2] = -MB3_data[9 * it + 7];
    }

    c_MB1_data.data = &b_MB1_data[0];
    c_MB1_data.size = &b_MB1_size[0];
    c_MB1_data.allocatedSize = 57;
    c_MB1_data.numDimensions = 3;
    c_MB1_data.canFreeData = false;
    st.site = &ib_emlrtRSI;
    dot(&st, EvS3, &c_MB1_data, rQS1_3);
    for (it = 0; it < b_loop_ub; it++) {
      ZBlNode_Y_data[(it + UMB->size[0]) + UMB->size[0] * 2 * 2] = rQS1_3[it];
    }
  } else {
    st.site = &jb_emlrtRSI;
    repmat(&st, EwL, Bld->nb, r6);
    st.site = &jb_emlrtRSI;
    cross(&st, r6, rQS1, loop_ub_tmp);
    b_MB1_size[0] = 1;
    b_MB1_size[1] = 3;
    b_MB1_size[2] = MB1_size[2];
    for (it = 0; it < c_nx; it++) {
      b_MB1_data[3 * it] = -MB1_data[9 * it + 1];
      b_MB1_data[3 * it + 1] = -MB1_data[9 * it + 4];
      b_MB1_data[3 * it + 2] = -MB1_data[9 * it + 7];
    }

    c_MB1_data.data = &b_MB1_data[0];
    c_MB1_data.size = &b_MB1_size[0];
    c_MB1_data.allocatedSize = 57;
    c_MB1_data.numDimensions = 3;
    c_MB1_data.canFreeData = false;
    st.site = &jb_emlrtRSI;
    b_dot(&st, loop_ub_tmp, &c_MB1_data, vr_X);
    vr_X_data = vr_X->data;
    emlrtSubAssignSizeCheckR2012b(&b_loop_ub, 1, &vr_X->size[0], 3, &bc_emlrtECI,
      (emlrtCTX)sp);
    for (it = 0; it < b_loop_ub; it++) {
      ZBlNode_Y_data[it + UMB->size[0]] = vr_X_data[it];
    }

    st.site = &kb_emlrtRSI;
    repmat(&st, EwL, Bld->nb, r6);
    st.site = &kb_emlrtRSI;
    cross(&st, r6, rQS2, loop_ub_tmp);
    b_MB1_size[0] = 1;
    b_MB1_size[1] = 3;
    b_MB1_size[2] = MB2_size[2];
    for (it = 0; it < d_loop_ub; it++) {
      b_MB1_data[3 * it] = -MB2_data[9 * it + 1];
      b_MB1_data[3 * it + 1] = -MB2_data[9 * it + 4];
      b_MB1_data[3 * it + 2] = -MB2_data[9 * it + 7];
    }

    c_MB1_data.data = &b_MB1_data[0];
    c_MB1_data.size = &b_MB1_size[0];
    c_MB1_data.allocatedSize = 57;
    c_MB1_data.numDimensions = 3;
    c_MB1_data.canFreeData = false;
    st.site = &kb_emlrtRSI;
    b_dot(&st, loop_ub_tmp, &c_MB1_data, vr_X);
    vr_X_data = vr_X->data;
    emlrtSubAssignSizeCheckR2012b(&b_loop_ub, 1, &vr_X->size[0], 3, &cc_emlrtECI,
      (emlrtCTX)sp);
    for (it = 0; it < b_loop_ub; it++) {
      ZBlNode_Y_data[(it + UMB->size[0]) + UMB->size[0] * 2] = vr_X_data[it];
    }

    st.site = &lb_emlrtRSI;
    repmat(&st, EwL, Bld->nb, r6);
    st.site = &lb_emlrtRSI;
    cross(&st, r6, rQS3, loop_ub_tmp);
    b_MB1_size[0] = 1;
    b_MB1_size[1] = 3;
    b_MB1_size[2] = MB3_size[2];
    for (it = 0; it < e_loop_ub; it++) {
      b_MB1_data[3 * it] = -MB3_data[9 * it + 1];
      b_MB1_data[3 * it + 1] = -MB3_data[9 * it + 4];
      b_MB1_data[3 * it + 2] = -MB3_data[9 * it + 7];
    }

    c_MB1_data.data = &b_MB1_data[0];
    c_MB1_data.size = &b_MB1_size[0];
    c_MB1_data.allocatedSize = 57;
    c_MB1_data.numDimensions = 3;
    c_MB1_data.canFreeData = false;
    st.site = &lb_emlrtRSI;
    b_dot(&st, loop_ub_tmp, &c_MB1_data, vr_X);
    vr_X_data = vr_X->data;
    emlrtSubAssignSizeCheckR2012b(&b_loop_ub, 1, &vr_X->size[0], 3, &dc_emlrtECI,
      (emlrtCTX)sp);
    for (it = 0; it < b_loop_ub; it++) {
      ZBlNode_Y_data[(it + UMB->size[0]) + UMB->size[0] * 2 * 2] = vr_X_data[it];
    }
  }

  /*  Average wind vector from the field */
  /*  chi0 = 0; */
  /*  rows -> blade nodes; columns -> x, z, y directions respectively; 3rd dimension -> blade number   */
  /*  Wind speeds at blade local coordinates */
  if (i1 != i) {
    emlrtIntegerCheckR2012b(Bld->nb, &k_emlrtDCI, (emlrtConstCTX)sp);
  }

  emxInit_real_T(sp, &VMB, 3, &nd_emlrtRTEI);
  n = VMB->size[0] * VMB->size[1] * VMB->size[2];
  VMB->size[0] = i1;
  VMB->size[1] = 2;
  VMB->size[2] = 3;
  emxEnsureCapacity_real_T(sp, VMB, n, &nd_emlrtRTEI);
  ZBlNode_Y_data = VMB->data;
  for (it = 0; it < b_n; it++) {
    ZBlNode_Y_data[it] = 0.0;
  }

  b_MB1_size[0] = 1;
  b_MB1_size[1] = 3;
  b_MB1_size[2] = MB1_size[2];
  for (it = 0; it < c_nx; it++) {
    b_MB1_data[3 * it] = MB1_data[9 * it];
    b_MB1_data[3 * it + 1] = MB1_data[9 * it + 3];
    b_MB1_data[3 * it + 2] = MB1_data[9 * it + 6];
  }

  c_MB1_data.data = &b_MB1_data[0];
  c_MB1_data.size = &b_MB1_size[0];
  c_MB1_data.allocatedSize = 57;
  c_MB1_data.numDimensions = 3;
  c_MB1_data.canFreeData = false;
  st.site = &mb_emlrtRSI;
  b_dot(&st, VzB1, &c_MB1_data, vr_X);
  vr_X_data = vr_X->data;
  emlrtSubAssignSizeCheckR2012b(&b_loop_ub, 1, &vr_X->size[0], 3, &ob_emlrtECI,
    (emlrtCTX)sp);
  for (it = 0; it < b_loop_ub; it++) {
    ZBlNode_Y_data[it] = vr_X_data[it];
  }

  /*  wind velocity at blade nodes */
  b_MB1_size[0] = 1;
  b_MB1_size[1] = 3;
  b_MB1_size[2] = MB1_size[2];
  for (it = 0; it < c_nx; it++) {
    b_MB1_data[3 * it] = MB1_data[9 * it + 1];
    b_MB1_data[3 * it + 1] = MB1_data[9 * it + 4];
    b_MB1_data[3 * it + 2] = MB1_data[9 * it + 7];
  }

  c_MB1_data.data = &b_MB1_data[0];
  c_MB1_data.size = &b_MB1_size[0];
  c_MB1_data.allocatedSize = 57;
  c_MB1_data.numDimensions = 3;
  c_MB1_data.canFreeData = false;
  st.site = &nb_emlrtRSI;
  b_dot(&st, VzB1, &c_MB1_data, vr_X);
  vr_X_data = vr_X->data;
  emlrtSubAssignSizeCheckR2012b(&b_loop_ub, 1, &vr_X->size[0], 3, &pb_emlrtECI,
    (emlrtCTX)sp);
  for (it = 0; it < b_loop_ub; it++) {
    ZBlNode_Y_data[it + VMB->size[0]] = vr_X_data[it];
  }

  /*  VMB(:,3,1)   = dot(VzB1,MB1(3,:,:),2);        % we don't really need the z co-ordinate */
  b_MB1_size[0] = 1;
  b_MB1_size[1] = 3;
  b_MB1_size[2] = MB2_size[2];
  for (it = 0; it < d_loop_ub; it++) {
    b_MB1_data[3 * it] = MB2_data[9 * it];
    b_MB1_data[3 * it + 1] = MB2_data[9 * it + 3];
    b_MB1_data[3 * it + 2] = MB2_data[9 * it + 6];
  }

  c_MB1_data.data = &b_MB1_data[0];
  c_MB1_data.size = &b_MB1_size[0];
  c_MB1_data.allocatedSize = 57;
  c_MB1_data.numDimensions = 3;
  c_MB1_data.canFreeData = false;
  st.site = &ob_emlrtRSI;
  b_dot(&st, VzB2, &c_MB1_data, vr_X);
  vr_X_data = vr_X->data;
  emlrtSubAssignSizeCheckR2012b(&b_loop_ub, 1, &vr_X->size[0], 3, &qb_emlrtECI,
    (emlrtCTX)sp);
  for (it = 0; it < b_loop_ub; it++) {
    ZBlNode_Y_data[it + VMB->size[0] * 2] = vr_X_data[it];
  }

  b_MB1_size[0] = 1;
  b_MB1_size[1] = 3;
  b_MB1_size[2] = MB2_size[2];
  for (it = 0; it < d_loop_ub; it++) {
    b_MB1_data[3 * it] = MB2_data[9 * it + 1];
    b_MB1_data[3 * it + 1] = MB2_data[9 * it + 4];
    b_MB1_data[3 * it + 2] = MB2_data[9 * it + 7];
  }

  c_MB1_data.data = &b_MB1_data[0];
  c_MB1_data.size = &b_MB1_size[0];
  c_MB1_data.allocatedSize = 57;
  c_MB1_data.numDimensions = 3;
  c_MB1_data.canFreeData = false;
  st.site = &pb_emlrtRSI;
  b_dot(&st, VzB2, &c_MB1_data, vr_X);
  vr_X_data = vr_X->data;
  emlrtSubAssignSizeCheckR2012b(&b_loop_ub, 1, &vr_X->size[0], 3, &rb_emlrtECI,
    (emlrtCTX)sp);
  for (it = 0; it < b_loop_ub; it++) {
    ZBlNode_Y_data[(it + VMB->size[0]) + VMB->size[0] * 2] = vr_X_data[it];
  }

  /*  VMB(:,3,2)   = dot(VzB2,MB2(3,:,:),2); */
  b_MB1_size[0] = 1;
  b_MB1_size[1] = 3;
  b_MB1_size[2] = MB3_size[2];
  for (it = 0; it < e_loop_ub; it++) {
    b_MB1_data[3 * it] = MB3_data[9 * it];
    b_MB1_data[3 * it + 1] = MB3_data[9 * it + 3];
    b_MB1_data[3 * it + 2] = MB3_data[9 * it + 6];
  }

  c_MB1_data.data = &b_MB1_data[0];
  c_MB1_data.size = &b_MB1_size[0];
  c_MB1_data.allocatedSize = 57;
  c_MB1_data.numDimensions = 3;
  c_MB1_data.canFreeData = false;
  st.site = &qb_emlrtRSI;
  b_dot(&st, VzB3, &c_MB1_data, vr_X);
  vr_X_data = vr_X->data;
  emlrtSubAssignSizeCheckR2012b(&b_loop_ub, 1, &vr_X->size[0], 3, &sb_emlrtECI,
    (emlrtCTX)sp);
  for (it = 0; it < b_loop_ub; it++) {
    ZBlNode_Y_data[it + VMB->size[0] * 2 * 2] = vr_X_data[it];
  }

  b_MB1_size[0] = 1;
  b_MB1_size[1] = 3;
  b_MB1_size[2] = MB3_size[2];
  for (it = 0; it < e_loop_ub; it++) {
    b_MB1_data[3 * it] = MB3_data[9 * it + 1];
    b_MB1_data[3 * it + 1] = MB3_data[9 * it + 4];
    b_MB1_data[3 * it + 2] = MB3_data[9 * it + 7];
  }

  c_MB1_data.data = &b_MB1_data[0];
  c_MB1_data.size = &b_MB1_size[0];
  c_MB1_data.allocatedSize = 57;
  c_MB1_data.numDimensions = 3;
  c_MB1_data.canFreeData = false;
  st.site = &rb_emlrtRSI;
  b_dot(&st, VzB3, &c_MB1_data, vr_X);
  vr_X_data = vr_X->data;
  emlrtSubAssignSizeCheckR2012b(&b_loop_ub, 1, &vr_X->size[0], 3, &tb_emlrtECI,
    (emlrtCTX)sp);
  for (it = 0; it < b_loop_ub; it++) {
    ZBlNode_Y_data[(it + VMB->size[0]) + VMB->size[0] * 2 * 2] = vr_X_data[it];
  }

  /*  VMB(:,3,3)   = dot(VzB3,MB3(3,:,:),2);  */
  /*  disp(UMB) */
  /*  pause */
  /*  Load vectors */
  if (i1 != i) {
    emlrtIntegerCheckR2012b(Bld->nb, &l_emlrtDCI, (emlrtConstCTX)sp);
  }

  n = ZBlNode_Y->size[0] * ZBlNode_Y->size[1];
  ZBlNode_Y->size[0] = i1;
  ZBlNode_Y->size[1] = 3;
  emxEnsureCapacity_real_T(sp, ZBlNode_Y, n, &od_emlrtRTEI);
  ZBlNode_Y_data = ZBlNode_Y->data;
  for (it = 0; it < c_loop_ub; it++) {
    ZBlNode_Y_data[it] = 0.0;
  }

  emlrtSubAssignSizeCheckR2012b(&b_loop_ub, 1, &iv[0], 3, &ec_emlrtECI,
    (emlrtCTX)sp);
  b_I_G[0] = I_G[2];
  b_I_G[1] = I_G[5];
  b_I_G[2] = I_G[8];
  st.site = &sb_emlrtRSI;
  repmat(&st, b_I_G, Bld->nb, r6);
  st.site = &sb_emlrtRSI;
  dot(&st, rQS1, r6, rQS1_3);
  for (it = 0; it < b_loop_ub; it++) {
    ZBlNode_Y_data[it] = rQS1_3[it];
  }

  emlrtSubAssignSizeCheckR2012b(&b_loop_ub, 1, &iv[0], 3, &fc_emlrtECI,
    (emlrtCTX)sp);
  b_I_G[0] = I_N[2];
  b_I_G[1] = I_N[5];
  b_I_G[2] = I_N[8];
  st.site = &tb_emlrtRSI;
  repmat(&st, b_I_G, Bld->nb, r6);
  st.site = &tb_emlrtRSI;
  dot(&st, rQS2, r6, rQS1_3);
  for (it = 0; it < b_loop_ub; it++) {
    ZBlNode_Y_data[it + ZBlNode_Y->size[0]] = rQS1_3[it];
  }

  emlrtSubAssignSizeCheckR2012b(&b_loop_ub, 1, &iv[0], 3, &gc_emlrtECI,
    (emlrtCTX)sp);
  b_I_G[0] = I_H[2];
  b_I_G[1] = I_H[5];
  b_I_G[2] = I_H[8];
  st.site = &ub_emlrtRSI;
  repmat(&st, b_I_G, Bld->nb, r6);
  st.site = &ub_emlrtRSI;
  dot(&st, rQS3, r6, rQS1_3);
  for (it = 0; it < b_loop_ub; it++) {
    ZBlNode_Y_data[it + ZBlNode_Y->size[0] * 2] = rQS1_3[it];
  }

  /*      [px, py, Mz] = BEMT(t, q_GeAz, VMB, UMB, nb, BldSec+HubRad, FlexBlSpn, TipRad, HubRad, Cord, Twist,... */
  /*                             BlPitch, chi0, FoilNo, Airfoils, Bld.AeroCentJ1, Bld.AeroCentJ2); */
  d9 = 3.0 * Bld->nb;
  if (d9 + 4.0 < 5.0) {
    c_n = 0;
    n = 0;
  } else {
    c_n = 4;
    if (((int32_T)(d9 + 4.0) < 1) || ((int32_T)(d9 + 4.0) > 61)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(d9 + 4.0), 1, 61, &fd_emlrtBCI,
        (emlrtConstCTX)sp);
    }

    n = (int32_T)(d9 + 4.0);
  }

  dv[0] = Bld->nb;
  dv[1] = 3.0;
  st.site = &vb_emlrtRSI;
  b_n = n - c_n;
  b_st.site = &us_emlrtRSI;
  assertValidSizeArg(&b_st, dv);
  n = 1;
  if (b_n > 1) {
    n = b_n;
  }

  n = muIntScalarMax_sint32(b_n, n);
  if (i1 > n) {
    emlrtErrorWithMessageIdR2018a(&st, &emlrtRTEI,
      "Coder:toolbox:reshape_emptyReshapeLimit",
      "Coder:toolbox:reshape_emptyReshapeLimit", 0);
  }

  if (n < 3) {
    emlrtErrorWithMessageIdR2018a(&st, &emlrtRTEI,
      "Coder:toolbox:reshape_emptyReshapeLimit",
      "Coder:toolbox:reshape_emptyReshapeLimit", 0);
  }

  if (c_loop_ub != b_n) {
    emlrtErrorWithMessageIdR2018a(&st, &c_emlrtRTEI,
      "Coder:MATLAB:getReshapeDims_notSameNumel",
      "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
  }

  for (it = 0; it < b_n; it++) {
    Controls_data[it] = Controls[c_n + it];
  }

  phi_size[0] = i1;
  phi_size[1] = 3;
  if (c_loop_ub - 1 >= 0) {
    memcpy(&phi_data[0], &Controls_data[0], (uint32_T)c_loop_ub * sizeof(real_T));
  }

  for (it = 0; it <= 16; it += 2) {
    _mm_storeu_pd(&rQS1_1[it], _mm_add_pd(_mm_loadu_pd(&Bld->BldSec[it]),
      _mm_set1_pd(ElastoDyn->HubRad)));
  }

  rQS1_1[18] = Bld->BldSec[18] + ElastoDyn->HubRad;
  st.site = &wb_emlrtRSI;
  BEMTMex(&st, q_Nom[11], VMB, UMB, phi_data, phi_size, Bld->nb, rQS1_1,
          ZBlNode_Y, ElastoDyn->TipRad, ElastoDyn->HubRad, Bld->Cord, Bld->Twist,
          &Controls[1], Bld->FoilNo, Airfoils, Bld->AeroCentJ1, Bld->AeroCentJ2,
          ZBlNode_Z, Vx, Vy);
  Vx_data = Vx->data;
  ZBlNode_Z_data = ZBlNode_Z->data;
  emxFree_real_T(sp, &VMB);
  emxFree_real_T(sp, &UMB);
  emxFree_real_T(sp, &Vy);
  emxFree_real_T(sp, &ZBlNode_Y);

  /*  [px, py, Mz, phi] = BEMTMex_mex(q_GeAz, VMB, UMB, phi, nb, BldSec+HubRad, FlexBlSpn, TipRad, HubRad, Cord, Bld.Twist,... */
  /*                     BlPitch, chi0, FoilNo, Airfoils, Bld.AeroCentJ1, Bld.AeroCentJ2);        */
  st.site = &xb_emlrtRSI;
  nx = ZBlNode_Z->size[0];
  b_st.site = &dr_emlrtRSI;
  computeDimsData(&b_st, Bld->nb);
  n = ZBlNode_Z->size[0];
  if (ZBlNode_Z->size[0] < 1) {
    n = 1;
  }

  if (i1 > muIntScalarMax_sint32(nx, n)) {
    emlrtErrorWithMessageIdR2018a(&st, &emlrtRTEI,
      "Coder:toolbox:reshape_emptyReshapeLimit",
      "Coder:toolbox:reshape_emptyReshapeLimit", 0);
  }

  if (i1 != ZBlNode_Z->size[0]) {
    emlrtErrorWithMessageIdR2018a(&st, &c_emlrtRTEI,
      "Coder:MATLAB:getReshapeDims_notSameNumel",
      "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
  }

  st.site = &xb_emlrtRSI;
  b_nx = Vx->size[0];
  b_st.site = &dr_emlrtRSI;
  computeDimsData(&b_st, Bld->nb);
  n = Vx->size[0];
  if (Vx->size[0] < 1) {
    n = 1;
  }

  if (i1 > muIntScalarMax_sint32(b_nx, n)) {
    emlrtErrorWithMessageIdR2018a(&st, &emlrtRTEI,
      "Coder:toolbox:reshape_emptyReshapeLimit",
      "Coder:toolbox:reshape_emptyReshapeLimit", 0);
  }

  if (i1 != Vx->size[0]) {
    emlrtErrorWithMessageIdR2018a(&st, &c_emlrtRTEI,
      "Coder:MATLAB:getReshapeDims_notSameNumel",
      "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
  }

  n = vr_X->size[0] * vr_X->size[1] * vr_X->size[2];
  vr_X->size[0] = 1;
  vr_X->size[1] = 1;
  vr_X->size[2] = i1;
  emxEnsureCapacity_real_T(sp, vr_X, n, &pd_emlrtRTEI);
  vr_X_data = vr_X->data;
  for (it = 0; it < b_loop_ub; it++) {
    vr_X_data[it] = ZBlNode_Z_data[it];
  }

  b_MB1_size[0] = 1;
  b_MB1_size[1] = 3;
  b_MB1_size[2] = MB1_size[2];
  for (it = 0; it < c_nx; it++) {
    b_MB1_data[3 * it] = MB1_data[9 * it];
    b_MB1_data[3 * it + 1] = MB1_data[9 * it + 3];
    b_MB1_data[3 * it + 2] = MB1_data[9 * it + 6];
  }

  emxInit_real_T(sp, &F_AeroB1, 3, &rd_emlrtRTEI);
  st.site = &xb_emlrtRSI;
  coprod(&st, vr_X, b_MB1_data, b_MB1_size, F_AeroB1);
  n = vr_X->size[0] * vr_X->size[1] * vr_X->size[2];
  vr_X->size[0] = 1;
  vr_X->size[1] = 1;
  vr_X->size[2] = i1;
  emxEnsureCapacity_real_T(sp, vr_X, n, &qd_emlrtRTEI);
  vr_X_data = vr_X->data;
  for (it = 0; it < b_loop_ub; it++) {
    vr_X_data[it] = Vx_data[it];
  }

  b_MB1_size[0] = 1;
  b_MB1_size[1] = 3;
  b_MB1_size[2] = MB1_size[2];
  for (it = 0; it < c_nx; it++) {
    b_MB1_data[3 * it] = MB1_data[9 * it + 1];
    b_MB1_data[3 * it + 1] = MB1_data[9 * it + 4];
    b_MB1_data[3 * it + 2] = MB1_data[9 * it + 7];
  }

  st.site = &xb_emlrtRSI;
  coprod(&st, vr_X, b_MB1_data, b_MB1_size, r6);
  r7 = r6->data;
  if ((F_AeroB1->size[2] != r6->size[2]) && ((F_AeroB1->size[2] != 1) &&
       (r6->size[2] != 1))) {
    emlrtDimSizeImpxCheckR2021b(F_AeroB1->size[2], r6->size[2], &hc_emlrtECI,
      (emlrtConstCTX)sp);
  }

  if (F_AeroB1->size[2] == r6->size[2]) {
    c_n = 3 * F_AeroB1->size[2];
    n = F_AeroB1->size[0] * F_AeroB1->size[1] * F_AeroB1->size[2];
    F_AeroB1->size[0] = 1;
    F_AeroB1->size[1] = 3;
    emxEnsureCapacity_real_T(sp, F_AeroB1, n, &rd_emlrtRTEI);
    F_AeroB1_data = F_AeroB1->data;
    n = (c_n / 2) << 1;
    b_n = n - 2;
    for (it = 0; it <= b_n; it += 2) {
      r = _mm_loadu_pd(&F_AeroB1_data[it]);
      r1 = _mm_loadu_pd(&r7[it]);
      _mm_storeu_pd(&F_AeroB1_data[it], _mm_add_pd(r, r1));
    }

    for (it = n; it < c_n; it++) {
      F_AeroB1_data[it] += r7[it];
    }
  } else {
    st.site = &xb_emlrtRSI;
    f_plus(&st, F_AeroB1, r6);
    F_AeroB1_data = F_AeroB1->data;
  }

  st.site = &yb_emlrtRSI;
  b_st.site = &dr_emlrtRSI;
  computeDimsData(&b_st, Bld->nb);
  n = ZBlNode_Z->size[0];
  if (ZBlNode_Z->size[0] < 1) {
    n = 1;
  }

  if (i1 > muIntScalarMax_sint32(nx, n)) {
    emlrtErrorWithMessageIdR2018a(&st, &emlrtRTEI,
      "Coder:toolbox:reshape_emptyReshapeLimit",
      "Coder:toolbox:reshape_emptyReshapeLimit", 0);
  }

  if (i1 != ZBlNode_Z->size[0]) {
    emlrtErrorWithMessageIdR2018a(&st, &c_emlrtRTEI,
      "Coder:MATLAB:getReshapeDims_notSameNumel",
      "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
  }

  st.site = &yb_emlrtRSI;
  b_st.site = &dr_emlrtRSI;
  computeDimsData(&b_st, Bld->nb);
  n = Vx->size[0];
  if (Vx->size[0] < 1) {
    n = 1;
  }

  if (i1 > muIntScalarMax_sint32(b_nx, n)) {
    emlrtErrorWithMessageIdR2018a(&st, &emlrtRTEI,
      "Coder:toolbox:reshape_emptyReshapeLimit",
      "Coder:toolbox:reshape_emptyReshapeLimit", 0);
  }

  if (i1 != Vx->size[0]) {
    emlrtErrorWithMessageIdR2018a(&st, &c_emlrtRTEI,
      "Coder:MATLAB:getReshapeDims_notSameNumel",
      "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
  }

  n = vr_X->size[0] * vr_X->size[1] * vr_X->size[2];
  vr_X->size[0] = 1;
  vr_X->size[1] = 1;
  vr_X->size[2] = i1;
  emxEnsureCapacity_real_T(sp, vr_X, n, &sd_emlrtRTEI);
  vr_X_data = vr_X->data;
  for (it = 0; it < b_loop_ub; it++) {
    vr_X_data[it] = ZBlNode_Z_data[it + ZBlNode_Z->size[0]];
  }

  b_MB1_size[0] = 1;
  b_MB1_size[1] = 3;
  b_MB1_size[2] = MB2_size[2];
  for (it = 0; it < d_loop_ub; it++) {
    b_MB1_data[3 * it] = MB2_data[9 * it];
    b_MB1_data[3 * it + 1] = MB2_data[9 * it + 3];
    b_MB1_data[3 * it + 2] = MB2_data[9 * it + 6];
  }

  emxInit_real_T(sp, &F_AeroB2, 3, &ud_emlrtRTEI);
  st.site = &yb_emlrtRSI;
  coprod(&st, vr_X, b_MB1_data, b_MB1_size, F_AeroB2);
  n = vr_X->size[0] * vr_X->size[1] * vr_X->size[2];
  vr_X->size[0] = 1;
  vr_X->size[1] = 1;
  vr_X->size[2] = i1;
  emxEnsureCapacity_real_T(sp, vr_X, n, &td_emlrtRTEI);
  vr_X_data = vr_X->data;
  for (it = 0; it < b_loop_ub; it++) {
    vr_X_data[it] = Vx_data[it + Vx->size[0]];
  }

  b_MB1_size[0] = 1;
  b_MB1_size[1] = 3;
  b_MB1_size[2] = MB2_size[2];
  for (it = 0; it < d_loop_ub; it++) {
    b_MB1_data[3 * it] = MB2_data[9 * it + 1];
    b_MB1_data[3 * it + 1] = MB2_data[9 * it + 4];
    b_MB1_data[3 * it + 2] = MB2_data[9 * it + 7];
  }

  st.site = &yb_emlrtRSI;
  coprod(&st, vr_X, b_MB1_data, b_MB1_size, r6);
  r7 = r6->data;
  if ((F_AeroB2->size[2] != r6->size[2]) && ((F_AeroB2->size[2] != 1) &&
       (r6->size[2] != 1))) {
    emlrtDimSizeImpxCheckR2021b(F_AeroB2->size[2], r6->size[2], &ic_emlrtECI,
      (emlrtConstCTX)sp);
  }

  if (F_AeroB2->size[2] == r6->size[2]) {
    c_n = 3 * F_AeroB2->size[2];
    n = F_AeroB2->size[0] * F_AeroB2->size[1] * F_AeroB2->size[2];
    F_AeroB2->size[0] = 1;
    F_AeroB2->size[1] = 3;
    emxEnsureCapacity_real_T(sp, F_AeroB2, n, &ud_emlrtRTEI);
    F_AeroB2_data = F_AeroB2->data;
    n = (c_n / 2) << 1;
    b_n = n - 2;
    for (it = 0; it <= b_n; it += 2) {
      r = _mm_loadu_pd(&F_AeroB2_data[it]);
      r1 = _mm_loadu_pd(&r7[it]);
      _mm_storeu_pd(&F_AeroB2_data[it], _mm_add_pd(r, r1));
    }

    for (it = n; it < c_n; it++) {
      F_AeroB2_data[it] += r7[it];
    }
  } else {
    st.site = &yb_emlrtRSI;
    f_plus(&st, F_AeroB2, r6);
    F_AeroB2_data = F_AeroB2->data;
  }

  st.site = &ac_emlrtRSI;
  b_st.site = &dr_emlrtRSI;
  computeDimsData(&b_st, Bld->nb);
  n = ZBlNode_Z->size[0];
  if (ZBlNode_Z->size[0] < 1) {
    n = 1;
  }

  if (i1 > muIntScalarMax_sint32(nx, n)) {
    emlrtErrorWithMessageIdR2018a(&st, &emlrtRTEI,
      "Coder:toolbox:reshape_emptyReshapeLimit",
      "Coder:toolbox:reshape_emptyReshapeLimit", 0);
  }

  if (i1 != ZBlNode_Z->size[0]) {
    emlrtErrorWithMessageIdR2018a(&st, &c_emlrtRTEI,
      "Coder:MATLAB:getReshapeDims_notSameNumel",
      "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
  }

  st.site = &ac_emlrtRSI;
  b_st.site = &dr_emlrtRSI;
  computeDimsData(&b_st, Bld->nb);
  n = Vx->size[0];
  if (Vx->size[0] < 1) {
    n = 1;
  }

  if (i1 > muIntScalarMax_sint32(b_nx, n)) {
    emlrtErrorWithMessageIdR2018a(&st, &emlrtRTEI,
      "Coder:toolbox:reshape_emptyReshapeLimit",
      "Coder:toolbox:reshape_emptyReshapeLimit", 0);
  }

  if (i1 != Vx->size[0]) {
    emlrtErrorWithMessageIdR2018a(&st, &c_emlrtRTEI,
      "Coder:MATLAB:getReshapeDims_notSameNumel",
      "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
  }

  c_n = vr_X->size[0] * vr_X->size[1] * vr_X->size[2];
  vr_X->size[0] = 1;
  vr_X->size[1] = 1;
  vr_X->size[2] = i1;
  emxEnsureCapacity_real_T(sp, vr_X, c_n, &vd_emlrtRTEI);
  vr_X_data = vr_X->data;
  for (it = 0; it < b_loop_ub; it++) {
    vr_X_data[it] = ZBlNode_Z_data[it + ZBlNode_Z->size[0] * 2];
  }

  emxFree_real_T(sp, &ZBlNode_Z);
  b_MB1_size[0] = 1;
  b_MB1_size[1] = 3;
  b_MB1_size[2] = MB3_size[2];
  for (it = 0; it < e_loop_ub; it++) {
    b_MB1_data[3 * it] = MB3_data[9 * it];
    b_MB1_data[3 * it + 1] = MB3_data[9 * it + 3];
    b_MB1_data[3 * it + 2] = MB3_data[9 * it + 6];
  }

  emxInit_real_T(sp, &F_AeroB3, 3, &xd_emlrtRTEI);
  st.site = &ac_emlrtRSI;
  coprod(&st, vr_X, b_MB1_data, b_MB1_size, F_AeroB3);
  c_n = vr_X->size[0] * vr_X->size[1] * vr_X->size[2];
  vr_X->size[0] = 1;
  vr_X->size[1] = 1;
  vr_X->size[2] = i1;
  emxEnsureCapacity_real_T(sp, vr_X, c_n, &wd_emlrtRTEI);
  vr_X_data = vr_X->data;
  for (it = 0; it < b_loop_ub; it++) {
    vr_X_data[it] = Vx_data[it + Vx->size[0] * 2];
  }

  emxFree_real_T(sp, &Vx);
  b_MB1_size[0] = 1;
  b_MB1_size[1] = 3;
  b_MB1_size[2] = MB3_size[2];
  for (it = 0; it < e_loop_ub; it++) {
    b_MB1_data[3 * it] = MB3_data[9 * it + 1];
    b_MB1_data[3 * it + 1] = MB3_data[9 * it + 4];
    b_MB1_data[3 * it + 2] = MB3_data[9 * it + 7];
  }

  st.site = &ac_emlrtRSI;
  coprod(&st, vr_X, b_MB1_data, b_MB1_size, r6);
  r7 = r6->data;
  if ((F_AeroB3->size[2] != r6->size[2]) && ((F_AeroB3->size[2] != 1) &&
       (r6->size[2] != 1))) {
    emlrtDimSizeImpxCheckR2021b(F_AeroB3->size[2], r6->size[2], &jc_emlrtECI,
      (emlrtConstCTX)sp);
  }

  if (F_AeroB3->size[2] == r6->size[2]) {
    c_n = 3 * F_AeroB3->size[2];
    n = F_AeroB3->size[0] * F_AeroB3->size[1] * F_AeroB3->size[2];
    F_AeroB3->size[0] = 1;
    F_AeroB3->size[1] = 3;
    emxEnsureCapacity_real_T(sp, F_AeroB3, n, &xd_emlrtRTEI);
    F_AeroB3_data = F_AeroB3->data;
    n = (c_n / 2) << 1;
    b_n = n - 2;
    for (it = 0; it <= b_n; it += 2) {
      r = _mm_loadu_pd(&F_AeroB3_data[it]);
      r1 = _mm_loadu_pd(&r7[it]);
      _mm_storeu_pd(&F_AeroB3_data[it], _mm_add_pd(r, r1));
    }

    for (it = n; it < c_n; it++) {
      F_AeroB3_data[it] += r7[it];
    }
  } else {
    st.site = &ac_emlrtRSI;
    f_plus(&st, F_AeroB3, r6);
    F_AeroB3_data = F_AeroB3->data;
  }

  /*  M_AeroB1 = coprod(reshape(Mz(:,1),1,1,nb),MB1(3,:,:)); */
  /*  M_AeroB2 = coprod(reshape(Mz(:,2),1,1,nb),MB2(3,:,:)); */
  /*  M_AeroB3 = coprod(reshape(Mz(:,3),1,1,nb),MB3(3,:,:)); */
  if (i1 != i) {
    emlrtIntegerCheckR2012b(Bld->nb, &m_emlrtDCI, (emlrtConstCTX)sp);
  }

  emxInit_real_T(sp, &M_AeroB1, 3, &yd_emlrtRTEI);
  n = M_AeroB1->size[0] * M_AeroB1->size[1] * M_AeroB1->size[2];
  M_AeroB1->size[0] = 1;
  M_AeroB1->size[1] = 3;
  M_AeroB1->size[2] = i1;
  emxEnsureCapacity_real_T(sp, M_AeroB1, n, &yd_emlrtRTEI);
  ZBlNode_Y_data = M_AeroB1->data;
  for (it = 0; it < c_loop_ub; it++) {
    ZBlNode_Y_data[it] = 0.0;
  }

  if (!(Twr->nt >= 0.0)) {
    emlrtNonNegativeCheckR2012b(Twr->nt, &n_emlrtDCI, (emlrtConstCTX)sp);
  }

  if (Twr->nt != (int32_T)muDoubleScalarFloor(Twr->nt)) {
    emlrtIntegerCheckR2012b(Twr->nt, &o_emlrtDCI, (emlrtConstCTX)sp);
  }

  st.site = &bc_emlrtRSI;
  b_st.site = &dr_emlrtRSI;
  computeDimsData(&b_st, Twr->nt);
  n = (int32_T)Twr->nt;
  if ((int32_T)Twr->nt < 1) {
    n = 1;
  }

  if ((int32_T)Twr->nt > muIntScalarMax_sint32(loop_ub, n)) {
    emlrtErrorWithMessageIdR2018a(&st, &emlrtRTEI,
      "Coder:toolbox:reshape_emptyReshapeLimit",
      "Coder:toolbox:reshape_emptyReshapeLimit", 0);
  }

  if ((int32_T)Twr->nt < 0) {
    emlrtErrorWithMessageIdR2018a(&st, &b_emlrtRTEI,
      "MATLAB:checkDimCommon:nonnegativeSize",
      "MATLAB:checkDimCommon:nonnegativeSize", 0);
  }

  st.site = &bc_emlrtRSI;
  b_st.site = &dr_emlrtRSI;
  computeDimsData(&b_st, Twr->nt);
  n = (int32_T)Twr->nt;
  if ((int32_T)Twr->nt < 1) {
    n = 1;
  }

  if ((int32_T)Twr->nt > muIntScalarMax_sint32(loop_ub, n)) {
    emlrtErrorWithMessageIdR2018a(&st, &emlrtRTEI,
      "Coder:toolbox:reshape_emptyReshapeLimit",
      "Coder:toolbox:reshape_emptyReshapeLimit", 0);
  }

  if ((int32_T)Twr->nt < 0) {
    emlrtErrorWithMessageIdR2018a(&st, &b_emlrtRTEI,
      "MATLAB:checkDimCommon:nonnegativeSize",
      "MATLAB:checkDimCommon:nonnegativeSize", 0);
  }

  n = vr_X->size[0] * vr_X->size[1] * vr_X->size[2];
  vr_X->size[0] = 1;
  vr_X->size[1] = 1;
  vr_X->size[2] = (int32_T)Twr->nt;
  emxEnsureCapacity_real_T(sp, vr_X, n, &ae_emlrtRTEI);
  vr_X_data = vr_X->data;
  for (it = 0; it < loop_ub; it++) {
    vr_X_data[it] = 0.0;
  }

  b_I_G[0] = A[0];
  b_I_G[1] = A[3];
  b_I_G[2] = A[6];
  emxInit_real_T(sp, &F_AeroT, 3, &ce_emlrtRTEI);
  st.site = &bc_emlrtRSI;
  b_coprod(&st, vr_X, b_I_G, F_AeroT);
  n = vr_X->size[0] * vr_X->size[1] * vr_X->size[2];
  vr_X->size[0] = 1;
  vr_X->size[1] = 1;
  vr_X->size[2] = (int32_T)Twr->nt;
  emxEnsureCapacity_real_T(sp, vr_X, n, &ae_emlrtRTEI);
  vr_X_data = vr_X->data;
  for (it = 0; it < loop_ub; it++) {
    vr_X_data[it] = 0.0;
  }

  b_I_G[0] = A[1];
  b_I_G[1] = A[4];
  b_I_G[2] = A[7];
  st.site = &bc_emlrtRSI;
  b_coprod(&st, vr_X, b_I_G, r6);
  r7 = r6->data;
  if ((F_AeroT->size[2] != r6->size[2]) && ((F_AeroT->size[2] != 1) && (r6->
        size[2] != 1))) {
    emlrtDimSizeImpxCheckR2021b(F_AeroT->size[2], r6->size[2], &kc_emlrtECI,
      (emlrtConstCTX)sp);
  }

  st.site = &bc_emlrtRSI;
  b_st.site = &dr_emlrtRSI;
  computeDimsData(&b_st, Twr->nt);
  n = (int32_T)Twr->nt;
  if ((int32_T)Twr->nt < 1) {
    n = 1;
  }

  if ((int32_T)Twr->nt > muIntScalarMax_sint32(loop_ub, n)) {
    emlrtErrorWithMessageIdR2018a(&st, &emlrtRTEI,
      "Coder:toolbox:reshape_emptyReshapeLimit",
      "Coder:toolbox:reshape_emptyReshapeLimit", 0);
  }

  if ((int32_T)Twr->nt < 0) {
    emlrtErrorWithMessageIdR2018a(&st, &b_emlrtRTEI,
      "MATLAB:checkDimCommon:nonnegativeSize",
      "MATLAB:checkDimCommon:nonnegativeSize", 0);
  }

  if (F_AeroT->size[2] == r6->size[2]) {
    c_n = 3 * F_AeroT->size[2];
    n = F_AeroT->size[0] * F_AeroT->size[1] * F_AeroT->size[2];
    F_AeroT->size[0] = 1;
    F_AeroT->size[1] = 3;
    emxEnsureCapacity_real_T(sp, F_AeroT, n, &be_emlrtRTEI);
    F_AeroT_data = F_AeroT->data;
    n = (c_n / 2) << 1;
    b_n = n - 2;
    for (it = 0; it <= b_n; it += 2) {
      r = _mm_loadu_pd(&F_AeroT_data[it]);
      r1 = _mm_loadu_pd(&r7[it]);
      _mm_storeu_pd(&F_AeroT_data[it], _mm_add_pd(r, r1));
    }

    for (it = n; it < c_n; it++) {
      F_AeroT_data[it] += r7[it];
    }
  } else {
    st.site = &bc_emlrtRSI;
    f_plus(&st, F_AeroT, r6);
  }

  n = vr_X->size[0] * vr_X->size[1] * vr_X->size[2];
  vr_X->size[0] = 1;
  vr_X->size[1] = 1;
  vr_X->size[2] = (int32_T)Twr->nt;
  emxEnsureCapacity_real_T(sp, vr_X, n, &ae_emlrtRTEI);
  vr_X_data = vr_X->data;
  for (it = 0; it < loop_ub; it++) {
    vr_X_data[it] = 0.0;
  }

  b_I_G[0] = A[2];
  b_I_G[1] = A[5];
  b_I_G[2] = A[8];
  st.site = &bc_emlrtRSI;
  b_coprod(&st, vr_X, b_I_G, r6);
  r7 = r6->data;
  if ((F_AeroT->size[2] != r6->size[2]) && ((F_AeroT->size[2] != 1) && (r6->
        size[2] != 1))) {
    emlrtDimSizeImpxCheckR2021b(F_AeroT->size[2], r6->size[2], &kc_emlrtECI,
      (emlrtConstCTX)sp);
  }

  if (F_AeroT->size[2] == r6->size[2]) {
    c_n = 3 * F_AeroT->size[2];
    n = F_AeroT->size[0] * F_AeroT->size[1] * F_AeroT->size[2];
    F_AeroT->size[0] = 1;
    F_AeroT->size[1] = 3;
    emxEnsureCapacity_real_T(sp, F_AeroT, n, &ce_emlrtRTEI);
    F_AeroT_data = F_AeroT->data;
    n = (c_n / 2) << 1;
    b_n = n - 2;
    for (b_it = 0; b_it <= b_n; b_it += 2) {
      r = _mm_loadu_pd(&F_AeroT_data[b_it]);
      r1 = _mm_loadu_pd(&r7[b_it]);
      _mm_storeu_pd(&F_AeroT_data[b_it], _mm_add_pd(r, r1));
    }

    for (b_it = n; b_it < c_n; b_it++) {
      F_AeroT_data[b_it] += r7[b_it];
    }
  } else {
    st.site = &bc_emlrtRSI;
    f_plus(&st, F_AeroT, r6);
    F_AeroT_data = F_AeroT->data;
  }

  /*  Hydrodynamic Loads */
  /*  Hydrostatic forces */
  b_q_Nom[0] = q_Nom[0];
  b_q_Nom[1] = q_Nom[1];
  b_q_Nom[2] = q_Nom[2];
  b_q_Nom[3] = q_Nom[3];
  b_q_Nom[4] = q_Nom[4];
  b_q_Nom[5] = q_Nom[5];
  for (it = 0; it < 6; it++) {
    I_pr_app = 0.0;
    for (b_it = 0; b_it < 6; b_it++) {
      I_pr_app += (real_T)j_a[it + 6 * b_it] * b_q_Nom[b_it];
    }

    ff_HydroStat[it] = (real_T)b_iv[it] - I_pr_app;
  }

  /*  Additional damping */
  /*  Hyrdro Loads */
  /*  Partial Angular Velocities */
  /*  #1. Platform */
  /*  #2. Tower Element */
  /*  All these quantities are not used */
  /*  EwF_R = Z(1,:); */
  /*  EwF_P = -Z(3,:); */
  /*  EwF_Y = Z(2,:); */
  /*  EwF_TFA1 = -do1_TFA*A(3,:);       */
  /*  EwF_TSS1 =  do1_TSS*A(1,:);    */
  /*  EwF_TFA2 = -do2_TFA*A(3,:); */
  /*  EwF_TSS2 =  do2_TSS*A(1,:); */
  /*  #3. Tower top/Base plate  */
  /*  #4. Nacelle */
  /*  #5. Low speed shaft */
  EwB_TFA1[0] = -Twr->dO1_TFA * A[2];
  EwB_TSS1[0] = Twr->dO1_TSS * A[0];
  EwB_TFA2[0] = -Twr->dO2_TFA * A[2];
  EwB_TSS2[0] = Twr->dO2_TSS * A[0];
  EwN_yaw[0] = D[1];
  EwL_yaw[0] = D[1];
  EwL_GeAz[0] = C[0];
  EwB_TFA1[1] = -Twr->dO1_TFA * A[5];
  EwB_TSS1[1] = Twr->dO1_TSS * A[3];
  EwB_TFA2[1] = -Twr->dO2_TFA * A[5];
  EwB_TSS2[1] = Twr->dO2_TSS * A[3];
  EwN_yaw[1] = D[4];
  EwL_yaw[1] = D[4];
  EwL_GeAz[1] = C[3];
  EwB_TFA1[2] = -Twr->dO1_TFA * A[8];
  EwB_TSS1[2] = Twr->dO1_TSS * A[6];
  EwB_TFA2[2] = -Twr->dO2_TFA * A[8];
  EwB_TSS2[2] = Twr->dO2_TSS * A[6];
  EwN_yaw[2] = D[7];
  EwL_yaw[2] = D[7];
  EwL_GeAz[2] = C[6];

  /*  #6. Blade 1 Element */
  /*  EwM1_R = repmat(EwN_R,1,1,nb); */
  /*  EwM1_P = repmat(EwN_P,1,1,nb); */
  /*  EwM1_Y = repmat(EwN_Y,1,1,nb); */
  /*  EwM1_TFA1 = repmat(EwL_TFA1,1,1,nb); */
  /*  EwM1_TSS1 = repmat(EwL_TSS1,1,1,nb); */
  /*  EwM1_TFA2 = repmat(EwL_TFA2,1,1,nb); */
  /*  EwM1_TSS2 = repmat(EwL_TSS2,1,1,nb); */
  /*  EwM1_yaw  =  repmat(EwL_yaw,1,1,nb); */
  /*  EwM1_GeAz  = repmat(EwL_GeAz,1,1,nb); */
  /*  EwM1_DrTr  = repmat(EwL_DrTr,1,1,nb); */
  /*  #7. Blade 2 Element */
  /*  EwM2_R = repmat(EwN_R,1,1,nb); */
  /*  EwM2_P = repmat(EwN_P,1,1,nb); */
  /*  EwM2_Y = repmat(EwN_Y,1,1,nb); */
  /*  EwM2_TFA1 = repmat(EwL_TFA1,1,1,nb); */
  /*  EwM2_TSS1 = repmat(EwL_TSS1,1,1,nb); */
  /*  EwM2_TFA2 = repmat(EwL_TFA2,1,1,nb); */
  /*  EwM2_TSS2 = repmat(EwL_TSS2,1,1,nb); */
  /*  EwM2_yaw  =  repmat(EwL_yaw,1,1,nb); */
  /*  EwM2_GeAz  = repmat(EwL_GeAz,1,1,nb); */
  /*  EwM2_DrTr  = repmat(EwL_DrTr,1,1,nb); */
  /*  #8. Blade 3 Element */
  /*  EwM3_R = repmat(EwN_R,1,1,nb); */
  /*  EwM3_P = repmat(EwN_P,1,1,nb); */
  /*  EwM3_Y = repmat(EwN_Y,1,1,nb); */
  /*  EwM3_TFA1 = repmat(EwL_TFA1,1,1,nb); */
  /*  EwM3_TSS1 = repmat(EwL_TSS1,1,1,nb); */
  /*  EwM3_TFA2 = repmat(EwL_TFA2,1,1,nb); */
  /*  EwM3_TSS2 =  repmat(EwL_TSS2,1,1,nb); */
  /*  EwM3_yaw  =  repmat(EwL_yaw,1,1,nb); */
  /*  EwM3_GeAz  = repmat(EwL_GeAz,1,1,nb); */
  /*  EwM3_DrTr  = repmat(EwL_DrTr,1,1,nb); */
  I_pr_app = I_G[0];
  I_yaw_app = I_G[1];
  rZT_3 = I_G[3];
  rQS1_2 = I_G[4];
  FRotor_R_idx_0 = I_G[6];
  FRotor_R_idx_1 = I_G[7];
  FRotor_R_idx_2 = I_N[0];
  b = I_N[1];
  b_b = I_N[3];
  v_c_tip_Z = I_N[4];
  ak_tip_Z = I_N[6];
  g_proj_X = I_N[7];
  g_proj_Y = I_H[0];
  g_proj_Z = I_H[1];
  EvZ_tmp = I_H[3];
  v_r_tip_X = I_H[4];
  v_r_tip_Y = I_H[6];
  v_r_tip_Z = I_H[7];
  for (it = 0; it < 19; it++) {
    b_rQS1_1 = -Bld->dW1_B1[it];
    b_rZT_1 = Bld->dO1_B1[it];
    tip_mass_X_tot = -Bld->dW3_B1[it];
    tip_mass_Z_tot = Bld->dO3_B1[it];
    b_rQS1_2 = -Bld->dW2_B1[it];
    c_rQS1_1 = Bld->dO2_B1[it];
    c_out[3 * it] = b_rQS1_1 * I_pr_app;
    d_out[3 * it] = b_rZT_1 * I_yaw_app;
    u_out[3 * it] = tip_mass_X_tot * I_pr_app;
    v_out[3 * it] = tip_mass_Z_tot * I_yaw_app;
    w_out[3 * it] = b_rQS1_2 * I_pr_app;
    x_out[3 * it] = c_rQS1_1 * I_yaw_app;
    y_out[3 * it] = b_rQS1_1 * FRotor_R_idx_2;
    ab_out[3 * it] = b_rZT_1 * b;
    bb_out[3 * it] = tip_mass_X_tot * FRotor_R_idx_2;
    cb_out[3 * it] = tip_mass_Z_tot * b;
    db_out[3 * it] = b_rQS1_2 * FRotor_R_idx_2;
    eb_out[3 * it] = c_rQS1_1 * b;
    o_out[3 * it] = b_rQS1_1 * g_proj_Y;
    p_out[3 * it] = b_rZT_1 * g_proj_Z;
    q_out[3 * it] = tip_mass_X_tot * g_proj_Y;
    r_out[3 * it] = tip_mass_Z_tot * g_proj_Z;
    s_out[3 * it] = b_rQS1_2 * g_proj_Y;
    t_out[3 * it] = c_rQS1_1 * g_proj_Z;
    n = 3 * it + 1;
    c_out[n] = b_rQS1_1 * rZT_3;
    d_out[n] = b_rZT_1 * rQS1_2;
    u_out[n] = tip_mass_X_tot * rZT_3;
    v_out[n] = tip_mass_Z_tot * rQS1_2;
    w_out[n] = b_rQS1_2 * rZT_3;
    x_out[n] = c_rQS1_1 * rQS1_2;
    y_out[n] = b_rQS1_1 * b_b;
    ab_out[n] = b_rZT_1 * v_c_tip_Z;
    bb_out[n] = tip_mass_X_tot * b_b;
    cb_out[n] = tip_mass_Z_tot * v_c_tip_Z;
    db_out[n] = b_rQS1_2 * b_b;
    eb_out[n] = c_rQS1_1 * v_c_tip_Z;
    o_out[n] = b_rQS1_1 * EvZ_tmp;
    p_out[n] = b_rZT_1 * v_r_tip_X;
    q_out[n] = tip_mass_X_tot * EvZ_tmp;
    r_out[n] = tip_mass_Z_tot * v_r_tip_X;
    s_out[n] = b_rQS1_2 * EvZ_tmp;
    t_out[n] = c_rQS1_1 * v_r_tip_X;
    n = 3 * it + 2;
    c_out[n] = b_rQS1_1 * FRotor_R_idx_0;
    d_out[n] = b_rZT_1 * FRotor_R_idx_1;
    u_out[n] = tip_mass_X_tot * FRotor_R_idx_0;
    v_out[n] = tip_mass_Z_tot * FRotor_R_idx_1;
    w_out[n] = b_rQS1_2 * FRotor_R_idx_0;
    x_out[n] = c_rQS1_1 * FRotor_R_idx_1;
    y_out[n] = b_rQS1_1 * ak_tip_Z;
    ab_out[n] = b_rZT_1 * g_proj_X;
    bb_out[n] = tip_mass_X_tot * ak_tip_Z;
    cb_out[n] = tip_mass_Z_tot * g_proj_X;
    db_out[n] = b_rQS1_2 * ak_tip_Z;
    eb_out[n] = c_rQS1_1 * g_proj_X;
    o_out[n] = b_rQS1_1 * v_r_tip_Y;
    p_out[n] = b_rZT_1 * v_r_tip_Z;
    q_out[n] = tip_mass_X_tot * v_r_tip_Y;
    r_out[n] = tip_mass_Z_tot * v_r_tip_Z;
    s_out[n] = b_rQS1_2 * v_r_tip_Y;
    t_out[n] = c_rQS1_1 * v_r_tip_Z;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }

  /*  #9. High speed shaft/Generator */
  EwG_GeAz[0] = ElastoDyn->GBRatio * C[0];
  EwG_GeAz[1] = ElastoDyn->GBRatio * C[3];
  EwG_GeAz[2] = ElastoDyn->GBRatio * C[6];

  /*  end of Partial Angular Velocities */
  /*  ================== OC4 浮筒偏角速度 (仅端部集中质量需要) ================== */
  /*  平台基础转动偏导 */
  /*  浮筒局部弯曲偏角速度 */
  /*  Partial Linear Velocities */
  /*  #1. Platform */
  /*  #2. Platform C.M */
  rQS1_2 = rZY_idx_1 * 0.0;
  I_yaw_app = 0.0 * rZY_idx_2;
  EvY_R_idx_0 = I_yaw_app - rQS1_2;
  rZT_3 = rZY_idx_0 * 0.0;
  EvY_R_idx_1 = rZT_3 - rZY_idx_2;
  EvY_R_idx_2 = rZY_idx_1 - rZT_3;
  I_pr_app = -0.0 * rZY_idx_2;
  EvY_P_idx_0 = I_pr_app - (-rZY_idx_1);
  EvY_P_idx_1 = -rZY_idx_0 - I_pr_app;
  EvY_P_idx_2 = -0.0 * rZY_idx_1 - rZY_idx_0 * -0.0;
  EvY_Y_idx_0 = rZY_idx_2 - rQS1_2;
  EvY_Y_idx_1 = rZT_3 - I_yaw_app;
  EvY_Y_idx_2 = rQS1_2 - rZY_idx_0;

  /*  #3. Tower */
  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Twr->nt;
  emxInit_real_T(sp, &EvF_Sg, 3, &ii_emlrtRTEI);
  st.site = &cc_emlrtRSI;
  d_repmat(&st, dEvQ_TSS1, EvF_Sg);
  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Twr->nt;
  emxInit_real_T(sp, &EvF_Sw, 3, &ji_emlrtRTEI);
  st.site = &dc_emlrtRSI;
  e_repmat(&st, dEvQ_TSS1, EvF_Sw);
  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Twr->nt;
  emxInit_real_T(sp, &EvF_Hv, 3, &ki_emlrtRTEI);
  st.site = &ec_emlrtRSI;
  f_repmat(&st, dEvQ_TSS1, EvF_Hv);
  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Twr->nt;
  st.site = &fc_emlrtRSI;
  d_repmat(&st, dEvQ_TSS1, r6);
  emxInit_real_T(sp, &EvF_R, 3, &li_emlrtRTEI);
  st.site = &fc_emlrtRSI;
  c_cross(&st, r6, rZT, EvF_R);
  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Twr->nt;
  st.site = &gc_emlrtRSI;
  e_repmat(&st, dEvQ_TSS1, r6);
  emxInit_real_T(sp, &EvF_P, 3, &mi_emlrtRTEI);
  st.site = &gc_emlrtRSI;
  c_cross(&st, r6, rZT, EvF_P);
  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Twr->nt;
  st.site = &hc_emlrtRSI;
  f_repmat(&st, dEvQ_TSS1, r6);
  emxInit_real_T(sp, &EvF_Y, 3, &ni_emlrtRTEI);
  st.site = &hc_emlrtRSI;
  c_cross(&st, r6, rZT, EvF_Y);
  I_pr_app = A[0];
  I_yaw_app = A[1];
  rZT_3 = A[3];
  rQS1_2 = A[4];
  FRotor_R_idx_0 = A[6];
  FRotor_R_idx_1 = A[7];
  for (b_it = 0; b_it < 11; b_it++) {
    FRotor_R_idx_2 = rZT_2[b_it] + Twr->s12_TFA[b_it] * q_Nom[8];
    rZT_2[b_it] = FRotor_R_idx_2;
    b = Twr->O1_TFA[b_it];
    EvF_TFA1[3 * b_it] = b * I_pr_app;
    out[3 * b_it] = FRotor_R_idx_2 * I_yaw_app;
    n = 3 * b_it + 1;
    EvF_TFA1[n] = b * rZT_3;
    out[n] = FRotor_R_idx_2 * rQS1_2;
    n = 3 * b_it + 2;
    EvF_TFA1[n] = b * FRotor_R_idx_0;
    out[n] = FRotor_R_idx_2 * FRotor_R_idx_1;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }

  for (it = 0; it <= 30; it += 2) {
    r = _mm_loadu_pd(&EvF_TFA1[it]);
    r1 = _mm_loadu_pd(&out[it]);
    _mm_storeu_pd(&EvF_TFA1[it], _mm_sub_pd(r, r1));
  }

  EvF_TFA1[32] -= out[32];
  I_pr_app = A[2];
  rZT_3 = A[5];
  FRotor_R_idx_0 = A[8];
  for (it = 0; it < 11; it++) {
    FRotor_R_idx_2 = rZT_1[it] + Twr->s12_TSS[it] * q_Nom[9];
    rZT_1[it] = FRotor_R_idx_2;
    b = Twr->O1_TSS[it];
    EvF_TSS1[3 * it] = b * I_pr_app;
    out[3 * it] = FRotor_R_idx_2 * I_yaw_app;
    n = 3 * it + 1;
    EvF_TSS1[n] = b * rZT_3;
    out[n] = FRotor_R_idx_2 * rQS1_2;
    n = 3 * it + 2;
    EvF_TSS1[n] = b * FRotor_R_idx_0;
    out[n] = FRotor_R_idx_2 * FRotor_R_idx_1;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }

  for (it = 0; it <= 30; it += 2) {
    r = _mm_loadu_pd(&EvF_TSS1[it]);
    r1 = _mm_loadu_pd(&out[it]);
    _mm_storeu_pd(&EvF_TSS1[it], _mm_sub_pd(r, r1));
  }

  EvF_TSS1[32] -= out[32];
  I_pr_app = A[0];
  rZT_3 = A[3];
  FRotor_R_idx_0 = A[6];
  for (it = 0; it < 11; it++) {
    FRotor_R_idx_2 = XvT_2_tmp[it] + Twr->s12_TFA[it] * q_Nom[6];
    XvT_2_tmp[it] = FRotor_R_idx_2;
    b = Twr->O2_TFA[it];
    EvF_TFA2[3 * it] = b * I_pr_app;
    out[3 * it] = FRotor_R_idx_2 * I_yaw_app;
    n = 3 * it + 1;
    EvF_TFA2[n] = b * rZT_3;
    out[n] = FRotor_R_idx_2 * rQS1_2;
    n = 3 * it + 2;
    EvF_TFA2[n] = b * FRotor_R_idx_0;
    out[n] = FRotor_R_idx_2 * FRotor_R_idx_1;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }

  for (it = 0; it <= 30; it += 2) {
    r = _mm_loadu_pd(&EvF_TFA2[it]);
    r1 = _mm_loadu_pd(&out[it]);
    _mm_storeu_pd(&EvF_TFA2[it], _mm_sub_pd(r, r1));
  }

  EvF_TFA2[32] -= out[32];
  I_pr_app = A[2];
  rZT_3 = A[5];
  FRotor_R_idx_0 = A[8];
  for (it = 0; it < 11; it++) {
    FRotor_R_idx_2 = b_XvT_2_tmp[it] + Twr->s12_TSS[it] * q_Nom[7];
    b_XvT_2_tmp[it] = FRotor_R_idx_2;
    b = Twr->O2_TSS[it];
    EvF_TSS2[3 * it] = b * I_pr_app;
    out[3 * it] = FRotor_R_idx_2 * I_yaw_app;
    n = 3 * it + 1;
    EvF_TSS2[n] = b * rZT_3;
    out[n] = FRotor_R_idx_2 * rQS1_2;
    n = 3 * it + 2;
    EvF_TSS2[n] = b * FRotor_R_idx_0;
    out[n] = FRotor_R_idx_2 * FRotor_R_idx_1;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }

  for (it = 0; it <= 30; it += 2) {
    r = _mm_loadu_pd(&EvF_TSS2[it]);
    r1 = _mm_loadu_pd(&out[it]);
    _mm_storeu_pd(&EvF_TSS2[it], _mm_sub_pd(r, r1));
  }

  EvF_TSS2[32] -= out[32];

  /*  #4. Tower top/Base plate */
  I_pr_app = rZO[1] * 0.0;
  I_yaw_app = 0.0 * rZO[2];
  EvO_R[0] = I_yaw_app - I_pr_app;
  rZT_3 = rZO[0] * 0.0;
  EvO_R[1] = rZT_3 - rZO[2];
  EvO_R[2] = rZO[1] - rZT_3;
  rQS1_2 = -0.0 * rZO[2];
  EvO_P[0] = rQS1_2 - (-rZO[1]);
  EvO_P[1] = -rZO[0] - rQS1_2;
  EvO_P[2] = -0.0 * rZO[1] - rZO[0] * -0.0;
  EvO_Y[0] = rZO[2] - I_pr_app;
  EvO_Y[1] = rZT_3 - I_yaw_app;
  EvO_Y[2] = I_pr_app - rZO[0];
  rQS1_2 = a_tmp + Twr->S12_TFA * q_Nom[8];
  rZT_3 = b_a_tmp + Twr->S12_TSS * q_Nom[9];
  I_yaw_app = c_a_tmp + Twr->S12_TFA * q_Nom[6];
  I_pr_app = d_a_tmp + Twr->S12_TSS * q_Nom[7];
  EvO_TFA1[0] = A[0] - rQS1_2 * A[1];
  EvO_TSS1[0] = A[2] - rZT_3 * A[1];
  EvO_TFA2[0] = A[0] - I_yaw_app * A[1];
  EvO_TSS2[0] = A[2] - I_pr_app * A[1];
  EvO_TFA1[1] = A[3] - rQS1_2 * A[4];
  EvO_TSS1[1] = A[5] - rZT_3 * A[4];
  EvO_TFA2[1] = A[3] - I_yaw_app * A[4];
  EvO_TSS2[1] = A[5] - I_pr_app * A[4];
  EvO_TFA1[2] = A[6] - rQS1_2 * A[7];
  EvO_TSS1[2] = A[8] - rZT_3 * A[7];
  EvO_TFA2[2] = A[6] - I_yaw_app * A[7];
  EvO_TSS2[2] = A[8] - I_pr_app * A[7];

  /*  #5. Nacelle */
  I_pr_app = rOU_idx_1 * 0.0;
  I_yaw_app = 0.0 * rOU_idx_2;
  EvU_R_idx_0 = EvO_R[0] + (I_yaw_app - I_pr_app);
  rZT_3 = rOU_idx_0 * 0.0;
  EvU_R_idx_1 = EvO_R[1] + (rZT_3 - rOU_idx_2);
  EvU_R_idx_2 = EvO_R[2] + (rOU_idx_1 - rZT_3);
  rQS1_2 = -0.0 * rOU_idx_2;
  EvU_P[0] = EvO_P[0] + (rQS1_2 - (-rOU_idx_1));
  EvU_P[1] = EvO_P[1] + (-rOU_idx_0 - rQS1_2);
  EvU_P[2] = EvO_P[2] + (-0.0 * rOU_idx_1 - rOU_idx_0 * -0.0);
  EvU_Y[0] = EvO_Y[0] + (rOU_idx_2 - I_pr_app);
  EvU_Y[1] = EvO_Y[1] + (rZT_3 - I_yaw_app);
  EvU_Y[2] = EvO_Y[2] + (I_pr_app - rOU_idx_0);
  EvU_TFA1[0] = EvO_TFA1[0] + (EwB_TFA1[1] * rOU_idx_2 - rOU_idx_1 * EwB_TFA1[2]);
  EvU_TFA1[1] = EvO_TFA1[1] + (rOU_idx_0 * EwB_TFA1[2] - EwB_TFA1[0] * rOU_idx_2);
  EvU_TFA1[2] = EvO_TFA1[2] + (EwB_TFA1[0] * rOU_idx_1 - rOU_idx_0 * EwB_TFA1[1]);
  EvU_TSS1[0] = EvO_TSS1[0] + (EwB_TSS1[1] * rOU_idx_2 - rOU_idx_1 * EwB_TSS1[2]);
  EvU_TSS1[1] = EvO_TSS1[1] + (rOU_idx_0 * EwB_TSS1[2] - EwB_TSS1[0] * rOU_idx_2);
  EvU_TSS1[2] = EvO_TSS1[2] + (EwB_TSS1[0] * rOU_idx_1 - rOU_idx_0 * EwB_TSS1[1]);
  EvU_TFA2[0] = EvO_TFA2[0] + (EwB_TFA2[1] * rOU_idx_2 - rOU_idx_1 * EwB_TFA2[2]);
  EvU_TFA2[1] = EvO_TFA2[1] + (rOU_idx_0 * EwB_TFA2[2] - EwB_TFA2[0] * rOU_idx_2);
  EvU_TFA2[2] = EvO_TFA2[2] + (EwB_TFA2[0] * rOU_idx_1 - rOU_idx_0 * EwB_TFA2[1]);
  EvU_TSS2[0] = EvO_TSS2[0] + (EwB_TSS2[1] * rOU_idx_2 - rOU_idx_1 * EwB_TSS2[2]);
  EvU_TSS2[1] = EvO_TSS2[1] + (rOU_idx_0 * EwB_TSS2[2] - EwB_TSS2[0] * rOU_idx_2);
  EvU_TSS2[2] = EvO_TSS2[2] + (EwB_TSS2[0] * rOU_idx_1 - rOU_idx_0 * EwB_TSS2[1]);
  EvU_yaw[0] = rOU_idx_2 * D[4] - rOU_idx_1 * D[7];
  EvU_yaw[1] = rOU_idx_0 * D[7] - D[1] * rOU_idx_2;
  EvU_yaw[2] = rOU_idx_1 * D[1] - rOU_idx_0 * D[4];

  /*  #6. Appex of conning angle */
  I_pr_app = rOQ[1] * 0.0;
  I_yaw_app = 0.0 * rOQ[2];
  EvZ[0] = EvO_R[0] + (I_yaw_app - I_pr_app);
  rZT_3 = rOQ[0] * 0.0;
  EvZ[1] = EvO_R[1] + (rZT_3 - rOQ[2]);
  EvZ[2] = EvO_R[2] + (rOQ[1] - rZT_3);
  rQS1_2 = -0.0 * rOQ[2];
  EvQ[0] = EvO_P[0] + (rQS1_2 - (-rOQ[1]));
  EvQ[1] = EvO_P[1] + (-rOQ[0] - rQS1_2);
  EvQ[2] = EvO_P[2] + (-0.0 * rOQ[1] - rOQ[0] * -0.0);
  EvQ_Y[0] = EvO_Y[0] + (rOQ[2] - I_pr_app);
  EvQ_Y[1] = EvO_Y[1] + (rZT_3 - I_yaw_app);
  EvQ_Y[2] = EvO_Y[2] + (I_pr_app - rOQ[0]);
  EvQ_TFA1[0] = EvO_TFA1[0] + (EwB_TFA1[1] * rOQ[2] - rOQ[1] * EwB_TFA1[2]);
  EvQ_TFA1[1] = EvO_TFA1[1] + (rOQ[0] * EwB_TFA1[2] - EwB_TFA1[0] * rOQ[2]);
  EvQ_TFA1[2] = EvO_TFA1[2] + (EwB_TFA1[0] * rOQ[1] - rOQ[0] * EwB_TFA1[1]);
  EvQ_TSS1[0] = EvO_TSS1[0] + (EwB_TSS1[1] * rOQ[2] - rOQ[1] * EwB_TSS1[2]);
  EvQ_TSS1[1] = EvO_TSS1[1] + (rOQ[0] * EwB_TSS1[2] - EwB_TSS1[0] * rOQ[2]);
  EvQ_TSS1[2] = EvO_TSS1[2] + (EwB_TSS1[0] * rOQ[1] - rOQ[0] * EwB_TSS1[1]);
  EvQ_TFA2[0] = EvO_TFA2[0] + (EwB_TFA2[1] * rOQ[2] - rOQ[1] * EwB_TFA2[2]);
  EvQ_TFA2[1] = EvO_TFA2[1] + (rOQ[0] * EwB_TFA2[2] - EwB_TFA2[0] * rOQ[2]);
  EvQ_TFA2[2] = EvO_TFA2[2] + (EwB_TFA2[0] * rOQ[1] - rOQ[0] * EwB_TFA2[1]);
  EvQ_TSS2[0] = EvO_TSS2[0] + (EwB_TSS2[1] * rOQ[2] - rOQ[1] * EwB_TSS2[2]);
  EvQ_TSS2[1] = EvO_TSS2[1] + (rOQ[0] * EwB_TSS2[2] - EwB_TSS2[0] * rOQ[2]);
  EvQ_TSS2[2] = EvO_TSS2[2] + (EwB_TSS2[0] * rOQ[1] - rOQ[0] * EwB_TSS2[1]);
  EvQ_yaw[0] = rOQ[2] * D[4] - rOQ[1] * D[7];
  EvQ_yaw[1] = rOQ[0] * D[7] - D[1] * rOQ[2];
  EvQ_yaw[2] = rOQ[1] * D[1] - rOQ[0] * D[4];

  /*  EvQ_GeAz  = cross(EwN_GeAz,rOQ); */
  /*  EvQ_DrTr  = cross(EwN_DrTr,rOQ); */
  /*  #7. Hub C.M */
  rQS1_2 = rQC_idx_1 * 0.0;
  I_yaw_app = 0.0 * rQC_idx_2;
  EvC_R_idx_0 = EvZ[0] + (I_yaw_app - rQS1_2);
  rZT_3 = rQC_idx_0 * 0.0;
  EvC_R_idx_1 = EvZ[1] + (rZT_3 - rQC_idx_2);
  EvC_R_idx_2 = EvZ[2] + (rQC_idx_1 - rZT_3);
  I_pr_app = -0.0 * rQC_idx_2;
  EvC_P_idx_0 = EvQ[0] + (I_pr_app - (-rQC_idx_1));
  EvC_P_idx_1 = EvQ[1] + (-rQC_idx_0 - I_pr_app);
  EvC_P_idx_2 = EvQ[2] + (-0.0 * rQC_idx_1 - rQC_idx_0 * -0.0);
  EvC_Y_idx_0 = EvQ_Y[0] + (rQC_idx_2 - rQS1_2);
  EvC_Y_idx_1 = EvQ_Y[1] + (rZT_3 - I_yaw_app);
  EvC_Y_idx_2 = EvQ_Y[2] + (rQS1_2 - rQC_idx_0);
  nb = EvQ_TFA1[0] + (EwB_TFA1[1] * rQC_idx_2 - rQC_idx_1 * EwB_TFA1[2]);
  EvC_TFA1_idx_1 = EvQ_TFA1[1] + (rQC_idx_0 * EwB_TFA1[2] - EwB_TFA1[0] *
    rQC_idx_2);
  EvC_TFA1_idx_2 = EvQ_TFA1[2] + (EwB_TFA1[0] * rQC_idx_1 - rQC_idx_0 *
    EwB_TFA1[1]);
  EvC_TSS1_idx_0 = EvQ_TSS1[0] + (EwB_TSS1[1] * rQC_idx_2 - rQC_idx_1 *
    EwB_TSS1[2]);
  EvC_TSS1_idx_1 = EvQ_TSS1[1] + (rQC_idx_0 * EwB_TSS1[2] - EwB_TSS1[0] *
    rQC_idx_2);
  EvC_TSS1_idx_2 = EvQ_TSS1[2] + (EwB_TSS1[0] * rQC_idx_1 - rQC_idx_0 *
    EwB_TSS1[1]);
  EvC_TFA2_idx_0 = EvQ_TFA2[0] + (EwB_TFA2[1] * rQC_idx_2 - rQC_idx_1 *
    EwB_TFA2[2]);
  EvC_TFA2_idx_1 = EvQ_TFA2[1] + (rQC_idx_0 * EwB_TFA2[2] - EwB_TFA2[0] *
    rQC_idx_2);
  EvC_TFA2_idx_2 = EvQ_TFA2[2] + (EwB_TFA2[0] * rQC_idx_1 - rQC_idx_0 *
    EwB_TFA2[1]);
  EvC_TSS2_idx_0 = EvQ_TSS2[0] + (EwB_TSS2[1] * rQC_idx_2 - rQC_idx_1 *
    EwB_TSS2[2]);
  EvC_TSS2_idx_1 = EvQ_TSS2[1] + (rQC_idx_0 * EwB_TSS2[2] - EwB_TSS2[0] *
    rQC_idx_2);
  EvC_TSS2_idx_2 = EvQ_TSS2[2] + (EwB_TSS2[0] * rQC_idx_1 - rQC_idx_0 *
    EwB_TSS2[1]);
  EvC_yaw_idx_0 = EvQ_yaw[0] + (rQC_idx_2 * D[4] - rQC_idx_1 * D[7]);
  EvC_yaw_idx_1 = EvQ_yaw[1] + (rQC_idx_0 * D[7] - D[1] * rQC_idx_2);
  EvC_yaw_idx_2 = EvQ_yaw[2] + (rQC_idx_1 * D[1] - rQC_idx_0 * D[4]);
  EvC_GeAz[0] = rQC_idx_2 * C[3] - rQC_idx_1 * C[6];
  EvC_GeAz[1] = rQC_idx_0 * C[6] - C[0] * rQC_idx_2;
  EvC_GeAz[2] = C[0] * rQC_idx_1 - rQC_idx_0 * C[3];

  /*  #8. Blade 1 */
  emxInit_real_T(sp, &EvS1_Sg, 3, &oi_emlrtRTEI);
  st.site = &ic_emlrtRSI;
  g_repmat(&st, Bld->nb, EvS1_Sg);
  emxInit_real_T(sp, &EvS1_Sw, 3, &pi_emlrtRTEI);
  st.site = &jc_emlrtRSI;
  h_repmat(&st, Bld->nb, EvS1_Sw);
  emxInit_real_T(sp, &EvS1_Hv, 3, &qi_emlrtRTEI);
  st.site = &kc_emlrtRSI;
  b_repmat(&st, Bld->nb, EvS1_Hv);
  emxInit_real_T(sp, &EvS1_R, 3, &de_emlrtRTEI);
  st.site = &lc_emlrtRSI;
  repmat(&st, EvZ, Bld->nb, EvS1_R);
  st.site = &lc_emlrtRSI;
  g_repmat(&st, Bld->nb, r6);
  st.site = &lc_emlrtRSI;
  cross(&st, r6, rQS1, loop_ub_tmp);
  r9 = loop_ub_tmp->data;
  if ((EvS1_R->size[2] != loop_ub_tmp->size[2]) && ((EvS1_R->size[2] != 1) &&
       (loop_ub_tmp->size[2] != 1))) {
    emlrtDimSizeImpxCheckR2021b(EvS1_R->size[2], loop_ub_tmp->size[2],
      &lc_emlrtECI, (emlrtConstCTX)sp);
  }

  if (EvS1_R->size[2] == loop_ub_tmp->size[2]) {
    c_n = 3 * EvS1_R->size[2];
    n = EvS1_R->size[0] * EvS1_R->size[1] * EvS1_R->size[2];
    EvS1_R->size[0] = 1;
    EvS1_R->size[1] = 3;
    emxEnsureCapacity_real_T(sp, EvS1_R, n, &de_emlrtRTEI);
    ZBlNode_Y_data = EvS1_R->data;
    n = (c_n / 2) << 1;
    b_n = n - 2;
    for (b_it = 0; b_it <= b_n; b_it += 2) {
      r = _mm_loadu_pd(&ZBlNode_Y_data[b_it]);
      r1 = _mm_loadu_pd(&r9[b_it]);
      _mm_storeu_pd(&ZBlNode_Y_data[b_it], _mm_add_pd(r, r1));
    }

    for (b_it = n; b_it < c_n; b_it++) {
      ZBlNode_Y_data[b_it] += r9[b_it];
    }
  } else {
    st.site = &lc_emlrtRSI;
    f_plus(&st, EvS1_R, loop_ub_tmp);
  }

  emxInit_real_T(sp, &EvS1_P, 3, &ee_emlrtRTEI);
  st.site = &mc_emlrtRSI;
  repmat(&st, EvQ, Bld->nb, EvS1_P);
  st.site = &mc_emlrtRSI;
  h_repmat(&st, Bld->nb, r6);
  st.site = &mc_emlrtRSI;
  cross(&st, r6, rQS1, loop_ub_tmp);
  r9 = loop_ub_tmp->data;
  if ((EvS1_P->size[2] != loop_ub_tmp->size[2]) && ((EvS1_P->size[2] != 1) &&
       (loop_ub_tmp->size[2] != 1))) {
    emlrtDimSizeImpxCheckR2021b(EvS1_P->size[2], loop_ub_tmp->size[2],
      &mc_emlrtECI, (emlrtConstCTX)sp);
  }

  if (EvS1_P->size[2] == loop_ub_tmp->size[2]) {
    c_n = 3 * EvS1_P->size[2];
    n = EvS1_P->size[0] * EvS1_P->size[1] * EvS1_P->size[2];
    EvS1_P->size[0] = 1;
    EvS1_P->size[1] = 3;
    emxEnsureCapacity_real_T(sp, EvS1_P, n, &ee_emlrtRTEI);
    ZBlNode_Y_data = EvS1_P->data;
    n = (c_n / 2) << 1;
    b_n = n - 2;
    for (b_it = 0; b_it <= b_n; b_it += 2) {
      r = _mm_loadu_pd(&ZBlNode_Y_data[b_it]);
      r1 = _mm_loadu_pd(&r9[b_it]);
      _mm_storeu_pd(&ZBlNode_Y_data[b_it], _mm_add_pd(r, r1));
    }

    for (b_it = n; b_it < c_n; b_it++) {
      ZBlNode_Y_data[b_it] += r9[b_it];
    }
  } else {
    st.site = &mc_emlrtRSI;
    f_plus(&st, EvS1_P, loop_ub_tmp);
  }

  emxInit_real_T(sp, &EvS1_Y, 3, &fe_emlrtRTEI);
  st.site = &nc_emlrtRSI;
  repmat(&st, EvQ_Y, Bld->nb, EvS1_Y);
  st.site = &nc_emlrtRSI;
  b_repmat(&st, Bld->nb, r6);
  st.site = &nc_emlrtRSI;
  cross(&st, r6, rQS1, loop_ub_tmp);
  r9 = loop_ub_tmp->data;
  if ((EvS1_Y->size[2] != loop_ub_tmp->size[2]) && ((EvS1_Y->size[2] != 1) &&
       (loop_ub_tmp->size[2] != 1))) {
    emlrtDimSizeImpxCheckR2021b(EvS1_Y->size[2], loop_ub_tmp->size[2],
      &nc_emlrtECI, (emlrtConstCTX)sp);
  }

  if (EvS1_Y->size[2] == loop_ub_tmp->size[2]) {
    c_n = 3 * EvS1_Y->size[2];
    n = EvS1_Y->size[0] * EvS1_Y->size[1] * EvS1_Y->size[2];
    EvS1_Y->size[0] = 1;
    EvS1_Y->size[1] = 3;
    emxEnsureCapacity_real_T(sp, EvS1_Y, n, &fe_emlrtRTEI);
    ZBlNode_Y_data = EvS1_Y->data;
    n = (c_n / 2) << 1;
    b_n = n - 2;
    for (b_it = 0; b_it <= b_n; b_it += 2) {
      r = _mm_loadu_pd(&ZBlNode_Y_data[b_it]);
      r1 = _mm_loadu_pd(&r9[b_it]);
      _mm_storeu_pd(&ZBlNode_Y_data[b_it], _mm_add_pd(r, r1));
    }

    for (b_it = n; b_it < c_n; b_it++) {
      ZBlNode_Y_data[b_it] += r9[b_it];
    }
  } else {
    st.site = &nc_emlrtRSI;
    f_plus(&st, EvS1_Y, loop_ub_tmp);
  }

  emxInit_real_T(sp, &EvS1_TFA1, 3, &ge_emlrtRTEI);
  st.site = &oc_emlrtRSI;
  repmat(&st, EvQ_TFA1, Bld->nb, EvS1_TFA1);
  st.site = &oc_emlrtRSI;
  repmat(&st, EwB_TFA1, Bld->nb, r6);
  st.site = &oc_emlrtRSI;
  cross(&st, r6, rQS1, loop_ub_tmp);
  r9 = loop_ub_tmp->data;
  if ((EvS1_TFA1->size[2] != loop_ub_tmp->size[2]) && ((EvS1_TFA1->size[2] != 1)
       && (loop_ub_tmp->size[2] != 1))) {
    emlrtDimSizeImpxCheckR2021b(EvS1_TFA1->size[2], loop_ub_tmp->size[2],
      &oc_emlrtECI, (emlrtConstCTX)sp);
  }

  if (EvS1_TFA1->size[2] == loop_ub_tmp->size[2]) {
    c_n = 3 * EvS1_TFA1->size[2];
    n = EvS1_TFA1->size[0] * EvS1_TFA1->size[1] * EvS1_TFA1->size[2];
    EvS1_TFA1->size[0] = 1;
    EvS1_TFA1->size[1] = 3;
    emxEnsureCapacity_real_T(sp, EvS1_TFA1, n, &ge_emlrtRTEI);
    ZBlNode_Y_data = EvS1_TFA1->data;
    n = (c_n / 2) << 1;
    b_n = n - 2;
    for (b_it = 0; b_it <= b_n; b_it += 2) {
      r = _mm_loadu_pd(&ZBlNode_Y_data[b_it]);
      r1 = _mm_loadu_pd(&r9[b_it]);
      _mm_storeu_pd(&ZBlNode_Y_data[b_it], _mm_add_pd(r, r1));
    }

    for (b_it = n; b_it < c_n; b_it++) {
      ZBlNode_Y_data[b_it] += r9[b_it];
    }
  } else {
    st.site = &oc_emlrtRSI;
    f_plus(&st, EvS1_TFA1, loop_ub_tmp);
  }

  emxInit_real_T(sp, &EvS1_TSS1, 3, &he_emlrtRTEI);
  st.site = &pc_emlrtRSI;
  repmat(&st, EvQ_TSS1, Bld->nb, EvS1_TSS1);
  st.site = &pc_emlrtRSI;
  repmat(&st, EwB_TSS1, Bld->nb, r6);
  st.site = &pc_emlrtRSI;
  cross(&st, r6, rQS1, loop_ub_tmp);
  r9 = loop_ub_tmp->data;
  if ((EvS1_TSS1->size[2] != loop_ub_tmp->size[2]) && ((EvS1_TSS1->size[2] != 1)
       && (loop_ub_tmp->size[2] != 1))) {
    emlrtDimSizeImpxCheckR2021b(EvS1_TSS1->size[2], loop_ub_tmp->size[2],
      &pc_emlrtECI, (emlrtConstCTX)sp);
  }

  if (EvS1_TSS1->size[2] == loop_ub_tmp->size[2]) {
    c_n = 3 * EvS1_TSS1->size[2];
    n = EvS1_TSS1->size[0] * EvS1_TSS1->size[1] * EvS1_TSS1->size[2];
    EvS1_TSS1->size[0] = 1;
    EvS1_TSS1->size[1] = 3;
    emxEnsureCapacity_real_T(sp, EvS1_TSS1, n, &he_emlrtRTEI);
    ZBlNode_Y_data = EvS1_TSS1->data;
    n = (c_n / 2) << 1;
    b_n = n - 2;
    for (b_it = 0; b_it <= b_n; b_it += 2) {
      r = _mm_loadu_pd(&ZBlNode_Y_data[b_it]);
      r1 = _mm_loadu_pd(&r9[b_it]);
      _mm_storeu_pd(&ZBlNode_Y_data[b_it], _mm_add_pd(r, r1));
    }

    for (b_it = n; b_it < c_n; b_it++) {
      ZBlNode_Y_data[b_it] += r9[b_it];
    }
  } else {
    st.site = &pc_emlrtRSI;
    f_plus(&st, EvS1_TSS1, loop_ub_tmp);
  }

  emxInit_real_T(sp, &EvS1_TFA2, 3, &ie_emlrtRTEI);
  st.site = &qc_emlrtRSI;
  repmat(&st, EvQ_TFA2, Bld->nb, EvS1_TFA2);
  st.site = &qc_emlrtRSI;
  repmat(&st, EwB_TFA2, Bld->nb, r6);
  st.site = &qc_emlrtRSI;
  cross(&st, r6, rQS1, loop_ub_tmp);
  r9 = loop_ub_tmp->data;
  if ((EvS1_TFA2->size[2] != loop_ub_tmp->size[2]) && ((EvS1_TFA2->size[2] != 1)
       && (loop_ub_tmp->size[2] != 1))) {
    emlrtDimSizeImpxCheckR2021b(EvS1_TFA2->size[2], loop_ub_tmp->size[2],
      &qc_emlrtECI, (emlrtConstCTX)sp);
  }

  if (EvS1_TFA2->size[2] == loop_ub_tmp->size[2]) {
    c_n = 3 * EvS1_TFA2->size[2];
    n = EvS1_TFA2->size[0] * EvS1_TFA2->size[1] * EvS1_TFA2->size[2];
    EvS1_TFA2->size[0] = 1;
    EvS1_TFA2->size[1] = 3;
    emxEnsureCapacity_real_T(sp, EvS1_TFA2, n, &ie_emlrtRTEI);
    ZBlNode_Y_data = EvS1_TFA2->data;
    n = (c_n / 2) << 1;
    b_n = n - 2;
    for (b_it = 0; b_it <= b_n; b_it += 2) {
      r = _mm_loadu_pd(&ZBlNode_Y_data[b_it]);
      r1 = _mm_loadu_pd(&r9[b_it]);
      _mm_storeu_pd(&ZBlNode_Y_data[b_it], _mm_add_pd(r, r1));
    }

    for (b_it = n; b_it < c_n; b_it++) {
      ZBlNode_Y_data[b_it] += r9[b_it];
    }
  } else {
    st.site = &qc_emlrtRSI;
    f_plus(&st, EvS1_TFA2, loop_ub_tmp);
  }

  emxInit_real_T(sp, &EvS1_TSS2, 3, &je_emlrtRTEI);
  st.site = &rc_emlrtRSI;
  repmat(&st, EvQ_TSS2, Bld->nb, EvS1_TSS2);
  st.site = &rc_emlrtRSI;
  repmat(&st, EwB_TSS2, Bld->nb, r6);
  st.site = &rc_emlrtRSI;
  cross(&st, r6, rQS1, loop_ub_tmp);
  r9 = loop_ub_tmp->data;
  if ((EvS1_TSS2->size[2] != loop_ub_tmp->size[2]) && ((EvS1_TSS2->size[2] != 1)
       && (loop_ub_tmp->size[2] != 1))) {
    emlrtDimSizeImpxCheckR2021b(EvS1_TSS2->size[2], loop_ub_tmp->size[2],
      &rc_emlrtECI, (emlrtConstCTX)sp);
  }

  if (EvS1_TSS2->size[2] == loop_ub_tmp->size[2]) {
    c_n = 3 * EvS1_TSS2->size[2];
    n = EvS1_TSS2->size[0] * EvS1_TSS2->size[1] * EvS1_TSS2->size[2];
    EvS1_TSS2->size[0] = 1;
    EvS1_TSS2->size[1] = 3;
    emxEnsureCapacity_real_T(sp, EvS1_TSS2, n, &je_emlrtRTEI);
    ZBlNode_Y_data = EvS1_TSS2->data;
    n = (c_n / 2) << 1;
    b_n = n - 2;
    for (b_it = 0; b_it <= b_n; b_it += 2) {
      r = _mm_loadu_pd(&ZBlNode_Y_data[b_it]);
      r1 = _mm_loadu_pd(&r9[b_it]);
      _mm_storeu_pd(&ZBlNode_Y_data[b_it], _mm_add_pd(r, r1));
    }

    for (b_it = n; b_it < c_n; b_it++) {
      ZBlNode_Y_data[b_it] += r9[b_it];
    }
  } else {
    st.site = &rc_emlrtRSI;
    f_plus(&st, EvS1_TSS2, loop_ub_tmp);
  }

  emxInit_real_T(sp, &EvS1_yaw, 3, &ke_emlrtRTEI);
  st.site = &sc_emlrtRSI;
  repmat(&st, EvQ_yaw, Bld->nb, EvS1_yaw);
  st.site = &sc_emlrtRSI;
  repmat(&st, EwL_yaw, Bld->nb, r6);
  st.site = &sc_emlrtRSI;
  cross(&st, r6, rQS1, loop_ub_tmp);
  r9 = loop_ub_tmp->data;
  if ((EvS1_yaw->size[2] != loop_ub_tmp->size[2]) && ((EvS1_yaw->size[2] != 1) &&
       (loop_ub_tmp->size[2] != 1))) {
    emlrtDimSizeImpxCheckR2021b(EvS1_yaw->size[2], loop_ub_tmp->size[2],
      &sc_emlrtECI, (emlrtConstCTX)sp);
  }

  if (EvS1_yaw->size[2] == loop_ub_tmp->size[2]) {
    c_n = 3 * EvS1_yaw->size[2];
    n = EvS1_yaw->size[0] * EvS1_yaw->size[1] * EvS1_yaw->size[2];
    EvS1_yaw->size[0] = 1;
    EvS1_yaw->size[1] = 3;
    emxEnsureCapacity_real_T(sp, EvS1_yaw, n, &ke_emlrtRTEI);
    ZBlNode_Y_data = EvS1_yaw->data;
    n = (c_n / 2) << 1;
    b_n = n - 2;
    for (b_it = 0; b_it <= b_n; b_it += 2) {
      r = _mm_loadu_pd(&ZBlNode_Y_data[b_it]);
      r1 = _mm_loadu_pd(&r9[b_it]);
      _mm_storeu_pd(&ZBlNode_Y_data[b_it], _mm_add_pd(r, r1));
    }

    for (b_it = n; b_it < c_n; b_it++) {
      ZBlNode_Y_data[b_it] += r9[b_it];
    }
  } else {
    st.site = &sc_emlrtRSI;
    f_plus(&st, EvS1_yaw, loop_ub_tmp);
  }

  st.site = &tc_emlrtRSI;
  repmat(&st, EwL_GeAz, Bld->nb, r6);
  emxInit_real_T(sp, &EvS1_GeAz, 3, &ri_emlrtRTEI);
  st.site = &tc_emlrtRSI;
  cross(&st, r6, rQS1, EvS1_GeAz);
  st.site = &uc_emlrtRSI;
  repmat(&st, EwL_GeAz, Bld->nb, r6);
  emxInit_real_T(sp, &EvS1_DrTr, 3, &si_emlrtRTEI);
  st.site = &uc_emlrtRSI;
  cross(&st, r6, rQS1, EvS1_DrTr);
  I_pr_app = q_Nom[15];
  I_yaw_app = q_Nom[14];
  rZT_3 = I_G[0];
  rQS1_2 = I_G[1];
  FRotor_R_idx_0 = I_G[2];
  FRotor_R_idx_1 = I_G[3];
  FRotor_R_idx_2 = I_G[4];
  b = I_G[5];
  b_b = I_G[6];
  v_c_tip_Z = I_G[7];
  ak_tip_Z = I_G[8];
  for (it = 0; it < 19; it++) {
    g_proj_X = (HvS1_3_tmp[it] + Bld->s12_B1[it] * I_pr_app) + Bld->s13_B1[it] *
      I_yaw_app;
    HvS1_3_tmp[it] = g_proj_X;
    g_proj_Y = Bld->O1_B1[it];
    EvS1_B1F1[3 * it] = g_proj_Y * rZT_3;
    g_proj_Z = Bld->W1_B1[it];
    EvS1[3 * it] = g_proj_Z * rQS1_2;
    EvS3[3 * it] = g_proj_X * FRotor_R_idx_0;
    n = 3 * it + 1;
    EvS1_B1F1[n] = g_proj_Y * FRotor_R_idx_1;
    EvS1[n] = g_proj_Z * FRotor_R_idx_2;
    EvS3[n] = g_proj_X * b;
    n = 3 * it + 2;
    EvS1_B1F1[n] = g_proj_Y * b_b;
    EvS1[n] = g_proj_Z * v_c_tip_Z;
    EvS3[n] = g_proj_X * ak_tip_Z;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }

  for (it = 0; it <= 54; it += 2) {
    r = _mm_loadu_pd(&EvS1_B1F1[it]);
    r1 = _mm_loadu_pd(&EvS1[it]);
    r2 = _mm_loadu_pd(&EvS3[it]);
    _mm_storeu_pd(&EvS1_B1F1[it], _mm_sub_pd(_mm_add_pd(r, r1), r2));
  }

  EvS1_B1F1[56] = (EvS1_B1F1[56] + EvS1[56]) - EvS3[56];
  I_yaw_app = q_Nom[13];
  for (it = 0; it < 19; it++) {
    g_proj_X = (b_HvS1_3_tmp[it] + Bld->s23_B1[it] * I_pr_app) + Bld->s13_B1[it]
      * I_yaw_app;
    b_HvS1_3_tmp[it] = g_proj_X;
    g_proj_Y = Bld->O3_B1[it];
    EvS1_B1E1[3 * it] = g_proj_Y * rZT_3;
    g_proj_Z = Bld->W3_B1[it];
    EvS1[3 * it] = g_proj_Z * rQS1_2;
    EvS3[3 * it] = g_proj_X * FRotor_R_idx_0;
    n = 3 * it + 1;
    EvS1_B1E1[n] = g_proj_Y * FRotor_R_idx_1;
    EvS1[n] = g_proj_Z * FRotor_R_idx_2;
    EvS3[n] = g_proj_X * b;
    n = 3 * it + 2;
    EvS1_B1E1[n] = g_proj_Y * b_b;
    EvS1[n] = g_proj_Z * v_c_tip_Z;
    EvS3[n] = g_proj_X * ak_tip_Z;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }

  for (it = 0; it <= 54; it += 2) {
    r = _mm_loadu_pd(&EvS1_B1E1[it]);
    r1 = _mm_loadu_pd(&EvS1[it]);
    r2 = _mm_loadu_pd(&EvS3[it]);
    _mm_storeu_pd(&EvS1_B1E1[it], _mm_sub_pd(_mm_add_pd(r, r1), r2));
  }

  EvS1_B1E1[56] = (EvS1_B1E1[56] + EvS1[56]) - EvS3[56];
  I_pr_app = q_Nom[13];
  I_yaw_app = q_Nom[14];
  for (it = 0; it < 19; it++) {
    g_proj_X = (c_HvS1_3_tmp[it] + Bld->s12_B1[it] * I_pr_app) + Bld->s23_B1[it]
      * I_yaw_app;
    c_HvS1_3_tmp[it] = g_proj_X;
    g_proj_Y = Bld->O2_B1[it];
    EvS1_B1F2[3 * it] = g_proj_Y * rZT_3;
    g_proj_Z = Bld->W2_B1[it];
    EvS1[3 * it] = g_proj_Z * rQS1_2;
    EvS3[3 * it] = g_proj_X * FRotor_R_idx_0;
    n = 3 * it + 1;
    EvS1_B1F2[n] = g_proj_Y * FRotor_R_idx_1;
    EvS1[n] = g_proj_Z * FRotor_R_idx_2;
    EvS3[n] = g_proj_X * b;
    n = 3 * it + 2;
    EvS1_B1F2[n] = g_proj_Y * b_b;
    EvS1[n] = g_proj_Z * v_c_tip_Z;
    EvS3[n] = g_proj_X * ak_tip_Z;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }

  for (it = 0; it <= 54; it += 2) {
    r = _mm_loadu_pd(&EvS1_B1F2[it]);
    r1 = _mm_loadu_pd(&EvS1[it]);
    r2 = _mm_loadu_pd(&EvS3[it]);
    _mm_storeu_pd(&EvS1_B1F2[it], _mm_sub_pd(_mm_add_pd(r, r1), r2));
  }

  EvS1_B1F2[56] = (EvS1_B1F2[56] + EvS1[56]) - EvS3[56];

  /*  Blade 2 */
  emxInit_real_T(sp, &EvS2_Sg, 3, &ti_emlrtRTEI);
  st.site = &vc_emlrtRSI;
  g_repmat(&st, Bld->nb, EvS2_Sg);
  emxInit_real_T(sp, &EvS2_Sw, 3, &ui_emlrtRTEI);
  st.site = &wc_emlrtRSI;
  h_repmat(&st, Bld->nb, EvS2_Sw);
  emxInit_real_T(sp, &EvS2_Hv, 3, &vi_emlrtRTEI);
  st.site = &xc_emlrtRSI;
  b_repmat(&st, Bld->nb, EvS2_Hv);
  emxInit_real_T(sp, &EvS2_R, 3, &le_emlrtRTEI);
  st.site = &yc_emlrtRSI;
  repmat(&st, EvZ, Bld->nb, EvS2_R);
  st.site = &yc_emlrtRSI;
  g_repmat(&st, Bld->nb, r6);
  st.site = &yc_emlrtRSI;
  cross(&st, r6, rQS2, loop_ub_tmp);
  r9 = loop_ub_tmp->data;
  if ((EvS2_R->size[2] != loop_ub_tmp->size[2]) && ((EvS2_R->size[2] != 1) &&
       (loop_ub_tmp->size[2] != 1))) {
    emlrtDimSizeImpxCheckR2021b(EvS2_R->size[2], loop_ub_tmp->size[2],
      &tc_emlrtECI, (emlrtConstCTX)sp);
  }

  if (EvS2_R->size[2] == loop_ub_tmp->size[2]) {
    c_n = 3 * EvS2_R->size[2];
    n = EvS2_R->size[0] * EvS2_R->size[1] * EvS2_R->size[2];
    EvS2_R->size[0] = 1;
    EvS2_R->size[1] = 3;
    emxEnsureCapacity_real_T(sp, EvS2_R, n, &le_emlrtRTEI);
    ZBlNode_Y_data = EvS2_R->data;
    n = (c_n / 2) << 1;
    b_n = n - 2;
    for (b_it = 0; b_it <= b_n; b_it += 2) {
      r = _mm_loadu_pd(&ZBlNode_Y_data[b_it]);
      r1 = _mm_loadu_pd(&r9[b_it]);
      _mm_storeu_pd(&ZBlNode_Y_data[b_it], _mm_add_pd(r, r1));
    }

    for (b_it = n; b_it < c_n; b_it++) {
      ZBlNode_Y_data[b_it] += r9[b_it];
    }
  } else {
    st.site = &yc_emlrtRSI;
    f_plus(&st, EvS2_R, loop_ub_tmp);
  }

  emxInit_real_T(sp, &EvS2_P, 3, &me_emlrtRTEI);
  st.site = &ad_emlrtRSI;
  repmat(&st, EvQ, Bld->nb, EvS2_P);
  st.site = &ad_emlrtRSI;
  h_repmat(&st, Bld->nb, r6);
  st.site = &ad_emlrtRSI;
  cross(&st, r6, rQS2, loop_ub_tmp);
  r9 = loop_ub_tmp->data;
  if ((EvS2_P->size[2] != loop_ub_tmp->size[2]) && ((EvS2_P->size[2] != 1) &&
       (loop_ub_tmp->size[2] != 1))) {
    emlrtDimSizeImpxCheckR2021b(EvS2_P->size[2], loop_ub_tmp->size[2],
      &uc_emlrtECI, (emlrtConstCTX)sp);
  }

  if (EvS2_P->size[2] == loop_ub_tmp->size[2]) {
    c_n = 3 * EvS2_P->size[2];
    n = EvS2_P->size[0] * EvS2_P->size[1] * EvS2_P->size[2];
    EvS2_P->size[0] = 1;
    EvS2_P->size[1] = 3;
    emxEnsureCapacity_real_T(sp, EvS2_P, n, &me_emlrtRTEI);
    ZBlNode_Y_data = EvS2_P->data;
    n = (c_n / 2) << 1;
    b_n = n - 2;
    for (b_it = 0; b_it <= b_n; b_it += 2) {
      r = _mm_loadu_pd(&ZBlNode_Y_data[b_it]);
      r1 = _mm_loadu_pd(&r9[b_it]);
      _mm_storeu_pd(&ZBlNode_Y_data[b_it], _mm_add_pd(r, r1));
    }

    for (b_it = n; b_it < c_n; b_it++) {
      ZBlNode_Y_data[b_it] += r9[b_it];
    }
  } else {
    st.site = &ad_emlrtRSI;
    f_plus(&st, EvS2_P, loop_ub_tmp);
  }

  emxInit_real_T(sp, &EvS2_Y, 3, &ne_emlrtRTEI);
  st.site = &bd_emlrtRSI;
  repmat(&st, EvQ_Y, Bld->nb, EvS2_Y);
  st.site = &bd_emlrtRSI;
  b_repmat(&st, Bld->nb, r6);
  st.site = &bd_emlrtRSI;
  cross(&st, r6, rQS2, loop_ub_tmp);
  r9 = loop_ub_tmp->data;
  if ((EvS2_Y->size[2] != loop_ub_tmp->size[2]) && ((EvS2_Y->size[2] != 1) &&
       (loop_ub_tmp->size[2] != 1))) {
    emlrtDimSizeImpxCheckR2021b(EvS2_Y->size[2], loop_ub_tmp->size[2],
      &vc_emlrtECI, (emlrtConstCTX)sp);
  }

  if (EvS2_Y->size[2] == loop_ub_tmp->size[2]) {
    c_n = 3 * EvS2_Y->size[2];
    n = EvS2_Y->size[0] * EvS2_Y->size[1] * EvS2_Y->size[2];
    EvS2_Y->size[0] = 1;
    EvS2_Y->size[1] = 3;
    emxEnsureCapacity_real_T(sp, EvS2_Y, n, &ne_emlrtRTEI);
    ZBlNode_Y_data = EvS2_Y->data;
    n = (c_n / 2) << 1;
    b_n = n - 2;
    for (b_it = 0; b_it <= b_n; b_it += 2) {
      r = _mm_loadu_pd(&ZBlNode_Y_data[b_it]);
      r1 = _mm_loadu_pd(&r9[b_it]);
      _mm_storeu_pd(&ZBlNode_Y_data[b_it], _mm_add_pd(r, r1));
    }

    for (b_it = n; b_it < c_n; b_it++) {
      ZBlNode_Y_data[b_it] += r9[b_it];
    }
  } else {
    st.site = &bd_emlrtRSI;
    f_plus(&st, EvS2_Y, loop_ub_tmp);
  }

  emxInit_real_T(sp, &EvS2_TFA1, 3, &oe_emlrtRTEI);
  st.site = &cd_emlrtRSI;
  repmat(&st, EvQ_TFA1, Bld->nb, EvS2_TFA1);
  st.site = &cd_emlrtRSI;
  repmat(&st, EwB_TFA1, Bld->nb, r6);
  st.site = &cd_emlrtRSI;
  cross(&st, r6, rQS2, loop_ub_tmp);
  r9 = loop_ub_tmp->data;
  if ((EvS2_TFA1->size[2] != loop_ub_tmp->size[2]) && ((EvS2_TFA1->size[2] != 1)
       && (loop_ub_tmp->size[2] != 1))) {
    emlrtDimSizeImpxCheckR2021b(EvS2_TFA1->size[2], loop_ub_tmp->size[2],
      &wc_emlrtECI, (emlrtConstCTX)sp);
  }

  if (EvS2_TFA1->size[2] == loop_ub_tmp->size[2]) {
    c_n = 3 * EvS2_TFA1->size[2];
    n = EvS2_TFA1->size[0] * EvS2_TFA1->size[1] * EvS2_TFA1->size[2];
    EvS2_TFA1->size[0] = 1;
    EvS2_TFA1->size[1] = 3;
    emxEnsureCapacity_real_T(sp, EvS2_TFA1, n, &oe_emlrtRTEI);
    ZBlNode_Y_data = EvS2_TFA1->data;
    n = (c_n / 2) << 1;
    b_n = n - 2;
    for (b_it = 0; b_it <= b_n; b_it += 2) {
      r = _mm_loadu_pd(&ZBlNode_Y_data[b_it]);
      r1 = _mm_loadu_pd(&r9[b_it]);
      _mm_storeu_pd(&ZBlNode_Y_data[b_it], _mm_add_pd(r, r1));
    }

    for (b_it = n; b_it < c_n; b_it++) {
      ZBlNode_Y_data[b_it] += r9[b_it];
    }
  } else {
    st.site = &cd_emlrtRSI;
    f_plus(&st, EvS2_TFA1, loop_ub_tmp);
  }

  emxInit_real_T(sp, &EvS2_TSS1, 3, &pe_emlrtRTEI);
  st.site = &dd_emlrtRSI;
  repmat(&st, EvQ_TSS1, Bld->nb, EvS2_TSS1);
  st.site = &dd_emlrtRSI;
  repmat(&st, EwB_TSS1, Bld->nb, r6);
  st.site = &dd_emlrtRSI;
  cross(&st, r6, rQS2, loop_ub_tmp);
  r9 = loop_ub_tmp->data;
  if ((EvS2_TSS1->size[2] != loop_ub_tmp->size[2]) && ((EvS2_TSS1->size[2] != 1)
       && (loop_ub_tmp->size[2] != 1))) {
    emlrtDimSizeImpxCheckR2021b(EvS2_TSS1->size[2], loop_ub_tmp->size[2],
      &xc_emlrtECI, (emlrtConstCTX)sp);
  }

  if (EvS2_TSS1->size[2] == loop_ub_tmp->size[2]) {
    c_n = 3 * EvS2_TSS1->size[2];
    n = EvS2_TSS1->size[0] * EvS2_TSS1->size[1] * EvS2_TSS1->size[2];
    EvS2_TSS1->size[0] = 1;
    EvS2_TSS1->size[1] = 3;
    emxEnsureCapacity_real_T(sp, EvS2_TSS1, n, &pe_emlrtRTEI);
    ZBlNode_Y_data = EvS2_TSS1->data;
    n = (c_n / 2) << 1;
    b_n = n - 2;
    for (b_it = 0; b_it <= b_n; b_it += 2) {
      r = _mm_loadu_pd(&ZBlNode_Y_data[b_it]);
      r1 = _mm_loadu_pd(&r9[b_it]);
      _mm_storeu_pd(&ZBlNode_Y_data[b_it], _mm_add_pd(r, r1));
    }

    for (b_it = n; b_it < c_n; b_it++) {
      ZBlNode_Y_data[b_it] += r9[b_it];
    }
  } else {
    st.site = &dd_emlrtRSI;
    f_plus(&st, EvS2_TSS1, loop_ub_tmp);
  }

  emxInit_real_T(sp, &EvS2_TFA2, 3, &qe_emlrtRTEI);
  st.site = &ed_emlrtRSI;
  repmat(&st, EvQ_TFA2, Bld->nb, EvS2_TFA2);
  st.site = &ed_emlrtRSI;
  repmat(&st, EwB_TFA2, Bld->nb, r6);
  st.site = &ed_emlrtRSI;
  cross(&st, r6, rQS2, loop_ub_tmp);
  r9 = loop_ub_tmp->data;
  if ((EvS2_TFA2->size[2] != loop_ub_tmp->size[2]) && ((EvS2_TFA2->size[2] != 1)
       && (loop_ub_tmp->size[2] != 1))) {
    emlrtDimSizeImpxCheckR2021b(EvS2_TFA2->size[2], loop_ub_tmp->size[2],
      &yc_emlrtECI, (emlrtConstCTX)sp);
  }

  if (EvS2_TFA2->size[2] == loop_ub_tmp->size[2]) {
    c_n = 3 * EvS2_TFA2->size[2];
    n = EvS2_TFA2->size[0] * EvS2_TFA2->size[1] * EvS2_TFA2->size[2];
    EvS2_TFA2->size[0] = 1;
    EvS2_TFA2->size[1] = 3;
    emxEnsureCapacity_real_T(sp, EvS2_TFA2, n, &qe_emlrtRTEI);
    ZBlNode_Y_data = EvS2_TFA2->data;
    n = (c_n / 2) << 1;
    b_n = n - 2;
    for (b_it = 0; b_it <= b_n; b_it += 2) {
      r = _mm_loadu_pd(&ZBlNode_Y_data[b_it]);
      r1 = _mm_loadu_pd(&r9[b_it]);
      _mm_storeu_pd(&ZBlNode_Y_data[b_it], _mm_add_pd(r, r1));
    }

    for (b_it = n; b_it < c_n; b_it++) {
      ZBlNode_Y_data[b_it] += r9[b_it];
    }
  } else {
    st.site = &ed_emlrtRSI;
    f_plus(&st, EvS2_TFA2, loop_ub_tmp);
  }

  emxInit_real_T(sp, &EvS2_TSS2, 3, &re_emlrtRTEI);
  st.site = &fd_emlrtRSI;
  repmat(&st, EvQ_TSS2, Bld->nb, EvS2_TSS2);
  st.site = &fd_emlrtRSI;
  repmat(&st, EwB_TSS2, Bld->nb, r6);
  st.site = &fd_emlrtRSI;
  cross(&st, r6, rQS2, loop_ub_tmp);
  r9 = loop_ub_tmp->data;
  if ((EvS2_TSS2->size[2] != loop_ub_tmp->size[2]) && ((EvS2_TSS2->size[2] != 1)
       && (loop_ub_tmp->size[2] != 1))) {
    emlrtDimSizeImpxCheckR2021b(EvS2_TSS2->size[2], loop_ub_tmp->size[2],
      &ad_emlrtECI, (emlrtConstCTX)sp);
  }

  if (EvS2_TSS2->size[2] == loop_ub_tmp->size[2]) {
    c_n = 3 * EvS2_TSS2->size[2];
    n = EvS2_TSS2->size[0] * EvS2_TSS2->size[1] * EvS2_TSS2->size[2];
    EvS2_TSS2->size[0] = 1;
    EvS2_TSS2->size[1] = 3;
    emxEnsureCapacity_real_T(sp, EvS2_TSS2, n, &re_emlrtRTEI);
    ZBlNode_Y_data = EvS2_TSS2->data;
    n = (c_n / 2) << 1;
    b_n = n - 2;
    for (b_it = 0; b_it <= b_n; b_it += 2) {
      r = _mm_loadu_pd(&ZBlNode_Y_data[b_it]);
      r1 = _mm_loadu_pd(&r9[b_it]);
      _mm_storeu_pd(&ZBlNode_Y_data[b_it], _mm_add_pd(r, r1));
    }

    for (b_it = n; b_it < c_n; b_it++) {
      ZBlNode_Y_data[b_it] += r9[b_it];
    }
  } else {
    st.site = &fd_emlrtRSI;
    f_plus(&st, EvS2_TSS2, loop_ub_tmp);
  }

  emxInit_real_T(sp, &EvS2_yaw, 3, &se_emlrtRTEI);
  st.site = &gd_emlrtRSI;
  repmat(&st, EvQ_yaw, Bld->nb, EvS2_yaw);
  st.site = &gd_emlrtRSI;
  repmat(&st, EwL_yaw, Bld->nb, r6);
  st.site = &gd_emlrtRSI;
  cross(&st, r6, rQS2, loop_ub_tmp);
  r9 = loop_ub_tmp->data;
  if ((EvS2_yaw->size[2] != loop_ub_tmp->size[2]) && ((EvS2_yaw->size[2] != 1) &&
       (loop_ub_tmp->size[2] != 1))) {
    emlrtDimSizeImpxCheckR2021b(EvS2_yaw->size[2], loop_ub_tmp->size[2],
      &bd_emlrtECI, (emlrtConstCTX)sp);
  }

  if (EvS2_yaw->size[2] == loop_ub_tmp->size[2]) {
    c_n = 3 * EvS2_yaw->size[2];
    n = EvS2_yaw->size[0] * EvS2_yaw->size[1] * EvS2_yaw->size[2];
    EvS2_yaw->size[0] = 1;
    EvS2_yaw->size[1] = 3;
    emxEnsureCapacity_real_T(sp, EvS2_yaw, n, &se_emlrtRTEI);
    ZBlNode_Y_data = EvS2_yaw->data;
    n = (c_n / 2) << 1;
    b_n = n - 2;
    for (b_it = 0; b_it <= b_n; b_it += 2) {
      r = _mm_loadu_pd(&ZBlNode_Y_data[b_it]);
      r1 = _mm_loadu_pd(&r9[b_it]);
      _mm_storeu_pd(&ZBlNode_Y_data[b_it], _mm_add_pd(r, r1));
    }

    for (b_it = n; b_it < c_n; b_it++) {
      ZBlNode_Y_data[b_it] += r9[b_it];
    }
  } else {
    st.site = &gd_emlrtRSI;
    f_plus(&st, EvS2_yaw, loop_ub_tmp);
  }

  st.site = &hd_emlrtRSI;
  repmat(&st, EwL_GeAz, Bld->nb, r6);
  emxInit_real_T(sp, &EvS2_GeAz, 3, &wi_emlrtRTEI);
  st.site = &hd_emlrtRSI;
  cross(&st, r6, rQS2, EvS2_GeAz);
  st.site = &id_emlrtRSI;
  repmat(&st, EwL_GeAz, Bld->nb, r6);
  emxInit_real_T(sp, &EvS2_DrTr, 3, &xi_emlrtRTEI);
  st.site = &id_emlrtRSI;
  cross(&st, r6, rQS2, EvS2_DrTr);
  I_pr_app = q_Nom[18];
  I_yaw_app = q_Nom[17];
  rZT_3 = I_N[0];
  rQS1_2 = I_N[1];
  FRotor_R_idx_0 = I_N[2];
  FRotor_R_idx_1 = I_N[3];
  FRotor_R_idx_2 = I_N[4];
  b = I_N[5];
  b_b = I_N[6];
  v_c_tip_Z = I_N[7];
  ak_tip_Z = I_N[8];
  for (it = 0; it < 19; it++) {
    g_proj_X = (HvS2_3_tmp[it] + Bld->s12_B1[it] * I_pr_app) + Bld->s13_B1[it] *
      I_yaw_app;
    HvS2_3_tmp[it] = g_proj_X;
    g_proj_Y = Bld->O1_B1[it];
    EvS2_B2F1[3 * it] = g_proj_Y * rZT_3;
    g_proj_Z = Bld->W1_B1[it];
    EvS1[3 * it] = g_proj_Z * rQS1_2;
    EvS3[3 * it] = g_proj_X * FRotor_R_idx_0;
    n = 3 * it + 1;
    EvS2_B2F1[n] = g_proj_Y * FRotor_R_idx_1;
    EvS1[n] = g_proj_Z * FRotor_R_idx_2;
    EvS3[n] = g_proj_X * b;
    n = 3 * it + 2;
    EvS2_B2F1[n] = g_proj_Y * b_b;
    EvS1[n] = g_proj_Z * v_c_tip_Z;
    EvS3[n] = g_proj_X * ak_tip_Z;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }

  for (it = 0; it <= 54; it += 2) {
    r = _mm_loadu_pd(&EvS2_B2F1[it]);
    r1 = _mm_loadu_pd(&EvS1[it]);
    r2 = _mm_loadu_pd(&EvS3[it]);
    _mm_storeu_pd(&EvS2_B2F1[it], _mm_sub_pd(_mm_add_pd(r, r1), r2));
  }

  EvS2_B2F1[56] = (EvS2_B2F1[56] + EvS1[56]) - EvS3[56];
  I_yaw_app = q_Nom[16];
  for (it = 0; it < 19; it++) {
    g_proj_X = (b_HvS2_3_tmp[it] + Bld->s23_B1[it] * I_pr_app) + Bld->s13_B1[it]
      * I_yaw_app;
    b_HvS2_3_tmp[it] = g_proj_X;
    g_proj_Y = Bld->O3_B1[it];
    EvS2_B2E1[3 * it] = g_proj_Y * rZT_3;
    g_proj_Z = Bld->W3_B1[it];
    EvS1[3 * it] = g_proj_Z * rQS1_2;
    EvS3[3 * it] = g_proj_X * FRotor_R_idx_0;
    n = 3 * it + 1;
    EvS2_B2E1[n] = g_proj_Y * FRotor_R_idx_1;
    EvS1[n] = g_proj_Z * FRotor_R_idx_2;
    EvS3[n] = g_proj_X * b;
    n = 3 * it + 2;
    EvS2_B2E1[n] = g_proj_Y * b_b;
    EvS1[n] = g_proj_Z * v_c_tip_Z;
    EvS3[n] = g_proj_X * ak_tip_Z;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }

  for (it = 0; it <= 54; it += 2) {
    r = _mm_loadu_pd(&EvS2_B2E1[it]);
    r1 = _mm_loadu_pd(&EvS1[it]);
    r2 = _mm_loadu_pd(&EvS3[it]);
    _mm_storeu_pd(&EvS2_B2E1[it], _mm_sub_pd(_mm_add_pd(r, r1), r2));
  }

  EvS2_B2E1[56] = (EvS2_B2E1[56] + EvS1[56]) - EvS3[56];
  I_pr_app = q_Nom[16];
  I_yaw_app = q_Nom[17];
  for (it = 0; it < 19; it++) {
    g_proj_X = (c_HvS2_3_tmp[it] + Bld->s12_B1[it] * I_pr_app) + Bld->s23_B1[it]
      * I_yaw_app;
    c_HvS2_3_tmp[it] = g_proj_X;
    g_proj_Y = Bld->O2_B1[it];
    EvS2_B2F2[3 * it] = g_proj_Y * rZT_3;
    g_proj_Z = Bld->W2_B1[it];
    EvS1[3 * it] = g_proj_Z * rQS1_2;
    EvS3[3 * it] = g_proj_X * FRotor_R_idx_0;
    n = 3 * it + 1;
    EvS2_B2F2[n] = g_proj_Y * FRotor_R_idx_1;
    EvS1[n] = g_proj_Z * FRotor_R_idx_2;
    EvS3[n] = g_proj_X * b;
    n = 3 * it + 2;
    EvS2_B2F2[n] = g_proj_Y * b_b;
    EvS1[n] = g_proj_Z * v_c_tip_Z;
    EvS3[n] = g_proj_X * ak_tip_Z;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }

  for (it = 0; it <= 54; it += 2) {
    r = _mm_loadu_pd(&EvS2_B2F2[it]);
    r1 = _mm_loadu_pd(&EvS1[it]);
    r2 = _mm_loadu_pd(&EvS3[it]);
    _mm_storeu_pd(&EvS2_B2F2[it], _mm_sub_pd(_mm_add_pd(r, r1), r2));
  }

  EvS2_B2F2[56] = (EvS2_B2F2[56] + EvS1[56]) - EvS3[56];

  /*  Blade 3 */
  emxInit_real_T(sp, &EvS3_Sg, 3, &yi_emlrtRTEI);
  st.site = &jd_emlrtRSI;
  g_repmat(&st, Bld->nb, EvS3_Sg);
  emxInit_real_T(sp, &EvS3_Sw, 3, &aj_emlrtRTEI);
  st.site = &kd_emlrtRSI;
  h_repmat(&st, Bld->nb, EvS3_Sw);
  emxInit_real_T(sp, &EvS3_Hv, 3, &bj_emlrtRTEI);
  st.site = &ld_emlrtRSI;
  b_repmat(&st, Bld->nb, EvS3_Hv);
  emxInit_real_T(sp, &EvS3_R, 3, &te_emlrtRTEI);
  st.site = &md_emlrtRSI;
  repmat(&st, EvZ, Bld->nb, EvS3_R);
  st.site = &md_emlrtRSI;
  g_repmat(&st, Bld->nb, r6);
  st.site = &md_emlrtRSI;
  cross(&st, r6, rQS3, loop_ub_tmp);
  r9 = loop_ub_tmp->data;
  if ((EvS3_R->size[2] != loop_ub_tmp->size[2]) && ((EvS3_R->size[2] != 1) &&
       (loop_ub_tmp->size[2] != 1))) {
    emlrtDimSizeImpxCheckR2021b(EvS3_R->size[2], loop_ub_tmp->size[2],
      &cd_emlrtECI, (emlrtConstCTX)sp);
  }

  if (EvS3_R->size[2] == loop_ub_tmp->size[2]) {
    c_n = 3 * EvS3_R->size[2];
    n = EvS3_R->size[0] * EvS3_R->size[1] * EvS3_R->size[2];
    EvS3_R->size[0] = 1;
    EvS3_R->size[1] = 3;
    emxEnsureCapacity_real_T(sp, EvS3_R, n, &te_emlrtRTEI);
    ZBlNode_Y_data = EvS3_R->data;
    n = (c_n / 2) << 1;
    b_n = n - 2;
    for (b_it = 0; b_it <= b_n; b_it += 2) {
      r = _mm_loadu_pd(&ZBlNode_Y_data[b_it]);
      r1 = _mm_loadu_pd(&r9[b_it]);
      _mm_storeu_pd(&ZBlNode_Y_data[b_it], _mm_add_pd(r, r1));
    }

    for (b_it = n; b_it < c_n; b_it++) {
      ZBlNode_Y_data[b_it] += r9[b_it];
    }
  } else {
    st.site = &md_emlrtRSI;
    f_plus(&st, EvS3_R, loop_ub_tmp);
  }

  emxInit_real_T(sp, &EvS3_P, 3, &ue_emlrtRTEI);
  st.site = &nd_emlrtRSI;
  repmat(&st, EvQ, Bld->nb, EvS3_P);
  st.site = &nd_emlrtRSI;
  h_repmat(&st, Bld->nb, r6);
  st.site = &nd_emlrtRSI;
  cross(&st, r6, rQS3, loop_ub_tmp);
  r9 = loop_ub_tmp->data;
  if ((EvS3_P->size[2] != loop_ub_tmp->size[2]) && ((EvS3_P->size[2] != 1) &&
       (loop_ub_tmp->size[2] != 1))) {
    emlrtDimSizeImpxCheckR2021b(EvS3_P->size[2], loop_ub_tmp->size[2],
      &dd_emlrtECI, (emlrtConstCTX)sp);
  }

  if (EvS3_P->size[2] == loop_ub_tmp->size[2]) {
    c_n = 3 * EvS3_P->size[2];
    n = EvS3_P->size[0] * EvS3_P->size[1] * EvS3_P->size[2];
    EvS3_P->size[0] = 1;
    EvS3_P->size[1] = 3;
    emxEnsureCapacity_real_T(sp, EvS3_P, n, &ue_emlrtRTEI);
    ZBlNode_Y_data = EvS3_P->data;
    n = (c_n / 2) << 1;
    b_n = n - 2;
    for (b_it = 0; b_it <= b_n; b_it += 2) {
      r = _mm_loadu_pd(&ZBlNode_Y_data[b_it]);
      r1 = _mm_loadu_pd(&r9[b_it]);
      _mm_storeu_pd(&ZBlNode_Y_data[b_it], _mm_add_pd(r, r1));
    }

    for (b_it = n; b_it < c_n; b_it++) {
      ZBlNode_Y_data[b_it] += r9[b_it];
    }
  } else {
    st.site = &nd_emlrtRSI;
    f_plus(&st, EvS3_P, loop_ub_tmp);
  }

  emxInit_real_T(sp, &EvS3_Y, 3, &ve_emlrtRTEI);
  st.site = &od_emlrtRSI;
  repmat(&st, EvQ_Y, Bld->nb, EvS3_Y);
  st.site = &od_emlrtRSI;
  b_repmat(&st, Bld->nb, r6);
  st.site = &od_emlrtRSI;
  cross(&st, r6, rQS3, loop_ub_tmp);
  r9 = loop_ub_tmp->data;
  if ((EvS3_Y->size[2] != loop_ub_tmp->size[2]) && ((EvS3_Y->size[2] != 1) &&
       (loop_ub_tmp->size[2] != 1))) {
    emlrtDimSizeImpxCheckR2021b(EvS3_Y->size[2], loop_ub_tmp->size[2],
      &ed_emlrtECI, (emlrtConstCTX)sp);
  }

  if (EvS3_Y->size[2] == loop_ub_tmp->size[2]) {
    c_n = 3 * EvS3_Y->size[2];
    n = EvS3_Y->size[0] * EvS3_Y->size[1] * EvS3_Y->size[2];
    EvS3_Y->size[0] = 1;
    EvS3_Y->size[1] = 3;
    emxEnsureCapacity_real_T(sp, EvS3_Y, n, &ve_emlrtRTEI);
    ZBlNode_Y_data = EvS3_Y->data;
    n = (c_n / 2) << 1;
    b_n = n - 2;
    for (b_it = 0; b_it <= b_n; b_it += 2) {
      r = _mm_loadu_pd(&ZBlNode_Y_data[b_it]);
      r1 = _mm_loadu_pd(&r9[b_it]);
      _mm_storeu_pd(&ZBlNode_Y_data[b_it], _mm_add_pd(r, r1));
    }

    for (b_it = n; b_it < c_n; b_it++) {
      ZBlNode_Y_data[b_it] += r9[b_it];
    }
  } else {
    st.site = &od_emlrtRSI;
    f_plus(&st, EvS3_Y, loop_ub_tmp);
  }

  emxInit_real_T(sp, &EvS3_TFA1, 3, &we_emlrtRTEI);
  st.site = &pd_emlrtRSI;
  repmat(&st, EvQ_TFA1, Bld->nb, EvS3_TFA1);
  st.site = &pd_emlrtRSI;
  repmat(&st, EwB_TFA1, Bld->nb, r6);
  st.site = &pd_emlrtRSI;
  cross(&st, r6, rQS3, loop_ub_tmp);
  r9 = loop_ub_tmp->data;
  if ((EvS3_TFA1->size[2] != loop_ub_tmp->size[2]) && ((EvS3_TFA1->size[2] != 1)
       && (loop_ub_tmp->size[2] != 1))) {
    emlrtDimSizeImpxCheckR2021b(EvS3_TFA1->size[2], loop_ub_tmp->size[2],
      &fd_emlrtECI, (emlrtConstCTX)sp);
  }

  if (EvS3_TFA1->size[2] == loop_ub_tmp->size[2]) {
    c_n = 3 * EvS3_TFA1->size[2];
    n = EvS3_TFA1->size[0] * EvS3_TFA1->size[1] * EvS3_TFA1->size[2];
    EvS3_TFA1->size[0] = 1;
    EvS3_TFA1->size[1] = 3;
    emxEnsureCapacity_real_T(sp, EvS3_TFA1, n, &we_emlrtRTEI);
    ZBlNode_Y_data = EvS3_TFA1->data;
    n = (c_n / 2) << 1;
    b_n = n - 2;
    for (b_it = 0; b_it <= b_n; b_it += 2) {
      r = _mm_loadu_pd(&ZBlNode_Y_data[b_it]);
      r1 = _mm_loadu_pd(&r9[b_it]);
      _mm_storeu_pd(&ZBlNode_Y_data[b_it], _mm_add_pd(r, r1));
    }

    for (b_it = n; b_it < c_n; b_it++) {
      ZBlNode_Y_data[b_it] += r9[b_it];
    }
  } else {
    st.site = &pd_emlrtRSI;
    f_plus(&st, EvS3_TFA1, loop_ub_tmp);
  }

  emxInit_real_T(sp, &EvS3_TSS1, 3, &xe_emlrtRTEI);
  st.site = &qd_emlrtRSI;
  repmat(&st, EvQ_TSS1, Bld->nb, EvS3_TSS1);
  st.site = &qd_emlrtRSI;
  repmat(&st, EwB_TSS1, Bld->nb, r6);
  st.site = &qd_emlrtRSI;
  cross(&st, r6, rQS3, loop_ub_tmp);
  r9 = loop_ub_tmp->data;
  if ((EvS3_TSS1->size[2] != loop_ub_tmp->size[2]) && ((EvS3_TSS1->size[2] != 1)
       && (loop_ub_tmp->size[2] != 1))) {
    emlrtDimSizeImpxCheckR2021b(EvS3_TSS1->size[2], loop_ub_tmp->size[2],
      &gd_emlrtECI, (emlrtConstCTX)sp);
  }

  if (EvS3_TSS1->size[2] == loop_ub_tmp->size[2]) {
    c_n = 3 * EvS3_TSS1->size[2];
    n = EvS3_TSS1->size[0] * EvS3_TSS1->size[1] * EvS3_TSS1->size[2];
    EvS3_TSS1->size[0] = 1;
    EvS3_TSS1->size[1] = 3;
    emxEnsureCapacity_real_T(sp, EvS3_TSS1, n, &xe_emlrtRTEI);
    ZBlNode_Y_data = EvS3_TSS1->data;
    n = (c_n / 2) << 1;
    b_n = n - 2;
    for (b_it = 0; b_it <= b_n; b_it += 2) {
      r = _mm_loadu_pd(&ZBlNode_Y_data[b_it]);
      r1 = _mm_loadu_pd(&r9[b_it]);
      _mm_storeu_pd(&ZBlNode_Y_data[b_it], _mm_add_pd(r, r1));
    }

    for (b_it = n; b_it < c_n; b_it++) {
      ZBlNode_Y_data[b_it] += r9[b_it];
    }
  } else {
    st.site = &qd_emlrtRSI;
    f_plus(&st, EvS3_TSS1, loop_ub_tmp);
  }

  emxInit_real_T(sp, &EvS3_TFA2, 3, &ye_emlrtRTEI);
  st.site = &rd_emlrtRSI;
  repmat(&st, EvQ_TFA2, Bld->nb, EvS3_TFA2);
  st.site = &rd_emlrtRSI;
  repmat(&st, EwB_TFA2, Bld->nb, r6);
  st.site = &rd_emlrtRSI;
  cross(&st, r6, rQS3, loop_ub_tmp);
  r9 = loop_ub_tmp->data;
  if ((EvS3_TFA2->size[2] != loop_ub_tmp->size[2]) && ((EvS3_TFA2->size[2] != 1)
       && (loop_ub_tmp->size[2] != 1))) {
    emlrtDimSizeImpxCheckR2021b(EvS3_TFA2->size[2], loop_ub_tmp->size[2],
      &hd_emlrtECI, (emlrtConstCTX)sp);
  }

  if (EvS3_TFA2->size[2] == loop_ub_tmp->size[2]) {
    c_n = 3 * EvS3_TFA2->size[2];
    n = EvS3_TFA2->size[0] * EvS3_TFA2->size[1] * EvS3_TFA2->size[2];
    EvS3_TFA2->size[0] = 1;
    EvS3_TFA2->size[1] = 3;
    emxEnsureCapacity_real_T(sp, EvS3_TFA2, n, &ye_emlrtRTEI);
    ZBlNode_Y_data = EvS3_TFA2->data;
    n = (c_n / 2) << 1;
    b_n = n - 2;
    for (b_it = 0; b_it <= b_n; b_it += 2) {
      r = _mm_loadu_pd(&ZBlNode_Y_data[b_it]);
      r1 = _mm_loadu_pd(&r9[b_it]);
      _mm_storeu_pd(&ZBlNode_Y_data[b_it], _mm_add_pd(r, r1));
    }

    for (b_it = n; b_it < c_n; b_it++) {
      ZBlNode_Y_data[b_it] += r9[b_it];
    }
  } else {
    st.site = &rd_emlrtRSI;
    f_plus(&st, EvS3_TFA2, loop_ub_tmp);
  }

  emxInit_real_T(sp, &EvS3_TSS2, 3, &af_emlrtRTEI);
  st.site = &sd_emlrtRSI;
  repmat(&st, EvQ_TSS2, Bld->nb, EvS3_TSS2);
  st.site = &sd_emlrtRSI;
  repmat(&st, EwB_TSS2, Bld->nb, r6);
  st.site = &sd_emlrtRSI;
  cross(&st, r6, rQS3, loop_ub_tmp);
  r9 = loop_ub_tmp->data;
  if ((EvS3_TSS2->size[2] != loop_ub_tmp->size[2]) && ((EvS3_TSS2->size[2] != 1)
       && (loop_ub_tmp->size[2] != 1))) {
    emlrtDimSizeImpxCheckR2021b(EvS3_TSS2->size[2], loop_ub_tmp->size[2],
      &id_emlrtECI, (emlrtConstCTX)sp);
  }

  if (EvS3_TSS2->size[2] == loop_ub_tmp->size[2]) {
    c_n = 3 * EvS3_TSS2->size[2];
    n = EvS3_TSS2->size[0] * EvS3_TSS2->size[1] * EvS3_TSS2->size[2];
    EvS3_TSS2->size[0] = 1;
    EvS3_TSS2->size[1] = 3;
    emxEnsureCapacity_real_T(sp, EvS3_TSS2, n, &af_emlrtRTEI);
    ZBlNode_Y_data = EvS3_TSS2->data;
    n = (c_n / 2) << 1;
    b_n = n - 2;
    for (b_it = 0; b_it <= b_n; b_it += 2) {
      r = _mm_loadu_pd(&ZBlNode_Y_data[b_it]);
      r1 = _mm_loadu_pd(&r9[b_it]);
      _mm_storeu_pd(&ZBlNode_Y_data[b_it], _mm_add_pd(r, r1));
    }

    for (b_it = n; b_it < c_n; b_it++) {
      ZBlNode_Y_data[b_it] += r9[b_it];
    }
  } else {
    st.site = &sd_emlrtRSI;
    f_plus(&st, EvS3_TSS2, loop_ub_tmp);
  }

  emxInit_real_T(sp, &EvS3_yaw, 3, &bf_emlrtRTEI);
  st.site = &td_emlrtRSI;
  repmat(&st, EvQ_yaw, Bld->nb, EvS3_yaw);
  st.site = &td_emlrtRSI;
  repmat(&st, EwL_yaw, Bld->nb, r6);
  st.site = &td_emlrtRSI;
  cross(&st, r6, rQS3, loop_ub_tmp);
  r9 = loop_ub_tmp->data;
  if ((EvS3_yaw->size[2] != loop_ub_tmp->size[2]) && ((EvS3_yaw->size[2] != 1) &&
       (loop_ub_tmp->size[2] != 1))) {
    emlrtDimSizeImpxCheckR2021b(EvS3_yaw->size[2], loop_ub_tmp->size[2],
      &jd_emlrtECI, (emlrtConstCTX)sp);
  }

  if (EvS3_yaw->size[2] == loop_ub_tmp->size[2]) {
    c_n = 3 * EvS3_yaw->size[2];
    n = EvS3_yaw->size[0] * EvS3_yaw->size[1] * EvS3_yaw->size[2];
    EvS3_yaw->size[0] = 1;
    EvS3_yaw->size[1] = 3;
    emxEnsureCapacity_real_T(sp, EvS3_yaw, n, &bf_emlrtRTEI);
    ZBlNode_Y_data = EvS3_yaw->data;
    n = (c_n / 2) << 1;
    b_n = n - 2;
    for (b_it = 0; b_it <= b_n; b_it += 2) {
      r = _mm_loadu_pd(&ZBlNode_Y_data[b_it]);
      r1 = _mm_loadu_pd(&r9[b_it]);
      _mm_storeu_pd(&ZBlNode_Y_data[b_it], _mm_add_pd(r, r1));
    }

    for (b_it = n; b_it < c_n; b_it++) {
      ZBlNode_Y_data[b_it] += r9[b_it];
    }
  } else {
    st.site = &td_emlrtRSI;
    f_plus(&st, EvS3_yaw, loop_ub_tmp);
  }

  st.site = &ud_emlrtRSI;
  repmat(&st, EwL_GeAz, Bld->nb, r6);
  emxInit_real_T(sp, &EvS3_GeAz, 3, &cj_emlrtRTEI);
  st.site = &ud_emlrtRSI;
  cross(&st, r6, rQS3, EvS3_GeAz);
  st.site = &vd_emlrtRSI;
  repmat(&st, EwL_GeAz, Bld->nb, r6);
  emxInit_real_T(sp, &EvS3_DrTr, 3, &dj_emlrtRTEI);
  st.site = &vd_emlrtRSI;
  cross(&st, r6, rQS3, EvS3_DrTr);
  I_pr_app = q_Nom[21];
  I_yaw_app = q_Nom[20];
  rZT_3 = I_H[0];
  rQS1_2 = I_H[1];
  FRotor_R_idx_0 = I_H[2];
  FRotor_R_idx_1 = I_H[3];
  FRotor_R_idx_2 = I_H[4];
  b = I_H[5];
  b_b = I_H[6];
  v_c_tip_Z = I_H[7];
  ak_tip_Z = I_H[8];
  for (it = 0; it < 19; it++) {
    g_proj_X = (rQS1_3_tmp[it] + Bld->s12_B1[it] * I_pr_app) + Bld->s13_B1[it] *
      I_yaw_app;
    rQS1_3_tmp[it] = g_proj_X;
    g_proj_Y = Bld->O1_B1[it];
    EvS3_B3F1[3 * it] = g_proj_Y * rZT_3;
    g_proj_Z = Bld->W1_B1[it];
    EvS1[3 * it] = g_proj_Z * rQS1_2;
    EvS3[3 * it] = g_proj_X * FRotor_R_idx_0;
    n = 3 * it + 1;
    EvS3_B3F1[n] = g_proj_Y * FRotor_R_idx_1;
    EvS1[n] = g_proj_Z * FRotor_R_idx_2;
    EvS3[n] = g_proj_X * b;
    n = 3 * it + 2;
    EvS3_B3F1[n] = g_proj_Y * b_b;
    EvS1[n] = g_proj_Z * v_c_tip_Z;
    EvS3[n] = g_proj_X * ak_tip_Z;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }

  for (it = 0; it <= 54; it += 2) {
    r = _mm_loadu_pd(&EvS3_B3F1[it]);
    r1 = _mm_loadu_pd(&EvS1[it]);
    r2 = _mm_loadu_pd(&EvS3[it]);
    _mm_storeu_pd(&EvS3_B3F1[it], _mm_sub_pd(_mm_add_pd(r, r1), r2));
  }

  EvS3_B3F1[56] = (EvS3_B3F1[56] + EvS1[56]) - EvS3[56];
  I_yaw_app = q_Nom[19];
  for (it = 0; it < 19; it++) {
    g_proj_X = (b_rQS1_3_tmp[it] + Bld->s23_B1[it] * I_pr_app) + Bld->s13_B1[it]
      * I_yaw_app;
    b_rQS1_3_tmp[it] = g_proj_X;
    g_proj_Y = Bld->O3_B1[it];
    EvS3_B3E1[3 * it] = g_proj_Y * rZT_3;
    g_proj_Z = Bld->W3_B1[it];
    EvS1[3 * it] = g_proj_Z * rQS1_2;
    EvS3[3 * it] = g_proj_X * FRotor_R_idx_0;
    n = 3 * it + 1;
    EvS3_B3E1[n] = g_proj_Y * FRotor_R_idx_1;
    EvS1[n] = g_proj_Z * FRotor_R_idx_2;
    EvS3[n] = g_proj_X * b;
    n = 3 * it + 2;
    EvS3_B3E1[n] = g_proj_Y * b_b;
    EvS1[n] = g_proj_Z * v_c_tip_Z;
    EvS3[n] = g_proj_X * ak_tip_Z;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }

  for (it = 0; it <= 54; it += 2) {
    r = _mm_loadu_pd(&EvS3_B3E1[it]);
    r1 = _mm_loadu_pd(&EvS1[it]);
    r2 = _mm_loadu_pd(&EvS3[it]);
    _mm_storeu_pd(&EvS3_B3E1[it], _mm_sub_pd(_mm_add_pd(r, r1), r2));
  }

  EvS3_B3E1[56] = (EvS3_B3E1[56] + EvS1[56]) - EvS3[56];
  I_pr_app = q_Nom[19];
  I_yaw_app = q_Nom[20];
  for (it = 0; it < 19; it++) {
    g_proj_X = (rQS3_3[it] + Bld->s12_B1[it] * I_pr_app) + Bld->s23_B1[it] *
      I_yaw_app;
    rQS3_3[it] = g_proj_X;
    g_proj_Y = Bld->O2_B1[it];
    EvS3_B3F2[3 * it] = g_proj_Y * rZT_3;
    g_proj_Z = Bld->W2_B1[it];
    EvS1[3 * it] = g_proj_Z * rQS1_2;
    EvS3[3 * it] = g_proj_X * FRotor_R_idx_0;
    n = 3 * it + 1;
    EvS3_B3F2[n] = g_proj_Y * FRotor_R_idx_1;
    EvS1[n] = g_proj_Z * FRotor_R_idx_2;
    EvS3[n] = g_proj_X * b;
    n = 3 * it + 2;
    EvS3_B3F2[n] = g_proj_Y * b_b;
    EvS1[n] = g_proj_Z * v_c_tip_Z;
    EvS3[n] = g_proj_X * ak_tip_Z;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }

  for (it = 0; it <= 54; it += 2) {
    r = _mm_loadu_pd(&EvS3_B3F2[it]);
    r1 = _mm_loadu_pd(&EvS1[it]);
    r2 = _mm_loadu_pd(&EvS3[it]);
    _mm_storeu_pd(&EvS3_B3F2[it], _mm_sub_pd(_mm_add_pd(r, r1), r2));
  }

  EvS3_B3F2[56] = (EvS3_B3F2[56] + EvS1[56]) - EvS3[56];

  /*  end of Partial Linear Velocities */
  /*  ================== OC4 浮筒偏线速度 ================== */
  /*  --- 梁 1 --- */
  emxInit_real_T(sp, &EvP1_Sg, 3, &ej_emlrtRTEI);
  st.site = &wd_emlrtRSI;
  g_repmat(&st, Platform->nt, EvP1_Sg);
  emxInit_real_T(sp, &EvP1_Sw, 3, &fj_emlrtRTEI);
  st.site = &xd_emlrtRSI;
  h_repmat(&st, Platform->nt, EvP1_Sw);
  emxInit_real_T(sp, &EvP1_Hv, 3, &gj_emlrtRTEI);
  st.site = &yd_emlrtRSI;
  b_repmat(&st, Platform->nt, EvP1_Hv);
  st.site = &ae_emlrtRSI;
  g_repmat(&st, Platform->nt, r6);
  emxInit_real_T(sp, &EvP1_R, 3, &hj_emlrtRTEI);
  st.site = &ae_emlrtRSI;
  b_cross(&st, r6, dXvP2, EvP1_R);
  st.site = &be_emlrtRSI;
  h_repmat(&st, Platform->nt, r6);
  emxInit_real_T(sp, &EvP1_P, 3, &ij_emlrtRTEI);
  st.site = &be_emlrtRSI;
  b_cross(&st, r6, dXvP2, EvP1_P);
  st.site = &ce_emlrtRSI;
  b_repmat(&st, Platform->nt, r6);
  emxInit_real_T(sp, &EvP1_Y, 3, &jj_emlrtRTEI);
  st.site = &ce_emlrtRSI;
  b_cross(&st, r6, dXvP2, EvP1_Y);
  ak_tip_Z = q_Nom[23];
  g_proj_X = q_Nom[22];
  g_proj_Y = q_Nom[25];
  g_proj_Z = q_Nom[24];
  EvZ_tmp = P_BP[0].f1[0];
  v_r_tip_X = P_BP[0].f1[1];
  v_r_tip_Y = P_BP[0].f1[2];
  v_r_tip_Z = P_BP[0].f1[3];
  b_rZT_1 = P_BP[0].f1[4];
  tip_mass_X_tot = P_BP[0].f1[5];
  tip_mass_Z_tot = P_BP[0].f1[6];
  c_rQS1_1 = P_BP[0].f1[7];
  dEvQ_TSS1_tmp = P_BP[0].f1[8];
  for (it = 0; it < 15; it++) {
    I_pr_app = Platform->s12_H[it];
    XvP1_1_tmp = -(XvP2_2[it] + I_pr_app * ak_tip_Z);
    XvP2_2[it] = XvP1_1_tmp;
    b_b = -(b_XvP1_1_tmp[it] + I_pr_app * g_proj_X);
    b_XvP1_1_tmp[it] = b_b;
    I_pr_app = Platform->s12_V[it];
    v_c_tip_Z = -(c_XvP1_1_tmp[it] + I_pr_app * g_proj_Y);
    c_XvP1_1_tmp[it] = v_c_tip_Z;
    I_pr_app = -(d_XvP1_1_tmp[it] + I_pr_app * g_proj_Z);
    d_XvP1_1_tmp[it] = I_pr_app;
    hb_out[3 * it] = XvP1_1_tmp * EvZ_tmp;
    I_yaw_app = Platform->O1_H[it];
    ib_out[3 * it] = I_yaw_app * v_r_tip_X;
    jb_out[3 * it] = b_b * EvZ_tmp;
    rZT_3 = Platform->O2_H[it];
    kb_out[3 * it] = rZT_3 * v_r_tip_X;
    lb_out[3 * it] = v_c_tip_Z * EvZ_tmp;
    rQS1_2 = Platform->O1_V[it];
    mb_out[3 * it] = rQS1_2 * v_r_tip_Y;
    fb_out[3 * it] = I_pr_app * EvZ_tmp;
    b = Platform->O2_V[it];
    gb_out[3 * it] = b * v_r_tip_Y;
    n = 3 * it + 1;
    hb_out[n] = XvP1_1_tmp * v_r_tip_Z;
    ib_out[n] = I_yaw_app * b_rZT_1;
    jb_out[n] = b_b * v_r_tip_Z;
    kb_out[n] = rZT_3 * b_rZT_1;
    lb_out[n] = v_c_tip_Z * v_r_tip_Z;
    mb_out[n] = rQS1_2 * tip_mass_X_tot;
    fb_out[n] = I_pr_app * v_r_tip_Z;
    gb_out[n] = b * tip_mass_X_tot;
    n = 3 * it + 2;
    hb_out[n] = XvP1_1_tmp * tip_mass_Z_tot;
    ib_out[n] = I_yaw_app * c_rQS1_1;
    jb_out[n] = b_b * tip_mass_Z_tot;
    kb_out[n] = rZT_3 * c_rQS1_1;
    lb_out[n] = v_c_tip_Z * tip_mass_Z_tot;
    mb_out[n] = rQS1_2 * dEvQ_TSS1_tmp;
    fb_out[n] = I_pr_app * tip_mass_Z_tot;
    gb_out[n] = b * dEvQ_TSS1_tmp;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }

  /*  端部 */
  d_a_tmp = -(d_rQS1_1 + Platform->S12_H * q_Nom[23]);
  c_a_tmp = -(e_rQS1_1 + Platform->S12_H * q_Nom[22]);
  b_a_tmp = -(e_a_tmp + Platform->S12_V * q_Nom[25]);
  a_tmp = -(f_a_tmp + Platform->S12_V * q_Nom[24]);

  /*  --- 梁 2 --- */
  emxInit_real_T(sp, &EvP2_Sg, 3, &kj_emlrtRTEI);
  st.site = &de_emlrtRSI;
  g_repmat(&st, Platform->nt, EvP2_Sg);
  emxInit_real_T(sp, &EvP2_Sw, 3, &lj_emlrtRTEI);
  st.site = &ee_emlrtRSI;
  h_repmat(&st, Platform->nt, EvP2_Sw);
  emxInit_real_T(sp, &EvP2_Hv, 3, &mj_emlrtRTEI);
  st.site = &fe_emlrtRSI;
  b_repmat(&st, Platform->nt, EvP2_Hv);
  st.site = &ge_emlrtRSI;
  g_repmat(&st, Platform->nt, r6);
  emxInit_real_T(sp, &EvP2_R, 3, &nj_emlrtRTEI);
  st.site = &ge_emlrtRSI;
  b_cross(&st, r6, rP2, EvP2_R);
  st.site = &he_emlrtRSI;
  h_repmat(&st, Platform->nt, r6);
  emxInit_real_T(sp, &EvP2_P, 3, &oj_emlrtRTEI);
  st.site = &he_emlrtRSI;
  b_cross(&st, r6, rP2, EvP2_P);
  st.site = &ie_emlrtRSI;
  b_repmat(&st, Platform->nt, r6);
  emxInit_real_T(sp, &EvP2_Y, 3, &pj_emlrtRTEI);
  st.site = &ie_emlrtRSI;
  b_cross(&st, r6, rP2, EvP2_Y);
  ak_tip_Z = q_Nom[27];
  g_proj_X = q_Nom[26];
  g_proj_Y = q_Nom[29];
  g_proj_Z = q_Nom[28];
  EvZ_tmp = P_BP[1].f1[0];
  v_r_tip_X = P_BP[1].f1[1];
  v_r_tip_Y = P_BP[1].f1[2];
  v_r_tip_Z = P_BP[1].f1[3];
  b_rZT_1 = P_BP[1].f1[4];
  tip_mass_X_tot = P_BP[1].f1[5];
  tip_mass_Z_tot = P_BP[1].f1[6];
  c_rQS1_1 = P_BP[1].f1[7];
  dEvQ_TSS1_tmp = P_BP[1].f1[8];
  for (it = 0; it < 15; it++) {
    I_pr_app = Platform->s12_H[it];
    e_a_tmp = -(XvP2_1_tmp[it] + I_pr_app * ak_tip_Z);
    XvP2_1_tmp[it] = e_a_tmp;
    b_b = -(b_XvP2_1_tmp[it] + I_pr_app * g_proj_X);
    b_XvP2_1_tmp[it] = b_b;
    I_pr_app = Platform->s12_V[it];
    v_c_tip_Z = -(c_XvP2_1_tmp[it] + I_pr_app * g_proj_Y);
    c_XvP2_1_tmp[it] = v_c_tip_Z;
    I_pr_app = -(d_XvP2_1_tmp[it] + I_pr_app * g_proj_Z);
    d_XvP2_1_tmp[it] = I_pr_app;
    pb_out[3 * it] = e_a_tmp * EvZ_tmp;
    I_yaw_app = Platform->O1_H[it];
    qb_out[3 * it] = I_yaw_app * v_r_tip_X;
    rb_out[3 * it] = b_b * EvZ_tmp;
    rZT_3 = Platform->O2_H[it];
    sb_out[3 * it] = rZT_3 * v_r_tip_X;
    tb_out[3 * it] = v_c_tip_Z * EvZ_tmp;
    rQS1_2 = Platform->O1_V[it];
    ub_out[3 * it] = rQS1_2 * v_r_tip_Y;
    nb_out[3 * it] = I_pr_app * EvZ_tmp;
    b = Platform->O2_V[it];
    ob_out[3 * it] = b * v_r_tip_Y;
    n = 3 * it + 1;
    pb_out[n] = e_a_tmp * v_r_tip_Z;
    qb_out[n] = I_yaw_app * b_rZT_1;
    rb_out[n] = b_b * v_r_tip_Z;
    sb_out[n] = rZT_3 * b_rZT_1;
    tb_out[n] = v_c_tip_Z * v_r_tip_Z;
    ub_out[n] = rQS1_2 * tip_mass_X_tot;
    nb_out[n] = I_pr_app * v_r_tip_Z;
    ob_out[n] = b * tip_mass_X_tot;
    n = 3 * it + 2;
    pb_out[n] = e_a_tmp * tip_mass_Z_tot;
    qb_out[n] = I_yaw_app * c_rQS1_1;
    rb_out[n] = b_b * tip_mass_Z_tot;
    sb_out[n] = rZT_3 * c_rQS1_1;
    tb_out[n] = v_c_tip_Z * tip_mass_Z_tot;
    ub_out[n] = rQS1_2 * dEvQ_TSS1_tmp;
    nb_out[n] = I_pr_app * tip_mass_Z_tot;
    ob_out[n] = b * dEvQ_TSS1_tmp;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }

  /*  端部 */
  XvP1_1_tmp = -(c_b + Platform->S12_H * q_Nom[27]);
  b_rQS1_2 = -(d_b + Platform->S12_H * q_Nom[26]);
  b_rQS1_1 = -(g_a_tmp + Platform->S12_V * q_Nom[29]);
  f_b = -(i_a_tmp + Platform->S12_V * q_Nom[28]);

  /*  --- 梁 3 --- */
  emxInit_real_T(sp, &EvP3_Sg, 3, &qj_emlrtRTEI);
  st.site = &je_emlrtRSI;
  g_repmat(&st, Platform->nt, EvP3_Sg);
  emxInit_real_T(sp, &EvP3_Sw, 3, &rj_emlrtRTEI);
  st.site = &ke_emlrtRSI;
  h_repmat(&st, Platform->nt, EvP3_Sw);
  emxInit_real_T(sp, &EvP3_Hv, 3, &sj_emlrtRTEI);
  st.site = &le_emlrtRSI;
  b_repmat(&st, Platform->nt, EvP3_Hv);
  st.site = &me_emlrtRSI;
  g_repmat(&st, Platform->nt, r6);
  emxInit_real_T(sp, &EvP3_R, 3, &tj_emlrtRTEI);
  st.site = &me_emlrtRSI;
  b_cross(&st, r6, rP3, EvP3_R);
  st.site = &ne_emlrtRSI;
  h_repmat(&st, Platform->nt, r6);
  emxInit_real_T(sp, &EvP3_P, 3, &uj_emlrtRTEI);
  st.site = &ne_emlrtRSI;
  b_cross(&st, r6, rP3, EvP3_P);
  st.site = &oe_emlrtRSI;
  b_repmat(&st, Platform->nt, r6);
  emxInit_real_T(sp, &EvP3_Y, 3, &vj_emlrtRTEI);
  st.site = &oe_emlrtRSI;
  b_cross(&st, r6, rP3, EvP3_Y);
  ak_tip_Z = q_Nom[31];
  g_proj_X = q_Nom[30];
  g_proj_Y = q_Nom[33];
  g_proj_Z = q_Nom[32];
  EvZ_tmp = P_BP[2].f1[0];
  v_r_tip_X = P_BP[2].f1[1];
  v_r_tip_Y = P_BP[2].f1[2];
  v_r_tip_Z = P_BP[2].f1[3];
  b_rZT_1 = P_BP[2].f1[4];
  tip_mass_X_tot = P_BP[2].f1[5];
  tip_mass_Z_tot = P_BP[2].f1[6];
  c_rQS1_1 = P_BP[2].f1[7];
  dEvQ_TSS1_tmp = P_BP[2].f1[8];
  for (it = 0; it < 15; it++) {
    I_pr_app = Platform->s12_H[it];
    d_rQS1_1 = -(XvP1_1[it] + I_pr_app * ak_tip_Z);
    XvP1_1[it] = d_rQS1_1;
    b_b = -(XvP1_2[it] + I_pr_app * g_proj_X);
    XvP1_2[it] = b_b;
    I_pr_app = Platform->s12_V[it];
    v_c_tip_Z = -(XvP1_3[it] + I_pr_app * g_proj_Y);
    XvP1_3[it] = v_c_tip_Z;
    I_pr_app = -(XvP2_1[it] + I_pr_app * g_proj_Z);
    XvP2_1[it] = I_pr_app;
    xb_out[3 * it] = d_rQS1_1 * EvZ_tmp;
    I_yaw_app = Platform->O1_H[it];
    yb_out[3 * it] = I_yaw_app * v_r_tip_X;
    ac_out[3 * it] = b_b * EvZ_tmp;
    rZT_3 = Platform->O2_H[it];
    bc_out[3 * it] = rZT_3 * v_r_tip_X;
    cc_out[3 * it] = v_c_tip_Z * EvZ_tmp;
    rQS1_2 = Platform->O1_V[it];
    dc_out[3 * it] = rQS1_2 * v_r_tip_Y;
    vb_out[3 * it] = I_pr_app * EvZ_tmp;
    b = Platform->O2_V[it];
    wb_out[3 * it] = b * v_r_tip_Y;
    n = 3 * it + 1;
    xb_out[n] = d_rQS1_1 * v_r_tip_Z;
    yb_out[n] = I_yaw_app * b_rZT_1;
    ac_out[n] = b_b * v_r_tip_Z;
    bc_out[n] = rZT_3 * b_rZT_1;
    cc_out[n] = v_c_tip_Z * v_r_tip_Z;
    dc_out[n] = rQS1_2 * tip_mass_X_tot;
    vb_out[n] = I_pr_app * v_r_tip_Z;
    wb_out[n] = b * tip_mass_X_tot;
    n = 3 * it + 2;
    xb_out[n] = d_rQS1_1 * tip_mass_Z_tot;
    yb_out[n] = I_yaw_app * c_rQS1_1;
    ac_out[n] = b_b * tip_mass_Z_tot;
    bc_out[n] = rZT_3 * c_rQS1_1;
    cc_out[n] = v_c_tip_Z * tip_mass_Z_tot;
    dc_out[n] = rQS1_2 * dEvQ_TSS1_tmp;
    vb_out[n] = I_pr_app * tip_mass_Z_tot;
    wb_out[n] = b * dEvQ_TSS1_tmp;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }

  /*  端部 */
  e_b = -(e_b + Platform->S12_H * q_Nom[31]);
  d_b = -(h_a_tmp + Platform->S12_H * q_Nom[30]);
  c_b = -(j_a_tmp + Platform->S12_V * q_Nom[33]);
  k_a_tmp = -(k_a_tmp + Platform->S12_V * q_Nom[32]);

  /*  Angular Accelerations */
  /*  #1. Platform */
  /*  all zeros */
  /*  #2. Tower */
  /*  I think not required */
  /*  #3. Tower top/Base plate */
  dEwB_TFA1[0] = EwX[1] * EwB_TFA1[2] - EwB_TFA1[1] * d;
  dEwB_TFA1[1] = EwB_TFA1[0] * d - EwX[0] * EwB_TFA1[2];
  dEwB_TFA1[2] = EwX[0] * EwB_TFA1[1] - EwB_TFA1[0] * EwX[1];
  dEwB_TSS1[0] = EwX[1] * EwB_TSS1[2] - EwB_TSS1[1] * d;
  dEwB_TSS1[1] = EwB_TSS1[0] * d - EwX[0] * EwB_TSS1[2];
  dEwB_TSS1[2] = EwX[0] * EwB_TSS1[1] - EwB_TSS1[0] * EwX[1];
  dEwB_TFA2[0] = EwX[1] * EwB_TFA2[2] - EwB_TFA2[1] * d;
  dEwB_TFA2[1] = EwB_TFA2[0] * d - EwX[0] * EwB_TFA2[2];
  dEwB_TFA2[2] = EwX[0] * EwB_TFA2[1] - EwB_TFA2[0] * EwX[1];
  dEwB_TSS2[0] = EwX[1] * EwB_TSS2[2] - EwB_TSS2[1] * d;
  dEwB_TSS2[1] = EwB_TSS2[0] * d - EwX[0] * EwB_TSS2[2];
  dEwB_TSS2[2] = EwX[0] * EwB_TSS2[1] - EwB_TSS2[0] * EwX[1];

  /*  #4. Nacelle */
  dEwN_yaw[0] = EwB[1] * D[7] - d1 * D[4];
  dEwN_yaw[1] = D[1] * d1 - EwB[0] * D[7];
  dEwN_yaw[2] = EwB[0] * D[4] - EwB[1] * D[1];
  r = _mm_loadu_pd(&dEwB_TFA1[0]);
  r1 = _mm_loadu_pd(&dEwB_TSS1[0]);
  r2 = _mm_loadu_pd(&dEwB_TFA2[0]);
  r3 = _mm_loadu_pd(&dEwB_TSS2[0]);
  r4 = _mm_loadu_pd(&dEwN_yaw[0]);
  r10 = _mm_set1_pd(q_Nom[40]);
  r11 = _mm_set1_pd(q_Nom[41]);
  r12 = _mm_set1_pd(q_Nom[42]);
  r13 = _mm_set1_pd(q_Nom[43]);
  r14 = _mm_set1_pd(q_Nom[44]);
  _mm_storeu_pd(&dEwN[0], _mm_add_pd(_mm_add_pd(_mm_add_pd(_mm_add_pd(_mm_mul_pd
    (r, r10), _mm_mul_pd(r1, r11)), _mm_mul_pd(r2, r12)), _mm_mul_pd(r3, r13)),
    _mm_mul_pd(r4, r14)));
  dEwN[2] = (((dEwB_TFA1[2] * q_Nom[40] + dEwB_TSS1[2] * q_Nom[41]) + dEwB_TFA2
              [2] * q_Nom[42]) + dEwB_TSS2[2] * q_Nom[43]) + dEwN_yaw[2] *
    q_Nom[44];

  /*  #5. Low Speed Shaft */
  dEwL_GeAz[0] = EwN_idx_1 * C[6] - d2 * C[3];
  dEwL_GeAz[1] = C[0] * d2 - EwN_idx_0 * C[6];
  dEwL_GeAz[2] = EwN_idx_0 * C[3] - C[0] * EwN_idx_1;

  /*  #6. Blade 1 */
  /*  dEwM1_TFA1 = dEwL_TFA1; */
  /*  dEwM1_TSS1 = dEwL_TSS1; */
  /*  dEwM1_TFA2 = dEwL_TFA2; */
  /*  dEwM1_TSS2 = dEwL_TSS2; */
  /*  dEwM1_yaw  = dEwL_yaw; */
  /*  dEwM1_GeAz = dEwL_GeAz; */
  /*  dEwM1_DrTr = dEwL_DrTr; */
  /*  dEwM1_B1F1 = cross(EwL,EwM1_B1F1); */
  /*  dEwM1_B1E1 = cross(EwL,EwM1_B1E1); */
  /*  dEwM1_B1F2 = cross(EwL,EwM1_B1F2); */
  /*  #7. High Speed Shaft/Generator */
  /*  end of Angular Accelerations */
  /*  Linear accelerations */
  /*  #2. Platform C.M */
  i_a_tmp = EwX[1] * rZY_idx_2 - rZY_idx_1 * d;
  j_a_tmp = rZY_idx_0 * d - EwX[0] * rZY_idx_2;
  v_r_tip_X = EwX[0] * rZY_idx_1 - rZY_idx_0 * EwX[1];

  /*  #3. Tower */
  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Twr->nt;
  st.site = &pe_emlrtRSI;
  i_repmat(&st, EwX, dEvQ_TSS1, r6);
  st.site = &pe_emlrtRSI;
  c_cross(&st, r6, rZT, loop_ub_tmp);
  r9 = loop_ub_tmp->data;
  if ((loop_ub_tmp->size[2] != 11) && (loop_ub_tmp->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(11, loop_ub_tmp->size[2], &kd_emlrtECI,
      (emlrtConstCTX)sp);
  }

  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Twr->nt;
  st.site = &pe_emlrtRSI;
  d_repmat(&st, dEvQ_TSS1, r6);
  if (loop_ub_tmp->size[2] == 11) {
    for (it = 0; it <= 30; it += 2) {
      r = _mm_loadu_pd(&XvT[it]);
      r1 = _mm_loadu_pd(&r9[it]);
      _mm_storeu_pd(&out[it], _mm_add_pd(r, r1));
    }

    out[32] = XvT[32] + r9[32];
    st.site = &pe_emlrtRSI;
    c_cross(&st, r6, out, VzB1);
  } else {
    st.site = &pe_emlrtRSI;
    binary_expand_op_145(&st, VzB1, pe_emlrtRSI, r6, XvT, loop_ub_tmp);
  }

  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Twr->nt;
  st.site = &qe_emlrtRSI;
  i_repmat(&st, EwX, dEvQ_TSS1, r6);
  st.site = &qe_emlrtRSI;
  c_cross(&st, r6, rZT, loop_ub_tmp);
  r9 = loop_ub_tmp->data;
  if ((loop_ub_tmp->size[2] != 11) && (loop_ub_tmp->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(11, loop_ub_tmp->size[2], &ld_emlrtECI,
      (emlrtConstCTX)sp);
  }

  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Twr->nt;
  st.site = &qe_emlrtRSI;
  e_repmat(&st, dEvQ_TSS1, r6);
  if (loop_ub_tmp->size[2] == 11) {
    for (it = 0; it <= 30; it += 2) {
      r = _mm_loadu_pd(&XvT[it]);
      r1 = _mm_loadu_pd(&r9[it]);
      _mm_storeu_pd(&out[it], _mm_add_pd(r, r1));
    }

    out[32] = XvT[32] + r9[32];
    st.site = &qe_emlrtRSI;
    c_cross(&st, r6, out, VzB2);
  } else {
    st.site = &qe_emlrtRSI;
    binary_expand_op_145(&st, VzB2, qe_emlrtRSI, r6, XvT, loop_ub_tmp);
  }

  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Twr->nt;
  st.site = &re_emlrtRSI;
  i_repmat(&st, EwX, dEvQ_TSS1, r6);
  st.site = &re_emlrtRSI;
  c_cross(&st, r6, rZT, loop_ub_tmp);
  r9 = loop_ub_tmp->data;
  if ((loop_ub_tmp->size[2] != 11) && (loop_ub_tmp->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(11, loop_ub_tmp->size[2], &md_emlrtECI,
      (emlrtConstCTX)sp);
  }

  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Twr->nt;
  st.site = &re_emlrtRSI;
  f_repmat(&st, dEvQ_TSS1, r6);
  if (loop_ub_tmp->size[2] == 11) {
    for (it = 0; it <= 30; it += 2) {
      r = _mm_loadu_pd(&XvT[it]);
      r1 = _mm_loadu_pd(&r9[it]);
      _mm_storeu_pd(&XvT[it], _mm_add_pd(r, r1));
    }

    XvT[32] += r9[32];
    st.site = &re_emlrtRSI;
    c_cross(&st, r6, XvT, VzB3);
  } else {
    st.site = &re_emlrtRSI;
    binary_expand_op_145(&st, VzB3, re_emlrtRSI, r6, XvT, loop_ub_tmp);
  }

  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Twr->nt;
  st.site = &se_emlrtRSI;
  i_repmat(&st, EwX, dEvQ_TSS1, r6);
  st.site = &se_emlrtRSI;
  c_cross(&st, r6, EvF_TFA1, loop_ub_tmp);
  r9 = loop_ub_tmp->data;
  if ((loop_ub_tmp->size[2] != 11) && (loop_ub_tmp->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(11, loop_ub_tmp->size[2], &nd_emlrtECI,
      (emlrtConstCTX)sp);
  }

  I_pr_app = q_Nom[40];
  I_yaw_app = q_Nom[42];
  rZT_3 = A[1];
  rQS1_2 = A[4];
  FRotor_R_idx_0 = A[7];
  for (it = 0; it < 11; it++) {
    FRotor_R_idx_1 = Twr->s11_TFA[it] * I_pr_app + Twr->s12_TFA[it] * I_yaw_app;
    dEvF[3 * it] = FRotor_R_idx_1 * rZT_3;
    dEvF[3 * it + 1] = FRotor_R_idx_1 * rQS1_2;
    dEvF[3 * it + 2] = FRotor_R_idx_1 * FRotor_R_idx_0;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }

  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Twr->nt;
  st.site = &te_emlrtRSI;
  i_repmat(&st, EwX, dEvQ_TSS1, r6);
  st.site = &te_emlrtRSI;
  c_cross(&st, r6, EvF_TSS1, r8);
  ZBlNode_Y_data = r8->data;
  if ((r8->size[2] != 11) && (r8->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(11, r8->size[2], &od_emlrtECI, (emlrtConstCTX)sp);
  }

  I_pr_app = q_Nom[41];
  I_yaw_app = q_Nom[43];
  for (it = 0; it < 11; it++) {
    FRotor_R_idx_1 = Twr->s11_TSS[it] * I_pr_app + Twr->s12_TSS[it] * I_yaw_app;
    out[3 * it] = FRotor_R_idx_1 * rZT_3;
    out[3 * it + 1] = FRotor_R_idx_1 * rQS1_2;
    out[3 * it + 2] = FRotor_R_idx_1 * FRotor_R_idx_0;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }

  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Twr->nt;
  st.site = &ue_emlrtRSI;
  i_repmat(&st, EwX, dEvQ_TSS1, r6);
  emxInit_real_T(sp, &r15, 3, &ek_emlrtRTEI);
  st.site = &ue_emlrtRSI;
  c_cross(&st, r6, EvF_TFA2, r15);
  Vx_data = r15->data;
  if ((r15->size[2] != 11) && (r15->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(11, r15->size[2], &pd_emlrtECI, (emlrtConstCTX)
      sp);
  }

  I_pr_app = q_Nom[42];
  I_yaw_app = q_Nom[40];
  for (it = 0; it < 11; it++) {
    FRotor_R_idx_1 = Twr->s22_TFA[it] * I_pr_app + Twr->s12_TFA[it] * I_yaw_app;
    b_out[3 * it] = FRotor_R_idx_1 * rZT_3;
    b_out[3 * it + 1] = FRotor_R_idx_1 * rQS1_2;
    b_out[3 * it + 2] = FRotor_R_idx_1 * FRotor_R_idx_0;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }

  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Twr->nt;
  st.site = &ve_emlrtRSI;
  i_repmat(&st, EwX, dEvQ_TSS1, r6);
  emxInit_real_T(sp, &r16, 3, &fk_emlrtRTEI);
  st.site = &ve_emlrtRSI;
  c_cross(&st, r6, EvF_TSS2, r16);
  Vy_data = r16->data;
  if ((r16->size[2] != 11) && (r16->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(11, r16->size[2], &qd_emlrtECI, (emlrtConstCTX)
      sp);
  }

  I_pr_app = q_Nom[43];
  I_yaw_app = q_Nom[41];
  for (it = 0; it < 11; it++) {
    FRotor_R_idx_1 = Twr->s22_TSS[it] * I_pr_app + Twr->s12_TSS[it] * I_yaw_app;
    XvT[3 * it] = FRotor_R_idx_1 * rZT_3;
    XvT[3 * it + 1] = FRotor_R_idx_1 * rQS1_2;
    XvT[3 * it + 2] = FRotor_R_idx_1 * FRotor_R_idx_0;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }

  c_n = 3 * VzB1->size[2];
  n = VzB1->size[0] * VzB1->size[1] * VzB1->size[2];
  VzB1->size[0] = 1;
  VzB1->size[1] = 3;
  emxEnsureCapacity_real_T(sp, VzB1, n, &cf_emlrtRTEI);
  VzB1_data = VzB1->data;
  I_pr_app = q_Nom[37];
  n = (c_n / 2) << 1;
  b_n = n - 2;
  for (b_it = 0; b_it <= b_n; b_it += 2) {
    r = _mm_loadu_pd(&VzB1_data[b_it]);
    _mm_storeu_pd(&VzB1_data[b_it], _mm_mul_pd(r, _mm_set1_pd(I_pr_app)));
  }

  for (b_it = n; b_it < c_n; b_it++) {
    VzB1_data[b_it] *= I_pr_app;
  }

  c_n = 3 * VzB2->size[2];
  n = VzB2->size[0] * VzB2->size[1] * VzB2->size[2];
  VzB2->size[0] = 1;
  VzB2->size[1] = 3;
  emxEnsureCapacity_real_T(sp, VzB2, n, &df_emlrtRTEI);
  ZBlNode_Z_data = VzB2->data;
  I_pr_app = q_Nom[38];
  n = (c_n / 2) << 1;
  b_n = n - 2;
  for (b_it = 0; b_it <= b_n; b_it += 2) {
    r = _mm_loadu_pd(&ZBlNode_Z_data[b_it]);
    _mm_storeu_pd(&ZBlNode_Z_data[b_it], _mm_mul_pd(r, _mm_set1_pd(I_pr_app)));
  }

  for (b_it = n; b_it < c_n; b_it++) {
    ZBlNode_Z_data[b_it] *= I_pr_app;
  }

  if ((VzB1->size[2] != VzB2->size[2]) && ((VzB1->size[2] != 1) && (VzB2->size[2]
        != 1))) {
    emlrtDimSizeImpxCheckR2021b(VzB1->size[2], VzB2->size[2], &rd_emlrtECI,
      (emlrtConstCTX)sp);
  }

  if (VzB1->size[2] == VzB2->size[2]) {
    c_n = 3 * VzB1->size[2];
    n = VzB1->size[0] * VzB1->size[1] * VzB1->size[2];
    VzB1->size[0] = 1;
    VzB1->size[1] = 3;
    emxEnsureCapacity_real_T(sp, VzB1, n, &cf_emlrtRTEI);
    VzB1_data = VzB1->data;
    n = (c_n / 2) << 1;
    b_n = n - 2;
    for (b_it = 0; b_it <= b_n; b_it += 2) {
      r = _mm_loadu_pd(&VzB1_data[b_it]);
      r1 = _mm_loadu_pd(&ZBlNode_Z_data[b_it]);
      _mm_storeu_pd(&VzB1_data[b_it], _mm_add_pd(r, r1));
    }

    for (b_it = n; b_it < c_n; b_it++) {
      VzB1_data[b_it] += ZBlNode_Z_data[b_it];
    }
  } else {
    st.site = &pv_emlrtRSI;
    f_plus(&st, VzB1, VzB2);
  }

  c_n = 3 * VzB3->size[2];
  n = VzB3->size[0] * VzB3->size[1] * VzB3->size[2];
  VzB3->size[0] = 1;
  VzB3->size[1] = 3;
  emxEnsureCapacity_real_T(sp, VzB3, n, &ef_emlrtRTEI);
  ZBlNode_Z_data = VzB3->data;
  I_pr_app = q_Nom[39];
  n = (c_n / 2) << 1;
  b_n = n - 2;
  for (b_it = 0; b_it <= b_n; b_it += 2) {
    r = _mm_loadu_pd(&ZBlNode_Z_data[b_it]);
    _mm_storeu_pd(&ZBlNode_Z_data[b_it], _mm_mul_pd(r, _mm_set1_pd(I_pr_app)));
  }

  for (b_it = n; b_it < c_n; b_it++) {
    ZBlNode_Z_data[b_it] *= I_pr_app;
  }

  if ((VzB1->size[2] != VzB3->size[2]) && ((VzB1->size[2] != 1) && (VzB3->size[2]
        != 1))) {
    emlrtDimSizeImpxCheckR2021b(VzB1->size[2], VzB3->size[2], &rd_emlrtECI,
      (emlrtConstCTX)sp);
  }

  if (VzB1->size[2] == VzB3->size[2]) {
    c_n = 3 * VzB1->size[2];
    n = VzB1->size[0] * VzB1->size[1] * VzB1->size[2];
    VzB1->size[0] = 1;
    VzB1->size[1] = 3;
    emxEnsureCapacity_real_T(sp, VzB1, n, &cf_emlrtRTEI);
    VzB1_data = VzB1->data;
    n = (c_n / 2) << 1;
    b_n = n - 2;
    for (b_it = 0; b_it <= b_n; b_it += 2) {
      r = _mm_loadu_pd(&VzB1_data[b_it]);
      r1 = _mm_loadu_pd(&ZBlNode_Z_data[b_it]);
      _mm_storeu_pd(&VzB1_data[b_it], _mm_add_pd(r, r1));
    }

    for (b_it = n; b_it < c_n; b_it++) {
      VzB1_data[b_it] += ZBlNode_Z_data[b_it];
    }
  } else {
    st.site = &pv_emlrtRSI;
    f_plus(&st, VzB1, VzB3);
    VzB1_data = VzB1->data;
  }

  if ((VzB1->size[2] != 11) && (VzB1->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(VzB1->size[2], 11, &rd_emlrtECI, (emlrtConstCTX)
      sp);
  }

  if ((loop_ub_tmp->size[2] == 11) && (VzB1->size[2] == 11) && (r8->size[2] ==
       11) && (r15->size[2] == 11) && (r16->size[2] == 11)) {
    r = _mm_set1_pd(-1.0);
    for (it = 0; it <= 30; it += 2) {
      r1 = _mm_loadu_pd(&dEvF[it]);
      r2 = _mm_loadu_pd(&r9[it]);
      r3 = _mm_loadu_pd(&VzB1_data[it]);
      r4 = _mm_loadu_pd(&out[it]);
      r5 = _mm_loadu_pd(&ZBlNode_Y_data[it]);
      r17 = _mm_loadu_pd(&b_out[it]);
      r18 = _mm_loadu_pd(&Vx_data[it]);
      r19 = _mm_loadu_pd(&XvT[it]);
      r20 = _mm_loadu_pd(&Vy_data[it]);
      _mm_storeu_pd(&dEvF[it], _mm_add_pd(_mm_add_pd(_mm_add_pd(_mm_add_pd(r3,
        _mm_mul_pd(_mm_add_pd(_mm_mul_pd(r1, r), r2), r10)), _mm_mul_pd
        (_mm_add_pd(_mm_mul_pd(r4, r), r5), r11)), _mm_mul_pd(_mm_add_pd
        (_mm_mul_pd(r17, r), r18), r12)), _mm_mul_pd(_mm_add_pd(_mm_mul_pd(r19,
        r), r20), r13)));
    }

    dEvF[32] = (((VzB1_data[32] + (-dEvF[32] + r9[32]) * q_Nom[40]) + (-out[32]
      + ZBlNode_Y_data[32]) * q_Nom[41]) + (-b_out[32] + Vx_data[32]) * q_Nom[42])
      + (-XvT[32] + Vy_data[32]) * q_Nom[43];
  } else {
    binary_expand_op_144(dEvF, VzB1, loop_ub_tmp, q_Nom, out, r8, b_out, r15,
                         XvT, r16);
  }

  /*  #4. Tower top/Base plate */
  r = _mm_loadu_pd(&XvO[0]);
  r1 = _mm_loadu_pd(&MB1_DrTr[0]);
  _mm_storeu_pd(&XvO[0], _mm_add_pd(r, r1));
  XvO[2] += MB1_DrTr[2];
  I_pr_app = XvO[1] * 0.0;
  I_yaw_app = 0.0 * XvO[2];
  dEvO_R[0] = I_yaw_app - I_pr_app;
  rZT_3 = XvO[0] * 0.0;
  dEvO_R[1] = rZT_3 - XvO[2];
  dEvO_R[2] = XvO[1] - rZT_3;
  rQS1_2 = -0.0 * XvO[2];
  dEvO_P[0] = rQS1_2 - (-XvO[1]);
  dEvO_P[1] = -XvO[0] - rQS1_2;
  dEvO_P[2] = -0.0 * XvO[1] - XvO[0] * -0.0;
  dEvO_Y[0] = XvO[2] - I_pr_app;
  dEvO_Y[1] = rZT_3 - I_yaw_app;
  dEvO_Y[2] = I_pr_app - XvO[0];
  I_pr_app = -(Twr->S11_TFA * q_Nom[40] + Twr->S12_TFA * q_Nom[42]);
  dEvO_TFA1[0] = EwX[1] * EvO_TFA1[2] - EvO_TFA1[1] * d;
  dEvO_TFA1[1] = EvO_TFA1[0] * d - EwX[0] * EvO_TFA1[2];
  dEvO_TFA1[2] = EwX[0] * EvO_TFA1[1] - EvO_TFA1[0] * EwX[1];
  I_yaw_app = -(Twr->S11_TSS * q_Nom[41] + Twr->S12_TSS * q_Nom[43]);
  dEvO_TSS1[0] = EwX[1] * EvO_TSS1[2] - EvO_TSS1[1] * d;
  dEvO_TSS1[1] = EvO_TSS1[0] * d - EwX[0] * EvO_TSS1[2];
  dEvO_TSS1[2] = EwX[0] * EvO_TSS1[1] - EvO_TSS1[0] * EwX[1];
  rZT_3 = -(Twr->S22_TFA * q_Nom[42] + Twr->S12_TFA * q_Nom[40]);
  dEvO_TFA2[0] = EwX[1] * EvO_TFA2[2] - EvO_TFA2[1] * d;
  dEvO_TFA2[1] = EvO_TFA2[0] * d - EwX[0] * EvO_TFA2[2];
  dEvO_TFA2[2] = EwX[0] * EvO_TFA2[1] - EvO_TFA2[0] * EwX[1];
  rQS1_2 = -(Twr->S22_TSS * q_Nom[43] + Twr->S12_TSS * q_Nom[41]);
  dEvO_TSS2[0] = EwX[1] * EvO_TSS2[2] - EvO_TSS2[1] * d;
  dEvO_TSS2[1] = EvO_TSS2[0] * d - EwX[0] * EvO_TSS2[2];
  dEvO_TSS2[2] = EwX[0] * EvO_TSS2[1] - EvO_TSS2[0] * EwX[1];
  dEvO_TFA1[0] += I_pr_app * A[1];
  dEvO_TSS1[0] += I_yaw_app * A[1];
  dEvO_TFA2[0] += rZT_3 * A[1];
  dEvO_TSS2[0] += rQS1_2 * A[1];
  dEvO_TFA1[1] += I_pr_app * A[4];
  dEvO_TSS1[1] += I_yaw_app * A[4];
  dEvO_TFA2[1] += rZT_3 * A[4];
  dEvO_TSS2[1] += rQS1_2 * A[4];
  dEvO_TFA1[2] += I_pr_app * A[7];
  dEvO_TSS1[2] += I_yaw_app * A[7];
  dEvO_TFA2[2] += rZT_3 * A[7];
  dEvO_TSS2[2] += rQS1_2 * A[7];

  /*  #5. Nacelle */
  FO_t[0] = EwN_idx_1 * rOU_idx_2 - rOU_idx_1 * d2;
  FO_t[1] = rOU_idx_0 * d2 - EwN_idx_0 * rOU_idx_2;
  FO_t[2] = EwN_idx_0 * rOU_idx_1 - rOU_idx_0 * EwN_idx_1;

  /*  #6. Appex of Conning angle */
  I_pr_app = MB2_DrTr[1] * 0.0;
  I_yaw_app = 0.0 * MB2_DrTr[2];
  dEvQ_R[0] = dEvO_R[0] + (I_yaw_app - I_pr_app);
  rZT_3 = MB2_DrTr[0] * 0.0;
  dEvQ_R[1] = dEvO_R[1] + (rZT_3 - MB2_DrTr[2]);
  dEvQ_R[2] = dEvO_R[2] + (MB2_DrTr[1] - rZT_3);
  rQS1_2 = -0.0 * MB2_DrTr[2];
  dEvQ_P[0] = dEvO_P[0] + (rQS1_2 - (-MB2_DrTr[1]));
  dEvQ_P[1] = dEvO_P[1] + (-MB2_DrTr[0] - rQS1_2);
  dEvQ_P[2] = dEvO_P[2] + (-0.0 * MB2_DrTr[1] - MB2_DrTr[0] * -0.0);
  dEvQ_Y[0] = dEvO_Y[0] + (MB2_DrTr[2] - I_pr_app);
  dEvQ_Y[1] = dEvO_Y[1] + (rZT_3 - I_yaw_app);
  dEvQ_Y[2] = dEvO_Y[2] + (I_pr_app - MB2_DrTr[0]);
  dEvQ_TFA1[0] = dEvO_TFA1[0] + (dEwB_TFA1[1] * rOQ[2] - rOQ[1] * dEwB_TFA1[2]);
  dEvQ_TFA1[1] = dEvO_TFA1[1] + (rOQ[0] * dEwB_TFA1[2] - dEwB_TFA1[0] * rOQ[2]);
  dEvQ_TFA1[2] = dEvO_TFA1[2] + (dEwB_TFA1[0] * rOQ[1] - rOQ[0] * dEwB_TFA1[1]);
  EvZ[0] = EwB_TFA1[1] * MB2_DrTr[2] - MB2_DrTr[1] * EwB_TFA1[2];
  EvZ[1] = MB2_DrTr[0] * EwB_TFA1[2] - EwB_TFA1[0] * MB2_DrTr[2];
  EvZ[2] = EwB_TFA1[0] * MB2_DrTr[1] - MB2_DrTr[0] * EwB_TFA1[1];
  b_dEvQ_TSS1[0] = dEvO_TSS1[0] + (dEwB_TSS1[1] * rOQ[2] - rOQ[1] * dEwB_TSS1[2]);
  b_dEvQ_TSS1[1] = dEvO_TSS1[1] + (rOQ[0] * dEwB_TSS1[2] - dEwB_TSS1[0] * rOQ[2]);
  b_dEvQ_TSS1[2] = dEvO_TSS1[2] + (dEwB_TSS1[0] * rOQ[1] - rOQ[0] * dEwB_TSS1[1]);
  b_EwB_TSS1[0] = EwB_TSS1[1] * MB2_DrTr[2] - MB2_DrTr[1] * EwB_TSS1[2];
  b_EwB_TSS1[1] = MB2_DrTr[0] * EwB_TSS1[2] - EwB_TSS1[0] * MB2_DrTr[2];
  b_EwB_TSS1[2] = EwB_TSS1[0] * MB2_DrTr[1] - MB2_DrTr[0] * EwB_TSS1[1];
  dEvQ_TFA2[0] = dEvO_TFA2[0] + (dEwB_TFA2[1] * rOQ[2] - rOQ[1] * dEwB_TFA2[2]);
  dEvQ_TFA2[1] = dEvO_TFA2[1] + (rOQ[0] * dEwB_TFA2[2] - dEwB_TFA2[0] * rOQ[2]);
  dEvQ_TFA2[2] = dEvO_TFA2[2] + (dEwB_TFA2[0] * rOQ[1] - rOQ[0] * dEwB_TFA2[1]);
  b_EwB_TFA2[0] = EwB_TFA2[1] * MB2_DrTr[2] - MB2_DrTr[1] * EwB_TFA2[2];
  b_EwB_TFA2[1] = MB2_DrTr[0] * EwB_TFA2[2] - EwB_TFA2[0] * MB2_DrTr[2];
  b_EwB_TFA2[2] = EwB_TFA2[0] * MB2_DrTr[1] - MB2_DrTr[0] * EwB_TFA2[1];
  dEvQ_TSS2[0] = dEvO_TSS2[0] + (dEwB_TSS2[1] * rOQ[2] - rOQ[1] * dEwB_TSS2[2]);
  dEvQ_TSS2[1] = dEvO_TSS2[1] + (rOQ[0] * dEwB_TSS2[2] - dEwB_TSS2[0] * rOQ[2]);
  dEvQ_TSS2[2] = dEvO_TSS2[2] + (dEwB_TSS2[0] * rOQ[1] - rOQ[0] * dEwB_TSS2[1]);
  b_EwB_TSS2[0] = EwB_TSS2[1] * MB2_DrTr[2] - MB2_DrTr[1] * EwB_TSS2[2];
  b_EwB_TSS2[1] = MB2_DrTr[0] * EwB_TSS2[2] - EwB_TSS2[0] * MB2_DrTr[2];
  b_EwB_TSS2[2] = EwB_TSS2[0] * MB2_DrTr[1] - MB2_DrTr[0] * EwB_TSS2[1];
  dEvQ_yaw[0] = dEwN_yaw[1] * rOQ[2] - rOQ[1] * dEwN_yaw[2];
  dEvQ_yaw[1] = rOQ[0] * dEwN_yaw[2] - dEwN_yaw[0] * rOQ[2];
  dEvQ_yaw[2] = dEwN_yaw[0] * rOQ[1] - rOQ[0] * dEwN_yaw[1];
  b_D[0] = MB2_DrTr[2] * D[4] - MB2_DrTr[1] * D[7];
  b_D[1] = MB2_DrTr[0] * D[7] - D[1] * MB2_DrTr[2];
  b_D[2] = MB2_DrTr[1] * D[1] - MB2_DrTr[0] * D[4];

  /*  dEvQ_GeAz = cross(dEwL_GeAz,rOQ) + cross(EwL_GeAz,cross(EwL,rOQ)); */
  /*  dEvQ_DrTr = cross(dEwL_DrTr,rOQ) + cross(EwL_DrTr,cross(EwL,rOQ)); */
  /*  #7. Hub C.M */
  EvQ[0] = EwL[1] * rQC_idx_2 - rQC_idx_1 * EwL[2];
  EvQ[1] = rQC_idx_0 * EwL[2] - EwL[0] * rQC_idx_2;
  EvQ[2] = EwL[0] * rQC_idx_1 - rQC_idx_0 * EwL[1];
  dEvC_GeAz[0] = dEwL_GeAz[1] * rQC_idx_2 - rQC_idx_1 * dEwL_GeAz[2];
  dEvC_GeAz[1] = rQC_idx_0 * dEwL_GeAz[2] - dEwL_GeAz[0] * rQC_idx_2;
  dEvC_GeAz[2] = dEwL_GeAz[0] * rQC_idx_1 - rQC_idx_0 * dEwL_GeAz[1];
  b_I_G[0] = EvQ[2] * C[3] - EvQ[1] * C[6];
  b_I_G[1] = EvQ[0] * C[6] - C[0] * EvQ[2];
  b_I_G[2] = C[0] * EvQ[1] - EvQ[0] * C[3];
  r = _mm_loadu_pd(&dEvQ_TFA1[0]);
  r1 = _mm_loadu_pd(&EvZ[0]);
  _mm_storeu_pd(&dEvQ_TFA1[0], _mm_add_pd(r, r1));
  r = _mm_loadu_pd(&b_dEvQ_TSS1[0]);
  r1 = _mm_loadu_pd(&b_EwB_TSS1[0]);
  _mm_storeu_pd(&b_dEvQ_TSS1[0], _mm_add_pd(r, r1));
  r = _mm_loadu_pd(&dEvQ_TFA2[0]);
  r1 = _mm_loadu_pd(&b_EwB_TFA2[0]);
  _mm_storeu_pd(&dEvQ_TFA2[0], _mm_add_pd(r, r1));
  r = _mm_loadu_pd(&dEvQ_TSS2[0]);
  r1 = _mm_loadu_pd(&b_EwB_TSS2[0]);
  _mm_storeu_pd(&dEvQ_TSS2[0], _mm_add_pd(r, r1));
  r = _mm_loadu_pd(&dEvQ_yaw[0]);
  r1 = _mm_loadu_pd(&b_D[0]);
  _mm_storeu_pd(&dEvQ_yaw[0], _mm_add_pd(r, r1));
  r = _mm_loadu_pd(&dEvC_GeAz[0]);
  r1 = _mm_loadu_pd(&b_I_G[0]);
  _mm_storeu_pd(&dEvC_GeAz[0], _mm_add_pd(r, r1));
  dEvQ_TFA1[2] += EvZ[2];
  b_dEvQ_TSS1[2] += b_EwB_TSS1[2];
  dEvQ_TFA2[2] += b_EwB_TFA2[2];
  dEvQ_TSS2[2] += b_EwB_TSS2[2];
  dEvQ_yaw[2] += b_D[2];
  dEvC_GeAz[2] += b_I_G[2];

  /*  #8. Blade 1 */
  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Bld->nb;
  st.site = &we_emlrtRSI;
  i_repmat(&st, EwL, dEvQ_TSS1, r6);
  st.site = &we_emlrtRSI;
  cross(&st, r6, rQS1, loop_ub_tmp);
  r9 = loop_ub_tmp->data;
  if ((loop_ub_tmp->size[2] != 19) && (loop_ub_tmp->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(19, loop_ub_tmp->size[2], &sd_emlrtECI,
      (emlrtConstCTX)sp);
  }

  st.site = &we_emlrtRSI;
  repmat(&st, dEvQ_R, Bld->nb, r6);
  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Bld->nb;
  st.site = &we_emlrtRSI;
  d_repmat(&st, dEvQ_TSS1, r8);
  if (loop_ub_tmp->size[2] == 19) {
    for (it = 0; it <= 54; it += 2) {
      r = _mm_loadu_pd(&HvS1[it]);
      r1 = _mm_loadu_pd(&r9[it]);
      _mm_storeu_pd(&b_HvS1[it], _mm_add_pd(r, r1));
    }

    b_HvS1[56] = HvS1[56] + r9[56];
    st.site = &we_emlrtRSI;
    cross(&st, r8, b_HvS1, loop_ub_tmp);
    r9 = loop_ub_tmp->data;
  } else {
    st.site = &we_emlrtRSI;
    binary_expand_op_92(&st, loop_ub_tmp, we_emlrtRSI, r8, HvS1);
    r9 = loop_ub_tmp->data;
  }

  if ((r6->size[2] != loop_ub_tmp->size[2]) && ((r6->size[2] != 1) &&
       (loop_ub_tmp->size[2] != 1))) {
    emlrtDimSizeImpxCheckR2021b(r6->size[2], loop_ub_tmp->size[2], &td_emlrtECI,
      (emlrtConstCTX)sp);
  }

  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Bld->nb;
  st.site = &xe_emlrtRSI;
  i_repmat(&st, EwL, dEvQ_TSS1, r8);
  st.site = &xe_emlrtRSI;
  cross(&st, r8, rQS1, r15);
  Vx_data = r15->data;
  if ((r15->size[2] != 19) && (r15->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(19, r15->size[2], &ud_emlrtECI, (emlrtConstCTX)
      sp);
  }

  st.site = &xe_emlrtRSI;
  repmat(&st, dEvQ_P, Bld->nb, r8);
  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Bld->nb;
  st.site = &xe_emlrtRSI;
  e_repmat(&st, dEvQ_TSS1, r16);
  if (r15->size[2] == 19) {
    for (it = 0; it <= 54; it += 2) {
      r = _mm_loadu_pd(&HvS1[it]);
      r1 = _mm_loadu_pd(&Vx_data[it]);
      _mm_storeu_pd(&b_HvS1[it], _mm_add_pd(r, r1));
    }

    b_HvS1[56] = HvS1[56] + Vx_data[56];
    st.site = &xe_emlrtRSI;
    cross(&st, r16, b_HvS1, r15);
    Vx_data = r15->data;
  } else {
    st.site = &xe_emlrtRSI;
    binary_expand_op_92(&st, r15, xe_emlrtRSI, r16, HvS1);
    Vx_data = r15->data;
  }

  if ((r8->size[2] != r15->size[2]) && ((r8->size[2] != 1) && (r15->size[2] != 1)))
  {
    emlrtDimSizeImpxCheckR2021b(r8->size[2], r15->size[2], &vd_emlrtECI,
      (emlrtConstCTX)sp);
  }

  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Bld->nb;
  st.site = &ye_emlrtRSI;
  i_repmat(&st, EwL, dEvQ_TSS1, r16);
  st.site = &ye_emlrtRSI;
  cross(&st, r16, rQS1, VzB1);
  VzB1_data = VzB1->data;
  if ((VzB1->size[2] != 19) && (VzB1->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(19, VzB1->size[2], &wd_emlrtECI, (emlrtConstCTX)
      sp);
  }

  st.site = &ye_emlrtRSI;
  repmat(&st, dEvQ_Y, Bld->nb, r16);
  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Bld->nb;
  st.site = &ye_emlrtRSI;
  f_repmat(&st, dEvQ_TSS1, VzB2);
  if (VzB1->size[2] == 19) {
    for (it = 0; it <= 54; it += 2) {
      r = _mm_loadu_pd(&HvS1[it]);
      r1 = _mm_loadu_pd(&VzB1_data[it]);
      _mm_storeu_pd(&b_HvS1[it], _mm_add_pd(r, r1));
    }

    b_HvS1[56] = HvS1[56] + VzB1_data[56];
    st.site = &ye_emlrtRSI;
    cross(&st, VzB2, b_HvS1, VzB1);
    VzB1_data = VzB1->data;
  } else {
    st.site = &ye_emlrtRSI;
    binary_expand_op_92(&st, VzB1, ye_emlrtRSI, VzB2, HvS1);
    VzB1_data = VzB1->data;
  }

  if ((r16->size[2] != VzB1->size[2]) && ((r16->size[2] != 1) && (VzB1->size[2]
        != 1))) {
    emlrtDimSizeImpxCheckR2021b(r16->size[2], VzB1->size[2], &xd_emlrtECI,
      (emlrtConstCTX)sp);
  }

  st.site = &af_emlrtRSI;
  repmat(&st, dEvQ_TFA1, Bld->nb, VzB2);
  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Bld->nb;
  st.site = &af_emlrtRSI;
  i_repmat(&st, dEwB_TFA1, dEvQ_TSS1, VzB3);
  emxInit_real_T(sp, &r21, 3, &ff_emlrtRTEI);
  st.site = &af_emlrtRSI;
  cross(&st, VzB3, rQS1, r21);
  vr_X_data = r21->data;
  if ((VzB2->size[2] != r21->size[2]) && ((VzB2->size[2] != 1) && (r21->size[2]
        != 1))) {
    emlrtDimSizeImpxCheckR2021b(VzB2->size[2], r21->size[2], &yd_emlrtECI,
      (emlrtConstCTX)sp);
  }

  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Bld->nb;
  st.site = &af_emlrtRSI;
  i_repmat(&st, EwL, dEvQ_TSS1, VzB3);
  emxInit_real_T(sp, &r22, 3, &gk_emlrtRTEI);
  st.site = &af_emlrtRSI;
  cross(&st, VzB3, rQS1, r22);
  Vy_data = r22->data;
  if ((r22->size[2] != 19) && (r22->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(19, r22->size[2], &ae_emlrtECI, (emlrtConstCTX)
      sp);
  }

  if (VzB2->size[2] == r21->size[2]) {
    c_n = 3 * VzB2->size[2];
    n = VzB2->size[0] * VzB2->size[1] * VzB2->size[2];
    VzB2->size[0] = 1;
    VzB2->size[1] = 3;
    emxEnsureCapacity_real_T(sp, VzB2, n, &ff_emlrtRTEI);
    ZBlNode_Z_data = VzB2->data;
    n = (c_n / 2) << 1;
    b_n = n - 2;
    for (b_it = 0; b_it <= b_n; b_it += 2) {
      r = _mm_loadu_pd(&ZBlNode_Z_data[b_it]);
      r1 = _mm_loadu_pd(&vr_X_data[b_it]);
      _mm_storeu_pd(&ZBlNode_Z_data[b_it], _mm_add_pd(r, r1));
    }

    for (b_it = n; b_it < c_n; b_it++) {
      ZBlNode_Z_data[b_it] += vr_X_data[b_it];
    }
  } else {
    st.site = &af_emlrtRSI;
    f_plus(&st, VzB2, r21);
  }

  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Bld->nb;
  st.site = &af_emlrtRSI;
  i_repmat(&st, EwB_TFA1, dEvQ_TSS1, VzB3);
  if (r22->size[2] == 19) {
    for (it = 0; it <= 54; it += 2) {
      r = _mm_loadu_pd(&HvS1[it]);
      r1 = _mm_loadu_pd(&Vy_data[it]);
      _mm_storeu_pd(&b_HvS1[it], _mm_add_pd(r, r1));
    }

    b_HvS1[56] = HvS1[56] + Vy_data[56];
    st.site = &af_emlrtRSI;
    cross(&st, VzB3, b_HvS1, r21);
    vr_X_data = r21->data;
  } else {
    st.site = &af_emlrtRSI;
    binary_expand_op_94(&st, r21, af_emlrtRSI, VzB3, HvS1, r22);
    vr_X_data = r21->data;
  }

  if ((VzB2->size[2] != r21->size[2]) && ((VzB2->size[2] != 1) && (r21->size[2]
        != 1))) {
    emlrtDimSizeImpxCheckR2021b(VzB2->size[2], r21->size[2], &yd_emlrtECI,
      (emlrtConstCTX)sp);
  }

  st.site = &bf_emlrtRSI;
  repmat(&st, b_dEvQ_TSS1, Bld->nb, VzB3);
  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Bld->nb;
  st.site = &bf_emlrtRSI;
  i_repmat(&st, dEwB_TSS1, dEvQ_TSS1, r22);
  emxInit_real_T(sp, &r23, 3, &gf_emlrtRTEI);
  st.site = &bf_emlrtRSI;
  cross(&st, r22, rQS1, r23);
  r24 = r23->data;
  if ((VzB3->size[2] != r23->size[2]) && ((VzB3->size[2] != 1) && (r23->size[2]
        != 1))) {
    emlrtDimSizeImpxCheckR2021b(VzB3->size[2], r23->size[2], &be_emlrtECI,
      (emlrtConstCTX)sp);
  }

  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Bld->nb;
  st.site = &bf_emlrtRSI;
  i_repmat(&st, EwL, dEvQ_TSS1, r22);
  emxInit_real_T(sp, &r25, 3, &hk_emlrtRTEI);
  st.site = &bf_emlrtRSI;
  cross(&st, r22, rQS1, r25);
  Vy_data = r25->data;
  if ((r25->size[2] != 19) && (r25->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(19, r25->size[2], &ce_emlrtECI, (emlrtConstCTX)
      sp);
  }

  if (VzB3->size[2] == r23->size[2]) {
    c_n = 3 * VzB3->size[2];
    n = VzB3->size[0] * VzB3->size[1] * VzB3->size[2];
    VzB3->size[0] = 1;
    VzB3->size[1] = 3;
    emxEnsureCapacity_real_T(sp, VzB3, n, &gf_emlrtRTEI);
    ZBlNode_Z_data = VzB3->data;
    n = (c_n / 2) << 1;
    b_n = n - 2;
    for (b_it = 0; b_it <= b_n; b_it += 2) {
      r = _mm_loadu_pd(&ZBlNode_Z_data[b_it]);
      r1 = _mm_loadu_pd(&r24[b_it]);
      _mm_storeu_pd(&ZBlNode_Z_data[b_it], _mm_add_pd(r, r1));
    }

    for (b_it = n; b_it < c_n; b_it++) {
      ZBlNode_Z_data[b_it] += r24[b_it];
    }
  } else {
    st.site = &bf_emlrtRSI;
    f_plus(&st, VzB3, r23);
  }

  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Bld->nb;
  st.site = &bf_emlrtRSI;
  i_repmat(&st, EwB_TSS1, dEvQ_TSS1, r22);
  if (r25->size[2] == 19) {
    for (it = 0; it <= 54; it += 2) {
      r = _mm_loadu_pd(&HvS1[it]);
      r1 = _mm_loadu_pd(&Vy_data[it]);
      _mm_storeu_pd(&b_HvS1[it], _mm_add_pd(r, r1));
    }

    b_HvS1[56] = HvS1[56] + Vy_data[56];
    st.site = &bf_emlrtRSI;
    cross(&st, r22, b_HvS1, r23);
    r24 = r23->data;
  } else {
    st.site = &bf_emlrtRSI;
    binary_expand_op_94(&st, r23, bf_emlrtRSI, r22, HvS1, r25);
    r24 = r23->data;
  }

  if ((VzB3->size[2] != r23->size[2]) && ((VzB3->size[2] != 1) && (r23->size[2]
        != 1))) {
    emlrtDimSizeImpxCheckR2021b(VzB3->size[2], r23->size[2], &be_emlrtECI,
      (emlrtConstCTX)sp);
  }

  st.site = &cf_emlrtRSI;
  repmat(&st, dEvQ_TFA2, Bld->nb, r22);
  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Bld->nb;
  st.site = &cf_emlrtRSI;
  i_repmat(&st, dEwB_TFA2, dEvQ_TSS1, r25);
  emxInit_real_T(sp, &r26, 3, &hf_emlrtRTEI);
  st.site = &cf_emlrtRSI;
  cross(&st, r25, rQS1, r26);
  r27 = r26->data;
  if ((r22->size[2] != r26->size[2]) && ((r22->size[2] != 1) && (r26->size[2] !=
        1))) {
    emlrtDimSizeImpxCheckR2021b(r22->size[2], r26->size[2], &de_emlrtECI,
      (emlrtConstCTX)sp);
  }

  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Bld->nb;
  st.site = &cf_emlrtRSI;
  i_repmat(&st, EwL, dEvQ_TSS1, r25);
  emxInit_real_T(sp, &r28, 3, &ik_emlrtRTEI);
  st.site = &cf_emlrtRSI;
  cross(&st, r25, rQS1, r28);
  ZBlNode_Y_data = r28->data;
  if ((r28->size[2] != 19) && (r28->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(19, r28->size[2], &ee_emlrtECI, (emlrtConstCTX)
      sp);
  }

  if (r22->size[2] == r26->size[2]) {
    c_n = 3 * r22->size[2];
    n = r22->size[0] * r22->size[1] * r22->size[2];
    r22->size[0] = 1;
    r22->size[1] = 3;
    emxEnsureCapacity_real_T(sp, r22, n, &hf_emlrtRTEI);
    Vy_data = r22->data;
    n = (c_n / 2) << 1;
    b_n = n - 2;
    for (b_it = 0; b_it <= b_n; b_it += 2) {
      r = _mm_loadu_pd(&Vy_data[b_it]);
      r1 = _mm_loadu_pd(&r27[b_it]);
      _mm_storeu_pd(&Vy_data[b_it], _mm_add_pd(r, r1));
    }

    for (b_it = n; b_it < c_n; b_it++) {
      Vy_data[b_it] += r27[b_it];
    }
  } else {
    st.site = &cf_emlrtRSI;
    f_plus(&st, r22, r26);
  }

  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Bld->nb;
  st.site = &cf_emlrtRSI;
  i_repmat(&st, EwB_TFA2, dEvQ_TSS1, r25);
  if (r28->size[2] == 19) {
    for (it = 0; it <= 54; it += 2) {
      r = _mm_loadu_pd(&HvS1[it]);
      r1 = _mm_loadu_pd(&ZBlNode_Y_data[it]);
      _mm_storeu_pd(&b_HvS1[it], _mm_add_pd(r, r1));
    }

    b_HvS1[56] = HvS1[56] + ZBlNode_Y_data[56];
    st.site = &cf_emlrtRSI;
    cross(&st, r25, b_HvS1, r26);
    r27 = r26->data;
  } else {
    st.site = &cf_emlrtRSI;
    binary_expand_op_94(&st, r26, cf_emlrtRSI, r25, HvS1, r28);
    r27 = r26->data;
  }

  if ((r22->size[2] != r26->size[2]) && ((r22->size[2] != 1) && (r26->size[2] !=
        1))) {
    emlrtDimSizeImpxCheckR2021b(r22->size[2], r26->size[2], &de_emlrtECI,
      (emlrtConstCTX)sp);
  }

  st.site = &df_emlrtRSI;
  repmat(&st, dEvQ_TSS2, Bld->nb, r25);
  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Bld->nb;
  st.site = &df_emlrtRSI;
  i_repmat(&st, dEwB_TSS2, dEvQ_TSS1, r28);
  emxInit_real_T(sp, &r29, 3, &if_emlrtRTEI);
  st.site = &df_emlrtRSI;
  cross(&st, r28, rQS1, r29);
  r30 = r29->data;
  if ((r25->size[2] != r29->size[2]) && ((r25->size[2] != 1) && (r29->size[2] !=
        1))) {
    emlrtDimSizeImpxCheckR2021b(r25->size[2], r29->size[2], &fe_emlrtECI,
      (emlrtConstCTX)sp);
  }

  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Bld->nb;
  st.site = &df_emlrtRSI;
  i_repmat(&st, EwL, dEvQ_TSS1, r28);
  emxInit_real_T(sp, &r31, 3, &jk_emlrtRTEI);
  st.site = &df_emlrtRSI;
  cross(&st, r28, rQS1, r31);
  ZBlNode_Y_data = r31->data;
  if ((r31->size[2] != 19) && (r31->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(19, r31->size[2], &ge_emlrtECI, (emlrtConstCTX)
      sp);
  }

  if (r25->size[2] == r29->size[2]) {
    c_n = 3 * r25->size[2];
    n = r25->size[0] * r25->size[1] * r25->size[2];
    r25->size[0] = 1;
    r25->size[1] = 3;
    emxEnsureCapacity_real_T(sp, r25, n, &if_emlrtRTEI);
    Vy_data = r25->data;
    n = (c_n / 2) << 1;
    b_n = n - 2;
    for (b_it = 0; b_it <= b_n; b_it += 2) {
      r = _mm_loadu_pd(&Vy_data[b_it]);
      r1 = _mm_loadu_pd(&r30[b_it]);
      _mm_storeu_pd(&Vy_data[b_it], _mm_add_pd(r, r1));
    }

    for (b_it = n; b_it < c_n; b_it++) {
      Vy_data[b_it] += r30[b_it];
    }
  } else {
    st.site = &df_emlrtRSI;
    f_plus(&st, r25, r29);
  }

  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Bld->nb;
  st.site = &df_emlrtRSI;
  i_repmat(&st, EwB_TSS2, dEvQ_TSS1, r28);
  if (r31->size[2] == 19) {
    for (it = 0; it <= 54; it += 2) {
      r = _mm_loadu_pd(&HvS1[it]);
      r1 = _mm_loadu_pd(&ZBlNode_Y_data[it]);
      _mm_storeu_pd(&b_HvS1[it], _mm_add_pd(r, r1));
    }

    b_HvS1[56] = HvS1[56] + ZBlNode_Y_data[56];
    st.site = &df_emlrtRSI;
    cross(&st, r28, b_HvS1, r29);
    r30 = r29->data;
  } else {
    st.site = &df_emlrtRSI;
    binary_expand_op_94(&st, r29, df_emlrtRSI, r28, HvS1, r31);
    r30 = r29->data;
  }

  if ((r25->size[2] != r29->size[2]) && ((r25->size[2] != 1) && (r29->size[2] !=
        1))) {
    emlrtDimSizeImpxCheckR2021b(r25->size[2], r29->size[2], &fe_emlrtECI,
      (emlrtConstCTX)sp);
  }

  st.site = &ef_emlrtRSI;
  repmat(&st, dEvQ_yaw, Bld->nb, r28);
  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Bld->nb;
  st.site = &ef_emlrtRSI;
  i_repmat(&st, dEwN_yaw, dEvQ_TSS1, r31);
  emxInit_real_T(sp, &r32, 3, &jf_emlrtRTEI);
  st.site = &ef_emlrtRSI;
  cross(&st, r31, rQS1, r32);
  Vz_data = r32->data;
  if ((r28->size[2] != r32->size[2]) && ((r28->size[2] != 1) && (r32->size[2] !=
        1))) {
    emlrtDimSizeImpxCheckR2021b(r28->size[2], r32->size[2], &he_emlrtECI,
      (emlrtConstCTX)sp);
  }

  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Bld->nb;
  st.site = &ef_emlrtRSI;
  i_repmat(&st, EwL, dEvQ_TSS1, r31);
  emxInit_real_T(sp, &r33, 3, &kk_emlrtRTEI);
  st.site = &ef_emlrtRSI;
  cross(&st, r31, rQS1, r33);
  r34 = r33->data;
  if ((r33->size[2] != 19) && (r33->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(19, r33->size[2], &ie_emlrtECI, (emlrtConstCTX)
      sp);
  }

  if (r28->size[2] == r32->size[2]) {
    c_n = 3 * r28->size[2];
    n = r28->size[0] * r28->size[1] * r28->size[2];
    r28->size[0] = 1;
    r28->size[1] = 3;
    emxEnsureCapacity_real_T(sp, r28, n, &jf_emlrtRTEI);
    ZBlNode_Y_data = r28->data;
    n = (c_n / 2) << 1;
    b_n = n - 2;
    for (b_it = 0; b_it <= b_n; b_it += 2) {
      r = _mm_loadu_pd(&ZBlNode_Y_data[b_it]);
      r1 = _mm_loadu_pd(&Vz_data[b_it]);
      _mm_storeu_pd(&ZBlNode_Y_data[b_it], _mm_add_pd(r, r1));
    }

    for (b_it = n; b_it < c_n; b_it++) {
      ZBlNode_Y_data[b_it] += Vz_data[b_it];
    }
  } else {
    st.site = &ef_emlrtRSI;
    f_plus(&st, r28, r32);
  }

  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Bld->nb;
  st.site = &ef_emlrtRSI;
  i_repmat(&st, EwL_yaw, dEvQ_TSS1, r31);
  if (r33->size[2] == 19) {
    for (it = 0; it <= 54; it += 2) {
      r = _mm_loadu_pd(&HvS1[it]);
      r1 = _mm_loadu_pd(&r34[it]);
      _mm_storeu_pd(&b_HvS1[it], _mm_add_pd(r, r1));
    }

    b_HvS1[56] = HvS1[56] + r34[56];
    st.site = &ef_emlrtRSI;
    cross(&st, r31, b_HvS1, r32);
    Vz_data = r32->data;
  } else {
    st.site = &ef_emlrtRSI;
    binary_expand_op_94(&st, r32, ef_emlrtRSI, r31, HvS1, r33);
    Vz_data = r32->data;
  }

  if ((r28->size[2] != r32->size[2]) && ((r28->size[2] != 1) && (r32->size[2] !=
        1))) {
    emlrtDimSizeImpxCheckR2021b(r28->size[2], r32->size[2], &he_emlrtECI,
      (emlrtConstCTX)sp);
  }

  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Bld->nb;
  st.site = &ff_emlrtRSI;
  i_repmat(&st, EwL, dEvQ_TSS1, r31);
  st.site = &ff_emlrtRSI;
  cross(&st, r31, rQS1, r33);
  r34 = r33->data;
  if ((r33->size[2] != 19) && (r33->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(19, r33->size[2], &je_emlrtECI, (emlrtConstCTX)
      sp);
  }

  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Bld->nb;
  st.site = &ff_emlrtRSI;
  i_repmat(&st, dEwL_GeAz, dEvQ_TSS1, r31);
  emxInit_real_T(sp, &r35, 3, &lk_emlrtRTEI);
  st.site = &ff_emlrtRSI;
  cross(&st, r31, rQS1, r35);
  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Bld->nb;
  st.site = &ff_emlrtRSI;
  i_repmat(&st, EwL_GeAz, dEvQ_TSS1, r31);
  if (r33->size[2] == 19) {
    for (it = 0; it <= 54; it += 2) {
      r = _mm_loadu_pd(&HvS1[it]);
      r1 = _mm_loadu_pd(&r34[it]);
      _mm_storeu_pd(&b_HvS1[it], _mm_add_pd(r, r1));
    }

    b_HvS1[56] = HvS1[56] + r34[56];
    st.site = &ff_emlrtRSI;
    cross(&st, r31, b_HvS1, r33);
    r34 = r33->data;
  } else {
    st.site = &ff_emlrtRSI;
    binary_expand_op_92(&st, r33, ff_emlrtRSI, r31, HvS1);
    r34 = r33->data;
  }

  if ((r35->size[2] != r33->size[2]) && ((r35->size[2] != 1) && (r33->size[2] !=
        1))) {
    emlrtDimSizeImpxCheckR2021b(r35->size[2], r33->size[2], &ke_emlrtECI,
      (emlrtConstCTX)sp);
  }

  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Bld->nb;
  st.site = &gf_emlrtRSI;
  i_repmat(&st, EwL, dEvQ_TSS1, r31);
  emxInit_real_T(sp, &r36, 3, &mk_emlrtRTEI);
  st.site = &gf_emlrtRSI;
  cross(&st, r31, rQS1, r36);
  r37 = r36->data;
  if ((r36->size[2] != 19) && (r36->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(19, r36->size[2], &le_emlrtECI, (emlrtConstCTX)
      sp);
  }

  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Bld->nb;
  st.site = &gf_emlrtRSI;
  i_repmat(&st, dEwL_GeAz, dEvQ_TSS1, r31);
  emxInit_real_T(sp, &r38, 3, &nk_emlrtRTEI);
  st.site = &gf_emlrtRSI;
  cross(&st, r31, rQS1, r38);
  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Bld->nb;
  st.site = &gf_emlrtRSI;
  i_repmat(&st, EwL_GeAz, dEvQ_TSS1, r31);
  if (r36->size[2] == 19) {
    for (it = 0; it <= 54; it += 2) {
      r = _mm_loadu_pd(&HvS1[it]);
      r1 = _mm_loadu_pd(&r37[it]);
      _mm_storeu_pd(&HvS1[it], _mm_add_pd(r, r1));
    }

    HvS1[56] += r37[56];
    st.site = &gf_emlrtRSI;
    cross(&st, r31, HvS1, r36);
    r37 = r36->data;
  } else {
    st.site = &gf_emlrtRSI;
    binary_expand_op_92(&st, r36, gf_emlrtRSI, r31, HvS1);
    r37 = r36->data;
  }

  if ((r38->size[2] != r36->size[2]) && ((r38->size[2] != 1) && (r36->size[2] !=
        1))) {
    emlrtDimSizeImpxCheckR2021b(r38->size[2], r36->size[2], &me_emlrtECI,
      (emlrtConstCTX)sp);
  }

  st.site = &hf_emlrtRSI;
  repmat(&st, EwL, Bld->nb, r31);
  emxInit_real_T(sp, &r39, 3, &ok_emlrtRTEI);
  st.site = &hf_emlrtRSI;
  cross(&st, r31, EvS1_B1F1, r39);
  r40 = r39->data;
  if ((r39->size[2] != 19) && (r39->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(19, r39->size[2], &ne_emlrtECI, (emlrtConstCTX)
      sp);
  }

  I_pr_app = q_Nom[47];
  I_yaw_app = q_Nom[49];
  rZT_3 = q_Nom[48];
  rQS1_2 = I_G[2];
  FRotor_R_idx_0 = I_G[5];
  FRotor_R_idx_1 = I_G[8];
  for (it = 0; it < 19; it++) {
    FRotor_R_idx_2 = (Bld->s11_B1[it] * I_pr_app + Bld->s12_B1[it] * I_yaw_app)
      + Bld->s13_B1[it] * rZT_3;
    dEvS1[3 * it] = FRotor_R_idx_2 * rQS1_2;
    dEvS1[3 * it + 1] = FRotor_R_idx_2 * FRotor_R_idx_0;
    dEvS1[3 * it + 2] = FRotor_R_idx_2 * FRotor_R_idx_1;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }

  /*  no need to reshape */
  st.site = &if_emlrtRSI;
  repmat(&st, EwL, Bld->nb, r31);
  emxInit_real_T(sp, &r41, 3, &pk_emlrtRTEI);
  st.site = &if_emlrtRSI;
  cross(&st, r31, EvS1_B1E1, r41);
  r42 = r41->data;
  if ((r41->size[2] != 19) && (r41->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(19, r41->size[2], &oe_emlrtECI, (emlrtConstCTX)
      sp);
  }

  I_pr_app = q_Nom[48];
  rZT_3 = q_Nom[47];
  for (it = 0; it < 19; it++) {
    FRotor_R_idx_2 = (Bld->s33_B1[it] * I_pr_app + Bld->s23_B1[it] * I_yaw_app)
      + Bld->s13_B1[it] * rZT_3;
    EvS1[3 * it] = FRotor_R_idx_2 * rQS1_2;
    EvS1[3 * it + 1] = FRotor_R_idx_2 * FRotor_R_idx_0;
    EvS1[3 * it + 2] = FRotor_R_idx_2 * FRotor_R_idx_1;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }

  st.site = &jf_emlrtRSI;
  repmat(&st, EwL, Bld->nb, r31);
  emxInit_real_T(sp, &r43, 3, &qk_emlrtRTEI);
  st.site = &jf_emlrtRSI;
  cross(&st, r31, EvS1_B1F2, r43);
  r44 = r43->data;
  if ((r43->size[2] != 19) && (r43->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(19, r43->size[2], &pe_emlrtECI, (emlrtConstCTX)
      sp);
  }

  I_pr_app = q_Nom[49];
  I_yaw_app = q_Nom[47];
  rZT_3 = q_Nom[48];
  for (it = 0; it < 19; it++) {
    FRotor_R_idx_2 = (Bld->s22_B1[it] * I_pr_app + Bld->s12_B1[it] * I_yaw_app)
      + Bld->s23_B1[it] * rZT_3;
    EvS3[3 * it] = FRotor_R_idx_2 * rQS1_2;
    EvS3[3 * it + 1] = FRotor_R_idx_2 * FRotor_R_idx_0;
    EvS3[3 * it + 2] = FRotor_R_idx_2 * FRotor_R_idx_1;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }

  if (r6->size[2] == loop_ub_tmp->size[2]) {
    I_pr_app = q_Nom[37];
    c_n = 3 * r6->size[2];
    n = r6->size[0] * r6->size[1] * r6->size[2];
    r6->size[0] = 1;
    r6->size[1] = 3;
    emxEnsureCapacity_real_T(sp, r6, n, &kf_emlrtRTEI);
    r7 = r6->data;
    n = (c_n / 2) << 1;
    b_n = n - 2;
    for (b_it = 0; b_it <= b_n; b_it += 2) {
      r = _mm_loadu_pd(&r7[b_it]);
      r1 = _mm_loadu_pd(&r9[b_it]);
      _mm_storeu_pd(&r7[b_it], _mm_mul_pd(_mm_add_pd(r, r1), _mm_set1_pd
        (I_pr_app)));
    }

    for (b_it = n; b_it < c_n; b_it++) {
      r7[b_it] = (r7[b_it] + r9[b_it]) * I_pr_app;
    }
  } else {
    st.site = &qv_emlrtRSI;
    binary_expand_op_91(&st, r6, loop_ub_tmp, q_Nom);
  }

  if (r8->size[2] == r15->size[2]) {
    I_pr_app = q_Nom[38];
    c_n = 3 * r8->size[2];
    n = r8->size[0] * r8->size[1] * r8->size[2];
    r8->size[0] = 1;
    r8->size[1] = 3;
    emxEnsureCapacity_real_T(sp, r8, n, &lf_emlrtRTEI);
    ZBlNode_Y_data = r8->data;
    n = (c_n / 2) << 1;
    b_n = n - 2;
    for (b_it = 0; b_it <= b_n; b_it += 2) {
      r = _mm_loadu_pd(&ZBlNode_Y_data[b_it]);
      r1 = _mm_loadu_pd(&Vx_data[b_it]);
      _mm_storeu_pd(&ZBlNode_Y_data[b_it], _mm_mul_pd(_mm_add_pd(r, r1),
        _mm_set1_pd(I_pr_app)));
    }

    for (b_it = n; b_it < c_n; b_it++) {
      ZBlNode_Y_data[b_it] = (ZBlNode_Y_data[b_it] + Vx_data[b_it]) * I_pr_app;
    }
  } else {
    st.site = &qv_emlrtRSI;
    binary_expand_op_90(&st, r8, r15, q_Nom);
    ZBlNode_Y_data = r8->data;
  }

  if ((r6->size[2] != r8->size[2]) && ((r6->size[2] != 1) && (r8->size[2] != 1)))
  {
    emlrtDimSizeImpxCheckR2021b(r6->size[2], r8->size[2], &qe_emlrtECI,
      (emlrtConstCTX)sp);
  }

  if (r6->size[2] == r8->size[2]) {
    c_n = 3 * r6->size[2];
    n = r6->size[0] * r6->size[1] * r6->size[2];
    r6->size[0] = 1;
    r6->size[1] = 3;
    emxEnsureCapacity_real_T(sp, r6, n, &kf_emlrtRTEI);
    r7 = r6->data;
    n = (c_n / 2) << 1;
    b_n = n - 2;
    for (b_it = 0; b_it <= b_n; b_it += 2) {
      r = _mm_loadu_pd(&r7[b_it]);
      r1 = _mm_loadu_pd(&ZBlNode_Y_data[b_it]);
      _mm_storeu_pd(&r7[b_it], _mm_add_pd(r, r1));
    }

    for (b_it = n; b_it < c_n; b_it++) {
      r7[b_it] += ZBlNode_Y_data[b_it];
    }
  } else {
    st.site = &ov_emlrtRSI;
    f_plus(&st, r6, r8);
  }

  if (r16->size[2] == VzB1->size[2]) {
    I_pr_app = q_Nom[39];
    c_n = 3 * r16->size[2];
    n = r16->size[0] * r16->size[1] * r16->size[2];
    r16->size[0] = 1;
    r16->size[1] = 3;
    emxEnsureCapacity_real_T(sp, r16, n, &mf_emlrtRTEI);
    Vy_data = r16->data;
    n = (c_n / 2) << 1;
    b_n = n - 2;
    for (b_it = 0; b_it <= b_n; b_it += 2) {
      r = _mm_loadu_pd(&Vy_data[b_it]);
      r1 = _mm_loadu_pd(&VzB1_data[b_it]);
      _mm_storeu_pd(&Vy_data[b_it], _mm_mul_pd(_mm_add_pd(r, r1), _mm_set1_pd
        (I_pr_app)));
    }

    for (b_it = n; b_it < c_n; b_it++) {
      Vy_data[b_it] = (Vy_data[b_it] + VzB1_data[b_it]) * I_pr_app;
    }
  } else {
    st.site = &qv_emlrtRSI;
    binary_expand_op_89(&st, r16, VzB1, q_Nom);
    Vy_data = r16->data;
  }

  if ((r6->size[2] != r16->size[2]) && ((r6->size[2] != 1) && (r16->size[2] != 1)))
  {
    emlrtDimSizeImpxCheckR2021b(r6->size[2], r16->size[2], &qe_emlrtECI,
      (emlrtConstCTX)sp);
  }

  if (r6->size[2] == r16->size[2]) {
    c_n = 3 * r6->size[2];
    n = r6->size[0] * r6->size[1] * r6->size[2];
    r6->size[0] = 1;
    r6->size[1] = 3;
    emxEnsureCapacity_real_T(sp, r6, n, &kf_emlrtRTEI);
    r7 = r6->data;
    n = (c_n / 2) << 1;
    b_n = n - 2;
    for (b_it = 0; b_it <= b_n; b_it += 2) {
      r = _mm_loadu_pd(&r7[b_it]);
      r1 = _mm_loadu_pd(&Vy_data[b_it]);
      _mm_storeu_pd(&r7[b_it], _mm_add_pd(r, r1));
    }

    for (b_it = n; b_it < c_n; b_it++) {
      r7[b_it] += Vy_data[b_it];
    }
  } else {
    st.site = &ov_emlrtRSI;
    f_plus(&st, r6, r16);
  }

  if (VzB2->size[2] == r21->size[2]) {
    I_pr_app = q_Nom[40];
    c_n = 3 * VzB2->size[2];
    n = VzB2->size[0] * VzB2->size[1] * VzB2->size[2];
    VzB2->size[0] = 1;
    VzB2->size[1] = 3;
    emxEnsureCapacity_real_T(sp, VzB2, n, &nf_emlrtRTEI);
    ZBlNode_Z_data = VzB2->data;
    n = (c_n / 2) << 1;
    b_n = n - 2;
    for (b_it = 0; b_it <= b_n; b_it += 2) {
      r = _mm_loadu_pd(&ZBlNode_Z_data[b_it]);
      r1 = _mm_loadu_pd(&vr_X_data[b_it]);
      _mm_storeu_pd(&ZBlNode_Z_data[b_it], _mm_mul_pd(_mm_add_pd(r, r1), r10));
    }

    for (b_it = n; b_it < c_n; b_it++) {
      ZBlNode_Z_data[b_it] = (ZBlNode_Z_data[b_it] + vr_X_data[b_it]) * I_pr_app;
    }
  } else {
    st.site = &qv_emlrtRSI;
    binary_expand_op_88(&st, VzB2, r21, q_Nom);
    ZBlNode_Z_data = VzB2->data;
  }

  if ((r6->size[2] != VzB2->size[2]) && ((r6->size[2] != 1) && (VzB2->size[2] !=
        1))) {
    emlrtDimSizeImpxCheckR2021b(r6->size[2], VzB2->size[2], &qe_emlrtECI,
      (emlrtConstCTX)sp);
  }

  if (r6->size[2] == VzB2->size[2]) {
    c_n = 3 * r6->size[2];
    n = r6->size[0] * r6->size[1] * r6->size[2];
    r6->size[0] = 1;
    r6->size[1] = 3;
    emxEnsureCapacity_real_T(sp, r6, n, &kf_emlrtRTEI);
    r7 = r6->data;
    n = (c_n / 2) << 1;
    b_n = n - 2;
    for (b_it = 0; b_it <= b_n; b_it += 2) {
      r = _mm_loadu_pd(&r7[b_it]);
      r1 = _mm_loadu_pd(&ZBlNode_Z_data[b_it]);
      _mm_storeu_pd(&r7[b_it], _mm_add_pd(r, r1));
    }

    for (b_it = n; b_it < c_n; b_it++) {
      r7[b_it] += ZBlNode_Z_data[b_it];
    }
  } else {
    st.site = &ov_emlrtRSI;
    f_plus(&st, r6, VzB2);
  }

  if (VzB3->size[2] == r23->size[2]) {
    I_pr_app = q_Nom[41];
    c_n = 3 * VzB3->size[2];
    n = VzB3->size[0] * VzB3->size[1] * VzB3->size[2];
    VzB3->size[0] = 1;
    VzB3->size[1] = 3;
    emxEnsureCapacity_real_T(sp, VzB3, n, &of_emlrtRTEI);
    ZBlNode_Z_data = VzB3->data;
    n = (c_n / 2) << 1;
    b_n = n - 2;
    for (b_it = 0; b_it <= b_n; b_it += 2) {
      r = _mm_loadu_pd(&ZBlNode_Z_data[b_it]);
      r1 = _mm_loadu_pd(&r24[b_it]);
      _mm_storeu_pd(&ZBlNode_Z_data[b_it], _mm_mul_pd(_mm_add_pd(r, r1), r11));
    }

    for (b_it = n; b_it < c_n; b_it++) {
      ZBlNode_Z_data[b_it] = (ZBlNode_Z_data[b_it] + r24[b_it]) * I_pr_app;
    }
  } else {
    st.site = &qv_emlrtRSI;
    binary_expand_op_87(&st, VzB3, r23, q_Nom);
    ZBlNode_Z_data = VzB3->data;
  }

  if ((r6->size[2] != VzB3->size[2]) && ((r6->size[2] != 1) && (VzB3->size[2] !=
        1))) {
    emlrtDimSizeImpxCheckR2021b(r6->size[2], VzB3->size[2], &qe_emlrtECI,
      (emlrtConstCTX)sp);
  }

  if (r6->size[2] == VzB3->size[2]) {
    c_n = 3 * r6->size[2];
    n = r6->size[0] * r6->size[1] * r6->size[2];
    r6->size[0] = 1;
    r6->size[1] = 3;
    emxEnsureCapacity_real_T(sp, r6, n, &kf_emlrtRTEI);
    r7 = r6->data;
    n = (c_n / 2) << 1;
    b_n = n - 2;
    for (b_it = 0; b_it <= b_n; b_it += 2) {
      r = _mm_loadu_pd(&r7[b_it]);
      r1 = _mm_loadu_pd(&ZBlNode_Z_data[b_it]);
      _mm_storeu_pd(&r7[b_it], _mm_add_pd(r, r1));
    }

    for (b_it = n; b_it < c_n; b_it++) {
      r7[b_it] += ZBlNode_Z_data[b_it];
    }
  } else {
    st.site = &ov_emlrtRSI;
    f_plus(&st, r6, VzB3);
  }

  if (r22->size[2] == r26->size[2]) {
    I_pr_app = q_Nom[42];
    c_n = 3 * r22->size[2];
    n = r22->size[0] * r22->size[1] * r22->size[2];
    r22->size[0] = 1;
    r22->size[1] = 3;
    emxEnsureCapacity_real_T(sp, r22, n, &pf_emlrtRTEI);
    Vy_data = r22->data;
    n = (c_n / 2) << 1;
    b_n = n - 2;
    for (b_it = 0; b_it <= b_n; b_it += 2) {
      r = _mm_loadu_pd(&Vy_data[b_it]);
      r1 = _mm_loadu_pd(&r27[b_it]);
      _mm_storeu_pd(&Vy_data[b_it], _mm_mul_pd(_mm_add_pd(r, r1), r12));
    }

    for (b_it = n; b_it < c_n; b_it++) {
      Vy_data[b_it] = (Vy_data[b_it] + r27[b_it]) * I_pr_app;
    }
  } else {
    st.site = &qv_emlrtRSI;
    binary_expand_op_86(&st, r22, r26, q_Nom);
    Vy_data = r22->data;
  }

  if ((r6->size[2] != r22->size[2]) && ((r6->size[2] != 1) && (r22->size[2] != 1)))
  {
    emlrtDimSizeImpxCheckR2021b(r6->size[2], r22->size[2], &qe_emlrtECI,
      (emlrtConstCTX)sp);
  }

  if (r6->size[2] == r22->size[2]) {
    c_n = 3 * r6->size[2];
    n = r6->size[0] * r6->size[1] * r6->size[2];
    r6->size[0] = 1;
    r6->size[1] = 3;
    emxEnsureCapacity_real_T(sp, r6, n, &kf_emlrtRTEI);
    r7 = r6->data;
    n = (c_n / 2) << 1;
    b_n = n - 2;
    for (b_it = 0; b_it <= b_n; b_it += 2) {
      r = _mm_loadu_pd(&r7[b_it]);
      r1 = _mm_loadu_pd(&Vy_data[b_it]);
      _mm_storeu_pd(&r7[b_it], _mm_add_pd(r, r1));
    }

    for (b_it = n; b_it < c_n; b_it++) {
      r7[b_it] += Vy_data[b_it];
    }
  } else {
    st.site = &ov_emlrtRSI;
    f_plus(&st, r6, r22);
  }

  if (r25->size[2] == r29->size[2]) {
    I_pr_app = q_Nom[43];
    c_n = 3 * r25->size[2];
    n = r25->size[0] * r25->size[1] * r25->size[2];
    r25->size[0] = 1;
    r25->size[1] = 3;
    emxEnsureCapacity_real_T(sp, r25, n, &qf_emlrtRTEI);
    Vy_data = r25->data;
    n = (c_n / 2) << 1;
    b_n = n - 2;
    for (b_it = 0; b_it <= b_n; b_it += 2) {
      r = _mm_loadu_pd(&Vy_data[b_it]);
      r1 = _mm_loadu_pd(&r30[b_it]);
      _mm_storeu_pd(&Vy_data[b_it], _mm_mul_pd(_mm_add_pd(r, r1), r13));
    }

    for (b_it = n; b_it < c_n; b_it++) {
      Vy_data[b_it] = (Vy_data[b_it] + r30[b_it]) * I_pr_app;
    }
  } else {
    st.site = &qv_emlrtRSI;
    binary_expand_op_85(&st, r25, r29, q_Nom);
    Vy_data = r25->data;
  }

  if ((r6->size[2] != r25->size[2]) && ((r6->size[2] != 1) && (r25->size[2] != 1)))
  {
    emlrtDimSizeImpxCheckR2021b(r6->size[2], r25->size[2], &qe_emlrtECI,
      (emlrtConstCTX)sp);
  }

  if (r6->size[2] == r25->size[2]) {
    c_n = 3 * r6->size[2];
    n = r6->size[0] * r6->size[1] * r6->size[2];
    r6->size[0] = 1;
    r6->size[1] = 3;
    emxEnsureCapacity_real_T(sp, r6, n, &kf_emlrtRTEI);
    r7 = r6->data;
    n = (c_n / 2) << 1;
    b_n = n - 2;
    for (b_it = 0; b_it <= b_n; b_it += 2) {
      r = _mm_loadu_pd(&r7[b_it]);
      r1 = _mm_loadu_pd(&Vy_data[b_it]);
      _mm_storeu_pd(&r7[b_it], _mm_add_pd(r, r1));
    }

    for (b_it = n; b_it < c_n; b_it++) {
      r7[b_it] += Vy_data[b_it];
    }
  } else {
    st.site = &ov_emlrtRSI;
    f_plus(&st, r6, r25);
  }

  if (r28->size[2] == r32->size[2]) {
    I_pr_app = q_Nom[44];
    c_n = 3 * r28->size[2];
    n = r28->size[0] * r28->size[1] * r28->size[2];
    r28->size[0] = 1;
    r28->size[1] = 3;
    emxEnsureCapacity_real_T(sp, r28, n, &rf_emlrtRTEI);
    ZBlNode_Y_data = r28->data;
    n = (c_n / 2) << 1;
    b_n = n - 2;
    for (b_it = 0; b_it <= b_n; b_it += 2) {
      r = _mm_loadu_pd(&ZBlNode_Y_data[b_it]);
      r1 = _mm_loadu_pd(&Vz_data[b_it]);
      _mm_storeu_pd(&ZBlNode_Y_data[b_it], _mm_mul_pd(_mm_add_pd(r, r1), r14));
    }

    for (b_it = n; b_it < c_n; b_it++) {
      ZBlNode_Y_data[b_it] = (ZBlNode_Y_data[b_it] + Vz_data[b_it]) * I_pr_app;
    }
  } else {
    st.site = &qv_emlrtRSI;
    binary_expand_op_84(&st, r28, r32, q_Nom);
    ZBlNode_Y_data = r28->data;
  }

  if ((r6->size[2] != r28->size[2]) && ((r6->size[2] != 1) && (r28->size[2] != 1)))
  {
    emlrtDimSizeImpxCheckR2021b(r6->size[2], r28->size[2], &qe_emlrtECI,
      (emlrtConstCTX)sp);
  }

  if (r6->size[2] == r28->size[2]) {
    c_n = 3 * r6->size[2];
    n = r6->size[0] * r6->size[1] * r6->size[2];
    r6->size[0] = 1;
    r6->size[1] = 3;
    emxEnsureCapacity_real_T(sp, r6, n, &kf_emlrtRTEI);
    r7 = r6->data;
    n = (c_n / 2) << 1;
    b_n = n - 2;
    for (b_it = 0; b_it <= b_n; b_it += 2) {
      r = _mm_loadu_pd(&r7[b_it]);
      r1 = _mm_loadu_pd(&ZBlNode_Y_data[b_it]);
      _mm_storeu_pd(&r7[b_it], _mm_add_pd(r, r1));
    }

    for (b_it = n; b_it < c_n; b_it++) {
      r7[b_it] += ZBlNode_Y_data[b_it];
    }
  } else {
    st.site = &ov_emlrtRSI;
    f_plus(&st, r6, r28);
  }

  if (r35->size[2] == r33->size[2]) {
    I_pr_app = q_Nom[45];
    c_n = 3 * r35->size[2];
    n = r35->size[0] * r35->size[1] * r35->size[2];
    r35->size[0] = 1;
    r35->size[1] = 3;
    emxEnsureCapacity_real_T(sp, r35, n, &sf_emlrtRTEI);
    ZBlNode_Y_data = r35->data;
    n = (c_n / 2) << 1;
    b_n = n - 2;
    for (b_it = 0; b_it <= b_n; b_it += 2) {
      r = _mm_loadu_pd(&ZBlNode_Y_data[b_it]);
      r1 = _mm_loadu_pd(&r34[b_it]);
      _mm_storeu_pd(&ZBlNode_Y_data[b_it], _mm_mul_pd(_mm_add_pd(r, r1),
        _mm_set1_pd(I_pr_app)));
    }

    for (b_it = n; b_it < c_n; b_it++) {
      ZBlNode_Y_data[b_it] = (ZBlNode_Y_data[b_it] + r34[b_it]) * I_pr_app;
    }
  } else {
    st.site = &qv_emlrtRSI;
    binary_expand_op_83(&st, r35, r33, q_Nom);
    ZBlNode_Y_data = r35->data;
  }

  if ((r6->size[2] != r35->size[2]) && ((r6->size[2] != 1) && (r35->size[2] != 1)))
  {
    emlrtDimSizeImpxCheckR2021b(r6->size[2], r35->size[2], &qe_emlrtECI,
      (emlrtConstCTX)sp);
  }

  if (r6->size[2] == r35->size[2]) {
    c_n = 3 * r6->size[2];
    n = r6->size[0] * r6->size[1] * r6->size[2];
    r6->size[0] = 1;
    r6->size[1] = 3;
    emxEnsureCapacity_real_T(sp, r6, n, &kf_emlrtRTEI);
    r7 = r6->data;
    n = (c_n / 2) << 1;
    b_n = n - 2;
    for (b_it = 0; b_it <= b_n; b_it += 2) {
      r = _mm_loadu_pd(&r7[b_it]);
      r1 = _mm_loadu_pd(&ZBlNode_Y_data[b_it]);
      _mm_storeu_pd(&r7[b_it], _mm_add_pd(r, r1));
    }

    for (b_it = n; b_it < c_n; b_it++) {
      r7[b_it] += ZBlNode_Y_data[b_it];
    }
  } else {
    st.site = &ov_emlrtRSI;
    f_plus(&st, r6, r35);
  }

  if (r38->size[2] == r36->size[2]) {
    I_pr_app = q_Nom[46];
    c_n = 3 * r38->size[2];
    n = r38->size[0] * r38->size[1] * r38->size[2];
    r38->size[0] = 1;
    r38->size[1] = 3;
    emxEnsureCapacity_real_T(sp, r38, n, &tf_emlrtRTEI);
    ZBlNode_Y_data = r38->data;
    n = (c_n / 2) << 1;
    b_n = n - 2;
    for (b_it = 0; b_it <= b_n; b_it += 2) {
      r = _mm_loadu_pd(&ZBlNode_Y_data[b_it]);
      r1 = _mm_loadu_pd(&r37[b_it]);
      _mm_storeu_pd(&ZBlNode_Y_data[b_it], _mm_mul_pd(_mm_add_pd(r, r1),
        _mm_set1_pd(I_pr_app)));
    }

    for (b_it = n; b_it < c_n; b_it++) {
      ZBlNode_Y_data[b_it] = (ZBlNode_Y_data[b_it] + r37[b_it]) * I_pr_app;
    }
  } else {
    st.site = &qv_emlrtRSI;
    binary_expand_op_82(&st, r38, r36, q_Nom);
    ZBlNode_Y_data = r38->data;
  }

  if ((r6->size[2] != r38->size[2]) && ((r6->size[2] != 1) && (r38->size[2] != 1)))
  {
    emlrtDimSizeImpxCheckR2021b(r6->size[2], r38->size[2], &qe_emlrtECI,
      (emlrtConstCTX)sp);
  }

  if (r6->size[2] == r38->size[2]) {
    c_n = 3 * r6->size[2];
    n = r6->size[0] * r6->size[1] * r6->size[2];
    r6->size[0] = 1;
    r6->size[1] = 3;
    emxEnsureCapacity_real_T(sp, r6, n, &kf_emlrtRTEI);
    r7 = r6->data;
    n = (c_n / 2) << 1;
    b_n = n - 2;
    for (b_it = 0; b_it <= b_n; b_it += 2) {
      r = _mm_loadu_pd(&r7[b_it]);
      r1 = _mm_loadu_pd(&ZBlNode_Y_data[b_it]);
      _mm_storeu_pd(&r7[b_it], _mm_add_pd(r, r1));
    }

    for (b_it = n; b_it < c_n; b_it++) {
      r7[b_it] += ZBlNode_Y_data[b_it];
    }
  } else {
    st.site = &ov_emlrtRSI;
    f_plus(&st, r6, r38);
    r7 = r6->data;
  }

  if ((r6->size[2] != 19) && (r6->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(r6->size[2], 19, &qe_emlrtECI, (emlrtConstCTX)sp);
  }

  if ((r39->size[2] == 19) && (r6->size[2] == 19) && (r41->size[2] == 19) &&
      (r43->size[2] == 19)) {
    I_pr_app = q_Nom[47];
    I_yaw_app = q_Nom[48];
    rZT_3 = q_Nom[49];
    r = _mm_set1_pd(-1.0);
    for (it = 0; it <= 54; it += 2) {
      r1 = _mm_loadu_pd(&dEvS1[it]);
      r2 = _mm_loadu_pd(&r40[it]);
      r3 = _mm_loadu_pd(&r7[it]);
      r4 = _mm_loadu_pd(&EvS1[it]);
      r5 = _mm_loadu_pd(&r42[it]);
      r17 = _mm_loadu_pd(&EvS3[it]);
      r18 = _mm_loadu_pd(&r44[it]);
      _mm_storeu_pd(&dEvS1[it], _mm_add_pd(_mm_add_pd(_mm_add_pd(r3, _mm_mul_pd
        (_mm_add_pd(_mm_mul_pd(r1, r), r2), _mm_set1_pd(I_pr_app))), _mm_mul_pd
        (_mm_add_pd(_mm_mul_pd(r4, r), r5), _mm_set1_pd(I_yaw_app))), _mm_mul_pd
        (_mm_add_pd(_mm_mul_pd(r17, r), r18), _mm_set1_pd(rZT_3))));
    }

    dEvS1[56] = ((r7[56] + (-dEvS1[56] + r40[56]) * q_Nom[47]) + (-EvS1[56] +
      r42[56]) * q_Nom[48]) + (-EvS3[56] + r44[56]) * q_Nom[49];
  } else {
    binary_expand_op_123(dEvS1, r6, r39, q_Nom, EvS1, r41, EvS3, r43);
  }

  /*  #9. Blade 2 */
  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Bld->nb;
  st.site = &kf_emlrtRSI;
  i_repmat(&st, EwL, dEvQ_TSS1, r6);
  st.site = &kf_emlrtRSI;
  cross(&st, r6, rQS2, loop_ub_tmp);
  r9 = loop_ub_tmp->data;
  if ((loop_ub_tmp->size[2] != 19) && (loop_ub_tmp->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(19, loop_ub_tmp->size[2], &re_emlrtECI,
      (emlrtConstCTX)sp);
  }

  st.site = &kf_emlrtRSI;
  repmat(&st, dEvQ_R, Bld->nb, r6);
  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Bld->nb;
  st.site = &kf_emlrtRSI;
  d_repmat(&st, dEvQ_TSS1, r8);
  if (loop_ub_tmp->size[2] == 19) {
    for (it = 0; it <= 54; it += 2) {
      r = _mm_loadu_pd(&HvS2[it]);
      r1 = _mm_loadu_pd(&r9[it]);
      _mm_storeu_pd(&b_HvS1[it], _mm_add_pd(r, r1));
    }

    b_HvS1[56] = HvS2[56] + r9[56];
    st.site = &kf_emlrtRSI;
    cross(&st, r8, b_HvS1, loop_ub_tmp);
    r9 = loop_ub_tmp->data;
  } else {
    st.site = &kf_emlrtRSI;
    binary_expand_op_92(&st, loop_ub_tmp, kf_emlrtRSI, r8, HvS2);
    r9 = loop_ub_tmp->data;
  }

  if ((r6->size[2] != loop_ub_tmp->size[2]) && ((r6->size[2] != 1) &&
       (loop_ub_tmp->size[2] != 1))) {
    emlrtDimSizeImpxCheckR2021b(r6->size[2], loop_ub_tmp->size[2], &se_emlrtECI,
      (emlrtConstCTX)sp);
  }

  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Bld->nb;
  st.site = &lf_emlrtRSI;
  i_repmat(&st, EwL, dEvQ_TSS1, r8);
  st.site = &lf_emlrtRSI;
  cross(&st, r8, rQS2, r15);
  Vx_data = r15->data;
  if ((r15->size[2] != 19) && (r15->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(19, r15->size[2], &te_emlrtECI, (emlrtConstCTX)
      sp);
  }

  st.site = &lf_emlrtRSI;
  repmat(&st, dEvQ_P, Bld->nb, r8);
  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Bld->nb;
  st.site = &lf_emlrtRSI;
  e_repmat(&st, dEvQ_TSS1, r16);
  if (r15->size[2] == 19) {
    for (it = 0; it <= 54; it += 2) {
      r = _mm_loadu_pd(&HvS2[it]);
      r1 = _mm_loadu_pd(&Vx_data[it]);
      _mm_storeu_pd(&b_HvS1[it], _mm_add_pd(r, r1));
    }

    b_HvS1[56] = HvS2[56] + Vx_data[56];
    st.site = &lf_emlrtRSI;
    cross(&st, r16, b_HvS1, r15);
    Vx_data = r15->data;
  } else {
    st.site = &lf_emlrtRSI;
    binary_expand_op_92(&st, r15, lf_emlrtRSI, r16, HvS2);
    Vx_data = r15->data;
  }

  if ((r8->size[2] != r15->size[2]) && ((r8->size[2] != 1) && (r15->size[2] != 1)))
  {
    emlrtDimSizeImpxCheckR2021b(r8->size[2], r15->size[2], &ue_emlrtECI,
      (emlrtConstCTX)sp);
  }

  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Bld->nb;
  st.site = &mf_emlrtRSI;
  i_repmat(&st, EwL, dEvQ_TSS1, r16);
  st.site = &mf_emlrtRSI;
  cross(&st, r16, rQS2, VzB1);
  VzB1_data = VzB1->data;
  if ((VzB1->size[2] != 19) && (VzB1->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(19, VzB1->size[2], &ve_emlrtECI, (emlrtConstCTX)
      sp);
  }

  st.site = &mf_emlrtRSI;
  repmat(&st, dEvQ_Y, Bld->nb, r16);
  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Bld->nb;
  st.site = &mf_emlrtRSI;
  f_repmat(&st, dEvQ_TSS1, VzB2);
  if (VzB1->size[2] == 19) {
    for (it = 0; it <= 54; it += 2) {
      r = _mm_loadu_pd(&HvS2[it]);
      r1 = _mm_loadu_pd(&VzB1_data[it]);
      _mm_storeu_pd(&b_HvS1[it], _mm_add_pd(r, r1));
    }

    b_HvS1[56] = HvS2[56] + VzB1_data[56];
    st.site = &mf_emlrtRSI;
    cross(&st, VzB2, b_HvS1, VzB1);
    VzB1_data = VzB1->data;
  } else {
    st.site = &mf_emlrtRSI;
    binary_expand_op_92(&st, VzB1, mf_emlrtRSI, VzB2, HvS2);
    VzB1_data = VzB1->data;
  }

  if ((r16->size[2] != VzB1->size[2]) && ((r16->size[2] != 1) && (VzB1->size[2]
        != 1))) {
    emlrtDimSizeImpxCheckR2021b(r16->size[2], VzB1->size[2], &we_emlrtECI,
      (emlrtConstCTX)sp);
  }

  st.site = &nf_emlrtRSI;
  repmat(&st, dEvQ_TFA1, Bld->nb, VzB2);
  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Bld->nb;
  st.site = &nf_emlrtRSI;
  i_repmat(&st, dEwB_TFA1, dEvQ_TSS1, VzB3);
  st.site = &nf_emlrtRSI;
  cross(&st, VzB3, rQS2, r21);
  vr_X_data = r21->data;
  if ((VzB2->size[2] != r21->size[2]) && ((VzB2->size[2] != 1) && (r21->size[2]
        != 1))) {
    emlrtDimSizeImpxCheckR2021b(VzB2->size[2], r21->size[2], &xe_emlrtECI,
      (emlrtConstCTX)sp);
  }

  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Bld->nb;
  st.site = &nf_emlrtRSI;
  i_repmat(&st, EwL, dEvQ_TSS1, VzB3);
  st.site = &nf_emlrtRSI;
  cross(&st, VzB3, rQS2, r22);
  Vy_data = r22->data;
  if ((r22->size[2] != 19) && (r22->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(19, r22->size[2], &ye_emlrtECI, (emlrtConstCTX)
      sp);
  }

  if (VzB2->size[2] == r21->size[2]) {
    c_n = 3 * VzB2->size[2];
    n = VzB2->size[0] * VzB2->size[1] * VzB2->size[2];
    VzB2->size[0] = 1;
    VzB2->size[1] = 3;
    emxEnsureCapacity_real_T(sp, VzB2, n, &uf_emlrtRTEI);
    ZBlNode_Z_data = VzB2->data;
    n = (c_n / 2) << 1;
    b_n = n - 2;
    for (b_it = 0; b_it <= b_n; b_it += 2) {
      r = _mm_loadu_pd(&ZBlNode_Z_data[b_it]);
      r1 = _mm_loadu_pd(&vr_X_data[b_it]);
      _mm_storeu_pd(&ZBlNode_Z_data[b_it], _mm_add_pd(r, r1));
    }

    for (b_it = n; b_it < c_n; b_it++) {
      ZBlNode_Z_data[b_it] += vr_X_data[b_it];
    }
  } else {
    st.site = &nf_emlrtRSI;
    f_plus(&st, VzB2, r21);
  }

  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Bld->nb;
  st.site = &nf_emlrtRSI;
  i_repmat(&st, EwB_TFA1, dEvQ_TSS1, VzB3);
  if (r22->size[2] == 19) {
    for (it = 0; it <= 54; it += 2) {
      r = _mm_loadu_pd(&HvS2[it]);
      r1 = _mm_loadu_pd(&Vy_data[it]);
      _mm_storeu_pd(&b_HvS1[it], _mm_add_pd(r, r1));
    }

    b_HvS1[56] = HvS2[56] + Vy_data[56];
    st.site = &nf_emlrtRSI;
    cross(&st, VzB3, b_HvS1, r21);
    vr_X_data = r21->data;
  } else {
    st.site = &nf_emlrtRSI;
    binary_expand_op_94(&st, r21, nf_emlrtRSI, VzB3, HvS2, r22);
    vr_X_data = r21->data;
  }

  if ((VzB2->size[2] != r21->size[2]) && ((VzB2->size[2] != 1) && (r21->size[2]
        != 1))) {
    emlrtDimSizeImpxCheckR2021b(VzB2->size[2], r21->size[2], &xe_emlrtECI,
      (emlrtConstCTX)sp);
  }

  st.site = &of_emlrtRSI;
  repmat(&st, b_dEvQ_TSS1, Bld->nb, VzB3);
  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Bld->nb;
  st.site = &of_emlrtRSI;
  i_repmat(&st, dEwB_TSS1, dEvQ_TSS1, r22);
  st.site = &of_emlrtRSI;
  cross(&st, r22, rQS2, r23);
  r24 = r23->data;
  if ((VzB3->size[2] != r23->size[2]) && ((VzB3->size[2] != 1) && (r23->size[2]
        != 1))) {
    emlrtDimSizeImpxCheckR2021b(VzB3->size[2], r23->size[2], &af_emlrtECI,
      (emlrtConstCTX)sp);
  }

  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Bld->nb;
  st.site = &of_emlrtRSI;
  i_repmat(&st, EwL, dEvQ_TSS1, r22);
  st.site = &of_emlrtRSI;
  cross(&st, r22, rQS2, r25);
  Vy_data = r25->data;
  if ((r25->size[2] != 19) && (r25->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(19, r25->size[2], &bf_emlrtECI, (emlrtConstCTX)
      sp);
  }

  if (VzB3->size[2] == r23->size[2]) {
    c_n = 3 * VzB3->size[2];
    n = VzB3->size[0] * VzB3->size[1] * VzB3->size[2];
    VzB3->size[0] = 1;
    VzB3->size[1] = 3;
    emxEnsureCapacity_real_T(sp, VzB3, n, &vf_emlrtRTEI);
    ZBlNode_Z_data = VzB3->data;
    n = (c_n / 2) << 1;
    b_n = n - 2;
    for (b_it = 0; b_it <= b_n; b_it += 2) {
      r = _mm_loadu_pd(&ZBlNode_Z_data[b_it]);
      r1 = _mm_loadu_pd(&r24[b_it]);
      _mm_storeu_pd(&ZBlNode_Z_data[b_it], _mm_add_pd(r, r1));
    }

    for (b_it = n; b_it < c_n; b_it++) {
      ZBlNode_Z_data[b_it] += r24[b_it];
    }
  } else {
    st.site = &of_emlrtRSI;
    f_plus(&st, VzB3, r23);
  }

  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Bld->nb;
  st.site = &of_emlrtRSI;
  i_repmat(&st, EwB_TSS1, dEvQ_TSS1, r22);
  if (r25->size[2] == 19) {
    for (it = 0; it <= 54; it += 2) {
      r = _mm_loadu_pd(&HvS2[it]);
      r1 = _mm_loadu_pd(&Vy_data[it]);
      _mm_storeu_pd(&b_HvS1[it], _mm_add_pd(r, r1));
    }

    b_HvS1[56] = HvS2[56] + Vy_data[56];
    st.site = &of_emlrtRSI;
    cross(&st, r22, b_HvS1, r23);
    r24 = r23->data;
  } else {
    st.site = &of_emlrtRSI;
    binary_expand_op_94(&st, r23, of_emlrtRSI, r22, HvS2, r25);
    r24 = r23->data;
  }

  if ((VzB3->size[2] != r23->size[2]) && ((VzB3->size[2] != 1) && (r23->size[2]
        != 1))) {
    emlrtDimSizeImpxCheckR2021b(VzB3->size[2], r23->size[2], &af_emlrtECI,
      (emlrtConstCTX)sp);
  }

  st.site = &pf_emlrtRSI;
  repmat(&st, dEvQ_TFA2, Bld->nb, r22);
  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Bld->nb;
  st.site = &pf_emlrtRSI;
  i_repmat(&st, dEwB_TFA2, dEvQ_TSS1, r25);
  st.site = &pf_emlrtRSI;
  cross(&st, r25, rQS2, r26);
  r27 = r26->data;
  if ((r22->size[2] != r26->size[2]) && ((r22->size[2] != 1) && (r26->size[2] !=
        1))) {
    emlrtDimSizeImpxCheckR2021b(r22->size[2], r26->size[2], &cf_emlrtECI,
      (emlrtConstCTX)sp);
  }

  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Bld->nb;
  st.site = &pf_emlrtRSI;
  i_repmat(&st, EwL, dEvQ_TSS1, r25);
  st.site = &pf_emlrtRSI;
  cross(&st, r25, rQS2, r28);
  ZBlNode_Y_data = r28->data;
  if ((r28->size[2] != 19) && (r28->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(19, r28->size[2], &df_emlrtECI, (emlrtConstCTX)
      sp);
  }

  if (r22->size[2] == r26->size[2]) {
    c_n = 3 * r22->size[2];
    n = r22->size[0] * r22->size[1] * r22->size[2];
    r22->size[0] = 1;
    r22->size[1] = 3;
    emxEnsureCapacity_real_T(sp, r22, n, &wf_emlrtRTEI);
    Vy_data = r22->data;
    n = (c_n / 2) << 1;
    b_n = n - 2;
    for (b_it = 0; b_it <= b_n; b_it += 2) {
      r = _mm_loadu_pd(&Vy_data[b_it]);
      r1 = _mm_loadu_pd(&r27[b_it]);
      _mm_storeu_pd(&Vy_data[b_it], _mm_add_pd(r, r1));
    }

    for (b_it = n; b_it < c_n; b_it++) {
      Vy_data[b_it] += r27[b_it];
    }
  } else {
    st.site = &pf_emlrtRSI;
    f_plus(&st, r22, r26);
  }

  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Bld->nb;
  st.site = &pf_emlrtRSI;
  i_repmat(&st, EwB_TFA2, dEvQ_TSS1, r25);
  if (r28->size[2] == 19) {
    for (it = 0; it <= 54; it += 2) {
      r = _mm_loadu_pd(&HvS2[it]);
      r1 = _mm_loadu_pd(&ZBlNode_Y_data[it]);
      _mm_storeu_pd(&b_HvS1[it], _mm_add_pd(r, r1));
    }

    b_HvS1[56] = HvS2[56] + ZBlNode_Y_data[56];
    st.site = &pf_emlrtRSI;
    cross(&st, r25, b_HvS1, r26);
    r27 = r26->data;
  } else {
    st.site = &pf_emlrtRSI;
    binary_expand_op_94(&st, r26, pf_emlrtRSI, r25, HvS2, r28);
    r27 = r26->data;
  }

  if ((r22->size[2] != r26->size[2]) && ((r22->size[2] != 1) && (r26->size[2] !=
        1))) {
    emlrtDimSizeImpxCheckR2021b(r22->size[2], r26->size[2], &cf_emlrtECI,
      (emlrtConstCTX)sp);
  }

  st.site = &qf_emlrtRSI;
  repmat(&st, dEvQ_TSS2, Bld->nb, r25);
  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Bld->nb;
  st.site = &qf_emlrtRSI;
  i_repmat(&st, dEwB_TSS2, dEvQ_TSS1, r28);
  st.site = &qf_emlrtRSI;
  cross(&st, r28, rQS2, r29);
  r30 = r29->data;
  if ((r25->size[2] != r29->size[2]) && ((r25->size[2] != 1) && (r29->size[2] !=
        1))) {
    emlrtDimSizeImpxCheckR2021b(r25->size[2], r29->size[2], &ef_emlrtECI,
      (emlrtConstCTX)sp);
  }

  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Bld->nb;
  st.site = &qf_emlrtRSI;
  i_repmat(&st, EwL, dEvQ_TSS1, r28);
  st.site = &qf_emlrtRSI;
  cross(&st, r28, rQS2, r31);
  ZBlNode_Y_data = r31->data;
  if ((r31->size[2] != 19) && (r31->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(19, r31->size[2], &ff_emlrtECI, (emlrtConstCTX)
      sp);
  }

  if (r25->size[2] == r29->size[2]) {
    c_n = 3 * r25->size[2];
    n = r25->size[0] * r25->size[1] * r25->size[2];
    r25->size[0] = 1;
    r25->size[1] = 3;
    emxEnsureCapacity_real_T(sp, r25, n, &xf_emlrtRTEI);
    Vy_data = r25->data;
    n = (c_n / 2) << 1;
    b_n = n - 2;
    for (b_it = 0; b_it <= b_n; b_it += 2) {
      r = _mm_loadu_pd(&Vy_data[b_it]);
      r1 = _mm_loadu_pd(&r30[b_it]);
      _mm_storeu_pd(&Vy_data[b_it], _mm_add_pd(r, r1));
    }

    for (b_it = n; b_it < c_n; b_it++) {
      Vy_data[b_it] += r30[b_it];
    }
  } else {
    st.site = &qf_emlrtRSI;
    f_plus(&st, r25, r29);
  }

  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Bld->nb;
  st.site = &qf_emlrtRSI;
  i_repmat(&st, EwB_TSS2, dEvQ_TSS1, r28);
  if (r31->size[2] == 19) {
    for (it = 0; it <= 54; it += 2) {
      r = _mm_loadu_pd(&HvS2[it]);
      r1 = _mm_loadu_pd(&ZBlNode_Y_data[it]);
      _mm_storeu_pd(&b_HvS1[it], _mm_add_pd(r, r1));
    }

    b_HvS1[56] = HvS2[56] + ZBlNode_Y_data[56];
    st.site = &qf_emlrtRSI;
    cross(&st, r28, b_HvS1, r29);
    r30 = r29->data;
  } else {
    st.site = &qf_emlrtRSI;
    binary_expand_op_94(&st, r29, qf_emlrtRSI, r28, HvS2, r31);
    r30 = r29->data;
  }

  if ((r25->size[2] != r29->size[2]) && ((r25->size[2] != 1) && (r29->size[2] !=
        1))) {
    emlrtDimSizeImpxCheckR2021b(r25->size[2], r29->size[2], &ef_emlrtECI,
      (emlrtConstCTX)sp);
  }

  st.site = &rf_emlrtRSI;
  repmat(&st, dEvQ_yaw, Bld->nb, r28);
  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Bld->nb;
  st.site = &rf_emlrtRSI;
  i_repmat(&st, dEwN_yaw, dEvQ_TSS1, r31);
  st.site = &rf_emlrtRSI;
  cross(&st, r31, rQS2, r32);
  Vz_data = r32->data;
  if ((r28->size[2] != r32->size[2]) && ((r28->size[2] != 1) && (r32->size[2] !=
        1))) {
    emlrtDimSizeImpxCheckR2021b(r28->size[2], r32->size[2], &gf_emlrtECI,
      (emlrtConstCTX)sp);
  }

  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Bld->nb;
  st.site = &rf_emlrtRSI;
  i_repmat(&st, EwL, dEvQ_TSS1, r31);
  st.site = &rf_emlrtRSI;
  cross(&st, r31, rQS2, r33);
  r34 = r33->data;
  if ((r33->size[2] != 19) && (r33->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(19, r33->size[2], &hf_emlrtECI, (emlrtConstCTX)
      sp);
  }

  if (r28->size[2] == r32->size[2]) {
    c_n = 3 * r28->size[2];
    n = r28->size[0] * r28->size[1] * r28->size[2];
    r28->size[0] = 1;
    r28->size[1] = 3;
    emxEnsureCapacity_real_T(sp, r28, n, &yf_emlrtRTEI);
    ZBlNode_Y_data = r28->data;
    n = (c_n / 2) << 1;
    b_n = n - 2;
    for (b_it = 0; b_it <= b_n; b_it += 2) {
      r = _mm_loadu_pd(&ZBlNode_Y_data[b_it]);
      r1 = _mm_loadu_pd(&Vz_data[b_it]);
      _mm_storeu_pd(&ZBlNode_Y_data[b_it], _mm_add_pd(r, r1));
    }

    for (b_it = n; b_it < c_n; b_it++) {
      ZBlNode_Y_data[b_it] += Vz_data[b_it];
    }
  } else {
    st.site = &rf_emlrtRSI;
    f_plus(&st, r28, r32);
  }

  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Bld->nb;
  st.site = &rf_emlrtRSI;
  i_repmat(&st, EwL_yaw, dEvQ_TSS1, r31);
  if (r33->size[2] == 19) {
    for (it = 0; it <= 54; it += 2) {
      r = _mm_loadu_pd(&HvS2[it]);
      r1 = _mm_loadu_pd(&r34[it]);
      _mm_storeu_pd(&b_HvS1[it], _mm_add_pd(r, r1));
    }

    b_HvS1[56] = HvS2[56] + r34[56];
    st.site = &rf_emlrtRSI;
    cross(&st, r31, b_HvS1, r32);
    Vz_data = r32->data;
  } else {
    st.site = &rf_emlrtRSI;
    binary_expand_op_94(&st, r32, rf_emlrtRSI, r31, HvS2, r33);
    Vz_data = r32->data;
  }

  if ((r28->size[2] != r32->size[2]) && ((r28->size[2] != 1) && (r32->size[2] !=
        1))) {
    emlrtDimSizeImpxCheckR2021b(r28->size[2], r32->size[2], &gf_emlrtECI,
      (emlrtConstCTX)sp);
  }

  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Bld->nb;
  st.site = &sf_emlrtRSI;
  i_repmat(&st, EwL, dEvQ_TSS1, r31);
  st.site = &sf_emlrtRSI;
  cross(&st, r31, rQS2, r33);
  r34 = r33->data;
  if ((r33->size[2] != 19) && (r33->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(19, r33->size[2], &if_emlrtECI, (emlrtConstCTX)
      sp);
  }

  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Bld->nb;
  st.site = &sf_emlrtRSI;
  i_repmat(&st, dEwL_GeAz, dEvQ_TSS1, r31);
  st.site = &sf_emlrtRSI;
  cross(&st, r31, rQS2, r35);
  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Bld->nb;
  st.site = &sf_emlrtRSI;
  i_repmat(&st, EwL_GeAz, dEvQ_TSS1, r31);
  if (r33->size[2] == 19) {
    for (it = 0; it <= 54; it += 2) {
      r = _mm_loadu_pd(&HvS2[it]);
      r1 = _mm_loadu_pd(&r34[it]);
      _mm_storeu_pd(&b_HvS1[it], _mm_add_pd(r, r1));
    }

    b_HvS1[56] = HvS2[56] + r34[56];
    st.site = &sf_emlrtRSI;
    cross(&st, r31, b_HvS1, r33);
    r34 = r33->data;
  } else {
    st.site = &sf_emlrtRSI;
    binary_expand_op_92(&st, r33, sf_emlrtRSI, r31, HvS2);
    r34 = r33->data;
  }

  if ((r35->size[2] != r33->size[2]) && ((r35->size[2] != 1) && (r33->size[2] !=
        1))) {
    emlrtDimSizeImpxCheckR2021b(r35->size[2], r33->size[2], &jf_emlrtECI,
      (emlrtConstCTX)sp);
  }

  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Bld->nb;
  st.site = &tf_emlrtRSI;
  i_repmat(&st, EwL, dEvQ_TSS1, r31);
  st.site = &tf_emlrtRSI;
  cross(&st, r31, rQS2, r36);
  r37 = r36->data;
  if ((r36->size[2] != 19) && (r36->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(19, r36->size[2], &kf_emlrtECI, (emlrtConstCTX)
      sp);
  }

  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Bld->nb;
  st.site = &tf_emlrtRSI;
  i_repmat(&st, dEwL_GeAz, dEvQ_TSS1, r31);
  st.site = &tf_emlrtRSI;
  cross(&st, r31, rQS2, r38);
  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Bld->nb;
  st.site = &tf_emlrtRSI;
  i_repmat(&st, EwL_GeAz, dEvQ_TSS1, r31);
  if (r36->size[2] == 19) {
    for (it = 0; it <= 54; it += 2) {
      r = _mm_loadu_pd(&HvS2[it]);
      r1 = _mm_loadu_pd(&r37[it]);
      _mm_storeu_pd(&HvS2[it], _mm_add_pd(r, r1));
    }

    HvS2[56] += r37[56];
    st.site = &tf_emlrtRSI;
    cross(&st, r31, HvS2, r36);
    r37 = r36->data;
  } else {
    st.site = &tf_emlrtRSI;
    binary_expand_op_92(&st, r36, tf_emlrtRSI, r31, HvS2);
    r37 = r36->data;
  }

  if ((r38->size[2] != r36->size[2]) && ((r38->size[2] != 1) && (r36->size[2] !=
        1))) {
    emlrtDimSizeImpxCheckR2021b(r38->size[2], r36->size[2], &lf_emlrtECI,
      (emlrtConstCTX)sp);
  }

  st.site = &uf_emlrtRSI;
  repmat(&st, EwL, Bld->nb, r31);
  st.site = &uf_emlrtRSI;
  cross(&st, r31, EvS2_B2F1, r39);
  r40 = r39->data;
  if ((r39->size[2] != 19) && (r39->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(19, r39->size[2], &mf_emlrtECI, (emlrtConstCTX)
      sp);
  }

  I_pr_app = q_Nom[50];
  I_yaw_app = q_Nom[52];
  rZT_3 = q_Nom[51];
  rQS1_2 = I_N[2];
  FRotor_R_idx_0 = I_N[5];
  FRotor_R_idx_1 = I_N[8];
  for (it = 0; it < 19; it++) {
    FRotor_R_idx_2 = (Bld->s11_B1[it] * I_pr_app + Bld->s12_B1[it] * I_yaw_app)
      + Bld->s13_B1[it] * rZT_3;
    dEvS2[3 * it] = FRotor_R_idx_2 * rQS1_2;
    dEvS2[3 * it + 1] = FRotor_R_idx_2 * FRotor_R_idx_0;
    dEvS2[3 * it + 2] = FRotor_R_idx_2 * FRotor_R_idx_1;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }

  st.site = &vf_emlrtRSI;
  repmat(&st, EwL, Bld->nb, r31);
  st.site = &vf_emlrtRSI;
  cross(&st, r31, EvS2_B2E1, r41);
  r42 = r41->data;
  if ((r41->size[2] != 19) && (r41->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(19, r41->size[2], &nf_emlrtECI, (emlrtConstCTX)
      sp);
  }

  I_pr_app = q_Nom[51];
  rZT_3 = q_Nom[50];
  for (it = 0; it < 19; it++) {
    FRotor_R_idx_2 = (Bld->s33_B1[it] * I_pr_app + Bld->s23_B1[it] * I_yaw_app)
      + Bld->s13_B1[it] * rZT_3;
    EvS1[3 * it] = FRotor_R_idx_2 * rQS1_2;
    EvS1[3 * it + 1] = FRotor_R_idx_2 * FRotor_R_idx_0;
    EvS1[3 * it + 2] = FRotor_R_idx_2 * FRotor_R_idx_1;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }

  st.site = &wf_emlrtRSI;
  repmat(&st, EwL, Bld->nb, r31);
  st.site = &wf_emlrtRSI;
  cross(&st, r31, EvS2_B2F2, r43);
  r44 = r43->data;
  if ((r43->size[2] != 19) && (r43->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(19, r43->size[2], &of_emlrtECI, (emlrtConstCTX)
      sp);
  }

  I_pr_app = q_Nom[52];
  I_yaw_app = q_Nom[50];
  rZT_3 = q_Nom[51];
  for (it = 0; it < 19; it++) {
    FRotor_R_idx_2 = (Bld->s22_B1[it] * I_pr_app + Bld->s12_B1[it] * I_yaw_app)
      + Bld->s23_B1[it] * rZT_3;
    EvS3[3 * it] = FRotor_R_idx_2 * rQS1_2;
    EvS3[3 * it + 1] = FRotor_R_idx_2 * FRotor_R_idx_0;
    EvS3[3 * it + 2] = FRotor_R_idx_2 * FRotor_R_idx_1;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }

  if (r6->size[2] == loop_ub_tmp->size[2]) {
    I_pr_app = q_Nom[37];
    c_n = 3 * r6->size[2];
    n = r6->size[0] * r6->size[1] * r6->size[2];
    r6->size[0] = 1;
    r6->size[1] = 3;
    emxEnsureCapacity_real_T(sp, r6, n, &ag_emlrtRTEI);
    r7 = r6->data;
    n = (c_n / 2) << 1;
    b_n = n - 2;
    for (b_it = 0; b_it <= b_n; b_it += 2) {
      r = _mm_loadu_pd(&r7[b_it]);
      r1 = _mm_loadu_pd(&r9[b_it]);
      _mm_storeu_pd(&r7[b_it], _mm_mul_pd(_mm_add_pd(r, r1), _mm_set1_pd
        (I_pr_app)));
    }

    for (b_it = n; b_it < c_n; b_it++) {
      r7[b_it] = (r7[b_it] + r9[b_it]) * I_pr_app;
    }
  } else {
    st.site = &qv_emlrtRSI;
    binary_expand_op_91(&st, r6, loop_ub_tmp, q_Nom);
  }

  if (r8->size[2] == r15->size[2]) {
    I_pr_app = q_Nom[38];
    c_n = 3 * r8->size[2];
    n = r8->size[0] * r8->size[1] * r8->size[2];
    r8->size[0] = 1;
    r8->size[1] = 3;
    emxEnsureCapacity_real_T(sp, r8, n, &bg_emlrtRTEI);
    ZBlNode_Y_data = r8->data;
    n = (c_n / 2) << 1;
    b_n = n - 2;
    for (b_it = 0; b_it <= b_n; b_it += 2) {
      r = _mm_loadu_pd(&ZBlNode_Y_data[b_it]);
      r1 = _mm_loadu_pd(&Vx_data[b_it]);
      _mm_storeu_pd(&ZBlNode_Y_data[b_it], _mm_mul_pd(_mm_add_pd(r, r1),
        _mm_set1_pd(I_pr_app)));
    }

    for (b_it = n; b_it < c_n; b_it++) {
      ZBlNode_Y_data[b_it] = (ZBlNode_Y_data[b_it] + Vx_data[b_it]) * I_pr_app;
    }
  } else {
    st.site = &qv_emlrtRSI;
    binary_expand_op_90(&st, r8, r15, q_Nom);
    ZBlNode_Y_data = r8->data;
  }

  if ((r6->size[2] != r8->size[2]) && ((r6->size[2] != 1) && (r8->size[2] != 1)))
  {
    emlrtDimSizeImpxCheckR2021b(r6->size[2], r8->size[2], &pf_emlrtECI,
      (emlrtConstCTX)sp);
  }

  if (r6->size[2] == r8->size[2]) {
    c_n = 3 * r6->size[2];
    n = r6->size[0] * r6->size[1] * r6->size[2];
    r6->size[0] = 1;
    r6->size[1] = 3;
    emxEnsureCapacity_real_T(sp, r6, n, &ag_emlrtRTEI);
    r7 = r6->data;
    n = (c_n / 2) << 1;
    b_n = n - 2;
    for (b_it = 0; b_it <= b_n; b_it += 2) {
      r = _mm_loadu_pd(&r7[b_it]);
      r1 = _mm_loadu_pd(&ZBlNode_Y_data[b_it]);
      _mm_storeu_pd(&r7[b_it], _mm_add_pd(r, r1));
    }

    for (b_it = n; b_it < c_n; b_it++) {
      r7[b_it] += ZBlNode_Y_data[b_it];
    }
  } else {
    st.site = &nv_emlrtRSI;
    f_plus(&st, r6, r8);
  }

  if (r16->size[2] == VzB1->size[2]) {
    I_pr_app = q_Nom[39];
    c_n = 3 * r16->size[2];
    n = r16->size[0] * r16->size[1] * r16->size[2];
    r16->size[0] = 1;
    r16->size[1] = 3;
    emxEnsureCapacity_real_T(sp, r16, n, &cg_emlrtRTEI);
    Vy_data = r16->data;
    n = (c_n / 2) << 1;
    b_n = n - 2;
    for (b_it = 0; b_it <= b_n; b_it += 2) {
      r = _mm_loadu_pd(&Vy_data[b_it]);
      r1 = _mm_loadu_pd(&VzB1_data[b_it]);
      _mm_storeu_pd(&Vy_data[b_it], _mm_mul_pd(_mm_add_pd(r, r1), _mm_set1_pd
        (I_pr_app)));
    }

    for (b_it = n; b_it < c_n; b_it++) {
      Vy_data[b_it] = (Vy_data[b_it] + VzB1_data[b_it]) * I_pr_app;
    }
  } else {
    st.site = &qv_emlrtRSI;
    binary_expand_op_89(&st, r16, VzB1, q_Nom);
    Vy_data = r16->data;
  }

  if ((r6->size[2] != r16->size[2]) && ((r6->size[2] != 1) && (r16->size[2] != 1)))
  {
    emlrtDimSizeImpxCheckR2021b(r6->size[2], r16->size[2], &pf_emlrtECI,
      (emlrtConstCTX)sp);
  }

  if (r6->size[2] == r16->size[2]) {
    c_n = 3 * r6->size[2];
    n = r6->size[0] * r6->size[1] * r6->size[2];
    r6->size[0] = 1;
    r6->size[1] = 3;
    emxEnsureCapacity_real_T(sp, r6, n, &ag_emlrtRTEI);
    r7 = r6->data;
    n = (c_n / 2) << 1;
    b_n = n - 2;
    for (b_it = 0; b_it <= b_n; b_it += 2) {
      r = _mm_loadu_pd(&r7[b_it]);
      r1 = _mm_loadu_pd(&Vy_data[b_it]);
      _mm_storeu_pd(&r7[b_it], _mm_add_pd(r, r1));
    }

    for (b_it = n; b_it < c_n; b_it++) {
      r7[b_it] += Vy_data[b_it];
    }
  } else {
    st.site = &nv_emlrtRSI;
    f_plus(&st, r6, r16);
  }

  if (VzB2->size[2] == r21->size[2]) {
    I_pr_app = q_Nom[40];
    c_n = 3 * VzB2->size[2];
    n = VzB2->size[0] * VzB2->size[1] * VzB2->size[2];
    VzB2->size[0] = 1;
    VzB2->size[1] = 3;
    emxEnsureCapacity_real_T(sp, VzB2, n, &dg_emlrtRTEI);
    ZBlNode_Z_data = VzB2->data;
    n = (c_n / 2) << 1;
    b_n = n - 2;
    for (b_it = 0; b_it <= b_n; b_it += 2) {
      r = _mm_loadu_pd(&ZBlNode_Z_data[b_it]);
      r1 = _mm_loadu_pd(&vr_X_data[b_it]);
      _mm_storeu_pd(&ZBlNode_Z_data[b_it], _mm_mul_pd(_mm_add_pd(r, r1), r10));
    }

    for (b_it = n; b_it < c_n; b_it++) {
      ZBlNode_Z_data[b_it] = (ZBlNode_Z_data[b_it] + vr_X_data[b_it]) * I_pr_app;
    }
  } else {
    st.site = &qv_emlrtRSI;
    binary_expand_op_88(&st, VzB2, r21, q_Nom);
    ZBlNode_Z_data = VzB2->data;
  }

  if ((r6->size[2] != VzB2->size[2]) && ((r6->size[2] != 1) && (VzB2->size[2] !=
        1))) {
    emlrtDimSizeImpxCheckR2021b(r6->size[2], VzB2->size[2], &pf_emlrtECI,
      (emlrtConstCTX)sp);
  }

  if (r6->size[2] == VzB2->size[2]) {
    c_n = 3 * r6->size[2];
    n = r6->size[0] * r6->size[1] * r6->size[2];
    r6->size[0] = 1;
    r6->size[1] = 3;
    emxEnsureCapacity_real_T(sp, r6, n, &ag_emlrtRTEI);
    r7 = r6->data;
    n = (c_n / 2) << 1;
    b_n = n - 2;
    for (b_it = 0; b_it <= b_n; b_it += 2) {
      r = _mm_loadu_pd(&r7[b_it]);
      r1 = _mm_loadu_pd(&ZBlNode_Z_data[b_it]);
      _mm_storeu_pd(&r7[b_it], _mm_add_pd(r, r1));
    }

    for (b_it = n; b_it < c_n; b_it++) {
      r7[b_it] += ZBlNode_Z_data[b_it];
    }
  } else {
    st.site = &nv_emlrtRSI;
    f_plus(&st, r6, VzB2);
  }

  if (VzB3->size[2] == r23->size[2]) {
    I_pr_app = q_Nom[41];
    c_n = 3 * VzB3->size[2];
    n = VzB3->size[0] * VzB3->size[1] * VzB3->size[2];
    VzB3->size[0] = 1;
    VzB3->size[1] = 3;
    emxEnsureCapacity_real_T(sp, VzB3, n, &eg_emlrtRTEI);
    ZBlNode_Z_data = VzB3->data;
    n = (c_n / 2) << 1;
    b_n = n - 2;
    for (b_it = 0; b_it <= b_n; b_it += 2) {
      r = _mm_loadu_pd(&ZBlNode_Z_data[b_it]);
      r1 = _mm_loadu_pd(&r24[b_it]);
      _mm_storeu_pd(&ZBlNode_Z_data[b_it], _mm_mul_pd(_mm_add_pd(r, r1), r11));
    }

    for (b_it = n; b_it < c_n; b_it++) {
      ZBlNode_Z_data[b_it] = (ZBlNode_Z_data[b_it] + r24[b_it]) * I_pr_app;
    }
  } else {
    st.site = &qv_emlrtRSI;
    binary_expand_op_87(&st, VzB3, r23, q_Nom);
    ZBlNode_Z_data = VzB3->data;
  }

  if ((r6->size[2] != VzB3->size[2]) && ((r6->size[2] != 1) && (VzB3->size[2] !=
        1))) {
    emlrtDimSizeImpxCheckR2021b(r6->size[2], VzB3->size[2], &pf_emlrtECI,
      (emlrtConstCTX)sp);
  }

  if (r6->size[2] == VzB3->size[2]) {
    c_n = 3 * r6->size[2];
    n = r6->size[0] * r6->size[1] * r6->size[2];
    r6->size[0] = 1;
    r6->size[1] = 3;
    emxEnsureCapacity_real_T(sp, r6, n, &ag_emlrtRTEI);
    r7 = r6->data;
    n = (c_n / 2) << 1;
    b_n = n - 2;
    for (b_it = 0; b_it <= b_n; b_it += 2) {
      r = _mm_loadu_pd(&r7[b_it]);
      r1 = _mm_loadu_pd(&ZBlNode_Z_data[b_it]);
      _mm_storeu_pd(&r7[b_it], _mm_add_pd(r, r1));
    }

    for (b_it = n; b_it < c_n; b_it++) {
      r7[b_it] += ZBlNode_Z_data[b_it];
    }
  } else {
    st.site = &nv_emlrtRSI;
    f_plus(&st, r6, VzB3);
  }

  if (r22->size[2] == r26->size[2]) {
    I_pr_app = q_Nom[42];
    c_n = 3 * r22->size[2];
    n = r22->size[0] * r22->size[1] * r22->size[2];
    r22->size[0] = 1;
    r22->size[1] = 3;
    emxEnsureCapacity_real_T(sp, r22, n, &fg_emlrtRTEI);
    Vy_data = r22->data;
    n = (c_n / 2) << 1;
    b_n = n - 2;
    for (b_it = 0; b_it <= b_n; b_it += 2) {
      r = _mm_loadu_pd(&Vy_data[b_it]);
      r1 = _mm_loadu_pd(&r27[b_it]);
      _mm_storeu_pd(&Vy_data[b_it], _mm_mul_pd(_mm_add_pd(r, r1), r12));
    }

    for (b_it = n; b_it < c_n; b_it++) {
      Vy_data[b_it] = (Vy_data[b_it] + r27[b_it]) * I_pr_app;
    }
  } else {
    st.site = &qv_emlrtRSI;
    binary_expand_op_86(&st, r22, r26, q_Nom);
    Vy_data = r22->data;
  }

  if ((r6->size[2] != r22->size[2]) && ((r6->size[2] != 1) && (r22->size[2] != 1)))
  {
    emlrtDimSizeImpxCheckR2021b(r6->size[2], r22->size[2], &pf_emlrtECI,
      (emlrtConstCTX)sp);
  }

  if (r6->size[2] == r22->size[2]) {
    c_n = 3 * r6->size[2];
    n = r6->size[0] * r6->size[1] * r6->size[2];
    r6->size[0] = 1;
    r6->size[1] = 3;
    emxEnsureCapacity_real_T(sp, r6, n, &ag_emlrtRTEI);
    r7 = r6->data;
    n = (c_n / 2) << 1;
    b_n = n - 2;
    for (b_it = 0; b_it <= b_n; b_it += 2) {
      r = _mm_loadu_pd(&r7[b_it]);
      r1 = _mm_loadu_pd(&Vy_data[b_it]);
      _mm_storeu_pd(&r7[b_it], _mm_add_pd(r, r1));
    }

    for (b_it = n; b_it < c_n; b_it++) {
      r7[b_it] += Vy_data[b_it];
    }
  } else {
    st.site = &nv_emlrtRSI;
    f_plus(&st, r6, r22);
  }

  if (r25->size[2] == r29->size[2]) {
    I_pr_app = q_Nom[43];
    c_n = 3 * r25->size[2];
    n = r25->size[0] * r25->size[1] * r25->size[2];
    r25->size[0] = 1;
    r25->size[1] = 3;
    emxEnsureCapacity_real_T(sp, r25, n, &gg_emlrtRTEI);
    Vy_data = r25->data;
    n = (c_n / 2) << 1;
    b_n = n - 2;
    for (b_it = 0; b_it <= b_n; b_it += 2) {
      r = _mm_loadu_pd(&Vy_data[b_it]);
      r1 = _mm_loadu_pd(&r30[b_it]);
      _mm_storeu_pd(&Vy_data[b_it], _mm_mul_pd(_mm_add_pd(r, r1), r13));
    }

    for (b_it = n; b_it < c_n; b_it++) {
      Vy_data[b_it] = (Vy_data[b_it] + r30[b_it]) * I_pr_app;
    }
  } else {
    st.site = &qv_emlrtRSI;
    binary_expand_op_85(&st, r25, r29, q_Nom);
    Vy_data = r25->data;
  }

  if ((r6->size[2] != r25->size[2]) && ((r6->size[2] != 1) && (r25->size[2] != 1)))
  {
    emlrtDimSizeImpxCheckR2021b(r6->size[2], r25->size[2], &pf_emlrtECI,
      (emlrtConstCTX)sp);
  }

  if (r6->size[2] == r25->size[2]) {
    c_n = 3 * r6->size[2];
    n = r6->size[0] * r6->size[1] * r6->size[2];
    r6->size[0] = 1;
    r6->size[1] = 3;
    emxEnsureCapacity_real_T(sp, r6, n, &ag_emlrtRTEI);
    r7 = r6->data;
    n = (c_n / 2) << 1;
    b_n = n - 2;
    for (b_it = 0; b_it <= b_n; b_it += 2) {
      r = _mm_loadu_pd(&r7[b_it]);
      r1 = _mm_loadu_pd(&Vy_data[b_it]);
      _mm_storeu_pd(&r7[b_it], _mm_add_pd(r, r1));
    }

    for (b_it = n; b_it < c_n; b_it++) {
      r7[b_it] += Vy_data[b_it];
    }
  } else {
    st.site = &nv_emlrtRSI;
    f_plus(&st, r6, r25);
  }

  if (r28->size[2] == r32->size[2]) {
    I_pr_app = q_Nom[44];
    c_n = 3 * r28->size[2];
    n = r28->size[0] * r28->size[1] * r28->size[2];
    r28->size[0] = 1;
    r28->size[1] = 3;
    emxEnsureCapacity_real_T(sp, r28, n, &hg_emlrtRTEI);
    ZBlNode_Y_data = r28->data;
    n = (c_n / 2) << 1;
    b_n = n - 2;
    for (b_it = 0; b_it <= b_n; b_it += 2) {
      r = _mm_loadu_pd(&ZBlNode_Y_data[b_it]);
      r1 = _mm_loadu_pd(&Vz_data[b_it]);
      _mm_storeu_pd(&ZBlNode_Y_data[b_it], _mm_mul_pd(_mm_add_pd(r, r1), r14));
    }

    for (b_it = n; b_it < c_n; b_it++) {
      ZBlNode_Y_data[b_it] = (ZBlNode_Y_data[b_it] + Vz_data[b_it]) * I_pr_app;
    }
  } else {
    st.site = &qv_emlrtRSI;
    binary_expand_op_84(&st, r28, r32, q_Nom);
    ZBlNode_Y_data = r28->data;
  }

  if ((r6->size[2] != r28->size[2]) && ((r6->size[2] != 1) && (r28->size[2] != 1)))
  {
    emlrtDimSizeImpxCheckR2021b(r6->size[2], r28->size[2], &pf_emlrtECI,
      (emlrtConstCTX)sp);
  }

  if (r6->size[2] == r28->size[2]) {
    c_n = 3 * r6->size[2];
    n = r6->size[0] * r6->size[1] * r6->size[2];
    r6->size[0] = 1;
    r6->size[1] = 3;
    emxEnsureCapacity_real_T(sp, r6, n, &ag_emlrtRTEI);
    r7 = r6->data;
    n = (c_n / 2) << 1;
    b_n = n - 2;
    for (b_it = 0; b_it <= b_n; b_it += 2) {
      r = _mm_loadu_pd(&r7[b_it]);
      r1 = _mm_loadu_pd(&ZBlNode_Y_data[b_it]);
      _mm_storeu_pd(&r7[b_it], _mm_add_pd(r, r1));
    }

    for (b_it = n; b_it < c_n; b_it++) {
      r7[b_it] += ZBlNode_Y_data[b_it];
    }
  } else {
    st.site = &nv_emlrtRSI;
    f_plus(&st, r6, r28);
  }

  if (r35->size[2] == r33->size[2]) {
    I_pr_app = q_Nom[45];
    c_n = 3 * r35->size[2];
    n = r35->size[0] * r35->size[1] * r35->size[2];
    r35->size[0] = 1;
    r35->size[1] = 3;
    emxEnsureCapacity_real_T(sp, r35, n, &ig_emlrtRTEI);
    ZBlNode_Y_data = r35->data;
    n = (c_n / 2) << 1;
    b_n = n - 2;
    for (b_it = 0; b_it <= b_n; b_it += 2) {
      r = _mm_loadu_pd(&ZBlNode_Y_data[b_it]);
      r1 = _mm_loadu_pd(&r34[b_it]);
      _mm_storeu_pd(&ZBlNode_Y_data[b_it], _mm_mul_pd(_mm_add_pd(r, r1),
        _mm_set1_pd(I_pr_app)));
    }

    for (b_it = n; b_it < c_n; b_it++) {
      ZBlNode_Y_data[b_it] = (ZBlNode_Y_data[b_it] + r34[b_it]) * I_pr_app;
    }
  } else {
    st.site = &qv_emlrtRSI;
    binary_expand_op_83(&st, r35, r33, q_Nom);
    ZBlNode_Y_data = r35->data;
  }

  if ((r6->size[2] != r35->size[2]) && ((r6->size[2] != 1) && (r35->size[2] != 1)))
  {
    emlrtDimSizeImpxCheckR2021b(r6->size[2], r35->size[2], &pf_emlrtECI,
      (emlrtConstCTX)sp);
  }

  if (r6->size[2] == r35->size[2]) {
    c_n = 3 * r6->size[2];
    n = r6->size[0] * r6->size[1] * r6->size[2];
    r6->size[0] = 1;
    r6->size[1] = 3;
    emxEnsureCapacity_real_T(sp, r6, n, &ag_emlrtRTEI);
    r7 = r6->data;
    n = (c_n / 2) << 1;
    b_n = n - 2;
    for (b_it = 0; b_it <= b_n; b_it += 2) {
      r = _mm_loadu_pd(&r7[b_it]);
      r1 = _mm_loadu_pd(&ZBlNode_Y_data[b_it]);
      _mm_storeu_pd(&r7[b_it], _mm_add_pd(r, r1));
    }

    for (b_it = n; b_it < c_n; b_it++) {
      r7[b_it] += ZBlNode_Y_data[b_it];
    }
  } else {
    st.site = &nv_emlrtRSI;
    f_plus(&st, r6, r35);
  }

  if (r38->size[2] == r36->size[2]) {
    I_pr_app = q_Nom[46];
    c_n = 3 * r38->size[2];
    n = r38->size[0] * r38->size[1] * r38->size[2];
    r38->size[0] = 1;
    r38->size[1] = 3;
    emxEnsureCapacity_real_T(sp, r38, n, &jg_emlrtRTEI);
    ZBlNode_Y_data = r38->data;
    n = (c_n / 2) << 1;
    b_n = n - 2;
    for (b_it = 0; b_it <= b_n; b_it += 2) {
      r = _mm_loadu_pd(&ZBlNode_Y_data[b_it]);
      r1 = _mm_loadu_pd(&r37[b_it]);
      _mm_storeu_pd(&ZBlNode_Y_data[b_it], _mm_mul_pd(_mm_add_pd(r, r1),
        _mm_set1_pd(I_pr_app)));
    }

    for (b_it = n; b_it < c_n; b_it++) {
      ZBlNode_Y_data[b_it] = (ZBlNode_Y_data[b_it] + r37[b_it]) * I_pr_app;
    }
  } else {
    st.site = &qv_emlrtRSI;
    binary_expand_op_82(&st, r38, r36, q_Nom);
    ZBlNode_Y_data = r38->data;
  }

  if ((r6->size[2] != r38->size[2]) && ((r6->size[2] != 1) && (r38->size[2] != 1)))
  {
    emlrtDimSizeImpxCheckR2021b(r6->size[2], r38->size[2], &pf_emlrtECI,
      (emlrtConstCTX)sp);
  }

  if (r6->size[2] == r38->size[2]) {
    c_n = 3 * r6->size[2];
    n = r6->size[0] * r6->size[1] * r6->size[2];
    r6->size[0] = 1;
    r6->size[1] = 3;
    emxEnsureCapacity_real_T(sp, r6, n, &ag_emlrtRTEI);
    r7 = r6->data;
    n = (c_n / 2) << 1;
    b_n = n - 2;
    for (b_it = 0; b_it <= b_n; b_it += 2) {
      r = _mm_loadu_pd(&r7[b_it]);
      r1 = _mm_loadu_pd(&ZBlNode_Y_data[b_it]);
      _mm_storeu_pd(&r7[b_it], _mm_add_pd(r, r1));
    }

    for (b_it = n; b_it < c_n; b_it++) {
      r7[b_it] += ZBlNode_Y_data[b_it];
    }
  } else {
    st.site = &nv_emlrtRSI;
    f_plus(&st, r6, r38);
    r7 = r6->data;
  }

  if ((r6->size[2] != 19) && (r6->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(r6->size[2], 19, &pf_emlrtECI, (emlrtConstCTX)sp);
  }

  if ((r39->size[2] == 19) && (r6->size[2] == 19) && (r41->size[2] == 19) &&
      (r43->size[2] == 19)) {
    I_pr_app = q_Nom[50];
    I_yaw_app = q_Nom[51];
    rZT_3 = q_Nom[52];
    r = _mm_set1_pd(-1.0);
    for (it = 0; it <= 54; it += 2) {
      r1 = _mm_loadu_pd(&dEvS2[it]);
      r2 = _mm_loadu_pd(&r40[it]);
      r3 = _mm_loadu_pd(&r7[it]);
      r4 = _mm_loadu_pd(&EvS1[it]);
      r5 = _mm_loadu_pd(&r42[it]);
      r19 = _mm_loadu_pd(&EvS3[it]);
      r17 = _mm_loadu_pd(&r44[it]);
      _mm_storeu_pd(&dEvS2[it], _mm_add_pd(_mm_add_pd(_mm_add_pd(r3, _mm_mul_pd
        (_mm_add_pd(_mm_mul_pd(r1, r), r2), _mm_set1_pd(I_pr_app))), _mm_mul_pd
        (_mm_add_pd(_mm_mul_pd(r4, r), r5), _mm_set1_pd(I_yaw_app))), _mm_mul_pd
        (_mm_add_pd(_mm_mul_pd(r19, r), r17), _mm_set1_pd(rZT_3))));
    }

    dEvS2[56] = ((r7[56] + (-dEvS2[56] + r40[56]) * q_Nom[50]) + (-EvS1[56] +
      r42[56]) * q_Nom[51]) + (-EvS3[56] + r44[56]) * q_Nom[52];
  } else {
    binary_expand_op_102(dEvS2, r6, r39, q_Nom, EvS1, r41, EvS3, r43);
  }

  /*  #10. Blade 3 */
  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Bld->nb;
  st.site = &xf_emlrtRSI;
  i_repmat(&st, EwL, dEvQ_TSS1, r6);
  st.site = &xf_emlrtRSI;
  cross(&st, r6, rQS3, loop_ub_tmp);
  r9 = loop_ub_tmp->data;
  if ((loop_ub_tmp->size[2] != 19) && (loop_ub_tmp->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(19, loop_ub_tmp->size[2], &qf_emlrtECI,
      (emlrtConstCTX)sp);
  }

  st.site = &xf_emlrtRSI;
  repmat(&st, dEvQ_R, Bld->nb, r6);
  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Bld->nb;
  st.site = &xf_emlrtRSI;
  d_repmat(&st, dEvQ_TSS1, r8);
  if (loop_ub_tmp->size[2] == 19) {
    for (it = 0; it <= 54; it += 2) {
      r = _mm_loadu_pd(&HvS3[it]);
      r1 = _mm_loadu_pd(&r9[it]);
      _mm_storeu_pd(&b_HvS1[it], _mm_add_pd(r, r1));
    }

    b_HvS1[56] = HvS3[56] + r9[56];
    st.site = &xf_emlrtRSI;
    cross(&st, r8, b_HvS1, loop_ub_tmp);
    r9 = loop_ub_tmp->data;
  } else {
    st.site = &xf_emlrtRSI;
    binary_expand_op_92(&st, loop_ub_tmp, xf_emlrtRSI, r8, HvS3);
    r9 = loop_ub_tmp->data;
  }

  if ((r6->size[2] != loop_ub_tmp->size[2]) && ((r6->size[2] != 1) &&
       (loop_ub_tmp->size[2] != 1))) {
    emlrtDimSizeImpxCheckR2021b(r6->size[2], loop_ub_tmp->size[2], &rf_emlrtECI,
      (emlrtConstCTX)sp);
  }

  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Bld->nb;
  st.site = &yf_emlrtRSI;
  i_repmat(&st, EwL, dEvQ_TSS1, r8);
  st.site = &yf_emlrtRSI;
  cross(&st, r8, rQS3, r15);
  Vx_data = r15->data;
  if ((r15->size[2] != 19) && (r15->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(19, r15->size[2], &sf_emlrtECI, (emlrtConstCTX)
      sp);
  }

  st.site = &yf_emlrtRSI;
  repmat(&st, dEvQ_P, Bld->nb, r8);
  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Bld->nb;
  st.site = &yf_emlrtRSI;
  e_repmat(&st, dEvQ_TSS1, r16);
  if (r15->size[2] == 19) {
    for (it = 0; it <= 54; it += 2) {
      r = _mm_loadu_pd(&HvS3[it]);
      r1 = _mm_loadu_pd(&Vx_data[it]);
      _mm_storeu_pd(&b_HvS1[it], _mm_add_pd(r, r1));
    }

    b_HvS1[56] = HvS3[56] + Vx_data[56];
    st.site = &yf_emlrtRSI;
    cross(&st, r16, b_HvS1, r15);
    Vx_data = r15->data;
  } else {
    st.site = &yf_emlrtRSI;
    binary_expand_op_92(&st, r15, yf_emlrtRSI, r16, HvS3);
    Vx_data = r15->data;
  }

  if ((r8->size[2] != r15->size[2]) && ((r8->size[2] != 1) && (r15->size[2] != 1)))
  {
    emlrtDimSizeImpxCheckR2021b(r8->size[2], r15->size[2], &tf_emlrtECI,
      (emlrtConstCTX)sp);
  }

  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Bld->nb;
  st.site = &ag_emlrtRSI;
  i_repmat(&st, EwL, dEvQ_TSS1, r16);
  st.site = &ag_emlrtRSI;
  cross(&st, r16, rQS3, VzB1);
  VzB1_data = VzB1->data;
  if ((VzB1->size[2] != 19) && (VzB1->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(19, VzB1->size[2], &uf_emlrtECI, (emlrtConstCTX)
      sp);
  }

  st.site = &ag_emlrtRSI;
  repmat(&st, dEvQ_Y, Bld->nb, r16);
  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Bld->nb;
  st.site = &ag_emlrtRSI;
  f_repmat(&st, dEvQ_TSS1, VzB2);
  if (VzB1->size[2] == 19) {
    for (it = 0; it <= 54; it += 2) {
      r = _mm_loadu_pd(&HvS3[it]);
      r1 = _mm_loadu_pd(&VzB1_data[it]);
      _mm_storeu_pd(&b_HvS1[it], _mm_add_pd(r, r1));
    }

    b_HvS1[56] = HvS3[56] + VzB1_data[56];
    st.site = &ag_emlrtRSI;
    cross(&st, VzB2, b_HvS1, VzB1);
    VzB1_data = VzB1->data;
  } else {
    st.site = &ag_emlrtRSI;
    binary_expand_op_92(&st, VzB1, ag_emlrtRSI, VzB2, HvS3);
    VzB1_data = VzB1->data;
  }

  if ((r16->size[2] != VzB1->size[2]) && ((r16->size[2] != 1) && (VzB1->size[2]
        != 1))) {
    emlrtDimSizeImpxCheckR2021b(r16->size[2], VzB1->size[2], &vf_emlrtECI,
      (emlrtConstCTX)sp);
  }

  st.site = &bg_emlrtRSI;
  repmat(&st, dEvQ_TFA1, Bld->nb, VzB2);
  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Bld->nb;
  st.site = &bg_emlrtRSI;
  i_repmat(&st, dEwB_TFA1, dEvQ_TSS1, VzB3);
  st.site = &bg_emlrtRSI;
  cross(&st, VzB3, rQS3, r21);
  vr_X_data = r21->data;
  if ((VzB2->size[2] != r21->size[2]) && ((VzB2->size[2] != 1) && (r21->size[2]
        != 1))) {
    emlrtDimSizeImpxCheckR2021b(VzB2->size[2], r21->size[2], &wf_emlrtECI,
      (emlrtConstCTX)sp);
  }

  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Bld->nb;
  st.site = &bg_emlrtRSI;
  i_repmat(&st, EwL, dEvQ_TSS1, VzB3);
  st.site = &bg_emlrtRSI;
  cross(&st, VzB3, rQS3, r22);
  Vy_data = r22->data;
  if ((r22->size[2] != 19) && (r22->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(19, r22->size[2], &xf_emlrtECI, (emlrtConstCTX)
      sp);
  }

  if (VzB2->size[2] == r21->size[2]) {
    c_n = 3 * VzB2->size[2];
    n = VzB2->size[0] * VzB2->size[1] * VzB2->size[2];
    VzB2->size[0] = 1;
    VzB2->size[1] = 3;
    emxEnsureCapacity_real_T(sp, VzB2, n, &kg_emlrtRTEI);
    ZBlNode_Z_data = VzB2->data;
    n = (c_n / 2) << 1;
    b_n = n - 2;
    for (b_it = 0; b_it <= b_n; b_it += 2) {
      r = _mm_loadu_pd(&ZBlNode_Z_data[b_it]);
      r1 = _mm_loadu_pd(&vr_X_data[b_it]);
      _mm_storeu_pd(&ZBlNode_Z_data[b_it], _mm_add_pd(r, r1));
    }

    for (b_it = n; b_it < c_n; b_it++) {
      ZBlNode_Z_data[b_it] += vr_X_data[b_it];
    }
  } else {
    st.site = &bg_emlrtRSI;
    f_plus(&st, VzB2, r21);
  }

  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Bld->nb;
  st.site = &bg_emlrtRSI;
  i_repmat(&st, EwB_TFA1, dEvQ_TSS1, VzB3);
  if (r22->size[2] == 19) {
    for (it = 0; it <= 54; it += 2) {
      r = _mm_loadu_pd(&HvS3[it]);
      r1 = _mm_loadu_pd(&Vy_data[it]);
      _mm_storeu_pd(&b_HvS1[it], _mm_add_pd(r, r1));
    }

    b_HvS1[56] = HvS3[56] + Vy_data[56];
    st.site = &bg_emlrtRSI;
    cross(&st, VzB3, b_HvS1, r21);
    vr_X_data = r21->data;
  } else {
    st.site = &bg_emlrtRSI;
    binary_expand_op_94(&st, r21, bg_emlrtRSI, VzB3, HvS3, r22);
    vr_X_data = r21->data;
  }

  if ((VzB2->size[2] != r21->size[2]) && ((VzB2->size[2] != 1) && (r21->size[2]
        != 1))) {
    emlrtDimSizeImpxCheckR2021b(VzB2->size[2], r21->size[2], &wf_emlrtECI,
      (emlrtConstCTX)sp);
  }

  st.site = &cg_emlrtRSI;
  repmat(&st, b_dEvQ_TSS1, Bld->nb, VzB3);
  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Bld->nb;
  st.site = &cg_emlrtRSI;
  i_repmat(&st, dEwB_TSS1, dEvQ_TSS1, r22);
  st.site = &cg_emlrtRSI;
  cross(&st, r22, rQS3, r23);
  r24 = r23->data;
  if ((VzB3->size[2] != r23->size[2]) && ((VzB3->size[2] != 1) && (r23->size[2]
        != 1))) {
    emlrtDimSizeImpxCheckR2021b(VzB3->size[2], r23->size[2], &yf_emlrtECI,
      (emlrtConstCTX)sp);
  }

  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Bld->nb;
  st.site = &cg_emlrtRSI;
  i_repmat(&st, EwL, dEvQ_TSS1, r22);
  st.site = &cg_emlrtRSI;
  cross(&st, r22, rQS3, r25);
  Vy_data = r25->data;
  if ((r25->size[2] != 19) && (r25->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(19, r25->size[2], &ag_emlrtECI, (emlrtConstCTX)
      sp);
  }

  if (VzB3->size[2] == r23->size[2]) {
    c_n = 3 * VzB3->size[2];
    n = VzB3->size[0] * VzB3->size[1] * VzB3->size[2];
    VzB3->size[0] = 1;
    VzB3->size[1] = 3;
    emxEnsureCapacity_real_T(sp, VzB3, n, &lg_emlrtRTEI);
    ZBlNode_Z_data = VzB3->data;
    n = (c_n / 2) << 1;
    b_n = n - 2;
    for (b_it = 0; b_it <= b_n; b_it += 2) {
      r = _mm_loadu_pd(&ZBlNode_Z_data[b_it]);
      r1 = _mm_loadu_pd(&r24[b_it]);
      _mm_storeu_pd(&ZBlNode_Z_data[b_it], _mm_add_pd(r, r1));
    }

    for (b_it = n; b_it < c_n; b_it++) {
      ZBlNode_Z_data[b_it] += r24[b_it];
    }
  } else {
    st.site = &cg_emlrtRSI;
    f_plus(&st, VzB3, r23);
  }

  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Bld->nb;
  st.site = &cg_emlrtRSI;
  i_repmat(&st, EwB_TSS1, dEvQ_TSS1, r22);
  if (r25->size[2] == 19) {
    for (it = 0; it <= 54; it += 2) {
      r = _mm_loadu_pd(&HvS3[it]);
      r1 = _mm_loadu_pd(&Vy_data[it]);
      _mm_storeu_pd(&b_HvS1[it], _mm_add_pd(r, r1));
    }

    b_HvS1[56] = HvS3[56] + Vy_data[56];
    st.site = &cg_emlrtRSI;
    cross(&st, r22, b_HvS1, r23);
    r24 = r23->data;
  } else {
    st.site = &cg_emlrtRSI;
    binary_expand_op_94(&st, r23, cg_emlrtRSI, r22, HvS3, r25);
    r24 = r23->data;
  }

  if ((VzB3->size[2] != r23->size[2]) && ((VzB3->size[2] != 1) && (r23->size[2]
        != 1))) {
    emlrtDimSizeImpxCheckR2021b(VzB3->size[2], r23->size[2], &yf_emlrtECI,
      (emlrtConstCTX)sp);
  }

  st.site = &dg_emlrtRSI;
  repmat(&st, dEvQ_TFA2, Bld->nb, r22);
  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Bld->nb;
  st.site = &dg_emlrtRSI;
  i_repmat(&st, dEwB_TFA2, dEvQ_TSS1, r25);
  st.site = &dg_emlrtRSI;
  cross(&st, r25, rQS3, r26);
  r27 = r26->data;
  if ((r22->size[2] != r26->size[2]) && ((r22->size[2] != 1) && (r26->size[2] !=
        1))) {
    emlrtDimSizeImpxCheckR2021b(r22->size[2], r26->size[2], &bg_emlrtECI,
      (emlrtConstCTX)sp);
  }

  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Bld->nb;
  st.site = &dg_emlrtRSI;
  i_repmat(&st, EwL, dEvQ_TSS1, r25);
  st.site = &dg_emlrtRSI;
  cross(&st, r25, rQS3, r28);
  ZBlNode_Y_data = r28->data;
  if ((r28->size[2] != 19) && (r28->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(19, r28->size[2], &cg_emlrtECI, (emlrtConstCTX)
      sp);
  }

  if (r22->size[2] == r26->size[2]) {
    c_n = 3 * r22->size[2];
    n = r22->size[0] * r22->size[1] * r22->size[2];
    r22->size[0] = 1;
    r22->size[1] = 3;
    emxEnsureCapacity_real_T(sp, r22, n, &mg_emlrtRTEI);
    Vy_data = r22->data;
    n = (c_n / 2) << 1;
    b_n = n - 2;
    for (b_it = 0; b_it <= b_n; b_it += 2) {
      r = _mm_loadu_pd(&Vy_data[b_it]);
      r1 = _mm_loadu_pd(&r27[b_it]);
      _mm_storeu_pd(&Vy_data[b_it], _mm_add_pd(r, r1));
    }

    for (b_it = n; b_it < c_n; b_it++) {
      Vy_data[b_it] += r27[b_it];
    }
  } else {
    st.site = &dg_emlrtRSI;
    f_plus(&st, r22, r26);
  }

  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Bld->nb;
  st.site = &dg_emlrtRSI;
  i_repmat(&st, EwB_TFA2, dEvQ_TSS1, r25);
  if (r28->size[2] == 19) {
    for (it = 0; it <= 54; it += 2) {
      r = _mm_loadu_pd(&HvS3[it]);
      r1 = _mm_loadu_pd(&ZBlNode_Y_data[it]);
      _mm_storeu_pd(&b_HvS1[it], _mm_add_pd(r, r1));
    }

    b_HvS1[56] = HvS3[56] + ZBlNode_Y_data[56];
    st.site = &dg_emlrtRSI;
    cross(&st, r25, b_HvS1, r26);
    r27 = r26->data;
  } else {
    st.site = &dg_emlrtRSI;
    binary_expand_op_94(&st, r26, dg_emlrtRSI, r25, HvS3, r28);
    r27 = r26->data;
  }

  if ((r22->size[2] != r26->size[2]) && ((r22->size[2] != 1) && (r26->size[2] !=
        1))) {
    emlrtDimSizeImpxCheckR2021b(r22->size[2], r26->size[2], &bg_emlrtECI,
      (emlrtConstCTX)sp);
  }

  st.site = &eg_emlrtRSI;
  repmat(&st, dEvQ_TSS2, Bld->nb, r25);
  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Bld->nb;
  st.site = &eg_emlrtRSI;
  i_repmat(&st, dEwB_TSS2, dEvQ_TSS1, r28);
  st.site = &eg_emlrtRSI;
  cross(&st, r28, rQS3, r29);
  r30 = r29->data;
  if ((r25->size[2] != r29->size[2]) && ((r25->size[2] != 1) && (r29->size[2] !=
        1))) {
    emlrtDimSizeImpxCheckR2021b(r25->size[2], r29->size[2], &dg_emlrtECI,
      (emlrtConstCTX)sp);
  }

  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Bld->nb;
  st.site = &eg_emlrtRSI;
  i_repmat(&st, EwL, dEvQ_TSS1, r28);
  st.site = &eg_emlrtRSI;
  cross(&st, r28, rQS3, r31);
  ZBlNode_Y_data = r31->data;
  if ((r31->size[2] != 19) && (r31->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(19, r31->size[2], &eg_emlrtECI, (emlrtConstCTX)
      sp);
  }

  if (r25->size[2] == r29->size[2]) {
    c_n = 3 * r25->size[2];
    n = r25->size[0] * r25->size[1] * r25->size[2];
    r25->size[0] = 1;
    r25->size[1] = 3;
    emxEnsureCapacity_real_T(sp, r25, n, &ng_emlrtRTEI);
    Vy_data = r25->data;
    n = (c_n / 2) << 1;
    b_n = n - 2;
    for (b_it = 0; b_it <= b_n; b_it += 2) {
      r = _mm_loadu_pd(&Vy_data[b_it]);
      r1 = _mm_loadu_pd(&r30[b_it]);
      _mm_storeu_pd(&Vy_data[b_it], _mm_add_pd(r, r1));
    }

    for (b_it = n; b_it < c_n; b_it++) {
      Vy_data[b_it] += r30[b_it];
    }
  } else {
    st.site = &eg_emlrtRSI;
    f_plus(&st, r25, r29);
  }

  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Bld->nb;
  st.site = &eg_emlrtRSI;
  i_repmat(&st, EwB_TSS2, dEvQ_TSS1, r28);
  if (r31->size[2] == 19) {
    for (it = 0; it <= 54; it += 2) {
      r = _mm_loadu_pd(&HvS3[it]);
      r1 = _mm_loadu_pd(&ZBlNode_Y_data[it]);
      _mm_storeu_pd(&b_HvS1[it], _mm_add_pd(r, r1));
    }

    b_HvS1[56] = HvS3[56] + ZBlNode_Y_data[56];
    st.site = &eg_emlrtRSI;
    cross(&st, r28, b_HvS1, r29);
    r30 = r29->data;
  } else {
    st.site = &eg_emlrtRSI;
    binary_expand_op_94(&st, r29, eg_emlrtRSI, r28, HvS3, r31);
    r30 = r29->data;
  }

  if ((r25->size[2] != r29->size[2]) && ((r25->size[2] != 1) && (r29->size[2] !=
        1))) {
    emlrtDimSizeImpxCheckR2021b(r25->size[2], r29->size[2], &dg_emlrtECI,
      (emlrtConstCTX)sp);
  }

  st.site = &fg_emlrtRSI;
  repmat(&st, dEvQ_yaw, Bld->nb, r28);
  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Bld->nb;
  st.site = &fg_emlrtRSI;
  i_repmat(&st, dEwN_yaw, dEvQ_TSS1, r31);
  st.site = &fg_emlrtRSI;
  cross(&st, r31, rQS3, r32);
  Vz_data = r32->data;
  if ((r28->size[2] != r32->size[2]) && ((r28->size[2] != 1) && (r32->size[2] !=
        1))) {
    emlrtDimSizeImpxCheckR2021b(r28->size[2], r32->size[2], &fg_emlrtECI,
      (emlrtConstCTX)sp);
  }

  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Bld->nb;
  st.site = &fg_emlrtRSI;
  i_repmat(&st, EwL, dEvQ_TSS1, r31);
  st.site = &fg_emlrtRSI;
  cross(&st, r31, rQS3, r33);
  r34 = r33->data;
  if ((r33->size[2] != 19) && (r33->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(19, r33->size[2], &gg_emlrtECI, (emlrtConstCTX)
      sp);
  }

  if (r28->size[2] == r32->size[2]) {
    c_n = 3 * r28->size[2];
    n = r28->size[0] * r28->size[1] * r28->size[2];
    r28->size[0] = 1;
    r28->size[1] = 3;
    emxEnsureCapacity_real_T(sp, r28, n, &og_emlrtRTEI);
    ZBlNode_Y_data = r28->data;
    n = (c_n / 2) << 1;
    b_n = n - 2;
    for (b_it = 0; b_it <= b_n; b_it += 2) {
      r = _mm_loadu_pd(&ZBlNode_Y_data[b_it]);
      r1 = _mm_loadu_pd(&Vz_data[b_it]);
      _mm_storeu_pd(&ZBlNode_Y_data[b_it], _mm_add_pd(r, r1));
    }

    for (b_it = n; b_it < c_n; b_it++) {
      ZBlNode_Y_data[b_it] += Vz_data[b_it];
    }
  } else {
    st.site = &fg_emlrtRSI;
    f_plus(&st, r28, r32);
  }

  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Bld->nb;
  st.site = &fg_emlrtRSI;
  i_repmat(&st, EwL_yaw, dEvQ_TSS1, r31);
  if (r33->size[2] == 19) {
    for (it = 0; it <= 54; it += 2) {
      r = _mm_loadu_pd(&HvS3[it]);
      r1 = _mm_loadu_pd(&r34[it]);
      _mm_storeu_pd(&b_HvS1[it], _mm_add_pd(r, r1));
    }

    b_HvS1[56] = HvS3[56] + r34[56];
    st.site = &fg_emlrtRSI;
    cross(&st, r31, b_HvS1, r32);
    Vz_data = r32->data;
  } else {
    st.site = &fg_emlrtRSI;
    binary_expand_op_94(&st, r32, fg_emlrtRSI, r31, HvS3, r33);
    Vz_data = r32->data;
  }

  if ((r28->size[2] != r32->size[2]) && ((r28->size[2] != 1) && (r32->size[2] !=
        1))) {
    emlrtDimSizeImpxCheckR2021b(r28->size[2], r32->size[2], &fg_emlrtECI,
      (emlrtConstCTX)sp);
  }

  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Bld->nb;
  st.site = &gg_emlrtRSI;
  i_repmat(&st, EwL, dEvQ_TSS1, r31);
  st.site = &gg_emlrtRSI;
  cross(&st, r31, rQS3, r33);
  r34 = r33->data;
  if ((r33->size[2] != 19) && (r33->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(19, r33->size[2], &hg_emlrtECI, (emlrtConstCTX)
      sp);
  }

  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Bld->nb;
  st.site = &gg_emlrtRSI;
  i_repmat(&st, dEwL_GeAz, dEvQ_TSS1, r31);
  st.site = &gg_emlrtRSI;
  cross(&st, r31, rQS3, r35);
  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Bld->nb;
  st.site = &gg_emlrtRSI;
  i_repmat(&st, EwL_GeAz, dEvQ_TSS1, r31);
  if (r33->size[2] == 19) {
    for (it = 0; it <= 54; it += 2) {
      r = _mm_loadu_pd(&HvS3[it]);
      r1 = _mm_loadu_pd(&r34[it]);
      _mm_storeu_pd(&b_HvS1[it], _mm_add_pd(r, r1));
    }

    b_HvS1[56] = HvS3[56] + r34[56];
    st.site = &gg_emlrtRSI;
    cross(&st, r31, b_HvS1, r33);
    r34 = r33->data;
  } else {
    st.site = &gg_emlrtRSI;
    binary_expand_op_92(&st, r33, gg_emlrtRSI, r31, HvS3);
    r34 = r33->data;
  }

  if ((r35->size[2] != r33->size[2]) && ((r35->size[2] != 1) && (r33->size[2] !=
        1))) {
    emlrtDimSizeImpxCheckR2021b(r35->size[2], r33->size[2], &ig_emlrtECI,
      (emlrtConstCTX)sp);
  }

  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Bld->nb;
  st.site = &hg_emlrtRSI;
  i_repmat(&st, EwL, dEvQ_TSS1, r31);
  st.site = &hg_emlrtRSI;
  cross(&st, r31, rQS3, r36);
  r37 = r36->data;
  if ((r36->size[2] != 19) && (r36->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(19, r36->size[2], &jg_emlrtECI, (emlrtConstCTX)
      sp);
  }

  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Bld->nb;
  st.site = &hg_emlrtRSI;
  i_repmat(&st, dEwL_GeAz, dEvQ_TSS1, r31);
  st.site = &hg_emlrtRSI;
  cross(&st, r31, rQS3, r38);
  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Bld->nb;
  st.site = &hg_emlrtRSI;
  i_repmat(&st, EwL_GeAz, dEvQ_TSS1, r31);
  if (r36->size[2] == 19) {
    for (it = 0; it <= 54; it += 2) {
      r = _mm_loadu_pd(&HvS3[it]);
      r1 = _mm_loadu_pd(&r37[it]);
      _mm_storeu_pd(&HvS3[it], _mm_add_pd(r, r1));
    }

    HvS3[56] += r37[56];
    st.site = &hg_emlrtRSI;
    cross(&st, r31, HvS3, r36);
    r37 = r36->data;
  } else {
    st.site = &hg_emlrtRSI;
    binary_expand_op_92(&st, r36, hg_emlrtRSI, r31, HvS3);
    r37 = r36->data;
  }

  if ((r38->size[2] != r36->size[2]) && ((r38->size[2] != 1) && (r36->size[2] !=
        1))) {
    emlrtDimSizeImpxCheckR2021b(r38->size[2], r36->size[2], &kg_emlrtECI,
      (emlrtConstCTX)sp);
  }

  st.site = &ig_emlrtRSI;
  repmat(&st, EwL, Bld->nb, r31);
  st.site = &ig_emlrtRSI;
  cross(&st, r31, EvS3_B3F1, r39);
  r40 = r39->data;
  if ((r39->size[2] != 19) && (r39->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(19, r39->size[2], &lg_emlrtECI, (emlrtConstCTX)
      sp);
  }

  I_pr_app = q_Nom[53];
  I_yaw_app = q_Nom[55];
  rZT_3 = q_Nom[54];
  rQS1_2 = I_H[2];
  FRotor_R_idx_0 = I_H[5];
  FRotor_R_idx_1 = I_H[8];
  for (it = 0; it < 19; it++) {
    FRotor_R_idx_2 = (Bld->s11_B1[it] * I_pr_app + Bld->s12_B1[it] * I_yaw_app)
      + Bld->s13_B1[it] * rZT_3;
    dEvS3[3 * it] = FRotor_R_idx_2 * rQS1_2;
    dEvS3[3 * it + 1] = FRotor_R_idx_2 * FRotor_R_idx_0;
    dEvS3[3 * it + 2] = FRotor_R_idx_2 * FRotor_R_idx_1;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }

  st.site = &jg_emlrtRSI;
  repmat(&st, EwL, Bld->nb, r31);
  st.site = &jg_emlrtRSI;
  cross(&st, r31, EvS3_B3E1, r41);
  r42 = r41->data;
  if ((r41->size[2] != 19) && (r41->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(19, r41->size[2], &mg_emlrtECI, (emlrtConstCTX)
      sp);
  }

  I_pr_app = q_Nom[54];
  rZT_3 = q_Nom[53];
  for (it = 0; it < 19; it++) {
    FRotor_R_idx_2 = (Bld->s33_B1[it] * I_pr_app + Bld->s23_B1[it] * I_yaw_app)
      + Bld->s13_B1[it] * rZT_3;
    EvS1[3 * it] = FRotor_R_idx_2 * rQS1_2;
    EvS1[3 * it + 1] = FRotor_R_idx_2 * FRotor_R_idx_0;
    EvS1[3 * it + 2] = FRotor_R_idx_2 * FRotor_R_idx_1;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }

  st.site = &kg_emlrtRSI;
  repmat(&st, EwL, Bld->nb, r31);
  st.site = &kg_emlrtRSI;
  cross(&st, r31, EvS3_B3F2, r43);
  r44 = r43->data;
  emxFree_real_T(sp, &r31);
  if ((r43->size[2] != 19) && (r43->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(19, r43->size[2], &ng_emlrtECI, (emlrtConstCTX)
      sp);
  }

  I_pr_app = q_Nom[55];
  I_yaw_app = q_Nom[53];
  rZT_3 = q_Nom[54];
  for (it = 0; it < 19; it++) {
    FRotor_R_idx_2 = (Bld->s22_B1[it] * I_pr_app + Bld->s12_B1[it] * I_yaw_app)
      + Bld->s23_B1[it] * rZT_3;
    EvS3[3 * it] = FRotor_R_idx_2 * rQS1_2;
    EvS3[3 * it + 1] = FRotor_R_idx_2 * FRotor_R_idx_0;
    EvS3[3 * it + 2] = FRotor_R_idx_2 * FRotor_R_idx_1;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }

  if (r6->size[2] == loop_ub_tmp->size[2]) {
    I_pr_app = q_Nom[37];
    c_n = 3 * r6->size[2];
    n = r6->size[0] * r6->size[1] * r6->size[2];
    r6->size[0] = 1;
    r6->size[1] = 3;
    emxEnsureCapacity_real_T(sp, r6, n, &pg_emlrtRTEI);
    r7 = r6->data;
    n = (c_n / 2) << 1;
    b_n = n - 2;
    for (b_it = 0; b_it <= b_n; b_it += 2) {
      r = _mm_loadu_pd(&r7[b_it]);
      r1 = _mm_loadu_pd(&r9[b_it]);
      _mm_storeu_pd(&r7[b_it], _mm_mul_pd(_mm_add_pd(r, r1), _mm_set1_pd
        (I_pr_app)));
    }

    for (b_it = n; b_it < c_n; b_it++) {
      r7[b_it] = (r7[b_it] + r9[b_it]) * I_pr_app;
    }
  } else {
    st.site = &qv_emlrtRSI;
    binary_expand_op_91(&st, r6, loop_ub_tmp, q_Nom);
  }

  if (r8->size[2] == r15->size[2]) {
    I_pr_app = q_Nom[38];
    c_n = 3 * r8->size[2];
    n = r8->size[0] * r8->size[1] * r8->size[2];
    r8->size[0] = 1;
    r8->size[1] = 3;
    emxEnsureCapacity_real_T(sp, r8, n, &qg_emlrtRTEI);
    ZBlNode_Y_data = r8->data;
    n = (c_n / 2) << 1;
    b_n = n - 2;
    for (b_it = 0; b_it <= b_n; b_it += 2) {
      r = _mm_loadu_pd(&ZBlNode_Y_data[b_it]);
      r1 = _mm_loadu_pd(&Vx_data[b_it]);
      _mm_storeu_pd(&ZBlNode_Y_data[b_it], _mm_mul_pd(_mm_add_pd(r, r1),
        _mm_set1_pd(I_pr_app)));
    }

    for (b_it = n; b_it < c_n; b_it++) {
      ZBlNode_Y_data[b_it] = (ZBlNode_Y_data[b_it] + Vx_data[b_it]) * I_pr_app;
    }
  } else {
    st.site = &qv_emlrtRSI;
    binary_expand_op_90(&st, r8, r15, q_Nom);
    ZBlNode_Y_data = r8->data;
  }

  if ((r6->size[2] != r8->size[2]) && ((r6->size[2] != 1) && (r8->size[2] != 1)))
  {
    emlrtDimSizeImpxCheckR2021b(r6->size[2], r8->size[2], &og_emlrtECI,
      (emlrtConstCTX)sp);
  }

  if (r6->size[2] == r8->size[2]) {
    c_n = 3 * r6->size[2];
    n = r6->size[0] * r6->size[1] * r6->size[2];
    r6->size[0] = 1;
    r6->size[1] = 3;
    emxEnsureCapacity_real_T(sp, r6, n, &pg_emlrtRTEI);
    r7 = r6->data;
    n = (c_n / 2) << 1;
    b_n = n - 2;
    for (b_it = 0; b_it <= b_n; b_it += 2) {
      r = _mm_loadu_pd(&r7[b_it]);
      r1 = _mm_loadu_pd(&ZBlNode_Y_data[b_it]);
      _mm_storeu_pd(&r7[b_it], _mm_add_pd(r, r1));
    }

    for (b_it = n; b_it < c_n; b_it++) {
      r7[b_it] += ZBlNode_Y_data[b_it];
    }
  } else {
    st.site = &mv_emlrtRSI;
    f_plus(&st, r6, r8);
  }

  if (r16->size[2] == VzB1->size[2]) {
    I_pr_app = q_Nom[39];
    c_n = 3 * r16->size[2];
    n = r16->size[0] * r16->size[1] * r16->size[2];
    r16->size[0] = 1;
    r16->size[1] = 3;
    emxEnsureCapacity_real_T(sp, r16, n, &rg_emlrtRTEI);
    Vy_data = r16->data;
    n = (c_n / 2) << 1;
    b_n = n - 2;
    for (b_it = 0; b_it <= b_n; b_it += 2) {
      r = _mm_loadu_pd(&Vy_data[b_it]);
      r1 = _mm_loadu_pd(&VzB1_data[b_it]);
      _mm_storeu_pd(&Vy_data[b_it], _mm_mul_pd(_mm_add_pd(r, r1), _mm_set1_pd
        (I_pr_app)));
    }

    for (b_it = n; b_it < c_n; b_it++) {
      Vy_data[b_it] = (Vy_data[b_it] + VzB1_data[b_it]) * I_pr_app;
    }
  } else {
    st.site = &qv_emlrtRSI;
    binary_expand_op_89(&st, r16, VzB1, q_Nom);
    Vy_data = r16->data;
  }

  if ((r6->size[2] != r16->size[2]) && ((r6->size[2] != 1) && (r16->size[2] != 1)))
  {
    emlrtDimSizeImpxCheckR2021b(r6->size[2], r16->size[2], &og_emlrtECI,
      (emlrtConstCTX)sp);
  }

  if (r6->size[2] == r16->size[2]) {
    c_n = 3 * r6->size[2];
    n = r6->size[0] * r6->size[1] * r6->size[2];
    r6->size[0] = 1;
    r6->size[1] = 3;
    emxEnsureCapacity_real_T(sp, r6, n, &pg_emlrtRTEI);
    r7 = r6->data;
    n = (c_n / 2) << 1;
    b_n = n - 2;
    for (b_it = 0; b_it <= b_n; b_it += 2) {
      r = _mm_loadu_pd(&r7[b_it]);
      r1 = _mm_loadu_pd(&Vy_data[b_it]);
      _mm_storeu_pd(&r7[b_it], _mm_add_pd(r, r1));
    }

    for (b_it = n; b_it < c_n; b_it++) {
      r7[b_it] += Vy_data[b_it];
    }
  } else {
    st.site = &mv_emlrtRSI;
    f_plus(&st, r6, r16);
  }

  if (VzB2->size[2] == r21->size[2]) {
    I_pr_app = q_Nom[40];
    c_n = 3 * VzB2->size[2];
    n = VzB2->size[0] * VzB2->size[1] * VzB2->size[2];
    VzB2->size[0] = 1;
    VzB2->size[1] = 3;
    emxEnsureCapacity_real_T(sp, VzB2, n, &sg_emlrtRTEI);
    ZBlNode_Z_data = VzB2->data;
    n = (c_n / 2) << 1;
    b_n = n - 2;
    for (b_it = 0; b_it <= b_n; b_it += 2) {
      r = _mm_loadu_pd(&ZBlNode_Z_data[b_it]);
      r1 = _mm_loadu_pd(&vr_X_data[b_it]);
      _mm_storeu_pd(&ZBlNode_Z_data[b_it], _mm_mul_pd(_mm_add_pd(r, r1), r10));
    }

    for (b_it = n; b_it < c_n; b_it++) {
      ZBlNode_Z_data[b_it] = (ZBlNode_Z_data[b_it] + vr_X_data[b_it]) * I_pr_app;
    }
  } else {
    st.site = &qv_emlrtRSI;
    binary_expand_op_88(&st, VzB2, r21, q_Nom);
    ZBlNode_Z_data = VzB2->data;
  }

  emxFree_real_T(sp, &r21);
  if ((r6->size[2] != VzB2->size[2]) && ((r6->size[2] != 1) && (VzB2->size[2] !=
        1))) {
    emlrtDimSizeImpxCheckR2021b(r6->size[2], VzB2->size[2], &og_emlrtECI,
      (emlrtConstCTX)sp);
  }

  if (r6->size[2] == VzB2->size[2]) {
    c_n = 3 * r6->size[2];
    n = r6->size[0] * r6->size[1] * r6->size[2];
    r6->size[0] = 1;
    r6->size[1] = 3;
    emxEnsureCapacity_real_T(sp, r6, n, &pg_emlrtRTEI);
    r7 = r6->data;
    n = (c_n / 2) << 1;
    b_n = n - 2;
    for (b_it = 0; b_it <= b_n; b_it += 2) {
      r = _mm_loadu_pd(&r7[b_it]);
      r1 = _mm_loadu_pd(&ZBlNode_Z_data[b_it]);
      _mm_storeu_pd(&r7[b_it], _mm_add_pd(r, r1));
    }

    for (b_it = n; b_it < c_n; b_it++) {
      r7[b_it] += ZBlNode_Z_data[b_it];
    }
  } else {
    st.site = &mv_emlrtRSI;
    f_plus(&st, r6, VzB2);
  }

  emxFree_real_T(sp, &VzB2);
  if (VzB3->size[2] == r23->size[2]) {
    I_pr_app = q_Nom[41];
    c_n = 3 * VzB3->size[2];
    n = VzB3->size[0] * VzB3->size[1] * VzB3->size[2];
    VzB3->size[0] = 1;
    VzB3->size[1] = 3;
    emxEnsureCapacity_real_T(sp, VzB3, n, &tg_emlrtRTEI);
    ZBlNode_Z_data = VzB3->data;
    n = (c_n / 2) << 1;
    b_n = n - 2;
    for (b_it = 0; b_it <= b_n; b_it += 2) {
      r = _mm_loadu_pd(&ZBlNode_Z_data[b_it]);
      r1 = _mm_loadu_pd(&r24[b_it]);
      _mm_storeu_pd(&ZBlNode_Z_data[b_it], _mm_mul_pd(_mm_add_pd(r, r1), r11));
    }

    for (b_it = n; b_it < c_n; b_it++) {
      ZBlNode_Z_data[b_it] = (ZBlNode_Z_data[b_it] + r24[b_it]) * I_pr_app;
    }
  } else {
    st.site = &qv_emlrtRSI;
    binary_expand_op_87(&st, VzB3, r23, q_Nom);
    ZBlNode_Z_data = VzB3->data;
  }

  emxFree_real_T(sp, &r23);
  if ((r6->size[2] != VzB3->size[2]) && ((r6->size[2] != 1) && (VzB3->size[2] !=
        1))) {
    emlrtDimSizeImpxCheckR2021b(r6->size[2], VzB3->size[2], &og_emlrtECI,
      (emlrtConstCTX)sp);
  }

  if (r6->size[2] == VzB3->size[2]) {
    c_n = 3 * r6->size[2];
    n = r6->size[0] * r6->size[1] * r6->size[2];
    r6->size[0] = 1;
    r6->size[1] = 3;
    emxEnsureCapacity_real_T(sp, r6, n, &pg_emlrtRTEI);
    r7 = r6->data;
    n = (c_n / 2) << 1;
    b_n = n - 2;
    for (b_it = 0; b_it <= b_n; b_it += 2) {
      r = _mm_loadu_pd(&r7[b_it]);
      r1 = _mm_loadu_pd(&ZBlNode_Z_data[b_it]);
      _mm_storeu_pd(&r7[b_it], _mm_add_pd(r, r1));
    }

    for (b_it = n; b_it < c_n; b_it++) {
      r7[b_it] += ZBlNode_Z_data[b_it];
    }
  } else {
    st.site = &mv_emlrtRSI;
    f_plus(&st, r6, VzB3);
  }

  emxFree_real_T(sp, &VzB3);
  if (r22->size[2] == r26->size[2]) {
    I_pr_app = q_Nom[42];
    c_n = 3 * r22->size[2];
    n = r22->size[0] * r22->size[1] * r22->size[2];
    r22->size[0] = 1;
    r22->size[1] = 3;
    emxEnsureCapacity_real_T(sp, r22, n, &ug_emlrtRTEI);
    Vy_data = r22->data;
    n = (c_n / 2) << 1;
    b_n = n - 2;
    for (b_it = 0; b_it <= b_n; b_it += 2) {
      r = _mm_loadu_pd(&Vy_data[b_it]);
      r1 = _mm_loadu_pd(&r27[b_it]);
      _mm_storeu_pd(&Vy_data[b_it], _mm_mul_pd(_mm_add_pd(r, r1), r12));
    }

    for (b_it = n; b_it < c_n; b_it++) {
      Vy_data[b_it] = (Vy_data[b_it] + r27[b_it]) * I_pr_app;
    }
  } else {
    st.site = &qv_emlrtRSI;
    binary_expand_op_86(&st, r22, r26, q_Nom);
    Vy_data = r22->data;
  }

  emxFree_real_T(sp, &r26);
  if ((r6->size[2] != r22->size[2]) && ((r6->size[2] != 1) && (r22->size[2] != 1)))
  {
    emlrtDimSizeImpxCheckR2021b(r6->size[2], r22->size[2], &og_emlrtECI,
      (emlrtConstCTX)sp);
  }

  if (r6->size[2] == r22->size[2]) {
    c_n = 3 * r6->size[2];
    n = r6->size[0] * r6->size[1] * r6->size[2];
    r6->size[0] = 1;
    r6->size[1] = 3;
    emxEnsureCapacity_real_T(sp, r6, n, &pg_emlrtRTEI);
    r7 = r6->data;
    n = (c_n / 2) << 1;
    b_n = n - 2;
    for (b_it = 0; b_it <= b_n; b_it += 2) {
      r = _mm_loadu_pd(&r7[b_it]);
      r1 = _mm_loadu_pd(&Vy_data[b_it]);
      _mm_storeu_pd(&r7[b_it], _mm_add_pd(r, r1));
    }

    for (b_it = n; b_it < c_n; b_it++) {
      r7[b_it] += Vy_data[b_it];
    }
  } else {
    st.site = &mv_emlrtRSI;
    f_plus(&st, r6, r22);
  }

  emxFree_real_T(sp, &r22);
  if (r25->size[2] == r29->size[2]) {
    I_pr_app = q_Nom[43];
    c_n = 3 * r25->size[2];
    n = r25->size[0] * r25->size[1] * r25->size[2];
    r25->size[0] = 1;
    r25->size[1] = 3;
    emxEnsureCapacity_real_T(sp, r25, n, &vg_emlrtRTEI);
    Vy_data = r25->data;
    n = (c_n / 2) << 1;
    b_n = n - 2;
    for (b_it = 0; b_it <= b_n; b_it += 2) {
      r = _mm_loadu_pd(&Vy_data[b_it]);
      r1 = _mm_loadu_pd(&r30[b_it]);
      _mm_storeu_pd(&Vy_data[b_it], _mm_mul_pd(_mm_add_pd(r, r1), r13));
    }

    for (b_it = n; b_it < c_n; b_it++) {
      Vy_data[b_it] = (Vy_data[b_it] + r30[b_it]) * I_pr_app;
    }
  } else {
    st.site = &qv_emlrtRSI;
    binary_expand_op_85(&st, r25, r29, q_Nom);
    Vy_data = r25->data;
  }

  emxFree_real_T(sp, &r29);
  if ((r6->size[2] != r25->size[2]) && ((r6->size[2] != 1) && (r25->size[2] != 1)))
  {
    emlrtDimSizeImpxCheckR2021b(r6->size[2], r25->size[2], &og_emlrtECI,
      (emlrtConstCTX)sp);
  }

  if (r6->size[2] == r25->size[2]) {
    c_n = 3 * r6->size[2];
    n = r6->size[0] * r6->size[1] * r6->size[2];
    r6->size[0] = 1;
    r6->size[1] = 3;
    emxEnsureCapacity_real_T(sp, r6, n, &pg_emlrtRTEI);
    r7 = r6->data;
    n = (c_n / 2) << 1;
    b_n = n - 2;
    for (b_it = 0; b_it <= b_n; b_it += 2) {
      r = _mm_loadu_pd(&r7[b_it]);
      r1 = _mm_loadu_pd(&Vy_data[b_it]);
      _mm_storeu_pd(&r7[b_it], _mm_add_pd(r, r1));
    }

    for (b_it = n; b_it < c_n; b_it++) {
      r7[b_it] += Vy_data[b_it];
    }
  } else {
    st.site = &mv_emlrtRSI;
    f_plus(&st, r6, r25);
  }

  emxFree_real_T(sp, &r25);
  if (r28->size[2] == r32->size[2]) {
    I_pr_app = q_Nom[44];
    c_n = 3 * r28->size[2];
    n = r28->size[0] * r28->size[1] * r28->size[2];
    r28->size[0] = 1;
    r28->size[1] = 3;
    emxEnsureCapacity_real_T(sp, r28, n, &wg_emlrtRTEI);
    ZBlNode_Y_data = r28->data;
    n = (c_n / 2) << 1;
    b_n = n - 2;
    for (b_it = 0; b_it <= b_n; b_it += 2) {
      r = _mm_loadu_pd(&ZBlNode_Y_data[b_it]);
      r1 = _mm_loadu_pd(&Vz_data[b_it]);
      _mm_storeu_pd(&ZBlNode_Y_data[b_it], _mm_mul_pd(_mm_add_pd(r, r1), r14));
    }

    for (b_it = n; b_it < c_n; b_it++) {
      ZBlNode_Y_data[b_it] = (ZBlNode_Y_data[b_it] + Vz_data[b_it]) * I_pr_app;
    }
  } else {
    st.site = &qv_emlrtRSI;
    binary_expand_op_84(&st, r28, r32, q_Nom);
    ZBlNode_Y_data = r28->data;
  }

  emxFree_real_T(sp, &r32);
  if ((r6->size[2] != r28->size[2]) && ((r6->size[2] != 1) && (r28->size[2] != 1)))
  {
    emlrtDimSizeImpxCheckR2021b(r6->size[2], r28->size[2], &og_emlrtECI,
      (emlrtConstCTX)sp);
  }

  if (r6->size[2] == r28->size[2]) {
    c_n = 3 * r6->size[2];
    n = r6->size[0] * r6->size[1] * r6->size[2];
    r6->size[0] = 1;
    r6->size[1] = 3;
    emxEnsureCapacity_real_T(sp, r6, n, &pg_emlrtRTEI);
    r7 = r6->data;
    n = (c_n / 2) << 1;
    b_n = n - 2;
    for (b_it = 0; b_it <= b_n; b_it += 2) {
      r = _mm_loadu_pd(&r7[b_it]);
      r1 = _mm_loadu_pd(&ZBlNode_Y_data[b_it]);
      _mm_storeu_pd(&r7[b_it], _mm_add_pd(r, r1));
    }

    for (b_it = n; b_it < c_n; b_it++) {
      r7[b_it] += ZBlNode_Y_data[b_it];
    }
  } else {
    st.site = &mv_emlrtRSI;
    f_plus(&st, r6, r28);
  }

  emxFree_real_T(sp, &r28);
  if (r35->size[2] == r33->size[2]) {
    I_pr_app = q_Nom[45];
    c_n = 3 * r35->size[2];
    n = r35->size[0] * r35->size[1] * r35->size[2];
    r35->size[0] = 1;
    r35->size[1] = 3;
    emxEnsureCapacity_real_T(sp, r35, n, &xg_emlrtRTEI);
    ZBlNode_Y_data = r35->data;
    n = (c_n / 2) << 1;
    b_n = n - 2;
    for (b_it = 0; b_it <= b_n; b_it += 2) {
      r = _mm_loadu_pd(&ZBlNode_Y_data[b_it]);
      r1 = _mm_loadu_pd(&r34[b_it]);
      _mm_storeu_pd(&ZBlNode_Y_data[b_it], _mm_mul_pd(_mm_add_pd(r, r1),
        _mm_set1_pd(I_pr_app)));
    }

    for (b_it = n; b_it < c_n; b_it++) {
      ZBlNode_Y_data[b_it] = (ZBlNode_Y_data[b_it] + r34[b_it]) * I_pr_app;
    }
  } else {
    st.site = &qv_emlrtRSI;
    binary_expand_op_83(&st, r35, r33, q_Nom);
    ZBlNode_Y_data = r35->data;
  }

  emxFree_real_T(sp, &r33);
  if ((r6->size[2] != r35->size[2]) && ((r6->size[2] != 1) && (r35->size[2] != 1)))
  {
    emlrtDimSizeImpxCheckR2021b(r6->size[2], r35->size[2], &og_emlrtECI,
      (emlrtConstCTX)sp);
  }

  if (r6->size[2] == r35->size[2]) {
    c_n = 3 * r6->size[2];
    n = r6->size[0] * r6->size[1] * r6->size[2];
    r6->size[0] = 1;
    r6->size[1] = 3;
    emxEnsureCapacity_real_T(sp, r6, n, &pg_emlrtRTEI);
    r7 = r6->data;
    n = (c_n / 2) << 1;
    b_n = n - 2;
    for (b_it = 0; b_it <= b_n; b_it += 2) {
      r = _mm_loadu_pd(&r7[b_it]);
      r1 = _mm_loadu_pd(&ZBlNode_Y_data[b_it]);
      _mm_storeu_pd(&r7[b_it], _mm_add_pd(r, r1));
    }

    for (b_it = n; b_it < c_n; b_it++) {
      r7[b_it] += ZBlNode_Y_data[b_it];
    }
  } else {
    st.site = &mv_emlrtRSI;
    f_plus(&st, r6, r35);
  }

  emxFree_real_T(sp, &r35);
  if (r38->size[2] == r36->size[2]) {
    I_pr_app = q_Nom[46];
    c_n = 3 * r38->size[2];
    n = r38->size[0] * r38->size[1] * r38->size[2];
    r38->size[0] = 1;
    r38->size[1] = 3;
    emxEnsureCapacity_real_T(sp, r38, n, &yg_emlrtRTEI);
    ZBlNode_Y_data = r38->data;
    n = (c_n / 2) << 1;
    b_n = n - 2;
    for (b_it = 0; b_it <= b_n; b_it += 2) {
      r = _mm_loadu_pd(&ZBlNode_Y_data[b_it]);
      r1 = _mm_loadu_pd(&r37[b_it]);
      _mm_storeu_pd(&ZBlNode_Y_data[b_it], _mm_mul_pd(_mm_add_pd(r, r1),
        _mm_set1_pd(I_pr_app)));
    }

    for (b_it = n; b_it < c_n; b_it++) {
      ZBlNode_Y_data[b_it] = (ZBlNode_Y_data[b_it] + r37[b_it]) * I_pr_app;
    }
  } else {
    st.site = &qv_emlrtRSI;
    binary_expand_op_82(&st, r38, r36, q_Nom);
    ZBlNode_Y_data = r38->data;
  }

  emxFree_real_T(sp, &r36);
  if ((r6->size[2] != r38->size[2]) && ((r6->size[2] != 1) && (r38->size[2] != 1)))
  {
    emlrtDimSizeImpxCheckR2021b(r6->size[2], r38->size[2], &og_emlrtECI,
      (emlrtConstCTX)sp);
  }

  if (r6->size[2] == r38->size[2]) {
    c_n = 3 * r6->size[2];
    n = r6->size[0] * r6->size[1] * r6->size[2];
    r6->size[0] = 1;
    r6->size[1] = 3;
    emxEnsureCapacity_real_T(sp, r6, n, &pg_emlrtRTEI);
    r7 = r6->data;
    n = (c_n / 2) << 1;
    b_n = n - 2;
    for (b_it = 0; b_it <= b_n; b_it += 2) {
      r = _mm_loadu_pd(&r7[b_it]);
      r1 = _mm_loadu_pd(&ZBlNode_Y_data[b_it]);
      _mm_storeu_pd(&r7[b_it], _mm_add_pd(r, r1));
    }

    for (b_it = n; b_it < c_n; b_it++) {
      r7[b_it] += ZBlNode_Y_data[b_it];
    }
  } else {
    st.site = &mv_emlrtRSI;
    f_plus(&st, r6, r38);
    r7 = r6->data;
  }

  emxFree_real_T(sp, &r38);
  if ((r6->size[2] != 19) && (r6->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(r6->size[2], 19, &og_emlrtECI, (emlrtConstCTX)sp);
  }

  if ((r39->size[2] == 19) && (r6->size[2] == 19) && (r41->size[2] == 19) &&
      (r43->size[2] == 19)) {
    I_pr_app = q_Nom[53];
    I_yaw_app = q_Nom[54];
    rZT_3 = q_Nom[55];
    r = _mm_set1_pd(-1.0);
    for (it = 0; it <= 54; it += 2) {
      r1 = _mm_loadu_pd(&dEvS3[it]);
      r2 = _mm_loadu_pd(&r40[it]);
      r3 = _mm_loadu_pd(&r7[it]);
      r4 = _mm_loadu_pd(&EvS1[it]);
      r5 = _mm_loadu_pd(&r42[it]);
      r17 = _mm_loadu_pd(&EvS3[it]);
      r18 = _mm_loadu_pd(&r44[it]);
      _mm_storeu_pd(&dEvS3[it], _mm_add_pd(_mm_add_pd(_mm_add_pd(r3, _mm_mul_pd
        (_mm_add_pd(_mm_mul_pd(r1, r), r2), _mm_set1_pd(I_pr_app))), _mm_mul_pd
        (_mm_add_pd(_mm_mul_pd(r4, r), r5), _mm_set1_pd(I_yaw_app))), _mm_mul_pd
        (_mm_add_pd(_mm_mul_pd(r17, r), r18), _mm_set1_pd(rZT_3))));
    }

    dEvS3[56] = ((r7[56] + (-dEvS3[56] + r40[56]) * q_Nom[53]) + (-EvS1[56] +
      r42[56]) * q_Nom[54]) + (-EvS3[56] + r44[56]) * q_Nom[55];
  } else {
    binary_expand_op_81(dEvS3, r6, r39, q_Nom, EvS1, r41, EvS3, r43);
  }

  emxFree_real_T(sp, &r43);
  emxFree_real_T(sp, &r41);
  emxFree_real_T(sp, &r39);

  /*  end of Linear accelerations */
  /*  ================== OC4 浮筒剩余加速度 (无 qdd 项的加速度) ================== */
  /*  提取基础结构的剩余加速度 (Sarker 原有变量) */
  /*  dEwX = qd_R*EwX_R + qd_P*EwX_P + qd_Y*EwX_Y; % 基础剩余角加速度 */
  /*  dEvZ = qd_Sg*EvZ_Sg + qd_Sw*EvZ_Sw + qd_Hv*EvZ_Hv + qd_R*EvZ_R + qd_P*EvZ_P + qd_Y*EvZ_Y; % 基础剩余线加速度 */
  /*  --- 梁 1 --- */
  /*  轴向缩短(Foreshortening)的二阶导数剩余项 (仅含速度平方交叉项) */
  r = _mm_set1_pd(2.0);
  for (it = 0; it <= 12; it += 2) {
    _mm_storeu_pd(&XvP1_2[it], _mm_mul_pd(r, _mm_loadu_pd(&Platform->s12_V[it])));
    _mm_storeu_pd(&XvP1_3[it], _mm_mul_pd(r, _mm_loadu_pd(&Platform->s12_H[it])));
  }

  XvP1_2[14] = 2.0 * Platform->s12_V[14];
  XvP1_3[14] = 2.0 * Platform->s12_H[14];
  st.site = &lg_emlrtRSI;
  b_b = q_Nom[58] * q_Nom[58];
  st.site = &lg_emlrtRSI;
  v_c_tip_Z = q_Nom[59] * q_Nom[59];
  st.site = &mg_emlrtRSI;
  ak_tip_Z = q_Nom[56] * q_Nom[56];
  st.site = &mg_emlrtRSI;
  g_proj_X = q_Nom[57] * q_Nom[57];
  I_pr_app = q_Nom[58];
  I_yaw_app = q_Nom[59];
  rZT_3 = q_Nom[56];
  rQS1_2 = q_Nom[57];
  FRotor_R_idx_0 = P_BP[0].f1[0];
  FRotor_R_idx_1 = P_BP[0].f1[3];
  FRotor_R_idx_2 = P_BP[0].f1[6];
  for (it = 0; it < 15; it++) {
    b = -(((((Platform->s11_V[it] * b_b + Platform->s22_V[it] * v_c_tip_Z) +
             XvP1_2[it] * I_pr_app * I_yaw_app) + Platform->s11_H[it] * ak_tip_Z)
           + Platform->s22_H[it] * g_proj_X) + XvP1_3[it] * rZT_3 * rQS1_2);
    dXvP1[3 * it] = b * FRotor_R_idx_0;
    dXvP1[3 * it + 1] = b * FRotor_R_idx_1;
    dXvP1[3 * it + 2] = b * FRotor_R_idx_2;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }

  /*  弯曲向(Y,Z)均为线性，二阶导无速度项 */
  st.site = &ng_emlrtRSI;
  j_repmat(&st, Platform->nt, r6);
  r7 = r6->data;
  if ((r6->size[2] != 15) && (r6->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(r6->size[2], 15, &pg_emlrtECI, (emlrtConstCTX)sp);
  }

  st.site = &ng_emlrtRSI;
  j_repmat(&st, Platform->nt, loop_ub_tmp);
  st.site = &ng_emlrtRSI;
  b_cross(&st, loop_ub_tmp, dXvP2, r8);
  ZBlNode_Y_data = r8->data;
  if ((r8->size[2] != 15) && (r8->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(15, r8->size[2], &pg_emlrtECI, (emlrtConstCTX)sp);
  }

  st.site = &og_emlrtRSI;
  repmat(&st, EwX, Platform->nt, loop_ub_tmp);
  st.site = &og_emlrtRSI;
  repmat(&st, EwX, Platform->nt, r15);
  st.site = &og_emlrtRSI;
  b_cross(&st, r15, dXvP2, r16);
  st.site = &og_emlrtRSI;
  d_cross(&st, loop_ub_tmp, r16, r15);
  Vx_data = r15->data;
  if ((r15->size[2] != 15) && (r15->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(15, r15->size[2], &pg_emlrtECI, (emlrtConstCTX)
      sp);
  }

  st.site = &pg_emlrtRSI;
  repmat(&st, EwX, Platform->nt, loop_ub_tmp);
  for (it = 0; it <= 42; it += 2) {
    r = _mm_loadu_pd(&e_out[it]);
    r1 = _mm_loadu_pd(&f_out[it]);
    r2 = _mm_loadu_pd(&g_out[it]);
    _mm_storeu_pd(&e_out[it], _mm_add_pd(_mm_add_pd(r, r1), r2));
  }

  e_out[44] = (e_out[44] + f_out[44]) + g_out[44];
  st.site = &pg_emlrtRSI;
  b_cross(&st, loop_ub_tmp, e_out, VzB1);
  c_n = 3 * VzB1->size[2];
  n = VzB1->size[0] * VzB1->size[1] * VzB1->size[2];
  VzB1->size[0] = 1;
  VzB1->size[1] = 3;
  emxEnsureCapacity_real_T(sp, VzB1, n, &ah_emlrtRTEI);
  VzB1_data = VzB1->data;
  n = (c_n / 2) << 1;
  b_n = n - 2;
  for (b_it = 0; b_it <= b_n; b_it += 2) {
    r = _mm_loadu_pd(&VzB1_data[b_it]);
    _mm_storeu_pd(&VzB1_data[b_it], _mm_mul_pd(_mm_set1_pd(2.0), r));
  }

  for (b_it = n; b_it < c_n; b_it++) {
    VzB1_data[b_it] *= 2.0;
  }

  if ((VzB1->size[2] != 15) && (VzB1->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(15, VzB1->size[2], &pg_emlrtECI, (emlrtConstCTX)
      sp);
  }

  if ((r6->size[2] == 15) && (r8->size[2] == 15) && (r15->size[2] == 15) &&
      (VzB1->size[2] == 15)) {
    for (it = 0; it <= 42; it += 2) {
      r = _mm_loadu_pd(&r7[it]);
      r1 = _mm_loadu_pd(&dXvP1[it]);
      r2 = _mm_loadu_pd(&ZBlNode_Y_data[it]);
      r3 = _mm_loadu_pd(&Vx_data[it]);
      r4 = _mm_loadu_pd(&VzB1_data[it]);
      _mm_storeu_pd(&P_dEv[0].f1[it], _mm_add_pd(_mm_add_pd(_mm_add_pd
        (_mm_add_pd(r, r1), r2), r3), r4));
    }

    P_dEv[0].f1[44] = (((r7[44] + dXvP1[44]) + ZBlNode_Y_data[44]) + Vx_data[44])
      + VzB1_data[44];
  } else {
    binary_expand_op_78(&P_dEv[0], r6, dXvP1, r8, r15, VzB1);
  }

  st.site = &qg_emlrtRSI;
  st.site = &qg_emlrtRSI;
  st.site = &rg_emlrtRSI;
  st.site = &rg_emlrtRSI;
  g_proj_Y = 2.0 * Platform->S12_V;
  g_proj_Z = 2.0 * Platform->S12_H;
  I_yaw_app = -(((((Platform->S11_V * b_b + Platform->S22_V * v_c_tip_Z) +
                   g_proj_Y * q_Nom[58] * q_Nom[59]) + Platform->S11_H *
                  ak_tip_Z) + Platform->S22_H * g_proj_X) + g_proj_Z * q_Nom[56]
                * q_Nom[57]);
  EvZ[0] = EwX[1] * rP1_tip[2] - rP1_tip[1] * d;
  EvZ[1] = rP1_tip[0] * d - EwX[0] * rP1_tip[2];
  EvZ[2] = EwX[0] * rP1_tip[1] - rP1_tip[0] * EwX[1];
  g_b[0] = (a * P_BP[0].f1[0] + b_a * P_BP[0].f1[1]) + c_a * P_BP[0].f1[2];
  g_b[1] = (a * P_BP[0].f1[3] + b_a * P_BP[0].f1[4]) + c_a * P_BP[0].f1[5];
  g_b[2] = (a * P_BP[0].f1[6] + b_a * P_BP[0].f1[7]) + c_a * P_BP[0].f1[8];
  I_pr_app = 0.0 * rP1_tip[2];
  e_rQS1_1 = rP1_tip[1] * 0.0;
  f_a_tmp = I_pr_app - e_rQS1_1;
  g_a_tmp = rP1_tip[0] * 0.0;
  h_a_tmp = g_a_tmp - I_pr_app;
  P_dEv_tip[0].f1[0] = ((I_yaw_app * P_BP[0].f1[0] + f_a_tmp) + (EwX[1] * EvZ[2]
    - EvZ[1] * d)) + 2.0 * (EwX[1] * g_b[2] - g_b[1] * d);
  MB3_DrTr[0] += MB1_B1F1[0];
  P_dEv_tip[0].f1[1] = ((I_yaw_app * P_BP[0].f1[3] + h_a_tmp) + (EvZ[0] * d -
    EwX[0] * EvZ[2])) + 2.0 * (g_b[0] * d - EwX[0] * g_b[2]);
  MB3_DrTr[1] += MB1_B1F1[1];
  P_dEv_tip[0].f1[2] = ((I_yaw_app * P_BP[0].f1[6] + (e_rQS1_1 - g_a_tmp)) +
                        (EwX[0] * EvZ[1] - EvZ[0] * EwX[1])) + 2.0 * (EwX[0] *
    g_b[1] - g_b[0] * EwX[1]);
  MB3_DrTr[2] = d3 + d4;
  P_dEw_tip[0].f1[0] = EwX[1] * MB3_DrTr[2] - MB3_DrTr[1] * d;
  P_dEw_tip[0].f1[1] = MB3_DrTr[0] * d - EwX[0] * MB3_DrTr[2];
  P_dEw_tip[0].f1[2] = EwX[0] * MB3_DrTr[1] - MB3_DrTr[0] * EwX[1];

  /*  --- 梁 2 --- */
  st.site = &sg_emlrtRSI;
  I_pr_app = q_Nom[62] * q_Nom[62];
  st.site = &sg_emlrtRSI;
  I_yaw_app = q_Nom[63] * q_Nom[63];
  st.site = &tg_emlrtRSI;
  rZT_3 = q_Nom[60] * q_Nom[60];
  st.site = &tg_emlrtRSI;
  rQS1_2 = q_Nom[61] * q_Nom[61];
  FRotor_R_idx_0 = q_Nom[62];
  FRotor_R_idx_1 = q_Nom[63];
  FRotor_R_idx_2 = q_Nom[60];
  b = q_Nom[61];
  b_b = P_BP[1].f1[0];
  v_c_tip_Z = P_BP[1].f1[3];
  ak_tip_Z = P_BP[1].f1[6];
  for (it = 0; it < 15; it++) {
    g_proj_X = -(((((Platform->s11_V[it] * I_pr_app + Platform->s22_V[it] *
                     I_yaw_app) + XvP1_2[it] * FRotor_R_idx_0 * FRotor_R_idx_1)
                   + Platform->s11_H[it] * rZT_3) + Platform->s22_H[it] * rQS1_2)
                 + XvP1_3[it] * FRotor_R_idx_2 * b);
    dXvP2[3 * it] = g_proj_X * b_b;
    dXvP2[3 * it + 1] = g_proj_X * v_c_tip_Z;
    dXvP2[3 * it + 2] = g_proj_X * ak_tip_Z;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }

  st.site = &ug_emlrtRSI;
  j_repmat(&st, Platform->nt, r6);
  r7 = r6->data;
  if ((r6->size[2] != 15) && (r6->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(r6->size[2], 15, &qg_emlrtECI, (emlrtConstCTX)sp);
  }

  st.site = &ug_emlrtRSI;
  j_repmat(&st, Platform->nt, loop_ub_tmp);
  st.site = &ug_emlrtRSI;
  b_cross(&st, loop_ub_tmp, rP2, r8);
  ZBlNode_Y_data = r8->data;
  if ((r8->size[2] != 15) && (r8->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(15, r8->size[2], &qg_emlrtECI, (emlrtConstCTX)sp);
  }

  st.site = &vg_emlrtRSI;
  repmat(&st, EwX, Platform->nt, loop_ub_tmp);
  st.site = &vg_emlrtRSI;
  repmat(&st, EwX, Platform->nt, r15);
  st.site = &vg_emlrtRSI;
  b_cross(&st, r15, rP2, r16);
  st.site = &vg_emlrtRSI;
  d_cross(&st, loop_ub_tmp, r16, r15);
  Vx_data = r15->data;
  if ((r15->size[2] != 15) && (r15->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(15, r15->size[2], &qg_emlrtECI, (emlrtConstCTX)
      sp);
  }

  st.site = &wg_emlrtRSI;
  repmat(&st, EwX, Platform->nt, loop_ub_tmp);
  for (it = 0; it <= 42; it += 2) {
    r = _mm_loadu_pd(&h_out[it]);
    r1 = _mm_loadu_pd(&i_out[it]);
    r2 = _mm_loadu_pd(&j_out[it]);
    _mm_storeu_pd(&h_out[it], _mm_add_pd(_mm_add_pd(r, r1), r2));
  }

  h_out[44] = (h_out[44] + i_out[44]) + j_out[44];
  st.site = &wg_emlrtRSI;
  b_cross(&st, loop_ub_tmp, h_out, VzB1);
  c_n = 3 * VzB1->size[2];
  n = VzB1->size[0] * VzB1->size[1] * VzB1->size[2];
  VzB1->size[0] = 1;
  VzB1->size[1] = 3;
  emxEnsureCapacity_real_T(sp, VzB1, n, &bh_emlrtRTEI);
  VzB1_data = VzB1->data;
  n = (c_n / 2) << 1;
  b_n = n - 2;
  for (b_it = 0; b_it <= b_n; b_it += 2) {
    r = _mm_loadu_pd(&VzB1_data[b_it]);
    _mm_storeu_pd(&VzB1_data[b_it], _mm_mul_pd(_mm_set1_pd(2.0), r));
  }

  for (b_it = n; b_it < c_n; b_it++) {
    VzB1_data[b_it] *= 2.0;
  }

  if ((VzB1->size[2] != 15) && (VzB1->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(15, VzB1->size[2], &qg_emlrtECI, (emlrtConstCTX)
      sp);
  }

  if ((r6->size[2] == 15) && (r8->size[2] == 15) && (r15->size[2] == 15) &&
      (VzB1->size[2] == 15)) {
    for (it = 0; it <= 42; it += 2) {
      r = _mm_loadu_pd(&r7[it]);
      r1 = _mm_loadu_pd(&dXvP2[it]);
      r2 = _mm_loadu_pd(&ZBlNode_Y_data[it]);
      r3 = _mm_loadu_pd(&Vx_data[it]);
      r4 = _mm_loadu_pd(&VzB1_data[it]);
      _mm_storeu_pd(&P_dEv[1].f1[it], _mm_add_pd(_mm_add_pd(_mm_add_pd
        (_mm_add_pd(r, r1), r2), r3), r4));
    }

    P_dEv[1].f1[44] = (((r7[44] + dXvP2[44]) + ZBlNode_Y_data[44]) + Vx_data[44])
      + VzB1_data[44];
  } else {
    binary_expand_op_78(&P_dEv[1], r6, dXvP2, r8, r15, VzB1);
  }

  st.site = &xg_emlrtRSI;
  st.site = &xg_emlrtRSI;
  st.site = &yg_emlrtRSI;
  st.site = &yg_emlrtRSI;
  I_yaw_app = -(((((Platform->S11_V * I_pr_app + Platform->S22_V * I_yaw_app) +
                   g_proj_Y * q_Nom[62] * q_Nom[63]) + Platform->S11_H * rZT_3)
                 + Platform->S22_H * rQS1_2) + g_proj_Z * q_Nom[60] * q_Nom[61]);
  EvZ[0] = EwX[1] * rP2_tip[2] - rP2_tip[1] * d;
  EvZ[1] = rP2_tip[0] * d - EwX[0] * rP2_tip[2];
  EvZ[2] = EwX[0] * rP2_tip[1] - rP2_tip[0] * EwX[1];
  g_b[0] = (d_a * P_BP[1].f1[0] + e_a * P_BP[1].f1[1]) + f_a * P_BP[1].f1[2];
  g_b[1] = (d_a * P_BP[1].f1[3] + e_a * P_BP[1].f1[4]) + f_a * P_BP[1].f1[5];
  g_b[2] = (d_a * P_BP[1].f1[6] + e_a * P_BP[1].f1[7]) + f_a * P_BP[1].f1[8];
  I_pr_app = 0.0 * rP2_tip[2];
  d_rQS1_1 = rP2_tip[1] * 0.0;
  tip_mass_Z_tot = I_pr_app - d_rQS1_1;
  c_rQS1_1 = rP2_tip[0] * 0.0;
  dEvQ_TSS1_tmp = c_rQS1_1 - I_pr_app;
  P_dEv_tip[1].f1[0] = ((I_yaw_app * P_BP[1].f1[0] + tip_mass_Z_tot) + (EwX[1] *
    EvZ[2] - EvZ[1] * d)) + 2.0 * (EwX[1] * g_b[2] - g_b[1] * d);
  MB1_B1E1[0] += MB1_B1F2[0];
  P_dEv_tip[1].f1[1] = ((I_yaw_app * P_BP[1].f1[3] + dEvQ_TSS1_tmp) + (EvZ[0] *
    d - EwX[0] * EvZ[2])) + 2.0 * (g_b[0] * d - EwX[0] * g_b[2]);
  MB1_B1E1[1] += MB1_B1F2[1];
  P_dEv_tip[1].f1[2] = ((I_yaw_app * P_BP[1].f1[6] + (d_rQS1_1 - c_rQS1_1)) +
                        (EwX[0] * EvZ[1] - EvZ[0] * EwX[1])) + 2.0 * (EwX[0] *
    g_b[1] - g_b[0] * EwX[1]);
  MB1_B1E1[2] = d5 + d6;
  P_dEw_tip[1].f1[0] = EwX[1] * MB1_B1E1[2] - MB1_B1E1[1] * d;
  P_dEw_tip[1].f1[1] = MB1_B1E1[0] * d - EwX[0] * MB1_B1E1[2];
  P_dEw_tip[1].f1[2] = EwX[0] * MB1_B1E1[1] - MB1_B1E1[0] * EwX[1];

  /*  --- 梁 3 --- */
  st.site = &ah_emlrtRSI;
  I_pr_app = q_Nom[66] * q_Nom[66];
  st.site = &ah_emlrtRSI;
  I_yaw_app = q_Nom[67] * q_Nom[67];
  st.site = &bh_emlrtRSI;
  rZT_3 = q_Nom[64] * q_Nom[64];
  st.site = &bh_emlrtRSI;
  rQS1_2 = q_Nom[65] * q_Nom[65];
  FRotor_R_idx_0 = q_Nom[66];
  FRotor_R_idx_1 = q_Nom[67];
  FRotor_R_idx_2 = q_Nom[64];
  b = q_Nom[65];
  b_b = P_BP[2].f1[0];
  v_c_tip_Z = P_BP[2].f1[3];
  ak_tip_Z = P_BP[2].f1[6];
  for (it = 0; it < 15; it++) {
    g_proj_X = -(((((Platform->s11_V[it] * I_pr_app + Platform->s22_V[it] *
                     I_yaw_app) + XvP1_2[it] * FRotor_R_idx_0 * FRotor_R_idx_1)
                   + Platform->s11_H[it] * rZT_3) + Platform->s22_H[it] * rQS1_2)
                 + XvP1_3[it] * FRotor_R_idx_2 * b);
    XvP1_2[it] = g_proj_X;
    dXvP2[3 * it] = g_proj_X * b_b;
    dXvP2[3 * it + 1] = g_proj_X * v_c_tip_Z;
    dXvP2[3 * it + 2] = g_proj_X * ak_tip_Z;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }

  st.site = &ch_emlrtRSI;
  j_repmat(&st, Platform->nt, r6);
  r7 = r6->data;
  if ((r6->size[2] != 15) && (r6->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(r6->size[2], 15, &rg_emlrtECI, (emlrtConstCTX)sp);
  }

  st.site = &ch_emlrtRSI;
  j_repmat(&st, Platform->nt, loop_ub_tmp);
  st.site = &ch_emlrtRSI;
  b_cross(&st, loop_ub_tmp, rP3, r8);
  ZBlNode_Y_data = r8->data;
  if ((r8->size[2] != 15) && (r8->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(15, r8->size[2], &rg_emlrtECI, (emlrtConstCTX)sp);
  }

  st.site = &dh_emlrtRSI;
  repmat(&st, EwX, Platform->nt, loop_ub_tmp);
  st.site = &dh_emlrtRSI;
  repmat(&st, EwX, Platform->nt, r15);
  st.site = &dh_emlrtRSI;
  b_cross(&st, r15, rP3, r16);
  st.site = &dh_emlrtRSI;
  d_cross(&st, loop_ub_tmp, r16, r15);
  Vx_data = r15->data;
  emxFree_real_T(sp, &r16);
  if ((r15->size[2] != 15) && (r15->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(15, r15->size[2], &rg_emlrtECI, (emlrtConstCTX)
      sp);
  }

  st.site = &eh_emlrtRSI;
  repmat(&st, EwX, Platform->nt, loop_ub_tmp);
  for (it = 0; it <= 42; it += 2) {
    r = _mm_loadu_pd(&k_out[it]);
    r1 = _mm_loadu_pd(&l_out[it]);
    r2 = _mm_loadu_pd(&m_out[it]);
    _mm_storeu_pd(&k_out[it], _mm_add_pd(_mm_add_pd(r, r1), r2));
  }

  k_out[44] = (k_out[44] + l_out[44]) + m_out[44];
  st.site = &eh_emlrtRSI;
  b_cross(&st, loop_ub_tmp, k_out, VzB1);
  emxFree_real_T(sp, &loop_ub_tmp);
  c_n = 3 * VzB1->size[2];
  n = VzB1->size[0] * VzB1->size[1] * VzB1->size[2];
  VzB1->size[0] = 1;
  VzB1->size[1] = 3;
  emxEnsureCapacity_real_T(sp, VzB1, n, &ch_emlrtRTEI);
  VzB1_data = VzB1->data;
  n = (c_n / 2) << 1;
  b_n = n - 2;
  for (b_it = 0; b_it <= b_n; b_it += 2) {
    r = _mm_loadu_pd(&VzB1_data[b_it]);
    _mm_storeu_pd(&VzB1_data[b_it], _mm_mul_pd(_mm_set1_pd(2.0), r));
  }

  for (b_it = n; b_it < c_n; b_it++) {
    VzB1_data[b_it] *= 2.0;
  }

  if ((VzB1->size[2] != 15) && (VzB1->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(15, VzB1->size[2], &rg_emlrtECI, (emlrtConstCTX)
      sp);
  }

  if ((r6->size[2] == 15) && (r8->size[2] == 15) && (r15->size[2] == 15) &&
      (VzB1->size[2] == 15)) {
    for (it = 0; it <= 42; it += 2) {
      r = _mm_loadu_pd(&r7[it]);
      r1 = _mm_loadu_pd(&dXvP2[it]);
      r2 = _mm_loadu_pd(&ZBlNode_Y_data[it]);
      r3 = _mm_loadu_pd(&Vx_data[it]);
      r4 = _mm_loadu_pd(&VzB1_data[it]);
      _mm_storeu_pd(&P_dEv[2].f1[it], _mm_add_pd(_mm_add_pd(_mm_add_pd
        (_mm_add_pd(r, r1), r2), r3), r4));
    }

    P_dEv[2].f1[44] = (((r7[44] + dXvP2[44]) + ZBlNode_Y_data[44]) + Vx_data[44])
      + VzB1_data[44];
  } else {
    binary_expand_op_78(&P_dEv[2], r6, dXvP2, r8, r15, VzB1);
  }

  emxFree_real_T(sp, &r15);
  emxFree_real_T(sp, &r8);
  st.site = &fh_emlrtRSI;
  st.site = &fh_emlrtRSI;
  st.site = &gh_emlrtRSI;
  st.site = &gh_emlrtRSI;
  I_yaw_app = -(((((Platform->S11_V * I_pr_app + Platform->S22_V * I_yaw_app) +
                   g_proj_Y * q_Nom[66] * q_Nom[67]) + Platform->S11_H * rZT_3)
                 + Platform->S22_H * rQS1_2) + g_proj_Z * q_Nom[64] * q_Nom[65]);
  EvZ[0] = EwX[1] * rP3_tip[2] - rP3_tip[1] * d;
  EvZ[1] = rP3_tip[0] * d - EwX[0] * rP3_tip[2];
  EvZ[2] = EwX[0] * rP3_tip[1] - rP3_tip[0] * EwX[1];
  g_b[0] = (g_a * P_BP[2].f1[0] + h_a * P_BP[2].f1[1]) + i_a * P_BP[2].f1[2];
  g_b[1] = (g_a * P_BP[2].f1[3] + h_a * P_BP[2].f1[4]) + i_a * P_BP[2].f1[5];
  g_b[2] = (g_a * P_BP[2].f1[6] + h_a * P_BP[2].f1[7]) + i_a * P_BP[2].f1[8];
  I_pr_app = 0.0 * rP3_tip[2];
  tip_mass_X_tot = rP3_tip[1] * 0.0;
  v_r_tip_Y = I_pr_app - tip_mass_X_tot;
  v_r_tip_Z = rP3_tip[0] * 0.0;
  b_rZT_1 = v_r_tip_Z - I_pr_app;
  P_dEv_tip[2].f1[0] = ((I_yaw_app * P_BP[2].f1[0] + v_r_tip_Y) + (EwX[1] * EvZ
    [2] - EvZ[1] * d)) + 2.0 * (EwX[1] * g_b[2] - g_b[1] * d);
  MB2_B2F1[0] += MB2_B2E1[0];
  P_dEv_tip[2].f1[1] = ((I_yaw_app * P_BP[2].f1[3] + b_rZT_1) + (EvZ[0] * d -
    EwX[0] * EvZ[2])) + 2.0 * (g_b[0] * d - EwX[0] * g_b[2]);
  MB2_B2F1[1] += MB2_B2E1[1];
  P_dEv_tip[2].f1[2] = ((I_yaw_app * P_BP[2].f1[6] + (tip_mass_X_tot - v_r_tip_Z))
                        + (EwX[0] * EvZ[1] - EvZ[0] * EwX[1])) + 2.0 * (EwX[0] *
    g_b[1] - g_b[0] * EwX[1]);
  MB2_B2F1[2] = d7 + d8;
  P_dEw_tip[2].f1[0] = EwX[1] * MB2_B2F1[2] - MB2_B2F1[1] * d;
  P_dEw_tip[2].f1[1] = MB2_B2F1[0] * d - EwX[0] * MB2_B2F1[2];
  P_dEw_tip[2].f1[2] = EwX[0] * MB2_B2F1[1] - MB2_B2F1[0] * EwX[1];

  /*  Inertial Matrices */
  for (it = 0; it < 3; it++) {
    I_pr_app = A[3 * it];
    I_X[3 * it] = A[0] * I_pr_app;
    n = 3 * it + 1;
    I_yaw_app = A[n];
    I_G[3 * it] = A[1] * I_yaw_app;
    b_n = 3 * it + 2;
    rZT_3 = A[b_n];
    I_N[3 * it] = A[2] * rZT_3;
    I_X[n] = A[3] * I_pr_app;
    I_G[n] = A[4] * I_yaw_app;
    I_N[n] = A[5] * rZT_3;
    I_X[b_n] = A[6] * I_pr_app;
    I_G[b_n] = A[7] * I_yaw_app;
    I_N[b_n] = A[8] * rZT_3;
  }

  r = _mm_loadu_pd(&I_X[0]);
  r1 = _mm_loadu_pd(&I_G[0]);
  r2 = _mm_loadu_pd(&I_N[0]);
  r3 = _mm_set1_pd(PtfmRIner);
  r4 = _mm_set1_pd(PtfmYIner);
  r5 = _mm_set1_pd(PtfmPIner);
  _mm_storeu_pd(&I_X[0], _mm_add_pd(_mm_add_pd(_mm_mul_pd(r3, r), _mm_mul_pd(r4,
    r1)), _mm_mul_pd(r5, r2)));
  r = _mm_loadu_pd(&I_X[2]);
  r1 = _mm_loadu_pd(&I_G[2]);
  r2 = _mm_loadu_pd(&I_N[2]);
  _mm_storeu_pd(&I_X[2], _mm_add_pd(_mm_add_pd(_mm_mul_pd(r3, r), _mm_mul_pd(r4,
    r1)), _mm_mul_pd(r5, r2)));
  r = _mm_loadu_pd(&I_X[4]);
  r1 = _mm_loadu_pd(&I_G[4]);
  r2 = _mm_loadu_pd(&I_N[4]);
  _mm_storeu_pd(&I_X[4], _mm_add_pd(_mm_add_pd(_mm_mul_pd(r3, r), _mm_mul_pd(r4,
    r1)), _mm_mul_pd(r5, r2)));
  r = _mm_loadu_pd(&I_X[6]);
  r1 = _mm_loadu_pd(&I_G[6]);
  r2 = _mm_loadu_pd(&I_N[6]);
  _mm_storeu_pd(&I_X[6], _mm_add_pd(_mm_add_pd(_mm_mul_pd(r3, r), _mm_mul_pd(r4,
    r1)), _mm_mul_pd(r5, r2)));
  I_X[8] = (PtfmRIner * I_X[8] + PtfmYIner * I_G[8]) + PtfmPIner * I_N[8];
  st.site = &hh_emlrtRSI;
  st.site = &hh_emlrtRSI;
  I_pr_app = ElastoDyn->NacYIner - ElastoDyn->NacMass * (ElastoDyn->NacCMxn *
    ElastoDyn->NacCMxn + ElastoDyn->NacCMyn * ElastoDyn->NacCMyn);
  for (it = 0; it < 3; it++) {
    n = 3 * it + 1;
    I_yaw_app = D[n];
    I_N[3 * it] = D[1] * I_yaw_app;
    I_N[n] = D[4] * I_yaw_app;
    I_N[3 * it + 2] = D[7] * I_yaw_app;
  }

  r = _mm_loadu_pd(&I_N[0]);
  r1 = _mm_set1_pd(I_pr_app);
  _mm_storeu_pd(&I_N[0], _mm_mul_pd(r1, r));
  r = _mm_loadu_pd(&I_N[2]);
  _mm_storeu_pd(&I_N[2], _mm_mul_pd(r1, r));
  r = _mm_loadu_pd(&I_N[4]);
  _mm_storeu_pd(&I_N[4], _mm_mul_pd(r1, r));
  r = _mm_loadu_pd(&I_N[6]);
  _mm_storeu_pd(&I_N[6], _mm_mul_pd(r1, r));
  I_N[8] *= I_pr_app;
  for (it = 0; it < 3; it++) {
    I_pr_app = E[3 * it];
    I_H[3 * it] = E[0] * I_pr_app;
    I_H[3 * it + 1] = E[3] * I_pr_app;
    I_H[3 * it + 2] = E[6] * I_pr_app;
  }

  r = _mm_loadu_pd(&I_H[0]);
  r1 = _mm_set1_pd(ElastoDyn->HubIner);
  _mm_storeu_pd(&I_H[0], _mm_mul_pd(r1, r));
  r = _mm_loadu_pd(&I_H[2]);
  _mm_storeu_pd(&I_H[2], _mm_mul_pd(r1, r));
  r = _mm_loadu_pd(&I_H[4]);
  _mm_storeu_pd(&I_H[4], _mm_mul_pd(r1, r));
  r = _mm_loadu_pd(&I_H[6]);
  _mm_storeu_pd(&I_H[6], _mm_mul_pd(r1, r));
  I_H[8] *= ElastoDyn->HubIner;
  for (it = 0; it < 3; it++) {
    I_pr_app = C[3 * it];
    I_G[3 * it] = C[0] * I_pr_app;
    I_G[3 * it + 1] = C[3] * I_pr_app;
    I_G[3 * it + 2] = C[6] * I_pr_app;
  }

  r = _mm_loadu_pd(&I_G[0]);
  r1 = _mm_set1_pd(ElastoDyn->GenIner);
  _mm_storeu_pd(&I_G[0], _mm_mul_pd(r1, r));
  r = _mm_loadu_pd(&I_G[2]);
  _mm_storeu_pd(&I_G[2], _mm_mul_pd(r1, r));
  r = _mm_loadu_pd(&I_G[4]);
  _mm_storeu_pd(&I_G[4], _mm_mul_pd(r1, r));
  r = _mm_loadu_pd(&I_G[6]);
  _mm_storeu_pd(&I_G[6], _mm_mul_pd(r1, r));
  I_G[8] *= ElastoDyn->GenIner;

  /*  Partial forces and moments at Hub */
  /*  ==== Blade 1 Partial Forces ==== */
  st.site = &ih_emlrtRSI;
  c_coprod(&st, Bld->mB1, EvS1_Sg, EvS3);
  emxFree_real_T(sp, &EvS1_Sg);
  st.site = &ih_emlrtRSI;
  trapz(Bld->BldSec, EvS3, FB1_Sg);
  r = _mm_loadu_pd(&FB1_Sg[0]);
  r45 = _mm_set1_pd(-1.0);
  _mm_storeu_pd(&FB1_Sg[0], _mm_mul_pd(r, r45));
  FB1_Sg[2] = -FB1_Sg[2];
  st.site = &jh_emlrtRSI;
  c_coprod(&st, Bld->mB1, EvS1_Sw, EvS3);
  emxFree_real_T(sp, &EvS1_Sw);
  st.site = &jh_emlrtRSI;
  trapz(Bld->BldSec, EvS3, FB1_Sw);
  r = _mm_loadu_pd(&FB1_Sw[0]);
  _mm_storeu_pd(&FB1_Sw[0], _mm_mul_pd(r, r45));
  FB1_Sw[2] = -FB1_Sw[2];
  st.site = &kh_emlrtRSI;
  c_coprod(&st, Bld->mB1, EvS1_Hv, EvS3);
  emxFree_real_T(sp, &EvS1_Hv);
  st.site = &kh_emlrtRSI;
  trapz(Bld->BldSec, EvS3, FB1_Hv);
  r = _mm_loadu_pd(&FB1_Hv[0]);
  _mm_storeu_pd(&FB1_Hv[0], _mm_mul_pd(r, r45));
  FB1_Hv[2] = -FB1_Hv[2];
  st.site = &lh_emlrtRSI;
  c_coprod(&st, Bld->mB1, EvS1_R, EvS3);
  st.site = &lh_emlrtRSI;
  trapz(Bld->BldSec, EvS3, FB1_R);
  r = _mm_loadu_pd(&FB1_R[0]);
  _mm_storeu_pd(&FB1_R[0], _mm_mul_pd(r, r45));
  FB1_R[2] = -FB1_R[2];
  st.site = &mh_emlrtRSI;
  c_coprod(&st, Bld->mB1, EvS1_P, EvS3);
  st.site = &mh_emlrtRSI;
  trapz(Bld->BldSec, EvS3, FB1_P);
  r = _mm_loadu_pd(&FB1_P[0]);
  _mm_storeu_pd(&FB1_P[0], _mm_mul_pd(r, r45));
  FB1_P[2] = -FB1_P[2];
  st.site = &nh_emlrtRSI;
  c_coprod(&st, Bld->mB1, EvS1_Y, EvS3);
  st.site = &nh_emlrtRSI;
  trapz(Bld->BldSec, EvS3, FB1_Y);
  r = _mm_loadu_pd(&FB1_Y[0]);
  _mm_storeu_pd(&FB1_Y[0], _mm_mul_pd(r, r45));
  FB1_Y[2] = -FB1_Y[2];
  st.site = &oh_emlrtRSI;
  c_coprod(&st, Bld->mB1, EvS1_TFA1, EvS3);
  st.site = &oh_emlrtRSI;
  trapz(Bld->BldSec, EvS3, FB1_TFA1);
  r = _mm_loadu_pd(&FB1_TFA1[0]);
  _mm_storeu_pd(&FB1_TFA1[0], _mm_mul_pd(r, r45));
  FB1_TFA1[2] = -FB1_TFA1[2];
  st.site = &ph_emlrtRSI;
  c_coprod(&st, Bld->mB1, EvS1_TSS1, EvS3);
  st.site = &ph_emlrtRSI;
  trapz(Bld->BldSec, EvS3, FB1_TSS1);
  r = _mm_loadu_pd(&FB1_TSS1[0]);
  _mm_storeu_pd(&FB1_TSS1[0], _mm_mul_pd(r, r45));
  FB1_TSS1[2] = -FB1_TSS1[2];
  st.site = &qh_emlrtRSI;
  c_coprod(&st, Bld->mB1, EvS1_TFA2, EvS3);
  st.site = &qh_emlrtRSI;
  trapz(Bld->BldSec, EvS3, FB1_TFA2);
  r = _mm_loadu_pd(&FB1_TFA2[0]);
  _mm_storeu_pd(&FB1_TFA2[0], _mm_mul_pd(r, r45));
  FB1_TFA2[2] = -FB1_TFA2[2];
  st.site = &rh_emlrtRSI;
  c_coprod(&st, Bld->mB1, EvS1_TSS2, EvS3);
  st.site = &rh_emlrtRSI;
  trapz(Bld->BldSec, EvS3, FB1_TSS2);
  r = _mm_loadu_pd(&FB1_TSS2[0]);
  _mm_storeu_pd(&FB1_TSS2[0], _mm_mul_pd(r, r45));
  FB1_TSS2[2] = -FB1_TSS2[2];
  st.site = &sh_emlrtRSI;
  c_coprod(&st, Bld->mB1, EvS1_yaw, EvS3);
  st.site = &sh_emlrtRSI;
  trapz(Bld->BldSec, EvS3, FB1_yaw);
  r = _mm_loadu_pd(&FB1_yaw[0]);
  _mm_storeu_pd(&FB1_yaw[0], _mm_mul_pd(r, r45));
  FB1_yaw[2] = -FB1_yaw[2];
  st.site = &th_emlrtRSI;
  c_coprod(&st, Bld->mB1, EvS1_GeAz, EvS3);
  st.site = &th_emlrtRSI;
  trapz(Bld->BldSec, EvS3, EvQ_Y);
  r = _mm_loadu_pd(&EvQ_Y[0]);
  _mm_storeu_pd(&EvQ_Y[0], _mm_mul_pd(r, r45));
  EvQ_Y[2] = -EvQ_Y[2];
  st.site = &uh_emlrtRSI;
  c_coprod(&st, Bld->mB1, EvS1_DrTr, EvS3);
  st.site = &uh_emlrtRSI;
  trapz(Bld->BldSec, EvS3, EwB);
  r = _mm_loadu_pd(&EwB[0]);
  _mm_storeu_pd(&EwB[0], _mm_mul_pd(r, r45));
  EwB[2] = -EwB[2];
  for (it = 0; it < 19; it++) {
    r = _mm_loadu_pd(&EvS1_B1F1[3 * it]);
    I_pr_app = Bld->mB1[it];
    _mm_storeu_pd(&EvS2[3 * it], _mm_mul_pd(_mm_set1_pd(I_pr_app), r));
    n = 3 * it + 2;
    EvS2[n] = I_pr_app * EvS1_B1F1[n];
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }

  st.site = &vh_emlrtRSI;
  trapz(Bld->BldSec, EvS2, FB1_B1F1);
  r = _mm_loadu_pd(&FB1_B1F1[0]);
  _mm_storeu_pd(&FB1_B1F1[0], _mm_mul_pd(r, r45));
  FB1_B1F1[2] = -FB1_B1F1[2];
  for (it = 0; it < 19; it++) {
    r = _mm_loadu_pd(&EvS1_B1E1[3 * it]);
    I_pr_app = Bld->mB1[it];
    _mm_storeu_pd(&HvS1[3 * it], _mm_mul_pd(_mm_set1_pd(I_pr_app), r));
    n = 3 * it + 2;
    HvS1[n] = I_pr_app * EvS1_B1E1[n];
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }

  st.site = &wh_emlrtRSI;
  trapz(Bld->BldSec, HvS1, FB1_B1E1);
  r = _mm_loadu_pd(&FB1_B1E1[0]);
  _mm_storeu_pd(&FB1_B1E1[0], _mm_mul_pd(r, r45));
  FB1_B1E1[2] = -FB1_B1E1[2];
  for (it = 0; it < 19; it++) {
    r = _mm_loadu_pd(&EvS1_B1F2[3 * it]);
    I_pr_app = Bld->mB1[it];
    _mm_storeu_pd(&HvS2[3 * it], _mm_mul_pd(_mm_set1_pd(I_pr_app), r));
    n = 3 * it + 2;
    HvS2[n] = I_pr_app * EvS1_B1F2[n];
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }

  st.site = &xh_emlrtRSI;
  trapz(Bld->BldSec, HvS2, FB1_B1F2);
  r = _mm_loadu_pd(&FB1_B1F2[0]);
  _mm_storeu_pd(&FB1_B1F2[0], _mm_mul_pd(r, r45));
  FB1_B1F2[2] = -FB1_B1F2[2];
  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Bld->nb;
  st.site = &yh_emlrtRSI;
  f_repmat(&st, dEvQ_TSS1, VzB1);
  c_n = 3 * VzB1->size[2];
  n = VzB1->size[0] * VzB1->size[1] * VzB1->size[2];
  VzB1->size[0] = 1;
  VzB1->size[1] = 3;
  emxEnsureCapacity_real_T(sp, VzB1, n, &dh_emlrtRTEI);
  VzB1_data = VzB1->data;
  n = (c_n / 2) << 1;
  b_n = n - 2;
  for (b_it = 0; b_it <= b_n; b_it += 2) {
    r = _mm_loadu_pd(&VzB1_data[b_it]);
    _mm_storeu_pd(&VzB1_data[b_it], _mm_mul_pd(_mm_set1_pd(9.80665), r));
  }

  for (b_it = n; b_it < c_n; b_it++) {
    VzB1_data[b_it] *= 9.80665;
  }

  if ((VzB1->size[2] != 19) && (VzB1->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(VzB1->size[2], 19, &sg_emlrtECI, (emlrtConstCTX)
      sp);
  }

  if ((F_AeroB1->size[2] != 19) && (F_AeroB1->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(F_AeroB1->size[2], 19, &tg_emlrtECI,
      (emlrtConstCTX)sp);
  }

  if (VzB1->size[2] == 19) {
    for (it = 0; it <= 54; it += 2) {
      r = _mm_loadu_pd(&VzB1_data[it]);
      r1 = _mm_loadu_pd(&dEvS1[it]);
      _mm_storeu_pd(&EvS3[it], _mm_add_pd(r, r1));
    }

    EvS3[56] = VzB1_data[56] + dEvS1[56];
  } else {
    d_plus(EvS3, VzB1, dEvS1);
  }

  for (it = 0; it < 19; it++) {
    r = _mm_loadu_pd(&EvS3[3 * it]);
    I_pr_app = Bld->mB1[it];
    _mm_storeu_pd(&EvS1[3 * it], _mm_mul_pd(_mm_set1_pd(I_pr_app), r));
    n = 3 * it + 2;
    EvS1[n] = I_pr_app * EvS3[n];
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }

  if (F_AeroB1->size[2] == 19) {
    for (it = 0; it <= 54; it += 2) {
      r = _mm_loadu_pd(&F_AeroB1_data[it]);
      r1 = _mm_loadu_pd(&EvS1[it]);
      _mm_storeu_pd(&EvS1[it], _mm_sub_pd(r, r1));
    }

    EvS1[56] = F_AeroB1_data[56] - EvS1[56];
    st.site = &yh_emlrtRSI;
    trapz(Bld->BldSec, EvS1, FB1_t);
  } else {
    st.site = &yh_emlrtRSI;
    binary_expand_op_75(yh_emlrtRSI, Bld, F_AeroB1, EvS1, FB1_t);
  }

  /*  ==== Blade 3 Partial Forces ==== */
  st.site = &ai_emlrtRSI;
  c_coprod(&st, Bld->mB1, EvS2_Sg, EvS3);
  emxFree_real_T(sp, &EvS2_Sg);
  st.site = &ai_emlrtRSI;
  trapz(Bld->BldSec, EvS3, FB2_Sg);
  r = _mm_loadu_pd(&FB2_Sg[0]);
  _mm_storeu_pd(&FB2_Sg[0], _mm_mul_pd(r, r45));
  FB2_Sg[2] = -FB2_Sg[2];
  st.site = &bi_emlrtRSI;
  c_coprod(&st, Bld->mB1, EvS2_Sw, EvS3);
  emxFree_real_T(sp, &EvS2_Sw);
  st.site = &bi_emlrtRSI;
  trapz(Bld->BldSec, EvS3, FB2_Sw);
  r = _mm_loadu_pd(&FB2_Sw[0]);
  _mm_storeu_pd(&FB2_Sw[0], _mm_mul_pd(r, r45));
  FB2_Sw[2] = -FB2_Sw[2];
  st.site = &ci_emlrtRSI;
  c_coprod(&st, Bld->mB1, EvS2_Hv, EvS3);
  emxFree_real_T(sp, &EvS2_Hv);
  st.site = &ci_emlrtRSI;
  trapz(Bld->BldSec, EvS3, FB2_Hv);
  r = _mm_loadu_pd(&FB2_Hv[0]);
  _mm_storeu_pd(&FB2_Hv[0], _mm_mul_pd(r, r45));
  FB2_Hv[2] = -FB2_Hv[2];
  st.site = &di_emlrtRSI;
  c_coprod(&st, Bld->mB1, EvS2_R, EvS3);
  st.site = &di_emlrtRSI;
  trapz(Bld->BldSec, EvS3, FB2_R);
  r = _mm_loadu_pd(&FB2_R[0]);
  _mm_storeu_pd(&FB2_R[0], _mm_mul_pd(r, r45));
  FB2_R[2] = -FB2_R[2];
  st.site = &ei_emlrtRSI;
  c_coprod(&st, Bld->mB1, EvS2_P, EvS3);
  st.site = &ei_emlrtRSI;
  trapz(Bld->BldSec, EvS3, FB2_P);
  r = _mm_loadu_pd(&FB2_P[0]);
  _mm_storeu_pd(&FB2_P[0], _mm_mul_pd(r, r45));
  FB2_P[2] = -FB2_P[2];
  st.site = &fi_emlrtRSI;
  c_coprod(&st, Bld->mB1, EvS2_Y, EvS3);
  st.site = &fi_emlrtRSI;
  trapz(Bld->BldSec, EvS3, FB2_Y);
  r = _mm_loadu_pd(&FB2_Y[0]);
  _mm_storeu_pd(&FB2_Y[0], _mm_mul_pd(r, r45));
  FB2_Y[2] = -FB2_Y[2];
  st.site = &gi_emlrtRSI;
  c_coprod(&st, Bld->mB1, EvS2_TFA1, EvS3);
  st.site = &gi_emlrtRSI;
  trapz(Bld->BldSec, EvS3, FB2_TFA1);
  r = _mm_loadu_pd(&FB2_TFA1[0]);
  _mm_storeu_pd(&FB2_TFA1[0], _mm_mul_pd(r, r45));
  FB2_TFA1[2] = -FB2_TFA1[2];
  st.site = &hi_emlrtRSI;
  c_coprod(&st, Bld->mB1, EvS2_TSS1, EvS3);
  st.site = &hi_emlrtRSI;
  trapz(Bld->BldSec, EvS3, FB2_TSS1);
  r = _mm_loadu_pd(&FB2_TSS1[0]);
  _mm_storeu_pd(&FB2_TSS1[0], _mm_mul_pd(r, r45));
  FB2_TSS1[2] = -FB2_TSS1[2];
  st.site = &ii_emlrtRSI;
  c_coprod(&st, Bld->mB1, EvS2_TFA2, EvS3);
  st.site = &ii_emlrtRSI;
  trapz(Bld->BldSec, EvS3, FB2_TFA2);
  r = _mm_loadu_pd(&FB2_TFA2[0]);
  _mm_storeu_pd(&FB2_TFA2[0], _mm_mul_pd(r, r45));
  FB2_TFA2[2] = -FB2_TFA2[2];
  st.site = &ji_emlrtRSI;
  c_coprod(&st, Bld->mB1, EvS2_TSS2, EvS3);
  st.site = &ji_emlrtRSI;
  trapz(Bld->BldSec, EvS3, FB2_TSS2);
  r = _mm_loadu_pd(&FB2_TSS2[0]);
  _mm_storeu_pd(&FB2_TSS2[0], _mm_mul_pd(r, r45));
  FB2_TSS2[2] = -FB2_TSS2[2];
  st.site = &ki_emlrtRSI;
  c_coprod(&st, Bld->mB1, EvS2_yaw, EvS3);
  st.site = &ki_emlrtRSI;
  trapz(Bld->BldSec, EvS3, FB2_yaw);
  r = _mm_loadu_pd(&FB2_yaw[0]);
  _mm_storeu_pd(&FB2_yaw[0], _mm_mul_pd(r, r45));
  FB2_yaw[2] = -FB2_yaw[2];
  st.site = &li_emlrtRSI;
  c_coprod(&st, Bld->mB1, EvS2_GeAz, EvS3);
  st.site = &li_emlrtRSI;
  trapz(Bld->BldSec, EvS3, EvQ_TFA1);
  r = _mm_loadu_pd(&EvQ_TFA1[0]);
  _mm_storeu_pd(&EvQ_TFA1[0], _mm_mul_pd(r, r45));
  EvQ_TFA1[2] = -EvQ_TFA1[2];
  st.site = &mi_emlrtRSI;
  c_coprod(&st, Bld->mB1, EvS2_DrTr, EvS3);
  st.site = &mi_emlrtRSI;
  trapz(Bld->BldSec, EvS3, XvO);
  r = _mm_loadu_pd(&XvO[0]);
  _mm_storeu_pd(&XvO[0], _mm_mul_pd(r, r45));
  XvO[2] = -XvO[2];
  for (it = 0; it < 19; it++) {
    r = _mm_loadu_pd(&EvS2_B2F1[3 * it]);
    I_pr_app = Bld->mB1[it];
    _mm_storeu_pd(&HvS3[3 * it], _mm_mul_pd(_mm_set1_pd(I_pr_app), r));
    n = 3 * it + 2;
    HvS3[n] = I_pr_app * EvS2_B2F1[n];
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }

  st.site = &ni_emlrtRSI;
  trapz(Bld->BldSec, HvS3, FB2_B2F1);
  r = _mm_loadu_pd(&FB2_B2F1[0]);
  _mm_storeu_pd(&FB2_B2F1[0], _mm_mul_pd(r, r45));
  FB2_B2F1[2] = -FB2_B2F1[2];
  for (it = 0; it < 19; it++) {
    r = _mm_loadu_pd(&EvS2_B2E1[3 * it]);
    I_pr_app = Bld->mB1[it];
    _mm_storeu_pd(&FB2_B2E1_tmp[3 * it], _mm_mul_pd(_mm_set1_pd(I_pr_app), r));
    n = 3 * it + 2;
    FB2_B2E1_tmp[n] = I_pr_app * EvS2_B2E1[n];
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }

  st.site = &oi_emlrtRSI;
  trapz(Bld->BldSec, FB2_B2E1_tmp, FB2_B2E1);
  r = _mm_loadu_pd(&FB2_B2E1[0]);
  _mm_storeu_pd(&FB2_B2E1[0], _mm_mul_pd(r, r45));
  FB2_B2E1[2] = -FB2_B2E1[2];
  for (it = 0; it < 19; it++) {
    r = _mm_loadu_pd(&EvS2_B2F2[3 * it]);
    I_pr_app = Bld->mB1[it];
    _mm_storeu_pd(&FB2_B2F2_tmp[3 * it], _mm_mul_pd(_mm_set1_pd(I_pr_app), r));
    n = 3 * it + 2;
    FB2_B2F2_tmp[n] = I_pr_app * EvS2_B2F2[n];
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }

  st.site = &pi_emlrtRSI;
  trapz(Bld->BldSec, FB2_B2F2_tmp, FB2_B2F2);
  r = _mm_loadu_pd(&FB2_B2F2[0]);
  _mm_storeu_pd(&FB2_B2F2[0], _mm_mul_pd(r, r45));
  FB2_B2F2[2] = -FB2_B2F2[2];
  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Bld->nb;
  st.site = &qi_emlrtRSI;
  f_repmat(&st, dEvQ_TSS1, VzB1);
  c_n = 3 * VzB1->size[2];
  n = VzB1->size[0] * VzB1->size[1] * VzB1->size[2];
  VzB1->size[0] = 1;
  VzB1->size[1] = 3;
  emxEnsureCapacity_real_T(sp, VzB1, n, &eh_emlrtRTEI);
  VzB1_data = VzB1->data;
  n = (c_n / 2) << 1;
  b_n = n - 2;
  for (b_it = 0; b_it <= b_n; b_it += 2) {
    r = _mm_loadu_pd(&VzB1_data[b_it]);
    _mm_storeu_pd(&VzB1_data[b_it], _mm_mul_pd(_mm_set1_pd(9.80665), r));
  }

  for (b_it = n; b_it < c_n; b_it++) {
    VzB1_data[b_it] *= 9.80665;
  }

  if ((VzB1->size[2] != 19) && (VzB1->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(VzB1->size[2], 19, &ug_emlrtECI, (emlrtConstCTX)
      sp);
  }

  if ((F_AeroB2->size[2] != 19) && (F_AeroB2->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(F_AeroB2->size[2], 19, &vg_emlrtECI,
      (emlrtConstCTX)sp);
  }

  if (VzB1->size[2] == 19) {
    for (it = 0; it <= 54; it += 2) {
      r = _mm_loadu_pd(&VzB1_data[it]);
      r1 = _mm_loadu_pd(&dEvS2[it]);
      _mm_storeu_pd(&EvS3[it], _mm_add_pd(r, r1));
    }

    EvS3[56] = VzB1_data[56] + dEvS2[56];
  } else {
    d_plus(EvS3, VzB1, dEvS2);
  }

  for (it = 0; it < 19; it++) {
    r = _mm_loadu_pd(&EvS3[3 * it]);
    I_pr_app = Bld->mB1[it];
    _mm_storeu_pd(&EvS1[3 * it], _mm_mul_pd(_mm_set1_pd(I_pr_app), r));
    n = 3 * it + 2;
    EvS1[n] = I_pr_app * EvS3[n];
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }

  if (F_AeroB2->size[2] == 19) {
    for (it = 0; it <= 54; it += 2) {
      r = _mm_loadu_pd(&F_AeroB2_data[it]);
      r1 = _mm_loadu_pd(&EvS1[it]);
      _mm_storeu_pd(&EvS1[it], _mm_sub_pd(r, r1));
    }

    EvS1[56] = F_AeroB2_data[56] - EvS1[56];
    st.site = &qi_emlrtRSI;
    trapz(Bld->BldSec, EvS1, FB2_t);
  } else {
    st.site = &qi_emlrtRSI;
    binary_expand_op_75(qi_emlrtRSI, Bld, F_AeroB2, EvS1, FB2_t);
  }

  /*  ==== Blade 3 Partial Forces ==== */
  st.site = &ri_emlrtRSI;
  c_coprod(&st, Bld->mB1, EvS3_Sg, EvS3);
  emxFree_real_T(sp, &EvS3_Sg);
  st.site = &ri_emlrtRSI;
  trapz(Bld->BldSec, EvS3, FB3_Sg);
  r = _mm_loadu_pd(&FB3_Sg[0]);
  _mm_storeu_pd(&FB3_Sg[0], _mm_mul_pd(r, r45));
  FB3_Sg[2] = -FB3_Sg[2];
  st.site = &si_emlrtRSI;
  c_coprod(&st, Bld->mB1, EvS3_Sw, EvS3);
  emxFree_real_T(sp, &EvS3_Sw);
  st.site = &si_emlrtRSI;
  trapz(Bld->BldSec, EvS3, FB3_Sw);
  r = _mm_loadu_pd(&FB3_Sw[0]);
  _mm_storeu_pd(&FB3_Sw[0], _mm_mul_pd(r, r45));
  FB3_Sw[2] = -FB3_Sw[2];
  st.site = &ti_emlrtRSI;
  c_coprod(&st, Bld->mB1, EvS3_Hv, EvS3);
  emxFree_real_T(sp, &EvS3_Hv);
  st.site = &ti_emlrtRSI;
  trapz(Bld->BldSec, EvS3, FB3_Hv);
  r = _mm_loadu_pd(&FB3_Hv[0]);
  _mm_storeu_pd(&FB3_Hv[0], _mm_mul_pd(r, r45));
  FB3_Hv[2] = -FB3_Hv[2];
  st.site = &ui_emlrtRSI;
  c_coprod(&st, Bld->mB1, EvS3_R, EvS3);
  st.site = &ui_emlrtRSI;
  trapz(Bld->BldSec, EvS3, FB3_R);
  r = _mm_loadu_pd(&FB3_R[0]);
  _mm_storeu_pd(&FB3_R[0], _mm_mul_pd(r, r45));
  FB3_R[2] = -FB3_R[2];
  st.site = &vi_emlrtRSI;
  c_coprod(&st, Bld->mB1, EvS3_P, EvS3);
  st.site = &vi_emlrtRSI;
  trapz(Bld->BldSec, EvS3, FB3_P);
  r = _mm_loadu_pd(&FB3_P[0]);
  _mm_storeu_pd(&FB3_P[0], _mm_mul_pd(r, r45));
  FB3_P[2] = -FB3_P[2];
  st.site = &wi_emlrtRSI;
  c_coprod(&st, Bld->mB1, EvS3_Y, EvS3);
  st.site = &wi_emlrtRSI;
  trapz(Bld->BldSec, EvS3, FB3_Y);
  r = _mm_loadu_pd(&FB3_Y[0]);
  _mm_storeu_pd(&FB3_Y[0], _mm_mul_pd(r, r45));
  FB3_Y[2] = -FB3_Y[2];
  st.site = &xi_emlrtRSI;
  c_coprod(&st, Bld->mB1, EvS3_TFA1, EvS3);
  st.site = &xi_emlrtRSI;
  trapz(Bld->BldSec, EvS3, FB3_TFA1);
  r = _mm_loadu_pd(&FB3_TFA1[0]);
  _mm_storeu_pd(&FB3_TFA1[0], _mm_mul_pd(r, r45));
  FB3_TFA1[2] = -FB3_TFA1[2];
  st.site = &yi_emlrtRSI;
  c_coprod(&st, Bld->mB1, EvS3_TSS1, EvS3);
  st.site = &yi_emlrtRSI;
  trapz(Bld->BldSec, EvS3, FB3_TSS1);
  r = _mm_loadu_pd(&FB3_TSS1[0]);
  _mm_storeu_pd(&FB3_TSS1[0], _mm_mul_pd(r, r45));
  FB3_TSS1[2] = -FB3_TSS1[2];
  st.site = &aj_emlrtRSI;
  c_coprod(&st, Bld->mB1, EvS3_TFA2, EvS3);
  st.site = &aj_emlrtRSI;
  trapz(Bld->BldSec, EvS3, FB3_TFA2);
  r = _mm_loadu_pd(&FB3_TFA2[0]);
  _mm_storeu_pd(&FB3_TFA2[0], _mm_mul_pd(r, r45));
  FB3_TFA2[2] = -FB3_TFA2[2];
  st.site = &bj_emlrtRSI;
  c_coprod(&st, Bld->mB1, EvS3_TSS2, EvS3);
  st.site = &bj_emlrtRSI;
  trapz(Bld->BldSec, EvS3, FB3_TSS2);
  r = _mm_loadu_pd(&FB3_TSS2[0]);
  _mm_storeu_pd(&FB3_TSS2[0], _mm_mul_pd(r, r45));
  FB3_TSS2[2] = -FB3_TSS2[2];
  st.site = &cj_emlrtRSI;
  c_coprod(&st, Bld->mB1, EvS3_yaw, EvS3);
  st.site = &cj_emlrtRSI;
  trapz(Bld->BldSec, EvS3, FB3_yaw);
  r = _mm_loadu_pd(&FB3_yaw[0]);
  _mm_storeu_pd(&FB3_yaw[0], _mm_mul_pd(r, r45));
  FB3_yaw[2] = -FB3_yaw[2];
  st.site = &dj_emlrtRSI;
  c_coprod(&st, Bld->mB1, EvS3_GeAz, EvS3);
  st.site = &dj_emlrtRSI;
  trapz(Bld->BldSec, EvS3, EvQ_TSS1);
  r = _mm_loadu_pd(&EvQ_TSS1[0]);
  _mm_storeu_pd(&EvQ_TSS1[0], _mm_mul_pd(r, r45));
  EvQ_TSS1[2] = -EvQ_TSS1[2];
  st.site = &ej_emlrtRSI;
  c_coprod(&st, Bld->mB1, EvS3_DrTr, EvS3);
  st.site = &ej_emlrtRSI;
  trapz(Bld->BldSec, EvS3, EwL_yaw);
  r = _mm_loadu_pd(&EwL_yaw[0]);
  _mm_storeu_pd(&EwL_yaw[0], _mm_mul_pd(r, r45));
  EwL_yaw[2] = -EwL_yaw[2];
  for (it = 0; it < 19; it++) {
    r = _mm_loadu_pd(&EvS3_B3F1[3 * it]);
    I_pr_app = Bld->mB1[it];
    _mm_storeu_pd(&FB3_B3F1_tmp[3 * it], _mm_mul_pd(_mm_set1_pd(I_pr_app), r));
    n = 3 * it + 2;
    FB3_B3F1_tmp[n] = I_pr_app * EvS3_B3F1[n];
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }

  st.site = &fj_emlrtRSI;
  trapz(Bld->BldSec, FB3_B3F1_tmp, FB3_B3F1);
  r = _mm_loadu_pd(&FB3_B3F1[0]);
  _mm_storeu_pd(&FB3_B3F1[0], _mm_mul_pd(r, r45));
  FB3_B3F1[2] = -FB3_B3F1[2];
  for (it = 0; it < 19; it++) {
    r = _mm_loadu_pd(&EvS3_B3E1[3 * it]);
    I_pr_app = Bld->mB1[it];
    _mm_storeu_pd(&FB3_B3E1_tmp[3 * it], _mm_mul_pd(_mm_set1_pd(I_pr_app), r));
    n = 3 * it + 2;
    FB3_B3E1_tmp[n] = I_pr_app * EvS3_B3E1[n];
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }

  st.site = &gj_emlrtRSI;
  trapz(Bld->BldSec, FB3_B3E1_tmp, FB3_B3E1);
  r = _mm_loadu_pd(&FB3_B3E1[0]);
  _mm_storeu_pd(&FB3_B3E1[0], _mm_mul_pd(r, r45));
  FB3_B3E1[2] = -FB3_B3E1[2];
  for (it = 0; it < 19; it++) {
    r = _mm_loadu_pd(&EvS3_B3F2[3 * it]);
    I_pr_app = Bld->mB1[it];
    _mm_storeu_pd(&FB3_B3F2_tmp[3 * it], _mm_mul_pd(_mm_set1_pd(I_pr_app), r));
    n = 3 * it + 2;
    FB3_B3F2_tmp[n] = I_pr_app * EvS3_B3F2[n];
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }

  st.site = &hj_emlrtRSI;
  trapz(Bld->BldSec, FB3_B3F2_tmp, FB3_B3F2);
  r = _mm_loadu_pd(&FB3_B3F2[0]);
  _mm_storeu_pd(&FB3_B3F2[0], _mm_mul_pd(r, r45));
  FB3_B3F2[2] = -FB3_B3F2[2];
  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Bld->nb;
  st.site = &ij_emlrtRSI;
  f_repmat(&st, dEvQ_TSS1, VzB1);
  c_n = 3 * VzB1->size[2];
  n = VzB1->size[0] * VzB1->size[1] * VzB1->size[2];
  VzB1->size[0] = 1;
  VzB1->size[1] = 3;
  emxEnsureCapacity_real_T(sp, VzB1, n, &fh_emlrtRTEI);
  VzB1_data = VzB1->data;
  n = (c_n / 2) << 1;
  b_n = n - 2;
  for (b_it = 0; b_it <= b_n; b_it += 2) {
    r = _mm_loadu_pd(&VzB1_data[b_it]);
    _mm_storeu_pd(&VzB1_data[b_it], _mm_mul_pd(_mm_set1_pd(9.80665), r));
  }

  for (b_it = n; b_it < c_n; b_it++) {
    VzB1_data[b_it] *= 9.80665;
  }

  if ((VzB1->size[2] != 19) && (VzB1->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(VzB1->size[2], 19, &wg_emlrtECI, (emlrtConstCTX)
      sp);
  }

  if ((F_AeroB3->size[2] != 19) && (F_AeroB3->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(F_AeroB3->size[2], 19, &xg_emlrtECI,
      (emlrtConstCTX)sp);
  }

  if (VzB1->size[2] == 19) {
    for (it = 0; it <= 54; it += 2) {
      r = _mm_loadu_pd(&VzB1_data[it]);
      r1 = _mm_loadu_pd(&dEvS3[it]);
      _mm_storeu_pd(&EvS3[it], _mm_add_pd(r, r1));
    }

    EvS3[56] = VzB1_data[56] + dEvS3[56];
  } else {
    d_plus(EvS3, VzB1, dEvS3);
  }

  for (it = 0; it < 19; it++) {
    r = _mm_loadu_pd(&EvS3[3 * it]);
    I_pr_app = Bld->mB1[it];
    _mm_storeu_pd(&EvS1[3 * it], _mm_mul_pd(_mm_set1_pd(I_pr_app), r));
    n = 3 * it + 2;
    EvS1[n] = I_pr_app * EvS3[n];
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }

  if (F_AeroB3->size[2] == 19) {
    for (it = 0; it <= 54; it += 2) {
      r = _mm_loadu_pd(&F_AeroB3_data[it]);
      r1 = _mm_loadu_pd(&EvS1[it]);
      _mm_storeu_pd(&b_HvS1[it], _mm_sub_pd(r, r1));
    }

    b_HvS1[56] = F_AeroB3_data[56] - EvS1[56];
    st.site = &ij_emlrtRSI;
    trapz(Bld->BldSec, b_HvS1, FB3_t);
  } else {
    st.site = &ij_emlrtRSI;
    binary_expand_op_75(ij_emlrtRSI, Bld, F_AeroB3, EvS1, FB3_t);
  }

  /*  ==== Blade 1 Partial Moments ==== */
  /*  MB1_Sg   = - trapz(BldSec, cross(rQS1 - rQS10, mB1.*EvS1_Sg,   2), 3); */
  /*  MB1_Sw   = - trapz(BldSec, cross(rQS1 - rQS10, mB1.*EvS1_Sw,   2), 3); */
  /*  MB1_Hv   = - trapz(BldSec, cross(rQS1 - rQS10, mB1.*EvS1_Hv,   2), 3); */
  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Bld->nb;
  st.site = &jj_emlrtRSI;
  i_repmat(&st, &rQS1[0], dEvQ_TSS1, r6);
  r7 = r6->data;
  if ((r6->size[2] != 19) && (r6->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(19, r6->size[2], &yg_emlrtECI, (emlrtConstCTX)sp);
  }

  st.site = &jj_emlrtRSI;
  c_coprod(&st, Bld->mB1, EvS1_R, EvS3);
  emxFree_real_T(sp, &EvS1_R);
  if (r6->size[2] == 19) {
    for (it = 0; it <= 54; it += 2) {
      r = _mm_loadu_pd(&rQS1[it]);
      r1 = _mm_loadu_pd(&r7[it]);
      _mm_storeu_pd(&b_rQS1[it], _mm_sub_pd(r, r1));
    }

    b_rQS1[56] = rQS1[56] - r7[56];
    st.site = &jj_emlrtRSI;
    e_cross(b_rQS1, EvS3, EvS1);
  } else {
    st.site = &jj_emlrtRSI;
    binary_expand_op_34(jj_emlrtRSI, rQS1, r6, EvS3, EvS1);
  }

  st.site = &jj_emlrtRSI;
  trapz(Bld->BldSec, EvS1, MB1_R);
  r = _mm_loadu_pd(&MB1_R[0]);
  _mm_storeu_pd(&MB1_R[0], _mm_mul_pd(r, r45));
  MB1_R[2] = -MB1_R[2];
  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Bld->nb;
  st.site = &kj_emlrtRSI;
  i_repmat(&st, &rQS1[0], dEvQ_TSS1, r6);
  r7 = r6->data;
  if ((r6->size[2] != 19) && (r6->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(19, r6->size[2], &ah_emlrtECI, (emlrtConstCTX)sp);
  }

  st.site = &kj_emlrtRSI;
  c_coprod(&st, Bld->mB1, EvS1_P, EvS3);
  emxFree_real_T(sp, &EvS1_P);
  if (r6->size[2] == 19) {
    for (it = 0; it <= 54; it += 2) {
      r = _mm_loadu_pd(&rQS1[it]);
      r1 = _mm_loadu_pd(&r7[it]);
      _mm_storeu_pd(&b_rQS1[it], _mm_sub_pd(r, r1));
    }

    b_rQS1[56] = rQS1[56] - r7[56];
    st.site = &kj_emlrtRSI;
    e_cross(b_rQS1, EvS3, EvS1);
  } else {
    st.site = &kj_emlrtRSI;
    binary_expand_op_34(kj_emlrtRSI, rQS1, r6, EvS3, EvS1);
  }

  st.site = &kj_emlrtRSI;
  trapz(Bld->BldSec, EvS1, MB1_P);
  r = _mm_loadu_pd(&MB1_P[0]);
  _mm_storeu_pd(&MB1_P[0], _mm_mul_pd(r, r45));
  MB1_P[2] = -MB1_P[2];
  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Bld->nb;
  st.site = &lj_emlrtRSI;
  i_repmat(&st, &rQS1[0], dEvQ_TSS1, r6);
  r7 = r6->data;
  if ((r6->size[2] != 19) && (r6->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(19, r6->size[2], &bh_emlrtECI, (emlrtConstCTX)sp);
  }

  st.site = &lj_emlrtRSI;
  c_coprod(&st, Bld->mB1, EvS1_Y, EvS3);
  emxFree_real_T(sp, &EvS1_Y);
  if (r6->size[2] == 19) {
    for (it = 0; it <= 54; it += 2) {
      r = _mm_loadu_pd(&rQS1[it]);
      r1 = _mm_loadu_pd(&r7[it]);
      _mm_storeu_pd(&b_rQS1[it], _mm_sub_pd(r, r1));
    }

    b_rQS1[56] = rQS1[56] - r7[56];
    st.site = &lj_emlrtRSI;
    e_cross(b_rQS1, EvS3, EvS1);
  } else {
    st.site = &lj_emlrtRSI;
    binary_expand_op_34(lj_emlrtRSI, rQS1, r6, EvS3, EvS1);
  }

  st.site = &lj_emlrtRSI;
  trapz(Bld->BldSec, EvS1, MB1_Y);
  r = _mm_loadu_pd(&MB1_Y[0]);
  _mm_storeu_pd(&MB1_Y[0], _mm_mul_pd(r, r45));
  MB1_Y[2] = -MB1_Y[2];
  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Bld->nb;
  st.site = &mj_emlrtRSI;
  i_repmat(&st, &rQS1[0], dEvQ_TSS1, r6);
  r7 = r6->data;
  if ((r6->size[2] != 19) && (r6->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(19, r6->size[2], &ch_emlrtECI, (emlrtConstCTX)sp);
  }

  st.site = &mj_emlrtRSI;
  c_coprod(&st, Bld->mB1, EvS1_TFA1, EvS3);
  emxFree_real_T(sp, &EvS1_TFA1);
  if (r6->size[2] == 19) {
    for (it = 0; it <= 54; it += 2) {
      r = _mm_loadu_pd(&rQS1[it]);
      r1 = _mm_loadu_pd(&r7[it]);
      _mm_storeu_pd(&b_rQS1[it], _mm_sub_pd(r, r1));
    }

    b_rQS1[56] = rQS1[56] - r7[56];
    st.site = &mj_emlrtRSI;
    e_cross(b_rQS1, EvS3, EvS1);
  } else {
    st.site = &mj_emlrtRSI;
    binary_expand_op_34(mj_emlrtRSI, rQS1, r6, EvS3, EvS1);
  }

  st.site = &mj_emlrtRSI;
  trapz(Bld->BldSec, EvS1, MB1_TFA1);
  r = _mm_loadu_pd(&MB1_TFA1[0]);
  _mm_storeu_pd(&MB1_TFA1[0], _mm_mul_pd(r, r45));
  MB1_TFA1[2] = -MB1_TFA1[2];
  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Bld->nb;
  st.site = &nj_emlrtRSI;
  i_repmat(&st, &rQS1[0], dEvQ_TSS1, r6);
  r7 = r6->data;
  if ((r6->size[2] != 19) && (r6->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(19, r6->size[2], &dh_emlrtECI, (emlrtConstCTX)sp);
  }

  st.site = &nj_emlrtRSI;
  c_coprod(&st, Bld->mB1, EvS1_TSS1, EvS3);
  emxFree_real_T(sp, &EvS1_TSS1);
  if (r6->size[2] == 19) {
    for (it = 0; it <= 54; it += 2) {
      r = _mm_loadu_pd(&rQS1[it]);
      r1 = _mm_loadu_pd(&r7[it]);
      _mm_storeu_pd(&b_rQS1[it], _mm_sub_pd(r, r1));
    }

    b_rQS1[56] = rQS1[56] - r7[56];
    st.site = &nj_emlrtRSI;
    e_cross(b_rQS1, EvS3, EvS1);
  } else {
    st.site = &nj_emlrtRSI;
    binary_expand_op_34(nj_emlrtRSI, rQS1, r6, EvS3, EvS1);
  }

  st.site = &nj_emlrtRSI;
  trapz(Bld->BldSec, EvS1, MB1_TSS1);
  r = _mm_loadu_pd(&MB1_TSS1[0]);
  _mm_storeu_pd(&MB1_TSS1[0], _mm_mul_pd(r, r45));
  MB1_TSS1[2] = -MB1_TSS1[2];
  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Bld->nb;
  st.site = &oj_emlrtRSI;
  i_repmat(&st, &rQS1[0], dEvQ_TSS1, r6);
  r7 = r6->data;
  if ((r6->size[2] != 19) && (r6->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(19, r6->size[2], &eh_emlrtECI, (emlrtConstCTX)sp);
  }

  st.site = &oj_emlrtRSI;
  c_coprod(&st, Bld->mB1, EvS1_TFA2, EvS3);
  emxFree_real_T(sp, &EvS1_TFA2);
  if (r6->size[2] == 19) {
    for (it = 0; it <= 54; it += 2) {
      r = _mm_loadu_pd(&rQS1[it]);
      r1 = _mm_loadu_pd(&r7[it]);
      _mm_storeu_pd(&b_rQS1[it], _mm_sub_pd(r, r1));
    }

    b_rQS1[56] = rQS1[56] - r7[56];
    st.site = &oj_emlrtRSI;
    e_cross(b_rQS1, EvS3, EvS1);
  } else {
    st.site = &oj_emlrtRSI;
    binary_expand_op_34(oj_emlrtRSI, rQS1, r6, EvS3, EvS1);
  }

  st.site = &oj_emlrtRSI;
  trapz(Bld->BldSec, EvS1, MB1_TFA2);
  r = _mm_loadu_pd(&MB1_TFA2[0]);
  _mm_storeu_pd(&MB1_TFA2[0], _mm_mul_pd(r, r45));
  MB1_TFA2[2] = -MB1_TFA2[2];
  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Bld->nb;
  st.site = &pj_emlrtRSI;
  i_repmat(&st, &rQS1[0], dEvQ_TSS1, r6);
  r7 = r6->data;
  if ((r6->size[2] != 19) && (r6->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(19, r6->size[2], &fh_emlrtECI, (emlrtConstCTX)sp);
  }

  st.site = &pj_emlrtRSI;
  c_coprod(&st, Bld->mB1, EvS1_TSS2, EvS3);
  emxFree_real_T(sp, &EvS1_TSS2);
  if (r6->size[2] == 19) {
    for (it = 0; it <= 54; it += 2) {
      r = _mm_loadu_pd(&rQS1[it]);
      r1 = _mm_loadu_pd(&r7[it]);
      _mm_storeu_pd(&b_rQS1[it], _mm_sub_pd(r, r1));
    }

    b_rQS1[56] = rQS1[56] - r7[56];
    st.site = &pj_emlrtRSI;
    e_cross(b_rQS1, EvS3, EvS1);
  } else {
    st.site = &pj_emlrtRSI;
    binary_expand_op_34(pj_emlrtRSI, rQS1, r6, EvS3, EvS1);
  }

  st.site = &pj_emlrtRSI;
  trapz(Bld->BldSec, EvS1, MB1_TSS2);
  r = _mm_loadu_pd(&MB1_TSS2[0]);
  _mm_storeu_pd(&MB1_TSS2[0], _mm_mul_pd(r, r45));
  MB1_TSS2[2] = -MB1_TSS2[2];
  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Bld->nb;
  st.site = &qj_emlrtRSI;
  i_repmat(&st, &rQS1[0], dEvQ_TSS1, r6);
  r7 = r6->data;
  if ((r6->size[2] != 19) && (r6->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(19, r6->size[2], &gh_emlrtECI, (emlrtConstCTX)sp);
  }

  st.site = &qj_emlrtRSI;
  c_coprod(&st, Bld->mB1, EvS1_yaw, EvS3);
  emxFree_real_T(sp, &EvS1_yaw);
  if (r6->size[2] == 19) {
    for (it = 0; it <= 54; it += 2) {
      r = _mm_loadu_pd(&rQS1[it]);
      r1 = _mm_loadu_pd(&r7[it]);
      _mm_storeu_pd(&b_rQS1[it], _mm_sub_pd(r, r1));
    }

    b_rQS1[56] = rQS1[56] - r7[56];
    st.site = &qj_emlrtRSI;
    e_cross(b_rQS1, EvS3, EvS1);
  } else {
    st.site = &qj_emlrtRSI;
    binary_expand_op_34(qj_emlrtRSI, rQS1, r6, EvS3, EvS1);
  }

  st.site = &qj_emlrtRSI;
  trapz(Bld->BldSec, EvS1, MB1_yaw);
  r = _mm_loadu_pd(&MB1_yaw[0]);
  _mm_storeu_pd(&MB1_yaw[0], _mm_mul_pd(r, r45));
  MB1_yaw[2] = -MB1_yaw[2];
  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Bld->nb;
  st.site = &rj_emlrtRSI;
  i_repmat(&st, &rQS1[0], dEvQ_TSS1, r6);
  r7 = r6->data;
  if ((r6->size[2] != 19) && (r6->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(19, r6->size[2], &hh_emlrtECI, (emlrtConstCTX)sp);
  }

  st.site = &rj_emlrtRSI;
  c_coprod(&st, Bld->mB1, EvS1_GeAz, EvS3);
  emxFree_real_T(sp, &EvS1_GeAz);
  if (r6->size[2] == 19) {
    for (it = 0; it <= 54; it += 2) {
      r = _mm_loadu_pd(&rQS1[it]);
      r1 = _mm_loadu_pd(&r7[it]);
      _mm_storeu_pd(&b_rQS1[it], _mm_sub_pd(r, r1));
    }

    b_rQS1[56] = rQS1[56] - r7[56];
    st.site = &rj_emlrtRSI;
    e_cross(b_rQS1, EvS3, EvS1);
  } else {
    st.site = &rj_emlrtRSI;
    binary_expand_op_34(rj_emlrtRSI, rQS1, r6, EvS3, EvS1);
  }

  st.site = &rj_emlrtRSI;
  trapz(Bld->BldSec, EvS1, EvQ_TFA2);
  r = _mm_loadu_pd(&EvQ_TFA2[0]);
  _mm_storeu_pd(&EvQ_TFA2[0], _mm_mul_pd(r, r45));
  EvQ_TFA2[2] = -EvQ_TFA2[2];
  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Bld->nb;
  st.site = &sj_emlrtRSI;
  i_repmat(&st, &rQS1[0], dEvQ_TSS1, r6);
  r7 = r6->data;
  if ((r6->size[2] != 19) && (r6->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(19, r6->size[2], &ih_emlrtECI, (emlrtConstCTX)sp);
  }

  st.site = &sj_emlrtRSI;
  c_coprod(&st, Bld->mB1, EvS1_DrTr, EvS3);
  emxFree_real_T(sp, &EvS1_DrTr);
  if (r6->size[2] == 19) {
    for (it = 0; it <= 54; it += 2) {
      r = _mm_loadu_pd(&rQS1[it]);
      r1 = _mm_loadu_pd(&r7[it]);
      _mm_storeu_pd(&b_rQS1[it], _mm_sub_pd(r, r1));
    }

    b_rQS1[56] = rQS1[56] - r7[56];
    st.site = &sj_emlrtRSI;
    e_cross(b_rQS1, EvS3, EvS1);
  } else {
    st.site = &sj_emlrtRSI;
    binary_expand_op_34(sj_emlrtRSI, rQS1, r6, EvS3, EvS1);
  }

  st.site = &sj_emlrtRSI;
  trapz(Bld->BldSec, EvS1, MB1_DrTr);
  r = _mm_loadu_pd(&MB1_DrTr[0]);
  _mm_storeu_pd(&MB1_DrTr[0], _mm_mul_pd(r, r45));
  MB1_DrTr[2] = -MB1_DrTr[2];
  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Bld->nb;
  st.site = &tj_emlrtRSI;
  i_repmat(&st, &rQS1[0], dEvQ_TSS1, r6);
  r7 = r6->data;
  if ((r6->size[2] != 19) && (r6->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(19, r6->size[2], &jh_emlrtECI, (emlrtConstCTX)sp);
  }

  if (r6->size[2] == 19) {
    for (it = 0; it <= 54; it += 2) {
      r = _mm_loadu_pd(&rQS1[it]);
      r1 = _mm_loadu_pd(&r7[it]);
      _mm_storeu_pd(&b_rQS1[it], _mm_sub_pd(r, r1));
    }

    b_rQS1[56] = rQS1[56] - r7[56];
    st.site = &tj_emlrtRSI;
    e_cross(b_rQS1, EvS2, EvS3);
  } else {
    st.site = &tj_emlrtRSI;
    binary_expand_op_34(tj_emlrtRSI, rQS1, r6, EvS2, EvS3);
  }

  st.site = &tj_emlrtRSI;
  trapz(Bld->BldSec, EvS3, MB1_B1F1);
  r = _mm_loadu_pd(&MB1_B1F1[0]);
  _mm_storeu_pd(&MB1_B1F1[0], _mm_mul_pd(r, r45));
  MB1_B1F1[2] = -MB1_B1F1[2];
  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Bld->nb;
  st.site = &uj_emlrtRSI;
  i_repmat(&st, &rQS1[0], dEvQ_TSS1, r6);
  r7 = r6->data;
  if ((r6->size[2] != 19) && (r6->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(19, r6->size[2], &kh_emlrtECI, (emlrtConstCTX)sp);
  }

  if (r6->size[2] == 19) {
    for (it = 0; it <= 54; it += 2) {
      r = _mm_loadu_pd(&rQS1[it]);
      r1 = _mm_loadu_pd(&r7[it]);
      _mm_storeu_pd(&b_rQS1[it], _mm_sub_pd(r, r1));
    }

    b_rQS1[56] = rQS1[56] - r7[56];
    st.site = &uj_emlrtRSI;
    e_cross(b_rQS1, HvS1, EvS3);
  } else {
    st.site = &uj_emlrtRSI;
    binary_expand_op_34(uj_emlrtRSI, rQS1, r6, HvS1, EvS3);
  }

  st.site = &uj_emlrtRSI;
  trapz(Bld->BldSec, EvS3, MB1_B1E1);
  r = _mm_loadu_pd(&MB1_B1E1[0]);
  _mm_storeu_pd(&MB1_B1E1[0], _mm_mul_pd(r, r45));
  MB1_B1E1[2] = -MB1_B1E1[2];
  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Bld->nb;
  st.site = &vj_emlrtRSI;
  i_repmat(&st, &rQS1[0], dEvQ_TSS1, r6);
  r7 = r6->data;
  if ((r6->size[2] != 19) && (r6->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(19, r6->size[2], &lh_emlrtECI, (emlrtConstCTX)sp);
  }

  if (r6->size[2] == 19) {
    for (it = 0; it <= 54; it += 2) {
      r = _mm_loadu_pd(&rQS1[it]);
      r1 = _mm_loadu_pd(&r7[it]);
      _mm_storeu_pd(&b_rQS1[it], _mm_sub_pd(r, r1));
    }

    b_rQS1[56] = rQS1[56] - r7[56];
    st.site = &vj_emlrtRSI;
    e_cross(b_rQS1, HvS2, EvS3);
  } else {
    st.site = &vj_emlrtRSI;
    binary_expand_op_34(vj_emlrtRSI, rQS1, r6, HvS2, EvS3);
  }

  st.site = &vj_emlrtRSI;
  trapz(Bld->BldSec, EvS3, MB1_B1F2);
  r = _mm_loadu_pd(&MB1_B1F2[0]);
  _mm_storeu_pd(&MB1_B1F2[0], _mm_mul_pd(r, r45));
  MB1_B1F2[2] = -MB1_B1F2[2];
  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Bld->nb;
  st.site = &wj_emlrtRSI;
  i_repmat(&st, &rQS1[0], dEvQ_TSS1, r6);
  r7 = r6->data;
  if ((r6->size[2] != 19) && (r6->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(19, r6->size[2], &mh_emlrtECI, (emlrtConstCTX)sp);
  }

  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Bld->nb;
  st.site = &wj_emlrtRSI;
  f_repmat(&st, dEvQ_TSS1, VzB1);
  c_n = 3 * VzB1->size[2];
  n = VzB1->size[0] * VzB1->size[1] * VzB1->size[2];
  VzB1->size[0] = 1;
  VzB1->size[1] = 3;
  emxEnsureCapacity_real_T(sp, VzB1, n, &gh_emlrtRTEI);
  VzB1_data = VzB1->data;
  n = (c_n / 2) << 1;
  b_n = n - 2;
  for (b_it = 0; b_it <= b_n; b_it += 2) {
    r = _mm_loadu_pd(&VzB1_data[b_it]);
    _mm_storeu_pd(&VzB1_data[b_it], _mm_mul_pd(_mm_set1_pd(9.80665), r));
  }

  for (b_it = n; b_it < c_n; b_it++) {
    VzB1_data[b_it] *= 9.80665;
  }

  if ((VzB1->size[2] != 19) && (VzB1->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(VzB1->size[2], 19, &nh_emlrtECI, (emlrtConstCTX)
      sp);
  }

  if ((F_AeroB1->size[2] != 19) && (F_AeroB1->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(F_AeroB1->size[2], 19, &oh_emlrtECI,
      (emlrtConstCTX)sp);
  }

  if (VzB1->size[2] == 19) {
    for (it = 0; it <= 54; it += 2) {
      r = _mm_loadu_pd(&VzB1_data[it]);
      r1 = _mm_loadu_pd(&dEvS1[it]);
      _mm_storeu_pd(&EvS3[it], _mm_add_pd(r, r1));
    }

    EvS3[56] = VzB1_data[56] + dEvS1[56];
  } else {
    d_plus(EvS3, VzB1, dEvS1);
  }

  for (it = 0; it < 19; it++) {
    r = _mm_loadu_pd(&EvS3[3 * it]);
    I_pr_app = Bld->mB1[it];
    _mm_storeu_pd(&EvS1[3 * it], _mm_mul_pd(_mm_set1_pd(I_pr_app), r));
    n = 3 * it + 2;
    EvS1[n] = I_pr_app * EvS3[n];
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }

  if ((r6->size[2] == 19) && (F_AeroB1->size[2] == 19)) {
    for (it = 0; it <= 54; it += 2) {
      r = _mm_loadu_pd(&rQS1[it]);
      r1 = _mm_loadu_pd(&r7[it]);
      _mm_storeu_pd(&b_rQS1[it], _mm_sub_pd(r, r1));
    }

    b_rQS1[56] = rQS1[56] - r7[56];
    for (it = 0; it <= 54; it += 2) {
      r = _mm_loadu_pd(&F_AeroB1_data[it]);
      r1 = _mm_loadu_pd(&EvS1[it]);
      _mm_storeu_pd(&b_HvS1[it], _mm_sub_pd(r, r1));
    }

    b_HvS1[56] = F_AeroB1_data[56] - EvS1[56];
    st.site = &wj_emlrtRSI;
    e_cross(b_rQS1, b_HvS1, EvS3);
  } else {
    st.site = &wj_emlrtRSI;
    binary_expand_op_33(wj_emlrtRSI, rQS1, r6, F_AeroB1, EvS1, EvS3);
  }

  st.site = &wj_emlrtRSI;
  trapz(Bld->BldSec, EvS3, MB1_t);
  st.site = &wj_emlrtRSI;
  b_trapz(&st, Bld->BldSec, M_AeroB1, FRotor_TFA2);
  r = _mm_loadu_pd(&MB1_t[0]);
  r1 = _mm_loadu_pd(&FRotor_TFA2[0]);
  _mm_storeu_pd(&MB1_t[0], _mm_add_pd(r, r1));
  MB1_t[2] += FRotor_TFA2[2];

  /*  ==== Blade 2 Partial Moments ==== */
  /*  MB2_Sg   = - trapz(BldSec, cross(rQS2 - rQS20, mB2.*EvS2_Sg,   2), 3); */
  /*  MB2_Sw   = - trapz(BldSec, cross(rQS2 - rQS20, mB2.*EvS2_Sw,   2), 3); */
  /*  MB2_Hv   = - trapz(BldSec, cross(rQS2 - rQS20, mB2.*EvS2_Hv,   2), 3); */
  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Bld->nb;
  st.site = &xj_emlrtRSI;
  i_repmat(&st, &rQS2[0], dEvQ_TSS1, r6);
  r7 = r6->data;
  if ((r6->size[2] != 19) && (r6->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(19, r6->size[2], &ph_emlrtECI, (emlrtConstCTX)sp);
  }

  st.site = &xj_emlrtRSI;
  c_coprod(&st, Bld->mB1, EvS2_R, EvS3);
  emxFree_real_T(sp, &EvS2_R);
  if (r6->size[2] == 19) {
    for (it = 0; it <= 54; it += 2) {
      r = _mm_loadu_pd(&rQS2[it]);
      r1 = _mm_loadu_pd(&r7[it]);
      _mm_storeu_pd(&b_rQS1[it], _mm_sub_pd(r, r1));
    }

    b_rQS1[56] = rQS2[56] - r7[56];
    st.site = &xj_emlrtRSI;
    e_cross(b_rQS1, EvS3, EvS1);
  } else {
    st.site = &xj_emlrtRSI;
    binary_expand_op_34(xj_emlrtRSI, rQS2, r6, EvS3, EvS1);
  }

  st.site = &xj_emlrtRSI;
  trapz(Bld->BldSec, EvS1, MB2_R);
  r = _mm_loadu_pd(&MB2_R[0]);
  _mm_storeu_pd(&MB2_R[0], _mm_mul_pd(r, r45));
  MB2_R[2] = -MB2_R[2];
  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Bld->nb;
  st.site = &yj_emlrtRSI;
  i_repmat(&st, &rQS2[0], dEvQ_TSS1, r6);
  r7 = r6->data;
  if ((r6->size[2] != 19) && (r6->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(19, r6->size[2], &qh_emlrtECI, (emlrtConstCTX)sp);
  }

  st.site = &yj_emlrtRSI;
  c_coprod(&st, Bld->mB1, EvS2_P, EvS3);
  emxFree_real_T(sp, &EvS2_P);
  if (r6->size[2] == 19) {
    for (it = 0; it <= 54; it += 2) {
      r = _mm_loadu_pd(&rQS2[it]);
      r1 = _mm_loadu_pd(&r7[it]);
      _mm_storeu_pd(&b_rQS1[it], _mm_sub_pd(r, r1));
    }

    b_rQS1[56] = rQS2[56] - r7[56];
    st.site = &yj_emlrtRSI;
    e_cross(b_rQS1, EvS3, EvS1);
  } else {
    st.site = &yj_emlrtRSI;
    binary_expand_op_34(yj_emlrtRSI, rQS2, r6, EvS3, EvS1);
  }

  st.site = &yj_emlrtRSI;
  trapz(Bld->BldSec, EvS1, MB2_P);
  r = _mm_loadu_pd(&MB2_P[0]);
  _mm_storeu_pd(&MB2_P[0], _mm_mul_pd(r, r45));
  MB2_P[2] = -MB2_P[2];
  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Bld->nb;
  st.site = &ak_emlrtRSI;
  i_repmat(&st, &rQS2[0], dEvQ_TSS1, r6);
  r7 = r6->data;
  if ((r6->size[2] != 19) && (r6->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(19, r6->size[2], &rh_emlrtECI, (emlrtConstCTX)sp);
  }

  st.site = &ak_emlrtRSI;
  c_coprod(&st, Bld->mB1, EvS2_Y, EvS3);
  emxFree_real_T(sp, &EvS2_Y);
  if (r6->size[2] == 19) {
    for (it = 0; it <= 54; it += 2) {
      r = _mm_loadu_pd(&rQS2[it]);
      r1 = _mm_loadu_pd(&r7[it]);
      _mm_storeu_pd(&b_rQS1[it], _mm_sub_pd(r, r1));
    }

    b_rQS1[56] = rQS2[56] - r7[56];
    st.site = &ak_emlrtRSI;
    e_cross(b_rQS1, EvS3, EvS1);
  } else {
    st.site = &ak_emlrtRSI;
    binary_expand_op_34(ak_emlrtRSI, rQS2, r6, EvS3, EvS1);
  }

  st.site = &ak_emlrtRSI;
  trapz(Bld->BldSec, EvS1, MB2_Y);
  r = _mm_loadu_pd(&MB2_Y[0]);
  _mm_storeu_pd(&MB2_Y[0], _mm_mul_pd(r, r45));
  MB2_Y[2] = -MB2_Y[2];
  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Bld->nb;
  st.site = &bk_emlrtRSI;
  i_repmat(&st, &rQS2[0], dEvQ_TSS1, r6);
  r7 = r6->data;
  if ((r6->size[2] != 19) && (r6->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(19, r6->size[2], &sh_emlrtECI, (emlrtConstCTX)sp);
  }

  st.site = &bk_emlrtRSI;
  c_coprod(&st, Bld->mB1, EvS2_TFA1, EvS3);
  emxFree_real_T(sp, &EvS2_TFA1);
  if (r6->size[2] == 19) {
    for (it = 0; it <= 54; it += 2) {
      r = _mm_loadu_pd(&rQS2[it]);
      r1 = _mm_loadu_pd(&r7[it]);
      _mm_storeu_pd(&b_rQS1[it], _mm_sub_pd(r, r1));
    }

    b_rQS1[56] = rQS2[56] - r7[56];
    st.site = &bk_emlrtRSI;
    e_cross(b_rQS1, EvS3, EvS1);
  } else {
    st.site = &bk_emlrtRSI;
    binary_expand_op_34(bk_emlrtRSI, rQS2, r6, EvS3, EvS1);
  }

  st.site = &bk_emlrtRSI;
  trapz(Bld->BldSec, EvS1, MB2_TFA1);
  r = _mm_loadu_pd(&MB2_TFA1[0]);
  _mm_storeu_pd(&MB2_TFA1[0], _mm_mul_pd(r, r45));
  MB2_TFA1[2] = -MB2_TFA1[2];
  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Bld->nb;
  st.site = &ck_emlrtRSI;
  i_repmat(&st, &rQS2[0], dEvQ_TSS1, r6);
  r7 = r6->data;
  if ((r6->size[2] != 19) && (r6->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(19, r6->size[2], &th_emlrtECI, (emlrtConstCTX)sp);
  }

  st.site = &ck_emlrtRSI;
  c_coprod(&st, Bld->mB1, EvS2_TSS1, EvS3);
  emxFree_real_T(sp, &EvS2_TSS1);
  if (r6->size[2] == 19) {
    for (it = 0; it <= 54; it += 2) {
      r = _mm_loadu_pd(&rQS2[it]);
      r1 = _mm_loadu_pd(&r7[it]);
      _mm_storeu_pd(&b_rQS1[it], _mm_sub_pd(r, r1));
    }

    b_rQS1[56] = rQS2[56] - r7[56];
    st.site = &ck_emlrtRSI;
    e_cross(b_rQS1, EvS3, EvS1);
  } else {
    st.site = &ck_emlrtRSI;
    binary_expand_op_34(ck_emlrtRSI, rQS2, r6, EvS3, EvS1);
  }

  st.site = &ck_emlrtRSI;
  trapz(Bld->BldSec, EvS1, MB2_TSS1);
  r = _mm_loadu_pd(&MB2_TSS1[0]);
  _mm_storeu_pd(&MB2_TSS1[0], _mm_mul_pd(r, r45));
  MB2_TSS1[2] = -MB2_TSS1[2];
  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Bld->nb;
  st.site = &dk_emlrtRSI;
  i_repmat(&st, &rQS2[0], dEvQ_TSS1, r6);
  r7 = r6->data;
  if ((r6->size[2] != 19) && (r6->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(19, r6->size[2], &uh_emlrtECI, (emlrtConstCTX)sp);
  }

  st.site = &dk_emlrtRSI;
  c_coprod(&st, Bld->mB1, EvS2_TFA2, EvS3);
  emxFree_real_T(sp, &EvS2_TFA2);
  if (r6->size[2] == 19) {
    for (it = 0; it <= 54; it += 2) {
      r = _mm_loadu_pd(&rQS2[it]);
      r1 = _mm_loadu_pd(&r7[it]);
      _mm_storeu_pd(&b_rQS1[it], _mm_sub_pd(r, r1));
    }

    b_rQS1[56] = rQS2[56] - r7[56];
    st.site = &dk_emlrtRSI;
    e_cross(b_rQS1, EvS3, EvS1);
  } else {
    st.site = &dk_emlrtRSI;
    binary_expand_op_34(dk_emlrtRSI, rQS2, r6, EvS3, EvS1);
  }

  st.site = &dk_emlrtRSI;
  trapz(Bld->BldSec, EvS1, MB2_TFA2);
  r = _mm_loadu_pd(&MB2_TFA2[0]);
  _mm_storeu_pd(&MB2_TFA2[0], _mm_mul_pd(r, r45));
  MB2_TFA2[2] = -MB2_TFA2[2];
  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Bld->nb;
  st.site = &ek_emlrtRSI;
  i_repmat(&st, &rQS2[0], dEvQ_TSS1, r6);
  r7 = r6->data;
  if ((r6->size[2] != 19) && (r6->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(19, r6->size[2], &vh_emlrtECI, (emlrtConstCTX)sp);
  }

  st.site = &ek_emlrtRSI;
  c_coprod(&st, Bld->mB1, EvS2_TSS2, EvS3);
  emxFree_real_T(sp, &EvS2_TSS2);
  if (r6->size[2] == 19) {
    for (it = 0; it <= 54; it += 2) {
      r = _mm_loadu_pd(&rQS2[it]);
      r1 = _mm_loadu_pd(&r7[it]);
      _mm_storeu_pd(&b_rQS1[it], _mm_sub_pd(r, r1));
    }

    b_rQS1[56] = rQS2[56] - r7[56];
    st.site = &ek_emlrtRSI;
    e_cross(b_rQS1, EvS3, EvS1);
  } else {
    st.site = &ek_emlrtRSI;
    binary_expand_op_34(ek_emlrtRSI, rQS2, r6, EvS3, EvS1);
  }

  st.site = &ek_emlrtRSI;
  trapz(Bld->BldSec, EvS1, MB2_TSS2);
  r = _mm_loadu_pd(&MB2_TSS2[0]);
  _mm_storeu_pd(&MB2_TSS2[0], _mm_mul_pd(r, r45));
  MB2_TSS2[2] = -MB2_TSS2[2];
  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Bld->nb;
  st.site = &fk_emlrtRSI;
  i_repmat(&st, &rQS2[0], dEvQ_TSS1, r6);
  r7 = r6->data;
  if ((r6->size[2] != 19) && (r6->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(19, r6->size[2], &wh_emlrtECI, (emlrtConstCTX)sp);
  }

  st.site = &fk_emlrtRSI;
  c_coprod(&st, Bld->mB1, EvS2_yaw, EvS3);
  emxFree_real_T(sp, &EvS2_yaw);
  if (r6->size[2] == 19) {
    for (it = 0; it <= 54; it += 2) {
      r = _mm_loadu_pd(&rQS2[it]);
      r1 = _mm_loadu_pd(&r7[it]);
      _mm_storeu_pd(&b_rQS1[it], _mm_sub_pd(r, r1));
    }

    b_rQS1[56] = rQS2[56] - r7[56];
    st.site = &fk_emlrtRSI;
    e_cross(b_rQS1, EvS3, EvS1);
  } else {
    st.site = &fk_emlrtRSI;
    binary_expand_op_34(fk_emlrtRSI, rQS2, r6, EvS3, EvS1);
  }

  st.site = &fk_emlrtRSI;
  trapz(Bld->BldSec, EvS1, MB2_yaw);
  r = _mm_loadu_pd(&MB2_yaw[0]);
  _mm_storeu_pd(&MB2_yaw[0], _mm_mul_pd(r, r45));
  MB2_yaw[2] = -MB2_yaw[2];
  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Bld->nb;
  st.site = &gk_emlrtRSI;
  i_repmat(&st, &rQS2[0], dEvQ_TSS1, r6);
  r7 = r6->data;
  if ((r6->size[2] != 19) && (r6->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(19, r6->size[2], &xh_emlrtECI, (emlrtConstCTX)sp);
  }

  st.site = &gk_emlrtRSI;
  c_coprod(&st, Bld->mB1, EvS2_GeAz, EvS3);
  emxFree_real_T(sp, &EvS2_GeAz);
  if (r6->size[2] == 19) {
    for (it = 0; it <= 54; it += 2) {
      r = _mm_loadu_pd(&rQS2[it]);
      r1 = _mm_loadu_pd(&r7[it]);
      _mm_storeu_pd(&b_rQS1[it], _mm_sub_pd(r, r1));
    }

    b_rQS1[56] = rQS2[56] - r7[56];
    st.site = &gk_emlrtRSI;
    e_cross(b_rQS1, EvS3, EvS1);
  } else {
    st.site = &gk_emlrtRSI;
    binary_expand_op_34(gk_emlrtRSI, rQS2, r6, EvS3, EvS1);
  }

  st.site = &gk_emlrtRSI;
  trapz(Bld->BldSec, EvS1, EvQ_TSS2);
  r = _mm_loadu_pd(&EvQ_TSS2[0]);
  _mm_storeu_pd(&EvQ_TSS2[0], _mm_mul_pd(r, r45));
  EvQ_TSS2[2] = -EvQ_TSS2[2];
  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Bld->nb;
  st.site = &hk_emlrtRSI;
  i_repmat(&st, &rQS2[0], dEvQ_TSS1, r6);
  r7 = r6->data;
  if ((r6->size[2] != 19) && (r6->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(19, r6->size[2], &yh_emlrtECI, (emlrtConstCTX)sp);
  }

  st.site = &hk_emlrtRSI;
  c_coprod(&st, Bld->mB1, EvS2_DrTr, EvS3);
  emxFree_real_T(sp, &EvS2_DrTr);
  if (r6->size[2] == 19) {
    for (it = 0; it <= 54; it += 2) {
      r = _mm_loadu_pd(&rQS2[it]);
      r1 = _mm_loadu_pd(&r7[it]);
      _mm_storeu_pd(&b_rQS1[it], _mm_sub_pd(r, r1));
    }

    b_rQS1[56] = rQS2[56] - r7[56];
    st.site = &hk_emlrtRSI;
    e_cross(b_rQS1, EvS3, EvS1);
  } else {
    st.site = &hk_emlrtRSI;
    binary_expand_op_34(hk_emlrtRSI, rQS2, r6, EvS3, EvS1);
  }

  st.site = &hk_emlrtRSI;
  trapz(Bld->BldSec, EvS1, MB2_DrTr);
  r = _mm_loadu_pd(&MB2_DrTr[0]);
  _mm_storeu_pd(&MB2_DrTr[0], _mm_mul_pd(r, r45));
  MB2_DrTr[2] = -MB2_DrTr[2];
  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Bld->nb;
  st.site = &ik_emlrtRSI;
  i_repmat(&st, &rQS2[0], dEvQ_TSS1, r6);
  r7 = r6->data;
  if ((r6->size[2] != 19) && (r6->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(19, r6->size[2], &ai_emlrtECI, (emlrtConstCTX)sp);
  }

  if (r6->size[2] == 19) {
    for (it = 0; it <= 54; it += 2) {
      r = _mm_loadu_pd(&rQS2[it]);
      r1 = _mm_loadu_pd(&r7[it]);
      _mm_storeu_pd(&b_rQS1[it], _mm_sub_pd(r, r1));
    }

    b_rQS1[56] = rQS2[56] - r7[56];
    st.site = &ik_emlrtRSI;
    e_cross(b_rQS1, HvS3, EvS3);
  } else {
    st.site = &ik_emlrtRSI;
    binary_expand_op_34(ik_emlrtRSI, rQS2, r6, HvS3, EvS3);
  }

  st.site = &ik_emlrtRSI;
  trapz(Bld->BldSec, EvS3, MB2_B2F1);
  r = _mm_loadu_pd(&MB2_B2F1[0]);
  _mm_storeu_pd(&MB2_B2F1[0], _mm_mul_pd(r, r45));
  MB2_B2F1[2] = -MB2_B2F1[2];
  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Bld->nb;
  st.site = &jk_emlrtRSI;
  i_repmat(&st, &rQS2[0], dEvQ_TSS1, r6);
  r7 = r6->data;
  if ((r6->size[2] != 19) && (r6->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(19, r6->size[2], &bi_emlrtECI, (emlrtConstCTX)sp);
  }

  if (r6->size[2] == 19) {
    for (it = 0; it <= 54; it += 2) {
      r = _mm_loadu_pd(&rQS2[it]);
      r1 = _mm_loadu_pd(&r7[it]);
      _mm_storeu_pd(&b_rQS1[it], _mm_sub_pd(r, r1));
    }

    b_rQS1[56] = rQS2[56] - r7[56];
    st.site = &jk_emlrtRSI;
    e_cross(b_rQS1, FB2_B2E1_tmp, EvS3);
  } else {
    st.site = &jk_emlrtRSI;
    binary_expand_op_34(jk_emlrtRSI, rQS2, r6, FB2_B2E1_tmp, EvS3);
  }

  st.site = &jk_emlrtRSI;
  trapz(Bld->BldSec, EvS3, MB2_B2E1);
  r = _mm_loadu_pd(&MB2_B2E1[0]);
  _mm_storeu_pd(&MB2_B2E1[0], _mm_mul_pd(r, r45));
  MB2_B2E1[2] = -MB2_B2E1[2];
  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Bld->nb;
  st.site = &kk_emlrtRSI;
  i_repmat(&st, &rQS2[0], dEvQ_TSS1, r6);
  r7 = r6->data;
  if ((r6->size[2] != 19) && (r6->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(19, r6->size[2], &ci_emlrtECI, (emlrtConstCTX)sp);
  }

  if (r6->size[2] == 19) {
    for (it = 0; it <= 54; it += 2) {
      r = _mm_loadu_pd(&rQS2[it]);
      r1 = _mm_loadu_pd(&r7[it]);
      _mm_storeu_pd(&b_rQS1[it], _mm_sub_pd(r, r1));
    }

    b_rQS1[56] = rQS2[56] - r7[56];
    st.site = &kk_emlrtRSI;
    e_cross(b_rQS1, FB2_B2F2_tmp, EvS3);
  } else {
    st.site = &kk_emlrtRSI;
    binary_expand_op_34(kk_emlrtRSI, rQS2, r6, FB2_B2F2_tmp, EvS3);
  }

  st.site = &kk_emlrtRSI;
  trapz(Bld->BldSec, EvS3, MB2_B2F2);
  r = _mm_loadu_pd(&MB2_B2F2[0]);
  _mm_storeu_pd(&MB2_B2F2[0], _mm_mul_pd(r, r45));
  MB2_B2F2[2] = -MB2_B2F2[2];
  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Bld->nb;
  st.site = &lk_emlrtRSI;
  i_repmat(&st, &rQS2[0], dEvQ_TSS1, r6);
  r7 = r6->data;
  if ((r6->size[2] != 19) && (r6->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(19, r6->size[2], &di_emlrtECI, (emlrtConstCTX)sp);
  }

  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Bld->nb;
  st.site = &lk_emlrtRSI;
  f_repmat(&st, dEvQ_TSS1, VzB1);
  c_n = 3 * VzB1->size[2];
  n = VzB1->size[0] * VzB1->size[1] * VzB1->size[2];
  VzB1->size[0] = 1;
  VzB1->size[1] = 3;
  emxEnsureCapacity_real_T(sp, VzB1, n, &hh_emlrtRTEI);
  VzB1_data = VzB1->data;
  n = (c_n / 2) << 1;
  b_n = n - 2;
  for (b_it = 0; b_it <= b_n; b_it += 2) {
    r = _mm_loadu_pd(&VzB1_data[b_it]);
    _mm_storeu_pd(&VzB1_data[b_it], _mm_mul_pd(_mm_set1_pd(9.80665), r));
  }

  for (b_it = n; b_it < c_n; b_it++) {
    VzB1_data[b_it] *= 9.80665;
  }

  if ((VzB1->size[2] != 19) && (VzB1->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(VzB1->size[2], 19, &ei_emlrtECI, (emlrtConstCTX)
      sp);
  }

  if ((F_AeroB2->size[2] != 19) && (F_AeroB2->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(F_AeroB2->size[2], 19, &fi_emlrtECI,
      (emlrtConstCTX)sp);
  }

  if (VzB1->size[2] == 19) {
    for (it = 0; it <= 54; it += 2) {
      r = _mm_loadu_pd(&VzB1_data[it]);
      r1 = _mm_loadu_pd(&dEvS2[it]);
      _mm_storeu_pd(&EvS3[it], _mm_add_pd(r, r1));
    }

    EvS3[56] = VzB1_data[56] + dEvS2[56];
  } else {
    d_plus(EvS3, VzB1, dEvS2);
  }

  for (it = 0; it < 19; it++) {
    r = _mm_loadu_pd(&EvS3[3 * it]);
    I_pr_app = Bld->mB1[it];
    _mm_storeu_pd(&EvS1[3 * it], _mm_mul_pd(_mm_set1_pd(I_pr_app), r));
    n = 3 * it + 2;
    EvS1[n] = I_pr_app * EvS3[n];
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }

  if ((r6->size[2] == 19) && (F_AeroB2->size[2] == 19)) {
    for (it = 0; it <= 54; it += 2) {
      r = _mm_loadu_pd(&rQS2[it]);
      r1 = _mm_loadu_pd(&r7[it]);
      _mm_storeu_pd(&b_rQS1[it], _mm_sub_pd(r, r1));
    }

    b_rQS1[56] = rQS2[56] - r7[56];
    for (it = 0; it <= 54; it += 2) {
      r = _mm_loadu_pd(&F_AeroB2_data[it]);
      r1 = _mm_loadu_pd(&EvS1[it]);
      _mm_storeu_pd(&b_HvS1[it], _mm_sub_pd(r, r1));
    }

    b_HvS1[56] = F_AeroB2_data[56] - EvS1[56];
    st.site = &lk_emlrtRSI;
    e_cross(b_rQS1, b_HvS1, EvS3);
  } else {
    st.site = &lk_emlrtRSI;
    binary_expand_op_33(lk_emlrtRSI, rQS2, r6, F_AeroB2, EvS1, EvS3);
  }

  st.site = &lk_emlrtRSI;
  trapz(Bld->BldSec, EvS3, MB2_t);
  st.site = &lk_emlrtRSI;
  b_trapz(&st, Bld->BldSec, M_AeroB1, FRotor_TFA2);
  r = _mm_loadu_pd(&MB2_t[0]);
  r1 = _mm_loadu_pd(&FRotor_TFA2[0]);
  _mm_storeu_pd(&MB2_t[0], _mm_add_pd(r, r1));
  MB2_t[2] += FRotor_TFA2[2];

  /*  ==== Blade 3 Partial Moments ==== */
  /*  MB3_Sg   = - trapz(BldSec, cross(rQS3 - rQS30, mB3.*EvS3_Sg,   2), 3); */
  /*  MB3_Sw   = - trapz(BldSec, cross(rQS3 - rQS30, mB3.*EvS3_Sw,   2), 3); */
  /*  MB3_Hv   = - trapz(BldSec, cross(rQS3 - rQS30, mB3.*EvS3_Hv,   2), 3); */
  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Bld->nb;
  st.site = &mk_emlrtRSI;
  i_repmat(&st, &rQS3[0], dEvQ_TSS1, r6);
  r7 = r6->data;
  if ((r6->size[2] != 19) && (r6->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(19, r6->size[2], &gi_emlrtECI, (emlrtConstCTX)sp);
  }

  st.site = &mk_emlrtRSI;
  c_coprod(&st, Bld->mB1, EvS3_R, EvS3);
  emxFree_real_T(sp, &EvS3_R);
  if (r6->size[2] == 19) {
    for (it = 0; it <= 54; it += 2) {
      r = _mm_loadu_pd(&rQS3[it]);
      r1 = _mm_loadu_pd(&r7[it]);
      _mm_storeu_pd(&b_HvS1[it], _mm_sub_pd(r, r1));
    }

    b_HvS1[56] = rQS3[56] - r7[56];
    st.site = &mk_emlrtRSI;
    e_cross(b_HvS1, EvS3, EvS1);
  } else {
    st.site = &mk_emlrtRSI;
    binary_expand_op_34(mk_emlrtRSI, rQS3, r6, EvS3, EvS1);
  }

  st.site = &mk_emlrtRSI;
  trapz(Bld->BldSec, EvS1, MB3_R);
  r = _mm_loadu_pd(&MB3_R[0]);
  _mm_storeu_pd(&MB3_R[0], _mm_mul_pd(r, r45));
  MB3_R[2] = -MB3_R[2];
  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Bld->nb;
  st.site = &nk_emlrtRSI;
  i_repmat(&st, &rQS3[0], dEvQ_TSS1, r6);
  r7 = r6->data;
  if ((r6->size[2] != 19) && (r6->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(19, r6->size[2], &hi_emlrtECI, (emlrtConstCTX)sp);
  }

  st.site = &nk_emlrtRSI;
  c_coprod(&st, Bld->mB1, EvS3_P, EvS3);
  emxFree_real_T(sp, &EvS3_P);
  if (r6->size[2] == 19) {
    for (it = 0; it <= 54; it += 2) {
      r = _mm_loadu_pd(&rQS3[it]);
      r1 = _mm_loadu_pd(&r7[it]);
      _mm_storeu_pd(&b_HvS1[it], _mm_sub_pd(r, r1));
    }

    b_HvS1[56] = rQS3[56] - r7[56];
    st.site = &nk_emlrtRSI;
    e_cross(b_HvS1, EvS3, EvS1);
  } else {
    st.site = &nk_emlrtRSI;
    binary_expand_op_34(nk_emlrtRSI, rQS3, r6, EvS3, EvS1);
  }

  st.site = &nk_emlrtRSI;
  trapz(Bld->BldSec, EvS1, MB3_P);
  r = _mm_loadu_pd(&MB3_P[0]);
  _mm_storeu_pd(&MB3_P[0], _mm_mul_pd(r, r45));
  MB3_P[2] = -MB3_P[2];
  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Bld->nb;
  st.site = &ok_emlrtRSI;
  i_repmat(&st, &rQS3[0], dEvQ_TSS1, r6);
  r7 = r6->data;
  if ((r6->size[2] != 19) && (r6->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(19, r6->size[2], &ii_emlrtECI, (emlrtConstCTX)sp);
  }

  st.site = &ok_emlrtRSI;
  c_coprod(&st, Bld->mB1, EvS3_Y, EvS3);
  emxFree_real_T(sp, &EvS3_Y);
  if (r6->size[2] == 19) {
    for (it = 0; it <= 54; it += 2) {
      r = _mm_loadu_pd(&rQS3[it]);
      r1 = _mm_loadu_pd(&r7[it]);
      _mm_storeu_pd(&b_HvS1[it], _mm_sub_pd(r, r1));
    }

    b_HvS1[56] = rQS3[56] - r7[56];
    st.site = &ok_emlrtRSI;
    e_cross(b_HvS1, EvS3, EvS1);
  } else {
    st.site = &ok_emlrtRSI;
    binary_expand_op_34(ok_emlrtRSI, rQS3, r6, EvS3, EvS1);
  }

  st.site = &ok_emlrtRSI;
  trapz(Bld->BldSec, EvS1, MB3_Y);
  r = _mm_loadu_pd(&MB3_Y[0]);
  _mm_storeu_pd(&MB3_Y[0], _mm_mul_pd(r, r45));
  MB3_Y[2] = -MB3_Y[2];
  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Bld->nb;
  st.site = &pk_emlrtRSI;
  i_repmat(&st, &rQS3[0], dEvQ_TSS1, r6);
  r7 = r6->data;
  if ((r6->size[2] != 19) && (r6->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(19, r6->size[2], &ji_emlrtECI, (emlrtConstCTX)sp);
  }

  st.site = &pk_emlrtRSI;
  c_coprod(&st, Bld->mB1, EvS3_TFA1, EvS3);
  emxFree_real_T(sp, &EvS3_TFA1);
  if (r6->size[2] == 19) {
    for (it = 0; it <= 54; it += 2) {
      r = _mm_loadu_pd(&rQS3[it]);
      r1 = _mm_loadu_pd(&r7[it]);
      _mm_storeu_pd(&b_HvS1[it], _mm_sub_pd(r, r1));
    }

    b_HvS1[56] = rQS3[56] - r7[56];
    st.site = &pk_emlrtRSI;
    e_cross(b_HvS1, EvS3, EvS1);
  } else {
    st.site = &pk_emlrtRSI;
    binary_expand_op_34(pk_emlrtRSI, rQS3, r6, EvS3, EvS1);
  }

  st.site = &pk_emlrtRSI;
  trapz(Bld->BldSec, EvS1, MB3_TFA1);
  r = _mm_loadu_pd(&MB3_TFA1[0]);
  _mm_storeu_pd(&MB3_TFA1[0], _mm_mul_pd(r, r45));
  MB3_TFA1[2] = -MB3_TFA1[2];
  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Bld->nb;
  st.site = &qk_emlrtRSI;
  i_repmat(&st, &rQS3[0], dEvQ_TSS1, r6);
  r7 = r6->data;
  if ((r6->size[2] != 19) && (r6->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(19, r6->size[2], &ki_emlrtECI, (emlrtConstCTX)sp);
  }

  st.site = &qk_emlrtRSI;
  c_coprod(&st, Bld->mB1, EvS3_TSS1, EvS3);
  emxFree_real_T(sp, &EvS3_TSS1);
  if (r6->size[2] == 19) {
    for (it = 0; it <= 54; it += 2) {
      r = _mm_loadu_pd(&rQS3[it]);
      r1 = _mm_loadu_pd(&r7[it]);
      _mm_storeu_pd(&b_HvS1[it], _mm_sub_pd(r, r1));
    }

    b_HvS1[56] = rQS3[56] - r7[56];
    st.site = &qk_emlrtRSI;
    e_cross(b_HvS1, EvS3, EvS1);
  } else {
    st.site = &qk_emlrtRSI;
    binary_expand_op_34(qk_emlrtRSI, rQS3, r6, EvS3, EvS1);
  }

  st.site = &qk_emlrtRSI;
  trapz(Bld->BldSec, EvS1, MB3_TSS1);
  r = _mm_loadu_pd(&MB3_TSS1[0]);
  _mm_storeu_pd(&MB3_TSS1[0], _mm_mul_pd(r, r45));
  MB3_TSS1[2] = -MB3_TSS1[2];
  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Bld->nb;
  st.site = &rk_emlrtRSI;
  i_repmat(&st, &rQS3[0], dEvQ_TSS1, r6);
  r7 = r6->data;
  if ((r6->size[2] != 19) && (r6->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(19, r6->size[2], &li_emlrtECI, (emlrtConstCTX)sp);
  }

  st.site = &rk_emlrtRSI;
  c_coprod(&st, Bld->mB1, EvS3_TFA2, EvS3);
  emxFree_real_T(sp, &EvS3_TFA2);
  if (r6->size[2] == 19) {
    for (it = 0; it <= 54; it += 2) {
      r = _mm_loadu_pd(&rQS3[it]);
      r1 = _mm_loadu_pd(&r7[it]);
      _mm_storeu_pd(&b_HvS1[it], _mm_sub_pd(r, r1));
    }

    b_HvS1[56] = rQS3[56] - r7[56];
    st.site = &rk_emlrtRSI;
    e_cross(b_HvS1, EvS3, EvS1);
  } else {
    st.site = &rk_emlrtRSI;
    binary_expand_op_34(rk_emlrtRSI, rQS3, r6, EvS3, EvS1);
  }

  st.site = &rk_emlrtRSI;
  trapz(Bld->BldSec, EvS1, MB3_TFA2);
  r = _mm_loadu_pd(&MB3_TFA2[0]);
  _mm_storeu_pd(&MB3_TFA2[0], _mm_mul_pd(r, r45));
  MB3_TFA2[2] = -MB3_TFA2[2];
  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Bld->nb;
  st.site = &sk_emlrtRSI;
  i_repmat(&st, &rQS3[0], dEvQ_TSS1, r6);
  r7 = r6->data;
  if ((r6->size[2] != 19) && (r6->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(19, r6->size[2], &mi_emlrtECI, (emlrtConstCTX)sp);
  }

  st.site = &sk_emlrtRSI;
  c_coprod(&st, Bld->mB1, EvS3_TSS2, EvS3);
  emxFree_real_T(sp, &EvS3_TSS2);
  if (r6->size[2] == 19) {
    for (it = 0; it <= 54; it += 2) {
      r = _mm_loadu_pd(&rQS3[it]);
      r1 = _mm_loadu_pd(&r7[it]);
      _mm_storeu_pd(&b_HvS1[it], _mm_sub_pd(r, r1));
    }

    b_HvS1[56] = rQS3[56] - r7[56];
    st.site = &sk_emlrtRSI;
    e_cross(b_HvS1, EvS3, EvS1);
  } else {
    st.site = &sk_emlrtRSI;
    binary_expand_op_34(sk_emlrtRSI, rQS3, r6, EvS3, EvS1);
  }

  st.site = &sk_emlrtRSI;
  trapz(Bld->BldSec, EvS1, MB3_TSS2);
  r = _mm_loadu_pd(&MB3_TSS2[0]);
  _mm_storeu_pd(&MB3_TSS2[0], _mm_mul_pd(r, r45));
  MB3_TSS2[2] = -MB3_TSS2[2];
  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Bld->nb;
  st.site = &tk_emlrtRSI;
  i_repmat(&st, &rQS3[0], dEvQ_TSS1, r6);
  r7 = r6->data;
  if ((r6->size[2] != 19) && (r6->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(19, r6->size[2], &ni_emlrtECI, (emlrtConstCTX)sp);
  }

  st.site = &tk_emlrtRSI;
  c_coprod(&st, Bld->mB1, EvS3_yaw, EvS3);
  emxFree_real_T(sp, &EvS3_yaw);
  if (r6->size[2] == 19) {
    for (it = 0; it <= 54; it += 2) {
      r = _mm_loadu_pd(&rQS3[it]);
      r1 = _mm_loadu_pd(&r7[it]);
      _mm_storeu_pd(&b_HvS1[it], _mm_sub_pd(r, r1));
    }

    b_HvS1[56] = rQS3[56] - r7[56];
    st.site = &tk_emlrtRSI;
    e_cross(b_HvS1, EvS3, EvS1);
  } else {
    st.site = &tk_emlrtRSI;
    binary_expand_op_34(tk_emlrtRSI, rQS3, r6, EvS3, EvS1);
  }

  st.site = &tk_emlrtRSI;
  trapz(Bld->BldSec, EvS1, MB3_yaw);
  r = _mm_loadu_pd(&MB3_yaw[0]);
  _mm_storeu_pd(&MB3_yaw[0], _mm_mul_pd(r, r45));
  MB3_yaw[2] = -MB3_yaw[2];
  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Bld->nb;
  st.site = &uk_emlrtRSI;
  i_repmat(&st, &rQS3[0], dEvQ_TSS1, r6);
  r7 = r6->data;
  if ((r6->size[2] != 19) && (r6->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(19, r6->size[2], &oi_emlrtECI, (emlrtConstCTX)sp);
  }

  st.site = &uk_emlrtRSI;
  c_coprod(&st, Bld->mB1, EvS3_GeAz, EvS3);
  emxFree_real_T(sp, &EvS3_GeAz);
  if (r6->size[2] == 19) {
    for (it = 0; it <= 54; it += 2) {
      r = _mm_loadu_pd(&rQS3[it]);
      r1 = _mm_loadu_pd(&r7[it]);
      _mm_storeu_pd(&b_HvS1[it], _mm_sub_pd(r, r1));
    }

    b_HvS1[56] = rQS3[56] - r7[56];
    st.site = &uk_emlrtRSI;
    e_cross(b_HvS1, EvS3, EvS1);
  } else {
    st.site = &uk_emlrtRSI;
    binary_expand_op_34(uk_emlrtRSI, rQS3, r6, EvS3, EvS1);
  }

  st.site = &uk_emlrtRSI;
  trapz(Bld->BldSec, EvS1, EvQ_yaw);
  r = _mm_loadu_pd(&EvQ_yaw[0]);
  _mm_storeu_pd(&EvQ_yaw[0], _mm_mul_pd(r, r45));
  EvQ_yaw[2] = -EvQ_yaw[2];
  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Bld->nb;
  st.site = &vk_emlrtRSI;
  i_repmat(&st, &rQS3[0], dEvQ_TSS1, r6);
  r7 = r6->data;
  if ((r6->size[2] != 19) && (r6->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(19, r6->size[2], &pi_emlrtECI, (emlrtConstCTX)sp);
  }

  st.site = &vk_emlrtRSI;
  c_coprod(&st, Bld->mB1, EvS3_DrTr, EvS3);
  emxFree_real_T(sp, &EvS3_DrTr);
  if (r6->size[2] == 19) {
    for (it = 0; it <= 54; it += 2) {
      r = _mm_loadu_pd(&rQS3[it]);
      r1 = _mm_loadu_pd(&r7[it]);
      _mm_storeu_pd(&b_HvS1[it], _mm_sub_pd(r, r1));
    }

    b_HvS1[56] = rQS3[56] - r7[56];
    st.site = &vk_emlrtRSI;
    e_cross(b_HvS1, EvS3, EvS1);
  } else {
    st.site = &vk_emlrtRSI;
    binary_expand_op_34(vk_emlrtRSI, rQS3, r6, EvS3, EvS1);
  }

  st.site = &vk_emlrtRSI;
  trapz(Bld->BldSec, EvS1, MB3_DrTr);
  r = _mm_loadu_pd(&MB3_DrTr[0]);
  _mm_storeu_pd(&MB3_DrTr[0], _mm_mul_pd(r, r45));
  MB3_DrTr[2] = -MB3_DrTr[2];
  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Bld->nb;
  st.site = &wk_emlrtRSI;
  i_repmat(&st, &rQS3[0], dEvQ_TSS1, r6);
  r7 = r6->data;
  if ((r6->size[2] != 19) && (r6->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(19, r6->size[2], &qi_emlrtECI, (emlrtConstCTX)sp);
  }

  if (r6->size[2] == 19) {
    for (it = 0; it <= 54; it += 2) {
      r = _mm_loadu_pd(&rQS3[it]);
      r1 = _mm_loadu_pd(&r7[it]);
      _mm_storeu_pd(&b_HvS1[it], _mm_sub_pd(r, r1));
    }

    b_HvS1[56] = rQS3[56] - r7[56];
    st.site = &wk_emlrtRSI;
    e_cross(b_HvS1, FB3_B3F1_tmp, EvS3);
  } else {
    st.site = &wk_emlrtRSI;
    binary_expand_op_34(wk_emlrtRSI, rQS3, r6, FB3_B3F1_tmp, EvS3);
  }

  st.site = &wk_emlrtRSI;
  trapz(Bld->BldSec, EvS3, MB3_B3F1);
  r = _mm_loadu_pd(&MB3_B3F1[0]);
  _mm_storeu_pd(&MB3_B3F1[0], _mm_mul_pd(r, r45));
  MB3_B3F1[2] = -MB3_B3F1[2];
  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Bld->nb;
  st.site = &xk_emlrtRSI;
  i_repmat(&st, &rQS3[0], dEvQ_TSS1, r6);
  r7 = r6->data;
  if ((r6->size[2] != 19) && (r6->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(19, r6->size[2], &ri_emlrtECI, (emlrtConstCTX)sp);
  }

  if (r6->size[2] == 19) {
    for (it = 0; it <= 54; it += 2) {
      r = _mm_loadu_pd(&rQS3[it]);
      r1 = _mm_loadu_pd(&r7[it]);
      _mm_storeu_pd(&b_HvS1[it], _mm_sub_pd(r, r1));
    }

    b_HvS1[56] = rQS3[56] - r7[56];
    st.site = &xk_emlrtRSI;
    e_cross(b_HvS1, FB3_B3E1_tmp, EvS3);
  } else {
    st.site = &xk_emlrtRSI;
    binary_expand_op_34(xk_emlrtRSI, rQS3, r6, FB3_B3E1_tmp, EvS3);
  }

  st.site = &xk_emlrtRSI;
  trapz(Bld->BldSec, EvS3, MB3_B3E1);
  r = _mm_loadu_pd(&MB3_B3E1[0]);
  _mm_storeu_pd(&MB3_B3E1[0], _mm_mul_pd(r, r45));
  MB3_B3E1[2] = -MB3_B3E1[2];
  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Bld->nb;
  st.site = &yk_emlrtRSI;
  i_repmat(&st, &rQS3[0], dEvQ_TSS1, r6);
  r7 = r6->data;
  if ((r6->size[2] != 19) && (r6->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(19, r6->size[2], &si_emlrtECI, (emlrtConstCTX)sp);
  }

  if (r6->size[2] == 19) {
    for (it = 0; it <= 54; it += 2) {
      r = _mm_loadu_pd(&rQS3[it]);
      r1 = _mm_loadu_pd(&r7[it]);
      _mm_storeu_pd(&b_HvS1[it], _mm_sub_pd(r, r1));
    }

    b_HvS1[56] = rQS3[56] - r7[56];
    st.site = &yk_emlrtRSI;
    e_cross(b_HvS1, FB3_B3F2_tmp, EvS3);
  } else {
    st.site = &yk_emlrtRSI;
    binary_expand_op_34(yk_emlrtRSI, rQS3, r6, FB3_B3F2_tmp, EvS3);
  }

  st.site = &yk_emlrtRSI;
  trapz(Bld->BldSec, EvS3, MB3_B3F2);
  r = _mm_loadu_pd(&MB3_B3F2[0]);
  _mm_storeu_pd(&MB3_B3F2[0], _mm_mul_pd(r, r45));
  MB3_B3F2[2] = -MB3_B3F2[2];
  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Bld->nb;
  st.site = &al_emlrtRSI;
  i_repmat(&st, &rQS3[0], dEvQ_TSS1, r6);
  r7 = r6->data;
  if ((r6->size[2] != 19) && (r6->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(19, r6->size[2], &ti_emlrtECI, (emlrtConstCTX)sp);
  }

  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Bld->nb;
  st.site = &al_emlrtRSI;
  f_repmat(&st, dEvQ_TSS1, VzB1);
  c_n = 3 * VzB1->size[2];
  n = VzB1->size[0] * VzB1->size[1] * VzB1->size[2];
  VzB1->size[0] = 1;
  VzB1->size[1] = 3;
  emxEnsureCapacity_real_T(sp, VzB1, n, &ih_emlrtRTEI);
  VzB1_data = VzB1->data;
  n = (c_n / 2) << 1;
  b_n = n - 2;
  for (b_it = 0; b_it <= b_n; b_it += 2) {
    r = _mm_loadu_pd(&VzB1_data[b_it]);
    _mm_storeu_pd(&VzB1_data[b_it], _mm_mul_pd(_mm_set1_pd(9.80665), r));
  }

  for (b_it = n; b_it < c_n; b_it++) {
    VzB1_data[b_it] *= 9.80665;
  }

  if ((VzB1->size[2] != 19) && (VzB1->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(VzB1->size[2], 19, &ui_emlrtECI, (emlrtConstCTX)
      sp);
  }

  if ((F_AeroB3->size[2] != 19) && (F_AeroB3->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(F_AeroB3->size[2], 19, &vi_emlrtECI,
      (emlrtConstCTX)sp);
  }

  if (VzB1->size[2] == 19) {
    for (it = 0; it <= 54; it += 2) {
      r = _mm_loadu_pd(&VzB1_data[it]);
      r1 = _mm_loadu_pd(&dEvS3[it]);
      _mm_storeu_pd(&EvS3[it], _mm_add_pd(r, r1));
    }

    EvS3[56] = VzB1_data[56] + dEvS3[56];
  } else {
    d_plus(EvS3, VzB1, dEvS3);
  }

  for (it = 0; it < 19; it++) {
    r = _mm_loadu_pd(&EvS3[3 * it]);
    I_pr_app = Bld->mB1[it];
    _mm_storeu_pd(&EvS1[3 * it], _mm_mul_pd(_mm_set1_pd(I_pr_app), r));
    n = 3 * it + 2;
    EvS1[n] = I_pr_app * EvS3[n];
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }

  if ((r6->size[2] == 19) && (F_AeroB3->size[2] == 19)) {
    for (it = 0; it <= 54; it += 2) {
      r = _mm_loadu_pd(&rQS3[it]);
      r1 = _mm_loadu_pd(&r7[it]);
      _mm_storeu_pd(&b_HvS1[it], _mm_sub_pd(r, r1));
    }

    b_HvS1[56] = rQS3[56] - r7[56];
    for (it = 0; it <= 54; it += 2) {
      r = _mm_loadu_pd(&F_AeroB3_data[it]);
      r1 = _mm_loadu_pd(&EvS1[it]);
      _mm_storeu_pd(&EvS1[it], _mm_sub_pd(r, r1));
    }

    EvS1[56] = F_AeroB3_data[56] - EvS1[56];
    st.site = &al_emlrtRSI;
    e_cross(b_HvS1, EvS1, EvS3);
  } else {
    st.site = &al_emlrtRSI;
    binary_expand_op_33(al_emlrtRSI, rQS3, r6, F_AeroB3, EvS1, EvS3);
  }

  st.site = &al_emlrtRSI;
  trapz(Bld->BldSec, EvS3, MB3_t);
  st.site = &al_emlrtRSI;
  b_trapz(&st, Bld->BldSec, M_AeroB1, FRotor_TFA2);

  /*  Partial forces and moments at Rotor */
  /*  Partial forces */
  I_pr_app = EvQ[1] * 0.0;
  I_yaw_app = 0.0 * EvQ[2];
  b_dEvQ_R[0] = (dEvQ_R[0] + (I_yaw_app - I_pr_app)) * q_Nom[37];
  rZT_3 = EvQ[0] * 0.0;
  b_dEvQ_R[1] = (dEvQ_R[1] + (rZT_3 - EvQ[2])) * q_Nom[37];
  b_dEvQ_R[2] = (dEvQ_R[2] + (EvQ[1] - rZT_3)) * q_Nom[37];
  rQS1_2 = -0.0 * EvQ[2];
  g_b[0] = (dEvQ_P[0] + (rQS1_2 - (-EvQ[1]))) * q_Nom[38];
  g_b[1] = (dEvQ_P[1] + (-EvQ[0] - rQS1_2)) * q_Nom[38];
  g_b[2] = (dEvQ_P[2] + (-0.0 * EvQ[1] - EvQ[0] * -0.0)) * q_Nom[38];
  dEvQ_P[0] = (dEvQ_Y[0] + (EvQ[2] - I_pr_app)) * q_Nom[39];
  dEvQ_P[1] = (dEvQ_Y[1] + (rZT_3 - I_yaw_app)) * q_Nom[39];
  dEvQ_P[2] = (dEvQ_Y[2] + (I_pr_app - EvQ[0])) * q_Nom[39];
  EvZ[0] = EwB_TFA1[1] * EvQ[2] - EvQ[1] * EwB_TFA1[2];
  EvZ[1] = EvQ[0] * EwB_TFA1[2] - EwB_TFA1[0] * EvQ[2];
  EvZ[2] = EwB_TFA1[0] * EvQ[1] - EvQ[0] * EwB_TFA1[1];
  b_EwB_TSS1[0] = EwB_TSS1[1] * EvQ[2] - EvQ[1] * EwB_TSS1[2];
  b_EwB_TSS1[1] = EvQ[0] * EwB_TSS1[2] - EwB_TSS1[0] * EvQ[2];
  b_EwB_TSS1[2] = EwB_TSS1[0] * EvQ[1] - EvQ[0] * EwB_TSS1[1];
  b_EwB_TFA2[0] = EwB_TFA2[1] * EvQ[2] - EvQ[1] * EwB_TFA2[2];
  b_EwB_TFA2[1] = EvQ[0] * EwB_TFA2[2] - EwB_TFA2[0] * EvQ[2];
  b_EwB_TFA2[2] = EwB_TFA2[0] * EvQ[1] - EvQ[0] * EwB_TFA2[1];
  b_EwB_TSS2[0] = EwB_TSS2[1] * EvQ[2] - EvQ[1] * EwB_TSS2[2];
  b_EwB_TSS2[1] = EvQ[0] * EwB_TSS2[2] - EwB_TSS2[0] * EvQ[2];
  b_EwB_TSS2[2] = EwB_TSS2[0] * EvQ[1] - EvQ[0] * EwB_TSS2[1];
  b_D[0] = EvQ[2] * D[4] - EvQ[1] * D[7];
  b_D[1] = EvQ[0] * D[7] - D[1] * EvQ[2];
  b_D[2] = EvQ[1] * D[1] - EvQ[0] * D[4];

  /*  Partial moments */
  /*  MRotor_Sg   = MB1_Sg   + MB2_Sg   + MB3_Sg    + cross(rQS10, FB1_Sg)   + cross(rQS20, FB2_Sg)   + cross(rQS30, FB3_Sg)   - mH*cross(rQC,EvC_Sg); */
  /*  MRotor_Sw   = MB1_Sw   + MB2_Sw   + MB3_Sw    + cross(rQS10, FB1_Sw)   + cross(rQS20, FB2_Sw)   + cross(rQS30, FB3_Sw)   - mH*cross(rQC,EvC_Sw); */
  /*  MRotor_Hv   = MB1_Hv   + MB2_Hv   + MB3_Hv    + cross(rQS10, FB1_Hv)   + cross(rQS20, FB2_Hv)   + cross(rQS30, FB3_Hv)   - mH*cross(rQC,EvC_Hv); */
  EvQ[0] = ElastoDyn->HubMass * (rQC_idx_1 * EvC_GeAz[2] - EvC_GeAz[1] *
    rQC_idx_2);
  EvQ[1] = ElastoDyn->HubMass * (EvC_GeAz[0] * rQC_idx_2 - rQC_idx_0 * EvC_GeAz
    [2]);
  EvQ[2] = ElastoDyn->HubMass * (rQC_idx_0 * EvC_GeAz[1] - EvC_GeAz[0] *
    rQC_idx_1);
  memset(&b_I_H[0], 0, 3U * sizeof(real_T));
  MB3_t[0] += FRotor_TFA2[0];
  FRotor_R_idx_0 = ((FB1_R[0] + FB2_R[0]) + FB3_R[0]) - ElastoDyn->HubMass *
    EvC_R_idx_0;
  FRotor_P[0] = ((FB1_P[0] + FB2_P[0]) + FB3_P[0]) - ElastoDyn->HubMass *
    EvC_P_idx_0;
  FRotor_Y[0] = ((FB1_Y[0] + FB2_Y[0]) + FB3_Y[0]) - ElastoDyn->HubMass *
    EvC_Y_idx_0;
  FRotor_TFA1[0] = ((FB1_TFA1[0] + FB2_TFA1[0]) + FB3_TFA1[0]) -
    ElastoDyn->HubMass * nb;
  FRotor_TSS1[0] = ((FB1_TSS1[0] + FB2_TSS1[0]) + FB3_TSS1[0]) -
    ElastoDyn->HubMass * EvC_TSS1_idx_0;
  FRotor_TFA2[0] = ((FB1_TFA2[0] + FB2_TFA2[0]) + FB3_TFA2[0]) -
    ElastoDyn->HubMass * EvC_TFA2_idx_0;
  FRotor_TSS2[0] = ((FB1_TSS2[0] + FB2_TSS2[0]) + FB3_TSS2[0]) -
    ElastoDyn->HubMass * EvC_TSS2_idx_0;
  FRotor_yaw[0] = ((FB1_yaw[0] + FB2_yaw[0]) + FB3_yaw[0]) - ElastoDyn->HubMass *
    EvC_yaw_idx_0;
  EvZ_tmp = ElastoDyn->HubMass * EvC_GeAz[0];
  FRotor_GeAz[0] = ((EvQ_Y[0] + EvQ_TFA1[0]) + EvQ_TSS1[0]) - EvZ_tmp;
  EvZ_tmp = ((EwB[0] + XvO[0]) + EwL_yaw[0]) - EvZ_tmp;
  FRotor_DrTr[0] = EvZ_tmp;
  I_pr_app = ((((((((b_dEvQ_R[0] + g_b[0]) + dEvQ_P[0]) + ((dEvQ_TFA1[0] +
    (dEwB_TFA1[1] * rQC_idx_2 - rQC_idx_1 * dEwB_TFA1[2])) + EvZ[0]) * q_Nom[40])
                  + ((b_dEvQ_TSS1[0] + (dEwB_TSS1[1] * rQC_idx_2 - rQC_idx_1 *
    dEwB_TSS1[2])) + b_EwB_TSS1[0]) * q_Nom[41]) + ((dEvQ_TFA2[0] + (dEwB_TFA2[1]
    * rQC_idx_2 - rQC_idx_1 * dEwB_TFA2[2])) + b_EwB_TFA2[0]) * q_Nom[42]) +
                ((dEvQ_TSS2[0] + (dEwB_TSS2[1] * rQC_idx_2 - rQC_idx_1 *
    dEwB_TSS2[2])) + b_EwB_TSS2[0]) * q_Nom[43]) + ((dEvQ_yaw[0] + (dEwN_yaw[1] *
    rQC_idx_2 - rQC_idx_1 * dEwN_yaw[2])) + b_D[0]) * q_Nom[44]) + dEvC_GeAz[0] *
              q_Nom[45]) + dEvC_GeAz[0] * q_Nom[46];
  b_dEvQ_R[0] = I_pr_app;
  dEvC_GeAz[0] = ((FB1_t[0] + FB2_t[0]) + FB3_t[0]) - ElastoDyn->HubMass *
    I_pr_app;
  r = _mm_loadu_pd(&I_H[0]);
  r1 = _mm_loadu_pd(&b_I_H[0]);
  _mm_storeu_pd(&b_I_H[0], _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(C[0]))));
  b_I_H[2] += C[0] * I_H[2];
  MB3_t[1] += FRotor_TFA2[1];
  FRotor_R_idx_1 = ((FB1_R[1] + FB2_R[1]) + FB3_R[1]) - ElastoDyn->HubMass *
    EvC_R_idx_1;
  FRotor_P[1] = ((FB1_P[1] + FB2_P[1]) + FB3_P[1]) - ElastoDyn->HubMass *
    EvC_P_idx_1;
  FRotor_Y[1] = ((FB1_Y[1] + FB2_Y[1]) + FB3_Y[1]) - ElastoDyn->HubMass *
    EvC_Y_idx_1;
  FRotor_TFA1[1] = ((FB1_TFA1[1] + FB2_TFA1[1]) + FB3_TFA1[1]) -
    ElastoDyn->HubMass * EvC_TFA1_idx_1;
  FRotor_TSS1[1] = ((FB1_TSS1[1] + FB2_TSS1[1]) + FB3_TSS1[1]) -
    ElastoDyn->HubMass * EvC_TSS1_idx_1;
  FRotor_TFA2[1] = ((FB1_TFA2[1] + FB2_TFA2[1]) + FB3_TFA2[1]) -
    ElastoDyn->HubMass * EvC_TFA2_idx_1;
  FRotor_TSS2[1] = ((FB1_TSS2[1] + FB2_TSS2[1]) + FB3_TSS2[1]) -
    ElastoDyn->HubMass * EvC_TSS2_idx_1;
  FRotor_yaw[1] = ((FB1_yaw[1] + FB2_yaw[1]) + FB3_yaw[1]) - ElastoDyn->HubMass *
    EvC_yaw_idx_1;
  EvZ_tmp = ElastoDyn->HubMass * EvC_GeAz[1];
  FRotor_GeAz[1] = ((EvQ_Y[1] + EvQ_TFA1[1]) + EvQ_TSS1[1]) - EvZ_tmp;
  EvZ_tmp = ((EwB[1] + XvO[1]) + EwL_yaw[1]) - EvZ_tmp;
  FRotor_DrTr[1] = EvZ_tmp;
  I_pr_app = (((((((((b_dEvQ_R[1] + g_b[1]) + dEvQ_P[1]) + ((dEvQ_TFA1[1] +
    (rQC_idx_0 * dEwB_TFA1[2] - dEwB_TFA1[0] * rQC_idx_2)) + EvZ[1]) * q_Nom[40])
                   + ((b_dEvQ_TSS1[1] + (rQC_idx_0 * dEwB_TSS1[2] - dEwB_TSS1[0]
    * rQC_idx_2)) + b_EwB_TSS1[1]) * q_Nom[41]) + ((dEvQ_TFA2[1] + (rQC_idx_0 *
    dEwB_TFA2[2] - dEwB_TFA2[0] * rQC_idx_2)) + b_EwB_TFA2[1]) * q_Nom[42]) +
                 ((dEvQ_TSS2[1] + (rQC_idx_0 * dEwB_TSS2[2] - dEwB_TSS2[0] *
    rQC_idx_2)) + b_EwB_TSS2[1]) * q_Nom[43]) + ((dEvQ_yaw[1] + (rQC_idx_0 *
    dEwN_yaw[2] - dEwN_yaw[0] * rQC_idx_2)) + b_D[1]) * q_Nom[44]) + dEvC_GeAz[1]
               * q_Nom[45]) + dEvC_GeAz[1] * q_Nom[46]) + 9.80665;
  b_dEvQ_R[1] = I_pr_app;
  dEvC_GeAz[1] = ((FB1_t[1] + FB2_t[1]) + FB3_t[1]) - ElastoDyn->HubMass *
    I_pr_app;
  r = _mm_loadu_pd(&I_H[3]);
  r1 = _mm_loadu_pd(&b_I_H[0]);
  _mm_storeu_pd(&b_I_H[0], _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(C[3]))));
  b_I_H[2] += C[3] * I_H[5];
  MB3_t[2] += FRotor_TFA2[2];
  FRotor_R_idx_2 = ((FB1_R[2] + FB2_R[2]) + FB3_R[2]) - ElastoDyn->HubMass *
    EvC_R_idx_2;
  FRotor_P[2] = ((FB1_P[2] + FB2_P[2]) + FB3_P[2]) - ElastoDyn->HubMass *
    EvC_P_idx_2;
  FRotor_Y[2] = ((FB1_Y[2] + FB2_Y[2]) + FB3_Y[2]) - ElastoDyn->HubMass *
    EvC_Y_idx_2;
  FRotor_TFA1[2] = ((FB1_TFA1[2] + FB2_TFA1[2]) + FB3_TFA1[2]) -
    ElastoDyn->HubMass * EvC_TFA1_idx_2;
  FRotor_TSS1[2] = ((FB1_TSS1[2] + FB2_TSS1[2]) + FB3_TSS1[2]) -
    ElastoDyn->HubMass * EvC_TSS1_idx_2;
  FRotor_TFA2[2] = ((FB1_TFA2[2] + FB2_TFA2[2]) + FB3_TFA2[2]) -
    ElastoDyn->HubMass * EvC_TFA2_idx_2;
  FRotor_TSS2[2] = ((FB1_TSS2[2] + FB2_TSS2[2]) + FB3_TSS2[2]) -
    ElastoDyn->HubMass * EvC_TSS2_idx_2;
  FRotor_yaw[2] = ((FB1_yaw[2] + FB2_yaw[2]) + FB3_yaw[2]) - ElastoDyn->HubMass *
    EvC_yaw_idx_2;
  EvZ_tmp = ElastoDyn->HubMass * EvC_GeAz[2];
  FRotor_GeAz[2] = ((EvQ_Y[2] + EvQ_TFA1[2]) + EvQ_TSS1[2]) - EvZ_tmp;
  EvZ_tmp = ((EwB[2] + XvO[2]) + EwL_yaw[2]) - EvZ_tmp;
  FRotor_DrTr[2] = EvZ_tmp;
  I_pr_app = ((((((((b_dEvQ_R[2] + g_b[2]) + dEvQ_P[2]) + ((dEvQ_TFA1[2] +
    (dEwB_TFA1[0] * rQC_idx_1 - rQC_idx_0 * dEwB_TFA1[1])) + EvZ[2]) * q_Nom[40])
                  + ((b_dEvQ_TSS1[2] + (dEwB_TSS1[0] * rQC_idx_1 - rQC_idx_0 *
    dEwB_TSS1[1])) + b_EwB_TSS1[2]) * q_Nom[41]) + ((dEvQ_TFA2[2] + (dEwB_TFA2[0]
    * rQC_idx_1 - rQC_idx_0 * dEwB_TFA2[1])) + b_EwB_TFA2[2]) * q_Nom[42]) +
                ((dEvQ_TSS2[2] + (dEwB_TSS2[0] * rQC_idx_1 - rQC_idx_0 *
    dEwB_TSS2[1])) + b_EwB_TSS2[2]) * q_Nom[43]) + ((dEvQ_yaw[2] + (dEwN_yaw[0] *
    rQC_idx_1 - rQC_idx_0 * dEwN_yaw[1])) + b_D[2]) * q_Nom[44]) + dEvC_GeAz[2] *
              q_Nom[45]) + dEvC_GeAz[2] * q_Nom[46];
  dEvC_GeAz[2] = ((FB1_t[2] + FB2_t[2]) + FB3_t[2]) - ElastoDyn->HubMass *
    I_pr_app;
  r = _mm_loadu_pd(&I_H[6]);
  r1 = _mm_loadu_pd(&b_I_H[0]);
  _mm_storeu_pd(&b_I_H[0], _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(C[6]))));
  b_I_H[2] += C[6] * I_H[8];
  MRotor_GeAz[0] = rQS1[1] * EvQ_Y[2] - EvQ_Y[1] * rQS1[2];
  MRotor_GeAz[1] = EvQ_Y[0] * rQS1[2] - rQS1[0] * EvQ_Y[2];
  MRotor_GeAz[2] = rQS1[0] * EvQ_Y[1] - EvQ_Y[0] * rQS1[1];
  dEvQ_R[0] = rQS2[1] * EvQ_TFA1[2] - EvQ_TFA1[1] * rQS2[2];
  dEvQ_R[1] = EvQ_TFA1[0] * rQS2[2] - rQS2[0] * EvQ_TFA1[2];
  dEvQ_R[2] = rQS2[0] * EvQ_TFA1[1] - EvQ_TFA1[0] * rQS2[1];
  dEvQ_P[0] = rQS3[1] * EvQ_TSS1[2] - EvQ_TSS1[1] * rQS3[2];
  dEvQ_P[1] = EvQ_TSS1[0] * rQS3[2] - rQS3[0] * EvQ_TSS1[2];
  dEvQ_P[2] = rQS3[0] * EvQ_TSS1[1] - EvQ_TSS1[0] * rQS3[1];
  r = _mm_loadu_pd(&b_I_H[0]);
  _mm_storeu_pd(&EvZ[0], r);
  r1 = _mm_loadu_pd(&EvQ_TFA2[0]);
  r2 = _mm_loadu_pd(&EvQ_TSS2[0]);
  r3 = _mm_loadu_pd(&EvQ_yaw[0]);
  r4 = _mm_loadu_pd(&MRotor_GeAz[0]);
  r5 = _mm_loadu_pd(&dEvQ_R[0]);
  r17 = _mm_loadu_pd(&dEvQ_P[0]);
  r18 = _mm_loadu_pd(&EvQ[0]);
  _mm_storeu_pd(&MRotor_GeAz[0], _mm_sub_pd(_mm_sub_pd(_mm_add_pd(_mm_add_pd
    (_mm_add_pd(_mm_add_pd(_mm_add_pd(r1, r2), r3), r4), r5), r17), r18), r));
  EvZ[2] = b_I_H[2];
  MRotor_GeAz[2] = ((((((EvQ_TFA2[2] + EvQ_TSS2[2]) + EvQ_yaw[2]) + MRotor_GeAz
                       [2]) + dEvQ_R[2]) + dEvQ_P[2]) - EvQ[2]) - b_I_H[2];
  MRotor_DrTr[0] = rQS1[1] * EwB[2] - EwB[1] * rQS1[2];
  MRotor_DrTr[1] = EwB[0] * rQS1[2] - rQS1[0] * EwB[2];
  MRotor_DrTr[2] = rQS1[0] * EwB[1] - EwB[0] * rQS1[1];
  MRotor_B1F1[0] = MB1_B1F1[0] + (rQS1[1] * FB1_B1F1[2] - FB1_B1F1[1] * rQS1[2]);
  MRotor_B1F1[1] = MB1_B1F1[1] + (FB1_B1F1[0] * rQS1[2] - rQS1[0] * FB1_B1F1[2]);
  MRotor_B1F1[2] = MB1_B1F1[2] + (rQS1[0] * FB1_B1F1[1] - FB1_B1F1[0] * rQS1[1]);
  MRotor_B1E1[0] = MB1_B1E1[0] + (rQS1[1] * FB1_B1E1[2] - FB1_B1E1[1] * rQS1[2]);
  MRotor_B1E1[1] = MB1_B1E1[1] + (FB1_B1E1[0] * rQS1[2] - rQS1[0] * FB1_B1E1[2]);
  MRotor_B1E1[2] = MB1_B1E1[2] + (rQS1[0] * FB1_B1E1[1] - FB1_B1E1[0] * rQS1[1]);
  MRotor_B1F2[0] = MB1_B1F2[0] + (rQS1[1] * FB1_B1F2[2] - FB1_B1F2[1] * rQS1[2]);
  MRotor_B1F2[1] = MB1_B1F2[1] + (FB1_B1F2[0] * rQS1[2] - rQS1[0] * FB1_B1F2[2]);
  MRotor_B1F2[2] = MB1_B1F2[2] + (rQS1[0] * FB1_B1F2[1] - FB1_B1F2[0] * rQS1[1]);
  MRotor_B2F1[0] = MB2_B2F1[0] + (rQS2[1] * FB2_B2F1[2] - FB2_B2F1[1] * rQS2[2]);
  MRotor_B2F1[1] = MB2_B2F1[1] + (FB2_B2F1[0] * rQS2[2] - rQS2[0] * FB2_B2F1[2]);
  MRotor_B2F1[2] = MB2_B2F1[2] + (rQS2[0] * FB2_B2F1[1] - FB2_B2F1[0] * rQS2[1]);
  MRotor_B2E1[0] = MB2_B2E1[0] + (rQS2[1] * FB2_B2E1[2] - FB2_B2E1[1] * rQS2[2]);
  MRotor_B2E1[1] = MB2_B2E1[1] + (FB2_B2E1[0] * rQS2[2] - rQS2[0] * FB2_B2E1[2]);
  MRotor_B2E1[2] = MB2_B2E1[2] + (rQS2[0] * FB2_B2E1[1] - FB2_B2E1[0] * rQS2[1]);
  MRotor_B2F2[0] = MB2_B2F2[0] + (rQS2[1] * FB2_B2F2[2] - FB2_B2F2[1] * rQS2[2]);
  MRotor_B2F2[1] = MB2_B2F2[1] + (FB2_B2F2[0] * rQS2[2] - rQS2[0] * FB2_B2F2[2]);
  MRotor_B2F2[2] = MB2_B2F2[2] + (rQS2[0] * FB2_B2F2[1] - FB2_B2F2[0] * rQS2[1]);
  MRotor_B3F1[0] = MB3_B3F1[0] + (rQS3[1] * FB3_B3F1[2] - FB3_B3F1[1] * rQS3[2]);
  MRotor_B3F1[1] = MB3_B3F1[1] + (FB3_B3F1[0] * rQS3[2] - rQS3[0] * FB3_B3F1[2]);
  MRotor_B3F1[2] = MB3_B3F1[2] + (rQS3[0] * FB3_B3F1[1] - FB3_B3F1[0] * rQS3[1]);
  MRotor_B3E1[0] = MB3_B3E1[0] + (rQS3[1] * FB3_B3E1[2] - FB3_B3E1[1] * rQS3[2]);
  MRotor_B3E1[1] = MB3_B3E1[1] + (FB3_B3E1[0] * rQS3[2] - rQS3[0] * FB3_B3E1[2]);
  MRotor_B3E1[2] = MB3_B3E1[2] + (rQS3[0] * FB3_B3E1[1] - FB3_B3E1[0] * rQS3[1]);
  MRotor_B3F2[0] = MB3_B3F2[0] + (rQS3[1] * FB3_B3F2[2] - FB3_B3F2[1] * rQS3[2]);
  MRotor_B3F2[1] = MB3_B3F2[1] + (FB3_B3F2[0] * rQS3[2] - rQS3[0] * FB3_B3F2[2]);
  MRotor_B3F2[2] = MB3_B3F2[2] + (rQS3[0] * FB3_B3F2[1] - FB3_B3F2[0] * rQS3[1]);
  memset(&b_I_H[0], 0, 3U * sizeof(real_T));
  MRotor_DrTr[0] = ((((((MB1_DrTr[0] + MB2_DrTr[0]) + MB3_DrTr[0]) +
                       MRotor_DrTr[0]) + (rQS2[1] * XvO[2] - XvO[1] * rQS2[2]))
                     + (rQS3[1] * EwL_yaw[2] - EwL_yaw[1] * rQS3[2])) - EvQ[0])
    - EvZ[0];
  r = _mm_loadu_pd(&I_H[0]);
  r1 = _mm_loadu_pd(&b_I_H[0]);
  _mm_storeu_pd(&b_I_H[0], _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(EwL[0]))));
  b_I_H[2] += EwL[0] * I_H[2];
  MRotor_DrTr[1] = ((((((MB1_DrTr[1] + MB2_DrTr[1]) + MB3_DrTr[1]) +
                       MRotor_DrTr[1]) + (XvO[0] * rQS2[2] - rQS2[0] * XvO[2]))
                     + (EwL_yaw[0] * rQS3[2] - rQS3[0] * EwL_yaw[2])) - EvQ[1])
    - EvZ[1];
  r = _mm_loadu_pd(&I_H[3]);
  r1 = _mm_loadu_pd(&b_I_H[0]);
  _mm_storeu_pd(&b_I_H[0], _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(EwL[1]))));
  b_I_H[2] += EwL[1] * I_H[5];
  MRotor_DrTr[2] = ((((((MB1_DrTr[2] + MB2_DrTr[2]) + MB3_DrTr[2]) +
                       MRotor_DrTr[2]) + (rQS2[0] * XvO[1] - XvO[0] * rQS2[1]))
                     + (rQS3[0] * EwL_yaw[1] - EwL_yaw[0] * rQS3[1])) - EvQ[2])
    - EvZ[2];
  r = _mm_loadu_pd(&I_H[6]);
  r1 = _mm_loadu_pd(&b_I_H[0]);
  _mm_storeu_pd(&b_I_H[0], _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(EwL[2]))));
  b_I_H[2] += EwL[2] * I_H[8];
  MRotor_t[0] = rQS1[1] * FB1_t[2] - FB1_t[1] * rQS1[2];
  MRotor_t[1] = FB1_t[0] * rQS1[2] - rQS1[0] * FB1_t[2];
  MRotor_t[2] = rQS1[0] * FB1_t[1] - FB1_t[0] * rQS1[1];
  dEvQ_R[0] = rQS2[1] * FB2_t[2] - FB2_t[1] * rQS2[2];
  dEvQ_R[1] = FB2_t[0] * rQS2[2] - rQS2[0] * FB2_t[2];
  dEvQ_R[2] = rQS2[0] * FB2_t[1] - FB2_t[0] * rQS2[1];
  dEvQ_P[0] = rQS3[1] * FB3_t[2] - FB3_t[1] * rQS3[2];
  dEvQ_P[1] = FB3_t[0] * rQS3[2] - rQS3[0] * FB3_t[2];
  dEvQ_P[2] = rQS3[0] * FB3_t[1] - FB3_t[0] * rQS3[1];
  dEvQ_Y[0] = ElastoDyn->HubMass * (rQC_idx_1 * I_pr_app - b_dEvQ_R[1] *
    rQC_idx_2);
  dEvQ_Y[1] = ElastoDyn->HubMass * (b_dEvQ_R[0] * rQC_idx_2 - rQC_idx_0 *
    I_pr_app);
  dEvQ_Y[2] = ElastoDyn->HubMass * (rQC_idx_0 * b_dEvQ_R[1] - b_dEvQ_R[0] *
    rQC_idx_1);
  r = _mm_loadu_pd(&b_I_H[0]);
  _mm_storeu_pd(&g_b[0], r);
  r = _mm_loadu_pd(&dEwL_GeAz[0]);
  r1 = _mm_loadu_pd(&dEwN[0]);
  _mm_storeu_pd(&b_EwX[0], _mm_add_pd(_mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd
    (q_Nom[45]))), _mm_mul_pd(r, _mm_set1_pd(q_Nom[46]))));
  g_b[2] = b_I_H[2];
  b_EwX[2] = (dEwN[2] + dEwL_GeAz[2] * q_Nom[45]) + dEwL_GeAz[2] * q_Nom[46];
  memset(&b_I_H[0], 0, 3U * sizeof(real_T));
  r = _mm_loadu_pd(&I_H[0]);
  r1 = _mm_loadu_pd(&b_I_H[0]);
  _mm_storeu_pd(&b_I_H[0], _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(b_EwX[0]))));
  b_I_H[2] += b_EwX[0] * I_H[2];
  r = _mm_loadu_pd(&I_H[3]);
  r1 = _mm_loadu_pd(&b_I_H[0]);
  _mm_storeu_pd(&b_I_H[0], _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(b_EwX[1]))));
  b_I_H[2] += b_EwX[1] * I_H[5];
  r = _mm_loadu_pd(&I_H[6]);
  r1 = _mm_loadu_pd(&b_I_H[0]);
  _mm_storeu_pd(&b_I_H[0], _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(b_EwX[2]))));
  b_I_H[2] += b_EwX[2] * I_H[8];
  b_I_G[0] = EwL[1] * g_b[2] - g_b[1] * EwL[2];
  b_I_G[1] = g_b[0] * EwL[2] - EwL[0] * g_b[2];
  b_I_G[2] = EwL[0] * g_b[1] - g_b[0] * EwL[1];

  /*  Partial forces and moments at tower top */
  /*  Patial forces */
  r = _mm_loadu_pd(&MB1_t[0]);
  r1 = _mm_loadu_pd(&MB2_t[0]);
  r2 = _mm_loadu_pd(&MB3_t[0]);
  r3 = _mm_loadu_pd(&MRotor_t[0]);
  r4 = _mm_loadu_pd(&dEvQ_R[0]);
  r5 = _mm_loadu_pd(&dEvQ_P[0]);
  r17 = _mm_loadu_pd(&dEvQ_Y[0]);
  r18 = _mm_loadu_pd(&b_I_H[0]);
  r19 = _mm_loadu_pd(&b_I_G[0]);
  _mm_storeu_pd(&MRotor_t[0], _mm_sub_pd(_mm_sub_pd(_mm_sub_pd(_mm_add_pd
    (_mm_add_pd(_mm_add_pd(_mm_add_pd(_mm_add_pd(r, r1), r2), r3), r4), r5), r17),
    r18), r19));
  r = _mm_loadu_pd(&EvU_TFA1[0]);
  r1 = _mm_loadu_pd(&FRotor_TFA1[0]);
  r46 = _mm_set1_pd(ElastoDyn->NacMass);
  _mm_storeu_pd(&EwL[0], _mm_sub_pd(r1, _mm_mul_pd(r46, r)));
  r = _mm_loadu_pd(&EvU_TSS1[0]);
  r1 = _mm_loadu_pd(&FRotor_TSS1[0]);
  _mm_storeu_pd(&FO_TSS1[0], _mm_sub_pd(r1, _mm_mul_pd(r46, r)));
  r = _mm_loadu_pd(&EvU_TFA2[0]);
  r1 = _mm_loadu_pd(&FRotor_TFA2[0]);
  _mm_storeu_pd(&FO_TFA2[0], _mm_sub_pd(r1, _mm_mul_pd(r46, r)));
  r = _mm_loadu_pd(&EvU_TSS2[0]);
  r1 = _mm_loadu_pd(&FRotor_TSS2[0]);
  _mm_storeu_pd(&FO_TSS2[0], _mm_sub_pd(r1, _mm_mul_pd(r46, r)));
  r = _mm_loadu_pd(&EvU_yaw[0]);
  r1 = _mm_loadu_pd(&FRotor_yaw[0]);
  _mm_storeu_pd(&FO_yaw[0], _mm_sub_pd(r1, _mm_mul_pd(r46, r)));
  MRotor_t[2] = (((((((MB1_t[2] + MB2_t[2]) + MB3_t[2]) + MRotor_t[2]) + dEvQ_R
                    [2]) + dEvQ_P[2]) - dEvQ_Y[2]) - b_I_H[2]) - b_I_G[2];
  EwL[2] = FRotor_TFA1[2] - ElastoDyn->NacMass * EvU_TFA1[2];
  FO_TSS1[2] = FRotor_TSS1[2] - ElastoDyn->NacMass * EvU_TSS1[2];
  FO_TFA2[2] = FRotor_TFA2[2] - ElastoDyn->NacMass * EvU_TFA2[2];
  FO_TSS2[2] = FRotor_TSS2[2] - ElastoDyn->NacMass * EvU_TSS2[2];
  FO_yaw[2] = FRotor_yaw[2] - ElastoDyn->NacMass * EvU_yaw[2];
  I_pr_app = FO_t[1] * 0.0;
  I_yaw_app = 0.0 * FO_t[2];
  EvQ[0] = (dEvO_R[0] + (I_yaw_app - I_pr_app)) * q_Nom[37];
  rZT_3 = FO_t[0] * 0.0;
  EvQ[1] = (dEvO_R[1] + (rZT_3 - FO_t[2])) * q_Nom[37];
  EvQ[2] = (dEvO_R[2] + (FO_t[1] - rZT_3)) * q_Nom[37];
  rQS1_2 = -0.0 * FO_t[2];
  g_b[0] = (dEvO_P[0] + (rQS1_2 - (-FO_t[1]))) * q_Nom[38];
  g_b[1] = (dEvO_P[1] + (-FO_t[0] - rQS1_2)) * q_Nom[38];
  g_b[2] = (dEvO_P[2] + (-0.0 * FO_t[1] - FO_t[0] * -0.0)) * q_Nom[38];
  dEvQ_Y[0] = (dEvO_Y[0] + (FO_t[2] - I_pr_app)) * q_Nom[39];
  dEvQ_Y[1] = (dEvO_Y[1] + (rZT_3 - I_yaw_app)) * q_Nom[39];
  dEvQ_Y[2] = (dEvO_Y[2] + (I_pr_app - FO_t[0])) * q_Nom[39];
  dEvQ_P[0] = dEvO_TFA1[0] + (dEwB_TFA1[1] * rOU_idx_2 - rOU_idx_1 * dEwB_TFA1[2]);
  dEvQ_P[1] = dEvO_TFA1[1] + (rOU_idx_0 * dEwB_TFA1[2] - dEwB_TFA1[0] *
    rOU_idx_2);
  dEvQ_P[2] = dEvO_TFA1[2] + (dEwB_TFA1[0] * rOU_idx_1 - rOU_idx_0 * dEwB_TFA1[1]);
  EvZ[0] = EwB_TFA1[1] * FO_t[2] - FO_t[1] * EwB_TFA1[2];
  EvZ[1] = FO_t[0] * EwB_TFA1[2] - EwB_TFA1[0] * FO_t[2];
  EvZ[2] = EwB_TFA1[0] * FO_t[1] - FO_t[0] * EwB_TFA1[1];
  dEvQ_R[0] = dEvO_TSS1[0] + (dEwB_TSS1[1] * rOU_idx_2 - rOU_idx_1 * dEwB_TSS1[2]);
  dEvQ_R[1] = dEvO_TSS1[1] + (rOU_idx_0 * dEwB_TSS1[2] - dEwB_TSS1[0] *
    rOU_idx_2);
  dEvQ_R[2] = dEvO_TSS1[2] + (dEwB_TSS1[0] * rOU_idx_1 - rOU_idx_0 * dEwB_TSS1[1]);
  b_EwB_TSS1[0] = EwB_TSS1[1] * FO_t[2] - FO_t[1] * EwB_TSS1[2];
  b_EwB_TSS1[1] = FO_t[0] * EwB_TSS1[2] - EwB_TSS1[0] * FO_t[2];
  b_EwB_TSS1[2] = EwB_TSS1[0] * FO_t[1] - FO_t[0] * EwB_TSS1[1];
  dEvQ_TSS1[0] = dEvO_TFA2[0] + (dEwB_TFA2[1] * rOU_idx_2 - rOU_idx_1 *
    dEwB_TFA2[2]);
  dEvQ_TSS1[1] = dEvO_TFA2[1] + (rOU_idx_0 * dEwB_TFA2[2] - dEwB_TFA2[0] *
    rOU_idx_2);
  dEvQ_TSS1[2] = dEvO_TFA2[2] + (dEwB_TFA2[0] * rOU_idx_1 - rOU_idx_0 *
    dEwB_TFA2[1]);
  b_EwB_TFA2[0] = EwB_TFA2[1] * FO_t[2] - FO_t[1] * EwB_TFA2[2];
  b_EwB_TFA2[1] = FO_t[0] * EwB_TFA2[2] - EwB_TFA2[0] * FO_t[2];
  b_EwB_TFA2[2] = EwB_TFA2[0] * FO_t[1] - FO_t[0] * EwB_TFA2[1];
  b_I_G[0] = dEvO_TSS2[0] + (dEwB_TSS2[1] * rOU_idx_2 - rOU_idx_1 * dEwB_TSS2[2]);
  b_I_G[1] = dEvO_TSS2[1] + (rOU_idx_0 * dEwB_TSS2[2] - dEwB_TSS2[0] * rOU_idx_2);
  b_I_G[2] = dEvO_TSS2[2] + (dEwB_TSS2[0] * rOU_idx_1 - rOU_idx_0 * dEwB_TSS2[1]);
  b_EwB_TSS2[0] = EwB_TSS2[1] * FO_t[2] - FO_t[1] * EwB_TSS2[2];
  b_EwB_TSS2[1] = FO_t[0] * EwB_TSS2[2] - EwB_TSS2[0] * FO_t[2];
  b_EwB_TSS2[2] = EwB_TSS2[0] * FO_t[1] - FO_t[0] * EwB_TSS2[1];
  b_EwX[0] = dEwN_yaw[1] * rOU_idx_2 - rOU_idx_1 * dEwN_yaw[2];
  b_EwX[1] = rOU_idx_0 * dEwN_yaw[2] - dEwN_yaw[0] * rOU_idx_2;
  b_EwX[2] = dEwN_yaw[0] * rOU_idx_1 - rOU_idx_0 * dEwN_yaw[1];
  b_D[0] = FO_t[2] * D[4] - FO_t[1] * D[7];
  b_D[1] = FO_t[0] * D[7] - D[1] * FO_t[2];
  b_D[2] = FO_t[1] * D[1] - FO_t[0] * D[4];
  r = _mm_loadu_pd(&EvQ[0]);
  r1 = _mm_loadu_pd(&g_b[0]);
  r2 = _mm_loadu_pd(&dEvQ_Y[0]);
  r3 = _mm_loadu_pd(&dEvQ_P[0]);
  r4 = _mm_loadu_pd(&EvZ[0]);
  r5 = _mm_loadu_pd(&dEvQ_R[0]);
  r17 = _mm_loadu_pd(&b_EwB_TSS1[0]);
  r18 = _mm_loadu_pd(&dEvQ_TSS1[0]);
  r19 = _mm_loadu_pd(&b_EwB_TFA2[0]);
  r20 = _mm_loadu_pd(&b_I_G[0]);
  r47 = _mm_loadu_pd(&b_EwB_TSS2[0]);
  r48 = _mm_loadu_pd(&b_EwX[0]);
  r49 = _mm_loadu_pd(&b_D[0]);
  r = _mm_add_pd(_mm_add_pd(_mm_add_pd(_mm_add_pd(_mm_add_pd(_mm_add_pd
    (_mm_add_pd(_mm_add_pd(r, r1), r2), _mm_mul_pd(_mm_add_pd(r3, r4), r10)),
    _mm_mul_pd(_mm_add_pd(r5, r17), r11)), _mm_mul_pd(_mm_add_pd(r18, r19), r12)),
    _mm_mul_pd(_mm_add_pd(r20, r47), r13)), _mm_mul_pd(_mm_add_pd(r48, r49), r14)),
                 _mm_loadu_pd(&FRotor_t_tmp_tmp[0]));
  _mm_storeu_pd(&EvQ[0], r);
  r1 = _mm_loadu_pd(&dEvC_GeAz[0]);
  _mm_storeu_pd(&FO_t[0], _mm_sub_pd(r1, _mm_mul_pd(r46, r)));
  I_pr_app = ((((((EvQ[2] + g_b[2]) + dEvQ_Y[2]) + (dEvQ_P[2] + EvZ[2]) * q_Nom
                 [40]) + (dEvQ_R[2] + b_EwB_TSS1[2]) * q_Nom[41]) + (dEvQ_TSS1[2]
    + b_EwB_TFA2[2]) * q_Nom[42]) + (b_I_G[2] + b_EwB_TSS2[2]) * q_Nom[43]) +
    (b_EwX[2] + b_D[2]) * q_Nom[44];
  FO_t[2] = dEvC_GeAz[2] - ElastoDyn->NacMass * I_pr_app;

  /*  Partial moments */
  /*  MO_Sg   = MRotor_Sg   + cross(rOQ, FRotor_Sg)	                   - mN*cross(rOU,EvU_Sg); */
  /*  MO_Sw   = MRotor_Sw   + cross(rOQ, FRotor_Sw)                      - mN*cross(rOU,EvU_Sw); */
  /*  MO_Hv   = MRotor_Hv   + cross(rOQ, FRotor_Hv)                      - mN*cross(rOU,EvU_Hv); */
  dEwB_TFA1[0] = rQS1[1] * FB1_TFA1[2] - FB1_TFA1[1] * rQS1[2];
  dEwB_TFA1[1] = FB1_TFA1[0] * rQS1[2] - rQS1[0] * FB1_TFA1[2];
  dEwB_TFA1[2] = rQS1[0] * FB1_TFA1[1] - FB1_TFA1[0] * rQS1[1];
  dEvQ_R[0] = rQS2[1] * FB2_TFA1[2] - FB2_TFA1[1] * rQS2[2];
  dEvQ_R[1] = FB2_TFA1[0] * rQS2[2] - rQS2[0] * FB2_TFA1[2];
  dEvQ_R[2] = rQS2[0] * FB2_TFA1[1] - FB2_TFA1[0] * rQS2[1];
  dEvQ_P[0] = rQS3[1] * FB3_TFA1[2] - FB3_TFA1[1] * rQS3[2];
  dEvQ_P[1] = FB3_TFA1[0] * rQS3[2] - rQS3[0] * FB3_TFA1[2];
  dEvQ_P[2] = rQS3[0] * FB3_TFA1[1] - FB3_TFA1[0] * rQS3[1];
  dEvQ_Y[0] = ElastoDyn->HubMass * (rQC_idx_1 * EvC_TFA1_idx_2 - EvC_TFA1_idx_1 *
    rQC_idx_2);
  dEvQ_Y[1] = ElastoDyn->HubMass * (nb * rQC_idx_2 - rQC_idx_0 * EvC_TFA1_idx_2);
  dEvQ_Y[2] = ElastoDyn->HubMass * (rQC_idx_0 * EvC_TFA1_idx_1 - nb * rQC_idx_1);
  memset(&b_I_H[0], 0, 3U * sizeof(real_T));
  b_EwX[0] = rOQ[1] * FRotor_TFA1[2] - FRotor_TFA1[1] * rOQ[2];
  b_EwX[1] = FRotor_TFA1[0] * rOQ[2] - rOQ[0] * FRotor_TFA1[2];
  b_EwX[2] = rOQ[0] * FRotor_TFA1[1] - FRotor_TFA1[0] * rOQ[1];
  memset(&MB3_DrTr[0], 0, 3U * sizeof(real_T));
  dEvQ_TSS1[0] = ElastoDyn->NacMass * (rOU_idx_1 * EvU_TFA1[2] - EvU_TFA1[1] *
    rOU_idx_2);
  dEvQ_TSS1[1] = ElastoDyn->NacMass * (EvU_TFA1[0] * rOU_idx_2 - rOU_idx_0 *
    EvU_TFA1[2]);
  dEvQ_TSS1[2] = ElastoDyn->NacMass * (rOU_idx_0 * EvU_TFA1[1] - EvU_TFA1[0] *
    rOU_idx_1);
  memset(&b_dEvQ_TSS1[0], 0, 3U * sizeof(real_T));
  r = _mm_loadu_pd(&I_H[0]);
  r1 = _mm_loadu_pd(&b_I_H[0]);
  r2 = _mm_set1_pd(EwB_TFA1[0]);
  _mm_storeu_pd(&b_I_H[0], _mm_add_pd(r1, _mm_mul_pd(r, r2)));
  r = _mm_loadu_pd(&I_G[0]);
  r1 = _mm_loadu_pd(&MB3_DrTr[0]);
  _mm_storeu_pd(&MB3_DrTr[0], _mm_add_pd(r1, _mm_mul_pd(r, r2)));
  r = _mm_loadu_pd(&I_N[0]);
  r1 = _mm_loadu_pd(&b_dEvQ_TSS1[0]);
  _mm_storeu_pd(&b_dEvQ_TSS1[0], _mm_add_pd(r1, _mm_mul_pd(r, r2)));
  b_I_H[2] += EwB_TFA1[0] * I_H[2];
  MB3_DrTr[2] += EwB_TFA1[0] * I_G[2];
  b_dEvQ_TSS1[2] += EwB_TFA1[0] * I_N[2];
  r = _mm_loadu_pd(&I_H[3]);
  r1 = _mm_loadu_pd(&b_I_H[0]);
  r2 = _mm_set1_pd(EwB_TFA1[1]);
  _mm_storeu_pd(&b_I_H[0], _mm_add_pd(r1, _mm_mul_pd(r, r2)));
  r = _mm_loadu_pd(&I_G[3]);
  r1 = _mm_loadu_pd(&MB3_DrTr[0]);
  _mm_storeu_pd(&MB3_DrTr[0], _mm_add_pd(r1, _mm_mul_pd(r, r2)));
  r = _mm_loadu_pd(&I_N[3]);
  r1 = _mm_loadu_pd(&b_dEvQ_TSS1[0]);
  _mm_storeu_pd(&b_dEvQ_TSS1[0], _mm_add_pd(r1, _mm_mul_pd(r, r2)));
  b_I_H[2] += EwB_TFA1[1] * I_H[5];
  MB3_DrTr[2] += EwB_TFA1[1] * I_G[5];
  b_dEvQ_TSS1[2] += EwB_TFA1[1] * I_N[5];
  r = _mm_loadu_pd(&I_H[6]);
  r1 = _mm_loadu_pd(&b_I_H[0]);
  r2 = _mm_set1_pd(EwB_TFA1[2]);
  _mm_storeu_pd(&b_I_H[0], _mm_add_pd(r1, _mm_mul_pd(r, r2)));
  r = _mm_loadu_pd(&I_G[6]);
  r1 = _mm_loadu_pd(&MB3_DrTr[0]);
  _mm_storeu_pd(&MB3_DrTr[0], _mm_add_pd(r1, _mm_mul_pd(r, r2)));
  r = _mm_loadu_pd(&I_N[6]);
  r1 = _mm_loadu_pd(&b_dEvQ_TSS1[0]);
  _mm_storeu_pd(&b_dEvQ_TSS1[0], _mm_add_pd(r1, _mm_mul_pd(r, r2)));
  b_I_H[2] += EwB_TFA1[2] * I_H[8];
  MB3_DrTr[2] += EwB_TFA1[2] * I_G[8];
  b_dEvQ_TSS1[2] += EwB_TFA1[2] * I_N[8];
  r = _mm_loadu_pd(&MB1_TFA1[0]);
  r1 = _mm_loadu_pd(&MB2_TFA1[0]);
  r2 = _mm_loadu_pd(&MB3_TFA1[0]);
  r3 = _mm_loadu_pd(&dEwB_TFA1[0]);
  r4 = _mm_loadu_pd(&dEvQ_R[0]);
  r5 = _mm_loadu_pd(&dEvQ_P[0]);
  r17 = _mm_loadu_pd(&dEvQ_Y[0]);
  r18 = _mm_loadu_pd(&b_I_H[0]);
  r19 = _mm_loadu_pd(&b_EwX[0]);
  r20 = _mm_loadu_pd(&MB3_DrTr[0]);
  r47 = _mm_loadu_pd(&dEvQ_TSS1[0]);
  r48 = _mm_loadu_pd(&b_dEvQ_TSS1[0]);
  _mm_storeu_pd(&dEwB_TFA1[0], _mm_sub_pd(_mm_sub_pd(_mm_sub_pd(_mm_add_pd
    (_mm_sub_pd(_mm_sub_pd(_mm_add_pd(_mm_add_pd(_mm_add_pd(_mm_add_pd
    (_mm_add_pd(r, r1), r2), r3), r4), r5), r17), r18), r19), r20), r47), r48));
  dEwB_TFA1[2] = ((((((((((MB1_TFA1[2] + MB2_TFA1[2]) + MB3_TFA1[2]) +
    dEwB_TFA1[2]) + dEvQ_R[2]) + dEvQ_P[2]) - dEvQ_Y[2]) - b_I_H[2]) + b_EwX[2])
                   - MB3_DrTr[2]) - dEvQ_TSS1[2]) - b_dEvQ_TSS1[2];
  dEwL_GeAz[0] = rQS1[1] * FB1_TSS1[2] - FB1_TSS1[1] * rQS1[2];
  dEwL_GeAz[1] = FB1_TSS1[0] * rQS1[2] - rQS1[0] * FB1_TSS1[2];
  dEwL_GeAz[2] = rQS1[0] * FB1_TSS1[1] - FB1_TSS1[0] * rQS1[1];
  dEvQ_R[0] = rQS2[1] * FB2_TSS1[2] - FB2_TSS1[1] * rQS2[2];
  dEvQ_R[1] = FB2_TSS1[0] * rQS2[2] - rQS2[0] * FB2_TSS1[2];
  dEvQ_R[2] = rQS2[0] * FB2_TSS1[1] - FB2_TSS1[0] * rQS2[1];
  dEvQ_P[0] = rQS3[1] * FB3_TSS1[2] - FB3_TSS1[1] * rQS3[2];
  dEvQ_P[1] = FB3_TSS1[0] * rQS3[2] - rQS3[0] * FB3_TSS1[2];
  dEvQ_P[2] = rQS3[0] * FB3_TSS1[1] - FB3_TSS1[0] * rQS3[1];
  dEvQ_Y[0] = ElastoDyn->HubMass * (rQC_idx_1 * EvC_TSS1_idx_2 - EvC_TSS1_idx_1 *
    rQC_idx_2);
  dEvQ_Y[1] = ElastoDyn->HubMass * (EvC_TSS1_idx_0 * rQC_idx_2 - rQC_idx_0 *
    EvC_TSS1_idx_2);
  dEvQ_Y[2] = ElastoDyn->HubMass * (rQC_idx_0 * EvC_TSS1_idx_1 - EvC_TSS1_idx_0 *
    rQC_idx_1);
  memset(&b_I_H[0], 0, 3U * sizeof(real_T));
  b_EwX[0] = rOQ[1] * FRotor_TSS1[2] - FRotor_TSS1[1] * rOQ[2];
  b_EwX[1] = FRotor_TSS1[0] * rOQ[2] - rOQ[0] * FRotor_TSS1[2];
  b_EwX[2] = rOQ[0] * FRotor_TSS1[1] - FRotor_TSS1[0] * rOQ[1];
  memset(&MB3_DrTr[0], 0, 3U * sizeof(real_T));
  dEvQ_TSS1[0] = ElastoDyn->NacMass * (rOU_idx_1 * EvU_TSS1[2] - EvU_TSS1[1] *
    rOU_idx_2);
  dEvQ_TSS1[1] = ElastoDyn->NacMass * (EvU_TSS1[0] * rOU_idx_2 - rOU_idx_0 *
    EvU_TSS1[2]);
  dEvQ_TSS1[2] = ElastoDyn->NacMass * (rOU_idx_0 * EvU_TSS1[1] - EvU_TSS1[0] *
    rOU_idx_1);
  memset(&b_dEvQ_TSS1[0], 0, 3U * sizeof(real_T));
  r = _mm_loadu_pd(&I_H[0]);
  r1 = _mm_loadu_pd(&b_I_H[0]);
  r2 = _mm_set1_pd(EwB_TSS1[0]);
  _mm_storeu_pd(&b_I_H[0], _mm_add_pd(r1, _mm_mul_pd(r, r2)));
  r = _mm_loadu_pd(&I_G[0]);
  r1 = _mm_loadu_pd(&MB3_DrTr[0]);
  _mm_storeu_pd(&MB3_DrTr[0], _mm_add_pd(r1, _mm_mul_pd(r, r2)));
  r = _mm_loadu_pd(&I_N[0]);
  r1 = _mm_loadu_pd(&b_dEvQ_TSS1[0]);
  _mm_storeu_pd(&b_dEvQ_TSS1[0], _mm_add_pd(r1, _mm_mul_pd(r, r2)));
  b_I_H[2] += EwB_TSS1[0] * I_H[2];
  MB3_DrTr[2] += EwB_TSS1[0] * I_G[2];
  b_dEvQ_TSS1[2] += EwB_TSS1[0] * I_N[2];
  r = _mm_loadu_pd(&I_H[3]);
  r1 = _mm_loadu_pd(&b_I_H[0]);
  r2 = _mm_set1_pd(EwB_TSS1[1]);
  _mm_storeu_pd(&b_I_H[0], _mm_add_pd(r1, _mm_mul_pd(r, r2)));
  r = _mm_loadu_pd(&I_G[3]);
  r1 = _mm_loadu_pd(&MB3_DrTr[0]);
  _mm_storeu_pd(&MB3_DrTr[0], _mm_add_pd(r1, _mm_mul_pd(r, r2)));
  r = _mm_loadu_pd(&I_N[3]);
  r1 = _mm_loadu_pd(&b_dEvQ_TSS1[0]);
  _mm_storeu_pd(&b_dEvQ_TSS1[0], _mm_add_pd(r1, _mm_mul_pd(r, r2)));
  b_I_H[2] += EwB_TSS1[1] * I_H[5];
  MB3_DrTr[2] += EwB_TSS1[1] * I_G[5];
  b_dEvQ_TSS1[2] += EwB_TSS1[1] * I_N[5];
  r = _mm_loadu_pd(&I_H[6]);
  r1 = _mm_loadu_pd(&b_I_H[0]);
  r2 = _mm_set1_pd(EwB_TSS1[2]);
  _mm_storeu_pd(&b_I_H[0], _mm_add_pd(r1, _mm_mul_pd(r, r2)));
  r = _mm_loadu_pd(&I_G[6]);
  r1 = _mm_loadu_pd(&MB3_DrTr[0]);
  _mm_storeu_pd(&MB3_DrTr[0], _mm_add_pd(r1, _mm_mul_pd(r, r2)));
  r = _mm_loadu_pd(&I_N[6]);
  r1 = _mm_loadu_pd(&b_dEvQ_TSS1[0]);
  _mm_storeu_pd(&b_dEvQ_TSS1[0], _mm_add_pd(r1, _mm_mul_pd(r, r2)));
  b_I_H[2] += EwB_TSS1[2] * I_H[8];
  MB3_DrTr[2] += EwB_TSS1[2] * I_G[8];
  b_dEvQ_TSS1[2] += EwB_TSS1[2] * I_N[8];
  r = _mm_loadu_pd(&MB1_TSS1[0]);
  r1 = _mm_loadu_pd(&MB2_TSS1[0]);
  r2 = _mm_loadu_pd(&MB3_TSS1[0]);
  r3 = _mm_loadu_pd(&dEwL_GeAz[0]);
  r4 = _mm_loadu_pd(&dEvQ_R[0]);
  r5 = _mm_loadu_pd(&dEvQ_P[0]);
  r17 = _mm_loadu_pd(&dEvQ_Y[0]);
  r18 = _mm_loadu_pd(&b_I_H[0]);
  r19 = _mm_loadu_pd(&b_EwX[0]);
  r20 = _mm_loadu_pd(&MB3_DrTr[0]);
  r47 = _mm_loadu_pd(&dEvQ_TSS1[0]);
  r48 = _mm_loadu_pd(&b_dEvQ_TSS1[0]);
  _mm_storeu_pd(&dEwL_GeAz[0], _mm_sub_pd(_mm_sub_pd(_mm_sub_pd(_mm_add_pd
    (_mm_sub_pd(_mm_sub_pd(_mm_add_pd(_mm_add_pd(_mm_add_pd(_mm_add_pd
    (_mm_add_pd(r, r1), r2), r3), r4), r5), r17), r18), r19), r20), r47), r48));
  dEwL_GeAz[2] = ((((((((((MB1_TSS1[2] + MB2_TSS1[2]) + MB3_TSS1[2]) +
    dEwL_GeAz[2]) + dEvQ_R[2]) + dEvQ_P[2]) - dEvQ_Y[2]) - b_I_H[2]) + b_EwX[2])
                   - MB3_DrTr[2]) - dEvQ_TSS1[2]) - b_dEvQ_TSS1[2];
  FRotor_TSS1[0] = rQS1[1] * FB1_TFA2[2] - FB1_TFA2[1] * rQS1[2];
  FRotor_TSS1[1] = FB1_TFA2[0] * rQS1[2] - rQS1[0] * FB1_TFA2[2];
  FRotor_TSS1[2] = rQS1[0] * FB1_TFA2[1] - FB1_TFA2[0] * rQS1[1];
  dEvQ_R[0] = rQS2[1] * FB2_TFA2[2] - FB2_TFA2[1] * rQS2[2];
  dEvQ_R[1] = FB2_TFA2[0] * rQS2[2] - rQS2[0] * FB2_TFA2[2];
  dEvQ_R[2] = rQS2[0] * FB2_TFA2[1] - FB2_TFA2[0] * rQS2[1];
  dEvQ_P[0] = rQS3[1] * FB3_TFA2[2] - FB3_TFA2[1] * rQS3[2];
  dEvQ_P[1] = FB3_TFA2[0] * rQS3[2] - rQS3[0] * FB3_TFA2[2];
  dEvQ_P[2] = rQS3[0] * FB3_TFA2[1] - FB3_TFA2[0] * rQS3[1];
  dEvQ_Y[0] = ElastoDyn->HubMass * (rQC_idx_1 * EvC_TFA2_idx_2 - EvC_TFA2_idx_1 *
    rQC_idx_2);
  dEvQ_Y[1] = ElastoDyn->HubMass * (EvC_TFA2_idx_0 * rQC_idx_2 - rQC_idx_0 *
    EvC_TFA2_idx_2);
  dEvQ_Y[2] = ElastoDyn->HubMass * (rQC_idx_0 * EvC_TFA2_idx_1 - EvC_TFA2_idx_0 *
    rQC_idx_1);
  memset(&b_I_H[0], 0, 3U * sizeof(real_T));
  b_EwX[0] = rOQ[1] * FRotor_TFA2[2] - FRotor_TFA2[1] * rOQ[2];
  b_EwX[1] = FRotor_TFA2[0] * rOQ[2] - rOQ[0] * FRotor_TFA2[2];
  b_EwX[2] = rOQ[0] * FRotor_TFA2[1] - FRotor_TFA2[0] * rOQ[1];
  memset(&MB3_DrTr[0], 0, 3U * sizeof(real_T));
  dEvQ_TSS1[0] = ElastoDyn->NacMass * (rOU_idx_1 * EvU_TFA2[2] - EvU_TFA2[1] *
    rOU_idx_2);
  dEvQ_TSS1[1] = ElastoDyn->NacMass * (EvU_TFA2[0] * rOU_idx_2 - rOU_idx_0 *
    EvU_TFA2[2]);
  dEvQ_TSS1[2] = ElastoDyn->NacMass * (rOU_idx_0 * EvU_TFA2[1] - EvU_TFA2[0] *
    rOU_idx_1);
  memset(&b_dEvQ_TSS1[0], 0, 3U * sizeof(real_T));
  r = _mm_loadu_pd(&I_H[0]);
  r1 = _mm_loadu_pd(&b_I_H[0]);
  r2 = _mm_set1_pd(EwB_TFA2[0]);
  _mm_storeu_pd(&b_I_H[0], _mm_add_pd(r1, _mm_mul_pd(r, r2)));
  r = _mm_loadu_pd(&I_G[0]);
  r1 = _mm_loadu_pd(&MB3_DrTr[0]);
  _mm_storeu_pd(&MB3_DrTr[0], _mm_add_pd(r1, _mm_mul_pd(r, r2)));
  r = _mm_loadu_pd(&I_N[0]);
  r1 = _mm_loadu_pd(&b_dEvQ_TSS1[0]);
  _mm_storeu_pd(&b_dEvQ_TSS1[0], _mm_add_pd(r1, _mm_mul_pd(r, r2)));
  b_I_H[2] += EwB_TFA2[0] * I_H[2];
  MB3_DrTr[2] += EwB_TFA2[0] * I_G[2];
  b_dEvQ_TSS1[2] += EwB_TFA2[0] * I_N[2];
  r = _mm_loadu_pd(&I_H[3]);
  r1 = _mm_loadu_pd(&b_I_H[0]);
  r2 = _mm_set1_pd(EwB_TFA2[1]);
  _mm_storeu_pd(&b_I_H[0], _mm_add_pd(r1, _mm_mul_pd(r, r2)));
  r = _mm_loadu_pd(&I_G[3]);
  r1 = _mm_loadu_pd(&MB3_DrTr[0]);
  _mm_storeu_pd(&MB3_DrTr[0], _mm_add_pd(r1, _mm_mul_pd(r, r2)));
  r = _mm_loadu_pd(&I_N[3]);
  r1 = _mm_loadu_pd(&b_dEvQ_TSS1[0]);
  _mm_storeu_pd(&b_dEvQ_TSS1[0], _mm_add_pd(r1, _mm_mul_pd(r, r2)));
  b_I_H[2] += EwB_TFA2[1] * I_H[5];
  MB3_DrTr[2] += EwB_TFA2[1] * I_G[5];
  b_dEvQ_TSS1[2] += EwB_TFA2[1] * I_N[5];
  r = _mm_loadu_pd(&I_H[6]);
  r1 = _mm_loadu_pd(&b_I_H[0]);
  r2 = _mm_set1_pd(EwB_TFA2[2]);
  _mm_storeu_pd(&b_I_H[0], _mm_add_pd(r1, _mm_mul_pd(r, r2)));
  r = _mm_loadu_pd(&I_G[6]);
  r1 = _mm_loadu_pd(&MB3_DrTr[0]);
  _mm_storeu_pd(&MB3_DrTr[0], _mm_add_pd(r1, _mm_mul_pd(r, r2)));
  r = _mm_loadu_pd(&I_N[6]);
  r1 = _mm_loadu_pd(&b_dEvQ_TSS1[0]);
  _mm_storeu_pd(&b_dEvQ_TSS1[0], _mm_add_pd(r1, _mm_mul_pd(r, r2)));
  b_I_H[2] += EwB_TFA2[2] * I_H[8];
  MB3_DrTr[2] += EwB_TFA2[2] * I_G[8];
  b_dEvQ_TSS1[2] += EwB_TFA2[2] * I_N[8];
  r = _mm_loadu_pd(&MB1_TFA2[0]);
  r1 = _mm_loadu_pd(&MB2_TFA2[0]);
  r2 = _mm_loadu_pd(&MB3_TFA2[0]);
  r3 = _mm_loadu_pd(&FRotor_TSS1[0]);
  r4 = _mm_loadu_pd(&dEvQ_R[0]);
  r5 = _mm_loadu_pd(&dEvQ_P[0]);
  r17 = _mm_loadu_pd(&dEvQ_Y[0]);
  r18 = _mm_loadu_pd(&b_I_H[0]);
  r19 = _mm_loadu_pd(&b_EwX[0]);
  r20 = _mm_loadu_pd(&MB3_DrTr[0]);
  r47 = _mm_loadu_pd(&dEvQ_TSS1[0]);
  r48 = _mm_loadu_pd(&b_dEvQ_TSS1[0]);
  _mm_storeu_pd(&FRotor_TSS1[0], _mm_sub_pd(_mm_sub_pd(_mm_sub_pd(_mm_add_pd
    (_mm_sub_pd(_mm_sub_pd(_mm_add_pd(_mm_add_pd(_mm_add_pd(_mm_add_pd
    (_mm_add_pd(r, r1), r2), r3), r4), r5), r17), r18), r19), r20), r47), r48));
  FRotor_TSS1[2] = ((((((((((MB1_TFA2[2] + MB2_TFA2[2]) + MB3_TFA2[2]) +
    FRotor_TSS1[2]) + dEvQ_R[2]) + dEvQ_P[2]) - dEvQ_Y[2]) - b_I_H[2]) + b_EwX[2])
                     - MB3_DrTr[2]) - dEvQ_TSS1[2]) - b_dEvQ_TSS1[2];
  MB3_TFA1[0] = rQS1[1] * FB1_TSS2[2] - FB1_TSS2[1] * rQS1[2];
  MB3_TFA1[1] = FB1_TSS2[0] * rQS1[2] - rQS1[0] * FB1_TSS2[2];
  MB3_TFA1[2] = rQS1[0] * FB1_TSS2[1] - FB1_TSS2[0] * rQS1[1];
  dEvQ_R[0] = rQS2[1] * FB2_TSS2[2] - FB2_TSS2[1] * rQS2[2];
  dEvQ_R[1] = FB2_TSS2[0] * rQS2[2] - rQS2[0] * FB2_TSS2[2];
  dEvQ_R[2] = rQS2[0] * FB2_TSS2[1] - FB2_TSS2[0] * rQS2[1];
  dEvQ_P[0] = rQS3[1] * FB3_TSS2[2] - FB3_TSS2[1] * rQS3[2];
  dEvQ_P[1] = FB3_TSS2[0] * rQS3[2] - rQS3[0] * FB3_TSS2[2];
  dEvQ_P[2] = rQS3[0] * FB3_TSS2[1] - FB3_TSS2[0] * rQS3[1];
  dEvQ_Y[0] = ElastoDyn->HubMass * (rQC_idx_1 * EvC_TSS2_idx_2 - EvC_TSS2_idx_1 *
    rQC_idx_2);
  dEvQ_Y[1] = ElastoDyn->HubMass * (EvC_TSS2_idx_0 * rQC_idx_2 - rQC_idx_0 *
    EvC_TSS2_idx_2);
  dEvQ_Y[2] = ElastoDyn->HubMass * (rQC_idx_0 * EvC_TSS2_idx_1 - EvC_TSS2_idx_0 *
    rQC_idx_1);
  memset(&b_I_H[0], 0, 3U * sizeof(real_T));
  b_EwX[0] = rOQ[1] * FRotor_TSS2[2] - FRotor_TSS2[1] * rOQ[2];
  b_EwX[1] = FRotor_TSS2[0] * rOQ[2] - rOQ[0] * FRotor_TSS2[2];
  b_EwX[2] = rOQ[0] * FRotor_TSS2[1] - FRotor_TSS2[0] * rOQ[1];
  memset(&MB3_DrTr[0], 0, 3U * sizeof(real_T));
  dEvQ_TSS1[0] = ElastoDyn->NacMass * (rOU_idx_1 * EvU_TSS2[2] - EvU_TSS2[1] *
    rOU_idx_2);
  dEvQ_TSS1[1] = ElastoDyn->NacMass * (EvU_TSS2[0] * rOU_idx_2 - rOU_idx_0 *
    EvU_TSS2[2]);
  dEvQ_TSS1[2] = ElastoDyn->NacMass * (rOU_idx_0 * EvU_TSS2[1] - EvU_TSS2[0] *
    rOU_idx_1);
  memset(&b_dEvQ_TSS1[0], 0, 3U * sizeof(real_T));
  r = _mm_loadu_pd(&I_H[0]);
  r1 = _mm_loadu_pd(&b_I_H[0]);
  r2 = _mm_set1_pd(EwB_TSS2[0]);
  _mm_storeu_pd(&b_I_H[0], _mm_add_pd(r1, _mm_mul_pd(r, r2)));
  r = _mm_loadu_pd(&I_G[0]);
  r1 = _mm_loadu_pd(&MB3_DrTr[0]);
  _mm_storeu_pd(&MB3_DrTr[0], _mm_add_pd(r1, _mm_mul_pd(r, r2)));
  r = _mm_loadu_pd(&I_N[0]);
  r1 = _mm_loadu_pd(&b_dEvQ_TSS1[0]);
  _mm_storeu_pd(&b_dEvQ_TSS1[0], _mm_add_pd(r1, _mm_mul_pd(r, r2)));
  b_I_H[2] += EwB_TSS2[0] * I_H[2];
  MB3_DrTr[2] += EwB_TSS2[0] * I_G[2];
  b_dEvQ_TSS1[2] += EwB_TSS2[0] * I_N[2];
  r = _mm_loadu_pd(&I_H[3]);
  r1 = _mm_loadu_pd(&b_I_H[0]);
  r2 = _mm_set1_pd(EwB_TSS2[1]);
  _mm_storeu_pd(&b_I_H[0], _mm_add_pd(r1, _mm_mul_pd(r, r2)));
  r = _mm_loadu_pd(&I_G[3]);
  r1 = _mm_loadu_pd(&MB3_DrTr[0]);
  _mm_storeu_pd(&MB3_DrTr[0], _mm_add_pd(r1, _mm_mul_pd(r, r2)));
  r = _mm_loadu_pd(&I_N[3]);
  r1 = _mm_loadu_pd(&b_dEvQ_TSS1[0]);
  _mm_storeu_pd(&b_dEvQ_TSS1[0], _mm_add_pd(r1, _mm_mul_pd(r, r2)));
  b_I_H[2] += EwB_TSS2[1] * I_H[5];
  MB3_DrTr[2] += EwB_TSS2[1] * I_G[5];
  b_dEvQ_TSS1[2] += EwB_TSS2[1] * I_N[5];
  r = _mm_loadu_pd(&I_H[6]);
  r1 = _mm_loadu_pd(&b_I_H[0]);
  r2 = _mm_set1_pd(EwB_TSS2[2]);
  _mm_storeu_pd(&b_I_H[0], _mm_add_pd(r1, _mm_mul_pd(r, r2)));
  r = _mm_loadu_pd(&I_G[6]);
  r1 = _mm_loadu_pd(&MB3_DrTr[0]);
  _mm_storeu_pd(&MB3_DrTr[0], _mm_add_pd(r1, _mm_mul_pd(r, r2)));
  r = _mm_loadu_pd(&I_N[6]);
  r1 = _mm_loadu_pd(&b_dEvQ_TSS1[0]);
  _mm_storeu_pd(&b_dEvQ_TSS1[0], _mm_add_pd(r1, _mm_mul_pd(r, r2)));
  b_I_H[2] += EwB_TSS2[2] * I_H[8];
  MB3_DrTr[2] += EwB_TSS2[2] * I_G[8];
  b_dEvQ_TSS1[2] += EwB_TSS2[2] * I_N[8];
  r = _mm_loadu_pd(&MB1_TSS2[0]);
  r1 = _mm_loadu_pd(&MB2_TSS2[0]);
  r2 = _mm_loadu_pd(&MB3_TSS2[0]);
  r3 = _mm_loadu_pd(&MB3_TFA1[0]);
  r4 = _mm_loadu_pd(&dEvQ_R[0]);
  r5 = _mm_loadu_pd(&dEvQ_P[0]);
  r17 = _mm_loadu_pd(&dEvQ_Y[0]);
  r18 = _mm_loadu_pd(&b_I_H[0]);
  r19 = _mm_loadu_pd(&b_EwX[0]);
  r20 = _mm_loadu_pd(&MB3_DrTr[0]);
  r47 = _mm_loadu_pd(&dEvQ_TSS1[0]);
  r48 = _mm_loadu_pd(&b_dEvQ_TSS1[0]);
  _mm_storeu_pd(&MB3_TFA1[0], _mm_sub_pd(_mm_sub_pd(_mm_sub_pd(_mm_add_pd
    (_mm_sub_pd(_mm_sub_pd(_mm_add_pd(_mm_add_pd(_mm_add_pd(_mm_add_pd
    (_mm_add_pd(r, r1), r2), r3), r4), r5), r17), r18), r19), r20), r47), r48));
  MB3_TFA1[2] = ((((((((((MB1_TSS2[2] + MB2_TSS2[2]) + MB3_TSS2[2]) + MB3_TFA1[2])
                       + dEvQ_R[2]) + dEvQ_P[2]) - dEvQ_Y[2]) - b_I_H[2]) +
                   b_EwX[2]) - MB3_DrTr[2]) - dEvQ_TSS1[2]) - b_dEvQ_TSS1[2];
  MB2_TFA1[0] = rQS1[1] * FB1_yaw[2] - FB1_yaw[1] * rQS1[2];
  MB2_TFA1[1] = FB1_yaw[0] * rQS1[2] - rQS1[0] * FB1_yaw[2];
  MB2_TFA1[2] = rQS1[0] * FB1_yaw[1] - FB1_yaw[0] * rQS1[1];
  dEvQ_R[0] = rQS2[1] * FB2_yaw[2] - FB2_yaw[1] * rQS2[2];
  dEvQ_R[1] = FB2_yaw[0] * rQS2[2] - rQS2[0] * FB2_yaw[2];
  dEvQ_R[2] = rQS2[0] * FB2_yaw[1] - FB2_yaw[0] * rQS2[1];
  dEvQ_P[0] = rQS3[1] * FB3_yaw[2] - FB3_yaw[1] * rQS3[2];
  dEvQ_P[1] = FB3_yaw[0] * rQS3[2] - rQS3[0] * FB3_yaw[2];
  dEvQ_P[2] = rQS3[0] * FB3_yaw[1] - FB3_yaw[0] * rQS3[1];
  dEvQ_Y[0] = ElastoDyn->HubMass * (rQC_idx_1 * EvC_yaw_idx_2 - EvC_yaw_idx_1 *
    rQC_idx_2);
  dEvQ_Y[1] = ElastoDyn->HubMass * (EvC_yaw_idx_0 * rQC_idx_2 - rQC_idx_0 *
    EvC_yaw_idx_2);
  dEvQ_Y[2] = ElastoDyn->HubMass * (rQC_idx_0 * EvC_yaw_idx_1 - EvC_yaw_idx_0 *
    rQC_idx_1);
  memset(&b_I_H[0], 0, 3U * sizeof(real_T));
  b_EwX[0] = rOQ[1] * FRotor_yaw[2] - FRotor_yaw[1] * rOQ[2];
  b_EwX[1] = FRotor_yaw[0] * rOQ[2] - rOQ[0] * FRotor_yaw[2];
  b_EwX[2] = rOQ[0] * FRotor_yaw[1] - FRotor_yaw[0] * rOQ[1];
  memset(&MB3_DrTr[0], 0, 3U * sizeof(real_T));
  dEvQ_TSS1[0] = ElastoDyn->NacMass * (rOU_idx_1 * EvU_yaw[2] - EvU_yaw[1] *
    rOU_idx_2);
  dEvQ_TSS1[1] = ElastoDyn->NacMass * (EvU_yaw[0] * rOU_idx_2 - rOU_idx_0 *
    EvU_yaw[2]);
  dEvQ_TSS1[2] = ElastoDyn->NacMass * (rOU_idx_0 * EvU_yaw[1] - EvU_yaw[0] *
    rOU_idx_1);
  memset(&b_dEvQ_TSS1[0], 0, 3U * sizeof(real_T));
  r = _mm_loadu_pd(&I_H[0]);
  r1 = _mm_loadu_pd(&b_I_H[0]);
  r2 = _mm_set1_pd(D[1]);
  _mm_storeu_pd(&b_I_H[0], _mm_add_pd(r1, _mm_mul_pd(r, r2)));
  r = _mm_loadu_pd(&I_G[0]);
  r1 = _mm_loadu_pd(&MB3_DrTr[0]);
  _mm_storeu_pd(&MB3_DrTr[0], _mm_add_pd(r1, _mm_mul_pd(r, r2)));
  r = _mm_loadu_pd(&I_N[0]);
  r1 = _mm_loadu_pd(&b_dEvQ_TSS1[0]);
  _mm_storeu_pd(&b_dEvQ_TSS1[0], _mm_add_pd(r1, _mm_mul_pd(r, r2)));
  b_I_H[2] += D[1] * I_H[2];
  MB3_DrTr[2] += D[1] * I_G[2];
  b_dEvQ_TSS1[2] += D[1] * I_N[2];
  r = _mm_loadu_pd(&I_H[3]);
  r1 = _mm_loadu_pd(&b_I_H[0]);
  r2 = _mm_set1_pd(D[4]);
  _mm_storeu_pd(&b_I_H[0], _mm_add_pd(r1, _mm_mul_pd(r, r2)));
  r = _mm_loadu_pd(&I_G[3]);
  r1 = _mm_loadu_pd(&MB3_DrTr[0]);
  _mm_storeu_pd(&MB3_DrTr[0], _mm_add_pd(r1, _mm_mul_pd(r, r2)));
  r = _mm_loadu_pd(&I_N[3]);
  r1 = _mm_loadu_pd(&b_dEvQ_TSS1[0]);
  _mm_storeu_pd(&b_dEvQ_TSS1[0], _mm_add_pd(r1, _mm_mul_pd(r, r2)));
  b_I_H[2] += D[4] * I_H[5];
  MB3_DrTr[2] += D[4] * I_G[5];
  b_dEvQ_TSS1[2] += D[4] * I_N[5];
  r = _mm_loadu_pd(&I_H[6]);
  r1 = _mm_loadu_pd(&b_I_H[0]);
  r2 = _mm_set1_pd(D[7]);
  _mm_storeu_pd(&b_I_H[0], _mm_add_pd(r1, _mm_mul_pd(r, r2)));
  r = _mm_loadu_pd(&I_G[6]);
  r1 = _mm_loadu_pd(&MB3_DrTr[0]);
  _mm_storeu_pd(&MB3_DrTr[0], _mm_add_pd(r1, _mm_mul_pd(r, r2)));
  r = _mm_loadu_pd(&I_N[6]);
  r1 = _mm_loadu_pd(&b_dEvQ_TSS1[0]);
  _mm_storeu_pd(&b_dEvQ_TSS1[0], _mm_add_pd(r1, _mm_mul_pd(r, r2)));
  b_I_H[2] += D[7] * I_H[8];
  MB3_DrTr[2] += D[7] * I_G[8];
  b_dEvQ_TSS1[2] += D[7] * I_N[8];
  r = _mm_loadu_pd(&MB1_yaw[0]);
  r1 = _mm_loadu_pd(&MB2_yaw[0]);
  r2 = _mm_loadu_pd(&MB3_yaw[0]);
  r3 = _mm_loadu_pd(&MB2_TFA1[0]);
  r4 = _mm_loadu_pd(&dEvQ_R[0]);
  r5 = _mm_loadu_pd(&dEvQ_P[0]);
  r17 = _mm_loadu_pd(&dEvQ_Y[0]);
  r18 = _mm_loadu_pd(&b_I_H[0]);
  r19 = _mm_loadu_pd(&b_EwX[0]);
  r20 = _mm_loadu_pd(&MB3_DrTr[0]);
  r47 = _mm_loadu_pd(&dEvQ_TSS1[0]);
  r48 = _mm_loadu_pd(&b_dEvQ_TSS1[0]);
  _mm_storeu_pd(&MB2_TFA1[0], _mm_sub_pd(_mm_sub_pd(_mm_sub_pd(_mm_add_pd
    (_mm_sub_pd(_mm_sub_pd(_mm_add_pd(_mm_add_pd(_mm_add_pd(_mm_add_pd
    (_mm_add_pd(r, r1), r2), r3), r4), r5), r17), r18), r19), r20), r47), r48));
  MB2_TFA1[2] = ((((((((((MB1_yaw[2] + MB2_yaw[2]) + MB3_yaw[2]) + MB2_TFA1[2])
                       + dEvQ_R[2]) + dEvQ_P[2]) - dEvQ_Y[2]) - b_I_H[2]) +
                   b_EwX[2]) - MB3_DrTr[2]) - dEvQ_TSS1[2]) - b_dEvQ_TSS1[2];
  memset(&MB3_DrTr[0], 0, 3U * sizeof(real_T));
  r = _mm_loadu_pd(&I_G[0]);
  r1 = _mm_loadu_pd(&MB3_DrTr[0]);
  _mm_storeu_pd(&MB3_DrTr[0], _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(EwG_GeAz
    [0]))));
  MB3_DrTr[2] += EwG_GeAz[0] * I_G[2];
  r = _mm_loadu_pd(&I_G[3]);
  r1 = _mm_loadu_pd(&MB3_DrTr[0]);
  _mm_storeu_pd(&MB3_DrTr[0], _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(EwG_GeAz
    [1]))));
  MB3_DrTr[2] += EwG_GeAz[1] * I_G[5];
  r = _mm_loadu_pd(&I_G[6]);
  r1 = _mm_loadu_pd(&MB3_DrTr[0]);
  _mm_storeu_pd(&MB3_DrTr[0], _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(EwG_GeAz
    [2]))));
  MB3_DrTr[2] += EwG_GeAz[2] * I_G[8];
  FB1_t[0] = MRotor_GeAz[0] + (rOQ[1] * FRotor_GeAz[2] - FRotor_GeAz[1] * rOQ[2]);
  FB1_t[1] = MRotor_GeAz[1] + (FRotor_GeAz[0] * rOQ[2] - rOQ[0] * FRotor_GeAz[2]);
  FB1_t[2] = MRotor_GeAz[2] + (rOQ[0] * FRotor_GeAz[1] - FRotor_GeAz[0] * rOQ[1]);
  r = _mm_loadu_pd(&MB3_DrTr[0]);
  _mm_storeu_pd(&b_dEvQ_R[0], r);
  r1 = _mm_loadu_pd(&FB1_t[0]);
  _mm_storeu_pd(&FB1_t[0], _mm_sub_pd(r1, r));
  b_dEvQ_R[2] = MB3_DrTr[2];
  FB1_t[2] -= MB3_DrTr[2];
  FB2_t[0] = MRotor_DrTr[0] + (rOQ[1] * EvZ_tmp - FRotor_DrTr[1] * rOQ[2]);
  FB2_t[1] = MRotor_DrTr[1] + (FRotor_DrTr[0] * rOQ[2] - rOQ[0] * EvZ_tmp);
  FB2_t[2] = MRotor_DrTr[2] + (rOQ[0] * FRotor_DrTr[1] - FRotor_DrTr[0] * rOQ[1]);
  FB3_t[0] = MRotor_B1F1[0] + (rOQ[1] * FB1_B1F1[2] - FB1_B1F1[1] * rOQ[2]);
  FB3_t[1] = MRotor_B1F1[1] + (FB1_B1F1[0] * rOQ[2] - rOQ[0] * FB1_B1F1[2]);
  FB3_t[2] = MRotor_B1F1[2] + (rOQ[0] * FB1_B1F1[1] - FB1_B1F1[0] * rOQ[1]);
  MB1_t[0] = MRotor_B1E1[0] + (rOQ[1] * FB1_B1E1[2] - FB1_B1E1[1] * rOQ[2]);
  MB1_t[1] = MRotor_B1E1[1] + (FB1_B1E1[0] * rOQ[2] - rOQ[0] * FB1_B1E1[2]);
  MB1_t[2] = MRotor_B1E1[2] + (rOQ[0] * FB1_B1E1[1] - FB1_B1E1[0] * rOQ[1]);
  MB2_t[0] = MRotor_B1F2[0] + (rOQ[1] * FB1_B1F2[2] - FB1_B1F2[1] * rOQ[2]);
  MB2_t[1] = MRotor_B1F2[1] + (FB1_B1F2[0] * rOQ[2] - rOQ[0] * FB1_B1F2[2]);
  MB2_t[2] = MRotor_B1F2[2] + (rOQ[0] * FB1_B1F2[1] - FB1_B1F2[0] * rOQ[1]);
  MB3_t[0] = MRotor_B2F1[0] + (rOQ[1] * FB2_B2F1[2] - FB2_B2F1[1] * rOQ[2]);
  MB3_t[1] = MRotor_B2F1[1] + (FB2_B2F1[0] * rOQ[2] - rOQ[0] * FB2_B2F1[2]);
  MB3_t[2] = MRotor_B2F1[2] + (rOQ[0] * FB2_B2F1[1] - FB2_B2F1[0] * rOQ[1]);
  EvC_GeAz[0] = MRotor_B2E1[0] + (rOQ[1] * FB2_B2E1[2] - FB2_B2E1[1] * rOQ[2]);
  EvC_GeAz[1] = MRotor_B2E1[1] + (FB2_B2E1[0] * rOQ[2] - rOQ[0] * FB2_B2E1[2]);
  EvC_GeAz[2] = MRotor_B2E1[2] + (rOQ[0] * FB2_B2E1[1] - FB2_B2E1[0] * rOQ[1]);
  FRotor_TFA1[0] = MRotor_B2F2[0] + (rOQ[1] * FB2_B2F2[2] - FB2_B2F2[1] * rOQ[2]);
  FRotor_TFA1[1] = MRotor_B2F2[1] + (FB2_B2F2[0] * rOQ[2] - rOQ[0] * FB2_B2F2[2]);
  FRotor_TFA1[2] = MRotor_B2F2[2] + (rOQ[0] * FB2_B2F2[1] - FB2_B2F2[0] * rOQ[1]);
  FB1_TFA1[0] = MRotor_B3F1[0] + (rOQ[1] * FB3_B3F1[2] - FB3_B3F1[1] * rOQ[2]);
  FB1_TFA1[1] = MRotor_B3F1[1] + (FB3_B3F1[0] * rOQ[2] - rOQ[0] * FB3_B3F1[2]);
  FB1_TFA1[2] = MRotor_B3F1[2] + (rOQ[0] * FB3_B3F1[1] - FB3_B3F1[0] * rOQ[1]);
  FB2_TFA1[0] = MRotor_B3E1[0] + (rOQ[1] * FB3_B3E1[2] - FB3_B3E1[1] * rOQ[2]);
  FB2_TFA1[1] = MRotor_B3E1[1] + (FB3_B3E1[0] * rOQ[2] - rOQ[0] * FB3_B3E1[2]);
  FB2_TFA1[2] = MRotor_B3E1[2] + (rOQ[0] * FB3_B3E1[1] - FB3_B3E1[0] * rOQ[1]);
  FB3_TFA1[0] = MRotor_B3F2[0] + (rOQ[1] * FB3_B3F2[2] - FB3_B3F2[1] * rOQ[2]);
  FB3_TFA1[1] = MRotor_B3F2[1] + (FB3_B3F2[0] * rOQ[2] - rOQ[0] * FB3_B3F2[2]);
  FB3_TFA1[2] = MRotor_B3F2[2] + (rOQ[0] * FB3_B3F2[1] - FB3_B3F2[0] * rOQ[1]);
  memset(&MB3_DrTr[0], 0, 3U * sizeof(real_T));
  r = _mm_loadu_pd(&I_G[0]);
  r1 = _mm_loadu_pd(&MB3_DrTr[0]);
  _mm_storeu_pd(&MB3_DrTr[0], _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(EwG_idx_0))));
  MB3_DrTr[2] += I_G[2] * EwG_idx_0;
  r = _mm_loadu_pd(&I_G[3]);
  r1 = _mm_loadu_pd(&MB3_DrTr[0]);
  _mm_storeu_pd(&MB3_DrTr[0], _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(EwG_idx_1))));
  MB3_DrTr[2] += I_G[5] * EwG_idx_1;
  r = _mm_loadu_pd(&I_G[6]);
  r1 = _mm_loadu_pd(&MB3_DrTr[0]);
  _mm_storeu_pd(&MB3_DrTr[0], _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(EwG_idx_2))));
  MB3_DrTr[2] += I_G[8] * EwG_idx_2;
  memset(&b_dEvQ_TSS1[0], 0, 3U * sizeof(real_T));
  g_b[0] = MB3_DrTr[0];
  r = _mm_loadu_pd(&I_N[0]);
  r1 = _mm_loadu_pd(&b_dEvQ_TSS1[0]);
  _mm_storeu_pd(&b_dEvQ_TSS1[0], _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd
    (EwN_idx_0))));
  b_dEvQ_TSS1[2] += I_N[2] * EwN_idx_0;
  g_b[1] = MB3_DrTr[1];
  r = _mm_loadu_pd(&I_N[3]);
  r1 = _mm_loadu_pd(&b_dEvQ_TSS1[0]);
  _mm_storeu_pd(&b_dEvQ_TSS1[0], _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd
    (EwN_idx_1))));
  b_dEvQ_TSS1[2] += I_N[5] * EwN_idx_1;
  g_b[2] = MB3_DrTr[2];
  r = _mm_loadu_pd(&I_N[6]);
  r1 = _mm_loadu_pd(&b_dEvQ_TSS1[0]);
  _mm_storeu_pd(&b_dEvQ_TSS1[0], _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(d2))));
  b_dEvQ_TSS1[2] += I_N[8] * d2;
  b_EwX[0] = dEwN[0] + (EwN_idx_1 * EwG_GeAz[2] - EwG_GeAz[1] * d2) * q_Nom[45];
  b_EwX[1] = dEwN[1] + (EwG_GeAz[0] * d2 - EwN_idx_0 * EwG_GeAz[2]) * q_Nom[45];
  b_EwX[2] = dEwN[2] + (EwN_idx_0 * EwG_GeAz[1] - EwG_GeAz[0] * EwN_idx_1) *
    q_Nom[45];
  memset(&MB3_DrTr[0], 0, 3U * sizeof(real_T));
  EvZ[0] = b_dEvQ_TSS1[0];
  r = _mm_loadu_pd(&I_G[0]);
  r1 = _mm_loadu_pd(&MB3_DrTr[0]);
  _mm_storeu_pd(&MB3_DrTr[0], _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(b_EwX[0]))));
  MB3_DrTr[2] += b_EwX[0] * I_G[2];
  EvZ[1] = b_dEvQ_TSS1[1];
  r = _mm_loadu_pd(&I_G[3]);
  r1 = _mm_loadu_pd(&MB3_DrTr[0]);
  _mm_storeu_pd(&MB3_DrTr[0], _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(b_EwX[1]))));
  MB3_DrTr[2] += b_EwX[1] * I_G[5];
  EvZ[2] = b_dEvQ_TSS1[2];
  r = _mm_loadu_pd(&I_G[6]);
  r1 = _mm_loadu_pd(&MB3_DrTr[0]);
  _mm_storeu_pd(&MB3_DrTr[0], _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(b_EwX[2]))));
  MB3_DrTr[2] += b_EwX[2] * I_G[8];
  MB1_TFA1[0] = MRotor_t[0] + (rOQ[1] * dEvC_GeAz[2] - dEvC_GeAz[1] * rOQ[2]);
  MB1_TFA1[1] = MRotor_t[1] + (dEvC_GeAz[0] * rOQ[2] - rOQ[0] * dEvC_GeAz[2]);
  MB1_TFA1[2] = MRotor_t[2] + (rOQ[0] * dEvC_GeAz[1] - dEvC_GeAz[0] * rOQ[1]);
  b_EwX[0] = EwG_idx_1 * g_b[2] - g_b[1] * EwG_idx_2;
  b_EwX[1] = g_b[0] * EwG_idx_2 - EwG_idx_0 * g_b[2];
  b_EwX[2] = EwG_idx_0 * g_b[1] - g_b[0] * EwG_idx_1;
  dEvQ_Y[0] = ElastoDyn->NacMass * (rOU_idx_1 * I_pr_app - EvQ[1] * rOU_idx_2);
  dEvQ_Y[1] = ElastoDyn->NacMass * (EvQ[0] * rOU_idx_2 - rOU_idx_0 * I_pr_app);
  dEvQ_Y[2] = ElastoDyn->NacMass * (rOU_idx_0 * EvQ[1] - EvQ[0] * rOU_idx_1);
  memset(&b_dEvQ_TSS1[0], 0, 3U * sizeof(real_T));
  r = _mm_loadu_pd(&I_N[0]);
  r1 = _mm_loadu_pd(&b_dEvQ_TSS1[0]);
  r50 = _mm_set1_pd(dEwN[0]);
  _mm_storeu_pd(&b_dEvQ_TSS1[0], _mm_add_pd(r1, _mm_mul_pd(r, r50)));
  b_dEvQ_TSS1[2] += dEwN[0] * I_N[2];
  r = _mm_loadu_pd(&I_N[3]);
  r1 = _mm_loadu_pd(&b_dEvQ_TSS1[0]);
  r51 = _mm_set1_pd(dEwN[1]);
  _mm_storeu_pd(&b_dEvQ_TSS1[0], _mm_add_pd(r1, _mm_mul_pd(r, r51)));
  b_dEvQ_TSS1[2] += dEwN[1] * I_N[5];
  r = _mm_loadu_pd(&I_N[6]);
  r1 = _mm_loadu_pd(&b_dEvQ_TSS1[0]);
  r52 = _mm_set1_pd(dEwN[2]);
  _mm_storeu_pd(&b_dEvQ_TSS1[0], _mm_add_pd(r1, _mm_mul_pd(r, r52)));
  b_dEvQ_TSS1[2] += dEwN[2] * I_N[8];
  b_I_G[0] = EwN_idx_1 * EvZ[2] - EvZ[1] * d2;
  b_I_G[1] = EvZ[0] * d2 - EwN_idx_0 * EvZ[2];
  b_I_G[2] = EwN_idx_0 * EvZ[1] - EvZ[0] * EwN_idx_1;
  r = _mm_loadu_pd(&MB1_TFA1[0]);
  r1 = _mm_loadu_pd(&MB3_DrTr[0]);
  r2 = _mm_loadu_pd(&b_EwX[0]);
  r3 = _mm_loadu_pd(&dEvQ_Y[0]);
  r4 = _mm_loadu_pd(&b_dEvQ_TSS1[0]);
  r5 = _mm_loadu_pd(&b_I_G[0]);
  _mm_storeu_pd(&MB1_TFA1[0], _mm_sub_pd(_mm_sub_pd(_mm_sub_pd(_mm_sub_pd
    (_mm_sub_pd(r, r1), r2), r3), r4), r5));
  MB1_TFA1[2] = ((((MB1_TFA1[2] - MB3_DrTr[2]) - b_EwX[2]) - dEvQ_Y[2]) -
                 b_dEvQ_TSS1[2]) - b_I_G[2];

  /*  Partial forces and moments at tower base */
  /*  Partial forces */
  st.site = &bl_emlrtRSI;
  d_coprod(&st, Twr->mT, EvF_Sg, XvT);
  emxFree_real_T(sp, &EvF_Sg);
  st.site = &bl_emlrtRSI;
  c_trapz(Twr->TwrSec, XvT, FRotor_TFA2);
  FB1_Sg[0] = (((((FB1_Sg[0] + FB2_Sg[0]) + FB3_Sg[0]) - ElastoDyn->HubMass) -
                ElastoDyn->NacMass) - ElastoDyn->YawBrMass) - FRotor_TFA2[0];
  I_pr_app = ElastoDyn->HubMass * 0.0;
  I_yaw_app = ElastoDyn->NacMass * 0.0;
  rZT_3 = ElastoDyn->YawBrMass * 0.0;
  FB1_Sg[1] = (((((FB1_Sg[1] + FB2_Sg[1]) + FB3_Sg[1]) - I_pr_app) - I_yaw_app)
               - rZT_3) - FRotor_TFA2[1];
  FB1_Sg[2] = (((((FB1_Sg[2] + FB2_Sg[2]) + FB3_Sg[2]) - I_pr_app) - I_yaw_app)
               - rZT_3) - FRotor_TFA2[2];
  st.site = &cl_emlrtRSI;
  d_coprod(&st, Twr->mT, EvF_Sw, XvT);
  emxFree_real_T(sp, &EvF_Sw);
  st.site = &cl_emlrtRSI;
  c_trapz(Twr->TwrSec, XvT, FRotor_TFA2);
  FB1_Sw[0] = (((((FB1_Sw[0] + FB2_Sw[0]) + FB3_Sw[0]) - I_pr_app) - I_yaw_app)
               - rZT_3) - FRotor_TFA2[0];
  FB1_Sw[1] = (((((FB1_Sw[1] + FB2_Sw[1]) + FB3_Sw[1]) - I_pr_app) - I_yaw_app)
               - rZT_3) - FRotor_TFA2[1];
  FB1_Sw[2] = (((((FB1_Sw[2] + FB2_Sw[2]) + FB3_Sw[2]) - (-ElastoDyn->HubMass))
                - (-ElastoDyn->NacMass)) - (-ElastoDyn->YawBrMass)) -
    FRotor_TFA2[2];
  st.site = &dl_emlrtRSI;
  d_coprod(&st, Twr->mT, EvF_Hv, XvT);
  emxFree_real_T(sp, &EvF_Hv);
  st.site = &dl_emlrtRSI;
  c_trapz(Twr->TwrSec, XvT, FRotor_TFA2);
  FB1_Hv[0] = (((((FB1_Hv[0] + FB2_Hv[0]) + FB3_Hv[0]) - I_pr_app) - I_yaw_app)
               - rZT_3) - FRotor_TFA2[0];
  EvO_R[0] = (FRotor_R_idx_0 - ElastoDyn->NacMass * EvU_R_idx_0) -
    ElastoDyn->YawBrMass * EvO_R[0];
  FB1_Hv[1] = (((((FB1_Hv[1] + FB2_Hv[1]) + FB3_Hv[1]) - ElastoDyn->HubMass) -
                ElastoDyn->NacMass) - ElastoDyn->YawBrMass) - FRotor_TFA2[1];
  EvO_R[1] = (FRotor_R_idx_1 - ElastoDyn->NacMass * EvU_R_idx_1) -
    ElastoDyn->YawBrMass * EvO_R[1];
  FB1_Hv[2] = (((((FB1_Hv[2] + FB2_Hv[2]) + FB3_Hv[2]) - I_pr_app) - I_yaw_app)
               - rZT_3) - FRotor_TFA2[2];
  EvO_R[2] = (FRotor_R_idx_2 - ElastoDyn->NacMass * EvU_R_idx_2) -
    ElastoDyn->YawBrMass * EvO_R[2];
  st.site = &el_emlrtRSI;
  d_coprod(&st, Twr->mT, EvF_R, XvT);
  st.site = &el_emlrtRSI;
  c_trapz(Twr->TwrSec, XvT, dEvQ_yaw);
  r = _mm_loadu_pd(&EvO_R[0]);
  r1 = _mm_loadu_pd(&dEvQ_yaw[0]);
  _mm_storeu_pd(&dEvQ_yaw[0], _mm_sub_pd(r, r1));
  r = _mm_loadu_pd(&EvU_P[0]);
  r1 = _mm_loadu_pd(&FRotor_P[0]);
  r2 = _mm_loadu_pd(&EvO_P[0]);
  r18 = _mm_set1_pd(ElastoDyn->YawBrMass);
  _mm_storeu_pd(&EvO_P[0], _mm_sub_pd(_mm_sub_pd(r1, _mm_mul_pd(r46, r)),
    _mm_mul_pd(r18, r2)));
  dEvQ_yaw[2] = EvO_R[2] - dEvQ_yaw[2];
  EvO_P[2] = (FRotor_P[2] - ElastoDyn->NacMass * EvU_P[2]) -
    ElastoDyn->YawBrMass * EvO_P[2];
  st.site = &fl_emlrtRSI;
  d_coprod(&st, Twr->mT, EvF_P, XvT);
  st.site = &fl_emlrtRSI;
  c_trapz(Twr->TwrSec, XvT, EwB);
  r = _mm_loadu_pd(&EvO_P[0]);
  r1 = _mm_loadu_pd(&EwB[0]);
  _mm_storeu_pd(&EwB[0], _mm_sub_pd(r, r1));
  r = _mm_loadu_pd(&EvU_Y[0]);
  r1 = _mm_loadu_pd(&FRotor_Y[0]);
  r2 = _mm_loadu_pd(&EvO_Y[0]);
  _mm_storeu_pd(&EvO_Y[0], _mm_sub_pd(_mm_sub_pd(r1, _mm_mul_pd(r46, r)),
    _mm_mul_pd(r18, r2)));
  EwB[2] = EvO_P[2] - EwB[2];
  EvO_Y[2] = (FRotor_Y[2] - ElastoDyn->NacMass * EvU_Y[2]) -
    ElastoDyn->YawBrMass * EvO_Y[2];
  st.site = &gl_emlrtRSI;
  d_coprod(&st, Twr->mT, EvF_Y, XvT);
  st.site = &gl_emlrtRSI;
  c_trapz(Twr->TwrSec, XvT, XvO);
  r = _mm_loadu_pd(&EvO_Y[0]);
  r1 = _mm_loadu_pd(&XvO[0]);
  _mm_storeu_pd(&XvO[0], _mm_sub_pd(r, r1));
  r = _mm_loadu_pd(&EvO_TFA1[0]);
  r1 = _mm_loadu_pd(&EwL[0]);
  _mm_storeu_pd(&EvQ[0], _mm_sub_pd(r1, _mm_mul_pd(r18, r)));
  XvO[2] = EvO_Y[2] - XvO[2];
  EvQ[2] = EwL[2] - ElastoDyn->YawBrMass * EvO_TFA1[2];
  for (it = 0; it < 11; it++) {
    r = _mm_loadu_pd(&EvF_TFA1[3 * it]);
    I_pr_app = Twr->mT[it];
    _mm_storeu_pd(&FT_TFA1_tmp[3 * it], _mm_mul_pd(_mm_set1_pd(I_pr_app), r));
    n = 3 * it + 2;
    FT_TFA1_tmp[n] = I_pr_app * EvF_TFA1[n];
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }

  st.site = &hl_emlrtRSI;
  c_trapz(Twr->TwrSec, FT_TFA1_tmp, MB2_B2F2);
  r = _mm_loadu_pd(&EvQ[0]);
  r1 = _mm_loadu_pd(&MB2_B2F2[0]);
  _mm_storeu_pd(&MB2_B2F2[0], _mm_sub_pd(r, r1));
  r = _mm_loadu_pd(&EvO_TSS1[0]);
  r1 = _mm_loadu_pd(&FO_TSS1[0]);
  _mm_storeu_pd(&EvQ_Y[0], _mm_sub_pd(r1, _mm_mul_pd(r18, r)));
  MB2_B2F2[2] = EvQ[2] - MB2_B2F2[2];
  EvQ_Y[2] = FO_TSS1[2] - ElastoDyn->YawBrMass * EvO_TSS1[2];
  for (it = 0; it < 11; it++) {
    r = _mm_loadu_pd(&EvF_TSS1[3 * it]);
    I_pr_app = Twr->mT[it];
    _mm_storeu_pd(&FT_TSS1_tmp[3 * it], _mm_mul_pd(_mm_set1_pd(I_pr_app), r));
    n = 3 * it + 2;
    FT_TSS1_tmp[n] = I_pr_app * EvF_TSS1[n];
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }

  st.site = &il_emlrtRSI;
  c_trapz(Twr->TwrSec, FT_TSS1_tmp, MB3_B3F1);
  r = _mm_loadu_pd(&EvQ_Y[0]);
  r1 = _mm_loadu_pd(&MB3_B3F1[0]);
  _mm_storeu_pd(&MB3_B3F1[0], _mm_sub_pd(r, r1));
  r = _mm_loadu_pd(&EvO_TFA2[0]);
  r1 = _mm_loadu_pd(&FO_TFA2[0]);
  _mm_storeu_pd(&EvQ_TFA1[0], _mm_sub_pd(r1, _mm_mul_pd(r18, r)));
  MB3_B3F1[2] = EvQ_Y[2] - MB3_B3F1[2];
  EvQ_TFA1[2] = FO_TFA2[2] - ElastoDyn->YawBrMass * EvO_TFA2[2];
  for (it = 0; it < 11; it++) {
    r = _mm_loadu_pd(&EvF_TFA2[3 * it]);
    I_pr_app = Twr->mT[it];
    _mm_storeu_pd(&FT_TFA2_tmp[3 * it], _mm_mul_pd(_mm_set1_pd(I_pr_app), r));
    n = 3 * it + 2;
    FT_TFA2_tmp[n] = I_pr_app * EvF_TFA2[n];
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }

  st.site = &jl_emlrtRSI;
  c_trapz(Twr->TwrSec, FT_TFA2_tmp, MB3_B3E1);
  r = _mm_loadu_pd(&EvQ_TFA1[0]);
  r1 = _mm_loadu_pd(&MB3_B3E1[0]);
  _mm_storeu_pd(&MB3_B3E1[0], _mm_sub_pd(r, r1));
  r = _mm_loadu_pd(&EvO_TSS2[0]);
  r1 = _mm_loadu_pd(&FO_TSS2[0]);
  _mm_storeu_pd(&EvQ_yaw[0], _mm_sub_pd(r1, _mm_mul_pd(r18, r)));
  MB3_B3E1[2] = EvQ_TFA1[2] - MB3_B3E1[2];
  EvQ_yaw[2] = FO_TSS2[2] - ElastoDyn->YawBrMass * EvO_TSS2[2];
  for (it = 0; it < 11; it++) {
    r = _mm_loadu_pd(&EvF_TSS2[3 * it]);
    I_pr_app = Twr->mT[it];
    _mm_storeu_pd(&FT_TSS2_tmp[3 * it], _mm_mul_pd(_mm_set1_pd(I_pr_app), r));
    n = 3 * it + 2;
    FT_TSS2_tmp[n] = I_pr_app * EvF_TSS2[n];
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }

  st.site = &kl_emlrtRSI;
  c_trapz(Twr->TwrSec, FT_TSS2_tmp, MB3_B3F2);
  r = _mm_loadu_pd(&EvQ_yaw[0]);
  r1 = _mm_loadu_pd(&MB3_B3F2[0]);
  _mm_storeu_pd(&MB3_B3F2[0], _mm_sub_pd(r, r1));
  MB3_B3F2[2] = EvQ_yaw[2] - MB3_B3F2[2];
  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Twr->nt;
  st.site = &ll_emlrtRSI;
  f_repmat(&st, dEvQ_TSS1, VzB1);
  c_n = 3 * VzB1->size[2];
  n = VzB1->size[0] * VzB1->size[1] * VzB1->size[2];
  VzB1->size[0] = 1;
  VzB1->size[1] = 3;
  emxEnsureCapacity_real_T(sp, VzB1, n, &jh_emlrtRTEI);
  VzB1_data = VzB1->data;
  n = (c_n / 2) << 1;
  b_n = n - 2;
  for (b_it = 0; b_it <= b_n; b_it += 2) {
    r = _mm_loadu_pd(&VzB1_data[b_it]);
    _mm_storeu_pd(&VzB1_data[b_it], _mm_mul_pd(_mm_set1_pd(9.80665), r));
  }

  for (b_it = n; b_it < c_n; b_it++) {
    VzB1_data[b_it] *= 9.80665;
  }

  if ((VzB1->size[2] != 11) && (VzB1->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(11, VzB1->size[2], &wi_emlrtECI, (emlrtConstCTX)
      sp);
  }

  if ((F_AeroT->size[2] != 11) && (F_AeroT->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(F_AeroT->size[2], 11, &xi_emlrtECI,
      (emlrtConstCTX)sp);
  }

  r = _mm_loadu_pd(&dEvO_R[0]);
  r1 = _mm_loadu_pd(&dEvO_P[0]);
  r2 = _mm_loadu_pd(&dEvO_Y[0]);
  r3 = _mm_loadu_pd(&dEvO_TFA1[0]);
  r4 = _mm_loadu_pd(&dEvO_TSS1[0]);
  r5 = _mm_loadu_pd(&dEvO_TFA2[0]);
  r17 = _mm_loadu_pd(&dEvO_TSS2[0]);
  r = _mm_add_pd(_mm_add_pd(_mm_add_pd(_mm_add_pd(_mm_add_pd(_mm_add_pd
    (_mm_add_pd(_mm_mul_pd(r, _mm_set1_pd(q_Nom[37])), _mm_mul_pd(r1,
    _mm_set1_pd(q_Nom[38]))), _mm_mul_pd(r2, _mm_set1_pd(q_Nom[39]))),
    _mm_mul_pd(r3, r10)), _mm_mul_pd(r4, r11)), _mm_mul_pd(r5, r12)), _mm_mul_pd
    (r17, r13)), _mm_loadu_pd(&FRotor_t_tmp_tmp[0]));
  _mm_storeu_pd(&dEvO_R[0], r);
  r1 = _mm_loadu_pd(&FO_t[0]);
  _mm_storeu_pd(&EvQ_TSS2[0], _mm_sub_pd(r1, _mm_mul_pd(r18, r)));
  I_pr_app = (((((dEvO_R[2] * q_Nom[37] + dEvO_P[2] * q_Nom[38]) + dEvO_Y[2] *
                 q_Nom[39]) + dEvO_TFA1[2] * q_Nom[40]) + dEvO_TSS1[2] * q_Nom
               [41]) + dEvO_TFA2[2] * q_Nom[42]) + dEvO_TSS2[2] * q_Nom[43];
  dEvO_R[2] = I_pr_app;
  EvQ_TSS2[2] = FO_t[2] - ElastoDyn->YawBrMass * I_pr_app;
  if (VzB1->size[2] == 11) {
    for (it = 0; it <= 30; it += 2) {
      r = _mm_loadu_pd(&dEvF[it]);
      r1 = _mm_loadu_pd(&VzB1_data[it]);
      _mm_storeu_pd(&XvT[it], _mm_add_pd(r, r1));
    }

    XvT[32] = dEvF[32] + VzB1_data[32];
  } else {
    e_plus(XvT, dEvF, VzB1);
  }

  for (it = 0; it < 11; it++) {
    r = _mm_loadu_pd(&XvT[3 * it]);
    I_pr_app = Twr->mT[it];
    _mm_storeu_pd(&out[3 * it], _mm_mul_pd(_mm_set1_pd(I_pr_app), r));
    n = 3 * it + 2;
    out[n] = I_pr_app * XvT[n];
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }

  if (F_AeroT->size[2] == 11) {
    for (it = 0; it <= 30; it += 2) {
      r = _mm_loadu_pd(&F_AeroT_data[it]);
      r1 = _mm_loadu_pd(&out[it]);
      _mm_storeu_pd(&out[it], _mm_sub_pd(r, r1));
    }

    out[32] = F_AeroT_data[32] - out[32];
    st.site = &ll_emlrtRSI;
    c_trapz(Twr->TwrSec, out, dEvQ_TFA2);
  } else {
    st.site = &ll_emlrtRSI;
    binary_expand_op_32(ll_emlrtRSI, Twr, F_AeroT, out, dEvQ_TFA2);
  }

  r = _mm_loadu_pd(&EvQ_TSS2[0]);
  r1 = _mm_loadu_pd(&dEvQ_TFA2[0]);
  _mm_storeu_pd(&dEvQ_TFA2[0], _mm_add_pd(r, r1));
  dEvQ_TFA2[2] += EvQ_TSS2[2];

  /*  Partial moments */
  /*  MT_Sg   = MO_Sg   + cross(rZO - rZT0, FO_Sg   - YawBrMass*EvO_Sg)   - trapz(TwrSec, cross(rZT - rZT0, mT.*EvF_Sg, 2), 3); */
  /*  MT_Sw   = MO_Sw   + cross(rZO - rZT0, FO_Sw   - YawBrMass*EvO_Sw)   - trapz(TwrSec, cross(rZT - rZT0, mT.*EvF_Sw, 2), 3); */
  /*  MT_Hv   = MO_Hv   + cross(rZO - rZT0, FO_Hv   - YawBrMass*EvO_Hv)   - trapz(TwrSec, cross(rZT - rZT0, mT.*EvF_Hv, 2), 3); */
  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Twr->nt;
  st.site = &ml_emlrtRSI;
  i_repmat(&st, &rZT[0], dEvQ_TSS1, r6);
  r7 = r6->data;
  if ((r6->size[2] != 11) && (r6->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(11, r6->size[2], &yi_emlrtECI, (emlrtConstCTX)sp);
  }

  r = _mm_loadu_pd(&rZO[0]);
  r1 = _mm_loadu_pd(&rZT[0]);
  _mm_storeu_pd(&rZO[0], _mm_sub_pd(r, r1));
  rZO[2] -= rZT[2];
  st.site = &ml_emlrtRSI;
  d_coprod(&st, Twr->mT, EvF_R, XvT);
  emxFree_real_T(sp, &EvF_R);
  if (r6->size[2] == 11) {
    for (it = 0; it <= 30; it += 2) {
      r = _mm_loadu_pd(&rZT[it]);
      r1 = _mm_loadu_pd(&r7[it]);
      _mm_storeu_pd(&b_rZT[it], _mm_sub_pd(r, r1));
    }

    b_rZT[32] = rZT[32] - r7[32];
    st.site = &ml_emlrtRSI;
    f_cross(b_rZT, XvT, b_out);
  } else {
    st.site = &ml_emlrtRSI;
    binary_expand_op_25(ml_emlrtRSI, rZT, r6, XvT, b_out);
  }

  st.site = &ml_emlrtRSI;
  c_trapz(Twr->TwrSec, b_out, FRotor_TFA2);
  dEvQ_TSS2[0] = rQS1[1] * FB1_R[2] - FB1_R[1] * rQS1[2];
  dEvQ_TSS2[1] = FB1_R[0] * rQS1[2] - rQS1[0] * FB1_R[2];
  dEvQ_TSS2[2] = rQS1[0] * FB1_R[1] - FB1_R[0] * rQS1[1];
  dEvQ_R[0] = rQS2[1] * FB2_R[2] - FB2_R[1] * rQS2[2];
  dEvQ_R[1] = FB2_R[0] * rQS2[2] - rQS2[0] * FB2_R[2];
  dEvQ_R[2] = rQS2[0] * FB2_R[1] - FB2_R[0] * rQS2[1];
  dEvQ_P[0] = rQS3[1] * FB3_R[2] - FB3_R[1] * rQS3[2];
  dEvQ_P[1] = FB3_R[0] * rQS3[2] - rQS3[0] * FB3_R[2];
  dEvQ_P[2] = rQS3[0] * FB3_R[1] - FB3_R[0] * rQS3[1];
  dEvQ_Y[0] = ElastoDyn->HubMass * (rQC_idx_1 * EvC_R_idx_2 - EvC_R_idx_1 *
    rQC_idx_2);
  dEvQ_Y[1] = ElastoDyn->HubMass * (EvC_R_idx_0 * rQC_idx_2 - rQC_idx_0 *
    EvC_R_idx_2);
  dEvQ_Y[2] = ElastoDyn->HubMass * (rQC_idx_0 * EvC_R_idx_1 - EvC_R_idx_0 *
    rQC_idx_1);
  memset(&b_I_H[0], 0, 3U * sizeof(real_T));
  b_EwX[0] = rOQ[1] * FRotor_R_idx_2 - FRotor_R_idx_1 * rOQ[2];
  b_EwX[1] = FRotor_R_idx_0 * rOQ[2] - rOQ[0] * FRotor_R_idx_2;
  b_EwX[2] = rOQ[0] * FRotor_R_idx_1 - FRotor_R_idx_0 * rOQ[1];
  memset(&MB3_DrTr[0], 0, 3U * sizeof(real_T));
  dEvQ_TSS1[0] = ElastoDyn->NacMass * (rOU_idx_1 * EvU_R_idx_2 - EvU_R_idx_1 *
    rOU_idx_2);
  dEvQ_TSS1[1] = ElastoDyn->NacMass * (EvU_R_idx_0 * rOU_idx_2 - rOU_idx_0 *
    EvU_R_idx_2);
  dEvQ_TSS1[2] = ElastoDyn->NacMass * (rOU_idx_0 * EvU_R_idx_1 - EvU_R_idx_0 *
    rOU_idx_1);
  memset(&b_dEvQ_TSS1[0], 0, 3U * sizeof(real_T));
  r = _mm_loadu_pd(&I_H[0]);
  r1 = _mm_loadu_pd(&b_I_H[0]);
  r10 = _mm_set1_pd(1.0);
  _mm_storeu_pd(&b_I_H[0], _mm_add_pd(r1, _mm_mul_pd(r, r10)));
  r = _mm_loadu_pd(&I_G[0]);
  r1 = _mm_loadu_pd(&MB3_DrTr[0]);
  _mm_storeu_pd(&MB3_DrTr[0], _mm_add_pd(r1, _mm_mul_pd(r, r10)));
  r = _mm_loadu_pd(&I_N[0]);
  r1 = _mm_loadu_pd(&b_dEvQ_TSS1[0]);
  _mm_storeu_pd(&b_dEvQ_TSS1[0], _mm_add_pd(r1, _mm_mul_pd(r, r10)));
  b_I_H[2] += I_H[2];
  MB3_DrTr[2] += I_G[2];
  b_dEvQ_TSS1[2] += I_N[2];
  r = _mm_loadu_pd(&I_H[3]);
  r1 = _mm_loadu_pd(&b_I_H[0]);
  r11 = _mm_set1_pd(0.0);
  _mm_storeu_pd(&b_I_H[0], _mm_add_pd(r1, _mm_mul_pd(r, r11)));
  r = _mm_loadu_pd(&I_G[3]);
  r1 = _mm_loadu_pd(&MB3_DrTr[0]);
  _mm_storeu_pd(&MB3_DrTr[0], _mm_add_pd(r1, _mm_mul_pd(r, r11)));
  r = _mm_loadu_pd(&I_N[3]);
  r1 = _mm_loadu_pd(&b_dEvQ_TSS1[0]);
  _mm_storeu_pd(&b_dEvQ_TSS1[0], _mm_add_pd(r1, _mm_mul_pd(r, r11)));
  rQS1_2 = I_H[5] * 0.0;
  b_I_H[2] += rQS1_2;
  FRotor_R_idx_0 = I_G[5] * 0.0;
  MB3_DrTr[2] += FRotor_R_idx_0;
  FRotor_R_idx_1 = I_N[5] * 0.0;
  b_dEvQ_TSS1[2] += FRotor_R_idx_1;
  r = _mm_loadu_pd(&I_H[6]);
  r1 = _mm_loadu_pd(&b_I_H[0]);
  _mm_storeu_pd(&b_I_H[0], _mm_add_pd(r1, _mm_mul_pd(r, r11)));
  r = _mm_loadu_pd(&I_G[6]);
  r1 = _mm_loadu_pd(&MB3_DrTr[0]);
  _mm_storeu_pd(&MB3_DrTr[0], _mm_add_pd(r1, _mm_mul_pd(r, r11)));
  r = _mm_loadu_pd(&I_N[6]);
  r1 = _mm_loadu_pd(&b_dEvQ_TSS1[0]);
  _mm_storeu_pd(&b_dEvQ_TSS1[0], _mm_add_pd(r1, _mm_mul_pd(r, r11)));
  FRotor_R_idx_2 = I_H[8] * 0.0;
  b_I_H[2] += FRotor_R_idx_2;
  b = I_G[8] * 0.0;
  MB3_DrTr[2] += b;
  b_b = I_N[8] * 0.0;
  b_dEvQ_TSS1[2] += b_b;
  b_I_G[0] = rZO[1] * EvO_R[2] - EvO_R[1] * rZO[2];
  b_I_G[1] = EvO_R[0] * rZO[2] - rZO[0] * EvO_R[2];
  b_I_G[2] = rZO[0] * EvO_R[1] - EvO_R[0] * rZO[1];
  r = _mm_loadu_pd(&MB1_R[0]);
  r1 = _mm_loadu_pd(&MB2_R[0]);
  r2 = _mm_loadu_pd(&MB3_R[0]);
  r3 = _mm_loadu_pd(&dEvQ_TSS2[0]);
  r4 = _mm_loadu_pd(&dEvQ_R[0]);
  r5 = _mm_loadu_pd(&dEvQ_P[0]);
  r17 = _mm_loadu_pd(&dEvQ_Y[0]);
  r18 = _mm_loadu_pd(&b_I_H[0]);
  r19 = _mm_loadu_pd(&b_EwX[0]);
  r20 = _mm_loadu_pd(&MB3_DrTr[0]);
  r47 = _mm_loadu_pd(&dEvQ_TSS1[0]);
  r48 = _mm_loadu_pd(&b_dEvQ_TSS1[0]);
  r49 = _mm_loadu_pd(&b_I_G[0]);
  r46 = _mm_loadu_pd(&FRotor_TFA2[0]);
  _mm_storeu_pd(&dEvQ_TSS2[0], _mm_sub_pd(_mm_add_pd(_mm_sub_pd(_mm_sub_pd
    (_mm_sub_pd(_mm_add_pd(_mm_sub_pd(_mm_sub_pd(_mm_add_pd(_mm_add_pd
    (_mm_add_pd(_mm_add_pd(_mm_add_pd(r, r1), r2), r3), r4), r5), r17), r18),
    r19), r20), r47), r48), r49), r46));
  dEvQ_TSS2[2] = ((((((((((((MB1_R[2] + MB2_R[2]) + MB3_R[2]) + dEvQ_TSS2[2]) +
    dEvQ_R[2]) + dEvQ_P[2]) - dEvQ_Y[2]) - b_I_H[2]) + b_EwX[2]) - MB3_DrTr[2])
                    - dEvQ_TSS1[2]) - b_dEvQ_TSS1[2]) + b_I_G[2]) - FRotor_TFA2
    [2];
  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Twr->nt;
  st.site = &nl_emlrtRSI;
  i_repmat(&st, &rZT[0], dEvQ_TSS1, r6);
  r7 = r6->data;
  if ((r6->size[2] != 11) && (r6->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(11, r6->size[2], &aj_emlrtECI, (emlrtConstCTX)sp);
  }

  st.site = &nl_emlrtRSI;
  d_coprod(&st, Twr->mT, EvF_P, XvT);
  emxFree_real_T(sp, &EvF_P);
  if (r6->size[2] == 11) {
    for (it = 0; it <= 30; it += 2) {
      r = _mm_loadu_pd(&rZT[it]);
      r1 = _mm_loadu_pd(&r7[it]);
      _mm_storeu_pd(&b_rZT[it], _mm_sub_pd(r, r1));
    }

    b_rZT[32] = rZT[32] - r7[32];
    st.site = &nl_emlrtRSI;
    f_cross(b_rZT, XvT, b_out);
  } else {
    st.site = &nl_emlrtRSI;
    binary_expand_op_25(nl_emlrtRSI, rZT, r6, XvT, b_out);
  }

  st.site = &nl_emlrtRSI;
  c_trapz(Twr->TwrSec, b_out, FRotor_TFA2);
  EvQ_TFA2[0] = rQS1[1] * FB1_P[2] - FB1_P[1] * rQS1[2];
  EvQ_TFA2[1] = FB1_P[0] * rQS1[2] - rQS1[0] * FB1_P[2];
  EvQ_TFA2[2] = rQS1[0] * FB1_P[1] - FB1_P[0] * rQS1[1];
  dEvQ_R[0] = rQS2[1] * FB2_P[2] - FB2_P[1] * rQS2[2];
  dEvQ_R[1] = FB2_P[0] * rQS2[2] - rQS2[0] * FB2_P[2];
  dEvQ_R[2] = rQS2[0] * FB2_P[1] - FB2_P[0] * rQS2[1];
  dEvQ_P[0] = rQS3[1] * FB3_P[2] - FB3_P[1] * rQS3[2];
  dEvQ_P[1] = FB3_P[0] * rQS3[2] - rQS3[0] * FB3_P[2];
  dEvQ_P[2] = rQS3[0] * FB3_P[1] - FB3_P[0] * rQS3[1];
  dEvQ_Y[0] = ElastoDyn->HubMass * (rQC_idx_1 * EvC_P_idx_2 - EvC_P_idx_1 *
    rQC_idx_2);
  dEvQ_Y[1] = ElastoDyn->HubMass * (EvC_P_idx_0 * rQC_idx_2 - rQC_idx_0 *
    EvC_P_idx_2);
  dEvQ_Y[2] = ElastoDyn->HubMass * (rQC_idx_0 * EvC_P_idx_1 - EvC_P_idx_0 *
    rQC_idx_1);
  memset(&b_I_H[0], 0, 3U * sizeof(real_T));
  b_EwX[0] = rOQ[1] * FRotor_P[2] - FRotor_P[1] * rOQ[2];
  b_EwX[1] = FRotor_P[0] * rOQ[2] - rOQ[0] * FRotor_P[2];
  b_EwX[2] = rOQ[0] * FRotor_P[1] - FRotor_P[0] * rOQ[1];
  memset(&MB3_DrTr[0], 0, 3U * sizeof(real_T));
  dEvQ_TSS1[0] = ElastoDyn->NacMass * (rOU_idx_1 * EvU_P[2] - EvU_P[1] *
    rOU_idx_2);
  dEvQ_TSS1[1] = ElastoDyn->NacMass * (EvU_P[0] * rOU_idx_2 - rOU_idx_0 * EvU_P
    [2]);
  dEvQ_TSS1[2] = ElastoDyn->NacMass * (rOU_idx_0 * EvU_P[1] - EvU_P[0] *
    rOU_idx_1);
  memset(&b_dEvQ_TSS1[0], 0, 3U * sizeof(real_T));
  r = _mm_loadu_pd(&I_H[0]);
  r1 = _mm_loadu_pd(&b_I_H[0]);
  _mm_storeu_pd(&b_I_H[0], _mm_add_pd(r1, _mm_mul_pd(r, r11)));
  r = _mm_loadu_pd(&I_G[0]);
  r1 = _mm_loadu_pd(&MB3_DrTr[0]);
  _mm_storeu_pd(&MB3_DrTr[0], _mm_add_pd(r1, _mm_mul_pd(r, r11)));
  r = _mm_loadu_pd(&I_N[0]);
  r1 = _mm_loadu_pd(&b_dEvQ_TSS1[0]);
  _mm_storeu_pd(&b_dEvQ_TSS1[0], _mm_add_pd(r1, _mm_mul_pd(r, r11)));
  I_pr_app = I_H[2] * 0.0;
  b_I_H[2] += I_pr_app;
  I_yaw_app = I_G[2] * 0.0;
  MB3_DrTr[2] += I_yaw_app;
  rZT_3 = I_N[2] * 0.0;
  b_dEvQ_TSS1[2] += rZT_3;
  r = _mm_loadu_pd(&I_H[3]);
  r1 = _mm_loadu_pd(&b_I_H[0]);
  _mm_storeu_pd(&b_I_H[0], _mm_add_pd(r1, _mm_mul_pd(r, r11)));
  r = _mm_loadu_pd(&I_G[3]);
  r1 = _mm_loadu_pd(&MB3_DrTr[0]);
  _mm_storeu_pd(&MB3_DrTr[0], _mm_add_pd(r1, _mm_mul_pd(r, r11)));
  r = _mm_loadu_pd(&I_N[3]);
  r1 = _mm_loadu_pd(&b_dEvQ_TSS1[0]);
  _mm_storeu_pd(&b_dEvQ_TSS1[0], _mm_add_pd(r1, _mm_mul_pd(r, r11)));
  b_I_H[2] += rQS1_2;
  MB3_DrTr[2] += FRotor_R_idx_0;
  b_dEvQ_TSS1[2] += FRotor_R_idx_1;
  r = _mm_loadu_pd(&I_H[6]);
  r1 = _mm_loadu_pd(&b_I_H[0]);
  _mm_storeu_pd(&b_I_H[0], _mm_add_pd(r1, _mm_mul_pd(r, r45)));
  r = _mm_loadu_pd(&I_G[6]);
  r1 = _mm_loadu_pd(&MB3_DrTr[0]);
  _mm_storeu_pd(&MB3_DrTr[0], _mm_add_pd(r1, _mm_mul_pd(r, r45)));
  r = _mm_loadu_pd(&I_N[6]);
  r1 = _mm_loadu_pd(&b_dEvQ_TSS1[0]);
  _mm_storeu_pd(&b_dEvQ_TSS1[0], _mm_add_pd(r1, _mm_mul_pd(r, r45)));
  b_I_H[2] -= I_H[8];
  MB3_DrTr[2] -= I_G[8];
  b_dEvQ_TSS1[2] -= I_N[8];
  b_I_G[0] = rZO[1] * EvO_P[2] - EvO_P[1] * rZO[2];
  b_I_G[1] = EvO_P[0] * rZO[2] - rZO[0] * EvO_P[2];
  b_I_G[2] = rZO[0] * EvO_P[1] - EvO_P[0] * rZO[1];
  r = _mm_loadu_pd(&MB1_P[0]);
  r1 = _mm_loadu_pd(&MB2_P[0]);
  r2 = _mm_loadu_pd(&MB3_P[0]);
  r3 = _mm_loadu_pd(&EvQ_TFA2[0]);
  r4 = _mm_loadu_pd(&dEvQ_R[0]);
  r5 = _mm_loadu_pd(&dEvQ_P[0]);
  r17 = _mm_loadu_pd(&dEvQ_Y[0]);
  r18 = _mm_loadu_pd(&b_I_H[0]);
  r19 = _mm_loadu_pd(&b_EwX[0]);
  r20 = _mm_loadu_pd(&MB3_DrTr[0]);
  r47 = _mm_loadu_pd(&dEvQ_TSS1[0]);
  r48 = _mm_loadu_pd(&b_dEvQ_TSS1[0]);
  r49 = _mm_loadu_pd(&b_I_G[0]);
  r46 = _mm_loadu_pd(&FRotor_TFA2[0]);
  _mm_storeu_pd(&EvQ_TFA2[0], _mm_sub_pd(_mm_add_pd(_mm_sub_pd(_mm_sub_pd
    (_mm_sub_pd(_mm_add_pd(_mm_sub_pd(_mm_sub_pd(_mm_add_pd(_mm_add_pd
    (_mm_add_pd(_mm_add_pd(_mm_add_pd(r, r1), r2), r3), r4), r5), r17), r18),
    r19), r20), r47), r48), r49), r46));
  EvQ_TFA2[2] = ((((((((((((MB1_P[2] + MB2_P[2]) + MB3_P[2]) + EvQ_TFA2[2]) +
    dEvQ_R[2]) + dEvQ_P[2]) - dEvQ_Y[2]) - b_I_H[2]) + b_EwX[2]) - MB3_DrTr[2])
                   - dEvQ_TSS1[2]) - b_dEvQ_TSS1[2]) + b_I_G[2]) - FRotor_TFA2[2];
  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Twr->nt;
  st.site = &ol_emlrtRSI;
  i_repmat(&st, &rZT[0], dEvQ_TSS1, r6);
  r7 = r6->data;
  if ((r6->size[2] != 11) && (r6->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(11, r6->size[2], &bj_emlrtECI, (emlrtConstCTX)sp);
  }

  st.site = &ol_emlrtRSI;
  d_coprod(&st, Twr->mT, EvF_Y, XvT);
  emxFree_real_T(sp, &EvF_Y);
  if (r6->size[2] == 11) {
    for (it = 0; it <= 30; it += 2) {
      r = _mm_loadu_pd(&rZT[it]);
      r1 = _mm_loadu_pd(&r7[it]);
      _mm_storeu_pd(&b_rZT[it], _mm_sub_pd(r, r1));
    }

    b_rZT[32] = rZT[32] - r7[32];
    st.site = &ol_emlrtRSI;
    f_cross(b_rZT, XvT, b_out);
  } else {
    st.site = &ol_emlrtRSI;
    binary_expand_op_25(ol_emlrtRSI, rZT, r6, XvT, b_out);
  }

  st.site = &ol_emlrtRSI;
  c_trapz(Twr->TwrSec, b_out, FRotor_TFA2);
  EvQ_TSS1[0] = rQS1[1] * FB1_Y[2] - FB1_Y[1] * rQS1[2];
  EvQ_TSS1[1] = FB1_Y[0] * rQS1[2] - rQS1[0] * FB1_Y[2];
  EvQ_TSS1[2] = rQS1[0] * FB1_Y[1] - FB1_Y[0] * rQS1[1];
  dEvQ_R[0] = rQS2[1] * FB2_Y[2] - FB2_Y[1] * rQS2[2];
  dEvQ_R[1] = FB2_Y[0] * rQS2[2] - rQS2[0] * FB2_Y[2];
  dEvQ_R[2] = rQS2[0] * FB2_Y[1] - FB2_Y[0] * rQS2[1];
  dEvQ_P[0] = rQS3[1] * FB3_Y[2] - FB3_Y[1] * rQS3[2];
  dEvQ_P[1] = FB3_Y[0] * rQS3[2] - rQS3[0] * FB3_Y[2];
  dEvQ_P[2] = rQS3[0] * FB3_Y[1] - FB3_Y[0] * rQS3[1];
  dEvQ_Y[0] = ElastoDyn->HubMass * (rQC_idx_1 * EvC_Y_idx_2 - EvC_Y_idx_1 *
    rQC_idx_2);
  dEvQ_Y[1] = ElastoDyn->HubMass * (EvC_Y_idx_0 * rQC_idx_2 - rQC_idx_0 *
    EvC_Y_idx_2);
  dEvQ_Y[2] = ElastoDyn->HubMass * (rQC_idx_0 * EvC_Y_idx_1 - EvC_Y_idx_0 *
    rQC_idx_1);
  memset(&b_I_H[0], 0, 3U * sizeof(real_T));
  b_EwX[0] = rOQ[1] * FRotor_Y[2] - FRotor_Y[1] * rOQ[2];
  b_EwX[1] = FRotor_Y[0] * rOQ[2] - rOQ[0] * FRotor_Y[2];
  b_EwX[2] = rOQ[0] * FRotor_Y[1] - FRotor_Y[0] * rOQ[1];
  memset(&MB3_DrTr[0], 0, 3U * sizeof(real_T));
  dEvQ_TSS1[0] = ElastoDyn->NacMass * (rOU_idx_1 * EvU_Y[2] - EvU_Y[1] *
    rOU_idx_2);
  dEvQ_TSS1[1] = ElastoDyn->NacMass * (EvU_Y[0] * rOU_idx_2 - rOU_idx_0 * EvU_Y
    [2]);
  dEvQ_TSS1[2] = ElastoDyn->NacMass * (rOU_idx_0 * EvU_Y[1] - EvU_Y[0] *
    rOU_idx_1);
  memset(&b_dEvQ_TSS1[0], 0, 3U * sizeof(real_T));
  r = _mm_loadu_pd(&I_H[0]);
  r1 = _mm_loadu_pd(&b_I_H[0]);
  _mm_storeu_pd(&b_I_H[0], _mm_add_pd(r1, _mm_mul_pd(r, r11)));
  r = _mm_loadu_pd(&I_G[0]);
  r1 = _mm_loadu_pd(&MB3_DrTr[0]);
  _mm_storeu_pd(&MB3_DrTr[0], _mm_add_pd(r1, _mm_mul_pd(r, r11)));
  r = _mm_loadu_pd(&I_N[0]);
  r1 = _mm_loadu_pd(&b_dEvQ_TSS1[0]);
  _mm_storeu_pd(&b_dEvQ_TSS1[0], _mm_add_pd(r1, _mm_mul_pd(r, r11)));
  b_I_H[2] += I_pr_app;
  MB3_DrTr[2] += I_yaw_app;
  b_dEvQ_TSS1[2] += rZT_3;
  r = _mm_loadu_pd(&I_H[3]);
  r1 = _mm_loadu_pd(&b_I_H[0]);
  _mm_storeu_pd(&b_I_H[0], _mm_add_pd(r1, _mm_mul_pd(r, r10)));
  r = _mm_loadu_pd(&I_G[3]);
  r1 = _mm_loadu_pd(&MB3_DrTr[0]);
  _mm_storeu_pd(&MB3_DrTr[0], _mm_add_pd(r1, _mm_mul_pd(r, r10)));
  r = _mm_loadu_pd(&I_N[3]);
  r1 = _mm_loadu_pd(&b_dEvQ_TSS1[0]);
  _mm_storeu_pd(&b_dEvQ_TSS1[0], _mm_add_pd(r1, _mm_mul_pd(r, r10)));
  b_I_H[2] += I_H[5];
  MB3_DrTr[2] += I_G[5];
  b_dEvQ_TSS1[2] += I_N[5];
  r = _mm_loadu_pd(&I_H[6]);
  r1 = _mm_loadu_pd(&b_I_H[0]);
  _mm_storeu_pd(&b_I_H[0], _mm_add_pd(r1, _mm_mul_pd(r, r11)));
  r = _mm_loadu_pd(&I_G[6]);
  r1 = _mm_loadu_pd(&MB3_DrTr[0]);
  _mm_storeu_pd(&MB3_DrTr[0], _mm_add_pd(r1, _mm_mul_pd(r, r11)));
  r = _mm_loadu_pd(&I_N[6]);
  r1 = _mm_loadu_pd(&b_dEvQ_TSS1[0]);
  _mm_storeu_pd(&b_dEvQ_TSS1[0], _mm_add_pd(r1, _mm_mul_pd(r, r11)));
  b_I_H[2] += FRotor_R_idx_2;
  MB3_DrTr[2] += b;
  b_dEvQ_TSS1[2] += b_b;
  b_I_G[0] = rZO[1] * EvO_Y[2] - EvO_Y[1] * rZO[2];
  b_I_G[1] = EvO_Y[0] * rZO[2] - rZO[0] * EvO_Y[2];
  b_I_G[2] = rZO[0] * EvO_Y[1] - EvO_Y[0] * rZO[1];
  r = _mm_loadu_pd(&MB1_Y[0]);
  r1 = _mm_loadu_pd(&MB2_Y[0]);
  r2 = _mm_loadu_pd(&MB3_Y[0]);
  r3 = _mm_loadu_pd(&EvQ_TSS1[0]);
  r4 = _mm_loadu_pd(&dEvQ_R[0]);
  r5 = _mm_loadu_pd(&dEvQ_P[0]);
  r17 = _mm_loadu_pd(&dEvQ_Y[0]);
  r18 = _mm_loadu_pd(&b_I_H[0]);
  r19 = _mm_loadu_pd(&b_EwX[0]);
  r20 = _mm_loadu_pd(&MB3_DrTr[0]);
  r47 = _mm_loadu_pd(&dEvQ_TSS1[0]);
  r48 = _mm_loadu_pd(&b_dEvQ_TSS1[0]);
  r49 = _mm_loadu_pd(&b_I_G[0]);
  r46 = _mm_loadu_pd(&FRotor_TFA2[0]);
  _mm_storeu_pd(&EvQ_TSS1[0], _mm_sub_pd(_mm_add_pd(_mm_sub_pd(_mm_sub_pd
    (_mm_sub_pd(_mm_add_pd(_mm_sub_pd(_mm_sub_pd(_mm_add_pd(_mm_add_pd
    (_mm_add_pd(_mm_add_pd(_mm_add_pd(r, r1), r2), r3), r4), r5), r17), r18),
    r19), r20), r47), r48), r49), r46));
  EvQ_TSS1[2] = ((((((((((((MB1_Y[2] + MB2_Y[2]) + MB3_Y[2]) + EvQ_TSS1[2]) +
    dEvQ_R[2]) + dEvQ_P[2]) - dEvQ_Y[2]) - b_I_H[2]) + b_EwX[2]) - MB3_DrTr[2])
                   - dEvQ_TSS1[2]) - b_dEvQ_TSS1[2]) + b_I_G[2]) - FRotor_TFA2[2];
  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Twr->nt;
  st.site = &pl_emlrtRSI;
  i_repmat(&st, &rZT[0], dEvQ_TSS1, r6);
  r7 = r6->data;
  if ((r6->size[2] != 11) && (r6->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(11, r6->size[2], &cj_emlrtECI, (emlrtConstCTX)sp);
  }

  if (r6->size[2] == 11) {
    for (it = 0; it <= 30; it += 2) {
      r = _mm_loadu_pd(&rZT[it]);
      r1 = _mm_loadu_pd(&r7[it]);
      _mm_storeu_pd(&b_rZT[it], _mm_sub_pd(r, r1));
    }

    b_rZT[32] = rZT[32] - r7[32];
    st.site = &pl_emlrtRSI;
    f_cross(b_rZT, FT_TFA1_tmp, XvT);
  } else {
    st.site = &pl_emlrtRSI;
    binary_expand_op_25(pl_emlrtRSI, rZT, r6, FT_TFA1_tmp, XvT);
  }

  st.site = &pl_emlrtRSI;
  c_trapz(Twr->TwrSec, XvT, FRotor_TFA2);
  EvZ[0] = (dEwB_TFA1[0] + (rZO[1] * EvQ[2] - EvQ[1] * rZO[2])) - FRotor_TFA2[0];
  EvZ[1] = (dEwB_TFA1[1] + (EvQ[0] * rZO[2] - rZO[0] * EvQ[2])) - FRotor_TFA2[1];
  EvZ[2] = (dEwB_TFA1[2] + (rZO[0] * EvQ[1] - EvQ[0] * rZO[1])) - FRotor_TFA2[2];
  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Twr->nt;
  st.site = &ql_emlrtRSI;
  i_repmat(&st, &rZT[0], dEvQ_TSS1, r6);
  r7 = r6->data;
  if ((r6->size[2] != 11) && (r6->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(11, r6->size[2], &dj_emlrtECI, (emlrtConstCTX)sp);
  }

  if (r6->size[2] == 11) {
    for (it = 0; it <= 30; it += 2) {
      r = _mm_loadu_pd(&rZT[it]);
      r1 = _mm_loadu_pd(&r7[it]);
      _mm_storeu_pd(&b_rZT[it], _mm_sub_pd(r, r1));
    }

    b_rZT[32] = rZT[32] - r7[32];
    st.site = &ql_emlrtRSI;
    f_cross(b_rZT, FT_TSS1_tmp, XvT);
  } else {
    st.site = &ql_emlrtRSI;
    binary_expand_op_25(ql_emlrtRSI, rZT, r6, FT_TSS1_tmp, XvT);
  }

  st.site = &ql_emlrtRSI;
  c_trapz(Twr->TwrSec, XvT, FRotor_TFA2);
  EvQ[0] = (dEwL_GeAz[0] + (rZO[1] * EvQ_Y[2] - EvQ_Y[1] * rZO[2])) -
    FRotor_TFA2[0];
  EvQ[1] = (dEwL_GeAz[1] + (EvQ_Y[0] * rZO[2] - rZO[0] * EvQ_Y[2])) -
    FRotor_TFA2[1];
  EvQ[2] = (dEwL_GeAz[2] + (rZO[0] * EvQ_Y[1] - EvQ_Y[0] * rZO[1])) -
    FRotor_TFA2[2];
  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Twr->nt;
  st.site = &rl_emlrtRSI;
  i_repmat(&st, &rZT[0], dEvQ_TSS1, r6);
  r7 = r6->data;
  if ((r6->size[2] != 11) && (r6->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(11, r6->size[2], &ej_emlrtECI, (emlrtConstCTX)sp);
  }

  if (r6->size[2] == 11) {
    for (it = 0; it <= 30; it += 2) {
      r = _mm_loadu_pd(&rZT[it]);
      r1 = _mm_loadu_pd(&r7[it]);
      _mm_storeu_pd(&b_rZT[it], _mm_sub_pd(r, r1));
    }

    b_rZT[32] = rZT[32] - r7[32];
    st.site = &rl_emlrtRSI;
    f_cross(b_rZT, FT_TFA2_tmp, XvT);
  } else {
    st.site = &rl_emlrtRSI;
    binary_expand_op_25(rl_emlrtRSI, rZT, r6, FT_TFA2_tmp, XvT);
  }

  st.site = &rl_emlrtRSI;
  c_trapz(Twr->TwrSec, XvT, FRotor_TFA2);
  EvQ_Y[0] = (FRotor_TSS1[0] + (rZO[1] * EvQ_TFA1[2] - EvQ_TFA1[1] * rZO[2])) -
    FRotor_TFA2[0];
  EvQ_Y[1] = (FRotor_TSS1[1] + (EvQ_TFA1[0] * rZO[2] - rZO[0] * EvQ_TFA1[2])) -
    FRotor_TFA2[1];
  EvQ_Y[2] = (FRotor_TSS1[2] + (rZO[0] * EvQ_TFA1[1] - EvQ_TFA1[0] * rZO[1])) -
    FRotor_TFA2[2];
  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Twr->nt;
  st.site = &sl_emlrtRSI;
  i_repmat(&st, &rZT[0], dEvQ_TSS1, r6);
  r7 = r6->data;
  if ((r6->size[2] != 11) && (r6->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(11, r6->size[2], &fj_emlrtECI, (emlrtConstCTX)sp);
  }

  if (r6->size[2] == 11) {
    for (it = 0; it <= 30; it += 2) {
      r = _mm_loadu_pd(&rZT[it]);
      r1 = _mm_loadu_pd(&r7[it]);
      _mm_storeu_pd(&b_rZT[it], _mm_sub_pd(r, r1));
    }

    b_rZT[32] = rZT[32] - r7[32];
    st.site = &sl_emlrtRSI;
    f_cross(b_rZT, FT_TSS2_tmp, XvT);
  } else {
    st.site = &sl_emlrtRSI;
    binary_expand_op_25(sl_emlrtRSI, rZT, r6, FT_TSS2_tmp, XvT);
  }

  st.site = &sl_emlrtRSI;
  c_trapz(Twr->TwrSec, XvT, FRotor_TFA2);
  EvQ_TFA1[0] = (MB3_TFA1[0] + (rZO[1] * EvQ_yaw[2] - EvQ_yaw[1] * rZO[2])) -
    FRotor_TFA2[0];
  EvQ_TFA1[1] = (MB3_TFA1[1] + (EvQ_yaw[0] * rZO[2] - rZO[0] * EvQ_yaw[2])) -
    FRotor_TFA2[1];
  EvQ_TFA1[2] = (MB3_TFA1[2] + (rZO[0] * EvQ_yaw[1] - EvQ_yaw[0] * rZO[1])) -
    FRotor_TFA2[2];
  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Twr->nt;
  st.site = &tl_emlrtRSI;
  i_repmat(&st, &rZT[0], dEvQ_TSS1, r6);
  r7 = r6->data;
  if ((r6->size[2] != 11) && (r6->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(11, r6->size[2], &gj_emlrtECI, (emlrtConstCTX)sp);
  }

  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Twr->nt;
  st.site = &tl_emlrtRSI;
  f_repmat(&st, dEvQ_TSS1, VzB1);
  c_n = 3 * VzB1->size[2];
  n = VzB1->size[0] * VzB1->size[1] * VzB1->size[2];
  VzB1->size[0] = 1;
  VzB1->size[1] = 3;
  emxEnsureCapacity_real_T(sp, VzB1, n, &kh_emlrtRTEI);
  VzB1_data = VzB1->data;
  n = (c_n / 2) << 1;
  b_n = n - 2;
  for (b_it = 0; b_it <= b_n; b_it += 2) {
    r = _mm_loadu_pd(&VzB1_data[b_it]);
    _mm_storeu_pd(&VzB1_data[b_it], _mm_mul_pd(_mm_set1_pd(9.80665), r));
  }

  for (b_it = n; b_it < c_n; b_it++) {
    VzB1_data[b_it] *= 9.80665;
  }

  if ((VzB1->size[2] != 11) && (VzB1->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(11, VzB1->size[2], &hj_emlrtECI, (emlrtConstCTX)
      sp);
  }

  if ((F_AeroT->size[2] != 11) && (F_AeroT->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(F_AeroT->size[2], 11, &ij_emlrtECI,
      (emlrtConstCTX)sp);
  }

  if (VzB1->size[2] == 11) {
    for (it = 0; it <= 30; it += 2) {
      r = _mm_loadu_pd(&dEvF[it]);
      r1 = _mm_loadu_pd(&VzB1_data[it]);
      _mm_storeu_pd(&XvT[it], _mm_add_pd(r, r1));
    }

    XvT[32] = dEvF[32] + VzB1_data[32];
  } else {
    e_plus(XvT, dEvF, VzB1);
  }

  for (it = 0; it < 11; it++) {
    r = _mm_loadu_pd(&XvT[3 * it]);
    I_pr_app = Twr->mT[it];
    _mm_storeu_pd(&out[3 * it], _mm_mul_pd(_mm_set1_pd(I_pr_app), r));
    n = 3 * it + 2;
    out[n] = I_pr_app * XvT[n];
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }

  if ((r6->size[2] == 11) && (F_AeroT->size[2] == 11)) {
    for (it = 0; it <= 30; it += 2) {
      r = _mm_loadu_pd(&rZT[it]);
      r1 = _mm_loadu_pd(&r7[it]);
      _mm_storeu_pd(&b_rZT[it], _mm_sub_pd(r, r1));
    }

    b_rZT[32] = rZT[32] - r7[32];
    for (it = 0; it <= 30; it += 2) {
      r = _mm_loadu_pd(&F_AeroT_data[it]);
      r1 = _mm_loadu_pd(&out[it]);
      _mm_storeu_pd(&out[it], _mm_sub_pd(r, r1));
    }

    out[32] = F_AeroT_data[32] - out[32];
    st.site = &tl_emlrtRSI;
    f_cross(b_rZT, out, XvT);
  } else {
    st.site = &tl_emlrtRSI;
    binary_expand_op_24(tl_emlrtRSI, rZT, r6, F_AeroT, out, XvT);
  }

  st.site = &tl_emlrtRSI;
  c_trapz(Twr->TwrSec, XvT, FRotor_TFA2);
  v_c_tip_Z = rZO[1] * EvQ_TSS2[2] - EvQ_TSS2[1] * rZO[2];
  ak_tip_Z = EvQ_TSS2[0] * rZO[2] - rZO[0] * EvQ_TSS2[2];
  g_proj_X = rZO[0] * EvQ_TSS2[1] - EvQ_TSS2[0] * rZO[1];

  /*  Partial forces and moments at platform CM */
  /*  Partial forces */
  rQS1_2 = j_a_tmp * 0.0;
  I_pr_app = 0.0 * v_r_tip_X;
  FRotor_R_idx_0 = i_a_tmp * 0.0;
  I_yaw_app = -0.0 * v_r_tip_X;
  rZT_3 = (ff_HydroStat[0] + f_Morison[0]) + mooring_load[0];
  FRotor_R_idx_1 = (ff_HydroStat[1] + f_Morison[1]) + mooring_load[1];
  FRotor_R_idx_2 = (ff_HydroStat[2] + f_Morison[2]) + mooring_load[2];
  g_proj_Y = mX * 0.0;
  FB1_Sw[0] -= g_proj_Y;
  FB1_Hv[0] -= g_proj_Y;
  dEvQ_R[0] = dEvQ_yaw[0] - mX * EvY_R_idx_0;
  dEvQ_P[0] = EwB[0] - mX * EvY_P_idx_0;
  dEvQ_Y[0] = XvO[0] - mX * EvY_Y_idx_0;
  g_proj_Z = ((I_pr_app - rQS1_2) * q_Nom[37] + (I_yaw_app - (-j_a_tmp)) *
              q_Nom[38]) + (v_r_tip_X - rQS1_2) * q_Nom[39];
  dEvQ_TFA1[0] = g_proj_Z;
  b = FRotor_R_idx_1 * 0.0;
  b_b = FRotor_R_idx_2 * 0.0;
  MB2_B2E1[0] = (dEvQ_TFA2[0] + ((rZT_3 + b) + b_b)) - mX * g_proj_Z;
  FB1_Sw[1] -= g_proj_Y;
  FB1_Hv[1] -= mX;
  dEvQ_R[1] = dEvQ_yaw[1] - mX * EvY_R_idx_1;
  dEvQ_P[1] = EwB[1] - mX * EvY_P_idx_1;
  dEvQ_Y[1] = XvO[1] - mX * EvY_Y_idx_1;
  g_proj_Z = (((FRotor_R_idx_0 - v_r_tip_X) * q_Nom[37] + (-i_a_tmp - I_yaw_app)
               * q_Nom[38]) + (FRotor_R_idx_0 - I_pr_app) * q_Nom[39]) + 9.80665;
  dEvQ_TFA1[1] = g_proj_Z;
  I_pr_app = rZT_3 * 0.0;
  MB2_B2E1[1] = (dEvQ_TFA2[1] + ((I_pr_app + b) + FRotor_R_idx_2)) - mX *
    g_proj_Z;
  FB1_Sw[2] -= -mX;
  FB1_Hv[2] -= g_proj_Y;
  dEvQ_R[2] = dEvQ_yaw[2] - mX * EvY_R_idx_2;
  dEvQ_P[2] = EwB[2] - mX * EvY_P_idx_2;
  dEvQ_Y[2] = XvO[2] - mX * EvY_Y_idx_2;
  g_proj_Z = ((j_a_tmp - FRotor_R_idx_0) * q_Nom[37] + (-0.0 * j_a_tmp - i_a_tmp
    * -0.0) * q_Nom[38]) + (rQS1_2 - i_a_tmp) * q_Nom[39];
  MB2_B2E1[2] = (dEvQ_TFA2[2] + ((I_pr_app - FRotor_R_idx_1) + b_b)) - mX *
    g_proj_Z;

  /*  Partial moments */
  /*  MAll_Sg   = MT_Sg   + cross(rZT0, FT_Sg) - mX*cross(rZY, EvY_Sg); */
  /*  MAll_Sw   = MT_Sw   + cross(rZT0, FT_Sw) - mX*cross(rZY, EvY_Sw); */
  /*  MAll_Hv   = MT_Hv   + cross(rZT0, FT_Hv) - mX*cross(rZY, EvY_Hv); */
  dEvC_GeAz[0] = EvQ_TFA2[0] + (rZT[1] * EwB[2] - EwB[1] * rZT[2]);
  dEvC_GeAz[1] = EvQ_TFA2[1] + (EwB[0] * rZT[2] - rZT[0] * EwB[2]);
  dEvC_GeAz[2] = EvQ_TFA2[2] + (rZT[0] * EwB[1] - EwB[0] * rZT[1]);
  b_I_G[0] = mX * (rZY_idx_1 * EvY_P_idx_2 - EvY_P_idx_1 * rZY_idx_2);
  b_I_G[1] = mX * (EvY_P_idx_0 * rZY_idx_2 - rZY_idx_0 * EvY_P_idx_2);
  b_I_G[2] = mX * (rZY_idx_0 * EvY_P_idx_1 - EvY_P_idx_0 * rZY_idx_1);
  memset(&b_EwX[0], 0, 3U * sizeof(real_T));
  r = _mm_loadu_pd(&I_X[0]);
  r1 = _mm_loadu_pd(&b_EwX[0]);
  _mm_storeu_pd(&b_EwX[0], _mm_add_pd(r1, _mm_mul_pd(r, r11)));
  I_pr_app = I_X[2] * 0.0;
  b_EwX[2] += I_pr_app;
  r = _mm_loadu_pd(&I_X[3]);
  r1 = _mm_loadu_pd(&b_EwX[0]);
  _mm_storeu_pd(&b_EwX[0], _mm_add_pd(r1, _mm_mul_pd(r, r11)));
  FRotor_R_idx_1 = I_X[5] * 0.0;
  b_EwX[2] += FRotor_R_idx_1;
  r = _mm_loadu_pd(&I_X[6]);
  r1 = _mm_loadu_pd(&b_EwX[0]);
  _mm_storeu_pd(&b_EwX[0], _mm_add_pd(r1, _mm_mul_pd(r, r45)));
  b_EwX[2] -= I_X[8];
  r = _mm_loadu_pd(&dEvC_GeAz[0]);
  r1 = _mm_loadu_pd(&b_I_G[0]);
  r2 = _mm_loadu_pd(&b_EwX[0]);
  _mm_storeu_pd(&dEvC_GeAz[0], _mm_sub_pd(_mm_sub_pd(r, r1), r2));
  dEvC_GeAz[2] = (dEvC_GeAz[2] - b_I_G[2]) - b_EwX[2];
  MB2_B2F1[0] = EvQ_TSS1[0] + (rZT[1] * XvO[2] - XvO[1] * rZT[2]);
  MB2_B2F1[1] = EvQ_TSS1[1] + (XvO[0] * rZT[2] - rZT[0] * XvO[2]);
  MB2_B2F1[2] = EvQ_TSS1[2] + (rZT[0] * XvO[1] - XvO[0] * rZT[1]);
  b_I_G[0] = mX * (rZY_idx_1 * EvY_Y_idx_2 - EvY_Y_idx_1 * rZY_idx_2);
  b_I_G[1] = mX * (EvY_Y_idx_0 * rZY_idx_2 - rZY_idx_0 * EvY_Y_idx_2);
  b_I_G[2] = mX * (rZY_idx_0 * EvY_Y_idx_1 - EvY_Y_idx_0 * rZY_idx_1);
  memset(&b_EwX[0], 0, 3U * sizeof(real_T));
  r = _mm_loadu_pd(&I_X[0]);
  r1 = _mm_loadu_pd(&b_EwX[0]);
  _mm_storeu_pd(&b_EwX[0], _mm_add_pd(r1, _mm_mul_pd(r, r11)));
  b_EwX[2] += I_pr_app;
  r = _mm_loadu_pd(&I_X[3]);
  r1 = _mm_loadu_pd(&b_EwX[0]);
  _mm_storeu_pd(&b_EwX[0], _mm_add_pd(r1, _mm_mul_pd(r, r10)));
  b_EwX[2] += I_X[5];
  r = _mm_loadu_pd(&I_X[6]);
  r1 = _mm_loadu_pd(&b_EwX[0]);
  _mm_storeu_pd(&b_EwX[0], _mm_add_pd(r1, _mm_mul_pd(r, r11)));
  FRotor_R_idx_0 = I_X[8] * 0.0;
  b_EwX[2] += FRotor_R_idx_0;
  r = _mm_loadu_pd(&MB2_B2F1[0]);
  r1 = _mm_loadu_pd(&b_I_G[0]);
  r2 = _mm_loadu_pd(&b_EwX[0]);
  _mm_storeu_pd(&MB2_B2F1[0], _mm_sub_pd(_mm_sub_pd(r, r1), r2));
  MB2_B2F1[2] = (MB2_B2F1[2] - b_I_G[2]) - b_EwX[2];
  MB1_B1F2[0] = EvZ[0] + (rZT[1] * MB2_B2F2[2] - MB2_B2F2[1] * rZT[2]);
  MB1_B1F2[1] = EvZ[1] + (MB2_B2F2[0] * rZT[2] - rZT[0] * MB2_B2F2[2]);
  MB1_B1F2[2] = EvZ[2] + (rZT[0] * MB2_B2F2[1] - MB2_B2F2[0] * rZT[1]);
  MB1_B1E1[0] = EvQ[0] + (rZT[1] * MB3_B3F1[2] - MB3_B3F1[1] * rZT[2]);
  MB1_B1E1[1] = EvQ[1] + (MB3_B3F1[0] * rZT[2] - rZT[0] * MB3_B3F1[2]);
  MB1_B1E1[2] = EvQ[2] + (rZT[0] * MB3_B3F1[1] - MB3_B3F1[0] * rZT[1]);
  MB1_B1F1[0] = EvQ_Y[0] + (rZT[1] * MB3_B3E1[2] - MB3_B3E1[1] * rZT[2]);
  MB1_B1F1[1] = EvQ_Y[1] + (MB3_B3E1[0] * rZT[2] - rZT[0] * MB3_B3E1[2]);
  MB1_B1F1[2] = EvQ_Y[2] + (rZT[0] * MB3_B3E1[1] - MB3_B3E1[0] * rZT[1]);
  MB3_DrTr[0] = EvQ_TFA1[0] + (rZT[1] * MB3_B3F2[2] - MB3_B3F2[1] * rZT[2]);
  MB3_DrTr[1] = EvQ_TFA1[1] + (MB3_B3F2[0] * rZT[2] - rZT[0] * MB3_B3F2[2]);
  MB3_DrTr[2] = EvQ_TFA1[2] + (rZT[0] * MB3_B3F2[1] - MB3_B3F2[0] * rZT[1]);
  EvQ[0] = MB2_TFA1[0] + (rZO[1] * FO_yaw[2] - FO_yaw[1] * rZO[2]);
  EvQ[1] = MB2_TFA1[1] + (FO_yaw[0] * rZO[2] - rZO[0] * FO_yaw[2]);
  EvQ[2] = MB2_TFA1[2] + (rZO[0] * FO_yaw[1] - FO_yaw[0] * rZO[1]);
  b_I_G[0] = rZT[1] * FO_yaw[2] - FO_yaw[1] * rZT[2];
  b_I_G[1] = FO_yaw[0] * rZT[2] - rZT[0] * FO_yaw[2];
  b_I_G[2] = rZT[0] * FO_yaw[1] - FO_yaw[0] * rZT[1];
  r = _mm_loadu_pd(&EvQ[0]);
  r1 = _mm_loadu_pd(&b_I_G[0]);
  _mm_storeu_pd(&EvQ[0], _mm_add_pd(r, r1));
  EvQ[2] += b_I_G[2];
  EvQ_Y[0] = FB1_t[0] + (rZO[1] * FRotor_GeAz[2] - FRotor_GeAz[1] * rZO[2]);
  EvQ_Y[1] = FB1_t[1] + (FRotor_GeAz[0] * rZO[2] - rZO[0] * FRotor_GeAz[2]);
  EvQ_Y[2] = FB1_t[2] + (rZO[0] * FRotor_GeAz[1] - FRotor_GeAz[0] * rZO[1]);
  b_I_G[0] = rZT[1] * FRotor_GeAz[2] - FRotor_GeAz[1] * rZT[2];
  b_I_G[1] = FRotor_GeAz[0] * rZT[2] - rZT[0] * FRotor_GeAz[2];
  b_I_G[2] = rZT[0] * FRotor_GeAz[1] - FRotor_GeAz[0] * rZT[1];
  r = _mm_loadu_pd(&EvQ_Y[0]);
  r1 = _mm_loadu_pd(&b_I_G[0]);
  _mm_storeu_pd(&EvQ_Y[0], _mm_add_pd(r, r1));
  EvQ_Y[2] += b_I_G[2];
  EvQ_TFA1[0] = FB2_t[0] + (rZO[1] * EvZ_tmp - FRotor_DrTr[1] * rZO[2]);
  EvQ_TFA1[1] = FB2_t[1] + (FRotor_DrTr[0] * rZO[2] - rZO[0] * EvZ_tmp);
  EvQ_TFA1[2] = FB2_t[2] + (rZO[0] * FRotor_DrTr[1] - FRotor_DrTr[0] * rZO[1]);
  b_I_G[0] = rZT[1] * EvZ_tmp - FRotor_DrTr[1] * rZT[2];
  b_I_G[1] = FRotor_DrTr[0] * rZT[2] - rZT[0] * EvZ_tmp;
  b_I_G[2] = rZT[0] * FRotor_DrTr[1] - FRotor_DrTr[0] * rZT[1];
  r = _mm_loadu_pd(&EvQ_TFA1[0]);
  r1 = _mm_loadu_pd(&b_I_G[0]);
  _mm_storeu_pd(&EvQ_TFA1[0], _mm_add_pd(r, r1));
  EvQ_TFA1[2] += b_I_G[2];
  EvQ_TSS1[0] = FB3_t[0] + (rZO[1] * FB1_B1F1[2] - FB1_B1F1[1] * rZO[2]);
  EvQ_TSS1[1] = FB3_t[1] + (FB1_B1F1[0] * rZO[2] - rZO[0] * FB1_B1F1[2]);
  EvQ_TSS1[2] = FB3_t[2] + (rZO[0] * FB1_B1F1[1] - FB1_B1F1[0] * rZO[1]);
  b_I_G[0] = rZT[1] * FB1_B1F1[2] - FB1_B1F1[1] * rZT[2];
  b_I_G[1] = FB1_B1F1[0] * rZT[2] - rZT[0] * FB1_B1F1[2];
  b_I_G[2] = rZT[0] * FB1_B1F1[1] - FB1_B1F1[0] * rZT[1];
  r = _mm_loadu_pd(&EvQ_TSS1[0]);
  r1 = _mm_loadu_pd(&b_I_G[0]);
  _mm_storeu_pd(&EvQ_TSS1[0], _mm_add_pd(r, r1));
  EvQ_TSS1[2] += b_I_G[2];
  EvQ_TFA2[0] = MB1_t[0] + (rZO[1] * FB1_B1E1[2] - FB1_B1E1[1] * rZO[2]);
  EvQ_TFA2[1] = MB1_t[1] + (FB1_B1E1[0] * rZO[2] - rZO[0] * FB1_B1E1[2]);
  EvQ_TFA2[2] = MB1_t[2] + (rZO[0] * FB1_B1E1[1] - FB1_B1E1[0] * rZO[1]);
  b_I_G[0] = rZT[1] * FB1_B1E1[2] - FB1_B1E1[1] * rZT[2];
  b_I_G[1] = FB1_B1E1[0] * rZT[2] - rZT[0] * FB1_B1E1[2];
  b_I_G[2] = rZT[0] * FB1_B1E1[1] - FB1_B1E1[0] * rZT[1];
  r = _mm_loadu_pd(&EvQ_TFA2[0]);
  r1 = _mm_loadu_pd(&b_I_G[0]);
  _mm_storeu_pd(&EvQ_TFA2[0], _mm_add_pd(r, r1));
  EvQ_TFA2[2] += b_I_G[2];
  EvQ_TSS2[0] = MB2_t[0] + (rZO[1] * FB1_B1F2[2] - FB1_B1F2[1] * rZO[2]);
  EvQ_TSS2[1] = MB2_t[1] + (FB1_B1F2[0] * rZO[2] - rZO[0] * FB1_B1F2[2]);
  EvQ_TSS2[2] = MB2_t[2] + (rZO[0] * FB1_B1F2[1] - FB1_B1F2[0] * rZO[1]);
  b_I_G[0] = rZT[1] * FB1_B1F2[2] - FB1_B1F2[1] * rZT[2];
  b_I_G[1] = FB1_B1F2[0] * rZT[2] - rZT[0] * FB1_B1F2[2];
  b_I_G[2] = rZT[0] * FB1_B1F2[1] - FB1_B1F2[0] * rZT[1];
  r = _mm_loadu_pd(&EvQ_TSS2[0]);
  r1 = _mm_loadu_pd(&b_I_G[0]);
  _mm_storeu_pd(&EvQ_TSS2[0], _mm_add_pd(r, r1));
  EvQ_TSS2[2] += b_I_G[2];
  EvQ_yaw[0] = MB3_t[0] + (rZO[1] * FB2_B2F1[2] - FB2_B2F1[1] * rZO[2]);
  EvQ_yaw[1] = MB3_t[1] + (FB2_B2F1[0] * rZO[2] - rZO[0] * FB2_B2F1[2]);
  EvQ_yaw[2] = MB3_t[2] + (rZO[0] * FB2_B2F1[1] - FB2_B2F1[0] * rZO[1]);
  b_I_G[0] = rZT[1] * FB2_B2F1[2] - FB2_B2F1[1] * rZT[2];
  b_I_G[1] = FB2_B2F1[0] * rZT[2] - rZT[0] * FB2_B2F1[2];
  b_I_G[2] = rZT[0] * FB2_B2F1[1] - FB2_B2F1[0] * rZT[1];
  r = _mm_loadu_pd(&EvQ_yaw[0]);
  r1 = _mm_loadu_pd(&b_I_G[0]);
  _mm_storeu_pd(&EvQ_yaw[0], _mm_add_pd(r, r1));
  EvQ_yaw[2] += b_I_G[2];
  EwB[0] = EvC_GeAz[0] + (rZO[1] * FB2_B2E1[2] - FB2_B2E1[1] * rZO[2]);
  EwB[1] = EvC_GeAz[1] + (FB2_B2E1[0] * rZO[2] - rZO[0] * FB2_B2E1[2]);
  EwB[2] = EvC_GeAz[2] + (rZO[0] * FB2_B2E1[1] - FB2_B2E1[0] * rZO[1]);
  b_I_G[0] = rZT[1] * FB2_B2E1[2] - FB2_B2E1[1] * rZT[2];
  b_I_G[1] = FB2_B2E1[0] * rZT[2] - rZT[0] * FB2_B2E1[2];
  b_I_G[2] = rZT[0] * FB2_B2E1[1] - FB2_B2E1[0] * rZT[1];
  r = _mm_loadu_pd(&EwB[0]);
  r1 = _mm_loadu_pd(&b_I_G[0]);
  _mm_storeu_pd(&EwB[0], _mm_add_pd(r, r1));
  EwB[2] += b_I_G[2];
  MB1_DrTr[0] = FRotor_TFA1[0] + (rZO[1] * FB2_B2F2[2] - FB2_B2F2[1] * rZO[2]);
  MB1_DrTr[1] = FRotor_TFA1[1] + (FB2_B2F2[0] * rZO[2] - rZO[0] * FB2_B2F2[2]);
  MB1_DrTr[2] = FRotor_TFA1[2] + (rZO[0] * FB2_B2F2[1] - FB2_B2F2[0] * rZO[1]);
  b_I_G[0] = rZT[1] * FB2_B2F2[2] - FB2_B2F2[1] * rZT[2];
  b_I_G[1] = FB2_B2F2[0] * rZT[2] - rZT[0] * FB2_B2F2[2];
  b_I_G[2] = rZT[0] * FB2_B2F2[1] - FB2_B2F2[0] * rZT[1];
  r = _mm_loadu_pd(&MB1_DrTr[0]);
  r1 = _mm_loadu_pd(&b_I_G[0]);
  _mm_storeu_pd(&MB1_DrTr[0], _mm_add_pd(r, r1));
  MB1_DrTr[2] += b_I_G[2];
  XvO[0] = FB1_TFA1[0] + (rZO[1] * FB3_B3F1[2] - FB3_B3F1[1] * rZO[2]);
  XvO[1] = FB1_TFA1[1] + (FB3_B3F1[0] * rZO[2] - rZO[0] * FB3_B3F1[2]);
  XvO[2] = FB1_TFA1[2] + (rZO[0] * FB3_B3F1[1] - FB3_B3F1[0] * rZO[1]);
  b_I_G[0] = rZT[1] * FB3_B3F1[2] - FB3_B3F1[1] * rZT[2];
  b_I_G[1] = FB3_B3F1[0] * rZT[2] - rZT[0] * FB3_B3F1[2];
  b_I_G[2] = rZT[0] * FB3_B3F1[1] - FB3_B3F1[0] * rZT[1];
  r = _mm_loadu_pd(&XvO[0]);
  r1 = _mm_loadu_pd(&b_I_G[0]);
  _mm_storeu_pd(&XvO[0], _mm_add_pd(r, r1));
  XvO[2] += b_I_G[2];
  MB2_DrTr[0] = FB2_TFA1[0] + (rZO[1] * FB3_B3E1[2] - FB3_B3E1[1] * rZO[2]);
  MB2_DrTr[1] = FB2_TFA1[1] + (FB3_B3E1[0] * rZO[2] - rZO[0] * FB3_B3E1[2]);
  MB2_DrTr[2] = FB2_TFA1[2] + (rZO[0] * FB3_B3E1[1] - FB3_B3E1[0] * rZO[1]);
  b_I_G[0] = rZT[1] * FB3_B3E1[2] - FB3_B3E1[1] * rZT[2];
  b_I_G[1] = FB3_B3E1[0] * rZT[2] - rZT[0] * FB3_B3E1[2];
  b_I_G[2] = rZT[0] * FB3_B3E1[1] - FB3_B3E1[0] * rZT[1];
  r = _mm_loadu_pd(&MB2_DrTr[0]);
  r1 = _mm_loadu_pd(&b_I_G[0]);
  _mm_storeu_pd(&MB2_DrTr[0], _mm_add_pd(r, r1));
  MB2_DrTr[2] += b_I_G[2];
  EwL_yaw[0] = FB3_TFA1[0] + (rZO[1] * FB3_B3F2[2] - FB3_B3F2[1] * rZO[2]);
  EwL_yaw[1] = FB3_TFA1[1] + (FB3_B3F2[0] * rZO[2] - rZO[0] * FB3_B3F2[2]);
  EwL_yaw[2] = FB3_TFA1[2] + (rZO[0] * FB3_B3F2[1] - FB3_B3F2[0] * rZO[1]);
  memset(&b_EwX[0], 0, 3U * sizeof(real_T));
  EwL_yaw[0] += rZT[1] * FB3_B3F2[2] - FB3_B3F2[1] * rZT[2];
  r = _mm_loadu_pd(&I_X[0]);
  r1 = _mm_loadu_pd(&b_EwX[0]);
  _mm_storeu_pd(&b_EwX[0], _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(EwX[0]))));
  b_EwX[2] += EwX[0] * I_X[2];
  EwL_yaw[1] += FB3_B3F2[0] * rZT[2] - rZT[0] * FB3_B3F2[2];
  r = _mm_loadu_pd(&I_X[3]);
  r1 = _mm_loadu_pd(&b_EwX[0]);
  _mm_storeu_pd(&b_EwX[0], _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(EwX[1]))));
  b_EwX[2] += EwX[1] * I_X[5];
  EwL_yaw[2] += rZT[0] * FB3_B3F2[1] - FB3_B3F2[0] * rZT[1];
  r = _mm_loadu_pd(&I_X[6]);
  r1 = _mm_loadu_pd(&b_EwX[0]);
  _mm_storeu_pd(&b_EwX[0], _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(d))));
  b_EwX[2] += d * I_X[8];
  I_pr_app = (ff_HydroStat[3] + f_Morison[3]) + mooring_load[3];
  rZT_3 = (ff_HydroStat[4] + f_Morison[4]) + mooring_load[4];
  rQS1_2 = (ff_HydroStat[5] + f_Morison[5]) + mooring_load[5];
  EvZ[0] = ((MB1_TFA1[0] + v_c_tip_Z) + FRotor_TFA2[0]) + (rZT[1] * dEvQ_TFA2[2]
    - dEvQ_TFA2[1] * rZT[2]);
  EvZ[1] = ((MB1_TFA1[1] + ak_tip_Z) + FRotor_TFA2[1]) + (dEvQ_TFA2[0] * rZT[2]
    - rZT[0] * dEvQ_TFA2[2]);
  EvZ[2] = ((MB1_TFA1[2] + g_proj_X) + FRotor_TFA2[2]) + (rZT[0] * dEvQ_TFA2[1]
    - dEvQ_TFA2[0] * rZT[1]);
  I_yaw_app = rZT_3 * 0.0;
  v_r_tip_X = rQS1_2 * 0.0;
  EvZ[0] = ((EvZ[0] + ((I_pr_app + I_yaw_app) + v_r_tip_X)) - mX * (rZY_idx_1 *
             g_proj_Z - dEvQ_TFA1[1] * rZY_idx_2)) - (EwX[1] * b_EwX[2] - b_EwX
    [1] * d);
  I_pr_app *= 0.0;
  EvZ[1] = ((EvZ[1] + ((I_pr_app + I_yaw_app) + rQS1_2)) - mX * (dEvQ_TFA1[0] *
             rZY_idx_2 - rZY_idx_0 * g_proj_Z)) - (b_EwX[0] * d - EwX[0] *
    b_EwX[2]);
  EvZ[2] = ((EvZ[2] + ((I_pr_app - rZT_3) + v_r_tip_X)) - mX * (rZY_idx_0 *
             dEvQ_TFA1[1] - dEvQ_TFA1[0] * rZY_idx_1)) - (EwX[0] * b_EwX[1] -
    b_EwX[0] * EwX[1]);

  /*  Initialize matrices */
  memset(&IM_nom[0], 0, 1156U * sizeof(real_T));
  memset(&C_B2[0], 0, 1156U * sizeof(real_T));
  memset(&C_B3[0], 0, 1156U * sizeof(real_T));
  memset(&C_T[0], 0, 1156U * sizeof(real_T));
  memset(&C_com[0], 0, 1156U * sizeof(real_T));
  memset(&C_Plat[0], 0, 1156U * sizeof(real_T));
  memset(&f_nom[0], 0, 34U * sizeof(real_T));
  memset(&f_B1[0], 0, 34U * sizeof(real_T));
  memset(&f_ElasticB1[0], 0, 34U * sizeof(real_T));
  memset(&f_DampingB1[0], 0, 34U * sizeof(real_T));
  memset(&f_B2[0], 0, 34U * sizeof(real_T));
  memset(&f_ElasticB2[0], 0, 34U * sizeof(real_T));
  memset(&f_DampingB2[0], 0, 34U * sizeof(real_T));
  memset(&f_B3[0], 0, 34U * sizeof(real_T));
  memset(&f_ElasticB3[0], 0, 34U * sizeof(real_T));
  memset(&f_DampingB3[0], 0, 34U * sizeof(real_T));
  memset(&f_Yaw[0], 0, 34U * sizeof(real_T));
  memset(&f_T[0], 0, 34U * sizeof(real_T));
  memset(&f_ElasticT[0], 0, 34U * sizeof(real_T));
  memset(&f_DampingT[0], 0, 34U * sizeof(real_T));
  memset(&f_G[0], 0, 34U * sizeof(real_T));
  memset(&f_ElasticDrive[0], 0, 34U * sizeof(real_T));
  memset(&f_DampDrive[0], 0, 34U * sizeof(real_T));
  memset(&f_Gen[0], 0, 34U * sizeof(real_T));
  memset(&f_Brake[0], 0, 34U * sizeof(real_T));
  memset(&f_Plat[0], 0, 34U * sizeof(real_T));

  /*  Common C terms */
  /*  r = 1, 2, 3 */
  FB1_Sg[0] -= mX;
  FB1_Sg[1] -= g_proj_Y;
  FB1_Sg[2] -= g_proj_Y;
  C_com[0] = -c_dot(FB1_Sg);
  C_com[34] = -c_dot(FB1_Sw);
  C_com[68] = -c_dot(FB1_Hv);
  C_com[102] = -c_dot(dEvQ_R);
  C_com[136] = -c_dot(dEvQ_P);
  C_com[170] = -c_dot(dEvQ_Y);
  C_com[204] = -c_dot(MB2_B2F2);
  C_com[238] = -c_dot(MB3_B3F1);
  C_com[272] = -c_dot(MB3_B3E1);
  C_com[306] = -c_dot(MB3_B3F2);
  C_com[340] = -c_dot(FO_yaw);
  C_com[374] = -c_dot(FRotor_GeAz);
  C_com[408] = -c_dot(FRotor_DrTr);
  C_com[442] = -c_dot(FB1_B1F1);
  C_com[476] = -c_dot(FB1_B1E1);
  C_com[510] = -c_dot(FB1_B1F2);
  C_com[544] = -c_dot(FB2_B2F1);
  C_com[578] = -c_dot(FB2_B2E1);
  C_com[612] = -c_dot(FB2_B2F2);
  C_com[646] = -c_dot(FB3_B3F1);
  C_com[680] = -c_dot(FB3_B3E1);
  C_com[714] = -c_dot(FB3_B3F2);
  C_com[35] = -d_dot(FB1_Sw);
  C_com[69] = -d_dot(FB1_Hv);
  C_com[103] = -d_dot(dEvQ_R);
  C_com[137] = -d_dot(dEvQ_P);
  C_com[171] = -d_dot(dEvQ_Y);
  C_com[205] = -d_dot(MB2_B2F2);
  C_com[239] = -d_dot(MB3_B3F1);
  C_com[273] = -d_dot(MB3_B3E1);
  C_com[307] = -d_dot(MB3_B3F2);
  C_com[341] = -d_dot(FO_yaw);
  C_com[375] = -d_dot(FRotor_GeAz);
  C_com[409] = -d_dot(FRotor_DrTr);
  C_com[443] = -d_dot(FB1_B1F1);
  C_com[477] = -d_dot(FB1_B1E1);
  C_com[511] = -d_dot(FB1_B1F2);
  C_com[545] = -d_dot(FB2_B2F1);
  C_com[579] = -d_dot(FB2_B2E1);
  C_com[613] = -d_dot(FB2_B2F2);
  C_com[647] = -d_dot(FB3_B3F1);
  C_com[681] = -d_dot(FB3_B3E1);
  C_com[715] = -d_dot(FB3_B3F2);
  C_com[70] = -e_dot(FB1_Hv);
  C_com[104] = -e_dot(dEvQ_R);
  C_com[138] = -e_dot(dEvQ_P);
  C_com[172] = -e_dot(dEvQ_Y);
  C_com[206] = -e_dot(MB2_B2F2);
  C_com[240] = -e_dot(MB3_B3F1);
  C_com[274] = -e_dot(MB3_B3E1);
  C_com[308] = -e_dot(MB3_B3F2);
  C_com[342] = -e_dot(FO_yaw);
  C_com[376] = -e_dot(FRotor_GeAz);
  C_com[410] = -e_dot(FRotor_DrTr);
  C_com[444] = -e_dot(FB1_B1F1);
  C_com[478] = -e_dot(FB1_B1E1);
  C_com[512] = -e_dot(FB1_B1F2);
  C_com[546] = -e_dot(FB2_B2F1);
  C_com[580] = -e_dot(FB2_B2E1);
  C_com[614] = -e_dot(FB2_B2F2);
  C_com[648] = -e_dot(FB3_B3F1);
  C_com[682] = -e_dot(FB3_B3E1);
  C_com[716] = -e_dot(FB3_B3F2);

  /*  r = 4, 5 ,6 */
  dEvQ_Y[0] = dEvQ_TSS2[0] + (rZT[1] * dEvQ_yaw[2] - dEvQ_yaw[1] * rZT[2]);
  dEvQ_Y[1] = dEvQ_TSS2[1] + (dEvQ_yaw[0] * rZT[2] - rZT[0] * dEvQ_yaw[2]);
  dEvQ_Y[2] = dEvQ_TSS2[2] + (rZT[0] * dEvQ_yaw[1] - dEvQ_yaw[0] * rZT[1]);
  b_I_G[0] = mX * (rZY_idx_1 * EvY_R_idx_2 - EvY_R_idx_1 * rZY_idx_2);
  b_I_G[1] = mX * (EvY_R_idx_0 * rZY_idx_2 - rZY_idx_0 * EvY_R_idx_2);
  b_I_G[2] = mX * (rZY_idx_0 * EvY_R_idx_1 - EvY_R_idx_0 * rZY_idx_1);
  memset(&b_EwX[0], 0, 3U * sizeof(real_T));
  r = _mm_loadu_pd(&I_X[0]);
  r1 = _mm_loadu_pd(&b_EwX[0]);
  _mm_storeu_pd(&b_EwX[0], _mm_add_pd(r1, _mm_mul_pd(r, r10)));
  b_EwX[2] += I_X[2];
  r = _mm_loadu_pd(&I_X[3]);
  r1 = _mm_loadu_pd(&b_EwX[0]);
  _mm_storeu_pd(&b_EwX[0], _mm_add_pd(r1, _mm_mul_pd(r, r11)));
  b_EwX[2] += FRotor_R_idx_1;
  r = _mm_loadu_pd(&I_X[6]);
  r1 = _mm_loadu_pd(&b_EwX[0]);
  _mm_storeu_pd(&b_EwX[0], _mm_add_pd(r1, _mm_mul_pd(r, r11)));
  b_EwX[2] += FRotor_R_idx_0;
  r = _mm_loadu_pd(&dEvQ_Y[0]);
  r1 = _mm_loadu_pd(&b_I_G[0]);
  r2 = _mm_loadu_pd(&b_EwX[0]);
  _mm_storeu_pd(&dEvQ_Y[0], _mm_sub_pd(_mm_sub_pd(r, r1), r2));
  dEvQ_Y[2] = (dEvQ_Y[2] - b_I_G[2]) - b_EwX[2];
  C_com[105] = -c_dot(dEvQ_Y);
  C_com[139] = -c_dot(dEvC_GeAz);
  C_com[173] = -c_dot(MB2_B2F1);
  C_com[207] = -c_dot(MB1_B1F2);
  C_com[241] = -c_dot(MB1_B1E1);
  C_com[275] = -c_dot(MB1_B1F1);
  C_com[309] = -c_dot(MB3_DrTr);
  C_com[343] = -c_dot(EvQ);
  C_com[377] = -c_dot(EvQ_Y);
  C_com[411] = -c_dot(EvQ_TFA1);
  C_com[445] = -c_dot(EvQ_TSS1);
  C_com[479] = -c_dot(EvQ_TFA2);
  C_com[513] = -c_dot(EvQ_TSS2);
  C_com[547] = -c_dot(EvQ_yaw);
  C_com[581] = -c_dot(EwB);
  C_com[615] = -c_dot(MB1_DrTr);
  C_com[649] = -c_dot(XvO);
  C_com[683] = -c_dot(MB2_DrTr);
  C_com[717] = -c_dot(EwL_yaw);
  C_com[140] = -d_dot(dEvC_GeAz);
  C_com[174] = -d_dot(MB2_B2F1);
  C_com[208] = -d_dot(MB1_B1F2);
  C_com[242] = -d_dot(MB1_B1E1);
  C_com[276] = -d_dot(MB1_B1F1);
  C_com[310] = -d_dot(MB3_DrTr);
  C_com[344] = -d_dot(EvQ);
  C_com[378] = -d_dot(EvQ_Y);
  C_com[412] = -d_dot(EvQ_TFA1);
  C_com[446] = -d_dot(EvQ_TSS1);
  C_com[480] = -d_dot(EvQ_TFA2);
  C_com[514] = -d_dot(EvQ_TSS2);
  C_com[548] = -d_dot(EvQ_yaw);
  C_com[582] = -d_dot(EwB);
  C_com[616] = -d_dot(MB1_DrTr);
  C_com[650] = -d_dot(XvO);
  C_com[684] = -d_dot(MB2_DrTr);
  C_com[718] = -d_dot(EwL_yaw);
  C_com[175] = -e_dot(MB2_B2F1);
  C_com[209] = -e_dot(MB1_B1F2);
  C_com[243] = -e_dot(MB1_B1E1);
  C_com[277] = -e_dot(MB1_B1F1);
  C_com[311] = -e_dot(MB3_DrTr);
  C_com[345] = -e_dot(EvQ);
  C_com[379] = -e_dot(EvQ_Y);
  C_com[413] = -e_dot(EvQ_TFA1);
  C_com[447] = -e_dot(EvQ_TSS1);
  C_com[481] = -e_dot(EvQ_TFA2);
  C_com[515] = -e_dot(EvQ_TSS2);
  C_com[549] = -e_dot(EvQ_yaw);
  C_com[583] = -e_dot(EwB);
  C_com[617] = -e_dot(MB1_DrTr);
  C_com[651] = -e_dot(XvO);
  C_com[685] = -e_dot(MB2_DrTr);
  C_com[719] = -e_dot(EwL_yaw);

  /*  r = 7, 8, 9, 10 */
  C_com[210] = -f_dot(EvO_TFA1, EwL) - f_dot(EwB_TFA1, dEwB_TFA1);
  C_com[244] = -f_dot(EvO_TFA1, FO_TSS1) - f_dot(EwB_TFA1, dEwL_GeAz);
  C_com[278] = -f_dot(EvO_TFA1, FO_TFA2) - f_dot(EwB_TFA1, FRotor_TSS1);
  C_com[312] = -f_dot(EvO_TFA1, FO_TSS2) - f_dot(EwB_TFA1, MB3_TFA1);
  C_com[346] = -f_dot(EvO_TFA1, FO_yaw) - f_dot(EwB_TFA1, MB2_TFA1);
  C_com[380] = -f_dot(EvO_TFA1, FRotor_GeAz) - f_dot(EwB_TFA1, FB1_t);
  C_com[414] = -f_dot(EvO_TFA1, FRotor_DrTr) - f_dot(EwB_TFA1, FB2_t);
  C_com[448] = -f_dot(EvO_TFA1, FB1_B1F1) - f_dot(EwB_TFA1, FB3_t);
  C_com[482] = -f_dot(EvO_TFA1, FB1_B1E1) - f_dot(EwB_TFA1, MB1_t);
  C_com[516] = -f_dot(EvO_TFA1, FB1_B1F2) - f_dot(EwB_TFA1, MB2_t);
  C_com[550] = -f_dot(EvO_TFA1, FB2_B2F1) - f_dot(EwB_TFA1, MB3_t);
  C_com[584] = -f_dot(EvO_TFA1, FB2_B2E1) - f_dot(EwB_TFA1, EvC_GeAz);
  C_com[618] = -f_dot(EvO_TFA1, FB2_B2F2) - f_dot(EwB_TFA1, FRotor_TFA1);
  C_com[652] = -f_dot(EvO_TFA1, FB3_B3F1) - f_dot(EwB_TFA1, FB1_TFA1);
  C_com[686] = -f_dot(EvO_TFA1, FB3_B3E1) - f_dot(EwB_TFA1, FB2_TFA1);
  C_com[720] = -f_dot(EvO_TFA1, FB3_B3F2) - f_dot(EwB_TFA1, FB3_TFA1);
  C_com[245] = -f_dot(EvO_TSS1, FO_TSS1) - f_dot(EwB_TSS1, dEwL_GeAz);
  C_com[279] = -f_dot(EvO_TSS1, FO_TFA2) - f_dot(EwB_TSS1, FRotor_TSS1);
  C_com[313] = -f_dot(EvO_TSS1, FO_TSS2) - f_dot(EwB_TSS1, MB3_TFA1);
  C_com[347] = -f_dot(EvO_TSS1, FO_yaw) - f_dot(EwB_TSS1, MB2_TFA1);
  C_com[381] = -f_dot(EvO_TSS1, FRotor_GeAz) - f_dot(EwB_TSS1, FB1_t);
  C_com[415] = -f_dot(EvO_TSS1, FRotor_DrTr) - f_dot(EwB_TSS1, FB2_t);
  C_com[449] = -f_dot(EvO_TSS1, FB1_B1F1) - f_dot(EwB_TSS1, FB3_t);
  C_com[483] = -f_dot(EvO_TSS1, FB1_B1E1) - f_dot(EwB_TSS1, MB1_t);
  C_com[517] = -f_dot(EvO_TSS1, FB1_B1F2) - f_dot(EwB_TSS1, MB2_t);
  C_com[551] = -f_dot(EvO_TSS1, FB2_B2F1) - f_dot(EwB_TSS1, MB3_t);
  C_com[585] = -f_dot(EvO_TSS1, FB2_B2E1) - f_dot(EwB_TSS1, EvC_GeAz);
  C_com[619] = -f_dot(EvO_TSS1, FB2_B2F2) - f_dot(EwB_TSS1, FRotor_TFA1);
  C_com[653] = -f_dot(EvO_TSS1, FB3_B3F1) - f_dot(EwB_TSS1, FB1_TFA1);
  C_com[687] = -f_dot(EvO_TSS1, FB3_B3E1) - f_dot(EwB_TSS1, FB2_TFA1);
  C_com[721] = -f_dot(EvO_TSS1, FB3_B3F2) - f_dot(EwB_TSS1, FB3_TFA1);
  C_com[280] = -f_dot(EvO_TFA2, FO_TFA2) - f_dot(EwB_TFA2, FRotor_TSS1);
  C_com[314] = -f_dot(EvO_TFA2, FO_TSS2) - f_dot(EwB_TFA2, MB3_TFA1);
  C_com[348] = -f_dot(EvO_TFA2, FO_yaw) - f_dot(EwB_TFA2, MB2_TFA1);
  C_com[382] = -f_dot(EvO_TFA2, FRotor_GeAz) - f_dot(EwB_TFA2, FB1_t);
  C_com[416] = -f_dot(EvO_TFA2, FRotor_DrTr) - f_dot(EwB_TFA2, FB2_t);
  C_com[450] = -f_dot(EvO_TFA2, FB1_B1F1) - f_dot(EwB_TFA2, FB3_t);
  C_com[484] = -f_dot(EvO_TFA2, FB1_B1E1) - f_dot(EwB_TFA2, MB1_t);
  C_com[518] = -f_dot(EvO_TFA2, FB1_B1F2) - f_dot(EwB_TFA2, MB2_t);
  C_com[552] = -f_dot(EvO_TFA2, FB2_B2F1) - f_dot(EwB_TFA2, MB3_t);
  C_com[586] = -f_dot(EvO_TFA2, FB2_B2E1) - f_dot(EwB_TFA2, EvC_GeAz);
  C_com[620] = -f_dot(EvO_TFA2, FB2_B2F2) - f_dot(EwB_TFA2, FRotor_TFA1);
  C_com[654] = -f_dot(EvO_TFA2, FB3_B3F1) - f_dot(EwB_TFA2, FB1_TFA1);
  C_com[688] = -f_dot(EvO_TFA2, FB3_B3E1) - f_dot(EwB_TFA2, FB2_TFA1);
  C_com[722] = -f_dot(EvO_TFA2, FB3_B3F2) - f_dot(EwB_TFA2, FB3_TFA1);
  C_com[315] = -f_dot(EvO_TSS2, FO_TSS2) - f_dot(EwB_TSS2, MB3_TFA1);
  C_com[349] = -f_dot(EvO_TSS2, FO_yaw) - f_dot(EwB_TSS2, MB2_TFA1);
  C_com[383] = -f_dot(EvO_TSS2, FRotor_GeAz) - f_dot(EwB_TSS2, FB1_t);
  C_com[417] = -f_dot(EvO_TSS2, FRotor_DrTr) - f_dot(EwB_TSS2, FB2_t);
  C_com[451] = -f_dot(EvO_TSS2, FB1_B1F1) - f_dot(EwB_TSS2, FB3_t);
  C_com[485] = -f_dot(EvO_TSS2, FB1_B1E1) - f_dot(EwB_TSS2, MB1_t);
  C_com[519] = -f_dot(EvO_TSS2, FB1_B1F2) - f_dot(EwB_TSS2, MB2_t);
  C_com[553] = -f_dot(EvO_TSS2, FB2_B2F1) - f_dot(EwB_TSS2, MB3_t);
  C_com[587] = -f_dot(EvO_TSS2, FB2_B2E1) - f_dot(EwB_TSS2, EvC_GeAz);
  C_com[621] = -f_dot(EvO_TSS2, FB2_B2F2) - f_dot(EwB_TSS2, FRotor_TFA1);
  C_com[655] = -f_dot(EvO_TSS2, FB3_B3F1) - f_dot(EwB_TSS2, FB1_TFA1);
  C_com[689] = -f_dot(EvO_TSS2, FB3_B3E1) - f_dot(EwB_TSS2, FB2_TFA1);
  C_com[723] = -f_dot(EvO_TSS2, FB3_B3F2) - f_dot(EwB_TSS2, FB3_TFA1);

  /*  r = 11 */
  C_com[350] = -f_dot(EwN_yaw, MB2_TFA1);
  C_com[384] = -f_dot(EwN_yaw, FB1_t);
  C_com[418] = -f_dot(EwN_yaw, FB2_t);
  C_com[452] = -f_dot(EwN_yaw, FB3_t);
  C_com[486] = -f_dot(EwN_yaw, MB1_t);
  C_com[520] = -f_dot(EwN_yaw, MB2_t);
  C_com[554] = -f_dot(EwN_yaw, MB3_t);
  C_com[588] = -f_dot(EwN_yaw, EvC_GeAz);
  C_com[622] = -f_dot(EwN_yaw, FRotor_TFA1);
  C_com[656] = -f_dot(EwN_yaw, FB1_TFA1);
  C_com[690] = -f_dot(EwN_yaw, FB2_TFA1);
  C_com[724] = -f_dot(EwN_yaw, FB3_TFA1);

  /*  r = 12    */
  C_com[385] = -f_dot(EwL_GeAz, MRotor_GeAz) + f_dot(EwG_GeAz, b_dEvQ_R);
  C_com[419] = -f_dot(EwL_GeAz, MRotor_DrTr);
  C_com[453] = -f_dot(EwL_GeAz, MRotor_B1F1);
  C_com[487] = -f_dot(EwL_GeAz, MRotor_B1E1);
  C_com[521] = -f_dot(EwL_GeAz, MRotor_B1F2);
  C_com[555] = -f_dot(EwL_GeAz, MRotor_B2F1);
  C_com[589] = -f_dot(EwL_GeAz, MRotor_B2E1);
  C_com[623] = -f_dot(EwL_GeAz, MRotor_B2F2);
  C_com[657] = -f_dot(EwL_GeAz, MRotor_B3F1);
  C_com[691] = -f_dot(EwL_GeAz, MRotor_B3E1);
  C_com[725] = -f_dot(EwL_GeAz, MRotor_B3F2);

  /*  r = 13   */
  C_com[420] = -f_dot(EwL_GeAz, MRotor_DrTr);
  C_com[454] = -f_dot(EwL_GeAz, MRotor_B1F1);
  C_com[488] = -f_dot(EwL_GeAz, MRotor_B1E1);
  C_com[522] = -f_dot(EwL_GeAz, MRotor_B1F2);
  C_com[556] = -f_dot(EwL_GeAz, MRotor_B2F1);
  C_com[590] = -f_dot(EwL_GeAz, MRotor_B2E1);
  C_com[624] = -f_dot(EwL_GeAz, MRotor_B2F2);
  C_com[658] = -f_dot(EwL_GeAz, MRotor_B3F1);
  C_com[692] = -f_dot(EwL_GeAz, MRotor_B3E1);
  C_com[726] = -f_dot(EwL_GeAz, MRotor_B3F2);
  memcpy(&dv1[0], &C_com[0], 1156U * sizeof(real_T));
  memcpy(&dv2[0], &C_com[0], 1156U * sizeof(real_T));
  triu(dv1);
  b_triu(dv2);
  for (it = 0; it < 34; it++) {
    for (b_it = 0; b_it < 34; b_it++) {
      n = b_it + 34 * it;
      C_com[n] = dv1[n] + dv2[it + 34 * b_it];
    }
  }

  /*  Additional C terms */
  /*  Blade 1 */
  g_dot(EvS1_B1F1, EvS1_B1F1, rQS1_3);
  for (it = 0; it <= 16; it += 2) {
    r = _mm_loadu_pd(&rQS1_3[it]);
    _mm_storeu_pd(&rQS1_3[it], _mm_mul_pd(_mm_loadu_pd(&Bld->mB1[it]), r));
  }

  rQS1_3[18] *= Bld->mB1[18];
  st.site = &ul_emlrtRSI;
  IM_nom[455] = d_trapz(Bld->BldSec, rQS1_3);
  g_dot(EvS1_B1F1, EvS1_B1E1, rQS1_3);
  for (it = 0; it <= 16; it += 2) {
    r = _mm_loadu_pd(&rQS1_3[it]);
    _mm_storeu_pd(&rQS1_3[it], _mm_mul_pd(_mm_loadu_pd(&Bld->mB1[it]), r));
  }

  rQS1_3[18] *= Bld->mB1[18];
  st.site = &vl_emlrtRSI;
  IM_nom[489] = d_trapz(Bld->BldSec, rQS1_3);
  g_dot(EvS1_B1F1, EvS1_B1F2, rQS1_3);
  for (it = 0; it <= 16; it += 2) {
    r = _mm_loadu_pd(&rQS1_3[it]);
    _mm_storeu_pd(&rQS1_3[it], _mm_mul_pd(_mm_loadu_pd(&Bld->mB1[it]), r));
  }

  rQS1_3[18] *= Bld->mB1[18];
  st.site = &wl_emlrtRSI;
  IM_nom[523] = d_trapz(Bld->BldSec, rQS1_3);
  g_dot(EvS1_B1E1, EvS1_B1E1, rQS1_3);
  for (it = 0; it <= 16; it += 2) {
    r = _mm_loadu_pd(&rQS1_3[it]);
    _mm_storeu_pd(&rQS1_3[it], _mm_mul_pd(_mm_loadu_pd(&Bld->mB1[it]), r));
  }

  rQS1_3[18] *= Bld->mB1[18];
  st.site = &xl_emlrtRSI;
  IM_nom[490] = d_trapz(Bld->BldSec, rQS1_3);
  g_dot(EvS1_B1E1, EvS1_B1F2, rQS1_3);
  for (it = 0; it <= 16; it += 2) {
    r = _mm_loadu_pd(&rQS1_3[it]);
    _mm_storeu_pd(&rQS1_3[it], _mm_mul_pd(_mm_loadu_pd(&Bld->mB1[it]), r));
  }

  rQS1_3[18] *= Bld->mB1[18];
  st.site = &yl_emlrtRSI;
  IM_nom[524] = d_trapz(Bld->BldSec, rQS1_3);
  g_dot(EvS1_B1F2, EvS1_B1F2, rQS1_3);
  for (it = 0; it <= 16; it += 2) {
    r = _mm_loadu_pd(&rQS1_3[it]);
    _mm_storeu_pd(&rQS1_3[it], _mm_mul_pd(_mm_loadu_pd(&Bld->mB1[it]), r));
  }

  rQS1_3[18] *= Bld->mB1[18];
  st.site = &am_emlrtRSI;
  IM_nom[525] = d_trapz(Bld->BldSec, rQS1_3);
  memcpy(&dv1[0], &IM_nom[0], 1156U * sizeof(real_T));
  memcpy(&dv2[0], &IM_nom[0], 1156U * sizeof(real_T));
  triu(dv1);
  b_triu(dv2);
  for (it = 0; it < 34; it++) {
    for (b_it = 0; b_it < 34; b_it++) {
      n = b_it + 34 * it;
      IM_nom[n] = dv1[n] + dv2[it + 34 * b_it];
    }
  }

  /*  end of Blade 1 */
  /*  #7. Blade 2 */
  g_dot(EvS2_B2F1, EvS2_B2F1, rQS1_3);
  for (it = 0; it <= 16; it += 2) {
    r = _mm_loadu_pd(&rQS1_3[it]);
    _mm_storeu_pd(&rQS1_3[it], _mm_mul_pd(_mm_loadu_pd(&Bld->mB1[it]), r));
  }

  rQS1_3[18] *= Bld->mB1[18];
  st.site = &bm_emlrtRSI;
  C_B2[560] = d_trapz(Bld->BldSec, rQS1_3);
  g_dot(EvS2_B2F1, EvS2_B2E1, rQS1_3);
  for (it = 0; it <= 16; it += 2) {
    r = _mm_loadu_pd(&rQS1_3[it]);
    _mm_storeu_pd(&rQS1_3[it], _mm_mul_pd(_mm_loadu_pd(&Bld->mB1[it]), r));
  }

  rQS1_3[18] *= Bld->mB1[18];
  st.site = &cm_emlrtRSI;
  C_B2[594] = d_trapz(Bld->BldSec, rQS1_3);
  g_dot(EvS2_B2F1, EvS2_B2F2, rQS1_3);
  for (it = 0; it <= 16; it += 2) {
    r = _mm_loadu_pd(&rQS1_3[it]);
    _mm_storeu_pd(&rQS1_3[it], _mm_mul_pd(_mm_loadu_pd(&Bld->mB1[it]), r));
  }

  rQS1_3[18] *= Bld->mB1[18];
  st.site = &dm_emlrtRSI;
  C_B2[628] = d_trapz(Bld->BldSec, rQS1_3);
  g_dot(EvS2_B2E1, EvS2_B2E1, rQS1_3);
  for (it = 0; it <= 16; it += 2) {
    r = _mm_loadu_pd(&rQS1_3[it]);
    _mm_storeu_pd(&rQS1_3[it], _mm_mul_pd(_mm_loadu_pd(&Bld->mB1[it]), r));
  }

  rQS1_3[18] *= Bld->mB1[18];
  st.site = &em_emlrtRSI;
  C_B2[595] = d_trapz(Bld->BldSec, rQS1_3);
  g_dot(EvS2_B2E1, EvS2_B2F2, rQS1_3);
  for (it = 0; it <= 16; it += 2) {
    r = _mm_loadu_pd(&rQS1_3[it]);
    _mm_storeu_pd(&rQS1_3[it], _mm_mul_pd(_mm_loadu_pd(&Bld->mB1[it]), r));
  }

  rQS1_3[18] *= Bld->mB1[18];
  st.site = &fm_emlrtRSI;
  C_B2[629] = d_trapz(Bld->BldSec, rQS1_3);
  g_dot(EvS2_B2F2, EvS2_B2F2, rQS1_3);
  for (it = 0; it <= 16; it += 2) {
    r = _mm_loadu_pd(&rQS1_3[it]);
    _mm_storeu_pd(&rQS1_3[it], _mm_mul_pd(_mm_loadu_pd(&Bld->mB1[it]), r));
  }

  rQS1_3[18] *= Bld->mB1[18];
  st.site = &gm_emlrtRSI;
  C_B2[630] = d_trapz(Bld->BldSec, rQS1_3);
  memcpy(&dv1[0], &C_B2[0], 1156U * sizeof(real_T));
  memcpy(&dv2[0], &C_B2[0], 1156U * sizeof(real_T));
  triu(dv1);
  b_triu(dv2);
  for (it = 0; it < 34; it++) {
    for (b_it = 0; b_it < 34; b_it++) {
      n = b_it + 34 * it;
      C_B2[n] = dv1[n] + dv2[it + 34 * b_it];
    }
  }

  /*  end of Blade 2 */
  /*  Blade 3 */
  g_dot(EvS3_B3F1, EvS3_B3F1, rQS1_3);
  for (it = 0; it <= 16; it += 2) {
    r = _mm_loadu_pd(&rQS1_3[it]);
    _mm_storeu_pd(&rQS1_3[it], _mm_mul_pd(_mm_loadu_pd(&Bld->mB1[it]), r));
  }

  rQS1_3[18] *= Bld->mB1[18];
  st.site = &hm_emlrtRSI;
  C_B3[665] = d_trapz(Bld->BldSec, rQS1_3);
  g_dot(EvS3_B3F1, EvS3_B3E1, rQS1_3);
  for (it = 0; it <= 16; it += 2) {
    r = _mm_loadu_pd(&rQS1_3[it]);
    _mm_storeu_pd(&rQS1_3[it], _mm_mul_pd(_mm_loadu_pd(&Bld->mB1[it]), r));
  }

  rQS1_3[18] *= Bld->mB1[18];
  st.site = &im_emlrtRSI;
  C_B3[699] = d_trapz(Bld->BldSec, rQS1_3);
  g_dot(EvS3_B3F1, EvS3_B3F2, rQS1_3);
  for (it = 0; it <= 16; it += 2) {
    r = _mm_loadu_pd(&rQS1_3[it]);
    _mm_storeu_pd(&rQS1_3[it], _mm_mul_pd(_mm_loadu_pd(&Bld->mB1[it]), r));
  }

  rQS1_3[18] *= Bld->mB1[18];
  st.site = &jm_emlrtRSI;
  C_B3[733] = d_trapz(Bld->BldSec, rQS1_3);
  g_dot(EvS3_B3E1, EvS3_B3E1, rQS1_3);
  for (it = 0; it <= 16; it += 2) {
    r = _mm_loadu_pd(&rQS1_3[it]);
    _mm_storeu_pd(&rQS1_3[it], _mm_mul_pd(_mm_loadu_pd(&Bld->mB1[it]), r));
  }

  rQS1_3[18] *= Bld->mB1[18];
  st.site = &km_emlrtRSI;
  C_B3[700] = d_trapz(Bld->BldSec, rQS1_3);
  g_dot(EvS3_B3E1, EvS3_B3F2, rQS1_3);
  for (it = 0; it <= 16; it += 2) {
    r = _mm_loadu_pd(&rQS1_3[it]);
    _mm_storeu_pd(&rQS1_3[it], _mm_mul_pd(_mm_loadu_pd(&Bld->mB1[it]), r));
  }

  rQS1_3[18] *= Bld->mB1[18];
  st.site = &lm_emlrtRSI;
  C_B3[734] = d_trapz(Bld->BldSec, rQS1_3);
  g_dot(EvS3_B3F2, EvS3_B3F2, rQS1_3);
  for (it = 0; it <= 16; it += 2) {
    r = _mm_loadu_pd(&rQS1_3[it]);
    _mm_storeu_pd(&rQS1_1[it], _mm_mul_pd(_mm_loadu_pd(&Bld->mB1[it]), r));
  }

  rQS1_1[18] = Bld->mB1[18] * rQS1_3[18];
  st.site = &mm_emlrtRSI;
  C_B3[735] = d_trapz(Bld->BldSec, rQS1_1);
  memcpy(&dv1[0], &C_B3[0], 1156U * sizeof(real_T));
  memcpy(&dv2[0], &C_B3[0], 1156U * sizeof(real_T));
  triu(dv1);
  b_triu(dv2);
  for (it = 0; it < 34; it++) {
    for (b_it = 0; b_it < 34; b_it++) {
      n = b_it + 34 * it;
      C_B3[n] = dv1[n] + dv2[it + 34 * b_it];
    }
  }

  /*  end of Blade 3 */
  /*  Tower */
  h_dot(EvF_TFA1, EvF_TFA1, rZT_1);
  for (it = 0; it <= 8; it += 2) {
    r = _mm_loadu_pd(&rZT_1[it]);
    _mm_storeu_pd(&rZT_1[it], _mm_mul_pd(_mm_loadu_pd(&Twr->mT[it]), r));
  }

  rZT_1[10] *= Twr->mT[10];
  st.site = &nm_emlrtRSI;
  C_T[210] = e_trapz(Twr->TwrSec, rZT_1) + ElastoDyn->YawBrMass * f_dot(EvO_TFA1,
    EvO_TFA1);
  h_dot(EvF_TFA1, EvF_TSS1, rZT_1);
  for (it = 0; it <= 8; it += 2) {
    r = _mm_loadu_pd(&rZT_1[it]);
    _mm_storeu_pd(&rZT_1[it], _mm_mul_pd(_mm_loadu_pd(&Twr->mT[it]), r));
  }

  rZT_1[10] *= Twr->mT[10];
  st.site = &om_emlrtRSI;
  C_T[244] = e_trapz(Twr->TwrSec, rZT_1) + ElastoDyn->YawBrMass * f_dot(EvO_TFA1,
    EvO_TSS1);
  h_dot(EvF_TFA1, EvF_TFA2, rZT_1);
  for (it = 0; it <= 8; it += 2) {
    r = _mm_loadu_pd(&rZT_1[it]);
    _mm_storeu_pd(&rZT_1[it], _mm_mul_pd(_mm_loadu_pd(&Twr->mT[it]), r));
  }

  rZT_1[10] *= Twr->mT[10];
  st.site = &pm_emlrtRSI;
  C_T[278] = e_trapz(Twr->TwrSec, rZT_1) + ElastoDyn->YawBrMass * f_dot(EvO_TFA1,
    EvO_TFA2);
  h_dot(EvF_TFA1, EvF_TSS2, rZT_1);
  for (it = 0; it <= 8; it += 2) {
    r = _mm_loadu_pd(&rZT_1[it]);
    _mm_storeu_pd(&rZT_1[it], _mm_mul_pd(_mm_loadu_pd(&Twr->mT[it]), r));
  }

  rZT_1[10] *= Twr->mT[10];
  st.site = &qm_emlrtRSI;
  C_T[312] = e_trapz(Twr->TwrSec, rZT_1) + ElastoDyn->YawBrMass * f_dot(EvO_TFA1,
    EvO_TSS2);
  h_dot(EvF_TSS1, EvF_TSS1, rZT_1);
  for (it = 0; it <= 8; it += 2) {
    r = _mm_loadu_pd(&rZT_1[it]);
    _mm_storeu_pd(&rZT_1[it], _mm_mul_pd(_mm_loadu_pd(&Twr->mT[it]), r));
  }

  rZT_1[10] *= Twr->mT[10];
  st.site = &rm_emlrtRSI;
  C_T[245] = e_trapz(Twr->TwrSec, rZT_1) + ElastoDyn->YawBrMass * f_dot(EvO_TSS1,
    EvO_TSS1);
  h_dot(EvF_TSS1, EvF_TFA2, rZT_1);
  for (it = 0; it <= 8; it += 2) {
    r = _mm_loadu_pd(&rZT_1[it]);
    _mm_storeu_pd(&rZT_1[it], _mm_mul_pd(_mm_loadu_pd(&Twr->mT[it]), r));
  }

  rZT_1[10] *= Twr->mT[10];
  st.site = &sm_emlrtRSI;
  C_T[279] = e_trapz(Twr->TwrSec, rZT_1) + ElastoDyn->YawBrMass * f_dot(EvO_TSS1,
    EvO_TFA2);
  h_dot(EvF_TSS1, EvF_TSS2, rZT_1);
  for (it = 0; it <= 8; it += 2) {
    r = _mm_loadu_pd(&rZT_1[it]);
    _mm_storeu_pd(&rZT_1[it], _mm_mul_pd(_mm_loadu_pd(&Twr->mT[it]), r));
  }

  rZT_1[10] *= Twr->mT[10];
  st.site = &tm_emlrtRSI;
  C_T[313] = e_trapz(Twr->TwrSec, rZT_1) + ElastoDyn->YawBrMass * f_dot(EvO_TSS1,
    EvO_TSS2);
  h_dot(EvF_TFA2, EvF_TFA2, rZT_1);
  for (it = 0; it <= 8; it += 2) {
    r = _mm_loadu_pd(&rZT_1[it]);
    _mm_storeu_pd(&rZT_1[it], _mm_mul_pd(_mm_loadu_pd(&Twr->mT[it]), r));
  }

  rZT_1[10] *= Twr->mT[10];
  st.site = &um_emlrtRSI;
  C_T[280] = e_trapz(Twr->TwrSec, rZT_1) + ElastoDyn->YawBrMass * f_dot(EvO_TFA2,
    EvO_TFA2);
  h_dot(EvF_TFA2, EvF_TSS2, rZT_1);
  for (it = 0; it <= 8; it += 2) {
    r = _mm_loadu_pd(&rZT_1[it]);
    _mm_storeu_pd(&rZT_1[it], _mm_mul_pd(_mm_loadu_pd(&Twr->mT[it]), r));
  }

  rZT_1[10] *= Twr->mT[10];
  st.site = &vm_emlrtRSI;
  C_T[314] = e_trapz(Twr->TwrSec, rZT_1) + ElastoDyn->YawBrMass * f_dot(EvO_TFA2,
    EvO_TSS2);
  h_dot(EvF_TSS2, EvF_TSS2, rZT_1);
  for (it = 0; it <= 8; it += 2) {
    r = _mm_loadu_pd(&rZT_1[it]);
    _mm_storeu_pd(&rZT_2[it], _mm_mul_pd(_mm_loadu_pd(&Twr->mT[it]), r));
  }

  rZT_2[10] = Twr->mT[10] * rZT_1[10];
  st.site = &wm_emlrtRSI;
  C_T[315] = e_trapz(Twr->TwrSec, rZT_2) + ElastoDyn->YawBrMass * f_dot(EvO_TSS2,
    EvO_TSS2);
  memcpy(&dv1[0], &C_T[0], 1156U * sizeof(real_T));
  memcpy(&dv2[0], &C_T[0], 1156U * sizeof(real_T));
  triu(dv1);
  b_triu(dv2);
  for (it = 0; it < 34; it++) {
    for (b_it = 0; b_it < 34; b_it++) {
      n = b_it + 34 * it;
      C_T[n] = dv1[n] + dv2[it + 34 * b_it];
    }
  }

  /*  end of Tower */
  /*  Common f terms */
  f_nom[0] = c_dot(MB2_B2E1);
  f_nom[1] = d_dot(MB2_B2E1);
  f_nom[2] = e_dot(MB2_B2E1);
  f_nom[3] = c_dot(EvZ);
  f_nom[4] = d_dot(EvZ);
  f_nom[5] = e_dot(EvZ);
  f_nom[6] = f_dot(EvO_TFA1, FO_t) + f_dot(EwB_TFA1, MB1_TFA1);
  f_nom[7] = f_dot(EvO_TSS1, FO_t) + f_dot(EwB_TSS1, MB1_TFA1);
  f_nom[8] = f_dot(EvO_TFA2, FO_t) + f_dot(EwB_TFA2, MB1_TFA1);
  f_nom[9] = f_dot(EvO_TSS2, FO_t) + f_dot(EwB_TSS2, MB1_TFA1);
  f_nom[10] = f_dot(EwN_yaw, MB1_TFA1);
  f_nom[11] = f_dot(EwL_GeAz, MRotor_t);
  f_nom[12] = f_dot(EwL_GeAz, MRotor_t);

  /*  Additional f terms */
  /*  Blade 1 */
  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Bld->nb;
  st.site = &xm_emlrtRSI;
  f_repmat(&st, dEvQ_TSS1, VzB1);
  c_n = 3 * VzB1->size[2];
  n = VzB1->size[0] * VzB1->size[1] * VzB1->size[2];
  VzB1->size[0] = 1;
  VzB1->size[1] = 3;
  emxEnsureCapacity_real_T(sp, VzB1, n, &lh_emlrtRTEI);
  VzB1_data = VzB1->data;
  n = (c_n / 2) << 1;
  b_n = n - 2;
  for (b_it = 0; b_it <= b_n; b_it += 2) {
    r = _mm_loadu_pd(&VzB1_data[b_it]);
    _mm_storeu_pd(&VzB1_data[b_it], _mm_mul_pd(_mm_set1_pd(9.80665), r));
  }

  for (b_it = n; b_it < c_n; b_it++) {
    VzB1_data[b_it] *= 9.80665;
  }

  if ((VzB1->size[2] != 19) && (VzB1->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(VzB1->size[2], 19, &jj_emlrtECI, (emlrtConstCTX)
      sp);
  }

  if ((F_AeroB1->size[2] != 19) && (F_AeroB1->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(F_AeroB1->size[2], 19, &kj_emlrtECI,
      (emlrtConstCTX)sp);
  }

  if (VzB1->size[2] == 19) {
    for (it = 0; it <= 54; it += 2) {
      r = _mm_loadu_pd(&VzB1_data[it]);
      r1 = _mm_loadu_pd(&dEvS1[it]);
      _mm_storeu_pd(&EvS3[it], _mm_add_pd(r, r1));
    }

    EvS3[56] = VzB1_data[56] + dEvS1[56];
  } else {
    d_plus(EvS3, VzB1, dEvS1);
  }

  for (it = 0; it < 19; it++) {
    r = _mm_loadu_pd(&EvS3[3 * it]);
    I_pr_app = Bld->mB1[it];
    _mm_storeu_pd(&EvS1[3 * it], _mm_mul_pd(_mm_set1_pd(I_pr_app), r));
    n = 3 * it + 2;
    EvS1[n] = I_pr_app * EvS3[n];
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }

  if (F_AeroB1->size[2] == 19) {
    for (it = 0; it <= 54; it += 2) {
      r = _mm_loadu_pd(&F_AeroB1_data[it]);
      r1 = _mm_loadu_pd(&EvS1[it]);
      _mm_storeu_pd(&EvS1[it], _mm_sub_pd(r, r1));
    }

    EvS1[56] = F_AeroB1_data[56] - EvS1[56];
    g_dot(EvS1_B1F1, EvS1, rQS1_3);
  } else {
    binary_expand_op_15(EvS1_B1F1, F_AeroB1, EvS1, rQS1_3);
  }

  for (it = 0; it <= 54; it += 2) {
    r = _mm_loadu_pd(&c_out[it]);
    r1 = _mm_loadu_pd(&d_out[it]);
    _mm_storeu_pd(&c_out[it], _mm_add_pd(r, r1));
  }

  c_out[56] += d_out[56];
  st.site = &xm_emlrtRSI;
  dot(&st, c_out, M_AeroB1, rQS1_1);
  for (it = 0; it <= 16; it += 2) {
    r = _mm_loadu_pd(&rQS1_3[it]);
    r1 = _mm_loadu_pd(&rQS1_1[it]);
    _mm_storeu_pd(&rQS1_1[it], _mm_add_pd(r, r1));
  }

  rQS1_1[18] += rQS1_3[18];
  st.site = &xm_emlrtRSI;
  f_B1[13] = d_trapz(Bld->BldSec, rQS1_1);
  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Bld->nb;
  st.site = &ym_emlrtRSI;
  f_repmat(&st, dEvQ_TSS1, VzB1);
  c_n = 3 * VzB1->size[2];
  n = VzB1->size[0] * VzB1->size[1] * VzB1->size[2];
  VzB1->size[0] = 1;
  VzB1->size[1] = 3;
  emxEnsureCapacity_real_T(sp, VzB1, n, &mh_emlrtRTEI);
  VzB1_data = VzB1->data;
  n = (c_n / 2) << 1;
  b_n = n - 2;
  for (b_it = 0; b_it <= b_n; b_it += 2) {
    r = _mm_loadu_pd(&VzB1_data[b_it]);
    _mm_storeu_pd(&VzB1_data[b_it], _mm_mul_pd(_mm_set1_pd(9.80665), r));
  }

  for (b_it = n; b_it < c_n; b_it++) {
    VzB1_data[b_it] *= 9.80665;
  }

  if ((VzB1->size[2] != 19) && (VzB1->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(VzB1->size[2], 19, &lj_emlrtECI, (emlrtConstCTX)
      sp);
  }

  if ((F_AeroB1->size[2] != 19) && (F_AeroB1->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(F_AeroB1->size[2], 19, &mj_emlrtECI,
      (emlrtConstCTX)sp);
  }

  if (VzB1->size[2] == 19) {
    for (it = 0; it <= 54; it += 2) {
      r = _mm_loadu_pd(&VzB1_data[it]);
      r1 = _mm_loadu_pd(&dEvS1[it]);
      _mm_storeu_pd(&EvS3[it], _mm_add_pd(r, r1));
    }

    EvS3[56] = VzB1_data[56] + dEvS1[56];
  } else {
    d_plus(EvS3, VzB1, dEvS1);
  }

  for (it = 0; it < 19; it++) {
    r = _mm_loadu_pd(&EvS3[3 * it]);
    I_pr_app = Bld->mB1[it];
    _mm_storeu_pd(&c_out[3 * it], _mm_mul_pd(_mm_set1_pd(I_pr_app), r));
    n = 3 * it + 2;
    c_out[n] = I_pr_app * EvS3[n];
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }

  if (F_AeroB1->size[2] == 19) {
    for (it = 0; it <= 54; it += 2) {
      r = _mm_loadu_pd(&F_AeroB1_data[it]);
      r1 = _mm_loadu_pd(&c_out[it]);
      _mm_storeu_pd(&c_out[it], _mm_sub_pd(r, r1));
    }

    c_out[56] = F_AeroB1_data[56] - c_out[56];
    g_dot(EvS1_B1E1, c_out, rQS1_3);
  } else {
    binary_expand_op_15(EvS1_B1E1, F_AeroB1, c_out, rQS1_3);
  }

  for (it = 0; it <= 54; it += 2) {
    r = _mm_loadu_pd(&u_out[it]);
    r1 = _mm_loadu_pd(&v_out[it]);
    _mm_storeu_pd(&u_out[it], _mm_add_pd(r, r1));
  }

  u_out[56] += v_out[56];
  st.site = &ym_emlrtRSI;
  dot(&st, u_out, M_AeroB1, rQS1_1);
  for (it = 0; it <= 16; it += 2) {
    r = _mm_loadu_pd(&rQS1_3[it]);
    r1 = _mm_loadu_pd(&rQS1_1[it]);
    _mm_storeu_pd(&rQS1_1[it], _mm_add_pd(r, r1));
  }

  rQS1_1[18] += rQS1_3[18];
  st.site = &ym_emlrtRSI;
  f_B1[14] = d_trapz(Bld->BldSec, rQS1_1);
  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Bld->nb;
  st.site = &an_emlrtRSI;
  f_repmat(&st, dEvQ_TSS1, VzB1);
  c_n = 3 * VzB1->size[2];
  n = VzB1->size[0] * VzB1->size[1] * VzB1->size[2];
  VzB1->size[0] = 1;
  VzB1->size[1] = 3;
  emxEnsureCapacity_real_T(sp, VzB1, n, &nh_emlrtRTEI);
  VzB1_data = VzB1->data;
  n = (c_n / 2) << 1;
  b_n = n - 2;
  for (b_it = 0; b_it <= b_n; b_it += 2) {
    r = _mm_loadu_pd(&VzB1_data[b_it]);
    _mm_storeu_pd(&VzB1_data[b_it], _mm_mul_pd(_mm_set1_pd(9.80665), r));
  }

  for (b_it = n; b_it < c_n; b_it++) {
    VzB1_data[b_it] *= 9.80665;
  }

  if ((VzB1->size[2] != 19) && (VzB1->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(VzB1->size[2], 19, &nj_emlrtECI, (emlrtConstCTX)
      sp);
  }

  if ((F_AeroB1->size[2] != 19) && (F_AeroB1->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(F_AeroB1->size[2], 19, &oj_emlrtECI,
      (emlrtConstCTX)sp);
  }

  if (VzB1->size[2] == 19) {
    for (it = 0; it <= 54; it += 2) {
      r = _mm_loadu_pd(&VzB1_data[it]);
      r1 = _mm_loadu_pd(&dEvS1[it]);
      _mm_storeu_pd(&dEvS1[it], _mm_add_pd(r, r1));
    }

    dEvS1[56] += VzB1_data[56];
  } else {
    c_plus(dEvS1, VzB1);
  }

  for (it = 0; it < 19; it++) {
    r = _mm_loadu_pd(&dEvS1[3 * it]);
    I_pr_app = Bld->mB1[it];
    _mm_storeu_pd(&c_out[3 * it], _mm_mul_pd(_mm_set1_pd(I_pr_app), r));
    n = 3 * it + 2;
    c_out[n] = I_pr_app * dEvS1[n];
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }

  if (F_AeroB1->size[2] == 19) {
    for (it = 0; it <= 54; it += 2) {
      r = _mm_loadu_pd(&F_AeroB1_data[it]);
      r1 = _mm_loadu_pd(&c_out[it]);
      _mm_storeu_pd(&c_out[it], _mm_sub_pd(r, r1));
    }

    c_out[56] = F_AeroB1_data[56] - c_out[56];
    g_dot(EvS1_B1F2, c_out, rQS1_3);
  } else {
    binary_expand_op_15(EvS1_B1F2, F_AeroB1, c_out, rQS1_3);
  }

  emxFree_real_T(sp, &F_AeroB1);
  for (it = 0; it <= 54; it += 2) {
    r = _mm_loadu_pd(&w_out[it]);
    r1 = _mm_loadu_pd(&x_out[it]);
    _mm_storeu_pd(&w_out[it], _mm_add_pd(r, r1));
  }

  w_out[56] += x_out[56];
  st.site = &an_emlrtRSI;
  dot(&st, w_out, M_AeroB1, rQS1_1);
  for (it = 0; it <= 16; it += 2) {
    r = _mm_loadu_pd(&rQS1_3[it]);
    r1 = _mm_loadu_pd(&rQS1_1[it]);
    _mm_storeu_pd(&rQS1_1[it], _mm_add_pd(r, r1));
  }

  rQS1_1[18] += rQS1_3[18];
  st.site = &an_emlrtRSI;
  f_B1[15] = d_trapz(Bld->BldSec, rQS1_1);
  f_ElasticB1[13] = -Bld->k11_B1F * q_Nom[13] - Bld->k12_B1F * q_Nom[15];
  f_ElasticB1[14] = -Bld->k11_B1E * q_Nom[14];
  f_ElasticB1[15] = -Bld->k12_B1F * q_Nom[13] - Bld->k22_B1F * q_Nom[15];
  I_yaw_app = -Bld->zeta1_B1F * Bld->k11_B1F / 3.1415926535897931 / Bld->f1_B1F;
  v_c_tip_Z = Bld->zeta2_B1F * Bld->k12_B1F / 3.1415926535897931 / Bld->f2_B1F;
  f_DampingB1[13] = I_yaw_app * q_Nom[47] - v_c_tip_Z * q_Nom[49];
  ak_tip_Z = -Bld->zeta1_B1E * Bld->k11_B1E / 3.1415926535897931 / Bld->f1_B1E;
  f_DampingB1[14] = ak_tip_Z * q_Nom[48];
  g_proj_X = -Bld->zeta1_B1F * Bld->k12_B1F / 3.1415926535897931 / Bld->f1_B1F;
  g_proj_Y = Bld->zeta2_B1F * Bld->k22_B1F / 3.1415926535897931 / Bld->f2_B1F;
  f_DampingB1[15] = g_proj_X * q_Nom[47] - g_proj_Y * q_Nom[49];

  /*  Blade 2 */
  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Bld->nb;
  st.site = &bn_emlrtRSI;
  f_repmat(&st, dEvQ_TSS1, VzB1);
  c_n = 3 * VzB1->size[2];
  n = VzB1->size[0] * VzB1->size[1] * VzB1->size[2];
  VzB1->size[0] = 1;
  VzB1->size[1] = 3;
  emxEnsureCapacity_real_T(sp, VzB1, n, &oh_emlrtRTEI);
  VzB1_data = VzB1->data;
  n = (c_n / 2) << 1;
  b_n = n - 2;
  for (b_it = 0; b_it <= b_n; b_it += 2) {
    r = _mm_loadu_pd(&VzB1_data[b_it]);
    _mm_storeu_pd(&VzB1_data[b_it], _mm_mul_pd(_mm_set1_pd(9.80665), r));
  }

  for (b_it = n; b_it < c_n; b_it++) {
    VzB1_data[b_it] *= 9.80665;
  }

  if ((VzB1->size[2] != 19) && (VzB1->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(VzB1->size[2], 19, &pj_emlrtECI, (emlrtConstCTX)
      sp);
  }

  if ((F_AeroB2->size[2] != 19) && (F_AeroB2->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(F_AeroB2->size[2], 19, &qj_emlrtECI,
      (emlrtConstCTX)sp);
  }

  if (VzB1->size[2] == 19) {
    for (it = 0; it <= 54; it += 2) {
      r = _mm_loadu_pd(&VzB1_data[it]);
      r1 = _mm_loadu_pd(&dEvS2[it]);
      _mm_storeu_pd(&EvS3[it], _mm_add_pd(r, r1));
    }

    EvS3[56] = VzB1_data[56] + dEvS2[56];
  } else {
    d_plus(EvS3, VzB1, dEvS2);
  }

  for (it = 0; it < 19; it++) {
    r = _mm_loadu_pd(&EvS3[3 * it]);
    I_pr_app = Bld->mB1[it];
    _mm_storeu_pd(&c_out[3 * it], _mm_mul_pd(_mm_set1_pd(I_pr_app), r));
    n = 3 * it + 2;
    c_out[n] = I_pr_app * EvS3[n];
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }

  if (F_AeroB2->size[2] == 19) {
    for (it = 0; it <= 54; it += 2) {
      r = _mm_loadu_pd(&F_AeroB2_data[it]);
      r1 = _mm_loadu_pd(&c_out[it]);
      _mm_storeu_pd(&c_out[it], _mm_sub_pd(r, r1));
    }

    c_out[56] = F_AeroB2_data[56] - c_out[56];
    g_dot(EvS2_B2F1, c_out, rQS1_3);
  } else {
    binary_expand_op_15(EvS2_B2F1, F_AeroB2, c_out, rQS1_3);
  }

  for (it = 0; it <= 54; it += 2) {
    r = _mm_loadu_pd(&y_out[it]);
    r1 = _mm_loadu_pd(&ab_out[it]);
    _mm_storeu_pd(&y_out[it], _mm_add_pd(r, r1));
  }

  y_out[56] += ab_out[56];
  st.site = &bn_emlrtRSI;
  dot(&st, y_out, M_AeroB1, rQS1_1);
  for (it = 0; it <= 16; it += 2) {
    r = _mm_loadu_pd(&rQS1_3[it]);
    r1 = _mm_loadu_pd(&rQS1_1[it]);
    _mm_storeu_pd(&rQS1_1[it], _mm_add_pd(r, r1));
  }

  rQS1_1[18] += rQS1_3[18];
  st.site = &bn_emlrtRSI;
  f_B2[16] = d_trapz(Bld->BldSec, rQS1_1);
  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Bld->nb;
  st.site = &cn_emlrtRSI;
  f_repmat(&st, dEvQ_TSS1, VzB1);
  c_n = 3 * VzB1->size[2];
  n = VzB1->size[0] * VzB1->size[1] * VzB1->size[2];
  VzB1->size[0] = 1;
  VzB1->size[1] = 3;
  emxEnsureCapacity_real_T(sp, VzB1, n, &ph_emlrtRTEI);
  VzB1_data = VzB1->data;
  n = (c_n / 2) << 1;
  b_n = n - 2;
  for (b_it = 0; b_it <= b_n; b_it += 2) {
    r = _mm_loadu_pd(&VzB1_data[b_it]);
    _mm_storeu_pd(&VzB1_data[b_it], _mm_mul_pd(_mm_set1_pd(9.80665), r));
  }

  for (b_it = n; b_it < c_n; b_it++) {
    VzB1_data[b_it] *= 9.80665;
  }

  if ((VzB1->size[2] != 19) && (VzB1->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(VzB1->size[2], 19, &rj_emlrtECI, (emlrtConstCTX)
      sp);
  }

  if ((F_AeroB2->size[2] != 19) && (F_AeroB2->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(F_AeroB2->size[2], 19, &sj_emlrtECI,
      (emlrtConstCTX)sp);
  }

  if (VzB1->size[2] == 19) {
    for (it = 0; it <= 54; it += 2) {
      r = _mm_loadu_pd(&VzB1_data[it]);
      r1 = _mm_loadu_pd(&dEvS2[it]);
      _mm_storeu_pd(&EvS3[it], _mm_add_pd(r, r1));
    }

    EvS3[56] = VzB1_data[56] + dEvS2[56];
  } else {
    d_plus(EvS3, VzB1, dEvS2);
  }

  for (it = 0; it < 19; it++) {
    r = _mm_loadu_pd(&EvS3[3 * it]);
    I_pr_app = Bld->mB1[it];
    _mm_storeu_pd(&c_out[3 * it], _mm_mul_pd(_mm_set1_pd(I_pr_app), r));
    n = 3 * it + 2;
    c_out[n] = I_pr_app * EvS3[n];
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }

  if (F_AeroB2->size[2] == 19) {
    for (it = 0; it <= 54; it += 2) {
      r = _mm_loadu_pd(&F_AeroB2_data[it]);
      r1 = _mm_loadu_pd(&c_out[it]);
      _mm_storeu_pd(&c_out[it], _mm_sub_pd(r, r1));
    }

    c_out[56] = F_AeroB2_data[56] - c_out[56];
    g_dot(EvS2_B2E1, c_out, rQS1_3);
  } else {
    binary_expand_op_15(EvS2_B2E1, F_AeroB2, c_out, rQS1_3);
  }

  for (it = 0; it <= 54; it += 2) {
    r = _mm_loadu_pd(&bb_out[it]);
    r1 = _mm_loadu_pd(&cb_out[it]);
    _mm_storeu_pd(&bb_out[it], _mm_add_pd(r, r1));
  }

  bb_out[56] += cb_out[56];
  st.site = &cn_emlrtRSI;
  dot(&st, bb_out, M_AeroB1, rQS1_1);
  for (it = 0; it <= 16; it += 2) {
    r = _mm_loadu_pd(&rQS1_3[it]);
    r1 = _mm_loadu_pd(&rQS1_1[it]);
    _mm_storeu_pd(&rQS1_1[it], _mm_add_pd(r, r1));
  }

  rQS1_1[18] += rQS1_3[18];
  st.site = &cn_emlrtRSI;
  f_B2[17] = d_trapz(Bld->BldSec, rQS1_1);
  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Bld->nb;
  st.site = &dn_emlrtRSI;
  f_repmat(&st, dEvQ_TSS1, VzB1);
  c_n = 3 * VzB1->size[2];
  n = VzB1->size[0] * VzB1->size[1] * VzB1->size[2];
  VzB1->size[0] = 1;
  VzB1->size[1] = 3;
  emxEnsureCapacity_real_T(sp, VzB1, n, &qh_emlrtRTEI);
  VzB1_data = VzB1->data;
  n = (c_n / 2) << 1;
  b_n = n - 2;
  for (b_it = 0; b_it <= b_n; b_it += 2) {
    r = _mm_loadu_pd(&VzB1_data[b_it]);
    _mm_storeu_pd(&VzB1_data[b_it], _mm_mul_pd(_mm_set1_pd(9.80665), r));
  }

  for (b_it = n; b_it < c_n; b_it++) {
    VzB1_data[b_it] *= 9.80665;
  }

  if ((VzB1->size[2] != 19) && (VzB1->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(VzB1->size[2], 19, &tj_emlrtECI, (emlrtConstCTX)
      sp);
  }

  if ((F_AeroB2->size[2] != 19) && (F_AeroB2->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(F_AeroB2->size[2], 19, &uj_emlrtECI,
      (emlrtConstCTX)sp);
  }

  if (VzB1->size[2] == 19) {
    for (it = 0; it <= 54; it += 2) {
      r = _mm_loadu_pd(&VzB1_data[it]);
      r1 = _mm_loadu_pd(&dEvS2[it]);
      _mm_storeu_pd(&dEvS2[it], _mm_add_pd(r, r1));
    }

    dEvS2[56] += VzB1_data[56];
  } else {
    c_plus(dEvS2, VzB1);
  }

  for (it = 0; it < 19; it++) {
    r = _mm_loadu_pd(&dEvS2[3 * it]);
    I_pr_app = Bld->mB1[it];
    _mm_storeu_pd(&c_out[3 * it], _mm_mul_pd(_mm_set1_pd(I_pr_app), r));
    n = 3 * it + 2;
    c_out[n] = I_pr_app * dEvS2[n];
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }

  if (F_AeroB2->size[2] == 19) {
    for (it = 0; it <= 54; it += 2) {
      r = _mm_loadu_pd(&F_AeroB2_data[it]);
      r1 = _mm_loadu_pd(&c_out[it]);
      _mm_storeu_pd(&c_out[it], _mm_sub_pd(r, r1));
    }

    c_out[56] = F_AeroB2_data[56] - c_out[56];
    g_dot(EvS2_B2F2, c_out, rQS1_3);
  } else {
    binary_expand_op_15(EvS2_B2F2, F_AeroB2, c_out, rQS1_3);
  }

  emxFree_real_T(sp, &F_AeroB2);
  for (it = 0; it <= 54; it += 2) {
    r = _mm_loadu_pd(&db_out[it]);
    r1 = _mm_loadu_pd(&eb_out[it]);
    _mm_storeu_pd(&db_out[it], _mm_add_pd(r, r1));
  }

  db_out[56] += eb_out[56];
  st.site = &dn_emlrtRSI;
  dot(&st, db_out, M_AeroB1, rQS1_1);
  for (it = 0; it <= 16; it += 2) {
    r = _mm_loadu_pd(&rQS1_3[it]);
    r1 = _mm_loadu_pd(&rQS1_1[it]);
    _mm_storeu_pd(&rQS1_1[it], _mm_add_pd(r, r1));
  }

  rQS1_1[18] += rQS1_3[18];
  st.site = &dn_emlrtRSI;
  f_B2[18] = d_trapz(Bld->BldSec, rQS1_1);
  f_ElasticB2[16] = -Bld->k11_B1F * q_Nom[16] - Bld->k12_B1F * q_Nom[18];
  f_ElasticB2[17] = -Bld->k11_B1E * q_Nom[17];
  f_ElasticB2[18] = -Bld->k12_B1F * q_Nom[16] - Bld->k22_B1F * q_Nom[18];
  f_DampingB2[16] = I_yaw_app * q_Nom[50] - v_c_tip_Z * q_Nom[52];
  f_DampingB2[17] = ak_tip_Z * q_Nom[51];
  f_DampingB2[18] = g_proj_X * q_Nom[50] - g_proj_Y * q_Nom[52];

  /*  Blade 3 */
  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Bld->nb;
  st.site = &en_emlrtRSI;
  f_repmat(&st, dEvQ_TSS1, VzB1);
  c_n = 3 * VzB1->size[2];
  n = VzB1->size[0] * VzB1->size[1] * VzB1->size[2];
  VzB1->size[0] = 1;
  VzB1->size[1] = 3;
  emxEnsureCapacity_real_T(sp, VzB1, n, &rh_emlrtRTEI);
  VzB1_data = VzB1->data;
  n = (c_n / 2) << 1;
  b_n = n - 2;
  for (b_it = 0; b_it <= b_n; b_it += 2) {
    r = _mm_loadu_pd(&VzB1_data[b_it]);
    _mm_storeu_pd(&VzB1_data[b_it], _mm_mul_pd(_mm_set1_pd(9.80665), r));
  }

  for (b_it = n; b_it < c_n; b_it++) {
    VzB1_data[b_it] *= 9.80665;
  }

  if ((VzB1->size[2] != 19) && (VzB1->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(VzB1->size[2], 19, &vj_emlrtECI, (emlrtConstCTX)
      sp);
  }

  if ((F_AeroB3->size[2] != 19) && (F_AeroB3->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(F_AeroB3->size[2], 19, &wj_emlrtECI,
      (emlrtConstCTX)sp);
  }

  if (VzB1->size[2] == 19) {
    for (it = 0; it <= 54; it += 2) {
      r = _mm_loadu_pd(&VzB1_data[it]);
      r1 = _mm_loadu_pd(&dEvS3[it]);
      _mm_storeu_pd(&EvS3[it], _mm_add_pd(r, r1));
    }

    EvS3[56] = VzB1_data[56] + dEvS3[56];
  } else {
    d_plus(EvS3, VzB1, dEvS3);
  }

  for (it = 0; it < 19; it++) {
    r = _mm_loadu_pd(&EvS3[3 * it]);
    I_pr_app = Bld->mB1[it];
    _mm_storeu_pd(&c_out[3 * it], _mm_mul_pd(_mm_set1_pd(I_pr_app), r));
    n = 3 * it + 2;
    c_out[n] = I_pr_app * EvS3[n];
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }

  if (F_AeroB3->size[2] == 19) {
    for (it = 0; it <= 54; it += 2) {
      r = _mm_loadu_pd(&F_AeroB3_data[it]);
      r1 = _mm_loadu_pd(&c_out[it]);
      _mm_storeu_pd(&c_out[it], _mm_sub_pd(r, r1));
    }

    c_out[56] = F_AeroB3_data[56] - c_out[56];
    g_dot(EvS3_B3F1, c_out, rQS1_3);
  } else {
    binary_expand_op_15(EvS3_B3F1, F_AeroB3, c_out, rQS1_3);
  }

  for (it = 0; it <= 54; it += 2) {
    r = _mm_loadu_pd(&o_out[it]);
    r1 = _mm_loadu_pd(&p_out[it]);
    _mm_storeu_pd(&o_out[it], _mm_add_pd(r, r1));
  }

  o_out[56] += p_out[56];
  st.site = &en_emlrtRSI;
  dot(&st, o_out, M_AeroB1, rQS1_1);
  for (it = 0; it <= 16; it += 2) {
    r = _mm_loadu_pd(&rQS1_3[it]);
    r1 = _mm_loadu_pd(&rQS1_1[it]);
    _mm_storeu_pd(&rQS1_1[it], _mm_add_pd(r, r1));
  }

  rQS1_1[18] += rQS1_3[18];
  st.site = &en_emlrtRSI;
  f_B3[19] = d_trapz(Bld->BldSec, rQS1_1);
  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Bld->nb;
  st.site = &fn_emlrtRSI;
  f_repmat(&st, dEvQ_TSS1, VzB1);
  c_n = 3 * VzB1->size[2];
  n = VzB1->size[0] * VzB1->size[1] * VzB1->size[2];
  VzB1->size[0] = 1;
  VzB1->size[1] = 3;
  emxEnsureCapacity_real_T(sp, VzB1, n, &sh_emlrtRTEI);
  VzB1_data = VzB1->data;
  n = (c_n / 2) << 1;
  b_n = n - 2;
  for (b_it = 0; b_it <= b_n; b_it += 2) {
    r = _mm_loadu_pd(&VzB1_data[b_it]);
    _mm_storeu_pd(&VzB1_data[b_it], _mm_mul_pd(_mm_set1_pd(9.80665), r));
  }

  for (b_it = n; b_it < c_n; b_it++) {
    VzB1_data[b_it] *= 9.80665;
  }

  if ((VzB1->size[2] != 19) && (VzB1->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(VzB1->size[2], 19, &xj_emlrtECI, (emlrtConstCTX)
      sp);
  }

  if ((F_AeroB3->size[2] != 19) && (F_AeroB3->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(F_AeroB3->size[2], 19, &yj_emlrtECI,
      (emlrtConstCTX)sp);
  }

  if (VzB1->size[2] == 19) {
    for (it = 0; it <= 54; it += 2) {
      r = _mm_loadu_pd(&VzB1_data[it]);
      r1 = _mm_loadu_pd(&dEvS3[it]);
      _mm_storeu_pd(&EvS3[it], _mm_add_pd(r, r1));
    }

    EvS3[56] = VzB1_data[56] + dEvS3[56];
  } else {
    d_plus(EvS3, VzB1, dEvS3);
  }

  for (it = 0; it < 19; it++) {
    r = _mm_loadu_pd(&EvS3[3 * it]);
    I_pr_app = Bld->mB1[it];
    _mm_storeu_pd(&c_out[3 * it], _mm_mul_pd(_mm_set1_pd(I_pr_app), r));
    n = 3 * it + 2;
    c_out[n] = I_pr_app * EvS3[n];
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }

  if (F_AeroB3->size[2] == 19) {
    for (it = 0; it <= 54; it += 2) {
      r = _mm_loadu_pd(&F_AeroB3_data[it]);
      r1 = _mm_loadu_pd(&c_out[it]);
      _mm_storeu_pd(&c_out[it], _mm_sub_pd(r, r1));
    }

    c_out[56] = F_AeroB3_data[56] - c_out[56];
    g_dot(EvS3_B3E1, c_out, rQS1_3);
  } else {
    binary_expand_op_15(EvS3_B3E1, F_AeroB3, c_out, rQS1_3);
  }

  for (it = 0; it <= 54; it += 2) {
    r = _mm_loadu_pd(&q_out[it]);
    r1 = _mm_loadu_pd(&r_out[it]);
    _mm_storeu_pd(&q_out[it], _mm_add_pd(r, r1));
  }

  q_out[56] += r_out[56];
  st.site = &fn_emlrtRSI;
  dot(&st, q_out, M_AeroB1, rQS1_1);
  for (it = 0; it <= 16; it += 2) {
    r = _mm_loadu_pd(&rQS1_3[it]);
    r1 = _mm_loadu_pd(&rQS1_1[it]);
    _mm_storeu_pd(&rQS1_1[it], _mm_add_pd(r, r1));
  }

  rQS1_1[18] += rQS1_3[18];
  st.site = &fn_emlrtRSI;
  f_B3[20] = d_trapz(Bld->BldSec, rQS1_1);
  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Bld->nb;
  st.site = &gn_emlrtRSI;
  f_repmat(&st, dEvQ_TSS1, VzB1);
  c_n = 3 * VzB1->size[2];
  n = VzB1->size[0] * VzB1->size[1] * VzB1->size[2];
  VzB1->size[0] = 1;
  VzB1->size[1] = 3;
  emxEnsureCapacity_real_T(sp, VzB1, n, &th_emlrtRTEI);
  VzB1_data = VzB1->data;
  n = (c_n / 2) << 1;
  b_n = n - 2;
  for (b_it = 0; b_it <= b_n; b_it += 2) {
    r = _mm_loadu_pd(&VzB1_data[b_it]);
    _mm_storeu_pd(&VzB1_data[b_it], _mm_mul_pd(_mm_set1_pd(9.80665), r));
  }

  for (b_it = n; b_it < c_n; b_it++) {
    VzB1_data[b_it] *= 9.80665;
  }

  if ((VzB1->size[2] != 19) && (VzB1->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(VzB1->size[2], 19, &ak_emlrtECI, (emlrtConstCTX)
      sp);
  }

  if ((F_AeroB3->size[2] != 19) && (F_AeroB3->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(F_AeroB3->size[2], 19, &bk_emlrtECI,
      (emlrtConstCTX)sp);
  }

  if (VzB1->size[2] == 19) {
    for (it = 0; it <= 54; it += 2) {
      r = _mm_loadu_pd(&VzB1_data[it]);
      r1 = _mm_loadu_pd(&dEvS3[it]);
      _mm_storeu_pd(&dEvS3[it], _mm_add_pd(r, r1));
    }

    dEvS3[56] += VzB1_data[56];
  } else {
    c_plus(dEvS3, VzB1);
  }

  for (it = 0; it < 19; it++) {
    r = _mm_loadu_pd(&dEvS3[3 * it]);
    I_pr_app = Bld->mB1[it];
    _mm_storeu_pd(&c_out[3 * it], _mm_mul_pd(_mm_set1_pd(I_pr_app), r));
    n = 3 * it + 2;
    c_out[n] = I_pr_app * dEvS3[n];
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }

  if (F_AeroB3->size[2] == 19) {
    for (it = 0; it <= 54; it += 2) {
      r = _mm_loadu_pd(&F_AeroB3_data[it]);
      r1 = _mm_loadu_pd(&c_out[it]);
      _mm_storeu_pd(&c_out[it], _mm_sub_pd(r, r1));
    }

    c_out[56] = F_AeroB3_data[56] - c_out[56];
    g_dot(EvS3_B3F2, c_out, rQS1_3);
  } else {
    binary_expand_op_15(EvS3_B3F2, F_AeroB3, c_out, rQS1_3);
  }

  emxFree_real_T(sp, &F_AeroB3);
  for (it = 0; it <= 54; it += 2) {
    r = _mm_loadu_pd(&s_out[it]);
    r1 = _mm_loadu_pd(&t_out[it]);
    _mm_storeu_pd(&s_out[it], _mm_add_pd(r, r1));
  }

  s_out[56] += t_out[56];
  st.site = &gn_emlrtRSI;
  dot(&st, s_out, M_AeroB1, rQS1_1);
  emxFree_real_T(sp, &M_AeroB1);
  for (it = 0; it <= 16; it += 2) {
    r = _mm_loadu_pd(&rQS1_3[it]);
    r1 = _mm_loadu_pd(&rQS1_1[it]);
    _mm_storeu_pd(&rQS1_3[it], _mm_add_pd(r, r1));
  }

  rQS1_3[18] += rQS1_1[18];
  st.site = &gn_emlrtRSI;
  f_B3[21] = d_trapz(Bld->BldSec, rQS1_3);
  f_ElasticB3[19] = -Bld->k11_B1F * q_Nom[19] - Bld->k12_B1F * q_Nom[21];
  f_ElasticB3[20] = -Bld->k11_B1E * q_Nom[20];
  f_ElasticB3[21] = -Bld->k12_B1F * q_Nom[19] - Bld->k22_B1F * q_Nom[21];
  f_DampingB3[19] = I_yaw_app * q_Nom[53] - v_c_tip_Z * q_Nom[55];
  f_DampingB3[20] = ak_tip_Z * q_Nom[54];
  f_DampingB3[21] = g_proj_X * q_Nom[53] - g_proj_Y * q_Nom[55];

  /*  Tower */
  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Twr->nt;
  st.site = &hn_emlrtRSI;
  f_repmat(&st, dEvQ_TSS1, VzB1);
  c_n = 3 * VzB1->size[2];
  n = VzB1->size[0] * VzB1->size[1] * VzB1->size[2];
  VzB1->size[0] = 1;
  VzB1->size[1] = 3;
  emxEnsureCapacity_real_T(sp, VzB1, n, &uh_emlrtRTEI);
  VzB1_data = VzB1->data;
  n = (c_n / 2) << 1;
  b_n = n - 2;
  for (b_it = 0; b_it <= b_n; b_it += 2) {
    r = _mm_loadu_pd(&VzB1_data[b_it]);
    _mm_storeu_pd(&VzB1_data[b_it], _mm_mul_pd(_mm_set1_pd(9.80665), r));
  }

  for (b_it = n; b_it < c_n; b_it++) {
    VzB1_data[b_it] *= 9.80665;
  }

  if ((VzB1->size[2] != 11) && (VzB1->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(VzB1->size[2], 11, &ck_emlrtECI, (emlrtConstCTX)
      sp);
  }

  if ((F_AeroT->size[2] != 11) && (F_AeroT->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(F_AeroT->size[2], 11, &dk_emlrtECI,
      (emlrtConstCTX)sp);
  }

  if (VzB1->size[2] == 11) {
    for (it = 0; it <= 30; it += 2) {
      r = _mm_loadu_pd(&VzB1_data[it]);
      r1 = _mm_loadu_pd(&dEvF[it]);
      _mm_storeu_pd(&XvT[it], _mm_add_pd(r, r1));
    }

    XvT[32] = VzB1_data[32] + dEvF[32];
  } else {
    b_plus(XvT, VzB1, dEvF);
  }

  for (it = 0; it < 11; it++) {
    r = _mm_loadu_pd(&XvT[3 * it]);
    I_pr_app = Twr->mT[it];
    _mm_storeu_pd(&out[3 * it], _mm_mul_pd(_mm_set1_pd(I_pr_app), r));
    n = 3 * it + 2;
    out[n] = I_pr_app * XvT[n];
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }

  if (F_AeroT->size[2] == 11) {
    for (it = 0; it <= 30; it += 2) {
      r = _mm_loadu_pd(&F_AeroT_data[it]);
      r1 = _mm_loadu_pd(&out[it]);
      _mm_storeu_pd(&out[it], _mm_sub_pd(r, r1));
    }

    out[32] = F_AeroT_data[32] - out[32];
    h_dot(EvF_TFA1, out, rZT_1);
  } else {
    binary_expand_op_11(EvF_TFA1, F_AeroT, out, rZT_1);
  }

  st.site = &hn_emlrtRSI;
  f_T[6] = e_trapz(Twr->TwrSec, rZT_1) - ElastoDyn->YawBrMass * f_dot(EvO_TFA1,
    dEvO_R);
  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Twr->nt;
  st.site = &in_emlrtRSI;
  f_repmat(&st, dEvQ_TSS1, VzB1);
  c_n = 3 * VzB1->size[2];
  n = VzB1->size[0] * VzB1->size[1] * VzB1->size[2];
  VzB1->size[0] = 1;
  VzB1->size[1] = 3;
  emxEnsureCapacity_real_T(sp, VzB1, n, &vh_emlrtRTEI);
  VzB1_data = VzB1->data;
  n = (c_n / 2) << 1;
  b_n = n - 2;
  for (b_it = 0; b_it <= b_n; b_it += 2) {
    r = _mm_loadu_pd(&VzB1_data[b_it]);
    _mm_storeu_pd(&VzB1_data[b_it], _mm_mul_pd(_mm_set1_pd(9.80665), r));
  }

  for (b_it = n; b_it < c_n; b_it++) {
    VzB1_data[b_it] *= 9.80665;
  }

  if ((VzB1->size[2] != 11) && (VzB1->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(VzB1->size[2], 11, &ek_emlrtECI, (emlrtConstCTX)
      sp);
  }

  if ((F_AeroT->size[2] != 11) && (F_AeroT->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(F_AeroT->size[2], 11, &fk_emlrtECI,
      (emlrtConstCTX)sp);
  }

  if (VzB1->size[2] == 11) {
    for (it = 0; it <= 30; it += 2) {
      r = _mm_loadu_pd(&VzB1_data[it]);
      r1 = _mm_loadu_pd(&dEvF[it]);
      _mm_storeu_pd(&XvT[it], _mm_add_pd(r, r1));
    }

    XvT[32] = VzB1_data[32] + dEvF[32];
  } else {
    b_plus(XvT, VzB1, dEvF);
  }

  for (it = 0; it < 11; it++) {
    r = _mm_loadu_pd(&XvT[3 * it]);
    I_pr_app = Twr->mT[it];
    _mm_storeu_pd(&out[3 * it], _mm_mul_pd(_mm_set1_pd(I_pr_app), r));
    n = 3 * it + 2;
    out[n] = I_pr_app * XvT[n];
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }

  if (F_AeroT->size[2] == 11) {
    for (it = 0; it <= 30; it += 2) {
      r = _mm_loadu_pd(&F_AeroT_data[it]);
      r1 = _mm_loadu_pd(&out[it]);
      _mm_storeu_pd(&out[it], _mm_sub_pd(r, r1));
    }

    out[32] = F_AeroT_data[32] - out[32];
    h_dot(EvF_TSS1, out, rZT_1);
  } else {
    binary_expand_op_11(EvF_TSS1, F_AeroT, out, rZT_1);
  }

  st.site = &in_emlrtRSI;
  f_T[7] = e_trapz(Twr->TwrSec, rZT_1) - ElastoDyn->YawBrMass * f_dot(EvO_TSS1,
    dEvO_R);
  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Twr->nt;
  st.site = &jn_emlrtRSI;
  f_repmat(&st, dEvQ_TSS1, VzB1);
  c_n = 3 * VzB1->size[2];
  n = VzB1->size[0] * VzB1->size[1] * VzB1->size[2];
  VzB1->size[0] = 1;
  VzB1->size[1] = 3;
  emxEnsureCapacity_real_T(sp, VzB1, n, &wh_emlrtRTEI);
  VzB1_data = VzB1->data;
  n = (c_n / 2) << 1;
  b_n = n - 2;
  for (b_it = 0; b_it <= b_n; b_it += 2) {
    r = _mm_loadu_pd(&VzB1_data[b_it]);
    _mm_storeu_pd(&VzB1_data[b_it], _mm_mul_pd(_mm_set1_pd(9.80665), r));
  }

  for (b_it = n; b_it < c_n; b_it++) {
    VzB1_data[b_it] *= 9.80665;
  }

  if ((VzB1->size[2] != 11) && (VzB1->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(VzB1->size[2], 11, &gk_emlrtECI, (emlrtConstCTX)
      sp);
  }

  if ((F_AeroT->size[2] != 11) && (F_AeroT->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(F_AeroT->size[2], 11, &hk_emlrtECI,
      (emlrtConstCTX)sp);
  }

  if (VzB1->size[2] == 11) {
    for (it = 0; it <= 30; it += 2) {
      r = _mm_loadu_pd(&VzB1_data[it]);
      r1 = _mm_loadu_pd(&dEvF[it]);
      _mm_storeu_pd(&XvT[it], _mm_add_pd(r, r1));
    }

    XvT[32] = VzB1_data[32] + dEvF[32];
  } else {
    b_plus(XvT, VzB1, dEvF);
  }

  for (it = 0; it < 11; it++) {
    r = _mm_loadu_pd(&XvT[3 * it]);
    I_pr_app = Twr->mT[it];
    _mm_storeu_pd(&out[3 * it], _mm_mul_pd(_mm_set1_pd(I_pr_app), r));
    n = 3 * it + 2;
    out[n] = I_pr_app * XvT[n];
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }

  if (F_AeroT->size[2] == 11) {
    for (it = 0; it <= 30; it += 2) {
      r = _mm_loadu_pd(&F_AeroT_data[it]);
      r1 = _mm_loadu_pd(&out[it]);
      _mm_storeu_pd(&out[it], _mm_sub_pd(r, r1));
    }

    out[32] = F_AeroT_data[32] - out[32];
    h_dot(EvF_TFA2, out, rZT_1);
  } else {
    binary_expand_op_11(EvF_TFA2, F_AeroT, out, rZT_1);
  }

  st.site = &jn_emlrtRSI;
  f_T[8] = e_trapz(Twr->TwrSec, rZT_1) - ElastoDyn->YawBrMass * f_dot(EvO_TFA2,
    dEvO_R);
  dEvQ_TSS1[0] = 1.0;
  dEvQ_TSS1[1] = 1.0;
  dEvQ_TSS1[2] = Twr->nt;
  st.site = &kn_emlrtRSI;
  f_repmat(&st, dEvQ_TSS1, VzB1);
  c_n = 3 * VzB1->size[2];
  n = VzB1->size[0] * VzB1->size[1] * VzB1->size[2];
  VzB1->size[0] = 1;
  VzB1->size[1] = 3;
  emxEnsureCapacity_real_T(sp, VzB1, n, &xh_emlrtRTEI);
  VzB1_data = VzB1->data;
  n = (c_n / 2) << 1;
  b_n = n - 2;
  for (b_it = 0; b_it <= b_n; b_it += 2) {
    r = _mm_loadu_pd(&VzB1_data[b_it]);
    _mm_storeu_pd(&VzB1_data[b_it], _mm_mul_pd(_mm_set1_pd(9.80665), r));
  }

  for (b_it = n; b_it < c_n; b_it++) {
    VzB1_data[b_it] *= 9.80665;
  }

  if ((VzB1->size[2] != 11) && (VzB1->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(VzB1->size[2], 11, &ik_emlrtECI, (emlrtConstCTX)
      sp);
  }

  if ((F_AeroT->size[2] != 11) && (F_AeroT->size[2] != 1)) {
    emlrtDimSizeImpxCheckR2021b(F_AeroT->size[2], 11, &jk_emlrtECI,
      (emlrtConstCTX)sp);
  }

  if (VzB1->size[2] == 11) {
    for (it = 0; it <= 30; it += 2) {
      r = _mm_loadu_pd(&VzB1_data[it]);
      r1 = _mm_loadu_pd(&dEvF[it]);
      _mm_storeu_pd(&dEvF[it], _mm_add_pd(r, r1));
    }

    dEvF[32] += VzB1_data[32];
  } else {
    plus(dEvF, VzB1);
  }

  for (it = 0; it < 11; it++) {
    r = _mm_loadu_pd(&dEvF[3 * it]);
    I_pr_app = Twr->mT[it];
    _mm_storeu_pd(&out[3 * it], _mm_mul_pd(_mm_set1_pd(I_pr_app), r));
    n = 3 * it + 2;
    out[n] = I_pr_app * dEvF[n];
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }

  if (F_AeroT->size[2] == 11) {
    for (it = 0; it <= 30; it += 2) {
      r = _mm_loadu_pd(&F_AeroT_data[it]);
      r1 = _mm_loadu_pd(&out[it]);
      _mm_storeu_pd(&out[it], _mm_sub_pd(r, r1));
    }

    out[32] = F_AeroT_data[32] - out[32];
    h_dot(EvF_TSS2, out, rZT_1);
  } else {
    binary_expand_op_11(EvF_TSS2, F_AeroT, out, rZT_1);
  }

  emxFree_real_T(sp, &F_AeroT);
  st.site = &kn_emlrtRSI;
  f_T[9] = e_trapz(Twr->TwrSec, rZT_1) - ElastoDyn->YawBrMass * f_dot(EvO_TSS2,
    dEvO_R);
  f_ElasticT[6] = -Twr->k11_TFA * q_Nom[6] - Twr->k12_TFA * q_Nom[8];
  f_ElasticT[7] = -Twr->k11_TSS * q_Nom[7] - Twr->k12_TSS * q_Nom[9];
  f_ElasticT[8] = -Twr->k21_TFA * q_Nom[6] - Twr->k22_TFA * q_Nom[8];
  f_ElasticT[9] = -Twr->k21_TSS * q_Nom[7] - Twr->k22_TSS * q_Nom[9];
  f_DampingT[6] = -Twr->zeta1_TFA * Twr->k11_TFA / 3.1415926535897931 /
    Twr->f1_TFA * q_Nom[40] - Twr->zeta2_TFA * Twr->k12_TFA / 3.1415926535897931
    / Twr->f2_TFA * q_Nom[42];
  f_DampingT[7] = -Twr->zeta1_TSS * Twr->k11_TSS / 3.1415926535897931 /
    Twr->f1_TSS * q_Nom[41] - Twr->zeta2_TSS * Twr->k12_TSS / 3.1415926535897931
    / Twr->f2_TSS * q_Nom[43];
  f_DampingT[8] = -Twr->zeta1_TFA * Twr->k21_TFA / 3.1415926535897931 /
    Twr->f1_TFA * q_Nom[40] - Twr->zeta2_TFA * Twr->k22_TFA / 3.1415926535897931
    / Twr->f2_TFA * q_Nom[42];
  f_DampingT[9] = -Twr->zeta1_TSS * Twr->k21_TSS / 3.1415926535897931 /
    Twr->f1_TSS * q_Nom[41] - Twr->zeta2_TSS * Twr->k22_TSS / 3.1415926535897931
    / Twr->f2_TSS * q_Nom[43];

  /*  Yaw spring and damper */
  f_Yaw[10] = -9.02832E+9 * q_Nom[10] - 1.916E+7 * q_Nom[44];

  /*  Generator & Drive-train */
  memset(&MB3_DrTr[0], 0, 3U * sizeof(real_T));
  r = _mm_loadu_pd(&I_G[0]);
  r1 = _mm_loadu_pd(&MB3_DrTr[0]);
  _mm_storeu_pd(&MB3_DrTr[0], _mm_add_pd(r1, _mm_mul_pd(r, r50)));
  MB3_DrTr[2] += dEwN[0] * I_G[2];
  r = _mm_loadu_pd(&I_G[3]);
  r1 = _mm_loadu_pd(&MB3_DrTr[0]);
  _mm_storeu_pd(&MB3_DrTr[0], _mm_add_pd(r1, _mm_mul_pd(r, r51)));
  MB3_DrTr[2] += dEwN[1] * I_G[5];
  r = _mm_loadu_pd(&I_G[6]);
  r1 = _mm_loadu_pd(&MB3_DrTr[0]);
  _mm_storeu_pd(&MB3_DrTr[0], _mm_add_pd(r1, _mm_mul_pd(r, r52)));
  MB3_DrTr[2] += dEwN[2] * I_G[8];
  f_G[11] = -f_dot(EwG_GeAz, MB3_DrTr);
  f_Gen[11] = -ElastoDyn->GBRatio * Controls[0];
  f_Brake[11] = -ElastoDyn->GBRatio * 0.0;
  f_ElasticDrive[12] = -ElastoDyn->DTTorSpr * q_Nom[12];
  f_DampDrive[12] = -ElastoDyn->DTTorDmp * q_Nom[46];

  /*  ================== OC4 浮筒组装：广义力 (f_nom) 与 质量矩阵 (IM_nom) ================== */
  /*  重力向量 */
  /*  --- 0. 添加结构的弹性恢复力与阻尼到 f_nom --- */
  st.site = &ln_emlrtRSI;
  I_pr_app = Platform->K11_H * Platform->M11_H_tot;
  if (I_pr_app < 0.0) {
    emlrtErrorWithMessageIdR2018a(&st, &m_emlrtRTEI,
      "Coder:toolbox:ElFunDomainError", "Coder:toolbox:ElFunDomainError", 3, 4,
      4, "sqrt");
  }

  ak_tip_Z = 2.0 * Platform->zeta1_H * muDoubleScalarSqrt(I_pr_app);
  f_Plat[22] = -Platform->K11_H * q_Nom[22] - ak_tip_Z * q_Nom[56];
  st.site = &mn_emlrtRSI;
  I_pr_app = Platform->K22_H * Platform->M22_H_tot;
  if (I_pr_app < 0.0) {
    emlrtErrorWithMessageIdR2018a(&st, &m_emlrtRTEI,
      "Coder:toolbox:ElFunDomainError", "Coder:toolbox:ElFunDomainError", 3, 4,
      4, "sqrt");
  }

  v_c_tip_Z = 2.0 * Platform->zeta2_H * muDoubleScalarSqrt(I_pr_app);
  f_Plat[23] = -Platform->K22_H * q_Nom[23] - v_c_tip_Z * q_Nom[57];
  st.site = &nn_emlrtRSI;
  I_pr_app = Platform->K11_V * Platform->M11_V_tot;
  if (I_pr_app < 0.0) {
    emlrtErrorWithMessageIdR2018a(&st, &m_emlrtRTEI,
      "Coder:toolbox:ElFunDomainError", "Coder:toolbox:ElFunDomainError", 3, 4,
      4, "sqrt");
  }

  I_yaw_app = 2.0 * Platform->zeta1_V * muDoubleScalarSqrt(I_pr_app);
  f_Plat[24] = -Platform->K11_V * q_Nom[24] - I_yaw_app * q_Nom[58];
  st.site = &on_emlrtRSI;
  I_pr_app = Platform->K22_V * Platform->M22_V_tot;
  if (I_pr_app < 0.0) {
    emlrtErrorWithMessageIdR2018a(&st, &m_emlrtRTEI,
      "Coder:toolbox:ElFunDomainError", "Coder:toolbox:ElFunDomainError", 3, 4,
      4, "sqrt");
  }

  I_pr_app = 2.0 * Platform->zeta2_V * muDoubleScalarSqrt(I_pr_app);
  f_Plat[25] = -Platform->K22_V * q_Nom[25] - I_pr_app * q_Nom[59];
  st.site = &pn_emlrtRSI;
  f_Plat[26] = -Platform->K11_H * q_Nom[26] - ak_tip_Z * q_Nom[60];
  st.site = &qn_emlrtRSI;
  f_Plat[27] = -Platform->K22_H * q_Nom[27] - v_c_tip_Z * q_Nom[61];
  st.site = &rn_emlrtRSI;
  f_Plat[28] = -Platform->K11_V * q_Nom[28] - I_yaw_app * q_Nom[62];
  st.site = &sn_emlrtRSI;
  f_Plat[29] = -Platform->K22_V * q_Nom[29] - I_pr_app * q_Nom[63];
  st.site = &tn_emlrtRSI;
  f_Plat[30] = -Platform->K11_H * q_Nom[30] - ak_tip_Z * q_Nom[64];
  st.site = &un_emlrtRSI;
  f_Plat[31] = -Platform->K22_H * q_Nom[31] - v_c_tip_Z * q_Nom[65];
  st.site = &vn_emlrtRSI;
  f_Plat[32] = -Platform->K11_V * q_Nom[32] - I_yaw_app * q_Nom[66];
  st.site = &wn_emlrtRSI;
  f_Plat[33] = -Platform->K22_V * q_Nom[33] - I_pr_app * q_Nom[67];

  /*  为三个浮筒打包对应的偏速度和索引，进行极化积分 */
  for (it = 0; it <= 42; it += 2) {
    r = _mm_loadu_pd(&hb_out[it]);
    r1 = _mm_loadu_pd(&ib_out[it]);
    _mm_storeu_pd(&hb_out[it], _mm_add_pd(r, r1));
    r = _mm_loadu_pd(&jb_out[it]);
    r1 = _mm_loadu_pd(&kb_out[it]);
    _mm_storeu_pd(&jb_out[it], _mm_add_pd(r, r1));
    r = _mm_loadu_pd(&lb_out[it]);
    r1 = _mm_loadu_pd(&mb_out[it]);
    _mm_storeu_pd(&lb_out[it], _mm_add_pd(r, r1));
    r = _mm_loadu_pd(&fb_out[it]);
    r1 = _mm_loadu_pd(&gb_out[it]);
    _mm_storeu_pd(&fb_out[it], _mm_add_pd(r, r1));
  }

  hb_out[44] += ib_out[44];
  jb_out[44] += kb_out[44];
  lb_out[44] += mb_out[44];
  fb_out[44] += gb_out[44];
  emxInitStruct_cell_wrap_0(sp, &r53, &rk_emlrtRTEI);
  st.site = &xn_emlrtRSI;
  cat(&st, EvP1_Sg, EvP1_Sw, EvP1_Hv, EvP1_R, EvP1_P, EvP1_Y, hb_out, jb_out,
      lb_out, fb_out, r53.f1);
  emxFree_real_T(sp, &EvP1_Y);
  emxFree_real_T(sp, &EvP1_P);
  emxFree_real_T(sp, &EvP1_R);
  emxFree_real_T(sp, &EvP1_Hv);
  emxFree_real_T(sp, &EvP1_Sw);
  emxFree_real_T(sp, &EvP1_Sg);
  for (it = 0; it <= 42; it += 2) {
    r = _mm_loadu_pd(&pb_out[it]);
    r1 = _mm_loadu_pd(&qb_out[it]);
    _mm_storeu_pd(&pb_out[it], _mm_add_pd(r, r1));
    r = _mm_loadu_pd(&rb_out[it]);
    r1 = _mm_loadu_pd(&sb_out[it]);
    _mm_storeu_pd(&rb_out[it], _mm_add_pd(r, r1));
    r = _mm_loadu_pd(&tb_out[it]);
    r1 = _mm_loadu_pd(&ub_out[it]);
    _mm_storeu_pd(&tb_out[it], _mm_add_pd(r, r1));
    r = _mm_loadu_pd(&nb_out[it]);
    r1 = _mm_loadu_pd(&ob_out[it]);
    _mm_storeu_pd(&nb_out[it], _mm_add_pd(r, r1));
  }

  pb_out[44] += qb_out[44];
  rb_out[44] += sb_out[44];
  tb_out[44] += ub_out[44];
  nb_out[44] += ob_out[44];
  emxInitStruct_cell_wrap_0(sp, &r54, &rk_emlrtRTEI);
  st.site = &yn_emlrtRSI;
  cat(&st, EvP2_Sg, EvP2_Sw, EvP2_Hv, EvP2_R, EvP2_P, EvP2_Y, pb_out, rb_out,
      tb_out, nb_out, r54.f1);
  emxFree_real_T(sp, &EvP2_Y);
  emxFree_real_T(sp, &EvP2_P);
  emxFree_real_T(sp, &EvP2_R);
  emxFree_real_T(sp, &EvP2_Hv);
  emxFree_real_T(sp, &EvP2_Sw);
  emxFree_real_T(sp, &EvP2_Sg);
  for (it = 0; it <= 42; it += 2) {
    r = _mm_loadu_pd(&xb_out[it]);
    r1 = _mm_loadu_pd(&yb_out[it]);
    _mm_storeu_pd(&xb_out[it], _mm_add_pd(r, r1));
    r = _mm_loadu_pd(&ac_out[it]);
    r1 = _mm_loadu_pd(&bc_out[it]);
    _mm_storeu_pd(&ac_out[it], _mm_add_pd(r, r1));
    r = _mm_loadu_pd(&cc_out[it]);
    r1 = _mm_loadu_pd(&dc_out[it]);
    _mm_storeu_pd(&cc_out[it], _mm_add_pd(r, r1));
    r = _mm_loadu_pd(&vb_out[it]);
    r1 = _mm_loadu_pd(&wb_out[it]);
    _mm_storeu_pd(&vb_out[it], _mm_add_pd(r, r1));
  }

  xb_out[44] += yb_out[44];
  ac_out[44] += bc_out[44];
  cc_out[44] += dc_out[44];
  vb_out[44] += wb_out[44];
  emxInitStruct_cell_wrap_0(sp, &r55, &rk_emlrtRTEI);
  st.site = &ao_emlrtRSI;
  cat(&st, EvP3_Sg, EvP3_Sw, EvP3_Hv, EvP3_R, EvP3_P, EvP3_Y, xb_out, ac_out,
      cc_out, vb_out, r55.f1);
  emxFree_real_T(sp, &EvP3_Y);
  emxFree_real_T(sp, &EvP3_P);
  emxFree_real_T(sp, &EvP3_R);
  emxFree_real_T(sp, &EvP3_Hv);
  emxFree_real_T(sp, &EvP3_Sw);
  emxFree_real_T(sp, &EvP3_Sg);
  emxInitMatrix_cell_wrap_0(sp, P_Ev_all, &rk_emlrtRTEI);
  emxCopyStruct_cell_wrap_0(sp, &P_Ev_all[0], &r53, &yh_emlrtRTEI);
  emxFreeStruct_cell_wrap_0(sp, &r53);
  emxCopyStruct_cell_wrap_0(sp, &P_Ev_all[1], &r54, &yh_emlrtRTEI);
  emxFreeStruct_cell_wrap_0(sp, &r54);
  emxCopyStruct_cell_wrap_0(sp, &P_Ev_all[2], &r55, &yh_emlrtRTEI);
  emxFreeStruct_cell_wrap_0(sp, &r55);
  P_Ev_tip_all[0].f1[3] = f_a_tmp;
  P_Ev_tip_all[0].f1[13] = g_a_tmp - rP1_tip[2];
  P_Ev_tip_all[0].f1[23] = rP1_tip[1] - g_a_tmp;
  I_pr_app = -0.0 * rP1_tip[2];
  P_Ev_tip_all[0].f1[4] = I_pr_app - (-rP1_tip[1]);
  P_Ev_tip_all[0].f1[14] = -rP1_tip[0] - I_pr_app;
  P_Ev_tip_all[0].f1[24] = -0.0 * rP1_tip[1] - rP1_tip[0] * -0.0;
  P_Ev_tip_all[0].f1[5] = rP1_tip[2] - e_rQS1_1;
  P_Ev_tip_all[0].f1[15] = h_a_tmp;
  P_Ev_tip_all[0].f1[25] = e_rQS1_1 - rP1_tip[0];
  P_Ev_tip_all[1].f1[3] = tip_mass_Z_tot;
  P_Ev_tip_all[1].f1[13] = c_rQS1_1 - rP2_tip[2];
  P_Ev_tip_all[1].f1[23] = rP2_tip[1] - c_rQS1_1;
  I_pr_app = -0.0 * rP2_tip[2];
  P_Ev_tip_all[1].f1[4] = I_pr_app - (-rP2_tip[1]);
  P_Ev_tip_all[1].f1[14] = -rP2_tip[0] - I_pr_app;
  P_Ev_tip_all[1].f1[24] = -0.0 * rP2_tip[1] - rP2_tip[0] * -0.0;
  P_Ev_tip_all[1].f1[5] = rP2_tip[2] - d_rQS1_1;
  P_Ev_tip_all[1].f1[15] = dEvQ_TSS1_tmp;
  P_Ev_tip_all[1].f1[25] = d_rQS1_1 - rP2_tip[0];
  P_Ev_tip_all[2].f1[3] = v_r_tip_Y;
  P_Ev_tip_all[2].f1[13] = v_r_tip_Z - rP3_tip[2];
  P_Ev_tip_all[2].f1[23] = rP3_tip[1] - v_r_tip_Z;
  I_pr_app = -0.0 * rP3_tip[2];
  P_Ev_tip_all[2].f1[4] = I_pr_app - (-rP3_tip[1]);
  P_Ev_tip_all[2].f1[14] = -rP3_tip[0] - I_pr_app;
  P_Ev_tip_all[2].f1[24] = -0.0 * rP3_tip[1] - rP3_tip[0] * -0.0;
  P_Ev_tip_all[2].f1[5] = rP3_tip[2] - tip_mass_X_tot;
  P_Ev_tip_all[2].f1[15] = b_rZT_1;
  P_Ev_tip_all[2].f1[25] = tip_mass_X_tot - rP3_tip[0];
  P_Ev_tip_all[0].f1[0] = 1.0;
  P_Ev_tip_all[0].f1[1] = 0.0;
  P_Ev_tip_all[0].f1[2] = 0.0;
  P_Ev_tip_all[0].f1[6] = d_a_tmp * P_BP[0].f1[0] + P_BP[0].f1[1] *
    Platform->O1_H[14];
  P_Ev_tip_all[0].f1[7] = c_a_tmp * P_BP[0].f1[0] + P_BP[0].f1[1] *
    Platform->O2_H[14];
  P_Ev_tip_all[0].f1[8] = b_a_tmp * P_BP[0].f1[0] + P_BP[0].f1[2] *
    Platform->O1_V[14];
  P_Ev_tip_all[0].f1[9] = a_tmp * P_BP[0].f1[0] + P_BP[0].f1[2] * Platform->
    O2_V[14];
  P_Ev_tip_all[1].f1[0] = 1.0;
  P_Ev_tip_all[1].f1[1] = 0.0;
  P_Ev_tip_all[1].f1[2] = 0.0;
  P_Ev_tip_all[1].f1[6] = XvP1_1_tmp * P_BP[1].f1[0] + P_BP[1].f1[1] *
    Platform->O1_H[14];
  P_Ev_tip_all[1].f1[7] = b_rQS1_2 * P_BP[1].f1[0] + P_BP[1].f1[1] *
    Platform->O2_H[14];
  P_Ev_tip_all[1].f1[8] = b_rQS1_1 * P_BP[1].f1[0] + P_BP[1].f1[2] *
    Platform->O1_V[14];
  P_Ev_tip_all[1].f1[9] = f_b * P_BP[1].f1[0] + P_BP[1].f1[2] * Platform->O2_V
    [14];
  P_Ev_tip_all[2].f1[0] = 1.0;
  P_Ev_tip_all[2].f1[1] = 0.0;
  P_Ev_tip_all[2].f1[2] = 0.0;
  P_Ev_tip_all[2].f1[6] = e_b * P_BP[2].f1[0] + P_BP[2].f1[1] * Platform->O1_H
    [14];
  P_Ev_tip_all[2].f1[7] = d_b * P_BP[2].f1[0] + P_BP[2].f1[1] * Platform->O2_H
    [14];
  P_Ev_tip_all[2].f1[8] = c_b * P_BP[2].f1[0] + P_BP[2].f1[2] * Platform->O1_V
    [14];
  P_Ev_tip_all[2].f1[9] = k_a_tmp * P_BP[2].f1[0] + P_BP[2].f1[2] *
    Platform->O2_V[14];
  P_Ew_tip_all[0].f1[0] = 1.0;
  P_Ew_tip_all[0].f1[1] = 0.0;
  P_Ew_tip_all[0].f1[2] = 0.0;
  P_Ew_tip_all[0].f1[3] = Platform->dO1_H * P_BP[0].f1[2];
  P_Ew_tip_all[0].f1[4] = Platform->dO2_H * P_BP[0].f1[2];
  P_Ew_tip_all[0].f1[5] = -Platform->dO1_V * P_BP[0].f1[1];
  P_Ew_tip_all[0].f1[6] = -Platform->dO2_V * P_BP[0].f1[1];
  P_Ew_tip_all[1].f1[0] = 1.0;
  P_Ew_tip_all[1].f1[1] = 0.0;
  P_Ew_tip_all[1].f1[2] = 0.0;
  P_Ew_tip_all[1].f1[3] = Platform->dO1_H * P_BP[1].f1[2];
  P_Ew_tip_all[1].f1[4] = Platform->dO2_H * P_BP[1].f1[2];
  P_Ew_tip_all[1].f1[5] = -Platform->dO1_V * P_BP[1].f1[1];
  P_Ew_tip_all[1].f1[6] = -Platform->dO2_V * P_BP[1].f1[1];
  P_Ew_tip_all[2].f1[0] = 1.0;
  P_Ew_tip_all[2].f1[1] = 0.0;
  P_Ew_tip_all[2].f1[2] = 0.0;
  P_Ew_tip_all[2].f1[3] = Platform->dO1_H * P_BP[2].f1[2];
  P_Ew_tip_all[2].f1[4] = Platform->dO2_H * P_BP[2].f1[2];
  P_Ew_tip_all[2].f1[5] = -Platform->dO1_V * P_BP[2].f1[1];
  P_Ew_tip_all[2].f1[6] = -Platform->dO2_V * P_BP[2].f1[1];
  P_Ev_tip_all[0].f1[10] = 0.0;
  P_Ev_tip_all[0].f1[11] = 0.0;
  P_Ev_tip_all[0].f1[12] = 1.0;
  P_Ev_tip_all[0].f1[16] = d_a_tmp * P_BP[0].f1[3] + P_BP[0].f1[4] *
    Platform->O1_H[14];
  P_Ev_tip_all[0].f1[17] = c_a_tmp * P_BP[0].f1[3] + P_BP[0].f1[4] *
    Platform->O2_H[14];
  P_Ev_tip_all[0].f1[18] = b_a_tmp * P_BP[0].f1[3] + P_BP[0].f1[5] *
    Platform->O1_V[14];
  P_Ev_tip_all[0].f1[19] = a_tmp * P_BP[0].f1[3] + P_BP[0].f1[5] *
    Platform->O2_V[14];
  P_Ev_tip_all[1].f1[10] = 0.0;
  P_Ev_tip_all[1].f1[11] = 0.0;
  P_Ev_tip_all[1].f1[12] = 1.0;
  P_Ev_tip_all[1].f1[16] = XvP1_1_tmp * P_BP[1].f1[3] + P_BP[1].f1[4] *
    Platform->O1_H[14];
  P_Ev_tip_all[1].f1[17] = b_rQS1_2 * P_BP[1].f1[3] + P_BP[1].f1[4] *
    Platform->O2_H[14];
  P_Ev_tip_all[1].f1[18] = b_rQS1_1 * P_BP[1].f1[3] + P_BP[1].f1[5] *
    Platform->O1_V[14];
  P_Ev_tip_all[1].f1[19] = f_b * P_BP[1].f1[3] + P_BP[1].f1[5] * Platform->O2_V
    [14];
  P_Ev_tip_all[2].f1[10] = 0.0;
  P_Ev_tip_all[2].f1[11] = 0.0;
  P_Ev_tip_all[2].f1[12] = 1.0;
  P_Ev_tip_all[2].f1[16] = e_b * P_BP[2].f1[3] + P_BP[2].f1[4] * Platform->O1_H
    [14];
  P_Ev_tip_all[2].f1[17] = d_b * P_BP[2].f1[3] + P_BP[2].f1[4] * Platform->O2_H
    [14];
  P_Ev_tip_all[2].f1[18] = c_b * P_BP[2].f1[3] + P_BP[2].f1[5] * Platform->O1_V
    [14];
  P_Ev_tip_all[2].f1[19] = k_a_tmp * P_BP[2].f1[3] + P_BP[2].f1[5] *
    Platform->O2_V[14];
  P_Ew_tip_all[0].f1[7] = 0.0;
  P_Ew_tip_all[0].f1[8] = 0.0;
  P_Ew_tip_all[0].f1[9] = 1.0;
  P_Ew_tip_all[0].f1[10] = Platform->dO1_H * P_BP[0].f1[5];
  P_Ew_tip_all[0].f1[11] = Platform->dO2_H * P_BP[0].f1[5];
  P_Ew_tip_all[0].f1[12] = -Platform->dO1_V * P_BP[0].f1[4];
  P_Ew_tip_all[0].f1[13] = -Platform->dO2_V * P_BP[0].f1[4];
  P_Ew_tip_all[1].f1[7] = 0.0;
  P_Ew_tip_all[1].f1[8] = 0.0;
  P_Ew_tip_all[1].f1[9] = 1.0;
  P_Ew_tip_all[1].f1[10] = Platform->dO1_H * P_BP[1].f1[5];
  P_Ew_tip_all[1].f1[11] = Platform->dO2_H * P_BP[1].f1[5];
  P_Ew_tip_all[1].f1[12] = -Platform->dO1_V * P_BP[1].f1[4];
  P_Ew_tip_all[1].f1[13] = -Platform->dO2_V * P_BP[1].f1[4];
  P_Ew_tip_all[2].f1[7] = 0.0;
  P_Ew_tip_all[2].f1[8] = 0.0;
  P_Ew_tip_all[2].f1[9] = 1.0;
  P_Ew_tip_all[2].f1[10] = Platform->dO1_H * P_BP[2].f1[5];
  P_Ew_tip_all[2].f1[11] = Platform->dO2_H * P_BP[2].f1[5];
  P_Ew_tip_all[2].f1[12] = -Platform->dO1_V * P_BP[2].f1[4];
  P_Ew_tip_all[2].f1[13] = -Platform->dO2_V * P_BP[2].f1[4];
  P_Ev_tip_all[0].f1[20] = 0.0;
  P_Ev_tip_all[0].f1[21] = -1.0;
  P_Ev_tip_all[0].f1[22] = 0.0;
  P_Ev_tip_all[0].f1[26] = d_a_tmp * P_BP[0].f1[6] + P_BP[0].f1[7] *
    Platform->O1_H[14];
  P_Ev_tip_all[0].f1[27] = c_a_tmp * P_BP[0].f1[6] + P_BP[0].f1[7] *
    Platform->O2_H[14];
  P_Ev_tip_all[0].f1[28] = b_a_tmp * P_BP[0].f1[6] + P_BP[0].f1[8] *
    Platform->O1_V[14];
  P_Ev_tip_all[0].f1[29] = a_tmp * P_BP[0].f1[6] + P_BP[0].f1[8] *
    Platform->O2_V[14];
  P_Ev_tip_all[1].f1[20] = 0.0;
  P_Ev_tip_all[1].f1[21] = -1.0;
  P_Ev_tip_all[1].f1[22] = 0.0;
  P_Ev_tip_all[1].f1[26] = XvP1_1_tmp * P_BP[1].f1[6] + P_BP[1].f1[7] *
    Platform->O1_H[14];
  P_Ev_tip_all[1].f1[27] = b_rQS1_2 * P_BP[1].f1[6] + P_BP[1].f1[7] *
    Platform->O2_H[14];
  P_Ev_tip_all[1].f1[28] = b_rQS1_1 * P_BP[1].f1[6] + P_BP[1].f1[8] *
    Platform->O1_V[14];
  P_Ev_tip_all[1].f1[29] = f_b * P_BP[1].f1[6] + P_BP[1].f1[8] * Platform->O2_V
    [14];
  P_Ev_tip_all[2].f1[20] = 0.0;
  P_Ev_tip_all[2].f1[21] = -1.0;
  P_Ev_tip_all[2].f1[22] = 0.0;
  P_Ev_tip_all[2].f1[26] = e_b * P_BP[2].f1[6] + P_BP[2].f1[7] * Platform->O1_H
    [14];
  P_Ev_tip_all[2].f1[27] = d_b * P_BP[2].f1[6] + P_BP[2].f1[7] * Platform->O2_H
    [14];
  P_Ev_tip_all[2].f1[28] = c_b * P_BP[2].f1[6] + P_BP[2].f1[8] * Platform->O1_V
    [14];
  P_Ev_tip_all[2].f1[29] = k_a_tmp * P_BP[2].f1[6] + P_BP[2].f1[8] *
    Platform->O2_V[14];
  P_Ew_tip_all[0].f1[14] = 0.0;
  P_Ew_tip_all[0].f1[15] = -1.0;
  P_Ew_tip_all[0].f1[16] = 0.0;
  P_Ew_tip_all[0].f1[17] = Platform->dO1_H * P_BP[0].f1[8];
  P_Ew_tip_all[0].f1[18] = Platform->dO2_H * P_BP[0].f1[8];
  P_Ew_tip_all[0].f1[19] = -Platform->dO1_V * P_BP[0].f1[7];
  P_Ew_tip_all[0].f1[20] = -Platform->dO2_V * P_BP[0].f1[7];
  P_Ew_tip_all[1].f1[14] = 0.0;
  P_Ew_tip_all[1].f1[15] = -1.0;
  P_Ew_tip_all[1].f1[16] = 0.0;
  P_Ew_tip_all[1].f1[17] = Platform->dO1_H * P_BP[1].f1[8];
  P_Ew_tip_all[1].f1[18] = Platform->dO2_H * P_BP[1].f1[8];
  P_Ew_tip_all[1].f1[19] = -Platform->dO1_V * P_BP[1].f1[7];
  P_Ew_tip_all[1].f1[20] = -Platform->dO2_V * P_BP[1].f1[7];
  P_Ew_tip_all[2].f1[14] = 0.0;
  P_Ew_tip_all[2].f1[15] = -1.0;
  P_Ew_tip_all[2].f1[16] = 0.0;
  P_Ew_tip_all[2].f1[17] = Platform->dO1_H * P_BP[2].f1[8];
  P_Ew_tip_all[2].f1[18] = Platform->dO2_H * P_BP[2].f1[8];
  P_Ew_tip_all[2].f1[19] = -Platform->dO1_V * P_BP[2].f1[7];
  P_Ew_tip_all[2].f1[20] = -Platform->dO2_V * P_BP[2].f1[7];
  for (it = 0; it < 10; it++) {
    P_idx[0].f1[it] = iv1[it];
    P_idx[1].f1[it] = iv2[it];
    P_idx[2].f1[it] = iv3[it];
  }

  for (it = 0; it < 7; it++) {
    P_idx_rot[0].f1[it] = iv4[it];
    P_idx_rot[1].f1[it] = iv5[it];
    P_idx_rot[2].f1[it] = iv6[it];
  }

  /*  --- 补充全局海水密度变量 --- */
  /*  dm_X = Platform.dm_V - FLUIDDENSITY*pi*(1.6/2)^2; % 仅保留结构线质量 (轴向不计算附加质量) */
  /*  提取真实结构质量，用于计算纯重力（去除附加质量） */
  st.site = &bo_emlrtRSI;

  /*  梁结构线质量 */
  st.site = &co_emlrtRSI;
  st.site = &co_emlrtRSI;

  /*  端部结构质量 */
  /*  X向不考虑附加质量 */
  /*  循环组装 3 根梁 (直接替换你的 for k = 1:3 整个大块) */
  n_out = ((int32_T)Platform->nt >= 0);
  tip_mass_X_tot = Platform->M_Tip_Struct + Platform->AM_Tip_H;
  tip_mass_Z_tot = Platform->M_Tip_Struct + Platform->AM_Tip_V;
  emxInit_real_T(sp, &vr_Y, 3, &xj_emlrtRTEI);
  emxInit_real_T(sp, &vr_Z, 3, &yj_emlrtRTEI);
  emxInit_real_T(sp, &vc_X, 3, &ak_emlrtRTEI);
  emxInit_real_T(sp, &vc_Y, 3, &bk_emlrtRTEI);
  emxInit_real_T(sp, &vc_Z, 3, &ck_emlrtRTEI);
  for (k = 0; k < 3; k++) {
    loop_ub_tmp = P_Ev_all[k].f1;
    c_nx = loop_ub_tmp->size[2];
    for (it = 0; it <= 42; it += 2) {
      r = _mm_loadu_pd(&P_dEv[k].f1[it]);
      _mm_storeu_pd(&dXvP2[it], _mm_mul_pd(r, r45));
    }

    dXvP2[44] = -P_dEv[k].f1[44];
    EvQ[0] = -P_dEv_tip[k].f1[0];
    rZT_3 = P_BP[k].f1[0];
    EvQ[1] = -P_dEv_tip[k].f1[1];
    rQS1_2 = P_BP[k].f1[3];
    EvQ[2] = -P_dEv_tip[k].f1[2];
    FRotor_R_idx_0 = P_BP[k].f1[6];
    FRotor_R_idx_1 = P_BP[k].f1[1];
    FRotor_R_idx_2 = P_BP[k].f1[4];
    b = P_BP[k].f1[7];
    b_b = P_BP[k].f1[2];
    EvZ_tmp = P_BP[k].f1[5];
    c_b = P_BP[k].f1[8];
    d_b = P_BP[k].f1[0];
    b_rQS1_1 = P_BP[k].f1[3];
    b_rZT_1 = P_BP[k].f1[6];
    e_b = P_BP[k].f1[1];
    f_b = P_BP[k].f1[4];
    b_rQS1_2 = P_BP[k].f1[7];
    c_rQS1_1 = P_BP[k].f1[2];
    dEvQ_TSS1_tmp = P_BP[k].f1[5];
    XvP1_1_tmp = P_BP[k].f1[8];
    e_a_tmp = P_BP[k].f1[0];
    d_rQS1_1 = P_BP[k].f1[3];
    f_a_tmp = P_BP[k].f1[6];
    g_a_tmp = P_BP[k].f1[1];
    h_a_tmp = P_BP[k].f1[4];
    e_rQS1_1 = P_BP[k].f1[7];
    i_a_tmp = P_BP[k].f1[2];
    j_a_tmp = P_BP[k].f1[5];
    k_a_tmp = P_BP[k].f1[8];
    for (b_i = 0; b_i < 10; b_i++) {
      b_nx = (int32_T)P_idx[k].f1[b_i] - 1;
      n = VzB1->size[0] * VzB1->size[1] * VzB1->size[2];
      VzB1->size[0] = 1;
      VzB1->size[1] = 3;
      VzB1->size[2] = c_nx;
      emxEnsureCapacity_real_T(sp, VzB1, n, &ai_emlrtRTEI);
      VzB1_data = VzB1->data;
      for (it = 0; it < c_nx; it++) {
        n = b_i + 30 * it;
        VzB1_data[3 * it] = loop_ub_tmp->data[n];
        VzB1_data[3 * it + 1] = loop_ub_tmp->data[n + 10];
        VzB1_data[3 * it + 2] = loop_ub_tmp->data[n + 20];
      }

      EvZ[0] = P_Ev_tip_all[k].f1[b_i];
      EvZ[1] = P_Ev_tip_all[k].f1[b_i + 10];
      EvZ[2] = P_Ev_tip_all[k].f1[b_i + 20];

      /*  提取加速度残余项 */
      b_I_G[0] = rZT_3;
      b_I_G[1] = rQS1_2;
      b_I_G[2] = FRotor_R_idx_0;
      st.site = &do_emlrtRSI;
      repmat(&st, b_I_G, Platform->nt, r6);
      st.site = &do_emlrtRSI;
      b_dot(&st, VzB1, r6, vr_X);
      vr_X_data = vr_X->data;
      b_I_G[0] = FRotor_R_idx_1;
      b_I_G[1] = FRotor_R_idx_2;
      b_I_G[2] = b;
      st.site = &eo_emlrtRSI;
      repmat(&st, b_I_G, Platform->nt, r6);
      st.site = &eo_emlrtRSI;
      b_dot(&st, VzB1, r6, vr_Y);
      ZBlNode_Z_data = vr_Y->data;
      b_I_G[0] = b_b;
      b_I_G[1] = EvZ_tmp;
      b_I_G[2] = c_b;
      st.site = &fo_emlrtRSI;
      repmat(&st, b_I_G, Platform->nt, r6);
      st.site = &fo_emlrtRSI;
      b_dot(&st, VzB1, r6, vr_Z);
      Vx_data = vr_Z->data;
      b_I_G[0] = rZT_3;
      b_I_G[1] = rQS1_2;
      b_I_G[2] = FRotor_R_idx_0;
      st.site = &go_emlrtRSI;
      repmat(&st, b_I_G, Platform->nt, r6);
      st.site = &go_emlrtRSI;
      i_dot(&st, dXvP2, r6, XvP1_1);
      b_I_G[0] = FRotor_R_idx_1;
      b_I_G[1] = FRotor_R_idx_2;
      b_I_G[2] = b;
      st.site = &ho_emlrtRSI;
      repmat(&st, b_I_G, Platform->nt, r6);
      st.site = &ho_emlrtRSI;
      i_dot(&st, dXvP2, r6, XvP1_3);
      b_I_G[0] = b_b;
      b_I_G[1] = EvZ_tmp;
      b_I_G[2] = c_b;
      st.site = &io_emlrtRSI;
      repmat(&st, b_I_G, Platform->nt, r6);
      st.site = &io_emlrtRSI;
      i_dot(&st, dXvP2, r6, XvP1_2);
      b_I_G[0] = rZT_3;
      b_I_G[1] = rQS1_2;
      b_I_G[2] = FRotor_R_idx_0;
      g_proj_X = j_dot(b_I_G);
      b_I_G[0] = FRotor_R_idx_1;
      b_I_G[1] = FRotor_R_idx_2;
      b_I_G[2] = b;
      g_proj_Y = j_dot(b_I_G);
      b_I_G[0] = b_b;
      b_I_G[1] = EvZ_tmp;
      b_I_G[2] = c_b;
      g_proj_Z = j_dot(b_I_G);

      /*  --- 广义力 f_Plat 组装 --- */
      /*  动力项：受 "结构质量 + 附加质量" 共同作用 */
      /*  重力项：仅作用于 "结构质量" */
      for (it = 0; it <= 12; it += 2) {
        r = _mm_loadu_pd(&Platform->dm_struct[it]);
        _mm_storeu_pd(&XvP2_1[it], _mm_add_pd(r, _mm_loadu_pd
          (&Platform->dm_add_H[it])));
        _mm_storeu_pd(&XvP2_2[it], _mm_add_pd(r, _mm_loadu_pd
          (&Platform->dm_add_V[it])));
      }

      XvP2_1[14] = Platform->dm_struct[14] + Platform->dm_add_H[14];
      XvP2_2[14] = Platform->dm_struct[14] + Platform->dm_add_V[14];
      if ((vr_X->size[2] != 15) && (vr_X->size[2] != 1)) {
        emlrtDimSizeImpxCheckR2021b(vr_X->size[2], 15, &kk_emlrtECI,
          (emlrtConstCTX)sp);
      }

      if ((vr_Y->size[2] != 15) && (vr_Y->size[2] != 1)) {
        emlrtDimSizeImpxCheckR2021b(vr_Y->size[2], 15, &lk_emlrtECI,
          (emlrtConstCTX)sp);
      }

      if ((vr_Z->size[2] != 15) && (vr_Z->size[2] != 1)) {
        emlrtDimSizeImpxCheckR2021b(vr_Z->size[2], 15, &mk_emlrtECI,
          (emlrtConstCTX)sp);
      }

      st.site = &jo_emlrtRSI;
      b_st.site = &dr_emlrtRSI;
      computeDimsData(&b_st, Platform->nt);
      if ((int32_T)Platform->nt > 15) {
        emlrtErrorWithMessageIdR2018a(&st, &emlrtRTEI,
          "Coder:toolbox:reshape_emptyReshapeLimit",
          "Coder:toolbox:reshape_emptyReshapeLimit", 0);
      }

      if (!n_out) {
        emlrtErrorWithMessageIdR2018a(&st, &b_emlrtRTEI,
          "MATLAB:checkDimCommon:nonnegativeSize",
          "MATLAB:checkDimCommon:nonnegativeSize", 0);
      }

      if ((int32_T)Platform->nt != 15) {
        emlrtErrorWithMessageIdR2018a(&st, &c_emlrtRTEI,
          "Coder:MATLAB:getReshapeDims_notSameNumel",
          "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
      }

      if ((vr_X->size[2] == 15) && (vr_Y->size[2] == 15) && (vr_Z->size[2] == 15))
      {
        n = (int32_T)Platform->nt;
        b_n = ((int32_T)Platform->nt / 2) << 1;
        c_n = b_n - 2;
        for (it = 0; it <= c_n; it += 2) {
          r = _mm_loadu_pd(&XvP1_1[it]);
          r1 = _mm_loadu_pd(&XvP2_1[it]);
          r2 = _mm_loadu_pd(&Platform->dm_struct[it]);
          r3 = _mm_loadu_pd(&vr_X_data[it]);
          r4 = _mm_loadu_pd(&XvP1_3[it]);
          r5 = _mm_loadu_pd(&ZBlNode_Z_data[it]);
          r17 = _mm_loadu_pd(&XvP1_2[it]);
          r18 = _mm_loadu_pd(&XvP2_2[it]);
          r19 = _mm_loadu_pd(&Vx_data[it]);
          _mm_storeu_pd(&b_XvP1_1_tmp[it], _mm_add_pd(_mm_add_pd(_mm_mul_pd(r3,
            _mm_add_pd(_mm_mul_pd(r, r1), _mm_mul_pd(_mm_set1_pd(g_proj_X), r2))),
            _mm_mul_pd(r5, _mm_add_pd(_mm_mul_pd(r4, r1), _mm_mul_pd(_mm_set1_pd
            (g_proj_Y), r2)))), _mm_mul_pd(r19, _mm_add_pd(_mm_mul_pd(r17, r18),
            _mm_mul_pd(_mm_set1_pd(g_proj_Z), r2)))));
        }

        for (it = b_n; it < n; it++) {
          I_pr_app = XvP2_1[it];
          I_yaw_app = Platform->dm_struct[it];
          b_XvP1_1_tmp[it] = (vr_X_data[it] * (XvP1_1[it] * I_pr_app + g_proj_X *
            I_yaw_app) + ZBlNode_Z_data[it] * (XvP1_3[it] * I_pr_app + g_proj_Y *
            I_yaw_app)) + Vx_data[it] * (XvP1_2[it] * XvP2_2[it] + g_proj_Z *
            I_yaw_app);
        }

        st.site = &jo_emlrtRSI;
        f_Plat[b_nx] += f_trapz(&st, Platform->BeamSec, b_XvP1_1_tmp, (int32_T)
          Platform->nt);
      } else {
        st.site = &jo_emlrtRSI;
        binary_expand_op_10(&st, f_Plat, P_idx, k, b_i, jo_emlrtRSI, Platform,
                            vr_X, XvP1_1, XvP2_1, g_proj_X, vr_Y, XvP1_3,
                            g_proj_Y, vr_Z, XvP1_2, XvP2_2, g_proj_Z);
      }

      /*  端部集中质量广义力 */
      b_I_G[0] = d_b;
      b_I_G[1] = b_rQS1_1;
      b_I_G[2] = b_rZT_1;
      v_r_tip_X = f_dot(EvZ, b_I_G);
      b_I_G[0] = e_b;
      b_I_G[1] = f_b;
      b_I_G[2] = b_rQS1_2;
      v_r_tip_Y = f_dot(EvZ, b_I_G);
      b_I_G[0] = c_rQS1_1;
      b_I_G[1] = dEvQ_TSS1_tmp;
      b_I_G[2] = XvP1_1_tmp;
      v_r_tip_Z = f_dot(EvZ, b_I_G);
      b_I_G[0] = d_b;
      b_I_G[1] = b_rQS1_1;
      b_I_G[2] = b_rZT_1;
      I_pr_app = f_dot(EvQ, b_I_G);
      b_I_G[0] = e_b;
      b_I_G[1] = f_b;
      b_I_G[2] = b_rQS1_2;
      I_yaw_app = f_dot(EvQ, b_I_G);
      b_I_G[0] = c_rQS1_1;
      b_I_G[1] = dEvQ_TSS1_tmp;
      b_I_G[2] = XvP1_1_tmp;
      ak_tip_Z = f_dot(EvQ, b_I_G);
      f_Plat[b_nx] = ((f_Plat[b_nx] + v_r_tip_X * (I_pr_app * tip_mass_X_tot +
        g_proj_X * Platform->M_Tip_Struct)) + v_r_tip_Y * (I_yaw_app *
        tip_mass_X_tot + g_proj_Y * Platform->M_Tip_Struct)) + v_r_tip_Z *
        (ak_tip_Z * tip_mass_Z_tot + g_proj_Z * Platform->M_Tip_Struct);

      /*  --- 质量矩阵 C_Plat 组装 --- */
      for (b_it = 0; b_it < 10; b_it++) {
        n = VzB1->size[0] * VzB1->size[1] * VzB1->size[2];
        VzB1->size[0] = 1;
        VzB1->size[1] = 3;
        VzB1->size[2] = c_nx;
        emxEnsureCapacity_real_T(sp, VzB1, n, &bi_emlrtRTEI);
        VzB1_data = VzB1->data;
        for (it = 0; it < c_nx; it++) {
          c_n = b_it + 30 * it;
          VzB1_data[3 * it] = loop_ub_tmp->data[c_n];
          VzB1_data[3 * it + 1] = loop_ub_tmp->data[c_n + 10];
          VzB1_data[3 * it + 2] = loop_ub_tmp->data[c_n + 20];
        }

        EvZ[0] = P_Ev_tip_all[k].f1[b_it];
        b_I_G[0] = e_a_tmp;
        EvZ[1] = P_Ev_tip_all[k].f1[b_it + 10];
        b_I_G[1] = d_rQS1_1;
        EvZ[2] = P_Ev_tip_all[k].f1[b_it + 20];
        b_I_G[2] = f_a_tmp;
        st.site = &ko_emlrtRSI;
        repmat(&st, b_I_G, Platform->nt, r6);
        st.site = &ko_emlrtRSI;
        b_dot(&st, VzB1, r6, vc_X);
        b_I_G[0] = g_a_tmp;
        b_I_G[1] = h_a_tmp;
        b_I_G[2] = e_rQS1_1;
        st.site = &lo_emlrtRSI;
        repmat(&st, b_I_G, Platform->nt, r6);
        st.site = &lo_emlrtRSI;
        b_dot(&st, VzB1, r6, vc_Y);
        b_I_G[0] = i_a_tmp;
        b_I_G[1] = j_a_tmp;
        b_I_G[2] = k_a_tmp;
        st.site = &mo_emlrtRSI;
        repmat(&st, b_I_G, Platform->nt, r6);
        st.site = &mo_emlrtRSI;
        b_dot(&st, VzB1, r6, vc_Z);
        b_I_G[0] = e_a_tmp;
        b_I_G[1] = d_rQS1_1;
        b_I_G[2] = f_a_tmp;
        I_pr_app = f_dot(EvZ, b_I_G);
        b_I_G[0] = g_a_tmp;
        b_I_G[1] = h_a_tmp;
        b_I_G[2] = e_rQS1_1;
        I_yaw_app = f_dot(EvZ, b_I_G);
        b_I_G[0] = i_a_tmp;
        b_I_G[1] = j_a_tmp;
        b_I_G[2] = k_a_tmp;
        v_c_tip_Z = f_dot(EvZ, b_I_G);
        if ((vr_X->size[2] != vc_X->size[2]) && ((vr_X->size[2] != 1) &&
             (vc_X->size[2] != 1))) {
          emlrtDimSizeImpxCheckR2021b(vr_X->size[2], vc_X->size[2], &nk_emlrtECI,
            (emlrtConstCTX)sp);
        }

        if (vr_X->size[2] == vc_X->size[2]) {
          nx = vr_X->size[2] - 1;
          c_n = vc_X->size[0] * vc_X->size[1] * vc_X->size[2];
          vc_X->size[0] = 1;
          vc_X->size[1] = 1;
          vc_X->size[2] = vr_X->size[2];
          emxEnsureCapacity_real_T(sp, vc_X, c_n, &ci_emlrtRTEI);
          ZBlNode_Y_data = vc_X->data;
          n = (vr_X->size[2] / 2) << 1;
          b_n = n - 2;
          for (it = 0; it <= b_n; it += 2) {
            r = _mm_loadu_pd(&vr_X_data[it]);
            r1 = _mm_loadu_pd(&ZBlNode_Y_data[it]);
            _mm_storeu_pd(&ZBlNode_Y_data[it], _mm_mul_pd(r, r1));
          }

          for (it = n; it <= nx; it++) {
            ZBlNode_Y_data[it] *= vr_X_data[it];
          }
        } else {
          st.site = &no_emlrtRSI;
          times(&st, vc_X, vr_X);
          ZBlNode_Y_data = vc_X->data;
        }

        if ((vc_X->size[2] != 15) && (vc_X->size[2] != 1)) {
          emlrtDimSizeImpxCheckR2021b(vc_X->size[2], 15, &nk_emlrtECI,
            (emlrtConstCTX)sp);
        }

        if ((vr_Y->size[2] != vc_Y->size[2]) && ((vr_Y->size[2] != 1) &&
             (vc_Y->size[2] != 1))) {
          emlrtDimSizeImpxCheckR2021b(vr_Y->size[2], vc_Y->size[2], &ok_emlrtECI,
            (emlrtConstCTX)sp);
        }

        if (vr_Y->size[2] == vc_Y->size[2]) {
          nx = vr_Y->size[2] - 1;
          c_n = vc_Y->size[0] * vc_Y->size[1] * vc_Y->size[2];
          vc_Y->size[0] = 1;
          vc_Y->size[1] = 1;
          vc_Y->size[2] = vr_Y->size[2];
          emxEnsureCapacity_real_T(sp, vc_Y, c_n, &di_emlrtRTEI);
          Vy_data = vc_Y->data;
          n = (vr_Y->size[2] / 2) << 1;
          b_n = n - 2;
          for (it = 0; it <= b_n; it += 2) {
            r = _mm_loadu_pd(&ZBlNode_Z_data[it]);
            r1 = _mm_loadu_pd(&Vy_data[it]);
            _mm_storeu_pd(&Vy_data[it], _mm_mul_pd(r, r1));
          }

          for (it = n; it <= nx; it++) {
            Vy_data[it] *= ZBlNode_Z_data[it];
          }
        } else {
          st.site = &no_emlrtRSI;
          times(&st, vc_Y, vr_Y);
          Vy_data = vc_Y->data;
        }

        if ((vc_Y->size[2] != 15) && (vc_Y->size[2] != 1)) {
          emlrtDimSizeImpxCheckR2021b(vc_Y->size[2], 15, &ok_emlrtECI,
            (emlrtConstCTX)sp);
        }

        if ((vr_Z->size[2] != vc_Z->size[2]) && ((vr_Z->size[2] != 1) &&
             (vc_Z->size[2] != 1))) {
          emlrtDimSizeImpxCheckR2021b(vr_Z->size[2], vc_Z->size[2], &pk_emlrtECI,
            (emlrtConstCTX)sp);
        }

        if (vr_Z->size[2] == vc_Z->size[2]) {
          nx = vr_Z->size[2] - 1;
          c_n = vc_Z->size[0] * vc_Z->size[1] * vc_Z->size[2];
          vc_Z->size[0] = 1;
          vc_Z->size[1] = 1;
          vc_Z->size[2] = vr_Z->size[2];
          emxEnsureCapacity_real_T(sp, vc_Z, c_n, &ei_emlrtRTEI);
          Vz_data = vc_Z->data;
          n = (vr_Z->size[2] / 2) << 1;
          b_n = n - 2;
          for (it = 0; it <= b_n; it += 2) {
            r = _mm_loadu_pd(&Vx_data[it]);
            r1 = _mm_loadu_pd(&Vz_data[it]);
            _mm_storeu_pd(&Vz_data[it], _mm_mul_pd(r, r1));
          }

          for (it = n; it <= nx; it++) {
            Vz_data[it] *= Vx_data[it];
          }
        } else {
          st.site = &no_emlrtRSI;
          times(&st, vc_Z, vr_Z);
          Vz_data = vc_Z->data;
        }

        if ((vc_Z->size[2] != 15) && (vc_Z->size[2] != 1)) {
          emlrtDimSizeImpxCheckR2021b(vc_Z->size[2], 15, &pk_emlrtECI,
            (emlrtConstCTX)sp);
        }

        st.site = &no_emlrtRSI;
        b_st.site = &dr_emlrtRSI;
        computeDimsData(&b_st, Platform->nt);
        if ((int32_T)Platform->nt > 15) {
          emlrtErrorWithMessageIdR2018a(&st, &emlrtRTEI,
            "Coder:toolbox:reshape_emptyReshapeLimit",
            "Coder:toolbox:reshape_emptyReshapeLimit", 0);
        }

        if ((int32_T)Platform->nt != 15) {
          emlrtErrorWithMessageIdR2018a(&st, &c_emlrtRTEI,
            "Coder:MATLAB:getReshapeDims_notSameNumel",
            "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
        }

        if ((vc_X->size[2] == 15) && (vc_Y->size[2] == 15) && (vc_Z->size[2] ==
             15)) {
          n = (int32_T)Platform->nt;
          b_n = ((int32_T)Platform->nt / 2) << 1;
          c_n = b_n - 2;
          for (it = 0; it <= c_n; it += 2) {
            r = _mm_loadu_pd(&ZBlNode_Y_data[it]);
            r1 = _mm_loadu_pd(&XvP2_1[it]);
            r2 = _mm_loadu_pd(&Vy_data[it]);
            r3 = _mm_loadu_pd(&Vz_data[it]);
            r4 = _mm_loadu_pd(&XvP2_2[it]);
            _mm_storeu_pd(&b_XvP1_1_tmp[it], _mm_add_pd(_mm_add_pd(_mm_mul_pd(r,
              r1), _mm_mul_pd(r2, r1)), _mm_mul_pd(r3, r4)));
          }

          for (it = b_n; it < n; it++) {
            ak_tip_Z = XvP2_1[it];
            b_XvP1_1_tmp[it] = (ZBlNode_Y_data[it] * ak_tip_Z + Vy_data[it] *
                                ak_tip_Z) + Vz_data[it] * XvP2_2[it];
          }

          n = b_nx + 34 * ((int32_T)P_idx[k].f1[b_it] - 1);
          st.site = &no_emlrtRSI;
          C_Plat[n] += f_trapz(&st, Platform->BeamSec, b_XvP1_1_tmp, (int32_T)
                               Platform->nt);
        } else {
          st.site = &no_emlrtRSI;
          binary_expand_op_9(&st, C_Plat, b_nx, P_idx, k, b_it, no_emlrtRSI,
                             Platform, vc_X, XvP2_1, vc_Y, vc_Z, XvP2_2);
        }

        n = b_nx + 34 * ((int32_T)P_idx[k].f1[b_it] - 1);
        C_Plat[n] = ((C_Plat[n] + v_r_tip_X * I_pr_app * tip_mass_X_tot) +
                     v_r_tip_Y * I_yaw_app * tip_mass_X_tot) + v_r_tip_Z *
          v_c_tip_Z * tip_mass_Z_tot;
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b((emlrtConstCTX)sp);
        }
      }

      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtConstCTX)sp);
      }
    }

    /*  --- 端部惯量的陀螺力矩与转动质量 (Euler Equations) --- */
    I_pr_app = P_Ew_tip[k].f1[1];
    I_yaw_app = P_Ew_tip[k].f1[2];
    v_c_tip_Z = P_Ew_tip[k].f1[0];
    ak_tip_Z = P_Ew_tip[k].f1[0];
    v_r_tip_X = P_Ew_tip[k].f1[1];
    v_r_tip_Y = P_Ew_tip[k].f1[2];
    v_r_tip_Z = P_dEw_tip[k].f1[0];
    g_proj_X = P_dEw_tip[k].f1[1];
    g_proj_Y = P_dEw_tip[k].f1[2];
    for (it = 0; it < 7; it++) {
      /*  这里使用对角化且物理真实的正定惯量 */
      memset(&b_EwX[0], 0, 3U * sizeof(real_T));
      EvZ[0] = P_Ew_tip_all[k].f1[it];
      r = _mm_loadu_pd(&b_EwX[0]);
      _mm_storeu_pd(&b_EwX[0], _mm_add_pd(r, _mm_mul_pd(_mm_loadu_pd
        (&Platform->TipInertia[0]), _mm_set1_pd(ak_tip_Z))));
      b_EwX[2] += ak_tip_Z * Platform->TipInertia[2];
      EvZ[1] = P_Ew_tip_all[k].f1[it + 7];
      r = _mm_loadu_pd(&b_EwX[0]);
      _mm_storeu_pd(&b_EwX[0], _mm_add_pd(r, _mm_mul_pd(_mm_loadu_pd
        (&Platform->TipInertia[3]), _mm_set1_pd(v_r_tip_X))));
      b_EwX[2] += v_r_tip_X * Platform->TipInertia[5];
      EvZ[2] = P_Ew_tip_all[k].f1[it + 14];
      r = _mm_loadu_pd(&b_EwX[0]);
      _mm_storeu_pd(&b_EwX[0], _mm_add_pd(r, _mm_mul_pd(_mm_loadu_pd
        (&Platform->TipInertia[6]), _mm_set1_pd(v_r_tip_Y))));
      b_EwX[2] += v_r_tip_Y * Platform->TipInertia[8];
      g_b[0] = b_EwX[0];
      g_b[1] = b_EwX[1];
      g_b[2] = b_EwX[2];
      memset(&b_EwX[0], 0, 3U * sizeof(real_T));
      r = _mm_loadu_pd(&b_EwX[0]);
      _mm_storeu_pd(&b_EwX[0], _mm_add_pd(r, _mm_mul_pd(_mm_loadu_pd
        (&Platform->TipInertia[0]), _mm_set1_pd(v_r_tip_Z))));
      b_EwX[2] += v_r_tip_Z * Platform->TipInertia[2];
      r = _mm_loadu_pd(&b_EwX[0]);
      _mm_storeu_pd(&b_EwX[0], _mm_add_pd(r, _mm_mul_pd(_mm_loadu_pd
        (&Platform->TipInertia[3]), _mm_set1_pd(g_proj_X))));
      b_EwX[2] += g_proj_X * Platform->TipInertia[5];
      r = _mm_loadu_pd(&b_EwX[0]);
      _mm_storeu_pd(&b_EwX[0], _mm_add_pd(r, _mm_mul_pd(_mm_loadu_pd
        (&Platform->TipInertia[6]), _mm_set1_pd(g_proj_Y))));
      b_EwX[2] += g_proj_Y * Platform->TipInertia[8];
      b_dEvQ_TSS1[0] = I_pr_app * g_b[2] - g_b[1] * I_yaw_app;
      b_dEvQ_TSS1[1] = g_b[0] * I_yaw_app - v_c_tip_Z * g_b[2];
      b_dEvQ_TSS1[2] = v_c_tip_Z * g_b[1] - g_b[0] * I_pr_app;
      r = _mm_loadu_pd(&b_EwX[0]);
      r1 = _mm_loadu_pd(&b_dEvQ_TSS1[0]);
      _mm_storeu_pd(&b_I_G[0], _mm_add_pd(r, r1));
      b_I_G[2] = b_EwX[2] + b_dEvQ_TSS1[2];
      n = (int32_T)P_idx_rot[k].f1[it];
      f_Plat[n - 1] -= f_dot(EvZ, b_I_G);
      for (b_it = 0; b_it < 7; b_it++) {
        memset(&b_EwX[0], 0, 3U * sizeof(real_T));
        g_proj_Z = P_Ew_tip_all[k].f1[b_it];
        r = _mm_loadu_pd(&b_EwX[0]);
        _mm_storeu_pd(&b_EwX[0], _mm_add_pd(r, _mm_mul_pd(_mm_loadu_pd
          (&Platform->TipInertia[0]), _mm_set1_pd(g_proj_Z))));
        b_EwX[2] += Platform->TipInertia[2] * g_proj_Z;
        g_proj_Z = P_Ew_tip_all[k].f1[b_it + 7];
        r = _mm_loadu_pd(&b_EwX[0]);
        _mm_storeu_pd(&b_EwX[0], _mm_add_pd(r, _mm_mul_pd(_mm_loadu_pd
          (&Platform->TipInertia[3]), _mm_set1_pd(g_proj_Z))));
        b_EwX[2] += Platform->TipInertia[5] * g_proj_Z;
        g_proj_Z = P_Ew_tip_all[k].f1[b_it + 14];
        r = _mm_loadu_pd(&b_EwX[0]);
        _mm_storeu_pd(&b_EwX[0], _mm_add_pd(r, _mm_mul_pd(_mm_loadu_pd
          (&Platform->TipInertia[6]), _mm_set1_pd(g_proj_Z))));
        b_EwX[2] += Platform->TipInertia[8] * g_proj_Z;
        b_n = (n + 34 * ((int32_T)P_idx_rot[k].f1[b_it] - 1)) - 1;
        C_Plat[b_n] += f_dot(EvZ, b_EwX);
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b((emlrtConstCTX)sp);
        }
      }

      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtConstCTX)sp);
      }
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }

  emxFreeMatrix_cell_wrap_0(sp, P_Ev_all);
  emxFree_real_T(sp, &r6);
  emxFree_real_T(sp, &vc_Z);
  emxFree_real_T(sp, &vc_Y);
  emxFree_real_T(sp, &vc_X);
  emxFree_real_T(sp, &vr_Z);
  emxFree_real_T(sp, &vr_Y);
  emxFree_real_T(sp, &vr_X);
  emxFree_real_T(sp, &VzB1);

  /*  ================================================================= */
  /*  Update additional output vector */
  dv[0] = 1.0;
  dv[1] = d9;
  st.site = &oo_emlrtRSI;
  n = phi_size[0] * 3;
  b_st.site = &us_emlrtRSI;
  assertValidSizeArg(&b_st, dv);
  b_n = phi_size[0];
  if (phi_size[0] < 3) {
    b_n = 3;
  }

  if ((int32_T)d9 > muIntScalarMax_sint32(n, b_n)) {
    emlrtErrorWithMessageIdR2018a(&st, &emlrtRTEI,
      "Coder:toolbox:reshape_emptyReshapeLimit",
      "Coder:toolbox:reshape_emptyReshapeLimit", 0);
  }

  if ((int32_T)d9 != n) {
    emlrtErrorWithMessageIdR2018a(&st, &c_emlrtRTEI,
      "Coder:MATLAB:getReshapeDims_notSameNumel",
      "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
  }

  if (d9 + 4.0 < 5.0) {
    c_n = 0;
    n = 0;
  } else {
    c_n = 4;
    if (((int32_T)(d9 + 4.0) < 1) || ((int32_T)(d9 + 4.0) > 61)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(d9 + 4.0), 1, 61, &gd_emlrtBCI,
        (emlrtConstCTX)sp);
    }

    n = (int32_T)(d9 + 4.0);
  }

  n -= c_n;
  b_n = (int32_T)d9;
  if (n != (int32_T)d9) {
    emlrtSubAssignSizeCheck1dR2017a(n, (int32_T)d9, &qk_emlrtECI, (emlrtConstCTX)
      sp);
  }

  for (it = 0; it < b_n; it++) {
    Controls[c_n + it] = phi_data[it];
  }

  /*  Assembly */
  for (it = 0; it <= 1154; it += 2) {
    r = _mm_loadu_pd(&C_com[it]);
    r1 = _mm_loadu_pd(&IM_nom[it]);
    r2 = _mm_loadu_pd(&C_B2[it]);
    r3 = _mm_loadu_pd(&C_B3[it]);
    r4 = _mm_loadu_pd(&C_T[it]);
    r5 = _mm_loadu_pd(&C_Plat[it]);
    _mm_storeu_pd(&IM_nom[it], _mm_add_pd(_mm_add_pd(_mm_add_pd(_mm_add_pd
      (_mm_add_pd(r, r1), r2), r3), r4), r5));
  }

  for (it = 0; it < 6; it++) {
    r = _mm_loadu_pd(&IM_nom[34 * it]);
    _mm_storeu_pd(&IM_nom[34 * it], _mm_add_pd(r, _mm_loadu_pd(&Platform->AM[6 *
      it])));
    n = 34 * it + 2;
    r = _mm_loadu_pd(&IM_nom[n]);
    _mm_storeu_pd(&IM_nom[n], _mm_add_pd(r, _mm_loadu_pd(&Platform->AM[6 * it +
      2])));
    n = 34 * it + 4;
    r = _mm_loadu_pd(&IM_nom[n]);
    _mm_storeu_pd(&IM_nom[n], _mm_add_pd(r, _mm_loadu_pd(&Platform->AM[6 * it +
      4])));
  }

  for (it = 0; it <= 32; it += 2) {
    r = _mm_loadu_pd(&f_nom[it]);
    r1 = _mm_loadu_pd(&f_B1[it]);
    r2 = _mm_loadu_pd(&f_B2[it]);
    r3 = _mm_loadu_pd(&f_B3[it]);
    r4 = _mm_loadu_pd(&f_ElasticB1[it]);
    r5 = _mm_loadu_pd(&f_DampingB1[it]);
    r17 = _mm_loadu_pd(&f_ElasticB2[it]);
    r18 = _mm_loadu_pd(&f_DampingB2[it]);
    r19 = _mm_loadu_pd(&f_ElasticB3[it]);
    r20 = _mm_loadu_pd(&f_DampingB3[it]);
    r47 = _mm_loadu_pd(&f_T[it]);
    r48 = _mm_loadu_pd(&f_ElasticT[it]);
    r49 = _mm_loadu_pd(&f_DampingT[it]);
    r46 = _mm_loadu_pd(&f_Yaw[it]);
    r10 = _mm_loadu_pd(&f_Gen[it]);
    r11 = _mm_loadu_pd(&f_Brake[it]);
    r50 = _mm_loadu_pd(&f_ElasticDrive[it]);
    r51 = _mm_loadu_pd(&f_DampDrive[it]);
    r52 = _mm_loadu_pd(&f_G[it]);
    r14 = _mm_loadu_pd(&f_Plat[it]);
    _mm_storeu_pd(&f_nom[it], _mm_add_pd(_mm_add_pd(_mm_add_pd(_mm_add_pd
      (_mm_add_pd(_mm_add_pd(_mm_add_pd(_mm_add_pd(_mm_add_pd(_mm_add_pd
      (_mm_add_pd(_mm_add_pd(_mm_add_pd(_mm_add_pd(_mm_add_pd(_mm_add_pd
      (_mm_add_pd(_mm_add_pd(_mm_add_pd(r, r1), r2), r3), r4), r5), r17), r18),
      r19), r20), r47), r48), r49), r46), r10), r11), r50), r51), r52), r14));
  }

  b_q_Nom[0] = q_Nom[34];
  b_q_Nom[1] = q_Nom[35];
  b_q_Nom[2] = q_Nom[36];
  b_q_Nom[3] = q_Nom[37];
  b_q_Nom[4] = q_Nom[38];
  b_q_Nom[5] = q_Nom[39];
  for (it = 0; it < 6; it++) {
    I_pr_app = 0.0;
    for (b_it = 0; b_it < 6; b_it++) {
      I_pr_app += (real_T)k_a[it + 6 * b_it] * b_q_Nom[b_it];
    }

    f_nom[it] += I_pr_app;
  }

  st.site = &po_emlrtRSI;
  f_nom[5] -= 9.834E+7 * (q_Nom[5] - -0.0012);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

emlrtCTX emlrtGetRootTLSGlobal(void)
{
  return emlrtRootTLSGlobal;
}

void emlrtLockerFunction(EmlrtLockeeFunction aLockee, emlrtConstCTX aTLS, void
  *aData)
{
  omp_set_lock(&emlrtLockGlobal);
  emlrtCallLockeeFunction(aLockee, aTLS, aData);
  omp_unset_lock(&emlrtLockGlobal);
}

void emlrt_checkEscapedGlobals(void)
{
  FLUIDDENSITY_dirty |= FLUIDDENSITY_dirty >> 1U;
}

/* End of code generation (NominalSystemMatrix.c) */
