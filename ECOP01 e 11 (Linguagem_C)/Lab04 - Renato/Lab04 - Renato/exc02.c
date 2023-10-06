#include<stdio.h>

int main(void) {
  int f, i;
  int f1=0, f2=1, n=0;

printf("Insira seu número: \n");
scanf("%d", &f);

if (f==1){
  printf("O primeiro número da sequencia de Fibonacci é: %d", f1);
}else if (f==2) {
  printf("O %dº número da sequencia de Fibonacci é: %d", f, f2);
}else if (f>=3) {
  for (i=3; i<=f; i++){
    n = f1 + f2;
    f1 = f2;
    f2 = n;
}
printf("O %dº número da sequencia de Fibonacci é: %d", f, n);
}
return 0;
}