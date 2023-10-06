#include <stdio.h>

int main(void) 
{
  float dolar, real, cambio;

  printf("Digite o valor em dolares:\n ");
  scanf("%f", &dolar);

  printf("Digite o valor da taxa de câmbio atual:\n");
  scanf("%f", &cambio);

  real = dolar * cambio;
  printf("Com a taxa de câmbio atual valendo %f, o valor em reias é de %f", cambio, real);

  system("pause");
  return 0;
}