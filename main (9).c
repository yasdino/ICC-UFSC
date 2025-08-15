#include <stdio.h>
#include <math.h>
int main(void) 
{
  float a, b, produto, soma, qd, raiz, seno;
  
  printf("Digite 2 números, um em cada linha:\n");
  scanf("%f%f", &a, &b);

  soma = a+b;
  produto = a*(b*b);
  qd = a*a;
  raiz = sqrt((a*a)+(b*b));
  seno = sin((a-b)*M_PI/180);

  printf("%.1f\n%.1f\n%.1f\n%.1f\n%.1f\n", soma, produto, qd, raiz, seno);
  
  return 0;
}