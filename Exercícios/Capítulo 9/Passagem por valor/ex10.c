/*Escreva uma função que receba dois valores numéricos e um símbolo. Esse símbolo
representará a operação que se deseja efetuar com os números. Assim, se o
símbolo for “+”, deverá ser realizada uma adição, se for “−”, uma subtração, se for
“/”, uma divisão, e, se for “*”, será efetuada uma multiplicação. Retorne o resultado
da operação para o programa principal.*/

#include <stdio.h>



int operacao (int numero1, int numero2, char simbolo) {

    switch (simbolo)
    {
    case '+': {
        int soma = numero1 + numero2;        
        printf("A soma dos numeros %d e %d vale %d", numero1, numero2, soma);
        return 1;
    }
        
    case '-': {
        int diferenca = numero1 - numero2;        
        printf("A diferenca dos numeros %d e %d vale %d", numero1, numero2, diferenca);
        return 1;
    }
        
    case '*': {
        int multiplicacao = numero1*numero2;        
        printf("A multiplicacao dos numeros %d e %d vale %d", numero1, numero2, multiplicacao);
        return 1;
    }
        
    case '/': {
        if (numero2 != 0) {
        float divisao = (float)numero1/numero2;        
        printf("A divisao dos numeros %d e %d vale %f", numero1, numero2, divisao);
        }
        else {
            printf("Divisao por zero!");
        }
        return 1;
    }
        
    default:
        printf("Operacao invalida!");
        return 0;
    }
}

int main () {
    int x, y;
    char simbolo;
    printf("Digite dois numeros: ");
    scanf("%d %d", &x, &y);
    printf("O que gostaria de fazer com esse numeros?\n");
    printf("'+' - Somar\n'-' - Subtrair\n'*' - Multiplicar\n'/' - Dividir\n");
    scanf(" %c", &simbolo);
    operacao(x, y, simbolo);
    return 0;
}