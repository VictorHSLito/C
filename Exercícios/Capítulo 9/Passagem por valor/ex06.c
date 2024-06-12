/*Escreva uma função que receba o peso (quilos) e a altura (metros) de uma pessoa.
Calcule e retorne o IMC (índice de massa corporal) dessa pessoa: IMC = peso/(altura * altura)*/

#include <stdio.h>

float calcula_imc (float peso, float altura) {
    float IMC;

    IMC = peso/(altura*altura);

    return IMC;
}

char* IMC (float resultado) {
    if (resultado > 40) {
        return "Obesidade Grau III";
    }

    else if (resultado <= 39.9 && resultado > 35 ) {
        return "Obesidade Grau II";
    }

    else if (resultado <= 34.9 && resultado > 30 ) {
        return "Obesidade Grau I";
    }

    else if (resultado <= 29.9 && resultado > 25 ) {
        return "Sobrepeso";
    }

    else if (resultado <= 24.9 && resultado > 18.5 ) {
        return "Normal";
    }

    else {
        return "Magreza";
    }

}


int main () {
    float peso, altura, resultado_calculo;
    char* resultado_imc;
    printf("Digite o seu peso e altura: ");
    scanf("%f %f", &peso, &altura);

    resultado_calculo = calcula_imc(peso, altura);
    resultado_imc = IMC(resultado_calculo);
    printf("O seu IMC eh: %f\nE seu IMC corresponde ao nivel %s", resultado_calculo, resultado_imc);
}