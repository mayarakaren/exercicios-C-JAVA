/* Um posto está vendendo combustíveis com a seguinte da tabela de descontos:

Álcool acima de 20 litros, 5% por litro
Álcool até 20 litros, desconto de 4% por litro
Gasolina acima de 20 litros, desconto de 6% por litro
Escreva um algoritmo que leia o número de litros vendidos e o tipo de combustível, e calcule e imprima o valor a ser pago pelo cliente, sabendo-se que o preço do litro da gasolina é R$3,30 e o preço do litro é R$2,90.
*/

#include <stdio.h>

int main(){

    double litros, glPrice = 3.30, alPrice = 2.90, price, finalPrice;
    int type;

    printf("Digite o tipo de combustivel: \n 1 - Alcool\n 2 - Gasolina");
    scanf("%d", &type);

    printf("Digite a quantidade em litros: \n");
    scanf("%lf", &litros);

    
    if(type == 1){

        price = litros * alPrice;

        if(litros <= 20){

            finalPrice = price - (price * 0.04);

            printf("Preco: R$%lf\n", finalPrice);
        }
        else if(litros > 20){

            finalPrice = price - (price * 0.05);

            printf("Preco: R$%lf", finalPrice);
        }
    }
    else if(type == 2){

        price = litros * glPrice;

        if(litros <=20){

            finalPrice = price - (price * 0.06);

            printf("Preco: R$%lf", finalPrice);
        }
    }
}