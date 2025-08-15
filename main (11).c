#include <stdio.h>

int main(void) {

  int i = 0, j = 0, n = 0, count = 0;
  printf("Informe o tamanho do triângulo desejado: ");
  scanf("%d", &n);

  for(i=1;i<=n/2;i++){
      for(j=1;j<=n/2-i;j++){
          printf(" ");
      }
      for(count=1;count<=i;count++)
          printf("o");
      for(count=i-1;count>=1;count--)
      printf("o");
    
     printf("\n");
  }
  
  return 0;
}