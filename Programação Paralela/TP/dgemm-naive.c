const char* dgemm_desc = "Naive, three-loop dgemm with transp.";

void transp(int n, double *B)
{
	int aux=0;
	for(int i = 0; i< n*n; i+=(n+1))
	{
		for(int j = i, k = i; k<(i+n) && k <n*n && j < n*n; j+=n,k++)
		{
			aux = B[k];
			B[k] = B[j];
			B[j] = aux;
		}
	}
}

/* This routine performs a dgemm operation
 *  C := C + A * B
 * where A, B, and C are lda-by-lda matrices stored in column-major format.
 * On exit, A and B maintain their input values. */    
void square_dgemm (int n, double* A, double* B, double* C)
{

//	transp(n,A);
  /* For each row i of A */
  for (int i = 0; i < n; ++i)
    /* For each column j of B */
		for (int j = 0; j < n; ++j) 
		{
		/* Compute C(i,j) */
			double cij = C[i+j*n];
			for( int k = 0; k < n; k++ )
			{
				cij += A[i+k*n] * B[k+j*n];
			}
			C[i+j*n] = cij;
    }
}

