#include <stdio.h>

int main() {
    int idade;
    char estado_civil;

    printf("Informe a idade do empregado: ");
    scanf("%d", &idade);

    printf("Informe o estado civil (S - solteiro, C - casado): ");
    scanf(" %c", &estado_civil); // espaço antes do %c para ignorar o '\n'

    // Classificação dos grupos
    switch (1) { // simulando "switch(true)" em C
        case 1:
            if (estado_civil == 'S' || estado_civil == 's') {
                if (idade < 25)
                    printf("Grupo 1 - Solteiro com menos de 25 anos.\n");
                else
                    printf("Grupo 2 - Solteiro com 25 anos ou mais.\n");
            } 
            else if (estado_civil == 'C' || estado_civil == 'c') {
                if (idade < 34)
                    printf("Grupo 3 - Casado com menos de 34 anos.\n");
                else
                    printf("Grupo 4 - Casado com 34 anos ou mais.\n");
            } 
            else {
                printf("Estado civil inválido.\n");
            }
            break;
    }

    return 0;
}
