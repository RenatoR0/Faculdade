#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define LET 26

int main() {
int V[LET], i, j, aux;
srand(time(NULL));

for (j = 0; j < LET; j++) {
  V[j] = 65 + rand() % 26;
}

for (i = 0; i < LET; i++) {
  for (j = 0; j < LET - 1-i; j++) {
    if (V[j + 1] < V[j]) {
    aux = V[j];
    V[j] = V[j + 1];
    V[j + 1] = aux;
    }
  }
}

for (j = 0; j < LET; j++) {
printf("%c ", V[j]);
}
return 0;
}