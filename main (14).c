#include <stdio.h>

int main(void) 
{
  float f = 0, c = 0;
      printf("Informe a temperatura em Fahrenheit para conversão. Digite -1 para sair.\n");
  do{
    scanf("%f", &f);
    if(f != -1){
    c = (5*(f - 32))/9;
    printf("%.1f°C\n", c);
    }
  }
  while(f != -1);
  return 0;
}