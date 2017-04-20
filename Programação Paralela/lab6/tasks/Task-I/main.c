#include <pmmintrin.h> // SSE3
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef char Type;
#define VECT_LEN 16// the length of the vector

void copy_vect ( Type * dst, const Type* src, size_t len)
{
  int i;
  // length of the array must be a multiple of the vector size VECT_LEN
  for(i = 0; i < len; i += VECT_LEN )
    {
      __m128i v = _mm_loadu_si128((__m128i *) (src+i));
      _mm_storeu_si128((__m128i *)(dst+i), v);
    }
}

int main()
{
  int N = 160000;
  Type src[N], dst[N];

  printf("Call function copy_vect()...\n");

  copy_vect(src, dst, N);

  return 0;
}

