#include <stdio.h>


int main()
{
    unsigned int cod_cliente;
    char estatuto [255];
    int n_copias;
     float  p_unitario;

printf("Autenticaçao ......\n");
printf("introduza o codigo de cliente ?\n");
scanf("%d", &cod_cliente);
printf("Introduzir o Nº de copias?");
scanf("%d", &cod_cliente);

switch (cod_cliente){

    case 10:
    p_unitario = 0.15;

    break;
    case 12:
    p_unitario = 0.07;
    break;
    p_unitario = 0;
    break;
    case 15:
    p_unitario = 0.20;
    break;


}
}

