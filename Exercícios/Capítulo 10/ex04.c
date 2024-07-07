/*Crie um programa que contenha uma matriz de float contendo três linhas e três
colunas. Imprima o endereço de cada posição dessa matriz.*/

#include <stdio.h>

int main () {
    float matriz[3][3];
    printf("o endereco de cada posicao da matriz eh:\n");

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Endereco da posicao [%d][%d]: %p\n", i, j, &matriz[i][j]);
        }
    }

    //Utilizando ponteiros
    /*float matriz[3][3];
    float *p = &matriz[0][0];
    printf("o endereco de cada posicao da matriz eh:\n");

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Endereco da posicao [%d][%d]: %p\n", i, j, (p + i*3 + j));
        }
    }*/

}