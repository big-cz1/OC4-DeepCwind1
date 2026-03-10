/*
 * NominalSystemMatrix_data.c
 *
 * Code generation for function 'NominalSystemMatrix_data'
 *
 */

/* Include files */
#include "NominalSystemMatrix_data.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
emlrtCTX emlrtRootTLSGlobal = NULL;

const volatile char_T *emlrtBreakCheckR2012bFlagVar = NULL;

real_T FLUIDDENSITY;

uint32_T FLUIDDENSITY_dirty;

emlrtContext emlrtContextGlobal = {
    true,                                                 /* bFirstTime */
    false,                                                /* bInitialized */
    131675U,                                              /* fVersionInfo */
    NULL,                                                 /* fErrorFunction */
    "NominalSystemMatrix",                                /* fFunctionName */
    NULL,                                                 /* fRTCallStack */
    false,                                                /* bDebugMode */
    {2045744189U, 2170104910U, 2743257031U, 4284093946U}, /* fSigWrd */
    NULL                                                  /* fSigMem */
};

emlrtRSInfo qo_emlrtRSI = {
    44,       /* lineNo */
    "mpower", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\R2025b\\toolbox\\eml\\lib\\matlab\\matfun\\mpower.m" /* pathName
                                                                          */
};

emlrtRSInfo dr_emlrtRSI = {
    52,                  /* lineNo */
    "reshapeSizeChecks", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\R2025b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\reshapeSizeChecks.m" /* pathName */
};

emlrtRSInfo hr_emlrtRSI = {
    20,                               /* lineNo */
    "eml_int_forloop_overflow_check", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\R2025b\\toolbox\\eml\\lib\\matlab\\eml\\eml_int_forloop_"
    "overflow_check.m" /* pathName */
};

emlrtRSInfo ct_emlrtRSI = {
    65,                  /* lineNo */
    "CallStateResidual", /* fcnName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\BEMTMex.m" /* pathName
                                                                            */
};

emlrtRSInfo dt_emlrtRSI = {
    66,                  /* lineNo */
    "CallStateResidual", /* fcnName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\BEMTMex.m" /* pathName
                                                                            */
};

emlrtRSInfo et_emlrtRSI = {
    75,                  /* lineNo */
    "CallStateResidual", /* fcnName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\BEMTMex.m" /* pathName
                                                                            */
};

emlrtRSInfo ft_emlrtRSI = {
    92,                  /* lineNo */
    "CallStateResidual", /* fcnName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\BEMTMex.m" /* pathName
                                                                            */
};

emlrtRSInfo gt_emlrtRSI = {
    94,                  /* lineNo */
    "CallStateResidual", /* fcnName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\BEMTMex.m" /* pathName
                                                                            */
};

emlrtRSInfo ht_emlrtRSI = {
    46,                 /* lineNo */
    "ForceCoefficents", /* fcnName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\BEMTMex.m" /* pathName
                                                                            */
};

emlrtRSInfo ru_emlrtRSI = {
    63,                               /* lineNo */
    "function_handle/parenReference", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\R2025b\\toolbox\\eml\\eml\\+coder\\+internal\\function_"
    "handle.m" /* pathName */
};

emlrtRSInfo su_emlrtRSI = {
    144, /* lineNo */
    "@(phi)CallStateResidual(phi,theta,Vx,Vy,FoilNo,Airfoils,TipRad,HubRad,"
    "BlSpn,Solid,Azimuth,chi0)", /* fcnName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\BEMTMex.m" /* pathName
                                                                            */
};

emlrtRSInfo tu_emlrtRSI = {
    131,     /* lineNo */
    "fzero", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\R2025b\\toolbox\\eml\\lib\\matlab\\optimfun\\fzero.m" /* pathName
                                                                           */
};

emlrtRSInfo uu_emlrtRSI = {
    135,     /* lineNo */
    "fzero", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\R2025b\\toolbox\\eml\\lib\\matlab\\optimfun\\fzero.m" /* pathName
                                                                           */
};

emlrtRSInfo vu_emlrtRSI = {
    217,     /* lineNo */
    "fzero", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\R2025b\\toolbox\\eml\\lib\\matlab\\optimfun\\fzero.m" /* pathName
                                                                           */
};

emlrtMCInfo emlrtMCI = {
    27,      /* lineNo */
    5,       /* colNo */
    "error", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\R2025b\\toolbox\\eml\\lib\\matlab\\lang\\error.m" /* pName
                                                                       */
};

omp_lock_t emlrtLockGlobal;

omp_nest_lock_t NominalSystemMatrix_nestLockGlobal;

emlrtRTEInfo emlrtRTEI = {
    81,                  /* lineNo */
    13,                  /* colNo */
    "reshapeSizeChecks", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\R2025b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\reshapeSizeChecks.m" /* pName */
};

emlrtRTEInfo b_emlrtRTEI = {
    86,                  /* lineNo */
    23,                  /* colNo */
    "reshapeSizeChecks", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\R2025b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\reshapeSizeChecks.m" /* pName */
};

emlrtRTEInfo c_emlrtRTEI = {
    88,                  /* lineNo */
    23,                  /* colNo */
    "reshapeSizeChecks", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\R2025b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\reshapeSizeChecks.m" /* pName */
};

emlrtRTEInfo e_emlrtRTEI = {
    58,                   /* lineNo */
    23,                   /* colNo */
    "assertValidSizeArg", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\R2025b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\assertValidSizeArg.m" /* pName */
};

emlrtRTEInfo f_emlrtRTEI = {
    64,                   /* lineNo */
    15,                   /* colNo */
    "assertValidSizeArg", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\R2025b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\assertValidSizeArg.m" /* pName */
};

emlrtRTEInfo m_emlrtRTEI = {
    13,     /* lineNo */
    9,      /* colNo */
    "sqrt", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\R2025b\\toolbox\\eml\\lib\\matlab\\elfun\\sqrt.m" /* pName
                                                                       */
};

emlrtRTEInfo p_emlrtRTEI = {
    137,     /* lineNo */
    9,       /* colNo */
    "fzero", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\R2025b\\toolbox\\eml\\lib\\matlab\\optimfun\\fzero.m" /* pName
                                                                           */
};

emlrtRTEInfo q_emlrtRTEI = {
    149,     /* lineNo */
    9,       /* colNo */
    "fzero", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\R2025b\\toolbox\\eml\\lib\\matlab\\optimfun\\fzero.m" /* pName
                                                                           */
};

emlrtBCInfo uc_emlrtBCI = {
    -1,       /* iFirst */
    -1,       /* iLast */
    7,        /* lineNo */
    17,       /* colNo */
    "out",    /* aName */
    "coprod", /* fName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\coprod.m", /* pName
                                                                            */
    0 /* checkKind */
};

emlrtBCInfo wc_emlrtBCI = {
    -1,       /* iFirst */
    -1,       /* iLast */
    7,        /* lineNo */
    31,       /* colNo */
    "vec",    /* aName */
    "coprod", /* fName */
    "E:\\\xe6\x96\x87\xe6\xa1\xa3\\GitHub\\OC4-DeepCwind1\\src\\coprod.m", /* pName
                                                                            */
    0 /* checkKind */
};

const int32_T iv[3] = {1, 1, 19};

emlrtRSInfo jv_emlrtRSI = {
    27,      /* lineNo */
    "error", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\R2025b\\toolbox\\eml\\lib\\matlab\\lang\\error.m" /* pathName
                                                                       */
};

/* End of code generation (NominalSystemMatrix_data.c) */
