#include <stdio.h>

int main(void) {

int a, b, c;
printf("Insira o valor dos lados: \n");
scanf("%d %d %d", &a, &b, &c);

if (((a+b) <= c) || ((b+c) <= a) || ((c+a) <= b)) {
  printf(" Triângulo Inválido \n");
} else if ((a == b) && (b == c)){
  printf("Triângulo Equilátero");
} else if ((a == b) || (b == c) || (a == c)) {
  printf("Triãngulo Isóceles");
} else if ((a != b) && (b != c) && (c != a)) {
  printf("Triângulo Escaleno");
}

system ("pause");

return 0;
}