/*Crie uma função recursiva que retorne a média dos elementos de um vetor de
inteiros.*/

#include <stdio.h>

float media_vetor (int n, int *vetor) {
    float media = 0;

    if (n == 0) {
        return media += vetor[0];
    }
    media += vetor[n];
    return media + media_vetor(n-1, vetor);
}

int main () {
    int n;
    printf("Quantos elementos esse vetor tem? ");
    scanf("%d", &n);

    int vetor[n];
    float resultado;
    printf("Digite os elementos desse vetor: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
    }

    resultado = media_vetor(n-1, vetor);
    printf("A media eh %f", resultado/n);
}