/*Escreva um programa que contenha duas variáveis inteiras. Leia essas variáveis do
teclado. Em seguida, compare seus endereços e exiba o conteúdo do maior endereço.*/

#include <stdio.h>

int main () {
    int x, y, *p, *p1;
    printf("Digite o valor de x e de y: ");
    scanf("%d %d", &x, &y);

    p = &x;
    p1 = &y;

    printf("Endereco apontado por p: %p\n", p);
    printf("Endereco apontado por p1: %p\n", p1);

    if (p > p1) {
        printf("O endereco de p eh maior que de p1!\n");
        printf("Conteudo de p: %d", *p);
    }
    else {
        printf("O endereco de p1 eh maior que de p!\n");
        printf("Conteudo de p1: %d", *p1);
    }
}