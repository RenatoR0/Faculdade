#include <stdio.h>

int main(void) {
float mat[4][3];
float soma;
int i, j;

for(i=0;i<4;i++)
{
  for(j=0;j<3;j++){
    printf("Insira os valores para linha %d e coluna %d: \n ", i, j);
    scanf("%f", &mat[i][j]);
  }
}
for(i=0;i<4;i++)
{
  for(j=0;j<3;j++){
    soma=soma+ mat[i][j];
  }
}
printf("A soma dos valores inseridos é: %f \n", soma);
return 0;
}