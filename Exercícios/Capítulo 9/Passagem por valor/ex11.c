/*Escreva uma função que receba por parâmetros dois valores inteiros x e y e calcule
e retorne o resultado de x^y para o programa principal. Não use nenhuma função
pronta para isso.*/

#include <stdio.h>


int exponeciacao (int numero1, int numero2) {
    if (numero1 == 0 || numero1 == 1) {
        printf("O valor final eh de 1");
        return 0;
    }

    else {
        if (numero2 > 1) {
            int aux = 1;
            for (int i = 0; i < numero2; i++) {
                aux = aux*numero1;
            }
        printf("O valor final eh de %d", aux);
        }
        else {
            int numero3 = -numero2;
            double aux = 1.0;
            for (int i = 0; i < numero3; i++) {
               aux = aux*numero1;
            }
            aux = 1.0/aux;
        printf("O valor final eh de %f", aux);
        }
    }
        
    return 0;
}   


int main () {
    int x, y;
    printf("Digite dois numeros: ");
    scanf("%d %d", &x, &y);
    exponeciacao(x, y);
}