/*Elabore uma função que receba um vetor contendo N valores e retorne por referência
o maior elemento do vetor e o número de vezes que esse elemento ocorreu
no vetor.*/

#include <stdio.h>

void retorna_valores(int vetor[], int tamanho, int *maior, int *contador) {
    int aux = 1;
    *maior = vetor[0];
    for (int i = 1; i < tamanho; i++) {
        if (vetor[i] > *maior) {
            *maior = vetor[i];
            aux = 1;
        }
        else if (vetor[i] == *maior) {
            aux++;
        }
    }
    *contador = aux;
}


int main () {
    int n, maior, contador;
    printf("Quantos elementos esse vetor tem? ");
    scanf("%d", &n);

    int numeros[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &numeros[i]);
    }

    retorna_valores(numeros, n, &maior, &contador);

    printf("O maior valor desse vetor eh %d e ele apareceu %d vezes", maior, contador);
}