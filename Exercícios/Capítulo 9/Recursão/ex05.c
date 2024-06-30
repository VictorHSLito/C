/*Crie uma função recursiva que retorne a soma dos elementos de um vetor de inteiros.*/

#include <stdio.h>


int soma_vetor (int n, int *vetor) {
    if (n == 0) {
        return vetor[0];
    }
    return vetor[n] + soma_vetor(n-1, vetor);
}

int main () {
    int n;
    printf("Quantos elementos tem esse vetor? ");
    scanf("%d", &n);
    int vetor[n], resultado;
    printf("Digite os elementos do vetor: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
    }
    resultado = soma_vetor(n-1, vetor);
    printf("Resultado: %d", resultado);
}