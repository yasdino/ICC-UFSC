#include <stdio.h>

int main(void) 
{
  int n1, n2, resto;
  
  printf("Informe dois números para determinar o MDC:\n");
  scanf("%d%d", &n1, &n2);

  do{
    resto = n1 % n2;
    n1 = n2;
    n2 = resto;
  }
    while (resto != 0);
  
  printf("%d", n1);
  return 0;
}