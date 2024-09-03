/*Escreva um programa que mostre o tamanho em byte que cada tipo de dados
ocupa na memória: char, int, float, double.*/

#include <stdio.h>

int main () {
    printf("Tamanho de char: %d bytes\n", sizeof(char));
    printf("Tamanho de int: %d bytes\n", sizeof(int));
    printf("Tamanho de float: %d bytes\n", sizeof(float));
    printf("Tamanho de double: %d bytes\n", sizeof(double));
}