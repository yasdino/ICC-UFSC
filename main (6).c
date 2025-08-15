#include <stdio.h>

int main(void) {

  int u[8], w[9], v[8], i, j, k=0;

  printf("Informe os 8 valores para o vetor u, 1 em cada linha.\n");
  for(i=0; i<8; i++){
  scanf("%d", &u[i]);
  }
  
  printf("Informe os 9 valores para o vetor w, 1 em cada linha.\n");
  for(i=0; i<9; i++){
  scanf("%d", &w[i]);
  }
  
  for(i=0; i<8; i++){
    for(j=0; j<9; j++){
    if(u[i]==w[j]){
      v[k] = u[i];
      k++;
      }
    }
  }
  for(i=0; i<k; i++){
  printf("%d,", v[i]);
  }
  
  return 0;
}