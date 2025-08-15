#include <stdio.h>

int main(void) 
{
  int n = 0, linha = 0, coluna = 0;
  printf("Informe um número para o tamanho do quadrado: ");
  scanf("%d", &n);

  for(linha = 1; linha <= n; linha++){
    printf("\n");
    for(coluna = 1; coluna <= n; coluna++){
      printf("*");
    }
  }
  return 0;
}