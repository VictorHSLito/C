/*Crie uma função que receba como parâmetro um vetor e o imprima. Não utilize
índices para percorrer o vetor, apenas aritmética de ponteiros.*/

#include <stdio.h>

void imprime (int *array) {
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(array+i));
    }
}

int main () {
    int array[5];

    printf("Digite 5 elementos para o vetor: ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", array+i);
    }
    imprime(array);
    return 0;
}