#include<stdio.h>
#include<stdlib.h>

int main(void) {
  int ney=0, hul=0, ro=0, bra=0, nul=0;
  int vt;
do{
  printf("\n Candidatos e seus códigos: \n Neymar: 10 \n Hulk: 20 \n Ricardo Oliveira: 30 \n Branco: 0 \n Nulo: Qualquer outro código\n Insira seu voto: \n");
  scanf("%d", &vt);
  switch (vt){
    case 12345:
    printf("\n Votação encerrada. O resultado foi:\n Neymar: %d \n Hulk: %d \n Ricardo Oliveira: %d \n Branco: %d \n Nulo: %d \n", ney, hul, ro, bra, nul);
    break;
    case 0:
    bra++;
    system("clear");
    printf("Você votou branco. Vote Novamente. \n"); break;
    case 10:
    ney++;
    system("clear");
    printf("Você votou no Neymar. Vote Novamente. \n"); break;
    case 20:
    hul++;
    system("clear");
    printf("Você votou no Hulk. Vote Novamente. \n"); break;
    case 30:
    ro++;
    system("clear");
    printf("Você votou no Ricardo Oliveira. Vote Novamente. \n"); break;  
    default: 
    nul++;system("clear");
    printf("Você votou Nulo. Vote Novamente. \n"); break;
    
  }
} while (vt!=12345); 

return 0;
}