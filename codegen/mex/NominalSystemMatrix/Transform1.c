/*
 * Transform1.c
 *
 * Code generation for function 'Transform1'
 *
 */

/* Include files */
#include "Transform1.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void Transform1(const real_T RotMat[9], const real_T BasisVec[9], real_T Out[9])
{
  /* #Codegen */
  /*  RotMat : Rotation  matrix (3x3) */
  /*  BasisVec : Matrix with basis vectors, each row containing a basis vector
   */
  Out[0] = (RotMat[0] * BasisVec[0] + BasisVec[1] * RotMat[3]) +
           BasisVec[2] * RotMat[6];
  Out[1] = (BasisVec[0] * RotMat[1] + BasisVec[1] * RotMat[4]) +
           BasisVec[2] * RotMat[7];
  Out[2] = (BasisVec[0] * RotMat[2] + BasisVec[1] * RotMat[5]) +
           BasisVec[2] * RotMat[8];
  Out[3] = (RotMat[0] * BasisVec[3] + RotMat[3] * BasisVec[4]) +
           BasisVec[5] * RotMat[6];
  Out[4] = (RotMat[1] * BasisVec[3] + RotMat[4] * BasisVec[4]) +
           BasisVec[5] * RotMat[7];
  Out[5] = (RotMat[2] * BasisVec[3] + BasisVec[4] * RotMat[5]) +
           BasisVec[5] * RotMat[8];
  Out[6] = (RotMat[0] * BasisVec[6] + RotMat[3] * BasisVec[7]) +
           RotMat[6] * BasisVec[8];
  Out[7] = (RotMat[1] * BasisVec[6] + RotMat[4] * BasisVec[7]) +
           RotMat[7] * BasisVec[8];
  Out[8] = (RotMat[2] * BasisVec[6] + RotMat[5] * BasisVec[7]) +
           RotMat[8] * BasisVec[8];
}

/* End of code generation (Transform1.c) */
