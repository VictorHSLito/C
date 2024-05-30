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

/*struct origem {
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
*/

/*3 - Crie uma estrutura para representar as coordenadas de um ponto no plano (posições
X e Y). Em seguida, declare e leia do teclado dois pontos e exiba a distância
entre eles.*/

/*struct origem {
    int x, y, w, z;
};

int main() {
    float distancia;
    struct origem o;
    printf("Digite uma coordenada em um plano cartesiano: ");
    scanf("%d%d", &o.x, &o.y);
    printf("Agora digite uma outra coordenada: ");
    scanf("%d%d", &o.w, &o.z);
    distancia = sqrt((pow(o.x, 2) - pow(o.w, 2)) + (pow(o.y, 2) - pow(o.z, 2)));
    printf("A distancia entre os pontos digitados eh: %f", distancia);
    return 0;
}
*/

/*4 - Crie uma estrutura chamada Retângulo. Essa estrutura deverá conter o ponto
superior esquerdo e o ponto inferior direito do retângulo. Cada ponto é definido
por uma estrutura Ponto, a qual contém as posições X e Y. Faça um programa que
declare e leia uma estrutura Retângulo e exiba a área e o comprimento da diagonal
e o perímetro desse retângulo.*/

/*struct retangulo {
   int x, y;
};

int main () {
    float diagonal, perimetro;
    int area;
    struct retangulo r, s;
    printf("Digite as coordenadas do ponto superior esquerdo do retangulo: ");
    scanf("%d%d", &r.x, &r.y);
    printf("Agora digite as coordenadas do ponto inferior direito do retangulo: ");
    scanf("%d%d", &s.x, &s.y);
    area = abs((s.x - r.x)*(r.y - s.y));
    perimetro = 2 * ((s.x - r.x) + (r.y - s.y));
    diagonal = sqrt((pow(s.x, 2) - pow(r.x, 2)) + (pow(s.y, 2) - pow(r.y, 2)));
    printf("A area, o comprimento da diagonal e o perimetro desse retangulo valem, respectivamente: %d, %f, %f", area, diagonal, perimetro);
}
*/

/*5 - Usando a estrutura Retângulo do exercício anterior, faça um programa que declare
e leia uma estrutura Retângulo e um Ponto, e informe se esse ponto está ou não
dentro do retângulo.*/

struct ponto {
    int x, y;
};

struct retangulo {
    struct ponto p1, p2, p3, p4;   
};

int main () {
    struct retangulo ret;
    int x, y;
    printf("Digite as coordenadas dos pontos do retangulo\n");
    printf("Ponto A: ");
    scanf("%d%d", &ret.p1.x, &ret.p1.y);
    printf("Ponto B: ");
    scanf("%d%d", &ret.p2.x, &ret.p2.y);
    printf("Ponto C: ");
    scanf("%d%d", &ret.p3.x, &ret.p3.y);
    printf("Ponto D: "); 
    scanf("%d%d", &ret.p4.x, &ret.p4.y);
    printf("Agora digite um par ordenado de um ponto qualquer: ");
    scanf("%d%d", &x, &y);

    if ((ret.p1.x <= x && x <= ret.p3.x) && (ret.p2.y <= y && y <= ret.p4.y)) {
        printf("O ponto digitado esta no retangulo");
    } 
    else {
        printf("O ponto digitado nao esta no retangulo");
    }
}
