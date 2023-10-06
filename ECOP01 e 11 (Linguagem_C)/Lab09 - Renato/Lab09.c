#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define VAZIO ' '
#define PAREDE '|'
#define OBSTACULO 'o'
#define JOGADOR '^'

void inicializa_Mapa (char campo[20][20]){
  int i=0,j=0;

  for(i=0;i<20;i++){
    for(j=0;j<20;j++){

      campo[i][j] = VAZIO;

      if ((j == 0) || (j == 19)){
        campo [i][j] = PAREDE;
      }
    }
  }
  for(i=0;i<20;i++){
    for(j=0;j<20;j++){
     printf("%c ", campo[i][j]);
    }
    printf("\n");
  }
}

void desenha_Mapa(char campo[20][20], int jogador){
  
  int i=0,j=0;
  
  for(i=0;i<20;i++){
    for(j=0;j<20;j++){
      if ((j==jogador) && (i==19)){
       printf("┴ ");
      } else {
      printf("%c ", campo[i][j]);
      }
    }
    printf("\n");
  }
}

void atualiza_Mapa(char mapa[20][20]){
  int i,j, posObs;
  if ((rand() % 100) < 50) {
    posObs = 1 + (rand() % 18);
    mapa[0][posObs] = OBSTACULO;
  }

  for (i = 18; i >= 0; i--){
    for (j = 1; j < 19; j++){
      mapa[i + 1][j] = mapa[i][j];
      if(i==0){
      mapa[i][j] = VAZIO;
      }
    }
  }
}

int main(void){

  int i,j;
  char dig=0, campo[20][20];
  int  col_jogador = 10;
  printf("Bem-vindo ao Jogo\nInstruções:\nA - Esquerda\nD - Direita\nW - Para cima\n\n");

  inicializa_Mapa(campo);
  
  while(campo[19][col_jogador] != OBSTACULO){

        dig = getchar();
    if((dig == 'a' || dig == 'A') && (col_jogador > 1)){

      col_jogador--;
      atualiza_Mapa(campo);
      desenha_Mapa(campo, col_jogador);

    }else if((dig == 'd' || dig == 'D') && (col_jogador < 18)){

      col_jogador++;
      atualiza_Mapa(campo);
      desenha_Mapa(campo, col_jogador);
      
    } else if((dig == 'w' || dig == 'W')){

      atualiza_Mapa(campo);
      desenha_Mapa(campo, col_jogador);
    }
  }
  printf("GAME-OVER");
  return 0;
}