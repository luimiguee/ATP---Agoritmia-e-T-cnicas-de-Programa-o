#include <stdio.h>

int main() {
    int n_diarias;
    float total;

    printf("Digite o número de diárias: ");
    scanf("%d", &n_diarias);

    
    if (n_diarias < 15) {
        total = (n_diarias * 80) + (n_diarias * 4);
    }
    else if (n_diarias < 20) {   // já sabemos que é >= 15
        total = (n_diarias * 80) + (n_diarias * 2.80);
    }
    else {  // restante: >= 20
        total = (n_diarias * 80) + (n_diarias * 1.50);
    }

    printf("Total a pagar: R$ %.2f\n", total);

    return 0;
}
