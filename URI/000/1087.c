#include <stdio.h>
int main(){
	int Posicao[4], Dif[2], i;

	for ( i = 0; i < 4; ++i){
		scanf("%d", &Posicao[i]);
	}

	while(Posicao[0] != 0 && Posicao[1] != 0 && Posicao[2] != 0 && Posicao[3] != 0 ){
		Dif[0] = Posicao[0] - Posicao[2];
		Dif[1] = Posicao[1] - Posicao[3];
		if (Dif[0] < 0){
			Dif[0] = Dif[0]*-1;
		}
		if (Dif[1] < 0){
			Dif[1] = Dif[1]*-1;
		}


		if (Dif[0]==0 && Dif[1]==0){
			printf("0\n");
		}
		else{ 
			if ((Dif[0]==0 ) || (Dif[1]==0) || (Dif[0] == Dif[1])){
				printf("1\n");
			}
			else {
				printf("2\n");
			}
		}

		for ( i = 0; i < 4; ++i){
			scanf("%d", &Posicao[i]);
		}
	}

	return 0;
}
