/*
Faça um programa em C que leia um número inteiro e imprima a tabuada de multiplicação.
*/

#include <stdio.h>

int main(){

 int numero = 0;
 int i = 0;

  printf("Digite um número que deseja obter a tabuada:");
  scanf("%d", &numero);

  for (i=1; i<=10; i++){
    int resultado = numero * i;
    printf("\n%d X %d = %d\n", numero, i, resultado);
    
  }

  return 0;
}