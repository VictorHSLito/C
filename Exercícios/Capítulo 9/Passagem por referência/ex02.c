/*Escreva uma função para o cálculo do volume e área de uma esfera
V = 4/3 π + r3,
A = 4 π * r2
em que π = 3.1414592. O valor do raio r deve ser passado por parâmetro, e os
valores calculados devem ser retornados por referência.*/

#include <stdio.h>
#include <math.h>

#define PI 3.1414592

void area_volume (float *area, float *volume, float raio) {
    *volume = (4.0/3.0)*PI + pow(raio, 3);
    *area = 4*PI*pow(raio, 2);
}

int main () {
    float area = 0, volume = 0, raio;
    printf("Digite o valor do raio da esfera: ");
    scanf("%f", &raio);
    area_volume(&area, &volume, raio);
    printf("A area dessa esfera vale %f e o seu volume vale %f", area, volume);
}   