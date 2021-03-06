#include <stdio.h>
#include <stdlib.h>

int n = 4;

void print(int *C){
	for(int i=0; i < n; i++){
		for(int j=0; j < n; j++){
			//printf("C(%d,%d) = C(%d) = %d ", i,j, i+j*n, C[i+j*n]);		
			printf("%d ", C[i+j*n]);
		}
		printf("\n");
	}
	printf("\n");
}

void fill (int * A, int * B, int * C)
{
	for(int i=0; i < n*n; i++){
		A[i] = i+1;		
		B[i] = i+1;		
		C[i] = 0;
	}
}


void multi(int *A, int *B, int *C){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			for(int k=0;k<n;k++){
				C[i+j*n] += A[i+k*n] * B[k+j*n];
			}
		}
	}	
}

void multi_transp(int *A, int *B, int *C){
	for(int i=0;i<n;i++){			
		for(int j=0;j<n;j++){
			for(int k=0;k<n;k++){
				C[i+j*n] += A[k+i*n] * B[k+j*n];
			}
		}
	}


}

void transp(int *B)
{
	int aux=0;
	for(int i = 0; i< n*n; i+=(n+1))
	{
		for(int j=i,k=i; k<(i+n) && k <n*n && j < n*n; j+=n,k++)
		{
			aux = B[k];
			B[k] = B[j];
			B[j] = aux;
		}
	}
}

int main(){
	int * buf = (int *) malloc(3*n*n*sizeof(int));
	int * A = buf + 0;
	int * B = A + n*n;
	int * C = B + n*n;

	fill(A,B,C);

	print(A);
	printf("  *\n\n");
	print(B);
	printf("  =\n\n");

	multi(A,B,C);	

	print(C);

	printf("Com A transposta\n");

	transp(A);
	print(A);
	printf("  *\n\n");
	print(B);
	printf("  =\n\n");
	
	multi_transp(A,B,C);

	print(C);

	free(buf);
}
