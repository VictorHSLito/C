/*Elabore uma função que receba três números inteiros como parâmetro, representando
horas, minutos e segundos. A função deve retornar esse horário convertido em segundos.*/

#include <stdio.h>

int retorna_segundo (int hora, int minuto, int segundos) {
    int soma = 0;

    soma = segundos + (minuto*60) + (hora*60*60);
    return soma;
}

int main () {
    int hora, minuto, segundos, resultado;

    printf("Digite uma hora no seguinte formato hh:mm:ss: ");
    scanf("%d:%d:%d", &hora, &minuto, &segundos);

    resultado = retorna_segundo(hora, minuto, segundos);
    printf("A hora digitada corresponde a %d segundos!", resultado);
}