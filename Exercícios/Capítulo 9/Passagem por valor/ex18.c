/*Faça uma função que receba como parâmetro o valor de um ângulo em graus e
calcule o valor do seno desse ângulo usando a sua respectiva série de Taylor:
sen x = somatório de n = 0 até n = 5 de [(-1)^n/(2n+1)!]x^2n + 1 = x - x³/3! + x^5/5! + ...
em que x é o valor do ângulo em radianos. Considere π = 3.1414592 e n variando
de 0 até 5.*/

#include <stdio.h>
#include <math.h>

#define PI 3.1414592


int fatorial(int valor){
    int i, fatorial = 1;
    for(i = 1; i <= valor; i++)
        fatorial *= i;
    return fatorial;
}

float converte (int num) {
    float x;
    x = num*PI/180.0;
    return x;
}

float taylor (int angulo) {
    float angulo_radiano, soma = 0;
    angulo_radiano = converte(angulo);

    for (int i = 0; i < 6; i ++) {
        soma = soma + (pow(-1, i) / fatorial(2*i + 1))*pow(angulo_radiano, 2*i + 1);
    }
    return soma;
}

int main () {
    int angulo;
    float resultado;
    printf("Digite um angulo em graus: ");
    scanf("%d", &angulo);
    resultado = taylor(angulo);
    printf("O seno desse angulo eh de: %f", resultado);
}   