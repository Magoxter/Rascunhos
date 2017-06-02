    /* Encaixa */
#include <stdio.h>
#define MX 1000

void invert (int,int[]);

int main (void) {
  int tamN,tamK,
      vetN[MX],
      vetK[MX],
      n,i,r,c,k,x;
   scanf("%d", &r);
 while (r--) {
  scanf("%d", &n);
  scanf("%d", &k);
   i = x = 0;
  if (!(k-n))
    x = 1;
  while (n > 0) {
    vetN[i] = n %10;
    n /= 10;
   i++; tamN = i;
  } invert(tamN,vetN);
   i = 0;
  while (k > 0) {
    vetK[i] = k %10;
    k /= 10;
    i++;
   if (k == 0) {
     vetK[i] = k;
     i++;   }
   tamK = i;
  } invert(tamK,vetK);
  if (x)
    c = 1;
  else if (tamK > tamN)
    c = 0;
  else { x = tamK-1; c = 0;
    for (i = tamN-1; i >= 0; i--) {
     if (vetK[x] == vetN[i]) {
       c = 1; x--;
     } else {
         c = 0;
         break;
     }
    }
  } if (c)
     printf("encaixa\n");
  else
    printf("nao encaixa\n");
 }
 return 0;
}

void invert (int n, int v[MX]) {
  int aux,
      k,i;
 for (i = 0; i < n/2; i++) {
   k = n -i -1;
  aux = v[i];
  v[i] = v[k];
  v[k] = aux;
 }
 return;
}
