#include <stdio.h>

int main()
{
    float n1, n2, media;

    printf("Introduza duas notas: ");
    scanf("%f %f", &n1, &n2);

    if (!(n1 >= 0 && n1 <= 20))
    {
        printf("Nota 1 inválida\n");
        return 1;
    }

    if (!(n2 >= 0 && n2 <= 20))
    {
        printf("Nota 2 inválida\n");
        return 1;
    }

    media = (n1 + n2) / 2;

    if (media < 9.5)
    {
        printf("Classificação: %.2f\nEstado: REPROVADO\n", media);
    }
    else
    {
        printf("Classificação: %.2f\nEstado: APROVADO\n", media);
    }

    return 0;
}
