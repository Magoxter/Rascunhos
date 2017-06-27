#include <stdio.h> 
#define TAMANHO 12
int main(){
	char o;
	float M[TAMANHO][TAMANHO], soma = 0;
	int i, j, k, contador = 0;

	scanf("%c", &o);

	for (i = 0; i < TAMANHO; ++i){
		for (j = 0; j < TAMANHO; ++j){
			scanf("%f", &M[i][j]);
		}
	}

	if (o == 'S'){
		for ( i = 1; i < TAMANHO; ++i){
			for( j = TAMANHO-1, k = i; k < TAMANHO; ++k, --j){
				soma += M[k][j];
			}
		}
		printf("%.1f\n", soma);
	}

	if(o == 'M'){
		for ( i = 1; i < TAMANHO; ++i){
			for( j = TAMANHO-1, k = i; k < TAMANHO; ++k, --j, ++contador){
				soma += M[k][j];
			}
		}
		soma = soma/contador;
		printf("%.1f\n", soma);
	}


	return 0;
}
