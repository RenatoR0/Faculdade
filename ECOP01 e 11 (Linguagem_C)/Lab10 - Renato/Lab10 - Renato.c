#include <stdio.h>
#include <time.h>

void inicializa_Vet(int vet1[25]){
  int i,j;
  for(i=0; i<25; i++){
    vet1[i]=rand()%100+1; 
    for(j=0; j<i; j++){
      if(vet1[i]==vet1[j]){
      i--;
      }
    }
  }
}

void imprime_Vet(int vet2[25]){
  int i;
  for(i=0; i<25; i++){
    printf("%d ", vet2[i]); 
  }
}

void bubble(int vet3[], int tam)
{
    int i, j, aux;

    for(i = 0; i < tam; i++)
    {
        for(j = 0; j < tam - 1 - i; j++)
        {
            if(vet3[j+1] < vet3[j])
            {
                aux = vet3[j];
                vet3[j] = vet3[j+1];
                vet3[j+1] = aux;
            }
        }
    }
}

int busca_Binaria(int vet[], int chave, int ini, int fim){
  int meio = (ini+fim)/2;

    if (vet[meio] == chave)
      return meio;
      if (ini >= fim)
        return -1;
      else
      if(vet[meio] < chave)
        return busca_Binaria(vet, chave, meio +1, fim);
      else 
      return busca_Binaria(vet, chave, ini, meio-1);
}

int main(void) {
  int vet[25];
  int chave, pos;

  srand(time(NULL));
  printf("Vetor desordenado:\n");
  inicializa_Vet(vet);
  imprime_Vet(vet);
  printf("\nVetor Ordenado:\n");
  bubble(vet,25);
  imprime_Vet(vet);
  printf("\n");
  do{
    printf("\nEntre com um valor para ser buscado ou com -1 para cancelar a ação:\n");
    scanf("%d", &chave);

    if(chave >- 1){
      pos = busca_Binaria(vet, chave, 0, 24);
      if(pos == -1)
      printf("Elemento inexistente\n");
      else
      printf("Elemento localizado na posição %d \n", pos);
    }
  }while (chave != -1);

  return 0;
}