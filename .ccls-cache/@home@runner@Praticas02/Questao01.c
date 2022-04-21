/*
Faça um programa em C que leia três números reais e imprima a média aritmética destes números.
*/

#include <stdio.h>

int main(){

  int numero1, numero2, numero3 = 0;

  printf("Escreva três valores para obter sua média aritmética:\n");
  scanf("%d", &numero1);
  scanf("%d", &numero2);
  scanf("%d", &numero3);

  float media = ( numero1 + numero2 + numero3 )/3;

  printf("%.2f", media);

  return 0;
}