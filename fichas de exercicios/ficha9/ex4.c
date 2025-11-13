#include <stdio.h>

int main()
{

    float val1,val2;

    printf(" Digite o 1º Valor\n");
    scanf("%f",  &val1);
    printf(" Digite o 2º Valor\n");
    scanf("%f",  &val2);
        if (val1 > val2) {
            printf("%.2f\n",val1 );
        
        }
        else {
            printf("%.2f\n", val2);

        }
}
