/*Escreva uma função que receba um array contendo a nota de 10 alunos e retorne
a média dos alunos.*/

#include <stdio.h>

float calcula_media (float vetor[], int tamanho) {
    float resultado;
    for (int i = 0; i < tamanho; i ++) {
        resultado += vetor[i];
    }
    return resultado/tamanho;
}

int main () {
    float notas[10], media;
    
    printf("Digite a nota de 10 alunos: ");
    for (int i = 0; i < 10; i++) {
        scanf("%f", &notas[i]);
    }
    media = calcula_media(notas, 10);
    printf("A media final dos alunos eh de %f", media);
    return 0;
}
