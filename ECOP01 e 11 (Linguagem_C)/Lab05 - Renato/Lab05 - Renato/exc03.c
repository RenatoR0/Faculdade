#include <stdio.h>

int main(void) {
  int mat[5][5]={11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35};
  int i, j;
  int dpri=0, dsec=0, dif; 

  for(i=0;i<5;i++){
    for(j=0;j<5;j++){
      if(i==j){
        dpri= mat[i][j]+dpri;
      }
      if ((i+j) == 4) {
        dsec= mat[i][j] + dsec;            
        }
    }
  }
      printf("A soma da diagonal principal é [%d], da secundária é [%d] \n", dpri, dsec);
  dif = dpri - dsec;
  printf("A diferença entre a diagonal principal com a secundária: %d", dif);
  
return 0;
}