/*Crie uma função que receba um vetor de tamanho N e ordene os seus valores.*/

#include <stdio.h>


void ordena_vetor (int vetor[], int tamanho) {
    int aux;
    for (int i = 0; i < tamanho-1; i++) {
        for (int j = 0; j < tamanho - 1; j++) {
            if (vetor[j] > vetor[j+1]) {
            aux = vetor[j+1];
            vetor[j+1] = vetor[j];
            vetor[j] = aux;
            }
        }  
    }
}


int main () {
    int n;
    printf("Qual sera o tamanho do vetor? ");
    scanf("%d", &n);

    int numeros[n];

    printf("Digite os valores: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &numeros[i]);
    }
    ordena_vetor(numeros, n);

    for (int i = 0; i < n; i++) {
        printf("%d ", numeros[i]);
    }
}