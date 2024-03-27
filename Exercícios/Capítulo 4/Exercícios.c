#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*1 - Faça um programa que leia dois números e mostre qual deles é o maior.*/

/*int main () {
    int a, b;
    printf("Digite dois numeros: ");
    scanf("%d %d", &a, &b);
    if (a > b) {
        printf("%d eh maior que %d", a, b);
    }
    else {
        printf("%d eh maior que %d", b, a);
    }
        
}
*/

/*2 - Faça um programa que leia dois números e mostre o maior deles. Se, por acaso, os
dois números forem iguais, imprima a mensagem “Números iguais”.*/

/*int main () {
    int a, b;
    printf("Digite dois numeros: ");
    scanf("%d %d", &a, &b);
    if (a > b) {
        printf("%d eh maior que %d\n", a, b);
    }
    else {
        printf("%d eh maior que %d", b, a);
    }
    if (a == b) {
        printf("%d eh igual a %d", a, b);
    }    
}
*/

/*3 - Faça um programa que leia um número inteiro e verifique se esse número é par
ou ímpar.*/

/*int main () {
    int a;
    printf("Escreva um numero ");
    scanf("%d", &a);
    if (a % 2 == 0) {
        printf("O numero digitado eh par");
    }
    else {
        printf("O numero digitado eh impar");
    }
}
*/

/*4 - Faça um programa que leia o salário de um trabalhador e o valor da prestação de
um empréstimo. Se a prestação:
•• For maior que 20% do salário, imprima: “Empréstimo não concedido.”
•• Caso contrário, imprima: “Empréstimo concedido.”*/

/*int main () {
   float salario, prestacao;
   printf("Qual o salario do trabalhador? ");
   scanf("%f", &salario);
   printf("Qual o valor da prestacao? ");
   scanf("%f", &prestacao);

   if (prestacao > 1.2 * salario) {
    printf("Emprestimo nao concedido");
    }
   else {
    printf("Emprestimo concecido");
    }
}
*/

/*5 - Faça um programa que leia um número e, caso ele seja positivo, calcule e mostre:
•• O número digitado ao quadrado.
•• A raiz quadrada do número digitado.*/

/*int main () {
    int x;
    printf("Digite um numero: ");
    scanf("%d", &x);

    if (x >  0) {
        printf("O quadrado de %d eh: %f\n", x, pow(x, 2));
        printf("A raiz quadrada de %d eh: %f", x, sqrt(x));
    }
}
*/

/*6 - Faça um programa que receba a altura e o sexo de uma pessoa e calcule e mostre
seu peso ideal, utilizando as seguintes fórmulas (em que “h” corresponde à altura):
•• Homens: (72,7 * h) – 58
•• Mulheres: (62,1 * h) – 44,7*/

/*int main () {
    float altura, peso_ideal;
    char sexo;
    printf("Digite a sua altura (em metros): ");
    scanf("%f", &altura);
    printf("Agora digite o seu sexo [M/F]: ");
    scanf(" %c", &sexo);
    
    if (sexo == 'm' || sexo == 'M') {
        printf("O seu peso ideal eh de: %f", peso_ideal = (72.7 * altura) - 58);
    }
    else {
        printf("O seu peso ideal eh de: %f", peso_ideal = (62.1 * altura) - 44,7);
    }
}
*/

