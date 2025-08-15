#include <stdio.h>

int main(void) 
{

  int i, n;
  
  printf("Digite números para descobrir os seus divisores, -1 para sair.\n");
  
  do{
    scanf("%d", &n);
      if(n != -1){
        printf("\n%d: ", n);
      }
     for(i=1; i<=n; i++){
       if(n%i == 0)
       {
         printf("%d, ", i);
       }
     }
    printf("\n\n");
  }
  while(n != -1);
  return 0;
}