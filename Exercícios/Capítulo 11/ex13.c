/*Escreva um programa que leia um inteiro N e crie uma matriz alocada dinamicamente
contendo N linhas e N colunas. Essa matriz deve conter o valor 0 na
diagonal principal, o valor 1 nos elementos acima da diagonal principal e o valor
−1 nos elementos abaixo da diagonal principal.*/

#include <stdio.h>
#include <stdlib.h>

int **alocaMemoria(int valor) {
    int **p = (int**) malloc(valor*sizeof(int));
    if (p == NULL) {
        printf("Nao foi possivel alocar memoria");
        exit(1);
    }

    for (int i = 0; i < valor; i++) {
        p[i] = (int *) malloc(valor*sizeof(int));
    }

    for (int i = 0; i < valor; i++) {
        for (int j = 0; j < valor; j++)
        {
            if (i == j) {
                p[i][j] = 0;
            }
            else if (i < j) {
                p[i][j] = 1;
            }
            else if (i > j) { 
                p[i][j] = -1;
            }
        }
    }
    
    return p;
}

int main() { 
    int num, **matriz;
    printf("Digite um numero: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("Numero invalido!");
        exit(1);
    }

    matriz = alocaMemoria(num);

    for (int i = 0; i < num; i++) {
        for (int j = 0; j < num; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < num; i++) {
        free(matriz);
    }
    free(matriz);
    matriz = NULL;

    return 0;
}
