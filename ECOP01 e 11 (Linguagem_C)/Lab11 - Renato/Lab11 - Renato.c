#include <stdio.h>
#include <time.h>

struct carta {
  int num;
  char naipe;
};

typedef struct carta carta_t;
carta_t baralho[40], mão1[3], mão2[3];

void inicializa_bar(carta_t baralho[40]){
  int i;
  for(i=0; i<40; i++){
    baralho[i].num = i % 10 + 1;
  }
  for(i=0; i<40; i++)
  {
    if(i<10){
      baralho[i].naipe = 67; //Copas
    } else if(i>=10 && i<20){
      baralho[i].naipe = 79; //Ouros
    } else if(i>=20 && i<30){
      baralho[i].naipe = 80; //Paus
    } else if(i>=30 && i<40){
      baralho[i].naipe = 69; //Espadas
    }
  }
}


void embaralha_bar(carta_t baralho[40]){
int i, auxNum, n1, n2; 
char auxNai;
 
  for(i=0; i<40; i++) {   
   
   n1 = rand() % 40;
   n2 = rand() % 40;
  
   auxNai = baralho[n1].naipe;
   auxNum = baralho[n1].num;
  
  baralho[n1].num = baralho[n2].num;
  baralho[n2].num = auxNum;
  baralho[n1].naipe = baralho[n2].naipe;
  baralho[n2].naipe = auxNai;   
 }
}



int main() {
  
  carta_t baralho[40];

  inicializa_bar(baralho);

  srand(time(NULL));
  embaralha_bar(baralho);

  printf("Jogador 1 recebe: \n");
  printf("%d %c \n", baralho[0].num, baralho[0].naipe);
  printf("%d %c \n", baralho[1].num, baralho[1].naipe);
  printf("%d %c \n\n", baralho[2].num, baralho[2].naipe);
  printf("Jogador 2 recebe: \n");
  printf("%d %c \n", baralho[3].num, baralho[3].naipe);
  printf("%d %c \n", baralho[4].num, baralho[4].naipe);
  printf("%d %c \n\n", baralho[5].num, baralho[5].naipe);
  printf("Carta Virada: %d %c \n\n", baralho[6].num, baralho[6].naipe);
return 0;
}