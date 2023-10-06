#include <stdio.h>
#include <math.h>

int main(void) {
int anoI=1995, anoF, i, j, k;
float per=1.5/100, sal=2000, nper;

printf("Insira o ano atual: ");
scanf("%i", &anoF);
i = anoF - anoI;
  for(j=1;j<=i; j++){
  nper = per*j;
  sal=sal+(nper*sal);
  }
printf("O salario do ano %d é R$%.2f. \n", anoF, sal);


  return 0;
}