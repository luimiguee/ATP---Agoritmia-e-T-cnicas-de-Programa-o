#include <stdio.h>

int main()
{
    float n1, n2, divisao;
    printf("Digite a primeira nota: ");
    scanf("%f", &n1);
    printf("Digite a segunda nota: ");
    scanf("%f", &n2);
    divisao=n1/n2;
    printf("%.2f", divisao);
}   