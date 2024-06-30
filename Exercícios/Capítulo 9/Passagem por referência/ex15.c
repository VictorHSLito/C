/*Elabore uma função que receba um vetor contendo N valores e retorne por referência
o maior e o menor elemento desse vetor.*/

#include <stdio.h>


void retorna_valores(int vetor[], int tamanho, int *maior, int *menor) {
    *maior = *menor = vetor[0];

    for (int i = 1; i < tamanho; i++) {
        if (vetor[i] > *maior) {
            *maior = vetor[i];
        }
        else if (vetor[i] < *menor) {
            *menor = vetor[i];
        }
    }
}


int main () {
    int n, maior, menor;
    printf("Quantos elementos esse vetor tem? ");
    scanf("%d", &n);

    int numeros[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &numeros[i]);
    }

    retorna_valores(numeros, n, &maior, &menor);

    printf("O maior valor desse vetor eh %d e o menor eh %d", maior, menor);
}