#include <stdio.h>
#include <math.h>
//x2 + 3x - 1

int main(void) 
{
 float result,x;
printf ("digite o valor de x:");
scanf("%f",&x);

result = pow (x,2)+3*x-1;

printf ("resultado: %.2f", result);
  return 0;
}