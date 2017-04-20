#include <stdlib.h>
#include <math.h>

#define SIZE    (1L << 16)


void test2(double * restrict a, double * restrict b)
{
        int i;

        for (i = 0; i < SIZE; i++)
        {
                a[i] += b[i];
        }
}
