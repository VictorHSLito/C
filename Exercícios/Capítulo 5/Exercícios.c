#include <stdio.h>
#include <stdlib.h>

/*1 - Faça um programa que leia um número inteiro positivo N e imprima todos os
números naturais de 0 até N em ordem crescente.*/

/*int main () {
    int a, i;
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &a);
    printf("Todos os numeros de 0 ate %d sao: ", a);
    for (i = 0; i <= a; i++) {
        printf("%d ", i);
    }
}
*/

/*2 - Faça um programa que leia um número inteiro positivo N e imprima todos os
números naturais de 0 até N em ordem decrescente.*/

/*int main () {
    int a, i;
    printf("Digite um numero positivo: ");
    scanf("%d", &a);
    printf("Os numeros de  %d ate 0 em ordem decresente sao: ", a);
    for (i = a; i >= 0; i--) {
        printf("%d ", i);
    }
}
*/

/*3 - Faça um programa que leia um número inteiro N e depois imprima os N primeiros
números naturais ímpares.*/

/*int main () {
    int a, i;
    printf("Digite um numero: ");
    scanf("%d", &a);
    printf("Os numeros impares de 0 ate %d sao: ", a);
    for (i = 0; i <= a; i++) {
        if (i % 2 != 0) {
            printf("%d ", i);
        }
    }
}
*/

/*4 - Faça um programa que determine e mostre os cinco primeiros múltiplos de 3
considerando números maiores que 0.*/

/*int main () {
    int i;
    printf("Os cinco primeiros multiplos de 3 sao: ");
    for (i = 1; i <= 15; i++) {
        if (i % 3 == 0) {
            printf("%d ", i);
        }
    }
}
*/

/*5 - Faça um programa que calcule e mostre a soma dos 50 primeiros números pares.*/

/*int main () {
    int i, soma;
    printf("A soma entre os 50 primeiros numeros pares vale: ");
    for (i = 0; i <= 51; i++) {
        if (i % 2 == 0) {
            soma = soma + i;
        }
    }
    printf("%d", soma);
}
*/

/*6 - Faça um programa que mostre uma contagem regressiva na tela, iniciando em 10
e terminando em 0. Mostre uma mensagem “FIM!” após a contagem.*/

/*int main () {
    int i;
    for (i = 10; i >= 0; i--) {
        printf("%d ", i);
    }
    printf("FIM!");
}
*/

/*7 - Elabore um programa que peça ao usuário para digitar 10 valores. Some esses
valores e apresente o resultado na tela.*/

/*int main () {
    int i, a, soma;
    printf("Digite dez valores: ");
    for (i = 1; i <= 10; i++) {
        scanf("%d", &a);
        soma = soma + a;
    }
    printf("A soma final dos valores digitados eh: %d", soma);
}
*/

/*8 - Faça um programa que leia 10 inteiros e imprima sua média.*/

/*int main () {
    int a, i, soma;
    float media;
    printf("Digite 10 numeros: ");
    for (i = 1; i<= 10; i++) {
        scanf("%d", &a);
        soma = soma + a;
    }
    media = soma/10;
    printf("A media final dos numeros digitados eh: %f", media);
}
*/

/*9 - Escreva um programa que leia 10 números e escreva o menor valor lido e o maior
valor lido.*/

/*int main () {
    int a, i, menor, maior;
    printf("Digite 10 numeros: ");
    scanf("%d", &a);
    menor = maior = a;
    for (i = 2; i <= 10; i++) {
        scanf("%d", &a);       
        if (a < menor) {
            menor = a;
        }
        if (a > maior) {
            maior = a;
        }
    }
    printf("O maior e menor valor digitados, respectivamentem, foram: %d, %d", maior, menor);
}
*/

/*10 - Faça um programa que leia 10 inteiros positivos, ignorando não positivos, e imprima
sua média.*/

/*int main () {
    int i, a, soma = 0, j = 0;
    float media;
    printf("Digite 10 numeros: ");
    for (i = 1; i <= 10; i++) {
        scanf("%d", &a);
        if (a >= 0) {
            soma = soma + a;
            j = j + 1;
        }
        }
    media = (soma)/j;  
    printf("A media final eh: %f", media);
}
*/

/*11 - Faça um algoritmo que leia um número positivo e imprima seus divisores. Exemplo:
os divisores do número 66 são: 1, 2, 3, 6, 11, 22, 33 e 66.*/

/*int main () {
    int a, i;
    printf("Digite um numero positivo: ");
    scanf("%d", &a);
        
    if (a > 0) {
        printf("Os divisores do numero %d, sao: ", a);
        for (i = 1; i <= a; i++) {
            if (a % i == 0) {
                printf("%d ", i);
            }
        }
    }
    else {
        printf("O numero digitado %d, nao eh maior quer 0!", a);
    }
}
*/

/*12 - Escreva um programa que leia um número inteiro e calcule a soma de todos os
divisores desse número, com exceção dele próprio. Exemplo: a soma dos divisores
do número 66 é 1 + 2 + 3 + 6 + 11 + 22 + 33 = 78.*/

/*int main () {
    int i, a, soma;
    printf("Digite um numero: ");
    scanf("%d", &a);

    for (i = 1; i <= a - 1; i++) {
        if (a % i == 0) {
            printf("%d ", i);
            soma = soma + i;
        }
    }
    printf("\nA soma final dos divisores do numero %d, eh: %d ", a, soma);
}
*/

/*13 - Faça um programa que exiba a soma de todos os números naturais abaixo de
1.000 que são múltiplos de 3 ou 5.*/

/*int main () {
    int i, soma;
    for (i = 1; i <= 1000; i++) {
        if (i % 5 == 0 || i % 3 == 0) {
            soma = soma + i;
        }
    }
    printf("A soma final entre os numeros multiplos de 3 ou 5 ate 1000 sao: %d", soma);
}
*/

/*14 - Escreva um programa que leia um número inteiro, maior ou igual a zero, do usuário.
Imprima o enésimo termo da sequência de Fibonacci. Essa sequência começa
no termo de ordem zero, e, a partir do segundo termo, seu valor é dado pela soma
dos dois termos anteriores. Alguns termos dessa sequência são: 0, 1, 1, 2, 3, 5, 8,
13, 21, 34.*/

/*int main () {
    int a = 0, b = 1, c, i, termos;
    printf("Digite um numero: ");
    scanf("%d", &termos);
    if (termos == 0) {
        printf("%d", a);
    }
    else {
        for (i = 1; i <= termos; i++) {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;        
    }
    }   
}
*/

/*15 - Elabore um programa que faça a leitura de vários números inteiros até que se digite
um número negativo. O programa tem de retornar o maior e o menor número
lido.*/

/*int main () {
    int num, maior = 0, menor;
    printf("Digite um numero: ");
    while (num > -1) {
        scanf("%d", &num);
        if (num > maior) {
            maior = num;
        }
        else if (num < menor && num > -1) {
            menor = num;
        }
    }
    if (num < 0) {
        menor = num;
    }
    printf("O maior e o menor numero digitado respectivamente foram: %d e %d", maior, menor);    
}
*/


