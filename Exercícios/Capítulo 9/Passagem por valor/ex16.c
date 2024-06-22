/*Elabore uma função que receba como parâmetro um valor inteiro n e gere como
saída um triângulo lateral formado por asteriscos conforme o exemplo a seguir,
em que usamos n = 4:
*
**
***
****
***
**
*/

#include <stdio.h>

void imprime_quantidade (int num);

int main () {
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);
    imprime_quantidade(num);
}

void imprime_quantidade (int num) {
    for (int i = 1; i <= num; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
    printf("\n");
    }

    for (int i = num - 1; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
    printf("\n");
    }
}