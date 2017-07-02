    /* Lightsaber */
#include <stdio.h>
#define MX 100

int verif (int,int[]);

int main (void) {
  int k,y,l,n,c,x,
      mat[MX][MX],
      lin,col,v[MX];
   scanf("%d", &lin);
   scanf("%d", &col);
 for (l = 0; l < lin; l++)
  for (c = 0; c < col; c++)
    scanf("%d", &mat[l][c]);
 for (l = 0; l < lin; l++) {
  for (c = 0; c < col; c++) {
     x = mat[l][c];
    if (!(x-42)) {
      k = 8;
     if (!l || !c) {
      if (!l && !c) {
          k = 3;
         v[0] = mat[l][c+1];
         v[1] = mat[l+1][c];
         v[2] = mat[l+1][c+1];
       if (verif(k,v)) {
          x = l +1;
          y = c +1;
       } else {
           x = 0;
           y = 0;
       }
      } else if (!l) {
          k = 5;
         v[0] = mat[l-1][c];
         v[1] = mat[l-1][c+1];
         v[2] = mat[l][c+1];
         v[3] = mat[l+1][c+1];
         v[4] = mat[l+1][c];
        if (verif(k,v)) {
          x = l +1;
          y = c +1;
        } else {
           x = 0;
           y = 0;
       }
      } else {
          k = 5;
         v[0] = mat[l][c-1];
         v[1] = mat[l+1][c-1];
         v[2] = mat[l+1][c];
         v[3] = mat[l+1][c+1];
         v[4] = mat[l][c+1];
        if (verif(k,v)) {
          x = l +1;
          y = c +1;
        } else {
           x = 0;
           y = 0;
       }
      }
     } else if (l == n-1 || c == n-1) {
      if (l == n-1 && c == n-1) {
         k = 3;
        v[0] = mat[l-1][c];
        v[1] = mat[l-1][c-1];
        v[2] = mat[l][c-1];
       if (verif(k,v)){
         x = l +1;
         y = c +1;
       } else {
           x = 0;
           y = 0;
       }
      } else if (l == n-1) {
          k = 5;
         v[0] = mat[l][c-1];
         v[1] = mat[l-1][c-1];
         v[2] = mat[l-1][c];
         v[3] = mat[l-1][c+1];
         v[4] = mat[l][c+1];
        if (verif(k,v)) {
          x = l +1;
          y = c +1;
        } else {
           x = 0;
           y = 0;
       }
      } else {
          k = 5;
         v[0] = mat[l-1][c];
         v[1] = mat[l-1][c-1];
         v[2] = mat[l][c-1];
         v[3] = mat[l+1][c-1];
         v[4] = mat[l+1][c];
        if (verif(k,n)) {
          x = l +1;
          y = c +1;
        } else {
           x = 0;
           y = 0;
       }
      }
     } else {
         k = 8;
        v[0] = mat[l-1][c];
        v[1] = mat[l+1][c];
        v[2] = mat[l][c-1];
        v[3] = mat[l][c+1];

        v[4] = mat[l-1][c-1];
        v[5] = mat[l-1][c+1];
        v[6] = mat[l+1][c-1];
        v[7] = mat[l+1][c+1];
       if (verif(k,v)) {
         x = l +1;
         y = c +1;
       } else {
           x = 0;
           y = 0;
       }
     }
    }
  }
 } printf("%d %d\n", x,y);
 return 0;
}

int verif (int n, int v[MX]) {
  int a = v[0],
      b = v[1],
      c = v[2],
      d = v[3],
      e = v[4],
      f = v[5],
      g = v[6],
      h = v[7];
 if (!(n-3)) {
  if (a + b == c +7)
    return 1;
  else
    return 0;
 }
 if (!(n-5)) {
  if (a + b + c == d + e + 7)
    return 1;
  else
    return 0;
 }
 if (!(n-8)) {
  int sum1,sum2,
      lat,front;
    sum1 = a + b + c;
    sum2 = d + e + f;
   if (!(sum1-sum2))
     lat = sum1 + sum2;
   if (!((g + h)-14))
     front = g + h;
  if (!((lat + front)-56))
    return 1;
  else
    return 0;
 }
}
