/*Escreva uma função recursiva que receba um valor inteiro em base decimal e o
imprima em base binária.*/

#include <stdio.h>
#include <math.h>


void binario (int num) {
    if (num == 1) {
        printf("%d", num % 2); // Chega no caso base e começa a imprimir
        return;
    }
    binario(num/2); // Passa o quociente da divisão do número por 2 até chegar no caso base, depois retorna
    printf("%d", num%2);
}


int main () {
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);
    binario(numero);
    return 0;
}