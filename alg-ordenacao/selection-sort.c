#include <iostream.h>
#include <conio.h>

void main(){
    int x[5];
    int i, j, eleito, menor, pos;
    clrscr();
    //carregando os números no vetor
    for(i=0; i<=4; i++){
        cout<<"Digite o "<<i+1<<"° número:";
        cin>x[i];
    }
    //ordenando de forma crescente laço que percorre da 1° posição à penúltima posição do vetor
    //elegendo um número para ser comparado
    for(i=0; i<=3; i++){
        eleito x[i];
        //encontrando o menor número à direitado eleito com sua respectiva posição, posição do eleito = 1
        //primeiro número à direita do eleito na posição i+1
        menor = x[i+1]
        pos = i + 1;
        //laço que percorre os elementos que estão à direita do número eleito, retornando o menor número à direita e sua posição
        for(j=i+1; j<=4; j++){
            if(x[j] < menor){
                menor = x[j];
                pos = j;
            }
        }
        //troca do número eleito com o número da posição pos o número da posição pos é o menor número à direita do número eleito
        if(menor < eleito){
            x[i] = x[pos];
            x[pos] = eleito;
        }
    }
    //mostrando o vetor ordenado
    for(i=0; i<=4; i++){
        cout<<"\n"<<i+1<<"° número:"<<x[i];
    }
    getch();
}