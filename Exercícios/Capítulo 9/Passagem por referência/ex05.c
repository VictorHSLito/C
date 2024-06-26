/*Escreva uma função que calcule o desvio-padrão d de um vetor V contendo n
números*/

#include <stdio.h>
#include <math.h>


void desvio (int vetor[], int tamanho) {
    float resultado = 0, media = 0, somatorio = 0;
    for (int i = 0; i < tamanho; i++) {
        media += vetor[i];
    }
    media = media/tamanho;
    for (int i = 0; i < tamanho; i++) {
        somatorio += pow(vetor[i] - media, 2);
    }
    resultado = sqrt(somatorio/tamanho-1);
    printf("O desvio padrao desse vetor eh de %f", resultado);
}


int main () {
    int vetor[5];
    printf("Digite 5 numeros: ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &vetor[i]);
    }
    desvio(vetor, 5);
    return 0;
}