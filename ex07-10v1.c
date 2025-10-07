#include <stdio.h>

int main()
{

float nota1,nota2;
printf("Digite a nota 1:\n");
scanf("%f", &nota1);
printf("Digite a nota 2:\n");
scanf("%f",  &nota2);

printf("  Media = %.2f\n", (nota1 +nota2)/ 2);
 return 0;
}