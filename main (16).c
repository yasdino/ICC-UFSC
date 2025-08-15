#include <stdio.h>

int main(void) 
{
  int votos, a = 0, b = 0, c = 0, nulos = 0, brancos = 0, total = 0;
   
   printf("Informe os votos digitando um valor entre de 1 a 5 em cada linha. Informe 0 (zero) para finalizar e ver o resultados.\n");
   
   do {
      scanf("%d", &votos);
      
      switch(votos) {
         case 1:
            a++;
            total++;
            break;
         case 2:
            b++;
            total++;
            break;
         case 3:
            c++;
            total++;
            break;
         case 4:
            nulos++;
            total++;
            break;
         case 5:
            brancos++;
            total++;
            break;
         case 0:
            break;
         default:
            printf("Opção inválida.\n");
            break;
      }
      
   } while(votos != 0);
   
   printf("Votos candidato 1: %d\n", a);
   printf("Votos candidato 2: %d\n", b);
   printf("Votos candidato 3: %d\n", c);
   printf("Votos nulos: %d\n", nulos);
   printf("Votos brancos: %d\n", brancos);
   printf("Total de votos: %d\n", total);
   
   return 0;
}