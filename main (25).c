#include <stdio.h>

int main(void) 
{
	float delta, a, b, c, x1, x2;

printf("Digite o valor de a:\n");
scanf("%f", &a);
printf("Digite o valor de b:\n");
scanf("%f", &b);
printf("Digite o valor de c:\n");
scanf("%f", &c);

delta = pow(b,2)- 4*a*c;

x1 = (-b + sqrt(delta))/ 2*a;
printf ("x1 será: %.4f\n", x1);

x2 = (-b - sqrt(delta))/2*a;
printf ("x2 será: %.4f\n", x2);
  
  return 0;
}