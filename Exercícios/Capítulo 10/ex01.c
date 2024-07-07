/*Escreva um programa que contenha duas variáveis inteiras. Compare seus endereços
e exiba o maior endereço.*/

#include <stdio.h>

int main () {
    int *p, *p1, x, y;

    p = &x;
    p1 = &y;

    printf("Endereco apontado por p: %p\n", p);
    printf("Endereco apontado por p1: %p\n", p1);

    if (p1 > p) {
        printf("O endereco de p1 eh maior do que de p!");
    }
    else {
        printf("O endereco de p eh maior que o de p1!");
    }
    return 0;
}