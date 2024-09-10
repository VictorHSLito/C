/*Escreva uma função que receba como parâmetro um valor N e retorne o ponteiro
para uma matriz alocada dinamicamente contendo N linhas e N colunas. Essa
matriz deve conter o valor 1 na diagonal secundária e 0 nas demais posições.*/

#include <stdio.h>
#include <stdlib.h>

int **alocaMatriz(int valor) {
    int i, j = 0;
    int** matriz = (int **) malloc(valor*sizeof(int));
    if (matriz == NULL) {
        printf("Nao foi possivel alocar memoria!");
        exit(1);
    }

    for (int i = 0; i < valor; i++) {
        matriz[i] = (int *) malloc(valor*sizeof(int));
    }

    for (i = 0; i < valor; i++) {
        for (j = 0; j < valor; j++) {
            if ((i + j) == valor - 1) {
                matriz[i][j] = 1;
            }
            else {
                matriz[i][j] = 0;
            }
        }
    }

    return matriz;
}

int main()
{
    int num, **matriz;
    printf("Digite um valor: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("Valor invalido!");
        exit(1);
    }

    matriz = alocaMatriz(num);

    for (int i = 0; i < num; i++) {
        for (int j = 0; j < num; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
