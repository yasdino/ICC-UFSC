#include <stdio.h>

int main(void) {

  int i, n;
  int v[10];
    for(n = 10; n < 29; n++){
      if(n%2 == 0)
      printf("%d,", n);}
  printf("\n");
  int b[10];
      for(i = 11; i < 30; i++){
        if(i%2 != 0)
        printf("%d,", i);
    }
  return 0;
}