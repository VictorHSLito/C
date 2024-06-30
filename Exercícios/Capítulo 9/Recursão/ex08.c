/*A multiplicação de dois números inteiros pode ser feita através de somas sucessivas
(por exemplo, 2 * 3 = 2 + 2 + 2). Crie uma função recursiva que calcule a multiplicação
por somas sucessivas de dois inteiros.*/

#include <stdio.h>


int calcula_multiplicacao (int x, int y) {
    if (y == 1) {
    return x;
    }

    return x + calcula_multiplicacao(x, y-1);  
}


int main () {
    int x = 5, y = 4, resultado;
    //printf("Digite dois numeros inteiros: ");
    //scanf("%d %d", &x, &y);

    resultado = calcula_multiplicacao(x, y);
    printf("Resultado: %d", resultado);
}   