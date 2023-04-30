//Escrever um algoritmo que determine quais e quantos são os divisores de um número n.

#include <stdio.h>

int main(){

    int i = 1, dividir, n, cont = 0;
    double num;

    printf("Digite um numero: ");
    scanf("%d", &n);

    dividir = n;

    printf("Divisores: \n");

    while(dividir >= 1){
        
        num = (n % dividir);

        if(num == 0){
            
            //mostra os divisores e contabiliza eles
            printf("%d\n", dividir);
            cont++;    
        }

        dividir--;
        
        i++;
    }

    printf("Quantidade de divisores: %d", cont);
}