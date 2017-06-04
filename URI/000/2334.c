    /* Patinhos */
#include <stdio.h>

int main (void) {
  long long
  int n;
   scanf("%lld", &n);
 while (n > -1) {
  if (n)
    n -= 1;
  printf("%lld\n",n);
   scanf("%lld", &n);
 }
 return 0;
}
