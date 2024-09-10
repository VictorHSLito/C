/*Escreva uma função que receba como parâmetro dois vetores, A e B, de tamanho
N cada. A função deve retornar o ponteiro para um vetor C de tamanho N alocado
dinamicamente, em que C[i] = A[i] * B[i].*/

#include <stdio.h>
#include <stdlib.h>

int *alocaVetor(int v[], int v2[], int tamanho) {
    int *p = malloc(tamanho*sizeof(int));
    for (int i = 0; i < tamanho; ++i) {
        p[i] = v[i] * v2[i];
    }
    return p;
}

int main()
{
    int num, *vetor;
    printf("Digite um numero: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("Numero invalido!");
        exit(1);
    }
    int vetor1[num], vetor2[num];

    for (int i = 0; i < num; ++i) {
        vetor1[i] = rand() % 100;
        vetor2[i] = rand() % 100;
    }

    vetor = alocaVetor(vetor1, vetor2, num);

    for (int i = 0; i < num; i++)
    {
        printf("%d ", vetor[i]);
    }
    
    free(vetor);
    vetor = NULL;
        
    return 0;
}
