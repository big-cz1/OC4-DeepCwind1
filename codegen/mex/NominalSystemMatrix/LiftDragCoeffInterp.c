/*
 * LiftDragCoeffInterp.c
 *
 * Code generation for function 'LiftDragCoeffInterp'
 *
 */

/* Include files */
#include "LiftDragCoeffInterp.h"
#include "interp1.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static emlrtRSInfo it_emlrtRSI = {
    4,                     /* lineNo */
    "LiftDragCoeffInterp", /* fcnName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-"
    "DeepCwind1\\src\\LiftDragCoeffInterp.m" /* pathName */
};

static emlrtRSInfo jt_emlrtRSI = {
    5,                     /* lineNo */
    "LiftDragCoeffInterp", /* fcnName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-"
    "DeepCwind1\\src\\LiftDragCoeffInterp.m" /* pathName */
};

static emlrtRSInfo kt_emlrtRSI = {
    7,                     /* lineNo */
    "LiftDragCoeffInterp", /* fcnName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-"
    "DeepCwind1\\src\\LiftDragCoeffInterp.m" /* pathName */
};

static emlrtRSInfo lt_emlrtRSI = {
    8,                     /* lineNo */
    "LiftDragCoeffInterp", /* fcnName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-"
    "DeepCwind1\\src\\LiftDragCoeffInterp.m" /* pathName */
};

static emlrtRSInfo mt_emlrtRSI = {
    10,                    /* lineNo */
    "LiftDragCoeffInterp", /* fcnName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-"
    "DeepCwind1\\src\\LiftDragCoeffInterp.m" /* pathName */
};

static emlrtRSInfo nt_emlrtRSI = {
    11,                    /* lineNo */
    "LiftDragCoeffInterp", /* fcnName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-"
    "DeepCwind1\\src\\LiftDragCoeffInterp.m" /* pathName */
};

static emlrtRSInfo ot_emlrtRSI = {
    13,                    /* lineNo */
    "LiftDragCoeffInterp", /* fcnName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-"
    "DeepCwind1\\src\\LiftDragCoeffInterp.m" /* pathName */
};

static emlrtRSInfo pt_emlrtRSI = {
    14,                    /* lineNo */
    "LiftDragCoeffInterp", /* fcnName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-"
    "DeepCwind1\\src\\LiftDragCoeffInterp.m" /* pathName */
};

static emlrtRSInfo qt_emlrtRSI = {
    16,                    /* lineNo */
    "LiftDragCoeffInterp", /* fcnName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-"
    "DeepCwind1\\src\\LiftDragCoeffInterp.m" /* pathName */
};

static emlrtRSInfo rt_emlrtRSI = {
    17,                    /* lineNo */
    "LiftDragCoeffInterp", /* fcnName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-"
    "DeepCwind1\\src\\LiftDragCoeffInterp.m" /* pathName */
};

static emlrtRSInfo st_emlrtRSI = {
    19,                    /* lineNo */
    "LiftDragCoeffInterp", /* fcnName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-"
    "DeepCwind1\\src\\LiftDragCoeffInterp.m" /* pathName */
};

static emlrtRSInfo tt_emlrtRSI = {
    20,                    /* lineNo */
    "LiftDragCoeffInterp", /* fcnName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-"
    "DeepCwind1\\src\\LiftDragCoeffInterp.m" /* pathName */
};

static emlrtRSInfo ut_emlrtRSI = {
    22,                    /* lineNo */
    "LiftDragCoeffInterp", /* fcnName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-"
    "DeepCwind1\\src\\LiftDragCoeffInterp.m" /* pathName */
};

static emlrtRSInfo vt_emlrtRSI = {
    23,                    /* lineNo */
    "LiftDragCoeffInterp", /* fcnName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-"
    "DeepCwind1\\src\\LiftDragCoeffInterp.m" /* pathName */
};

static emlrtRSInfo wt_emlrtRSI = {
    25,                    /* lineNo */
    "LiftDragCoeffInterp", /* fcnName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-"
    "DeepCwind1\\src\\LiftDragCoeffInterp.m" /* pathName */
};

static emlrtRSInfo xt_emlrtRSI = {
    26,                    /* lineNo */
    "LiftDragCoeffInterp", /* fcnName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-"
    "DeepCwind1\\src\\LiftDragCoeffInterp.m" /* pathName */
};

/* Function Definitions */
real_T LiftDragCoeffInterp(const emlrtStack *sp, real_T AOA, real_T FoilNo,
                           const real_T Airfoils_Cylinder1[12],
                           const real_T Airfoils_Cylinder2[12],
                           const real_T Airfoils_DU21_A17[568],
                           const real_T Airfoils_DU25_A17[560],
                           const real_T Airfoils_DU30_A17[572],
                           const real_T Airfoils_DU35_A17[540],
                           const real_T Airfoils_DU40_A17[544],
                           const real_T Airfoils_NACA64_A17[508], real_T *Cd)
{
  emlrtStack st;
  real_T Cl;
  st.prev = sp;
  st.tls = sp->tls;
  /* #Codegen */
  if (FoilNo == 1.0) {
    st.site = &it_emlrtRSI;
    Cl = interp1(&st, &Airfoils_Cylinder1[0], &Airfoils_Cylinder1[3], AOA);
    st.site = &jt_emlrtRSI;
    *Cd = interp1(&st, &Airfoils_Cylinder1[0], &Airfoils_Cylinder1[6], AOA);
  } else if (FoilNo == 2.0) {
    st.site = &kt_emlrtRSI;
    Cl = interp1(&st, &Airfoils_Cylinder2[0], &Airfoils_Cylinder2[3], AOA);
    st.site = &lt_emlrtRSI;
    *Cd = interp1(&st, &Airfoils_Cylinder2[0], &Airfoils_Cylinder2[6], AOA);
  } else if (FoilNo == 3.0) {
    st.site = &mt_emlrtRSI;
    Cl = b_interp1(&st, &Airfoils_DU21_A17[0], &Airfoils_DU21_A17[142], AOA);
    st.site = &nt_emlrtRSI;
    *Cd = b_interp1(&st, &Airfoils_DU21_A17[0], &Airfoils_DU21_A17[284], AOA);
  } else if (FoilNo == 4.0) {
    st.site = &ot_emlrtRSI;
    Cl = c_interp1(&st, &Airfoils_DU25_A17[0], &Airfoils_DU25_A17[140], AOA);
    st.site = &pt_emlrtRSI;
    *Cd = c_interp1(&st, &Airfoils_DU25_A17[0], &Airfoils_DU25_A17[280], AOA);
  } else if (FoilNo == 5.0) {
    st.site = &qt_emlrtRSI;
    Cl = d_interp1(&st, &Airfoils_DU30_A17[0], &Airfoils_DU30_A17[143], AOA);
    st.site = &rt_emlrtRSI;
    *Cd = d_interp1(&st, &Airfoils_DU30_A17[0], &Airfoils_DU30_A17[286], AOA);
  } else if (FoilNo == 6.0) {
    st.site = &st_emlrtRSI;
    Cl = e_interp1(&st, &Airfoils_DU35_A17[0], &Airfoils_DU35_A17[135], AOA);
    st.site = &tt_emlrtRSI;
    *Cd = e_interp1(&st, &Airfoils_DU35_A17[0], &Airfoils_DU35_A17[270], AOA);
  } else if (FoilNo == 7.0) {
    st.site = &ut_emlrtRSI;
    Cl = f_interp1(&st, &Airfoils_DU40_A17[0], &Airfoils_DU40_A17[136], AOA);
    st.site = &vt_emlrtRSI;
    *Cd = f_interp1(&st, &Airfoils_DU40_A17[0], &Airfoils_DU40_A17[272], AOA);
  } else if (FoilNo == 8.0) {
    st.site = &wt_emlrtRSI;
    Cl =
        g_interp1(&st, &Airfoils_NACA64_A17[0], &Airfoils_NACA64_A17[127], AOA);
    st.site = &xt_emlrtRSI;
    *Cd =
        g_interp1(&st, &Airfoils_NACA64_A17[0], &Airfoils_NACA64_A17[254], AOA);
  } else {
    Cl = 0.0;
    *Cd = 0.0;
  }
  return Cl;
}

/* End of code generation (LiftDragCoeffInterp.c) */
