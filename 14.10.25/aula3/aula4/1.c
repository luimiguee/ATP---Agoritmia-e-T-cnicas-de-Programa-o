#include <stdio.h>

int main()
{


    int contador = 0 , num;

    printf(" Nº?");
    scanf("%d", &num);
    while (contador <= 20) {
        contador +=1;
        printf("%d\n",  contador + num);
    }
   
}