#include <iostream.h>
#include <conio.h>

void main(){
    int x[5], n, i, aux, troca;
    clrscr();
    //carregando os números no vetor
    for(i=0; i<=4; i++){
        cout<<"Digite o"<<i+1<<"º número:";
        cin>>x[i];
    }
    //ordenado de forma decrescente laço com a quantidade de elementos do vetor e enquanto houver troca
    n = 1;
    troca = 1;
    while(n <= 5 && troca == 1){
        troca = 0;
        for(i=0; i<=3; i++){
            if(x[i] < x[i+1]){
                troca = 1;
                aux = x[i];
                x[i] = x[i+1];
                x[i+1] = aux
            }
        }

        n = n + 1;
    }

    //mostrando o vetor ordenado

    for(i=0; i<=4; i++){
        cout<<i+1<<"º número:"<<x[i]<<"\n";
    }
    getch();
}