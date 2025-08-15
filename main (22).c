#include <stdio.h>

int main(void)

{
  float x, y;
  printf("Digite dois números: \n");
  scanf ("%f", &x);
  scanf ("%f", &y);

  if (y > x)
  {printf ("O segundo número é maior que o primeiro.");}

  else if (y < x)
  {printf ("O segundo número é menor que o primeiro.");}

  else if (y == x)
  {printf ("O segundo número é igual ao primeiro.");}
  
  return 0;
}