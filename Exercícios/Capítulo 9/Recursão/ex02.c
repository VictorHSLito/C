/*Crie uma função recursiva que receba um número inteiro N e retorne o somatório
dos números de 1 a N.*/
#include <stdio.h>


int somatorio (int n) {
    if (n == 1) {
        return n;
    }
    int soma = n;
    return soma + somatorio(n-1);
}


int main () {
    int n, resultado;
    printf("Digite um numero: ");
    scanf("%d", &n);

    resultado = somatorio(n);
    printf("O somatorio de 1 ate %d eh de %d", n, resultado);
}