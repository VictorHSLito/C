/*Escreva uma função recursiva que calcule a soma dos primeiros n cubos:
S = 1³ + 2³ + ... + n³*/

#include <stdio.h>
#include <math.h>

int soma_cubos (int n) {
    if (n == 1) {
       return pow(n, 3);
    }
    int soma = pow(n, 3);
    return soma + soma_cubos(n-1);
}

int main () {
    int n, resultado;
    printf("Digite um numero: ");
    scanf("%d", &n);

    resultado = soma_cubos(n);
    printf("O resultado dessa soma eh: %d", resultado);
}