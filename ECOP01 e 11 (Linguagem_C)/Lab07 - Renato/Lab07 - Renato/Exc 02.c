#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define LET 26

int main() {
int Vet[LET];
int i, j, aux, menor;
srand(time(NULL));

for (j = 0; j < LET; j++) {
  Vet[j] = 97 + rand() % 26;
}

for(i = 0; i < LET-1; i++){
  menor = i;
  for(j = i + 1; j < LET; j++)  {

  if(Vet[j] > Vet[menor])
  menor = j;
  }
  aux = Vet[i];
  Vet[i] = Vet[menor];
  Vet[menor] = aux;
}

for (j = 0; j < LET; j++) {
printf("%c ", Vet[j]);
}
return 0;
}