#include <stdio.h>
#define VALOR 1000
int main(){
	int T, i, N[VALOR], Sequenciador;
	
	scanf("%d", &T);

	for (i = 0; i < 1000; ++i, ++Sequenciador){
		if (Sequenciador == T){
			Sequenciador = 0;
		}
		N[i] = Sequenciador;
		printf("N[%d] = %d\n", i, N[i]);
	}

	return 0;
}
