/*Escreva uma função que receba um valor inteiro positivo N por parâmetro e retorne
o ponteiro para um vetor de tamanho N alocado dinamicamente. Esse vetor
deverá ter os seus elementos preenchidos com certo valor, também passado por
parâmetro. Se N for negativo ou igual a zero, um ponteiro nulo deverá ser retornado.*/

#include <stdio.h>
#include <stdlib.h>

int *retornaPonteiro(int numero, int valor) {
    if (numero <= 0) {
        return NULL;
    }
    else {
        int *vtr = (int*) malloc(numero*sizeof(int));

        for (int i = 0; i < numero; i++) {
            vtr[i] = valor;
        }

        return vtr;
    }
}

int main()
{
    int num, valor, *vetor;
    printf("Digite um numero: ");
    scanf("%d", &num);
    printf("Agora digite o valor: ");
    scanf("%d", &valor);

    vetor = retornaPonteiro(num, valor);

    if (vetor) {
        printf("Vetor: ");
        for (int i = 0; i < num; ++i) {
            printf("%d ", *(vetor + i));
        }
    }
   
    free(vetor);

    return 0;
}
