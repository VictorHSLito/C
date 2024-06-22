/*Escreva uma função que receba um número inteiro positivo e retorne o maior
fator primo desse número.*/

#include <stdio.h>

int maior_primo (int numero);

int main () {
    int num, resultado;
    printf("Digite um numero: ");
    scanf("%d", &num);
    resultado = maior_primo(num);
    printf("O maior fator primo desse numero eh: %d", resultado);
}

int maior_primo (int numero) {
     int fatores [30], aux = 0, maior = 0;
     for (int i = numero - 1; i >= 2; i--) {
        if (numero % i == 0) {
            fatores[aux] =  i;
            aux++;
        }
     }
    maior = fatores[0];
    for (int i = 0; i < aux; i++) {
        printf("%d\n", fatores[i]) ;
        if (fatores[i] > maior) {
            maior = fatores[i];
        }
    }
     return maior ;
}