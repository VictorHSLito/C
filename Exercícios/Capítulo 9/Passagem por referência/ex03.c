/*Escreva uma função que receba um array de 10 elementos e retorne a sua soma.*/

#include <stdio.h>

void soma (float array[], int tamanho) {
    float resultado = 0;
    for (int i = 0; i < tamanho; i++) {
        resultado += array[i];
    }
    printf("O resultado da soma de todos os elementos desse vetor eh: %f", resultado);
}

int main () {
    float vetor[10];
    printf("Digite 10 valores: ");
    for (int i = 0; i < 10; i++) {
        scanf("%f", &vetor[i]);
    }
    soma(vetor, 10);
    return 0;
}
