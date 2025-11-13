#include <stdio.h>
float areas,ba,al;


float calcularareatriangulo(float base, float altura)
{
    areas = (base * altura )/ 2;
    return areas;

}
int main()

{
    printf(" Valor da Base : ?\n ");
scanf("%f", &ba);
printf("Valor da  altura do Triangulo: ? \n");
scanf("%f", &al);
calcularareatriangulo(ba, al);

 printf(" A Area do triangulo = .2f\n");
}
