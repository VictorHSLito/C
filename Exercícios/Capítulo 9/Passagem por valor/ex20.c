/*Faça uma função que calcule e retorne o número neperiano e, e = 2,71828183,
usando a série a seguir:
somatório de n = 0 até n de 1/n! = 1/0! + 1/1! + 1/2! + 1/3! + ... 
A função deve ter como parâmetro o número de termos que serão somados, N. Note
que quanto maior esse número, mais próxima do valor e estará a resposta.*/

#include <stdio.h>


int fatorial (int num) {
    int fatorial = 1;

    if (num == 0) {
        return fatorial;
    }
    else {    
        for (int i = 1; i <= num; i++) {
            fatorial = fatorial*i;
        }
        return fatorial;
    }
    
}

float neperiano (int num) {
    float somatorio = 0;

    for (int i = 0; i <= num; i++) {
        somatorio += 1.0/fatorial(i);
    }

    return somatorio;
}

int main () {
    int num;
    float resultado;
    printf("Digite um numero: ");
    scanf("%d", &num);
    resultado = neperiano(num);
    printf("O valor do numero neperiano eh: %f", resultado);
    return 0;
}