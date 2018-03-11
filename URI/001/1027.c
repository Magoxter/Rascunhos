		/* X0R */
#include <stdio.h>
#define MX 100

void bitarizacao (int[],int);
int pot (int,int);

int main (void) {
  int n,i;
  int n1,n2;
  int b1[MX];
  int b2[MX];
 while (scanf("%d", &n1) != EOF) {
        scanf("%d", &n2);
     n = 33;
  for (i = 0; i < n; i++)
  	 b1[i] = b2[i] = 0;
    bitarizacao(b1,n1);
    bitarizacao(b2,n2);
  for (i = 0; i < n; i++)
  	 printf("%d ", b1[i]);
    printf("\n");
  for (i = 0; i < n; i++)
  	 printf("%d ", b2[i]);
    printf("\n");
 }
 return 0;
}

void bitarizacao (int v[MX], int n) {
  int k,i;
 if (n) {
 	 k = i = 0;
 	while (k < n) {
 	  k = pot(2,i);
 	  i++;
  } n -= k;
    v[i-1] = 1;
  bitarizacao(v,n);
 }
 return;
}

int pot (int a,int x) {
 while (x--)
 	a *= a;
 return a;
}
