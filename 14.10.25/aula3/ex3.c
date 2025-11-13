#include <stdio.h>
#include <unistd.h>

// Writes a string to standard output
void ft_putstr(char *str) {
  unsigned int i = 0;
  while (str[i] != '\0') {
    write(1, &str[i], 1);
    i++;
  }
}

int main() {
  int depart, num_h_trab;
  float vencimento, sal_hora;
  char nm_utilizador[256];

  printf("Introduza o número de horas trabalhadas: ");
  scanf("%d", &num_h_trab);

  if (num_h_trab < 0 || num_h_trab > 8) {
    printf("Número de horas trabalhadas inválido\n");
    return 1;
  }

  else {

    switch (depart) {
    case 19:
      sal_hora = 10.30;
      break;
    case 20:
      sal_hora = 15.75;
      break;
    case 21:
    case 22:
    case 23:
      sal_hora = 20.10;

      break;
    case 24:
      sal_hora = 25.20;
      break;
    case 25:
      sal_hora = 30.30;
      break;
    default:
      printf("Departamento inválido\n");
      return 1;
    }
    printf("Introduza o nome do funcionário: ");
    scanf("%255s", nm_utilizador);

    printf("Introduza o departamento do funcionário: ");
    scanf("%d", &depart);
  }
  vencimento = num_h_trab * sal_hora;
  printf("\nFuncionário: %s\n", nm_utilizador);
  printf("Departamento: %d\n", depart);
  printf("Horas trabalhadas: %d\n", num_h_trab);
  printf("O vencimento do funcionário é de %.2f €\n", vencimento);

  return 0;
}
