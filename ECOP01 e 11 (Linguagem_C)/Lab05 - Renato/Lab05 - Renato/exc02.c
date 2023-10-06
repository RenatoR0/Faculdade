#include <stdio.h>

int main(void) {
  int vetA[6];
  int vetB[6];
  int i1, i2;

  for(i1=0;i1<6;i1++){
    printf("Insira os valores para o vetor A: \n");
    scanf("%d", &vetA[i1]);
  }
  for(i2=0;i2<6;i2++){
    printf("Insira os valores para o vetor B: \n");
    scanf("%d", &vetB[i2]);
  }
  for(i1=0;i1<6;i1++){
    for(i2=0;i2<6;i2++){
      if (vetA[i1] == vetB[i2]){
      printf("Os elementos em comum entre A e B são: %d \n",vetA[i1]);
      }  
    }
  } 
return 0;
}