#include <iostream.h>
#include <conio.h>

void intercala(int x[], int inicio, int fim, int meio){
    int poslivre, inicio_vetor1, inicio_vetor2, i;
    int aux[10];
    inicio_vetor1 = inicio;
    inicio_vetor2 = meio + 1;
    poslivre = inicio;

    while(inicio_vetor1 <= meio && inicio_vetor2 <= fim){
        if(x[inicio_vetor1] <= x[inicio_vetor2]){
            aux[poslivre] = x[inicio_vetor1];
            inicio_vetor1 = inicio_vetor1 + 1;
        }
        else{
            aux[poslivre] = x{inicio_vetor2};
            inicio_vetor2 = inicio_vetor2 + 1;
        }
        poslivre = poslivre + 1;
    }
    //se ainda existem números no primeiro vetor que não foram intercalados

    for(i=inicio_vetor1; i<=meio; i++){
        aux[poslivre] = x[i];
        poslivre = poslivre + 1;
    }
    //se ainda existem números no segundo vetor que não foram intercalados

    for(i=inicio_vetor2; i<=fim; i++){
        aux[poslivre] = x[i];
        poslivre = poslivre + 1;
    }
    //retorna os valores do vetor aux para o vetor x
    
    for(i=inicio; i<=fim; i++){
        x[i] = aux[i];
    }
}

void merge(int x[], int inicio, int fim){
    int meio;
    if(inicio < fim){
        meio = (inicio + fim)/2;
        merge(x, inicio, meio);
        merge(x, meio+1,fim);
        intercala(x, inicio, fim, meio);
    }
}

void main(){
    int x[10];
    int i;
    clrscr();

    //carregando os números no vetor
    
    for(i=0; i<=9; i++){
        cout<<"Digite o"<<i+1<<"° número:";
        cin>>x[i];
    }

    //ordenando o vetor de forma crescente
    merge(x, 0, 9);
    //mostrando o vetor ordenado
    for(i=0; i<=9; i++){
        cout<<"\n"<<i+1<<"° número:"<<x[i];
    }
    getch();
}