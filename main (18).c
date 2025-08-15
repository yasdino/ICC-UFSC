#include <stdio.h>

int main(void) 
{
  int a, b, c;
  
  printf("Informe o tamanho do lado A:\n");
  scanf("%d", &a);

  printf("Informe o tamanho do lado de B:\n");
  scanf("%d", &b);

  printf("Informe o tamanho do lado de C:\n");
  scanf("%d", &c);

  if((a < (b + c)) && (b < (a + c)) && (c < (a + b))){
    if((a == b) && (b == c)){
    printf("equilátero");
    }
    else{
      if((a == b) || (a == c) || (b == c)){
      printf("isósceles");
    }
      else{
        if ((a != b) && (b != c) && (a != c)){
      printf("escaleno");
      }
        else{
          if ((a == b) && (b == c)){
        printf("equilátero");
        }
          }
      }
    }
  }else{
      printf("não é triângulo");
  }
  
  return 0;
}