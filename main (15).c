#include <stdio.h>

// Verifique quantos números são pares e quantos são ímpares de 10 números digitados.

int main(void)
{
  int par = 0, i = 0, num = 0;

  for(i = 1; i <= 10; i++){
    printf("Informe um número: ");
    scanf("%d", &num);
    if(num%2==0){
      par++;
    }
  }
  printf("Quantidade de números pares: %d\n", par);
  printf("Quantidade de números ímpares: %d\n", 10 - par);

  return 0;
}