#include <stdio.h>
#define NUMBER 20

int main(){
	int N[NUMBER], Aux, i;

	for(i = 0; i < NUMBER; ++i){
		scanf("%d", &N[i]);
	}

	for (i = 0; i < NUMBER/2; ++i){
		Aux 		= N[i];
		N[i] 		= N[NUMBER-i-1];
		N[NUMBER-i-1] 	= Aux;
	}
	for (i = 0; i < 20; ++i){
		printf("N[%d] = %d\n", i, N[i]);
	}
	return 0;
}
