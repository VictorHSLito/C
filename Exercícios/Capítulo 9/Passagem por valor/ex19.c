/*Faça uma função que receba como parâmetro o valor de um ângulo em graus e
calcule o valor do cosseno desse ângulo usando a sua respectiva série de Taylor:
cos x = somatório de n = 0 até n = 5 de [(-1)^n/(2n)!]x^2n = x - x²/2! + x^4/4! + ...*/


#include <stdio.h>
#include <math.h>

#define PI 3.1414592

int fatorial(int valor){
    int i, fatorial = 1;
    for(i = 1; i <= valor; i++)
        fatorial *= i;
    return fatorial;
}

float conversor (int num) {
    float x = num*PI/180.0;
    return x;
}

float taylor (int angulo) {
    float angulo_convertido, soma = 0;
    angulo_convertido = conversor(angulo);

    for (int i = 0; i < 6; i ++) {
        soma = soma + (pow(-1, i) / fatorial(2*i))*pow(angulo_convertido, 2*i);
    }
    return soma;
}


int main () {
    int angulo;
    float resultado;
    printf("Digite um angulo em graus: ");
    scanf("%d", &angulo);
    resultado = taylor(angulo);
    printf("O cosseno do angulo digitado vale: %f", resultado);
}