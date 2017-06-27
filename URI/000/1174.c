#include <stdio.h>
#define VALOR 30 // O tamanho do vetor no exercício do uri é de 100
int main(){
	int i;
	double A[VALOR];

	for (i = 0; i < VALOR; ++i){
		scanf("%lf", &A[i]);
	}

	for (i = 0; i < VALOR; ++i){
		if (A[i] <= 10)		{
			printf("A[%d] = %.1lf\n", i, A[i]);
		}
	}

	return 0;
}
