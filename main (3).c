#include <stdio.h>

int main(void) {
  int n;
  printf("Informe o tamanho do vetor: ");
  scanf("%d", &n);
  
  int i, j, v[n];
  printf("Informe os valores para o vetor (1 em cada linha):\n");
    for (i = 0; i < n; i++) {
      scanf("%d", &v[i]);
    }
  for(i = 0; i < n; i++){
    for(j = 0; j < n; j++)
        printf("%d, ", v[j]*v[i]);
        printf("\n");
  }
  return 0;
}