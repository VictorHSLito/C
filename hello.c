#include <stdio.h>
#include <stdlib.h>

/*int main () {
    int x, z;
    float y;
    scanf("%d", &x);
    printf("O valor de x é: %d", &x);
    scanf("%f", &y);
    printf("O valor de y é: %f", &y);
    scanf("%d %f", &x, &y);
    printf("X: %d e Y: %f", &x, &y);
    scanf("%d %d", &x, &z);
    printf("X: %d e Z: %d", &x, &z);
    system("pause");
    return 0;
}*/

/*
int main () {
    int dia, mes, ano;
    scanf("%d/%d/%d", &dia, &mes, &ano);
    printf("Dia %d, Mes %d, Ano %d", dia, mes, ano);
    system("pause");
    return 0;
}
*/

#define PI 3.14159
const float Pi = 3.14159;

int main () {
    char c;
    printf("Digite um caractere: ");
    c = getchar();
    printf("Caractere: %c\n", c);
    printf("Codigo ASCII: %d\n", c);
    system("pause");
    return 0;
}