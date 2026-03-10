/*
 * fzero.h
 *
 * Code generation for function 'fzero'
 *
 */

#pragma once

/* Include files */
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
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
             real_T FunFcn_workspace_Azimuth);

/* End of code generation (fzero.h) */
