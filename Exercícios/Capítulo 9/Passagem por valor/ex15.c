/*Elabore uma função que receba como parâmetro um valor inteiro n e gere como
saída n linhas com pontos de exclamação, conforme o exemplo a seguir, em que
usamos n = 5:
!
!!
!!!
!!!!
!!!!!*/

#include <stdio.h>

void exclamacao_linhas(int numero) {
    for (int i = 1; i <= numero; i++) {
        for (int j = 1; j <= i; j++) {
            printf("!");
        }
    printf("\n");
    }
}

int main () {
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);
    exclamacao_linhas(num);
    return 0;
}

