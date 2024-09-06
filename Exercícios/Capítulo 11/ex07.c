/*Faça uma função que retorne o ponteiro para um vetor de N elementos inteiros
alocados dinamicamente. O array deve ser preenchido com valores de 0 a N − 1*/

#include <stdio.h>
#include <stdlib.h>


int *alocaVetor(int num) {
    int *vetor;

    vetor = (int *) malloc(num*sizeof(int));
    for (int i = 0; i < num; i++) {
        vetor[i] = i;
    }

    return vetor;
}

int main()
{
    int *p, num;

    printf("Digite a quantidade de elementos: ");
    scanf("%d", &num);

    p = alocaVetor(num);
    
    for (int i = 0; i < num; i++) {
        printf("%d ", p[i]);
    }

    free(p);
    p = NULL;
    return 0;
}
