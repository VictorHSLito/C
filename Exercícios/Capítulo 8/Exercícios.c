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

/*struct ponto {
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
*/

/*6 - Crie uma estrutura representando um aluno de uma disciplina. Essa estrutura
deve conter o número de matrícula do aluno, seu nome e as notas de três provas.
Agora, escreva um programa que leia os dados de cinco alunos e os armazena nessa
estrutura. Em seguida, exiba o nome e as notas do aluno que possui a maior média
geral dentre os cinco.*/

/*struct aluno {
    int matricula;
    char nome [50];
    float nota1, nota2, nota3, media;
};

int main () {
    struct aluno a[5];
    int i, aux = 0;
    float maior;

    for (i = 0; i < 5; i++) {
        printf("Matricula Aluno [%d]: ", i);
        scanf("%d", &a[i].matricula);
        setbuf(stdin, NULL);
        printf("Nome Aluno [%d]: ", i);
        fgets(a[i].nome, sizeof(a[i].nome), stdin);
        setbuf(stdin, NULL);
        printf("Notas do Aluno [%d]: ", i);
        scanf("%f%f%f", &a[i].nota1, &a[i].nota2, &a[i].nota3);
        setbuf(stdin, NULL);
        a[i].media = (a[i].nota1 + a[i].nota2 + a[i].nota3)/3.0;
    }

    maior = a[0].media;
    for (i = 1; i < 5; i++) {
        if (a[i].media > maior) {
            maior = a[i].media;
            aux = i;
        }
    }
    printf("O aluno com maior media foi %s, com media %f e notas: %f; %f; %f", a[aux].nome, a[aux].media, a[aux].nota1, a[aux].nota2, a[aux].nota3);
    return 0;
}
*/

/*7 - Crie uma estrutura representando uma hora. Essa estrutura deve conter os campos
hora, minuto e segundo. Agora, escreva um programa que leia um vetor de cinco
posições dessa estrutura e imprima a maior hora.*/

/*struct hora {
    int hora, minutos, segundos;
};

int main () {
    struct hora h[5];
    int i, maior_hora, maior_minuto, maior_segundos, aux = 0;
    printf("Digite 5 horarios diferentes, no seguinte formato hh:mm:ss\n");
    for (i = 0; i < 5; i++) {
        printf("Horario [%d]: ", i+1);
        scanf("%d %d %d", &h[i].hora, &h[i].minutos, &h[i].segundos);
    }
    maior_hora = h[0].hora;
    maior_minuto = h[0].minutos;
    maior_segundos = h[0].segundos;

    for (i = 1; i < 5; i++) {
        if (h[i].hora > maior_hora) {
            maior_hora = h[i].hora;
            aux = i;
        }
        else if (h[i].hora == maior_hora) {
            if (h[i].minutos > h[aux].minutos) {
                aux = i;
                maior_minuto = h[aux].minutos;
            }
            
        }
        else if (h[i].segundos == maior_segundos) {
            if (h[i].segundos > h[aux].segundos) {
                aux = i;
                maior_segundos = h[aux].segundos;
            }
        }
    }

    printf("A maior hora digitada foi a de %d:%d:%d", h[aux].hora, h[aux].minutos, h[aux].segundos);
}
*/

/*8 - Crie uma estrutura capaz de armazenar o nome e a data de nascimento de uma
pessoa. Agora, escreva um programa que leia os dados de seis pessoas. Calcule e
exiba os nomes da pessoa mais nova e da mais velha.*/

/*typedef struct pessoa {
    char nome[50];
    int dia, mes, ano;
} p;

int main () {
    p pessoa[6];
    int i, aux1, aux2, maior, menor;

    printf("Digite o nome de 6 pessoas e a sua respectiva data de nascimento\n");

    for (i = 0; i < 6; i++) {
        printf("Nome: ");
        fgets(pessoa[i].nome, sizeof(pessoa[i].nome), stdin);
        setbuf(stdin, NULL);
        printf("Data de nascimento [dd/mm/aa]\n");
        scanf("%d%d%d", &pessoa[i].dia, &pessoa[i].mes, &pessoa[i].ano);
        setbuf(stdin, NULL);
    }

    maior = menor = pessoa[0].ano;

    for (i = 1; i < 6; i++) {
        if (pessoa[i].ano > menor) {
            menor = pessoa[i].ano;
            aux1 = i;
        }
    }

    for (i = 1; i < 6; i++) {
        if (pessoa[i].ano < maior) {
            maior = pessoa[i].ano;
            aux2 = i;
        }
    }

printf("Pessoa mais velha:\nNome: %sData de Nascimento: %d/%d/%d\n", pessoa[aux2].nome, pessoa[aux2].dia, pessoa[aux2].mes, pessoa[aux2].ano);
printf("Pessoa mais nova:\nNome: %sData de Nascimento: %d/%d/%d", pessoa[aux1].nome, pessoa[aux1].dia, pessoa[aux1].mes, pessoa[aux1].ano);
}
*/

/*9 - Crie uma estrutura representando um atleta. Essa estrutura deve conter o nome
do atleta, seu esporte, idade e altura. Agora, escreva um programa que leia os
dados de cinco atletas. Calcule e exiba os nomes do atleta mais alto e do mais
velho.*/

/*struct atleta {
    char nome[50], esporte[20];
    int idade;
    float altura;
};  

int main () {
    struct atleta a[5];
    int i, maior, mais_velho, aux1, aux2;
    
    printf("Cadastre 5 atletas:\n");

    for (i = 0; i < 5; i++) {
        printf("Nome do atleta [%d]: ", i+1);
        fgets(a[i].nome, sizeof(a[i].nome), stdin);
        setbuf(stdin, NULL);
        printf("Esporte: ");
        scanf("%s", a[i].esporte);        
        printf("Idade e altura: ");
        scanf("%d %f", &a[i].idade, &a[i].altura);
        setbuf(stdin, NULL);
    }

    maior = a[0].altura;
    mais_velho = a[0].idade;

    for (i = 1; i < 5; i++) {
        if (a[i].idade > mais_velho) {
            mais_velho = a[i].idade;
            aux1 = i;
        }
        if (a[i].altura > maior) {
            maior = a[i].altura;
            aux2 = i;
        }
    }

    printf("O atleta mais velho se chama %s, com %d anos e o mais alto se chama %s com %f de altura", a[aux1].nome, a[aux1].idade, a[aux2].nome, a[aux2].altura);
}   
*/

/*10 - Usando a estrutura “atleta” do exercício anterior, escreva um programa que leia os
dados de cinco atletas e os exiba por ordem de idade, do mais velho para o mais
novo.*/

/*struct atleta {
    char nome[50];
    int idade;
};

int main () {
    struct atleta a[5], temp;
    int i, j;

    printf("Digite o nome a e idade de 5 atletas\n");
    for (i = 0; i < 5; i++) {
        printf("Nome do atleta [%d]: ", i+1);
        fgets(a[i].nome, sizeof(a[i].nome), stdin);
        setbuf(stdin, NULL);
        printf("Idade do atleta [%d]: ", i+1);
        scanf("%d", &a[i].idade);
        setbuf(stdin, NULL);
    }

    for (i = 0; i < 4; i++) {
        for (j = i + 1; j < 5; j++) {
            if (a[i].idade < a[j].idade) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    for (i = 0; i < 5; i++) {
        printf("Nome: %sIdade: %d\n", a[i].nome, a[i].idade);
    }
}
*/

/*11 - Escreva um programa que contenha uma estrutura representando uma data válida.
Essa estrutura deve conter os campos dia, mês e ano. Em seguida, leia duas datas
e armazene nessa estrutura. Calcule e exiba o número de dias que decorreram
entre as duas datas.*/

/*struct data {
    int dia, mes, ano;
};

int main () {
    struct data d[2];
    int i, diferenca_ano = 0, diferenca_mes = 0, diferenca_dia = 0;

    printf("Digite duas data no seguinte formato: dd/mm/aaaa\n");
    for (i = 0; i < 2; i ++) {
        scanf("%d/%d/%d", &d[i].dia, &d[i].mes, &d[i].ano);
         if (d[i].dia > 32 || d[i].dia < 1) {
        printf("Data invalida!");
        }
        else if (d[i].mes > 12 || d[i].mes < 1) {
        printf("Data invalida!");
        }
        else if (d[i].ano < 0) {
        printf("Data invalida!");
        }
    }

    if (d[1].ano == d[0].ano) {
        diferenca_ano = 0;
        if (d[1].mes != d[0].mes) {
            diferenca_mes = abs(d[1].mes - d[0].mes);
        }
        else if (d[1].dia != d[0].dia) {
            diferenca_dia = abs(d[1].dia - d[0].dia);
        }
        printf("A diferenca de tempo foi de %d anos, %d meses e %d dias.", diferenca_ano, diferenca_mes, diferenca_dia);
    }
    else if (d[1].mes == d[0].mes) {
        diferenca_mes = 0;
        if (d[1].ano != d[0].ano) {
            diferenca_ano = abs(d[1].ano - d[0].ano);
        }
        else if (d[1].dia != d[0].dia) {
            diferenca_dia = abs(d[1].dia - d[0].dia);
        }
        printf("A diferenca de tempo foi de %d anos, %d meses e %d dias.", diferenca_ano, diferenca_mes, diferenca_dia);
    }
    else if (d[1].dia == d[0].dia) {
        diferenca_dia = 0;
        if (d[1].ano != d[0].ano) {
            diferenca_ano = abs(d[1].ano - d[0].ano);
        }
        else if (d[1].mes != d[0].mes) {
            diferenca_dia = abs(d[1].mes - d[0].mes);
        }
        printf("A diferenca de tempo foi de %d anos, %d meses e %d dias.", diferenca_ano, diferenca_mes, diferenca_dia);
    }

    else {
        diferenca_ano = abs(d[1].ano - d[0].ano);
        diferenca_mes = abs(d[1].mes - d[0].mes);
        diferenca_dia = abs(d[1].dia - d[0].dia);
    }
    
    printf("A diferenca de tempo foi de %d anos, %d meses e %d dias.", diferenca_ano, diferenca_mes, diferenca_dia);
}
*/

/*12 - Crie uma enumeração representando os dias da semana. Agora, escreva um programa
que leia um valor inteiro do teclado e exiba o dia da semana correspondente.*/

enum Semana {Domingo, Segunda, Terca, Quarta, Quinta, Sexta, Sabado};

int main () {
    int i, valor;
    printf("Digite um numero entre 31 e 1: ");
    scanf("%d", &i);
    if ( i > 31 || i < 1) {
        printf("O numero digitado nao atende aos requisitos!");
        return 0;
    }
    valor = i % 7;
    switch (valor)
    {
    case 0:
        printf("Domingo");
        break;
    case 1:
        printf("Segunda");
        break;
    case 2:
        printf("Terca");
        break;
    case 3:
        printf("Quarta");
        break;
    case 4:
        printf("Quinta");
        break;
    case 5:
        printf("Sexta");
        break;
    case 6:
        printf("Sabado");
        break;
    default:
        break;
    }
}
