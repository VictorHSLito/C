#include <stdio.h>
#include <stdlib.h>
#include <math.h>

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

/* #define PI 3.14159
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

*/

/* const int z = 9;
int main () {
    float x;
    float y = 3;
    x = 5;
    printf("x = %f\n", x);
    x = z;
    printf("x = %f\n", x);
    x = y + 5;
    printf("x = %f\n", x);
    x = printf("x = %f\n", sqrt(9));
}
*/

/*int main() {
    int x = 65;
    char ch;
    float f = 25.1;
    //ch recebe 8 bits menos significativos de x
    //converte para a tabela ASCII
    ch = x;
    printf("ch = %c\n", ch);
    x = f;    //x recebe parte apenas a parte inteira de f
    printf("x = %d\n", x);
    f = ch;    //f recebe valor 8 bits convertido para real
    printf("f = %f\n", f);
    f = x;    //f recebe o valor de x
    printf("f = %f\n", f);
}
*/

/*int main () {
    int x = 5;
    int y = 3;
    printf("Resultado: %d\n", x > 4); // Se verdadeiro, o resultado irá retornar igual a 1
    printf("Resultado: %d\n", x >= 5);
    printf("Resultado: %d\n", x < 3); // Se falso, o resultado irá retornar igual a 0
    printf("Resultado %d\n", y == 3);
    printf("Resultado %d\n", y > 2);
    printf("Resultado %d\n", y != 0);
    printf("Resultado %d\n", y < 2);
}
*/

/*int main () {
    int r, x = 5, y = 3;
    r = (x > 2) && (y < x);
    printf("Resultado: %d\n", r);
    r = (x%2 == 0) && (y > 0);
    printf("Resultado: %d\n", r);
    r = (x > 2) || (y < 0);
    printf("Resultado: %d\n", r);
    r = !(x > 2);
    printf("Resultado %d\n", r);
    r = !(x > 7) && (x > y);
    printf("Resultado: %d\n", r);
}
*/

/*int main () {
    unsigned char x, y;
    x = 44;
    printf("x = %d\n", x);
    y = ~x;  // operador de complemento bit a bit
    printf("~x = %d\n", y);
//  O operador de complemento bit a bit faz com que complemente o número,
//  por exemplo 44 em número binário é: 00101100, o complemento desse número seria
//  11010011, logo 211.
}
*/

/*int main () {
    unsigned char x, y;
    x = 44;
    printf("x = %d\n", x);
    y = x & 167;
    printf("x & 167 = %d\n", y);
    y = x | 129;
    printf("x | 129 = %d\n", y);
    y = x ^ 167;
    printf("x ^ 167 = %d\n", y);

}*/

/*Operador E bit a bit (&): um bit terá valor 1 na expressão resultante somente
se ambas as expressões unidas por esse operador também tiverem o valor 1 nos
bits daquela posição:
- 00101100 = x (valor igual a 44)
- 10100111 = 167
- 00100100 = x & 167 (valor igual a 36)*/

/*Operador OU bit a bit (|): um bit terá valor 1 na expressão resultante se alguma
das expressões unidas por esse operador também tiver o valor 1 no bit daquela
posição:
- 00101100 = x (valor igual a 44)
- 10000001 = 129
- 10101101 = x | 129 (valor igual a 173)*/

/*Operador OU EXCLUSIVO bit a bit (^): um bit terá valor 1 na expressão
resultante somente se ambas as expressões unidas por esse operador tiverem
valores de bits diferentes naquela posição:
- 00101100 = x (valor igual a 44)
- 10100111 = 167
- 10001011 = x ^ 167 (valor igual a 139)*/

/*int main() {
    unsigned char x, y;
    x = 44;
    printf("x = %d\n", x);
    y = x << 2;
    printf("x << 2 = %d\n", y);
    y = x >> 2;
    printf("x >> 2 = %d\n", y);
}
*/

/*Basicamente, os operadores de deslocamento << e >> movimentam todos os bits de
um valor para a esquerda ou para a direita, colocando novos valores de bits (que podem
ser 0s ou 1s) nos lugares vagos.*/

// Array

/*int main () {
    int notas[5], i;
    printf("Digite a nota de 5 alunos\n");
    for (i = 1; i <= 5; i++) {
        printf("Nota do aluno %d: ", i);
        scanf("%d", &notas[i]);
    }
}
*/

/*int main () {
    int vet[5] = {1, 3, 2, 4, 1}, i; // É possível inicializar um array da seguinte forma.

    for (i = 0; i < 5; i++) {
        printf("%d ", vet[i]);
    }
}
*/

// Matriz

/*int main () {
    int matriz[3][3], i, j, c;
    printf("Digite alguns numeros: ");

    for (i = 1; i <= 3; i++) {
        for (j = 1; j <= 3; j++) {
            printf("Digite o valor da posicao da matriz [%d] [%d]", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}
*/

// Estrutura Struct

/*struct cadastro {
    char nome[50];
    int idade; 
    char rua[50];
    int numero;
};

int main (void) {
    int i = 0;
    struct cadastro c[4];
    printf("Digite o nome, idade, rua e numero para 4 pessoas:\n");
    for (i = 0; i < 4; i++) {
        fgets(c[i].nome, sizeof(c[i].nome), stdin);
        scanf("%d", &c[i].idade);
        fgets(c[i].rua, sizeof(c[i].rua), stdin);
        scanf("%d", &c[i].numero);
    }
    system("pause");
    return 0;
}*/

// Estruturas aninhadas

/*struct endereco {
    char rua[50];
    int numero;
};

struct cadastro {
    char nome[50];
    int idade;
    struct endereco ender;
};

int main (void) {
    struct cadastro c;
    fgets(c.nome, sizeof(c.nome), stdin);
    scanf("%d", &c.idade);
    fgets(c.ender.rua, sizeof(c.ender.rua), stdin);
    scanf("%d", &c.ender.numero);
    return 0;
}
*/

// Estrutura Union

/*union tipo {
    int idade;
    char nome [50];
};*/

/*A diferença entre struct e union é que a estrutura STRUCT reserva espaço de memória para todos
os seus elementos, enquanto a estrutura UNION reserva espaço de memória para o seu maior elemento
e compartilha essa memória com os demais.*/

union tipo {
    short int x;
    unsigned char c;
};

int main(void) {
    union tipo t;
    t.x = 1545;
    printf("x = %d\n", t.x);
    printf("c = %d\n", t.c);
    t.c = 69;
    printf("x = %d\n", t.x);
    printf("c = %d\n", t.c);
    return 0;
}

/*Nesse exemplo, a variável x é do tipo short int e ocupa 16 bits (dois bytes) de memória.
Já a variável c é do tipo unsigned char e ocupa os oito primeiros bits (um byte)
de x. Quando atribuímos o valor 1545 à variável x, a variável c recebe a porção de x
equivalente ao número 9*/

/*Como o tipo short int ocupa 16 bits, dois bytes ficaria +/- assim na memória do computador:
[0 0 0 0 0 1 1 0] [0 0 0 0 1 0 0 1]
     1º Byte            2º Byte
Como unsigned char c ocupa apenas 1 byte, ele lê o byte menos significativo de t.x (O byte mais significativo, geralmente
é o byte mais a esquerda, no caso o 1º Byte.) que no caso é o 2º Byte, que equivale a 9, por isso no printf ele imprime 9.
E quando é atribuido o valor de 69 para o unsigned char c, ele também muda o valor de x.*/

