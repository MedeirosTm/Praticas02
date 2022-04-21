/*
Faça um programa em C que leia o valor da hora de trabalho e o total de horas trabalhadas no mês e calcule o salário bruto, o salário líquido, e os impostos descontados. Considere IR igual a 25% e INSS igual a 11%.
*/

#include <stdio.h>
const int IR = 25;
const int INSS = 11;

int main(){

  float valor_hora, total_horas, salario_bruto, salario_liquido, impostos;

  printf("Insira o valor da sua hora de trabalho: ");
  scanf("%f", &valor_hora);
  printf("Insira a quantidade de horas trabalhadas: ");
  scanf("%f", &total_horas);

  salario_bruto = valor_hora * total_horas;
  impostos = (salario_bruto*(IR+INSS))/100;
  salario_liquido = salario_bruto - impostos;

  printf("\nCom o valor da hora de trabalho sendo %.2f, e o total de horas trabalhadas sendo %.1f, tem se um salário líquido de: %.2f cujo qual foram retirados %.2f em impostos do salário bruto de %.2f.", valor_hora, total_horas, salario_liquido, impostos, salario_bruto);

  return 0;
}