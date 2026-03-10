/*
 * _coder_NominalSystemMatrix_api.c
 *
 * Code generation for function '_coder_NominalSystemMatrix_api'
 *
 */

/* Include files */
#include "_coder_NominalSystemMatrix_api.h"
#include "NominalSystemMatrix.h"
#include "NominalSystemMatrix_data.h"
#include "NominalSystemMatrix_mexutil.h"
#include "NominalSystemMatrix_types.h"
#include "rt_nonfinite.h"

/* Function Declarations */
static void ab_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                const emlrtMsgIdentifier *parentId,
                                real_T y[19]);

static void ac_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId,
                                real_T ret[560]);

static real_T b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                 const emlrtMsgIdentifier *parentId);

static const mxArray *b_emlrt_marshallOut(real_T u[1156]);

static void bb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *nullptr,
                                const char_T *identifier, struct4_T *y);

static void bc_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId,
                                real_T ret[572]);

static real_T (*c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *nullptr,
                                   const char_T *identifier))[68];

static const mxArray *c_emlrt_marshallOut(real_T u[34]);

static void cb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                const emlrtMsgIdentifier *parentId,
                                struct4_T *y);

static void cc_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId,
                                real_T ret[540]);

static real_T (*d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[68];

static void d_emlrt_marshallOut(real_T u[61], const mxArray *y);

static struct5_T db_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                     const emlrtMsgIdentifier *parentId);

static void dc_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId,
                                real_T ret[544]);

static real_T (*e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *nullptr,
                                   const char_T *identifier))[61];

static void eb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                const emlrtMsgIdentifier *parentId,
                                real_T y[100]);

static void ec_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId,
                                real_T ret[508]);

static real_T emlrt_marshallIn(const emlrtStack *sp, const mxArray *nullptr,
                               const char_T *identifier);

static real_T (*f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[61];

static void fb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                const emlrtMsgIdentifier *parentId,
                                real_T y[36]);

static void fc_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId,
                                real_T ret[11]);

static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *nullptr,
                               const char_T *identifier, struct0_T *y);

static void gb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                const emlrtMsgIdentifier *parentId,
                                real_T y[15]);

static void gc_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId,
                                real_T ret[11]);

static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               struct0_T *y);

static void hb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                const emlrtMsgIdentifier *parentId,
                                real_T y[15]);

static void hc_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId,
                                real_T ret[19]);

static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId, real_T y[3]);

static void ib_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                const emlrtMsgIdentifier *parentId,
                                real_T y[9]);

static void ic_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId,
                                real_T ret[19]);

static void j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *nullptr,
                               const char_T *identifier, struct1_T *y);

static void jb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *nullptr,
                                const char_T *identifier, struct6_T *y);

static void jc_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId,
                                real_T ret[100]);

static void k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               struct1_T *y);

static void kb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                const emlrtMsgIdentifier *parentId,
                                struct6_T *y);

static void kc_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId,
                                real_T ret[36]);

static void l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               real_T y[12]);

static void lb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                const emlrtMsgIdentifier *parentId);

static void lc_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId,
                                real_T ret[15]);

static void m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               real_T y[568]);

static boolean_T mb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                     const emlrtMsgIdentifier *parentId);

static void mc_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId,
                                real_T ret[15]);

static void n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               real_T y[560]);

static void nb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                const emlrtMsgIdentifier *parentId,
                                real_T y[31]);

static void nc_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId, real_T ret[9]);

static void o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               real_T y[572]);

static void ob_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                const emlrtMsgIdentifier *parentId,
                                real_T y[2883]);

static void oc_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId);

static void p_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               real_T y[540]);

static real_T (*pb_emlrt_marshallIn(const emlrtStack *sp,
                                    const mxArray *nullptr,
                                    const char_T *identifier))[6];

static boolean_T pc_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                     const emlrtMsgIdentifier *msgId);

static void q_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               real_T y[544]);

static real_T (*qb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                    const emlrtMsgIdentifier *parentId))[6];

static void qc_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId,
                                real_T ret[31]);

static void r_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               real_T y[508]);

static real_T (*rb_emlrt_marshallIn(const emlrtStack *sp,
                                    const mxArray *nullptr,
                                    const char_T *identifier))[6];

static void rc_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId,
                                real_T ret[2883]);

static void s_emlrt_marshallIn(const emlrtStack *sp, const mxArray *nullptr,
                               const char_T *identifier, struct2_T *y);

static real_T (*sb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                    const emlrtMsgIdentifier *parentId))[6];

static real_T (*sc_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                    const emlrtMsgIdentifier *msgId))[6];

static void t_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               struct2_T *y);

static real_T tb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                  const emlrtMsgIdentifier *msgId);

static real_T (*tc_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                    const emlrtMsgIdentifier *msgId))[6];

static void u_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               real_T y[11]);

static real_T (*ub_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                    const emlrtMsgIdentifier *msgId))[68];

static void v_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               real_T y[11]);

static real_T (*vb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                    const emlrtMsgIdentifier *msgId))[61];

static void w_emlrt_marshallIn(const emlrtStack *sp, const mxArray *nullptr,
                               const char_T *identifier, struct3_T *y);

static void wb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId, real_T ret[3]);

static void x_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               struct3_T *y);

static void xb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId,
                                real_T ret[12]);

static void y_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               real_T y[19]);

static void yb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId,
                                real_T ret[568]);

/* Function Definitions */
static void ab_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                const emlrtMsgIdentifier *parentId,
                                real_T y[19])
{
  ic_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void ac_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId,
                                real_T ret[560])
{
  static const int32_T dims[2] = {140, 4};
  real_T(*r)[560];
  int32_T i;
  emlrtCheckBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "double", false, 2U,
                          (const void *)&dims[0]);
  r = (real_T(*)[560])emlrtMxGetData(src);
  for (i = 0; i < 560; i++) {
    ret[i] = (*r)[i];
  }
  emlrtDestroyArray(&src);
}

static real_T b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                 const emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = tb_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static const mxArray *b_emlrt_marshallOut(real_T u[1156])
{
  static const int32_T b_iv[2] = {0, 0};
  static const int32_T iv1[2] = {34, 34};
  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateNumericArray(2, (const void *)&b_iv[0], mxDOUBLE_CLASS,
                              mxREAL);
  emlrtMxSetData((mxArray *)m, &u[0]);
  emlrtSetDimensions((mxArray *)m, &iv1[0], 2);
  emlrtAssign(&y, m);
  return y;
}

static void bb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *nullptr,
                                const char_T *identifier, struct4_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  cb_emlrt_marshallIn(sp, emlrtAlias(nullptr), &thisId, y);
  emlrtDestroyArray(&nullptr);
}

static void bc_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId,
                                real_T ret[572])
{
  static const int32_T dims[2] = {143, 4};
  real_T(*r)[572];
  int32_T i;
  emlrtCheckBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "double", false, 2U,
                          (const void *)&dims[0]);
  r = (real_T(*)[572])emlrtMxGetData(src);
  for (i = 0; i < 572; i++) {
    ret[i] = (*r)[i];
  }
  emlrtDestroyArray(&src);
}

static real_T (*c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *nullptr,
                                   const char_T *identifier))[68]
{
  emlrtMsgIdentifier thisId;
  real_T(*y)[68];
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = d_emlrt_marshallIn(sp, emlrtAlias(nullptr), &thisId);
  emlrtDestroyArray(&nullptr);
  return y;
}

static const mxArray *c_emlrt_marshallOut(real_T u[34])
{
  static const int32_T i = 0;
  static const int32_T i1 = 34;
  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateNumericArray(1, (const void *)&i, mxDOUBLE_CLASS, mxREAL);
  emlrtMxSetData((mxArray *)m, &u[0]);
  emlrtSetDimensions((mxArray *)m, &i1, 1);
  emlrtAssign(&y, m);
  return y;
}

static void cb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                const emlrtMsgIdentifier *parentId,
                                struct4_T *y)
{
  static const int32_T dims = 0;
  static const char_T *fieldNames[62] = {"MainCol",
                                         "nStrips",
                                         "StripWidth",
                                         "StripDepths",
                                         "StripDia",
                                         "AM",
                                         "nBeams",
                                         "BeamLen",
                                         "Angles",
                                         "nt",
                                         "BeamSec",
                                         "dm_struct",
                                         "dm_add_V",
                                         "dm_add_H",
                                         "O1_V",
                                         "O2_V",
                                         "O1_H",
                                         "O2_H",
                                         "s11_V",
                                         "s12_V",
                                         "s22_V",
                                         "S11_V",
                                         "S12_V",
                                         "S22_V",
                                         "s11_H",
                                         "s12_H",
                                         "s22_H",
                                         "S11_H",
                                         "S12_H",
                                         "S22_H",
                                         "dO1_V",
                                         "dO2_V",
                                         "dO1_H",
                                         "dO2_H",
                                         "M11_V",
                                         "M22_V",
                                         "M11_H",
                                         "M22_H",
                                         "K11_V",
                                         "K22_V",
                                         "K11_H",
                                         "K22_H",
                                         "zeta1_V",
                                         "zeta2_V",
                                         "zeta1_H",
                                         "zeta2_H",
                                         "dm_V",
                                         "dm_H",
                                         "Target_Struct_Mass",
                                         "M_Tip_Struct",
                                         "AM_Tip_V",
                                         "AM_Tip_H",
                                         "Total_Appendage_Mass",
                                         "TipMass_V",
                                         "TipMass_H",
                                         "TipInertia",
                                         "M11_V_tot",
                                         "M22_V_tot",
                                         "M11_H_tot",
                                         "M22_H_tot",
                                         "Mooring",
                                         "WaveLoads"};
  emlrtMsgIdentifier thisId;
  thisId.fParent = parentId;
  thisId.bParentIsCell = false;
  emlrtCheckStructR2012b((emlrtConstCTX)sp, parentId, u, 62,
                         (const char_T **)&fieldNames[0], 0U,
                         (const void *)&dims);
  thisId.fIdentifier = "MainCol";
  y->MainCol = db_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 0, "MainCol")),
      &thisId);
  thisId.fIdentifier = "nStrips";
  y->nStrips = b_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 1, "nStrips")),
      &thisId);
  thisId.fIdentifier = "StripWidth";
  y->StripWidth = b_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 2, "StripWidth")),
      &thisId);
  thisId.fIdentifier = "StripDepths";
  eb_emlrt_marshallIn(sp,
                      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 3,
                                                     "StripDepths")),
                      &thisId, y->StripDepths);
  thisId.fIdentifier = "StripDia";
  eb_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 4, "StripDia")),
      &thisId, y->StripDia);
  thisId.fIdentifier = "AM";
  fb_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 5, "AM")),
      &thisId, y->AM);
  thisId.fIdentifier = "nBeams";
  y->nBeams = b_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 6, "nBeams")),
      &thisId);
  thisId.fIdentifier = "BeamLen";
  y->BeamLen = b_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 7, "BeamLen")),
      &thisId);
  thisId.fIdentifier = "Angles";
  i_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 8, "Angles")),
      &thisId, y->Angles);
  thisId.fIdentifier = "nt";
  y->nt = b_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 9, "nt")),
      &thisId);
  thisId.fIdentifier = "BeamSec";
  gb_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 10, "BeamSec")),
      &thisId, y->BeamSec);
  thisId.fIdentifier = "dm_struct";
  hb_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 11, "dm_struct")),
      &thisId, y->dm_struct);
  thisId.fIdentifier = "dm_add_V";
  hb_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 12, "dm_add_V")),
      &thisId, y->dm_add_V);
  thisId.fIdentifier = "dm_add_H";
  hb_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 13, "dm_add_H")),
      &thisId, y->dm_add_H);
  thisId.fIdentifier = "O1_V";
  hb_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 14, "O1_V")),
      &thisId, y->O1_V);
  thisId.fIdentifier = "O2_V";
  hb_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 15, "O2_V")),
      &thisId, y->O2_V);
  thisId.fIdentifier = "O1_H";
  hb_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 16, "O1_H")),
      &thisId, y->O1_H);
  thisId.fIdentifier = "O2_H";
  hb_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 17, "O2_H")),
      &thisId, y->O2_H);
  thisId.fIdentifier = "s11_V";
  hb_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 18, "s11_V")),
      &thisId, y->s11_V);
  thisId.fIdentifier = "s12_V";
  hb_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 19, "s12_V")),
      &thisId, y->s12_V);
  thisId.fIdentifier = "s22_V";
  hb_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 20, "s22_V")),
      &thisId, y->s22_V);
  thisId.fIdentifier = "S11_V";
  y->S11_V = b_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 21, "S11_V")),
      &thisId);
  thisId.fIdentifier = "S12_V";
  y->S12_V = b_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 22, "S12_V")),
      &thisId);
  thisId.fIdentifier = "S22_V";
  y->S22_V = b_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 23, "S22_V")),
      &thisId);
  thisId.fIdentifier = "s11_H";
  hb_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 24, "s11_H")),
      &thisId, y->s11_H);
  thisId.fIdentifier = "s12_H";
  hb_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 25, "s12_H")),
      &thisId, y->s12_H);
  thisId.fIdentifier = "s22_H";
  hb_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 26, "s22_H")),
      &thisId, y->s22_H);
  thisId.fIdentifier = "S11_H";
  y->S11_H = b_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 27, "S11_H")),
      &thisId);
  thisId.fIdentifier = "S12_H";
  y->S12_H = b_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 28, "S12_H")),
      &thisId);
  thisId.fIdentifier = "S22_H";
  y->S22_H = b_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 29, "S22_H")),
      &thisId);
  thisId.fIdentifier = "dO1_V";
  y->dO1_V = b_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 30, "dO1_V")),
      &thisId);
  thisId.fIdentifier = "dO2_V";
  y->dO2_V = b_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 31, "dO2_V")),
      &thisId);
  thisId.fIdentifier = "dO1_H";
  y->dO1_H = b_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 32, "dO1_H")),
      &thisId);
  thisId.fIdentifier = "dO2_H";
  y->dO2_H = b_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 33, "dO2_H")),
      &thisId);
  thisId.fIdentifier = "M11_V";
  y->M11_V = b_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 34, "M11_V")),
      &thisId);
  thisId.fIdentifier = "M22_V";
  y->M22_V = b_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 35, "M22_V")),
      &thisId);
  thisId.fIdentifier = "M11_H";
  y->M11_H = b_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 36, "M11_H")),
      &thisId);
  thisId.fIdentifier = "M22_H";
  y->M22_H = b_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 37, "M22_H")),
      &thisId);
  thisId.fIdentifier = "K11_V";
  y->K11_V = b_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 38, "K11_V")),
      &thisId);
  thisId.fIdentifier = "K22_V";
  y->K22_V = b_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 39, "K22_V")),
      &thisId);
  thisId.fIdentifier = "K11_H";
  y->K11_H = b_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 40, "K11_H")),
      &thisId);
  thisId.fIdentifier = "K22_H";
  y->K22_H = b_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 41, "K22_H")),
      &thisId);
  thisId.fIdentifier = "zeta1_V";
  y->zeta1_V = b_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 42, "zeta1_V")),
      &thisId);
  thisId.fIdentifier = "zeta2_V";
  y->zeta2_V = b_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 43, "zeta2_V")),
      &thisId);
  thisId.fIdentifier = "zeta1_H";
  y->zeta1_H = b_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 44, "zeta1_H")),
      &thisId);
  thisId.fIdentifier = "zeta2_H";
  y->zeta2_H = b_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 45, "zeta2_H")),
      &thisId);
  thisId.fIdentifier = "dm_V";
  hb_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 46, "dm_V")),
      &thisId, y->dm_V);
  thisId.fIdentifier = "dm_H";
  hb_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 47, "dm_H")),
      &thisId, y->dm_H);
  thisId.fIdentifier = "Target_Struct_Mass";
  y->Target_Struct_Mass = b_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 48,
                                     "Target_Struct_Mass")),
      &thisId);
  thisId.fIdentifier = "M_Tip_Struct";
  y->M_Tip_Struct =
      b_emlrt_marshallIn(sp,
                         emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0,
                                                        49, "M_Tip_Struct")),
                         &thisId);
  thisId.fIdentifier = "AM_Tip_V";
  y->AM_Tip_V = b_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 50, "AM_Tip_V")),
      &thisId);
  thisId.fIdentifier = "AM_Tip_H";
  y->AM_Tip_H = b_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 51, "AM_Tip_H")),
      &thisId);
  thisId.fIdentifier = "Total_Appendage_Mass";
  y->Total_Appendage_Mass = b_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 52,
                                     "Total_Appendage_Mass")),
      &thisId);
  thisId.fIdentifier = "TipMass_V";
  y->TipMass_V = b_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 53, "TipMass_V")),
      &thisId);
  thisId.fIdentifier = "TipMass_H";
  y->TipMass_H = b_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 54, "TipMass_H")),
      &thisId);
  thisId.fIdentifier = "TipInertia";
  ib_emlrt_marshallIn(sp,
                      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0,
                                                     55, "TipInertia")),
                      &thisId, y->TipInertia);
  thisId.fIdentifier = "M11_V_tot";
  y->M11_V_tot = b_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 56, "M11_V_tot")),
      &thisId);
  thisId.fIdentifier = "M22_V_tot";
  y->M22_V_tot = b_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 57, "M22_V_tot")),
      &thisId);
  thisId.fIdentifier = "M11_H_tot";
  y->M11_H_tot = b_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 58, "M11_H_tot")),
      &thisId);
  thisId.fIdentifier = "M22_H_tot";
  y->M22_H_tot = b_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 59, "M22_H_tot")),
      &thisId);
  thisId.fIdentifier = "Mooring";
  y->Mooring = b_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 60, "Mooring")),
      &thisId);
  thisId.fIdentifier = "WaveLoads";
  y->WaveLoads = b_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 61, "WaveLoads")),
      &thisId);
  emlrtDestroyArray(&u);
}

static void cc_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId,
                                real_T ret[540])
{
  static const int32_T dims[2] = {135, 4};
  real_T(*r)[540];
  int32_T i;
  emlrtCheckBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "double", false, 2U,
                          (const void *)&dims[0]);
  r = (real_T(*)[540])emlrtMxGetData(src);
  for (i = 0; i < 540; i++) {
    ret[i] = (*r)[i];
  }
  emlrtDestroyArray(&src);
}

static real_T (*d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[68]
{
  real_T(*y)[68];
  y = ub_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void d_emlrt_marshallOut(real_T u[61], const mxArray *y)
{
  static const int32_T b_iv[2] = {1, 61};
  emlrtMxSetData((mxArray *)y, &u[0]);
  emlrtSetDimensions((mxArray *)y, &b_iv[0], 2);
}

static struct5_T db_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                     const emlrtMsgIdentifier *parentId)
{
  static const int32_T dims = 0;
  static const char_T *fieldNames[2] = {"Dia", "Draft"};
  emlrtMsgIdentifier thisId;
  struct5_T y;
  thisId.fParent = parentId;
  thisId.bParentIsCell = false;
  emlrtCheckStructR2012b((emlrtConstCTX)sp, parentId, u, 2,
                         (const char_T **)&fieldNames[0], 0U,
                         (const void *)&dims);
  thisId.fIdentifier = "Dia";
  y.Dia = b_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 0, "Dia")),
      &thisId);
  thisId.fIdentifier = "Draft";
  y.Draft = b_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 1, "Draft")),
      &thisId);
  emlrtDestroyArray(&u);
  return y;
}

static void dc_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId,
                                real_T ret[544])
{
  static const int32_T dims[2] = {136, 4};
  real_T(*r)[544];
  int32_T i;
  emlrtCheckBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "double", false, 2U,
                          (const void *)&dims[0]);
  r = (real_T(*)[544])emlrtMxGetData(src);
  for (i = 0; i < 544; i++) {
    ret[i] = (*r)[i];
  }
  emlrtDestroyArray(&src);
}

static real_T (*e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *nullptr,
                                   const char_T *identifier))[61]
{
  emlrtMsgIdentifier thisId;
  real_T(*y)[61];
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = f_emlrt_marshallIn(sp, emlrtAlias(nullptr), &thisId);
  emlrtDestroyArray(&nullptr);
  return y;
}

static void eb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                const emlrtMsgIdentifier *parentId,
                                real_T y[100])
{
  jc_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void ec_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId,
                                real_T ret[508])
{
  static const int32_T dims[2] = {127, 4};
  real_T(*r)[508];
  int32_T i;
  emlrtCheckBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "double", false, 2U,
                          (const void *)&dims[0]);
  r = (real_T(*)[508])emlrtMxGetData(src);
  for (i = 0; i < 508; i++) {
    ret[i] = (*r)[i];
  }
  emlrtDestroyArray(&src);
}

static real_T emlrt_marshallIn(const emlrtStack *sp, const mxArray *nullptr,
                               const char_T *identifier)
{
  emlrtMsgIdentifier thisId;
  real_T y;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = b_emlrt_marshallIn(sp, emlrtAlias(nullptr), &thisId);
  emlrtDestroyArray(&nullptr);
  return y;
}

static real_T (*f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[61]
{
  real_T(*y)[61];
  y = vb_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void fb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                const emlrtMsgIdentifier *parentId,
                                real_T y[36])
{
  kc_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void fc_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId, real_T ret[11])
{
  static const int32_T dims = 11;
  real_T(*r)[11];
  int32_T i;
  emlrtCheckBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "double", false, 1U,
                          (const void *)&dims);
  r = (real_T(*)[11])emlrtMxGetData(src);
  for (i = 0; i < 11; i++) {
    ret[i] = (*r)[i];
  }
  emlrtDestroyArray(&src);
}

static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *nullptr,
                               const char_T *identifier, struct0_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  h_emlrt_marshallIn(sp, emlrtAlias(nullptr), &thisId, y);
  emlrtDestroyArray(&nullptr);
}

static void gb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                const emlrtMsgIdentifier *parentId,
                                real_T y[15])
{
  lc_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void gc_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId, real_T ret[11])
{
  static const int32_T dims[3] = {1, 1, 11};
  real_T(*r)[11];
  int32_T i;
  emlrtCheckBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "double", false, 3U,
                          (const void *)&dims[0]);
  r = (real_T(*)[11])emlrtMxGetData(src);
  for (i = 0; i < 11; i++) {
    ret[i] = (*r)[i];
  }
  emlrtDestroyArray(&src);
}

static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId, struct0_T *y)
{
  static const int32_T dims = 0;
  static const char_T *fieldNames[49] = {
      "OoPDefl",   "IPDefl",   "BlPitch",   "Azimuth",   "RotSpeed",
      "NacYaw",    "TTDspFA",  "TTDspSS",   "PtfmSurge", "PtfmSway",
      "PtfmHeave", "PtfmRoll", "PtfmPitch", "PtfmYaw",   "NumBl",
      "TipRad",    "HubRad",   "PreCone",   "HubCM",     "OverHang",
      "ShftGagL",  "ShftTilt", "NacCMxn",   "NacCMyn",   "NacCMzn",
      "NcIMUxn",   "NcIMUyn",  "NcIMUzn",   "Twr2Shft",  "TwrHt",
      "TowerBsHt", "PtfmCMxt", "PtfmCMyt",  "PtfmCMzt",  "PtfmRefzt",
      "HubMass",   "HubIner",  "GenIner",   "NacMass",   "NacYIner",
      "YawBrMass", "PtfmMass", "PtfmRIner", "PtfmPIner", "PtfmYIner",
      "GBoxEff",   "GBRatio",  "DTTorSpr",  "DTTorDmp"};
  emlrtMsgIdentifier thisId;
  thisId.fParent = parentId;
  thisId.bParentIsCell = false;
  emlrtCheckStructR2012b((emlrtConstCTX)sp, parentId, u, 49,
                         (const char_T **)&fieldNames[0], 0U,
                         (const void *)&dims);
  thisId.fIdentifier = "OoPDefl";
  y->OoPDefl = b_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 0, "OoPDefl")),
      &thisId);
  thisId.fIdentifier = "IPDefl";
  y->IPDefl = b_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 1, "IPDefl")),
      &thisId);
  thisId.fIdentifier = "BlPitch";
  i_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 2, "BlPitch")),
      &thisId, y->BlPitch);
  thisId.fIdentifier = "Azimuth";
  y->Azimuth = b_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 3, "Azimuth")),
      &thisId);
  thisId.fIdentifier = "RotSpeed";
  y->RotSpeed = b_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 4, "RotSpeed")),
      &thisId);
  thisId.fIdentifier = "NacYaw";
  y->NacYaw = b_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 5, "NacYaw")),
      &thisId);
  thisId.fIdentifier = "TTDspFA";
  y->TTDspFA = b_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 6, "TTDspFA")),
      &thisId);
  thisId.fIdentifier = "TTDspSS";
  y->TTDspSS = b_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 7, "TTDspSS")),
      &thisId);
  thisId.fIdentifier = "PtfmSurge";
  y->PtfmSurge = b_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 8, "PtfmSurge")),
      &thisId);
  thisId.fIdentifier = "PtfmSway";
  y->PtfmSway = b_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 9, "PtfmSway")),
      &thisId);
  thisId.fIdentifier = "PtfmHeave";
  y->PtfmHeave = b_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 10, "PtfmHeave")),
      &thisId);
  thisId.fIdentifier = "PtfmRoll";
  y->PtfmRoll = b_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 11, "PtfmRoll")),
      &thisId);
  thisId.fIdentifier = "PtfmPitch";
  y->PtfmPitch = b_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 12, "PtfmPitch")),
      &thisId);
  thisId.fIdentifier = "PtfmYaw";
  y->PtfmYaw = b_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 13, "PtfmYaw")),
      &thisId);
  thisId.fIdentifier = "NumBl";
  y->NumBl = b_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 14, "NumBl")),
      &thisId);
  thisId.fIdentifier = "TipRad";
  y->TipRad = b_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 15, "TipRad")),
      &thisId);
  thisId.fIdentifier = "HubRad";
  y->HubRad = b_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 16, "HubRad")),
      &thisId);
  thisId.fIdentifier = "PreCone";
  i_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 17, "PreCone")),
      &thisId, y->PreCone);
  thisId.fIdentifier = "HubCM";
  y->HubCM = b_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 18, "HubCM")),
      &thisId);
  thisId.fIdentifier = "OverHang";
  y->OverHang = b_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 19, "OverHang")),
      &thisId);
  thisId.fIdentifier = "ShftGagL";
  y->ShftGagL = b_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 20, "ShftGagL")),
      &thisId);
  thisId.fIdentifier = "ShftTilt";
  y->ShftTilt = b_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 21, "ShftTilt")),
      &thisId);
  thisId.fIdentifier = "NacCMxn";
  y->NacCMxn = b_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 22, "NacCMxn")),
      &thisId);
  thisId.fIdentifier = "NacCMyn";
  y->NacCMyn = b_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 23, "NacCMyn")),
      &thisId);
  thisId.fIdentifier = "NacCMzn";
  y->NacCMzn = b_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 24, "NacCMzn")),
      &thisId);
  thisId.fIdentifier = "NcIMUxn";
  y->NcIMUxn = b_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 25, "NcIMUxn")),
      &thisId);
  thisId.fIdentifier = "NcIMUyn";
  y->NcIMUyn = b_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 26, "NcIMUyn")),
      &thisId);
  thisId.fIdentifier = "NcIMUzn";
  y->NcIMUzn = b_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 27, "NcIMUzn")),
      &thisId);
  thisId.fIdentifier = "Twr2Shft";
  y->Twr2Shft = b_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 28, "Twr2Shft")),
      &thisId);
  thisId.fIdentifier = "TwrHt";
  y->TwrHt = b_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 29, "TwrHt")),
      &thisId);
  thisId.fIdentifier = "TowerBsHt";
  y->TowerBsHt = b_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 30, "TowerBsHt")),
      &thisId);
  thisId.fIdentifier = "PtfmCMxt";
  y->PtfmCMxt = b_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 31, "PtfmCMxt")),
      &thisId);
  thisId.fIdentifier = "PtfmCMyt";
  y->PtfmCMyt = b_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 32, "PtfmCMyt")),
      &thisId);
  thisId.fIdentifier = "PtfmCMzt";
  y->PtfmCMzt = b_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 33, "PtfmCMzt")),
      &thisId);
  thisId.fIdentifier = "PtfmRefzt";
  y->PtfmRefzt = b_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 34, "PtfmRefzt")),
      &thisId);
  thisId.fIdentifier = "HubMass";
  y->HubMass = b_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 35, "HubMass")),
      &thisId);
  thisId.fIdentifier = "HubIner";
  y->HubIner = b_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 36, "HubIner")),
      &thisId);
  thisId.fIdentifier = "GenIner";
  y->GenIner = b_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 37, "GenIner")),
      &thisId);
  thisId.fIdentifier = "NacMass";
  y->NacMass = b_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 38, "NacMass")),
      &thisId);
  thisId.fIdentifier = "NacYIner";
  y->NacYIner = b_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 39, "NacYIner")),
      &thisId);
  thisId.fIdentifier = "YawBrMass";
  y->YawBrMass = b_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 40, "YawBrMass")),
      &thisId);
  thisId.fIdentifier = "PtfmMass";
  y->PtfmMass = b_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 41, "PtfmMass")),
      &thisId);
  thisId.fIdentifier = "PtfmRIner";
  y->PtfmRIner = b_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 42, "PtfmRIner")),
      &thisId);
  thisId.fIdentifier = "PtfmPIner";
  y->PtfmPIner = b_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 43, "PtfmPIner")),
      &thisId);
  thisId.fIdentifier = "PtfmYIner";
  y->PtfmYIner = b_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 44, "PtfmYIner")),
      &thisId);
  thisId.fIdentifier = "GBoxEff";
  y->GBoxEff = b_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 45, "GBoxEff")),
      &thisId);
  thisId.fIdentifier = "GBRatio";
  y->GBRatio = b_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 46, "GBRatio")),
      &thisId);
  thisId.fIdentifier = "DTTorSpr";
  y->DTTorSpr = b_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 47, "DTTorSpr")),
      &thisId);
  thisId.fIdentifier = "DTTorDmp";
  y->DTTorDmp = b_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 48, "DTTorDmp")),
      &thisId);
  emlrtDestroyArray(&u);
}

static void hb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                const emlrtMsgIdentifier *parentId,
                                real_T y[15])
{
  mc_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void hc_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId, real_T ret[19])
{
  static const int32_T dims = 19;
  real_T(*r)[19];
  int32_T i;
  emlrtCheckBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "double", false, 1U,
                          (const void *)&dims);
  r = (real_T(*)[19])emlrtMxGetData(src);
  for (i = 0; i < 19; i++) {
    ret[i] = (*r)[i];
  }
  emlrtDestroyArray(&src);
}

static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId, real_T y[3])
{
  wb_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void ib_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                const emlrtMsgIdentifier *parentId, real_T y[9])
{
  nc_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void ic_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId, real_T ret[19])
{
  real_T(*r)[19];
  int32_T i;
  emlrtCheckBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "double", false, 3U,
                          (const void *)&iv[0]);
  r = (real_T(*)[19])emlrtMxGetData(src);
  for (i = 0; i < 19; i++) {
    ret[i] = (*r)[i];
  }
  emlrtDestroyArray(&src);
}

static void j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *nullptr,
                               const char_T *identifier, struct1_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  k_emlrt_marshallIn(sp, emlrtAlias(nullptr), &thisId, y);
  emlrtDestroyArray(&nullptr);
}

static void jb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *nullptr,
                                const char_T *identifier, struct6_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  kb_emlrt_marshallIn(sp, emlrtAlias(nullptr), &thisId, y);
  emlrtDestroyArray(&nullptr);
}

static void jc_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId,
                                real_T ret[100])
{
  static const int32_T dims[2] = {1, 100};
  real_T(*r)[100];
  int32_T i;
  emlrtCheckBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "double", false, 2U,
                          (const void *)&dims[0]);
  r = (real_T(*)[100])emlrtMxGetData(src);
  for (i = 0; i < 100; i++) {
    ret[i] = (*r)[i];
  }
  emlrtDestroyArray(&src);
}

static void k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId, struct1_T *y)
{
  static const int32_T dims = 0;
  static const char_T *fieldNames[8] = {"Cylinder1", "Cylinder2", "DU21_A17",
                                        "DU25_A17",  "DU30_A17",  "DU35_A17",
                                        "DU40_A17",  "NACA64_A17"};
  emlrtMsgIdentifier thisId;
  thisId.fParent = parentId;
  thisId.bParentIsCell = false;
  emlrtCheckStructR2012b((emlrtConstCTX)sp, parentId, u, 8,
                         (const char_T **)&fieldNames[0], 0U,
                         (const void *)&dims);
  thisId.fIdentifier = "Cylinder1";
  l_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 0, "Cylinder1")),
      &thisId, y->Cylinder1);
  thisId.fIdentifier = "Cylinder2";
  l_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 1, "Cylinder2")),
      &thisId, y->Cylinder2);
  thisId.fIdentifier = "DU21_A17";
  m_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 2, "DU21_A17")),
      &thisId, y->DU21_A17);
  thisId.fIdentifier = "DU25_A17";
  n_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 3, "DU25_A17")),
      &thisId, y->DU25_A17);
  thisId.fIdentifier = "DU30_A17";
  o_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 4, "DU30_A17")),
      &thisId, y->DU30_A17);
  thisId.fIdentifier = "DU35_A17";
  p_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 5, "DU35_A17")),
      &thisId, y->DU35_A17);
  thisId.fIdentifier = "DU40_A17";
  q_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 6, "DU40_A17")),
      &thisId, y->DU40_A17);
  thisId.fIdentifier = "NACA64_A17";
  r_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 7, "NACA64_A17")),
      &thisId, y->NACA64_A17);
  emlrtDestroyArray(&u);
}

static void kb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                const emlrtMsgIdentifier *parentId,
                                struct6_T *y)
{
  static const int32_T dims = 0;
  static const char_T *fieldNames[6] = {
      "PittandPeters", "PitchControl", "AeroElastic", "y", "z", "velocity"};
  emlrtMsgIdentifier thisId;
  thisId.fParent = parentId;
  thisId.bParentIsCell = false;
  emlrtCheckStructR2012b((emlrtConstCTX)sp, parentId, u, 6,
                         (const char_T **)&fieldNames[0], 0U,
                         (const void *)&dims);
  thisId.fIdentifier = "PittandPeters";
  lb_emlrt_marshallIn(sp,
                      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 0,
                                                     "PittandPeters")),
                      &thisId);
  thisId.fIdentifier = "PitchControl";
  y->PitchControl =
      mb_emlrt_marshallIn(sp,
                          emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u,
                                                         0, 1, "PitchControl")),
                          &thisId);
  thisId.fIdentifier = "AeroElastic";
  y->AeroElastic =
      mb_emlrt_marshallIn(sp,
                          emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u,
                                                         0, 2, "AeroElastic")),
                          &thisId);
  thisId.fIdentifier = "y";
  nb_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 3, "y")),
      &thisId, y->y);
  thisId.fIdentifier = "z";
  nb_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 4, "z")),
      &thisId, y->z);
  thisId.fIdentifier = "velocity";
  ob_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 5, "velocity")),
      &thisId, y->velocity);
  emlrtDestroyArray(&u);
}

static void kc_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId, real_T ret[36])
{
  static const int32_T dims[2] = {6, 6};
  real_T(*r)[36];
  int32_T i;
  emlrtCheckBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "double", false, 2U,
                          (const void *)&dims[0]);
  r = (real_T(*)[36])emlrtMxGetData(src);
  for (i = 0; i < 36; i++) {
    ret[i] = (*r)[i];
  }
  emlrtDestroyArray(&src);
}

static void l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId, real_T y[12])
{
  xb_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void lb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                const emlrtMsgIdentifier *parentId)
{
  oc_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
}

static void lc_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId, real_T ret[15])
{
  static const int32_T dims = 15;
  real_T(*r)[15];
  int32_T i;
  emlrtCheckBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "double", false, 1U,
                          (const void *)&dims);
  r = (real_T(*)[15])emlrtMxGetData(src);
  for (i = 0; i < 15; i++) {
    ret[i] = (*r)[i];
  }
  emlrtDestroyArray(&src);
}

static void m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               real_T y[568])
{
  yb_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static boolean_T mb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                     const emlrtMsgIdentifier *parentId)
{
  boolean_T y;
  y = pc_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void mc_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId, real_T ret[15])
{
  static const int32_T dims[3] = {1, 1, 15};
  real_T(*r)[15];
  int32_T i;
  emlrtCheckBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "double", false, 3U,
                          (const void *)&dims[0]);
  r = (real_T(*)[15])emlrtMxGetData(src);
  for (i = 0; i < 15; i++) {
    ret[i] = (*r)[i];
  }
  emlrtDestroyArray(&src);
}

static void n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               real_T y[560])
{
  ac_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void nb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                const emlrtMsgIdentifier *parentId,
                                real_T y[31])
{
  qc_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void nc_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId, real_T ret[9])
{
  static const int32_T dims[2] = {3, 3};
  real_T(*r)[9];
  int32_T i;
  emlrtCheckBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "double", false, 2U,
                          (const void *)&dims[0]);
  r = (real_T(*)[9])emlrtMxGetData(src);
  for (i = 0; i < 9; i++) {
    ret[i] = (*r)[i];
  }
  emlrtDestroyArray(&src);
}

static void o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               real_T y[572])
{
  bc_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void ob_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                const emlrtMsgIdentifier *parentId,
                                real_T y[2883])
{
  rc_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void oc_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId)
{
  static const int32_T dims[2] = {0, 0};
  emlrtCheckBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "logical", false, 2U,
                          (const void *)&dims[0]);
  emlrtMxGetLogicals(src);
  emlrtDestroyArray(&src);
}

static void p_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               real_T y[540])
{
  cc_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static real_T (*pb_emlrt_marshallIn(const emlrtStack *sp,
                                    const mxArray *nullptr,
                                    const char_T *identifier))[6]
{
  emlrtMsgIdentifier thisId;
  real_T(*y)[6];
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = qb_emlrt_marshallIn(sp, emlrtAlias(nullptr), &thisId);
  emlrtDestroyArray(&nullptr);
  return y;
}

static boolean_T pc_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                     const emlrtMsgIdentifier *msgId)
{
  static const int32_T dims = 0;
  boolean_T ret;
  emlrtCheckBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "logical", false, 0U,
                          (const void *)&dims);
  ret = *emlrtMxGetLogicals(src);
  emlrtDestroyArray(&src);
  return ret;
}

static void q_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               real_T y[544])
{
  dc_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static real_T (*qb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                    const emlrtMsgIdentifier *parentId))[6]
{
  real_T(*y)[6];
  y = sc_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void qc_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId, real_T ret[31])
{
  static const int32_T dims[2] = {1, 31};
  real_T(*r)[31];
  int32_T i;
  emlrtCheckBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "double", false, 2U,
                          (const void *)&dims[0]);
  r = (real_T(*)[31])emlrtMxGetData(src);
  for (i = 0; i < 31; i++) {
    ret[i] = (*r)[i];
  }
  emlrtDestroyArray(&src);
}

static void r_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               real_T y[508])
{
  ec_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static real_T (*rb_emlrt_marshallIn(const emlrtStack *sp,
                                    const mxArray *nullptr,
                                    const char_T *identifier))[6]
{
  emlrtMsgIdentifier thisId;
  real_T(*y)[6];
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = sb_emlrt_marshallIn(sp, emlrtAlias(nullptr), &thisId);
  emlrtDestroyArray(&nullptr);
  return y;
}

static void rc_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId,
                                real_T ret[2883])
{
  static const int32_T dims[3] = {3, 31, 31};
  real_T(*r)[2883];
  int32_T i;
  emlrtCheckBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "double", false, 3U,
                          (const void *)&dims[0]);
  r = (real_T(*)[2883])emlrtMxGetData(src);
  for (i = 0; i < 2883; i++) {
    ret[i] = (*r)[i];
  }
  emlrtDestroyArray(&src);
}

static void s_emlrt_marshallIn(const emlrtStack *sp, const mxArray *nullptr,
                               const char_T *identifier, struct2_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  t_emlrt_marshallIn(sp, emlrtAlias(nullptr), &thisId, y);
  emlrtDestroyArray(&nullptr);
}

static real_T (*sb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                    const emlrtMsgIdentifier *parentId))[6]
{
  real_T(*y)[6];
  y = tc_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static real_T (*sc_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                    const emlrtMsgIdentifier *msgId))[6]
{
  static const int32_T dims[2] = {1, 6};
  real_T(*ret)[6];
  int32_T b_iv[2];
  boolean_T bv[2] = {false, false};
  emlrtCheckVsBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "double", false, 2U,
                            (const void *)&dims[0], &bv[0], &b_iv[0]);
  ret = (real_T(*)[6])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static void t_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId, struct2_T *y)
{
  static const int32_T dims = 0;
  static const char_T *fieldNames[39] = {
      "nt",        "TwrSec",    "O1_TFA",   "O2_TFA",  "O1_TSS",  "O2_TSS",
      "s11_TFA",   "s12_TFA",   "s22_TFA",  "S11_TFA", "S12_TFA", "S22_TFA",
      "s11_TSS",   "s12_TSS",   "s22_TSS",  "S11_TSS", "S12_TSS", "S22_TSS",
      "dO1_TFA",   "dO1_TSS",   "dO2_TFA",  "dO2_TSS", "mT",      "k11_TFA",
      "k12_TFA",   "k11_TSS",   "k12_TSS",  "k21_TFA", "k22_TFA", "k21_TSS",
      "k22_TSS",   "f1_TFA",    "f2_TFA",   "f1_TSS",  "f2_TSS",  "zeta1_TFA",
      "zeta2_TFA", "zeta1_TSS", "zeta2_TSS"};
  emlrtMsgIdentifier thisId;
  thisId.fParent = parentId;
  thisId.bParentIsCell = false;
  emlrtCheckStructR2012b((emlrtConstCTX)sp, parentId, u, 39,
                         (const char_T **)&fieldNames[0], 0U,
                         (const void *)&dims);
  thisId.fIdentifier = "nt";
  y->nt = b_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 0, "nt")),
      &thisId);
  thisId.fIdentifier = "TwrSec";
  u_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 1, "TwrSec")),
      &thisId, y->TwrSec);
  thisId.fIdentifier = "O1_TFA";
  v_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 2, "O1_TFA")),
      &thisId, y->O1_TFA);
  thisId.fIdentifier = "O2_TFA";
  v_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 3, "O2_TFA")),
      &thisId, y->O2_TFA);
  thisId.fIdentifier = "O1_TSS";
  v_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 4, "O1_TSS")),
      &thisId, y->O1_TSS);
  thisId.fIdentifier = "O2_TSS";
  v_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 5, "O2_TSS")),
      &thisId, y->O2_TSS);
  thisId.fIdentifier = "s11_TFA";
  v_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 6, "s11_TFA")),
      &thisId, y->s11_TFA);
  thisId.fIdentifier = "s12_TFA";
  v_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 7, "s12_TFA")),
      &thisId, y->s12_TFA);
  thisId.fIdentifier = "s22_TFA";
  v_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 8, "s22_TFA")),
      &thisId, y->s22_TFA);
  thisId.fIdentifier = "S11_TFA";
  y->S11_TFA = b_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 9, "S11_TFA")),
      &thisId);
  thisId.fIdentifier = "S12_TFA";
  y->S12_TFA = b_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 10, "S12_TFA")),
      &thisId);
  thisId.fIdentifier = "S22_TFA";
  y->S22_TFA = b_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 11, "S22_TFA")),
      &thisId);
  thisId.fIdentifier = "s11_TSS";
  v_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 12, "s11_TSS")),
      &thisId, y->s11_TSS);
  thisId.fIdentifier = "s12_TSS";
  v_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 13, "s12_TSS")),
      &thisId, y->s12_TSS);
  thisId.fIdentifier = "s22_TSS";
  v_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 14, "s22_TSS")),
      &thisId, y->s22_TSS);
  thisId.fIdentifier = "S11_TSS";
  y->S11_TSS = b_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 15, "S11_TSS")),
      &thisId);
  thisId.fIdentifier = "S12_TSS";
  y->S12_TSS = b_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 16, "S12_TSS")),
      &thisId);
  thisId.fIdentifier = "S22_TSS";
  y->S22_TSS = b_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 17, "S22_TSS")),
      &thisId);
  thisId.fIdentifier = "dO1_TFA";
  y->dO1_TFA = b_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 18, "dO1_TFA")),
      &thisId);
  thisId.fIdentifier = "dO1_TSS";
  y->dO1_TSS = b_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 19, "dO1_TSS")),
      &thisId);
  thisId.fIdentifier = "dO2_TFA";
  y->dO2_TFA = b_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 20, "dO2_TFA")),
      &thisId);
  thisId.fIdentifier = "dO2_TSS";
  y->dO2_TSS = b_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 21, "dO2_TSS")),
      &thisId);
  thisId.fIdentifier = "mT";
  v_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 22, "mT")),
      &thisId, y->mT);
  thisId.fIdentifier = "k11_TFA";
  y->k11_TFA = b_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 23, "k11_TFA")),
      &thisId);
  thisId.fIdentifier = "k12_TFA";
  y->k12_TFA = b_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 24, "k12_TFA")),
      &thisId);
  thisId.fIdentifier = "k11_TSS";
  y->k11_TSS = b_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 25, "k11_TSS")),
      &thisId);
  thisId.fIdentifier = "k12_TSS";
  y->k12_TSS = b_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 26, "k12_TSS")),
      &thisId);
  thisId.fIdentifier = "k21_TFA";
  y->k21_TFA = b_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 27, "k21_TFA")),
      &thisId);
  thisId.fIdentifier = "k22_TFA";
  y->k22_TFA = b_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 28, "k22_TFA")),
      &thisId);
  thisId.fIdentifier = "k21_TSS";
  y->k21_TSS = b_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 29, "k21_TSS")),
      &thisId);
  thisId.fIdentifier = "k22_TSS";
  y->k22_TSS = b_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 30, "k22_TSS")),
      &thisId);
  thisId.fIdentifier = "f1_TFA";
  y->f1_TFA = b_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 31, "f1_TFA")),
      &thisId);
  thisId.fIdentifier = "f2_TFA";
  y->f2_TFA = b_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 32, "f2_TFA")),
      &thisId);
  thisId.fIdentifier = "f1_TSS";
  y->f1_TSS = b_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 33, "f1_TSS")),
      &thisId);
  thisId.fIdentifier = "f2_TSS";
  y->f2_TSS = b_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 34, "f2_TSS")),
      &thisId);
  thisId.fIdentifier = "zeta1_TFA";
  y->zeta1_TFA = b_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 35, "zeta1_TFA")),
      &thisId);
  thisId.fIdentifier = "zeta2_TFA";
  y->zeta2_TFA = b_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 36, "zeta2_TFA")),
      &thisId);
  thisId.fIdentifier = "zeta1_TSS";
  y->zeta1_TSS = b_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 37, "zeta1_TSS")),
      &thisId);
  thisId.fIdentifier = "zeta2_TSS";
  y->zeta2_TSS = b_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 38, "zeta2_TSS")),
      &thisId);
  emlrtDestroyArray(&u);
}

static real_T tb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                  const emlrtMsgIdentifier *msgId)
{
  static const int32_T dims = 0;
  real_T ret;
  emlrtCheckBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "double", false, 0U,
                          (const void *)&dims);
  ret = *(real_T *)emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static real_T (*tc_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                    const emlrtMsgIdentifier *msgId))[6]
{
  static const int32_T dims = 6;
  real_T(*ret)[6];
  int32_T i;
  boolean_T b = false;
  emlrtCheckVsBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "double", false, 1U,
                            (const void *)&dims, &b, &i);
  ret = (real_T(*)[6])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static void u_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId, real_T y[11])
{
  fc_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static real_T (*ub_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                    const emlrtMsgIdentifier *msgId))[68]
{
  static const int32_T dims = 68;
  real_T(*ret)[68];
  int32_T i;
  boolean_T b = false;
  emlrtCheckVsBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "double", false, 1U,
                            (const void *)&dims, &b, &i);
  ret = (real_T(*)[68])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static void v_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId, real_T y[11])
{
  gc_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static real_T (*vb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                    const emlrtMsgIdentifier *msgId))[61]
{
  static const int32_T dims[2] = {1, 61};
  real_T(*ret)[61];
  int32_T b_iv[2];
  boolean_T bv[2] = {false, false};
  emlrtCheckVsBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "double", false, 2U,
                            (const void *)&dims[0], &bv[0], &b_iv[0]);
  ret = (real_T(*)[61])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static void w_emlrt_marshallIn(const emlrtStack *sp, const mxArray *nullptr,
                               const char_T *identifier, struct3_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  x_emlrt_marshallIn(sp, emlrtAlias(nullptr), &thisId, y);
  emlrtDestroyArray(&nullptr);
}

static void wb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId, real_T ret[3])
{
  static const int32_T dims[2] = {1, 3};
  real_T(*r)[3];
  emlrtCheckBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "double", false, 2U,
                          (const void *)&dims[0]);
  r = (real_T(*)[3])emlrtMxGetData(src);
  ret[0] = (*r)[0];
  ret[1] = (*r)[1];
  ret[2] = (*r)[2];
  emlrtDestroyArray(&src);
}

static void x_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId, struct3_T *y)
{
  static const int32_T dims = 0;
  static const char_T *fieldNames[37] = {
      "BldSec",     "Twist",     "nb",     "O1_B1",  "O2_B1",     "O3_B1",
      "W1_B1",      "W2_B1",     "W3_B1",  "s11_B1", "s22_B1",    "s33_B1",
      "s12_B1",     "s13_B1",    "s23_B1", "mB1",    "k11_B1F",   "k12_B1F",
      "k22_B1F",    "k11_B1E",   "f1_B1F", "f2_B1F", "f1_B1E",    "zeta1_B1F",
      "zeta2_B1F",  "zeta1_B1E", "Cord",   "FoilNo", "PitchAxis", "AeroCentJ1",
      "AeroCentJ2", "dO1_B1",    "dO2_B1", "dO3_B1", "dW1_B1",    "dW2_B1",
      "dW3_B1"};
  emlrtMsgIdentifier thisId;
  thisId.fParent = parentId;
  thisId.bParentIsCell = false;
  emlrtCheckStructR2012b((emlrtConstCTX)sp, parentId, u, 37,
                         (const char_T **)&fieldNames[0], 0U,
                         (const void *)&dims);
  thisId.fIdentifier = "BldSec";
  y_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 0, "BldSec")),
      &thisId, y->BldSec);
  thisId.fIdentifier = "Twist";
  y_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 1, "Twist")),
      &thisId, y->Twist);
  thisId.fIdentifier = "nb";
  y->nb = b_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 2, "nb")),
      &thisId);
  thisId.fIdentifier = "O1_B1";
  ab_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 3, "O1_B1")),
      &thisId, y->O1_B1);
  thisId.fIdentifier = "O2_B1";
  ab_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 4, "O2_B1")),
      &thisId, y->O2_B1);
  thisId.fIdentifier = "O3_B1";
  ab_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 5, "O3_B1")),
      &thisId, y->O3_B1);
  thisId.fIdentifier = "W1_B1";
  ab_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 6, "W1_B1")),
      &thisId, y->W1_B1);
  thisId.fIdentifier = "W2_B1";
  ab_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 7, "W2_B1")),
      &thisId, y->W2_B1);
  thisId.fIdentifier = "W3_B1";
  ab_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 8, "W3_B1")),
      &thisId, y->W3_B1);
  thisId.fIdentifier = "s11_B1";
  ab_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 9, "s11_B1")),
      &thisId, y->s11_B1);
  thisId.fIdentifier = "s22_B1";
  ab_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 10, "s22_B1")),
      &thisId, y->s22_B1);
  thisId.fIdentifier = "s33_B1";
  ab_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 11, "s33_B1")),
      &thisId, y->s33_B1);
  thisId.fIdentifier = "s12_B1";
  ab_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 12, "s12_B1")),
      &thisId, y->s12_B1);
  thisId.fIdentifier = "s13_B1";
  ab_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 13, "s13_B1")),
      &thisId, y->s13_B1);
  thisId.fIdentifier = "s23_B1";
  ab_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 14, "s23_B1")),
      &thisId, y->s23_B1);
  thisId.fIdentifier = "mB1";
  ab_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 15, "mB1")),
      &thisId, y->mB1);
  thisId.fIdentifier = "k11_B1F";
  y->k11_B1F = b_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 16, "k11_B1F")),
      &thisId);
  thisId.fIdentifier = "k12_B1F";
  y->k12_B1F = b_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 17, "k12_B1F")),
      &thisId);
  thisId.fIdentifier = "k22_B1F";
  y->k22_B1F = b_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 18, "k22_B1F")),
      &thisId);
  thisId.fIdentifier = "k11_B1E";
  y->k11_B1E = b_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 19, "k11_B1E")),
      &thisId);
  thisId.fIdentifier = "f1_B1F";
  y->f1_B1F = b_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 20, "f1_B1F")),
      &thisId);
  thisId.fIdentifier = "f2_B1F";
  y->f2_B1F = b_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 21, "f2_B1F")),
      &thisId);
  thisId.fIdentifier = "f1_B1E";
  y->f1_B1E = b_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 22, "f1_B1E")),
      &thisId);
  thisId.fIdentifier = "zeta1_B1F";
  y->zeta1_B1F = b_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 23, "zeta1_B1F")),
      &thisId);
  thisId.fIdentifier = "zeta2_B1F";
  y->zeta2_B1F = b_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 24, "zeta2_B1F")),
      &thisId);
  thisId.fIdentifier = "zeta1_B1E";
  y->zeta1_B1E = b_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 25, "zeta1_B1E")),
      &thisId);
  thisId.fIdentifier = "Cord";
  y_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 26, "Cord")),
      &thisId, y->Cord);
  thisId.fIdentifier = "FoilNo";
  y_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 27, "FoilNo")),
      &thisId, y->FoilNo);
  thisId.fIdentifier = "PitchAxis";
  y_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 28, "PitchAxis")),
      &thisId, y->PitchAxis);
  thisId.fIdentifier = "AeroCentJ1";
  y_emlrt_marshallIn(sp,
                     emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 29,
                                                    "AeroCentJ1")),
                     &thisId, y->AeroCentJ1);
  thisId.fIdentifier = "AeroCentJ2";
  y_emlrt_marshallIn(sp,
                     emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 30,
                                                    "AeroCentJ2")),
                     &thisId, y->AeroCentJ2);
  thisId.fIdentifier = "dO1_B1";
  ab_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 31, "dO1_B1")),
      &thisId, y->dO1_B1);
  thisId.fIdentifier = "dO2_B1";
  ab_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 32, "dO2_B1")),
      &thisId, y->dO2_B1);
  thisId.fIdentifier = "dO3_B1";
  ab_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 33, "dO3_B1")),
      &thisId, y->dO3_B1);
  thisId.fIdentifier = "dW1_B1";
  ab_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 34, "dW1_B1")),
      &thisId, y->dW1_B1);
  thisId.fIdentifier = "dW2_B1";
  ab_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 35, "dW2_B1")),
      &thisId, y->dW2_B1);
  thisId.fIdentifier = "dW3_B1";
  ab_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 36, "dW3_B1")),
      &thisId, y->dW3_B1);
  emlrtDestroyArray(&u);
}

static void xb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId, real_T ret[12])
{
  static const int32_T dims[2] = {3, 4};
  real_T(*r)[12];
  int32_T i;
  emlrtCheckBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "double", false, 2U,
                          (const void *)&dims[0]);
  r = (real_T(*)[12])emlrtMxGetData(src);
  for (i = 0; i < 12; i++) {
    ret[i] = (*r)[i];
  }
  emlrtDestroyArray(&src);
}

static void y_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId, real_T y[19])
{
  hc_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void yb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId,
                                real_T ret[568])
{
  static const int32_T dims[2] = {142, 4};
  real_T(*r)[568];
  int32_T i;
  emlrtCheckBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "double", false, 2U,
                          (const void *)&dims[0]);
  r = (real_T(*)[568])emlrtMxGetData(src);
  for (i = 0; i < 568; i++) {
    ret[i] = (*r)[i];
  }
  emlrtDestroyArray(&src);
}

void MEXGlobalSyncInFunction(const emlrtStack *sp)
{
  const mxArray *tmp;
  /* Marshall in global variables */
  tmp = emlrtGetGlobalVariable("FLUIDDENSITY");
  if (tmp != NULL) {
    FLUIDDENSITY = emlrt_marshallIn(sp, tmp, "FLUIDDENSITY");
    FLUIDDENSITY_dirty = 0U;
  }
}

void MEXGlobalSyncOutFunction(boolean_T skipDirtyCheck)
{
  /* Marshall out global variables */
  if (skipDirtyCheck || (FLUIDDENSITY_dirty != 0U)) {
    emlrtPutGlobalVariable("FLUIDDENSITY", emlrt_marshallOut(FLUIDDENSITY));
  }
}

void NominalSystemMatrix_api(NominalSystemMatrixStackData *SD,
                             const mxArray *const prhs[10], int32_T nlhs,
                             const mxArray *plhs[3])
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  const mxArray *prhs_copy_idx_1;
  struct0_T ElastoDyn;
  struct2_T Twr;
  struct3_T Bld;
  struct4_T Platform;
  struct6_T WindNom;
  real_T(*IM_nom)[1156];
  real_T(*q_Nom)[68];
  real_T(*Controls)[61];
  real_T(*f_nom)[34];
  real_T(*f_Morison)[6];
  real_T(*mooring_load)[6];
  st.tls = emlrtRootTLSGlobal;
  IM_nom = (real_T(*)[1156])mxMalloc(sizeof(real_T[1156]));
  f_nom = (real_T(*)[34])mxMalloc(sizeof(real_T[34]));
  prhs_copy_idx_1 = emlrtProtectR2012b(prhs[1], 1, true, -1);
  /* Marshall function inputs */
  q_Nom = c_emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "q_Nom");
  Controls = e_emlrt_marshallIn(&st, emlrtAlias(prhs_copy_idx_1), "Controls");
  g_emlrt_marshallIn(&st, emlrtAliasP(prhs[2]), "ElastoDyn", &ElastoDyn);
  j_emlrt_marshallIn(&st, emlrtAliasP(prhs[3]), "Airfoils", &SD->f0.Airfoils);
  s_emlrt_marshallIn(&st, emlrtAliasP(prhs[4]), "Twr", &Twr);
  w_emlrt_marshallIn(&st, emlrtAliasP(prhs[5]), "Bld", &Bld);
  bb_emlrt_marshallIn(&st, emlrtAliasP(prhs[6]), "Platform", &Platform);
  jb_emlrt_marshallIn(&st, emlrtAliasP(prhs[7]), "WindNom", &WindNom);
  mooring_load = pb_emlrt_marshallIn(&st, emlrtAlias(prhs[8]), "mooring_load");
  f_Morison = rb_emlrt_marshallIn(&st, emlrtAlias(prhs[9]), "f_Morison");
  /* Marshall in global variables */
  MEXGlobalSyncInFunction(&st);
  /* Invoke the target function */
  NominalSystemMatrix(&st, *q_Nom, *Controls, &ElastoDyn, &SD->f0.Airfoils,
                      &Twr, &Bld, &Platform, &WindNom, *mooring_load,
                      *f_Morison, *IM_nom, *f_nom);
  /* Marshall out global variables */
  MEXGlobalSyncOutFunction(true);
  /* Marshall function outputs */
  plhs[0] = b_emlrt_marshallOut(*IM_nom);
  if (nlhs > 1) {
    plhs[1] = c_emlrt_marshallOut(*f_nom);
  }
  if (nlhs > 2) {
    d_emlrt_marshallOut(*Controls, prhs_copy_idx_1);
    plhs[2] = prhs_copy_idx_1;
  }
}

void emlrt_synchGlobalsFromML(const emlrtStack *sp)
{
  MEXGlobalSyncInFunction(sp);
  FLUIDDENSITY_dirty = 0U;
}

void emlrt_synchGlobalsToML(const emlrtStack *sp)
{
  (void)sp;
  MEXGlobalSyncOutFunction(false);
}

/* End of code generation (_coder_NominalSystemMatrix_api.c) */
