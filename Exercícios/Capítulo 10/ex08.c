/*Crie uma função que receba dois parâmetros: um vetor e um valor do mesmo tipo
do vetor. A função deverá preencher os elementos de vetor com esse valor. Não
utilize índices para percorrer o vetor, apenas aritmética de ponteiros.*/

#include <stdio.h>


void funcao (int *array, int numero) {
    for (int i = 0; i < 5; i++) {
        *(array + i) = numero;
    }

    for (int i = 0; i < 5; i++) {
        printf("%d ", *(array+i));
    }
}


int main () {
    int vetor[5], numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);
    funcao(vetor, numero);
    return 0;
}