/*Escreva uma função que, dado um número real passado como parâmetro, retorne
a parte inteira e a parte fracionária desse número por referência.*/

#include <stdio.h>


void dividePartes(double n, int *inteiro, double *fracionado) {
    *inteiro = n;
    *fracionado = n - *inteiro;
}


int main() {
    double n, parteFracionaria;
    int parteInteira;
    printf("Digite um numero: ");
    scanf("%lf", &n);
    dividePartes(n, &parteInteira, &parteFracionaria);
    printf("Parte inteira: %d\nParte fracionaria: %lf\n", parteInteira, parteFracionaria);
    return 0;
}