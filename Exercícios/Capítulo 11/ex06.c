/*Escreva um programa que aloque dinamicamente uma matriz de inteiros. As dimensões
da matriz deverão ser lidas do usuário. Em seguida, escreva uma função
que receba um valor e retorne 1, caso o valor esteja na matriz, ou retorne 0, no
caso contrário.*/

#include <stdio.h>
#include <stdlib.h>

int verificaValor(int **matriz, int linha, int coluna, int valor) {
    for(int i = 0; i < linha; i++) {
        for (int j = 0; j < coluna; j++) {
            if (matriz[i][j] == valor) {
                return 1;
            }
        }
    }
    return 0;
}

int main(){
    int **matriz, linha, coluna, valor, resultado; 

    printf("Digite a quantidade de linhas e colunas: ");
    scanf("%d %d", &linha, &coluna);

    matriz = (int **) malloc(linha*sizeof(int*)); //Primeiro aloca memória para a quantidade de linhas
    for (int i = 0; i < linha; i++) {
        matriz[i] = (int *) malloc(coluna*sizeof(int)); // Depois aloca memória para as colunas de acordo com as linhas    
    }

    for (int i = 0; i < linha; ++i) {
        for (int j = 0; j < coluna; ++j) {
            matriz[i][j] = rand() % 1000;
        }
    }

    printf("Digite um valor: ");
    scanf("%d", &valor);

    printf("Resultado: %d", resultado = verificaValor(matriz, linha, coluna, valor));
    return 0;
}
