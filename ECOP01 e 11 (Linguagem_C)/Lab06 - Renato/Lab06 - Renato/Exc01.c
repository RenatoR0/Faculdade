#include <stdio.h>
#include <string.h>
#define des 0.1

  int main(){
  char produto[40];
  float val, vfin, desc;

  printf("Insira o nome do produto escolhido: \n");
  gets(produto);

  printf("Insira o valor do %s: \n", produto);
  scanf("%f", &val);
  
  vfin = val-(des * val);
  desc = des * val;

  printf("Nome do produto: %s \nPreço sem desconto: %.2f \nDesconto aplicado no pagamento à vista: %.2f \nPreço a ser pago a vista: %.2f \n", produto, val, desc, vfin);
  
  return 0;
  }