/*Escreva uma função que receba como parâmetro duas matrizes, A e B, e seus
tamanhos. A função deve retornar o ponteiro para uma matriz C, em que C é o
produto da multiplicação da matriz A pela matriz B. Se a multiplicação das matrizes
não for possível, retorne um ponteiro nulo.*/

#include <stdio.h>
#include <stdlib.h>

int **alocaMatriz(int **matA, int **matB, int tamanho) {
    int **p = (int **) malloc(tamanho*sizeof(int));
    for (int i = 0; i < tamanho; i++) {
        p[i] = (int*)malloc(tamanho*sizeof(int));
    }
    if (p == NULL) {
        printf("Nao foi possivel alocar memoria!");
        exit(1);
    }

    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {
            p[i][j] = 0;
            for (int k = 0; k < tamanho; k++) {
                p[i][j] += matA[i][k] * matB[k][j];
            }
        }
    }

    return p;
}

int main() {
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);
    if (num <= 0) {
        printf("Numero invalido!");
        return 1;
    }

    int **matrizA, **matrizB, **matrizC;
    matrizA = (int**) malloc(num * sizeof(int*));
    matrizB = (int**) malloc(num * sizeof(int*));
    if (matrizA == NULL || matrizB == NULL) {
        printf("Nao foi possivel alocar memoria!");
        return 1;
    }
    for (int i = 0; i < num; i++) {
        matrizA[i] = (int*) malloc(num * sizeof(int));
        matrizB[i] = (int*) malloc(num * sizeof(int));
    }

    for (int i = 0; i < num; i++) { 
        for (int j = 0; j < num; j++) {
            matrizA[i][j] = rand() % 10;
            matrizB[i][j] = rand() % 10;
        }
    }

    matrizC = alocaMatriz(matrizA, matrizB, num);

    for (int i = 0; i < num; i++) {
        for (int j = 0; j < num; j++) {
            printf("%d ", matrizC[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < num; i++) {
        free(matrizA[i]);
        free(matrizB[i]);
        free(matrizC[i]);
    }

    free(matrizA);
    free(matrizB);
    free(matrizC);
    return 0;
}
