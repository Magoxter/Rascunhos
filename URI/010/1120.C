    /* Contrato */
#include <stdio.h>
#include <stdlib.h>
#define MAX 1000

int main (void) {
  int  n,i,k,z;
  char c;
  char contrato[MAX];
   scanf("%c", &c);
   scanf(" %[^\n]%*c", contrato);
 while (c != 48 && contrato[0] != 48) {
   n = strlen(contrato);
   i = 0;
  while (i < n) {
   if (contrato[i] == c) {
    for (k = i; k < n; k++) {
      contrato[k] = contrato[k+1];
      printf("%s\n", contrato);
    }
   } i++;
  } i = strlen(contrato);
  while (i--) {
    if (contrato[i] == c)
      contrato[i] = 48;
  } if (!z) printf("0\n");
  else printf("%s\n", contrato);
   scanf("%c", &c);
   scanf(" %[^\n]%*c", contrato);
 }
 return 0;
}
