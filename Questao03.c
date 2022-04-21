/*
Faça um programa em C que leia uma temperatura em graus Celsius e calcule o valor correspondente em graus Fahrenheit (°F = 9/5°C + 32).
*/

#include <stdio.h>

int main(){

  float C, F = 0;

  printf("Escreva o valor em Celsius que será convertido para Fahrenheit:\n");
  scanf("%f", &C);

  F = (C*9/5)+32;

  printf("O valor de %.f Celsius convetido para Fahrenheit é de: %.1f", C, F);

  return 0;
}