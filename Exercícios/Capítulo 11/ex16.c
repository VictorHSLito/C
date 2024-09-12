/*Escreva uma função que receba como parâmetro uma matriz A contendo N linhas
e N colunas, e um vetor B de tamanho N. A função deve retornar o ponteiro para
um vetor C de tamanho N alocado dinamicamente, em que C é o produto da
matriz A pelo vetor B.*/

#include <stdio.h>
#include <stdlib.h>

int *produtoVetor(int **matriz, int vetor[], int tamanho) {
    int *p = malloc(tamanho*sizeof(int));
    if (p == NULL) {
        printf("Erro ao alocar memoria!\n");
        exit(1);
    }
    for (int i = 0; i < tamanho; i++) {
        p[i] = 0;
        for (int j = 0; j < tamanho; j++) {
            p[i] += matriz[i][j] * vetor[j];
        }
    }

    return p;
}

int main() {
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);
    if (num <= 0) {
        printf("Valor invalido!");
        exit(1);
    }
    int **mat, vet[num], *C;

    for (int i = 0; i < num; i++) {
        vet[i] = rand() % 10;
    }

    mat = (int**) malloc(num*sizeof(int));
    for (int i = 0; i < num; i++) {
        mat[i] = (int*) malloc(num*sizeof(int));
    } 

    for (int i = 0; i < num; i++) {
        for (int j = 0; j < num; j++) {
            mat[i][j] = rand () % 10;
        }
    }

    C = produtoVetor(mat, vet, num);

    for (int i = 0; i < num; i++) {
        printf("%d ", C[i]);
    }

    free(C);
    C = NULL;
    return 0;
}
