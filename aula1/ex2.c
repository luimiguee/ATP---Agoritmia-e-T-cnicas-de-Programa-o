    #include <stdio.h>
    float media;

     float  calcularmedia(float nota1, float nota2)

     {
        media =  (nota1 + nota2) / 2;
        return media;
     }
     int main(void)
     {
        float n1,n2;
        printf(" Introduza 1ª  nota ? \n");
        scanf("%f", &n1);
        printf(" Introduza a 2ª Nota?\n");
        scanf(" %f",  &n2);
        calcularmedia(n1,n2);
        if (!(media >= 9.5 )) {

        printf(" O Aluno está REPROVADO com media de :%.2f\n", media);
        }
        else {
                printf(" O Aluno está APROVADO com media de :%.2f\n", media);
        }   


     }