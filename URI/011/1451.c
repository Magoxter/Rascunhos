    /* Beiju */
#include <stdio.h>
#include <stdlib.h>
#define MAX 10000

int main (void) {
  char texto[MAX],
       aux[MAX];
  int  home,k,n;
 while (scanf(" %[^\n]%*c", texto) != EOF) {
    n = strlen(texto);
    k = home = 0;
  for (i = 0; i < n; i++)
    if (texto[i] == '[')
      home++;
   if (home > 0) {
  for (i = 0; i < n; i++) {
    if (texto[i] == '[')
      home--;
    else if (!home && texto[i] != ']') {
      aux[k] = texto[i];
      k++;
    }
  }
   }
  for (i = k; i < n; i++) {
    aux[k] =
  }
 }
 return 0;
}
