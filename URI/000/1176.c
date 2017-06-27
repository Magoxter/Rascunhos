  #include <stdio.h>
int main(){
	int T, N, i;
	scanf("%d", &T);							//Leitura da quantidade de testes
	unsigned long long int Fib[61] = {0};
	Fib[1] = 1;									//Colocando o valor correto do segundo número de Fibonacci

	for (i = 2; i < 61; ++i){
		Fib[i] = Fib[i-1] + Fib [i-2];
	}
	for (i = 0; i < T; ++i){
		scanf("%d", &N);						// N-ésimo termo de Fibonacci a ser mostrado na tela
		printf("Fib(%d) = %llu\n", N, Fib[N]);
	}

	return 0;
}
