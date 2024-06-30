/*Elabore uma função que receba por parâmetros os coeficientes de uma equação do
segundo grau. Em seguida, calcule e mostre as raízes dessa equação. Retorne o número de raízes 
e as raízes (por referência) se elas existirem:
• Se Δ < 0, não existe real. Número de raízes: 0.
• Se Δ = 0, existe uma raiz real. Número de raízes: 1.
• Se Δ > 0, existem duas raízes reais. Número de raízes: 2*/


#include <stdio.h> 
#include <math.h>

int equacao (int a, int b, int c, float *raizdeltanegativo, float *raizdeltapositivo) {
    int delta;
    if (a == 0) {
        printf("Nao eh equacao do segundo grau!");
        return -1;
    }

    delta = (b)*(b) - 4*(a)*(c);
    if (delta < 0) {
        printf("Nao existe raiz real!");
        return 0;
    }

    else if (delta == 0) {
        *raizdeltapositivo = (-b)/2*(a);
        return 1;
    }

    else if (delta > 0) {
        *raizdeltapositivo = ((-b) + sqrt(delta))/2.0*(a);
        *raizdeltanegativo = ((-b) - sqrt(delta))/2.0*(a);
        return 2;
    }

    
}


int main () {
    int a, b, c, resultado;
    float raizdeltapositivo, raizdeltanegativo;
    printf("Digite os coeficientes da equacao do segundo grau: ");
    scanf("%d %d %d", &a, &b, &c);
    resultado = equacao(a, b, c, &raizdeltanegativo, &raizdeltapositivo);
    
    if (resultado == 1) {
        printf("\nNumero de raizes: %d\nRaiz: %f", resultado, raizdeltapositivo);
    }
    else if (resultado == 2) {
        printf("\nNumero de raizes: %d\nRaizes: %f, %f", resultado, raizdeltapositivo, raizdeltanegativo);
    }
}