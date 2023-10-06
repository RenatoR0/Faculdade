#include <stdio.h>

int main(void){
  int mat[3][3], i=0, j=0, a=0;
  int vetC[3], e=0;
  int soma0 = 0, soma1 = 0, soma2 = 0;
  for (i=0; i<3; i++){
    for (j=0; j<3; j++){
      printf("Digite aqui o elemento da linha %d e coluna %d\n", i+1, j+1);
      scanf("%d ", &e);
      mat[i][j] = e;  
      
    }
    if(mat[i][0]){
      soma0 = soma0 + mat[i][0];
    }
    if(mat[i][1]){
      soma1 = soma1 + mat[i][1];
    }
    if(mat[i][2]){
      soma2 = soma2 + mat[i][2];
    }
  }
  printf("A matriz é: \n");
  for (i=0; i<3; i++){
    for (j=0; j<3; j++){
      printf("[%d] ", mat[i][j]);     
      
    }
    printf("\n");
  }
  printf("O array é: \n");
  for(a=0; a<3; a++){
    switch (a){
      case 0: vetC[a] = soma0;
      break;
      case 1: vetC[a] = soma1;
      break;
      default: vetC[a] = soma2;
      
    }
    printf("[%d] ", vetC[a]);
  }


  return 0;
}