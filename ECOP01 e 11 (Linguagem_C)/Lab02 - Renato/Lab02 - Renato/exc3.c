#include <stdio.h>
#include <math.h>

int main(void) {

  double a, b, c, dis, x, y;

    printf("Insira aqui os valores de a, b, e c:\n");
    scanf("%lf %lf %lf", &a, &b, &c);
    printf("Insira os pontos x e y:\n");
    scanf("%lf %lf", &x, &y);

    dis = (a*x + b*y + c)/ sqrt(a*a + b*b); 

    printf("A distância do ponto (%.0lf, %.0lf) até a reta é: %.3lf", x, y, dis);

    system("pause");

  return 0;
}