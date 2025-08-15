#include <stdio.h>

int main(void) 

{
  int mês;

  printf ("Digite o número do mês: ");
  scanf ("%d", &mês);

  switch (mês)
  {
    case 4:
    case 6:
    case 9:
    case 11:
      printf ("O mês tem 30 dias.");
    break;

    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
      printf ("O mês tem 31 dias.");
    break;
   
    case 2:
      printf ("O mês tem 28 ou 29 dias.");
    break;

    default:
      printf ("Não corresponde a um mês.");
  }
  
  return 0;
}