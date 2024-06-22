/*Faça uma função que receba um inteiro N como parâmetro. Calcule e retorne o
resultado da seguinte série S:
S = 2/4 + 5/5 + 10/6 + ... + (N² + 1)/(N + 3)*/ 

#include <stdio.h>

float somatorio (int num);

int main () {
    int num;
    float resultado;
    printf("Digite um numero para o somatorio: ");
    scanf("%d", &num);
    resultado = somatorio(num);
    printf("O resultado do somatorio vale: %f", resultado);
    return 0;
}

float somatorio (int num) {
    float soma = 0;
    for (int i = 1; i <= num; i++) {
        soma+= ((i)*(i) + 1.0)/(i + 3.0);
    }
    return soma;
}