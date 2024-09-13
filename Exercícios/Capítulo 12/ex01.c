/*Escreva um programa que leia do usuário o nome de um arquivo texto. Em seguida,
mostre na tela quantas linhas esse arquivo possui.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *arquivo;
    char nomeArquivo[200], caractere;
    int contador = 0;

    printf("Digite o nome do arquivo: ");
    scanf("%s", nomeArquivo);
    arquivo = fopen(nomeArquivo, "r");

    if(arquivo == NULL){
        perror("Erro ao ler o arquivo ");
        exit(1);
    }
    
    while(!feof(arquivo)){
        // fgetc() lê um caractere por vez no arquivo
        caractere = fgetc(arquivo);
        if(caractere == 10) // 10 é o valor em ASCII do '\n'
            contador++;
    }

    printf("Esse arquivo possui %d linhas.\n", contador);
    fclose(arquivo);
    return 0;
}
