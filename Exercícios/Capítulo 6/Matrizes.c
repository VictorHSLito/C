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

/*int main () {
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
*/

/*4 - Leia uma matriz de tamanho 4 × 4. Em seguida, conte e escreva na tela quantos
valores maiores do que 10 ela possui.*/

/*int main () {
    int matriz[4][4], i, j, contador = 0;

    printf("Digite alguns valores para uma matriz 4x4: ");

    for (i = 0; i < 4; i++) {
        for ( j = 0; j < 4; j++) {
            scanf("%d", &matriz[i][j]);
            if (matriz[i][j] > 10) {
                contador++;
            }
        }
    }

    printf("Matriz digitada:\n");

    for (i = 0; i < 4; i++) {
        for ( j = 0; j < 4; j++) {
            printf("[%d] ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("Como podemos ver, a matriz possui %d valores maiores que 10.", contador);
}
*/

/*5 - Leia uma matriz de tamanho 4 × 4. Em seguida, conte e escreva na tela quantos
valores negativos ela possui.*/

/*int main () {
    int matriz[4][4], i, j, contador = 0;

    printf("Escreva alguns valores para uma matriz 4x4: ");

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            scanf("%d", &matriz[i][j]);
            if(matriz[i][j] < 0) {
                contador++;
            }
        }
    }

    printf("Matriz digitada:\n");

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("[%d] ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("A matriz tem %d valores negativos, os quais sao:\n", contador);

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            if (matriz[i][j] < 0) {
                printf("[%d] ", matriz[i][j]);
            } 
        }
    }

}
*/

/*6 - Leia uma matriz de tamanho 3 × 3. Em seguida, imprima a soma dos valores
contidos em sua diagonal principal.*/

/*int main () {
    int matriz[3][3], i , j, soma = 0;

    printf("Digite alguns valores para uma matriz 3x3: ");

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &matriz[i][j]);
            if (i == j) {
                soma = soma + matriz[i][j];
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

    printf("Sendo que, os valores da diagonal principal sao:\n");

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (i == j) {
                printf("[%d] ", matriz[i][j]);
            }
        }
    }

    printf("\nE a soma desses valores eh igual a %d", soma);
}
*/

/*7 - Leia uma matriz de tamanho 3 × 3. Em seguida, imprima a soma dos valores
contidos em sua diagonal secundária.*/

int main () {
    int matriz[3][3], i, j, soma = 0;

    printf("Digite alguns valores para uma matriz 3x3: ");

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &matriz[i][j]);
            if (j == 2 && i == 0) {
                soma = soma + matriz[i][j];
            }
            if (i == 1 && j == 1) {
                soma = soma + matriz[i][j];
            }
            if (i == 2 && j == 0) {
                soma = soma + matriz[i][j];
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

    printf("Os valores da diagonal secundaria sao:\n");

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (j == 2 && i == 0) {
                printf("[%d] ", matriz[i][j]);
            }
            if (i == 1 && j == 1) {
                printf("[%d] ", matriz[i][j]);
            }
            if (i == 2 && j == 0) {
                printf("[%d] ", matriz[i][j]);
            }
        }
    }

    printf("\nE a soma desses valores eh igual a %d", soma);

}