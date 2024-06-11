/*Escreva uma função que receba por parâmetro a altura e o raio de um cilindro
circular e retorne o volume desse cilindro. O volume de um cilindro circular é
calculado por meio da seguinte fórmula:
V = π * raio² * altura,
em que π = 3.1414592*/

#include <stdio.h>

#define PI 3.1414592

float calcula_volume (float raio, float altura) {
    float resultado;

    resultado = PI*(raio*raio)*altura;

    return resultado;
}

int main () {
    float altura, raio, volume;

    printf("Digite o raio e a altura do cilindro: ");
    scanf("%f %f", &raio, &altura);
    
    volume = calcula_volume(raio, altura);

    printf("O volume do cilindro circular eh: %f", volume);
}