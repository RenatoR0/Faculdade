#include <stdio.h>
#include <math.h>

int main(void) {
  
  double num, val1, val2;
  printf("Insira o número aqui: \n");
  scanf("%lf", &num);

  if (num >=0){
    val1 = pow(num,2);
    val2 = sqrt(num);

    printf("%lf ao quadrado: %lf \nRaiz quadrada de %lf: %lf \n", num, val1, num, val2);

  } else {
    printf("Número nulo ou negativo");
  }

system ("pause");

return 0;
}