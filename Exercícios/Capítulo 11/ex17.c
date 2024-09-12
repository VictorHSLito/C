/*Escreva uma função que receba como parâmetro uma matriz A contendo N linhas
e N colunas. A função deve retornar o ponteiro para um vetor B de tamanho N
alocado dinamicamente, em que cada posição de B é a soma dos números daquela
coluna da matriz.*/

#include <stdio.h>
#include <stdlib.h>

int *calculaVetor(int **matriz, int tamanho) {
    int *p = (int *) malloc(tamanho*sizeof(int));
    if (p == NULL) {
        printf("Nao foi possivel alocar memoria!");
        exit(1);
    }
    for (int i = 0; i < tamanho; i++) {
        p[i] = 0;
        for (int j = 0; j < tamanho; j++) {
            p[i] += matriz[j][i];
        }
    }

    return p;
}

int main() {
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("Numero invalido");
        exit(1);
    }

    int **matriz, *vet;
    matriz = (int**)malloc(num*sizeof(int));
    if (matriz == NULL) {
        printf("Nao foi possivel alocar memoria!");
        return 1;
    }
    for (int i = 0; i < num; i++) {
        matriz[i] = (int*) malloc(num*sizeof(int));
    }
    
    for (int i = 0; i < num; i++) {
        for(int j = 0; j < num; j++) {
            matriz[i][j] = rand() % 10;
        }
    }

    vet = calculaVetor(matriz, num);

    for (int i = 0; i < num; i++) {
        printf("%d ", vet[i]);
    }    
    
    free(vet);
    for (int i = 0; i < num; i++) {
        free(matriz[i]);
    }
    free(matriz);
    return 0;
}
