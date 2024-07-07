/*Crie um programa que contenha um array de inteiros contendo cinco elementos.
Utilizando apenas aritmética de ponteiros, leia esse array do teclado e imprima o
dobro de cada valor lido.*/

#include <stdio.h>

int main () {
    int array[5];
    int *p = array;
    
    printf("Digite os elementos do array: ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", p + i);
    }

    for (int i = 0; i < 5; i++) {
        printf("%d ", *(p + i)*2);
    }
}