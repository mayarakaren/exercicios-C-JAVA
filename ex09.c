//Escrever um algoritmo para calcular o índice de massa corpórea (IMC) e mostrar os resultados do índice e da condição de acordo com o sexo.

#include <stdio.h>

int main(){
    
    int sexo;

    double alt, peso, imc, 
    fem1 = 19.1, 
    masc1 = 20.7, 
    fem2 = 25.8, 
    masc2 = 26.4, 
    fem3 = 27.3, 
    mas3 = 27.8,
    fem4 = 32.3,
    masc4 = 31.1;

    printf("Digite o codigo correspondente ao sexo: \n 1 - Feminino\n 2 - Masculino\n");
    scanf("%d", &sexo);

    printf("Digite o peso: \n");
    scanf("%lf", &peso);

    printf("Digite a alt: \n");
    scanf("%lf", &alt);

    imc = (peso / pow(alt, 2));
    
    printf("IMC = %lfkg/m2\n", imc);

    if(sexo == 1){

        if (imc < fem1)
        {

           printf("Abaixo do peso"); 
        } 
        else if((imc == fem1 || imc > fem1) && (imc < fem2 || imc == fem2)){

           printf("Peso normal"); 
        }
        else if((imc > fem2) && (imc < fem3 || imc == fem3)){

           printf("Marginalmente acima do peso ideal"); 
        }  
        else if((imc > fem3) && (imc < fem4 || imc == fem4)){

           printf("Acima do peso ideal"); 
        }  
        else if(imc > fem4){

           printf("Obesa"); 
        }  
    } 
    if(sexo == 2){

        if (imc < masc1)
        {

           printf("Abaixo do peso"); 
        } 
        else if((imc == masc1 || imc > masc1) && (imc < masc2 || imc == masc2)){

           printf("Peso normal"); 
        }
        else if((imc > masc2) && (imc < mas3 || imc == mas3)){

           printf("Marginalmente acima do peso ideal"); 
        }  
        else if((imc > mas3) && (imc < masc4 || imc == masc4)){

           printf("Acima do peso ideal"); 
        }  
        else if(imc > masc4){

           printf("Obeso"); 
        }  
    } 

}