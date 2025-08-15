#include <stdio.h>

int main(void) 
{
  float Chico = 1.5, Zé = 1.1;
  int ano = 0;

  while (Chico >= Zé){
    Chico += 0.02;
    Zé += 0.03;
    ano++;
    printf("Chico: %.2f\t Zé: %.2f\t Ano: %d\n", Chico, Zé, ano);
  }
  printf("Serão necessários %d anos para que Zé seja maior que Chico!\n", ano);
  
  return 0;
}