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
/*7 - Uma empresa vende o mesmo produto para quatro diferentes estados. Cada estado
possui uma taxa diferente de imposto sobre o produto. Faça um programa
em que o usuário entre com o valor e o estado de destino do produto e o programa
retorne o preço final do produto acrescido do imposto do estado em que
ele será vendido. Se o estado digitado não for válido, mostrará uma mensagem
de erro.
MG - 7%
SP - 12%
RJ - 15%
MS - 8%*/

/*int main () {
    float valor;
    char estado;
    printf("Digite um valor e um estado: ");
    scanf("%f %c", &valor, &estado);
    switch (estado)
    {
        case 'MG': {
            printf("Preço final = %f", valor = valor*1.07);
            break;
        }            
        case 'SP': {
            printf("Preço final = %f", valor = valor*1.12);
            break;
        }            
        case 'RJ': {
            printf("Preço final = %f", valor = valor*1.15);
            break;
        }            
        case 'MS': {
            printf("Preço final = %f", valor = valor*1.08);
            break;
        }           
        default: {
            printf("Nao foi digitado um estado valido!");
            break;
        }
            
    }
}
*/

/*8 - Escreva um programa que, dada a idade de um nadador, o classifique em uma das
seguintes categorias:
Infantil A 5-7
Infantil B 8-10
Juvenil A 11-13
Juvenil B 14-17
Sênior maiores de 18 anos*/

/*int main () {
    int idade;
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    if (idade >= 5 && idade <= 7) {
        printf("Infantil A");
    }
    else {
        if (idade >= 8 && idade <= 10) {
            printf("Infantil B");
        }
        else {
            if (idade >= 11 && idade <= 13) {
                printf("Juvenil A");
            }
            else {
                if (idade >= 14 && idade <= 17) {
                    printf("Juvenil B");
                }
                else {
                    printf("Senior");
                }
            }
        }
    }
}
*/

/*9 - Faça um programa que leia a altura e o peso de uma pessoa. De acordo com a
tabela a seguir, verifique e mostre qual a classificação dessa pessoa.
Menor do que 1,20 A D G
1,20-1,70 B E H
Maior do que 1,70 C F I*/

/*int main () {
    int idade;
    float altura;
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Agora digite sua altura (em metros): ");
    scanf("%f", &altura);
    if (idade <= 60 && altura <= 1.20) {
        printf("Classificacao A");
    if (idade > 60 && idade <= 90 && altura <= 1.20)
        printf("Classificacao D");
    }
    if (idade > 90 && altura <= 1.20) {
        printf ("Classificacao G");
    }
    if (altura > 1.20 && altura <= 1.70 && idade <= 60) {
        printf("Classificacao B");
    }
    if (altura > 1.20 && altura <= 1.70 && idade > 60 && idade <= 90) {
        printf("Classificacao E");
    }
    if (altura > 1.20 && altura <= 1.70 && idade > 90) {
        printf("Classificacao H");
    }
    if (altura > 1.70 && idade <= 60) {
        printf("Classificacao C");
    }
    if (altura > 1.70 && idade > 60 && idade <= 90) {
        printf("Classificacao F");
    }
    if (altura > 1.70 && idade > 90) {
        printf("Classificacao I");
    }
}
*/

/*10 - Faça um programa que leia três números inteiros positivos e efetue o cálculo de
uma das seguintes médias de acordo com um valor numérico digitado pelo usuário
e mostrado na tabela a seguir:
1 Geométrica;
2 Ponderada;
3 Harmônica;
4 Aritmética;*/

/*int main () {
    int a, b, c, numero;
    printf("Digite tres numeros: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("Agora digite un numero de 1 a 4: ");
    scanf("%d", &numero);

    switch (numero) {
        case 1: {
            printf("A media geometrica dos numeros é: %d", a*b*c);
            break;
        }
        case 2: {
            printf("A media ponderada dos numeros vale: %f", (float)(a + 2*b + 3*c)/6);
            break;
        }
        case 3: {
            printf("A media harmonica dos numeros vale: %f", 1.0/(1.0/a + 1.0/b + 1.0/c));
            break;
        }
        case 4: {
            printf("A media aritmetica dos numeros vale: %f", (float)(a+b+c)/3);
            break;
        }
        default:{
            printf("Nao foi selecionada uma opcao valida!");
            break;
        }

    }
}
*/

/*12 - Faça um programa que informe o mês de acordo com o número digitado pelo
usuário. Exemplo: Entrada = 4. Saída = Abril.*/

/*int main () {
    int numero;
    printf("Digite um numero de 1 a 12: ");
    scanf("%d", &numero);

    switch (numero)
    {
    case 1:
        printf("O mes correspondente ao numero %d eh Janeiro", numero);
        break;
    case 2:
        printf("O mes correspondente ao numero %d eh Fevereiro", numero);
        break;
    case 3:
        printf("O mes correspondente ao numero %d eh Março", numero);
        break;
    case 4:
        printf("O mes correspondente ao numero %d eh Abril", numero);
        break;
    case 5:
        printf("O mes correspondente ao numero %d eh Maio", numero);
        break;
    case 6:
        printf("O mes correspondente ao numero %d eh Junho", numero);
        break;
    case 7:
        printf("O mes correspondente ao numero %d eh Julho", numero);
        break;
    case 8:
        printf("O mes correspondente ao numero %d eh Agosto", numero);
        break;
    case 9:
        printf("O mes correspondente ao numero %d eh Setembro", numero);
        break;
    case 10:
        printf("O mes correspondente ao numero %d eh Outubro", numero);
        break;
    case 11:
        printf("O mes correspondente ao numero %d eh Novembro", numero);
        break;
    case 12:
        printf("O mes correspondente ao numero %d eh Dezembro", numero);
        break;
    default:
        printf("Nao foi digitado um numero valido!");
        break;
    }
}
*/

/*12 - Usando o comando switch, escreva um programa que leia um inteiro entre 1 e 7
e imprima o dia da semana correspondente a esse número. Isto é, domingo, se 1,
segunda-feira, se 2, e assim por diante.
*/

/*int main () {
    int numero;
    printf("Digite um numero de 1 a 7: ");
    scanf("%d", &numero);

    switch (numero)
    {
    case 1:
        printf("O dia correspondente ao numero %d eh Domingo", numero);
        break;
    case 2:
        printf("O mes correspondente ao numero %d eh Segunda", numero);
        break;
    case 3:
        printf("O mes correspondente ao numero %d eh Terça", numero);
        break;
    case 4:
        printf("O mes correspondente ao numero %d eh Quarta", numero);
        break;
    case 5:
        printf("O mes correspondente ao numero %d eh Quinta", numero);
        break;
    case 6:
        printf("O mes correspondente ao numero %d eh Sexta", numero);
        break;
    case 7:
        printf("O mes correspondente ao numero %d eh Sabado", numero);
        break;
    }
}
*/

/*13 - Faça um programa que mostre ao usuário um menu com quatro opções de operações
matemáticas (as operações básicas, por exemplo). O usuário escolhe uma
das opções, e o seu programa pede dois valores numéricos e realiza a operação,
mostrando o resultado.*/

int main () {
    int n1, n2, primo, i, j;
    printf("Digite um numero: ");
    scanf("%d", &n1);
    printf("Digite um outro numero: ");
    scanf("%d", &n2);
    primo = 1;
    for (i = n1; i <= n2; i++) {
        for (j = 2; j <= i; j++) {
            if (i % j == 0) {
                primo = 0;
                break;
            }
        }
    if (primo && i > 1) {
        printf("%d", i);
    }
    }
}
