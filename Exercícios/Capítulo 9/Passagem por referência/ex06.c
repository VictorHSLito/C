/*Crie uma função que receba uma matriz A contendo cinco linhas e cinco colunas.
Calcule na própria matriz A a sua transposta (se B é a matriz transposta de A,
então A[i][j] = B[j][i]).*/

#include <stdio.h>

void tranposta (int matriz[][5]) {
    int temporario, i, j;
    for (i = 0; i < 5; i++) {
        for (j = i+1; j < 5; j++) {
            temporario = matriz[i][j];
            matriz[i][j] = matriz[j][i];
            matriz[j][i] = temporario;
        }
    }
}

int main () {
    int matriz[5][5];

    printf("Digite os elementos da matriz: ");
    
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
    tranposta(matriz);

    printf("Matriz tranposta: ");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", matriz[i][j]);
        }
    printf("\n");
    }
}