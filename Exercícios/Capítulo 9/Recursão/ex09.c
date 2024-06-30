/*Escreva uma função recursiva que receba um número inteiro positivo n. Calcule e
retorne o seu fatorial n!:
n! = n * (n – 1) * (n – 2) * ... * 1*/

#include <stdio.h>

int fatorial (int n) {
    if (n == 1) {
        return n;
    }
    return n*fatorial(n-1);
}

int main () {
    int numero = 6, resultado;
    //printf("Digite um numero para calcular o fatorial: ");
    //scanf("%d", &numero);

    resultado = fatorial(numero);
    printf("O fatorial de %d eh %d", numero, resultado);
}