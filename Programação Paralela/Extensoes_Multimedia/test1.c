#include <stdlib.h>
#include <math.h>

#define SIZE    (1L << 16)


void test1(double *a, double *b)
{
        int i;

        for (i = 0; i < SIZE; i++)
        {
                a[i] += b[i];
        }
}
