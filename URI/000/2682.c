		/* Maquina Falhosa */
#include <stdio.h>

int main (void) {
  long long
  unsigned
  int n;
  long long
  unsigned
  int ant;
  long long
  unsigned
  int atl;
  long long
  unsigned
  int num;
  int ctrl;
  int frst;
   ctrl = frst = 1;
 while (scanf("%llu", &n) != EOF) {
    atl = n;
  if (frst) {
    ant = n;
    frst--;
  } else
  if (ant >= atl && ctrl) {
    num = ant +1;
    ctrl--;
  } ant = n;
 } printf("%llu\n", num);
 return 0;
}
