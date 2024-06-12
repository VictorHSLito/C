/*Elabore uma função para verificar se um número é um quadrado perfeito. Um
quadrado perfeito é um número inteiro não negativo que pode ser expresso como
o quadrado de outro número inteiro. Exemplos: 1, 4, 9.*/

#include <stdio.h>


int quadrado_perfeito (int x) {
    int i, quadrado;

    if (x == 1) {
        return 1;
    }

    else {
        for (i = 0; i <= x/2; i++) {
        quadrado = i*i;
        if (quadrado == x) {
            return 1;
            }
        }
    }
    
    return 0;
}

int main ( ) {
    int x, resultado;

    printf("Digite um numero: ");
    scanf("%d", &x);

    resultado = quadrado_perfeito(x);
    if (resultado == 1) {
        printf("O numero %d eh um quadrado perfeito!", x);
    }
    else {
        printf("O numero %d nao eh um quadrado perfeito!", x);
    }
    
}