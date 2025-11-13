#include <stdio.h>
int main()

{
    float altura;
    char  sexo ;
    
    printf("Altura?");
    scanf("%f", &altura);
    
    printf("Sexo\n");
    scanf("%c", &sexo);
    switch (sexo) {
        case 'M':
        case 'm':
        printf(" O peso do Homem %.2f", (72.2* altura)- 58);
        break;
        case 'F':
        case 'f':
        printf("Peso da  Mullher :%.2f\n", (62.1 * altura ) - 44.7);
        break;
        default:
        printf("Sexo nao existe ");
    }

}