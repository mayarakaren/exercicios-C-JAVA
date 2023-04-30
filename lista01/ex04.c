//Fazer um algoritmo que leia 5 números e mostre a média entre eles.

#include <stdio.h>

int main(){

    int num, i = 1, soma = 0, media;

    while(i <= 5){

        printf("Digite um numero: \n");
        scanf("%d", &num);

        soma = (soma + num);

        if(i == 5){
             media = (soma / 5);
            printf("A media dos numeros eh: %d\n", media);
        }
        
        i++;
    }
}