/*
Faça um programa em C que leia a largura e o comprimento de um terreno em metros e calcule a sua área em hectares (1 hectare = 10.000 m²).
*/

#include <stdio.h>

int main(){

  float largura, comprimento = 0;

  printf("Digite a largura e o comprimento do seu terreno:\n");
  scanf("%f", &largura);
  scanf("%f", &comprimento);

  float area = largura * comprimento;
  float hectare = area/10000;

  printf("O total da área do terreno em hectares é de: %.2f", hectare);
  

  return 0;
}