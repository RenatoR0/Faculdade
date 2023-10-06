#include <stdio.h>
#include <string.h>

int main(){
  char str[101];
  int j=0;
  printf("Insira a frase: \n");
  gets(str);

  for(j=0; j<strlen(str); j++){
    if ((str[j]>=65)&&(str[j]<=90)){
      str[j] = str[j] + 32;
      }
    else if((str[j]>=97)&&(str[j]<=122)){
      str[j] = str[j] - 32;
    }
  }  
  puts(str);
  return 0;
  }