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

/*int main () {
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
*/

/*8 - Calcular e imprimir na tela uma matriz de tamanho 10 × 10, em que seus elementos
são da forma:
A[i][j] = 2i + 7j – 2 se i < j
A[i][j] = 3i² – 1 se i = j
A[i][j] = 4i³ + 5j² + 1 se i > j*/

/*int main () {
    int matriz[10][10], i, j;

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            if (i < j) {
                matriz[i][j] = 2*i + 7*j - 2;
            }
            if (i == j) {
                matriz[i][j] = 3*i*i - 1;
            }
            if (i > j) {
                matriz[i][j] = 4*i*i*i + 5*j*j + 1;
            }
        }
    }

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            printf("[%d] ", matriz[i][j]);
        }
    printf("\n");
    }
}
*/

/*9 - Faça um programa que permita ao usuário entrar com uma matriz de tamanho 3
× 3 de números inteiros. Em seguida, calcule um vetor contendo três posições, em
que cada posição deverá armazenar a soma dos números de cada coluna da matriz.
Exiba na tela esse array.*/

/*int main () {
    int matriz[3][3], vetor[3], i, j, soma0=0, soma1=0, soma2=0;

    printf("Digite alguns valores para uma matriz 3x3:");

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (j == 0) {
                soma0 = soma0 + matriz[i][0];
            }
            if (j == 1) {
                soma1 = soma1 + matriz[i][1];
            }
            if (j == 2) {
                soma2 = soma2 + matriz[i][2];
            }
        }
    }
    vetor[0] = soma0;
    vetor[1] = soma1;
    vetor[2] = soma2;

    printf("Matriz gerada:\n");

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("[%d]", matriz[i][j]);
        }
    printf("\n");
    }


    printf("O vetor gerado pelos numeros fornecidos eh:\n");
    for (i = 0; i < 3; i++) {
        printf("[%d]", vetor[i]);
    }

}
*/

/*10 - Leia uma matriz de tamanho 10 × 3 com as notas de 10 alunos em três provas. Em
seguida, calcule e escreva na tela o número de alunos cuja pior nota foi na prova 1,
o número de alunos cuja pior nota foi na prova 2 e o número de alunos cuja pior
nota foi na prova 3.*/

/*int main () {
    int matriz[10][3], piores[3][2], i, j, pior0, pior1, pior2;

    printf("Digite as 3 notas dos 10 alunos:\n");
    for (i = 0; i < 10; i++) {
        printf("Aluno %d:", i+1);
        for (j = 0; j < 3; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    pior0 = matriz[0][0];

    for (i = 0; i < 10; i++) {
        if (matriz[i][0] < pior0) {
            pior0 = matriz[i][0];
            piores[0][0] = i;
            piores[0][1] = pior0;
        }
    }

    pior1 = matriz[0][1];

    for (i = 0; i < 10; i++) {
        if (matriz[i][1] < pior1) {
            pior1 = matriz[i][1];
            piores[1][0] = i;
            piores[1][1] = pior1;
        }
    }

    pior2 = matriz[0][2];

    for (i = 0; i < 10; i++) {
        if (matriz[i][2] < pior2) {
        pior2 = matriz[i][2];
        piores[2][0] = i;
        piores[2][1] = pior2;
        }
    }

    printf("Os piores alunos de cada prova são:\n");
    for (i = 0; i < 3; i++) {
        printf("Prova %d, Aluno: [%d] Nota: %d\n", i + 1, piores[i][0] + 1, piores[i][1]);
    }

}
*/

/*11 - Faça um programa que leia uma matriz de tamanho 5 × 5. Calcule e imprima a
soma dos elementos dessa matriz que estão acima da diagonal principal.*/

/*int main () {
    int matriz[5][5], i, j, soma=0; 

    printf("Digite alguns numeros para uma matriz 5x5: ");

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("Matriz digitada:\n");

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
           printf("[%d] ", matriz[i][j]);
        }
    printf("\n");
    }
    
    for (i = 0; i < 5; i++) {
        for ( j = 0; j < 5; j++) {
            if (j > i) {
                soma = soma + matriz[i][j];
            }
        }
        
    }

    printf("A soma dos elementos acima da diagonal principal eh: %d", soma);
}
*/

/*12 - Faça um programa que leia uma matriz de tamanho 6 × 6. Calcule e imprima a
soma dos elementos dessa matriz que estão abaixo da diagonal principal.*/

/*int main () {
    int matriz[6][6], i, j, soma=0;

    printf("Digite os numeros para uma matriz 6x6: ");

    for (i = 0; i < 6; i++) {
        for (j = 0; j < 6; j++) {
            scanf("%d", &matriz[i][j]);
        }   
    }

    printf("Matriz digitada:\n");

    for (i = 0; i < 6; i++) {
        for (j = 0; j < 6; j++) {
            printf("[%d] ", matriz[i][j]);
        }
    printf("\n");
    } 

    for (i = 0; i < 6; i++) {
        for (j = 0; j < 6; j++) {
            if (i > j) {
                soma = soma + matriz[i][j];
            }
        }   
    }

    printf("A soma dos elemtos abaixo da diagonal principal eh %d", soma);
}
*/
/*13 - Faça um programa que leia uma matriz de tamanho 5 × 5. Calcule e imprima a
soma dos elementos dessa matriz que não pertencem à diagonal principal nem à
diagonal secundária.*/

/*int main () {
    int matriz[5][5], i, j, soma;

    printf("Digite os elementos da matriz 5x5: ");

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Matriz digitada:\n");

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("[%d] ", matriz[i][j]);
        }
    printf("\n");
    }

    printf("Elementos da diagonal principal e diagonal secundaria");

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if (i == j || i+j == 4) {
                printf("[%d]\n", matriz[i][j]);  // mostra todos elementos da diagonal principal e secundária
            }
            else {
                soma = soma + matriz[i][j];
            }
        }
    }
    
    printf("A soma de todos os elementos que nao fazem parte da diagonal principal e da secundaria eh de: %d", soma);
}
*/

/*14 - Faça um programa que leia uma matriz de tamanho 5 × 5. Calcule a soma dos
elementos dessa matriz que pertencem à diagonal principal ou secundária. Calcule
também a soma dos elementos que não pertencem a nenhuma das duas diagonais.
Imprima na tela a diferença entre os dois valores.*/

/*int main () {
    int matriz[5][5], i, j, soma1 = 0, soma2 = 0;

    printf("Digite numeros para uma matriz 5x5: ");

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Matriz digitada:\n");

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("[%d] ", matriz[i][j]);
        }
    printf("\n");
    }

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if (i == j || i + j == 4) {
                soma1 = soma1 + matriz[i][j];
            }
            else {
                soma2 = soma2 + matriz[i][j];
            }
        }
    }

    printf("A soma dos elementos da diagonal principal e secundaria: %d\n", soma1);
    printf("A soma dos elementos que nao fazem parte de uma ou outra eh: %d\n", soma2);
    printf("A diferença entre as somas eh de: %d", soma1 - soma2);
}
*/

/*15 - Faça um programa que leia uma matriz A de tamanho 5 × 5. Em seguida, calcule
e imprima a matriz B, sendo que B = A².*/

int main () {
    int matrizA[5][5], matrizB[5][5], i, j, aux = 0, soma = 0;
    
    printf("Digite numeros para uma matriz 5x5: ");

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            scanf("%d", &matrizA[i][j]);
        }
    }

    printf("Matriz A 5x5:\n");

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("[%d] ", matrizA[i][j]);
        }
    printf("\n");
    }

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            for (aux = 0; aux < 5; aux++) {
            soma += matrizA[i][aux] * matrizA[aux][j];
            }
        matrizB[i][j] = soma;
        soma = 0;
        aux = 0;
        }
    }

    printf("Matriz B 5x5:\n");

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("[%d] ", matrizB[i][j]);
        }
    printf("\n");
    }

                                    /*                      EXERCÍCIO SIMPLESMENTE SENSACIONAL (REVISAR DEPOIS!)                      */
                                    // Tem que pensar que matrizB[i][j] = matrizA[i][0] * matrizA[0][j] + matrizA[i][1] * matrizA[1][j]
                                    /*1º Como o exercício estava muito difícil para uma matriz 5x5, eu fiz para uma 2x2 primeiro,
                                    depois tive que pensar que usando apenas 2 "fors", não teria como.
                                    2º Fiz uma variável chamada auxiliar que ela incrementava em um quando passava pelo loop do
                                    i e do j ao mesmo tempo.
                                    3º Depois disso foi só alinhar mais um for dentro dos outros 2 e testar.
                                    */

}