/*
Faça um programa em C que leia dois números inteiros e imprima o quociente e o resto da divisão entre eles.
*/

#include <stdio.h>

int main(){

  int numero1, numero2 = 0;

  printf("Digite dois números para obter seu quociente e resto de divisão:\n");
  scanf("%d", &numero1);
  scanf("%d", &numero2);

  int quociente = numero1/numero2;
  int resto_da_divisao = numero1%numero2;

  printf("Quociente entre %d e %d é: %d\nO resto da divisão entre %d e %d é: %d", numero1, numero2, quociente, numero1, numero2, resto_da_divisao);

  return 0;
}