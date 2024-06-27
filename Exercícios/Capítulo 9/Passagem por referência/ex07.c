/*Crie uma função que receba uma matriz A contendo 10 linhas e 10 colunas e
retorne a soma dos seus elementos.*/

#include <stdio.h>

int calcula_soma (int matriz[][10]) {
    int soma = 0;

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            soma += matriz[i][j];
        }
    }
    return soma;
}


int main () {
    int matriz[10][10], resultado = 0;

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
    resultado = calcula_soma(matriz);
    printf("A soma de todos os elementos dessa matriz vale: %d", resultado);
}