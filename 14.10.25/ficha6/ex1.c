#include <stdio.h>
int main()
{
    int num, i;
    int resultado = 1;
    
    printf("Introduza um numero: ");
    scanf("%d", &num);
    
    if (num <= 0) {
        printf("Introduza um numero maior que 0\n");
    } else {
        i = num;
        while (i > 1) {
            resultado = resultado * i;
            i--;
        }
        printf("O fatorial de %d e %d\n", num, resultado);
    }
    
    return 0;
}