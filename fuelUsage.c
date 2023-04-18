/*
Faça um algoritmo para calcular a quantidade de galões cheios de 5 litros de combustível necessária para
uma viagem em um automóvel que faz 12 Km/l; o tempo gasto e a velocidade média na viagem são
informados pelo usuário
*/
#include <stdio.h>

int main() {
    // Variable Declaration
    double  cVelocity = 12.0,       // Var to set Car Velocity
            vMedia;                 // Var to set car velocity average
    
    int     gallons = 5,            // Var to set gallons capacity
            vTime,                  // Var to pick hours spend in travel
            qtdGallons;             // Var to pick gallons amount

    // Data input
    printf("Digite a quantidade horas gasta em sua viagem: ");
    scanf("%d", &vTime);
    printf("Digite a Velocidade Média: ");
    scanf("%lf", &vMedia);

    // Processing
    qtdGallons = (vTime * vMedia) / cVelocity / gallons;

    // Data Output
    printf("Para uma viagem de %d horas na velocidade de %.1lf Km/h, são necessários %d galões cheios\n", vTime, vMedia, qtdGallons);
    return 0;
}


