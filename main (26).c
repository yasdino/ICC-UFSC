#include <stdio.h>
#include <math.h>

int main(void) 
{
  float v_hr, qtd_hrs, salario_b, liq1, liq2, liq3, liq4, desconto_IR, IR, FGTS, descontos_total, d5, d10, d20;

  printf("Digite o quanto você recebe por hora: ");
  scanf("%f", &v_hr);

  printf("Digite a quantidade de horas trabalhadas esse mês: ");
  scanf("%f", &qtd_hrs);

  salario_b = v_hr * qtd_hrs;
  
      if(salario_b <= 900){
        printf("\nIsento de desconto.");
    }
    else if(salario_b <= 1500){
        printf("\nDesconto de 5%.");
    }
    else if(salario_b <= 2500){
        printf("\nDesconto de 10%.");
    }
    else if(salario_b > 2500){
      printf("\nDesconto de 20%.");
    }

    d5 = salario_b * 0.05;
    d10 = salario_b * 0.10;
    d20 = salario_b * 0.20;

      if(salario_b <= 900){
        printf("\nIsento de desconto.");
    }
    else if(salario_b <= 1500){
        printf("\nO desconto no IR será: %.2f", d5);
    }
    else if(salario_b <= 2500){
        printf("\nO desconto no IR será: %.2f", d10);
    }
    else if(salario_b > 2500){
      printf("\nO desconto no IR será: %.2f", d20);
    }

    FGTS = salario_b*0.11;
    printf("\nO valor a ser depositado pela empresa será: %.2f", FGTS);

    liq1 = salario_b + FGTS;
    liq2 = salario_b - d5 + FGTS;
    liq3 = salario_b - d10 + FGTS;
    liq4 = salario_b - d20 + FGTS;

      if(salario_b <= 900){
        printf("\nSeu salário líquido é: %.2f", liq1);
    }
    else if(salario_b <= 1500){
        printf("\nSeu salário líquido é: %.2f", liq2);
    }
    else if(salario_b <= 2500){
        printf("\nSeu salário líquido é: %.2f", liq3);
    }
    else if(salario_b > 2500){
      printf("\nSeu salário líquido é: %.2f", liq4);
    }

  return 0;
}