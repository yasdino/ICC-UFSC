#include <stdio.h>
#include <math.h>

int main(void) 
{
  int i, n, m;
  float s, soma = 0;
  
  printf("Digite o intervalo N, M.\n");
  scanf("%d%d", &n, &m);
  
  for(i=n; i<=m; i++){
      s = 1/sqrt(i);
      soma = soma + s;
  }
  printf("%.2f", soma);
  return 0;
}