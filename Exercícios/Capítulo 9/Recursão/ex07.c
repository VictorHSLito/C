/*Escreva uma função recursiva que receba por parâmetro dois valores inteiros x e y
e calcule e retorne o resultado de x^y para o programa principal.*/

#include <stdio.h>


float exponenciacao (int x, int y) {
    if (y > 0) {
        if (y == 1) {
        return x;
    }
    return x*(exponenciacao(x, y-1));
    }
    else {
        if (y == -1) {
            return 1.0/x;
        }
    return (1.0/x)*(exponenciacao(x, y+1));
    }
}

int main () {
    int x, y;
    float resultado;
    printf("Digite dois numeros: ");
    scanf("%d %d", &x, &y);
    resultado = exponenciacao(x, y);
    printf("Resultado: %f", resultado);
}