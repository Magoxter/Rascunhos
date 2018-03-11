		/* Dama */
#include <stdio.h>

int abs (int);

int main (void) {
  int mov;
  int ctrl;
  int t1,t2;
  int s1,s2;
  int x1,x2;
  int y1,y2;
   scanf("%d", &x1);
   scanf("%d", &y1);
   scanf("%d", &x2);
   scanf("%d", &y2);
 while (ctrl) {
   x1--; y1--;
   x2--; y2--;
   ctrl = 0;
   s1 = x1 + y1;
   s2 = x2 + y2;
   t1 = abs(x1-y1);
   t2 = abs(x2-y2);
  if ((y1 == y2) && (x1 == x2)) {
    mov = 0;
  } else
  if ((s1 == s2) || (t1 == t2)) {
    mov = 1;
  } else
  if ((y1 == y2)  ^ (x1 == x2)) {
    mov = 1;
  } else
      mov = 2;
  printf("%d\n", mov);
   scanf("%d", &x1);
   scanf("%d", &y1);
   scanf("%d", &x2);
   scanf("%d", &y2);
  if (x1 && y1)
  if (x2 && y2)
    ctrl = 1;
 }
 return 0;
}

int abs (int n) {
 if (n >= 0)
  return n;
 else
  return -n;
}
