#include <stdlib.h>
#include <math.h>

#define SIZE    (1L << 16)


void test3(double * restrict a, double * restrict b)
{
        int i;
	__builtin_assume_aligned(a,16);
	__builtin_assume_aligned(b,16);


        for (i = 0; i < SIZE; i++)
        {
                a[i] += b[i];
        }
}
