//Escrever um algoritmo que realize a potência de A por B, através de multiplicações. Ex.: "4 elevado a 3" -> 4 x 4 x 4

#include <stdio.h>

int main(){

    int i = 1, base, expo, A, pot;

    printf("Digite o numero correspondente a base: \n");
    scanf("%d", &base);

    printf("Digite o numero correspondente ao expoente: \n");
    scanf("%d", &expo);   

    A =  base;

    while(i <= (expo-1)){

        pot = A * base;
        A = pot;
        
        i++;
    }
    
    printf("O resultado da potencia é: %d\n", pot);
}