#include <stdio.h>

int main(void) 
{
  float dolar, real;

  printf("Digite o valor em dolares:\n ");
  scanf("%f", &dolar);
  printf("\n");

  real = dolar * 2.50;
  printf("%f dolares equivale a %f reais", dolar, real);

  system("pause");
  return 0;
}
