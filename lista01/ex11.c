/* Um posto está vendendo combustíveis com a seguinte da tabela de descontos:

Álcool acima de 20 litros, 5% por litro
Álcool até 20 litros, desconto de 4% por litro
Gasolina acima de 20 litros, desconto de 6% por litro
Escreva um algoritmo que leia o número de litros vendidos e o tipo de combustível, e calcule e imprima o valor a ser pago pelo cliente, sabendo-se que o preço do litro da gasolina é R$3,30 e o preço do litro é R$2,90.
*/

#include <stdio.h>

int main(){

    double litros, glPreco = 3.30, alPreco = 2.90, preco, finalPreco;
    int tipo;

    printf("Digite o tipo de combustivel: \n 1 - Alcool\n 2 - Gasolina");
    scanf("%d", &tipo);

    printf("Digite a quantidade em litros: \n");
    scanf("%lf", &litros);

    
    if(tipo == 1){

        preco = litros * alPreco;

        if(litros <= 20){

            finalPreco = preco - (preco * 0.04);

            printf("Preco: R$%lf\n", finalPreco);
        }
        else if(litros > 20){

            finalPreco = preco - (preco * 0.05);

            printf("Preco: R$%lf", finalPreco);
        }
    }
    else if(tipo == 2){

        preco = litros * glPreco;

        if(litros <=20){

            finalPreco = preco - (preco * 0.06);

            printf("Preco: R$%lf", finalPreco);
        }
    }
}