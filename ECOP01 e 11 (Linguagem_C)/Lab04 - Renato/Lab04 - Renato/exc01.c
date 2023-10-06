#include <stdio.h>

int main(void) {
int soma=0;
int i;
i=1;
  while (i <= 100){
    if(((i % 3)==0) || ((i % 5)==0)) {
      soma=soma+i;
    }
  i++;
  }
printf("A soma total é: %d \n", soma);
return 0;
}