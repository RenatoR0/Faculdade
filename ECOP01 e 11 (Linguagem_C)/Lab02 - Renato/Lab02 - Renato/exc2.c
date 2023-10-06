#include <stdio.h>

int main(void) {
  double raio1, per1, per2, per3, per4, per5;

    printf("Insira aqui o valor do raio:\n");
    scanf("%lf", &raio1);

    per1 = 2 * raio1 * 3.14159265;
    per2 = 2 * 3.14159265 * (raio1 + 1);
    per3 = 2 * 3.14159265 * (raio1 + 2);
    per4 = 2 * 3.14159265 * (raio1 + 3);
    per5 = 2 * 3.14159265 * (raio1 + 4);

  printf("O perímetro da primeira raia é de: %.5lf metros\n", per1);
  printf("O perímetro da segunda raia é de: %.5lf metros \n", per2);
  printf("O perímetro da terceira raia é de : %.5lf metros \n", per3);
  printf("O perímetro da quarta raia é de: %.5lf metros \n", per4);
  printf("O perímetro da quinta raia é de: %.5lf metros \n", per5);
  
  system("pause");

  return 0;
}