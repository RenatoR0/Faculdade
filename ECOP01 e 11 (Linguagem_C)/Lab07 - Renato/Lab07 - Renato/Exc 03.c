#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define LET 5000

int main() {
int Vet1[LET], Vet2[LET];
int i, j, aux, menor;
int tInicio1,tFim1,tDec1,tInicio2,tFim2,tDec2;
srand(time(NULL));

tInicio1 = clock();
for (j = 0; j < LET; j++) {
  Vet1[j] = rand() % 5000;
}

for (i = 0; i < LET; i++) {
  for (j = 0; j < LET - 1-i; j++) {
    if (Vet1[j + 1] < Vet1[j]) {
    aux = Vet1[j];
    Vet1[j] = Vet1[j + 1];
    Vet1[j + 1] = aux;
    }
  }
}
tFim1 = clock();
tDec1 = (tFim1)-(tInicio1);

for (j = 0; j < LET; j++) {
printf("%d ", Vet1[j]);
}

tInicio2 = clock();
for (j = 0; j < LET; j++) {
  Vet2[j] = rand() % 5000;
}

for(i = 0; i < LET-1; i++){
  menor = i;
  for(j = i + 1; j < LET; j++)  {

  if(Vet2[j] < Vet2[menor])
  menor = j;
  }
  aux = Vet2[i];
  Vet2[i] = Vet2[menor];
  Vet2[menor] = aux;
}

for (j = 0; j < LET; j++) {
printf("%d ", Vet2[j]);
}

tFim2 = clock();
tDec2 = (tFim2)-(tInicio2);

printf("\n O tempo final do modelo 1 foi: %d \n O tempo final do modelo 2 foi: %d", tDec1,tDec2);
return 0;
}