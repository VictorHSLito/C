/*Escreva uma função que receba um valor inteiro positivo N por parâmetro e retorne
o ponteiro para um vetor de tamanho N alocado dinamicamente. Se N for
negativo ou igual a zero, um ponteiro nulo deverá ser retornado.*/

#include <stdio.h>
#include <stdlib.h>

int *alocaVetor(int num) {
    int *vetor;
    if (num <= 0) {
        return NULL;
    }

    vetor = malloc(num*sizeof(int));

    for (int i = 0; i < num; i++) {
        vetor[i] = rand() % 1000;
    }

    return vetor;
}

int main() {
    int num, *p;

    printf("Digite um numero: ");
    scanf("%d", &num);

    p = alocaVetor(num);

    if (p != NULL) {
        for (int i = 0; i < num; i++) {
        printf("%d ", p[i]);
        }
    }
    
    free(p);
    p = NULL;
    return 0;
}
