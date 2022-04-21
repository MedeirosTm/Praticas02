/*
Faça um programa em C que leia as coordenadas de dois pontos (x1, y1) e (x2, y2) e calcule a distância entre eles (d = raiz_quadrada((x2-x1)² + (y2-y1)²)).
*/

#include <stdio.h>
#include <math.h>

int main(){

  float x1, y1, x2, y2 = 0;

  printf("Digite os valores do ponto A(x,y):\n");
  scanf("%f", &x1);
  scanf("%f", &y1);

  printf("Digite os valores do ponto B(x,y):\n");
  scanf("%f", &x2);
  scanf("%f", &y2);

  float x_result = x2 - x1;
  float y_result = y2 - y1;
  float distancia = sqrt((x_result*x_result) + (y_result*y_result));

  printf("A distância entre os pontos A e B, é de: %.2f", distancia);

    
  return 0;
}