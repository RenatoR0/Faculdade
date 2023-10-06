#include <stdio.h>
#include <string.h>

int main(){
  char vogais[] = {'a','e','i','o','u','A','E','I','O','U'};  
  char str[101];
  int a=0, e=0, i=0, o=0, u=0;
  int j=0;

  puts("Insira a frase:");
  gets(str);
  printf("\n");

  for(j=0; j<strlen(str); j++){

    if(str[j]==vogais[0]||str[j]==vogais[5]){
      str[j] = 42;
      a++;
    }
    if(str[j]==vogais[1]||str[j]==vogais[6]){
      str[j] = 42;
      e++;
    }
    if(str[j]==vogais[2]||str[j]==vogais[7]){
      str[j] = 42;
      i++;
    }
    if(str[j]==vogais[3]||str[j]==vogais[8]){
      str[j] = 42;
      o++;
    }
    if(str[j]==vogais[4]||str[j]==vogais[9]){
      str[j] = 42;
      u++;
    }
  }
  printf("A nova frase fica:\n %s\n", str);
printf(" \n Letra 'a': %d vezes \n Letra 'e': %d vezes \n Letra 'i': %d vezes \n Letra 'o': %d vezes \n Letra 'u': %d vezes \n", a,e,i,o,u);
  return 0;
  }