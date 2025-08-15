#include <stdio.h>

int main(void) 
{
  int nota1, nota2, nota3, frequência, média;
  printf("Informe a nota da prova1: \n");
  scanf("%d", &nota1);

  printf("Informe a nota da prova2: \n");
  scanf("%d", &nota2);

  printf("Informe a nota dos exercícios: \n");
  scanf("%d", &nota3);

  printf("Informe o percentual de frequência: \n");
  scanf("%d", &frequência);

  média = (nota1 + nota2 + nota3 / 3);

  if (média >= 6.0 && frequência >= 75)
    {printf("O aluno foi aprovado!");}
  
  else if (média > 3.0 || média < 6.0 && frequência >= 75)
    {printf("O aluno está em recuperação!");}

  else
    {printf("O aluno foi reprovado!");}
  
  return 0;
}