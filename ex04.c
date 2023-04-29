//Fazer um algoritmo que leia 5 números e mostre a média entre eles.

#include <stdio.h>

int main(){

    int n, i = 1, sum = 0, avg;

    while(i <= 5){

        printf("Digite um numero: \n");
        scanf("%d", &n);

        sum = (sum + n);

        if(i == 5){
             avg = (sum / 5);
            printf("A media dos numeros eh: %d\n", avg);
        }
        
        i++;
    }
}