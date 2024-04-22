#include <stdio.h>
#include <stdlib.h>

/*1 - Faça um programa que leia uma matriz de tamanho 3 × 3. Imprima na tela o
menor valor contido nessa matriz.*/

/*int main () {
    int matriz[3][3], i, j, menor;

    printf("Escreva numeros para uma matriz 3x3: ");

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    menor = matriz[0][0];

    for (i = 2; i >= 0; i--) {
        for (j = 0; j < 3; j++) {
            if (matriz[i][j] < menor) {
                menor = matriz[i][j];
            }
        }
    }

    printf("Matriz digitada:\n");

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("[%d] ", matriz[i][j]);
        }
    printf("\n");
    }

    printf("O menor valor dessa matriz eh: %d", menor);
}
*/

/*2 - Faça um programa que leia uma matriz de tamanho 4 × 4. Imprima na tela o
maior valor contido nessa matriz e a sua localização (linha e coluna).*/
 
/*int main () {
    int matriz[4][4], i, j, maior, linha, coluna;

    printf("Digite alguns valores para uma matriz 4x4: ");

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    maior = matriz[0][0];

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            if (matriz[i][j] > maior) {
                maior = matriz[i][j];
                linha = i;
                coluna = j;
            }
        }
    }

    printf("\nMatriz digitada:\n");

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("[%d] ", matriz[i][j]);
        }
    printf("\n");
    }

    printf("\nO maior valor encontrado na matriz foi de [%d], na linha [%d] e na coluna [%d]", maior, linha, coluna);
}
*/

/*3 - Faça um programa que declare uma matriz de tamanho 5 × 5. Preencha com 1 a
diagonal principal e com 0 os demais elementos. Ao final, escreva a matriz obtida
na tela.*/

int main () {
    int matriz[5][5], i, j;

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if (i == j) {
                matriz[i][j] = 1;
            }
            else {
                matriz[i][j] = 0;
            }
        }
    }

    printf("Matriz 5x5:\n");

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("[%d] ", matriz[i][j]);
        }
    printf("\n");
    }
}


