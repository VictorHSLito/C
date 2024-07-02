/*Faça uma função recursiva que calcule o valor da série S descrita a seguir para um
valor n maior do que zero a ser fornecido como parâmetro para a mesma:
S = 2 + 5/2 + 10/3 + ... + (1 + n²)/n */

#include <stdio.h>
#include <math.h>


float serie_recursiva (int num) {
    float soma = 0;
    if (num == 1) {
        return (1 + pow(num, 2))/num;
    }
    soma += (1 + pow(num, 2))/num;
    return soma + serie_recursiva(num-1);
}

int main () {
    int numero;
    float resultado;
    printf("Digite um numero: ");
    scanf("%d", &numero);

    resultado = serie_recursiva(numero);
    printf("O resultado da serie eh: %f", resultado);
}