#include <stdio.h>
#define VALOR 100
int main(){
	int i;
	double N[VALOR];

	scanf("%lf", &N[0]);

	for (i = 1; i < 100; ++i){
		N[i] = (double)N[i-1] /2;
	}
	
	for (i = 0; i < 100; ++i){
		printf("N[%d] = %.4lf\n", i, N[i]);
	}

	return 0;
}
