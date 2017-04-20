#include <stdio.h>
#include <time.h>


void loop(){
	int num;
	while(scanf("%d", &num) && num!=0){
		printf("Você tem argumentos %d...\n",num);
	}
}

int main(){
	double cpu_time_used;
	clock_t t1,t2;
	t1 = clock();
	loop();
	t2 = clock();
	cpu_time_used = ((double) (t1-t2)) / CLOCKS_PER_SEC;
	printf("Tempo: %lf\n", cpu_time_used);

	return 0;
	
}
