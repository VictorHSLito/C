/*Crie uma função recursiva que receba um número inteiro N e imprima todos os
números naturais de 0 até N em ordem decrescente.*/

#include <stdio.h>


int imprime_numeros (int n) {

    if (n == 0) {
        printf("%d ", n);
        return n;
    }
    printf("%d ", n);

    return imprime_numeros(n-1);

}

int main () {
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);

    imprime_numeros(n);
    return 0;
}