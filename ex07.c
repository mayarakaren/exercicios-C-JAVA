//Escrever um algoritmo que calcule e imprima a tabuada do 8.

#include <stdio.h>

int main(){

    int tab = 8, i = 1, res;

    printf("Se liga na tabuada do 8: \n");

    while(i <= 10){

        res = tab * i;
        printf("8 x %d = %d\n", i, res);

        i++;
    }
}