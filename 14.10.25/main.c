#include <stdio.h>
#include <stdlib.h>

float mame() {
    float n1, n2, result;
    int conta;

    printf("Introduza o 1º Numero: ");
    scanf("%f", &n1);
    printf("Introduza o 2º Numero: ");
    scanf("%f", &n2);

    if (n1 > n2) {
        conta = 1;
        result = n1;
    } else if (n2 > n1) {
        conta = 2;
        result = n2;
    } else {
        conta = 0;
        result = n1; // ambos iguais
    }

    if (conta == 0)
        printf("Os dois números são iguais: %.2f\n", result);
    else
        printf("O maior número é o %dº e o seu valor é %.2f\n", conta, result);

    return result;
}

int main(int argc, char **argv) {
    float num1, num2, maior;

    if (argc == 3) {
        num1 = atof(argv[1]);
        num2 = atof(argv[2]);
        printf("Valores recebidos: %.2f e %.2f\n", num1, num2);

        if (num1 > num2)
            printf("O maior número é o primeiro (%.2f)\n", num1);
        else if (num2 > num1)
            printf("O maior número é o segundo (%.2f)\n", num2);
        else
            printf("Os dois números são iguais (%.2f)\n", num1);
    } else {
        printf("Nenhum ou poucos argumentos passados. Vamos ler do teclado:\n");
        maior = mame();
    }

    return 0;
}
