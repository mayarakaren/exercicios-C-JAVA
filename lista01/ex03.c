//Escrever um algoritmo que leia n números e efetue a multiplicação entre o atual e o ant. A condição de saída será quando o usuário digitar 0.

#include <stdio.h>

int main(){

    int num, atual, ant = 1, res, parar = 0, i = 0;

    while(n != parar){
        
        printf("Digite um numero: ");
        scanf("%d", &n);
        
        atual = num;
       
        if(atual != parar){
            res = atual * ant;
            ant = res;
        } 
        printf("%d\n", res);

        i++;
    }

}