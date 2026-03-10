/*
 * triu.c
 *
 * Code generation for function 'triu'
 *
 */

/* Include files */
#include "triu.h"
#include "rt_nonfinite.h"
#include <string.h>

/* Function Definitions */
void b_triu(real_T x[1156])
{
  int32_T istart;
  int32_T j;
  istart = 1;
  for (j = 0; j < 34; j++) {
    if (istart <= 34) {
      memset(&x[(j * 34 + istart) + -1], 0,
             (uint32_T)(-istart + 35) * sizeof(real_T));
    }
    istart++;
  }
}

void triu(real_T x[1156])
{
  int32_T istart;
  int32_T j;
  istart = 2;
  for (j = 0; j < 33; j++) {
    if (istart <= 34) {
      memset(&x[(j * 34 + istart) + -1], 0,
             (uint32_T)(-istart + 35) * sizeof(real_T));
    }
    istart++;
  }
}

/* End of code generation (triu.c) */
