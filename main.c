#include <stdio.h>

int main(void) {

  char a, A, g, G, s, S, combustivel;
  float litros, desconto1, p1, desconto2, p2, desconto3, p3, desconto4, p4;
  
  printf("Digite o combustível (A para álcool, G para gasolina ou S para sair) e a quantidade abastecida: \n");

  do{
  scanf("%c%f", &combustivel, &litros);
  if(combustivel=='a' || combustivel=='A'){
    if(litros<=20){
      desconto1=litros*6.58*0.05;
      p1 = litros*6.58-desconto1;
    printf("R$ %.2f\n", p1);
    }
    if(litros>20){
      desconto2=litros*6.58*0.08;
      p2 = litros*6.58-desconto2;
    printf("R$ %.2f\n", p2);
    }
  }
  if(combustivel=='g' || combustivel=='G'){
    if(litros<=20){
      desconto3=litros*7.11*0.04;
      p3 = litros*7.11-desconto3;
    printf("R$ %.2f\n", p3);
    }
    if(litros>20){
      desconto4=litros*7.11*0.06;
      p4 = litros*7.11-desconto4;
    printf("R$ %.2f\n", p4);
    }
  }
  }
    while(combustivel!='s' || combustivel!='S');
  
  return 0;
}