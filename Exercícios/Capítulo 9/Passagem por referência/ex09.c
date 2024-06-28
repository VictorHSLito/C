/*Crie uma estrutura representando um aluno de uma disciplina. Essa estrutura
deve conter o número de matrícula do aluno, seu nome e as notas de três provas.
Agora, escreva uma função que receba um vetor de tamanho N dessa estrutura.
Essa função deve retornar o índice do aluno que possui a maior média geral entre
todos os alunos.*/

#include <stdio.h>


struct aluno {
    int matricula;
    char nome[30];
    float notas[3];
};


float calcula_media (struct aluno alunos) {
    int j;
    float soma = 0;

    for (j = 0; j < 3; j++) {
        soma += alunos.notas[j];
    }  
    return soma/3;
}

void maior (struct aluno alunos[], int tamanho) {
    int i, aux;
    float maior = calcula_media(alunos[0]);
    float media_atual = 0;

    for (i = 1; i < tamanho; i ++) {
        media_atual = calcula_media(alunos[i]);
        if (media_atual > maior) {
            maior = media_atual;
            aux = i;
        }
        }

    printf("O aluno com maior media foi %s, com nota de %f", alunos[aux].nome, maior);
}


int main () {
    int n;

    printf("Quantos alunos serao? ");
    scanf("%d", &n);

    struct aluno alunos[n];

    for (int i = 0; i < n; i++) {
        printf("Nome: ");
        scanf(" %s", alunos[i].nome);
        printf("Nota 1: ");
        scanf(" %f", &alunos[i].notas[0]);
        printf("Nota 2: ");
        scanf(" %f", &alunos[i].notas[1]);
        printf("Nota 3: ");
        scanf(" %f", &alunos[i].notas[2]);
    }

    maior(alunos, n);
    
}