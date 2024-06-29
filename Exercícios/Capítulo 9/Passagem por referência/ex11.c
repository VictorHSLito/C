/*Escreva uma função que receba uma string e converta todos os seus caracteres
em maiúscula. Dica: subtraia 32 dos caracteres cujo código ASCII está entre 97 e
122.*/

#include <stdio.h>
#include <string.h>


char* converte (char *palavra) {
    int tamanho = strlen(palavra);
    for (int i = 0; i < tamanho; i++) {
        palavra[i] = palavra[i] - 32;
    }
    return palavra;
}

int main () {
    char palavra[30];

    printf("Digite uma palavra: ");
    fgets(palavra, sizeof(palavra), stdin);
    converte(palavra);
    printf("A palavra digitada foi: %s", palavra);
}