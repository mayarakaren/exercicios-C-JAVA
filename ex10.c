/*Uma empresa quer verificar se um empregado está qualificado para a aposentadoria ou não. Para estar em condições, um dos seguintes requisitos deve ser satisfeito:

ter no mínimo 65 anos de idade
ter trabalhado no mínimo 30 anos
ter no mínimo 65 anos e ter trabalhado no mínimo 25 anos
Fazer um algoritmo que leia:

o número do empregado (código)
o ano do seu nascimento
ano de ingresso na empresa
O programa deve escrever a idade e o tempo de trabalho do empregado e a mensagem "Requer aposentadoria" ou "Não requer aposentadoria".
*/

#include <stdio.h>

int main(){

    int code, born, age, ingressDate, workTime;
    char name[50];

    printf("Digite o nome: \n");
    scanf("%s", &name);

    printf("Digite o ano de nascimento: \n");
    scanf("%d", &born);

    printf("Digite o ano de ingresso na empresa: \n");
    scanf("%d", &ingressDate);

    age = 2022 - born;
    workTime = 2022 - ingressDate;

    if(age >= 65 || workTime >= 30 || (age >= 60 && workTime >= 25)){

        printf("Idade: %d\n", age);
        printf("Tempo de trabalho: %d\n", workTime);
        printf("-----------------------------------\n");
        printf("Requerer aposentadoria");
    }
    else{

        printf("Idade: %d\n", age);
        printf("Tempo de trabalho: %d\n", workTime);
        printf("-----------------------------------\n");
        printf("Nao requerer aposentadoria");
    }
}