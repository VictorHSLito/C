/*Elabore uma função que receba duas strings como parâmetros e verifique se a segunda
string ocorre dentro da primeira. Use aritmética de ponteiros para acessar
os caracteres das strings.*/

#include <stdio.h>

int verifica (char *string1, char *string2){
    int i, j, auxiliar = 0;
    for(i = 0, j = 0; (*(string1 + i)) != '\0'; i++){
        while( (*(string1 + i)) == (*(string2 + j)) ){
            i++;
            j++;
            if( (*(string2 + j)) == '\n' || (*(string2 + j)) == '\0')
                return 1;
            else if( (*(string1 + i)) != (*(string2 + j)) )
                auxiliar = 0;
        }
    }
    return auxiliar;
}

int main () {
    char string1[20], string2[20];
    printf("Digite uma string: ");
    fgets(string1, sizeof(string1), stdin);
    setbuf(stdin, NULL);
    printf("Agora digite outra string: ");
    fgets(string2, sizeof(string2), stdin);

    int valor = verifica(string1, string2);
    if (valor == 1) {
        printf("A segunda string esta contida na primeira");
    }
    else {
        printf("A segunda string nao esta contida na primeira!");
    }
}