//Nome 1: Francisco Siles Martins; Matrícula: 2020002294
//Nome 2: Renato da Silva Rocha; Matrícula: 2020029411
//Link do vídeo: https://youtu.be/mDFiC03FgGg

#include <stdio.h>

int main(void) {
  int i, j, k = 0, l = 0, p = 0, A=1, B=2,C=3,D=4,$=50;
  int saldo;
  char mat[10][21], enter;

  printf("Esteira vazia \n");
  for(i=0; i<10; i++) {
    for(j=0; j<20; j++) {
      mat[i][j] = 95;
      printf("%c ", mat[i][j]);
    }
    printf("\n");
  }
  
  printf("Fases de Transformação \n");
  for(l=0; l<10; l++) {
    //A
    for(p=0; p<6; p++) {  
      getchar();
      mat[l][p] = 65;
      mat[l][p-1] = 95;
      for (i=0; i<10; i++) {
        for (j=0; j<20; j++) {
        printf ("%c ", mat[i][j]);
      }
      printf("\n");
      }
    }

    //B
    printf("Você chegou na Fase B da esteira %d", l+1);
     for(p=6; p<11; p++) {
       getchar();
       mat[l][p] = 66;
       mat[l][p-1]=95;
       for (i=0; i<10; i++) {
         for (j=0; j<20; j++) {
         printf ("%c ", mat[i][j]);
       }
       printf("\n");
       }
     }

   //C
    printf("Você chegou na Fase C da esteira %d", l+1);
     for(p=11; p<15; p++) {
       getchar();
       mat[l][p] = 67;
       mat[l][p-1]=95;
       for (i=0; i<10; i++) {
         for (j=0; j<20; j++) {
         printf ("%c ", mat[i][j]);
       }
       printf("\n");
       }
     }

   //D
    printf("Você chegou na Fase D da esteira %d", l+1);
     for(p=15; p<19; p++) {
       getchar();
       mat[l][p] = 68;
       mat[l][p-1]=95;
       for (i=0; i<10; i++) {
         for (j=0; j<20; j++) {
         printf ("%c ", mat[i][j]);
       }
       printf("\n");
       }
     }

   //$    
    for(p=19; p<20; p++) {
      getchar();
      mat[l][p] = 36;
      mat[l][p-1]=95;
     for (i=0; i<10; i++) {
       for (j=0; j<20; j++) {
         printf ("%c ", mat[i][j]);
       }
       printf("\n");
      }
      printf("Você chegou na Fase Final da esteira %d \n", l+1);
      A=1*(l+1);
      B=2*(l+1);
      C=3*(l+1);
      D=4*(l+1);
      $=50*(l+1);
      printf(" Saldo: \n A=%d \n B=%i \n C=%i \n D=%i \n $=%i \n", A,B,C,D,$);      
    }
  }

  saldo = (A*2) + (B*3) + C + (D/2) + ($/10);
  printf("O saldo total entre A, B, C, D e $ é: %d", saldo);

  return 0;
}