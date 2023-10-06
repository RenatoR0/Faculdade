#include <stdio.h>

int main(void) {

  double fix, var, tot;

  printf("Insira seu salário fixo:");
  scanf("%lf", &fix);
  printf("Insira seu valor vendido no mês:");
  scanf("%lf", &var);

  tot = fix + (var * 0.15);

  printf("Salário Final = R$ %.2lf \n", tot);

   return 0;
}