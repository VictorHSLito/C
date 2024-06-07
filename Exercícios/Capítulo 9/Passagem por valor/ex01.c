/*Escreva uma função que receba por parâmetro dois números e retorne o maior
deles.*/
#include <stdio.h>

int maior_numero (int x, int y) {
    if (x > y) {
        return x;
    }
    else {
        return y;
    }
}

int main () {
    int n1, n2, maior;
    printf("Digite 2 numeros: ");
    scanf("%d %d", &n1, &n2);

    maior = maior_numero(n1, n2);
    printf("O maior numero digitado eh: %d", maior);
}