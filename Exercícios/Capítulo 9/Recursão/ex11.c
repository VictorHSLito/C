/*Escreva uma função recursiva que receba um valor inteiro e o retorne invertido.
Exemplo:
Número lido = 123
Número retornado = 321*/

#include <stdio.h>
#include <math.h>


int conta_digitos(int num) {
    if (num == 0) {
        return 0;
    }
    return 1 + conta_digitos(num/10); // Pega apenas o quociente da divisão do número por 10 e retorna até chegar no caso base
}


int inverte_numero (int num) {
    if (num == 0) {  // O caso base é igual a zero devido ao truncamento em C que converte 1/10 em 0.
        return 0;
    }
    int digitos = conta_digitos(num); // função que conta quantos dígitos os número possui
    return (num % 10) * pow(10, digitos - 1) + inverte_numero(num/10);  // a primeira parte pega o resto da divisão do número por 10 e multiplica pela potência de 10 elavada a quantidade de dígitos - 1
    // depois repete o processo para o quoeciente da divisão do número até chegar no caso base.

}


int main () {
    int numero, resultado;
    printf("Digite um numero: ");
    scanf("%d", &numero);

    resultado = inverte_numero(numero);

    printf("O numero invertido eh: %d", resultado);
}