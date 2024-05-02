#include <stdio.h>
#include <stdlib.h>

/*1 - Faça um programa que leia uma string e a imprima na tela.*/

int main () {
    char str[10];

    printf("Digite algo: ");

    gets(str);

    printf("Voce digitou a frase: %s", str);
}