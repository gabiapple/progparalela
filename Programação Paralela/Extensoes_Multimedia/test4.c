#include <stdlib.h>
#include <math.h>

#define SIZE    (1L << 16)


void test4(double * restrict a, double * restrict b)
{
        int i;
	double *x = __builtin_assume_aligned(a,16);
	double *y = __builtin_assume_aligned(b,16);


        for (i = 0; i < SIZE; i++)
        {
                x[i] += y[i];
        }
}
