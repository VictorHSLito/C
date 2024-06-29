/*Escreva uma função que receba uma string e retorne se ela é um palíndromo (1)
ou não (0). Um palíndromo é uma palavra que tem a propriedade de poder ser
lida tanto da direita para a esquerda como da esquerda para a direita. Exemplos:
ovo, arara, rever, asa, osso etc.*/

#include <stdio.h>
#include <string.h>


int palindromo (char *palavra) {
    int i, j, resultado = 1;
    for (i = 0, j = strlen(palavra) - 1;  i <= j; i++, j--) {
        if (palavra[j] != palavra[i]) {
            resultado = 0; 
            break;
        }
    }
   return resultado;
}


int main () {
    char palavra[30];
    int resposta;
    printf("Digite uma palavra: ");
    scanf(" %s", palavra);
    
    resposta = palindromo(palavra);
    printf("Resultado: %d", resposta);
}