#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*1 - Crie um programa que leia do teclado seis valores inteiros e em seguida mostra na
tela os valores lidos.*/

/*int main () {
    int valores[6], i; 
    printf("Digite 6 valores inteiros: ");

    for (i = 0; i < 6; i++) {
        scanf("%d", &valores[i]);
    }

    for (i = 0; i < 6; i++) {
        printf("Valor %d: %d\n", i, valores[i]);
    }
}
*/

/*2 - Crie um programa que leia do teclado seis valores inteiros e em seguida mostre na
tela os valores lidos na ordem inversa.*/

/*int main () {
    int valores[6], i, j;
    printf("Digite seis valores: ");

    for (i = 0; i < 6; i++ ) {
        scanf("%d", &valores[i]);
    }

    for (j = 6; j > 0; j--) {
        printf("Valor %d: %d\n", j-1, valores[j]);
    }
}
*/

/*3 - Faça um programa que leia cinco valores e os armazene em um vetor. Em seguida,
mostre todos os valores lidos juntamente com a média dos valores.*/

/*int main () {
    int i, valores[5], soma = 0;
    float media;
    printf("Digite cinco valores: ");

    for (i = 0; i < 5; i++) {
        scanf("%d", &valores[i]);
        soma = soma + valores[i];
    }
    printf("Os valores digitados foram: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", valores[i]);
    }
    media = soma/5.0;
    printf("E a media dos valores digitados foi de: %f", media);
}
*/

/*4 - Faça um programa que possua um array de nome A que armazene seis números
inteiros. O programa deve executar os seguintes passos:
a) Atribua os seguintes valores a esse array: 1, 0, 5, −2, −5, 7.
b) Armazene em uma variável a soma dos valores das posições A[0], A[1] e A[5]
do array e mostre na tela essa soma.
c) Modifique o array na posição 4, atribuindo a essa posição o valor 100.
d) Mostre na tela cada valor do array A, um em cada linha.*/

/*int main () {
    int valores[6] = {1, 0, 5, -2, -5, 7}, i, soma=0;
    
    soma = valores[0] + valores[1] + valores[5];
    printf("A soma vale: %d\n", soma);
    valores[4] = 100;

    for (i = 0; i < 6; i++) {
        printf("%d : %d\n", i, valores[i]);
    }
}
*/

/*5 - Faça um programa que leia um vetor de oito posições. Em seguida, leia também dois
valores X e Y quaisquer correspondentes a duas posições no vetor. Seu programa
deverá exibir a soma dos valores encontrados nas respectivas posições X e Y.*/

/*int main () {
    int valores[8], i, soma=0;

    printf("Digite oito numeros: ");
    for (i = 0; i < 8; i++) {
        scanf("%d", &valores[i]);
    }

    soma = valores[3] + valores[7];

    printf("A soma dos valores %d e %d eh de: %d", valores[3], valores[7], soma);
}
*/

/*6 - Escreva um programa que leia do teclado um vetor de 10 posições. Escreva na tela
quantos valores pares foram armazenados nesse vetor.*/

/*int main () {
    int vetor[10], i, pares=0; 

    printf("Digite 10 numeros: ");

    for (i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
        if (vetor[i] % 2 == 0) {
            pares++;
        }
    }
    printf("Nesse vetor apareceram exatemente %d numeros pares", pares);
}
*/

/*7 - Faça um programa que receba do usuário um vetor X com 10 posições. Em seguida
deverão ser impressos o maior e o menor elemento desse vetor.*/

/*int main () {
    int vetor[10], i, maior, menor;

    printf("Digite 10 valores: ");

    for (i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }

    maior = menor = vetor[0];

    for (i = 0; i < 10; i++) {
        if (maior < vetor[i]) {
            maior = vetor[i];
        }
        if (vetor[i] < menor) {
            menor = vetor[i];
        }
    }
    
    printf("Os maiores e menores valores digitados respectivamente foram: %d e %d", maior, menor);
}
*/

/*8 - Faça um programa que preencha um vetor com 10 números reais. Em seguida,
calcule e mostre na tela a quantidade de números negativos e a soma dos números
positivos desse vetor.*/

/*int main () {
    float vetor[10], soma = 0;
    int i, negativos = 0;

    printf("Digite 10 valores: ");

    for (i = 0; i < 10; i++) {
        scanf("%f", &vetor[i]);
        if (vetor[i] < 0) {
            negativos++;
        }
        else {
            soma = soma + vetor[i];
        }
    }
    
    printf("A quantidade de numeros negativos foi de %d e a soma dos positivos deu %f", negativos, soma);
}
*/

/*9 - Faça um programa que receba do usuário dois arrays, A e B, com 10 números inteiros
cada. Crie um novo array C calculando C = A − B. Mostre na tela os dados
do array C.*/

/*int main () {
    int vetorA[10], vetorB[10], vetorC[10], i;

    printf("Digite 10 valores para o vetor A:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &vetorA[i]);
    }

    printf("Agora digite 10 valores para o vetor B:\n");

    for (i = 0; i < 10; i++) {
        scanf("%d", &vetorB[i]);
    }

    printf("Um novo vetor C da subtracao dos elementos do vetor A - vetor B eh:\n");

    for (i = 0; i < 10; i++) {
        vetorC[i] = vetorA[i] - vetorB[i];
        printf("%d : %d\n", i, vetorC[i]);        
    }
}
*/

/*10 - Faça um programa que preencha um vetor de tamanho 100 com os 100 primeiros
números naturais que não são múltiplos de 7. Ao final, imprima esse vetor na tela.*/

/*int main () {
    int vetor[100], i;

    printf("Nao multiplos de 7: \n");
    for (i = 0; i <= 100; i++) {
            vetor[i] = i;
            if (vetor[i] % 7 == 0) {
                continue;
            }
            printf("%d ", vetor[i]);
        }
}
*/

/*11 - Leia um conjunto de números reais, armazenando-o em vetor. Em seguida, calcule
o quadrado de cada elemento desse vetor armazenando esse resultado em outro
vetor. Os conjuntos têm, no máximo, 20 elementos. Imprima os dois conjuntos
de números.*/

/*int main () {
    float vetorA[20], vetorB[20];
    int i;

    printf("Digite 20 numeros quaisqueres: \n");
    for (i = 0; i <= 20; i++) {
        scanf("%f", &vetorA[i]);
    }
    printf("Vetor A:\n"); 
    for (i = 0; i <= 20; i++) {
        printf("%f ", vetorA[i]);
    }
    printf("\nVetor B:\n");
    for (i = 0; i <= 20; i++) {
        vetorB[i] = vetorA[i] * vetorA [i];
        printf("%f ", vetorB[i]);
    }
}
*/

/*12 - Faça um programa que leia um vetor de 10 posições. Verifique se existem valores
iguais e os escreva na tela.*/

/*int main () {
    int vetor[10], i, j;
    printf("Digite 10 numeros: ");

    for (i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }

    printf("Numeros que apareceram mais de uma vez: ");

    for(i = 0; i < 10; i++) {
        for (j = i + 1; j < 10; j++) {
                if (vetor[i] == vetor[j]) {
                    printf("%d ", vetor[i]);
                }
            }
    }
}
*/

/*13 - Faça um programa para ler 10 números diferentes a serem armazenados em um
vetor. Os números deverão ser armazenados no vetor na ordem em que forem lidos,
sendo que, caso o usuário digite um número que já foi digitado anteriormente,
o programa deverá pedir a ele para digitar outro número. Note que cada valor
digitado pelo usuário deve ser pesquisado no vetor, verificando se ele existe entre
os números que já foram fornecidos. Exiba na tela o vetor final que foi digitado.*/

/*int main () {
    int vetor[10], i, j;
    printf("Digite 10 valores: ");

    for (i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
        for (j = 0; j < i; j++) {
            if (vetor[i] == vetor[j]) {
                printf("Numero ja digitado, digite outro numero: ");
                i--;
            }
        }
    }
    printf("Os valores digitados no vetor foram:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }
}
*/

/*14 - Faça um programa que calcule o desvio-padrão d de um vetor V contendo n números em que m é a média desse vetor. 
Considere n = 10. O vetor v deve ser lido do teclado.
d = raiz 1/n-1 Somatório de i = 0 até n-1 (V[i] - m)*/

int main () {
    int vetor[10], i, soma = 0;
    float media = 0, d = 0, somatorio = 0;

    printf("Digite 10 numeros para o vetor: ");
    for (i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
        soma = soma + vetor[i];
    }
    media = soma/10.0;

    for (i = 0; i < 10; i++) {
        somatorio = pow(vetor[i] - media, 2);  // O livro errou ao não mostrar que é elevado ao quadrado
    }

    d = sqrt(1.0/9.0 * somatorio);

    printf("O desvio padrao desse vetor eh: %f", d);
}

