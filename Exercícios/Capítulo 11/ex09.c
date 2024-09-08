/*Crie uma função que receba uma string e retorne o ponteiro para essa string invertida.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *inverteString(char frase[]) {
    int len = strlen(frase);
    char *s = malloc((len + 1)*sizeof(char));
    int j = 0;

    for (int i = len - 1; i>= 0; i--) {
        s[j] = frase[i];
        j++;
    }
    s[j] = '\0';
    return s;
}

int main()
{
    char *string = malloc(30*sizeof(char));
    char *string2 = malloc(30*sizeof(char));
    printf("Digite uma frase: ");

    fgets(string, 30, stdin);

    printf("Frase digitada: %s\n", string);

    string2 = inverteString(string);

    printf("Frase invertida: %s\n", string2);

    free(string);
    free(string2);

    string = NULL;
    string2 = NULL;
    return 0;
}
