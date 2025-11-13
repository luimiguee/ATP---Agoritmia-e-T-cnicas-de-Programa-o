#include <stdio.h>

float num1,num2;
int main()
{
printf("digite um numero:?\n");
scanf("%f", &num1);
printf("digite um numero:?\n");
scanf("%f", &num2);

if (num1 == 0  && num2 == 0 ) {
    printf(" numeros sao igual 0\n");

}
    else if ( num1 < 0 && num2 < 0) {
        printf(" Sao negativos");
    
    }
    else {
     printf(" Sao positivos\n");
    }
}