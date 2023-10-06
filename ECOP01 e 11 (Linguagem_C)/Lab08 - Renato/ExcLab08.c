#include <stdio.h>
#include <math.h>

int piso [10][10];

void inicializaMatriz(){
 int i,j;
  for(i=0; i<10; i++){
    for(j=0; j<10; j++){
      piso [i][j] = 0;
    }
  }
}

void imprimeMatriz(){
  int i,j;

  for(i=0; i<10; i++){
    for(j=0; j<10; j++){
      if (piso[i][j] == 0){
      printf("  ");
      }
      if (piso[i][j] == 1){
      printf("* ");
      };
    }
    printf("\n");
  }
}
void imprimeOpcoes(){
  printf("\n1. Caneta para baixo \n2. Caneta para cima \n3. Anda para esquerda \n4. Anda para direita \n5. Anda para cima \n6. Anda para baixo \n7. Termina Desenho\n Insira uma ação:\n");
}

int main(void) {
  int pos_caneta=0;
  int i=0,j=0;
  
  //caneta para baixo = 0

  inicializaMatriz();
  printf("Bem vindo ao robô desenhista!\nInsira os valores para realizar as ações:\n");
  
  int opc=0;
  imprimeOpcoes();
  for(i=0; i<10; i++){
    for(j=0; j<10; j++){
      while (opc !=7){
      
        scanf("%d", &opc);
        printf("\n");
        switch(opc){

          case 1: 
          if(pos_caneta == 1){
            printf("A caneta ja esta para baixo \n");
          } else{
            pos_caneta=1;
            printf("A caneta foi colocada para baixo \n");
          }
          imprimeOpcoes();
          break;
          case 2: 
          if(pos_caneta == 0){
            printf("A caneta ja esta para cima \n");
          } else{
            pos_caneta=0;
            printf("A caneta foi colocada para cima \n");
            }
          imprimeOpcoes();
          break;
          case 3: 
          if(j > 0){
            j--;
              if(pos_caneta)
              piso[i][j]= 1;
              imprimeMatriz();
          } else {
              printf("Operacao impossivel \n");
            }
            imprimeOpcoes();
          break;
          case 4: 
          if(j < 9){
            j++;
              if(pos_caneta)
              piso[i][j]= 1;
              imprimeMatriz();
          } else {
              printf("Operacao impossivel \n");
            }
            imprimeOpcoes();
          break;
          case 5: 
          if(i > 0){
            i--;
              if(pos_caneta)
              piso[i][j]= 1;
              imprimeMatriz();
           } else {
              printf("Operacao impossivel \n");
            }
            imprimeOpcoes();
          break;
          case 6: 
          if(i < 9){
            i++;
              if(pos_caneta)
              piso[i][j]= 1;
              imprimeMatriz();
          } else {
              printf("Operacao impossivel \n");
            }
            imprimeOpcoes();
          break;
          case 7: 
            printf("Desenho terminado \n");
            printf("Resultado final: \n");
            imprimeMatriz();
          break;
          default: printf("Ação negada. Insira um número válido");
          break;
        }
      }  
    }
  }
  return 0;
}