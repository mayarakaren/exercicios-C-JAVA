#include <iostream.h>
#include <conio.h>

void main(){
    int x[5];
    int i, j, eleito;
    clrscr();
    //Carregando os números no vetor
    for(i=0; i<=4; i++){
        cout<<"Digite o"<<i+1<<"° número:";
        cin>>x[i];
    }
    //Ordenando de forma crescente, laço com a quantidade de elementos do vetor - 1
    for(i=1; i<=4; i++){
        eleito = x[i];
        j = i - 1;
        //Laço que percorre os elementos à esquerda do númerto eleito ou até encontrar a posição para recolocação do número
        //eleito, respeitando a ordenação procurada
        while (j >= 0 && x[j] > eleito)
        {
            x[j+1] = x[j];
            j = j-1;
        }
        x[j+1] = eleito;
    }
    //mostrando o vetor ordenado
    for(i=0; i<=4; i++){
        cout<<"\n"<<i+1<<"° número:" <<x[i];
    }
    getch();
}