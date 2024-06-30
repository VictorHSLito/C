/*Escreva uma função recursiva que receba um número inteiro, maior ou igual a
zero, e retorne o enésimo termo da sequência de Fibonacci. Essa sequência começa
no termo de ordem zero e, a partir do segundo termo, seu valor é dado pela soma
dos dois termos anteriores. Alguns termos dessa sequência são: 0, 1, 1, 2, 3, 5, 8,
13, 21, 34.*/

#include <stdio.h>

int fibonacci (int n) {
    if (n == 0 || n == 1) {
        return n;
    }
    if (n == 2) {
        return 1;
    }
    return fibonacci(n-1) + fibonacci(n-2);
}

int main () {
    int numero, resultado;
    printf("Digite um numero: ");
    scanf("%d", &numero);

    resultado = fibonacci(numero);
    printf("O %dº termo da sequencia de fibonnaci eh %d", numero, resultado);
}