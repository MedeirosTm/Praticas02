/*
Faça um programa em C que leia o peso e a altura de uma pessoa e calcule o índice de massa corporal (imc = peso / altura²).
*/

#include <stdio.h>

int main(){

  float peso, altura, imc = 0;

  printf("Digite o seu peso e altura, respectivamente:\n");
  scanf("%f", &peso);
  scanf("%f", &altura);

  imc = peso / (altura * altura);

  printf("O seu imc é de: %.2f", imc);

  return 0;
}