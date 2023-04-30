//Escrever um algoritmo que calcule e escreva a média aritmética dos números inteiros entre 15 e 100 (inclusive ambos).

#include <stdio.h>

int main(){

    int i = 0, soma, media;

    while(i <= 100){

        soma = 15 + (15 + i);

        i++;
    }

    media = soma / (100 - 14);

    printf("A media aritmetica dos numeros entre 15 e 100 (incluindo eles) eh: %d\n", media);

}