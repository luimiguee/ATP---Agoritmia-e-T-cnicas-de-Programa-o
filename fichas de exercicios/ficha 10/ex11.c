#include <stdio.h>
int main()
{
    float x  ,y ,z , resultado,valor;

    printf("Introduza a quantidade de bolos consumida ?\n");
    scanf("%f",  &x);
    printf("Introduza a quantidade de Chocolates  consumida ?\n");
    scanf("%f",  &y);
    printf("Introduza a quantidade de leite consumida ?\n");
    scanf("%f",  &z);
valor =  20;
    resultado =  (x * 1) +  (y * 1.5) + ( z * 1.2);
    if (resultado < valor) {
     printf(" Gastou %.2f\n  Troco %.2f \n", resultado, (valor -  resultado)  );
    }
    else if (resultado > valor ) {
        printf(" Gastou :%.2f\n Ficou a dever: %.2f\n",resultado,(valor - resultado)  );
    
    }
    else {
        printf(" Gastou :%.2f\n  saldo : %.2f\n",resultado, valor);
    
    }
}
