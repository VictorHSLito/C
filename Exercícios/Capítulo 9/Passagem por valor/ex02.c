/*Faça uma função que receba um número inteiro de 1 a 12 e imprima em tela o
mês e a sua quantidade de dias de acordo com o número digitado pelo usuário.
Exemplo: Entrada = 4. Saída = abril.*/

#include <stdio.h>

const char* mes (int x) {
    switch (x) {
    case 1:
        return "Janeiro";
    case 2:
        return "Fevereiro";
    case 3:
        return "Marco";
    case 4:
        return "Abril";
    case 5:
        return "Maio";
    case 6:
        return "Junho";
    case 7:
        return "Julho";
    case 8:
        return "Agosto";
    case 9:
        return "Setembro";
    case 10:
        return "Outubro";
    case 11:
        return "Novembro";
    case 12:
        return "Dezembro";
    default:
        return ("Mes invalido!");
    }
}


int main () {
    int i;
    const char* nome_mes;

    printf("Digite um número de 1 a 12: ");
    scanf("%d", &i);

    nome_mes = mes(i);
    printf("O mes digitado foi %s", nome_mes);
}