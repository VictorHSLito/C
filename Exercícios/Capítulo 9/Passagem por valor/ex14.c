/*Escreva uma função que receba um número inteiro positivo n. Calcule e retorne
o seu fatorial n!: n! = n * ( – 1) * (n – 2) * ... * 1.*/

#include <stdio.h>


int fatorial (int numero);

int main () {
    int num, resultado;

    printf("Digite um numero para calcular o seu fatorial: ");
    scanf("%d", &num);
    resultado = fatorial(num);
    printf("O fatorial do numero %d eh: %d", num, resultado);
}

int fatorial (int numero) {
    int soma = 1;
    for (int i = 1; i < numero; i++) {
       soma = soma*i;
    }
    return soma*numero;
}   