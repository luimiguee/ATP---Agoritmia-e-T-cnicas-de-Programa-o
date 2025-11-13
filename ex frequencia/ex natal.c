#include <stdio.h>
int main()
{
    int dia, mes, ano;
    printf("Digite um dia: ");
    scanf("%d", &dia);
    printf("Digite um mes: ");
    scanf("%d", &mes);
    printf("Digite um ano: ");
    scanf("%d", &ano);
    if (dia < 1 || dia > 31 || mes < 1 || mes > 12) {
        printf("Data invalida\n");
    } else {
        if (dia == 25 && mes == 12) {
            printf("Natal do ano %d\n", ano);
        } else if (dia == 1 && mes == 1) {
            printf("Ano Novo do ano %d\n", ano);
        } else {
            printf("Dia Comum Ano : %d\n", ano);
        }
    }



}