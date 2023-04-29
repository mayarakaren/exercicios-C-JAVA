//Escrever um algoritmo que determine quais e quantos são os divisores de um número n.

#include <stdio.h>

int main(){

    int i = 1, divider, n, count = 0;
    double rest;

    printf("Digite um numero: ");
    scanf("%d", &n);

    divider = n;

    printf("Divisores: \n");

    while(divider >= 1){
        
        rest = (n % divider);

        if(rest == 0){
            
            //mostra os divisores e contabiliza eles
            printf("%d\n", divider);
            count++;    
        }

        divider--;
        
        i++;
    }

    printf("Quantidade de divisores: %d", count);
}