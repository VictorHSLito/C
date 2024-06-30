/*Crie uma função recursiva que receba um número inteiro N e imprima todos os
números naturais de 0 até N em ordem crescente.*/

#include <stdio.h>

int imprime_numeros (int n) {
    if (n == 0) {
        printf("%d ", n);
        return;
    }
    imprime_numeros(n-1);
    printf("%d ", n);
}

int main () {
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);
    imprime_numeros(n);
    return 0;
}   