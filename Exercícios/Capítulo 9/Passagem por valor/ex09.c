/*Elabore uma função que receba três notas de um aluno como parâmetros e uma
letra. Se a letra for “A”, a função deverá calcular a média aritmética das notas do
aluno; se for “P”, deverá calcular a média ponderada, com pesos 5, 3 e 2. Retorne
a média calculada para o programa principal.*/

#include <stdio.h>


float calcula_media (float notas[], char letra) {
    float media;
    switch (letra) {
    case 'a':
        for (int i = 0; i < 3; i++) {
            media += notas[i];
        }
        media = media/3.0;
        break;
    case 'p': 
        media = (notas[0]*5 + notas[1]*3 + notas[2]*2)/10.0;
        break;
    }
    return media;
}  


int main () {
    int i;
    float notas[3], resultado;
    char caractere;

    printf("Digite 3 notas de um aluno: ");
    for (i = 0; i < 3; i++) {
        scanf("%f", &notas[i]);
    }
    
    printf("Agora digite 'A' para a media aritimetica ou 'P' para a ponderada:" );
    scanf(" %c", &caractere);

    if (caractere != 'a' && caractere != 'p') {
        printf("Voce digitou um caractere invalido!");
        return 0;
    }

    resultado = calcula_media(notas, caractere);
    printf("O resultado da media foi de %f", resultado);
}