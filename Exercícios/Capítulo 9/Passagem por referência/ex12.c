/*Escreva uma função que receba como parâmetro um vetor contendo N valores inteiros.
Essa função deve retornar, por referência, dois valores: a soma dos números
pares e ímpares.*/

#include <stdio.h>


void soma (int *numeros, int tamanho, int *pares, int *impares) {
    *pares = 0;
    *impares = 0;
    for (int i = 0; i < tamanho; i++ ) {
        if (numeros[i] % 2 == 0) {
            *pares += numeros[i];
        }
        else {
            *impares += numeros[i];
        }
    }
}

int main () {
    int n, pares, impares;
    printf("Esse vetor tera quantos numeros? ");
    scanf("%d", &n);
    int numeros[n];

    printf("Digite os numeros: ");

    for (int i = 0; i < n; i++) {
        scanf("%d", &numeros[i]);
    }
    soma(numeros, n, &pares, &impares);
    printf("A soma dos numeros pares desse vetor eh: %d\nE a de impares eh %d", pares, impares);
}