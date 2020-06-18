#include <stdio.h>

int fact(int x) {
   int f;

   for(f = 1; x > 1; x--)
      f *= x;

   return f;
}

int nCr(int n,int r) {
   return fact(n) / ( fact(n-r) * fact(r) );
}

int main() {
   int  i, j,n = 5;
   for(i = 0; i <= n; i++) {
      for(j = 0; j <= n-i; j++)
         printf("  ");

      for(j = 0; j <= i; j++)
         printf(" %3d", nCr(i, j));

      printf("\n");
   }
   return 0;
}
