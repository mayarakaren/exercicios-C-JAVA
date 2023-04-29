//Escrever um algoritmo que realize a potência de A por B, através de multiplicações. Ex.: "4 elevado a 3" -> 4 x 4 x 4

#include <stdio.h>

int main(){

    int i = 1, a, b, newA, potency;

    printf("Digite o numero correspondente a base: \n");
    scanf("%d", &a);

    printf("Digite o numero correspondente ao expoente: \n");
    scanf("%d", &b);   

    newA =  a;

    while(i <= (b-1)){

        potency = newA * a;
        newA = potency;
        
        i++;
    }
    
    printf("O resultado da potencia é: %d\n", potency);
}