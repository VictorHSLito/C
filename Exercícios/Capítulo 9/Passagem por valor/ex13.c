/*Escreva uma função que receba um número inteiro positivo n. Calcule e retorne
o somatório de 1 até n: 1 + 2 + 3 + ... + n.*/

#include <stdio.h>

int somatorio (int numero);

int main () {
    int num, resultado;

    printf("Digite um numero: ");
    scanf("%d", &num);
    resultado = somatorio(num);
    printf("A soma de 1 ate %d eh: %d", num, resultado);
}

int somatorio (int numero) {
    int soma = 0;

    for (int i = 1; i <= numero; i++) {
        soma += i;
    }

    return soma;
}           