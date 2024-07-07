/*Crie um programa que contenha um array contendo cinco elementos inteiros.
Leia esse array do teclado e imprima o endereço das posições contendo valores
pares.*/

#include <stdio.h>

int main () {
    int array[5];
    int *p = array;

    printf("Digite os 5 elementos do vetor: ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", p + i);
    }

    printf("Os enderecos dos elementos pares eh:\n");
    for (int i = 0; i < 5; i++) {
        if (*(p + i) % 2 == 0) {
            printf("Elemento: %d, Endereço: %p\n", *(p+i), p+i);
        }
    }
}