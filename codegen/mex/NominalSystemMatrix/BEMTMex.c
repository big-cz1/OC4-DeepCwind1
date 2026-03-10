/*
 * BEMTMex.c
 *
 * Code generation for function 'BEMTMex'
 *
 */

/* Include files */
#include "BEMTMex.h"
#include "LiftDragCoeffInterp.h"
#include "NominalSystemMatrix_data.h"
#include "NominalSystemMatrix_emxutil.h"
#include "NominalSystemMatrix_mexutil.h"
#include "NominalSystemMatrix_types.h"
#include "fzero.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo ro_emlrtRSI =
    {
        71,      /* lineNo */
        "power", /* fcnName */
        "D:\\Program "
        "Files\\MATLAB\\R2025b\\toolbox\\eml\\lib\\matlab\\ops\\power.m" /* pathName
                                                                          */
};

static emlrtRSInfo vs_emlrtRSI = {
    20,        /* lineNo */
    "BEMTMex", /* fcnName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\BEMTMex.m" /* pathName
                                                                            */
};

static emlrtRSInfo ws_emlrtRSI = {
    23,        /* lineNo */
    "BEMTMex", /* fcnName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\BEMTMex.m" /* pathName
                                                                            */
};

static emlrtRSInfo xs_emlrtRSI = {
    25,        /* lineNo */
    "BEMTMex", /* fcnName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\BEMTMex.m" /* pathName
                                                                            */
};

static emlrtRSInfo ys_emlrtRSI = {
    27,        /* lineNo */
    "BEMTMex", /* fcnName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\BEMTMex.m" /* pathName
                                                                            */
};

static emlrtRSInfo at_emlrtRSI = {
    28,        /* lineNo */
    "BEMTMex", /* fcnName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\BEMTMex.m" /* pathName
                                                                            */
};

static emlrtRSInfo bt_emlrtRSI = {
    32,        /* lineNo */
    "BEMTMex", /* fcnName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\BEMTMex.m" /* pathName
                                                                            */
};

static emlrtRSInfo gu_emlrtRSI = {
    167,          /* lineNo */
    "CalcOutput", /* fcnName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\BEMTMex.m" /* pathName
                                                                            */
};

static emlrtRSInfo hu_emlrtRSI = {
    168,          /* lineNo */
    "CalcOutput", /* fcnName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\BEMTMex.m" /* pathName
                                                                            */
};

static emlrtRSInfo iu_emlrtRSI = {
    169,          /* lineNo */
    "CalcOutput", /* fcnName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\BEMTMex.m" /* pathName
                                                                            */
};

static emlrtRSInfo ju_emlrtRSI = {
    178,          /* lineNo */
    "CalcOutput", /* fcnName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\BEMTMex.m" /* pathName
                                                                            */
};

static emlrtRSInfo ku_emlrtRSI = {
    194,          /* lineNo */
    "CalcOutput", /* fcnName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\BEMTMex.m" /* pathName
                                                                            */
};

static emlrtRSInfo lu_emlrtRSI = {
    196,          /* lineNo */
    "CalcOutput", /* fcnName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\BEMTMex.m" /* pathName
                                                                            */
};

static emlrtRSInfo mu_emlrtRSI = {
    146,                 /* lineNo */
    "UpdateInflowAngle", /* fcnName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\BEMTMex.m" /* pathName
                                                                            */
};

static emlrtRSInfo nu_emlrtRSI = {
    149,                 /* lineNo */
    "UpdateInflowAngle", /* fcnName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\BEMTMex.m" /* pathName
                                                                            */
};

static emlrtRSInfo ou_emlrtRSI = {
    150,                 /* lineNo */
    "UpdateInflowAngle", /* fcnName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\BEMTMex.m" /* pathName
                                                                            */
};

static emlrtRSInfo pu_emlrtRSI = {
    153,                 /* lineNo */
    "UpdateInflowAngle", /* fcnName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\BEMTMex.m" /* pathName
                                                                            */
};

static emlrtRSInfo qu_emlrtRSI = {
    159,                 /* lineNo */
    "UpdateInflowAngle", /* fcnName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\BEMTMex.m" /* pathName
                                                                            */
};

static emlrtMCInfo b_emlrtMCI = {
    155,                 /* lineNo */
    9,                   /* colNo */
    "UpdateInflowAngle", /* fName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\BEMTMex.m" /* pName
                                                                            */
};

static emlrtMCInfo c_emlrtMCI = {
    156,                 /* lineNo */
    9,                   /* colNo */
    "UpdateInflowAngle", /* fName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\BEMTMex.m" /* pName
                                                                            */
};

static emlrtRTEInfo y_emlrtRTEI = {
    12,        /* lineNo */
    19,        /* colNo */
    "BEMTMex", /* fName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\BEMTMex.m" /* pName
                                                                            */
};

static emlrtDCInfo
    p_emlrtDCI =
        {
            5,         /* lineNo */
            16,        /* colNo */
            "BEMTMex", /* fName */
            "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-"
            "DeepCwind1\\src\\BEMTMex.m", /* pName */
            1                             /* checkKind */
};

static emlrtBCInfo
    hd_emlrtBCI =
        {
            1,         /* iFirst */
            19,        /* iLast */
            14,        /* lineNo */
            35,        /* colNo */
            "Cord",    /* aName */
            "BEMTMex", /* fName */
            "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-"
            "DeepCwind1\\src\\BEMTMex.m", /* pName */
            0                             /* checkKind */
};

static emlrtBCInfo
    id_emlrtBCI =
        {
            -1,          /* iFirst */
            -1,          /* iLast */
            14,          /* lineNo */
            50,          /* colNo */
            "FlexBlSpn", /* aName */
            "BEMTMex",   /* fName */
            "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-"
            "DeepCwind1\\src\\BEMTMex.m", /* pName */
            0                             /* checkKind */
};

static emlrtBCInfo
    jd_emlrtBCI =
        {
            -1,        /* iFirst */
            -1,        /* iLast */
            15,        /* lineNo */
            22,        /* colNo */
            "VMB",     /* aName */
            "BEMTMex", /* fName */
            "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-"
            "DeepCwind1\\src\\BEMTMex.m", /* pName */
            0                             /* checkKind */
};

static emlrtBCInfo
    kd_emlrtBCI =
        {
            -1,        /* iFirst */
            -1,        /* iLast */
            15,        /* lineNo */
            37,        /* colNo */
            "UMB",     /* aName */
            "BEMTMex", /* fName */
            "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-"
            "DeepCwind1\\src\\BEMTMex.m", /* pName */
            0                             /* checkKind */
};

static emlrtBCInfo
    ld_emlrtBCI =
        {
            -1,        /* iFirst */
            -1,        /* iLast */
            16,        /* lineNo */
            37,        /* colNo */
            "UMB",     /* aName */
            "BEMTMex", /* fName */
            "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-"
            "DeepCwind1\\src\\BEMTMex.m", /* pName */
            0                             /* checkKind */
};

static emlrtBCInfo
    md_emlrtBCI =
        {
            -1,        /* iFirst */
            -1,        /* iLast */
            20,        /* lineNo */
            46,        /* colNo */
            "phi",     /* aName */
            "BEMTMex", /* fName */
            "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-"
            "DeepCwind1\\src\\BEMTMex.m", /* pName */
            0                             /* checkKind */
};

static emlrtBCInfo
    nd_emlrtBCI =
        {
            -1,        /* iFirst */
            -1,        /* iLast */
            23,        /* lineNo */
            58,        /* colNo */
            "phi",     /* aName */
            "BEMTMex", /* fName */
            "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-"
            "DeepCwind1\\src\\BEMTMex.m", /* pName */
            0                             /* checkKind */
};

static emlrtBCInfo
    od_emlrtBCI =
        {
            -1,        /* iFirst */
            -1,        /* iLast */
            35,        /* lineNo */
            16,        /* colNo */
            "px",      /* aName */
            "BEMTMex", /* fName */
            "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-"
            "DeepCwind1\\src\\BEMTMex.m", /* pName */
            0                             /* checkKind */
};

static emlrtBCInfo
    pd_emlrtBCI =
        {
            -1,        /* iFirst */
            -1,        /* iLast */
            36,        /* lineNo */
            16,        /* colNo */
            "py",      /* aName */
            "BEMTMex", /* fName */
            "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-"
            "DeepCwind1\\src\\BEMTMex.m", /* pName */
            0                             /* checkKind */
};

static emlrtBCInfo
    qd_emlrtBCI =
        {
            -1,        /* iFirst */
            -1,        /* iLast */
            38,        /* lineNo */
            16,        /* colNo */
            "Mz",      /* aName */
            "BEMTMex", /* fName */
            "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-"
            "DeepCwind1\\src\\BEMTMex.m", /* pName */
            0                             /* checkKind */
};

static emlrtBCInfo
    rd_emlrtBCI =
        {
            -1,        /* iFirst */
            -1,        /* iLast */
            28,        /* lineNo */
            58,        /* colNo */
            "phi",     /* aName */
            "BEMTMex", /* fName */
            "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-"
            "DeepCwind1\\src\\BEMTMex.m", /* pName */
            0                             /* checkKind */
};

static emlrtRTEInfo tk_emlrtRTEI = {
    5,         /* lineNo */
    5,         /* colNo */
    "BEMTMex", /* fName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\BEMTMex.m" /* pName
                                                                            */
};

static emlrtRTEInfo uk_emlrtRTEI = {
    6,         /* lineNo */
    5,         /* colNo */
    "BEMTMex", /* fName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\BEMTMex.m" /* pName
                                                                            */
};

static emlrtRTEInfo vk_emlrtRTEI = {
    7,         /* lineNo */
    5,         /* colNo */
    "BEMTMex", /* fName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\BEMTMex.m" /* pName
                                                                            */
};

static emlrtRSInfo kv_emlrtRSI = {
    156,                 /* lineNo */
    "UpdateInflowAngle", /* fcnName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\BEMTMex.m" /* pathName
                                                                            */
};

static emlrtRSInfo lv_emlrtRSI = {
    155,                 /* lineNo */
    "UpdateInflowAngle", /* fcnName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\BEMTMex.m" /* pathName
                                                                            */
};

/* Function Declarations */
static real_T CalcOutput(
    const emlrtStack *sp, real_T phi, real_T theta, real_T FoilNo,
    const real_T Airfoils_Cylinder1[12], const real_T Airfoils_Cylinder2[12],
    const real_T Airfoils_DU21_A17[568], const real_T Airfoils_DU25_A17[560],
    const real_T Airfoils_DU30_A17[572], const real_T Airfoils_DU35_A17[540],
    const real_T Airfoils_DU40_A17[544], const real_T Airfoils_NACA64_A17[508],
    real_T TipRad, real_T HubRad, real_T BlSpn, real_T Solid, real_T Azimuth,
    real_T *aa, real_T *Cx, real_T *Cy, real_T *Cl, real_T *Cd);

static real_T b_UpdateInflowAngle_anonFcn1(
    const emlrtStack *sp, real_T theta, real_T Vx, real_T Vy, real_T FoilNo,
    const real_T Airfoils_Cylinder1[12], const real_T Airfoils_Cylinder2[12],
    const real_T Airfoils_DU21_A17[568], const real_T Airfoils_DU25_A17[560],
    const real_T Airfoils_DU30_A17[572], const real_T Airfoils_DU35_A17[540],
    const real_T Airfoils_DU40_A17[544], const real_T Airfoils_NACA64_A17[508],
    real_T TipRad, real_T HubRad, real_T BlSpn, real_T Solid, real_T Azimuth);

static real_T c_UpdateInflowAngle_anonFcn1(
    const emlrtStack *sp, real_T theta, real_T Vx, real_T Vy, real_T FoilNo,
    const real_T Airfoils_Cylinder1[12], const real_T Airfoils_Cylinder2[12],
    const real_T Airfoils_DU21_A17[568], const real_T Airfoils_DU25_A17[560],
    const real_T Airfoils_DU30_A17[572], const real_T Airfoils_DU35_A17[540],
    const real_T Airfoils_DU40_A17[544], const real_T Airfoils_NACA64_A17[508],
    real_T TipRad, real_T HubRad, real_T BlSpn, real_T Solid, real_T Azimuth);

static real_T d_UpdateInflowAngle_anonFcn1(
    const emlrtStack *sp, real_T theta, real_T Vx, real_T Vy, real_T FoilNo,
    const real_T Airfoils_Cylinder1[12], const real_T Airfoils_Cylinder2[12],
    const real_T Airfoils_DU21_A17[568], const real_T Airfoils_DU25_A17[560],
    const real_T Airfoils_DU30_A17[572], const real_T Airfoils_DU35_A17[540],
    const real_T Airfoils_DU40_A17[544], const real_T Airfoils_NACA64_A17[508],
    real_T TipRad, real_T HubRad, real_T BlSpn, real_T Solid, real_T Azimuth);

static void disp(const emlrtStack *sp, const mxArray *m, emlrtMCInfo *location);

/* Function Definitions */
static real_T CalcOutput(
    const emlrtStack *sp, real_T phi, real_T theta, real_T FoilNo,
    const real_T Airfoils_Cylinder1[12], const real_T Airfoils_Cylinder2[12],
    const real_T Airfoils_DU21_A17[568], const real_T Airfoils_DU25_A17[560],
    const real_T Airfoils_DU30_A17[572], const real_T Airfoils_DU35_A17[540],
    const real_T Airfoils_DU40_A17[544], const real_T Airfoils_NACA64_A17[508],
    real_T TipRad, real_T HubRad, real_T BlSpn, real_T Solid, real_T Azimuth,
    real_T *aa, real_T *Cx, real_T *Cy, real_T *Cl, real_T *Cd)
{
  emlrtStack b_st;
  emlrtStack st;
  real_T AOA;
  real_T Cx_tmp;
  real_T F;
  real_T a;
  real_T b_Cx;
  real_T b_Cx_tmp;
  real_T b_Cy;
  boolean_T guard1;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  /*  Calculate Output % */
  AOA = phi - theta;
  st.site = &gu_emlrtRSI;
  *Cl = LiftDragCoeffInterp(
      &st, AOA, FoilNo, Airfoils_Cylinder1, Airfoils_Cylinder2,
      Airfoils_DU21_A17, Airfoils_DU25_A17, Airfoils_DU30_A17,
      Airfoils_DU35_A17, Airfoils_DU40_A17, Airfoils_NACA64_A17, Cd);
  st.site = &hu_emlrtRSI;
  /*  Force coefficients % */
  b_st.site = &ht_emlrtRSI;
  AOA = LiftDragCoeffInterp(
      &b_st, AOA, FoilNo, Airfoils_Cylinder1, Airfoils_Cylinder2,
      Airfoils_DU21_A17, Airfoils_DU25_A17, Airfoils_DU30_A17,
      Airfoils_DU35_A17, Airfoils_DU40_A17, Airfoils_NACA64_A17, &a);
  Cx_tmp = muDoubleScalarSin(phi);
  b_Cx_tmp = muDoubleScalarCos(phi);
  b_Cx = AOA * b_Cx_tmp + a * Cx_tmp;
  b_Cy = AOA * Cx_tmp - a * b_Cx_tmp;
  *Cx = b_Cx;
  *Cy = b_Cy;
  st.site = &iu_emlrtRSI;
  /*  Hub/Tip Losses % */
  AOA = muDoubleScalarAbs(Cx_tmp);
  F = 0.63661977236758138 *
      muDoubleScalarAcos(muDoubleScalarMin(
          1.0, muDoubleScalarExp(-(1.5 * (TipRad - BlSpn) / (BlSpn * AOA))))) *
      (0.63661977236758138 *
       muDoubleScalarAcos(muDoubleScalarMin(
           1.0,
           muDoubleScalarExp(-(1.5 * (BlSpn - HubRad) / (HubRad * AOA))))));
  /*  Non dimensional parameters % */
  if (Cx_tmp == 0.0) {
    AOA = 1.7976931348623157E+308;
  } else {
    st.site = &ju_emlrtRSI;
    AOA = Solid * b_Cx / (4.0 * F * (Cx_tmp * Cx_tmp));
  }
  /*  Different equation depending on solution region % */
  guard1 = false;
  if (phi > 0.0) {
    if (AOA <= 0.66666666666666663) {
      /*  momentum region */
      if (AOA == -1.0) {
        AOA = -1.1;
      }
      a = muDoubleScalarMax(AOA / (AOA + 1.0), -10.0);
      /*  Patch */
    } else {
      real_T g2;
      /*  emperical region */
      a = 2.0 * F;
      b_Cx = a * AOA;
      g2 = b_Cx - F * (1.3333333333333333 - F);
      AOA = b_Cx - (2.7777777777777777 - a);
      if (muDoubleScalarAbs(AOA) < 1.0E-6) {
        st.site = &ku_emlrtRSI;
        if (g2 < 0.0) {
          emlrtErrorWithMessageIdR2018a(
              &st, &m_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
              "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
        }
        a = 1.0 - 1.0 / (2.0 * muDoubleScalarSqrt(g2));
      } else {
        st.site = &lu_emlrtRSI;
        if (g2 < 0.0) {
          emlrtErrorWithMessageIdR2018a(
              &st, &m_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
              "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
        }
        a = ((b_Cx - (1.1111111111111112 - F)) - muDoubleScalarSqrt(g2)) / AOA;
      }
    }
    guard1 = true;
  } else if (phi < 0.0) {
    if (AOA > 1.0) {
      /*  propeller brake region */
      a = muDoubleScalarMin(AOA / (AOA - 1.0), 10.0);
      /*  Patch */
    } else {
      a = 0.0;
    }
    guard1 = true;
  } else {
    a = 0.0;
    *aa = 0.0;
  }
  if (guard1) {
    /* Pitt and Peters yaw correction model % */
    a *= 0.73631077818510771 * muDoubleScalarTan((0.6 * a + 1.0) * 0.0 / 2.0) *
             BlSpn / TipRad * muDoubleScalarSin(Azimuth) +
         1.0;
    /*  Tangential induction factor % */
    if (Cx_tmp * b_Cx_tmp == 0.0) {
      AOA = 1.7976931348623157E+308;
    } else {
      AOA = Solid * b_Cy / (4.0 * F * Cx_tmp * b_Cx_tmp);
    }
    if (AOA == 1.0) {
      a = 0.0;
      *aa = 0.0;
    } else {
      *aa = AOA / (1.0 - AOA);
      if (muDoubleScalarAbs(*aa) > 10.0) {
        *aa = 10.0 * muDoubleScalarSign(*aa);
        /*  Patch */
      }
    }
  }
  return a;
}

static real_T b_UpdateInflowAngle_anonFcn1(
    const emlrtStack *sp, real_T theta, real_T Vx, real_T Vy, real_T FoilNo,
    const real_T Airfoils_Cylinder1[12], const real_T Airfoils_Cylinder2[12],
    const real_T Airfoils_DU21_A17[568], const real_T Airfoils_DU25_A17[560],
    const real_T Airfoils_DU30_A17[572], const real_T Airfoils_DU35_A17[540],
    const real_T Airfoils_DU40_A17[544], const real_T Airfoils_NACA64_A17[508],
    real_T TipRad, real_T HubRad, real_T BlSpn, real_T Solid, real_T Azimuth)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  real_T Cd;
  real_T Cl;
  real_T F;
  real_T a;
  real_T k_tmp;
  real_T varargout_1;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  st.site = &su_emlrtRSI;
  /*  Residue % */
  b_st.site = &ct_emlrtRSI;
  /*  Force coefficients % */
  c_st.site = &ht_emlrtRSI;
  Cl = LiftDragCoeffInterp(
      &c_st, 1.0E-6 - theta, FoilNo, Airfoils_Cylinder1, Airfoils_Cylinder2,
      Airfoils_DU21_A17, Airfoils_DU25_A17, Airfoils_DU30_A17,
      Airfoils_DU35_A17, Airfoils_DU40_A17, Airfoils_NACA64_A17, &Cd);
  b_st.site = &dt_emlrtRSI;
  /*  Hub/Tip Losses % */
  F = 0.63661977236758138 *
      muDoubleScalarAcos(muDoubleScalarMin(
          1.0, muDoubleScalarExp(-(1.5 * (TipRad - BlSpn) /
                                   (BlSpn * 9.999999999998333E-7))))) *
      (0.63661977236758138 *
       muDoubleScalarAcos(muDoubleScalarMin(
           1.0, muDoubleScalarExp(-(1.5 * (BlSpn - HubRad) /
                                    (HubRad * 9.999999999998333E-7))))));
  /*  Non dimensional parameters % */
  b_st.site = &et_emlrtRSI;
  k_tmp = 4.0 * F;
  varargout_1 = Solid * (Cl * 0.9999999999995 + Cd * 9.999999999998333E-7) /
                (k_tmp * 9.9999999999966656E-13);
  /*      aa = 1; */
  /*  Different equation depending on solution region % */
  if (varargout_1 <= 0.66666666666666663) {
    /*  momentum region */
    if (varargout_1 == -1.0) {
      varargout_1 = -1.1;
    }
    a = muDoubleScalarMax(varargout_1 / (varargout_1 + 1.0), -10.0);
    /*  Patch */
  } else {
    real_T g2;
    real_T g2_tmp;
    /*  emperical region */
    a = 2.0 * F;
    g2_tmp = a * varargout_1;
    g2 = g2_tmp - F * (1.3333333333333333 - F);
    varargout_1 = g2_tmp - (2.7777777777777777 - a);
    if (muDoubleScalarAbs(varargout_1) < 1.0E-6) {
      b_st.site = &ft_emlrtRSI;
      if (g2 < 0.0) {
        emlrtErrorWithMessageIdR2018a(
            &b_st, &m_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
            "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
      }
      a = 1.0 - 1.0 / (2.0 * muDoubleScalarSqrt(g2));
    } else {
      b_st.site = &gt_emlrtRSI;
      if (g2 < 0.0) {
        emlrtErrorWithMessageIdR2018a(
            &b_st, &m_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
            "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
      }
      a = ((g2_tmp - (1.1111111111111112 - F)) - muDoubleScalarSqrt(g2)) /
          varargout_1;
    }
  }
  /* Pitt and Peters yaw correction model % */
  a *= 0.73631077818510771 * muDoubleScalarTan((0.6 * a + 1.0) * 0.0 / 2.0) *
           BlSpn / TipRad * muDoubleScalarSin(Azimuth) +
       1.0;
  /*  Tangential induction factor % */
  varargout_1 = Solid * (Cl * 9.999999999998333E-7 - Cd * 0.9999999999995) /
                (k_tmp * 9.999999999998333E-7 * 0.9999999999995);
  if (varargout_1 == 1.0) {
    a = 0.0;
    varargout_1 = 0.0;
  } else {
    varargout_1 /= 1.0 - varargout_1;
    if (muDoubleScalarAbs(varargout_1) > 10.0) {
      varargout_1 = 10.0 * muDoubleScalarSign(varargout_1);
      /*  Patch */
    }
  }
  /*     %% Residue % */
  if (a == 1.0) {
    varargout_1 = -Vx / Vy * 0.9999999999995 / (varargout_1 + 1.0);
  } else {
    varargout_1 = 9.999999999998333E-7 / (1.0 - a) -
                  Vx / Vy * 0.9999999999995 / (varargout_1 + 1.0);
  }
  return varargout_1;
}

static real_T c_UpdateInflowAngle_anonFcn1(
    const emlrtStack *sp, real_T theta, real_T Vx, real_T Vy, real_T FoilNo,
    const real_T Airfoils_Cylinder1[12], const real_T Airfoils_Cylinder2[12],
    const real_T Airfoils_DU21_A17[568], const real_T Airfoils_DU25_A17[560],
    const real_T Airfoils_DU30_A17[572], const real_T Airfoils_DU35_A17[540],
    const real_T Airfoils_DU40_A17[544], const real_T Airfoils_NACA64_A17[508],
    real_T TipRad, real_T HubRad, real_T BlSpn, real_T Solid, real_T Azimuth)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  real_T Cd;
  real_T Cl;
  real_T a;
  real_T k_tmp;
  real_T varargout_1;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  st.site = &su_emlrtRSI;
  /*  Residue % */
  b_st.site = &ct_emlrtRSI;
  /*  Force coefficients % */
  c_st.site = &ht_emlrtRSI;
  Cl = LiftDragCoeffInterp(&c_st, -0.78539816339744828 - theta, FoilNo,
                           Airfoils_Cylinder1, Airfoils_Cylinder2,
                           Airfoils_DU21_A17, Airfoils_DU25_A17,
                           Airfoils_DU30_A17, Airfoils_DU35_A17,
                           Airfoils_DU40_A17, Airfoils_NACA64_A17, &Cd);
  b_st.site = &dt_emlrtRSI;
  /*  Hub/Tip Losses % */
  /*  Non dimensional parameters % */
  b_st.site = &et_emlrtRSI;
  k_tmp =
      4.0 * (0.63661977236758138 *
             muDoubleScalarAcos(muDoubleScalarMin(
                 1.0, muDoubleScalarExp(-(1.5 * (TipRad - BlSpn) /
                                          (BlSpn * 0.70710678118654746))))) *
             (0.63661977236758138 *
              muDoubleScalarAcos(muDoubleScalarMin(
                  1.0, muDoubleScalarExp(-(1.5 * (BlSpn - HubRad) /
                                           (HubRad * 0.70710678118654746)))))));
  varargout_1 = Solid * (Cl * 0.70710678118654757 + Cd * -0.70710678118654746) /
                (k_tmp * 0.49999999999999989);
  /*      aa = 1; */
  /*  Different equation depending on solution region % */
  if (varargout_1 > 1.0) {
    /*  propeller brake region */
    a = muDoubleScalarMin(varargout_1 / (varargout_1 - 1.0), 10.0);
    /*  Patch */
  } else {
    a = 0.0;
  }
  /* Pitt and Peters yaw correction model % */
  a *= 0.0 * BlSpn / TipRad * muDoubleScalarSin(Azimuth) + 1.0;
  /*  Tangential induction factor % */
  varargout_1 = Solid * (Cl * -0.70710678118654746 - Cd * 0.70710678118654757) /
                (k_tmp * -0.70710678118654746 * 0.70710678118654757);
  if (varargout_1 == 1.0) {
    a = 0.0;
    varargout_1 = 0.0;
  } else {
    varargout_1 /= 1.0 - varargout_1;
    if (muDoubleScalarAbs(varargout_1) > 10.0) {
      varargout_1 = 10.0 * muDoubleScalarSign(varargout_1);
      /*  Patch */
    }
  }
  /*     %% Residue % */
  if (a == 1.0) {
    varargout_1 = -Vx / Vy * 0.70710678118654757 / (varargout_1 + 1.0);
  } else {
    varargout_1 = -0.70710678118654746 / (1.0 - a) -
                  Vx / Vy * 0.70710678118654757 / (varargout_1 + 1.0);
  }
  return varargout_1;
}

static real_T d_UpdateInflowAngle_anonFcn1(
    const emlrtStack *sp, real_T theta, real_T Vx, real_T Vy, real_T FoilNo,
    const real_T Airfoils_Cylinder1[12], const real_T Airfoils_Cylinder2[12],
    const real_T Airfoils_DU21_A17[568], const real_T Airfoils_DU25_A17[560],
    const real_T Airfoils_DU30_A17[572], const real_T Airfoils_DU35_A17[540],
    const real_T Airfoils_DU40_A17[544], const real_T Airfoils_NACA64_A17[508],
    real_T TipRad, real_T HubRad, real_T BlSpn, real_T Solid, real_T Azimuth)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  real_T Cd;
  real_T Cl;
  real_T a;
  real_T k_tmp;
  real_T varargout_1;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  st.site = &su_emlrtRSI;
  /*  Residue % */
  b_st.site = &ct_emlrtRSI;
  /*  Force coefficients % */
  c_st.site = &ht_emlrtRSI;
  Cl = LiftDragCoeffInterp(
      &c_st, -1.0E-6 - theta, FoilNo, Airfoils_Cylinder1, Airfoils_Cylinder2,
      Airfoils_DU21_A17, Airfoils_DU25_A17, Airfoils_DU30_A17,
      Airfoils_DU35_A17, Airfoils_DU40_A17, Airfoils_NACA64_A17, &Cd);
  b_st.site = &dt_emlrtRSI;
  /*  Hub/Tip Losses % */
  /*  Non dimensional parameters % */
  b_st.site = &et_emlrtRSI;
  k_tmp = 4.0 *
          (0.63661977236758138 *
           muDoubleScalarAcos(muDoubleScalarMin(
               1.0, muDoubleScalarExp(-(1.5 * (TipRad - BlSpn) /
                                        (BlSpn * 9.999999999998333E-7))))) *
           (0.63661977236758138 *
            muDoubleScalarAcos(muDoubleScalarMin(
                1.0, muDoubleScalarExp(-(1.5 * (BlSpn - HubRad) /
                                         (HubRad * 9.999999999998333E-7)))))));
  varargout_1 = Solid * (Cl * 0.9999999999995 + Cd * -9.999999999998333E-7) /
                (k_tmp * 9.9999999999966656E-13);
  /*      aa = 1; */
  /*  Different equation depending on solution region % */
  if (varargout_1 > 1.0) {
    /*  propeller brake region */
    a = muDoubleScalarMin(varargout_1 / (varargout_1 - 1.0), 10.0);
    /*  Patch */
  } else {
    a = 0.0;
  }
  /* Pitt and Peters yaw correction model % */
  a *= 0.0 * BlSpn / TipRad * muDoubleScalarSin(Azimuth) + 1.0;
  /*  Tangential induction factor % */
  varargout_1 = Solid * (Cl * -9.999999999998333E-7 - Cd * 0.9999999999995) /
                (k_tmp * -9.999999999998333E-7 * 0.9999999999995);
  if (varargout_1 == 1.0) {
    a = 0.0;
    varargout_1 = 0.0;
  } else {
    varargout_1 /= 1.0 - varargout_1;
    if (muDoubleScalarAbs(varargout_1) > 10.0) {
      varargout_1 = 10.0 * muDoubleScalarSign(varargout_1);
      /*  Patch */
    }
  }
  /*     %% Residue % */
  if (a == 1.0) {
    varargout_1 = -Vx / Vy * 0.9999999999995 / (varargout_1 + 1.0);
  } else {
    varargout_1 = -9.999999999998333E-7 / (1.0 - a) -
                  Vx / Vy * 0.9999999999995 / (varargout_1 + 1.0);
  }
  return varargout_1;
}

static void disp(const emlrtStack *sp, const mxArray *m, emlrtMCInfo *location)
{
  emlrtCallMATLABR2012b((emlrtConstCTX)sp, 0, NULL, 1, &m, "disp", true,
                        location);
}

void BEMTMex(const emlrtStack *sp, real_T q_GeAz, const emxArray_real_T *VMB,
             const emxArray_real_T *UMB, real_T phi_data[],
             const int32_T phi_size[2], real_T nb_Load, const real_T BlSpn[19],
             const emxArray_real_T *FlexBlSpn, real_T TipRad, real_T HubRad,
             const real_T Cord[19], const real_T Twist[19],
             const real_T Pitch[3], const real_T FoilNo[19],
             const struct1_T *Airfoils, const real_T AeroCentJ1[19],
             const real_T AeroCentJ2[19], emxArray_real_T *px,
             emxArray_real_T *py, emxArray_real_T *Mz)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  const real_T *FlexBlSpn_data;
  const real_T *UMB_data;
  const real_T *VMB_data;
  real_T Cd;
  real_T Cl;
  real_T Cx;
  real_T Cy;
  real_T aa;
  real_T *Mz_data;
  real_T *px_data;
  real_T *py_data;
  int32_T B;
  int32_T Residue_tmp;
  int32_T iNd;
  int32_T loop_ub;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  FlexBlSpn_data = FlexBlSpn->data;
  UMB_data = UMB->data;
  VMB_data = VMB->data;
  if (nb_Load != (int32_T)muDoubleScalarFloor(nb_Load)) {
    emlrtIntegerCheckR2012b(nb_Load, &p_emlrtDCI, (emlrtConstCTX)sp);
  }
  Residue_tmp = px->size[0] * px->size[1];
  px->size[0] = (int32_T)nb_Load;
  px->size[1] = 3;
  emxEnsureCapacity_real_T(sp, px, Residue_tmp, &tk_emlrtRTEI);
  px_data = px->data;
  loop_ub = (int32_T)nb_Load * 3;
  for (B = 0; B < loop_ub; B++) {
    px_data[B] = 0.0;
  }
  Residue_tmp = py->size[0] * py->size[1];
  py->size[0] = (int32_T)nb_Load;
  py->size[1] = 3;
  emxEnsureCapacity_real_T(sp, py, Residue_tmp, &uk_emlrtRTEI);
  py_data = py->data;
  for (B = 0; B < loop_ub; B++) {
    py_data[B] = 0.0;
  }
  Residue_tmp = Mz->size[0] * Mz->size[1];
  Mz->size[0] = (int32_T)nb_Load;
  Mz->size[1] = 3;
  emxEnsureCapacity_real_T(sp, Mz, Residue_tmp, &vk_emlrtRTEI);
  Mz_data = Mz->data;
  for (B = 0; B < loop_ub; B++) {
    Mz_data[B] = 0.0;
  }
  loop_ub = (int32_T)((nb_Load - 1.0) - 1.0);
  for (B = 0; B < 3; B++) {
    real_T Azimuth;
    Azimuth =
        q_GeAz + (((real_T)B + 1.0) - 1.0) * 2.0 * 3.1415926535897931 / 3.0;
    emlrtForLoopVectorCheckR2021a(2.0, 1.0, nb_Load - 1.0, mxDOUBLE_CLASS,
                                  (int32_T)((nb_Load - 1.0) - 1.0),
                                  &y_emlrtRTEI, (emlrtConstCTX)sp);
    for (iNd = 0; iNd < loop_ub; iNd++) {
      real_T Residue;
      real_T Solid;
      real_T Solid_tmp;
      real_T Vx;
      real_T Vy;
      real_T a;
      real_T theta;
      real_T workspace_BlSpn;
      real_T workspace_FoilNo;
      boolean_T b;
      if (((int32_T)((uint32_T)iNd + 2U) < 1) ||
          ((int32_T)((uint32_T)iNd + 2U) > 19)) {
        emlrtDynamicBoundsCheckR2012b((int32_T)((uint32_T)iNd + 2U), 1, 19,
                                      &hd_emlrtBCI, (emlrtConstCTX)sp);
      }
      if (((int32_T)((uint32_T)iNd + 2U) < 1) ||
          ((int32_T)((uint32_T)iNd + 2U) > FlexBlSpn->size[0])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)((uint32_T)iNd + 2U), 1,
                                      FlexBlSpn->size[0], &id_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      Solid_tmp = Cord[iNd + 1];
      Solid = 0.477464829275686 * Solid_tmp /
              FlexBlSpn_data[(iNd + FlexBlSpn->size[0] * B) + 1];
      b = (((int32_T)((uint32_T)iNd + 2U) < 1) ||
           ((int32_T)((uint32_T)iNd + 2U) > VMB->size[0]));
      if (b) {
        emlrtDynamicBoundsCheckR2012b((int32_T)((uint32_T)iNd + 2U), 1,
                                      VMB->size[0], &jd_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      if (((int32_T)((uint32_T)iNd + 2U) < 1) ||
          ((int32_T)((uint32_T)iNd + 2U) > UMB->size[0])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)((uint32_T)iNd + 2U), 1,
                                      UMB->size[0], &kd_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      Vx = VMB_data[(iNd + VMB->size[0] * 2 * B) + 1] -
           UMB_data[(iNd + UMB->size[0] * 2 * B) + 1];
      if (((int32_T)((uint32_T)iNd + 2U) < 1) ||
          ((int32_T)((uint32_T)iNd + 2U) > UMB->size[0])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)((uint32_T)iNd + 2U), 1,
                                      UMB->size[0], &ld_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      Vy = VMB_data[((iNd + VMB->size[0]) + VMB->size[0] * 2 * B) + 1] +
           UMB_data[((iNd + UMB->size[0]) + UMB->size[0] * 2 * B) + 1];
      theta = Pitch[B] + Twist[iNd + 1];
      workspace_FoilNo = FoilNo[iNd + 1];
      workspace_BlSpn = BlSpn[iNd + 1];
      Residue_tmp = phi_size[0];
      b = (((int32_T)((uint32_T)iNd + 2U) < 1) ||
           ((int32_T)((uint32_T)iNd + 2U) > Residue_tmp));
      if (b) {
        emlrtDynamicBoundsCheckR2012b((int32_T)((uint32_T)iNd + 2U), 1,
                                      Residue_tmp, &md_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      Residue_tmp = (iNd + phi_size[0] * B) + 1;
      st.site = &vs_emlrtRSI;
      Residue = CallStateResidual(
          &st, phi_data[Residue_tmp], theta, Vx, Vy, workspace_FoilNo,
          Airfoils->Cylinder1, Airfoils->Cylinder2, Airfoils->DU21_A17,
          Airfoils->DU25_A17, Airfoils->DU30_A17, Airfoils->DU35_A17,
          Airfoils->DU40_A17, Airfoils->NACA64_A17, TipRad, HubRad,
          workspace_BlSpn, Solid, Azimuth);
      if ((Vx == 0.0) || (Vy == 0.0)) {
        phi_data[Residue_tmp] = muDoubleScalarAtan2(Vx, Vy);
        if (b) {
          emlrtDynamicBoundsCheckR2012b((int32_T)((uint32_T)iNd + 2U), 1,
                                        phi_size[0], &nd_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        st.site = &ws_emlrtRSI;
        Residue = CalcOutput(
            &st, phi_data[Residue_tmp], theta, workspace_FoilNo,
            Airfoils->Cylinder1, Airfoils->Cylinder2, Airfoils->DU21_A17,
            Airfoils->DU25_A17, Airfoils->DU30_A17, Airfoils->DU35_A17,
            Airfoils->DU40_A17, Airfoils->NACA64_A17, TipRad, HubRad,
            workspace_BlSpn, Solid, Azimuth, &aa, &Cx, &Cy, &Cl, &Cd);
      } else if (muDoubleScalarAbs(Residue) < 0.001) {
        st.site = &xs_emlrtRSI;
        Residue = CalcOutput(
            &st, phi_data[Residue_tmp], theta, workspace_FoilNo,
            Airfoils->Cylinder1, Airfoils->Cylinder2, Airfoils->DU21_A17,
            Airfoils->DU25_A17, Airfoils->DU30_A17, Airfoils->DU35_A17,
            Airfoils->DU40_A17, Airfoils->NACA64_A17, TipRad, HubRad,
            workspace_BlSpn, Solid, Azimuth, &aa, &Cx, &Cy, &Cl, &Cd);
      } else {
        real_T phi;
        st.site = &ys_emlrtRSI;
        /*  Update Inflow Angle % */
        b_st.site = &mu_emlrtRSI;
        c_st.site = &ru_emlrtRSI;
        Residue = UpdateInflowAngle_anonFcn1(
            &c_st, theta, Vx, Vy, workspace_FoilNo, Airfoils->Cylinder1,
            Airfoils->Cylinder2, Airfoils->DU21_A17, Airfoils->DU25_A17,
            Airfoils->DU30_A17, Airfoils->DU35_A17, Airfoils->DU40_A17,
            Airfoils->NACA64_A17, TipRad, HubRad, workspace_BlSpn, Solid,
            Azimuth);
        b_st.site = &mu_emlrtRSI;
        c_st.site = &ru_emlrtRSI;
        a = b_UpdateInflowAngle_anonFcn1(
            &c_st, theta, Vx, Vy, workspace_FoilNo, Airfoils->Cylinder1,
            Airfoils->Cylinder2, Airfoils->DU21_A17, Airfoils->DU25_A17,
            Airfoils->DU30_A17, Airfoils->DU35_A17, Airfoils->DU40_A17,
            Airfoils->NACA64_A17, TipRad, HubRad, workspace_BlSpn, Solid,
            Azimuth);
        if (Residue * a < 0.0) {
          b_st.site = &nu_emlrtRSI;
          a = 1.0E-6;
          phi = 1.5707963267948966;
          c_st.site = &tu_emlrtRSI;
          d_st.site = &ru_emlrtRSI;
          Residue = b_UpdateInflowAngle_anonFcn1(
              &d_st, theta, Vx, Vy, workspace_FoilNo, Airfoils->Cylinder1,
              Airfoils->Cylinder2, Airfoils->DU21_A17, Airfoils->DU25_A17,
              Airfoils->DU30_A17, Airfoils->DU35_A17, Airfoils->DU40_A17,
              Airfoils->NACA64_A17, TipRad, HubRad, workspace_BlSpn, Solid,
              Azimuth);
          c_st.site = &uu_emlrtRSI;
          d_st.site = &ru_emlrtRSI;
          Cy = UpdateInflowAngle_anonFcn1(
              &d_st, theta, Vx, Vy, workspace_FoilNo, Airfoils->Cylinder1,
              Airfoils->Cylinder2, Airfoils->DU21_A17, Airfoils->DU25_A17,
              Airfoils->DU30_A17, Airfoils->DU35_A17, Airfoils->DU40_A17,
              Airfoils->NACA64_A17, TipRad, HubRad, workspace_BlSpn, Solid,
              Azimuth);
          if (muDoubleScalarIsInf(Residue) || muDoubleScalarIsNaN(Residue) ||
              (muDoubleScalarIsInf(Cy) || muDoubleScalarIsNaN(Cy))) {
            emlrtErrorWithMessageIdR2018a(
                &b_st, &p_emlrtRTEI,
                "MATLAB:optimfun:fzero:ValuesAtEndPtsComplexOrNotFinite",
                "MATLAB:optimfun:fzero:ValuesAtEndPtsComplexOrNotFinite", 0);
          }
          if (Residue == 0.0) {
            phi = 1.0E-6;
          } else if (!(Cy == 0.0)) {
            real_T d;
            real_T e;
            boolean_T exitg1;
            if ((Residue > 0.0) == (Cy > 0.0)) {
              emlrtErrorWithMessageIdR2018a(
                  &b_st, &q_emlrtRTEI,
                  "MATLAB:optimfun:fzero:ValuesAtEndPtsSameSign",
                  "MATLAB:optimfun:fzero:ValuesAtEndPtsSameSign", 0);
            }
            Cl = Cy;
            Cd = 1.5707963267948966;
            e = 0.0;
            d = 0.0;
            exitg1 = false;
            while ((!exitg1) && ((Cy != 0.0) && (a != phi))) {
              real_T m;
              real_T toler;
              if ((Cy > 0.0) == (Cl > 0.0)) {
                Cd = a;
                Cl = Residue;
                d = phi - a;
                e = d;
              }
              if (muDoubleScalarAbs(Cl) < muDoubleScalarAbs(Cy)) {
                a = phi;
                phi = Cd;
                Cd = a;
                Residue = Cy;
                Cy = Cl;
                Cl = Residue;
              }
              m = 0.5 * (Cd - phi);
              toler = 4.4408920985006262E-16 *
                      muDoubleScalarMax(muDoubleScalarAbs(phi), 1.0);
              if ((muDoubleScalarAbs(m) <= toler) || (Cy == 0.0)) {
                exitg1 = true;
              } else {
                if ((muDoubleScalarAbs(e) < toler) ||
                    (muDoubleScalarAbs(Residue) <= muDoubleScalarAbs(Cy))) {
                  d = m;
                  e = m;
                } else {
                  real_T s;
                  s = Cy / Residue;
                  if (a == Cd) {
                    Residue = 2.0 * m * s;
                    aa = 1.0 - s;
                  } else {
                    aa = Residue / Cl;
                    Cx = Cy / Cl;
                    Residue =
                        s * (2.0 * m * aa * (aa - Cx) - (phi - a) * (Cx - 1.0));
                    aa = (aa - 1.0) * (Cx - 1.0) * (s - 1.0);
                  }
                  if (Residue > 0.0) {
                    aa = -aa;
                  } else {
                    Residue = -Residue;
                  }
                  if ((2.0 * Residue <
                       3.0 * m * aa - muDoubleScalarAbs(toler * aa)) &&
                      (Residue < muDoubleScalarAbs(0.5 * e * aa))) {
                    e = d;
                    d = Residue / aa;
                  } else {
                    d = m;
                    e = m;
                  }
                }
                a = phi;
                Residue = Cy;
                if (muDoubleScalarAbs(d) > toler) {
                  phi += d;
                } else if (phi > Cd) {
                  phi -= toler;
                } else {
                  phi += toler;
                }
                c_st.site = &vu_emlrtRSI;
                d_st.site = &ru_emlrtRSI;
                e_st.site = &su_emlrtRSI;
                Cy = CallStateResidual(&e_st, phi, theta, Vx, Vy,
                                       workspace_FoilNo, Airfoils->Cylinder1,
                                       Airfoils->Cylinder2, Airfoils->DU21_A17,
                                       Airfoils->DU25_A17, Airfoils->DU30_A17,
                                       Airfoils->DU35_A17, Airfoils->DU40_A17,
                                       Airfoils->NACA64_A17, TipRad, HubRad,
                                       workspace_BlSpn, Solid, Azimuth);
              }
            }
          }
          /*  Standard solution region */
        } else {
          b_st.site = &ou_emlrtRSI;
          c_st.site = &ru_emlrtRSI;
          Residue = c_UpdateInflowAngle_anonFcn1(
              &c_st, theta, Vx, Vy, workspace_FoilNo, Airfoils->Cylinder1,
              Airfoils->Cylinder2, Airfoils->DU21_A17, Airfoils->DU25_A17,
              Airfoils->DU30_A17, Airfoils->DU35_A17, Airfoils->DU40_A17,
              Airfoils->NACA64_A17, TipRad, HubRad, workspace_BlSpn, Solid,
              Azimuth);
          b_st.site = &ou_emlrtRSI;
          c_st.site = &ru_emlrtRSI;
          a = d_UpdateInflowAngle_anonFcn1(
              &c_st, theta, Vx, Vy, workspace_FoilNo, Airfoils->Cylinder1,
              Airfoils->Cylinder2, Airfoils->DU21_A17, Airfoils->DU25_A17,
              Airfoils->DU30_A17, Airfoils->DU35_A17, Airfoils->DU40_A17,
              Airfoils->NACA64_A17, TipRad, HubRad, workspace_BlSpn, Solid,
              Azimuth);
          if (Residue * a < 0.0) {
            b_st.site = &pu_emlrtRSI;
            aa = -0.78539816339744828;
            phi = -1.0E-6;
            c_st.site = &tu_emlrtRSI;
            d_st.site = &ru_emlrtRSI;
            Residue = c_UpdateInflowAngle_anonFcn1(
                &d_st, theta, Vx, Vy, workspace_FoilNo, Airfoils->Cylinder1,
                Airfoils->Cylinder2, Airfoils->DU21_A17, Airfoils->DU25_A17,
                Airfoils->DU30_A17, Airfoils->DU35_A17, Airfoils->DU40_A17,
                Airfoils->NACA64_A17, TipRad, HubRad, workspace_BlSpn, Solid,
                Azimuth);
            c_st.site = &uu_emlrtRSI;
            d_st.site = &ru_emlrtRSI;
            Cl = d_UpdateInflowAngle_anonFcn1(
                &d_st, theta, Vx, Vy, workspace_FoilNo, Airfoils->Cylinder1,
                Airfoils->Cylinder2, Airfoils->DU21_A17, Airfoils->DU25_A17,
                Airfoils->DU30_A17, Airfoils->DU35_A17, Airfoils->DU40_A17,
                Airfoils->NACA64_A17, TipRad, HubRad, workspace_BlSpn, Solid,
                Azimuth);
            if (muDoubleScalarIsInf(Residue) || muDoubleScalarIsNaN(Residue) ||
                (muDoubleScalarIsInf(Cl) || muDoubleScalarIsNaN(Cl))) {
              emlrtErrorWithMessageIdR2018a(
                  &b_st, &p_emlrtRTEI,
                  "MATLAB:optimfun:fzero:ValuesAtEndPtsComplexOrNotFinite",
                  "MATLAB:optimfun:fzero:ValuesAtEndPtsComplexOrNotFinite", 0);
            }
            if (Residue == 0.0) {
              phi = -0.78539816339744828;
            } else if (!(Cl == 0.0)) {
              real_T d;
              real_T e;
              boolean_T exitg1;
              if ((Residue > 0.0) == (Cl > 0.0)) {
                emlrtErrorWithMessageIdR2018a(
                    &b_st, &q_emlrtRTEI,
                    "MATLAB:optimfun:fzero:ValuesAtEndPtsSameSign",
                    "MATLAB:optimfun:fzero:ValuesAtEndPtsSameSign", 0);
              }
              Cd = Cl;
              a = -1.0E-6;
              e = 0.0;
              d = 0.0;
              exitg1 = false;
              while ((!exitg1) && ((Cl != 0.0) && (aa != phi))) {
                real_T m;
                real_T toler;
                if ((Cl > 0.0) == (Cd > 0.0)) {
                  a = aa;
                  Cd = Residue;
                  d = phi - aa;
                  e = d;
                }
                if (muDoubleScalarAbs(Cd) < muDoubleScalarAbs(Cl)) {
                  aa = phi;
                  phi = a;
                  a = aa;
                  Residue = Cl;
                  Cl = Cd;
                  Cd = Residue;
                }
                m = 0.5 * (a - phi);
                toler = 4.4408920985006262E-16 *
                        muDoubleScalarMax(muDoubleScalarAbs(phi), 1.0);
                if ((muDoubleScalarAbs(m) <= toler) || (Cl == 0.0)) {
                  exitg1 = true;
                } else {
                  if ((muDoubleScalarAbs(e) < toler) ||
                      (muDoubleScalarAbs(Residue) <= muDoubleScalarAbs(Cl))) {
                    d = m;
                    e = m;
                  } else {
                    real_T s;
                    s = Cl / Residue;
                    if (aa == a) {
                      Residue = 2.0 * m * s;
                      Cx = 1.0 - s;
                    } else {
                      Cx = Residue / Cd;
                      Cy = Cl / Cd;
                      Residue = s * (2.0 * m * Cx * (Cx - Cy) -
                                     (phi - aa) * (Cy - 1.0));
                      Cx = (Cx - 1.0) * (Cy - 1.0) * (s - 1.0);
                    }
                    if (Residue > 0.0) {
                      Cx = -Cx;
                    } else {
                      Residue = -Residue;
                    }
                    if ((2.0 * Residue <
                         3.0 * m * Cx - muDoubleScalarAbs(toler * Cx)) &&
                        (Residue < muDoubleScalarAbs(0.5 * e * Cx))) {
                      e = d;
                      d = Residue / Cx;
                    } else {
                      d = m;
                      e = m;
                    }
                  }
                  aa = phi;
                  Residue = Cl;
                  if (muDoubleScalarAbs(d) > toler) {
                    phi += d;
                  } else if (phi > a) {
                    phi -= toler;
                  } else {
                    phi += toler;
                  }
                  c_st.site = &vu_emlrtRSI;
                  d_st.site = &ru_emlrtRSI;
                  e_st.site = &su_emlrtRSI;
                  Cl = CallStateResidual(
                      &e_st, phi, theta, Vx, Vy, workspace_FoilNo,
                      Airfoils->Cylinder1, Airfoils->Cylinder2,
                      Airfoils->DU21_A17, Airfoils->DU25_A17,
                      Airfoils->DU30_A17, Airfoils->DU35_A17,
                      Airfoils->DU40_A17, Airfoils->NACA64_A17, TipRad, HubRad,
                      workspace_BlSpn, Solid, Azimuth);
                }
              }
            }
            /*  Propeller brake region */
          } else {
            b_st.site = &lv_emlrtRSI;
            disp(&b_st, emlrt_marshallOut(Vx), &b_emlrtMCI);
            b_st.site = &kv_emlrtRSI;
            disp(&b_st, emlrt_marshallOut(Vy), &c_emlrtMCI);
            b_st.site = &qu_emlrtRSI;
            phi = fzero(&b_st, theta, Vx, Vy, workspace_FoilNo,
                        Airfoils->Cylinder1, Airfoils->Cylinder2,
                        Airfoils->DU21_A17, Airfoils->DU25_A17,
                        Airfoils->DU30_A17, Airfoils->DU35_A17,
                        Airfoils->DU40_A17, Airfoils->NACA64_A17, TipRad,
                        HubRad, workspace_BlSpn, Solid, Azimuth);
            /*  Last solution region */
          }
        }
        phi_data[Residue_tmp] = phi;
        if (b) {
          emlrtDynamicBoundsCheckR2012b((int32_T)((uint32_T)iNd + 2U), 1,
                                        phi_size[0], &rd_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        st.site = &at_emlrtRSI;
        Residue = CalcOutput(
            &st, phi_data[Residue_tmp], theta, workspace_FoilNo,
            Airfoils->Cylinder1, Airfoils->Cylinder2, Airfoils->DU21_A17,
            Airfoils->DU25_A17, Airfoils->DU30_A17, Airfoils->DU35_A17,
            Airfoils->DU40_A17, Airfoils->NACA64_A17, TipRad, HubRad,
            workspace_BlSpn, Solid, Azimuth, &aa, &Cx, &Cy, &Cl, &Cd);
      }
      /*  Final Velocities and forces %             */
      st.site = &bt_emlrtRSI;
      a = Vx * (1.0 - Residue);
      b_st.site = &qo_emlrtRSI;
      c_st.site = &ro_emlrtRSI;
      st.site = &bt_emlrtRSI;
      Residue = Vy * (aa + 1.0);
      b_st.site = &qo_emlrtRSI;
      c_st.site = &ro_emlrtRSI;
      Residue = 0.6125 * Solid_tmp * (a * a + Residue * Residue);
      if (((int32_T)((uint32_T)iNd + 2U) < 1) ||
          ((int32_T)((uint32_T)iNd + 2U) > px->size[0])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)((uint32_T)iNd + 2U), 1,
                                      px->size[0], &od_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      px_data[(iNd + px->size[0] * B) + 1] = Cx * Residue;
      if (((int32_T)((uint32_T)iNd + 2U) < 1) ||
          ((int32_T)((uint32_T)iNd + 2U) > py->size[0])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)((uint32_T)iNd + 2U), 1,
                                      py->size[0], &pd_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      py_data[(iNd + py->size[0] * B) + 1] = -Cy * Residue;
      if (((int32_T)((uint32_T)iNd + 2U) < 1) ||
          ((int32_T)((uint32_T)iNd + 2U) > Mz->size[0])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)((uint32_T)iNd + 2U), 1,
                                      Mz->size[0], &qd_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      Mz_data[(iNd + Mz->size[0] * B) + 1] =
          Cl * Residue * AeroCentJ2[iNd + 1] -
          Cd * Residue * AeroCentJ1[iNd + 1];
      /*  + Cm(iNd)*Const*Cord(iNd)            */
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtConstCTX)sp);
      }
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
}

real_T CallStateResidual(
    const emlrtStack *sp, real_T phi, real_T theta, real_T Vx, real_T Vy,
    real_T FoilNo, const real_T Airfoils_Cylinder1[12],
    const real_T Airfoils_Cylinder2[12], const real_T Airfoils_DU21_A17[568],
    const real_T Airfoils_DU25_A17[560], const real_T Airfoils_DU30_A17[572],
    const real_T Airfoils_DU35_A17[540], const real_T Airfoils_DU40_A17[544],
    const real_T Airfoils_NACA64_A17[508], real_T TipRad, real_T HubRad,
    real_T BlSpn, real_T Solid, real_T Azimuth)
{
  emlrtStack b_st;
  emlrtStack st;
  real_T Cd;
  real_T Cl;
  real_T Cx_tmp;
  real_T F;
  real_T Residue;
  real_T a;
  real_T b_Cx_tmp;
  boolean_T guard1;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  /*  Residue % */
  st.site = &ct_emlrtRSI;
  /*  Force coefficients % */
  b_st.site = &ht_emlrtRSI;
  Cl = LiftDragCoeffInterp(
      &b_st, phi - theta, FoilNo, Airfoils_Cylinder1, Airfoils_Cylinder2,
      Airfoils_DU21_A17, Airfoils_DU25_A17, Airfoils_DU30_A17,
      Airfoils_DU35_A17, Airfoils_DU40_A17, Airfoils_NACA64_A17, &Cd);
  Cx_tmp = muDoubleScalarSin(phi);
  b_Cx_tmp = muDoubleScalarCos(phi);
  st.site = &dt_emlrtRSI;
  /*  Hub/Tip Losses % */
  Residue = muDoubleScalarAbs(Cx_tmp);
  F = 0.63661977236758138 *
      muDoubleScalarAcos(muDoubleScalarMin(
          1.0,
          muDoubleScalarExp(-(1.5 * (TipRad - BlSpn) / (BlSpn * Residue))))) *
      (0.63661977236758138 *
       muDoubleScalarAcos(muDoubleScalarMin(
           1.0,
           muDoubleScalarExp(-(1.5 * (BlSpn - HubRad) / (HubRad * Residue))))));
  /*  Non dimensional parameters % */
  if (Cx_tmp == 0.0) {
    Residue = 1.7976931348623157E+308;
  } else {
    st.site = &et_emlrtRSI;
    Residue =
        Solid * (Cl * b_Cx_tmp + Cd * Cx_tmp) / (4.0 * F * (Cx_tmp * Cx_tmp));
  }
  a = 0.0;
  /*      aa = 1; */
  /*  Different equation depending on solution region % */
  guard1 = false;
  if (phi > 0.0) {
    if (Residue <= 0.66666666666666663) {
      /*  momentum region */
      if (Residue == -1.0) {
        Residue = -1.1;
      }
      a = muDoubleScalarMax(Residue / (Residue + 1.0), -10.0);
      /*  Patch */
    } else {
      real_T g2;
      real_T g2_tmp;
      /*  emperical region */
      a = 2.0 * F;
      g2_tmp = a * Residue;
      g2 = g2_tmp - F * (1.3333333333333333 - F);
      Residue = g2_tmp - (2.7777777777777777 - a);
      if (muDoubleScalarAbs(Residue) < 1.0E-6) {
        st.site = &ft_emlrtRSI;
        if (g2 < 0.0) {
          emlrtErrorWithMessageIdR2018a(
              &st, &m_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
              "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
        }
        a = 1.0 - 1.0 / (2.0 * muDoubleScalarSqrt(g2));
      } else {
        st.site = &gt_emlrtRSI;
        if (g2 < 0.0) {
          emlrtErrorWithMessageIdR2018a(
              &st, &m_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
              "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
        }
        a = ((g2_tmp - (1.1111111111111112 - F)) - muDoubleScalarSqrt(g2)) /
            Residue;
      }
    }
    guard1 = true;
  } else if (phi < 0.0) {
    if (Residue > 1.0) {
      /*  propeller brake region */
      a = muDoubleScalarMin(Residue / (Residue - 1.0), 10.0);
      /*  Patch */
    }
    guard1 = true;
  } else if (phi == 0.0) {
    Residue = Cx_tmp - Vx / Vy * b_Cx_tmp;
  } else {
    guard1 = true;
  }
  if (guard1) {
    /* Pitt and Peters yaw correction model % */
    a *= 0.73631077818510771 * muDoubleScalarTan((0.6 * a + 1.0) * 0.0 / 2.0) *
             BlSpn / TipRad * muDoubleScalarSin(Azimuth) +
         1.0;
    /*  Tangential induction factor % */
    if (Cx_tmp * b_Cx_tmp == 0.0) {
      Residue = 1.7976931348623157E+308;
    } else {
      Residue =
          Solid * (Cl * Cx_tmp - Cd * b_Cx_tmp) / (4.0 * F * Cx_tmp * b_Cx_tmp);
    }
    if (Residue == 1.0) {
      a = 0.0;
      Residue = 0.0;
    } else {
      Residue /= 1.0 - Residue;
      if (muDoubleScalarAbs(Residue) > 10.0) {
        Residue = 10.0 * muDoubleScalarSign(Residue);
        /*  Patch */
      }
    }
    /*     %% Residue % */
    if (a == 1.0) {
      Residue = -Vx / Vy * b_Cx_tmp / (Residue + 1.0);
    } else {
      Residue = Cx_tmp / (1.0 - a) - Vx / Vy * b_Cx_tmp / (Residue + 1.0);
    }
  }
  return Residue;
}

real_T UpdateInflowAngle_anonFcn1(
    const emlrtStack *sp, real_T theta, real_T Vx, real_T Vy, real_T FoilNo,
    const real_T Airfoils_Cylinder1[12], const real_T Airfoils_Cylinder2[12],
    const real_T Airfoils_DU21_A17[568], const real_T Airfoils_DU25_A17[560],
    const real_T Airfoils_DU30_A17[572], const real_T Airfoils_DU35_A17[540],
    const real_T Airfoils_DU40_A17[544], const real_T Airfoils_NACA64_A17[508],
    real_T TipRad, real_T HubRad, real_T BlSpn, real_T Solid, real_T Azimuth)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  real_T Cd;
  real_T Cl;
  real_T F;
  real_T a;
  real_T k_tmp;
  real_T varargout_1;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  st.site = &su_emlrtRSI;
  /*  Residue % */
  b_st.site = &ct_emlrtRSI;
  /*  Force coefficients % */
  c_st.site = &ht_emlrtRSI;
  Cl = LiftDragCoeffInterp(&c_st, 1.5707963267948966 - theta, FoilNo,
                           Airfoils_Cylinder1, Airfoils_Cylinder2,
                           Airfoils_DU21_A17, Airfoils_DU25_A17,
                           Airfoils_DU30_A17, Airfoils_DU35_A17,
                           Airfoils_DU40_A17, Airfoils_NACA64_A17, &Cd);
  b_st.site = &dt_emlrtRSI;
  /*  Hub/Tip Losses % */
  F = 0.63661977236758138 *
      muDoubleScalarAcos(muDoubleScalarMin(
          1.0, muDoubleScalarExp(-(1.5 * (TipRad - BlSpn) / BlSpn)))) *
      (0.63661977236758138 *
       muDoubleScalarAcos(muDoubleScalarMin(
           1.0, muDoubleScalarExp(-(1.5 * (BlSpn - HubRad) / HubRad)))));
  /*  Non dimensional parameters % */
  b_st.site = &et_emlrtRSI;
  k_tmp = 4.0 * F;
  varargout_1 = Solid * (Cl * 6.123233995736766E-17 + Cd) / k_tmp;
  /*      aa = 1; */
  /*  Different equation depending on solution region % */
  if (varargout_1 <= 0.66666666666666663) {
    /*  momentum region */
    if (varargout_1 == -1.0) {
      varargout_1 = -1.1;
    }
    a = muDoubleScalarMax(varargout_1 / (varargout_1 + 1.0), -10.0);
    /*  Patch */
  } else {
    real_T g2;
    real_T g2_tmp;
    /*  emperical region */
    a = 2.0 * F;
    g2_tmp = a * varargout_1;
    g2 = g2_tmp - F * (1.3333333333333333 - F);
    varargout_1 = g2_tmp - (2.7777777777777777 - a);
    if (muDoubleScalarAbs(varargout_1) < 1.0E-6) {
      b_st.site = &ft_emlrtRSI;
      if (g2 < 0.0) {
        emlrtErrorWithMessageIdR2018a(
            &b_st, &m_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
            "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
      }
      a = 1.0 - 1.0 / (2.0 * muDoubleScalarSqrt(g2));
    } else {
      b_st.site = &gt_emlrtRSI;
      if (g2 < 0.0) {
        emlrtErrorWithMessageIdR2018a(
            &b_st, &m_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
            "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
      }
      a = ((g2_tmp - (1.1111111111111112 - F)) - muDoubleScalarSqrt(g2)) /
          varargout_1;
    }
  }
  /* Pitt and Peters yaw correction model % */
  a *= 0.73631077818510771 * muDoubleScalarTan((0.6 * a + 1.0) * 0.0 / 2.0) *
           BlSpn / TipRad * muDoubleScalarSin(Azimuth) +
       1.0;
  /*  Tangential induction factor % */
  varargout_1 = Solid * (Cl - Cd * 6.123233995736766E-17) /
                (k_tmp * 6.123233995736766E-17);
  if (varargout_1 == 1.0) {
    a = 0.0;
    varargout_1 = 0.0;
  } else {
    varargout_1 /= 1.0 - varargout_1;
    if (muDoubleScalarAbs(varargout_1) > 10.0) {
      varargout_1 = 10.0 * muDoubleScalarSign(varargout_1);
      /*  Patch */
    }
  }
  /*     %% Residue % */
  if (a == 1.0) {
    varargout_1 = -Vx / Vy * 6.123233995736766E-17 / (varargout_1 + 1.0);
  } else {
    varargout_1 =
        1.0 / (1.0 - a) - Vx / Vy * 6.123233995736766E-17 / (varargout_1 + 1.0);
  }
  return varargout_1;
}

/* End of code generation (BEMTMex.c) */
