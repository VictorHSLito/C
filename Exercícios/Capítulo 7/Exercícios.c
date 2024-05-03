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

