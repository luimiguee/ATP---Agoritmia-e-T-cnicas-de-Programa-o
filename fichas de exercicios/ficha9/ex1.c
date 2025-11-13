#include <stdio.h>

float a,b;

int main()
{
    printf("Digite O valor de A:\n");
    scanf("%f", &a);
    printf("Digite valor de B:\n");
    scanf("%f", &b);
        if (a == b) {
            printf("Ambos sao iguais , A : %.2f,  B : %.2f \n", a,b);
        }
        else if (a <b) {
            printf("  O B é o maior  , A : %.2f,  B : %.2f \n", a,b);
        }
        else {
            printf("  O A é o maior  , A : %.2f,  B : %.2f \n", a,b);
        }

}
