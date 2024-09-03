/*Crie uma estrutura representando um aluno de uma disciplina. Essa estrutura
deve conter o número de matrícula do aluno, seu nome e as notas de três provas.
Escreva um programa que mostre o tamanho em byte dessa estrutura.*/

#include <stdio.h>

typedef struct aluno
{
    int matricula;
    char nome[30];
    float notas[3];
} Aluno;


int main () {
    Aluno p1 = {300131, "Victor Hugo", {9.81, 10.0, 8.8}};
    printf("O tamanho em bytes dessa estrutura equivale a %d", sizeof(Aluno));
}