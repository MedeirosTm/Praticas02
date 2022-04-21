/*
Faça um programa em C que leia um número inteiro e imprima o caractere correspondente na tabela ASCII.
*/

#include <stdio.h>

int main(){

  int numero = 0;

  printf("Digite um número: ");
  scanf("%d", &numero);

  printf("O caractere correspondente na tabela de ASCII é: %c", numero);

  return 0;
}