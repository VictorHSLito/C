/*Faça um programa que leia um valor inteiro N não negativo. Se o valor de N for
inválido, o usuário deverá digitar outro até que ele seja válido (ou seja, positivo).
Em seguida, leia um vetor V contendo N posições de inteiros, em que cada valor
deverá ser maior ou igual a 2. Esse vetor deverá ser alocado dinamicamente.*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int num;
    do
    {
        printf("Digite o valor de N: ");
        scanf("%d", &num);
    } while (num <= 0);
    
    int *vetor = (int *) malloc(num*sizeof(int));
    printf("Digite os numeros do vetor: ");
    for (int i = 0; i < num; ++i) {
        scanf("%d", &vetor[i]);
        while (vetor[i] < 2) {            
            printf("Digite um valor maior que 2\n");
            scanf("%d", &vetor[i]);
        } 
    }

    printf("Vetor:\n");

    for (int i = 0; i < num; ++i) {
        printf("%d ", vetor[i]);
    }

    free(vetor);
    vetor = NULL;
    return 0;
}
