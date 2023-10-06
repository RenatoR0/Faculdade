#include <stdio.h>

int main(void) 
{
  float gra, rad;

  printf("Digite o angulo em graus: ");
  scanf("%f", &gra);

  rad = gra * 3.14159265 / 180;
  printf("%f graus = %f radianos\n", gra, rad);

  system("pause");
  return 0;
}
