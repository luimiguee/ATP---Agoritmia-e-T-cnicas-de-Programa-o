#include <stdio.h>

int main()
{
    int x,y,n,t;
    float a,b,c;
    x = 10;
    y = 8;
    n = 7; 
    t =  2;
     a = x * y + (n - t) / 6.0;
      b =  -t * n + (x % y);
      c =  n %  y - t *   x + ( x / (float)n);

printf(" Valor de A : %.2f\n Valor De B : %.2f\n Valor de C : %.2f\n", a,b,c );
}