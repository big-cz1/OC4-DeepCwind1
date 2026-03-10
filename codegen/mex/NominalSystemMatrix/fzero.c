/*
 * fzero.c
 *
 * Code generation for function 'fzero'
 *
 */

/* Include files */
#include "fzero.h"
#include "BEMTMex.h"
#include "LiftDragCoeffInterp.h"
#include "NominalSystemMatrix_data.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

/* Function Definitions */
real_T fzero(const emlrtStack *sp, real_T FunFcn_workspace_theta,
             real_T FunFcn_workspace_Vx, real_T FunFcn_workspace_Vy,
             real_T FunFcn_workspace_FoilNo,
             const real_T c_FunFcn_workspace_Airfoils_Cyl[12],
             const real_T d_FunFcn_workspace_Airfoils_Cyl[12],
             const real_T c_FunFcn_workspace_Airfoils_DU2[568],
             const real_T d_FunFcn_workspace_Airfoils_DU2[560],
             const real_T c_FunFcn_workspace_Airfoils_DU3[572],
             const real_T d_FunFcn_workspace_Airfoils_DU3[540],
             const real_T c_FunFcn_workspace_Airfoils_DU4[544],
             const real_T c_FunFcn_workspace_Airfoils_NAC[508],
             real_T FunFcn_workspace_TipRad, real_T FunFcn_workspace_HubRad,
             real_T FunFcn_workspace_BlSpn, real_T FunFcn_workspace_Solid,
             real_T FunFcn_workspace_Azimuth)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  real_T F;
  real_T a;
  real_T b;
  real_T b_a;
  real_T c;
  real_T d;
  real_T e;
  real_T fa;
  real_T fb;
  real_T k;
  real_T r;
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
  a = 1.5707963267948966;
  b = 3.141591653589793;
  st.site = &tu_emlrtRSI;
  b_st.site = &ru_emlrtRSI;
  fa = UpdateInflowAngle_anonFcn1(
      &b_st, FunFcn_workspace_theta, FunFcn_workspace_Vx, FunFcn_workspace_Vy,
      FunFcn_workspace_FoilNo, c_FunFcn_workspace_Airfoils_Cyl,
      d_FunFcn_workspace_Airfoils_Cyl, c_FunFcn_workspace_Airfoils_DU2,
      d_FunFcn_workspace_Airfoils_DU2, c_FunFcn_workspace_Airfoils_DU3,
      d_FunFcn_workspace_Airfoils_DU3, c_FunFcn_workspace_Airfoils_DU4,
      c_FunFcn_workspace_Airfoils_NAC, FunFcn_workspace_TipRad,
      FunFcn_workspace_HubRad, FunFcn_workspace_BlSpn, FunFcn_workspace_Solid,
      FunFcn_workspace_Azimuth);
  st.site = &uu_emlrtRSI;
  b_st.site = &ru_emlrtRSI;
  c_st.site = &su_emlrtRSI;
  /*  Residue % */
  d_st.site = &ct_emlrtRSI;
  /*  Force coefficients % */
  e_st.site = &ht_emlrtRSI;
  e = LiftDragCoeffInterp(
      &e_st, 3.141591653589793 - FunFcn_workspace_theta,
      FunFcn_workspace_FoilNo, c_FunFcn_workspace_Airfoils_Cyl,
      d_FunFcn_workspace_Airfoils_Cyl, c_FunFcn_workspace_Airfoils_DU2,
      d_FunFcn_workspace_Airfoils_DU2, c_FunFcn_workspace_Airfoils_DU3,
      d_FunFcn_workspace_Airfoils_DU3, c_FunFcn_workspace_Airfoils_DU4,
      c_FunFcn_workspace_Airfoils_NAC, &c);
  d_st.site = &dt_emlrtRSI;
  /*  Hub/Tip Losses % */
  F = 0.63661977236758138 *
      muDoubleScalarAcos(muDoubleScalarMin(
          1.0, muDoubleScalarExp(
                   -(1.5 * (FunFcn_workspace_TipRad - FunFcn_workspace_BlSpn) /
                     (FunFcn_workspace_BlSpn * 1.000000000262076E-6))))) *
      (0.63661977236758138 *
       muDoubleScalarAcos(muDoubleScalarMin(
           1.0, muDoubleScalarExp(
                    -(1.5 * (FunFcn_workspace_BlSpn - FunFcn_workspace_HubRad) /
                      (FunFcn_workspace_HubRad * 1.000000000262076E-6))))));
  /*  Non dimensional parameters % */
  d_st.site = &et_emlrtRSI;
  d = 4.0 * F;
  k = FunFcn_workspace_Solid *
      (e * -0.9999999999995 + c * 1.000000000262076E-6) /
      (d * 1.000000000524152E-12);
  /*      aa = 1; */
  /*  Different equation depending on solution region % */
  if (k <= 0.66666666666666663) {
    /*  momentum region */
    if (k == -1.0) {
      k = -1.1;
    }
    b_a = muDoubleScalarMax(k / (k + 1.0), -10.0);
    /*  Patch */
  } else {
    /*  emperical region */
    b_a = 2.0 * F;
    r = b_a * k;
    fb = r - F * (1.3333333333333333 - F);
    k = r - (2.7777777777777777 - b_a);
    if (muDoubleScalarAbs(k) < 1.0E-6) {
      d_st.site = &ft_emlrtRSI;
      if (fb < 0.0) {
        emlrtErrorWithMessageIdR2018a(
            &d_st, &m_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
            "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
      }
      b_a = 1.0 - 1.0 / (2.0 * muDoubleScalarSqrt(fb));
    } else {
      d_st.site = &gt_emlrtRSI;
      if (fb < 0.0) {
        emlrtErrorWithMessageIdR2018a(
            &d_st, &m_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
            "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
      }
      b_a = ((r - (1.1111111111111112 - F)) - muDoubleScalarSqrt(fb)) / k;
    }
  }
  /* Pitt and Peters yaw correction model % */
  b_a *= 0.73631077818510771 *
             muDoubleScalarTan((0.6 * b_a + 1.0) * 0.0 / 2.0) *
             FunFcn_workspace_BlSpn / FunFcn_workspace_TipRad *
             muDoubleScalarSin(FunFcn_workspace_Azimuth) +
         1.0;
  /*  Tangential induction factor % */
  k = FunFcn_workspace_Solid *
      (e * 1.000000000262076E-6 - c * -0.9999999999995) /
      (d * 1.000000000262076E-6 * -0.9999999999995);
  if (k == 1.0) {
    b_a = 0.0;
    k = 0.0;
  } else {
    k /= 1.0 - k;
    if (muDoubleScalarAbs(k) > 10.0) {
      k = 10.0 * muDoubleScalarSign(k);
      /*  Patch */
    }
  }
  /*     %% Residue % */
  if (b_a == 1.0) {
    fb = -FunFcn_workspace_Vx / FunFcn_workspace_Vy * -0.9999999999995 /
         (k + 1.0);
  } else {
    fb = 1.000000000262076E-6 / (1.0 - b_a) - FunFcn_workspace_Vx /
                                                  FunFcn_workspace_Vy *
                                                  -0.9999999999995 / (k + 1.0);
  }
  if (muDoubleScalarIsInf(fa) || muDoubleScalarIsNaN(fa) ||
      (muDoubleScalarIsInf(fb) || muDoubleScalarIsNaN(fb))) {
    emlrtErrorWithMessageIdR2018a(
        sp, &p_emlrtRTEI,
        "MATLAB:optimfun:fzero:ValuesAtEndPtsComplexOrNotFinite",
        "MATLAB:optimfun:fzero:ValuesAtEndPtsComplexOrNotFinite", 0);
  }
  if (fa == 0.0) {
    b = 1.5707963267948966;
  } else if (!(fb == 0.0)) {
    boolean_T exitg1;
    if ((fa > 0.0) == (fb > 0.0)) {
      emlrtErrorWithMessageIdR2018a(
          sp, &q_emlrtRTEI, "MATLAB:optimfun:fzero:ValuesAtEndPtsSameSign",
          "MATLAB:optimfun:fzero:ValuesAtEndPtsSameSign", 0);
    }
    F = fb;
    c = 3.141591653589793;
    e = 0.0;
    d = 0.0;
    exitg1 = false;
    while ((!exitg1) && ((fb != 0.0) && (a != b))) {
      real_T m;
      real_T toler;
      if ((fb > 0.0) == (F > 0.0)) {
        c = a;
        F = fa;
        d = b - a;
        e = d;
      }
      if (muDoubleScalarAbs(F) < muDoubleScalarAbs(fb)) {
        a = b;
        b = c;
        c = a;
        fa = fb;
        fb = F;
        F = fa;
      }
      m = 0.5 * (c - b);
      toler =
          4.4408920985006262E-16 * muDoubleScalarMax(muDoubleScalarAbs(b), 1.0);
      if ((muDoubleScalarAbs(m) <= toler) || (fb == 0.0)) {
        exitg1 = true;
      } else {
        if ((muDoubleScalarAbs(e) < toler) ||
            (muDoubleScalarAbs(fa) <= muDoubleScalarAbs(fb))) {
          d = m;
          e = m;
        } else {
          real_T s;
          s = fb / fa;
          if (a == c) {
            k = 2.0 * m * s;
            b_a = 1.0 - s;
          } else {
            b_a = fa / F;
            r = fb / F;
            k = s * (2.0 * m * b_a * (b_a - r) - (b - a) * (r - 1.0));
            b_a = (b_a - 1.0) * (r - 1.0) * (s - 1.0);
          }
          if (k > 0.0) {
            b_a = -b_a;
          } else {
            k = -k;
          }
          if ((2.0 * k < 3.0 * m * b_a - muDoubleScalarAbs(toler * b_a)) &&
              (k < muDoubleScalarAbs(0.5 * e * b_a))) {
            e = d;
            d = k / b_a;
          } else {
            d = m;
            e = m;
          }
        }
        a = b;
        fa = fb;
        if (muDoubleScalarAbs(d) > toler) {
          b += d;
        } else if (b > c) {
          b -= toler;
        } else {
          b += toler;
        }
        st.site = &vu_emlrtRSI;
        b_st.site = &ru_emlrtRSI;
        c_st.site = &su_emlrtRSI;
        fb = CallStateResidual(
            &c_st, b, FunFcn_workspace_theta, FunFcn_workspace_Vx,
            FunFcn_workspace_Vy, FunFcn_workspace_FoilNo,
            c_FunFcn_workspace_Airfoils_Cyl, d_FunFcn_workspace_Airfoils_Cyl,
            c_FunFcn_workspace_Airfoils_DU2, d_FunFcn_workspace_Airfoils_DU2,
            c_FunFcn_workspace_Airfoils_DU3, d_FunFcn_workspace_Airfoils_DU3,
            c_FunFcn_workspace_Airfoils_DU4, c_FunFcn_workspace_Airfoils_NAC,
            FunFcn_workspace_TipRad, FunFcn_workspace_HubRad,
            FunFcn_workspace_BlSpn, FunFcn_workspace_Solid,
            FunFcn_workspace_Azimuth);
      }
    }
  }
  return b;
}

/* End of code generation (fzero.c) */
