/*Uma empresa quer verificar se um empregado está qualificado para a aposentadoria ou não. Para estar em condições, um dos seguintes requisitos deve ser satisfeito:

ter no mínimo 65 anos de idade
ter trabalhado no mínimo 30 anos
ter no mínimo 65 anos e ter trabalhado no mínimo 25 anos
Fazer um algoritmo que leia:

o número do empregado (código)
o ano do seu nascimento
ano de ingresso na empresa
O programa deve escrever a idade e o tempo de trabalho do empregado e a mensidadem "Requer aposentadoria" ou "Não requer aposentadoria".
*/

#include <stdio.h>

int main(){

    int cod, ano, idade, data, hora;
    char nome[50];

    printf("Digite o nome: \n");
    scanf("%s", &nome);

    printf("Digite o ano de nascimento: \n");
    scanf("%d", &ano);

    printf("Digite o ano de ingresso na empresa: \n");
    scanf("%d", &data);

    idade = 2022 - ano;
    hora = 2022 - data;

    if(idade >= 65 || hora >= 30 || (idade >= 60 && hora >= 25)){

        printf("Idade: %d\n", idade);
        printf("Tempo de trabalho: %d\n", hora);
        printf("-----------------------------------\n");
        printf("Requerer aposentadoria");
    }
    else{

        printf("Idade: %d\n", idade);
        printf("Tempo de trabalho: %d\n", hora);
        printf("-----------------------------------\n");
        printf("Nao requerer aposentadoria");
    }
}