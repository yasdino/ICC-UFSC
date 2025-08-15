#include <stdio.h>

int main(void) 
{
  char sexo;
  printf ("Digite F ou M: ");
  scanf ("%c", &sexo);

  if (sexo == 'F' || sexo == 'f') {
    printf ("Feminino");
  } else if (sexo == 'M' || sexo == 'm') {
    printf ("Masculino");
  } else {
    printf ("Sexo inválido");
  }
  
  return 0;
}