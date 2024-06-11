/*Escreva uma função para o cálculo do volume de uma esfera
V = 4/3π * r³, em que π = 3.1414592 valor do raio r deve ser passado por parâmetro.*/

#include <stdio.h>
#include <math.h>

#define PI 3.1414592

float calcula_volume (float raio) {
    float resultado;

    resultado = (4.0/3.0*PI)*pow(raio, 3);

    return resultado;
}

int main () {
    float raio, volume;

    printf("Digite o valor do raio: ");
    scanf("%f", &raio);

    volume = calcula_volume(raio);

    printf("O volume da esfera vale: %f", volume);
}