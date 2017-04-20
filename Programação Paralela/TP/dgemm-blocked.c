const char* dgemm_desc = "Simple blocked dgemm";

#if !defined(BLOCK_SIZE)
#define BLOCK_SIZE 32
#endif

#define min(a,b) (((a)<(b))?(a):(b))

void transp(int n, double *B)
{
	int aux=0;
	for(int i = 0; i< n*n; i+=(n+1))
	{
		for(int j=i, k=i; k<(i+n) && k <n*n && j < n*n; j+=n,k++)
		{
			aux = B[k];
			B[k] = B[j];
			B[j] = aux;
		}
	}
}

/* This auxiliary subroutine performs a smaller dgemm operation
 *  C := C + A * B
 * where C is M-by-N, A is M-by-K, and B is K-by-N. */
static void do_block (int lda, int M, int N, int K, double* A, double* B, double* C)
{
	for (int j = 0; j < N; ++j) {
	  for (int k = 0; k < K; ++k){
      for (int i = 0; i < M; ++i)		
			  C[i+j*lda] += A[i+k*lda] * B[k+j*lda];
    }
	}
}

/* This routine performs a dgemm operation
 *  C := C + A * B
 * where A, B, and C are lda-by-lda matrices stored in column-major format. 
 * On exit, A and B maintain their input values. */  
void square_dgemm (int lda, double* A, double* B, double* C)
{
	
	/* Transpo matriz A*/
	//	transp(lda,A);
//	transp(lda,B);
	/* For each block-row of A */ 
	for (int i = 0; i < lda; i += BLOCK_SIZE)
		/* For each block-column of B */
		for (int j = 0; j < lda; j += BLOCK_SIZE)
			/* Accumulate block dgemms into block of C */
			for (int k = 0; k < lda; k += BLOCK_SIZE)
			{
			/* Correct block dimensions if block "goes off edge of" the matrix */
				int M = min (BLOCK_SIZE, lda-i);
				int N = min (BLOCK_SIZE, lda-j);
				int K = min (BLOCK_SIZE, lda-k);
	
	
				/* Perform individual block dgemm */
				do_block(lda, M, N, K, A + i + k*lda, B + k + j*lda, C + i + j*lda);
      }
}
