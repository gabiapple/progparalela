#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/*
	01 02 03 04
	05 06 07 08
	09 10 11 12
	13 14 15 16

I=0;I<n*n;I+=(n+1)
j=i*(n-count)
A[0] = A[0]
A[1] = A[4]
A[2] = A[8]
A[3] = A[12]

	01 05 09 13
	02 06 O7 08
	03 10 11 12
	04 14 15 16

A[5] = A[5]
A[6] = A[9]  
A[7] = A[13]

	01 05 09 13
	02 06 10 14
	03 07 11 12
	04 13 15 16

A[10] = A[10]
A[11] = A[14]

	01 05 09 13
	02 06 10 14
	03 07 11 15
	04 13 14 16
 
a[15]=a[15]


	01 05 09 13
	02 06 10 14
	03 07 11 15
	04 08 12 16
	


	C(i,j) = A(i,k) * B(k,j) + A(i,k+1) * B(k+1,j) 
	C(0,0) = A(0,0) * B(0,0) + A(0,1) * B(1,0) + A(0,2) * B(2,0) + A(0,3) * B(3,0)
	c(0,1) = A(0,0) * B(0,1) + A(0,1) * B(1,1) + A(0,2) * B(2,1) + A(0,3) * B(3,1)

	cij += A[i+k*n] * B[k+j*n];
	3 MATRIZES 4X4
	3 * 16 = 48
	A
	01 02 03 04 05 06 07 08 09 10 11 12 13 14 15 16
	A'
	01 05 09 13 02 06 10 14 03 07 11 15 04 08 12 16

	B
	17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32
	C
	33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48

*/

void print(double *B, int n);

/* This routine performs a dgemm operation
 *  C := C + A * B
 * where A, B, and C are lda-by-lda matrices stored in column-major format.
 * On exit, A and B maintain their input values. */    
void square_dgemm (int n, double* A, double* B, double* C)
{
  /* For each row i of A */
  for (int i = 0; i < n; ++i)
    /* For each column j of B */
		for (int j = 0; j < n; ++j) 
		{
		/* Compute C(i,j) */
			double cij = C[i+j*n];
			for( int k = 0; k < n; k++ )
			{
	//			cij += A[i+k*n] * B[k+j*n];
				cij += A[k+i*n] * B[k+j*n];
			}
			C[i+j*n] = cij;
    }
}


void transp(int n, double *B)
{
	int aux=0;
	for(int i = 0; i< n*n; i+=(n+1))
	{
		int j=i, k=i;
		for(j; k<(i+n) && k <n*n && j < n*n; j+=n,k++)
		{
			aux = B[k];
			B[k] = B[j];
			B[j] = aux;
		}
	}
}

void fill (double* p, int n)
{
  for (int i = 0; i < n; ++i)
    p[i] = 2 * drand48() - 1; // Uniformly distributed over [-1, 1]
}

void print (double *p, int n){
	for(int i=0;i<n;++i){
		printf("%.lf ", p[i]);
	}	
	printf("\n");
	for(int i = 0; i < n; ++i)
	{
		for(int j = (i*n)+n; j < (i*n)+2*n && j < n*n; ++j)
		{
			printf("%.lf ", p[j]);		
		}	
		printf("\n");
	}

		printf("\n");
}

int main(){
	int i,j,tmili, nmax;
 	int test_sizes[] = { 31, 32, 96, 97, 127, 128, 129, 191, 192, 229, 255, 256, 257,
    319, 320, 321, 417, 479, 480, 511, 512, 639, 640, 767, 768, 769 };
	//int test_sizes[] = {512,640};
	int nsizes = sizeof(test_sizes)/sizeof(test_sizes[0]);
	nmax = test_sizes[nsizes-1];

	double* buf = NULL;
	buf = (double*) malloc (3 * nmax * nmax * sizeof(double));

//		printf("Multiplicação ingenua sem nenhuma otimização\n");
		printf("Mutiplicação coluna por coluna com A transposta\n");

	for(int i = 0; i < nsizes; i++)
	{	
		int n = test_sizes[i];
	
		double* A = buf + 0;
		double* B = A + nmax*nmax;
		double* C = B + nmax*nmax;

		clock_t t1,t2;
	
		fill(A,n*n);
		fill(B,n*n);
		fill(C,n*n);
		transp(nmax,A);
		//transp(nmax,B);
		printf("n = %d\n", n);	
		t1 = clock();  
		square_dgemm (n, A, B, C);
		t2=clock();
		printf("Tempo = %lf segundos\n\n", (((double)t2 - (double)t1) / (double)CLOCKS_PER_SEC));	

	}
	free(buf);

	return 0;
}
