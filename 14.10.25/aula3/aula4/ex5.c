#include <stdio.h>

int op = 0, contagpl = 0, contagasolina = 0, contadisel = 0;

void mmenu()
{
    printf("\n=== Menu ===\n");
    printf("1 - GPL\n");
    printf("2 - Gasolina\n");
    printf("3 - Diesel\n");
    printf("4 - Fim / Sair\n");
}

void mprefere()
{
    printf("\n=== MUITO OBRIGADO ===\n");
    printf("Preferências:\n");
    printf("GPL: %d\n", contagpl);
    printf("Gasolina: %d\n", contagasolina);
    printf("Diesel: %d\n", contadisel);
}


void pedirop()
{
    printf("Introduza uma opção: ");
    scanf("%d", &op);
}

int main()
{
    do {
        mmenu();
        pedirop();

        switch (op) {
            case 1:
                contagpl++;
                break;
            case 2:
                contagasolina++;
                break;
            case 3:
                contadisel++;
                break;
            case 4:
                mprefere();
               
                break;
            default:
                printf("Opção inválida! Tente novamente.\n");
                break;
        }

    } while (op != 4);

    return 0;
}

