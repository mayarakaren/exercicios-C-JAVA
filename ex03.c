//Escrever um algoritmo que leia n números e efetue a multiplicação entre o atual e o anterior. A condição de saída será quando o usuário digitar 0.

#include <stdio.h>

int main(){

    int n, atual, anterior = 1, result, stop = 0, i = 0;

    while(n != stop){
        
        printf("Digite um numero: ");
        scanf("%d", &n);
        
        atual = n;
       
        if(atual != stop){
            result = atual * anterior;
            anterior = result;
        } 
        printf("%d\n", result);

        i++;
    }

}