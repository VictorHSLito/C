/*Crie um programa que contenha um array de float contendo 10 elementos. Imprima
o endereço de cada posição desse array.*/

#include <stdio.h>

int main () {
    float array[10];
    float *p = array;
    printf("O endereco de cada posicao desse array eh:\n");

    for(int i = 0; i < 10; i++) {
        printf("Endereco [%d]: %p\n", i, &p[i]);
    }

}