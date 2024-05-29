#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*1 - Implemente um programa que leia o nome, a idade e o endereço de uma pessoa e
armazene esses dados em uma estrutura. Em seguida, imprima na tela os dados da
estrutura lida.*/

/*typedef struct {
    char nome[20];
    int idade;
    char endereco[50];
} cad;

int main () {
    cad c;
    printf("Digite o seu nome: ");
    fgets(c.nome, sizeof(c.nome), stdin);
    printf("Digite a sua idade: ");
    scanf("%d", &c.idade);
    setbuf(stdin, NULL); //  É preciso limpar o buffer do teclado, ler página 138 e 289
    printf("Agora informe o seu endereco: ");
    fgets(c.endereco, sizeof(c.endereco), stdin);

    printf("Voce se chama %s, tem %d anos de idade e mora no seguinte endereco: %s", c.nome, c.idade, c.endereco);
    return 0;
}
*/

/*2 - Crie uma estrutura para representar as coordenadas de um ponto no plano (posições
X e Y). Em seguida, declare e leia do teclado um ponto e exiba a distância
dele até a origem das coordenadas, isto é, a posição (0,0).*/

struct origem {
    int x, y;
};

int main () {
    struct origem o;
    int x = 0, y = 0;
    float distancia;

    printf("Digite dois valores inteiros para uma coordenada no plano cartesiano: ");
    scanf("%d%d", &o.x, &o.y);
    distancia = sqrt((pow(o.x, 2) - x) + (pow(o.y, 2) - y));
    printf("A distancia do ponto digitado ate a origem (0, 0) eh: %f", distancia);
    return 0;
}
