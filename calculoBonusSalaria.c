/******************************************************************************

Uma empresa precisa calcular o valor do bônus a ser pago aos seus funcionários. 
Elabore um algoritmo para calcular e apresentar o bônus a partir do salário informado. 
O valor do bônus depende do tipo do cargo (A ou B) e da faixa de salário de acordo com a seguinte tabela:

*******************************************************************************/
#include <stdio.h>

int main()
{
    // Variable Declaration
    char    categoriaSalario;       // Variável para categoria do salario (A) ou (B)
    float   salario,                // Variável para Salário
            bonus;                  // Variável para o Bônus
    
    // Data input
    printf("Digite o seu salário: \n");
    scanf("%f", &salario);          // Armazenar o valor do Salário
    
    printf("Qual a categoria do seu Salário: Tipo (A) ou Tipo (B)? \n");
    scanf("%s", &categoriaSalario); // Armazenar o tipo do salário
    
    //Processing
    if(categoriaSalario == 'A' || categoriaSalario == 'a') {            // Categoria tipoA
        if(salario <= 1000.00) {
            bonus = 500.00;
            //Output
            printf("Para salário igual a %.2f e tipo de cargo igual a (%c), o valor do bônus é %.2f", salario, categoriaSalario, bonus);
        } else if (salario > 1000.01 && salario <= 2500.00) {
            bonus = 250.00;
            //Output
            printf("Para salário igual a %.2f e tipo de cargo igual a (%c), o valor do bônus é %.2f", salario, categoriaSalario, bonus);
        }   else if (salario > 2500.00 && salario <= 5000.00) {
            bonus = 100.00;
            //Output
            printf("Para salário igual a %.2f e tipo de cargo igual a (%c), o valor do bônus é %.2f", salario, categoriaSalario, bonus);
        } else {
            bonus = 50.00;
            //Output
            printf("Para salário igual a %.2f e tipo de cargo igual a (%c), o valor do bônus é %.2f", salario, categoriaSalario, bonus);
        }
    } else if( categoriaSalario == 'B' || categoriaSalario == 'b'){     // Categoria tipoB
        if ( salario <= 2000.00){
            bonus = 500.00;
            //Output
            printf("Para salário igual a %.2f e tipo de cargo igual a (%c), o valor do bônus é %.2f", salario, categoriaSalario, bonus);
        } else if(salario > 2000.01 && salario <= 5000.00){
            bonus = 200.00;
            //Output
            printf("Para salário igual a %.2f e tipo de cargo igual a (%c), o valor do bônus é %.2f", salario, categoriaSalario, bonus);
        } else {
            bonus = 100.00;
            //Output
            printf("Para salário igual a %.2f e tipo de cargo igual a (%c), o valor do bônus é %.2f", salario, categoriaSalario, bonus);
        }
    } else {                                                            // Caso a Categoria seja Inválida
        printf("Categoria inválida, favor verificar \n");
        return 1;
    }
    
    return 0;
}

