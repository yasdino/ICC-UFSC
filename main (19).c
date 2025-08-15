#include <stdio.h>

int main(void) {
  float peso, altura, IMC;
  printf ("Informe o peso:\n");
  scanf ("%f", &peso);

  printf ("Informe a altura:\n");
  scanf ("%f", &altura);
  
  IMC = peso/(altura*altura);

  if (IMC < 18.5)
  {printf ("abaixo do peso!\n");}

  else if (IMC >= 18.5 && IMC < 25)
  {printf ("peso normal!\n");}

  else if (IMC >= 25 && IMC < 30)
  {printf ("acima do peso\n");}

  else if (IMC >= 30)
  {printf ("obeso!");}
  
  return 0;
}