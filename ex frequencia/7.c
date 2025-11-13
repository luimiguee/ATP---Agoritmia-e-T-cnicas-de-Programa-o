#include <stdio.h>

int main()
{
    int dia;

    printf("Dia ? \n");
    scanf("%d" ,&dia);

    switch (dia) {
     case 1:
     case 7:
     printf("Fim  de semana\n");
     break;
        case 2:
        case3:
        case 4:
        case 5:
        case 6:
        printf("Dias de semana ");
        break;
        default:
        printf("dia Invalido");
    
    }
}