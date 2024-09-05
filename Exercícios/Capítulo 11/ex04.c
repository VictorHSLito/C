/*Elabore um programa que leia do usuário o tamanho de um vetor a ser lido. Em
seguida, faça a alocação dinâmica desse vetor. Por fim, leia o vetor do usuário e o
imprima.*/

#include <stdio.h>
#include <stdlib.h>


void lerVetor(int *vetor, int tamanho) {
    printf("Digite os numeros do vetor: ");
    for (int i = 0; i < tamanho; ++i) {
        scanf("%d", &vetor[i]);
    }
}

void imprimeVetor(int *vetor, int tamanho) {
    printf("Os numeros desse vetor são:\n");
    for (int i = 0; i < tamanho; ++i) {
        printf("%d ", vetor[i]);
    }
}

int main()
{   
    int num;
    printf("Qual sera o tamanho do vetor?");
    scanf("%d", &num);
    int *p = (int *) malloc(num*sizeof(int));
    lerVetor(p, num);
    imprimeVetor(p, num);
    free(p);
    return 0;
}
