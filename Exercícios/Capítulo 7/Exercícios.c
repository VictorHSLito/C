#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*1 - Faça um programa que leia uma string e a imprima na tela.*/

/*int main () {
    char str[10];

    printf("Digite algo: ");

    gets(str);

    printf("Voce digitou a frase: %s", str);
}
*/

/*2 - Faça um programa que leia uma string e imprima as quatro primeiras letras dela.*/

/*int main () {
    char str[20];
    int i;

    printf("Digite uma frase: ");
    
    gets(str);
    printf("Os quatro primeiros caracteres dessa frase sao:\n");

    for (i = 0; i < 4; i++) {
        printf("[%c] ", str[i]);
    }

}
*/

/*3 - Sem usar a função strlen(), faça um programa que leia uma string e imprima
quantos caracteres ela possui.*/

/*int main () {  
    char str[20];
    int i = 0, cont = 0;

    printf("Digite uma frase: ");

    gets(str);

    printf("O numero de caracteres dessa frase eh:");

    while (str[i] != '\0') {
        cont++;
        i++;
    }

    printf("%d", cont);
}

*/

/*4- Faça um programa que leia uma string e a imprima de trás para a frente.*/

/*int main () {
    char str[20];   
    int i, tamanho;

    printf("Digite algo: ");

    gets(str);

    tamanho = strlen(str);

    printf("Essa string de tras pra frente eh:\n");
    for (i = tamanho; i >= 0; i --) {
        printf("%c", str[i]);
    }
}
*/

/*5 - Faça um programa que leia uma string e a inverta. A string invertida deve ser
armazenada na mesma variável. Em seguida, imprima a string invertida.*/

/*int main () {
    char str[20], aux;
    int i, j, tamanho;

    printf("Digite uma frase: ");
    
    gets(str);

    tamanho = strlen(str);

    for (i = 0, j = tamanho - 1; i < j; i++, j--){
        aux = str[i];
        str[i] = str[j];
        str[j] = aux;
    }

    for (i = 0; i < tamanho; i++) {
        printf("%c", str[i]);
    }

}
*/
    /*Explicação:
    +---+---+---+---+---+---+
    | A | B | C | D | E | F |
    +---+---+---+---+---+---+
      ^                   ^
      |                   |
      i                   j
 
    +---+---+---+---+---+---+
    | F | B | C | D | E | A |
    +---+---+---+---+---+---+
          ^           ^
          |           |
          i           j

    +---+---+---+---+---+---+
    | F | E | C | D | B | A |
    +---+---+---+---+---+---+
              ^   ^
              |   |
              i   j
    */

/*6 - Leia uma string do teclado e conte quantas vogais (a, e, i, o, u) ela possui. Entre
com um caractere (vogal ou consoante) e substitua todas as vogais da palavra dada
por esse caractere. Ao final, imprima a nova string e o número de vogais que ela
possui.*/

/*int main () {
    char str[20], x;
    int i, tamanho, count;

    printf("Digite uma frase:");

    gets(str);
    tamanho = strlen(str);

    for (i = 0; i < tamanho; i++) {
        switch (str[i]) {
        case 'a':
            count++;
            break;
        case 'e':
            count++;
            break;
        case 'i':
            count++;
            break;
        case 'o':
            count++;
            break;
        case 'u':
            count++;
            break;
        default:
            break;
        }
        printf("%c", str[i]);
    }

    printf("\nEssa frase tem %d vogais!", count);

    printf("\nAgora digite um caractere:");
    scanf("%c", &x);

    for (i = 0; i < tamanho; i++) {
        switch (str[i]) {
        case 'a':
            str[i] = x;
            break;
        case 'e':
            str[i] = x;
            break;
        case 'i':
            str[i] = x;
            break;
        case 'o':
            str[i] = x;
            break;
        case 'u':
            str[i] = x;
            break;
        default:
            break;
        }
    }

    printf("A nova frase formada eh:\n");
    for (i = 0; i < tamanho; i++) {
        printf("%c", str[i]);
    }

}
*/

/*7 - Faça um programa que leia uma string e imprima uma mensagem dizendo se ela
é um palíndromo ou não. Um palíndromo é uma palavra que tem a propriedade
de poder ser lida tanto da direita para a esquerda como da esquerda para a direita.
Exemplos: ovo, arara, rever, asa, osso etc.*/

/*int main () {
    char str[20];
    int i, j, tamanho;

    printf("Digite uma palavra:");
    
    scanf("%s", str);

    tamanho = strlen(str);

    for (i = 0, j = tamanho - 1; i <= j; i++, j--){
        if (str[j] != str[i]) {
            printf("Nao eh palindromo");
            return 0;
        }
    }

    printf("Eh Palindromo\n");

}  
*/

/*8 - Construa um programa que leia duas strings do teclado. Imprima uma mensagem
informando se a segunda string lida está contida dentro da primeira.*/

/*int main () {
    char str1[30], str2[20];
    int i, j, tamanho1, tamanho2, encontrado = 0;

    printf("Digite uma frase: ");

    gets(str1);
    tamanho1 = strlen(str1);

    printf("\nAgora digite uma outra frase: ");

    gets(str2);
    tamanho2 = strlen(str2);

    for (i = 0; i <= tamanho1 - tamanho2; i++) {   // Irá percorrer a str1 a partir do ínicio até o ponto em que a str2 não
                                                   // cabe mais em str1
        encontrado = 1;
        for (j = 0; j < tamanho2; j++) {
            if (str1[i+j] != str2[j]) {
                encontrado = 0;
                break;
            }
        }
        if (encontrado) {
            break;
        }
    }
    
    if (encontrado) {
        printf("\"%s\" esta contida em \"%s\"\n", str2, str1);
    } 
    else {
        printf("\"%s\" nao esta contida em \"%s\"\n", str2, str1);
    }
                    //REVISAR ESTE EXERCÍCIO DEPOIS
}
*/

/*9 - Construa um programa que leia duas strings do teclado. Imprima uma mensagem
informando quantas vezes a segunda string lida está contida dentro da primeira.*/

/*int main () {
    char str1[30], str2[20];
    int i, j, tamanho1, tamanho2, encontrado = 0, quant = 0;

    printf("Digite uma frase: ");
    gets(str1);
    tamanho1 = strlen(str1);

    printf("Agora digite outra frase: ");
    gets(str2);
    tamanho2 = strlen(str2);

    for (i = 0; i <= tamanho1 - tamanho2; i++) {
        encontrado = 1;
        for (j = 0; j < tamanho2; j++) {
            if (str1[i + j] != str2[j]) {
                encontrado = 0;
                break;
            }
        }
        if (encontrado) {
            quant++;
            j = 0;
        }
        else {
            j = 0;
        }
    }

    if (encontrado) {
        printf("A string \'%s\' aparece %d na string \'%s\'!", str2, quant, str1);
    }
    else {
        printf("A string \'%s\' nao aparece na string \'%s\'", str2, str1);
    }
}
*/


/*Testei usando a palavra Banana e a substring ana, funcionou, porém algumas palavras não funcionam*/

/*10 - Escreva um programa que leia uma string do teclado e converta todos os seus
caracteres em maiúscula. Dica: subtraia 32 dos caracteres cujo código ASCII está
entre 97 e 122.*/

/*int main () {
    char str[20];
    int i;

    printf("Digite uma frase: ");

    gets(str);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' || str[i] == '\n') {
            continue;
        }
        else {
            str[i] = str[i] - 32;
        }
    }

    printf("%s\n", str);
}
*/

/*11 - Escreva um programa que leia uma string do teclado e converta todos os seus caracteres
em minúscula. Dica: some 32 dos caracteres cujo código ASCII está entre
65 e 90.*/

/*int main () {
    char str[20];
    int i;

    printf("Digite algo: ");

    gets(str);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' || str[i] == '\n') {
            continue;
        }
        else {
            str[i] = str[i] + 32;
        }
    }

    printf("%s\n", str);
}
*/

/*12 - Escreva um programa que leia o nome e o valor de determinada mercadoria de
uma loja. Sabendo que o desconto para pagamento à vista é de 10% sobre o valor
total, calcule o valor a ser pago à vista. Escreva o nome da mercadoria, o valor
total, o valor do desconto e o valor a ser pago à vista.*/

/*int main () {
    char str[20];
    float valor, desconto, final;

    printf("Digite o nome do produto: ");
    gets(str);

    printf("Agora digite o valor do produto: ");
    scanf("%f", &valor);

    printf("O pagamento a vista tem 10%% de desconto\n"); // Repetir o "%" para aparecer no print

    desconto = 9.0/10;
    final = valor*desconto;

    printf("Nome do produto: %s\nValor total do produto: %f\nValor do desconto: %f\nValor pago a vista: %f", str, valor, desconto, final);
}
*/

/*13 - Escreva um programa que recebe uma string S e dois valores inteiros não negativos
i e j. Em seguida, imprima os caracteres contidos no segmento que vai de i a j
da string S.*/

/*int main () {
    char str[20];
    int i, j, aux;

    printf("Digite uma frase: ");

    gets(str);

    printf("Agora digite dois numeros naturais: ");

    scanf("%d", &i);
    scanf("%d", &j);

    if (j > i) {
        for (aux = i; aux < j; aux++) {
        printf("%c ", str[aux]);
        }
    }
    
    else {
        for (aux = j; aux < i; aux ++) {
            printf("%c ", str[aux]);
        }
    }
}
*/

/*14 - O código de César é uma das técnicas de criptografia mais simples e conhecidas.
É um tipo de substituição no qual cada letra do texto é substituída por outra,
que se apresenta n posições após ela no alfabeto. Por exemplo, com uma troca de
três posições, a letra A seria substituída por D, B se tornaria E e assim por diante.
Escreva um programa que faça uso desse código de César para três posições. Entre
com uma string e imprima a string codificada. Exemplo:
String: a ligeira raposa marrom saltou sobre o cachorro cansado
Nova string: d oljhlud udsrvd pduurp vdowrx vreuh r fdfkruur fdqvdgr*/

/*int main () {
    char str[100];
    int i;

    printf("Digite uma frase: ");

    gets(str);

    printf("A string digitada foi: %s\n", str);

    printf("A string codificada eh: ");
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
        str[i] = str[i] + 3;
        }
        printf("%c", str[i]);
    }
}
*/

/*15 - Escreva um programa que leia duas strings e as imprima em ordem alfabética, a
ordem em que elas apareceriam em um dicionário.*/

int main(){
    char palavra1[50], palavra2[50];
    int i;
    printf("Digite uma palavra: ");
    fgets(palavra1, 50, stdin);
    printf("Agora digite outra palavra: ");
    fgets(palavra2, 50, stdin);
    
    for(i = 0; palavra1[i] != '\0'; i++){
        if(palavra1[i] < palavra2[i]){
            printf("\n%s%s", palavra1, palavra2);
            break;
        }
        else if(palavra1[i] > palavra2[i]){
            printf("\n%s%s", palavra2, palavra1);
            break;
        }
    }
    return 0;
}

