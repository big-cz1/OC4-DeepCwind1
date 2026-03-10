/*
 * cos.c
 *
 * Code generation for function 'cos'
 *
 */

/* Include files */
#include "cos.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

/* Function Definitions */
void b_cos(real_T x_data[], const int32_T x_size[3])
{
  int32_T i;
  int32_T k;
  i = x_size[2];
  for (k = 0; k < i; k++) {
    x_data[k] = muDoubleScalarCos(x_data[k]);
  }
}

/* End of code generation (cos.c) */
