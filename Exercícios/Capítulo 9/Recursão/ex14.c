/*Crie uma função recursiva que retorne o menor elemento em um vetor.*/

#include <stdio.h>

int retorna_menor (int *vetor, int tamanho) {
    if (tamanho == 0) {
        return vetor[tamanho];
    }
    int aux = vetor[tamanho];
    int menor = retorna_menor(vetor, tamanho-1);
    if (vetor[tamanho] > menor)
        return menor;
    return aux;
}

int main () {
    int n;
    printf("Qual o tamanho do vetor? ");
    scanf("%d", &n);

    int vetor[n], menor;
    printf("Digite os elementos do vetor abaixo: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
    }

    menor = retorna_menor(vetor, n-1);
    printf("O menor elemento desse vetor eh %d", menor);
}