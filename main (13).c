#include <stdio.h>

int main(void) {
  int a, b, i, n, primo;

  printf("Informe dois valores de um intervalo para análise dos números primos:\n");
  scanf("%d%d", &a, &b);
  
  printf("Números primos do intervalo:\n");
  
  for(i = a; i <= b; i++){
    if(i == 0 || i == 1){
      primo = 0;
    } 
    else{
      primo = 1;
      for(n = 2; n < i; n++){
        if(i % n == 0){
          primo = 0;
        }
      }
    }
    if(primo == 1){
      printf("%d\n", i);
    }
  }
  return 0;
}