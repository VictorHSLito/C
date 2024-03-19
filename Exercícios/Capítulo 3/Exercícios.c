#include <stdio.h>
#include <stdlib.h>

/*1 - Faça um programa que leia um número inteiro e retorne seu antecessor e seu sucessor.*/

/*int main () {
    int x;
    printf("Digite um numero: ");
    scanf("%d", &x);
    printf("O sucessor desse numero e: %d\n", x + 1);
    printf("O antecessor desse numero e %d\n", x - 1);
}
*/

/*2 - Faça um programa que leia um número real e imprima a quinta parte desse número.*/

/*int main () {
    float x;
    printf("Digite um numero: ");
    scanf("%f", &x);
    printf("A quinta parte desse numero e: %f", x/5);
}
*/

/*3 - Faça um programa que leia três valores inteiros e mostre sua soma.*/

/*int main () {
    int a, b, c;
    printf("Digite tres numeros: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("A soma desses numeros e: %d", a+b+c);
}
*/

/*4 - Leia quatro valores do tipo float. Calcule e exiba a média aritmética desses valores.*/

/*int main () {
    float a, b, c, d;
    printf("Digite quatro numeros: ");
    scanf("%f %f %f %f", &a, &b, &c, &d);
    printf("A media aritmetica desse numeros vale: %f", (a + b + c + d)/4);
}
*/

/*5 - Faça um programa que calcule o ano de nascimento de uma pessoa a partir de sua
idade e do ano atual.*/

/*int main () {
    int ano_atual = 2024, idade, ano_nasc;
    printf("Digite a sua idade: ");
    scanf("%d", &idade);
    ano_nasc = ano_atual - idade;
    printf("O seu ano de nascimento foi em %d", ano_nasc);
}
*/

/*6 - Leia uma velocidade em km/h (quilômetros por hora) e apresente convertida em
m/s (metros por segundo). A fórmula de conversão é M = K/36, sendo K a velocidade
em km/h e M em m/s.*/

/*int main () {
    float x, y;
    printf("Qual a velocidade (em km/h) a ser convertida? ");
    scanf("%f", &x);
    printf("A velocidade %f km/h e %f em m/s", x, y = x/3.6);
}
*/

/*7 - Faça um programa que leia um valor em reais e a cotação do dólar. Em seguida,
imprima o valor correspondente em dólares.*/

/*int main () {
    float real, dolar;
    printf("Digite o valor em reais a ser convertido em dolares: ");
    scanf("%f", &real);
    printf("O valor em dolares equivalente ao numero digitado e:\n");
    dolar = real/5.04;
    printf("%f", dolar);
}
*/

/*8 - Leia um valor que represente uma temperatura em graus Celsius e apresente-a
convertida em graus Fahrenheit. A fórmula de conversão é: F = C * (9.0/5.0) +
32.0, sendo F a temperatura em Fahrenheit e C a temperatura em Celsius.*/

/*int main () {
    float Celsius, Fahr;
    printf("Digite uma temperatura em graus Celsius: ");
    scanf("%f", &Celsius);
    printf("A temperatura em graus Fahrenheit e: %f", Fahr = Celsius * (9.0/5.0) + 32.0);
}
*/

/*9 - Leia um ângulo em graus e apresente-o convertido em radianos. A fórmula de
conversão é R = G * p/180, sendo G o ângulo em graus e R em radianos e π =
3.141592.*/

/*int main () {
    const float pi = 3.141592;
    float ang, res;
    printf("Digite um angulo, em graus, entre 0° a 360°: ");
    scanf("%f", &ang);
    printf("A conversao desse angulo em radianos equivale a: ");
    res = ang * pi/180;
    printf("%f", res);
}
*/

/*10 - A importância de R$780.000,00 será dividida entre três ganhadores de um concurso,
sendo que:
i. O primeiro ganhador receberá 46% do total.
ii. O segundo receberá 32% do total.
iii. O terceiro receberá o restante.
Calcule e imprima a quantia recebida por cada um dos ganhadores.*/

int main () {
    const int valor = 780000;
    float a, b, c;
    printf("O primeiro ganhador ganhou: %f\n", a = valor*(46.0/100));
    printf("O segundo ganhador ganhou: %f\n", b = valor*(32.0/100));
    printf("E por fim, o ultimo ganhador ganhou: %f", c = valor*(22.0/100));
}