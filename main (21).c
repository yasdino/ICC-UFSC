#include <stdio.h>

int main(void) 
{
  int x, y, z, maior, menor;
  printf("Informe um valor inteiro: \n");
  scanf ("%d", &x);

  printf("Informe um valor inteiro: \n");
  scanf ("%d", &y);

  printf("Informe um valor inteiro: \n");
  scanf ("%d", &z);

  if (x < y)
  {
    if ( x < z)
    menor = x;
   else
    menor = z;
  }
   else
  {
    if (y < z)
      menor = y;
    else
      menor = z;
  }

  if (x > y)
  {
    if ( x > z)
    maior = x;
   else
    maior = z;
  }
   else
  {
    if (y > z)
      maior = y;
    else
      maior = z;
  }
  
  printf ("O menor número é: %.1d\n", menor);
  printf ("O maior número é: %.1d\n", maior);

  
  return 0;
}