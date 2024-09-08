/*Escreva uma função que receba como parâmetro um valor N e retorne o ponteiro
para uma matriz alocada dinamicamente contendo N linhas e N colunas. Essa
matriz deve conter o valor 1 na diagonal principal e 0 nas demais posições.*/

#include <stdio.h>
#include <stdlib.h>

int **alocaMatriz(int tamanho) {
    int **aux = (int **) malloc(tamanho*sizeof(int));
    if (aux == NULL) {
        printf("Nao foi possivel alocar memoria");
        exit(1);
    }

    for (int i = 0; i < tamanho; i++) {
        aux[i] = (int *) malloc(tamanho*sizeof(int));
    }

    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {
            if (i == j) {
                aux[i][j] = 1;
            }
            else {
                aux[i][j] = 0;
            }
        }
    }

    return aux;
}

int main()
{
    int num, **matriz;
    printf("Digite um numero: ");
    scanf("%d", &num);
    if (num <= 0) {
        printf("Impossivel alocar memoria para o numero digitado!");
        return 1;
    }

    matriz = alocaMatriz(num);

    for (int i = 0; i < num; i++) {
        for (int j = 0; j < num; j++) {
            printf("%d ", matriz[i][j]);
        }
    printf("\n");
    }
    
    free(matriz);

    return 0;
}
