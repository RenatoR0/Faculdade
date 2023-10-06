#include <stdio.h>

int main(void) {
  float matA[2][2], e;
  int i, j;
  float matB[2][2], p;
  int l, c;
  float matSoma[2][2];
  int m, n;
  float matSub[2][2];
  int r, o;
  float matC[2][2], k;
  int f, t;
  char a;  
  
  //Matriz A
  for(i=0; i<2; i++)
  {
    for(j=0; j<2; j++)
    {
      printf("Para a matriz A, digite aqui o elemento da linha %d e da coluna %d\n", i+1, j+1);
      scanf("%f", &e);
      matA[i][j] = e;
      
    }
    printf("\n");
  }
  printf("A=\n");
  for(i=0; i<2; i++)
  
  {
    for(j=0; j<2; j++)
    {
      printf("[%.2f]", matA[i][j]);
    }
    printf("\n");
  }

  //Matriz B
  for(l=0; l<2; l++)
  {
    for(c=0; c<2; c++)
    {
      printf("\n Para a matriz B, digite aqui o elemento da linha %d e coluna %.2d \n", l+1, c+1);
      scanf("%f", &p);
      matB[l][c] = p;    
    }
    printf("\n");
  }
  printf("B=\n");
  for(l=0; l<2; l++)
  {
    for(c=0; c<2; c++)
    {
      printf("[%.2f]", matB[l][c]);
    }
    printf("\n");    
    }

    printf("Qual opção você escolhe? Obs: para cada alternativa digite a letra equivalente. \n a - somar as duas matrizes; \n b - subtrair a primeira matriz da segunda; \n c - adicionar uma constante as duas matrizes; \n");
    scanf(" %c", &a);
    
  //Soma
  if((a == 65) || (a == 97))
  {
    
    for(m=0; m<2; m++)
    {
      for(n=0; n<2; n++)
      {        
      matSoma[m][n]=matA[m][n]+matB[m][n];
      }
    }
    
    //Imprimir Matrizes
  printf("Você quer ver a matriz resultante da sua escolha? Digite s para sim e n para não:\n");


  scanf(" %c", &a);
  if((a == 115) || (a == 83))
  {
    printf("\nA soma das matrizes A e B é: \n");
    for(m=0; m<2; m++)
    {
      for(n=0; n<2; n++)
      {
      printf("[%.2f]", matSoma[m][n]);
      }
      printf("\n");
    }
  }else {
    printf("\nObrigado por utilizar o programa.");
  }
  }
  //Subtração
  else if((a == 66) || (a == 98))
  {
    
    for(r=0; r<2; r++)
    {
      for(o=0; o<2; o++)
      {        
      matSub[r][o]=matA[r][o]-matB[r][o];
      }
    }
    
  //Imprimir Matrizes
  printf("Você quer ver a matriz resultante da sua escolha? Digite s para sim e n para não: \n"); 
  scanf(" %c", &a);
  if((a == 83) || (a == 115))
  {
    printf("\nA subtração das matrizes A e B é: \n");
    for(r=0; r<2; r++)
    {
      for(o=0; o<2; o++)
      {
      printf("[%.2f]", matSub[r][o]);
      }
      printf("\n");
    }
    
  }else {
    printf("\nObrigado por utilizar o programa.");
  }
  }
  //Adição da Constante k
  else if((a == 67) || (a == 99))
  {
    printf("\nQual constante real k você quer multiplicar às matrizes? Digite abaixo: \n");
    scanf("%f", &k);
    
    for(f=0; f<2; f++)
    {
      for(t=0; t<2; t++)
      {        
      matC[f][t]=k*matA[f][t];
      }
    }
        
    
    for(f=0; f<2; f++)
    {
      for(t=0; t<2; t++)
      {        
      matC[f][t]=k*matB[f][t];
      }
    }
    
    //Imprimir Matrizes
  printf("Você quer ver a matriz resultante da sua escolha? Digite s para sim e n para não: \n");
  scanf(" %c", &a);
  if((a == 83) || (a == 115))
  {

    //Imprimindo a matriz A*k
    printf("\nA matriz A vezes a constante %.2f é: \n", k);
    for(f=0; f<2; f++)
    {
      for(t=0; t<2; t++)
      {
      printf("[%.2f]", matC[f][t]);
      }
      printf("\n");
    }

    //Imprimindo a matriz B*k
    printf("\nA matriz B vezes a constante %.2f é: \n", k);
    for(f=0; f<2; f++)
    {
      for(t=0; t<2; t++)
      {
      printf("[%.2f]", matC[f][t]);
      }
      printf("\n");
    }
  }else {
    printf("\nObrigado por utilizar o programa.");
  }
  }  
  return 0;
}