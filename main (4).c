#include <stdio.h>

int main(void) {

  float v[20], media, acima=0;
  int i, n=0;
  
  printf("Informe os valores , 1 em cada linha. Informe 0 (zero) para finalizar.\n");
  
  do{
    scanf("%f", &v[n]);
      if(v[n]==0){
        break;
      }
      acima += v[n];
      n++;
  }
    while(n<20);

  media = acima/n;
  printf("Media: %.2f\n", media);
  
  printf("Valores acima da media: ");
    for (i = 0; i < n; i++){
      if(v[i]>media){
        printf("%.1f, ", v[i]);
      }
    }
  return 0;
}