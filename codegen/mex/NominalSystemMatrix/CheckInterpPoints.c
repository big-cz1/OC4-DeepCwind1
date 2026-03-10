/*
 * CheckInterpPoints.c
 *
 * Code generation for function 'CheckInterpPoints'
 *
 */

/* Include files */
#include "CheckInterpPoints.h"
#include "NominalSystemMatrix_data.h"
#include "NominalSystemMatrix_types.h"
#include "eml_int_forloop_overflow_check.h"
#include "error.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo pr_emlrtRSI = {
    8,                   /* lineNo */
    "CheckInterpPoints", /* fcnName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-"
    "DeepCwind1\\src\\CheckInterpPoints.m" /* pathName */
};

static emlrtRSInfo qr_emlrtRSI = {
    9,                   /* lineNo */
    "CheckInterpPoints", /* fcnName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-"
    "DeepCwind1\\src\\CheckInterpPoints.m" /* pathName */
};

static emlrtRSInfo rr_emlrtRSI = {
    10,                  /* lineNo */
    "CheckInterpPoints", /* fcnName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-"
    "DeepCwind1\\src\\CheckInterpPoints.m" /* pathName */
};

static emlrtRSInfo sr_emlrtRSI = {
    11,                  /* lineNo */
    "CheckInterpPoints", /* fcnName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-"
    "DeepCwind1\\src\\CheckInterpPoints.m" /* pathName */
};

static emlrtRSInfo tr_emlrtRSI = {
    12,                  /* lineNo */
    "CheckInterpPoints", /* fcnName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-"
    "DeepCwind1\\src\\CheckInterpPoints.m" /* pathName */
};

static emlrtRSInfo ur_emlrtRSI = {
    13,                  /* lineNo */
    "CheckInterpPoints", /* fcnName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-"
    "DeepCwind1\\src\\CheckInterpPoints.m" /* pathName */
};

static emlrtRSInfo vr_emlrtRSI = {
    14,                  /* lineNo */
    "CheckInterpPoints", /* fcnName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-"
    "DeepCwind1\\src\\CheckInterpPoints.m" /* pathName */
};

static emlrtRSInfo wr_emlrtRSI = {
    15,                  /* lineNo */
    "CheckInterpPoints", /* fcnName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-"
    "DeepCwind1\\src\\CheckInterpPoints.m" /* pathName */
};

static emlrtRSInfo xr_emlrtRSI = {
    15,    /* lineNo */
    "max", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\R2025b\\toolbox\\eml\\lib\\matlab\\datafun\\max.m" /* pathName
                                                                        */
};

static emlrtRSInfo yr_emlrtRSI =
    {
        73,         /* lineNo */
        "minOrMax", /* fcnName */
        "D:\\Program "
        "Files\\MATLAB\\R2025b\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax."
        "m" /* pathName */
};

static emlrtRSInfo as_emlrtRSI =
    {
        108,       /* lineNo */
        "maximum", /* fcnName */
        "D:\\Program "
        "Files\\MATLAB\\R2025b\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax."
        "m" /* pathName */
};

static emlrtRSInfo bs_emlrtRSI = {
    255,             /* lineNo */
    "unaryMinOrMax", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\R2025b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\unaryMinOrMax.m" /* pathName */
};

static emlrtRSInfo cs_emlrtRSI = {
    966,                    /* lineNo */
    "maxRealVectorOmitNaN", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\R2025b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\unaryMinOrMax.m" /* pathName */
};

static emlrtRSInfo ds_emlrtRSI = {
    73,                      /* lineNo */
    "vectorMinOrMaxInPlace", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\R2025b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\vectorMinOrMaxInPlace.m" /* pathName */
};

static emlrtRSInfo es_emlrtRSI = {
    65,                      /* lineNo */
    "vectorMinOrMaxInPlace", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\R2025b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\vectorMinOrMaxInPlace.m" /* pathName */
};

static emlrtRSInfo fs_emlrtRSI = {
    114,         /* lineNo */
    "findFirst", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\R2025b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\vectorMinOrMaxInPlace.m" /* pathName */
};

static emlrtRSInfo gs_emlrtRSI = {
    131,                        /* lineNo */
    "minOrMaxRealVectorKernel", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\R2025b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\vectorMinOrMaxInPlace.m" /* pathName */
};

static emlrtRSInfo hs_emlrtRSI = {
    15,    /* lineNo */
    "min", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\R2025b\\toolbox\\eml\\lib\\matlab\\datafun\\min.m" /* pathName
                                                                        */
};

static emlrtRSInfo is_emlrtRSI =
    {
        75,         /* lineNo */
        "minOrMax", /* fcnName */
        "D:\\Program "
        "Files\\MATLAB\\R2025b\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax."
        "m" /* pathName */
};

static emlrtRSInfo js_emlrtRSI =
    {
        121,       /* lineNo */
        "minimum", /* fcnName */
        "D:\\Program "
        "Files\\MATLAB\\R2025b\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax."
        "m" /* pathName */
};

static emlrtRSInfo ks_emlrtRSI = {
    273,             /* lineNo */
    "unaryMinOrMax", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\R2025b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\unaryMinOrMax.m" /* pathName */
};

static emlrtRSInfo ls_emlrtRSI = {
    962,                    /* lineNo */
    "minRealVectorOmitNaN", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\R2025b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\unaryMinOrMax.m" /* pathName */
};

static emlrtRTEInfo i_emlrtRTEI = {
    90,              /* lineNo */
    27,              /* colNo */
    "unaryMinOrMax", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\R2025b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\unaryMinOrMax.m" /* pName */
};

static emlrtRTEInfo j_emlrtRTEI = {
    198,             /* lineNo */
    27,              /* colNo */
    "unaryMinOrMax", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\R2025b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\unaryMinOrMax.m" /* pName */
};

/* Function Definitions */
void CheckInterpPoints(const emlrtStack *sp, const real_T GridZ[31],
                       const real_T GridY[31], const emxArray_real_T *ZBlNode_Y,
                       const emxArray_real_T *ZBlNode_Z)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack i_st;
  emlrtStack st;
  const real_T *ZBlNode_Y_data;
  const real_T *ZBlNode_Z_data;
  int32_T iBd;
  int32_T k;
  int32_T last;
  boolean_T b;
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
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  h_st.prev = &g_st;
  h_st.tls = g_st.tls;
  i_st.prev = &h_st;
  i_st.tls = h_st.tls;
  ZBlNode_Z_data = ZBlNode_Z->data;
  ZBlNode_Y_data = ZBlNode_Y->data;
  /*  Wind.z = vertical */
  /*  Wind.y = horizontal */
  /*  ZBlNode_Y = vertical */
  /*  ZBlNode_Z = horizontal */
  b = true;
  last = ZBlNode_Y->size[0];
  for (iBd = 0; iBd < 3; iBd++) {
    real_T d;
    real_T ex;
    int32_T b_idx;
    int32_T idx;
    boolean_T exitg1;
    st.site = &pr_emlrtRSI;
    b_st.site = &xr_emlrtRSI;
    c_st.site = &yr_emlrtRSI;
    d_st.site = &as_emlrtRSI;
    if (!b) {
      emlrtErrorWithMessageIdR2018a(&d_st, &i_emlrtRTEI,
                                    "Coder:toolbox:autoDimIncompatibility",
                                    "Coder:toolbox:autoDimIncompatibility", 0);
    }
    if (ZBlNode_Y->size[0] < 1) {
      emlrtErrorWithMessageIdR2018a(
          &d_st, &j_emlrtRTEI, "Coder:toolbox:eml_min_or_max_varDimZero",
          "Coder:toolbox:eml_min_or_max_varDimZero", 0);
    }
    e_st.site = &bs_emlrtRSI;
    f_st.site = &cs_emlrtRSI;
    if (ZBlNode_Y->size[0] <= 2) {
      if (ZBlNode_Y->size[0] == 1) {
        ex = ZBlNode_Y_data[ZBlNode_Y->size[0] * iBd];
      } else if ((ZBlNode_Y_data[ZBlNode_Y->size[0] * iBd] <
                  ZBlNode_Y_data[ZBlNode_Y->size[0] * iBd + 1]) ||
                 (muDoubleScalarIsNaN(
                      ZBlNode_Y_data[ZBlNode_Y->size[0] * iBd]) &&
                  (!muDoubleScalarIsNaN(
                      ZBlNode_Y_data[ZBlNode_Y->size[0] * iBd + 1])))) {
        ex = ZBlNode_Y_data[ZBlNode_Y->size[0] * iBd + 1];
      } else {
        ex = ZBlNode_Y_data[ZBlNode_Y->size[0] * iBd];
      }
    } else {
      g_st.site = &es_emlrtRSI;
      if (!muDoubleScalarIsNaN(ZBlNode_Y_data[ZBlNode_Y->size[0] * iBd])) {
        idx = 1;
      } else {
        idx = 0;
        h_st.site = &fs_emlrtRSI;
        if (ZBlNode_Y->size[0] > 2147483646) {
          i_st.site = &hr_emlrtRSI;
          check_forloop_overflow_error(&i_st);
        }
        b_idx = 2;
        exitg1 = false;
        while ((!exitg1) && (b_idx <= last)) {
          if (!muDoubleScalarIsNaN(
                  ZBlNode_Y_data[(b_idx + ZBlNode_Y->size[0] * iBd) - 1])) {
            idx = b_idx;
            exitg1 = true;
          } else {
            b_idx++;
          }
        }
      }
      if (idx == 0) {
        ex = ZBlNode_Y_data[ZBlNode_Y->size[0] * iBd];
      } else {
        g_st.site = &ds_emlrtRSI;
        ex = ZBlNode_Y_data[(idx + ZBlNode_Y->size[0] * iBd) - 1];
        b_idx = idx + 1;
        h_st.site = &gs_emlrtRSI;
        if ((idx + 1 <= ZBlNode_Y->size[0]) &&
            (ZBlNode_Y->size[0] > 2147483646)) {
          i_st.site = &hr_emlrtRSI;
          check_forloop_overflow_error(&i_st);
        }
        for (k = b_idx; k <= last; k++) {
          d = ZBlNode_Y_data[(k + ZBlNode_Y->size[0] * iBd) - 1];
          if (ex < d) {
            ex = d;
          }
        }
      }
    }
    if (ex > GridY[30]) {
      st.site = &qr_emlrtRSI;
      b_st.site = &xr_emlrtRSI;
      c_st.site = &yr_emlrtRSI;
      d_st.site = &as_emlrtRSI;
      e_st.site = &bs_emlrtRSI;
      f_st.site = &cs_emlrtRSI;
      if (ZBlNode_Y->size[0] <= 2) {
        if (ZBlNode_Y->size[0] == 1) {
          ex = ZBlNode_Y_data[ZBlNode_Y->size[0] * iBd];
        } else if ((ZBlNode_Y_data[ZBlNode_Y->size[0] * iBd] <
                    ZBlNode_Y_data[ZBlNode_Y->size[0] * iBd + 1]) ||
                   (muDoubleScalarIsNaN(
                        ZBlNode_Y_data[ZBlNode_Y->size[0] * iBd]) &&
                    (!muDoubleScalarIsNaN(
                        ZBlNode_Y_data[ZBlNode_Y->size[0] * iBd + 1])))) {
          ex = ZBlNode_Y_data[ZBlNode_Y->size[0] * iBd + 1];
        } else {
          ex = ZBlNode_Y_data[ZBlNode_Y->size[0] * iBd];
        }
      } else {
        g_st.site = &es_emlrtRSI;
        if (!muDoubleScalarIsNaN(ZBlNode_Y_data[ZBlNode_Y->size[0] * iBd])) {
          idx = 1;
        } else {
          idx = 0;
          h_st.site = &fs_emlrtRSI;
          if (ZBlNode_Y->size[0] > 2147483646) {
            i_st.site = &hr_emlrtRSI;
            check_forloop_overflow_error(&i_st);
          }
          b_idx = 2;
          exitg1 = false;
          while ((!exitg1) && (b_idx <= last)) {
            if (!muDoubleScalarIsNaN(
                    ZBlNode_Y_data[(b_idx + ZBlNode_Y->size[0] * iBd) - 1])) {
              idx = b_idx;
              exitg1 = true;
            } else {
              b_idx++;
            }
          }
        }
        if (idx == 0) {
          ex = ZBlNode_Y_data[ZBlNode_Y->size[0] * iBd];
        } else {
          g_st.site = &ds_emlrtRSI;
          ex = ZBlNode_Y_data[(idx + ZBlNode_Y->size[0] * iBd) - 1];
          b_idx = idx + 1;
          h_st.site = &gs_emlrtRSI;
          if ((idx + 1 <= ZBlNode_Y->size[0]) &&
              (ZBlNode_Y->size[0] > 2147483646)) {
            i_st.site = &hr_emlrtRSI;
            check_forloop_overflow_error(&i_st);
          }
          for (k = b_idx; k <= last; k++) {
            d = ZBlNode_Y_data[(k + ZBlNode_Y->size[0] * iBd) - 1];
            if (ex < d) {
              ex = d;
            }
          }
        }
      }
      st.site = &qr_emlrtRSI;
      b_error(&st, ex);
    } else {
      st.site = &rr_emlrtRSI;
      b_st.site = &hs_emlrtRSI;
      c_st.site = &is_emlrtRSI;
      d_st.site = &js_emlrtRSI;
      e_st.site = &ks_emlrtRSI;
      f_st.site = &ls_emlrtRSI;
      if (ZBlNode_Y->size[0] <= 2) {
        if (ZBlNode_Y->size[0] == 1) {
          ex = ZBlNode_Y_data[ZBlNode_Y->size[0] * iBd];
        } else if ((ZBlNode_Y_data[ZBlNode_Y->size[0] * iBd] >
                    ZBlNode_Y_data[ZBlNode_Y->size[0] * iBd + 1]) ||
                   (muDoubleScalarIsNaN(
                        ZBlNode_Y_data[ZBlNode_Y->size[0] * iBd]) &&
                    (!muDoubleScalarIsNaN(
                        ZBlNode_Y_data[ZBlNode_Y->size[0] * iBd + 1])))) {
          ex = ZBlNode_Y_data[ZBlNode_Y->size[0] * iBd + 1];
        } else {
          ex = ZBlNode_Y_data[ZBlNode_Y->size[0] * iBd];
        }
      } else {
        g_st.site = &es_emlrtRSI;
        if (!muDoubleScalarIsNaN(ZBlNode_Y_data[ZBlNode_Y->size[0] * iBd])) {
          idx = 1;
        } else {
          idx = 0;
          h_st.site = &fs_emlrtRSI;
          if (ZBlNode_Y->size[0] > 2147483646) {
            i_st.site = &hr_emlrtRSI;
            check_forloop_overflow_error(&i_st);
          }
          b_idx = 2;
          exitg1 = false;
          while ((!exitg1) && (b_idx <= last)) {
            if (!muDoubleScalarIsNaN(
                    ZBlNode_Y_data[(b_idx + ZBlNode_Y->size[0] * iBd) - 1])) {
              idx = b_idx;
              exitg1 = true;
            } else {
              b_idx++;
            }
          }
        }
        if (idx == 0) {
          ex = ZBlNode_Y_data[ZBlNode_Y->size[0] * iBd];
        } else {
          g_st.site = &ds_emlrtRSI;
          ex = ZBlNode_Y_data[(idx + ZBlNode_Y->size[0] * iBd) - 1];
          b_idx = idx + 1;
          h_st.site = &gs_emlrtRSI;
          if ((idx + 1 <= ZBlNode_Y->size[0]) &&
              (ZBlNode_Y->size[0] > 2147483646)) {
            i_st.site = &hr_emlrtRSI;
            check_forloop_overflow_error(&i_st);
          }
          for (k = b_idx; k <= last; k++) {
            d = ZBlNode_Y_data[(k + ZBlNode_Y->size[0] * iBd) - 1];
            if (ex > d) {
              ex = d;
            }
          }
        }
      }
      if (ex < GridY[0]) {
        st.site = &sr_emlrtRSI;
        b_st.site = &hs_emlrtRSI;
        c_st.site = &is_emlrtRSI;
        d_st.site = &js_emlrtRSI;
        e_st.site = &ks_emlrtRSI;
        f_st.site = &ls_emlrtRSI;
        if (ZBlNode_Y->size[0] <= 2) {
          if (ZBlNode_Y->size[0] == 1) {
            ex = ZBlNode_Y_data[ZBlNode_Y->size[0] * iBd];
          } else if ((ZBlNode_Y_data[ZBlNode_Y->size[0] * iBd] >
                      ZBlNode_Y_data[ZBlNode_Y->size[0] * iBd + 1]) ||
                     (muDoubleScalarIsNaN(
                          ZBlNode_Y_data[ZBlNode_Y->size[0] * iBd]) &&
                      (!muDoubleScalarIsNaN(
                          ZBlNode_Y_data[ZBlNode_Y->size[0] * iBd + 1])))) {
            ex = ZBlNode_Y_data[ZBlNode_Y->size[0] * iBd + 1];
          } else {
            ex = ZBlNode_Y_data[ZBlNode_Y->size[0] * iBd];
          }
        } else {
          g_st.site = &es_emlrtRSI;
          if (!muDoubleScalarIsNaN(ZBlNode_Y_data[ZBlNode_Y->size[0] * iBd])) {
            idx = 1;
          } else {
            idx = 0;
            h_st.site = &fs_emlrtRSI;
            if (ZBlNode_Y->size[0] > 2147483646) {
              i_st.site = &hr_emlrtRSI;
              check_forloop_overflow_error(&i_st);
            }
            b_idx = 2;
            exitg1 = false;
            while ((!exitg1) && (b_idx <= last)) {
              if (!muDoubleScalarIsNaN(
                      ZBlNode_Y_data[(b_idx + ZBlNode_Y->size[0] * iBd) - 1])) {
                idx = b_idx;
                exitg1 = true;
              } else {
                b_idx++;
              }
            }
          }
          if (idx == 0) {
            ex = ZBlNode_Y_data[ZBlNode_Y->size[0] * iBd];
          } else {
            g_st.site = &ds_emlrtRSI;
            ex = ZBlNode_Y_data[(idx + ZBlNode_Y->size[0] * iBd) - 1];
            b_idx = idx + 1;
            h_st.site = &gs_emlrtRSI;
            if ((idx + 1 <= ZBlNode_Y->size[0]) &&
                (ZBlNode_Y->size[0] > 2147483646)) {
              i_st.site = &hr_emlrtRSI;
              check_forloop_overflow_error(&i_st);
            }
            for (k = b_idx; k <= last; k++) {
              d = ZBlNode_Y_data[(k + ZBlNode_Y->size[0] * iBd) - 1];
              if (ex > d) {
                ex = d;
              }
            }
          }
        }
        st.site = &sr_emlrtRSI;
        c_error(&st, ex);
      } else {
        int32_T b_last;
        st.site = &tr_emlrtRSI;
        b_st.site = &xr_emlrtRSI;
        c_st.site = &yr_emlrtRSI;
        d_st.site = &as_emlrtRSI;
        if (ZBlNode_Z->size[0] < 1) {
          emlrtErrorWithMessageIdR2018a(
              &d_st, &j_emlrtRTEI, "Coder:toolbox:eml_min_or_max_varDimZero",
              "Coder:toolbox:eml_min_or_max_varDimZero", 0);
        }
        e_st.site = &bs_emlrtRSI;
        f_st.site = &cs_emlrtRSI;
        b_last = ZBlNode_Z->size[0];
        if (ZBlNode_Z->size[0] <= 2) {
          if (ZBlNode_Z->size[0] == 1) {
            ex = ZBlNode_Z_data[ZBlNode_Z->size[0] * iBd];
          } else if ((ZBlNode_Z_data[ZBlNode_Z->size[0] * iBd] <
                      ZBlNode_Z_data[ZBlNode_Z->size[0] * iBd + 1]) ||
                     (muDoubleScalarIsNaN(
                          ZBlNode_Z_data[ZBlNode_Z->size[0] * iBd]) &&
                      (!muDoubleScalarIsNaN(
                          ZBlNode_Z_data[ZBlNode_Z->size[0] * iBd + 1])))) {
            ex = ZBlNode_Z_data[ZBlNode_Z->size[0] * iBd + 1];
          } else {
            ex = ZBlNode_Z_data[ZBlNode_Z->size[0] * iBd];
          }
        } else {
          g_st.site = &es_emlrtRSI;
          if (!muDoubleScalarIsNaN(ZBlNode_Z_data[ZBlNode_Z->size[0] * iBd])) {
            b_idx = 1;
          } else {
            b_idx = 0;
            h_st.site = &fs_emlrtRSI;
            if (ZBlNode_Z->size[0] > 2147483646) {
              i_st.site = &hr_emlrtRSI;
              check_forloop_overflow_error(&i_st);
            }
            idx = 2;
            exitg1 = false;
            while ((!exitg1) && (idx <= b_last)) {
              if (!muDoubleScalarIsNaN(
                      ZBlNode_Z_data[(idx + ZBlNode_Z->size[0] * iBd) - 1])) {
                b_idx = idx;
                exitg1 = true;
              } else {
                idx++;
              }
            }
          }
          if (b_idx == 0) {
            ex = ZBlNode_Z_data[ZBlNode_Z->size[0] * iBd];
          } else {
            g_st.site = &ds_emlrtRSI;
            ex = ZBlNode_Z_data[(b_idx + ZBlNode_Z->size[0] * iBd) - 1];
            idx = b_idx + 1;
            h_st.site = &gs_emlrtRSI;
            if ((b_idx + 1 <= ZBlNode_Z->size[0]) &&
                (ZBlNode_Z->size[0] > 2147483646)) {
              i_st.site = &hr_emlrtRSI;
              check_forloop_overflow_error(&i_st);
            }
            for (k = idx; k <= b_last; k++) {
              d = ZBlNode_Z_data[(k + ZBlNode_Z->size[0] * iBd) - 1];
              if (ex < d) {
                ex = d;
              }
            }
          }
        }
        if (ex > GridZ[30]) {
          st.site = &ur_emlrtRSI;
          b_st.site = &xr_emlrtRSI;
          c_st.site = &yr_emlrtRSI;
          d_st.site = &as_emlrtRSI;
          e_st.site = &bs_emlrtRSI;
          f_st.site = &cs_emlrtRSI;
          if (ZBlNode_Z->size[0] <= 2) {
            if (ZBlNode_Z->size[0] == 1) {
              ex = ZBlNode_Z_data[ZBlNode_Z->size[0] * iBd];
            } else if ((ZBlNode_Z_data[ZBlNode_Z->size[0] * iBd] <
                        ZBlNode_Z_data[ZBlNode_Z->size[0] * iBd + 1]) ||
                       (muDoubleScalarIsNaN(
                            ZBlNode_Z_data[ZBlNode_Z->size[0] * iBd]) &&
                        (!muDoubleScalarIsNaN(
                            ZBlNode_Z_data[ZBlNode_Z->size[0] * iBd + 1])))) {
              ex = ZBlNode_Z_data[ZBlNode_Z->size[0] * iBd + 1];
            } else {
              ex = ZBlNode_Z_data[ZBlNode_Z->size[0] * iBd];
            }
          } else {
            g_st.site = &es_emlrtRSI;
            if (!muDoubleScalarIsNaN(
                    ZBlNode_Z_data[ZBlNode_Z->size[0] * iBd])) {
              b_idx = 1;
            } else {
              b_idx = 0;
              h_st.site = &fs_emlrtRSI;
              if (ZBlNode_Z->size[0] > 2147483646) {
                i_st.site = &hr_emlrtRSI;
                check_forloop_overflow_error(&i_st);
              }
              idx = 2;
              exitg1 = false;
              while ((!exitg1) && (idx <= b_last)) {
                if (!muDoubleScalarIsNaN(
                        ZBlNode_Z_data[(idx + ZBlNode_Z->size[0] * iBd) - 1])) {
                  b_idx = idx;
                  exitg1 = true;
                } else {
                  idx++;
                }
              }
            }
            if (b_idx == 0) {
              ex = ZBlNode_Z_data[ZBlNode_Z->size[0] * iBd];
            } else {
              g_st.site = &ds_emlrtRSI;
              ex = ZBlNode_Z_data[(b_idx + ZBlNode_Z->size[0] * iBd) - 1];
              idx = b_idx + 1;
              h_st.site = &gs_emlrtRSI;
              if ((b_idx + 1 <= ZBlNode_Z->size[0]) &&
                  (ZBlNode_Z->size[0] > 2147483646)) {
                i_st.site = &hr_emlrtRSI;
                check_forloop_overflow_error(&i_st);
              }
              for (k = idx; k <= b_last; k++) {
                d = ZBlNode_Z_data[(k + ZBlNode_Z->size[0] * iBd) - 1];
                if (ex < d) {
                  ex = d;
                }
              }
            }
          }
          st.site = &ur_emlrtRSI;
          d_error(&st, ex);
        } else {
          st.site = &vr_emlrtRSI;
          b_st.site = &hs_emlrtRSI;
          c_st.site = &is_emlrtRSI;
          d_st.site = &js_emlrtRSI;
          e_st.site = &ks_emlrtRSI;
          f_st.site = &ls_emlrtRSI;
          if (ZBlNode_Z->size[0] <= 2) {
            if (ZBlNode_Z->size[0] == 1) {
              ex = ZBlNode_Z_data[ZBlNode_Z->size[0] * iBd];
            } else if ((ZBlNode_Z_data[ZBlNode_Z->size[0] * iBd] >
                        ZBlNode_Z_data[ZBlNode_Z->size[0] * iBd + 1]) ||
                       (muDoubleScalarIsNaN(
                            ZBlNode_Z_data[ZBlNode_Z->size[0] * iBd]) &&
                        (!muDoubleScalarIsNaN(
                            ZBlNode_Z_data[ZBlNode_Z->size[0] * iBd + 1])))) {
              ex = ZBlNode_Z_data[ZBlNode_Z->size[0] * iBd + 1];
            } else {
              ex = ZBlNode_Z_data[ZBlNode_Z->size[0] * iBd];
            }
          } else {
            g_st.site = &es_emlrtRSI;
            if (!muDoubleScalarIsNaN(
                    ZBlNode_Z_data[ZBlNode_Z->size[0] * iBd])) {
              b_idx = 1;
            } else {
              b_idx = 0;
              h_st.site = &fs_emlrtRSI;
              if (ZBlNode_Z->size[0] > 2147483646) {
                i_st.site = &hr_emlrtRSI;
                check_forloop_overflow_error(&i_st);
              }
              idx = 2;
              exitg1 = false;
              while ((!exitg1) && (idx <= b_last)) {
                if (!muDoubleScalarIsNaN(
                        ZBlNode_Z_data[(idx + ZBlNode_Z->size[0] * iBd) - 1])) {
                  b_idx = idx;
                  exitg1 = true;
                } else {
                  idx++;
                }
              }
            }
            if (b_idx == 0) {
              ex = ZBlNode_Z_data[ZBlNode_Z->size[0] * iBd];
            } else {
              g_st.site = &ds_emlrtRSI;
              ex = ZBlNode_Z_data[(b_idx + ZBlNode_Z->size[0] * iBd) - 1];
              idx = b_idx + 1;
              h_st.site = &gs_emlrtRSI;
              if ((b_idx + 1 <= ZBlNode_Z->size[0]) &&
                  (ZBlNode_Z->size[0] > 2147483646)) {
                i_st.site = &hr_emlrtRSI;
                check_forloop_overflow_error(&i_st);
              }
              for (k = idx; k <= b_last; k++) {
                d = ZBlNode_Z_data[(k + ZBlNode_Z->size[0] * iBd) - 1];
                if (ex > d) {
                  ex = d;
                }
              }
            }
          }
          if (ex < GridZ[0]) {
            st.site = &wr_emlrtRSI;
            b_st.site = &hs_emlrtRSI;
            c_st.site = &is_emlrtRSI;
            d_st.site = &js_emlrtRSI;
            e_st.site = &ks_emlrtRSI;
            f_st.site = &ls_emlrtRSI;
            if (ZBlNode_Z->size[0] <= 2) {
              if (ZBlNode_Z->size[0] == 1) {
                ex = ZBlNode_Z_data[ZBlNode_Z->size[0] * iBd];
              } else if ((ZBlNode_Z_data[ZBlNode_Z->size[0] * iBd] >
                          ZBlNode_Z_data[ZBlNode_Z->size[0] * iBd + 1]) ||
                         (muDoubleScalarIsNaN(
                              ZBlNode_Z_data[ZBlNode_Z->size[0] * iBd]) &&
                          (!muDoubleScalarIsNaN(
                              ZBlNode_Z_data[ZBlNode_Z->size[0] * iBd + 1])))) {
                ex = ZBlNode_Z_data[ZBlNode_Z->size[0] * iBd + 1];
              } else {
                ex = ZBlNode_Z_data[ZBlNode_Z->size[0] * iBd];
              }
            } else {
              g_st.site = &es_emlrtRSI;
              if (!muDoubleScalarIsNaN(
                      ZBlNode_Z_data[ZBlNode_Z->size[0] * iBd])) {
                b_idx = 1;
              } else {
                b_idx = 0;
                h_st.site = &fs_emlrtRSI;
                if (ZBlNode_Z->size[0] > 2147483646) {
                  i_st.site = &hr_emlrtRSI;
                  check_forloop_overflow_error(&i_st);
                }
                idx = 2;
                exitg1 = false;
                while ((!exitg1) && (idx <= b_last)) {
                  if (!muDoubleScalarIsNaN(
                          ZBlNode_Z_data[(idx + ZBlNode_Z->size[0] * iBd) -
                                         1])) {
                    b_idx = idx;
                    exitg1 = true;
                  } else {
                    idx++;
                  }
                }
              }
              if (b_idx == 0) {
                ex = ZBlNode_Z_data[ZBlNode_Z->size[0] * iBd];
              } else {
                g_st.site = &ds_emlrtRSI;
                ex = ZBlNode_Z_data[(b_idx + ZBlNode_Z->size[0] * iBd) - 1];
                idx = b_idx + 1;
                h_st.site = &gs_emlrtRSI;
                if ((b_idx + 1 <= ZBlNode_Z->size[0]) &&
                    (ZBlNode_Z->size[0] > 2147483646)) {
                  i_st.site = &hr_emlrtRSI;
                  check_forloop_overflow_error(&i_st);
                }
                for (k = idx; k <= b_last; k++) {
                  d = ZBlNode_Z_data[(k + ZBlNode_Z->size[0] * iBd) - 1];
                  if (ex > d) {
                    ex = d;
                  }
                }
              }
            }
            st.site = &wr_emlrtRSI;
            d_error(&st, ex);
          }
        }
      }
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
}

/* End of code generation (CheckInterpPoints.c) */
