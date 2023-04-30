#include <iostream.h>
#include <conio.h>

int x[11];

void heap_fica(int i, int qtde){
    int f_esq, f_dir, maior, aux;
    maior = i;
    if(2*i+1 <= qtde){
        //o nó que está sendo analisado tem filhos para esquerda e direita
        f_esq = 2*i+1;
        f_dir = 2*i;
        if(x[f_esq] >= x[f_dir] && x[f_esq] > x[i])
            maior = 2*i+1;
        else if(x[f_dir] > x[f_esq] && x[f_dir] > x[i])
            maior = 2*i;
    }
    else if(2*i <= qtde){
        //o nó que está sendo analisado tem filho apenas para a direita
        f_dir=2*i;
        if(x[f_dir] > x[i]){
            maior = 2*i;
        }
        if(maior != 1)
            aux= x[i];
            x[i] = x[maior];
            x[maior] = aux;
            heap_fica(maior, qtde)
    }
}
    
void transforma_heap(int qtde){
    int i, pai, aux;
    for(i=qtde/2; i>=1; i--){
            heap_fica(i, qtde)
    }
}
    
void ordena(int qtde){
    int i, aux, ultima_posi;
        for(i=qtde; i>=2; i--){
            aux = x[1];
            x[1] = x[i];
            x[i] = aux;
            ultima_posi = i - 1;
            heap_fica(1, ultima_posi);
        }
}

void main(){
    int i, qtde;
    clrscr();
    //carregando os números no vetor

    for(i=1; i<=10; i++){
        cout<<"Digite o"<<i<<"° número:";
        cin>>x[i];
    }
    //transforma o vetor digitado em um heap cada nó pais é maior que seus filhos
    qtde=10;
    transforma_heap(qtde);
    //ordenando de forma crescente
    ordena(qtde);
    //mostrando o vetor ordenado
    for(i=1; i<=10; i++){
        cout<<"\n"<<i<<"° número:" <<x[i];
    }
    getch();
}
