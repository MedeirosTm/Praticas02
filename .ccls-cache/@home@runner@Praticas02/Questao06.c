/*
Faça um programa em C que leia o valor de compra, o ano de fabricação e o ano de depreciação e calcule o valor depreciado de um veículo (depreciação = (ano de depreciação - ano de fabricação) x 0,01 x valor de compra).
*/

#include <stdio.h>

int main (){

  float valor_compra, valor_depreciado = 0;
  int ano_fabricacao, ano_depreciacao  = 0;

  printf("Digite o valor da compra, ano de fabricação e o ano de depreciação do produto:\n");
  scanf("%f", &valor_compra);
  scanf("%d", &ano_fabricacao);
  scanf("%d", &ano_depreciacao);

  valor_depreciado = (ano_depreciacao - ano_fabricacao) * 0.01 * valor_compra;

  printf("O valor depreciado é de: %.2f", valor_depreciado);

  return 0;
}