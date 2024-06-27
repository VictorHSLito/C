/*Faça uma função que receba, por parâmetro, uma matriz A contendo seis linhas
e seis colunas. Essa função deve retornar, por referência, a soma dos elementos da
sua diagonal principal e da sua diagonal secundária.*/

#include <stdio.h>


int calcula_soma (int matriz[][3]) {
    int soma = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i == j) {
                soma+= matriz[i][j];
            }
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i + j == 2) {
                soma+= matriz[i][j];
            }
        }
    }
    
    return soma;
}



int main () {
    int matriz[3][3], i, j, resultado;

    printf("Digite os elementos da matriz: ");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
    resultado = calcula_soma(matriz);
    printf("%d", resultado);
}