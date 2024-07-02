/*Em matemática, o número harmônico designado por Hn define-se como o enésimo
termo da série harmônica. Ou seja:
Hn = 1 + 1/2 + 1/3 + 1/4 + ... + 1/n
Escreva uma função recursiva que calcule o valor de qualquer Hn.*/

#include <stdio.h>


float somatorio_serie_harnonica (int n) {
    float soma = 0;
    if (n == 1) {
        return 1.0/n;
    }
    soma += 1.0/n;
    return soma + somatorio_serie_harnonica(n-1);
}

int main () {
    int numero;
    float resultado;
    printf("Digite um numero: ");
    scanf("%d", &numero);

    resultado = somatorio_serie_harnonica(numero);
    printf("O somatorio da serie harmonica ate %d eh de: %f", numero, resultado);
}