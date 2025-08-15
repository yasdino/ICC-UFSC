#include <stdio.h>
#include <math.h>

int main(void) 
{
  float a, b, c, x, x1, x2, delta;
  
  printf("Informe os coeficientes da equação.\n");
  scanf("%f%f%f", &a, &b, &c);

  delta = (b*b) - 4*a*c;

  if(delta>0){
    x1 = (-(b) + (sqrt(delta)))/(2*a);
    x2 = (-(b) - (sqrt(delta)))/(2*a);
    printf("x' = %.2f\n", x1);
    printf("x'' = %.2f\n", x2);
  }
  else if(delta==0){
    x = -b/2*a;
    printf("x' = %.2f\n", x);
  }
  else{
    printf("Sem solução.");
  }
  
  return 0;
}