/*Elabore um programa que escreva as mensagens “Início do programa” e “Fim” na
tela, uma em cada linha, usando apenas um comando printf().*/

#include <stdio.h>
#include <stdlib.h>

/*int main () {
    printf("Inicio do programa\n");
    printf("Fim do programa\n");
    system("pause");
    return 0;
}
*/

/*Escreva um programa que leia um número inteiro e depois o imprima.*/

/*int main () {
    float x;
    printf("Digite um numero: ");
    scanf("%f", &x);
    printf("O numero digitado foi: %f", x);
}
*/

/*Escreva um programa que leia um número inteiro e depois imprima a mensagem
“Valor lido:”, seguido do valor inteiro. Use apenas um comando printf().*/

/*int main () {
    int x;
    scanf("%d", &x);
    printf("Valor lido: %d", x);
} 
*/

/*Faça um programa que leia um número inteiro e depois o imprima usando o operador
“%f”. Veja o que aconteceu.*/

/*int main () {
    int x;
    printf("Digite um numero inteiro: ");
    scanf("%d", &x);
    printf("O numero digitado foi: %f", x);  // x consta como valor 0, pois o tipo da variável é inteiro e
    return 0;                                // e foi passado uma chamada para um valor do tipo float
}
*/

/*Faça um programa que leia um valor do tipo float e depois o imprima usando o
operador “%d”. Veja o que aconteceu.*/

/*int main () {
    float x;
    printf("Digite um numero: ");
    scanf("%f", &x);
    printf("O valor digitado foi: %d", x); // Acontece a mesma coisa do exercício acima
    return 0;
}
*/

/*Faça um programa que leia um valor do tipo double e depois o imprima na forma
de notação científica.*/

/*int main () {
    double x;
    printf("Digite um numero: ");
    scanf("%lf", &x);  // lf é usado para variáveis do tipo double
    printf("O numero digitado foi: %e", x);
    return 0;
}
*/

/*Elabore um programa que leia um caractere e depois o imprima como um valor
inteiro.*/

/*int main () {
    char x;
    printf("Digite um caractere: ");
    x = getchar();
    printf("Caractere: %c", x);
    return 0;
}
*/

/*Faça um programa que leia dois números inteiros e depois os imprima na ordem
inversa em que eles foram lidos.*/

/*int main () {
    int a, b;
    printf("Digite dois numeros: ");
    scanf("%d", &a);
    scanf("%d", &b);
    printf("Os numeros digitados foram: %d e %d", b, a);
}
*/

/*Faça um programa que leia dois valores do tipo float. Use um único comando de
leitura para isso. Em seguida, imprima os valores lidos na ordem inversa em que eles
foram lidos.*/

/*int main () {
    float a, b;
    printf("Digite dois numeros: ");
    scanf("%f %f", &a, &b);
    printf("Os dois numeros digitados foram: %f e %f", a, b);
}
*/

/*Elabore um programa que solicite ao usuário entrar com o valor do dia, mês e ano
(inteiros). Em seguida, imprima os valores lidos separados por uma barra (\).*/

/*int main () {
    int dia, mes, ano;
    printf("Digite um dia, mes e ano: ");
    scanf("%d %d %d", &dia, &mes, &ano);
    printf("Voce digitou a seguinte data: %d/%d/%d", dia,  mes, ano);
}
*/

/*Elabore um programa que contenha uma constante qualquer do tipo float. Use o
comando #define. Imprima essa constante.*/

/*#define x 12.123111111133333333

int main () {
   printf("O valor de x e: %f", x);
}
*/

/*Elabore um programa que contenha uma constante qualquer do tipo int. Use o
comando const. Imprima essa constante.*/

/*int main () {
    const int a = 120; 
    printf("O valor da constante e: %d", a);
}
*/

/*Faça um programa que leia um caractere do tipo char e depois o imprima entre
aspas duplas. Assim, se o caractere lido for a letra A, deverá ser impresso “A”.*/

/*int main () {
    char a;
    printf("Digite um caractere: ");
    a = getchar();
    printf("O caractere digitado foi \"%c\"", a);
}

*/

/*Faça um programa que leia três caracteres do tipo char e depois os imprima um
em cada linha. Use um único comando printf() para isso.*/

/*int main () {
    char a, b, c;
    printf("Digite tres caracteres: ");
    scanf("%c %c %c", &a, &b, &c);
    printf("Os caracteres digitados foram: %c\n %c e \n %c", a, b, c);
}
*/

/*Escreva um programa que leia três variáveis: char, int e float. Em seguida, imprima-as
de três maneiras diferentes: separadas por espaços, por uma tabulação horizontal e
uma em cada linha. Use um único comando printf() para cada operação de escrita
das três variáveis.*/

int main () {
    char a;
    printf("Digite um caractere: ");
    scanf("%c", &a);
    int b = 12;
    float c = 12322.2222222222233;
    printf("%c %d %f \n", a, b, c);
    printf("%c / %d / %f \n", a, b, c);
    printf("%c \n%d \n%f", a, b, c);
}

