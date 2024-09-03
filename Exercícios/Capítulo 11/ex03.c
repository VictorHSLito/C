/*Crie uma estrutura chamada Cadastro. Essa estrutura deve conter o nome, a idade
e o endereço de uma pessoa. Agora, escreva uma função que receba um inteiro
positivo N e retorne o ponteiro para um vetor de tamanho N, alocado dinamicamente,
dessa estrutura. Solicite também que o usuário digite os dados desse vetor
dentro da função.*/

#include <stdio.h>
#include <stdlib.h>

typedef struct cadastro {
    char nome[30];
    int idade;
    char endereco[50];
} Cadastro;

Cadastro *func(int inteiro) {
    Cadastro *auxiliar;
    auxiliar = malloc(inteiro*sizeof(Cadastro));

    if (auxiliar == NULL) {
        printf("Sem espaco na memoria!");
        exit(1);
    }

    for (int i = 0; i < inteiro; i++) {
        printf("Digite o nome: ");
        fgets(auxiliar[i].nome, 30, stdin);
        printf("Digite a idade: ");
        scanf("%d", &auxiliar[i].idade);
        while (getchar() != '\n');  // Limpar o buffer de entrada
        printf("Agora digite o endereco: ");
        fgets(auxiliar[i].endereco, 50, stdin);
    }
    return auxiliar;
}

int main () {
    int num;
    Cadastro *estrutura;
    printf("Digite um numero: ");
    scanf("%d", &num);
    while (getchar() != '\n');
    estrutura = func(num);

    free(estrutura);
    estrutura = NULL;
}